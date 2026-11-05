package AlyssaModel
  package Components
    model VehicleBody
      import Modelica.Units.SI;
      parameter SI.Mass vehicleMass = vehicleParams.vehicleMass;
      parameter SI.Inertia Ixx = vehicleParams.Ixx;
      parameter SI.Inertia Iyy = vehicleParams.Iyy;
      parameter SI.Inertia Izz = vehicleParams.Izz;
      Modelica.Mechanics.MultiBody.Parts.Body body(I_11 = Ixx, I_22 = Iyy, I_33 = Izz, r_CM = {0, 0, 0}, m = vehicleParams.mSprung) annotation(
        Placement(transformation(origin = {0, 22}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a chassisFrame annotation(
        Placement(transformation(origin = {0, -100}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {6, -84}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a subFrameFront annotation(
        Placement(transformation(origin = {-100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-100, 8}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a subFrameRear annotation(
        Placement(transformation(origin = {100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {100, 8}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Parts.FixedTranslation fixedTranslationFront(r = {-vehicleParams.a, 0, 0}) annotation(
        Placement(transformation(origin = {-50, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Parts.FixedTranslation fixedTranslationRear(r = {vehicleParams.b, 0, 0}) annotation(
        Placement(transformation(origin = {50, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
      parameters vehicleParams annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
      VehicleAero aero annotation(
        Placement(transformation(origin = {-54, 72}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(body.frame_a, chassisFrame) annotation(
        Line(points = {{0, 12}, {0, -100}}, color = {95, 95, 95}));
      connect(subFrameFront, fixedTranslationFront.frame_a) annotation(
        Line(points = {{-100, 0}, {-60, 0}}));
      connect(fixedTranslationFront.frame_b, body.frame_a) annotation(
        Line(points = {{-40, 0}, {0, 0}, {0, 12}}, color = {95, 95, 95}));
      connect(fixedTranslationRear.frame_a, subFrameRear) annotation(
        Line(points = {{60, 0}, {100, 0}}, color = {95, 95, 95}));
      connect(fixedTranslationRear.frame_b, body.frame_a) annotation(
        Line(points = {{40, 0}, {0, 0}, {0, 12}}, color = {95, 95, 95}));
      connect(aero.frame_a, body.frame_a) annotation(
        Line(points = {{-47, 72}, {0, 72}, {0, 12}}, color = {95, 95, 95}));
      annotation(
        Icon(coordinateSystem(preserveAspectRatio = true, extent = {{-100, -100}, {100, 100}}), graphics = {Rectangle(extent = {{-100, -100}, {100, 100}}, lineColor = {0, 0, 0}, fillColor = {255, 255, 255}, fillPattern = FillPattern.Solid), Bitmap(extent = {{-90, -90}, {90, 90}}, fileName = "modelica://AlyssaModel/Resources/Images/Lightning_McQueen.png"), Text(extent = {{-100, -135}, {100, -105}}, textString = "%name")}));
    end VehicleBody;

    model VehicleAero
      import Modelica.Units.SI;
      parameter Real Cl_f = 2.5 "front downforce coef" annotation(
        Dialog);
      parameter Real Cl_r = 2.5 "rear downforce coef" annotation(
        Dialog);
      parameter SI.Area A = 1.0 "frontal area of the vehicle" annotation(
        Dialog);
      parameter Real Cd = 1.2 "drag coef of the vehicle" annotation(
        Dialog);
      parameter Real rho = 1.225 "air density" annotation(
        Dialog);
      parameter SI.Position xCoPF = 1.5 "front CoP" annotation(
        Dialog);
      parameter SI.Position xCoPR = -1.5 "rear CoP" annotation(
        Dialog);
      parameter SI.Position zCoP = -0.30 "aero center height" annotation(
        Dialog);
      parameter SI.Velocity vEps = 0.1;
      Modelica.Blocks.Interfaces.RealOutput downforceFront(unit = "N") annotation(
        Placement(transformation(origin = {100, 70}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {104, 80}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput downforceRear(unit = "N") annotation(
        Placement(transformation(origin = {100, 28}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {72, 6}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput dragForce(unit = "N") annotation(
        Placement(transformation(origin = {100, -52}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {14, -14}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_a annotation(
        Placement(transformation(origin = {100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {66, 4}, extent = {{-16, -16}, {16, 16}})));
      SI.Velocity vx "chassis vx";
    protected
      SI.Velocity vBody[3];
    equation
      vBody = Modelica.Mechanics.MultiBody.Frames.resolve2(frame_a.R, der(frame_a.r_0));
      vx = vBody[1];
      dragForce = -0.5*rho*(vx^2)*A*Cd;
// negative = slowing vehicle down longitudinally
      downforceFront = 0.5*rho*(vx^2)*A*Cl_f;
// positive = pushing into the ground
      downforceRear = 0.5*rho*(vx^2)*A*Cl_r;
      frame_a.f = -{dragForce, 0, downforceFront + downforceRear};
      frame_a.t = -(cross({xCoPF, 0, zCoP}, {0, 0, downforceFront}) + cross({xCoPR, 0, zCoP}, {0, 0, downforceRear}) + cross({0, 0, zCoP}, {dragForce, 0, 0}));
      annotation(
        Icon(coordinateSystem(preserveAspectRatio = true, extent = {{-100, -100}, {100, 100}}), graphics = {Rectangle(extent = {{-100, -100}, {100, 100}}, lineColor = {0, 0, 0}, fillColor = {255, 255, 255}, fillPattern = FillPattern.Solid), Bitmap(extent = {{-90, -90}, {90, 90}}, fileName = "modelica://AlyssaModel/Resources/Images/f1 aero reference 1.png"), Text(extent = {{-100, -135}, {100, -105}}, textString = "%name")}));
    end VehicleAero;

    model FrontSuspension
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a subFrameFront annotation(
        Placement(transformation(origin = {100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {100, 0}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_bL annotation(
        Placement(transformation(origin = {0, -100}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {0, -100}, extent = {{-16, -16}, {16, 16}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_bR annotation(
        Placement(transformation(origin = {0, 100}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {0, 100}, extent = {{-16, -16}, {16, 16}}, rotation = -90)));
      Modelica.Blocks.Interfaces.RealInput delta(unit = "rad") annotation(
        Placement(transformation(origin = {-100, 70}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-72, 58}, extent = {{-20, -20}, {20, 20}})));
      parameters vehicleParams annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
  RackSteering steering annotation(
        Placement(transformation(origin = {-50, 10}, extent = {{-10, -10}, {10, 10}})));
  Suspension.DoubleWishboneCorner cornerR(side = 1, isFront = true)  annotation(
        Placement(transformation(origin = {-20, 50}, extent = {{-10, -10}, {10, 10}})));
  Suspension.DoubleWishboneCorner cornerL(side = -1, isFront = true)  annotation(
        Placement(transformation(origin = {-20, -50}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(steering.chassisConnect, subFrameFront) annotation(
        Line(points = {{-58, 8}, {100, 8}, {100, 0}}, color = {95, 95, 95}));
      connect(delta, steering.delta) annotation(
        Line(points = {{-100, 70}, {-56, 70}, {-56, 14}}, color = {0, 0, 127}));
      connect(steering.tieRodInnerR, cornerR.tieRodInner) annotation(
        Line(points = {{-50, 14}, {-40, 14}, {-40, 56}, {-30, 56}}, color = {95, 95, 95}));
      connect(cornerR.chassisConnect, subFrameFront) annotation(
        Line(points = {{-32, 42}, {100, 42}, {100, 0}}, color = {95, 95, 95}));
      connect(cornerR.wheelConnect, frame_bR) annotation(
        Line(points = {{-12, 50}, {0, 50}, {0, 100}}, color = {95, 95, 95}));
  connect(cornerL.wheelConnect, frame_bL) annotation(
        Line(points = {{-12, -50}, {0, -50}, {0, -100}}, color = {95, 95, 95}));
  connect(steering.tieRodInnerL, cornerL.tieRodInner) annotation(
        Line(points = {{-52, 4}, {-30, 4}, {-30, -44}}, color = {95, 95, 95}));
  connect(cornerL.chassisConnect, subFrameFront) annotation(
        Line(points = {{-32, -58}, {100, -58}, {100, 0}}, color = {95, 95, 95}));
    end FrontSuspension;

    model SteeringComputation
      import Modelica.Units.SI;
      Modelica.Blocks.Interfaces.RealInput delta annotation(
        Placement(transformation(origin = {-100, 70}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-48, 50}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput deltaL annotation(
        Placement(transformation(origin = {100, 50}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {110, 36}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput deltaR annotation(
        Placement(transformation(origin = {100, 10}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {92, -22}, extent = {{-10, -10}, {10, 10}})));
      SI.Angle corr "ackermann correction";
      parameters vehicleParams annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
    equation
      corr = vehicleParams.ackermann*0.5*(vehicleParams.tf/vehicleParams.wheelbase)*delta^2;
      deltaL = delta - corr;
      deltaR = delta + corr;
    end SteeringComputation;

    model RearSuspension
      parameters vehicleParams annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a subFrameRear annotation(
        Placement(transformation(origin = {-100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-100, 0}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_bL annotation(
        Placement(transformation(origin = {0, -100}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {0, -100}, extent = {{-16, -16}, {16, 16}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_bR annotation(
        Placement(transformation(origin = {0, 100}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {0, 100}, extent = {{-16, -16}, {16, 16}}, rotation = -90)));
  FixedToeLinks toeLinks annotation(
        Placement(transformation(origin = {-50, 2}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Constant deltaValue(k = 0)  annotation(
        Placement(transformation(origin = {-90, 70}, extent = {{-10, -10}, {10, 10}})));
  Suspension.DoubleWishboneCorner cornerR(side = 1, isFront = false)  annotation(
        Placement(transformation(origin = {-20, 50}, extent = {{-10, -10}, {10, 10}})));
  Suspension.DoubleWishboneCorner cornerL(side = -1, isFront = false)  annotation(
        Placement(transformation(origin = {-18, -50}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(subFrameRear, toeLinks.chassisConnect) annotation(
        Line(points = {{-100, 0}, {-58, 0}}));
      connect(deltaValue.y, toeLinks.delta) annotation(
        Line(points = {{-78, 70}, {-56, 70}, {-56, 6}}, color = {0, 0, 127}));
      connect(cornerR.wheelConnect, frame_bR) annotation(
        Line(points = {{-12, 50}, {0, 50}, {0, 100}}, color = {95, 95, 95}));
      connect(toeLinks.tieRodInnerR, cornerR.tieRodInner) annotation(
        Line(points = {{-50, 6}, {-44, 6}, {-44, 56}, {-30, 56}}, color = {95, 95, 95}));
      connect(cornerR.chassisConnect, subFrameRear) annotation(
        Line(points = {{-32, 42}, {-100, 42}, {-100, 0}}, color = {95, 95, 95}));
  connect(cornerL.wheelConnect, frame_bL) annotation(
        Line(points = {{-10, -50}, {0, -50}, {0, -100}}, color = {95, 95, 95}));
  connect(toeLinks.tieRodInnerL, cornerL.tieRodInner) annotation(
        Line(points = {{-52, -4}, {-28, -4}, {-28, -44}}, color = {95, 95, 95}));
  connect(cornerL.chassisConnect, subFrameRear) annotation(
        Line(points = {{-30, -58}, {-100, -58}, {-100, 0}}, color = {95, 95, 95}));
    end RearSuspension;

    model Steering
      parameter Modelica.Mechanics.MultiBody.Types.Axis nSteer = {0, 0, 1} "steer axis";
      AlyssaModel.Components.SteeringComputation steeringComputation annotation(
        Placement(transformation(origin = {-49, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.Rotational.Sources.Position posL(exact = true) annotation(
        Placement(transformation(origin = {-10, -30}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.Rotational.Sources.Position posR(exact = true) annotation(
        Placement(transformation(origin = {-10, 30}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Joints.Revolute steerL(n = nSteer, useAxisFlange = true) annotation(
        Placement(transformation(origin = {39, -61}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
      Modelica.Mechanics.MultiBody.Joints.Revolute steerR(n = nSteer, useAxisFlange = true) annotation(
        Placement(transformation(origin = {39, 59}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
      Modelica.Blocks.Interfaces.RealInput delta(unit = "rad") annotation(
        Placement(transformation(origin = {-101, 61}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-41, -3}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_bR annotation(
        Placement(transformation(origin = {0, 99}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {42, 83}, extent = {{-16, -16}, {16, 16}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_bL annotation(
        Placement(transformation(origin = {1, -100}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {51, -74}, extent = {{-16, -16}, {16, 16}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_aR annotation(
        Placement(transformation(origin = {100, 60}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {94, 58}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_aL annotation(
        Placement(transformation(origin = {100, -60}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {98, -60}, extent = {{-16, -16}, {16, 16}})));
    equation
      connect(delta, steeringComputation.delta) annotation(
        Line(points = {{-100, 62}, {-54, 62}, {-54, 6}}, color = {0, 0, 127}));
      connect(steeringComputation.deltaL, posL.phi_ref) annotation(
        Line(points = {{-38, 4}, {-22, 4}, {-22, -30}}, color = {0, 0, 127}));
      connect(steeringComputation.deltaR, posR.phi_ref) annotation(
        Line(points = {{-40, -2}, {-22, -2}, {-22, 30}}, color = {0, 0, 127}));
      connect(posR.flange, steerR.axis) annotation(
        Line(points = {{0, 30}, {40, 30}, {40, 50}}));
      connect(posL.flange, steerL.axis) annotation(
        Line(points = {{0, -30}, {39, -30}, {39, -71}}));
      connect(frame_bR, steerR.frame_b) annotation(
        Line(points = {{0, 100}, {30, 100}, {30, 60}}));
      connect(frame_bL, steerL.frame_b) annotation(
        Line(points = {{2, -100}, {30, -100}, {30, -60}}));
      connect(steerR.frame_a, frame_aR) annotation(
        Line(points = {{50, 60}, {100, 60}}, color = {95, 95, 95}));
      connect(steerL.frame_a, frame_aL) annotation(
        Line(points = {{50, -60}, {100, -60}}, color = {95, 95, 95}));
    end Steering;

    package Suspension
      partial model BaseCorner
        parameter Integer side "+1 = right, -1 = left; mirrors toe, camber, hardpoints";
        parameter Boolean isFront "true = use front_* hardpoints, false = rear_*";
        Modelica.Mechanics.MultiBody.Interfaces.Frame_a chassisConnect annotation(
          Placement(transformation(origin = {-100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-120, -74}, extent = {{-16, -16}, {16, 16}})));
        Modelica.Mechanics.MultiBody.Interfaces.Frame_b wheelConnect annotation(
          Placement(transformation(origin = {100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {74, 4}, extent = {{-16, -16}, {16, 16}})));
        Modelica.Mechanics.MultiBody.Interfaces.Frame_a tieRodInner annotation(
          Placement(transformation(origin = {-100, -40}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-104, 50}, extent = {{-16, -16}, {16, 16}})));
      equation

      end BaseCorner;

      package Hardpoints
        record BaseHardpoints
          import Modelica.Units.SI;
          import Modelica.Units.Conversions.from_deg;
          
          parameter SI.Position front_rWC[3] = {0, 1.0, 0} "subframe -> wheel center position, right side";
          parameter SI.Position front_rUBJ[3] = {-0.02, 0.85, -0.20} "upper ball joint";
          parameter SI.Position front_rLBJ[3] = {0.02, 0.94, 0.15} "lower ball joint (defines kp axis)";
          parameter SI.Position front_rTieOuter[3] = {-0.12, 0.92, 0.10} "outer tie rod ball, on the knuckle";
          parameter SI.Position front_rTieInner[3] = {-0.12, 0.40, 0.10} "inner tie rod ball, on the rack end";
          parameter SI.Angle front_staticCamber = from_deg(0);
          parameter SI.Angle front_staticToe = from_deg(0);
          
          parameter SI.Position rear_rWC[3] = {0, 1.0, 0} "subframe -> wheel center position, right side";
          parameter SI.Position rear_rUBJ[3] = {0, 0.87, -0.20} "upper ball joint";
          parameter SI.Position rear_rLBJ[3] = {0, 0.95, 0.15} "lower ball joint (defines kp axis)";
          parameter SI.Position rear_rTieOuter[3] = {-0.10, 0.93, 0.08} "outer tie rod ball, on the knuckle";
          parameter SI.Position rear_rTieInner[3] = {-0.10, 0.35, 0.08} "inner tie rod ball, on the rack end";
          parameter SI.Angle rear_staticCamber = from_deg(-1.2);
          parameter SI.Angle rear_staticToe = from_deg(0.15);
          // hardpoints for double wishbone
          parameter SI.Position front_rUCAf[3] = {0.15, 0.51, -0.20} "position of the front upper control arm, front pivot";
          parameter SI.Position front_rUCAr[3] = {-0.15, 0.51, -0.20} "front upper control arm, rear pivot";
          parameter SI.Position front_rLCAf[3] = {0.15, 0.39, 0.15};
          parameter SI.Position front_rLCAr[3] = {-0.15, 0.39, 0.15};
          parameter SI.Position front_rSpringChassis[3] = {0, 0.62, -0.25};
          parameter SI.Position front_rSpringArm[3] = {0, 0.78, 0.14};
          
          parameter SI.Position rear_rUCAf[3] = {0.15, 0.47, -0.20};
          parameter SI.Position rear_rUCAr[3] = {-0.15, 0.47, -0.20};
          parameter SI.Position rear_rLCAf[3] = {0.15, 0.33, 0.15};
          parameter SI.Position rear_rLCAr[3] = {-0.15, 0.33, 0.15};
          parameter SI.Position rear_rSpringChassis[3] = {0, 0.65, -0.25};
          parameter SI.Position rear_rSpringArm[3] = {0, 0.80, 0.14};
          
          
        
        end BaseHardpoints;
      end Hardpoints;

      partial model PartialUprightCorner
        extends AlyssaModel.Components.Suspension.BaseCorner;
        
        import Modelica.Units.SI;
        
        parameter SI.Position rKingpinTop[3] = {-0.02, 0.85, -0.20} "right upper ball joint position";
        parameter Real nKingpin[3] = {0.110, 0.248, 0.963} "kingpin direction, right";
        parameter SI.Position rWC[3] = {0, 1.0, 0} "wheel center, right side";
        parameter SI.Position rTieOuter[3] = {-0.12, 0.92, 0.10} "tie rod ends, right";
        parameter SI.Position rTieInner[3] = {-0.12, 0.40, 0.10} "tie rod ends, right";
        parameter SI.Angle staticCamber = 0 "negative = top in";
        parameter SI.Angle staticToe = 0 "positive = toe in";
        parameter SI.Mass mUnsprung = 0 "upright mass";
  Modelica.Mechanics.MultiBody.Joints.Assemblies.JointSSR tieRod(rod1Length = Modelica.Math.Vectors.norm(rTieOuter - rTieInner), rod1Mass = 0, n_b = Functions.mirrorY(nKingpin, side), rRod2_ib = Functions.mirrorY(rTieOuter - rKingpinTop, side), phi_guess = 0)  annotation(
          Placement(transformation(origin = {-42, -40}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation spindle(r = Functions.mirrorY(rWC - rKingpinTop, side))  annotation(
          Placement(transformation(origin = {26, 0}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.FixedRotation staticAlign(rotationType = Modelica.Mechanics.MultiBody.Types.RotationTypes.PlanarRotationSequence, sequence = {3, 1, 2}, angles = {-side*Modelica.Units.Conversions.to_deg(staticToe), side*Modelica.Units.Conversions.to_deg(staticCamber), 0})  annotation(
          Placement(transformation(origin = {52, 0}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.Body upright(r_CM = {0, 0, 0}, m = mUnsprung)  annotation(
          Placement(transformation(origin = {36, -28}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Mechanics.MultiBody.Sensors.RelativeAngles wheelAngles(sequence = {3, 1, 2})  annotation(
          Placement(transformation(origin = {-70, -100}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativePosition wheelPosition annotation(
          Placement(transformation(origin = {-48, -100}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput travel(unit="m") annotation(
          Placement(transformation(origin = {100, 60}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {74, 78}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput camber(unit="rad") annotation(
          Placement(transformation(origin = {100, 40}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {24, 32}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput toe(unit="rad") annotation(
          Placement(transformation(origin = {100, 20}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {68, 22}, extent = {{-10, -10}, {10, 10}})));
      equation
  connect(tieRod.frame_ib, spindle.frame_a) annotation(
          Line(points = {{-26, -20}, {-26, -9.5}, {14, -9.5}, {14, 0}, {16, 0}}, color = {95, 95, 95}));
  connect(spindle.frame_b, staticAlign.frame_a) annotation(
          Line(points = {{36, 0}, {42, 0}}, color = {95, 95, 95}));
  connect(staticAlign.frame_b, wheelConnect) annotation(
          Line(points = {{62, 0}, {100, 0}}, color = {95, 95, 95}));
  connect(spindle.frame_b, upright.frame_a) annotation(
          Line(points = {{36, 0}, {36, -18}}, color = {95, 95, 95}));
  connect(chassisConnect, wheelAngles.frame_a) annotation(
          Line(points = {{-100, 0}, {-100, -100}, {-80, -100}}));
  connect(wheelConnect, wheelAngles.frame_b) annotation(
          Line(points = {{100, 0}, {100, -100}, {-60, -100}}));
  connect(wheelPosition.frame_b, wheelConnect) annotation(
          Line(points = {{-38, -100}, {91, -100}, {91, 0}, {100, 0}}, color = {95, 95, 95}));
      
      travel = -(wheelPosition.r_rel[3] - rWC[3]);
// positive = bump
      toe = -side*wheelAngles.angles[1]; // positive = toe-in (including steer)
      camber = side*wheelAngles.angles[2];
  connect(tieRodInner, tieRod.frame_a) annotation(
          Line(points = {{-100, -40}, {-62, -40}}));
  connect(wheelPosition.frame_a, chassisConnect) annotation(
          Line(points = {{-58, -100}, {-100, -100}, {-100, 0}}, color = {95, 95, 95}));
      end PartialUprightCorner;

      model RigidCorner
        extends AlyssaModel.Components.Suspension.PartialUprightCorner(
        final rKingpinTop = if isFront then hp.front_rUBJ else hp.rear_rUBJ,
        final nKingpin = Modelica.Math.Vectors.normalize(if isFront then hp.front_rLBJ - hp.front_rUBJ else hp.rear_rLBJ - hp.rear_rUBJ),
        final rWC = if isFront then hp.front_rWC else hp.rear_rWC,
        final rTieOuter = if isFront then hp.front_rTieOuter else hp.rear_rTieOuter,
        final rTieInner = if isFront then hp.front_rTieInner else hp.rear_rTieInner,
        final staticCamber = if isFront then hp.front_staticCamber else hp.rear_staticCamber,
        final staticToe = if isFront then hp.front_staticToe else hp.rear_staticToe,
        final mUnsprung=0
        );
  Hardpoints.BaseHardpoints hp annotation(
          Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation carrier(r = Functions.mirrorY(rKingpinTop, side))  annotation(
          Placement(transformation(origin = {-46, 16}, extent = {{-10, -10}, {10, 10}})));
      equation
  connect(chassisConnect, carrier.frame_a) annotation(
          Line(points = {{-100, 0}, {-56, 0}, {-56, 16}}));
  connect(carrier.frame_b, tieRod.frame_b) annotation(
          Line(points = {{-36, 16}, {-36, 38}}, color = {95, 95, 95}));
      end RigidCorner;

      model DoubleWishboneCorner
        import Modelica.Units.SI;
        import Modelica.Math.Vectors.normalize;
        
        extends AlyssaModel.Components.Suspension.PartialUprightCorner(
        final rKingpinTop = if isFront then hp.front_rUBJ else hp.rear_rUBJ,
        final nKingpin = Modelica.Math.Vectors.normalize(if isFront then hp.front_rLBJ - hp.front_rUBJ else hp.rear_rLBJ - hp.rear_rUBJ),
        final rWC = if isFront then hp.front_rWC else hp.rear_rWC,
        final rTieOuter = if isFront then hp.front_rTieOuter else hp.rear_rTieOuter,
        final rTieInner = if isFront then hp.front_rTieInner else hp.rear_rTieInner,
        final staticCamber = if isFront then hp.front_staticCamber else hp.rear_staticCamber,
        final staticToe = if isFront then hp.front_staticToe else hp.rear_staticToe,
        final mUnsprung= if isFront then vehicleParams.mUnsprungFront else vehicleParams.mUnsprungRear
        );
  parameters vehicleParams annotation(
          Placement(transformation(origin = {110, 92}, extent = {{-10, -10}, {10, 10}})));
  Hardpoints.BaseHardpoints hp annotation(
          Placement(transformation(origin = {134, 92}, extent = {{-10, -10}, {10, 10}})));
      
        final parameter SI.Position rUBJ[3] = if isFront then hp.front_rUBJ else hp.rear_rUBJ;
        
        final parameter SI.Position rLBJ[3] = if isFront then hp.front_rLBJ else hp.rear_rLBJ;
        
        final parameter SI.Position rUCAf[3] = if isFront then hp.front_rUCAf else hp.rear_rUCAf;
        
        final parameter SI.Position rUCAr[3] = if isFront then hp.front_rUCAr else hp.rear_rUCAr;
        
        final parameter SI.Position rLCAf[3] = if isFront then hp.front_rLCAf else hp.rear_rLCAf;
        
        final parameter SI.Position rLCAr[3] = if isFront then hp.front_rLCAr else hp.rear_rLCAr;
        
        final parameter SI.Position rSpringChassis[3] = if isFront then hp.front_rSpringChassis else hp.rear_rSpringChassis;
        
        final parameter SI.Position rSpringArm[3] = if isFront then hp.front_rSpringArm else hp.rear_rSpringArm;
        
        final parameter SI.Position rUCApivot[3] = (rUCAf + rUCAr)/2 "UCA pivot axis point (midpoint)";
        final parameter SI.Position rLCApivot[3] = (rLCAf + rLCAr)/2 "LCA pivot axis point (midpoint)";
        
        final parameter SI.TranslationalSpringConstant kWheel = if isFront then vehicleParams.kFront else vehicleParams.kRear;
        final parameter SI.TranslationalDampingConstant dWheel = if isFront then vehicleParams.dWheelFront else vehicleParams.dWheelRear;
        final parameter SI.Force F0 = if isFront then vehicleParams.F0Front else vehicleParams.F0Rear "static sprung load per corner";
        final parameter SI.Length sDesign = Modelica.Math.Vectors.norm(rSpringArm - rSpringChassis) "coilover length at design";
        parameter Real motionRatio = if isFront then 0.665 else 0.713 "placeholder; measure on the rig";
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation ucaMount(r = Functions.mirrorY(rUCApivot, side))  annotation(
          Placement(transformation(origin = {-68, 60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.Revolute ucaPivot(n = Functions.mirrorY(normalize(rUCAr - rUCAf), side), stateSelect = StateSelect.always, phi(start = 0, fixed = true), w(start = 0, fixed = true))  annotation(
          Placement(transformation(origin = {-32, 60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation uca(r = Functions.mirrorY(rUBJ - rUCApivot, side))  annotation(
          Placement(transformation(origin = {-4, 60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation lcaMount(r = Functions.mirrorY(rLCApivot, side))  annotation(
          Placement(transformation(origin = {-64, -66}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.Assemblies.JointUSR jointUSR(n1_a = Functions.mirrorY(normalize(rUCAr - rUCAf), side), n_b = Functions.mirrorY(normalize(rLCAr - rLCAf), side), rRod1_ia = Functions.mirrorY(rLBJ - rUBJ, side), rRod2_ib = Functions.mirrorY(rLBJ - rLCApivot, side), phi_guess = 0)  annotation(
          Placement(transformation(origin = {38, 40}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation springChassis(r = Functions.mirrorY(rSpringChassis, side))  annotation(
          Placement(transformation(origin = {-56, 80}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation springArm(r = Functions.mirrorY(rSpringArm - rLCApivot, side))  annotation(
          Placement(transformation(origin = {-34, 4}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Mechanics.MultiBody.Forces.SpringDamperParallel coilover(c = kWheel/motionRatio^2, s_unstretched = sDesign + F0*motionRatio/kWheel, d = dWheel/motionRatio^2)  annotation(
          Placement(transformation(origin = {-36, 32}, extent = {{-10, -10}, {10, 10}})));
      equation
  connect(chassisConnect, ucaMount.frame_a) annotation(
          Line(points = {{-100, 0}, {-100, 60}, {-78, 60}}));
  connect(ucaMount.frame_b, ucaPivot.frame_a) annotation(
          Line(points = {{-58, 60}, {-58, 61}, {-42, 61}, {-42, 60}}, color = {95, 95, 95}));
  connect(ucaPivot.frame_b, uca.frame_a) annotation(
          Line(points = {{-22, 60}, {-14, 60}}, color = {95, 95, 95}));
  connect(chassisConnect, lcaMount.frame_a) annotation(
          Line(points = {{-100, 0}, {-84, 0}, {-84, -66}, {-74, -66}}));
  connect(lcaMount.frame_b, jointUSR.frame_b) annotation(
          Line(points = {{-54, -66}, {8, -66}, {8, 20}, {38, 20}}, color = {95, 95, 95}));
  connect(uca.frame_b, jointUSR.frame_a) annotation(
          Line(points = {{6, 60}, {38, 60}}, color = {95, 95, 95}));
  connect(chassisConnect, springChassis.frame_a) annotation(
          Line(points = {{-100, 0}, {-99, 0}, {-99, 80}, {-66, 80}}));
  connect(jointUSR.frame_ib, springArm.frame_a) annotation(
          Line(points = {{58, 24}, {58, 12}, {8, 12}, {8, 11}, {-24, 11}, {-24, 4}}, color = {95, 95, 95}));
  connect(springChassis.frame_b, coilover.frame_a) annotation(
          Line(points = {{-46, 80}, {-46, 32}}, color = {95, 95, 95}));
  connect(coilover.frame_b, springArm.frame_b) annotation(
          Line(points = {{-26, 32}, {-26, 17}, {-44, 17}, {-44, 4}}, color = {95, 95, 95}));
  connect(jointUSR.frame_ia, tieRod.frame_b) annotation(
          Line(points = {{58, 56}, {72, 56}, {72, -40}, {-22, -40}}, color = {95, 95, 95}));
      end DoubleWishboneCorner;
    end Suspension;

    partial model BaseSteering
      Modelica.Blocks.Interfaces.RealInput delta(unit = "rad") annotation(
        Placement(transformation(origin = {-100, 60}, extent = {{-14, -14}, {14, 14}}), iconTransformation(origin = {-66, 46}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a chassisConnect annotation(
        Placement(transformation(origin = {-100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-82, -12}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_b tieRodInnerL annotation(
        Placement(transformation(origin = {0, -100}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {-30, -68}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_b tieRodInnerR annotation(
        Placement(transformation(origin = {0, 100}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {2, 42}, extent = {{-16, -16}, {16, 16}})));
    equation

    end BaseSteering;

    model RackSteering
      extends AlyssaModel.Components.BaseSteering;
      parameter Real rackRatio = -0.134 "m/rad" annotation(
        Dialog);
      Suspension.Hardpoints.BaseHardpoints hp annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Parts.FixedTranslation housing(r = {hp.front_rTieInner[1], 0, hp.front_rTieInner[3]}) annotation(
        Placement(transformation(origin = {-70, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Joints.Prismatic rack(useAxisFlange = true, n = {0, 1, 0}, s(start = 0, fixed = false)) annotation(
        Placement(transformation(origin = {4, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.Translational.Sources.Position pos(useSupport = true, exact = true) annotation(
        Placement(transformation(origin = {-24, 48}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Math.Gain rackRatioGain(k = rackRatio) annotation(
        Placement(transformation(origin = {-62, 60}, extent = {{-6, -6}, {6, 6}})));
      Modelica.Mechanics.MultiBody.Parts.FixedTranslation endL(r = {0, -hp.front_rTieInner[2], 0}) annotation(
        Placement(transformation(origin = {0, -70}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Parts.FixedTranslation endR(r = {0, hp.front_rTieInner[2], 0}) annotation(
        Placement(transformation(origin = {0, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
    equation
      connect(delta, rackRatioGain.u) annotation(
        Line(points = {{-100, 60}, {-69, 60}}, color = {0, 0, 127}));
      connect(rackRatioGain.y, pos.s_ref) annotation(
        Line(points = {{-55, 60}, {-36, 60}, {-36, 48}}, color = {0, 0, 127}));
      connect(pos.flange, rack.axis) annotation(
        Line(points = {{-14, 48}, {-14, 27}, {12, 27}, {12, 6}}, color = {0, 127, 0}));
      connect(pos.support, rack.support) annotation(
        Line(points = {{-24, 38}, {-15, 38}, {-15, 22}, {0, 22}, {0, 6}}, color = {0, 127, 0}));
      connect(housing.frame_b, rack.frame_a) annotation(
        Line(points = {{-60, 0}, {-6, 0}}, color = {95, 95, 95}));
      connect(housing.frame_a, chassisConnect) annotation(
        Line(points = {{-80, 0}, {-100, 0}}, color = {95, 95, 95}));
      connect(rack.frame_b, endR.frame_a) annotation(
        Line(points = {{14, 0}, {14, 30}, {0, 30}, {0, 60}}, color = {95, 95, 95}));
      connect(rack.frame_b, endL.frame_a) annotation(
        Line(points = {{14, 0}, {14, -30}, {0, -30}, {0, -60}}, color = {95, 95, 95}));
      connect(tieRodInnerR, endR.frame_b) annotation(
        Line(points = {{0, 100}, {0, 80}}));
      connect(tieRodInnerL, endL.frame_b) annotation(
        Line(points = {{0, -100}, {0, -80}}));
    end RackSteering;

    model FixedToeLinks
      extends AlyssaModel.Components.BaseSteering;
      Modelica.Mechanics.MultiBody.Parts.FixedTranslation toeLinkR(r = {hp.rear_rTieInner[1], hp.rear_rTieInner[2], hp.rear_rTieInner[3]}) annotation(
        Placement(transformation(origin = {0, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
      Modelica.Mechanics.MultiBody.Parts.FixedTranslation toeLinkL(r = {hp.rear_rTieInner[1], -hp.rear_rTieInner[2], hp.rear_rTieInner[3]}) annotation(
        Placement(transformation(origin = {0, -30}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Suspension.Hardpoints.BaseHardpoints hp annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
    equation
  connect(chassisConnect, toeLinkL.frame_a) annotation(
        Line(points = {{-100, 0}, {0, 0}, {0, -20}}));
  connect(chassisConnect, toeLinkR.frame_a) annotation(
        Line(points = {{-100, 0}, {0, 0}, {0, 40}}));
  connect(toeLinkR.frame_b, tieRodInnerR) annotation(
        Line(points = {{0, 60}, {0, 100}}, color = {95, 95, 95}));
  connect(toeLinkL.frame_b, tieRodInnerL) annotation(
        Line(points = {{0, -40}, {0, -100}}, color = {95, 95, 95}));
    end FixedToeLinks;
  end Components;

  package Wheels

    model OptimalControlWheel
      import Modelica.Units.SI;
      parameter SI.Radius rEff = 0.33 "effective rolling radius" annotation(
        Dialog);
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubFlange(includeBearingConnector = true) annotation(
        Placement(transformation(origin = {99, -1}, extent = {{-13, -13}, {13, 13}}), iconTransformation(origin = {100, -4}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealInput mu annotation(
        Placement(transformation(origin = {-100, 69}, extent = {{-8, -8}, {8, 8}}), iconTransformation(origin = {-80, 70}, extent = {{-20, -20}, {20, 20}})));
      replaceable TireForces.BrushForces slipForces constrainedby TireForces.BaseTireForces annotation(
        Placement(transformation(origin = {0, 40}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput fx(unit = "N") annotation(
        Placement(transformation(origin = {100, 70}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {90, 50}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput fy(unit = "N") annotation(
        Placement(transformation(origin = {100, 48}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {90, 30}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput mz(unit = "N.m") annotation(
        Placement(transformation(origin = {100, 28}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {90, 10}, extent = {{-10, -10}, {10, 10}})));
      SlipDynamics slipDynamics annotation(
        Placement(transformation(origin = {-60, 40}, extent = {{-20, -20}, {20, 20}})));
      Rim rim(rEff = rEff) annotation(
        Placement(transformation(origin = {60, 42}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_a annotation(
        Placement(transformation(origin = {-100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-96, 2}, extent = {{-16, -16}, {16, 16}})));
      ContactPatch contactPatch(rEff = rEff) annotation(
        Placement(transformation(origin = {-72, -44}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput fz annotation(
        Placement(transformation(origin = {100, -28}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {90, -30}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput omega(unit = "rad/s") annotation(
        Placement(transformation(origin = {100, -72}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {86, -78}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(slipDynamics.kappa, slipForces.kappa) annotation(
        Line(points = {{-38, 46}, {-20, 46}, {-20, 56}}, color = {0, 0, 127}));
      connect(slipDynamics.alpha, slipForces.alpha) annotation(
        Line(points = {{-42, 40}, {-20, 40}, {-20, 46}}, color = {0, 0, 127}));
      connect(mu, slipForces.mu) annotation(
        Line(points = {{-100, 70}, {-20, 70}, {-20, 26}}, color = {0, 0, 127}));
      connect(slipForces.fx, rim.fx) annotation(
        Line(points = {{20, 56}, {52, 56}, {52, 52}}, color = {0, 0, 127}));
      connect(rim.hubFlange, hubFlange) annotation(
        Line(points = {{46, 48}, {46, -1}, {99, -1}}, color = {135, 135, 135}));
      connect(slipForces.fy, fy) annotation(
        Line(points = {{20, 46}, {100, 46}, {100, 48}}, color = {0, 0, 127}));
      connect(slipForces.fx, fx) annotation(
        Line(points = {{20, 56}, {100, 56}, {100, 70}}, color = {0, 0, 127}));
      connect(slipForces.mz, mz) annotation(
        Line(points = {{20, 36}, {100, 36}, {100, 28}}, color = {0, 0, 127}));
      connect(frame_a, rim.frame_a) annotation(
        Line(points = {{-100, 0}, {44, 0}, {44, 48}}));
      connect(contactPatch.vy, slipDynamics.vy) annotation(
        Line(points = {{-52, -52}, {-80, -52}, {-80, 46}}, color = {0, 0, 127}));
      connect(rim.vRim, slipDynamics.vRim) annotation(
        Line(points = {{78, 34}, {-80, 34}, {-80, 36}}, color = {0, 0, 127}));
      connect(contactPatch.frame_a, frame_a) annotation(
        Line(points = {{-88, -44}, {-100, -44}, {-100, 0}}, color = {95, 95, 95}));
      connect(slipForces.fx, contactPatch.fx) annotation(
        Line(points = {{20, 56}, {-92, 56}, {-92, -30}}, color = {0, 0, 127}));
      connect(slipForces.fy, contactPatch.fy) annotation(
        Line(points = {{20, 46}, {-92, 46}, {-92, -36}}, color = {0, 0, 127}));
      connect(contactPatch.fz, rim.fz) annotation(
        Line(points = {{-52, -54}, {42, -54}, {42, 34}}, color = {0, 0, 127}));
      connect(contactPatch.fz, fz) annotation(
        Line(points = {{-52, -54}, {100, -54}, {100, -28}}, color = {0, 0, 127}));
      connect(slipForces.fz, contactPatch.fz) annotation(
        Line(points = {{-20, 36}, {-52, 36}, {-52, -54}}, color = {0, 0, 127}));
      connect(contactPatch.vx, slipDynamics.vx) annotation(
        Line(points = {{-52, -28}, {-80, -28}, {-80, 56}}, color = {0, 0, 127}));
      connect(rim.omega, omega) annotation(
        Line(points = {{78, 50}, {100, 50}, {100, -72}}, color = {0, 0, 127}));
  connect(contactPatch.gamma, slipForces.gamma) annotation(
        Line(points = {{-52, -54}, {0, -54}, {0, 14}}, color = {0, 0, 127}));
  connect(slipDynamics.vxAbs, slipForces.vxAbs) annotation(
        Line(points = {{-42, 38}, {2, 38}, {2, 12}}, color = {0, 0, 127}));
      annotation(
        Icon(coordinateSystem(preserveAspectRatio = true, extent = {{-100, -100}, {100, 100}}), graphics = {Rectangle(extent = {{-100, -100}, {100, 100}}, lineColor = {0, 0, 0}, fillColor = {255, 255, 255}, fillPattern = FillPattern.Solid), Bitmap(extent = {{-90, -90}, {90, 90}}, fileName = "modelica://AlyssaModel/Resources/Images/f1 red wheel.png"), Text(extent = {{-100, -135}, {100, -105}}, textString = "%name")}));
    end OptimalControlWheel;

    model Rim
      import Modelica.Units.SI;
      parameter SI.Inertia J = 1.2 "Wheel inertia" annotation(
        Dialog);
      parameter SI.Radius rEff = 0.33 "Effective rolling radius" annotation(
        Dialog);
      parameter SI.RotationalDampingConstant dSpin = 0.01 "bearing damping" annotation(
        Dialog);
      parameter Real crr = 0.015 "rolling resistance coeff" annotation(
        Dialog);
      parameter SI.AngularVelocity wEps = 1.0 "regularization for rolling res sign" annotation(
        Dialog);
      parameter SI.AngularVelocity omegaStart = 0 "Initial spin rate" annotation(
        Dialog);
      parameter Modelica.Mechanics.MultiBody.Types.Axis n = {0, -1, 0} "spin axis resolved in frame_a" annotation(
        Dialog);
      Modelica.Blocks.Interfaces.RealInput fx(unit = "N") annotation(
        Placement(transformation(origin = {-100, 70}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-36, 48}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput fz(unit = "N") annotation(
        Placement(transformation(origin = {-100, -70}, extent = {{-14, -14}, {14, 14}}), iconTransformation(origin = {-92, -44}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput omega(unit = "rad/s", nominal = 100) annotation(
        Placement(transformation(origin = {100, 70}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {88, 42}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput vRim(unit = "m/s") annotation(
        Placement(transformation(origin = {100, -72}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {90, -44}, extent = {{-10, -10}, {10, 10}})));
      SI.Torque tauRoll "rolling resistance torque";
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubFlange(includeBearingConnector = true) annotation(
        Placement(transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {-74, 28}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Parts.Rotor1D rotor1D(J = J, n = n, exact = false, phi(start = 0, fixed = true), w(start = omegaStart, fixed = false, nominal = 100), stateSelect = StateSelect.always) annotation(
        Placement(transformation(origin = {-80, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Parts.Mounting1D mounting1D(n = n) annotation(
        Placement(transformation(origin = {-50, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
      Modelica.Mechanics.Rotational.Sources.Torque torque(useSupport = true) annotation(
        Placement(transformation(origin = {0, 28}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.Rotational.Components.Damper damper(d = dSpin) annotation(
        Placement(transformation(origin = {42, -20}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_a annotation(
        Placement(transformation(origin = {-100, 40}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-80, 32}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearingAdaptor adaptor(includeBearingConnector = true) annotation(
        Placement(transformation(origin = {68, 28}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
    equation
      tauRoll = crr*Functions.smoothMax(fz, 0.0)*rEff*rotor1D.w/sqrt(rotor1D.w^2 + wEps^2) "crr*fz*rEff, smoothed out";
      torque.tau = -(fx*rEff + tauRoll);
      omega = rotor1D.w;
      vRim = rotor1D.w*rEff;
      connect(rotor1D.flange_a, adaptor.flange) annotation(
        Line(points = {{-90, 0}, {68, 0}, {68, 28}}));
      connect(adaptor.flangeAndFrame, hubFlange) annotation(
        Line(points = {{78, 28}, {100, 28}, {100, 0}}, color = {135, 135, 135}));
      connect(rotor1D.flange_b, damper.flange_a) annotation(
        Line(points = {{-70, 0}, {-19, 0}, {-19, -20}, {32, -20}}));
      connect(torque.flange, rotor1D.flange_b) annotation(
        Line(points = {{10, 28}, {-70, 28}, {-70, 0}}));
      connect(torque.support, mounting1D.flange_b) annotation(
        Line(points = {{0, 18}, {-50, 18}, {-50, 10}}));
      connect(damper.flange_b, mounting1D.flange_b) annotation(
        Line(points = {{52, -20}, {-50, -20}, {-50, 10}}));
      connect(rotor1D.frame_a, frame_a) annotation(
        Line(points = {{-80, -10}, {-100, -10}, {-100, 40}}, color = {95, 95, 95}));
      connect(mounting1D.frame_a, frame_a) annotation(
        Line(points = {{-40, 0}, {-100, 0}, {-100, 40}}, color = {95, 95, 95}));
      connect(adaptor.frame, frame_a) annotation(
        Line(points = {{68, 38}, {-100, 38}, {-100, 40}}, color = {95, 95, 95}));
    end Rim;

    model SlipDynamics
      import Modelica.Units.SI;
      parameter SI.Length sigmaX = 0.3 "lon. relaxation length" annotation(
        Dialog);
      parameter SI.Length sigmaY = 0.5 "lat. relaxation length" annotation(
        Dialog);
      parameter SI.Velocity vMin = 1.0 "speed floor" annotation(
        Dialog);
      parameter Boolean initRollingFree = true "start with zero slip, match rim speed" annotation(
        Dialog);
      Modelica.Blocks.Interfaces.RealInput vx(unit = "m/s") "contact patch vx" annotation(
        Placement(transformation(origin = {-100, 70}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-100, 75}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput vy(unit = "m/s") "contact patch vy" annotation(
        Placement(transformation(origin = {-101, 30}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-100, 25}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput vRim(unit = "m/s") "rim speed" annotation(
        Placement(transformation(origin = {-101, -12}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-100, -25}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput kappa(start = 0, fixed = false, nominal = 0.1, stateSelect = StateSelect.always) annotation(
        Placement(transformation(origin = {100, 80}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {110, 30}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput alpha(unit = "rad") annotation(
        Placement(transformation(origin = {100, 60}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {88, 2}, extent = {{-10, -10}, {10, 10}})));
      Real tanAlpha(start = 0, fixed = false, nominal = 0.15, stateSelect = StateSelect.always);
  Modelica.Blocks.Interfaces.RealOutput vxAbs(unit = "m/s") annotation(
        Placement(transformation(origin = {100, 41}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {92, -9}, extent = {{-10, -10}, {10, 10}})));
    initial equation
      tanAlpha = 0;
      if initRollingFree then
        kappa = 0;
        der(kappa) = 0;
      end if;
    equation
      vxAbs = sqrt(vx^2 + vMin^2);
      sigmaX*der(kappa) + vxAbs*kappa = vRim - vx;
      sigmaY*der(tanAlpha) + vxAbs*tanAlpha = vy;
      alpha = atan(tanAlpha);
    end SlipDynamics;

    model ContactPatch "slip dynamics needs the velocity of CP in the wheel frame"
      import Modelica.Units.SI;
      parameter SI.Radius rEff = 0.33 "effective rolling radius" annotation(
        Dialog);
      parameter SI.Radius r0 = 0.33 "unloaded radius" annotation(
        Dialog);
      parameter SI.TranslationalSpringConstant kz = 250000 "vertical stiffness" annotation(
        Dialog);
      parameter SI.TranslationalDampingConstant cz = 400 "vertical damping" annotation(
        Dialog);
      SI.Length pen "tire vertical deflection";
      SI.Length zRoad "road surface elevation under the hub";
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_a "hub frame, SAE coordinates" annotation(
        Placement(transformation(origin = {-100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-82, 0}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Blocks.Interfaces.RealOutput vx(unit = "m/s") annotation(
        Placement(transformation(origin = {100, 80}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {100, 75}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput vy(unit = "m/s") annotation(
        Placement(transformation(origin = {100, 60}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {100, 25}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealInput fx(unit = "N") annotation(
        Placement(transformation(origin = {-100, 70}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-100, 70}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput fy(unit = "N") annotation(
        Placement(transformation(origin = {-100, 49}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-100, 40}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput fz(unit = "N") annotation(
        Placement(transformation(origin = {100, 40}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {100, -50}, extent = {{-10, -10}, {10, 10}})));
      outer Roads.BaseRoad road annotation(
        Placement(transformation(origin = {-70, -88}, extent = {{-10, -10}, {10, 10}})));
    protected
      SI.Velocity vHub[3];
      SI.AngularVelocity wLoc[3];
      SI.Velocity vC[3] "contact patch velocity";
    public
  Modelica.Blocks.Interfaces.RealOutput gamma(unit="rad") annotation(
        Placement(transformation(origin = {100, 20}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {100, -50}, extent = {{-10, -10}, {10, 10}})));
  equation
// pen = Functions.smoothMax(r0 + frame_a.r_0[3], 0.0);
      zRoad = road.z0 + road.height(frame_a.r_0[1], frame_a.r_0[2]);
      pen = Functions.smoothMax(r0 + frame_a.r_0[3] - zRoad, 0.0);
      fz = Functions.smoothMax(kz*pen + cz*der(pen), 0.0);
      frame_a.f = -{fx, fy, -fz} "sae coordinates forces, -fz = road pushing tire up";
      frame_a.t = -cross({0, 0, rEff}, {fx, fy, -fz});
// frame_a.r_0 = world coords initially
      vHub = Modelica.Mechanics.MultiBody.Frames.resolve2(frame_a.R, der(frame_a.r_0));
// rotate vector from world frame (frame 1) to hub frame
// angular velocity of the hub frame in hub coords
      wLoc = Modelica.Mechanics.MultiBody.Frames.angularVelocity2(frame_a.R);
      vC = vHub + cross(wLoc, {0, 0, rEff}) "contact below hub = +z in SAE";
      vx = vC[1];
      vy = vC[2];
      gamma = asin(frame_a.R.T[2, 3]);
    end ContactPatch;

    package TireForces
    partial model BaseTireForces
        Modelica.Blocks.Interfaces.RealInput kappa annotation(
          Placement(transformation(origin = {-100, 79}, extent = {{-8, -8}, {8, 8}}), iconTransformation(origin = {-22, 26}, extent = {{-20, -20}, {20, 20}})));
        Modelica.Blocks.Interfaces.RealInput alpha(unit = "rad") annotation(
          Placement(transformation(origin = {-100, 59}, extent = {{-8, -8}, {8, 8}}), iconTransformation(origin = {-22, -24}, extent = {{-20, -20}, {20, 20}})));
        Modelica.Blocks.Interfaces.RealInput fz(unit = "N") annotation(
          Placement(transformation(origin = {-100, 40}, extent = {{-8, -8}, {8, 8}}), iconTransformation(origin = {-22, -74}, extent = {{-20, -20}, {20, 20}})));
        Modelica.Blocks.Interfaces.RealInput mu annotation(
          Placement(transformation(origin = {-100, 20}, extent = {{-8, -8}, {8, 8}}), iconTransformation(origin = {-22, -124}, extent = {{-20, -20}, {20, 20}})));
        Modelica.Blocks.Interfaces.RealInput gamma(unit = "rad") annotation(
          Placement(transformation(origin = {-100, 0}, extent = {{-8, -8}, {8, 8}}), iconTransformation(origin = {-4, -128}, extent = {{-20, -20}, {20, 20}})));
        Modelica.Blocks.Interfaces.RealInput vxAbs(unit = "m/s") annotation(
          Placement(transformation(origin = {-100, -21}, extent = {{-8, -8}, {8, 8}}), iconTransformation(origin = {10, -145}, extent = {{-20, -20}, {20, 20}})));
        Modelica.Blocks.Interfaces.RealOutput fx(unit = "N") annotation(
          Placement(transformation(origin = {99, 82}, extent = {{-9, -9}, {9, 9}}), iconTransformation(origin = {38, 54}, extent = {{-10, -10}, {10, 10}})));
        Modelica.Blocks.Interfaces.RealOutput fy(unit = "N") annotation(
          Placement(transformation(origin = {99, 64}, extent = {{-9, -9}, {9, 9}}), iconTransformation(origin = {38, 4}, extent = {{-10, -10}, {10, 10}})));
        Modelica.Blocks.Interfaces.RealOutput mz(unit = "N.m") annotation(
          Placement(transformation(origin = {99, 44}, extent = {{-9, -9}, {9, 9}}), iconTransformation(origin = {38, -46}, extent = {{-10, -10}, {10, 10}})));
        Modelica.Blocks.Interfaces.RealOutput pFric(unit = "W") annotation(
          Placement(transformation(origin = {101, 20}, extent = {{-9, -9}, {9, 9}}), iconTransformation(origin = {46, -60}, extent = {{-10, -10}, {10, 10}})));
      equation
        pFric = vxAbs*(fx*kappa - fy*tan(alpha));
      end BaseTireForces;

      model MFForces
        extends AlyssaModel.Wheels.TireForces.BaseTireForces;
        
        Modelica.Units.SI.Force fzEff;
        
        Real muXMax;
        Real muYMax;
        Real kappaMax;
        Real alphaMax;
        Real kappaN;
        Real alphaN;
        Real rho;
        final parameter Real sx = tan(Modelica.Constants.pi/(2.0*params.qx));
        final parameter Real sy = tan(Modelica.Constants.pi/(2.0*params.qy));
        Real muX;
        Real muY;
        parameters params annotation(
          Placement(transformation(origin = {120, 90}, extent = {{-10, -10}, {10, 10}})));
      equation
        fzEff = Functions.smoothMax(fz, 0.0);
        muXMax = Functions.interpLoad(fzEff, params.fzRef1, params.fzRef2, params.muXMax1, params.muXMax2)*mu;
        muYMax = Functions.interpLoad(fzEff, params.fzRef1, params.fzRef2, params.muYMax1, params.muYMax2)*mu;
        kappaMax = Functions.interpLoad(fzEff, params.fzRef1, params.fzRef2, params.kappaMax1, params.kappaMax2);
        alphaMax = Functions.interpLoad(fzEff, params.fzRef1, params.fzRef2, params.alphaMax1, params.alphaMax2);
        kappaN = kappa/(kappaMax + params.smoothingEpsilon);
        alphaN = alpha/(alphaMax + params.smoothingEpsilon);
        rho = sqrt(kappaN^2 + alphaN^2 + params.smoothingEpsilon^2);
      // always >= 0 so sqrt should be ok
        muX = muXMax*sin(params.qx*atan(sx*rho));
        muY = muYMax*sin(params.qy*atan(sy*rho));
        fx = muX*fzEff*(kappaN/rho);
        fy = -muY*fzEff*(alphaN/rho);
        mz = 0.0*fx;
      // Mz is zero for now

      end MFForces;

      model BrushForces
        import Modelica.Units.SI;
        extends AlyssaModel.Wheels.TireForces.BaseTireForces;
        
        SI.Force fzEff;
        Real mu_greek "load-dependent friction";
        SI.Length a "load-dependent contact length";
        Real C(unit = "N") "cornering stiffness (per unit theoretical slip)";
        
        // theoretical slip
        Real sigma_x;
        Real sigma_y;
        Real d;
        Real abs_sigma;
        
        // normalized slip
        Real lambda;
        Real theta;
        
        // smooth saturation
        Real p;
        SI.Force F;
        
  BrushParameters brushParams annotation(
          Placement(transformation(origin = {130, 90}, extent = {{-10, -10}, {10, 10}})));
      equation
        // effective load
        fzEff = Functions.smoothMax(fz, brushParams.fzMin);
        
        // load-dependent friction and contact length
        mu_greek = mu*brushParams.mu0*(fzEff/brushParams.Fz0)^(brushParams.n_mu - 1);
        a = brushParams.a0*(fzEff/brushParams.Fz0)^(brushParams.na);
        
        // cornering stiffness
        C = 2*brushParams.c_p*(a^2);
        
  // theoretical slip
        sigma_x = kappa/d;
        sigma_y = tan(alpha)/d;
        d = Functions.smoothMax(1 + kappa, brushParams.d_min);
        abs_sigma = sqrt(sigma_x^2 + sigma_y^2 + brushParams.eps_sigma^2);
// normalized slip
        lambda = theta*abs_sigma;
        theta = C/(3*mu_greek*fzEff);
        
        // smooth saturation
        p = 0.5*((1 - lambda) + sqrt((1 - lambda)^2 + brushParams.eps_lambda^2));
        F = mu_greek*fzEff*(1 - p^3);
        
        // force direction
        fx = F*(sigma_x/abs_sigma);
        fy = -F*(sigma_y/abs_sigma);
        
        // aligning moment
        mz = mu_greek*fzEff*a*lambda*(p^3)*(sigma_y/abs_sigma);
      end BrushForces;

      record BrushParameters
        import Modelica.Units.SI;
        
        parameter SI.Force Fz0 = 4000 "reference load";
        parameter Real mu0 = 1.6 "friction at Fz0";
        parameter Real n_mu = 0.85 "load-sensitivity exponent";
        parameter SI.Length a0 = 0.08 "contact half-length at Fz0";
        parameter Real na = 0.4 "contact-length exponent";
        parameter Real c_p(unit = "N/m2") = 1.2e7 "bristle stiffness per unit contact length";
        parameter Real d_min = 0.05;
        parameter Real eps_sigma = 1e-4;
        parameter Real eps_lambda = 1e-3;
        parameter SI.Force fzMin = 100;
      end BrushParameters;
    end TireForces;
  end Wheels;

  package Functions
    function smoothMax
      input Real a;
      input Real b;
      input Real eps = 1e-6 "Regularization, controls sharpness near a=b";
      output Real y;
    algorithm
      y := 0.5*(a + b + sqrt((a - b)^2 + eps^2));
      annotation(
        smoothOrder = 1,
        Inline = true);
    end smoothMax;

    function interpLoad
      input Real fz;
      input Real fz1;
      input Real fz2;
      input Real v1;
      input Real v2;
      output Real interpolatedLoad;
    algorithm
      interpolatedLoad := v1 + (v2 - v1)*(fz - fz1)/(fz2 - fz1);
      annotation(
        smoothOrder = 2,
        Inline = true);
    end interpLoad;

    function smoothSqrt
      input Real x;
      input Real eps = 1e-8;
      output Real y;
    algorithm
      y := sqrt(x + eps);
      annotation(
        smoothOrder = 1,
        Inline = true);
    end smoothSqrt;

    function mirrorY
      input Real r[3];
      input Integer side "+1 right, -1 left";
      output Real y[3];
    algorithm
      y := {r[1], side*r[2], r[3]};
      annotation(Inline = true);
    end mirrorY;
  end Functions;

  record parameters
    import Modelica.Units.SI;
    import Modelica.Units.Conversions.from_deg;
    import Modelica.Constants.g_n;
    import Modelica.Constants.pi;
    parameter SI.Force fzRef1 = 2000;
    parameter SI.Force fzRef2 = 6000;
    parameter Real muXMax1 = 1.75;
    parameter Real muXMax2 = 1.40;
    parameter Real muYMax1 = 1.80;
    parameter Real muYMax2 = 1.45;
    parameter Real kappaMax1 = 0.11;
    parameter Real kappaMax2 = 0.10;
    parameter SI.Angle alphaMax1 = from_deg(9.0);
    parameter SI.Angle alphaMax2 = from_deg(8.0);
    parameter Real qx = 1.9;
    parameter Real qy = 1.9;
    parameter Real smoothingEpsilon = 1e-6;
  
    // vehicle parameters
    parameter SI.Mass vehicleMass = 768;
    parameter SI.Mass mUnsprungFront = 25 "per corner";
    parameter SI.Mass mUnsprungRear = 25 "per corner";
    final parameter SI.Mass mSprung = vehicleMass - 2*(mUnsprungFront + mUnsprungRear);
    // suspension
    parameter SI.TranslationalSpringConstant kz = 250000 "tire vertical stiffness";
    parameter SI.Frequency fRideFront = 4.0;
    parameter SI.Frequency fRideRear = 4.5;
    final parameter SI.Force F0Front = mSprung*Modelica.Constants.g_n*(b/wheelbase)/2;
    final parameter SI.Force F0Rear = mSprung*Modelica.Constants.g_n*(a/wheelbase)/2;
    final parameter SI.TranslationalSpringConstant kRideFront = (F0Front/Modelica.Constants.g_n)*(2*Modelica.Constants.pi*fRideFront)^2;
    final parameter SI.TranslationalSpringConstant kRideRear = (F0Rear/Modelica.Constants.g_n)*(2*Modelica.Constants.pi*fRideRear)^2;
    final parameter SI.TranslationalSpringConstant kFront = kRideFront*kz/(kz - kRideFront);
    final parameter SI.TranslationalSpringConstant kRear = kRideRear*kz/(kz - kRideRear);
    parameter SI.Inertia Ixx = 250;
    parameter SI.Inertia Iyy = 350;
    parameter SI.Inertia Izz = 500;
    parameter SI.Length wheelbase = 3.6;
    parameter SI.Length tf = 2.0 "front trackwidth";
    parameter SI.Length tr = 2.0 "rear trackwidth";
    parameter SI.Length track = tf + tr;
    parameter SI.Length a = 1.9 "cg to front axle";
    parameter SI.Length b = 1.7 "cg to rear axle";
    parameter Real ackermann = 0.0 "0 = parallel, 1 = full ackerman, <0 = anti";
    // environment parameters
    parameter Real rho = 1.225;
    // unused right now, see VehicleAero
    // engine parameters
    parameter Real hp = 1000 "horsepower";
    parameter SI.Power hpPower = hp*745.7 "horsepower in W";
    parameter Real engineEff = 0.90 "engine efficiency, constant for now (unrealistic)";
    parameter SI.Torque maxDriveTorque = 6000 "total drive torque, split between rear wheels";
    parameter SI.Torque maxBrakeTorque = 10000 "total brake torque, all 4 wheels";
    parameter Real brakeBias = 0.62 "fraction of brake torque to front axle";
    parameter SI.AngularVelocity maxSteerRate = 5.0 "rad/s";
    parameter Real maxPedalRate = 10.0 "max drive/brake pedal rate [1/s]";
    parameter SI.Angle deltaMax = 0.35;
    parameter SI.Height rEff0 = 0.33;
    parameter SI.Height cgHeight = 0.30;
    
    parameter Real zetaFront = 0.4;
    parameter Real zetaRear = 0.4;
    final parameter SI.TranslationalDampingConstant dWheelFront = 2*zetaFront*sqrt(kRideFront*F0Front/Modelica.Constants.g_n);
    final parameter SI.TranslationalDampingConstant dWheelRear = 2*zetaRear*sqrt(kRideRear*F0Rear/Modelica.Constants.g_n);
  end parameters;

  package Vehicles
    model AlyssaVehicle
      Wheels.OptimalControlWheel wheelFR annotation(
        Placement(transformation(origin = {-71, 49}, extent = {{-11, -11}, {11, 11}}, rotation = 180)));
      Wheels.OptimalControlWheel wheelFL annotation(
        Placement(transformation(origin = {-70, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
      Wheels.OptimalControlWheel wheelRR annotation(
        Placement(transformation(origin = {70, 50}, extent = {{-10, -10}, {10, 10}})));
      Wheels.OptimalControlWheel wheelRL annotation(
        Placement(transformation(origin = {70, -50}, extent = {{-10, -10}, {10, 10}})));
      Components.VehicleBody vehicleBody annotation(
        Placement(transformation(extent = {{-10, -10}, {10, 10}})));
      Components.FrontSuspension frontSuspension annotation(
        Placement(transformation(origin = {-50, 0}, extent = {{-10, -10}, {10, 10}})));
      Components.RearSuspension rearSuspension annotation(
        Placement(transformation(origin = {50, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubFR(includeBearingConnector = true) annotation(
        Placement(transformation(origin = {-70, 100}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {-75, 100}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubFL(includeBearingConnector = true) annotation(
        Placement(transformation(origin = {-72, -98}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {-75, -100}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubRR(includeBearingConnector = true) annotation(
        Placement(transformation(origin = {70, 100}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {75, 100}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubRL(includeBearingConnector = true) annotation(
        Placement(transformation(origin = {70, -100}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {75, -100}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Modelica.Blocks.Interfaces.RealInput delta(unit = "rad") annotation(
        Placement(transformation(origin = {-150, 72}, extent = {{-14, -14}, {14, 14}}), iconTransformation(origin = {-150, 72}, extent = {{-14, -14}, {14, 14}})));
      Modelica.Blocks.Interfaces.RealInput mu "grip" annotation(
        Placement(transformation(origin = {-150, 50}, extent = {{-14, -14}, {14, 14}}), iconTransformation(origin = {-150, 50}, extent = {{-14, -14}, {14, 14}})));
      Modelica.Blocks.Interfaces.RealOutput w[4](each unit = "rad/s") "wheel speeds output, FL FR RL RR" annotation(
        Placement(transformation(origin = {150, -72}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {136, -20}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a chassisFrame annotation(
        Placement(transformation(origin = {0, -100}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {-34, -132}, extent = {{-16, -16}, {16, 16}})));
    equation
      connect(frontSuspension.subFrameFront, vehicleBody.subFrameFront) annotation(
        Line(points = {{-40, 0}, {-10, 0}}, color = {95, 95, 95}));
      connect(vehicleBody.subFrameRear, rearSuspension.subFrameRear) annotation(
        Line(points = {{10, 0}, {40, 0}}, color = {95, 95, 95}));
      connect(wheelFR.frame_a, frontSuspension.frame_bR) annotation(
        Line(points = {{-60, 48}, {-50, 48}, {-50, 10}}, color = {95, 95, 95}));
      connect(wheelFL.frame_a, frontSuspension.frame_bL) annotation(
        Line(points = {{-60, -50}, {-50, -50}, {-50, -10}}, color = {95, 95, 95}));
      connect(rearSuspension.frame_bR, wheelRR.frame_a) annotation(
        Line(points = {{50, 10}, {60, 10}, {60, 50}}, color = {95, 95, 95}));
      connect(rearSuspension.frame_bL, wheelRL.frame_a) annotation(
        Line(points = {{50, -10}, {60, -10}, {60, -50}}, color = {95, 95, 95}));
      connect(hubFR, wheelFR.hubFlange) annotation(
        Line(points = {{-70, 100}, {-82, 100}, {-82, 50}}));
      connect(wheelRR.hubFlange, hubRR) annotation(
        Line(points = {{80, 50}, {86, 50}, {86, 75}, {70, 75}, {70, 100}}, color = {135, 135, 135}));
      connect(hubFL, wheelFL.hubFlange) annotation(
        Line(points = {{-72, -98}, {-80, -98}, {-80, -50}}));
      connect(hubRL, wheelRL.hubFlange) annotation(
        Line(points = {{70, -100}, {80, -100}, {80, -50}}));
      connect(delta, frontSuspension.delta) annotation(
        Line(points = {{-150, 72}, {-100, 72}, {-100, 39}, {-58, 39}, {-58, 6}}, color = {0, 0, 127}));
      connect(wheelFL.omega, w[1]) annotation(
        Line(points = {{-78, -42}, {150, -42}, {150, -72}}, color = {0, 0, 127}));
      connect(wheelFR.omega, w[2]) annotation(
        Line(points = {{-80, 58}, {150, 58}, {150, -72}}, color = {0, 0, 127}));
      connect(wheelRL.omega, w[3]) annotation(
        Line(points = {{78, -58}, {150, -58}, {150, -72}}, color = {0, 0, 127}));
      connect(wheelRR.omega, w[4]) annotation(
        Line(points = {{78, 42}, {150, 42}, {150, -72}}, color = {0, 0, 127}));
      connect(mu, wheelFR.mu) annotation(
        Line(points = {{-150, 50}, {-62, 50}, {-62, 42}}, color = {0, 0, 127}));
      connect(mu, wheelRR.mu) annotation(
        Line(points = {{-150, 50}, {62, 50}, {62, 58}}, color = {0, 0, 127}));
      connect(mu, wheelFL.mu) annotation(
        Line(points = {{-150, 50}, {-62, 50}, {-62, -56}}, color = {0, 0, 127}));
      connect(mu, wheelRL.mu) annotation(
        Line(points = {{-150, 50}, {62, 50}, {62, -42}}, color = {0, 0, 127}));
      connect(vehicleBody.chassisFrame, chassisFrame) annotation(
        Line(points = {{0, -8}, {0, -100}}, color = {95, 95, 95}));
      annotation(
        Icon(coordinateSystem(preserveAspectRatio = true, extent = {{-150, -100}, {150, 100}}), graphics = {Rectangle(extent = {{-150, -100}, {150, 100}}, lineColor = {0, 0, 0}, fillColor = {255, 255, 255}, fillPattern = FillPattern.Solid), Bitmap(extent = {{-90, -90}, {90, 90}}, fileName = "modelica://AlyssaModel/Resources/Images/Lightning_McQueen.png"), Text(extent = {{-100, -135}, {100, -105}}, textString = "%name")}));
    end AlyssaVehicle;
    
    model AlyssaVehicleRig
      Wheels.OptimalControlWheel wheelFR annotation(
        Placement(transformation(origin = {-71, 49}, extent = {{-11, -11}, {11, 11}}, rotation = 180)));
      Wheels.OptimalControlWheel wheelFL annotation(
        Placement(transformation(origin = {-70, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
      Wheels.OptimalControlWheel wheelRR annotation(
        Placement(transformation(origin = {70, 50}, extent = {{-10, -10}, {10, 10}})));
      Wheels.OptimalControlWheel wheelRL annotation(
        Placement(transformation(origin = {70, -50}, extent = {{-10, -10}, {10, 10}})));
      Components.VehicleBody vehicleBody annotation(
        Placement(transformation(extent = {{-10, -10}, {10, 10}})));
      Components.FrontSuspension frontSuspension annotation(
        Placement(transformation(origin = {-50, 0}, extent = {{-10, -10}, {10, 10}})));
      Components.RearSuspension rearSuspension annotation(
        Placement(transformation(origin = {50, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubFR(includeBearingConnector = true) annotation(
        Placement(transformation(origin = {-70, 100}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {-75, 100}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubFL(includeBearingConnector = true) annotation(
        Placement(transformation(origin = {-72, -98}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {-75, -100}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubRR(includeBearingConnector = true) annotation(
        Placement(transformation(origin = {70, 100}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {75, 100}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubRL(includeBearingConnector = true) annotation(
        Placement(transformation(origin = {70, -100}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {75, -100}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Modelica.Blocks.Interfaces.RealInput delta(unit = "rad") annotation(
        Placement(transformation(origin = {-150, 72}, extent = {{-14, -14}, {14, 14}}), iconTransformation(origin = {-150, 72}, extent = {{-14, -14}, {14, 14}})));
      Modelica.Blocks.Interfaces.RealInput mu "grip" annotation(
        Placement(transformation(origin = {-150, 50}, extent = {{-14, -14}, {14, 14}}), iconTransformation(origin = {-150, 50}, extent = {{-14, -14}, {14, 14}})));
      Modelica.Blocks.Interfaces.RealOutput w[4](each unit = "rad/s") "wheel speeds output, FL FR RL RR" annotation(
        Placement(transformation(origin = {150, -72}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {136, -20}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a chassisFrame annotation(
        Placement(transformation(origin = {0, -100}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {-34, -132}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_a platformFR annotation(
        Placement(transformation(origin = {-40, 100}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {-34, 88}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_a platformRR annotation(
        Placement(transformation(origin = {40, 100}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {2, 96}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_a platformFL annotation(
        Placement(transformation(origin = {-40, -100}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {-28, -42}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_a platformRL annotation(
        Placement(transformation(origin = {40, -100}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {48, -60}, extent = {{-16, -16}, {16, 16}})));
    equation
      connect(frontSuspension.subFrameFront, vehicleBody.subFrameFront) annotation(
        Line(points = {{-40, 0}, {-10, 0}}, color = {95, 95, 95}));
      connect(vehicleBody.subFrameRear, rearSuspension.subFrameRear) annotation(
        Line(points = {{10, 0}, {40, 0}}, color = {95, 95, 95}));
      connect(wheelFR.frame_a, frontSuspension.frame_bR) annotation(
        Line(points = {{-60, 48}, {-50, 48}, {-50, 10}}, color = {95, 95, 95}));
      connect(wheelFL.frame_a, frontSuspension.frame_bL) annotation(
        Line(points = {{-60, -50}, {-50, -50}, {-50, -10}}, color = {95, 95, 95}));
      connect(rearSuspension.frame_bR, wheelRR.frame_a) annotation(
        Line(points = {{50, 10}, {60, 10}, {60, 50}}, color = {95, 95, 95}));
      connect(rearSuspension.frame_bL, wheelRL.frame_a) annotation(
        Line(points = {{50, -10}, {60, -10}, {60, -50}}, color = {95, 95, 95}));
      connect(hubFR, wheelFR.hubFlange) annotation(
        Line(points = {{-70, 100}, {-82, 100}, {-82, 50}}));
      connect(wheelRR.hubFlange, hubRR) annotation(
        Line(points = {{80, 50}, {86, 50}, {86, 75}, {70, 75}, {70, 100}}, color = {135, 135, 135}));
      connect(hubFL, wheelFL.hubFlange) annotation(
        Line(points = {{-72, -98}, {-80, -98}, {-80, -50}}));
      connect(hubRL, wheelRL.hubFlange) annotation(
        Line(points = {{70, -100}, {80, -100}, {80, -50}}));
      connect(delta, frontSuspension.delta) annotation(
        Line(points = {{-150, 72}, {-100, 72}, {-100, 39}, {-58, 39}, {-58, 6}}, color = {0, 0, 127}));
      connect(wheelFL.omega, w[1]) annotation(
        Line(points = {{-78, -42}, {150, -42}, {150, -72}}, color = {0, 0, 127}));
      connect(wheelFR.omega, w[2]) annotation(
        Line(points = {{-80, 58}, {150, 58}, {150, -72}}, color = {0, 0, 127}));
      connect(wheelRL.omega, w[3]) annotation(
        Line(points = {{78, -58}, {150, -58}, {150, -72}}, color = {0, 0, 127}));
      connect(wheelRR.omega, w[4]) annotation(
        Line(points = {{78, 42}, {150, 42}, {150, -72}}, color = {0, 0, 127}));
      connect(mu, wheelFR.mu) annotation(
        Line(points = {{-150, 50}, {-62, 50}, {-62, 42}}, color = {0, 0, 127}));
      connect(mu, wheelRR.mu) annotation(
        Line(points = {{-150, 50}, {62, 50}, {62, 58}}, color = {0, 0, 127}));
      connect(mu, wheelFL.mu) annotation(
        Line(points = {{-150, 50}, {-62, 50}, {-62, -56}}, color = {0, 0, 127}));
      connect(mu, wheelRL.mu) annotation(
        Line(points = {{-150, 50}, {62, 50}, {62, -42}}, color = {0, 0, 127}));
      connect(vehicleBody.chassisFrame, chassisFrame) annotation(
        Line(points = {{0, -8}, {0, -100}}, color = {95, 95, 95}));
      annotation(
        Icon(coordinateSystem(preserveAspectRatio = true, extent = {{-150, -100}, {150, 100}}), graphics = {Rectangle(extent = {{-150, -100}, {150, 100}}, lineColor = {0, 0, 0}, fillColor = {255, 255, 255}, fillPattern = FillPattern.Solid), Bitmap(extent = {{-90, -90}, {90, 90}}, fileName = "modelica://AlyssaModel/Resources/Images/Lightning_McQueen.png"), Text(extent = {{-100, -135}, {100, -105}}, textString = "%name")}));
    end AlyssaVehicleRig;
  end Vehicles;

  package Experiments
      partial model OptimalControlBase "vehicle on the rig with the steer input; the controller and pedal inputs are added by the extending models"
      Vehicles.AlyssaVehicle vehicle annotation(
        Placement(transformation(origin = {-49.5, -1}, extent = {{-31.5, -21}, {31.5, 21}})));
      Modelica.Blocks.Sources.Constant mu(k = 1.0) annotation(
        Placement(transformation(origin = {-130, 10}, extent = {{-10, -10}, {10, 10}})));
      inner Roads.FlatRoad road annotation(
        Placement(transformation(origin = {-52, -90}, extent = {{-10, -10}, {10, 10}})));
      inner Modelica.Mechanics.MultiBody.World world(n = {0, 0, 1}) annotation(
        Placement(transformation(origin = {-90, -90}, extent = {{-10, -10}, {10, 10}})));
      Rigs.Rig rig annotation(
        Placement(transformation(origin = {40, 0}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput steer annotation(
        Placement(transformation(origin = {-100, 60}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-100, 60}, extent = {{-12, -12}, {12, 12}})));
    equation
      connect(world.frame_b, rig.worldFrame) annotation(
        Line(points = {{-80, -90}, {-80, -39}, {16, -39}, {16, 0}}, color = {95, 95, 95}));
      connect(rig.vehicleFrame, vehicle.chassisFrame) annotation(
        Line(points = {{58, 2}, {80, 2}, {80, -13}, {-56, -13}, {-56, -28}}, color = {95, 95, 95}));
      connect(vehicle.hubFR, rig.hubFR) annotation(
        Line(points = {{-66, 20}, {26, 20}}, color = {135, 135, 135}));
      connect(vehicle.hubRR, rig.hubRR) annotation(
        Line(points = {{-34, 20}, {56, 20}}, color = {135, 135, 135}));
      connect(vehicle.hubRL, rig.hubRL) annotation(
        Line(points = {{-34, -22}, {56, -22}, {56, -20}}, color = {135, 135, 135}));
      connect(rig.hubFL, vehicle.hubFL) annotation(
        Line(points = {{26, -20}, {-20, -20}, {-20, -22}, {-66, -22}}, color = {135, 135, 135}));
  connect(vehicle.mu, mu.y) annotation(
        Line(points = {{-80, 10}, {-119, 10}}, color = {0, 0, 127}));
    end OptimalControlBase;

      model OptimalControl "single throttle input (-1 full brake .. 1 full throttle), split by ThrottleSmoothing"
      extends OptimalControlBase;
      Controllers.RigController rigController annotation(
        Placement(transformation(origin = {39, 59}, extent = {{-17, -17}, {17, 17}})));
  Modelica.Blocks.Interfaces.RealInput throttle annotation(
        Placement(transformation(origin = {-100, 80}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-100, 80}, extent = {{-12, -12}, {12, 12}})));
    equation
      connect(rigController.tau, rig.tau) annotation(
        Line(points = {{56, 50}, {34, 50}, {34, 12}}, color = {0, 0, 127}, thickness = 0.5));
      connect(throttle, rigController.throttle) annotation(
        Line(points = {{-100, 80}, {26, 80}, {26, 70}}, color = {0, 0, 127}));
      connect(steer, rigController.steer) annotation(
        Line(points = {{-100, 60}, {26, 60}, {26, 64}}, color = {0, 0, 127}));
      connect(vehicle.w, rigController.w) annotation(
        Line(points = {{-20, -6}, {26, -6}, {26, 76}}, color = {0, 0, 127}, thickness = 0.5));
      connect(vehicle.delta, rigController.delta) annotation(
        Line(points = {{-80, 14}, {52, 14}, {52, 56}}, color = {0, 0, 127}));
    end OptimalControl;

      model OptimalControlDriveBrake "separate drive and brake inputs (each 0 .. 1); wheel torque is linear in each"
      extends OptimalControlBase;
      Controllers.RigControllerDriveBrake rigController annotation(
        Placement(transformation(origin = {39, 59}, extent = {{-17, -17}, {17, 17}})));
  Modelica.Blocks.Interfaces.RealInput drive "0 .. 1, fraction of available drive torque" annotation(
        Placement(transformation(origin = {-100, 90}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-100, 90}, extent = {{-12, -12}, {12, 12}})));
  Modelica.Blocks.Interfaces.RealInput brake "0 .. 1, fraction of maximum brake torque" annotation(
        Placement(transformation(origin = {-100, 75}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-100, 75}, extent = {{-12, -12}, {12, 12}})));
    equation
      connect(rigController.tau, rig.tau) annotation(
        Line(points = {{56, 50}, {34, 50}, {34, 12}}, color = {0, 0, 127}, thickness = 0.5));
  connect(drive, rigController.drive) annotation(
        Line(points = {{-100, 90}, {26, 90}, {26, 74}}, color = {0, 0, 127}));
  connect(brake, rigController.brake) annotation(
        Line(points = {{-100, 75}, {20, 75}, {20, 69}}, color = {0, 0, 127}));
  connect(steer, rigController.steer) annotation(
        Line(points = {{-100, 60}, {26, 60}, {26, 64}}, color = {0, 0, 127}));
  connect(vehicle.w, rigController.w) annotation(
        Line(points = {{-20, -6}, {26, -6}, {26, 76}}, color = {0, 0, 127}, thickness = 0.5));
  connect(vehicle.delta, rigController.delta) annotation(
        Line(points = {{-80, 14}, {52, 14}, {52, 56}}, color = {0, 0, 127}));
    end OptimalControlDriveBrake;

      model OptimalControlPedalRate "drive and brake pedal RATE inputs (-1 .. 1); the pedal positions are model states, like the steer angle"
      extends OptimalControlBase;
      Controllers.RigControllerPedalRate rigController annotation(
        Placement(transformation(origin = {39, 59}, extent = {{-17, -17}, {17, 17}})));
  Modelica.Blocks.Interfaces.RealInput driveRate "-1 .. 1, drive pedal rate as a fraction of maxPedalRate" annotation(
        Placement(transformation(origin = {-100, 90}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-100, 90}, extent = {{-12, -12}, {12, 12}})));
  Modelica.Blocks.Interfaces.RealInput brakeRate "-1 .. 1, brake pedal rate as a fraction of maxPedalRate" annotation(
        Placement(transformation(origin = {-100, 75}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-100, 75}, extent = {{-12, -12}, {12, 12}})));
    equation
      connect(rigController.tau, rig.tau) annotation(
        Line(points = {{56, 50}, {34, 50}, {34, 12}}, color = {0, 0, 127}, thickness = 0.5));
  connect(driveRate, rigController.driveRate) annotation(
        Line(points = {{-100, 90}, {26, 90}, {26, 74}}, color = {0, 0, 127}));
  connect(brakeRate, rigController.brakeRate) annotation(
        Line(points = {{-100, 75}, {20, 75}, {20, 69}}, color = {0, 0, 127}));
  connect(steer, rigController.steer) annotation(
        Line(points = {{-100, 60}, {26, 60}, {26, 64}}, color = {0, 0, 127}));
  connect(vehicle.w, rigController.w) annotation(
        Line(points = {{-20, -6}, {26, -6}, {26, 76}}, color = {0, 0, 127}, thickness = 0.5));
  connect(vehicle.delta, rigController.delta) annotation(
        Line(points = {{-80, 14}, {52, 14}, {52, 56}}, color = {0, 0, 127}));
    end OptimalControlPedalRate;

    model FlatRoadSim
      OptimalControl optimalControl annotation(
        Placement(transformation(origin = {2, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Sources.Constant throttleInput(k = 0.5) annotation(
        Placement(transformation(origin = {-84, 20}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.RealExpression steerInput(y = 0.03*exp(-((time - 1)/0.2)^2))  annotation(
        Placement(transformation(origin = {-84, -22}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(throttleInput.y, optimalControl.throttle) annotation(
        Line(points = {{-72, 20}, {-8, 20}, {-8, 8}}, color = {0, 0, 127}));
  connect(steerInput.y, optimalControl.steer) annotation(
        Line(points = {{-72, -22}, {-8, -22}, {-8, 6}}, color = {0, 0, 127}));
    end FlatRoadSim;

    model OptimalControlFMU "OptimalControlPedalRate plus telemetry outputs, exported as an FMU for lap time optimization (see fmu/build_fmu.mos)"
      extends OptimalControlPedalRate;
      import Modelica.Units.SI;
      Modelica.Blocks.Interfaces.RealOutput vxBody(unit = "m/s") "chassis longitudinal velocity, body frame" annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput vyBody(unit = "m/s") "chassis lateral velocity, body frame (SAE, +right)" annotation(
        Placement(transformation(origin = {110, 70}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput axBody(unit = "m/s2") "chassis longitudinal acceleration, body frame" annotation(
        Placement(transformation(origin = {110, 50}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput ayBody(unit = "m/s2") "chassis lateral acceleration, body frame (SAE, +right)" annotation(
        Placement(transformation(origin = {110, 30}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput fx[4](each unit = "N") "tire longitudinal forces, FL FR RL RR" annotation(
        Placement(transformation(origin = {110, 10}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput fy[4](each unit = "N") "tire lateral forces, FL FR RL RR" annotation(
        Placement(transformation(origin = {110, -10}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput fz[4](each unit = "N") "tire normal loads, FL FR RL RR" annotation(
        Placement(transformation(origin = {110, -30}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput delta(unit = "rad") "steer command (rack travel / rackRatio); about the road wheel angle near centre, see deltaWheel" annotation(
        Placement(transformation(origin = {110, -50}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput deltaWheel[2](each unit = "rad") "front road wheel steer angles from the linkage, FL FR (+ = right, static toe removed)" annotation(
        Placement(transformation(origin = {110, -90}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput pedal "single-pedal equivalent drive - brake (-1 full brake .. 1 full throttle), comparable with driver data" annotation(
        Placement(transformation(origin = {110, -70}, extent = {{-10, -10}, {10, 10}})));
    protected
      SI.Velocity vBody[3];
      SI.Acceleration aBody[3];
    equation
      vBody = Modelica.Mechanics.MultiBody.Frames.resolve2(vehicle.vehicleBody.body.frame_a.R, vehicle.vehicleBody.body.v_0);
      aBody = Modelica.Mechanics.MultiBody.Frames.resolve2(vehicle.vehicleBody.body.frame_a.R, vehicle.vehicleBody.body.a_0);
      vxBody = vBody[1];
      vyBody = vBody[2];
      axBody = aBody[1];
      ayBody = aBody[2];
      fx = {vehicle.wheelFL.fx, vehicle.wheelFR.fx, vehicle.wheelRL.fx, vehicle.wheelRR.fx};
      fy = {vehicle.wheelFL.fy, vehicle.wheelFR.fy, vehicle.wheelRL.fy, vehicle.wheelRR.fy};
      fz = {vehicle.wheelFL.fz, vehicle.wheelFR.fz, vehicle.wheelRL.fz, vehicle.wheelRR.fz};
      delta = rigController.delta;
// toe is + = toe-in, so a right steer is +toe on the left wheel and -toe on the right
      deltaWheel = {vehicle.frontSuspension.cornerL.toe - vehicle.frontSuspension.cornerL.staticToe, -(vehicle.frontSuspension.cornerR.toe - vehicle.frontSuspension.cornerR.staticToe)};
      pedal = rigController.pedalSmoothing.drive - rigController.pedalSmoothing.brake;
    end OptimalControlFMU;

    model SteeringRig
  inner Modelica.Mechanics.MultiBody.World world(n = {0, 0, 1})  annotation(
        Placement(transformation(origin = {-90, -90}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.Fixed subframe annotation(
        Placement(transformation(origin = {0, 4}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Modelica.Blocks.Sources.RealExpression delta(y = 0.35*sin(2*Modelica.Constants.pi*0.5*time))  annotation(
        Placement(transformation(origin = {-90, 80}, extent = {{-10, -10}, {10, 10}})));
  Components.RackSteering steering annotation(
        Placement(transformation(origin = {-90, 0}, extent = {{-10, -10}, {10, 10}})));
  Components.Suspension.RigidCorner cornerL(side = -1, isFront = true)  annotation(
        Placement(transformation(origin = {-50, 70}, extent = {{-10, -10}, {10, 10}})));
  Components.Suspension.RigidCorner cornerR(side = 1, isFront = true)  annotation(
        Placement(transformation(origin = {-50, -50}, extent = {{-10, -10}, {10, 10}})));
    equation
  connect(steering.chassisConnect, subframe.frame_b) annotation(
        Line(points = {{-98, -2}, {0, -2}, {0, 14}}, color = {95, 95, 95}));
  connect(cornerL.chassisConnect, subframe.frame_b) annotation(
        Line(points = {{-62, 62}, {0, 62}, {0, 14}}, color = {95, 95, 95}));
  connect(cornerR.chassisConnect, subframe.frame_b) annotation(
        Line(points = {{-62, -58}, {0, -58}, {0, 14}}, color = {95, 95, 95}));
  connect(steering.tieRodInnerR, cornerR.tieRodInner) annotation(
        Line(points = {{-90, 4}, {-60, 4}, {-60, -44}}, color = {95, 95, 95}));
  connect(steering.tieRodInnerL, cornerL.tieRodInner) annotation(
        Line(points = {{-92, -6}, {-60, -6}, {-60, 76}}, color = {95, 95, 95}));
  connect(delta.y, steering.delta) annotation(
        Line(points = {{-78, 80}, {-96, 80}, {-96, 4}}, color = {0, 0, 127}));
    end SteeringRig;

    model RearToeRig
  inner Modelica.Mechanics.MultiBody.World world(n = {0, 0, 1})  annotation(
        Placement(transformation(origin = {-90, -90}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.Fixed subframe annotation(
        Placement(transformation(origin = {2, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Components.FixedToeLinks toeLinks annotation(
        Placement(transformation(origin = {-50, 50}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Constant deltaValue(k = 0)  annotation(
        Placement(transformation(origin = {-90, 70}, extent = {{-10, -10}, {10, 10}})));
  Components.Suspension.RigidCorner cornerL(side = -1, isFront = false)  annotation(
        Placement(transformation(origin = {-10, 70}, extent = {{-10, -10}, {10, 10}})));
  Components.Suspension.RigidCorner cornerR(side = 1, isFront = false)  annotation(
        Placement(transformation(origin = {-10, -50}, extent = {{-10, -10}, {10, 10}})));
    equation
  connect(deltaValue.y, toeLinks.delta) annotation(
        Line(points = {{-78, 70}, {-56, 70}, {-56, 54}}, color = {0, 0, 127}));
  connect(toeLinks.chassisConnect, subframe.frame_b) annotation(
        Line(points = {{-58, 48}, {-8, 48}, {-8, 0}}, color = {95, 95, 95}));
  connect(cornerR.chassisConnect, subframe.frame_b) annotation(
        Line(points = {{-22, -58}, {-8, -58}, {-8, 0}}, color = {95, 95, 95}));
  connect(cornerL.chassisConnect, subframe.frame_b) annotation(
        Line(points = {{-22, 62}, {-8, 62}, {-8, 0}}, color = {95, 95, 95}));
  connect(toeLinks.tieRodInnerL, cornerL.tieRodInner) annotation(
        Line(points = {{-52, 44}, {-20, 44}, {-20, 76}}, color = {95, 95, 95}));
  connect(toeLinks.tieRodInnerR, cornerR.tieRodInner) annotation(
        Line(points = {{-50, 54}, {-20, 54}, {-20, -44}}, color = {95, 95, 95}));
    end RearToeRig;
    
    model SuspensionRig
    inner Modelica.Mechanics.MultiBody.World world(n = {0, 0, 1})  annotation(
        Placement(transformation(origin = {-90, -90}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.Fixed subframe annotation(
        Placement(transformation(origin = {0, 4}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
    Modelica.Blocks.Sources.RealExpression delta(y = 0)  annotation(
        Placement(transformation(origin = {-90, 80}, extent = {{-10, -10}, {10, 10}})));
    Components.RackSteering steering annotation(
        Placement(transformation(origin = {-90, 0}, extent = {{-10, -10}, {10, 10}})));
  Components.Suspension.DoubleWishboneCorner cornerR(side = 1, isFront = true)  annotation(
        Placement(transformation(origin = {-30, 50}, extent = {{-10, -10}, {10, 10}})));
  Components.Suspension.DoubleWishboneCorner cornerL(side = -1, isFront = true)  annotation(
        Placement(transformation(origin = {-30, -50}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Forces.WorldForce loadL(force = {0, 0, -(cornerL.F0 + cornerL.mUnsprung*Modelica.Constants.g_n + 3000*sin(2*Modelica.Constants.pi*0.5*time))}) annotation(
        Placement(transformation(origin = {-86, -40}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Forces.WorldForce loadR(force = {0, 0, -(cornerR.F0 + cornerR.mUnsprung*Modelica.Constants.g_n + 3000*sin(2*Modelica.Constants.pi*0.5*time))}) annotation(
        Placement(transformation(origin = {-86, 40}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(steering.chassisConnect, subframe.frame_b) annotation(
        Line(points = {{-98, -2}, {0, -2}, {0, 14}}, color = {95, 95, 95}));
      connect(delta.y, steering.delta) annotation(
        Line(points = {{-78, 80}, {-96, 80}, {-96, 4}}, color = {0, 0, 127}));
  connect(cornerL.wheelConnect, loadL.frame_b) annotation(
        Line(points = {{-22, -50}, {-76, -50}, {-76, -40}}, color = {95, 95, 95}));
  connect(loadR.frame_b, cornerR.wheelConnect) annotation(
        Line(points = {{-76, 40}, {-50, 40}, {-50, 50}, {-22, 50}}, color = {95, 95, 95}));
  connect(steering.tieRodInnerR, cornerR.tieRodInner) annotation(
        Line(points = {{-90, 4}, {-56, 4}, {-56, 56}, {-40, 56}}, color = {95, 95, 95}));
  connect(steering.tieRodInnerL, cornerL.tieRodInner) annotation(
        Line(points = {{-92, -6}, {-40, -6}, {-40, -44}}, color = {95, 95, 95}));
  connect(cornerL.chassisConnect, subframe.frame_b) annotation(
        Line(points = {{-42, -58}, {0, -58}, {0, 14}}, color = {95, 95, 95}));
  connect(cornerR.chassisConnect, subframe.frame_b) annotation(
        Line(points = {{-42, 42}, {0, 42}, {0, 14}}, color = {95, 95, 95}));
    end SuspensionRig;
    
    model RearSuspensionRig
    inner Modelica.Mechanics.MultiBody.World world(n = {0, 0, 1})  annotation(
        Placement(transformation(origin = {-90, -90}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.Fixed subframe annotation(
        Placement(transformation(origin = {0, 4}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
    Modelica.Blocks.Sources.RealExpression delta(y = 0)  annotation(
        Placement(transformation(origin = {-90, 80}, extent = {{-10, -10}, {10, 10}})));
    Components.Suspension.DoubleWishboneCorner cornerR(side = 1, isFront = false)  annotation(
        Placement(transformation(origin = {-30, 50}, extent = {{-10, -10}, {10, 10}})));
    Components.Suspension.DoubleWishboneCorner cornerL(side = -1, isFront = false)  annotation(
        Placement(transformation(origin = {-30, -50}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Forces.WorldForce loadL(force = {0, 0, -(cornerL.F0 + cornerL.mUnsprung*Modelica.Constants.g_n + 3000*sin(2*Modelica.Constants.pi*0.5*time))}) annotation(
        Placement(transformation(origin = {-86, -40}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Forces.WorldForce loadR(force = {0, 0, -(cornerR.F0 + cornerR.mUnsprung*Modelica.Constants.g_n + 3000*sin(2*Modelica.Constants.pi*0.5*time))}) annotation(
        Placement(transformation(origin = {-86, 40}, extent = {{-10, -10}, {10, 10}})));
  Components.FixedToeLinks fixedToeLinks annotation(
        Placement(transformation(origin = {-90, 0}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(cornerL.wheelConnect, loadL.frame_b) annotation(
        Line(points = {{-22, -50}, {-76, -50}, {-76, -40}}, color = {95, 95, 95}));
      connect(loadR.frame_b, cornerR.wheelConnect) annotation(
        Line(points = {{-76, 40}, {-50, 40}, {-50, 50}, {-22, 50}}, color = {95, 95, 95}));
      connect(cornerL.chassisConnect, subframe.frame_b) annotation(
        Line(points = {{-42, -58}, {0, -58}, {0, 14}}, color = {95, 95, 95}));
      connect(cornerR.chassisConnect, subframe.frame_b) annotation(
        Line(points = {{-42, 42}, {0, 42}, {0, 14}}, color = {95, 95, 95}));
  connect(delta.y, fixedToeLinks.delta) annotation(
        Line(points = {{-78, 80}, {-98, 80}, {-98, 4}, {-96, 4}}, color = {0, 0, 127}));
  connect(fixedToeLinks.chassisConnect, subframe.frame_b) annotation(
        Line(points = {{-98, -2}, {0, -2}, {0, 14}}, color = {95, 95, 95}));
  connect(fixedToeLinks.tieRodInnerR, cornerR.tieRodInner) annotation(
        Line(points = {{-90, 4}, {-40, 4}, {-40, 56}}, color = {95, 95, 95}));
  connect(fixedToeLinks.tieRodInnerL, cornerL.tieRodInner) annotation(
        Line(points = {{-92, -6}, {-40, -6}, {-40, -44}}, color = {95, 95, 95}));
    end RearSuspensionRig;

    model SevenPost
  Vehicles.AlyssaVehicle vehicle annotation(
        Placement(transformation(origin = {-49, 4.66667}, extent = {{-32, -21.3333}, {32, 21.3333}})));
    equation

    end SevenPost;
  end Experiments;

  package Controllers
    model RigController
      Modelica.Blocks.Interfaces.RealInput steer annotation(
        Placement(transformation(origin = {-100, 70}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-80, 25}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput throttle annotation(
        Placement(transformation(origin = {-100, 88}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-80, 60}, extent = {{-20, -20}, {20, 20}})));
      ThrottleSmoothing throttleSmoothing annotation(
        Placement(transformation(origin = {-30, 70}, extent = {{-10, -10}, {10, 10}})));
      SteerSmoothing steerSmoothing annotation(
        Placement(transformation(origin = {-30, 30}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealInput w[4](each unit = "rad/s") "wheel speeds" annotation(
        Placement(transformation(origin = {-100, 50}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-80, 95}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput tau[4](each unit = "N.m") "torque demand" annotation(
        Placement(transformation(origin = {100, 8}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {100, -50}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput delta(unit = "rad") annotation(
        Placement(transformation(origin = {100, -12}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {82, -22}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(steer, steerSmoothing.uSteer) annotation(
        Line(points = {{-100, 70}, {-36, 70}, {-36, 34}}, color = {0, 0, 127}));
      connect(throttle, throttleSmoothing.u) annotation(
        Line(points = {{-100, 88}, {-22, 88}, {-22, 76}}, color = {0, 0, 127}));
      connect(w, throttleSmoothing.w) annotation(
        Line(points = {{-100, 50}, {-22, 50}, {-22, 72}}, color = {0, 0, 127}, thickness = 0.5));
      connect(steerSmoothing.delta, delta) annotation(
        Line(points = {{-22, 30}, {39, 30}, {39, -12}, {100, -12}}, color = {0, 0, 127}));
      connect(throttleSmoothing.tau, tau) annotation(
        Line(points = {{-24, 68}, {100, 68}, {100, 8}}, color = {0, 0, 127}, thickness = 0.5));
      annotation(
        Icon(coordinateSystem(preserveAspectRatio = true, extent = {{-100, -100}, {100, 100}}), graphics = {Rectangle(extent = {{-100, -100}, {100, 100}}, lineColor = {0, 0, 0}, fillColor = {255, 255, 255}, fillPattern = FillPattern.Solid), Bitmap(extent = {{-90, -90}, {90, 90}}, fileName = "modelica://AlyssaModel/Resources/Images/pcb icon.png"), Text(extent = {{-100, -135}, {100, -105}}, textString = "%name")}));
    end RigController;

    model RigControllerDriveBrake "RigController with separate drive and brake inputs instead of one throttle"
      Modelica.Blocks.Interfaces.RealInput steer annotation(
        Placement(transformation(origin = {-100, 70}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-80, 25}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput drive "0 .. 1" annotation(
        Placement(transformation(origin = {-100, 96}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-80, 75}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput brake "0 .. 1" annotation(
        Placement(transformation(origin = {-100, 84}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-80, 50}, extent = {{-20, -20}, {20, 20}})));
      DriveBrakeTorque driveBrakeTorque annotation(
        Placement(transformation(origin = {-30, 70}, extent = {{-10, -10}, {10, 10}})));
      SteerSmoothing steerSmoothing annotation(
        Placement(transformation(origin = {-30, 30}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealInput w[4](each unit = "rad/s") "wheel speeds" annotation(
        Placement(transformation(origin = {-100, 50}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-80, 95}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput tau[4](each unit = "N.m") "torque demand" annotation(
        Placement(transformation(origin = {100, 8}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {100, -50}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput delta(unit = "rad") annotation(
        Placement(transformation(origin = {100, -12}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {82, -22}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(steer, steerSmoothing.uSteer) annotation(
        Line(points = {{-100, 70}, {-36, 70}, {-36, 34}}, color = {0, 0, 127}));
      connect(drive, driveBrakeTorque.uDrive) annotation(
        Line(points = {{-100, 96}, {-22, 96}, {-22, 78}}, color = {0, 0, 127}));
      connect(brake, driveBrakeTorque.uBrake) annotation(
        Line(points = {{-100, 84}, {-26, 84}, {-26, 76}}, color = {0, 0, 127}));
      connect(w, driveBrakeTorque.w) annotation(
        Line(points = {{-100, 50}, {-22, 50}, {-22, 72}}, color = {0, 0, 127}, thickness = 0.5));
      connect(steerSmoothing.delta, delta) annotation(
        Line(points = {{-22, 30}, {39, 30}, {39, -12}, {100, -12}}, color = {0, 0, 127}));
      connect(driveBrakeTorque.tau, tau) annotation(
        Line(points = {{-24, 68}, {100, 68}, {100, 8}}, color = {0, 0, 127}, thickness = 0.5));
      annotation(
        Icon(coordinateSystem(preserveAspectRatio = true, extent = {{-100, -100}, {100, 100}}), graphics = {Rectangle(extent = {{-100, -100}, {100, 100}}, lineColor = {0, 0, 0}, fillColor = {255, 255, 255}, fillPattern = FillPattern.Solid), Bitmap(extent = {{-90, -90}, {90, 90}}, fileName = "modelica://AlyssaModel/Resources/Images/pcb icon.png"), Text(extent = {{-100, -135}, {100, -105}}, textString = "%name")}));
    end RigControllerDriveBrake;

    model RigControllerPedalRate "RigController with drive and brake pedal RATE inputs; pedal positions are states (PedalSmoothing)"
      Modelica.Blocks.Interfaces.RealInput steer annotation(
        Placement(transformation(origin = {-100, 70}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-80, 25}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput driveRate "-1 .. 1" annotation(
        Placement(transformation(origin = {-100, 96}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-80, 75}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput brakeRate "-1 .. 1" annotation(
        Placement(transformation(origin = {-100, 84}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-80, 50}, extent = {{-20, -20}, {20, 20}})));
      PedalSmoothing pedalSmoothing annotation(
        Placement(transformation(origin = {-60, 90}, extent = {{-10, -10}, {10, 10}})));
      DriveBrakeTorque driveBrakeTorque annotation(
        Placement(transformation(origin = {-30, 70}, extent = {{-10, -10}, {10, 10}})));
      SteerSmoothing steerSmoothing annotation(
        Placement(transformation(origin = {-30, 30}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealInput w[4](each unit = "rad/s") "wheel speeds" annotation(
        Placement(transformation(origin = {-100, 50}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-80, 95}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput tau[4](each unit = "N.m") "torque demand" annotation(
        Placement(transformation(origin = {100, 8}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {100, -50}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput delta(unit = "rad") annotation(
        Placement(transformation(origin = {100, -12}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {82, -22}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(steer, steerSmoothing.uSteer) annotation(
        Line(points = {{-100, 70}, {-36, 70}, {-36, 34}}, color = {0, 0, 127}));
      connect(driveRate, pedalSmoothing.uDriveRate) annotation(
        Line(points = {{-100, 96}, {-70, 96}}, color = {0, 0, 127}));
      connect(brakeRate, pedalSmoothing.uBrakeRate) annotation(
        Line(points = {{-100, 84}, {-70, 84}}, color = {0, 0, 127}));
      connect(pedalSmoothing.drive, driveBrakeTorque.uDrive) annotation(
        Line(points = {{-50, 94}, {-38, 94}, {-38, 78}}, color = {0, 0, 127}));
      connect(pedalSmoothing.brake, driveBrakeTorque.uBrake) annotation(
        Line(points = {{-50, 86}, {-38, 86}, {-38, 76}}, color = {0, 0, 127}));
      connect(w, driveBrakeTorque.w) annotation(
        Line(points = {{-100, 50}, {-22, 50}, {-22, 72}}, color = {0, 0, 127}, thickness = 0.5));
      connect(steerSmoothing.delta, delta) annotation(
        Line(points = {{-22, 30}, {39, 30}, {39, -12}, {100, -12}}, color = {0, 0, 127}));
      connect(driveBrakeTorque.tau, tau) annotation(
        Line(points = {{-24, 68}, {100, 68}, {100, 8}}, color = {0, 0, 127}, thickness = 0.5));
      annotation(
        Icon(coordinateSystem(preserveAspectRatio = true, extent = {{-100, -100}, {100, 100}}), graphics = {Rectangle(extent = {{-100, -100}, {100, 100}}, lineColor = {0, 0, 0}, fillColor = {255, 255, 255}, fillPattern = FillPattern.Solid), Bitmap(extent = {{-90, -90}, {90, 90}}, fileName = "modelica://AlyssaModel/Resources/Images/pcb icon.png"), Text(extent = {{-100, -135}, {100, -105}}, textString = "%name")}));
    end RigControllerPedalRate;

    model ThrottleSmoothing
      import Modelica.Units.SI;
      parameter Real rampWidth = 0.3 "pedal travel over which drive/brake engage (quadratic ramp)";
      parameter SI.AngularVelocity wEps = 1.0;
      parameter SI.Torque tEps = 1.0;
      Modelica.Blocks.Interfaces.RealInput u "-1 = full brake, 1 = full throttle" annotation(
        Placement(transformation(origin = {-100, 70}, extent = {{-14, -14}, {14, 14}}), iconTransformation(origin = {70, 60}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput w[4](each unit = "rad/s") "wheel speeds" annotation(
        Placement(transformation(origin = {-100, 30}, extent = {{-14, -14}, {14, 14}}), iconTransformation(origin = {72, 16}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput tau[4](each unit = "N.m") "torque demand" annotation(
        Placement(transformation(origin = {100, 8}, extent = {{-14, -14}, {14, 14}}), iconTransformation(origin = {54, -16}, extent = {{-20, -20}, {20, 20}})));
      DriveBrakeTorque driveBrakeTorque(wEps = wEps, tEps = tEps) annotation(
        Placement(transformation(origin = {30, 10}, extent = {{-10, -10}, {10, 10}})));
      Real uDrive;
      Real uBrake;
    equation
// split the command into throttle and brake with a C1 ramp: exactly zero on the other side of
// u = 0 (no drive/brake overlap), quadratic over the first rampWidth of travel (constant curvature),
// linear beyond, normalized so that |u| = 1 still gives full torque
      uDrive = noEvent(if u <= 0 then 0 elseif u < rampWidth then u^2/(2*rampWidth) else u - rampWidth/2)/(1 - rampWidth/2);
      uBrake = noEvent(if u >= 0 then 0 elseif -u < rampWidth then u^2/(2*rampWidth) else -u - rampWidth/2)/(1 - rampWidth/2);
      driveBrakeTorque.uDrive = uDrive;
      driveBrakeTorque.uBrake = uBrake;
      connect(w, driveBrakeTorque.w);
      connect(driveBrakeTorque.tau, tau);
    end ThrottleSmoothing;

    model DriveBrakeTorque "wheel torques from separate drive and brake commands; linear in each command"
      import Modelica.Units.SI;
      parameter SI.AngularVelocity wEps = 1.0;
      parameter SI.Torque tEps = 1.0;
      parameters vehicleParams annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealInput uDrive "0 .. 1, fraction of available drive torque" annotation(
        Placement(transformation(origin = {-100, 80}, extent = {{-14, -14}, {14, 14}}), iconTransformation(origin = {-80, 80}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput uBrake "0 .. 1, fraction of maximum brake torque" annotation(
        Placement(transformation(origin = {-100, 60}, extent = {{-14, -14}, {14, 14}}), iconTransformation(origin = {-80, 60}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput w[4](each unit = "rad/s") "wheel speeds" annotation(
        Placement(transformation(origin = {-100, 30}, extent = {{-14, -14}, {14, 14}}), iconTransformation(origin = {-80, 16}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput tau[4](each unit = "N.m") "torque demand" annotation(
        Placement(transformation(origin = {100, 8}, extent = {{-14, -14}, {14, 14}}), iconTransformation(origin = {80, -16}, extent = {{-20, -20}, {20, 20}})));
      SI.AngularVelocity wDrive;
      SI.Torque tauPower;
      SI.Torque tauDrive;
    equation
      wDrive = sqrt(((w[3] + w[4])/2)^2 + wEps^2);
// rear wheels only
      tauPower = vehicleParams.hpPower*vehicleParams.engineEff/wDrive;
      tauDrive = 0.5*(vehicleParams.maxDriveTorque + tauPower - sqrt((vehicleParams.maxDriveTorque - tauPower)^2 + tEps^2));
      tau[1] = -uBrake*vehicleParams.maxBrakeTorque*vehicleParams.brakeBias*0.5*w[1]/sqrt(w[1]^2 + wEps^2);
      tau[2] = -uBrake*vehicleParams.maxBrakeTorque*vehicleParams.brakeBias*0.5*w[2]/sqrt(w[2]^2 + wEps^2);
      tau[3] = uDrive*tauDrive*0.5 - uBrake*vehicleParams.maxBrakeTorque*(1 - vehicleParams.brakeBias)*0.5*w[3]/sqrt(w[3]^2 + wEps^2);
      tau[4] = uDrive*tauDrive*0.5 - uBrake*vehicleParams.maxBrakeTorque*(1 - vehicleParams.brakeBias)*0.5*w[4]/sqrt(w[4]^2 + wEps^2);
    end DriveBrakeTorque;

    model SteerSmoothing
      import Modelica.Units.SI;
      parameters vehicleParams annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealInput uSteer "-1 = full left, 1 = full right" annotation(
        Placement(transformation(origin = {-100, 50}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-56, 34}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput delta(unit = "rad", start = 0, fixed = true, stateSelect = StateSelect.always) annotation(
        Placement(transformation(origin = {100, 50}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {76, 8}, extent = {{-10, -10}, {10, 10}})));
    equation
      der(delta) = vehicleParams.maxSteerRate*uSteer;
    end SteerSmoothing;

    model PedalSmoothing "drive and brake pedal positions as states driven by rate commands, like SteerSmoothing"
      parameters vehicleParams annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealInput uDriveRate "-1 .. 1, fraction of maxPedalRate" annotation(
        Placement(transformation(origin = {-100, 60}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-80, 60}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput uBrakeRate "-1 .. 1, fraction of maxPedalRate" annotation(
        Placement(transformation(origin = {-100, 20}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-80, 20}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput drive(start = 0, fixed = true, stateSelect = StateSelect.always) "0 .. 1, fraction of available drive torque" annotation(
        Placement(transformation(origin = {100, 60}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {100, 60}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput brake(start = 0, fixed = true, stateSelect = StateSelect.always) "0 .. 1, fraction of maximum brake torque" annotation(
        Placement(transformation(origin = {100, 20}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {100, 20}, extent = {{-10, -10}, {10, 10}})));
    equation
      der(drive) = vehicleParams.maxPedalRate*uDriveRate;
      der(brake) = vehicleParams.maxPedalRate*uBrakeRate;
    end PedalSmoothing;

    model RigControllerSevenPost
  Modelica.Blocks.Interfaces.RealInput displacementInputs[4](each unit="m") "vertical displacement of FL, FR, RL, RR platforms" annotation(
        Placement(transformation(origin = {-100, 60}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-60, 74}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput chassisForceInputs[3](each unit="N") "forces applied by the 3 chassis actuators" annotation(
        Placement(transformation(origin = {-100, 40}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-60, 74}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealOutput displacementOutputs[4](each unit="m") annotation(
        Placement(transformation(origin = {100, 60}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {66, 66}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput chassisForceOutputs[3](each unit="N") annotation(
        Placement(transformation(origin = {100, 40}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {16, 24}, extent = {{-10, -10}, {10, 10}})));
    equation
  connect(displacementInputs, displacementOutputs) annotation(
        Line(points = {{-100, 60}, {100, 60}}, color = {0, 0, 127}, thickness = 0.5));
  connect(chassisForceInputs, chassisForceOutputs) annotation(
        Line(points = {{-100, 40}, {100, 40}}, color = {0, 0, 127}, thickness = 0.5));
    end RigControllerSevenPost;
  end Controllers;

  package MotionBlocks
      model FreeMotionPlanar "6-DOF, SAE coordinates"
      import Modelica.Units.SI;
      parameter SI.Position zChassis0 = -0.323 "temporary for heave start" annotation(
        Placement(visible = false, transformation(extent = {{0, 0}, {0, 0}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a worldFrame annotation(
        Placement(transformation(origin = {-100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-30, 18}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_b vehicleFrame annotation(
        Placement(transformation(origin = {100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-74, 6}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Joints.Prismatic longitudinal(n = {1, 0, 0}, s(start = 0, fixed = true), v(start = 0, fixed = true), stateSelect = StateSelect.always) annotation(
        Placement(transformation(origin = {-80, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Joints.Prismatic lateral(n = {0, 1, 0}, s(start = 0, fixed = true), v(start = 0, fixed = true), stateSelect = StateSelect.always) annotation(
        Placement(transformation(origin = {-50, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Joints.Prismatic heave(n = {0, 0, 1}, s(start = zChassis0, fixed = true), v(start = 0, fixed = true), stateSelect = StateSelect.always) annotation(
        Placement(transformation(origin = {-22, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Joints.Revolute yaw(n = {0, 0, 1}, phi(start = 0, fixed = true), w(start = 0, fixed = true), stateSelect = StateSelect.always) annotation(
        Placement(transformation(origin = {6, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Joints.Revolute pitch(n = {0, 1, 0}, phi(start = 0, fixed = true), w(start = 0, fixed = true), stateSelect = StateSelect.always) annotation(
        Placement(transformation(origin = {34, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Joints.Revolute roll(n = {1, 0, 0}, phi(start = 0, fixed = true), w(start = 0, fixed = true), stateSelect = StateSelect.always) annotation(
        Placement(transformation(origin = {62, 0}, extent = {{-10, -10}, {10, 10}})));
      parameters vehicleParams annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(worldFrame, longitudinal.frame_a) annotation(
        Line(points = {{-100, 0}, {-90, 0}}));
      connect(longitudinal.frame_b, lateral.frame_a) annotation(
        Line(points = {{-70, 0}, {-60, 0}}, color = {95, 95, 95}));
      connect(lateral.frame_b, heave.frame_a) annotation(
        Line(points = {{-40, 0}, {-32, 0}}, color = {95, 95, 95}));
      connect(heave.frame_b, yaw.frame_a) annotation(
        Line(points = {{-12, 0}, {-4, 0}}, color = {95, 95, 95}));
      connect(yaw.frame_b, pitch.frame_a) annotation(
        Line(points = {{16, 0}, {24, 0}}, color = {95, 95, 95}));
      connect(pitch.frame_b, roll.frame_a) annotation(
        Line(points = {{44, 0}, {52, 0}}, color = {95, 95, 95}));
      connect(roll.frame_b, vehicleFrame) annotation(
        Line(points = {{72, 0}, {100, 0}}, color = {95, 95, 95}));
    end FreeMotionPlanar;

    model SevenPostMotion
  Modelica.Mechanics.MultiBody.Interfaces.Frame_a worldFrame annotation(
        Placement(transformation(origin = {-100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-106, 14}, extent = {{-16, -16}, {16, 16}})));
  parameters vehicleParams annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.Prismatic heave(n = {0, 0, 1}, s(start = -0.323, fixed = true), v(start = 0, fixed = true))  annotation(
        Placement(transformation(origin = {-64, 0}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.Revolute pitch(n = {0, 1, 0}, phi(start = 0, fixed = true), w(start = 0, fixed = true))  annotation(
        Placement(transformation(origin = {-10, 0}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.Revolute roll(n = {1, 0, 0}, phi(start = 0, fixed = true), w(start = 0, fixed = true))  annotation(
        Placement(transformation(origin = {30, 0}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_b vehicleFrame annotation(
        Placement(transformation(origin = {100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {40, 8}, extent = {{-16, -16}, {16, 16}})));
    equation
  connect(worldFrame, heave.frame_a) annotation(
        Line(points = {{-100, 0}, {-74, 0}}));
  connect(heave.frame_b, pitch.frame_a) annotation(
        Line(points = {{-54, 0}, {-20, 0}}, color = {95, 95, 95}));
  connect(pitch.frame_b, roll.frame_a) annotation(
        Line(points = {{0, 0}, {20, 0}}, color = {95, 95, 95}));
  connect(roll.frame_b, vehicleFrame) annotation(
        Line(points = {{40, 0}, {100, 0}}, color = {95, 95, 95}));
    end SevenPostMotion;
  end MotionBlocks;

  package Rigs
      model Rig
      Modelica.Blocks.Interfaces.RealInput tau[4](each unit = "N.m") annotation(
        Placement(transformation(origin = {-100, 54}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {-34, 56}, extent = {{-20, -20}, {20, 20}})));
      MotionBlocks.FreeMotionPlanar motion annotation(
        Placement(transformation(extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearingAdaptor hubFrameFR(includeBearingConnector = true) annotation(
        Placement(transformation(origin = {-48, 68}, extent = {{-16, -16}, {16, 16}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearingAdaptor hubFrameRR(includeBearingConnector = true) annotation(
        Placement(transformation(origin = {39, 69}, extent = {{-16, -16}, {16, 16}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearingAdaptor hubFrameFL(includeBearingConnector = true) annotation(
        Placement(transformation(origin = {-60, -64}, extent = {{-16, -16}, {16, 16}}, rotation = 90)));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearingAdaptor hubFrameRL(includeBearingConnector = true) annotation(
        Placement(transformation(origin = {60, -65}, extent = {{-16, -16}, {16, 16}}, rotation = 90)));
      Modelica.Mechanics.Rotational.Sources.Torque torqueFR(useSupport = true) annotation(
        Placement(transformation(origin = {-58, 44}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.Rotational.Sources.Torque torqueRR(useSupport = true) annotation(
        Placement(transformation(origin = {30, 44}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.Rotational.Sources.Torque torqueFL(useSupport = true) annotation(
        Placement(transformation(origin = {-70, -40}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.Rotational.Sources.Torque torqueRL(useSupport = true) annotation(
        Placement(transformation(origin = {50, -40}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a worldFrame annotation(
        Placement(transformation(origin = {-100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-116, 2}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_b vehicleFrame annotation(
        Placement(transformation(origin = {100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {86, 6}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Parts.Mounting1D mounting1DFR(n = {0, -1, 0}) annotation(
        Placement(transformation(origin = {-82, 88}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubFR(includeBearingConnector = true) annotation(
        Placement(transformation(origin = {-48, 102}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {-75, 100}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubRR(includeBearingConnector = true) annotation(
        Placement(transformation(origin = {40, 102}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {75, 100}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Parts.Mounting1D mounting1DRR(n = {0, -1, 0}) annotation(
        Placement(transformation(origin = {10, 90}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubRL(includeBearingConnector = true) annotation(
        Placement(transformation(origin = {61, -100}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {75, -100}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Parts.Mounting1D mounting1DRL(n = {0, -1, 0}) annotation(
        Placement(transformation(origin = {85, -38}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubFL(includeBearingConnector = true) annotation(
        Placement(transformation(origin = {-60, -99}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {-75, -100}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Parts.Mounting1D mounting1DFL(n = {0, -1, 0}) annotation(
        Placement(transformation(origin = {-44, -41}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(tau[1], torqueFL.tau) annotation(
        Line(points = {{-100, 54}, {-100, 70}, {-82, 70}, {-82, -40}}, color = {0, 0, 127}));
      connect(tau[3], torqueRL.tau) annotation(
        Line(points = {{-100, 54}, {-100, 70}, {38, 70}, {38, -40}}, color = {0, 0, 127}));
      connect(torqueFR.flange, hubFrameFR.flange) annotation(
        Line(points = {{-48, 44}, {-48, 68}}));
      connect(torqueRR.flange, hubFrameRR.flange) annotation(
        Line(points = {{40, 44}, {40, 57}, {39, 57}, {39, 69}}));
      connect(torqueFL.flange, hubFrameFL.flange) annotation(
        Line(points = {{-60, -40}, {-60, -64}}));
      connect(torqueRL.flange, hubFrameRL.flange) annotation(
        Line(points = {{60, -40}, {60, -64}}));
      connect(worldFrame, motion.worldFrame) annotation(
        Line(points = {{-100, 0}, {-2, 0}, {-2, 2}}));
      connect(motion.vehicleFrame, vehicleFrame) annotation(
        Line(points = {{-8, 0}, {100, 0}}, color = {95, 95, 95}));
      connect(tau[2], torqueFR.tau) annotation(
        Line(points = {{-100, 54}, {-70, 54}, {-70, 44}}, color = {0, 0, 127}));
      connect(torqueFR.support, mounting1DFR.flange_b) annotation(
        Line(points = {{-58, 34}, {-72, 34}, {-72, 88}}));
      connect(hubFR, hubFrameFR.flangeAndFrame) annotation(
        Line(points = {{-48, 102}, {-48, 84}}));
      connect(mounting1DFR.frame_a, hubFrameFR.frame) annotation(
        Line(points = {{-82, 78}, {-64, 78}, {-64, 68}}, color = {95, 95, 95}));
      connect(tau[4], torqueRR.tau) annotation(
        Line(points = {{-100, 54}, {16, 54}, {16, 45}, {18, 45}, {18, 44}}, color = {0, 0, 127}));
      connect(hubRR, hubFrameRR.flangeAndFrame) annotation(
        Line(points = {{40, 102}, {40, 86}}));
      connect(mounting1DRR.flange_b, torqueRR.support) annotation(
        Line(points = {{20, 90}, {30, 90}, {30, 34}}));
      connect(mounting1DRR.frame_a, hubFrameRR.frame) annotation(
        Line(points = {{10, 80}, {24, 80}, {24, 70}}, color = {95, 95, 95}));
      connect(mounting1DFL.frame_a, hubFrameFL.frame) annotation(
        Line(points = {{-44, -50}, {-44, -64}}, color = {95, 95, 95}));
      connect(torqueFL.support, mounting1DFL.flange_b) annotation(
        Line(points = {{-70, -50}, {-34, -50}, {-34, -40}}));
      connect(hubFrameFL.flangeAndFrame, hubFL) annotation(
        Line(points = {{-60, -80}, {-60, -98}}, color = {135, 135, 135}));
      connect(torqueRL.support, mounting1DRL.flange_b) annotation(
        Line(points = {{50, -50}, {96, -50}, {96, -38}}));
      connect(hubFrameRL.frame, mounting1DRL.frame_a) annotation(
        Line(points = {{76, -64}, {86, -64}, {86, -48}}, color = {95, 95, 95}));
      connect(hubFrameRL.flangeAndFrame, hubRL) annotation(
        Line(points = {{60, -80}, {62, -80}, {62, -100}}, color = {135, 135, 135}));
    end Rig;

    model RigSevenPost
  Modelica.Mechanics.MultiBody.Interfaces.Frame_a worldFrame annotation(
        Placement(transformation(origin = {-100, 1}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-48, -11}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation translationFR(r = {vehicleParams.a, vehicleParams.tf/2, 0})  annotation(
        Placement(transformation(origin = {-60, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  parameters vehicleParams annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation translationFL(r = {vehicleParams.a, -vehicleParams.tf/2, 0})  annotation(
        Placement(transformation(origin = {-60, -30}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation translationRR(r = {-vehicleParams.b, vehicleParams.tr/2, 0})  annotation(
        Placement(transformation(origin = {40, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation translationRL(r = {-vehicleParams.b, -vehicleParams.tr/2, 0})  annotation(
        Placement(transformation(origin = {40, -30}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Mechanics.MultiBody.Joints.Prismatic prismaticFR(n = {0, 0, 1}, useAxisFlange = true)  annotation(
        Placement(transformation(origin = {-50, 70}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.Prismatic prismaticFL(useAxisFlange = true, n = {0, 0, 1})  annotation(
        Placement(transformation(origin = {-50, -70}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.Prismatic prismaticRR(useAxisFlange = true, n = {0, 0, 1})  annotation(
        Placement(transformation(origin = {50, 72}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.Prismatic prismaticRL(useAxisFlange = true, n = {0, 0, 1})  annotation(
        Placement(transformation(origin = {50, -70}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.BodyShape platformFR(animateSphere = false, r = {0, 0, 0}, r_CM = {0, 0, 0.010}, m = 13.5, I_11 = 0.2817, I_22 = 0.2817, I_33 = 0.5625, shapeType = "box", r_shape = {-0.25, 0, 0.010}, lengthDirection = {1, 0, 0}, widthDirection = {0, 1, 0}, length = 0.50, width = 0.50, height = 0.020)  annotation(
        Placement(transformation(origin = {-30, 40}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_b wheelConnectRR annotation(
        Placement(transformation(origin = {100, 40}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {98, 34}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_b wheelConnectRL annotation(
        Placement(transformation(origin = {100, -40}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {94, -46}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_b wheelConnectFR annotation(
        Placement(transformation(origin = {-100, 40}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-108, 36}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_b wheelConnectFL annotation(
        Placement(transformation(origin = {-100, -40}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-94, -60}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Blocks.Interfaces.RealInput displacementInputs[4](each unit="m") annotation(
        Placement(transformation(origin = {-100, 80}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {-82, 72}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Mechanics.Translational.Sources.Position positionFR(useSupport = true)  annotation(
        Placement(transformation(origin = {-48, 100}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.Translational.Sources.Position positionRR(useSupport = true)  annotation(
        Placement(transformation(origin = {52, 100}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.Translational.Sources.Position positionFL(useSupport = true)  annotation(
        Placement(transformation(origin = {-48, -100}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.Translational.Sources.Position positionRL(useSupport = true)  annotation(
        Placement(transformation(origin = {52, -100}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.BodyShape platformFL(I_11 = 0.2817, I_22 = 0.2817, I_33 = 0.5625, animateSphere = false, height = 0.020, length = 0.50, lengthDirection = {1, 0, 0}, m = 13.5, r = {0, 0, 0}, r_CM = {0, 0, 0.010}, r_shape = {-0.25, 0, 0.010}, shapeType = "box", width = 0.50, widthDirection = {0, 1, 0}) annotation(
        Placement(transformation(origin = {-31, -56}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Modelica.Mechanics.MultiBody.Parts.BodyShape platformRR(I_11 = 0.2817, I_22 = 0.2817, I_33 = 0.5625, animateSphere = false, height = 0.020, length = 0.50, lengthDirection = {1, 0, 0}, m = 13.5, r = {0, 0, 0}, r_CM = {0, 0, 0.010}, r_shape = {-0.25, 0, 0.010}, shapeType = "box", width = 0.50, widthDirection = {0, 1, 0}) annotation(
        Placement(transformation(origin = {61, 39}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Mechanics.MultiBody.Parts.BodyShape platformRL(I_11 = 0.2817, I_22 = 0.2817, I_33 = 0.5625, animateSphere = false, height = 0.020, length = 0.50, lengthDirection = {1, 0, 0}, m = 13.5, r = {0, 0, 0}, r_CM = {0, 0, 0.010}, r_shape = {-0.25, 0, 0.010}, shapeType = "box", width = 0.50, widthDirection = {0, 1, 0}) annotation(
        Placement(transformation(origin = {70, -53}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  MotionBlocks.SevenPostMotion motion annotation(
        Placement(transformation(extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_b vehicleFrame annotation(
        Placement(transformation(origin = {100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {98, -4}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Blocks.Interfaces.RealInput chassisForceInputs[3](each unit = "N") "F, RR, RL" annotation(
        Placement(transformation(origin = {-102, 60}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {-82, 72}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation chassisOffsetF(r = {vehicleParams.a, 0, 0})  annotation(
        Placement(transformation(origin = {-36, 14}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation chassisOffsetRL(r = {-vehicleParams.b, -0.5, 0})  annotation(
        Placement(transformation(origin = {66, -20}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation chassisOffsetRR(r = {-vehicleParams.b, 0.5, 0})  annotation(
        Placement(transformation(origin = {68, 10}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Forces.WorldForce chassisForceF annotation(
        Placement(transformation(origin = {-82, 14}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Forces.WorldForce chassisForceRR annotation(
        Placement(transformation(origin = {104, 16}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Forces.WorldForce chassisForceRL annotation(
        Placement(transformation(origin = {104, -22}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput platformDisplacement[4](each unit="m") annotation(
        Placement(transformation(origin = {144, 66}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {144, 66}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput platformVelocity[4](each unit="m/s") annotation(
        Placement(transformation(origin = {144, 50}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {140, 52}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput platformAcceleration[4](each unit="m/s2") annotation(
        Placement(transformation(origin = {144, 34}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {148, 30}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput platformActuatorForce[4](each unit="N") annotation(
        Placement(transformation(origin = {144, 18}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {144, 10}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput chassisPositionZ(unit="m") annotation(
        Placement(transformation(origin = {144, 0}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {146, 0}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput chassisVelocityZ(unit="m/s") annotation(
        Placement(transformation(origin = {144, -18}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {146, -20}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput chassisAccelerationZ(unit="m/s2") annotation(
        Placement(transformation(origin = {144, -34}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {142, -36}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput chassisPitch(unit="rad") annotation(
        Placement(transformation(origin = {144, -50}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {132, -52}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput chassisRoll(unit="rad") annotation(
        Placement(transformation(origin = {144, -66}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {124, -80}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput chassisPitchRate(unit="rad/s") annotation(
        Placement(transformation(origin = {144, -82}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {134, -90}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput chassisRollRate(unit="rad/s") annotation(
        Placement(transformation(origin = {144, -98}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {136, -102}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput chassisLoaderForce[3](each unit="N") annotation(
        Placement(transformation(origin = {144, -114}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {122, -128}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(worldFrame, translationFR.frame_a) annotation(
        Line(points = {{-100, 2}, {-60, 2}, {-60, 20}}));
      connect(worldFrame, translationFL.frame_a) annotation(
        Line(points = {{-100, 2}, {-60, 2}, {-60, -20}}));
      connect(worldFrame, translationRR.frame_a) annotation(
        Line(points = {{-100, 2}, {40, 2}, {40, 20}}));
      connect(worldFrame, translationRL.frame_a) annotation(
        Line(points = {{-100, 2}, {40, 2}, {40, -20}}));
      connect(translationFR.frame_b, prismaticFR.frame_a) annotation(
        Line(points = {{-60, 40}, {-60, 70}}, color = {95, 95, 95}));
      connect(translationRR.frame_b, prismaticRR.frame_a) annotation(
        Line(points = {{40, 40}, {40, 72}}, color = {95, 95, 95}));
      connect(translationFL.frame_b, prismaticFL.frame_a) annotation(
        Line(points = {{-60, -40}, {-60, -70}}, color = {95, 95, 95}));
      connect(translationRL.frame_b, prismaticRL.frame_a) annotation(
        Line(points = {{40, -40}, {40, -70}}, color = {95, 95, 95}));
      connect(prismaticFR.frame_b, platformFR.frame_a) annotation(
        Line(points = {{-40, 70}, {-30, 70}, {-30, 50}}, color = {95, 95, 95}));
      connect(platformFR.frame_b, wheelConnectFR) annotation(
        Line(points = {{-30, 30}, {-100, 30}, {-100, 40}}, color = {95, 95, 95}));
      connect(displacementInputs[1], positionFL.s_ref) annotation(
        Line(points = {{-100, 80}, {-60, 80}, {-60, -100}}, color = {0, 0, 127}));
      connect(displacementInputs[2], positionFR.s_ref) annotation(
        Line(points = {{-100, 80}, {-60, 80}, {-60, 100}}, color = {0, 0, 127}));
      connect(displacementInputs[3], positionRL.s_ref) annotation(
        Line(points = {{-100, 80}, {40, 80}, {40, -100}}, color = {0, 0, 127}));
      connect(displacementInputs[4], positionRR.s_ref) annotation(
        Line(points = {{-100, 80}, {40, 80}, {40, 100}}, color = {0, 0, 127}));
  connect(prismaticFL.frame_b, platformFL.frame_a) annotation(
        Line(points = {{-40, -70}, {-31, -70}, {-31, -66}}, color = {95, 95, 95}));
  connect(platformFL.frame_b, wheelConnectFL) annotation(
        Line(points = {{-31, -46}, {-65, -46}, {-65, -40}, {-100, -40}}, color = {95, 95, 95}));
  connect(prismaticRR.frame_b, platformRR.frame_a) annotation(
        Line(points = {{60, 72}, {60, 61}, {62, 61}, {62, 50}}, color = {95, 95, 95}));
  connect(platformRR.frame_b, wheelConnectRR) annotation(
        Line(points = {{62, 30}, {100, 30}, {100, 40}}, color = {95, 95, 95}));
  connect(prismaticRL.frame_b, platformRL.frame_a) annotation(
        Line(points = {{60, -70}, {70, -70}, {70, -62}}, color = {95, 95, 95}));
  connect(platformRL.frame_b, wheelConnectRL) annotation(
        Line(points = {{70, -42}, {100, -42}, {100, -40}}, color = {95, 95, 95}));
  connect(positionFR.support, prismaticFR.support) annotation(
        Line(points = {{-48, 90}, {-54, 90}, {-54, 76}}, color = {0, 127, 0}));
  connect(positionFR.flange, prismaticFR.axis) annotation(
        Line(points = {{-38, 100}, {-42, 100}, {-42, 76}}, color = {0, 127, 0}));
  connect(positionRR.support, prismaticRR.support) annotation(
        Line(points = {{52, 90}, {46, 90}, {46, 78}}, color = {0, 127, 0}));
  connect(positionRR.flange, prismaticRR.axis) annotation(
        Line(points = {{62, 100}, {58, 100}, {58, 78}}, color = {0, 127, 0}));
  connect(positionFL.support, prismaticFL.support) annotation(
        Line(points = {{-48, -110}, {-54, -110}, {-54, -64}}, color = {0, 127, 0}));
  connect(positionFL.flange, prismaticFL.axis) annotation(
        Line(points = {{-38, -100}, {-42, -100}, {-42, -64}}, color = {0, 127, 0}));
  connect(prismaticRL.support, positionRL.support) annotation(
        Line(points = {{46, -64}, {52, -64}, {52, -110}}, color = {0, 127, 0}));
  connect(positionRL.flange, prismaticRL.axis) annotation(
        Line(points = {{62, -100}, {58, -100}, {58, -64}}, color = {0, 127, 0}));
  connect(motion.worldFrame, worldFrame) annotation(
        Line(points = {{-10, 2}, {-100, 2}}, color = {95, 95, 95}));
  connect(motion.vehicleFrame, vehicleFrame) annotation(
        Line(points = {{4, 0}, {100, 0}}, color = {95, 95, 95}));
  connect(chassisOffsetF.frame_a, motion.vehicleFrame) annotation(
        Line(points = {{-26, 14}, {4, 14}, {4, 0}}, color = {95, 95, 95}));
  connect(chassisForceF.frame_b, chassisOffsetF.frame_b) annotation(
        Line(points = {{-72, 14}, {-46, 14}}, color = {95, 95, 95}));
  connect(motion.vehicleFrame, chassisOffsetRL.frame_a) annotation(
        Line(points = {{4, 0}, {56, 0}, {56, -20}}, color = {95, 95, 95}));
  connect(motion.vehicleFrame, chassisOffsetRR.frame_a) annotation(
        Line(points = {{4, 0}, {58, 0}, {58, 10}}, color = {95, 95, 95}));
  connect(chassisOffsetRR.frame_b, chassisForceRR.frame_b) annotation(
        Line(points = {{78, 10}, {114, 10}, {114, 16}}, color = {95, 95, 95}));
  connect(chassisOffsetRL.frame_b, chassisForceRL.frame_b) annotation(
        Line(points = {{76, -20}, {114, -20}, {114, -22}}, color = {95, 95, 95}));
  connect(chassisForceInputs[1], chassisForceF.force[3]) annotation(
        Line(points = {{-102, 60}, {-94, 60}, {-94, 14}}, color = {0, 0, 127}, thickness = 0.5));
  connect(chassisForceInputs[2], chassisForceRR.force[3]) annotation(
        Line(points = {{-102, 60}, {92, 60}, {92, 16}}, color = {0, 0, 127}, thickness = 0.5));
  connect(chassisForceInputs[3], chassisForceRL.force[3]) annotation(
        Line(points = {{-102, 60}, {92, 60}, {92, -22}}, color = {0, 0, 127}, thickness = 0.5));
    
    chassisForceF.force[1] = 0;
    chassisForceRR.force[1] = 0;
    chassisForceRL.force[1] = 0;
    chassisForceF.force[2] = 0;
    chassisForceRR.force[2] = 0;
    chassisForceRL.force[2] = 0;
    
    platformDisplacement = {prismaticFL.s, prismaticFR.s, prismaticRL.s, prismaticRR.s};
    platformVelocity = {prismaticFL.v, prismaticFR.v, prismaticRL.v, prismaticRR.v};
    platformAcceleration = {prismaticFL.a, prismaticFR.a, prismaticRL.a, prismaticRR.a};
    platformActuatorForce = {-positionFL.flange.f, -positionFR.flange.f, -positionRL.flange.f, -positionRR.flange.f};
    chassisPositionZ = motion.heave.s;
    chassisVelocityZ = motion.heave.v;
    chassisAccelerationZ = motion.heave.a;
    chassisPitch = motion.pitch.phi;
    chassisRoll = motion.roll.phi;
    chassisPitchRate = motion.pitch.w;
    chassisRollRate = motion.roll.w;
    chassisLoaderForce = {chassisForceF.force[3], chassisForceRR.force[3], chassisForceRL.force[3]};
    
    end RigSevenPost;
  end Rigs;

  package Roads
    model BaseRoad
      import Modelica.Units.SI;
      parameter SI.Position z0 = 0 "road elevation, SAE +z down";
      parameter Real muRef = 1.0 "surface friction";

      replaceable function height "surface shape, relative to z0"
        input SI.Position x;
        input SI.Position y;
        output SI.Position z;
      algorithm
        z := 0;
        annotation(
          smoothOrder = 2,
          Inline = true);
      end height;

      replaceable function mu "friction shape, multiplies muRef"
        input SI.Position x;
        input SI.Position y;
        output Real m;
      algorithm
        m := 1.0;
        annotation(
          smoothOrder = 2,
          Inline = true);
      end mu;
      annotation(
        Icon(graphics = {Rectangle(extent = {{-150, -100}, {150, 100}}, lineColor = {0, 0, 0}, fillColor = {255, 255, 255}, fillPattern = FillPattern.Solid), Bitmap(extent = {{-150, -100}, {150, 100}}, fileName = "modelica://AlyssaModel/Resources/Images/road_icon.png"), Text(extent = {{-100, -135}, {100, -105}}, textString = "%name")}));
    end BaseRoad;

    model FlatRoad
      extends AlyssaModel.Roads.BaseRoad;
    equation

    end FlatRoad;
  end Roads;
  annotation(
    uses(Modelica(version = "4.0.0")));
end AlyssaModel;

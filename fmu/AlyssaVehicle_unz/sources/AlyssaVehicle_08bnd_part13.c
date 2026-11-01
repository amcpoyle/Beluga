#include "AlyssaVehicle_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 11570
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.damper.flange_b.phi = vehicle.wheelFL.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11570};
  (data->simulationInfo->realParameter[3561] /* vehicle.wheelFL.rim.damper.flange_b.phi PARAM */) = (data->simulationInfo->realParameter[3567] /* vehicle.wheelFL.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11571
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.mounting1D.flange_b.phi = vehicle.wheelFL.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11571};
  (data->simulationInfo->realParameter[3563] /* vehicle.wheelFL.rim.mounting1D.flange_b.phi PARAM */) = (data->simulationInfo->realParameter[3567] /* vehicle.wheelFL.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11572
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.torque.phi_support = vehicle.wheelRR.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11572};
  (data->simulationInfo->realParameter[3957] /* vehicle.wheelRR.rim.torque.phi_support PARAM */) = (data->simulationInfo->realParameter[3918] /* vehicle.wheelRR.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11573
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.torque.support.phi = vehicle.wheelRR.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11573};
  (data->simulationInfo->realParameter[3958] /* vehicle.wheelRR.rim.torque.support.phi PARAM */) = (data->simulationInfo->realParameter[3918] /* vehicle.wheelRR.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11574
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.damper.flange_b.phi = vehicle.wheelRR.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11574};
  (data->simulationInfo->realParameter[3912] /* vehicle.wheelRR.rim.damper.flange_b.phi PARAM */) = (data->simulationInfo->realParameter[3918] /* vehicle.wheelRR.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11575
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.mounting1D.flange_b.phi = vehicle.wheelRR.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11575};
  (data->simulationInfo->realParameter[3914] /* vehicle.wheelRR.rim.mounting1D.flange_b.phi PARAM */) = (data->simulationInfo->realParameter[3918] /* vehicle.wheelRR.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11576
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.torque.phi_support = vehicle.wheelRL.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11576};
  (data->simulationInfo->realParameter[3840] /* vehicle.wheelRL.rim.torque.phi_support PARAM */) = (data->simulationInfo->realParameter[3801] /* vehicle.wheelRL.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11577
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.torque.support.phi = vehicle.wheelRL.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11577};
  (data->simulationInfo->realParameter[3841] /* vehicle.wheelRL.rim.torque.support.phi PARAM */) = (data->simulationInfo->realParameter[3801] /* vehicle.wheelRL.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11578
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.damper.flange_b.phi = vehicle.wheelRL.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11578};
  (data->simulationInfo->realParameter[3795] /* vehicle.wheelRL.rim.damper.flange_b.phi PARAM */) = (data->simulationInfo->realParameter[3801] /* vehicle.wheelRL.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11579
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.mounting1D.flange_b.phi = vehicle.wheelRL.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11579};
  (data->simulationInfo->realParameter[3797] /* vehicle.wheelRL.rim.mounting1D.flange_b.phi PARAM */) = (data->simulationInfo->realParameter[3801] /* vehicle.wheelRL.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11581
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.pos.s_support = vehicle.frontSuspension.steering.rack.fixed.s0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11581};
  (data->simulationInfo->realParameter[1842] /* vehicle.frontSuspension.steering.pos.s_support PARAM */) = (data->simulationInfo->realParameter[1857] /* vehicle.frontSuspension.steering.rack.fixed.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 11582
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.pos.support.s = vehicle.frontSuspension.steering.rack.fixed.s0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11582};
  (data->simulationInfo->realParameter[1843] /* vehicle.frontSuspension.steering.pos.support.s PARAM */) = (data->simulationInfo->realParameter[1857] /* vehicle.frontSuspension.steering.rack.fixed.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 11583
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.support.s = vehicle.frontSuspension.steering.rack.fixed.s0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11583};
  (data->simulationInfo->realParameter[1862] /* vehicle.frontSuspension.steering.rack.support.s PARAM */) = (data->simulationInfo->realParameter[1857] /* vehicle.frontSuspension.steering.rack.fixed.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 11584
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.fixed.flange.s = vehicle.frontSuspension.steering.rack.fixed.s0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11584};
  (data->simulationInfo->realParameter[1856] /* vehicle.frontSuspension.steering.rack.fixed.flange.s PARAM */) = (data->simulationInfo->realParameter[1857] /* vehicle.frontSuspension.steering.rack.fixed.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 11586
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.tau = vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11586};
  (data->simulationInfo->realParameter[1591] /* vehicle.frontSuspension.cornerR.ucaPivot.tau PARAM */) = (data->simulationInfo->realParameter[1570] /* vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11587
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.internalAxis.tau = vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11587};
  (data->simulationInfo->realParameter[1586] /* vehicle.frontSuspension.cornerR.ucaPivot.internalAxis.tau PARAM */) = (data->simulationInfo->realParameter[1570] /* vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11588
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.internalAxis.flange.tau = vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11588};
  (data->simulationInfo->realParameter[1585] /* vehicle.frontSuspension.cornerR.ucaPivot.internalAxis.flange.tau PARAM */) = (data->simulationInfo->realParameter[1570] /* vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11589
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.flange.tau = -vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11589};
  (data->simulationInfo->realParameter[1568] /* vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.flange.tau PARAM */) = (-(data->simulationInfo->realParameter[1570] /* vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11590
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau = vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11590};
  (data->simulationInfo->realParameter[1569] /* vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau PARAM */) = (data->simulationInfo->realParameter[1570] /* vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11592
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.tau = vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11592};
  (data->simulationInfo->realParameter[944] /* vehicle.frontSuspension.cornerL.ucaPivot.tau PARAM */) = (data->simulationInfo->realParameter[923] /* vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11593
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.internalAxis.tau = vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11593};
  (data->simulationInfo->realParameter[939] /* vehicle.frontSuspension.cornerL.ucaPivot.internalAxis.tau PARAM */) = (data->simulationInfo->realParameter[923] /* vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11594
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.internalAxis.flange.tau = vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11594};
  (data->simulationInfo->realParameter[938] /* vehicle.frontSuspension.cornerL.ucaPivot.internalAxis.flange.tau PARAM */) = (data->simulationInfo->realParameter[923] /* vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11595
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.flange.tau = -vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11595};
  (data->simulationInfo->realParameter[921] /* vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.flange.tau PARAM */) = (-(data->simulationInfo->realParameter[923] /* vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11596
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau = vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11596};
  (data->simulationInfo->realParameter[922] /* vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau PARAM */) = (data->simulationInfo->realParameter[923] /* vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11598
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.tau = vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11598};
  (data->simulationInfo->realParameter[3098] /* vehicle.rearSuspension.cornerR.ucaPivot.tau PARAM */) = (data->simulationInfo->realParameter[3077] /* vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11599
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.internalAxis.tau = vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11599};
  (data->simulationInfo->realParameter[3093] /* vehicle.rearSuspension.cornerR.ucaPivot.internalAxis.tau PARAM */) = (data->simulationInfo->realParameter[3077] /* vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11600
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.internalAxis.flange.tau = vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11600};
  (data->simulationInfo->realParameter[3092] /* vehicle.rearSuspension.cornerR.ucaPivot.internalAxis.flange.tau PARAM */) = (data->simulationInfo->realParameter[3077] /* vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11601
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.flange.tau = -vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11601};
  (data->simulationInfo->realParameter[3075] /* vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.flange.tau PARAM */) = (-(data->simulationInfo->realParameter[3077] /* vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11602
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau = vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11602};
  (data->simulationInfo->realParameter[3076] /* vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau PARAM */) = (data->simulationInfo->realParameter[3077] /* vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11604
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.tau = vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11604};
  (data->simulationInfo->realParameter[2451] /* vehicle.rearSuspension.cornerL.ucaPivot.tau PARAM */) = (data->simulationInfo->realParameter[2430] /* vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11605
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.internalAxis.tau = vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11605};
  (data->simulationInfo->realParameter[2446] /* vehicle.rearSuspension.cornerL.ucaPivot.internalAxis.tau PARAM */) = (data->simulationInfo->realParameter[2430] /* vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11606
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.internalAxis.flange.tau = vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11606};
  (data->simulationInfo->realParameter[2445] /* vehicle.rearSuspension.cornerL.ucaPivot.internalAxis.flange.tau PARAM */) = (data->simulationInfo->realParameter[2430] /* vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11607
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.flange.tau = -vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11607};
  (data->simulationInfo->realParameter[2428] /* vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.flange.tau PARAM */) = (-(data->simulationInfo->realParameter[2430] /* vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11608
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau = vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11608};
  (data->simulationInfo->realParameter[2429] /* vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau PARAM */) = (data->simulationInfo->realParameter[2430] /* vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11610
type: SIMPLE_ASSIGN
rig.motion.yaw.frame_a.f[1] = rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11610};
  (data->simulationInfo->realParameter[209] /* rig.motion.yaw.frame_a.f[1] PARAM */) = (data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11611
type: SIMPLE_ASSIGN
rig.motion.heave.frame_b.f[1] = -rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11611};
  (data->simulationInfo->realParameter[22] /* rig.motion.heave.frame_b.f[1] PARAM */) = (-(data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11612
type: SIMPLE_ASSIGN
rig.motion.heave.frame_a.f[1] = rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11612};
  (data->simulationInfo->realParameter[19] /* rig.motion.heave.frame_a.f[1] PARAM */) = (data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11613
type: SIMPLE_ASSIGN
rig.motion.lateral.frame_b.f[1] = -rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11613};
  (data->simulationInfo->realParameter[51] /* rig.motion.lateral.frame_b.f[1] PARAM */) = (-(data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11614
type: SIMPLE_ASSIGN
rig.motion.lateral.frame_a.f[1] = rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11614};
  (data->simulationInfo->realParameter[48] /* rig.motion.lateral.frame_a.f[1] PARAM */) = (data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11615
type: SIMPLE_ASSIGN
world.frame_b.f[1] = -rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11615};
  (data->simulationInfo->realParameter[4032] /* world.frame_b.f[1] PARAM */) = (-(data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11616
type: SIMPLE_ASSIGN
rig.worldFrame.f[1] = rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11616};
  (data->simulationInfo->realParameter[248] /* rig.worldFrame.f[1] PARAM */) = (data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11617
type: SIMPLE_ASSIGN
rig.motion.worldFrame.f[1] = rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11617};
  (data->simulationInfo->realParameter[189] /* rig.motion.worldFrame.f[1] PARAM */) = (data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11618
type: SIMPLE_ASSIGN
rig.motion.longitudinal.frame_a.f[1] = rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11618};
  (data->simulationInfo->realParameter[77] /* rig.motion.longitudinal.frame_a.f[1] PARAM */) = (data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11619
type: SIMPLE_ASSIGN
rig.motion.longitudinal.frame_b.f[1] = -rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11619};
  (data->simulationInfo->realParameter[80] /* rig.motion.longitudinal.frame_b.f[1] PARAM */) = (-(data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11620
type: SIMPLE_ASSIGN
rig.motion.longitudinal.f = rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11620};
  (data->simulationInfo->realParameter[74] /* rig.motion.longitudinal.f PARAM */) = (data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11621
type: SIMPLE_ASSIGN
rig.motion.longitudinal.internalAxis.f = rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11621};
  (data->simulationInfo->realParameter[83] /* rig.motion.longitudinal.internalAxis.f PARAM */) = (data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11622
type: SIMPLE_ASSIGN
rig.motion.longitudinal.internalAxis.flange.f = rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11622};
  (data->simulationInfo->realParameter[84] /* rig.motion.longitudinal.internalAxis.flange.f PARAM */) = (data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11623
type: SIMPLE_ASSIGN
rig.motion.longitudinal.constantForce.flange.f = -rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11623};
  (data->simulationInfo->realParameter[70] /* rig.motion.longitudinal.constantForce.flange.f PARAM */) = (-(data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11624
type: SIMPLE_ASSIGN
rig.motion.longitudinal.constantForce.f = -rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11624};
  (data->simulationInfo->realParameter[68] /* rig.motion.longitudinal.constantForce.f PARAM */) = (-(data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11626
type: SIMPLE_ASSIGN
rig.motion.yaw.frame_a.f[2] = rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11626};
  (data->simulationInfo->realParameter[210] /* rig.motion.yaw.frame_a.f[2] PARAM */) = (data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11627
type: SIMPLE_ASSIGN
rig.motion.heave.frame_b.f[2] = -rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11627};
  (data->simulationInfo->realParameter[23] /* rig.motion.heave.frame_b.f[2] PARAM */) = (-(data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11628
type: SIMPLE_ASSIGN
rig.motion.heave.frame_a.f[2] = rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11628};
  (data->simulationInfo->realParameter[20] /* rig.motion.heave.frame_a.f[2] PARAM */) = (data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11629
type: SIMPLE_ASSIGN
world.frame_b.f[2] = -rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11629};
  (data->simulationInfo->realParameter[4033] /* world.frame_b.f[2] PARAM */) = (-(data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11630
type: SIMPLE_ASSIGN
rig.worldFrame.f[2] = rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11630};
  (data->simulationInfo->realParameter[249] /* rig.worldFrame.f[2] PARAM */) = (data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11631
type: SIMPLE_ASSIGN
rig.motion.worldFrame.f[2] = rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11631};
  (data->simulationInfo->realParameter[190] /* rig.motion.worldFrame.f[2] PARAM */) = (data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11632
type: SIMPLE_ASSIGN
rig.motion.longitudinal.frame_a.f[2] = rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11632};
  (data->simulationInfo->realParameter[78] /* rig.motion.longitudinal.frame_a.f[2] PARAM */) = (data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11633
type: SIMPLE_ASSIGN
rig.motion.longitudinal.frame_b.f[2] = -rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11633};
  (data->simulationInfo->realParameter[81] /* rig.motion.longitudinal.frame_b.f[2] PARAM */) = (-(data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11634
type: SIMPLE_ASSIGN
rig.motion.lateral.frame_a.f[2] = rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11634};
  (data->simulationInfo->realParameter[49] /* rig.motion.lateral.frame_a.f[2] PARAM */) = (data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11635
type: SIMPLE_ASSIGN
rig.motion.lateral.frame_b.f[2] = -rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11635};
  (data->simulationInfo->realParameter[52] /* rig.motion.lateral.frame_b.f[2] PARAM */) = (-(data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11636
type: SIMPLE_ASSIGN
rig.motion.lateral.f = rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11636};
  (data->simulationInfo->realParameter[45] /* rig.motion.lateral.f PARAM */) = (data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11637
type: SIMPLE_ASSIGN
rig.motion.lateral.internalAxis.f = rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11637};
  (data->simulationInfo->realParameter[54] /* rig.motion.lateral.internalAxis.f PARAM */) = (data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11638
type: SIMPLE_ASSIGN
rig.motion.lateral.internalAxis.flange.f = rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11638};
  (data->simulationInfo->realParameter[55] /* rig.motion.lateral.internalAxis.flange.f PARAM */) = (data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11639
type: SIMPLE_ASSIGN
rig.motion.lateral.constantForce.flange.f = -rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11639};
  (data->simulationInfo->realParameter[41] /* rig.motion.lateral.constantForce.flange.f PARAM */) = (-(data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11640
type: SIMPLE_ASSIGN
rig.motion.lateral.constantForce.f = -rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11640};
  (data->simulationInfo->realParameter[39] /* rig.motion.lateral.constantForce.f PARAM */) = (-(data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11642
type: SIMPLE_ASSIGN
rig.motion.yaw.frame_a.f[3] = rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11642};
  (data->simulationInfo->realParameter[211] /* rig.motion.yaw.frame_a.f[3] PARAM */) = (data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11643
type: SIMPLE_ASSIGN
world.frame_b.f[3] = -rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11643};
  (data->simulationInfo->realParameter[4034] /* world.frame_b.f[3] PARAM */) = (-(data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11644
type: SIMPLE_ASSIGN
rig.worldFrame.f[3] = rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11644};
  (data->simulationInfo->realParameter[250] /* rig.worldFrame.f[3] PARAM */) = (data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11645
type: SIMPLE_ASSIGN
rig.motion.worldFrame.f[3] = rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11645};
  (data->simulationInfo->realParameter[191] /* rig.motion.worldFrame.f[3] PARAM */) = (data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11646
type: SIMPLE_ASSIGN
rig.motion.longitudinal.frame_a.f[3] = rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11646};
  (data->simulationInfo->realParameter[79] /* rig.motion.longitudinal.frame_a.f[3] PARAM */) = (data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11647
type: SIMPLE_ASSIGN
rig.motion.longitudinal.frame_b.f[3] = -rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11647};
  (data->simulationInfo->realParameter[82] /* rig.motion.longitudinal.frame_b.f[3] PARAM */) = (-(data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11648
type: SIMPLE_ASSIGN
rig.motion.lateral.frame_a.f[3] = rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11648};
  (data->simulationInfo->realParameter[50] /* rig.motion.lateral.frame_a.f[3] PARAM */) = (data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11649
type: SIMPLE_ASSIGN
rig.motion.lateral.frame_b.f[3] = -rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11649};
  (data->simulationInfo->realParameter[53] /* rig.motion.lateral.frame_b.f[3] PARAM */) = (-(data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11650
type: SIMPLE_ASSIGN
rig.motion.heave.frame_a.f[3] = rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11650};
  (data->simulationInfo->realParameter[21] /* rig.motion.heave.frame_a.f[3] PARAM */) = (data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11651
type: SIMPLE_ASSIGN
rig.motion.heave.frame_b.f[3] = -rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11651};
  (data->simulationInfo->realParameter[24] /* rig.motion.heave.frame_b.f[3] PARAM */) = (-(data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11652
type: SIMPLE_ASSIGN
rig.motion.heave.f = rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11652};
  (data->simulationInfo->realParameter[16] /* rig.motion.heave.f PARAM */) = (data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11653
type: SIMPLE_ASSIGN
rig.motion.heave.internalAxis.f = rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11653};
  (data->simulationInfo->realParameter[25] /* rig.motion.heave.internalAxis.f PARAM */) = (data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11654
type: SIMPLE_ASSIGN
rig.motion.heave.internalAxis.flange.f = rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11654};
  (data->simulationInfo->realParameter[26] /* rig.motion.heave.internalAxis.flange.f PARAM */) = (data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11655
type: SIMPLE_ASSIGN
rig.motion.heave.constantForce.flange.f = -rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11655};
  (data->simulationInfo->realParameter[12] /* rig.motion.heave.constantForce.flange.f PARAM */) = (-(data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11656
type: SIMPLE_ASSIGN
rig.motion.heave.constantForce.f = -rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11656};
  (data->simulationInfo->realParameter[10] /* rig.motion.heave.constantForce.f PARAM */) = (-(data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11658
type: SIMPLE_ASSIGN
rig.motion.yaw.tau = rig.motion.yaw.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11658};
  (data->simulationInfo->realParameter[218] /* rig.motion.yaw.tau PARAM */) = (data->simulationInfo->realParameter[194] /* rig.motion.yaw.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11659
type: SIMPLE_ASSIGN
rig.motion.yaw.internalAxis.tau = rig.motion.yaw.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11659};
  (data->simulationInfo->realParameter[213] /* rig.motion.yaw.internalAxis.tau PARAM */) = (data->simulationInfo->realParameter[194] /* rig.motion.yaw.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11660
type: SIMPLE_ASSIGN
rig.motion.yaw.internalAxis.flange.tau = rig.motion.yaw.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11660};
  (data->simulationInfo->realParameter[212] /* rig.motion.yaw.internalAxis.flange.tau PARAM */) = (data->simulationInfo->realParameter[194] /* rig.motion.yaw.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11661
type: SIMPLE_ASSIGN
rig.motion.yaw.constantTorque.flange.tau = -rig.motion.yaw.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11661};
  (data->simulationInfo->realParameter[192] /* rig.motion.yaw.constantTorque.flange.tau PARAM */) = (-(data->simulationInfo->realParameter[194] /* rig.motion.yaw.constantTorque.tau_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11662
type: SIMPLE_ASSIGN
rig.motion.yaw.constantTorque.tau = rig.motion.yaw.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11662};
  (data->simulationInfo->realParameter[193] /* rig.motion.yaw.constantTorque.tau PARAM */) = (data->simulationInfo->realParameter[194] /* rig.motion.yaw.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11664
type: SIMPLE_ASSIGN
rig.motion.pitch.tau = rig.motion.pitch.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11664};
  (data->simulationInfo->realParameter[112] /* rig.motion.pitch.tau PARAM */) = (data->simulationInfo->realParameter[91] /* rig.motion.pitch.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11665
type: SIMPLE_ASSIGN
rig.motion.pitch.internalAxis.tau = rig.motion.pitch.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11665};
  (data->simulationInfo->realParameter[107] /* rig.motion.pitch.internalAxis.tau PARAM */) = (data->simulationInfo->realParameter[91] /* rig.motion.pitch.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11666
type: SIMPLE_ASSIGN
rig.motion.pitch.internalAxis.flange.tau = rig.motion.pitch.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11666};
  (data->simulationInfo->realParameter[106] /* rig.motion.pitch.internalAxis.flange.tau PARAM */) = (data->simulationInfo->realParameter[91] /* rig.motion.pitch.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11667
type: SIMPLE_ASSIGN
rig.motion.pitch.constantTorque.flange.tau = -rig.motion.pitch.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11667};
  (data->simulationInfo->realParameter[89] /* rig.motion.pitch.constantTorque.flange.tau PARAM */) = (-(data->simulationInfo->realParameter[91] /* rig.motion.pitch.constantTorque.tau_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11668
type: SIMPLE_ASSIGN
rig.motion.pitch.constantTorque.tau = rig.motion.pitch.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11668};
  (data->simulationInfo->realParameter[90] /* rig.motion.pitch.constantTorque.tau PARAM */) = (data->simulationInfo->realParameter[91] /* rig.motion.pitch.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11670
type: SIMPLE_ASSIGN
rig.motion.roll.tau = rig.motion.roll.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11670};
  (data->simulationInfo->realParameter[136] /* rig.motion.roll.tau PARAM */) = (data->simulationInfo->realParameter[115] /* rig.motion.roll.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11671
type: SIMPLE_ASSIGN
rig.motion.roll.internalAxis.tau = rig.motion.roll.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11671};
  (data->simulationInfo->realParameter[131] /* rig.motion.roll.internalAxis.tau PARAM */) = (data->simulationInfo->realParameter[115] /* rig.motion.roll.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11672
type: SIMPLE_ASSIGN
rig.motion.roll.internalAxis.flange.tau = rig.motion.roll.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11672};
  (data->simulationInfo->realParameter[130] /* rig.motion.roll.internalAxis.flange.tau PARAM */) = (data->simulationInfo->realParameter[115] /* rig.motion.roll.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11673
type: SIMPLE_ASSIGN
rig.motion.roll.constantTorque.flange.tau = -rig.motion.roll.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11673};
  (data->simulationInfo->realParameter[113] /* rig.motion.roll.constantTorque.flange.tau PARAM */) = (-(data->simulationInfo->realParameter[115] /* rig.motion.roll.constantTorque.tau_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11674
type: SIMPLE_ASSIGN
rig.motion.roll.constantTorque.tau = rig.motion.roll.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11674};
  (data->simulationInfo->realParameter[114] /* rig.motion.roll.constantTorque.tau PARAM */) = (data->simulationInfo->realParameter[115] /* rig.motion.roll.constantTorque.tau_constant PARAM */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_6768(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6761(DATA *data, threadData_t *threadData);


/*
equation index: 11905
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.mSprung = rigController.steerSmoothing.vehicleParams.vehicleMass + (-2.0) * (rigController.steerSmoothing.vehicleParams.mUnsprungFront + rigController.steerSmoothing.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11905};
  (data->simulationInfo->realParameter[386] /* rigController.steerSmoothing.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[405] /* rigController.steerSmoothing.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[387] /* rigController.steerSmoothing.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[388] /* rigController.steerSmoothing.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 11906
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.F0Rear = 4.903325 * rigController.steerSmoothing.vehicleParams.mSprung * rigController.steerSmoothing.vehicleParams.a / rigController.steerSmoothing.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11906};
  (data->simulationInfo->realParameter[358] /* rigController.steerSmoothing.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[386] /* rigController.steerSmoothing.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[362] /* rigController.steerSmoothing.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[406] /* rigController.steerSmoothing.vehicleParams.wheelbase PARAM */),"rigController.steerSmoothing.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 11907
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.kRideRear = 0.10197162129779283 * rigController.steerSmoothing.vehicleParams.F0Rear * (6.283185307179586 * rigController.steerSmoothing.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11907};
  modelica_real tmp4;
  tmp4 = (6.283185307179586) * ((data->simulationInfo->realParameter[374] /* rigController.steerSmoothing.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[382] /* rigController.steerSmoothing.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[358] /* rigController.steerSmoothing.vehicleParams.F0Rear PARAM */)) * ((tmp4 * tmp4)));
  TRACE_POP
}

/*
equation index: 11908
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.dWheelRear = 2.0 * rigController.steerSmoothing.vehicleParams.zetaRear * sqrt(rigController.steerSmoothing.vehicleParams.kRideRear * rigController.steerSmoothing.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11908};
  modelica_real tmp5;
  tmp5 = DIVISION_SIM(((data->simulationInfo->realParameter[382] /* rigController.steerSmoothing.vehicleParams.kRideRear PARAM */)) * ((data->simulationInfo->realParameter[358] /* rigController.steerSmoothing.vehicleParams.F0Rear PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp5 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rigController.steerSmoothing.vehicleParams.kRideRear * rigController.steerSmoothing.vehicleParams.F0Rear / 9.80665) was %g should be >= 0", tmp5);
    }
  }
  (data->simulationInfo->realParameter[370] /* rigController.steerSmoothing.vehicleParams.dWheelRear PARAM */) = (2.0) * (((data->simulationInfo->realParameter[408] /* rigController.steerSmoothing.vehicleParams.zetaRear PARAM */)) * (sqrt(tmp5)));
  TRACE_POP
}

/*
equation index: 11909
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.F0Front = 4.903325 * rigController.steerSmoothing.vehicleParams.mSprung * rigController.steerSmoothing.vehicleParams.b / rigController.steerSmoothing.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11909};
  (data->simulationInfo->realParameter[357] /* rigController.steerSmoothing.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[386] /* rigController.steerSmoothing.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[366] /* rigController.steerSmoothing.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[406] /* rigController.steerSmoothing.vehicleParams.wheelbase PARAM */),"rigController.steerSmoothing.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 11910
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.kRideFront = 0.10197162129779283 * rigController.steerSmoothing.vehicleParams.F0Front * (6.283185307179586 * rigController.steerSmoothing.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11910};
  modelica_real tmp6;
  tmp6 = (6.283185307179586) * ((data->simulationInfo->realParameter[373] /* rigController.steerSmoothing.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[381] /* rigController.steerSmoothing.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[357] /* rigController.steerSmoothing.vehicleParams.F0Front PARAM */)) * ((tmp6 * tmp6)));
  TRACE_POP
}

/*
equation index: 11911
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.dWheelFront = 2.0 * rigController.steerSmoothing.vehicleParams.zetaFront * sqrt(rigController.steerSmoothing.vehicleParams.kRideFront * rigController.steerSmoothing.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11911};
  modelica_real tmp7;
  tmp7 = DIVISION_SIM(((data->simulationInfo->realParameter[381] /* rigController.steerSmoothing.vehicleParams.kRideFront PARAM */)) * ((data->simulationInfo->realParameter[357] /* rigController.steerSmoothing.vehicleParams.F0Front PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp7 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rigController.steerSmoothing.vehicleParams.kRideFront * rigController.steerSmoothing.vehicleParams.F0Front / 9.80665) was %g should be >= 0", tmp7);
    }
  }
  (data->simulationInfo->realParameter[369] /* rigController.steerSmoothing.vehicleParams.dWheelFront PARAM */) = (2.0) * (((data->simulationInfo->realParameter[407] /* rigController.steerSmoothing.vehicleParams.zetaFront PARAM */)) * (sqrt(tmp7)));
  TRACE_POP
}

/*
equation index: 11912
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.hpPower = 745.7 * rigController.steerSmoothing.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11912};
  (data->simulationInfo->realParameter[378] /* rigController.steerSmoothing.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[377] /* rigController.steerSmoothing.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 11913
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.track = rigController.steerSmoothing.vehicleParams.tf + rigController.steerSmoothing.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11913};
  (data->simulationInfo->realParameter[404] /* rigController.steerSmoothing.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[402] /* rigController.steerSmoothing.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[403] /* rigController.steerSmoothing.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 11914
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.kRear = rigController.steerSmoothing.vehicleParams.kRideRear * rigController.steerSmoothing.vehicleParams.kz / (rigController.steerSmoothing.vehicleParams.kz - rigController.steerSmoothing.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11914};
  (data->simulationInfo->realParameter[380] /* rigController.steerSmoothing.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[382] /* rigController.steerSmoothing.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[385] /* rigController.steerSmoothing.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[385] /* rigController.steerSmoothing.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[382] /* rigController.steerSmoothing.vehicleParams.kRideRear PARAM */),"rigController.steerSmoothing.vehicleParams.kz - rigController.steerSmoothing.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 11915
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.kFront = rigController.steerSmoothing.vehicleParams.kRideFront * rigController.steerSmoothing.vehicleParams.kz / (rigController.steerSmoothing.vehicleParams.kz - rigController.steerSmoothing.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11915};
  (data->simulationInfo->realParameter[379] /* rigController.steerSmoothing.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[381] /* rigController.steerSmoothing.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[385] /* rigController.steerSmoothing.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[385] /* rigController.steerSmoothing.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[381] /* rigController.steerSmoothing.vehicleParams.kRideFront PARAM */),"rigController.steerSmoothing.vehicleParams.kz - rigController.steerSmoothing.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 11916
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.mSprung = rigController.driveBrakeTorque.vehicleParams.vehicleMass + (-2.0) * (rigController.driveBrakeTorque.vehicleParams.mUnsprungFront + rigController.driveBrakeTorque.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11916};
  (data->simulationInfo->realParameter[281] /* rigController.driveBrakeTorque.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[300] /* rigController.driveBrakeTorque.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[282] /* rigController.driveBrakeTorque.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[283] /* rigController.driveBrakeTorque.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 11917
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.F0Rear = 4.903325 * rigController.driveBrakeTorque.vehicleParams.mSprung * rigController.driveBrakeTorque.vehicleParams.a / rigController.driveBrakeTorque.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11917};
  (data->simulationInfo->realParameter[253] /* rigController.driveBrakeTorque.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[281] /* rigController.driveBrakeTorque.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[257] /* rigController.driveBrakeTorque.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[301] /* rigController.driveBrakeTorque.vehicleParams.wheelbase PARAM */),"rigController.driveBrakeTorque.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 11918
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.kRideRear = 0.10197162129779283 * rigController.driveBrakeTorque.vehicleParams.F0Rear * (6.283185307179586 * rigController.driveBrakeTorque.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11918};
  modelica_real tmp8;
  tmp8 = (6.283185307179586) * ((data->simulationInfo->realParameter[269] /* rigController.driveBrakeTorque.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[277] /* rigController.driveBrakeTorque.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[253] /* rigController.driveBrakeTorque.vehicleParams.F0Rear PARAM */)) * ((tmp8 * tmp8)));
  TRACE_POP
}

/*
equation index: 11919
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.dWheelRear = 2.0 * rigController.driveBrakeTorque.vehicleParams.zetaRear * sqrt(rigController.driveBrakeTorque.vehicleParams.kRideRear * rigController.driveBrakeTorque.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11919};
  modelica_real tmp9;
  tmp9 = DIVISION_SIM(((data->simulationInfo->realParameter[277] /* rigController.driveBrakeTorque.vehicleParams.kRideRear PARAM */)) * ((data->simulationInfo->realParameter[253] /* rigController.driveBrakeTorque.vehicleParams.F0Rear PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp9 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rigController.driveBrakeTorque.vehicleParams.kRideRear * rigController.driveBrakeTorque.vehicleParams.F0Rear / 9.80665) was %g should be >= 0", tmp9);
    }
  }
  (data->simulationInfo->realParameter[265] /* rigController.driveBrakeTorque.vehicleParams.dWheelRear PARAM */) = (2.0) * (((data->simulationInfo->realParameter[303] /* rigController.driveBrakeTorque.vehicleParams.zetaRear PARAM */)) * (sqrt(tmp9)));
  TRACE_POP
}

/*
equation index: 11920
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.F0Front = 4.903325 * rigController.driveBrakeTorque.vehicleParams.mSprung * rigController.driveBrakeTorque.vehicleParams.b / rigController.driveBrakeTorque.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11920};
  (data->simulationInfo->realParameter[252] /* rigController.driveBrakeTorque.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[281] /* rigController.driveBrakeTorque.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[261] /* rigController.driveBrakeTorque.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[301] /* rigController.driveBrakeTorque.vehicleParams.wheelbase PARAM */),"rigController.driveBrakeTorque.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 11921
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.kRideFront = 0.10197162129779283 * rigController.driveBrakeTorque.vehicleParams.F0Front * (6.283185307179586 * rigController.driveBrakeTorque.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11921};
  modelica_real tmp10;
  tmp10 = (6.283185307179586) * ((data->simulationInfo->realParameter[268] /* rigController.driveBrakeTorque.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[276] /* rigController.driveBrakeTorque.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[252] /* rigController.driveBrakeTorque.vehicleParams.F0Front PARAM */)) * ((tmp10 * tmp10)));
  TRACE_POP
}

/*
equation index: 11922
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.dWheelFront = 2.0 * rigController.driveBrakeTorque.vehicleParams.zetaFront * sqrt(rigController.driveBrakeTorque.vehicleParams.kRideFront * rigController.driveBrakeTorque.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11922};
  modelica_real tmp11;
  tmp11 = DIVISION_SIM(((data->simulationInfo->realParameter[276] /* rigController.driveBrakeTorque.vehicleParams.kRideFront PARAM */)) * ((data->simulationInfo->realParameter[252] /* rigController.driveBrakeTorque.vehicleParams.F0Front PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp11 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rigController.driveBrakeTorque.vehicleParams.kRideFront * rigController.driveBrakeTorque.vehicleParams.F0Front / 9.80665) was %g should be >= 0", tmp11);
    }
  }
  (data->simulationInfo->realParameter[264] /* rigController.driveBrakeTorque.vehicleParams.dWheelFront PARAM */) = (2.0) * (((data->simulationInfo->realParameter[302] /* rigController.driveBrakeTorque.vehicleParams.zetaFront PARAM */)) * (sqrt(tmp11)));
  TRACE_POP
}

/*
equation index: 11923
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.hpPower = 745.7 * rigController.driveBrakeTorque.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11923};
  (data->simulationInfo->realParameter[273] /* rigController.driveBrakeTorque.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[272] /* rigController.driveBrakeTorque.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 11924
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.track = rigController.driveBrakeTorque.vehicleParams.tf + rigController.driveBrakeTorque.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11924};
  (data->simulationInfo->realParameter[299] /* rigController.driveBrakeTorque.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[297] /* rigController.driveBrakeTorque.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[298] /* rigController.driveBrakeTorque.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 11925
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.kRear = rigController.driveBrakeTorque.vehicleParams.kRideRear * rigController.driveBrakeTorque.vehicleParams.kz / (rigController.driveBrakeTorque.vehicleParams.kz - rigController.driveBrakeTorque.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11925};
  (data->simulationInfo->realParameter[275] /* rigController.driveBrakeTorque.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[277] /* rigController.driveBrakeTorque.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[280] /* rigController.driveBrakeTorque.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[280] /* rigController.driveBrakeTorque.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[277] /* rigController.driveBrakeTorque.vehicleParams.kRideRear PARAM */),"rigController.driveBrakeTorque.vehicleParams.kz - rigController.driveBrakeTorque.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 11926
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.kFront = rigController.driveBrakeTorque.vehicleParams.kRideFront * rigController.driveBrakeTorque.vehicleParams.kz / (rigController.driveBrakeTorque.vehicleParams.kz - rigController.driveBrakeTorque.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11926};
  (data->simulationInfo->realParameter[274] /* rigController.driveBrakeTorque.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[276] /* rigController.driveBrakeTorque.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[280] /* rigController.driveBrakeTorque.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[280] /* rigController.driveBrakeTorque.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[276] /* rigController.driveBrakeTorque.vehicleParams.kRideFront PARAM */),"rigController.driveBrakeTorque.vehicleParams.kz - rigController.driveBrakeTorque.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 11927
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.mSprung = rigController.pedalSmoothing.vehicleParams.vehicleMass + (-2.0) * (rigController.pedalSmoothing.vehicleParams.mUnsprungFront + rigController.pedalSmoothing.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11927};
  (data->simulationInfo->realParameter[334] /* rigController.pedalSmoothing.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[353] /* rigController.pedalSmoothing.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[335] /* rigController.pedalSmoothing.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[336] /* rigController.pedalSmoothing.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 11928
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.F0Rear = 4.903325 * rigController.pedalSmoothing.vehicleParams.mSprung * rigController.pedalSmoothing.vehicleParams.a / rigController.pedalSmoothing.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11928};
  (data->simulationInfo->realParameter[306] /* rigController.pedalSmoothing.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[334] /* rigController.pedalSmoothing.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[310] /* rigController.pedalSmoothing.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[354] /* rigController.pedalSmoothing.vehicleParams.wheelbase PARAM */),"rigController.pedalSmoothing.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 11929
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.kRideRear = 0.10197162129779283 * rigController.pedalSmoothing.vehicleParams.F0Rear * (6.283185307179586 * rigController.pedalSmoothing.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11929};
  modelica_real tmp12;
  tmp12 = (6.283185307179586) * ((data->simulationInfo->realParameter[322] /* rigController.pedalSmoothing.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[330] /* rigController.pedalSmoothing.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[306] /* rigController.pedalSmoothing.vehicleParams.F0Rear PARAM */)) * ((tmp12 * tmp12)));
  TRACE_POP
}

/*
equation index: 11930
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.dWheelRear = 2.0 * rigController.pedalSmoothing.vehicleParams.zetaRear * sqrt(rigController.pedalSmoothing.vehicleParams.kRideRear * rigController.pedalSmoothing.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11930};
  modelica_real tmp13;
  tmp13 = DIVISION_SIM(((data->simulationInfo->realParameter[330] /* rigController.pedalSmoothing.vehicleParams.kRideRear PARAM */)) * ((data->simulationInfo->realParameter[306] /* rigController.pedalSmoothing.vehicleParams.F0Rear PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp13 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rigController.pedalSmoothing.vehicleParams.kRideRear * rigController.pedalSmoothing.vehicleParams.F0Rear / 9.80665) was %g should be >= 0", tmp13);
    }
  }
  (data->simulationInfo->realParameter[318] /* rigController.pedalSmoothing.vehicleParams.dWheelRear PARAM */) = (2.0) * (((data->simulationInfo->realParameter[356] /* rigController.pedalSmoothing.vehicleParams.zetaRear PARAM */)) * (sqrt(tmp13)));
  TRACE_POP
}

/*
equation index: 11931
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.F0Front = 4.903325 * rigController.pedalSmoothing.vehicleParams.mSprung * rigController.pedalSmoothing.vehicleParams.b / rigController.pedalSmoothing.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11931};
  (data->simulationInfo->realParameter[305] /* rigController.pedalSmoothing.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[334] /* rigController.pedalSmoothing.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[314] /* rigController.pedalSmoothing.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[354] /* rigController.pedalSmoothing.vehicleParams.wheelbase PARAM */),"rigController.pedalSmoothing.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 11932
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.kRideFront = 0.10197162129779283 * rigController.pedalSmoothing.vehicleParams.F0Front * (6.283185307179586 * rigController.pedalSmoothing.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11932};
  modelica_real tmp14;
  tmp14 = (6.283185307179586) * ((data->simulationInfo->realParameter[321] /* rigController.pedalSmoothing.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[329] /* rigController.pedalSmoothing.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[305] /* rigController.pedalSmoothing.vehicleParams.F0Front PARAM */)) * ((tmp14 * tmp14)));
  TRACE_POP
}

/*
equation index: 11933
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.dWheelFront = 2.0 * rigController.pedalSmoothing.vehicleParams.zetaFront * sqrt(rigController.pedalSmoothing.vehicleParams.kRideFront * rigController.pedalSmoothing.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11933};
  modelica_real tmp15;
  tmp15 = DIVISION_SIM(((data->simulationInfo->realParameter[329] /* rigController.pedalSmoothing.vehicleParams.kRideFront PARAM */)) * ((data->simulationInfo->realParameter[305] /* rigController.pedalSmoothing.vehicleParams.F0Front PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp15 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rigController.pedalSmoothing.vehicleParams.kRideFront * rigController.pedalSmoothing.vehicleParams.F0Front / 9.80665) was %g should be >= 0", tmp15);
    }
  }
  (data->simulationInfo->realParameter[317] /* rigController.pedalSmoothing.vehicleParams.dWheelFront PARAM */) = (2.0) * (((data->simulationInfo->realParameter[355] /* rigController.pedalSmoothing.vehicleParams.zetaFront PARAM */)) * (sqrt(tmp15)));
  TRACE_POP
}

/*
equation index: 11934
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.hpPower = 745.7 * rigController.pedalSmoothing.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11934};
  (data->simulationInfo->realParameter[326] /* rigController.pedalSmoothing.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[325] /* rigController.pedalSmoothing.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 11935
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.track = rigController.pedalSmoothing.vehicleParams.tf + rigController.pedalSmoothing.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11935};
  (data->simulationInfo->realParameter[352] /* rigController.pedalSmoothing.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[350] /* rigController.pedalSmoothing.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[351] /* rigController.pedalSmoothing.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 11936
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.kRear = rigController.pedalSmoothing.vehicleParams.kRideRear * rigController.pedalSmoothing.vehicleParams.kz / (rigController.pedalSmoothing.vehicleParams.kz - rigController.pedalSmoothing.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11936};
  (data->simulationInfo->realParameter[328] /* rigController.pedalSmoothing.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[330] /* rigController.pedalSmoothing.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[333] /* rigController.pedalSmoothing.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[333] /* rigController.pedalSmoothing.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[330] /* rigController.pedalSmoothing.vehicleParams.kRideRear PARAM */),"rigController.pedalSmoothing.vehicleParams.kz - rigController.pedalSmoothing.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 11937
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.kFront = rigController.pedalSmoothing.vehicleParams.kRideFront * rigController.pedalSmoothing.vehicleParams.kz / (rigController.pedalSmoothing.vehicleParams.kz - rigController.pedalSmoothing.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11937};
  (data->simulationInfo->realParameter[327] /* rigController.pedalSmoothing.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[329] /* rigController.pedalSmoothing.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[333] /* rigController.pedalSmoothing.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[333] /* rigController.pedalSmoothing.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[329] /* rigController.pedalSmoothing.vehicleParams.kRideFront PARAM */),"rigController.pedalSmoothing.vehicleParams.kz - rigController.pedalSmoothing.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 11966
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.mSprung = rig.motion.vehicleParams.vehicleMass + (-2.0) * (rig.motion.vehicleParams.mUnsprungFront + rig.motion.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11966};
  (data->simulationInfo->realParameter[166] /* rig.motion.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[185] /* rig.motion.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[167] /* rig.motion.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[168] /* rig.motion.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 11967
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.F0Rear = 4.903325 * rig.motion.vehicleParams.mSprung * rig.motion.vehicleParams.a / rig.motion.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11967};
  (data->simulationInfo->realParameter[138] /* rig.motion.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[166] /* rig.motion.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[142] /* rig.motion.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[186] /* rig.motion.vehicleParams.wheelbase PARAM */),"rig.motion.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 11968
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.kRideRear = 0.10197162129779283 * rig.motion.vehicleParams.F0Rear * (6.283185307179586 * rig.motion.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11968};
  modelica_real tmp16;
  tmp16 = (6.283185307179586) * ((data->simulationInfo->realParameter[154] /* rig.motion.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[162] /* rig.motion.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[138] /* rig.motion.vehicleParams.F0Rear PARAM */)) * ((tmp16 * tmp16)));
  TRACE_POP
}

/*
equation index: 11969
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.dWheelRear = 2.0 * rig.motion.vehicleParams.zetaRear * sqrt(rig.motion.vehicleParams.kRideRear * rig.motion.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11969};
  modelica_real tmp17;
  tmp17 = DIVISION_SIM(((data->simulationInfo->realParameter[162] /* rig.motion.vehicleParams.kRideRear PARAM */)) * ((data->simulationInfo->realParameter[138] /* rig.motion.vehicleParams.F0Rear PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp17 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rig.motion.vehicleParams.kRideRear * rig.motion.vehicleParams.F0Rear / 9.80665) was %g should be >= 0", tmp17);
    }
  }
  (data->simulationInfo->realParameter[150] /* rig.motion.vehicleParams.dWheelRear PARAM */) = (2.0) * (((data->simulationInfo->realParameter[188] /* rig.motion.vehicleParams.zetaRear PARAM */)) * (sqrt(tmp17)));
  TRACE_POP
}

/*
equation index: 11970
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.F0Front = 4.903325 * rig.motion.vehicleParams.mSprung * rig.motion.vehicleParams.b / rig.motion.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11970};
  (data->simulationInfo->realParameter[137] /* rig.motion.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[166] /* rig.motion.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[146] /* rig.motion.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[186] /* rig.motion.vehicleParams.wheelbase PARAM */),"rig.motion.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 11971
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.kRideFront = 0.10197162129779283 * rig.motion.vehicleParams.F0Front * (6.283185307179586 * rig.motion.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11971};
  modelica_real tmp18;
  tmp18 = (6.283185307179586) * ((data->simulationInfo->realParameter[153] /* rig.motion.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[161] /* rig.motion.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[137] /* rig.motion.vehicleParams.F0Front PARAM */)) * ((tmp18 * tmp18)));
  TRACE_POP
}

/*
equation index: 11972
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.dWheelFront = 2.0 * rig.motion.vehicleParams.zetaFront * sqrt(rig.motion.vehicleParams.kRideFront * rig.motion.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11972};
  modelica_real tmp19;
  tmp19 = DIVISION_SIM(((data->simulationInfo->realParameter[161] /* rig.motion.vehicleParams.kRideFront PARAM */)) * ((data->simulationInfo->realParameter[137] /* rig.motion.vehicleParams.F0Front PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp19 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rig.motion.vehicleParams.kRideFront * rig.motion.vehicleParams.F0Front / 9.80665) was %g should be >= 0", tmp19);
    }
  }
  (data->simulationInfo->realParameter[149] /* rig.motion.vehicleParams.dWheelFront PARAM */) = (2.0) * (((data->simulationInfo->realParameter[187] /* rig.motion.vehicleParams.zetaFront PARAM */)) * (sqrt(tmp19)));
  TRACE_POP
}

/*
equation index: 11973
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.hpPower = 745.7 * rig.motion.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11973};
  (data->simulationInfo->realParameter[158] /* rig.motion.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[157] /* rig.motion.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 11974
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.track = rig.motion.vehicleParams.tf + rig.motion.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11974};
  (data->simulationInfo->realParameter[184] /* rig.motion.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[182] /* rig.motion.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[183] /* rig.motion.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 11975
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.kRear = rig.motion.vehicleParams.kRideRear * rig.motion.vehicleParams.kz / (rig.motion.vehicleParams.kz - rig.motion.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11975};
  (data->simulationInfo->realParameter[160] /* rig.motion.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[162] /* rig.motion.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[165] /* rig.motion.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[165] /* rig.motion.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[162] /* rig.motion.vehicleParams.kRideRear PARAM */),"rig.motion.vehicleParams.kz - rig.motion.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 11976
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.kFront = rig.motion.vehicleParams.kRideFront * rig.motion.vehicleParams.kz / (rig.motion.vehicleParams.kz - rig.motion.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11976};
  (data->simulationInfo->realParameter[159] /* rig.motion.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[161] /* rig.motion.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[165] /* rig.motion.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[165] /* rig.motion.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[161] /* rig.motion.vehicleParams.kRideFront PARAM */),"rig.motion.vehicleParams.kz - rig.motion.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 11978
type: SIMPLE_ASSIGN
rig.motion.roll.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11978};
  (data->simulationInfo->stringParameter[4] /* rig.motion.roll.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 11986
type: SIMPLE_ASSIGN
rig.motion.pitch.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11986};
  (data->simulationInfo->stringParameter[3] /* rig.motion.pitch.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 11994
type: SIMPLE_ASSIGN
rig.motion.yaw.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11994};
  (data->simulationInfo->stringParameter[5] /* rig.motion.yaw.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12002
type: SIMPLE_ASSIGN
rig.motion.heave.box.shapeType = "box"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12002};
  (data->simulationInfo->stringParameter[0] /* rig.motion.heave.box.shapeType PARAM */) = _OMC_LIT32;
  TRACE_POP
}

/*
equation index: 12016
type: SIMPLE_ASSIGN
rig.motion.lateral.box.shapeType = "box"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12016};
  (data->simulationInfo->stringParameter[1] /* rig.motion.lateral.box.shapeType PARAM */) = _OMC_LIT32;
  TRACE_POP
}

/*
equation index: 12030
type: SIMPLE_ASSIGN
rig.motion.longitudinal.box.shapeType = "box"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12030};
  (data->simulationInfo->stringParameter[2] /* rig.motion.longitudinal.box.shapeType PARAM */) = _OMC_LIT32;
  TRACE_POP
}

/*
equation index: 12044
type: SIMPLE_ASSIGN
world.gravityArrowHead.shapeType = "cone"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12044};
  (data->simulationInfo->stringParameter[163] /* world.gravityArrowHead.shapeType PARAM */) = _OMC_LIT33;
  TRACE_POP
}

/*
equation index: 12045
type: SIMPLE_ASSIGN
world.gravityArrowLine.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12045(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12045};
  (data->simulationInfo->stringParameter[164] /* world.gravityArrowLine.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12046
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12046};
  (data->simulationInfo->stringParameter[179] /* world.z_label.cylinders[3].shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12047
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12047(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12047};
  (data->simulationInfo->stringParameter[178] /* world.z_label.cylinders[2].shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12048
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12048};
  (data->simulationInfo->stringParameter[177] /* world.z_label.cylinders[1].shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12050
type: SIMPLE_ASSIGN
world.z_arrowHead.shapeType = "cone"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12050(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12050};
  (data->simulationInfo->stringParameter[175] /* world.z_arrowHead.shapeType PARAM */) = _OMC_LIT33;
  TRACE_POP
}

/*
equation index: 12051
type: SIMPLE_ASSIGN
world.z_arrowLine.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12051(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12051};
  (data->simulationInfo->stringParameter[176] /* world.z_arrowLine.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12052
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12052(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12052};
  (data->simulationInfo->stringParameter[174] /* world.y_label.cylinders[2].shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12053
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12053(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12053};
  (data->simulationInfo->stringParameter[173] /* world.y_label.cylinders[1].shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12055
type: SIMPLE_ASSIGN
world.y_arrowHead.shapeType = "cone"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12055(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12055};
  (data->simulationInfo->stringParameter[171] /* world.y_arrowHead.shapeType PARAM */) = _OMC_LIT33;
  TRACE_POP
}

/*
equation index: 12056
type: SIMPLE_ASSIGN
world.y_arrowLine.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12056(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12056};
  (data->simulationInfo->stringParameter[172] /* world.y_arrowLine.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12057
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12057(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12057};
  (data->simulationInfo->stringParameter[170] /* world.x_label.cylinders[2].shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12058
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12058(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12058};
  (data->simulationInfo->stringParameter[169] /* world.x_label.cylinders[1].shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12060
type: SIMPLE_ASSIGN
world.x_arrowHead.shapeType = "cone"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12060};
  (data->simulationInfo->stringParameter[167] /* world.x_arrowHead.shapeType PARAM */) = _OMC_LIT33;
  TRACE_POP
}

/*
equation index: 12061
type: SIMPLE_ASSIGN
world.x_arrowLine.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12061};
  (data->simulationInfo->stringParameter[168] /* world.x_arrowLine.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12066
type: SIMPLE_ASSIGN
world.groundLength_v = world.groundLength_u
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12066};
  (data->simulationInfo->realParameter[4060] /* world.groundLength_v PARAM */) = (data->simulationInfo->realParameter[4059] /* world.groundLength_u PARAM */);
  TRACE_POP
}

/*
equation index: 12081
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.shape.shapeType = "spring"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12081};
  (data->simulationInfo->stringParameter[81] /* vehicle.rearSuspension.cornerL.coilover.shape.shapeType PARAM */) = _OMC_LIT34;
  TRACE_POP
}

/*
equation index: 12082
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.shape_b.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12082};
  (data->simulationInfo->stringParameter[83] /* vehicle.rearSuspension.cornerL.coilover.shape_b.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12083
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.shape_a.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12083};
  (data->simulationInfo->stringParameter[82] /* vehicle.rearSuspension.cornerL.coilover.shape_a.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12088
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.length_a = world.defaultForceLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12088};
  (data->simulationInfo->realParameter[1923] /* vehicle.rearSuspension.cornerL.coilover.length_a PARAM */) = (data->simulationInfo->realParameter[4023] /* world.defaultForceLength PARAM */);
  TRACE_POP
}

/*
equation index: 12089
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.mSprung = vehicle.rearSuspension.cornerL.vehicleParams.vehicleMass + (-2.0) * (vehicle.rearSuspension.cornerL.vehicleParams.mUnsprungFront + vehicle.rearSuspension.cornerL.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12089};
  (data->simulationInfo->realParameter[2541] /* vehicle.rearSuspension.cornerL.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[2560] /* vehicle.rearSuspension.cornerL.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[2542] /* vehicle.rearSuspension.cornerL.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[2543] /* vehicle.rearSuspension.cornerL.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 12090
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.F0Rear = 4.903325 * vehicle.rearSuspension.cornerL.vehicleParams.mSprung * vehicle.rearSuspension.cornerL.vehicleParams.a / vehicle.rearSuspension.cornerL.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12090};
  (data->simulationInfo->realParameter[2513] /* vehicle.rearSuspension.cornerL.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[2541] /* vehicle.rearSuspension.cornerL.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[2517] /* vehicle.rearSuspension.cornerL.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[2561] /* vehicle.rearSuspension.cornerL.vehicleParams.wheelbase PARAM */),"vehicle.rearSuspension.cornerL.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 12091
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.kRideRear = 0.10197162129779283 * vehicle.rearSuspension.cornerL.vehicleParams.F0Rear * (6.283185307179586 * vehicle.rearSuspension.cornerL.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12091};
  modelica_real tmp20;
  tmp20 = (6.283185307179586) * ((data->simulationInfo->realParameter[2529] /* vehicle.rearSuspension.cornerL.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[2537] /* vehicle.rearSuspension.cornerL.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[2513] /* vehicle.rearSuspension.cornerL.vehicleParams.F0Rear PARAM */)) * ((tmp20 * tmp20)));
  TRACE_POP
}

/*
equation index: 12092
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.dWheelRear = 2.0 * vehicle.rearSuspension.cornerL.vehicleParams.zetaRear * sqrt(vehicle.rearSuspension.cornerL.vehicleParams.kRideRear * vehicle.rearSuspension.cornerL.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12092};
  modelica_real tmp21;
  tmp21 = DIVISION_SIM(((data->simulationInfo->realParameter[2537] /* vehicle.rearSuspension.cornerL.vehicleParams.kRideRear PARAM */)) * ((data->simulationInfo->realParameter[2513] /* vehicle.rearSuspension.cornerL.vehicleParams.F0Rear PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp21 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.rearSuspension.cornerL.vehicleParams.kRideRear * vehicle.rearSuspension.cornerL.vehicleParams.F0Rear / 9.80665) was %g should be >= 0", tmp21);
    }
  }
  (data->simulationInfo->realParameter[2525] /* vehicle.rearSuspension.cornerL.vehicleParams.dWheelRear PARAM */) = (2.0) * (((data->simulationInfo->realParameter[2563] /* vehicle.rearSuspension.cornerL.vehicleParams.zetaRear PARAM */)) * (sqrt(tmp21)));
  TRACE_POP
}

/*
equation index: 12093
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.dWheel = vehicle.rearSuspension.cornerL.vehicleParams.dWheelRear
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12093};
  (data->simulationInfo->realParameter[1934] /* vehicle.rearSuspension.cornerL.dWheel PARAM */) = (data->simulationInfo->realParameter[2525] /* vehicle.rearSuspension.cornerL.vehicleParams.dWheelRear PARAM */);
  TRACE_POP
}

/*
equation index: 12094
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.d = vehicle.rearSuspension.cornerL.dWheel / vehicle.rearSuspension.cornerL.motionRatio ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12094};
  modelica_real tmp22;
  tmp22 = (data->simulationInfo->realParameter[2137] /* vehicle.rearSuspension.cornerL.motionRatio PARAM */);
  (data->simulationInfo->realParameter[1921] /* vehicle.rearSuspension.cornerL.coilover.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[1934] /* vehicle.rearSuspension.cornerL.dWheel PARAM */),(tmp22 * tmp22),"vehicle.rearSuspension.cornerL.motionRatio ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 12095
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.kRear = vehicle.rearSuspension.cornerL.vehicleParams.kRideRear * vehicle.rearSuspension.cornerL.vehicleParams.kz / (vehicle.rearSuspension.cornerL.vehicleParams.kz - vehicle.rearSuspension.cornerL.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12095};
  (data->simulationInfo->realParameter[2535] /* vehicle.rearSuspension.cornerL.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[2537] /* vehicle.rearSuspension.cornerL.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[2540] /* vehicle.rearSuspension.cornerL.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[2540] /* vehicle.rearSuspension.cornerL.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[2537] /* vehicle.rearSuspension.cornerL.vehicleParams.kRideRear PARAM */),"vehicle.rearSuspension.cornerL.vehicleParams.kz - vehicle.rearSuspension.cornerL.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 12096
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.kWheel = vehicle.rearSuspension.cornerL.vehicleParams.kRear
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12096};
  (data->simulationInfo->realParameter[2114] /* vehicle.rearSuspension.cornerL.kWheel PARAM */) = (data->simulationInfo->realParameter[2535] /* vehicle.rearSuspension.cornerL.vehicleParams.kRear PARAM */);
  TRACE_POP
}

/*
equation index: 12097
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.F0 = vehicle.rearSuspension.cornerL.vehicleParams.F0Rear
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12097};
  (data->simulationInfo->realParameter[1918] /* vehicle.rearSuspension.cornerL.F0 PARAM */) = (data->simulationInfo->realParameter[2513] /* vehicle.rearSuspension.cornerL.vehicleParams.F0Rear PARAM */);
  TRACE_POP
}

/*
equation index: 12098
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.s_unstretched = 0.4178516483155236 + vehicle.rearSuspension.cornerL.F0 * vehicle.rearSuspension.cornerL.motionRatio / vehicle.rearSuspension.cornerL.kWheel
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12098};
  (data->simulationInfo->realParameter[1925] /* vehicle.rearSuspension.cornerL.coilover.s_unstretched PARAM */) = 0.4178516483155236 + ((data->simulationInfo->realParameter[1918] /* vehicle.rearSuspension.cornerL.F0 PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[2137] /* vehicle.rearSuspension.cornerL.motionRatio PARAM */),(data->simulationInfo->realParameter[2114] /* vehicle.rearSuspension.cornerL.kWheel PARAM */),"vehicle.rearSuspension.cornerL.kWheel",equationIndexes));
  TRACE_POP
}

/*
equation index: 12099
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.c = vehicle.rearSuspension.cornerL.kWheel / vehicle.rearSuspension.cornerL.motionRatio ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12099};
  modelica_real tmp23;
  tmp23 = (data->simulationInfo->realParameter[2137] /* vehicle.rearSuspension.cornerL.motionRatio PARAM */);
  (data->simulationInfo->realParameter[1920] /* vehicle.rearSuspension.cornerL.coilover.c PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[2114] /* vehicle.rearSuspension.cornerL.kWheel PARAM */),(tmp23 * tmp23),"vehicle.rearSuspension.cornerL.motionRatio ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 12101
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springArm.shape.shapeType = vehicle.rearSuspension.cornerL.springArm.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12101};
  (data->simulationInfo->stringParameter[96] /* vehicle.rearSuspension.cornerL.springArm.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[97] /* vehicle.rearSuspension.cornerL.springArm.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12115
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springChassis.shape.shapeType = vehicle.rearSuspension.cornerL.springChassis.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12115};
  (data->simulationInfo->stringParameter[98] /* vehicle.rearSuspension.cornerL.springChassis.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[99] /* vehicle.rearSuspension.cornerL.springChassis.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12134
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod2.shape.shapeType = vehicle.rearSuspension.cornerL.jointUSR.rod2.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12134};
  (data->simulationInfo->stringParameter[90] /* vehicle.rearSuspension.cornerL.jointUSR.rod2.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[91] /* vehicle.rearSuspension.cornerL.jointUSR.rod2.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12148
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod1.universalShape2.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12148};
  (data->simulationInfo->stringParameter[89] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.universalShape2.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12149
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod1.universalShape1.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12149};
  (data->simulationInfo->stringParameter[88] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.universalShape1.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12150
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod1.sphericalShape_b.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12150};
  (data->simulationInfo->stringParameter[87] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.sphericalShape_b.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 12151
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod1.rodShape.shapeType = vehicle.rearSuspension.cornerL.jointUSR.rod1.rodShapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12151};
  (data->simulationInfo->stringParameter[85] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.rodShape.shapeType PARAM */) = (data->simulationInfo->stringParameter[86] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.rodShapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12172
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.revolute.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12172};
  (data->simulationInfo->stringParameter[84] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12176
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.revolute.phi_guess = vehicle.rearSuspension.cornerL.jointUSR.phi_guess
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12176};
  (data->simulationInfo->realParameter[2043] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.phi_guess PARAM */) = (data->simulationInfo->realParameter[2019] /* vehicle.rearSuspension.cornerL.jointUSR.phi_guess PARAM */);
  TRACE_POP
}

/*
equation index: 12177
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.revolute.phi_offset = vehicle.rearSuspension.cornerL.jointUSR.phi_offset
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12177};
  (data->simulationInfo->realParameter[2044] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.phi_offset PARAM */) = (data->simulationInfo->realParameter[2020] /* vehicle.rearSuspension.cornerL.jointUSR.phi_offset PARAM */);
  TRACE_POP
}

/*
equation index: 12203
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.lcaMount.shape.shapeType = vehicle.rearSuspension.cornerL.lcaMount.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12203};
  (data->simulationInfo->stringParameter[92] /* vehicle.rearSuspension.cornerL.lcaMount.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[93] /* vehicle.rearSuspension.cornerL.lcaMount.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12218
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.uca.shape.shapeType = vehicle.rearSuspension.cornerL.uca.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12218};
  (data->simulationInfo->stringParameter[108] /* vehicle.rearSuspension.cornerL.uca.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[109] /* vehicle.rearSuspension.cornerL.uca.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12233
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12233};
  (data->simulationInfo->stringParameter[112] /* vehicle.rearSuspension.cornerL.ucaPivot.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12240
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaMount.shape.shapeType = vehicle.rearSuspension.cornerL.ucaMount.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12240};
  (data->simulationInfo->stringParameter[110] /* vehicle.rearSuspension.cornerL.ucaMount.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[111] /* vehicle.rearSuspension.cornerL.ucaMount.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12343
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.F0Front = 4.903325 * vehicle.rearSuspension.cornerL.vehicleParams.mSprung * vehicle.rearSuspension.cornerL.vehicleParams.b / vehicle.rearSuspension.cornerL.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12343};
  (data->simulationInfo->realParameter[2512] /* vehicle.rearSuspension.cornerL.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[2541] /* vehicle.rearSuspension.cornerL.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[2521] /* vehicle.rearSuspension.cornerL.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[2561] /* vehicle.rearSuspension.cornerL.vehicleParams.wheelbase PARAM */),"vehicle.rearSuspension.cornerL.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 12344
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.kRideFront = 0.10197162129779283 * vehicle.rearSuspension.cornerL.vehicleParams.F0Front * (6.283185307179586 * vehicle.rearSuspension.cornerL.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12344};
  modelica_real tmp24;
  tmp24 = (6.283185307179586) * ((data->simulationInfo->realParameter[2528] /* vehicle.rearSuspension.cornerL.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[2536] /* vehicle.rearSuspension.cornerL.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[2512] /* vehicle.rearSuspension.cornerL.vehicleParams.F0Front PARAM */)) * ((tmp24 * tmp24)));
  TRACE_POP
}

/*
equation index: 12345
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.dWheelFront = 2.0 * vehicle.rearSuspension.cornerL.vehicleParams.zetaFront * sqrt(vehicle.rearSuspension.cornerL.vehicleParams.kRideFront * vehicle.rearSuspension.cornerL.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12345};
  modelica_real tmp25;
  tmp25 = DIVISION_SIM(((data->simulationInfo->realParameter[2536] /* vehicle.rearSuspension.cornerL.vehicleParams.kRideFront PARAM */)) * ((data->simulationInfo->realParameter[2512] /* vehicle.rearSuspension.cornerL.vehicleParams.F0Front PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp25 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.rearSuspension.cornerL.vehicleParams.kRideFront * vehicle.rearSuspension.cornerL.vehicleParams.F0Front / 9.80665) was %g should be >= 0", tmp25);
    }
  }
  (data->simulationInfo->realParameter[2524] /* vehicle.rearSuspension.cornerL.vehicleParams.dWheelFront PARAM */) = (2.0) * (((data->simulationInfo->realParameter[2562] /* vehicle.rearSuspension.cornerL.vehicleParams.zetaFront PARAM */)) * (sqrt(tmp25)));
  TRACE_POP
}

/*
equation index: 12346
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.hpPower = 745.7 * vehicle.rearSuspension.cornerL.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12346};
  (data->simulationInfo->realParameter[2533] /* vehicle.rearSuspension.cornerL.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[2532] /* vehicle.rearSuspension.cornerL.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 12347
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.track = vehicle.rearSuspension.cornerL.vehicleParams.tf + vehicle.rearSuspension.cornerL.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12347};
  (data->simulationInfo->realParameter[2559] /* vehicle.rearSuspension.cornerL.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[2557] /* vehicle.rearSuspension.cornerL.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[2558] /* vehicle.rearSuspension.cornerL.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 12348
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.kFront = vehicle.rearSuspension.cornerL.vehicleParams.kRideFront * vehicle.rearSuspension.cornerL.vehicleParams.kz / (vehicle.rearSuspension.cornerL.vehicleParams.kz - vehicle.rearSuspension.cornerL.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12348};
  (data->simulationInfo->realParameter[2534] /* vehicle.rearSuspension.cornerL.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[2536] /* vehicle.rearSuspension.cornerL.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[2540] /* vehicle.rearSuspension.cornerL.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[2540] /* vehicle.rearSuspension.cornerL.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[2536] /* vehicle.rearSuspension.cornerL.vehicleParams.kRideFront PARAM */),"vehicle.rearSuspension.cornerL.vehicleParams.kz - vehicle.rearSuspension.cornerL.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 12354
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.sphere.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12354};
  (data->simulationInfo->stringParameter[114] /* vehicle.rearSuspension.cornerL.upright.sphere.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 12355
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12355};
  (data->simulationInfo->stringParameter[113] /* vehicle.rearSuspension.cornerL.upright.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12356
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.phi_start[3] = vehicle.rearSuspension.cornerL.upright.angles_start[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12356};
  (data->simulationInfo->realParameter[2497] /* vehicle.rearSuspension.cornerL.upright.phi_start[3] PARAM */) = (data->simulationInfo->realParameter[2485] /* vehicle.rearSuspension.cornerL.upright.angles_start[3] PARAM */);
  TRACE_POP
}

/*
equation index: 12357
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.phi_start[2] = vehicle.rearSuspension.cornerL.upright.angles_start[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12357};
  (data->simulationInfo->realParameter[2496] /* vehicle.rearSuspension.cornerL.upright.phi_start[2] PARAM */) = (data->simulationInfo->realParameter[2484] /* vehicle.rearSuspension.cornerL.upright.angles_start[2] PARAM */);
  TRACE_POP
}

/*
equation index: 12358
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.phi_start[1] = vehicle.rearSuspension.cornerL.upright.angles_start[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12358};
  (data->simulationInfo->realParameter[2495] /* vehicle.rearSuspension.cornerL.upright.phi_start[1] PARAM */) = (data->simulationInfo->realParameter[2483] /* vehicle.rearSuspension.cornerL.upright.angles_start[1] PARAM */);
  TRACE_POP
}

/*
equation index: 12375
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.I[3,3] = vehicle.rearSuspension.cornerL.upright.I_33
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12375};
  (data->simulationInfo->realParameter[2460] /* vehicle.rearSuspension.cornerL.upright.I[3,3] PARAM */) = (data->simulationInfo->realParameter[2466] /* vehicle.rearSuspension.cornerL.upright.I_33 PARAM */);
  TRACE_POP
}

/*
equation index: 12376
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.I[3,2] = vehicle.rearSuspension.cornerL.upright.I_32
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12376};
  (data->simulationInfo->realParameter[2459] /* vehicle.rearSuspension.cornerL.upright.I[3,2] PARAM */) = (data->simulationInfo->realParameter[2465] /* vehicle.rearSuspension.cornerL.upright.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 12377
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.I[3,1] = vehicle.rearSuspension.cornerL.upright.I_31
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12377};
  (data->simulationInfo->realParameter[2458] /* vehicle.rearSuspension.cornerL.upright.I[3,1] PARAM */) = (data->simulationInfo->realParameter[2464] /* vehicle.rearSuspension.cornerL.upright.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 12378
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.I[2,3] = vehicle.rearSuspension.cornerL.upright.I_32
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12378};
  (data->simulationInfo->realParameter[2457] /* vehicle.rearSuspension.cornerL.upright.I[2,3] PARAM */) = (data->simulationInfo->realParameter[2465] /* vehicle.rearSuspension.cornerL.upright.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 12379
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.I[2,2] = vehicle.rearSuspension.cornerL.upright.I_22
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12379};
  (data->simulationInfo->realParameter[2456] /* vehicle.rearSuspension.cornerL.upright.I[2,2] PARAM */) = (data->simulationInfo->realParameter[2463] /* vehicle.rearSuspension.cornerL.upright.I_22 PARAM */);
  TRACE_POP
}

/*
equation index: 12380
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.I[2,1] = vehicle.rearSuspension.cornerL.upright.I_21
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12380};
  (data->simulationInfo->realParameter[2455] /* vehicle.rearSuspension.cornerL.upright.I[2,1] PARAM */) = (data->simulationInfo->realParameter[2462] /* vehicle.rearSuspension.cornerL.upright.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 12381
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.I[1,3] = vehicle.rearSuspension.cornerL.upright.I_31
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12381};
  (data->simulationInfo->realParameter[2454] /* vehicle.rearSuspension.cornerL.upright.I[1,3] PARAM */) = (data->simulationInfo->realParameter[2464] /* vehicle.rearSuspension.cornerL.upright.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 12382
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.I[1,2] = vehicle.rearSuspension.cornerL.upright.I_21
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12382};
  (data->simulationInfo->realParameter[2453] /* vehicle.rearSuspension.cornerL.upright.I[1,2] PARAM */) = (data->simulationInfo->realParameter[2462] /* vehicle.rearSuspension.cornerL.upright.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 12383
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.I[1,1] = vehicle.rearSuspension.cornerL.upright.I_11
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12383};
  (data->simulationInfo->realParameter[2452] /* vehicle.rearSuspension.cornerL.upright.I[1,1] PARAM */) = (data->simulationInfo->realParameter[2461] /* vehicle.rearSuspension.cornerL.upright.I_11 PARAM */);
  TRACE_POP
}

/*
equation index: 12396
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.mUnsprung = vehicle.rearSuspension.cornerL.vehicleParams.mUnsprungRear
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12396};
  (data->simulationInfo->realParameter[2136] /* vehicle.rearSuspension.cornerL.mUnsprung PARAM */) = (data->simulationInfo->realParameter[2543] /* vehicle.rearSuspension.cornerL.vehicleParams.mUnsprungRear PARAM */);
  TRACE_POP
}

/*
equation index: 12397
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.m = vehicle.rearSuspension.cornerL.mUnsprung
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12397};
  (data->simulationInfo->realParameter[2494] /* vehicle.rearSuspension.cornerL.upright.m PARAM */) = (data->simulationInfo->realParameter[2136] /* vehicle.rearSuspension.cornerL.mUnsprung PARAM */);
  TRACE_POP
}

/*
equation index: 12399
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.staticAlign.shape.shapeType = vehicle.rearSuspension.cornerL.staticAlign.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12399};
  (data->simulationInfo->stringParameter[100] /* vehicle.rearSuspension.cornerL.staticAlign.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[101] /* vehicle.rearSuspension.cornerL.staticAlign.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12421
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.staticCamber = vehicle.rearSuspension.cornerL.hp.rear_staticCamber
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12421};
  (data->simulationInfo->realParameter[2309] /* vehicle.rearSuspension.cornerL.staticCamber PARAM */) = (data->simulationInfo->realParameter[2003] /* vehicle.rearSuspension.cornerL.hp.rear_staticCamber PARAM */);
  TRACE_POP
}

/*
equation index: 12422
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.staticAlign.angles[2] = (-57.29577951308232) * vehicle.rearSuspension.cornerL.staticCamber
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12422};
  (data->simulationInfo->realParameter[2276] /* vehicle.rearSuspension.cornerL.staticAlign.angles[2] PARAM */) = (-57.29577951308232) * ((data->simulationInfo->realParameter[2309] /* vehicle.rearSuspension.cornerL.staticCamber PARAM */));
  TRACE_POP
}

/*
equation index: 12423
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.staticToe = vehicle.rearSuspension.cornerL.hp.rear_staticToe
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12423};
  (data->simulationInfo->realParameter[2310] /* vehicle.rearSuspension.cornerL.staticToe PARAM */) = (data->simulationInfo->realParameter[2004] /* vehicle.rearSuspension.cornerL.hp.rear_staticToe PARAM */);
  TRACE_POP
}

/*
equation index: 12424
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.staticAlign.angles[1] = 57.29577951308232 * vehicle.rearSuspension.cornerL.staticToe
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12424};
  (data->simulationInfo->realParameter[2275] /* vehicle.rearSuspension.cornerL.staticAlign.angles[1] PARAM */) = (57.29577951308232) * ((data->simulationInfo->realParameter[2310] /* vehicle.rearSuspension.cornerL.staticToe PARAM */));
  TRACE_POP
}

/*
equation index: 12442
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.spindle.shape.shapeType = vehicle.rearSuspension.cornerL.spindle.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12442};
  (data->simulationInfo->stringParameter[94] /* vehicle.rearSuspension.cornerL.spindle.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[95] /* vehicle.rearSuspension.cornerL.spindle.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12461
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.rod2.shape.shapeType = vehicle.rearSuspension.cornerL.tieRod.rod2.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12461};
  (data->simulationInfo->stringParameter[106] /* vehicle.rearSuspension.cornerL.tieRod.rod2.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[107] /* vehicle.rearSuspension.cornerL.tieRod.rod2.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12476
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.rod1.shape_b.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12476};
  (data->simulationInfo->stringParameter[104] /* vehicle.rearSuspension.cornerL.tieRod.rod1.shape_b.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 12477
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.rod1.shape_a.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12477};
  (data->simulationInfo->stringParameter[103] /* vehicle.rearSuspension.cornerL.tieRod.rod1.shape_a.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 12478
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.rod1.shape_rod.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12478};
  (data->simulationInfo->stringParameter[105] /* vehicle.rearSuspension.cornerL.tieRod.rod1.shape_rod.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12481
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.rod1.massDiameter = vehicle.rearSuspension.cornerL.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12481};
  (data->simulationInfo->realParameter[2341] /* vehicle.rearSuspension.cornerL.tieRod.rod1.massDiameter PARAM */) = (data->simulationInfo->realParameter[2357] /* vehicle.rearSuspension.cornerL.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 12486
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12486};
  (data->simulationInfo->stringParameter[102] /* vehicle.rearSuspension.cornerL.tieRod.revolute.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12490
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.phi_guess = vehicle.rearSuspension.cornerL.tieRod.phi_guess
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12490};
  (data->simulationInfo->realParameter[2335] /* vehicle.rearSuspension.cornerL.tieRod.revolute.phi_guess PARAM */) = (data->simulationInfo->realParameter[2314] /* vehicle.rearSuspension.cornerL.tieRod.phi_guess PARAM */);
  TRACE_POP
}

/*
equation index: 12491
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.phi_offset = vehicle.rearSuspension.cornerL.tieRod.phi_offset
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12491};
  (data->simulationInfo->realParameter[2336] /* vehicle.rearSuspension.cornerL.tieRod.revolute.phi_offset PARAM */) = (data->simulationInfo->realParameter[2315] /* vehicle.rearSuspension.cornerL.tieRod.phi_offset PARAM */);
  TRACE_POP
}

/*
equation index: 12495
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.lengthConstraint = vehicle.rearSuspension.cornerL.tieRod.rod1Length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12495};
  (data->simulationInfo->realParameter[2331] /* vehicle.rearSuspension.cornerL.tieRod.revolute.lengthConstraint PARAM */) = (data->simulationInfo->realParameter[2359] /* vehicle.rearSuspension.cornerL.tieRod.rod1Length PARAM */);
  TRACE_POP
}

/*
equation index: 12521
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.shape.shapeType = "spring"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12521};
  (data->simulationInfo->stringParameter[115] /* vehicle.rearSuspension.cornerR.coilover.shape.shapeType PARAM */) = _OMC_LIT34;
  TRACE_POP
}

/*
equation index: 12522
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.shape_b.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12522};
  (data->simulationInfo->stringParameter[117] /* vehicle.rearSuspension.cornerR.coilover.shape_b.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12523
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.shape_a.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12523};
  (data->simulationInfo->stringParameter[116] /* vehicle.rearSuspension.cornerR.coilover.shape_a.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12528
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.length_a = world.defaultForceLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12528};
  (data->simulationInfo->realParameter[2570] /* vehicle.rearSuspension.cornerR.coilover.length_a PARAM */) = (data->simulationInfo->realParameter[4023] /* world.defaultForceLength PARAM */);
  TRACE_POP
}

/*
equation index: 12529
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.mSprung = vehicle.rearSuspension.cornerR.vehicleParams.vehicleMass + (-2.0) * (vehicle.rearSuspension.cornerR.vehicleParams.mUnsprungFront + vehicle.rearSuspension.cornerR.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12529};
  (data->simulationInfo->realParameter[3188] /* vehicle.rearSuspension.cornerR.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[3207] /* vehicle.rearSuspension.cornerR.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[3189] /* vehicle.rearSuspension.cornerR.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[3190] /* vehicle.rearSuspension.cornerR.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 12530
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.F0Rear = 4.903325 * vehicle.rearSuspension.cornerR.vehicleParams.mSprung * vehicle.rearSuspension.cornerR.vehicleParams.a / vehicle.rearSuspension.cornerR.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12530};
  (data->simulationInfo->realParameter[3160] /* vehicle.rearSuspension.cornerR.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[3188] /* vehicle.rearSuspension.cornerR.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3164] /* vehicle.rearSuspension.cornerR.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[3208] /* vehicle.rearSuspension.cornerR.vehicleParams.wheelbase PARAM */),"vehicle.rearSuspension.cornerR.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 12531
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.kRideRear = 0.10197162129779283 * vehicle.rearSuspension.cornerR.vehicleParams.F0Rear * (6.283185307179586 * vehicle.rearSuspension.cornerR.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12531};
  modelica_real tmp26;
  tmp26 = (6.283185307179586) * ((data->simulationInfo->realParameter[3176] /* vehicle.rearSuspension.cornerR.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[3184] /* vehicle.rearSuspension.cornerR.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[3160] /* vehicle.rearSuspension.cornerR.vehicleParams.F0Rear PARAM */)) * ((tmp26 * tmp26)));
  TRACE_POP
}

/*
equation index: 12532
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.dWheelRear = 2.0 * vehicle.rearSuspension.cornerR.vehicleParams.zetaRear * sqrt(vehicle.rearSuspension.cornerR.vehicleParams.kRideRear * vehicle.rearSuspension.cornerR.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12532};
  modelica_real tmp27;
  tmp27 = DIVISION_SIM(((data->simulationInfo->realParameter[3184] /* vehicle.rearSuspension.cornerR.vehicleParams.kRideRear PARAM */)) * ((data->simulationInfo->realParameter[3160] /* vehicle.rearSuspension.cornerR.vehicleParams.F0Rear PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp27 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.rearSuspension.cornerR.vehicleParams.kRideRear * vehicle.rearSuspension.cornerR.vehicleParams.F0Rear / 9.80665) was %g should be >= 0", tmp27);
    }
  }
  (data->simulationInfo->realParameter[3172] /* vehicle.rearSuspension.cornerR.vehicleParams.dWheelRear PARAM */) = (2.0) * (((data->simulationInfo->realParameter[3210] /* vehicle.rearSuspension.cornerR.vehicleParams.zetaRear PARAM */)) * (sqrt(tmp27)));
  TRACE_POP
}

/*
equation index: 12533
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.dWheel = vehicle.rearSuspension.cornerR.vehicleParams.dWheelRear
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12533};
  (data->simulationInfo->realParameter[2581] /* vehicle.rearSuspension.cornerR.dWheel PARAM */) = (data->simulationInfo->realParameter[3172] /* vehicle.rearSuspension.cornerR.vehicleParams.dWheelRear PARAM */);
  TRACE_POP
}

/*
equation index: 12534
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.d = vehicle.rearSuspension.cornerR.dWheel / vehicle.rearSuspension.cornerR.motionRatio ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12534};
  modelica_real tmp28;
  tmp28 = (data->simulationInfo->realParameter[2784] /* vehicle.rearSuspension.cornerR.motionRatio PARAM */);
  (data->simulationInfo->realParameter[2568] /* vehicle.rearSuspension.cornerR.coilover.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[2581] /* vehicle.rearSuspension.cornerR.dWheel PARAM */),(tmp28 * tmp28),"vehicle.rearSuspension.cornerR.motionRatio ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 12535
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.kRear = vehicle.rearSuspension.cornerR.vehicleParams.kRideRear * vehicle.rearSuspension.cornerR.vehicleParams.kz / (vehicle.rearSuspension.cornerR.vehicleParams.kz - vehicle.rearSuspension.cornerR.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12535};
  (data->simulationInfo->realParameter[3182] /* vehicle.rearSuspension.cornerR.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[3184] /* vehicle.rearSuspension.cornerR.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3187] /* vehicle.rearSuspension.cornerR.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[3187] /* vehicle.rearSuspension.cornerR.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[3184] /* vehicle.rearSuspension.cornerR.vehicleParams.kRideRear PARAM */),"vehicle.rearSuspension.cornerR.vehicleParams.kz - vehicle.rearSuspension.cornerR.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 12536
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.kWheel = vehicle.rearSuspension.cornerR.vehicleParams.kRear
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12536};
  (data->simulationInfo->realParameter[2761] /* vehicle.rearSuspension.cornerR.kWheel PARAM */) = (data->simulationInfo->realParameter[3182] /* vehicle.rearSuspension.cornerR.vehicleParams.kRear PARAM */);
  TRACE_POP
}

/*
equation index: 12537
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.F0 = vehicle.rearSuspension.cornerR.vehicleParams.F0Rear
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12537};
  (data->simulationInfo->realParameter[2565] /* vehicle.rearSuspension.cornerR.F0 PARAM */) = (data->simulationInfo->realParameter[3160] /* vehicle.rearSuspension.cornerR.vehicleParams.F0Rear PARAM */);
  TRACE_POP
}

/*
equation index: 12538
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.s_unstretched = 0.4178516483155236 + vehicle.rearSuspension.cornerR.F0 * vehicle.rearSuspension.cornerR.motionRatio / vehicle.rearSuspension.cornerR.kWheel
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12538};
  (data->simulationInfo->realParameter[2572] /* vehicle.rearSuspension.cornerR.coilover.s_unstretched PARAM */) = 0.4178516483155236 + ((data->simulationInfo->realParameter[2565] /* vehicle.rearSuspension.cornerR.F0 PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[2784] /* vehicle.rearSuspension.cornerR.motionRatio PARAM */),(data->simulationInfo->realParameter[2761] /* vehicle.rearSuspension.cornerR.kWheel PARAM */),"vehicle.rearSuspension.cornerR.kWheel",equationIndexes));
  TRACE_POP
}

/*
equation index: 12539
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.c = vehicle.rearSuspension.cornerR.kWheel / vehicle.rearSuspension.cornerR.motionRatio ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12539};
  modelica_real tmp29;
  tmp29 = (data->simulationInfo->realParameter[2784] /* vehicle.rearSuspension.cornerR.motionRatio PARAM */);
  (data->simulationInfo->realParameter[2567] /* vehicle.rearSuspension.cornerR.coilover.c PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[2761] /* vehicle.rearSuspension.cornerR.kWheel PARAM */),(tmp29 * tmp29),"vehicle.rearSuspension.cornerR.motionRatio ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 12541
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springArm.shape.shapeType = vehicle.rearSuspension.cornerR.springArm.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12541};
  (data->simulationInfo->stringParameter[130] /* vehicle.rearSuspension.cornerR.springArm.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[131] /* vehicle.rearSuspension.cornerR.springArm.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12555
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springChassis.shape.shapeType = vehicle.rearSuspension.cornerR.springChassis.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12555};
  (data->simulationInfo->stringParameter[132] /* vehicle.rearSuspension.cornerR.springChassis.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[133] /* vehicle.rearSuspension.cornerR.springChassis.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12574
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod2.shape.shapeType = vehicle.rearSuspension.cornerR.jointUSR.rod2.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12574};
  (data->simulationInfo->stringParameter[124] /* vehicle.rearSuspension.cornerR.jointUSR.rod2.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[125] /* vehicle.rearSuspension.cornerR.jointUSR.rod2.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12588
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod1.universalShape2.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12588};
  (data->simulationInfo->stringParameter[123] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.universalShape2.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12589
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod1.universalShape1.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12589};
  (data->simulationInfo->stringParameter[122] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.universalShape1.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12590
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod1.sphericalShape_b.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12590};
  (data->simulationInfo->stringParameter[121] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.sphericalShape_b.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 12591
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod1.rodShape.shapeType = vehicle.rearSuspension.cornerR.jointUSR.rod1.rodShapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12591};
  (data->simulationInfo->stringParameter[119] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.rodShape.shapeType PARAM */) = (data->simulationInfo->stringParameter[120] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.rodShapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12612
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.revolute.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12612};
  (data->simulationInfo->stringParameter[118] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12616
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.revolute.phi_guess = vehicle.rearSuspension.cornerR.jointUSR.phi_guess
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12616};
  (data->simulationInfo->realParameter[2690] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.phi_guess PARAM */) = (data->simulationInfo->realParameter[2666] /* vehicle.rearSuspension.cornerR.jointUSR.phi_guess PARAM */);
  TRACE_POP
}

/*
equation index: 12617
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.revolute.phi_offset = vehicle.rearSuspension.cornerR.jointUSR.phi_offset
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12617};
  (data->simulationInfo->realParameter[2691] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.phi_offset PARAM */) = (data->simulationInfo->realParameter[2667] /* vehicle.rearSuspension.cornerR.jointUSR.phi_offset PARAM */);
  TRACE_POP
}

/*
equation index: 12643
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.lcaMount.shape.shapeType = vehicle.rearSuspension.cornerR.lcaMount.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12643};
  (data->simulationInfo->stringParameter[126] /* vehicle.rearSuspension.cornerR.lcaMount.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[127] /* vehicle.rearSuspension.cornerR.lcaMount.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12658
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.uca.shape.shapeType = vehicle.rearSuspension.cornerR.uca.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12658};
  (data->simulationInfo->stringParameter[142] /* vehicle.rearSuspension.cornerR.uca.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[143] /* vehicle.rearSuspension.cornerR.uca.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12673
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12673};
  (data->simulationInfo->stringParameter[146] /* vehicle.rearSuspension.cornerR.ucaPivot.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12680
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaMount.shape.shapeType = vehicle.rearSuspension.cornerR.ucaMount.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12680};
  (data->simulationInfo->stringParameter[144] /* vehicle.rearSuspension.cornerR.ucaMount.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[145] /* vehicle.rearSuspension.cornerR.ucaMount.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12783
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.F0Front = 4.903325 * vehicle.rearSuspension.cornerR.vehicleParams.mSprung * vehicle.rearSuspension.cornerR.vehicleParams.b / vehicle.rearSuspension.cornerR.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12783};
  (data->simulationInfo->realParameter[3159] /* vehicle.rearSuspension.cornerR.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[3188] /* vehicle.rearSuspension.cornerR.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3168] /* vehicle.rearSuspension.cornerR.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[3208] /* vehicle.rearSuspension.cornerR.vehicleParams.wheelbase PARAM */),"vehicle.rearSuspension.cornerR.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 12784
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.kRideFront = 0.10197162129779283 * vehicle.rearSuspension.cornerR.vehicleParams.F0Front * (6.283185307179586 * vehicle.rearSuspension.cornerR.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12784};
  modelica_real tmp30;
  tmp30 = (6.283185307179586) * ((data->simulationInfo->realParameter[3175] /* vehicle.rearSuspension.cornerR.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[3183] /* vehicle.rearSuspension.cornerR.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[3159] /* vehicle.rearSuspension.cornerR.vehicleParams.F0Front PARAM */)) * ((tmp30 * tmp30)));
  TRACE_POP
}

/*
equation index: 12785
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.dWheelFront = 2.0 * vehicle.rearSuspension.cornerR.vehicleParams.zetaFront * sqrt(vehicle.rearSuspension.cornerR.vehicleParams.kRideFront * vehicle.rearSuspension.cornerR.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12785};
  modelica_real tmp31;
  tmp31 = DIVISION_SIM(((data->simulationInfo->realParameter[3183] /* vehicle.rearSuspension.cornerR.vehicleParams.kRideFront PARAM */)) * ((data->simulationInfo->realParameter[3159] /* vehicle.rearSuspension.cornerR.vehicleParams.F0Front PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp31 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.rearSuspension.cornerR.vehicleParams.kRideFront * vehicle.rearSuspension.cornerR.vehicleParams.F0Front / 9.80665) was %g should be >= 0", tmp31);
    }
  }
  (data->simulationInfo->realParameter[3171] /* vehicle.rearSuspension.cornerR.vehicleParams.dWheelFront PARAM */) = (2.0) * (((data->simulationInfo->realParameter[3209] /* vehicle.rearSuspension.cornerR.vehicleParams.zetaFront PARAM */)) * (sqrt(tmp31)));
  TRACE_POP
}

/*
equation index: 12786
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.hpPower = 745.7 * vehicle.rearSuspension.cornerR.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12786};
  (data->simulationInfo->realParameter[3180] /* vehicle.rearSuspension.cornerR.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[3179] /* vehicle.rearSuspension.cornerR.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 12787
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.track = vehicle.rearSuspension.cornerR.vehicleParams.tf + vehicle.rearSuspension.cornerR.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12787};
  (data->simulationInfo->realParameter[3206] /* vehicle.rearSuspension.cornerR.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[3204] /* vehicle.rearSuspension.cornerR.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[3205] /* vehicle.rearSuspension.cornerR.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 12788
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.kFront = vehicle.rearSuspension.cornerR.vehicleParams.kRideFront * vehicle.rearSuspension.cornerR.vehicleParams.kz / (vehicle.rearSuspension.cornerR.vehicleParams.kz - vehicle.rearSuspension.cornerR.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12788};
  (data->simulationInfo->realParameter[3181] /* vehicle.rearSuspension.cornerR.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[3183] /* vehicle.rearSuspension.cornerR.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3187] /* vehicle.rearSuspension.cornerR.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[3187] /* vehicle.rearSuspension.cornerR.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[3183] /* vehicle.rearSuspension.cornerR.vehicleParams.kRideFront PARAM */),"vehicle.rearSuspension.cornerR.vehicleParams.kz - vehicle.rearSuspension.cornerR.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 12794
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.sphere.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12794};
  (data->simulationInfo->stringParameter[148] /* vehicle.rearSuspension.cornerR.upright.sphere.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 12795
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12795};
  (data->simulationInfo->stringParameter[147] /* vehicle.rearSuspension.cornerR.upright.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12796
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.phi_start[3] = vehicle.rearSuspension.cornerR.upright.angles_start[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12796};
  (data->simulationInfo->realParameter[3144] /* vehicle.rearSuspension.cornerR.upright.phi_start[3] PARAM */) = (data->simulationInfo->realParameter[3132] /* vehicle.rearSuspension.cornerR.upright.angles_start[3] PARAM */);
  TRACE_POP
}

/*
equation index: 12797
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.phi_start[2] = vehicle.rearSuspension.cornerR.upright.angles_start[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12797};
  (data->simulationInfo->realParameter[3143] /* vehicle.rearSuspension.cornerR.upright.phi_start[2] PARAM */) = (data->simulationInfo->realParameter[3131] /* vehicle.rearSuspension.cornerR.upright.angles_start[2] PARAM */);
  TRACE_POP
}

/*
equation index: 12798
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.phi_start[1] = vehicle.rearSuspension.cornerR.upright.angles_start[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12798};
  (data->simulationInfo->realParameter[3142] /* vehicle.rearSuspension.cornerR.upright.phi_start[1] PARAM */) = (data->simulationInfo->realParameter[3130] /* vehicle.rearSuspension.cornerR.upright.angles_start[1] PARAM */);
  TRACE_POP
}

/*
equation index: 12815
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.I[3,3] = vehicle.rearSuspension.cornerR.upright.I_33
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12815};
  (data->simulationInfo->realParameter[3107] /* vehicle.rearSuspension.cornerR.upright.I[3,3] PARAM */) = (data->simulationInfo->realParameter[3113] /* vehicle.rearSuspension.cornerR.upright.I_33 PARAM */);
  TRACE_POP
}

/*
equation index: 12816
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.I[3,2] = vehicle.rearSuspension.cornerR.upright.I_32
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12816};
  (data->simulationInfo->realParameter[3106] /* vehicle.rearSuspension.cornerR.upright.I[3,2] PARAM */) = (data->simulationInfo->realParameter[3112] /* vehicle.rearSuspension.cornerR.upright.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 12817
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.I[3,1] = vehicle.rearSuspension.cornerR.upright.I_31
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12817};
  (data->simulationInfo->realParameter[3105] /* vehicle.rearSuspension.cornerR.upright.I[3,1] PARAM */) = (data->simulationInfo->realParameter[3111] /* vehicle.rearSuspension.cornerR.upright.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 12818
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.I[2,3] = vehicle.rearSuspension.cornerR.upright.I_32
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12818};
  (data->simulationInfo->realParameter[3104] /* vehicle.rearSuspension.cornerR.upright.I[2,3] PARAM */) = (data->simulationInfo->realParameter[3112] /* vehicle.rearSuspension.cornerR.upright.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 12819
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.I[2,2] = vehicle.rearSuspension.cornerR.upright.I_22
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12819};
  (data->simulationInfo->realParameter[3103] /* vehicle.rearSuspension.cornerR.upright.I[2,2] PARAM */) = (data->simulationInfo->realParameter[3110] /* vehicle.rearSuspension.cornerR.upright.I_22 PARAM */);
  TRACE_POP
}

/*
equation index: 12820
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.I[2,1] = vehicle.rearSuspension.cornerR.upright.I_21
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12820};
  (data->simulationInfo->realParameter[3102] /* vehicle.rearSuspension.cornerR.upright.I[2,1] PARAM */) = (data->simulationInfo->realParameter[3109] /* vehicle.rearSuspension.cornerR.upright.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 12821
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.I[1,3] = vehicle.rearSuspension.cornerR.upright.I_31
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12821};
  (data->simulationInfo->realParameter[3101] /* vehicle.rearSuspension.cornerR.upright.I[1,3] PARAM */) = (data->simulationInfo->realParameter[3111] /* vehicle.rearSuspension.cornerR.upright.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 12822
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.I[1,2] = vehicle.rearSuspension.cornerR.upright.I_21
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12822};
  (data->simulationInfo->realParameter[3100] /* vehicle.rearSuspension.cornerR.upright.I[1,2] PARAM */) = (data->simulationInfo->realParameter[3109] /* vehicle.rearSuspension.cornerR.upright.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 12823
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.I[1,1] = vehicle.rearSuspension.cornerR.upright.I_11
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12823};
  (data->simulationInfo->realParameter[3099] /* vehicle.rearSuspension.cornerR.upright.I[1,1] PARAM */) = (data->simulationInfo->realParameter[3108] /* vehicle.rearSuspension.cornerR.upright.I_11 PARAM */);
  TRACE_POP
}

/*
equation index: 12836
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.mUnsprung = vehicle.rearSuspension.cornerR.vehicleParams.mUnsprungRear
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12836};
  (data->simulationInfo->realParameter[2783] /* vehicle.rearSuspension.cornerR.mUnsprung PARAM */) = (data->simulationInfo->realParameter[3190] /* vehicle.rearSuspension.cornerR.vehicleParams.mUnsprungRear PARAM */);
  TRACE_POP
}

/*
equation index: 12837
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.m = vehicle.rearSuspension.cornerR.mUnsprung
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12837};
  (data->simulationInfo->realParameter[3141] /* vehicle.rearSuspension.cornerR.upright.m PARAM */) = (data->simulationInfo->realParameter[2783] /* vehicle.rearSuspension.cornerR.mUnsprung PARAM */);
  TRACE_POP
}

/*
equation index: 12839
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.staticAlign.shape.shapeType = vehicle.rearSuspension.cornerR.staticAlign.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12839};
  (data->simulationInfo->stringParameter[134] /* vehicle.rearSuspension.cornerR.staticAlign.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[135] /* vehicle.rearSuspension.cornerR.staticAlign.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12861
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.staticCamber = vehicle.rearSuspension.cornerR.hp.rear_staticCamber
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12861};
  (data->simulationInfo->realParameter[2956] /* vehicle.rearSuspension.cornerR.staticCamber PARAM */) = (data->simulationInfo->realParameter[2650] /* vehicle.rearSuspension.cornerR.hp.rear_staticCamber PARAM */);
  TRACE_POP
}

/*
equation index: 12862
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.staticAlign.angles[2] = 57.29577951308232 * vehicle.rearSuspension.cornerR.staticCamber
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12862};
  (data->simulationInfo->realParameter[2923] /* vehicle.rearSuspension.cornerR.staticAlign.angles[2] PARAM */) = (57.29577951308232) * ((data->simulationInfo->realParameter[2956] /* vehicle.rearSuspension.cornerR.staticCamber PARAM */));
  TRACE_POP
}

/*
equation index: 12863
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.staticToe = vehicle.rearSuspension.cornerR.hp.rear_staticToe
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12863};
  (data->simulationInfo->realParameter[2957] /* vehicle.rearSuspension.cornerR.staticToe PARAM */) = (data->simulationInfo->realParameter[2651] /* vehicle.rearSuspension.cornerR.hp.rear_staticToe PARAM */);
  TRACE_POP
}

/*
equation index: 12864
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.staticAlign.angles[1] = (-57.29577951308232) * vehicle.rearSuspension.cornerR.staticToe
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12864};
  (data->simulationInfo->realParameter[2922] /* vehicle.rearSuspension.cornerR.staticAlign.angles[1] PARAM */) = (-57.29577951308232) * ((data->simulationInfo->realParameter[2957] /* vehicle.rearSuspension.cornerR.staticToe PARAM */));
  TRACE_POP
}

/*
equation index: 12882
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.spindle.shape.shapeType = vehicle.rearSuspension.cornerR.spindle.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12882};
  (data->simulationInfo->stringParameter[128] /* vehicle.rearSuspension.cornerR.spindle.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[129] /* vehicle.rearSuspension.cornerR.spindle.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12901
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod2.shape.shapeType = vehicle.rearSuspension.cornerR.tieRod.rod2.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12901};
  (data->simulationInfo->stringParameter[140] /* vehicle.rearSuspension.cornerR.tieRod.rod2.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[141] /* vehicle.rearSuspension.cornerR.tieRod.rod2.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12916
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.shape_b.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12916};
  (data->simulationInfo->stringParameter[138] /* vehicle.rearSuspension.cornerR.tieRod.rod1.shape_b.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 12917
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.shape_a.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12917};
  (data->simulationInfo->stringParameter[137] /* vehicle.rearSuspension.cornerR.tieRod.rod1.shape_a.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 12918
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.shape_rod.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12918};
  (data->simulationInfo->stringParameter[139] /* vehicle.rearSuspension.cornerR.tieRod.rod1.shape_rod.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12921
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.massDiameter = vehicle.rearSuspension.cornerR.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12921};
  (data->simulationInfo->realParameter[2988] /* vehicle.rearSuspension.cornerR.tieRod.rod1.massDiameter PARAM */) = (data->simulationInfo->realParameter[3004] /* vehicle.rearSuspension.cornerR.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 12926
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12926};
  (data->simulationInfo->stringParameter[136] /* vehicle.rearSuspension.cornerR.tieRod.revolute.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12930
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.phi_guess = vehicle.rearSuspension.cornerR.tieRod.phi_guess
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12930};
  (data->simulationInfo->realParameter[2982] /* vehicle.rearSuspension.cornerR.tieRod.revolute.phi_guess PARAM */) = (data->simulationInfo->realParameter[2961] /* vehicle.rearSuspension.cornerR.tieRod.phi_guess PARAM */);
  TRACE_POP
}

/*
equation index: 12931
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.phi_offset = vehicle.rearSuspension.cornerR.tieRod.phi_offset
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12931};
  (data->simulationInfo->realParameter[2983] /* vehicle.rearSuspension.cornerR.tieRod.revolute.phi_offset PARAM */) = (data->simulationInfo->realParameter[2962] /* vehicle.rearSuspension.cornerR.tieRod.phi_offset PARAM */);
  TRACE_POP
}

/*
equation index: 12935
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.lengthConstraint = vehicle.rearSuspension.cornerR.tieRod.rod1Length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12935};
  (data->simulationInfo->realParameter[2978] /* vehicle.rearSuspension.cornerR.tieRod.revolute.lengthConstraint PARAM */) = (data->simulationInfo->realParameter[3006] /* vehicle.rearSuspension.cornerR.tieRod.rod1Length PARAM */);
  TRACE_POP
}

/*
equation index: 12964
type: SIMPLE_ASSIGN
vehicle.rearSuspension.toeLinks.toeLinkL.shape.shapeType = vehicle.rearSuspension.toeLinks.toeLinkL.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12964};
  (data->simulationInfo->stringParameter[149] /* vehicle.rearSuspension.toeLinks.toeLinkL.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[150] /* vehicle.rearSuspension.toeLinks.toeLinkL.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12978
type: SIMPLE_ASSIGN
vehicle.rearSuspension.toeLinks.toeLinkR.shape.shapeType = vehicle.rearSuspension.toeLinks.toeLinkR.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12978};
  (data->simulationInfo->stringParameter[151] /* vehicle.rearSuspension.toeLinks.toeLinkR.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[152] /* vehicle.rearSuspension.toeLinks.toeLinkR.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12992
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.mSprung = vehicle.rearSuspension.vehicleParams.vehicleMass + (-2.0) * (vehicle.rearSuspension.vehicleParams.mUnsprungFront + vehicle.rearSuspension.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12992};
  (data->simulationInfo->realParameter[3358] /* vehicle.rearSuspension.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[3377] /* vehicle.rearSuspension.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[3359] /* vehicle.rearSuspension.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[3360] /* vehicle.rearSuspension.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 12993
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.F0Rear = 4.903325 * vehicle.rearSuspension.vehicleParams.mSprung * vehicle.rearSuspension.vehicleParams.a / vehicle.rearSuspension.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12993};
  (data->simulationInfo->realParameter[3330] /* vehicle.rearSuspension.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[3358] /* vehicle.rearSuspension.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3334] /* vehicle.rearSuspension.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[3378] /* vehicle.rearSuspension.vehicleParams.wheelbase PARAM */),"vehicle.rearSuspension.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 12994
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.kRideRear = 0.10197162129779283 * vehicle.rearSuspension.vehicleParams.F0Rear * (6.283185307179586 * vehicle.rearSuspension.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12994};
  modelica_real tmp32;
  tmp32 = (6.283185307179586) * ((data->simulationInfo->realParameter[3346] /* vehicle.rearSuspension.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[3354] /* vehicle.rearSuspension.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[3330] /* vehicle.rearSuspension.vehicleParams.F0Rear PARAM */)) * ((tmp32 * tmp32)));
  TRACE_POP
}

/*
equation index: 12995
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.dWheelRear = 2.0 * vehicle.rearSuspension.vehicleParams.zetaRear * sqrt(vehicle.rearSuspension.vehicleParams.kRideRear * vehicle.rearSuspension.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12995};
  modelica_real tmp33;
  tmp33 = DIVISION_SIM(((data->simulationInfo->realParameter[3354] /* vehicle.rearSuspension.vehicleParams.kRideRear PARAM */)) * ((data->simulationInfo->realParameter[3330] /* vehicle.rearSuspension.vehicleParams.F0Rear PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp33 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.rearSuspension.vehicleParams.kRideRear * vehicle.rearSuspension.vehicleParams.F0Rear / 9.80665) was %g should be >= 0", tmp33);
    }
  }
  (data->simulationInfo->realParameter[3342] /* vehicle.rearSuspension.vehicleParams.dWheelRear PARAM */) = (2.0) * (((data->simulationInfo->realParameter[3380] /* vehicle.rearSuspension.vehicleParams.zetaRear PARAM */)) * (sqrt(tmp33)));
  TRACE_POP
}

/*
equation index: 12996
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.F0Front = 4.903325 * vehicle.rearSuspension.vehicleParams.mSprung * vehicle.rearSuspension.vehicleParams.b / vehicle.rearSuspension.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12996};
  (data->simulationInfo->realParameter[3329] /* vehicle.rearSuspension.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[3358] /* vehicle.rearSuspension.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3338] /* vehicle.rearSuspension.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[3378] /* vehicle.rearSuspension.vehicleParams.wheelbase PARAM */),"vehicle.rearSuspension.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 12997
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.kRideFront = 0.10197162129779283 * vehicle.rearSuspension.vehicleParams.F0Front * (6.283185307179586 * vehicle.rearSuspension.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12997};
  modelica_real tmp34;
  tmp34 = (6.283185307179586) * ((data->simulationInfo->realParameter[3345] /* vehicle.rearSuspension.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[3353] /* vehicle.rearSuspension.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[3329] /* vehicle.rearSuspension.vehicleParams.F0Front PARAM */)) * ((tmp34 * tmp34)));
  TRACE_POP
}

/*
equation index: 12998
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.dWheelFront = 2.0 * vehicle.rearSuspension.vehicleParams.zetaFront * sqrt(vehicle.rearSuspension.vehicleParams.kRideFront * vehicle.rearSuspension.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12998};
  modelica_real tmp35;
  tmp35 = DIVISION_SIM(((data->simulationInfo->realParameter[3353] /* vehicle.rearSuspension.vehicleParams.kRideFront PARAM */)) * ((data->simulationInfo->realParameter[3329] /* vehicle.rearSuspension.vehicleParams.F0Front PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp35 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.rearSuspension.vehicleParams.kRideFront * vehicle.rearSuspension.vehicleParams.F0Front / 9.80665) was %g should be >= 0", tmp35);
    }
  }
  (data->simulationInfo->realParameter[3341] /* vehicle.rearSuspension.vehicleParams.dWheelFront PARAM */) = (2.0) * (((data->simulationInfo->realParameter[3379] /* vehicle.rearSuspension.vehicleParams.zetaFront PARAM */)) * (sqrt(tmp35)));
  TRACE_POP
}

/*
equation index: 12999
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.hpPower = 745.7 * vehicle.rearSuspension.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12999};
  (data->simulationInfo->realParameter[3350] /* vehicle.rearSuspension.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[3349] /* vehicle.rearSuspension.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 13000
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.track = vehicle.rearSuspension.vehicleParams.tf + vehicle.rearSuspension.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13000};
  (data->simulationInfo->realParameter[3376] /* vehicle.rearSuspension.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[3374] /* vehicle.rearSuspension.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[3375] /* vehicle.rearSuspension.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 13001
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.kRear = vehicle.rearSuspension.vehicleParams.kRideRear * vehicle.rearSuspension.vehicleParams.kz / (vehicle.rearSuspension.vehicleParams.kz - vehicle.rearSuspension.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13001};
  (data->simulationInfo->realParameter[3352] /* vehicle.rearSuspension.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[3354] /* vehicle.rearSuspension.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3357] /* vehicle.rearSuspension.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[3357] /* vehicle.rearSuspension.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[3354] /* vehicle.rearSuspension.vehicleParams.kRideRear PARAM */),"vehicle.rearSuspension.vehicleParams.kz - vehicle.rearSuspension.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 13002
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.kFront = vehicle.rearSuspension.vehicleParams.kRideFront * vehicle.rearSuspension.vehicleParams.kz / (vehicle.rearSuspension.vehicleParams.kz - vehicle.rearSuspension.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13002};
  (data->simulationInfo->realParameter[3351] /* vehicle.rearSuspension.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[3353] /* vehicle.rearSuspension.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3357] /* vehicle.rearSuspension.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[3357] /* vehicle.rearSuspension.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[3353] /* vehicle.rearSuspension.vehicleParams.kRideFront PARAM */),"vehicle.rearSuspension.vehicleParams.kz - vehicle.rearSuspension.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 13003
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.shape.shapeType = "spring"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13003};
  (data->simulationInfo->stringParameter[6] /* vehicle.frontSuspension.cornerL.coilover.shape.shapeType PARAM */) = _OMC_LIT34;
  TRACE_POP
}

/*
equation index: 13004
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.shape_b.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13004};
  (data->simulationInfo->stringParameter[8] /* vehicle.frontSuspension.cornerL.coilover.shape_b.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13005
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.shape_a.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13005(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13005};
  (data->simulationInfo->stringParameter[7] /* vehicle.frontSuspension.cornerL.coilover.shape_a.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13010
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.length_a = world.defaultForceLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13010};
  (data->simulationInfo->realParameter[416] /* vehicle.frontSuspension.cornerL.coilover.length_a PARAM */) = (data->simulationInfo->realParameter[4023] /* world.defaultForceLength PARAM */);
  TRACE_POP
}

/*
equation index: 13011
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.mSprung = vehicle.frontSuspension.cornerL.vehicleParams.vehicleMass + (-2.0) * (vehicle.frontSuspension.cornerL.vehicleParams.mUnsprungFront + vehicle.frontSuspension.cornerL.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13011(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13011};
  (data->simulationInfo->realParameter[1034] /* vehicle.frontSuspension.cornerL.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[1053] /* vehicle.frontSuspension.cornerL.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[1035] /* vehicle.frontSuspension.cornerL.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[1036] /* vehicle.frontSuspension.cornerL.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 13012
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.F0Front = 4.903325 * vehicle.frontSuspension.cornerL.vehicleParams.mSprung * vehicle.frontSuspension.cornerL.vehicleParams.b / vehicle.frontSuspension.cornerL.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13012};
  (data->simulationInfo->realParameter[1005] /* vehicle.frontSuspension.cornerL.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[1034] /* vehicle.frontSuspension.cornerL.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1014] /* vehicle.frontSuspension.cornerL.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[1054] /* vehicle.frontSuspension.cornerL.vehicleParams.wheelbase PARAM */),"vehicle.frontSuspension.cornerL.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 13013
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.kRideFront = 0.10197162129779283 * vehicle.frontSuspension.cornerL.vehicleParams.F0Front * (6.283185307179586 * vehicle.frontSuspension.cornerL.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13013};
  modelica_real tmp36;
  tmp36 = (6.283185307179586) * ((data->simulationInfo->realParameter[1021] /* vehicle.frontSuspension.cornerL.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[1029] /* vehicle.frontSuspension.cornerL.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[1005] /* vehicle.frontSuspension.cornerL.vehicleParams.F0Front PARAM */)) * ((tmp36 * tmp36)));
  TRACE_POP
}

/*
equation index: 13014
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.dWheelFront = 2.0 * vehicle.frontSuspension.cornerL.vehicleParams.zetaFront * sqrt(vehicle.frontSuspension.cornerL.vehicleParams.kRideFront * vehicle.frontSuspension.cornerL.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13014};
  modelica_real tmp37;
  tmp37 = DIVISION_SIM(((data->simulationInfo->realParameter[1029] /* vehicle.frontSuspension.cornerL.vehicleParams.kRideFront PARAM */)) * ((data->simulationInfo->realParameter[1005] /* vehicle.frontSuspension.cornerL.vehicleParams.F0Front PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp37 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.frontSuspension.cornerL.vehicleParams.kRideFront * vehicle.frontSuspension.cornerL.vehicleParams.F0Front / 9.80665) was %g should be >= 0", tmp37);
    }
  }
  (data->simulationInfo->realParameter[1017] /* vehicle.frontSuspension.cornerL.vehicleParams.dWheelFront PARAM */) = (2.0) * (((data->simulationInfo->realParameter[1055] /* vehicle.frontSuspension.cornerL.vehicleParams.zetaFront PARAM */)) * (sqrt(tmp37)));
  TRACE_POP
}

/*
equation index: 13015
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.dWheel = vehicle.frontSuspension.cornerL.vehicleParams.dWheelFront
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13015};
  (data->simulationInfo->realParameter[427] /* vehicle.frontSuspension.cornerL.dWheel PARAM */) = (data->simulationInfo->realParameter[1017] /* vehicle.frontSuspension.cornerL.vehicleParams.dWheelFront PARAM */);
  TRACE_POP
}

/*
equation index: 13016
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.d = vehicle.frontSuspension.cornerL.dWheel / vehicle.frontSuspension.cornerL.motionRatio ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13016};
  modelica_real tmp38;
  tmp38 = (data->simulationInfo->realParameter[630] /* vehicle.frontSuspension.cornerL.motionRatio PARAM */);
  (data->simulationInfo->realParameter[414] /* vehicle.frontSuspension.cornerL.coilover.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[427] /* vehicle.frontSuspension.cornerL.dWheel PARAM */),(tmp38 * tmp38),"vehicle.frontSuspension.cornerL.motionRatio ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 13017
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.kFront = vehicle.frontSuspension.cornerL.vehicleParams.kRideFront * vehicle.frontSuspension.cornerL.vehicleParams.kz / (vehicle.frontSuspension.cornerL.vehicleParams.kz - vehicle.frontSuspension.cornerL.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13017};
  (data->simulationInfo->realParameter[1027] /* vehicle.frontSuspension.cornerL.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[1029] /* vehicle.frontSuspension.cornerL.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1033] /* vehicle.frontSuspension.cornerL.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[1033] /* vehicle.frontSuspension.cornerL.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[1029] /* vehicle.frontSuspension.cornerL.vehicleParams.kRideFront PARAM */),"vehicle.frontSuspension.cornerL.vehicleParams.kz - vehicle.frontSuspension.cornerL.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 13018
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.kWheel = vehicle.frontSuspension.cornerL.vehicleParams.kFront
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13018};
  (data->simulationInfo->realParameter[607] /* vehicle.frontSuspension.cornerL.kWheel PARAM */) = (data->simulationInfo->realParameter[1027] /* vehicle.frontSuspension.cornerL.vehicleParams.kFront PARAM */);
  TRACE_POP
}

/*
equation index: 13019
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.F0 = vehicle.frontSuspension.cornerL.vehicleParams.F0Front
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13019};
  (data->simulationInfo->realParameter[411] /* vehicle.frontSuspension.cornerL.F0 PARAM */) = (data->simulationInfo->realParameter[1005] /* vehicle.frontSuspension.cornerL.vehicleParams.F0Front PARAM */);
  TRACE_POP
}

/*
equation index: 13020
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.s_unstretched = 0.42154477816715985 + vehicle.frontSuspension.cornerL.F0 * vehicle.frontSuspension.cornerL.motionRatio / vehicle.frontSuspension.cornerL.kWheel
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13020};
  (data->simulationInfo->realParameter[418] /* vehicle.frontSuspension.cornerL.coilover.s_unstretched PARAM */) = 0.42154477816715985 + ((data->simulationInfo->realParameter[411] /* vehicle.frontSuspension.cornerL.F0 PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[630] /* vehicle.frontSuspension.cornerL.motionRatio PARAM */),(data->simulationInfo->realParameter[607] /* vehicle.frontSuspension.cornerL.kWheel PARAM */),"vehicle.frontSuspension.cornerL.kWheel",equationIndexes));
  TRACE_POP
}

/*
equation index: 13021
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.c = vehicle.frontSuspension.cornerL.kWheel / vehicle.frontSuspension.cornerL.motionRatio ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13021};
  modelica_real tmp39;
  tmp39 = (data->simulationInfo->realParameter[630] /* vehicle.frontSuspension.cornerL.motionRatio PARAM */);
  (data->simulationInfo->realParameter[413] /* vehicle.frontSuspension.cornerL.coilover.c PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[607] /* vehicle.frontSuspension.cornerL.kWheel PARAM */),(tmp39 * tmp39),"vehicle.frontSuspension.cornerL.motionRatio ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 13023
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.shape.shapeType = vehicle.frontSuspension.cornerL.springArm.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13023};
  (data->simulationInfo->stringParameter[21] /* vehicle.frontSuspension.cornerL.springArm.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[22] /* vehicle.frontSuspension.cornerL.springArm.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13037
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springChassis.shape.shapeType = vehicle.frontSuspension.cornerL.springChassis.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13037};
  (data->simulationInfo->stringParameter[23] /* vehicle.frontSuspension.cornerL.springChassis.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[24] /* vehicle.frontSuspension.cornerL.springChassis.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13056
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod2.shape.shapeType = vehicle.frontSuspension.cornerL.jointUSR.rod2.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13056(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13056};
  (data->simulationInfo->stringParameter[15] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[16] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13070
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape2.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13070(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13070};
  (data->simulationInfo->stringParameter[14] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape2.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13071
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape1.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13071(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13071};
  (data->simulationInfo->stringParameter[13] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape1.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13072
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.sphericalShape_b.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13072(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13072};
  (data->simulationInfo->stringParameter[12] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.sphericalShape_b.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 13073
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.rodShape.shapeType = vehicle.frontSuspension.cornerL.jointUSR.rod1.rodShapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13073(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13073};
  (data->simulationInfo->stringParameter[10] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.rodShape.shapeType PARAM */) = (data->simulationInfo->stringParameter[11] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.rodShapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13094
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13094};
  (data->simulationInfo->stringParameter[9] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13098
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.phi_guess = vehicle.frontSuspension.cornerL.jointUSR.phi_guess
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13098};
  (data->simulationInfo->realParameter[536] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.phi_guess PARAM */) = (data->simulationInfo->realParameter[512] /* vehicle.frontSuspension.cornerL.jointUSR.phi_guess PARAM */);
  TRACE_POP
}

/*
equation index: 13099
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.phi_offset = vehicle.frontSuspension.cornerL.jointUSR.phi_offset
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13099};
  (data->simulationInfo->realParameter[537] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.phi_offset PARAM */) = (data->simulationInfo->realParameter[513] /* vehicle.frontSuspension.cornerL.jointUSR.phi_offset PARAM */);
  TRACE_POP
}

/*
equation index: 13125
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.lcaMount.shape.shapeType = vehicle.frontSuspension.cornerL.lcaMount.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13125};
  (data->simulationInfo->stringParameter[17] /* vehicle.frontSuspension.cornerL.lcaMount.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[18] /* vehicle.frontSuspension.cornerL.lcaMount.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13140
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.uca.shape.shapeType = vehicle.frontSuspension.cornerL.uca.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13140};
  (data->simulationInfo->stringParameter[33] /* vehicle.frontSuspension.cornerL.uca.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[34] /* vehicle.frontSuspension.cornerL.uca.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13155
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13155};
  (data->simulationInfo->stringParameter[37] /* vehicle.frontSuspension.cornerL.ucaPivot.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13162
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaMount.shape.shapeType = vehicle.frontSuspension.cornerL.ucaMount.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13162};
  (data->simulationInfo->stringParameter[35] /* vehicle.frontSuspension.cornerL.ucaMount.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[36] /* vehicle.frontSuspension.cornerL.ucaMount.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13265
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.F0Rear = 4.903325 * vehicle.frontSuspension.cornerL.vehicleParams.mSprung * vehicle.frontSuspension.cornerL.vehicleParams.a / vehicle.frontSuspension.cornerL.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13265};
  (data->simulationInfo->realParameter[1006] /* vehicle.frontSuspension.cornerL.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[1034] /* vehicle.frontSuspension.cornerL.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1010] /* vehicle.frontSuspension.cornerL.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[1054] /* vehicle.frontSuspension.cornerL.vehicleParams.wheelbase PARAM */),"vehicle.frontSuspension.cornerL.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 13266
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.kRideRear = 0.10197162129779283 * vehicle.frontSuspension.cornerL.vehicleParams.F0Rear * (6.283185307179586 * vehicle.frontSuspension.cornerL.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13266};
  modelica_real tmp40;
  tmp40 = (6.283185307179586) * ((data->simulationInfo->realParameter[1022] /* vehicle.frontSuspension.cornerL.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[1030] /* vehicle.frontSuspension.cornerL.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[1006] /* vehicle.frontSuspension.cornerL.vehicleParams.F0Rear PARAM */)) * ((tmp40 * tmp40)));
  TRACE_POP
}

/*
equation index: 13267
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.dWheelRear = 2.0 * vehicle.frontSuspension.cornerL.vehicleParams.zetaRear * sqrt(vehicle.frontSuspension.cornerL.vehicleParams.kRideRear * vehicle.frontSuspension.cornerL.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13267};
  modelica_real tmp41;
  tmp41 = DIVISION_SIM(((data->simulationInfo->realParameter[1030] /* vehicle.frontSuspension.cornerL.vehicleParams.kRideRear PARAM */)) * ((data->simulationInfo->realParameter[1006] /* vehicle.frontSuspension.cornerL.vehicleParams.F0Rear PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp41 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.frontSuspension.cornerL.vehicleParams.kRideRear * vehicle.frontSuspension.cornerL.vehicleParams.F0Rear / 9.80665) was %g should be >= 0", tmp41);
    }
  }
  (data->simulationInfo->realParameter[1018] /* vehicle.frontSuspension.cornerL.vehicleParams.dWheelRear PARAM */) = (2.0) * (((data->simulationInfo->realParameter[1056] /* vehicle.frontSuspension.cornerL.vehicleParams.zetaRear PARAM */)) * (sqrt(tmp41)));
  TRACE_POP
}

/*
equation index: 13268
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.hpPower = 745.7 * vehicle.frontSuspension.cornerL.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13268};
  (data->simulationInfo->realParameter[1026] /* vehicle.frontSuspension.cornerL.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[1025] /* vehicle.frontSuspension.cornerL.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 13269
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.track = vehicle.frontSuspension.cornerL.vehicleParams.tf + vehicle.frontSuspension.cornerL.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13269};
  (data->simulationInfo->realParameter[1052] /* vehicle.frontSuspension.cornerL.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[1050] /* vehicle.frontSuspension.cornerL.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[1051] /* vehicle.frontSuspension.cornerL.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 13270
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.kRear = vehicle.frontSuspension.cornerL.vehicleParams.kRideRear * vehicle.frontSuspension.cornerL.vehicleParams.kz / (vehicle.frontSuspension.cornerL.vehicleParams.kz - vehicle.frontSuspension.cornerL.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13270};
  (data->simulationInfo->realParameter[1028] /* vehicle.frontSuspension.cornerL.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[1030] /* vehicle.frontSuspension.cornerL.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1033] /* vehicle.frontSuspension.cornerL.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[1033] /* vehicle.frontSuspension.cornerL.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[1030] /* vehicle.frontSuspension.cornerL.vehicleParams.kRideRear PARAM */),"vehicle.frontSuspension.cornerL.vehicleParams.kz - vehicle.frontSuspension.cornerL.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 13276
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.sphere.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13276};
  (data->simulationInfo->stringParameter[39] /* vehicle.frontSuspension.cornerL.upright.sphere.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 13277
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13277};
  (data->simulationInfo->stringParameter[38] /* vehicle.frontSuspension.cornerL.upright.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13278
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.phi_start[3] = vehicle.frontSuspension.cornerL.upright.angles_start[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13278};
  (data->simulationInfo->realParameter[990] /* vehicle.frontSuspension.cornerL.upright.phi_start[3] PARAM */) = (data->simulationInfo->realParameter[978] /* vehicle.frontSuspension.cornerL.upright.angles_start[3] PARAM */);
  TRACE_POP
}

/*
equation index: 13279
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.phi_start[2] = vehicle.frontSuspension.cornerL.upright.angles_start[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13279};
  (data->simulationInfo->realParameter[989] /* vehicle.frontSuspension.cornerL.upright.phi_start[2] PARAM */) = (data->simulationInfo->realParameter[977] /* vehicle.frontSuspension.cornerL.upright.angles_start[2] PARAM */);
  TRACE_POP
}

/*
equation index: 13280
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.phi_start[1] = vehicle.frontSuspension.cornerL.upright.angles_start[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13280};
  (data->simulationInfo->realParameter[988] /* vehicle.frontSuspension.cornerL.upright.phi_start[1] PARAM */) = (data->simulationInfo->realParameter[976] /* vehicle.frontSuspension.cornerL.upright.angles_start[1] PARAM */);
  TRACE_POP
}

/*
equation index: 13297
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.I[3,3] = vehicle.frontSuspension.cornerL.upright.I_33
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13297};
  (data->simulationInfo->realParameter[953] /* vehicle.frontSuspension.cornerL.upright.I[3,3] PARAM */) = (data->simulationInfo->realParameter[959] /* vehicle.frontSuspension.cornerL.upright.I_33 PARAM */);
  TRACE_POP
}

/*
equation index: 13298
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.I[3,2] = vehicle.frontSuspension.cornerL.upright.I_32
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13298};
  (data->simulationInfo->realParameter[952] /* vehicle.frontSuspension.cornerL.upright.I[3,2] PARAM */) = (data->simulationInfo->realParameter[958] /* vehicle.frontSuspension.cornerL.upright.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 13299
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.I[3,1] = vehicle.frontSuspension.cornerL.upright.I_31
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13299};
  (data->simulationInfo->realParameter[951] /* vehicle.frontSuspension.cornerL.upright.I[3,1] PARAM */) = (data->simulationInfo->realParameter[957] /* vehicle.frontSuspension.cornerL.upright.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 13300
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.I[2,3] = vehicle.frontSuspension.cornerL.upright.I_32
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13300};
  (data->simulationInfo->realParameter[950] /* vehicle.frontSuspension.cornerL.upright.I[2,3] PARAM */) = (data->simulationInfo->realParameter[958] /* vehicle.frontSuspension.cornerL.upright.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 13301
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.I[2,2] = vehicle.frontSuspension.cornerL.upright.I_22
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13301};
  (data->simulationInfo->realParameter[949] /* vehicle.frontSuspension.cornerL.upright.I[2,2] PARAM */) = (data->simulationInfo->realParameter[956] /* vehicle.frontSuspension.cornerL.upright.I_22 PARAM */);
  TRACE_POP
}

/*
equation index: 13302
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.I[2,1] = vehicle.frontSuspension.cornerL.upright.I_21
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13302};
  (data->simulationInfo->realParameter[948] /* vehicle.frontSuspension.cornerL.upright.I[2,1] PARAM */) = (data->simulationInfo->realParameter[955] /* vehicle.frontSuspension.cornerL.upright.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 13303
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.I[1,3] = vehicle.frontSuspension.cornerL.upright.I_31
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13303};
  (data->simulationInfo->realParameter[947] /* vehicle.frontSuspension.cornerL.upright.I[1,3] PARAM */) = (data->simulationInfo->realParameter[957] /* vehicle.frontSuspension.cornerL.upright.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 13304
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.I[1,2] = vehicle.frontSuspension.cornerL.upright.I_21
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13304};
  (data->simulationInfo->realParameter[946] /* vehicle.frontSuspension.cornerL.upright.I[1,2] PARAM */) = (data->simulationInfo->realParameter[955] /* vehicle.frontSuspension.cornerL.upright.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 13305
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.I[1,1] = vehicle.frontSuspension.cornerL.upright.I_11
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13305};
  (data->simulationInfo->realParameter[945] /* vehicle.frontSuspension.cornerL.upright.I[1,1] PARAM */) = (data->simulationInfo->realParameter[954] /* vehicle.frontSuspension.cornerL.upright.I_11 PARAM */);
  TRACE_POP
}

/*
equation index: 13318
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.mUnsprung = vehicle.frontSuspension.cornerL.vehicleParams.mUnsprungFront
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13318};
  (data->simulationInfo->realParameter[629] /* vehicle.frontSuspension.cornerL.mUnsprung PARAM */) = (data->simulationInfo->realParameter[1035] /* vehicle.frontSuspension.cornerL.vehicleParams.mUnsprungFront PARAM */);
  TRACE_POP
}

/*
equation index: 13319
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.m = vehicle.frontSuspension.cornerL.mUnsprung
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13319};
  (data->simulationInfo->realParameter[987] /* vehicle.frontSuspension.cornerL.upright.m PARAM */) = (data->simulationInfo->realParameter[629] /* vehicle.frontSuspension.cornerL.mUnsprung PARAM */);
  TRACE_POP
}

/*
equation index: 13321
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.staticAlign.shape.shapeType = vehicle.frontSuspension.cornerL.staticAlign.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13321};
  (data->simulationInfo->stringParameter[25] /* vehicle.frontSuspension.cornerL.staticAlign.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[26] /* vehicle.frontSuspension.cornerL.staticAlign.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13343
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.staticCamber = vehicle.frontSuspension.cornerL.hp.front_staticCamber
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13343};
  (data->simulationInfo->realParameter[802] /* vehicle.frontSuspension.cornerL.staticCamber PARAM */) = (data->simulationInfo->realParameter[461] /* vehicle.frontSuspension.cornerL.hp.front_staticCamber PARAM */);
  TRACE_POP
}

/*
equation index: 13344
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.staticAlign.angles[2] = (-57.29577951308232) * vehicle.frontSuspension.cornerL.staticCamber
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13344};
  (data->simulationInfo->realParameter[769] /* vehicle.frontSuspension.cornerL.staticAlign.angles[2] PARAM */) = (-57.29577951308232) * ((data->simulationInfo->realParameter[802] /* vehicle.frontSuspension.cornerL.staticCamber PARAM */));
  TRACE_POP
}

/*
equation index: 13345
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.staticToe = vehicle.frontSuspension.cornerL.hp.front_staticToe
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13345};
  (data->simulationInfo->realParameter[803] /* vehicle.frontSuspension.cornerL.staticToe PARAM */) = (data->simulationInfo->realParameter[462] /* vehicle.frontSuspension.cornerL.hp.front_staticToe PARAM */);
  TRACE_POP
}

/*
equation index: 13346
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.staticAlign.angles[1] = 57.29577951308232 * vehicle.frontSuspension.cornerL.staticToe
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13346};
  (data->simulationInfo->realParameter[768] /* vehicle.frontSuspension.cornerL.staticAlign.angles[1] PARAM */) = (57.29577951308232) * ((data->simulationInfo->realParameter[803] /* vehicle.frontSuspension.cornerL.staticToe PARAM */));
  TRACE_POP
}

/*
equation index: 13364
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.spindle.shape.shapeType = vehicle.frontSuspension.cornerL.spindle.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13364};
  (data->simulationInfo->stringParameter[19] /* vehicle.frontSuspension.cornerL.spindle.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[20] /* vehicle.frontSuspension.cornerL.spindle.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13383
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod2.shape.shapeType = vehicle.frontSuspension.cornerL.tieRod.rod2.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13383};
  (data->simulationInfo->stringParameter[31] /* vehicle.frontSuspension.cornerL.tieRod.rod2.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[32] /* vehicle.frontSuspension.cornerL.tieRod.rod2.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13398
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.shape_b.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13398};
  (data->simulationInfo->stringParameter[29] /* vehicle.frontSuspension.cornerL.tieRod.rod1.shape_b.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 13399
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.shape_a.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13399};
  (data->simulationInfo->stringParameter[28] /* vehicle.frontSuspension.cornerL.tieRod.rod1.shape_a.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 13400
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.shape_rod.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13400};
  (data->simulationInfo->stringParameter[30] /* vehicle.frontSuspension.cornerL.tieRod.rod1.shape_rod.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13403
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.massDiameter = vehicle.frontSuspension.cornerL.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13403};
  (data->simulationInfo->realParameter[834] /* vehicle.frontSuspension.cornerL.tieRod.rod1.massDiameter PARAM */) = (data->simulationInfo->realParameter[850] /* vehicle.frontSuspension.cornerL.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 13408
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13408};
  (data->simulationInfo->stringParameter[27] /* vehicle.frontSuspension.cornerL.tieRod.revolute.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13412
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.phi_guess = vehicle.frontSuspension.cornerL.tieRod.phi_guess
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13412};
  (data->simulationInfo->realParameter[828] /* vehicle.frontSuspension.cornerL.tieRod.revolute.phi_guess PARAM */) = (data->simulationInfo->realParameter[807] /* vehicle.frontSuspension.cornerL.tieRod.phi_guess PARAM */);
  TRACE_POP
}

/*
equation index: 13413
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.phi_offset = vehicle.frontSuspension.cornerL.tieRod.phi_offset
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13413};
  (data->simulationInfo->realParameter[829] /* vehicle.frontSuspension.cornerL.tieRod.revolute.phi_offset PARAM */) = (data->simulationInfo->realParameter[808] /* vehicle.frontSuspension.cornerL.tieRod.phi_offset PARAM */);
  TRACE_POP
}

/*
equation index: 13417
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.lengthConstraint = vehicle.frontSuspension.cornerL.tieRod.rod1Length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13417};
  (data->simulationInfo->realParameter[824] /* vehicle.frontSuspension.cornerL.tieRod.revolute.lengthConstraint PARAM */) = (data->simulationInfo->realParameter[852] /* vehicle.frontSuspension.cornerL.tieRod.rod1Length PARAM */);
  TRACE_POP
}

/*
equation index: 13443
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.shape.shapeType = "spring"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13443};
  (data->simulationInfo->stringParameter[40] /* vehicle.frontSuspension.cornerR.coilover.shape.shapeType PARAM */) = _OMC_LIT34;
  TRACE_POP
}

/*
equation index: 13444
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.shape_b.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13444};
  (data->simulationInfo->stringParameter[42] /* vehicle.frontSuspension.cornerR.coilover.shape_b.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13445
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.shape_a.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13445};
  (data->simulationInfo->stringParameter[41] /* vehicle.frontSuspension.cornerR.coilover.shape_a.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13450
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.length_a = world.defaultForceLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13450};
  (data->simulationInfo->realParameter[1063] /* vehicle.frontSuspension.cornerR.coilover.length_a PARAM */) = (data->simulationInfo->realParameter[4023] /* world.defaultForceLength PARAM */);
  TRACE_POP
}

/*
equation index: 13451
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.mSprung = vehicle.frontSuspension.cornerR.vehicleParams.vehicleMass + (-2.0) * (vehicle.frontSuspension.cornerR.vehicleParams.mUnsprungFront + vehicle.frontSuspension.cornerR.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13451};
  (data->simulationInfo->realParameter[1681] /* vehicle.frontSuspension.cornerR.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[1700] /* vehicle.frontSuspension.cornerR.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[1682] /* vehicle.frontSuspension.cornerR.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[1683] /* vehicle.frontSuspension.cornerR.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 13452
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.F0Front = 4.903325 * vehicle.frontSuspension.cornerR.vehicleParams.mSprung * vehicle.frontSuspension.cornerR.vehicleParams.b / vehicle.frontSuspension.cornerR.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13452};
  (data->simulationInfo->realParameter[1652] /* vehicle.frontSuspension.cornerR.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[1681] /* vehicle.frontSuspension.cornerR.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1661] /* vehicle.frontSuspension.cornerR.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[1701] /* vehicle.frontSuspension.cornerR.vehicleParams.wheelbase PARAM */),"vehicle.frontSuspension.cornerR.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 13453
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.kRideFront = 0.10197162129779283 * vehicle.frontSuspension.cornerR.vehicleParams.F0Front * (6.283185307179586 * vehicle.frontSuspension.cornerR.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13453};
  modelica_real tmp42;
  tmp42 = (6.283185307179586) * ((data->simulationInfo->realParameter[1668] /* vehicle.frontSuspension.cornerR.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[1676] /* vehicle.frontSuspension.cornerR.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[1652] /* vehicle.frontSuspension.cornerR.vehicleParams.F0Front PARAM */)) * ((tmp42 * tmp42)));
  TRACE_POP
}

/*
equation index: 13454
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.dWheelFront = 2.0 * vehicle.frontSuspension.cornerR.vehicleParams.zetaFront * sqrt(vehicle.frontSuspension.cornerR.vehicleParams.kRideFront * vehicle.frontSuspension.cornerR.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13454};
  modelica_real tmp43;
  tmp43 = DIVISION_SIM(((data->simulationInfo->realParameter[1676] /* vehicle.frontSuspension.cornerR.vehicleParams.kRideFront PARAM */)) * ((data->simulationInfo->realParameter[1652] /* vehicle.frontSuspension.cornerR.vehicleParams.F0Front PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp43 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.frontSuspension.cornerR.vehicleParams.kRideFront * vehicle.frontSuspension.cornerR.vehicleParams.F0Front / 9.80665) was %g should be >= 0", tmp43);
    }
  }
  (data->simulationInfo->realParameter[1664] /* vehicle.frontSuspension.cornerR.vehicleParams.dWheelFront PARAM */) = (2.0) * (((data->simulationInfo->realParameter[1702] /* vehicle.frontSuspension.cornerR.vehicleParams.zetaFront PARAM */)) * (sqrt(tmp43)));
  TRACE_POP
}

/*
equation index: 13455
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.dWheel = vehicle.frontSuspension.cornerR.vehicleParams.dWheelFront
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13455};
  (data->simulationInfo->realParameter[1074] /* vehicle.frontSuspension.cornerR.dWheel PARAM */) = (data->simulationInfo->realParameter[1664] /* vehicle.frontSuspension.cornerR.vehicleParams.dWheelFront PARAM */);
  TRACE_POP
}

/*
equation index: 13456
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.d = vehicle.frontSuspension.cornerR.dWheel / vehicle.frontSuspension.cornerR.motionRatio ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13456};
  modelica_real tmp44;
  tmp44 = (data->simulationInfo->realParameter[1277] /* vehicle.frontSuspension.cornerR.motionRatio PARAM */);
  (data->simulationInfo->realParameter[1061] /* vehicle.frontSuspension.cornerR.coilover.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[1074] /* vehicle.frontSuspension.cornerR.dWheel PARAM */),(tmp44 * tmp44),"vehicle.frontSuspension.cornerR.motionRatio ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 13457
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.kFront = vehicle.frontSuspension.cornerR.vehicleParams.kRideFront * vehicle.frontSuspension.cornerR.vehicleParams.kz / (vehicle.frontSuspension.cornerR.vehicleParams.kz - vehicle.frontSuspension.cornerR.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13457};
  (data->simulationInfo->realParameter[1674] /* vehicle.frontSuspension.cornerR.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[1676] /* vehicle.frontSuspension.cornerR.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1680] /* vehicle.frontSuspension.cornerR.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[1680] /* vehicle.frontSuspension.cornerR.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[1676] /* vehicle.frontSuspension.cornerR.vehicleParams.kRideFront PARAM */),"vehicle.frontSuspension.cornerR.vehicleParams.kz - vehicle.frontSuspension.cornerR.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 13458
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.kWheel = vehicle.frontSuspension.cornerR.vehicleParams.kFront
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13458};
  (data->simulationInfo->realParameter[1254] /* vehicle.frontSuspension.cornerR.kWheel PARAM */) = (data->simulationInfo->realParameter[1674] /* vehicle.frontSuspension.cornerR.vehicleParams.kFront PARAM */);
  TRACE_POP
}

/*
equation index: 13459
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.F0 = vehicle.frontSuspension.cornerR.vehicleParams.F0Front
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13459};
  (data->simulationInfo->realParameter[1058] /* vehicle.frontSuspension.cornerR.F0 PARAM */) = (data->simulationInfo->realParameter[1652] /* vehicle.frontSuspension.cornerR.vehicleParams.F0Front PARAM */);
  TRACE_POP
}

/*
equation index: 13460
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.s_unstretched = 0.42154477816715985 + vehicle.frontSuspension.cornerR.F0 * vehicle.frontSuspension.cornerR.motionRatio / vehicle.frontSuspension.cornerR.kWheel
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13460};
  (data->simulationInfo->realParameter[1065] /* vehicle.frontSuspension.cornerR.coilover.s_unstretched PARAM */) = 0.42154477816715985 + ((data->simulationInfo->realParameter[1058] /* vehicle.frontSuspension.cornerR.F0 PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1277] /* vehicle.frontSuspension.cornerR.motionRatio PARAM */),(data->simulationInfo->realParameter[1254] /* vehicle.frontSuspension.cornerR.kWheel PARAM */),"vehicle.frontSuspension.cornerR.kWheel",equationIndexes));
  TRACE_POP
}

/*
equation index: 13461
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.c = vehicle.frontSuspension.cornerR.kWheel / vehicle.frontSuspension.cornerR.motionRatio ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13461};
  modelica_real tmp45;
  tmp45 = (data->simulationInfo->realParameter[1277] /* vehicle.frontSuspension.cornerR.motionRatio PARAM */);
  (data->simulationInfo->realParameter[1060] /* vehicle.frontSuspension.cornerR.coilover.c PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[1254] /* vehicle.frontSuspension.cornerR.kWheel PARAM */),(tmp45 * tmp45),"vehicle.frontSuspension.cornerR.motionRatio ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 13463
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springArm.shape.shapeType = vehicle.frontSuspension.cornerR.springArm.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13463};
  (data->simulationInfo->stringParameter[55] /* vehicle.frontSuspension.cornerR.springArm.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[56] /* vehicle.frontSuspension.cornerR.springArm.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13477
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springChassis.shape.shapeType = vehicle.frontSuspension.cornerR.springChassis.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13477};
  (data->simulationInfo->stringParameter[57] /* vehicle.frontSuspension.cornerR.springChassis.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[58] /* vehicle.frontSuspension.cornerR.springChassis.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13496
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod2.shape.shapeType = vehicle.frontSuspension.cornerR.jointUSR.rod2.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13496};
  (data->simulationInfo->stringParameter[49] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[50] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13510
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape2.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13510};
  (data->simulationInfo->stringParameter[48] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape2.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13511
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13511};
  (data->simulationInfo->stringParameter[47] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13512
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13512};
  (data->simulationInfo->stringParameter[46] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 13513
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.shapeType = vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13513};
  (data->simulationInfo->stringParameter[44] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.shapeType PARAM */) = (data->simulationInfo->stringParameter[45] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13534
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13534};
  (data->simulationInfo->stringParameter[43] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13538
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.phi_guess = vehicle.frontSuspension.cornerR.jointUSR.phi_guess
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13538};
  (data->simulationInfo->realParameter[1183] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.phi_guess PARAM */) = (data->simulationInfo->realParameter[1159] /* vehicle.frontSuspension.cornerR.jointUSR.phi_guess PARAM */);
  TRACE_POP
}

/*
equation index: 13539
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.phi_offset = vehicle.frontSuspension.cornerR.jointUSR.phi_offset
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13539};
  (data->simulationInfo->realParameter[1184] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.phi_offset PARAM */) = (data->simulationInfo->realParameter[1160] /* vehicle.frontSuspension.cornerR.jointUSR.phi_offset PARAM */);
  TRACE_POP
}

/*
equation index: 13565
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.shape.shapeType = vehicle.frontSuspension.cornerR.lcaMount.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13565};
  (data->simulationInfo->stringParameter[51] /* vehicle.frontSuspension.cornerR.lcaMount.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[52] /* vehicle.frontSuspension.cornerR.lcaMount.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13580
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.shape.shapeType = vehicle.frontSuspension.cornerR.uca.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13580};
  (data->simulationInfo->stringParameter[67] /* vehicle.frontSuspension.cornerR.uca.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[68] /* vehicle.frontSuspension.cornerR.uca.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13595
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13595};
  (data->simulationInfo->stringParameter[71] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13602
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.shape.shapeType = vehicle.frontSuspension.cornerR.ucaMount.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13602};
  (data->simulationInfo->stringParameter[69] /* vehicle.frontSuspension.cornerR.ucaMount.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[70] /* vehicle.frontSuspension.cornerR.ucaMount.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13705
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.F0Rear = 4.903325 * vehicle.frontSuspension.cornerR.vehicleParams.mSprung * vehicle.frontSuspension.cornerR.vehicleParams.a / vehicle.frontSuspension.cornerR.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13705};
  (data->simulationInfo->realParameter[1653] /* vehicle.frontSuspension.cornerR.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[1681] /* vehicle.frontSuspension.cornerR.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1657] /* vehicle.frontSuspension.cornerR.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[1701] /* vehicle.frontSuspension.cornerR.vehicleParams.wheelbase PARAM */),"vehicle.frontSuspension.cornerR.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 13706
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.kRideRear = 0.10197162129779283 * vehicle.frontSuspension.cornerR.vehicleParams.F0Rear * (6.283185307179586 * vehicle.frontSuspension.cornerR.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13706};
  modelica_real tmp46;
  tmp46 = (6.283185307179586) * ((data->simulationInfo->realParameter[1669] /* vehicle.frontSuspension.cornerR.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[1677] /* vehicle.frontSuspension.cornerR.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[1653] /* vehicle.frontSuspension.cornerR.vehicleParams.F0Rear PARAM */)) * ((tmp46 * tmp46)));
  TRACE_POP
}

/*
equation index: 13707
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.dWheelRear = 2.0 * vehicle.frontSuspension.cornerR.vehicleParams.zetaRear * sqrt(vehicle.frontSuspension.cornerR.vehicleParams.kRideRear * vehicle.frontSuspension.cornerR.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13707};
  modelica_real tmp47;
  tmp47 = DIVISION_SIM(((data->simulationInfo->realParameter[1677] /* vehicle.frontSuspension.cornerR.vehicleParams.kRideRear PARAM */)) * ((data->simulationInfo->realParameter[1653] /* vehicle.frontSuspension.cornerR.vehicleParams.F0Rear PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp47 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.frontSuspension.cornerR.vehicleParams.kRideRear * vehicle.frontSuspension.cornerR.vehicleParams.F0Rear / 9.80665) was %g should be >= 0", tmp47);
    }
  }
  (data->simulationInfo->realParameter[1665] /* vehicle.frontSuspension.cornerR.vehicleParams.dWheelRear PARAM */) = (2.0) * (((data->simulationInfo->realParameter[1703] /* vehicle.frontSuspension.cornerR.vehicleParams.zetaRear PARAM */)) * (sqrt(tmp47)));
  TRACE_POP
}

/*
equation index: 13708
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.hpPower = 745.7 * vehicle.frontSuspension.cornerR.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13708};
  (data->simulationInfo->realParameter[1673] /* vehicle.frontSuspension.cornerR.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[1672] /* vehicle.frontSuspension.cornerR.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 13709
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.track = vehicle.frontSuspension.cornerR.vehicleParams.tf + vehicle.frontSuspension.cornerR.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13709};
  (data->simulationInfo->realParameter[1699] /* vehicle.frontSuspension.cornerR.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[1697] /* vehicle.frontSuspension.cornerR.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[1698] /* vehicle.frontSuspension.cornerR.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 13710
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.kRear = vehicle.frontSuspension.cornerR.vehicleParams.kRideRear * vehicle.frontSuspension.cornerR.vehicleParams.kz / (vehicle.frontSuspension.cornerR.vehicleParams.kz - vehicle.frontSuspension.cornerR.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13710};
  (data->simulationInfo->realParameter[1675] /* vehicle.frontSuspension.cornerR.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[1677] /* vehicle.frontSuspension.cornerR.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1680] /* vehicle.frontSuspension.cornerR.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[1680] /* vehicle.frontSuspension.cornerR.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[1677] /* vehicle.frontSuspension.cornerR.vehicleParams.kRideRear PARAM */),"vehicle.frontSuspension.cornerR.vehicleParams.kz - vehicle.frontSuspension.cornerR.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 13716
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.sphere.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13716};
  (data->simulationInfo->stringParameter[73] /* vehicle.frontSuspension.cornerR.upright.sphere.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 13717
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13717};
  (data->simulationInfo->stringParameter[72] /* vehicle.frontSuspension.cornerR.upright.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13718
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.phi_start[3] = vehicle.frontSuspension.cornerR.upright.angles_start[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13718};
  (data->simulationInfo->realParameter[1637] /* vehicle.frontSuspension.cornerR.upright.phi_start[3] PARAM */) = (data->simulationInfo->realParameter[1625] /* vehicle.frontSuspension.cornerR.upright.angles_start[3] PARAM */);
  TRACE_POP
}

/*
equation index: 13719
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.phi_start[2] = vehicle.frontSuspension.cornerR.upright.angles_start[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13719};
  (data->simulationInfo->realParameter[1636] /* vehicle.frontSuspension.cornerR.upright.phi_start[2] PARAM */) = (data->simulationInfo->realParameter[1624] /* vehicle.frontSuspension.cornerR.upright.angles_start[2] PARAM */);
  TRACE_POP
}

/*
equation index: 13720
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.phi_start[1] = vehicle.frontSuspension.cornerR.upright.angles_start[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13720};
  (data->simulationInfo->realParameter[1635] /* vehicle.frontSuspension.cornerR.upright.phi_start[1] PARAM */) = (data->simulationInfo->realParameter[1623] /* vehicle.frontSuspension.cornerR.upright.angles_start[1] PARAM */);
  TRACE_POP
}

/*
equation index: 13737
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.I[3,3] = vehicle.frontSuspension.cornerR.upright.I_33
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13737};
  (data->simulationInfo->realParameter[1600] /* vehicle.frontSuspension.cornerR.upright.I[3,3] PARAM */) = (data->simulationInfo->realParameter[1606] /* vehicle.frontSuspension.cornerR.upright.I_33 PARAM */);
  TRACE_POP
}

/*
equation index: 13738
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.I[3,2] = vehicle.frontSuspension.cornerR.upright.I_32
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13738};
  (data->simulationInfo->realParameter[1599] /* vehicle.frontSuspension.cornerR.upright.I[3,2] PARAM */) = (data->simulationInfo->realParameter[1605] /* vehicle.frontSuspension.cornerR.upright.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 13739
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.I[3,1] = vehicle.frontSuspension.cornerR.upright.I_31
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13739};
  (data->simulationInfo->realParameter[1598] /* vehicle.frontSuspension.cornerR.upright.I[3,1] PARAM */) = (data->simulationInfo->realParameter[1604] /* vehicle.frontSuspension.cornerR.upright.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 13740
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.I[2,3] = vehicle.frontSuspension.cornerR.upright.I_32
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13740};
  (data->simulationInfo->realParameter[1597] /* vehicle.frontSuspension.cornerR.upright.I[2,3] PARAM */) = (data->simulationInfo->realParameter[1605] /* vehicle.frontSuspension.cornerR.upright.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 13741
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.I[2,2] = vehicle.frontSuspension.cornerR.upright.I_22
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13741};
  (data->simulationInfo->realParameter[1596] /* vehicle.frontSuspension.cornerR.upright.I[2,2] PARAM */) = (data->simulationInfo->realParameter[1603] /* vehicle.frontSuspension.cornerR.upright.I_22 PARAM */);
  TRACE_POP
}

/*
equation index: 13742
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.I[2,1] = vehicle.frontSuspension.cornerR.upright.I_21
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13742};
  (data->simulationInfo->realParameter[1595] /* vehicle.frontSuspension.cornerR.upright.I[2,1] PARAM */) = (data->simulationInfo->realParameter[1602] /* vehicle.frontSuspension.cornerR.upright.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 13743
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.I[1,3] = vehicle.frontSuspension.cornerR.upright.I_31
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13743};
  (data->simulationInfo->realParameter[1594] /* vehicle.frontSuspension.cornerR.upright.I[1,3] PARAM */) = (data->simulationInfo->realParameter[1604] /* vehicle.frontSuspension.cornerR.upright.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 13744
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.I[1,2] = vehicle.frontSuspension.cornerR.upright.I_21
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13744};
  (data->simulationInfo->realParameter[1593] /* vehicle.frontSuspension.cornerR.upright.I[1,2] PARAM */) = (data->simulationInfo->realParameter[1602] /* vehicle.frontSuspension.cornerR.upright.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 13745
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.I[1,1] = vehicle.frontSuspension.cornerR.upright.I_11
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13745};
  (data->simulationInfo->realParameter[1592] /* vehicle.frontSuspension.cornerR.upright.I[1,1] PARAM */) = (data->simulationInfo->realParameter[1601] /* vehicle.frontSuspension.cornerR.upright.I_11 PARAM */);
  TRACE_POP
}

/*
equation index: 13758
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.mUnsprung = vehicle.frontSuspension.cornerR.vehicleParams.mUnsprungFront
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13758};
  (data->simulationInfo->realParameter[1276] /* vehicle.frontSuspension.cornerR.mUnsprung PARAM */) = (data->simulationInfo->realParameter[1682] /* vehicle.frontSuspension.cornerR.vehicleParams.mUnsprungFront PARAM */);
  TRACE_POP
}

/*
equation index: 13759
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.m = vehicle.frontSuspension.cornerR.mUnsprung
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13759};
  (data->simulationInfo->realParameter[1634] /* vehicle.frontSuspension.cornerR.upright.m PARAM */) = (data->simulationInfo->realParameter[1276] /* vehicle.frontSuspension.cornerR.mUnsprung PARAM */);
  TRACE_POP
}

/*
equation index: 13761
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.shape.shapeType = vehicle.frontSuspension.cornerR.staticAlign.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13761};
  (data->simulationInfo->stringParameter[59] /* vehicle.frontSuspension.cornerR.staticAlign.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[60] /* vehicle.frontSuspension.cornerR.staticAlign.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13783
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticCamber = vehicle.frontSuspension.cornerR.hp.front_staticCamber
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13783};
  (data->simulationInfo->realParameter[1449] /* vehicle.frontSuspension.cornerR.staticCamber PARAM */) = (data->simulationInfo->realParameter[1108] /* vehicle.frontSuspension.cornerR.hp.front_staticCamber PARAM */);
  TRACE_POP
}

/*
equation index: 13784
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.angles[2] = 57.29577951308232 * vehicle.frontSuspension.cornerR.staticCamber
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13784};
  (data->simulationInfo->realParameter[1416] /* vehicle.frontSuspension.cornerR.staticAlign.angles[2] PARAM */) = (57.29577951308232) * ((data->simulationInfo->realParameter[1449] /* vehicle.frontSuspension.cornerR.staticCamber PARAM */));
  TRACE_POP
}

/*
equation index: 13785
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticToe = vehicle.frontSuspension.cornerR.hp.front_staticToe
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13785};
  (data->simulationInfo->realParameter[1450] /* vehicle.frontSuspension.cornerR.staticToe PARAM */) = (data->simulationInfo->realParameter[1109] /* vehicle.frontSuspension.cornerR.hp.front_staticToe PARAM */);
  TRACE_POP
}

/*
equation index: 13786
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.angles[1] = (-57.29577951308232) * vehicle.frontSuspension.cornerR.staticToe
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13786};
  (data->simulationInfo->realParameter[1415] /* vehicle.frontSuspension.cornerR.staticAlign.angles[1] PARAM */) = (-57.29577951308232) * ((data->simulationInfo->realParameter[1450] /* vehicle.frontSuspension.cornerR.staticToe PARAM */));
  TRACE_POP
}

/*
equation index: 13804
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.shape.shapeType = vehicle.frontSuspension.cornerR.spindle.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13804};
  (data->simulationInfo->stringParameter[53] /* vehicle.frontSuspension.cornerR.spindle.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[54] /* vehicle.frontSuspension.cornerR.spindle.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13823
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.shape.shapeType = vehicle.frontSuspension.cornerR.tieRod.rod2.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13823};
  (data->simulationInfo->stringParameter[65] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[66] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13838
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13838};
  (data->simulationInfo->stringParameter[63] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 13839
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_a.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13839};
  (data->simulationInfo->stringParameter[62] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_a.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 13840
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13840};
  (data->simulationInfo->stringParameter[64] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13843
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.massDiameter = vehicle.frontSuspension.cornerR.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13843};
  (data->simulationInfo->realParameter[1481] /* vehicle.frontSuspension.cornerR.tieRod.rod1.massDiameter PARAM */) = (data->simulationInfo->realParameter[1497] /* vehicle.frontSuspension.cornerR.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 13848
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13848};
  (data->simulationInfo->stringParameter[61] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13852
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.phi_guess = vehicle.frontSuspension.cornerR.tieRod.phi_guess
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13852};
  (data->simulationInfo->realParameter[1475] /* vehicle.frontSuspension.cornerR.tieRod.revolute.phi_guess PARAM */) = (data->simulationInfo->realParameter[1454] /* vehicle.frontSuspension.cornerR.tieRod.phi_guess PARAM */);
  TRACE_POP
}

/*
equation index: 13853
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.phi_offset = vehicle.frontSuspension.cornerR.tieRod.phi_offset
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13853};
  (data->simulationInfo->realParameter[1476] /* vehicle.frontSuspension.cornerR.tieRod.revolute.phi_offset PARAM */) = (data->simulationInfo->realParameter[1455] /* vehicle.frontSuspension.cornerR.tieRod.phi_offset PARAM */);
  TRACE_POP
}

/*
equation index: 13857
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.lengthConstraint = vehicle.frontSuspension.cornerR.tieRod.rod1Length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13857};
  (data->simulationInfo->realParameter[1471] /* vehicle.frontSuspension.cornerR.tieRod.revolute.lengthConstraint PARAM */) = (data->simulationInfo->realParameter[1499] /* vehicle.frontSuspension.cornerR.tieRod.rod1Length PARAM */);
  TRACE_POP
}

/*
equation index: 13883
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.shape.shapeType = vehicle.frontSuspension.steering.endR.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13883};
  (data->simulationInfo->stringParameter[76] /* vehicle.frontSuspension.steering.endR.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[77] /* vehicle.frontSuspension.steering.endR.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13897
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.shape.shapeType = vehicle.frontSuspension.steering.endL.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13897};
  (data->simulationInfo->stringParameter[74] /* vehicle.frontSuspension.steering.endL.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[75] /* vehicle.frontSuspension.steering.endL.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13911
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rackRatioGain.k = vehicle.frontSuspension.steering.rackRatio
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13911};
  (data->simulationInfo->realParameter[1864] /* vehicle.frontSuspension.steering.rackRatioGain.k PARAM */) = (data->simulationInfo->realParameter[1863] /* vehicle.frontSuspension.steering.rackRatio PARAM */);
  TRACE_POP
}

/*
equation index: 13912
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.pos.w_crit = 6.283185307179586 * vehicle.frontSuspension.steering.pos.f_crit
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13912};
  (data->simulationInfo->realParameter[1844] /* vehicle.frontSuspension.steering.pos.w_crit PARAM */) = (6.283185307179586) * ((data->simulationInfo->realParameter[1841] /* vehicle.frontSuspension.steering.pos.f_crit PARAM */));
  TRACE_POP
}

/*
equation index: 13915
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.box.shapeType = "box"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13915};
  (data->simulationInfo->stringParameter[80] /* vehicle.frontSuspension.steering.rack.box.shapeType PARAM */) = _OMC_LIT32;
  TRACE_POP
}

/*
equation index: 13928
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.shape.shapeType = vehicle.frontSuspension.steering.housing.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13928};
  (data->simulationInfo->stringParameter[78] /* vehicle.frontSuspension.steering.housing.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[79] /* vehicle.frontSuspension.steering.housing.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13945
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.mSprung = vehicle.frontSuspension.vehicleParams.vehicleMass + (-2.0) * (vehicle.frontSuspension.vehicleParams.mUnsprungFront + vehicle.frontSuspension.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13945};
  (data->simulationInfo->realParameter[1894] /* vehicle.frontSuspension.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[1913] /* vehicle.frontSuspension.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[1895] /* vehicle.frontSuspension.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[1896] /* vehicle.frontSuspension.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 13946
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.F0Rear = 4.903325 * vehicle.frontSuspension.vehicleParams.mSprung * vehicle.frontSuspension.vehicleParams.a / vehicle.frontSuspension.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13946};
  (data->simulationInfo->realParameter[1866] /* vehicle.frontSuspension.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[1894] /* vehicle.frontSuspension.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1870] /* vehicle.frontSuspension.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[1914] /* vehicle.frontSuspension.vehicleParams.wheelbase PARAM */),"vehicle.frontSuspension.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 13947
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.kRideRear = 0.10197162129779283 * vehicle.frontSuspension.vehicleParams.F0Rear * (6.283185307179586 * vehicle.frontSuspension.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13947};
  modelica_real tmp48;
  tmp48 = (6.283185307179586) * ((data->simulationInfo->realParameter[1882] /* vehicle.frontSuspension.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[1890] /* vehicle.frontSuspension.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[1866] /* vehicle.frontSuspension.vehicleParams.F0Rear PARAM */)) * ((tmp48 * tmp48)));
  TRACE_POP
}

/*
equation index: 13948
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.dWheelRear = 2.0 * vehicle.frontSuspension.vehicleParams.zetaRear * sqrt(vehicle.frontSuspension.vehicleParams.kRideRear * vehicle.frontSuspension.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13948};
  modelica_real tmp49;
  tmp49 = DIVISION_SIM(((data->simulationInfo->realParameter[1890] /* vehicle.frontSuspension.vehicleParams.kRideRear PARAM */)) * ((data->simulationInfo->realParameter[1866] /* vehicle.frontSuspension.vehicleParams.F0Rear PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp49 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.frontSuspension.vehicleParams.kRideRear * vehicle.frontSuspension.vehicleParams.F0Rear / 9.80665) was %g should be >= 0", tmp49);
    }
  }
  (data->simulationInfo->realParameter[1878] /* vehicle.frontSuspension.vehicleParams.dWheelRear PARAM */) = (2.0) * (((data->simulationInfo->realParameter[1916] /* vehicle.frontSuspension.vehicleParams.zetaRear PARAM */)) * (sqrt(tmp49)));
  TRACE_POP
}

/*
equation index: 13949
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.F0Front = 4.903325 * vehicle.frontSuspension.vehicleParams.mSprung * vehicle.frontSuspension.vehicleParams.b / vehicle.frontSuspension.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13949};
  (data->simulationInfo->realParameter[1865] /* vehicle.frontSuspension.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[1894] /* vehicle.frontSuspension.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1874] /* vehicle.frontSuspension.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[1914] /* vehicle.frontSuspension.vehicleParams.wheelbase PARAM */),"vehicle.frontSuspension.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 13950
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.kRideFront = 0.10197162129779283 * vehicle.frontSuspension.vehicleParams.F0Front * (6.283185307179586 * vehicle.frontSuspension.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13950};
  modelica_real tmp50;
  tmp50 = (6.283185307179586) * ((data->simulationInfo->realParameter[1881] /* vehicle.frontSuspension.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[1889] /* vehicle.frontSuspension.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[1865] /* vehicle.frontSuspension.vehicleParams.F0Front PARAM */)) * ((tmp50 * tmp50)));
  TRACE_POP
}

/*
equation index: 13951
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.dWheelFront = 2.0 * vehicle.frontSuspension.vehicleParams.zetaFront * sqrt(vehicle.frontSuspension.vehicleParams.kRideFront * vehicle.frontSuspension.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13951};
  modelica_real tmp51;
  tmp51 = DIVISION_SIM(((data->simulationInfo->realParameter[1889] /* vehicle.frontSuspension.vehicleParams.kRideFront PARAM */)) * ((data->simulationInfo->realParameter[1865] /* vehicle.frontSuspension.vehicleParams.F0Front PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp51 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.frontSuspension.vehicleParams.kRideFront * vehicle.frontSuspension.vehicleParams.F0Front / 9.80665) was %g should be >= 0", tmp51);
    }
  }
  (data->simulationInfo->realParameter[1877] /* vehicle.frontSuspension.vehicleParams.dWheelFront PARAM */) = (2.0) * (((data->simulationInfo->realParameter[1915] /* vehicle.frontSuspension.vehicleParams.zetaFront PARAM */)) * (sqrt(tmp51)));
  TRACE_POP
}

/*
equation index: 13952
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.hpPower = 745.7 * vehicle.frontSuspension.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13952};
  (data->simulationInfo->realParameter[1886] /* vehicle.frontSuspension.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[1885] /* vehicle.frontSuspension.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 13953
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.track = vehicle.frontSuspension.vehicleParams.tf + vehicle.frontSuspension.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13953};
  (data->simulationInfo->realParameter[1912] /* vehicle.frontSuspension.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[1910] /* vehicle.frontSuspension.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[1911] /* vehicle.frontSuspension.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 13954
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.kRear = vehicle.frontSuspension.vehicleParams.kRideRear * vehicle.frontSuspension.vehicleParams.kz / (vehicle.frontSuspension.vehicleParams.kz - vehicle.frontSuspension.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13954};
  (data->simulationInfo->realParameter[1888] /* vehicle.frontSuspension.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[1890] /* vehicle.frontSuspension.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1893] /* vehicle.frontSuspension.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[1893] /* vehicle.frontSuspension.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[1890] /* vehicle.frontSuspension.vehicleParams.kRideRear PARAM */),"vehicle.frontSuspension.vehicleParams.kz - vehicle.frontSuspension.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 13955
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.kFront = vehicle.frontSuspension.vehicleParams.kRideFront * vehicle.frontSuspension.vehicleParams.kz / (vehicle.frontSuspension.vehicleParams.kz - vehicle.frontSuspension.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13955};
  (data->simulationInfo->realParameter[1887] /* vehicle.frontSuspension.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[1889] /* vehicle.frontSuspension.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1893] /* vehicle.frontSuspension.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[1893] /* vehicle.frontSuspension.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[1889] /* vehicle.frontSuspension.vehicleParams.kRideFront PARAM */),"vehicle.frontSuspension.vehicleParams.kz - vehicle.frontSuspension.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 13956
type: SIMPLE_ASSIGN
vehicle.vehicleBody.vehicleParams.mSprung = vehicle.vehicleBody.vehicleParams.vehicleMass + (-2.0) * (vehicle.vehicleBody.vehicleParams.mUnsprungFront + vehicle.vehicleBody.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13956};
  (data->simulationInfo->realParameter[3527] /* vehicle.vehicleBody.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[3546] /* vehicle.vehicleBody.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[3528] /* vehicle.vehicleBody.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[3529] /* vehicle.vehicleBody.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 13957
type: SIMPLE_ASSIGN
vehicle.vehicleBody.vehicleParams.F0Rear = 18.632634999999997 * vehicle.vehicleBody.vehicleParams.mSprung / (vehicle.vehicleBody.vehicleParams.wheelbase * 2.0)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13957};
  (data->simulationInfo->realParameter[3499] /* vehicle.vehicleBody.vehicleParams.F0Rear PARAM */) = DIVISION_SIM((18.632634999999997) * ((data->simulationInfo->realParameter[3527] /* vehicle.vehicleBody.vehicleParams.mSprung PARAM */)),((data->simulationInfo->realParameter[3547] /* vehicle.vehicleBody.vehicleParams.wheelbase PARAM */)) * (2.0),"vehicle.vehicleBody.vehicleParams.wheelbase * 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 13958
type: SIMPLE_ASSIGN
vehicle.vehicleBody.vehicleParams.kRideRear = 0.10197162129779283 * vehicle.vehicleBody.vehicleParams.F0Rear * (6.283185307179586 * vehicle.vehicleBody.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13958};
  modelica_real tmp52;
  tmp52 = (6.283185307179586) * ((data->simulationInfo->realParameter[3515] /* vehicle.vehicleBody.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[3523] /* vehicle.vehicleBody.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[3499] /* vehicle.vehicleBody.vehicleParams.F0Rear PARAM */)) * ((tmp52 * tmp52)));
  TRACE_POP
}

/*
equation index: 13959
type: SIMPLE_ASSIGN
vehicle.vehicleBody.vehicleParams.dWheelRear = 2.0 * vehicle.vehicleBody.vehicleParams.zetaRear * sqrt(vehicle.vehicleBody.vehicleParams.kRideRear * vehicle.vehicleBody.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13959};
  modelica_real tmp53;
  tmp53 = DIVISION_SIM(((data->simulationInfo->realParameter[3523] /* vehicle.vehicleBody.vehicleParams.kRideRear PARAM */)) * ((data->simulationInfo->realParameter[3499] /* vehicle.vehicleBody.vehicleParams.F0Rear PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp53 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.vehicleBody.vehicleParams.kRideRear * vehicle.vehicleBody.vehicleParams.F0Rear / 9.80665) was %g should be >= 0", tmp53);
    }
  }
  (data->simulationInfo->realParameter[3511] /* vehicle.vehicleBody.vehicleParams.dWheelRear PARAM */) = (2.0) * (((data->simulationInfo->realParameter[3549] /* vehicle.vehicleBody.vehicleParams.zetaRear PARAM */)) * (sqrt(tmp53)));
  TRACE_POP
}

/*
equation index: 13960
type: SIMPLE_ASSIGN
vehicle.vehicleBody.vehicleParams.F0Front = 16.671305 * vehicle.vehicleBody.vehicleParams.mSprung / (vehicle.vehicleBody.vehicleParams.wheelbase * 2.0)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13960};
  (data->simulationInfo->realParameter[3498] /* vehicle.vehicleBody.vehicleParams.F0Front PARAM */) = DIVISION_SIM((16.671305) * ((data->simulationInfo->realParameter[3527] /* vehicle.vehicleBody.vehicleParams.mSprung PARAM */)),((data->simulationInfo->realParameter[3547] /* vehicle.vehicleBody.vehicleParams.wheelbase PARAM */)) * (2.0),"vehicle.vehicleBody.vehicleParams.wheelbase * 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 13961
type: SIMPLE_ASSIGN
vehicle.vehicleBody.vehicleParams.kRideFront = 0.10197162129779283 * vehicle.vehicleBody.vehicleParams.F0Front * (6.283185307179586 * vehicle.vehicleBody.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13961};
  modelica_real tmp54;
  tmp54 = (6.283185307179586) * ((data->simulationInfo->realParameter[3514] /* vehicle.vehicleBody.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[3522] /* vehicle.vehicleBody.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[3498] /* vehicle.vehicleBody.vehicleParams.F0Front PARAM */)) * ((tmp54 * tmp54)));
  TRACE_POP
}

/*
equation index: 13962
type: SIMPLE_ASSIGN
vehicle.vehicleBody.vehicleParams.dWheelFront = 2.0 * vehicle.vehicleBody.vehicleParams.zetaFront * sqrt(vehicle.vehicleBody.vehicleParams.kRideFront * vehicle.vehicleBody.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13962};
  modelica_real tmp55;
  tmp55 = DIVISION_SIM(((data->simulationInfo->realParameter[3522] /* vehicle.vehicleBody.vehicleParams.kRideFront PARAM */)) * ((data->simulationInfo->realParameter[3498] /* vehicle.vehicleBody.vehicleParams.F0Front PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp55 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.vehicleBody.vehicleParams.kRideFront * vehicle.vehicleBody.vehicleParams.F0Front / 9.80665) was %g should be >= 0", tmp55);
    }
  }
  (data->simulationInfo->realParameter[3510] /* vehicle.vehicleBody.vehicleParams.dWheelFront PARAM */) = (2.0) * (((data->simulationInfo->realParameter[3548] /* vehicle.vehicleBody.vehicleParams.zetaFront PARAM */)) * (sqrt(tmp55)));
  TRACE_POP
}

/*
equation index: 13963
type: SIMPLE_ASSIGN
vehicle.vehicleBody.vehicleParams.hpPower = 745.7 * vehicle.vehicleBody.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13963};
  (data->simulationInfo->realParameter[3519] /* vehicle.vehicleBody.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[3518] /* vehicle.vehicleBody.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 13966
type: SIMPLE_ASSIGN
vehicle.vehicleBody.vehicleParams.track = vehicle.vehicleBody.vehicleParams.tf + vehicle.vehicleBody.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13966};
  (data->simulationInfo->realParameter[3545] /* vehicle.vehicleBody.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[3543] /* vehicle.vehicleBody.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[3544] /* vehicle.vehicleBody.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 13967
type: SIMPLE_ASSIGN
vehicle.vehicleBody.vehicleParams.kRear = vehicle.vehicleBody.vehicleParams.kRideRear * vehicle.vehicleBody.vehicleParams.kz / (vehicle.vehicleBody.vehicleParams.kz - vehicle.vehicleBody.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13967};
  (data->simulationInfo->realParameter[3521] /* vehicle.vehicleBody.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[3523] /* vehicle.vehicleBody.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3526] /* vehicle.vehicleBody.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[3526] /* vehicle.vehicleBody.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[3523] /* vehicle.vehicleBody.vehicleParams.kRideRear PARAM */),"vehicle.vehicleBody.vehicleParams.kz - vehicle.vehicleBody.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 13968
type: SIMPLE_ASSIGN
vehicle.vehicleBody.vehicleParams.kFront = vehicle.vehicleBody.vehicleParams.kRideFront * vehicle.vehicleBody.vehicleParams.kz / (vehicle.vehicleBody.vehicleParams.kz - vehicle.vehicleBody.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13968};
  (data->simulationInfo->realParameter[3520] /* vehicle.vehicleBody.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[3522] /* vehicle.vehicleBody.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3526] /* vehicle.vehicleBody.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[3526] /* vehicle.vehicleBody.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[3522] /* vehicle.vehicleBody.vehicleParams.kRideFront PARAM */),"vehicle.vehicleBody.vehicleParams.kz - vehicle.vehicleBody.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 13969
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.shape.shapeType = vehicle.vehicleBody.fixedTranslationRear.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13969};
  (data->simulationInfo->stringParameter[157] /* vehicle.vehicleBody.fixedTranslationRear.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[158] /* vehicle.vehicleBody.fixedTranslationRear.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13983
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.shape.shapeType = vehicle.vehicleBody.fixedTranslationFront.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13983};
  (data->simulationInfo->stringParameter[155] /* vehicle.vehicleBody.fixedTranslationFront.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[156] /* vehicle.vehicleBody.fixedTranslationFront.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13997
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.sphere.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13997};
  (data->simulationInfo->stringParameter[154] /* vehicle.vehicleBody.body.sphere.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 13998
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13998};
  (data->simulationInfo->stringParameter[153] /* vehicle.vehicleBody.body.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13999
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.phi_start[3] = vehicle.vehicleBody.body.angles_start[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13999};
  (data->simulationInfo->realParameter[3438] /* vehicle.vehicleBody.body.phi_start[3] PARAM */) = (data->simulationInfo->realParameter[3426] /* vehicle.vehicleBody.body.angles_start[3] PARAM */);
  TRACE_POP
}

/*
equation index: 14000
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.phi_start[2] = vehicle.vehicleBody.body.angles_start[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14000};
  (data->simulationInfo->realParameter[3437] /* vehicle.vehicleBody.body.phi_start[2] PARAM */) = (data->simulationInfo->realParameter[3425] /* vehicle.vehicleBody.body.angles_start[2] PARAM */);
  TRACE_POP
}

/*
equation index: 14001
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.phi_start[1] = vehicle.vehicleBody.body.angles_start[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14001};
  (data->simulationInfo->realParameter[3436] /* vehicle.vehicleBody.body.phi_start[1] PARAM */) = (data->simulationInfo->realParameter[3424] /* vehicle.vehicleBody.body.angles_start[1] PARAM */);
  TRACE_POP
}

/*
equation index: 14018
type: SIMPLE_ASSIGN
vehicle.vehicleBody.Izz = vehicle.vehicleBody.vehicleParams.Izz
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14018};
  (data->simulationInfo->realParameter[3383] /* vehicle.vehicleBody.Izz PARAM */) = (data->simulationInfo->realParameter[3502] /* vehicle.vehicleBody.vehicleParams.Izz PARAM */);
  TRACE_POP
}

/*
equation index: 14019
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.I_33 = vehicle.vehicleBody.Izz
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14019};
  (data->simulationInfo->realParameter[3407] /* vehicle.vehicleBody.body.I_33 PARAM */) = (data->simulationInfo->realParameter[3383] /* vehicle.vehicleBody.Izz PARAM */);
  TRACE_POP
}

/*
equation index: 14020
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.I[3,3] = vehicle.vehicleBody.body.I_33
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14020};
  (data->simulationInfo->realParameter[3401] /* vehicle.vehicleBody.body.I[3,3] PARAM */) = (data->simulationInfo->realParameter[3407] /* vehicle.vehicleBody.body.I_33 PARAM */);
  TRACE_POP
}

/*
equation index: 14021
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.I[3,2] = vehicle.vehicleBody.body.I_32
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14021};
  (data->simulationInfo->realParameter[3400] /* vehicle.vehicleBody.body.I[3,2] PARAM */) = (data->simulationInfo->realParameter[3406] /* vehicle.vehicleBody.body.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 14022
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.I[3,1] = vehicle.vehicleBody.body.I_31
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14022};
  (data->simulationInfo->realParameter[3399] /* vehicle.vehicleBody.body.I[3,1] PARAM */) = (data->simulationInfo->realParameter[3405] /* vehicle.vehicleBody.body.I_31 PARAM */);
  TRACE_POP
}
OMC_DISABLE_OPT
void AlyssaVehicle_updateBoundParameters_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  AlyssaVehicle_eqFunction_11570(data, threadData);
  AlyssaVehicle_eqFunction_11571(data, threadData);
  AlyssaVehicle_eqFunction_11572(data, threadData);
  AlyssaVehicle_eqFunction_11573(data, threadData);
  AlyssaVehicle_eqFunction_11574(data, threadData);
  AlyssaVehicle_eqFunction_11575(data, threadData);
  AlyssaVehicle_eqFunction_11576(data, threadData);
  AlyssaVehicle_eqFunction_11577(data, threadData);
  AlyssaVehicle_eqFunction_11578(data, threadData);
  AlyssaVehicle_eqFunction_11579(data, threadData);
  AlyssaVehicle_eqFunction_11581(data, threadData);
  AlyssaVehicle_eqFunction_11582(data, threadData);
  AlyssaVehicle_eqFunction_11583(data, threadData);
  AlyssaVehicle_eqFunction_11584(data, threadData);
  AlyssaVehicle_eqFunction_11586(data, threadData);
  AlyssaVehicle_eqFunction_11587(data, threadData);
  AlyssaVehicle_eqFunction_11588(data, threadData);
  AlyssaVehicle_eqFunction_11589(data, threadData);
  AlyssaVehicle_eqFunction_11590(data, threadData);
  AlyssaVehicle_eqFunction_11592(data, threadData);
  AlyssaVehicle_eqFunction_11593(data, threadData);
  AlyssaVehicle_eqFunction_11594(data, threadData);
  AlyssaVehicle_eqFunction_11595(data, threadData);
  AlyssaVehicle_eqFunction_11596(data, threadData);
  AlyssaVehicle_eqFunction_11598(data, threadData);
  AlyssaVehicle_eqFunction_11599(data, threadData);
  AlyssaVehicle_eqFunction_11600(data, threadData);
  AlyssaVehicle_eqFunction_11601(data, threadData);
  AlyssaVehicle_eqFunction_11602(data, threadData);
  AlyssaVehicle_eqFunction_11604(data, threadData);
  AlyssaVehicle_eqFunction_11605(data, threadData);
  AlyssaVehicle_eqFunction_11606(data, threadData);
  AlyssaVehicle_eqFunction_11607(data, threadData);
  AlyssaVehicle_eqFunction_11608(data, threadData);
  AlyssaVehicle_eqFunction_11610(data, threadData);
  AlyssaVehicle_eqFunction_11611(data, threadData);
  AlyssaVehicle_eqFunction_11612(data, threadData);
  AlyssaVehicle_eqFunction_11613(data, threadData);
  AlyssaVehicle_eqFunction_11614(data, threadData);
  AlyssaVehicle_eqFunction_11615(data, threadData);
  AlyssaVehicle_eqFunction_11616(data, threadData);
  AlyssaVehicle_eqFunction_11617(data, threadData);
  AlyssaVehicle_eqFunction_11618(data, threadData);
  AlyssaVehicle_eqFunction_11619(data, threadData);
  AlyssaVehicle_eqFunction_11620(data, threadData);
  AlyssaVehicle_eqFunction_11621(data, threadData);
  AlyssaVehicle_eqFunction_11622(data, threadData);
  AlyssaVehicle_eqFunction_11623(data, threadData);
  AlyssaVehicle_eqFunction_11624(data, threadData);
  AlyssaVehicle_eqFunction_11626(data, threadData);
  AlyssaVehicle_eqFunction_11627(data, threadData);
  AlyssaVehicle_eqFunction_11628(data, threadData);
  AlyssaVehicle_eqFunction_11629(data, threadData);
  AlyssaVehicle_eqFunction_11630(data, threadData);
  AlyssaVehicle_eqFunction_11631(data, threadData);
  AlyssaVehicle_eqFunction_11632(data, threadData);
  AlyssaVehicle_eqFunction_11633(data, threadData);
  AlyssaVehicle_eqFunction_11634(data, threadData);
  AlyssaVehicle_eqFunction_11635(data, threadData);
  AlyssaVehicle_eqFunction_11636(data, threadData);
  AlyssaVehicle_eqFunction_11637(data, threadData);
  AlyssaVehicle_eqFunction_11638(data, threadData);
  AlyssaVehicle_eqFunction_11639(data, threadData);
  AlyssaVehicle_eqFunction_11640(data, threadData);
  AlyssaVehicle_eqFunction_11642(data, threadData);
  AlyssaVehicle_eqFunction_11643(data, threadData);
  AlyssaVehicle_eqFunction_11644(data, threadData);
  AlyssaVehicle_eqFunction_11645(data, threadData);
  AlyssaVehicle_eqFunction_11646(data, threadData);
  AlyssaVehicle_eqFunction_11647(data, threadData);
  AlyssaVehicle_eqFunction_11648(data, threadData);
  AlyssaVehicle_eqFunction_11649(data, threadData);
  AlyssaVehicle_eqFunction_11650(data, threadData);
  AlyssaVehicle_eqFunction_11651(data, threadData);
  AlyssaVehicle_eqFunction_11652(data, threadData);
  AlyssaVehicle_eqFunction_11653(data, threadData);
  AlyssaVehicle_eqFunction_11654(data, threadData);
  AlyssaVehicle_eqFunction_11655(data, threadData);
  AlyssaVehicle_eqFunction_11656(data, threadData);
  AlyssaVehicle_eqFunction_11658(data, threadData);
  AlyssaVehicle_eqFunction_11659(data, threadData);
  AlyssaVehicle_eqFunction_11660(data, threadData);
  AlyssaVehicle_eqFunction_11661(data, threadData);
  AlyssaVehicle_eqFunction_11662(data, threadData);
  AlyssaVehicle_eqFunction_11664(data, threadData);
  AlyssaVehicle_eqFunction_11665(data, threadData);
  AlyssaVehicle_eqFunction_11666(data, threadData);
  AlyssaVehicle_eqFunction_11667(data, threadData);
  AlyssaVehicle_eqFunction_11668(data, threadData);
  AlyssaVehicle_eqFunction_11670(data, threadData);
  AlyssaVehicle_eqFunction_11671(data, threadData);
  AlyssaVehicle_eqFunction_11672(data, threadData);
  AlyssaVehicle_eqFunction_11673(data, threadData);
  AlyssaVehicle_eqFunction_11674(data, threadData);
  AlyssaVehicle_eqFunction_6768(data, threadData);
  AlyssaVehicle_eqFunction_6761(data, threadData);
  AlyssaVehicle_eqFunction_11905(data, threadData);
  AlyssaVehicle_eqFunction_11906(data, threadData);
  AlyssaVehicle_eqFunction_11907(data, threadData);
  AlyssaVehicle_eqFunction_11908(data, threadData);
  AlyssaVehicle_eqFunction_11909(data, threadData);
  AlyssaVehicle_eqFunction_11910(data, threadData);
  AlyssaVehicle_eqFunction_11911(data, threadData);
  AlyssaVehicle_eqFunction_11912(data, threadData);
  AlyssaVehicle_eqFunction_11913(data, threadData);
  AlyssaVehicle_eqFunction_11914(data, threadData);
  AlyssaVehicle_eqFunction_11915(data, threadData);
  AlyssaVehicle_eqFunction_11916(data, threadData);
  AlyssaVehicle_eqFunction_11917(data, threadData);
  AlyssaVehicle_eqFunction_11918(data, threadData);
  AlyssaVehicle_eqFunction_11919(data, threadData);
  AlyssaVehicle_eqFunction_11920(data, threadData);
  AlyssaVehicle_eqFunction_11921(data, threadData);
  AlyssaVehicle_eqFunction_11922(data, threadData);
  AlyssaVehicle_eqFunction_11923(data, threadData);
  AlyssaVehicle_eqFunction_11924(data, threadData);
  AlyssaVehicle_eqFunction_11925(data, threadData);
  AlyssaVehicle_eqFunction_11926(data, threadData);
  AlyssaVehicle_eqFunction_11927(data, threadData);
  AlyssaVehicle_eqFunction_11928(data, threadData);
  AlyssaVehicle_eqFunction_11929(data, threadData);
  AlyssaVehicle_eqFunction_11930(data, threadData);
  AlyssaVehicle_eqFunction_11931(data, threadData);
  AlyssaVehicle_eqFunction_11932(data, threadData);
  AlyssaVehicle_eqFunction_11933(data, threadData);
  AlyssaVehicle_eqFunction_11934(data, threadData);
  AlyssaVehicle_eqFunction_11935(data, threadData);
  AlyssaVehicle_eqFunction_11936(data, threadData);
  AlyssaVehicle_eqFunction_11937(data, threadData);
  AlyssaVehicle_eqFunction_11966(data, threadData);
  AlyssaVehicle_eqFunction_11967(data, threadData);
  AlyssaVehicle_eqFunction_11968(data, threadData);
  AlyssaVehicle_eqFunction_11969(data, threadData);
  AlyssaVehicle_eqFunction_11970(data, threadData);
  AlyssaVehicle_eqFunction_11971(data, threadData);
  AlyssaVehicle_eqFunction_11972(data, threadData);
  AlyssaVehicle_eqFunction_11973(data, threadData);
  AlyssaVehicle_eqFunction_11974(data, threadData);
  AlyssaVehicle_eqFunction_11975(data, threadData);
  AlyssaVehicle_eqFunction_11976(data, threadData);
  AlyssaVehicle_eqFunction_11978(data, threadData);
  AlyssaVehicle_eqFunction_11986(data, threadData);
  AlyssaVehicle_eqFunction_11994(data, threadData);
  AlyssaVehicle_eqFunction_12002(data, threadData);
  AlyssaVehicle_eqFunction_12016(data, threadData);
  AlyssaVehicle_eqFunction_12030(data, threadData);
  AlyssaVehicle_eqFunction_12044(data, threadData);
  AlyssaVehicle_eqFunction_12045(data, threadData);
  AlyssaVehicle_eqFunction_12046(data, threadData);
  AlyssaVehicle_eqFunction_12047(data, threadData);
  AlyssaVehicle_eqFunction_12048(data, threadData);
  AlyssaVehicle_eqFunction_12050(data, threadData);
  AlyssaVehicle_eqFunction_12051(data, threadData);
  AlyssaVehicle_eqFunction_12052(data, threadData);
  AlyssaVehicle_eqFunction_12053(data, threadData);
  AlyssaVehicle_eqFunction_12055(data, threadData);
  AlyssaVehicle_eqFunction_12056(data, threadData);
  AlyssaVehicle_eqFunction_12057(data, threadData);
  AlyssaVehicle_eqFunction_12058(data, threadData);
  AlyssaVehicle_eqFunction_12060(data, threadData);
  AlyssaVehicle_eqFunction_12061(data, threadData);
  AlyssaVehicle_eqFunction_12066(data, threadData);
  AlyssaVehicle_eqFunction_12081(data, threadData);
  AlyssaVehicle_eqFunction_12082(data, threadData);
  AlyssaVehicle_eqFunction_12083(data, threadData);
  AlyssaVehicle_eqFunction_12088(data, threadData);
  AlyssaVehicle_eqFunction_12089(data, threadData);
  AlyssaVehicle_eqFunction_12090(data, threadData);
  AlyssaVehicle_eqFunction_12091(data, threadData);
  AlyssaVehicle_eqFunction_12092(data, threadData);
  AlyssaVehicle_eqFunction_12093(data, threadData);
  AlyssaVehicle_eqFunction_12094(data, threadData);
  AlyssaVehicle_eqFunction_12095(data, threadData);
  AlyssaVehicle_eqFunction_12096(data, threadData);
  AlyssaVehicle_eqFunction_12097(data, threadData);
  AlyssaVehicle_eqFunction_12098(data, threadData);
  AlyssaVehicle_eqFunction_12099(data, threadData);
  AlyssaVehicle_eqFunction_12101(data, threadData);
  AlyssaVehicle_eqFunction_12115(data, threadData);
  AlyssaVehicle_eqFunction_12134(data, threadData);
  AlyssaVehicle_eqFunction_12148(data, threadData);
  AlyssaVehicle_eqFunction_12149(data, threadData);
  AlyssaVehicle_eqFunction_12150(data, threadData);
  AlyssaVehicle_eqFunction_12151(data, threadData);
  AlyssaVehicle_eqFunction_12172(data, threadData);
  AlyssaVehicle_eqFunction_12176(data, threadData);
  AlyssaVehicle_eqFunction_12177(data, threadData);
  AlyssaVehicle_eqFunction_12203(data, threadData);
  AlyssaVehicle_eqFunction_12218(data, threadData);
  AlyssaVehicle_eqFunction_12233(data, threadData);
  AlyssaVehicle_eqFunction_12240(data, threadData);
  AlyssaVehicle_eqFunction_12343(data, threadData);
  AlyssaVehicle_eqFunction_12344(data, threadData);
  AlyssaVehicle_eqFunction_12345(data, threadData);
  AlyssaVehicle_eqFunction_12346(data, threadData);
  AlyssaVehicle_eqFunction_12347(data, threadData);
  AlyssaVehicle_eqFunction_12348(data, threadData);
  AlyssaVehicle_eqFunction_12354(data, threadData);
  AlyssaVehicle_eqFunction_12355(data, threadData);
  AlyssaVehicle_eqFunction_12356(data, threadData);
  AlyssaVehicle_eqFunction_12357(data, threadData);
  AlyssaVehicle_eqFunction_12358(data, threadData);
  AlyssaVehicle_eqFunction_12375(data, threadData);
  AlyssaVehicle_eqFunction_12376(data, threadData);
  AlyssaVehicle_eqFunction_12377(data, threadData);
  AlyssaVehicle_eqFunction_12378(data, threadData);
  AlyssaVehicle_eqFunction_12379(data, threadData);
  AlyssaVehicle_eqFunction_12380(data, threadData);
  AlyssaVehicle_eqFunction_12381(data, threadData);
  AlyssaVehicle_eqFunction_12382(data, threadData);
  AlyssaVehicle_eqFunction_12383(data, threadData);
  AlyssaVehicle_eqFunction_12396(data, threadData);
  AlyssaVehicle_eqFunction_12397(data, threadData);
  AlyssaVehicle_eqFunction_12399(data, threadData);
  AlyssaVehicle_eqFunction_12421(data, threadData);
  AlyssaVehicle_eqFunction_12422(data, threadData);
  AlyssaVehicle_eqFunction_12423(data, threadData);
  AlyssaVehicle_eqFunction_12424(data, threadData);
  AlyssaVehicle_eqFunction_12442(data, threadData);
  AlyssaVehicle_eqFunction_12461(data, threadData);
  AlyssaVehicle_eqFunction_12476(data, threadData);
  AlyssaVehicle_eqFunction_12477(data, threadData);
  AlyssaVehicle_eqFunction_12478(data, threadData);
  AlyssaVehicle_eqFunction_12481(data, threadData);
  AlyssaVehicle_eqFunction_12486(data, threadData);
  AlyssaVehicle_eqFunction_12490(data, threadData);
  AlyssaVehicle_eqFunction_12491(data, threadData);
  AlyssaVehicle_eqFunction_12495(data, threadData);
  AlyssaVehicle_eqFunction_12521(data, threadData);
  AlyssaVehicle_eqFunction_12522(data, threadData);
  AlyssaVehicle_eqFunction_12523(data, threadData);
  AlyssaVehicle_eqFunction_12528(data, threadData);
  AlyssaVehicle_eqFunction_12529(data, threadData);
  AlyssaVehicle_eqFunction_12530(data, threadData);
  AlyssaVehicle_eqFunction_12531(data, threadData);
  AlyssaVehicle_eqFunction_12532(data, threadData);
  AlyssaVehicle_eqFunction_12533(data, threadData);
  AlyssaVehicle_eqFunction_12534(data, threadData);
  AlyssaVehicle_eqFunction_12535(data, threadData);
  AlyssaVehicle_eqFunction_12536(data, threadData);
  AlyssaVehicle_eqFunction_12537(data, threadData);
  AlyssaVehicle_eqFunction_12538(data, threadData);
  AlyssaVehicle_eqFunction_12539(data, threadData);
  AlyssaVehicle_eqFunction_12541(data, threadData);
  AlyssaVehicle_eqFunction_12555(data, threadData);
  AlyssaVehicle_eqFunction_12574(data, threadData);
  AlyssaVehicle_eqFunction_12588(data, threadData);
  AlyssaVehicle_eqFunction_12589(data, threadData);
  AlyssaVehicle_eqFunction_12590(data, threadData);
  AlyssaVehicle_eqFunction_12591(data, threadData);
  AlyssaVehicle_eqFunction_12612(data, threadData);
  AlyssaVehicle_eqFunction_12616(data, threadData);
  AlyssaVehicle_eqFunction_12617(data, threadData);
  AlyssaVehicle_eqFunction_12643(data, threadData);
  AlyssaVehicle_eqFunction_12658(data, threadData);
  AlyssaVehicle_eqFunction_12673(data, threadData);
  AlyssaVehicle_eqFunction_12680(data, threadData);
  AlyssaVehicle_eqFunction_12783(data, threadData);
  AlyssaVehicle_eqFunction_12784(data, threadData);
  AlyssaVehicle_eqFunction_12785(data, threadData);
  AlyssaVehicle_eqFunction_12786(data, threadData);
  AlyssaVehicle_eqFunction_12787(data, threadData);
  AlyssaVehicle_eqFunction_12788(data, threadData);
  AlyssaVehicle_eqFunction_12794(data, threadData);
  AlyssaVehicle_eqFunction_12795(data, threadData);
  AlyssaVehicle_eqFunction_12796(data, threadData);
  AlyssaVehicle_eqFunction_12797(data, threadData);
  AlyssaVehicle_eqFunction_12798(data, threadData);
  AlyssaVehicle_eqFunction_12815(data, threadData);
  AlyssaVehicle_eqFunction_12816(data, threadData);
  AlyssaVehicle_eqFunction_12817(data, threadData);
  AlyssaVehicle_eqFunction_12818(data, threadData);
  AlyssaVehicle_eqFunction_12819(data, threadData);
  AlyssaVehicle_eqFunction_12820(data, threadData);
  AlyssaVehicle_eqFunction_12821(data, threadData);
  AlyssaVehicle_eqFunction_12822(data, threadData);
  AlyssaVehicle_eqFunction_12823(data, threadData);
  AlyssaVehicle_eqFunction_12836(data, threadData);
  AlyssaVehicle_eqFunction_12837(data, threadData);
  AlyssaVehicle_eqFunction_12839(data, threadData);
  AlyssaVehicle_eqFunction_12861(data, threadData);
  AlyssaVehicle_eqFunction_12862(data, threadData);
  AlyssaVehicle_eqFunction_12863(data, threadData);
  AlyssaVehicle_eqFunction_12864(data, threadData);
  AlyssaVehicle_eqFunction_12882(data, threadData);
  AlyssaVehicle_eqFunction_12901(data, threadData);
  AlyssaVehicle_eqFunction_12916(data, threadData);
  AlyssaVehicle_eqFunction_12917(data, threadData);
  AlyssaVehicle_eqFunction_12918(data, threadData);
  AlyssaVehicle_eqFunction_12921(data, threadData);
  AlyssaVehicle_eqFunction_12926(data, threadData);
  AlyssaVehicle_eqFunction_12930(data, threadData);
  AlyssaVehicle_eqFunction_12931(data, threadData);
  AlyssaVehicle_eqFunction_12935(data, threadData);
  AlyssaVehicle_eqFunction_12964(data, threadData);
  AlyssaVehicle_eqFunction_12978(data, threadData);
  AlyssaVehicle_eqFunction_12992(data, threadData);
  AlyssaVehicle_eqFunction_12993(data, threadData);
  AlyssaVehicle_eqFunction_12994(data, threadData);
  AlyssaVehicle_eqFunction_12995(data, threadData);
  AlyssaVehicle_eqFunction_12996(data, threadData);
  AlyssaVehicle_eqFunction_12997(data, threadData);
  AlyssaVehicle_eqFunction_12998(data, threadData);
  AlyssaVehicle_eqFunction_12999(data, threadData);
  AlyssaVehicle_eqFunction_13000(data, threadData);
  AlyssaVehicle_eqFunction_13001(data, threadData);
  AlyssaVehicle_eqFunction_13002(data, threadData);
  AlyssaVehicle_eqFunction_13003(data, threadData);
  AlyssaVehicle_eqFunction_13004(data, threadData);
  AlyssaVehicle_eqFunction_13005(data, threadData);
  AlyssaVehicle_eqFunction_13010(data, threadData);
  AlyssaVehicle_eqFunction_13011(data, threadData);
  AlyssaVehicle_eqFunction_13012(data, threadData);
  AlyssaVehicle_eqFunction_13013(data, threadData);
  AlyssaVehicle_eqFunction_13014(data, threadData);
  AlyssaVehicle_eqFunction_13015(data, threadData);
  AlyssaVehicle_eqFunction_13016(data, threadData);
  AlyssaVehicle_eqFunction_13017(data, threadData);
  AlyssaVehicle_eqFunction_13018(data, threadData);
  AlyssaVehicle_eqFunction_13019(data, threadData);
  AlyssaVehicle_eqFunction_13020(data, threadData);
  AlyssaVehicle_eqFunction_13021(data, threadData);
  AlyssaVehicle_eqFunction_13023(data, threadData);
  AlyssaVehicle_eqFunction_13037(data, threadData);
  AlyssaVehicle_eqFunction_13056(data, threadData);
  AlyssaVehicle_eqFunction_13070(data, threadData);
  AlyssaVehicle_eqFunction_13071(data, threadData);
  AlyssaVehicle_eqFunction_13072(data, threadData);
  AlyssaVehicle_eqFunction_13073(data, threadData);
  AlyssaVehicle_eqFunction_13094(data, threadData);
  AlyssaVehicle_eqFunction_13098(data, threadData);
  AlyssaVehicle_eqFunction_13099(data, threadData);
  AlyssaVehicle_eqFunction_13125(data, threadData);
  AlyssaVehicle_eqFunction_13140(data, threadData);
  AlyssaVehicle_eqFunction_13155(data, threadData);
  AlyssaVehicle_eqFunction_13162(data, threadData);
  AlyssaVehicle_eqFunction_13265(data, threadData);
  AlyssaVehicle_eqFunction_13266(data, threadData);
  AlyssaVehicle_eqFunction_13267(data, threadData);
  AlyssaVehicle_eqFunction_13268(data, threadData);
  AlyssaVehicle_eqFunction_13269(data, threadData);
  AlyssaVehicle_eqFunction_13270(data, threadData);
  AlyssaVehicle_eqFunction_13276(data, threadData);
  AlyssaVehicle_eqFunction_13277(data, threadData);
  AlyssaVehicle_eqFunction_13278(data, threadData);
  AlyssaVehicle_eqFunction_13279(data, threadData);
  AlyssaVehicle_eqFunction_13280(data, threadData);
  AlyssaVehicle_eqFunction_13297(data, threadData);
  AlyssaVehicle_eqFunction_13298(data, threadData);
  AlyssaVehicle_eqFunction_13299(data, threadData);
  AlyssaVehicle_eqFunction_13300(data, threadData);
  AlyssaVehicle_eqFunction_13301(data, threadData);
  AlyssaVehicle_eqFunction_13302(data, threadData);
  AlyssaVehicle_eqFunction_13303(data, threadData);
  AlyssaVehicle_eqFunction_13304(data, threadData);
  AlyssaVehicle_eqFunction_13305(data, threadData);
  AlyssaVehicle_eqFunction_13318(data, threadData);
  AlyssaVehicle_eqFunction_13319(data, threadData);
  AlyssaVehicle_eqFunction_13321(data, threadData);
  AlyssaVehicle_eqFunction_13343(data, threadData);
  AlyssaVehicle_eqFunction_13344(data, threadData);
  AlyssaVehicle_eqFunction_13345(data, threadData);
  AlyssaVehicle_eqFunction_13346(data, threadData);
  AlyssaVehicle_eqFunction_13364(data, threadData);
  AlyssaVehicle_eqFunction_13383(data, threadData);
  AlyssaVehicle_eqFunction_13398(data, threadData);
  AlyssaVehicle_eqFunction_13399(data, threadData);
  AlyssaVehicle_eqFunction_13400(data, threadData);
  AlyssaVehicle_eqFunction_13403(data, threadData);
  AlyssaVehicle_eqFunction_13408(data, threadData);
  AlyssaVehicle_eqFunction_13412(data, threadData);
  AlyssaVehicle_eqFunction_13413(data, threadData);
  AlyssaVehicle_eqFunction_13417(data, threadData);
  AlyssaVehicle_eqFunction_13443(data, threadData);
  AlyssaVehicle_eqFunction_13444(data, threadData);
  AlyssaVehicle_eqFunction_13445(data, threadData);
  AlyssaVehicle_eqFunction_13450(data, threadData);
  AlyssaVehicle_eqFunction_13451(data, threadData);
  AlyssaVehicle_eqFunction_13452(data, threadData);
  AlyssaVehicle_eqFunction_13453(data, threadData);
  AlyssaVehicle_eqFunction_13454(data, threadData);
  AlyssaVehicle_eqFunction_13455(data, threadData);
  AlyssaVehicle_eqFunction_13456(data, threadData);
  AlyssaVehicle_eqFunction_13457(data, threadData);
  AlyssaVehicle_eqFunction_13458(data, threadData);
  AlyssaVehicle_eqFunction_13459(data, threadData);
  AlyssaVehicle_eqFunction_13460(data, threadData);
  AlyssaVehicle_eqFunction_13461(data, threadData);
  AlyssaVehicle_eqFunction_13463(data, threadData);
  AlyssaVehicle_eqFunction_13477(data, threadData);
  AlyssaVehicle_eqFunction_13496(data, threadData);
  AlyssaVehicle_eqFunction_13510(data, threadData);
  AlyssaVehicle_eqFunction_13511(data, threadData);
  AlyssaVehicle_eqFunction_13512(data, threadData);
  AlyssaVehicle_eqFunction_13513(data, threadData);
  AlyssaVehicle_eqFunction_13534(data, threadData);
  AlyssaVehicle_eqFunction_13538(data, threadData);
  AlyssaVehicle_eqFunction_13539(data, threadData);
  AlyssaVehicle_eqFunction_13565(data, threadData);
  AlyssaVehicle_eqFunction_13580(data, threadData);
  AlyssaVehicle_eqFunction_13595(data, threadData);
  AlyssaVehicle_eqFunction_13602(data, threadData);
  AlyssaVehicle_eqFunction_13705(data, threadData);
  AlyssaVehicle_eqFunction_13706(data, threadData);
  AlyssaVehicle_eqFunction_13707(data, threadData);
  AlyssaVehicle_eqFunction_13708(data, threadData);
  AlyssaVehicle_eqFunction_13709(data, threadData);
  AlyssaVehicle_eqFunction_13710(data, threadData);
  AlyssaVehicle_eqFunction_13716(data, threadData);
  AlyssaVehicle_eqFunction_13717(data, threadData);
  AlyssaVehicle_eqFunction_13718(data, threadData);
  AlyssaVehicle_eqFunction_13719(data, threadData);
  AlyssaVehicle_eqFunction_13720(data, threadData);
  AlyssaVehicle_eqFunction_13737(data, threadData);
  AlyssaVehicle_eqFunction_13738(data, threadData);
  AlyssaVehicle_eqFunction_13739(data, threadData);
  AlyssaVehicle_eqFunction_13740(data, threadData);
  AlyssaVehicle_eqFunction_13741(data, threadData);
  AlyssaVehicle_eqFunction_13742(data, threadData);
  AlyssaVehicle_eqFunction_13743(data, threadData);
  AlyssaVehicle_eqFunction_13744(data, threadData);
  AlyssaVehicle_eqFunction_13745(data, threadData);
  AlyssaVehicle_eqFunction_13758(data, threadData);
  AlyssaVehicle_eqFunction_13759(data, threadData);
  AlyssaVehicle_eqFunction_13761(data, threadData);
  AlyssaVehicle_eqFunction_13783(data, threadData);
  AlyssaVehicle_eqFunction_13784(data, threadData);
  AlyssaVehicle_eqFunction_13785(data, threadData);
  AlyssaVehicle_eqFunction_13786(data, threadData);
  AlyssaVehicle_eqFunction_13804(data, threadData);
  AlyssaVehicle_eqFunction_13823(data, threadData);
  AlyssaVehicle_eqFunction_13838(data, threadData);
  AlyssaVehicle_eqFunction_13839(data, threadData);
  AlyssaVehicle_eqFunction_13840(data, threadData);
  AlyssaVehicle_eqFunction_13843(data, threadData);
  AlyssaVehicle_eqFunction_13848(data, threadData);
  AlyssaVehicle_eqFunction_13852(data, threadData);
  AlyssaVehicle_eqFunction_13853(data, threadData);
  AlyssaVehicle_eqFunction_13857(data, threadData);
  AlyssaVehicle_eqFunction_13883(data, threadData);
  AlyssaVehicle_eqFunction_13897(data, threadData);
  AlyssaVehicle_eqFunction_13911(data, threadData);
  AlyssaVehicle_eqFunction_13912(data, threadData);
  AlyssaVehicle_eqFunction_13915(data, threadData);
  AlyssaVehicle_eqFunction_13928(data, threadData);
  AlyssaVehicle_eqFunction_13945(data, threadData);
  AlyssaVehicle_eqFunction_13946(data, threadData);
  AlyssaVehicle_eqFunction_13947(data, threadData);
  AlyssaVehicle_eqFunction_13948(data, threadData);
  AlyssaVehicle_eqFunction_13949(data, threadData);
  AlyssaVehicle_eqFunction_13950(data, threadData);
  AlyssaVehicle_eqFunction_13951(data, threadData);
  AlyssaVehicle_eqFunction_13952(data, threadData);
  AlyssaVehicle_eqFunction_13953(data, threadData);
  AlyssaVehicle_eqFunction_13954(data, threadData);
  AlyssaVehicle_eqFunction_13955(data, threadData);
  AlyssaVehicle_eqFunction_13956(data, threadData);
  AlyssaVehicle_eqFunction_13957(data, threadData);
  AlyssaVehicle_eqFunction_13958(data, threadData);
  AlyssaVehicle_eqFunction_13959(data, threadData);
  AlyssaVehicle_eqFunction_13960(data, threadData);
  AlyssaVehicle_eqFunction_13961(data, threadData);
  AlyssaVehicle_eqFunction_13962(data, threadData);
  AlyssaVehicle_eqFunction_13963(data, threadData);
  AlyssaVehicle_eqFunction_13966(data, threadData);
  AlyssaVehicle_eqFunction_13967(data, threadData);
  AlyssaVehicle_eqFunction_13968(data, threadData);
  AlyssaVehicle_eqFunction_13969(data, threadData);
  AlyssaVehicle_eqFunction_13983(data, threadData);
  AlyssaVehicle_eqFunction_13997(data, threadData);
  AlyssaVehicle_eqFunction_13998(data, threadData);
  AlyssaVehicle_eqFunction_13999(data, threadData);
  AlyssaVehicle_eqFunction_14000(data, threadData);
  AlyssaVehicle_eqFunction_14001(data, threadData);
  AlyssaVehicle_eqFunction_14018(data, threadData);
  AlyssaVehicle_eqFunction_14019(data, threadData);
  AlyssaVehicle_eqFunction_14020(data, threadData);
  AlyssaVehicle_eqFunction_14021(data, threadData);
  AlyssaVehicle_eqFunction_14022(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif
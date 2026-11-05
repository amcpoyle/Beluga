#include "AlyssaVehicle_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 14023
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.I[2,3] = vehicle.vehicleBody.body.I_32
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14023};
  (data->simulationInfo->realParameter[3398] /* vehicle.vehicleBody.body.I[2,3] PARAM */) = (data->simulationInfo->realParameter[3406] /* vehicle.vehicleBody.body.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 14024
type: SIMPLE_ASSIGN
vehicle.vehicleBody.Iyy = vehicle.vehicleBody.vehicleParams.Iyy
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14024};
  (data->simulationInfo->realParameter[3382] /* vehicle.vehicleBody.Iyy PARAM */) = (data->simulationInfo->realParameter[3501] /* vehicle.vehicleBody.vehicleParams.Iyy PARAM */);
  TRACE_POP
}

/*
equation index: 14025
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.I_22 = vehicle.vehicleBody.Iyy
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14025};
  (data->simulationInfo->realParameter[3404] /* vehicle.vehicleBody.body.I_22 PARAM */) = (data->simulationInfo->realParameter[3382] /* vehicle.vehicleBody.Iyy PARAM */);
  TRACE_POP
}

/*
equation index: 14026
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.I[2,2] = vehicle.vehicleBody.body.I_22
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14026(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14026};
  (data->simulationInfo->realParameter[3397] /* vehicle.vehicleBody.body.I[2,2] PARAM */) = (data->simulationInfo->realParameter[3404] /* vehicle.vehicleBody.body.I_22 PARAM */);
  TRACE_POP
}

/*
equation index: 14027
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.I[2,1] = vehicle.vehicleBody.body.I_21
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14027};
  (data->simulationInfo->realParameter[3396] /* vehicle.vehicleBody.body.I[2,1] PARAM */) = (data->simulationInfo->realParameter[3403] /* vehicle.vehicleBody.body.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 14028
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.I[1,3] = vehicle.vehicleBody.body.I_31
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14028(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14028};
  (data->simulationInfo->realParameter[3395] /* vehicle.vehicleBody.body.I[1,3] PARAM */) = (data->simulationInfo->realParameter[3405] /* vehicle.vehicleBody.body.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 14029
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.I[1,2] = vehicle.vehicleBody.body.I_21
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14029};
  (data->simulationInfo->realParameter[3394] /* vehicle.vehicleBody.body.I[1,2] PARAM */) = (data->simulationInfo->realParameter[3403] /* vehicle.vehicleBody.body.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 14030
type: SIMPLE_ASSIGN
vehicle.vehicleBody.Ixx = vehicle.vehicleBody.vehicleParams.Ixx
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14030};
  (data->simulationInfo->realParameter[3381] /* vehicle.vehicleBody.Ixx PARAM */) = (data->simulationInfo->realParameter[3500] /* vehicle.vehicleBody.vehicleParams.Ixx PARAM */);
  TRACE_POP
}

/*
equation index: 14031
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.I_11 = vehicle.vehicleBody.Ixx
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14031};
  (data->simulationInfo->realParameter[3402] /* vehicle.vehicleBody.body.I_11 PARAM */) = (data->simulationInfo->realParameter[3381] /* vehicle.vehicleBody.Ixx PARAM */);
  TRACE_POP
}

/*
equation index: 14032
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.I[1,1] = vehicle.vehicleBody.body.I_11
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14032};
  (data->simulationInfo->realParameter[3393] /* vehicle.vehicleBody.body.I[1,1] PARAM */) = (data->simulationInfo->realParameter[3402] /* vehicle.vehicleBody.body.I_11 PARAM */);
  TRACE_POP
}

/*
equation index: 14045
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.m = vehicle.vehicleBody.vehicleParams.mSprung
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14045(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14045};
  (data->simulationInfo->realParameter[3435] /* vehicle.vehicleBody.body.m PARAM */) = (data->simulationInfo->realParameter[3527] /* vehicle.vehicleBody.vehicleParams.mSprung PARAM */);
  TRACE_POP
}

/*
equation index: 14047
type: SIMPLE_ASSIGN
vehicle.vehicleBody.vehicleMass = vehicle.vehicleBody.vehicleParams.vehicleMass
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14047(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14047};
  (data->simulationInfo->realParameter[3497] /* vehicle.vehicleBody.vehicleMass PARAM */) = (data->simulationInfo->realParameter[3546] /* vehicle.vehicleBody.vehicleParams.vehicleMass PARAM */);
  TRACE_POP
}

/*
equation index: 14048
type: SIMPLE_ASSIGN
vehicle.wheelRL.contactPatch.rEff = vehicle.wheelRL.rEff
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14048};
  (data->simulationInfo->realParameter[3787] /* vehicle.wheelRL.contactPatch.rEff PARAM */) = (data->simulationInfo->realParameter[3790] /* vehicle.wheelRL.rEff PARAM */);
  TRACE_POP
}

/*
equation index: 14052
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.damper.d = vehicle.wheelRL.rim.dSpin
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14052(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14052};
  (data->simulationInfo->realParameter[3794] /* vehicle.wheelRL.rim.damper.d PARAM */) = (data->simulationInfo->realParameter[3793] /* vehicle.wheelRL.rim.dSpin PARAM */);
  TRACE_POP
}

/*
equation index: 14058
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14058(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14058};
  (data->simulationInfo->stringParameter[161] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 14059
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.J = vehicle.wheelRL.rim.J
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14059(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14059};
  (data->simulationInfo->realParameter[3807] /* vehicle.wheelRL.rim.rotor1D.J PARAM */) = (data->simulationInfo->realParameter[3791] /* vehicle.wheelRL.rim.J PARAM */);
  TRACE_POP
}

/*
equation index: 14060
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.J = vehicle.wheelRL.rim.rotor1D.J
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14060};
  (data->simulationInfo->realParameter[3819] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.J PARAM */) = (data->simulationInfo->realParameter[3807] /* vehicle.wheelRL.rim.rotor1D.J PARAM */);
  TRACE_POP
}

/*
equation index: 14062
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.nJ[3] = vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.J * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14062};
  (data->simulationInfo->realParameter[3834] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.nJ[3] PARAM */) = ((data->simulationInfo->realParameter[3819] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.J PARAM */)) * ((data->simulationInfo->realParameter[3828] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */));
  TRACE_POP
}

/*
equation index: 14064
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.nJ[2] = vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.J * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14064(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14064};
  (data->simulationInfo->realParameter[3833] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.nJ[2] PARAM */) = ((data->simulationInfo->realParameter[3819] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.J PARAM */)) * ((data->simulationInfo->realParameter[3827] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */));
  TRACE_POP
}

/*
equation index: 14066
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.nJ[1] = vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.J * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14066};
  (data->simulationInfo->realParameter[3832] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.nJ[1] PARAM */) = ((data->simulationInfo->realParameter[3819] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.J PARAM */)) * ((data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */));
  TRACE_POP
}

/*
equation index: 14069
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.r_center[3] = vehicle.wheelRL.rim.rotor1D.r_center[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14069(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14069};
  (data->simulationInfo->realParameter[3837] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.r_center[3] PARAM */) = (data->simulationInfo->realParameter[3818] /* vehicle.wheelRL.rim.rotor1D.r_center[3] PARAM */);
  TRACE_POP
}

/*
equation index: 14070
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.r_center[2] = vehicle.wheelRL.rim.rotor1D.r_center[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14070(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14070};
  (data->simulationInfo->realParameter[3836] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.r_center[2] PARAM */) = (data->simulationInfo->realParameter[3817] /* vehicle.wheelRL.rim.rotor1D.r_center[2] PARAM */);
  TRACE_POP
}

/*
equation index: 14071
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.r_center[1] = vehicle.wheelRL.rim.rotor1D.r_center[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14071(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14071};
  (data->simulationInfo->realParameter[3835] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.r_center[1] PARAM */) = (data->simulationInfo->realParameter[3816] /* vehicle.wheelRL.rim.rotor1D.r_center[1] PARAM */);
  TRACE_POP
}

/*
equation index: 14089
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rEff = vehicle.wheelRL.rEff
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14089};
  (data->simulationInfo->realParameter[3806] /* vehicle.wheelRL.rim.rEff PARAM */) = (data->simulationInfo->realParameter[3790] /* vehicle.wheelRL.rEff PARAM */);
  TRACE_POP
}

/*
equation index: 14091
type: SIMPLE_ASSIGN
vehicle.wheelRL.slipForces.params.mSprung = vehicle.wheelRL.slipForces.params.vehicleMass + (-2.0) * (vehicle.wheelRL.slipForces.params.mUnsprungFront + vehicle.wheelRL.slipForces.params.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14091};
  (data->simulationInfo->realParameter[3876] /* vehicle.wheelRL.slipForces.params.mSprung PARAM */) = (data->simulationInfo->realParameter[3895] /* vehicle.wheelRL.slipForces.params.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[3877] /* vehicle.wheelRL.slipForces.params.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[3878] /* vehicle.wheelRL.slipForces.params.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 14092
type: SIMPLE_ASSIGN
vehicle.wheelRL.slipForces.params.F0Rear = 4.903325 * vehicle.wheelRL.slipForces.params.mSprung * vehicle.wheelRL.slipForces.params.a / vehicle.wheelRL.slipForces.params.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14092};
  (data->simulationInfo->realParameter[3848] /* vehicle.wheelRL.slipForces.params.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[3876] /* vehicle.wheelRL.slipForces.params.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3852] /* vehicle.wheelRL.slipForces.params.a PARAM */),(data->simulationInfo->realParameter[3896] /* vehicle.wheelRL.slipForces.params.wheelbase PARAM */),"vehicle.wheelRL.slipForces.params.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 14093
type: SIMPLE_ASSIGN
vehicle.wheelRL.slipForces.params.kRideRear = 0.10197162129779283 * vehicle.wheelRL.slipForces.params.F0Rear * (6.283185307179586 * vehicle.wheelRL.slipForces.params.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14093};
  modelica_real tmp56;
  tmp56 = (6.283185307179586) * ((data->simulationInfo->realParameter[3864] /* vehicle.wheelRL.slipForces.params.fRideRear PARAM */));
  (data->simulationInfo->realParameter[3872] /* vehicle.wheelRL.slipForces.params.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[3848] /* vehicle.wheelRL.slipForces.params.F0Rear PARAM */)) * ((tmp56 * tmp56)));
  TRACE_POP
}

/*
equation index: 14094
type: SIMPLE_ASSIGN
vehicle.wheelRL.slipForces.params.dWheelRear = 2.0 * vehicle.wheelRL.slipForces.params.zetaRear * sqrt(vehicle.wheelRL.slipForces.params.kRideRear * vehicle.wheelRL.slipForces.params.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14094};
  modelica_real tmp57;
  tmp57 = DIVISION_SIM(((data->simulationInfo->realParameter[3872] /* vehicle.wheelRL.slipForces.params.kRideRear PARAM */)) * ((data->simulationInfo->realParameter[3848] /* vehicle.wheelRL.slipForces.params.F0Rear PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp57 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.wheelRL.slipForces.params.kRideRear * vehicle.wheelRL.slipForces.params.F0Rear / 9.80665) was %g should be >= 0", tmp57);
    }
  }
  (data->simulationInfo->realParameter[3860] /* vehicle.wheelRL.slipForces.params.dWheelRear PARAM */) = (2.0) * (((data->simulationInfo->realParameter[3898] /* vehicle.wheelRL.slipForces.params.zetaRear PARAM */)) * (sqrt(tmp57)));
  TRACE_POP
}

/*
equation index: 14095
type: SIMPLE_ASSIGN
vehicle.wheelRL.slipForces.params.F0Front = 4.903325 * vehicle.wheelRL.slipForces.params.mSprung * vehicle.wheelRL.slipForces.params.b / vehicle.wheelRL.slipForces.params.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14095};
  (data->simulationInfo->realParameter[3847] /* vehicle.wheelRL.slipForces.params.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[3876] /* vehicle.wheelRL.slipForces.params.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3856] /* vehicle.wheelRL.slipForces.params.b PARAM */),(data->simulationInfo->realParameter[3896] /* vehicle.wheelRL.slipForces.params.wheelbase PARAM */),"vehicle.wheelRL.slipForces.params.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 14096
type: SIMPLE_ASSIGN
vehicle.wheelRL.slipForces.params.kRideFront = 0.10197162129779283 * vehicle.wheelRL.slipForces.params.F0Front * (6.283185307179586 * vehicle.wheelRL.slipForces.params.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14096};
  modelica_real tmp58;
  tmp58 = (6.283185307179586) * ((data->simulationInfo->realParameter[3863] /* vehicle.wheelRL.slipForces.params.fRideFront PARAM */));
  (data->simulationInfo->realParameter[3871] /* vehicle.wheelRL.slipForces.params.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[3847] /* vehicle.wheelRL.slipForces.params.F0Front PARAM */)) * ((tmp58 * tmp58)));
  TRACE_POP
}

/*
equation index: 14097
type: SIMPLE_ASSIGN
vehicle.wheelRL.slipForces.params.dWheelFront = 2.0 * vehicle.wheelRL.slipForces.params.zetaFront * sqrt(vehicle.wheelRL.slipForces.params.kRideFront * vehicle.wheelRL.slipForces.params.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14097};
  modelica_real tmp59;
  tmp59 = DIVISION_SIM(((data->simulationInfo->realParameter[3871] /* vehicle.wheelRL.slipForces.params.kRideFront PARAM */)) * ((data->simulationInfo->realParameter[3847] /* vehicle.wheelRL.slipForces.params.F0Front PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp59 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.wheelRL.slipForces.params.kRideFront * vehicle.wheelRL.slipForces.params.F0Front / 9.80665) was %g should be >= 0", tmp59);
    }
  }
  (data->simulationInfo->realParameter[3859] /* vehicle.wheelRL.slipForces.params.dWheelFront PARAM */) = (2.0) * (((data->simulationInfo->realParameter[3897] /* vehicle.wheelRL.slipForces.params.zetaFront PARAM */)) * (sqrt(tmp59)));
  TRACE_POP
}

/*
equation index: 14098
type: SIMPLE_ASSIGN
vehicle.wheelRL.slipForces.params.hpPower = 745.7 * vehicle.wheelRL.slipForces.params.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14098};
  (data->simulationInfo->realParameter[3868] /* vehicle.wheelRL.slipForces.params.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[3867] /* vehicle.wheelRL.slipForces.params.hp PARAM */));
  TRACE_POP
}

/*
equation index: 14099
type: SIMPLE_ASSIGN
vehicle.wheelRL.slipForces.params.track = vehicle.wheelRL.slipForces.params.tf + vehicle.wheelRL.slipForces.params.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14099};
  (data->simulationInfo->realParameter[3894] /* vehicle.wheelRL.slipForces.params.track PARAM */) = (data->simulationInfo->realParameter[3892] /* vehicle.wheelRL.slipForces.params.tf PARAM */) + (data->simulationInfo->realParameter[3893] /* vehicle.wheelRL.slipForces.params.tr PARAM */);
  TRACE_POP
}

/*
equation index: 14100
type: SIMPLE_ASSIGN
vehicle.wheelRL.slipForces.params.kRear = vehicle.wheelRL.slipForces.params.kRideRear * vehicle.wheelRL.slipForces.params.kz / (vehicle.wheelRL.slipForces.params.kz - vehicle.wheelRL.slipForces.params.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14100};
  (data->simulationInfo->realParameter[3870] /* vehicle.wheelRL.slipForces.params.kRear PARAM */) = ((data->simulationInfo->realParameter[3872] /* vehicle.wheelRL.slipForces.params.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3875] /* vehicle.wheelRL.slipForces.params.kz PARAM */),(data->simulationInfo->realParameter[3875] /* vehicle.wheelRL.slipForces.params.kz PARAM */) - (data->simulationInfo->realParameter[3872] /* vehicle.wheelRL.slipForces.params.kRideRear PARAM */),"vehicle.wheelRL.slipForces.params.kz - vehicle.wheelRL.slipForces.params.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 14101
type: SIMPLE_ASSIGN
vehicle.wheelRL.slipForces.params.kFront = vehicle.wheelRL.slipForces.params.kRideFront * vehicle.wheelRL.slipForces.params.kz / (vehicle.wheelRL.slipForces.params.kz - vehicle.wheelRL.slipForces.params.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14101};
  (data->simulationInfo->realParameter[3869] /* vehicle.wheelRL.slipForces.params.kFront PARAM */) = ((data->simulationInfo->realParameter[3871] /* vehicle.wheelRL.slipForces.params.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3875] /* vehicle.wheelRL.slipForces.params.kz PARAM */),(data->simulationInfo->realParameter[3875] /* vehicle.wheelRL.slipForces.params.kz PARAM */) - (data->simulationInfo->realParameter[3871] /* vehicle.wheelRL.slipForces.params.kRideFront PARAM */),"vehicle.wheelRL.slipForces.params.kz - vehicle.wheelRL.slipForces.params.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 14102
type: SIMPLE_ASSIGN
vehicle.wheelRL.slipForces.sy = tan(1.5707963267948966 / vehicle.wheelRL.slipForces.params.qy)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14102};
  (data->simulationInfo->realParameter[3900] /* vehicle.wheelRL.slipForces.sy PARAM */) = tan(DIVISION_SIM(1.5707963267948966,(data->simulationInfo->realParameter[3888] /* vehicle.wheelRL.slipForces.params.qy PARAM */),"vehicle.wheelRL.slipForces.params.qy",equationIndexes));
  TRACE_POP
}

/*
equation index: 14103
type: SIMPLE_ASSIGN
vehicle.wheelRL.slipForces.sx = tan(1.5707963267948966 / vehicle.wheelRL.slipForces.params.qx)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14103};
  (data->simulationInfo->realParameter[3899] /* vehicle.wheelRL.slipForces.sx PARAM */) = tan(DIVISION_SIM(1.5707963267948966,(data->simulationInfo->realParameter[3887] /* vehicle.wheelRL.slipForces.params.qx PARAM */),"vehicle.wheelRL.slipForces.params.qx",equationIndexes));
  TRACE_POP
}

/*
equation index: 14105
type: SIMPLE_ASSIGN
vehicle.wheelRR.contactPatch.rEff = vehicle.wheelRR.rEff
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14105};
  (data->simulationInfo->realParameter[3904] /* vehicle.wheelRR.contactPatch.rEff PARAM */) = (data->simulationInfo->realParameter[3907] /* vehicle.wheelRR.rEff PARAM */);
  TRACE_POP
}

/*
equation index: 14109
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.damper.d = vehicle.wheelRR.rim.dSpin
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14109};
  (data->simulationInfo->realParameter[3911] /* vehicle.wheelRR.rim.damper.d PARAM */) = (data->simulationInfo->realParameter[3910] /* vehicle.wheelRR.rim.dSpin PARAM */);
  TRACE_POP
}

/*
equation index: 14115
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14115};
  (data->simulationInfo->stringParameter[162] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 14116
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.J = vehicle.wheelRR.rim.J
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14116};
  (data->simulationInfo->realParameter[3924] /* vehicle.wheelRR.rim.rotor1D.J PARAM */) = (data->simulationInfo->realParameter[3908] /* vehicle.wheelRR.rim.J PARAM */);
  TRACE_POP
}

/*
equation index: 14117
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.J = vehicle.wheelRR.rim.rotor1D.J
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14117};
  (data->simulationInfo->realParameter[3936] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.J PARAM */) = (data->simulationInfo->realParameter[3924] /* vehicle.wheelRR.rim.rotor1D.J PARAM */);
  TRACE_POP
}

/*
equation index: 14119
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.nJ[3] = vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.J * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14119};
  (data->simulationInfo->realParameter[3951] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.nJ[3] PARAM */) = ((data->simulationInfo->realParameter[3936] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.J PARAM */)) * ((data->simulationInfo->realParameter[3945] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */));
  TRACE_POP
}

/*
equation index: 14121
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.nJ[2] = vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.J * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14121};
  (data->simulationInfo->realParameter[3950] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.nJ[2] PARAM */) = ((data->simulationInfo->realParameter[3936] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.J PARAM */)) * ((data->simulationInfo->realParameter[3944] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */));
  TRACE_POP
}

/*
equation index: 14123
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.nJ[1] = vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.J * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14123};
  (data->simulationInfo->realParameter[3949] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.nJ[1] PARAM */) = ((data->simulationInfo->realParameter[3936] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.J PARAM */)) * ((data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */));
  TRACE_POP
}

/*
equation index: 14126
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.r_center[3] = vehicle.wheelRR.rim.rotor1D.r_center[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14126};
  (data->simulationInfo->realParameter[3954] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.r_center[3] PARAM */) = (data->simulationInfo->realParameter[3935] /* vehicle.wheelRR.rim.rotor1D.r_center[3] PARAM */);
  TRACE_POP
}

/*
equation index: 14127
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.r_center[2] = vehicle.wheelRR.rim.rotor1D.r_center[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14127};
  (data->simulationInfo->realParameter[3953] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.r_center[2] PARAM */) = (data->simulationInfo->realParameter[3934] /* vehicle.wheelRR.rim.rotor1D.r_center[2] PARAM */);
  TRACE_POP
}

/*
equation index: 14128
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.r_center[1] = vehicle.wheelRR.rim.rotor1D.r_center[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14128};
  (data->simulationInfo->realParameter[3952] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.r_center[1] PARAM */) = (data->simulationInfo->realParameter[3933] /* vehicle.wheelRR.rim.rotor1D.r_center[1] PARAM */);
  TRACE_POP
}

/*
equation index: 14146
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rEff = vehicle.wheelRR.rEff
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14146};
  (data->simulationInfo->realParameter[3923] /* vehicle.wheelRR.rim.rEff PARAM */) = (data->simulationInfo->realParameter[3907] /* vehicle.wheelRR.rEff PARAM */);
  TRACE_POP
}

/*
equation index: 14148
type: SIMPLE_ASSIGN
vehicle.wheelRR.slipForces.params.mSprung = vehicle.wheelRR.slipForces.params.vehicleMass + (-2.0) * (vehicle.wheelRR.slipForces.params.mUnsprungFront + vehicle.wheelRR.slipForces.params.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14148};
  (data->simulationInfo->realParameter[3993] /* vehicle.wheelRR.slipForces.params.mSprung PARAM */) = (data->simulationInfo->realParameter[4012] /* vehicle.wheelRR.slipForces.params.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[3994] /* vehicle.wheelRR.slipForces.params.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[3995] /* vehicle.wheelRR.slipForces.params.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 14149
type: SIMPLE_ASSIGN
vehicle.wheelRR.slipForces.params.F0Rear = 4.903325 * vehicle.wheelRR.slipForces.params.mSprung * vehicle.wheelRR.slipForces.params.a / vehicle.wheelRR.slipForces.params.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14149};
  (data->simulationInfo->realParameter[3965] /* vehicle.wheelRR.slipForces.params.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[3993] /* vehicle.wheelRR.slipForces.params.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3969] /* vehicle.wheelRR.slipForces.params.a PARAM */),(data->simulationInfo->realParameter[4013] /* vehicle.wheelRR.slipForces.params.wheelbase PARAM */),"vehicle.wheelRR.slipForces.params.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 14150
type: SIMPLE_ASSIGN
vehicle.wheelRR.slipForces.params.kRideRear = 0.10197162129779283 * vehicle.wheelRR.slipForces.params.F0Rear * (6.283185307179586 * vehicle.wheelRR.slipForces.params.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14150};
  modelica_real tmp60;
  tmp60 = (6.283185307179586) * ((data->simulationInfo->realParameter[3981] /* vehicle.wheelRR.slipForces.params.fRideRear PARAM */));
  (data->simulationInfo->realParameter[3989] /* vehicle.wheelRR.slipForces.params.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[3965] /* vehicle.wheelRR.slipForces.params.F0Rear PARAM */)) * ((tmp60 * tmp60)));
  TRACE_POP
}

/*
equation index: 14151
type: SIMPLE_ASSIGN
vehicle.wheelRR.slipForces.params.dWheelRear = 2.0 * vehicle.wheelRR.slipForces.params.zetaRear * sqrt(vehicle.wheelRR.slipForces.params.kRideRear * vehicle.wheelRR.slipForces.params.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14151};
  modelica_real tmp61;
  tmp61 = DIVISION_SIM(((data->simulationInfo->realParameter[3989] /* vehicle.wheelRR.slipForces.params.kRideRear PARAM */)) * ((data->simulationInfo->realParameter[3965] /* vehicle.wheelRR.slipForces.params.F0Rear PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp61 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.wheelRR.slipForces.params.kRideRear * vehicle.wheelRR.slipForces.params.F0Rear / 9.80665) was %g should be >= 0", tmp61);
    }
  }
  (data->simulationInfo->realParameter[3977] /* vehicle.wheelRR.slipForces.params.dWheelRear PARAM */) = (2.0) * (((data->simulationInfo->realParameter[4015] /* vehicle.wheelRR.slipForces.params.zetaRear PARAM */)) * (sqrt(tmp61)));
  TRACE_POP
}

/*
equation index: 14152
type: SIMPLE_ASSIGN
vehicle.wheelRR.slipForces.params.F0Front = 4.903325 * vehicle.wheelRR.slipForces.params.mSprung * vehicle.wheelRR.slipForces.params.b / vehicle.wheelRR.slipForces.params.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14152};
  (data->simulationInfo->realParameter[3964] /* vehicle.wheelRR.slipForces.params.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[3993] /* vehicle.wheelRR.slipForces.params.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3973] /* vehicle.wheelRR.slipForces.params.b PARAM */),(data->simulationInfo->realParameter[4013] /* vehicle.wheelRR.slipForces.params.wheelbase PARAM */),"vehicle.wheelRR.slipForces.params.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 14153
type: SIMPLE_ASSIGN
vehicle.wheelRR.slipForces.params.kRideFront = 0.10197162129779283 * vehicle.wheelRR.slipForces.params.F0Front * (6.283185307179586 * vehicle.wheelRR.slipForces.params.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14153};
  modelica_real tmp62;
  tmp62 = (6.283185307179586) * ((data->simulationInfo->realParameter[3980] /* vehicle.wheelRR.slipForces.params.fRideFront PARAM */));
  (data->simulationInfo->realParameter[3988] /* vehicle.wheelRR.slipForces.params.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[3964] /* vehicle.wheelRR.slipForces.params.F0Front PARAM */)) * ((tmp62 * tmp62)));
  TRACE_POP
}

/*
equation index: 14154
type: SIMPLE_ASSIGN
vehicle.wheelRR.slipForces.params.dWheelFront = 2.0 * vehicle.wheelRR.slipForces.params.zetaFront * sqrt(vehicle.wheelRR.slipForces.params.kRideFront * vehicle.wheelRR.slipForces.params.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14154};
  modelica_real tmp63;
  tmp63 = DIVISION_SIM(((data->simulationInfo->realParameter[3988] /* vehicle.wheelRR.slipForces.params.kRideFront PARAM */)) * ((data->simulationInfo->realParameter[3964] /* vehicle.wheelRR.slipForces.params.F0Front PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp63 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.wheelRR.slipForces.params.kRideFront * vehicle.wheelRR.slipForces.params.F0Front / 9.80665) was %g should be >= 0", tmp63);
    }
  }
  (data->simulationInfo->realParameter[3976] /* vehicle.wheelRR.slipForces.params.dWheelFront PARAM */) = (2.0) * (((data->simulationInfo->realParameter[4014] /* vehicle.wheelRR.slipForces.params.zetaFront PARAM */)) * (sqrt(tmp63)));
  TRACE_POP
}

/*
equation index: 14155
type: SIMPLE_ASSIGN
vehicle.wheelRR.slipForces.params.hpPower = 745.7 * vehicle.wheelRR.slipForces.params.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14155};
  (data->simulationInfo->realParameter[3985] /* vehicle.wheelRR.slipForces.params.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[3984] /* vehicle.wheelRR.slipForces.params.hp PARAM */));
  TRACE_POP
}

/*
equation index: 14156
type: SIMPLE_ASSIGN
vehicle.wheelRR.slipForces.params.track = vehicle.wheelRR.slipForces.params.tf + vehicle.wheelRR.slipForces.params.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14156};
  (data->simulationInfo->realParameter[4011] /* vehicle.wheelRR.slipForces.params.track PARAM */) = (data->simulationInfo->realParameter[4009] /* vehicle.wheelRR.slipForces.params.tf PARAM */) + (data->simulationInfo->realParameter[4010] /* vehicle.wheelRR.slipForces.params.tr PARAM */);
  TRACE_POP
}

/*
equation index: 14157
type: SIMPLE_ASSIGN
vehicle.wheelRR.slipForces.params.kRear = vehicle.wheelRR.slipForces.params.kRideRear * vehicle.wheelRR.slipForces.params.kz / (vehicle.wheelRR.slipForces.params.kz - vehicle.wheelRR.slipForces.params.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14157};
  (data->simulationInfo->realParameter[3987] /* vehicle.wheelRR.slipForces.params.kRear PARAM */) = ((data->simulationInfo->realParameter[3989] /* vehicle.wheelRR.slipForces.params.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3992] /* vehicle.wheelRR.slipForces.params.kz PARAM */),(data->simulationInfo->realParameter[3992] /* vehicle.wheelRR.slipForces.params.kz PARAM */) - (data->simulationInfo->realParameter[3989] /* vehicle.wheelRR.slipForces.params.kRideRear PARAM */),"vehicle.wheelRR.slipForces.params.kz - vehicle.wheelRR.slipForces.params.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 14158
type: SIMPLE_ASSIGN
vehicle.wheelRR.slipForces.params.kFront = vehicle.wheelRR.slipForces.params.kRideFront * vehicle.wheelRR.slipForces.params.kz / (vehicle.wheelRR.slipForces.params.kz - vehicle.wheelRR.slipForces.params.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14158};
  (data->simulationInfo->realParameter[3986] /* vehicle.wheelRR.slipForces.params.kFront PARAM */) = ((data->simulationInfo->realParameter[3988] /* vehicle.wheelRR.slipForces.params.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3992] /* vehicle.wheelRR.slipForces.params.kz PARAM */),(data->simulationInfo->realParameter[3992] /* vehicle.wheelRR.slipForces.params.kz PARAM */) - (data->simulationInfo->realParameter[3988] /* vehicle.wheelRR.slipForces.params.kRideFront PARAM */),"vehicle.wheelRR.slipForces.params.kz - vehicle.wheelRR.slipForces.params.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 14159
type: SIMPLE_ASSIGN
vehicle.wheelRR.slipForces.sy = tan(1.5707963267948966 / vehicle.wheelRR.slipForces.params.qy)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14159};
  (data->simulationInfo->realParameter[4017] /* vehicle.wheelRR.slipForces.sy PARAM */) = tan(DIVISION_SIM(1.5707963267948966,(data->simulationInfo->realParameter[4005] /* vehicle.wheelRR.slipForces.params.qy PARAM */),"vehicle.wheelRR.slipForces.params.qy",equationIndexes));
  TRACE_POP
}

/*
equation index: 14160
type: SIMPLE_ASSIGN
vehicle.wheelRR.slipForces.sx = tan(1.5707963267948966 / vehicle.wheelRR.slipForces.params.qx)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14160};
  (data->simulationInfo->realParameter[4016] /* vehicle.wheelRR.slipForces.sx PARAM */) = tan(DIVISION_SIM(1.5707963267948966,(data->simulationInfo->realParameter[4004] /* vehicle.wheelRR.slipForces.params.qx PARAM */),"vehicle.wheelRR.slipForces.params.qx",equationIndexes));
  TRACE_POP
}

/*
equation index: 14162
type: SIMPLE_ASSIGN
vehicle.wheelFL.contactPatch.rEff = vehicle.wheelFL.rEff
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14162};
  (data->simulationInfo->realParameter[3553] /* vehicle.wheelFL.contactPatch.rEff PARAM */) = (data->simulationInfo->realParameter[3556] /* vehicle.wheelFL.rEff PARAM */);
  TRACE_POP
}

/*
equation index: 14166
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.damper.d = vehicle.wheelFL.rim.dSpin
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14166};
  (data->simulationInfo->realParameter[3560] /* vehicle.wheelFL.rim.damper.d PARAM */) = (data->simulationInfo->realParameter[3559] /* vehicle.wheelFL.rim.dSpin PARAM */);
  TRACE_POP
}

/*
equation index: 14172
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14172};
  (data->simulationInfo->stringParameter[159] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 14173
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.J = vehicle.wheelFL.rim.J
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14173};
  (data->simulationInfo->realParameter[3573] /* vehicle.wheelFL.rim.rotor1D.J PARAM */) = (data->simulationInfo->realParameter[3557] /* vehicle.wheelFL.rim.J PARAM */);
  TRACE_POP
}

/*
equation index: 14174
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.J = vehicle.wheelFL.rim.rotor1D.J
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14174};
  (data->simulationInfo->realParameter[3585] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.J PARAM */) = (data->simulationInfo->realParameter[3573] /* vehicle.wheelFL.rim.rotor1D.J PARAM */);
  TRACE_POP
}

/*
equation index: 14176
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.nJ[3] = vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.J * vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14176};
  (data->simulationInfo->realParameter[3600] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.nJ[3] PARAM */) = ((data->simulationInfo->realParameter[3585] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.J PARAM */)) * ((data->simulationInfo->realParameter[3594] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */));
  TRACE_POP
}

/*
equation index: 14178
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.nJ[2] = vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.J * vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14178};
  (data->simulationInfo->realParameter[3599] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.nJ[2] PARAM */) = ((data->simulationInfo->realParameter[3585] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.J PARAM */)) * ((data->simulationInfo->realParameter[3593] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */));
  TRACE_POP
}

/*
equation index: 14180
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.nJ[1] = vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.J * vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14180};
  (data->simulationInfo->realParameter[3598] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.nJ[1] PARAM */) = ((data->simulationInfo->realParameter[3585] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.J PARAM */)) * ((data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */));
  TRACE_POP
}

/*
equation index: 14183
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.r_center[3] = vehicle.wheelFL.rim.rotor1D.r_center[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14183};
  (data->simulationInfo->realParameter[3603] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.r_center[3] PARAM */) = (data->simulationInfo->realParameter[3584] /* vehicle.wheelFL.rim.rotor1D.r_center[3] PARAM */);
  TRACE_POP
}

/*
equation index: 14184
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.r_center[2] = vehicle.wheelFL.rim.rotor1D.r_center[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14184};
  (data->simulationInfo->realParameter[3602] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.r_center[2] PARAM */) = (data->simulationInfo->realParameter[3583] /* vehicle.wheelFL.rim.rotor1D.r_center[2] PARAM */);
  TRACE_POP
}

/*
equation index: 14185
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.r_center[1] = vehicle.wheelFL.rim.rotor1D.r_center[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14185};
  (data->simulationInfo->realParameter[3601] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.r_center[1] PARAM */) = (data->simulationInfo->realParameter[3582] /* vehicle.wheelFL.rim.rotor1D.r_center[1] PARAM */);
  TRACE_POP
}

/*
equation index: 14203
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rEff = vehicle.wheelFL.rEff
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14203};
  (data->simulationInfo->realParameter[3572] /* vehicle.wheelFL.rim.rEff PARAM */) = (data->simulationInfo->realParameter[3556] /* vehicle.wheelFL.rEff PARAM */);
  TRACE_POP
}

/*
equation index: 14205
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipForces.params.mSprung = vehicle.wheelFL.slipForces.params.vehicleMass + (-2.0) * (vehicle.wheelFL.slipForces.params.mUnsprungFront + vehicle.wheelFL.slipForces.params.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14205};
  (data->simulationInfo->realParameter[3642] /* vehicle.wheelFL.slipForces.params.mSprung PARAM */) = (data->simulationInfo->realParameter[3661] /* vehicle.wheelFL.slipForces.params.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[3643] /* vehicle.wheelFL.slipForces.params.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[3644] /* vehicle.wheelFL.slipForces.params.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 14206
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipForces.params.F0Rear = 4.903325 * vehicle.wheelFL.slipForces.params.mSprung * vehicle.wheelFL.slipForces.params.a / vehicle.wheelFL.slipForces.params.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14206};
  (data->simulationInfo->realParameter[3614] /* vehicle.wheelFL.slipForces.params.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[3642] /* vehicle.wheelFL.slipForces.params.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3618] /* vehicle.wheelFL.slipForces.params.a PARAM */),(data->simulationInfo->realParameter[3662] /* vehicle.wheelFL.slipForces.params.wheelbase PARAM */),"vehicle.wheelFL.slipForces.params.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 14207
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipForces.params.kRideRear = 0.10197162129779283 * vehicle.wheelFL.slipForces.params.F0Rear * (6.283185307179586 * vehicle.wheelFL.slipForces.params.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14207};
  modelica_real tmp64;
  tmp64 = (6.283185307179586) * ((data->simulationInfo->realParameter[3630] /* vehicle.wheelFL.slipForces.params.fRideRear PARAM */));
  (data->simulationInfo->realParameter[3638] /* vehicle.wheelFL.slipForces.params.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[3614] /* vehicle.wheelFL.slipForces.params.F0Rear PARAM */)) * ((tmp64 * tmp64)));
  TRACE_POP
}

/*
equation index: 14208
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipForces.params.dWheelRear = 2.0 * vehicle.wheelFL.slipForces.params.zetaRear * sqrt(vehicle.wheelFL.slipForces.params.kRideRear * vehicle.wheelFL.slipForces.params.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14208};
  modelica_real tmp65;
  tmp65 = DIVISION_SIM(((data->simulationInfo->realParameter[3638] /* vehicle.wheelFL.slipForces.params.kRideRear PARAM */)) * ((data->simulationInfo->realParameter[3614] /* vehicle.wheelFL.slipForces.params.F0Rear PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp65 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.wheelFL.slipForces.params.kRideRear * vehicle.wheelFL.slipForces.params.F0Rear / 9.80665) was %g should be >= 0", tmp65);
    }
  }
  (data->simulationInfo->realParameter[3626] /* vehicle.wheelFL.slipForces.params.dWheelRear PARAM */) = (2.0) * (((data->simulationInfo->realParameter[3664] /* vehicle.wheelFL.slipForces.params.zetaRear PARAM */)) * (sqrt(tmp65)));
  TRACE_POP
}

/*
equation index: 14209
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipForces.params.F0Front = 4.903325 * vehicle.wheelFL.slipForces.params.mSprung * vehicle.wheelFL.slipForces.params.b / vehicle.wheelFL.slipForces.params.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14209};
  (data->simulationInfo->realParameter[3613] /* vehicle.wheelFL.slipForces.params.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[3642] /* vehicle.wheelFL.slipForces.params.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3622] /* vehicle.wheelFL.slipForces.params.b PARAM */),(data->simulationInfo->realParameter[3662] /* vehicle.wheelFL.slipForces.params.wheelbase PARAM */),"vehicle.wheelFL.slipForces.params.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 14210
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipForces.params.kRideFront = 0.10197162129779283 * vehicle.wheelFL.slipForces.params.F0Front * (6.283185307179586 * vehicle.wheelFL.slipForces.params.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14210};
  modelica_real tmp66;
  tmp66 = (6.283185307179586) * ((data->simulationInfo->realParameter[3629] /* vehicle.wheelFL.slipForces.params.fRideFront PARAM */));
  (data->simulationInfo->realParameter[3637] /* vehicle.wheelFL.slipForces.params.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[3613] /* vehicle.wheelFL.slipForces.params.F0Front PARAM */)) * ((tmp66 * tmp66)));
  TRACE_POP
}

/*
equation index: 14211
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipForces.params.dWheelFront = 2.0 * vehicle.wheelFL.slipForces.params.zetaFront * sqrt(vehicle.wheelFL.slipForces.params.kRideFront * vehicle.wheelFL.slipForces.params.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14211};
  modelica_real tmp67;
  tmp67 = DIVISION_SIM(((data->simulationInfo->realParameter[3637] /* vehicle.wheelFL.slipForces.params.kRideFront PARAM */)) * ((data->simulationInfo->realParameter[3613] /* vehicle.wheelFL.slipForces.params.F0Front PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp67 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.wheelFL.slipForces.params.kRideFront * vehicle.wheelFL.slipForces.params.F0Front / 9.80665) was %g should be >= 0", tmp67);
    }
  }
  (data->simulationInfo->realParameter[3625] /* vehicle.wheelFL.slipForces.params.dWheelFront PARAM */) = (2.0) * (((data->simulationInfo->realParameter[3663] /* vehicle.wheelFL.slipForces.params.zetaFront PARAM */)) * (sqrt(tmp67)));
  TRACE_POP
}

/*
equation index: 14212
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipForces.params.hpPower = 745.7 * vehicle.wheelFL.slipForces.params.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14212};
  (data->simulationInfo->realParameter[3634] /* vehicle.wheelFL.slipForces.params.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[3633] /* vehicle.wheelFL.slipForces.params.hp PARAM */));
  TRACE_POP
}

/*
equation index: 14213
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipForces.params.track = vehicle.wheelFL.slipForces.params.tf + vehicle.wheelFL.slipForces.params.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14213};
  (data->simulationInfo->realParameter[3660] /* vehicle.wheelFL.slipForces.params.track PARAM */) = (data->simulationInfo->realParameter[3658] /* vehicle.wheelFL.slipForces.params.tf PARAM */) + (data->simulationInfo->realParameter[3659] /* vehicle.wheelFL.slipForces.params.tr PARAM */);
  TRACE_POP
}

/*
equation index: 14214
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipForces.params.kRear = vehicle.wheelFL.slipForces.params.kRideRear * vehicle.wheelFL.slipForces.params.kz / (vehicle.wheelFL.slipForces.params.kz - vehicle.wheelFL.slipForces.params.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14214};
  (data->simulationInfo->realParameter[3636] /* vehicle.wheelFL.slipForces.params.kRear PARAM */) = ((data->simulationInfo->realParameter[3638] /* vehicle.wheelFL.slipForces.params.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3641] /* vehicle.wheelFL.slipForces.params.kz PARAM */),(data->simulationInfo->realParameter[3641] /* vehicle.wheelFL.slipForces.params.kz PARAM */) - (data->simulationInfo->realParameter[3638] /* vehicle.wheelFL.slipForces.params.kRideRear PARAM */),"vehicle.wheelFL.slipForces.params.kz - vehicle.wheelFL.slipForces.params.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 14215
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipForces.params.kFront = vehicle.wheelFL.slipForces.params.kRideFront * vehicle.wheelFL.slipForces.params.kz / (vehicle.wheelFL.slipForces.params.kz - vehicle.wheelFL.slipForces.params.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14215};
  (data->simulationInfo->realParameter[3635] /* vehicle.wheelFL.slipForces.params.kFront PARAM */) = ((data->simulationInfo->realParameter[3637] /* vehicle.wheelFL.slipForces.params.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3641] /* vehicle.wheelFL.slipForces.params.kz PARAM */),(data->simulationInfo->realParameter[3641] /* vehicle.wheelFL.slipForces.params.kz PARAM */) - (data->simulationInfo->realParameter[3637] /* vehicle.wheelFL.slipForces.params.kRideFront PARAM */),"vehicle.wheelFL.slipForces.params.kz - vehicle.wheelFL.slipForces.params.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 14216
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipForces.sy = tan(1.5707963267948966 / vehicle.wheelFL.slipForces.params.qy)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14216};
  (data->simulationInfo->realParameter[3666] /* vehicle.wheelFL.slipForces.sy PARAM */) = tan(DIVISION_SIM(1.5707963267948966,(data->simulationInfo->realParameter[3654] /* vehicle.wheelFL.slipForces.params.qy PARAM */),"vehicle.wheelFL.slipForces.params.qy",equationIndexes));
  TRACE_POP
}

/*
equation index: 14217
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipForces.sx = tan(1.5707963267948966 / vehicle.wheelFL.slipForces.params.qx)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14217};
  (data->simulationInfo->realParameter[3665] /* vehicle.wheelFL.slipForces.sx PARAM */) = tan(DIVISION_SIM(1.5707963267948966,(data->simulationInfo->realParameter[3653] /* vehicle.wheelFL.slipForces.params.qx PARAM */),"vehicle.wheelFL.slipForces.params.qx",equationIndexes));
  TRACE_POP
}

/*
equation index: 14219
type: SIMPLE_ASSIGN
vehicle.wheelFR.contactPatch.rEff = vehicle.wheelFR.rEff
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14219};
  (data->simulationInfo->realParameter[3670] /* vehicle.wheelFR.contactPatch.rEff PARAM */) = (data->simulationInfo->realParameter[3673] /* vehicle.wheelFR.rEff PARAM */);
  TRACE_POP
}

/*
equation index: 14223
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.damper.d = vehicle.wheelFR.rim.dSpin
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14223};
  (data->simulationInfo->realParameter[3677] /* vehicle.wheelFR.rim.damper.d PARAM */) = (data->simulationInfo->realParameter[3676] /* vehicle.wheelFR.rim.dSpin PARAM */);
  TRACE_POP
}

/*
equation index: 14229
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14229};
  (data->simulationInfo->stringParameter[160] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 14230
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.J = vehicle.wheelFR.rim.J
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14230};
  (data->simulationInfo->realParameter[3690] /* vehicle.wheelFR.rim.rotor1D.J PARAM */) = (data->simulationInfo->realParameter[3674] /* vehicle.wheelFR.rim.J PARAM */);
  TRACE_POP
}

/*
equation index: 14231
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.J = vehicle.wheelFR.rim.rotor1D.J
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14231};
  (data->simulationInfo->realParameter[3702] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.J PARAM */) = (data->simulationInfo->realParameter[3690] /* vehicle.wheelFR.rim.rotor1D.J PARAM */);
  TRACE_POP
}

/*
equation index: 14233
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.nJ[3] = vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.J * vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14233};
  (data->simulationInfo->realParameter[3717] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.nJ[3] PARAM */) = ((data->simulationInfo->realParameter[3702] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.J PARAM */)) * ((data->simulationInfo->realParameter[3711] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */));
  TRACE_POP
}

/*
equation index: 14235
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.nJ[2] = vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.J * vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14235};
  (data->simulationInfo->realParameter[3716] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.nJ[2] PARAM */) = ((data->simulationInfo->realParameter[3702] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.J PARAM */)) * ((data->simulationInfo->realParameter[3710] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */));
  TRACE_POP
}

/*
equation index: 14237
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.nJ[1] = vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.J * vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14237};
  (data->simulationInfo->realParameter[3715] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.nJ[1] PARAM */) = ((data->simulationInfo->realParameter[3702] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.J PARAM */)) * ((data->simulationInfo->realParameter[3709] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */));
  TRACE_POP
}

/*
equation index: 14240
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.r_center[3] = vehicle.wheelFR.rim.rotor1D.r_center[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14240};
  (data->simulationInfo->realParameter[3720] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.r_center[3] PARAM */) = (data->simulationInfo->realParameter[3701] /* vehicle.wheelFR.rim.rotor1D.r_center[3] PARAM */);
  TRACE_POP
}

/*
equation index: 14241
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.r_center[2] = vehicle.wheelFR.rim.rotor1D.r_center[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14241};
  (data->simulationInfo->realParameter[3719] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.r_center[2] PARAM */) = (data->simulationInfo->realParameter[3700] /* vehicle.wheelFR.rim.rotor1D.r_center[2] PARAM */);
  TRACE_POP
}

/*
equation index: 14242
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.r_center[1] = vehicle.wheelFR.rim.rotor1D.r_center[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14242};
  (data->simulationInfo->realParameter[3718] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.r_center[1] PARAM */) = (data->simulationInfo->realParameter[3699] /* vehicle.wheelFR.rim.rotor1D.r_center[1] PARAM */);
  TRACE_POP
}

/*
equation index: 14260
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rEff = vehicle.wheelFR.rEff
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14260};
  (data->simulationInfo->realParameter[3689] /* vehicle.wheelFR.rim.rEff PARAM */) = (data->simulationInfo->realParameter[3673] /* vehicle.wheelFR.rEff PARAM */);
  TRACE_POP
}

/*
equation index: 14262
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipForces.params.mSprung = vehicle.wheelFR.slipForces.params.vehicleMass + (-2.0) * (vehicle.wheelFR.slipForces.params.mUnsprungFront + vehicle.wheelFR.slipForces.params.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14262};
  (data->simulationInfo->realParameter[3759] /* vehicle.wheelFR.slipForces.params.mSprung PARAM */) = (data->simulationInfo->realParameter[3778] /* vehicle.wheelFR.slipForces.params.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[3760] /* vehicle.wheelFR.slipForces.params.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[3761] /* vehicle.wheelFR.slipForces.params.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 14263
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipForces.params.F0Rear = 4.903325 * vehicle.wheelFR.slipForces.params.mSprung * vehicle.wheelFR.slipForces.params.a / vehicle.wheelFR.slipForces.params.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14263};
  (data->simulationInfo->realParameter[3731] /* vehicle.wheelFR.slipForces.params.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[3759] /* vehicle.wheelFR.slipForces.params.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3735] /* vehicle.wheelFR.slipForces.params.a PARAM */),(data->simulationInfo->realParameter[3779] /* vehicle.wheelFR.slipForces.params.wheelbase PARAM */),"vehicle.wheelFR.slipForces.params.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 14264
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipForces.params.kRideRear = 0.10197162129779283 * vehicle.wheelFR.slipForces.params.F0Rear * (6.283185307179586 * vehicle.wheelFR.slipForces.params.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14264};
  modelica_real tmp68;
  tmp68 = (6.283185307179586) * ((data->simulationInfo->realParameter[3747] /* vehicle.wheelFR.slipForces.params.fRideRear PARAM */));
  (data->simulationInfo->realParameter[3755] /* vehicle.wheelFR.slipForces.params.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[3731] /* vehicle.wheelFR.slipForces.params.F0Rear PARAM */)) * ((tmp68 * tmp68)));
  TRACE_POP
}

/*
equation index: 14265
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipForces.params.dWheelRear = 2.0 * vehicle.wheelFR.slipForces.params.zetaRear * sqrt(vehicle.wheelFR.slipForces.params.kRideRear * vehicle.wheelFR.slipForces.params.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14265};
  modelica_real tmp69;
  tmp69 = DIVISION_SIM(((data->simulationInfo->realParameter[3755] /* vehicle.wheelFR.slipForces.params.kRideRear PARAM */)) * ((data->simulationInfo->realParameter[3731] /* vehicle.wheelFR.slipForces.params.F0Rear PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp69 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.wheelFR.slipForces.params.kRideRear * vehicle.wheelFR.slipForces.params.F0Rear / 9.80665) was %g should be >= 0", tmp69);
    }
  }
  (data->simulationInfo->realParameter[3743] /* vehicle.wheelFR.slipForces.params.dWheelRear PARAM */) = (2.0) * (((data->simulationInfo->realParameter[3781] /* vehicle.wheelFR.slipForces.params.zetaRear PARAM */)) * (sqrt(tmp69)));
  TRACE_POP
}

/*
equation index: 14266
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipForces.params.F0Front = 4.903325 * vehicle.wheelFR.slipForces.params.mSprung * vehicle.wheelFR.slipForces.params.b / vehicle.wheelFR.slipForces.params.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14266};
  (data->simulationInfo->realParameter[3730] /* vehicle.wheelFR.slipForces.params.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[3759] /* vehicle.wheelFR.slipForces.params.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3739] /* vehicle.wheelFR.slipForces.params.b PARAM */),(data->simulationInfo->realParameter[3779] /* vehicle.wheelFR.slipForces.params.wheelbase PARAM */),"vehicle.wheelFR.slipForces.params.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 14267
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipForces.params.kRideFront = 0.10197162129779283 * vehicle.wheelFR.slipForces.params.F0Front * (6.283185307179586 * vehicle.wheelFR.slipForces.params.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14267};
  modelica_real tmp70;
  tmp70 = (6.283185307179586) * ((data->simulationInfo->realParameter[3746] /* vehicle.wheelFR.slipForces.params.fRideFront PARAM */));
  (data->simulationInfo->realParameter[3754] /* vehicle.wheelFR.slipForces.params.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[3730] /* vehicle.wheelFR.slipForces.params.F0Front PARAM */)) * ((tmp70 * tmp70)));
  TRACE_POP
}

/*
equation index: 14268
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipForces.params.dWheelFront = 2.0 * vehicle.wheelFR.slipForces.params.zetaFront * sqrt(vehicle.wheelFR.slipForces.params.kRideFront * vehicle.wheelFR.slipForces.params.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14268};
  modelica_real tmp71;
  tmp71 = DIVISION_SIM(((data->simulationInfo->realParameter[3754] /* vehicle.wheelFR.slipForces.params.kRideFront PARAM */)) * ((data->simulationInfo->realParameter[3730] /* vehicle.wheelFR.slipForces.params.F0Front PARAM */)),9.80665,"9.80665",equationIndexes);
  if(!(tmp71 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vehicle.wheelFR.slipForces.params.kRideFront * vehicle.wheelFR.slipForces.params.F0Front / 9.80665) was %g should be >= 0", tmp71);
    }
  }
  (data->simulationInfo->realParameter[3742] /* vehicle.wheelFR.slipForces.params.dWheelFront PARAM */) = (2.0) * (((data->simulationInfo->realParameter[3780] /* vehicle.wheelFR.slipForces.params.zetaFront PARAM */)) * (sqrt(tmp71)));
  TRACE_POP
}

/*
equation index: 14269
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipForces.params.hpPower = 745.7 * vehicle.wheelFR.slipForces.params.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14269};
  (data->simulationInfo->realParameter[3751] /* vehicle.wheelFR.slipForces.params.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[3750] /* vehicle.wheelFR.slipForces.params.hp PARAM */));
  TRACE_POP
}

/*
equation index: 14270
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipForces.params.track = vehicle.wheelFR.slipForces.params.tf + vehicle.wheelFR.slipForces.params.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14270};
  (data->simulationInfo->realParameter[3777] /* vehicle.wheelFR.slipForces.params.track PARAM */) = (data->simulationInfo->realParameter[3775] /* vehicle.wheelFR.slipForces.params.tf PARAM */) + (data->simulationInfo->realParameter[3776] /* vehicle.wheelFR.slipForces.params.tr PARAM */);
  TRACE_POP
}

/*
equation index: 14271
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipForces.params.kRear = vehicle.wheelFR.slipForces.params.kRideRear * vehicle.wheelFR.slipForces.params.kz / (vehicle.wheelFR.slipForces.params.kz - vehicle.wheelFR.slipForces.params.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14271};
  (data->simulationInfo->realParameter[3753] /* vehicle.wheelFR.slipForces.params.kRear PARAM */) = ((data->simulationInfo->realParameter[3755] /* vehicle.wheelFR.slipForces.params.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3758] /* vehicle.wheelFR.slipForces.params.kz PARAM */),(data->simulationInfo->realParameter[3758] /* vehicle.wheelFR.slipForces.params.kz PARAM */) - (data->simulationInfo->realParameter[3755] /* vehicle.wheelFR.slipForces.params.kRideRear PARAM */),"vehicle.wheelFR.slipForces.params.kz - vehicle.wheelFR.slipForces.params.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 14272
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipForces.params.kFront = vehicle.wheelFR.slipForces.params.kRideFront * vehicle.wheelFR.slipForces.params.kz / (vehicle.wheelFR.slipForces.params.kz - vehicle.wheelFR.slipForces.params.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14272};
  (data->simulationInfo->realParameter[3752] /* vehicle.wheelFR.slipForces.params.kFront PARAM */) = ((data->simulationInfo->realParameter[3754] /* vehicle.wheelFR.slipForces.params.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3758] /* vehicle.wheelFR.slipForces.params.kz PARAM */),(data->simulationInfo->realParameter[3758] /* vehicle.wheelFR.slipForces.params.kz PARAM */) - (data->simulationInfo->realParameter[3754] /* vehicle.wheelFR.slipForces.params.kRideFront PARAM */),"vehicle.wheelFR.slipForces.params.kz - vehicle.wheelFR.slipForces.params.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 14273
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipForces.sy = tan(1.5707963267948966 / vehicle.wheelFR.slipForces.params.qy)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14273};
  (data->simulationInfo->realParameter[3783] /* vehicle.wheelFR.slipForces.sy PARAM */) = tan(DIVISION_SIM(1.5707963267948966,(data->simulationInfo->realParameter[3771] /* vehicle.wheelFR.slipForces.params.qy PARAM */),"vehicle.wheelFR.slipForces.params.qy",equationIndexes));
  TRACE_POP
}

/*
equation index: 14274
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipForces.sx = tan(1.5707963267948966 / vehicle.wheelFR.slipForces.params.qx)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_14274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14274};
  (data->simulationInfo->realParameter[3782] /* vehicle.wheelFR.slipForces.sx PARAM */) = tan(DIVISION_SIM(1.5707963267948966,(data->simulationInfo->realParameter[3770] /* vehicle.wheelFR.slipForces.params.qx PARAM */),"vehicle.wheelFR.slipForces.params.qx",equationIndexes));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_6638(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6637(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6636(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6635(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6634(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6633(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6632(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6631(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6630(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6629(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6628(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6627(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6626(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6625(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6624(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6623(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6622(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6621(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6620(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6619(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6618(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6617(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6616(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6615(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6614(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6613(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6612(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6611(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6610(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6609(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6608(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6607(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6606(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6605(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6604(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6603(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6602(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6601(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6600(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6599(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6598(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6597(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6596(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6595(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6594(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6593(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6592(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6591(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6590(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6589(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6588(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6587(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6586(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6585(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6584(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6583(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6582(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6581(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6580(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6579(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6578(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6577(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6576(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6575(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6574(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6573(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6572(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6571(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6570(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6569(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6568(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6567(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6566(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6565(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6564(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6563(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6562(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6561(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6560(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6559(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6558(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6557(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6556(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6555(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6554(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6553(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6552(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6551(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6550(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6549(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6548(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6547(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6546(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6545(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6544(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6543(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6542(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6541(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6540(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6539(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6538(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6537(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6536(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6535(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6534(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6533(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6532(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6531(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6530(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6529(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6528(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6527(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6526(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6525(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6524(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6523(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6522(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6521(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6520(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6519(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6518(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6517(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6516(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6515(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6514(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6513(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6512(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6511(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6510(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6509(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6508(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6507(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6506(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6505(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6504(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6503(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6502(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6501(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6500(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6499(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6498(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6497(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6496(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6495(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6494(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6493(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6492(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6491(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6490(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6489(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6488(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6487(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6486(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6485(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6484(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6483(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6482(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6481(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6480(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6479(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6478(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6477(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6476(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6475(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6474(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6473(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6472(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6471(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6470(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6469(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6468(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6467(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6466(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6465(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6464(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6463(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6462(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6461(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6460(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6459(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6458(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6457(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6456(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6455(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6454(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6453(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6452(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6451(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6450(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6449(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6448(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6447(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6446(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6445(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6444(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6443(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6442(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6441(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6440(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6439(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6438(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6437(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6436(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6435(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6434(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6433(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6432(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6431(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6430(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6429(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6428(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6427(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6426(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6425(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6424(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6423(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6422(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6421(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6420(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6419(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6418(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6417(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6416(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6415(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6414(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6413(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6412(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6411(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6410(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6409(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6408(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6407(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6406(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6405(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6404(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6403(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6402(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6401(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6400(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6399(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6398(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6397(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6396(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6395(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6394(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6393(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6392(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6391(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6390(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6389(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6388(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6387(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6386(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6385(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6384(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6383(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6382(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6381(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6380(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6379(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6378(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6377(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6376(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6375(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6374(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6373(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6372(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6371(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6370(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6369(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6368(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6367(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6366(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6365(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6364(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6363(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6362(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6361(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6360(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6359(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6358(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6357(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6356(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6355(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6354(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6353(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6352(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6351(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6350(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6349(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6348(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6347(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6346(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6345(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6344(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6343(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6342(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6341(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6340(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6339(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6338(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6337(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6336(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6335(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6334(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6333(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6332(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6331(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6330(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6329(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6328(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6327(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6326(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6325(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6324(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6323(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6322(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6321(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6320(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6319(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6318(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6317(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6316(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6315(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6314(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6313(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6312(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6311(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6310(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6309(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6308(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6307(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6306(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6305(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6304(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6303(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6302(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6301(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6300(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6299(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6298(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6297(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6296(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6295(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6294(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6293(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6292(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6291(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6290(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6289(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6288(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6287(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6286(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6285(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6284(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6283(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6282(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6281(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6280(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6279(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6278(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6277(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6276(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6275(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6274(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6273(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6272(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void AlyssaVehicle_updateBoundParameters_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  AlyssaVehicle_eqFunction_14023(data, threadData);
  AlyssaVehicle_eqFunction_14024(data, threadData);
  AlyssaVehicle_eqFunction_14025(data, threadData);
  AlyssaVehicle_eqFunction_14026(data, threadData);
  AlyssaVehicle_eqFunction_14027(data, threadData);
  AlyssaVehicle_eqFunction_14028(data, threadData);
  AlyssaVehicle_eqFunction_14029(data, threadData);
  AlyssaVehicle_eqFunction_14030(data, threadData);
  AlyssaVehicle_eqFunction_14031(data, threadData);
  AlyssaVehicle_eqFunction_14032(data, threadData);
  AlyssaVehicle_eqFunction_14045(data, threadData);
  AlyssaVehicle_eqFunction_14047(data, threadData);
  AlyssaVehicle_eqFunction_14048(data, threadData);
  AlyssaVehicle_eqFunction_14052(data, threadData);
  AlyssaVehicle_eqFunction_14058(data, threadData);
  AlyssaVehicle_eqFunction_14059(data, threadData);
  AlyssaVehicle_eqFunction_14060(data, threadData);
  AlyssaVehicle_eqFunction_14062(data, threadData);
  AlyssaVehicle_eqFunction_14064(data, threadData);
  AlyssaVehicle_eqFunction_14066(data, threadData);
  AlyssaVehicle_eqFunction_14069(data, threadData);
  AlyssaVehicle_eqFunction_14070(data, threadData);
  AlyssaVehicle_eqFunction_14071(data, threadData);
  AlyssaVehicle_eqFunction_14089(data, threadData);
  AlyssaVehicle_eqFunction_14091(data, threadData);
  AlyssaVehicle_eqFunction_14092(data, threadData);
  AlyssaVehicle_eqFunction_14093(data, threadData);
  AlyssaVehicle_eqFunction_14094(data, threadData);
  AlyssaVehicle_eqFunction_14095(data, threadData);
  AlyssaVehicle_eqFunction_14096(data, threadData);
  AlyssaVehicle_eqFunction_14097(data, threadData);
  AlyssaVehicle_eqFunction_14098(data, threadData);
  AlyssaVehicle_eqFunction_14099(data, threadData);
  AlyssaVehicle_eqFunction_14100(data, threadData);
  AlyssaVehicle_eqFunction_14101(data, threadData);
  AlyssaVehicle_eqFunction_14102(data, threadData);
  AlyssaVehicle_eqFunction_14103(data, threadData);
  AlyssaVehicle_eqFunction_14105(data, threadData);
  AlyssaVehicle_eqFunction_14109(data, threadData);
  AlyssaVehicle_eqFunction_14115(data, threadData);
  AlyssaVehicle_eqFunction_14116(data, threadData);
  AlyssaVehicle_eqFunction_14117(data, threadData);
  AlyssaVehicle_eqFunction_14119(data, threadData);
  AlyssaVehicle_eqFunction_14121(data, threadData);
  AlyssaVehicle_eqFunction_14123(data, threadData);
  AlyssaVehicle_eqFunction_14126(data, threadData);
  AlyssaVehicle_eqFunction_14127(data, threadData);
  AlyssaVehicle_eqFunction_14128(data, threadData);
  AlyssaVehicle_eqFunction_14146(data, threadData);
  AlyssaVehicle_eqFunction_14148(data, threadData);
  AlyssaVehicle_eqFunction_14149(data, threadData);
  AlyssaVehicle_eqFunction_14150(data, threadData);
  AlyssaVehicle_eqFunction_14151(data, threadData);
  AlyssaVehicle_eqFunction_14152(data, threadData);
  AlyssaVehicle_eqFunction_14153(data, threadData);
  AlyssaVehicle_eqFunction_14154(data, threadData);
  AlyssaVehicle_eqFunction_14155(data, threadData);
  AlyssaVehicle_eqFunction_14156(data, threadData);
  AlyssaVehicle_eqFunction_14157(data, threadData);
  AlyssaVehicle_eqFunction_14158(data, threadData);
  AlyssaVehicle_eqFunction_14159(data, threadData);
  AlyssaVehicle_eqFunction_14160(data, threadData);
  AlyssaVehicle_eqFunction_14162(data, threadData);
  AlyssaVehicle_eqFunction_14166(data, threadData);
  AlyssaVehicle_eqFunction_14172(data, threadData);
  AlyssaVehicle_eqFunction_14173(data, threadData);
  AlyssaVehicle_eqFunction_14174(data, threadData);
  AlyssaVehicle_eqFunction_14176(data, threadData);
  AlyssaVehicle_eqFunction_14178(data, threadData);
  AlyssaVehicle_eqFunction_14180(data, threadData);
  AlyssaVehicle_eqFunction_14183(data, threadData);
  AlyssaVehicle_eqFunction_14184(data, threadData);
  AlyssaVehicle_eqFunction_14185(data, threadData);
  AlyssaVehicle_eqFunction_14203(data, threadData);
  AlyssaVehicle_eqFunction_14205(data, threadData);
  AlyssaVehicle_eqFunction_14206(data, threadData);
  AlyssaVehicle_eqFunction_14207(data, threadData);
  AlyssaVehicle_eqFunction_14208(data, threadData);
  AlyssaVehicle_eqFunction_14209(data, threadData);
  AlyssaVehicle_eqFunction_14210(data, threadData);
  AlyssaVehicle_eqFunction_14211(data, threadData);
  AlyssaVehicle_eqFunction_14212(data, threadData);
  AlyssaVehicle_eqFunction_14213(data, threadData);
  AlyssaVehicle_eqFunction_14214(data, threadData);
  AlyssaVehicle_eqFunction_14215(data, threadData);
  AlyssaVehicle_eqFunction_14216(data, threadData);
  AlyssaVehicle_eqFunction_14217(data, threadData);
  AlyssaVehicle_eqFunction_14219(data, threadData);
  AlyssaVehicle_eqFunction_14223(data, threadData);
  AlyssaVehicle_eqFunction_14229(data, threadData);
  AlyssaVehicle_eqFunction_14230(data, threadData);
  AlyssaVehicle_eqFunction_14231(data, threadData);
  AlyssaVehicle_eqFunction_14233(data, threadData);
  AlyssaVehicle_eqFunction_14235(data, threadData);
  AlyssaVehicle_eqFunction_14237(data, threadData);
  AlyssaVehicle_eqFunction_14240(data, threadData);
  AlyssaVehicle_eqFunction_14241(data, threadData);
  AlyssaVehicle_eqFunction_14242(data, threadData);
  AlyssaVehicle_eqFunction_14260(data, threadData);
  AlyssaVehicle_eqFunction_14262(data, threadData);
  AlyssaVehicle_eqFunction_14263(data, threadData);
  AlyssaVehicle_eqFunction_14264(data, threadData);
  AlyssaVehicle_eqFunction_14265(data, threadData);
  AlyssaVehicle_eqFunction_14266(data, threadData);
  AlyssaVehicle_eqFunction_14267(data, threadData);
  AlyssaVehicle_eqFunction_14268(data, threadData);
  AlyssaVehicle_eqFunction_14269(data, threadData);
  AlyssaVehicle_eqFunction_14270(data, threadData);
  AlyssaVehicle_eqFunction_14271(data, threadData);
  AlyssaVehicle_eqFunction_14272(data, threadData);
  AlyssaVehicle_eqFunction_14273(data, threadData);
  AlyssaVehicle_eqFunction_14274(data, threadData);
  AlyssaVehicle_eqFunction_6638(data, threadData);
  AlyssaVehicle_eqFunction_6637(data, threadData);
  AlyssaVehicle_eqFunction_6636(data, threadData);
  AlyssaVehicle_eqFunction_6635(data, threadData);
  AlyssaVehicle_eqFunction_6634(data, threadData);
  AlyssaVehicle_eqFunction_6633(data, threadData);
  AlyssaVehicle_eqFunction_6632(data, threadData);
  AlyssaVehicle_eqFunction_6631(data, threadData);
  AlyssaVehicle_eqFunction_6630(data, threadData);
  AlyssaVehicle_eqFunction_6629(data, threadData);
  AlyssaVehicle_eqFunction_6628(data, threadData);
  AlyssaVehicle_eqFunction_6627(data, threadData);
  AlyssaVehicle_eqFunction_6626(data, threadData);
  AlyssaVehicle_eqFunction_6625(data, threadData);
  AlyssaVehicle_eqFunction_6624(data, threadData);
  AlyssaVehicle_eqFunction_6623(data, threadData);
  AlyssaVehicle_eqFunction_6622(data, threadData);
  AlyssaVehicle_eqFunction_6621(data, threadData);
  AlyssaVehicle_eqFunction_6620(data, threadData);
  AlyssaVehicle_eqFunction_6619(data, threadData);
  AlyssaVehicle_eqFunction_6618(data, threadData);
  AlyssaVehicle_eqFunction_6617(data, threadData);
  AlyssaVehicle_eqFunction_6616(data, threadData);
  AlyssaVehicle_eqFunction_6615(data, threadData);
  AlyssaVehicle_eqFunction_6614(data, threadData);
  AlyssaVehicle_eqFunction_6613(data, threadData);
  AlyssaVehicle_eqFunction_6612(data, threadData);
  AlyssaVehicle_eqFunction_6611(data, threadData);
  AlyssaVehicle_eqFunction_6610(data, threadData);
  AlyssaVehicle_eqFunction_6609(data, threadData);
  AlyssaVehicle_eqFunction_6608(data, threadData);
  AlyssaVehicle_eqFunction_6607(data, threadData);
  AlyssaVehicle_eqFunction_6606(data, threadData);
  AlyssaVehicle_eqFunction_6605(data, threadData);
  AlyssaVehicle_eqFunction_6604(data, threadData);
  AlyssaVehicle_eqFunction_6603(data, threadData);
  AlyssaVehicle_eqFunction_6602(data, threadData);
  AlyssaVehicle_eqFunction_6601(data, threadData);
  AlyssaVehicle_eqFunction_6600(data, threadData);
  AlyssaVehicle_eqFunction_6599(data, threadData);
  AlyssaVehicle_eqFunction_6598(data, threadData);
  AlyssaVehicle_eqFunction_6597(data, threadData);
  AlyssaVehicle_eqFunction_6596(data, threadData);
  AlyssaVehicle_eqFunction_6595(data, threadData);
  AlyssaVehicle_eqFunction_6594(data, threadData);
  AlyssaVehicle_eqFunction_6593(data, threadData);
  AlyssaVehicle_eqFunction_6592(data, threadData);
  AlyssaVehicle_eqFunction_6591(data, threadData);
  AlyssaVehicle_eqFunction_6590(data, threadData);
  AlyssaVehicle_eqFunction_6589(data, threadData);
  AlyssaVehicle_eqFunction_6588(data, threadData);
  AlyssaVehicle_eqFunction_6587(data, threadData);
  AlyssaVehicle_eqFunction_6586(data, threadData);
  AlyssaVehicle_eqFunction_6585(data, threadData);
  AlyssaVehicle_eqFunction_6584(data, threadData);
  AlyssaVehicle_eqFunction_6583(data, threadData);
  AlyssaVehicle_eqFunction_6582(data, threadData);
  AlyssaVehicle_eqFunction_6581(data, threadData);
  AlyssaVehicle_eqFunction_6580(data, threadData);
  AlyssaVehicle_eqFunction_6579(data, threadData);
  AlyssaVehicle_eqFunction_6578(data, threadData);
  AlyssaVehicle_eqFunction_6577(data, threadData);
  AlyssaVehicle_eqFunction_6576(data, threadData);
  AlyssaVehicle_eqFunction_6575(data, threadData);
  AlyssaVehicle_eqFunction_6574(data, threadData);
  AlyssaVehicle_eqFunction_6573(data, threadData);
  AlyssaVehicle_eqFunction_6572(data, threadData);
  AlyssaVehicle_eqFunction_6571(data, threadData);
  AlyssaVehicle_eqFunction_6570(data, threadData);
  AlyssaVehicle_eqFunction_6569(data, threadData);
  AlyssaVehicle_eqFunction_6568(data, threadData);
  AlyssaVehicle_eqFunction_6567(data, threadData);
  AlyssaVehicle_eqFunction_6566(data, threadData);
  AlyssaVehicle_eqFunction_6565(data, threadData);
  AlyssaVehicle_eqFunction_6564(data, threadData);
  AlyssaVehicle_eqFunction_6563(data, threadData);
  AlyssaVehicle_eqFunction_6562(data, threadData);
  AlyssaVehicle_eqFunction_6561(data, threadData);
  AlyssaVehicle_eqFunction_6560(data, threadData);
  AlyssaVehicle_eqFunction_6559(data, threadData);
  AlyssaVehicle_eqFunction_6558(data, threadData);
  AlyssaVehicle_eqFunction_6557(data, threadData);
  AlyssaVehicle_eqFunction_6556(data, threadData);
  AlyssaVehicle_eqFunction_6555(data, threadData);
  AlyssaVehicle_eqFunction_6554(data, threadData);
  AlyssaVehicle_eqFunction_6553(data, threadData);
  AlyssaVehicle_eqFunction_6552(data, threadData);
  AlyssaVehicle_eqFunction_6551(data, threadData);
  AlyssaVehicle_eqFunction_6550(data, threadData);
  AlyssaVehicle_eqFunction_6549(data, threadData);
  AlyssaVehicle_eqFunction_6548(data, threadData);
  AlyssaVehicle_eqFunction_6547(data, threadData);
  AlyssaVehicle_eqFunction_6546(data, threadData);
  AlyssaVehicle_eqFunction_6545(data, threadData);
  AlyssaVehicle_eqFunction_6544(data, threadData);
  AlyssaVehicle_eqFunction_6543(data, threadData);
  AlyssaVehicle_eqFunction_6542(data, threadData);
  AlyssaVehicle_eqFunction_6541(data, threadData);
  AlyssaVehicle_eqFunction_6540(data, threadData);
  AlyssaVehicle_eqFunction_6539(data, threadData);
  AlyssaVehicle_eqFunction_6538(data, threadData);
  AlyssaVehicle_eqFunction_6537(data, threadData);
  AlyssaVehicle_eqFunction_6536(data, threadData);
  AlyssaVehicle_eqFunction_6535(data, threadData);
  AlyssaVehicle_eqFunction_6534(data, threadData);
  AlyssaVehicle_eqFunction_6533(data, threadData);
  AlyssaVehicle_eqFunction_6532(data, threadData);
  AlyssaVehicle_eqFunction_6531(data, threadData);
  AlyssaVehicle_eqFunction_6530(data, threadData);
  AlyssaVehicle_eqFunction_6529(data, threadData);
  AlyssaVehicle_eqFunction_6528(data, threadData);
  AlyssaVehicle_eqFunction_6527(data, threadData);
  AlyssaVehicle_eqFunction_6526(data, threadData);
  AlyssaVehicle_eqFunction_6525(data, threadData);
  AlyssaVehicle_eqFunction_6524(data, threadData);
  AlyssaVehicle_eqFunction_6523(data, threadData);
  AlyssaVehicle_eqFunction_6522(data, threadData);
  AlyssaVehicle_eqFunction_6521(data, threadData);
  AlyssaVehicle_eqFunction_6520(data, threadData);
  AlyssaVehicle_eqFunction_6519(data, threadData);
  AlyssaVehicle_eqFunction_6518(data, threadData);
  AlyssaVehicle_eqFunction_6517(data, threadData);
  AlyssaVehicle_eqFunction_6516(data, threadData);
  AlyssaVehicle_eqFunction_6515(data, threadData);
  AlyssaVehicle_eqFunction_6514(data, threadData);
  AlyssaVehicle_eqFunction_6513(data, threadData);
  AlyssaVehicle_eqFunction_6512(data, threadData);
  AlyssaVehicle_eqFunction_6511(data, threadData);
  AlyssaVehicle_eqFunction_6510(data, threadData);
  AlyssaVehicle_eqFunction_6509(data, threadData);
  AlyssaVehicle_eqFunction_6508(data, threadData);
  AlyssaVehicle_eqFunction_6507(data, threadData);
  AlyssaVehicle_eqFunction_6506(data, threadData);
  AlyssaVehicle_eqFunction_6505(data, threadData);
  AlyssaVehicle_eqFunction_6504(data, threadData);
  AlyssaVehicle_eqFunction_6503(data, threadData);
  AlyssaVehicle_eqFunction_6502(data, threadData);
  AlyssaVehicle_eqFunction_6501(data, threadData);
  AlyssaVehicle_eqFunction_6500(data, threadData);
  AlyssaVehicle_eqFunction_6499(data, threadData);
  AlyssaVehicle_eqFunction_6498(data, threadData);
  AlyssaVehicle_eqFunction_6497(data, threadData);
  AlyssaVehicle_eqFunction_6496(data, threadData);
  AlyssaVehicle_eqFunction_6495(data, threadData);
  AlyssaVehicle_eqFunction_6494(data, threadData);
  AlyssaVehicle_eqFunction_6493(data, threadData);
  AlyssaVehicle_eqFunction_6492(data, threadData);
  AlyssaVehicle_eqFunction_6491(data, threadData);
  AlyssaVehicle_eqFunction_6490(data, threadData);
  AlyssaVehicle_eqFunction_6489(data, threadData);
  AlyssaVehicle_eqFunction_6488(data, threadData);
  AlyssaVehicle_eqFunction_6487(data, threadData);
  AlyssaVehicle_eqFunction_6486(data, threadData);
  AlyssaVehicle_eqFunction_6485(data, threadData);
  AlyssaVehicle_eqFunction_6484(data, threadData);
  AlyssaVehicle_eqFunction_6483(data, threadData);
  AlyssaVehicle_eqFunction_6482(data, threadData);
  AlyssaVehicle_eqFunction_6481(data, threadData);
  AlyssaVehicle_eqFunction_6480(data, threadData);
  AlyssaVehicle_eqFunction_6479(data, threadData);
  AlyssaVehicle_eqFunction_6478(data, threadData);
  AlyssaVehicle_eqFunction_6477(data, threadData);
  AlyssaVehicle_eqFunction_6476(data, threadData);
  AlyssaVehicle_eqFunction_6475(data, threadData);
  AlyssaVehicle_eqFunction_6474(data, threadData);
  AlyssaVehicle_eqFunction_6473(data, threadData);
  AlyssaVehicle_eqFunction_6472(data, threadData);
  AlyssaVehicle_eqFunction_6471(data, threadData);
  AlyssaVehicle_eqFunction_6470(data, threadData);
  AlyssaVehicle_eqFunction_6469(data, threadData);
  AlyssaVehicle_eqFunction_6468(data, threadData);
  AlyssaVehicle_eqFunction_6467(data, threadData);
  AlyssaVehicle_eqFunction_6466(data, threadData);
  AlyssaVehicle_eqFunction_6465(data, threadData);
  AlyssaVehicle_eqFunction_6464(data, threadData);
  AlyssaVehicle_eqFunction_6463(data, threadData);
  AlyssaVehicle_eqFunction_6462(data, threadData);
  AlyssaVehicle_eqFunction_6461(data, threadData);
  AlyssaVehicle_eqFunction_6460(data, threadData);
  AlyssaVehicle_eqFunction_6459(data, threadData);
  AlyssaVehicle_eqFunction_6458(data, threadData);
  AlyssaVehicle_eqFunction_6457(data, threadData);
  AlyssaVehicle_eqFunction_6456(data, threadData);
  AlyssaVehicle_eqFunction_6455(data, threadData);
  AlyssaVehicle_eqFunction_6454(data, threadData);
  AlyssaVehicle_eqFunction_6453(data, threadData);
  AlyssaVehicle_eqFunction_6452(data, threadData);
  AlyssaVehicle_eqFunction_6451(data, threadData);
  AlyssaVehicle_eqFunction_6450(data, threadData);
  AlyssaVehicle_eqFunction_6449(data, threadData);
  AlyssaVehicle_eqFunction_6448(data, threadData);
  AlyssaVehicle_eqFunction_6447(data, threadData);
  AlyssaVehicle_eqFunction_6446(data, threadData);
  AlyssaVehicle_eqFunction_6445(data, threadData);
  AlyssaVehicle_eqFunction_6444(data, threadData);
  AlyssaVehicle_eqFunction_6443(data, threadData);
  AlyssaVehicle_eqFunction_6442(data, threadData);
  AlyssaVehicle_eqFunction_6441(data, threadData);
  AlyssaVehicle_eqFunction_6440(data, threadData);
  AlyssaVehicle_eqFunction_6439(data, threadData);
  AlyssaVehicle_eqFunction_6438(data, threadData);
  AlyssaVehicle_eqFunction_6437(data, threadData);
  AlyssaVehicle_eqFunction_6436(data, threadData);
  AlyssaVehicle_eqFunction_6435(data, threadData);
  AlyssaVehicle_eqFunction_6434(data, threadData);
  AlyssaVehicle_eqFunction_6433(data, threadData);
  AlyssaVehicle_eqFunction_6432(data, threadData);
  AlyssaVehicle_eqFunction_6431(data, threadData);
  AlyssaVehicle_eqFunction_6430(data, threadData);
  AlyssaVehicle_eqFunction_6429(data, threadData);
  AlyssaVehicle_eqFunction_6428(data, threadData);
  AlyssaVehicle_eqFunction_6427(data, threadData);
  AlyssaVehicle_eqFunction_6426(data, threadData);
  AlyssaVehicle_eqFunction_6425(data, threadData);
  AlyssaVehicle_eqFunction_6424(data, threadData);
  AlyssaVehicle_eqFunction_6423(data, threadData);
  AlyssaVehicle_eqFunction_6422(data, threadData);
  AlyssaVehicle_eqFunction_6421(data, threadData);
  AlyssaVehicle_eqFunction_6420(data, threadData);
  AlyssaVehicle_eqFunction_6419(data, threadData);
  AlyssaVehicle_eqFunction_6418(data, threadData);
  AlyssaVehicle_eqFunction_6417(data, threadData);
  AlyssaVehicle_eqFunction_6416(data, threadData);
  AlyssaVehicle_eqFunction_6415(data, threadData);
  AlyssaVehicle_eqFunction_6414(data, threadData);
  AlyssaVehicle_eqFunction_6413(data, threadData);
  AlyssaVehicle_eqFunction_6412(data, threadData);
  AlyssaVehicle_eqFunction_6411(data, threadData);
  AlyssaVehicle_eqFunction_6410(data, threadData);
  AlyssaVehicle_eqFunction_6409(data, threadData);
  AlyssaVehicle_eqFunction_6408(data, threadData);
  AlyssaVehicle_eqFunction_6407(data, threadData);
  AlyssaVehicle_eqFunction_6406(data, threadData);
  AlyssaVehicle_eqFunction_6405(data, threadData);
  AlyssaVehicle_eqFunction_6404(data, threadData);
  AlyssaVehicle_eqFunction_6403(data, threadData);
  AlyssaVehicle_eqFunction_6402(data, threadData);
  AlyssaVehicle_eqFunction_6401(data, threadData);
  AlyssaVehicle_eqFunction_6400(data, threadData);
  AlyssaVehicle_eqFunction_6399(data, threadData);
  AlyssaVehicle_eqFunction_6398(data, threadData);
  AlyssaVehicle_eqFunction_6397(data, threadData);
  AlyssaVehicle_eqFunction_6396(data, threadData);
  AlyssaVehicle_eqFunction_6395(data, threadData);
  AlyssaVehicle_eqFunction_6394(data, threadData);
  AlyssaVehicle_eqFunction_6393(data, threadData);
  AlyssaVehicle_eqFunction_6392(data, threadData);
  AlyssaVehicle_eqFunction_6391(data, threadData);
  AlyssaVehicle_eqFunction_6390(data, threadData);
  AlyssaVehicle_eqFunction_6389(data, threadData);
  AlyssaVehicle_eqFunction_6388(data, threadData);
  AlyssaVehicle_eqFunction_6387(data, threadData);
  AlyssaVehicle_eqFunction_6386(data, threadData);
  AlyssaVehicle_eqFunction_6385(data, threadData);
  AlyssaVehicle_eqFunction_6384(data, threadData);
  AlyssaVehicle_eqFunction_6383(data, threadData);
  AlyssaVehicle_eqFunction_6382(data, threadData);
  AlyssaVehicle_eqFunction_6381(data, threadData);
  AlyssaVehicle_eqFunction_6380(data, threadData);
  AlyssaVehicle_eqFunction_6379(data, threadData);
  AlyssaVehicle_eqFunction_6378(data, threadData);
  AlyssaVehicle_eqFunction_6377(data, threadData);
  AlyssaVehicle_eqFunction_6376(data, threadData);
  AlyssaVehicle_eqFunction_6375(data, threadData);
  AlyssaVehicle_eqFunction_6374(data, threadData);
  AlyssaVehicle_eqFunction_6373(data, threadData);
  AlyssaVehicle_eqFunction_6372(data, threadData);
  AlyssaVehicle_eqFunction_6371(data, threadData);
  AlyssaVehicle_eqFunction_6370(data, threadData);
  AlyssaVehicle_eqFunction_6369(data, threadData);
  AlyssaVehicle_eqFunction_6368(data, threadData);
  AlyssaVehicle_eqFunction_6367(data, threadData);
  AlyssaVehicle_eqFunction_6366(data, threadData);
  AlyssaVehicle_eqFunction_6365(data, threadData);
  AlyssaVehicle_eqFunction_6364(data, threadData);
  AlyssaVehicle_eqFunction_6363(data, threadData);
  AlyssaVehicle_eqFunction_6362(data, threadData);
  AlyssaVehicle_eqFunction_6361(data, threadData);
  AlyssaVehicle_eqFunction_6360(data, threadData);
  AlyssaVehicle_eqFunction_6359(data, threadData);
  AlyssaVehicle_eqFunction_6358(data, threadData);
  AlyssaVehicle_eqFunction_6357(data, threadData);
  AlyssaVehicle_eqFunction_6356(data, threadData);
  AlyssaVehicle_eqFunction_6355(data, threadData);
  AlyssaVehicle_eqFunction_6354(data, threadData);
  AlyssaVehicle_eqFunction_6353(data, threadData);
  AlyssaVehicle_eqFunction_6352(data, threadData);
  AlyssaVehicle_eqFunction_6351(data, threadData);
  AlyssaVehicle_eqFunction_6350(data, threadData);
  AlyssaVehicle_eqFunction_6349(data, threadData);
  AlyssaVehicle_eqFunction_6348(data, threadData);
  AlyssaVehicle_eqFunction_6347(data, threadData);
  AlyssaVehicle_eqFunction_6346(data, threadData);
  AlyssaVehicle_eqFunction_6345(data, threadData);
  AlyssaVehicle_eqFunction_6344(data, threadData);
  AlyssaVehicle_eqFunction_6343(data, threadData);
  AlyssaVehicle_eqFunction_6342(data, threadData);
  AlyssaVehicle_eqFunction_6341(data, threadData);
  AlyssaVehicle_eqFunction_6340(data, threadData);
  AlyssaVehicle_eqFunction_6339(data, threadData);
  AlyssaVehicle_eqFunction_6338(data, threadData);
  AlyssaVehicle_eqFunction_6337(data, threadData);
  AlyssaVehicle_eqFunction_6336(data, threadData);
  AlyssaVehicle_eqFunction_6335(data, threadData);
  AlyssaVehicle_eqFunction_6334(data, threadData);
  AlyssaVehicle_eqFunction_6333(data, threadData);
  AlyssaVehicle_eqFunction_6332(data, threadData);
  AlyssaVehicle_eqFunction_6331(data, threadData);
  AlyssaVehicle_eqFunction_6330(data, threadData);
  AlyssaVehicle_eqFunction_6329(data, threadData);
  AlyssaVehicle_eqFunction_6328(data, threadData);
  AlyssaVehicle_eqFunction_6327(data, threadData);
  AlyssaVehicle_eqFunction_6326(data, threadData);
  AlyssaVehicle_eqFunction_6325(data, threadData);
  AlyssaVehicle_eqFunction_6324(data, threadData);
  AlyssaVehicle_eqFunction_6323(data, threadData);
  AlyssaVehicle_eqFunction_6322(data, threadData);
  AlyssaVehicle_eqFunction_6321(data, threadData);
  AlyssaVehicle_eqFunction_6320(data, threadData);
  AlyssaVehicle_eqFunction_6319(data, threadData);
  AlyssaVehicle_eqFunction_6318(data, threadData);
  AlyssaVehicle_eqFunction_6317(data, threadData);
  AlyssaVehicle_eqFunction_6316(data, threadData);
  AlyssaVehicle_eqFunction_6315(data, threadData);
  AlyssaVehicle_eqFunction_6314(data, threadData);
  AlyssaVehicle_eqFunction_6313(data, threadData);
  AlyssaVehicle_eqFunction_6312(data, threadData);
  AlyssaVehicle_eqFunction_6311(data, threadData);
  AlyssaVehicle_eqFunction_6310(data, threadData);
  AlyssaVehicle_eqFunction_6309(data, threadData);
  AlyssaVehicle_eqFunction_6308(data, threadData);
  AlyssaVehicle_eqFunction_6307(data, threadData);
  AlyssaVehicle_eqFunction_6306(data, threadData);
  AlyssaVehicle_eqFunction_6305(data, threadData);
  AlyssaVehicle_eqFunction_6304(data, threadData);
  AlyssaVehicle_eqFunction_6303(data, threadData);
  AlyssaVehicle_eqFunction_6302(data, threadData);
  AlyssaVehicle_eqFunction_6301(data, threadData);
  AlyssaVehicle_eqFunction_6300(data, threadData);
  AlyssaVehicle_eqFunction_6299(data, threadData);
  AlyssaVehicle_eqFunction_6298(data, threadData);
  AlyssaVehicle_eqFunction_6297(data, threadData);
  AlyssaVehicle_eqFunction_6296(data, threadData);
  AlyssaVehicle_eqFunction_6295(data, threadData);
  AlyssaVehicle_eqFunction_6294(data, threadData);
  AlyssaVehicle_eqFunction_6293(data, threadData);
  AlyssaVehicle_eqFunction_6292(data, threadData);
  AlyssaVehicle_eqFunction_6291(data, threadData);
  AlyssaVehicle_eqFunction_6290(data, threadData);
  AlyssaVehicle_eqFunction_6289(data, threadData);
  AlyssaVehicle_eqFunction_6288(data, threadData);
  AlyssaVehicle_eqFunction_6287(data, threadData);
  AlyssaVehicle_eqFunction_6286(data, threadData);
  AlyssaVehicle_eqFunction_6285(data, threadData);
  AlyssaVehicle_eqFunction_6284(data, threadData);
  AlyssaVehicle_eqFunction_6283(data, threadData);
  AlyssaVehicle_eqFunction_6282(data, threadData);
  AlyssaVehicle_eqFunction_6281(data, threadData);
  AlyssaVehicle_eqFunction_6280(data, threadData);
  AlyssaVehicle_eqFunction_6279(data, threadData);
  AlyssaVehicle_eqFunction_6278(data, threadData);
  AlyssaVehicle_eqFunction_6277(data, threadData);
  AlyssaVehicle_eqFunction_6276(data, threadData);
  AlyssaVehicle_eqFunction_6275(data, threadData);
  AlyssaVehicle_eqFunction_6274(data, threadData);
  AlyssaVehicle_eqFunction_6273(data, threadData);
  AlyssaVehicle_eqFunction_6272(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif
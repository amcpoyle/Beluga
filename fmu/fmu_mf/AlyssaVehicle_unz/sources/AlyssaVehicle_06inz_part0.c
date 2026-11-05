#include "AlyssaVehicle_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 1
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.bearing.tau = 0.0
*/
void AlyssaVehicle_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* vehicle.frontSuspension.cornerR.tieRod.bearing.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.fixed.flange.tau = 0.0
*/
void AlyssaVehicle_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* vehicle.frontSuspension.cornerR.ucaPivot.fixed.flange.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.bearing.tau = 0.0
*/
void AlyssaVehicle_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2261]] /* vehicle.frontSuspension.cornerR.jointUSR.bearing.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.bearing.tau = 0.0
*/
void AlyssaVehicle_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* vehicle.frontSuspension.cornerL.tieRod.bearing.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.fixed.flange.tau = 0.0
*/
void AlyssaVehicle_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2056]] /* vehicle.frontSuspension.cornerL.ucaPivot.fixed.flange.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.bearing.tau = 0.0
*/
void AlyssaVehicle_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1407]] /* vehicle.frontSuspension.cornerL.jointUSR.bearing.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.bearing.tau = 0.0
*/
void AlyssaVehicle_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4524]] /* vehicle.rearSuspension.cornerR.tieRod.bearing.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.fixed.flange.tau = 0.0
*/
void AlyssaVehicle_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4785]] /* vehicle.rearSuspension.cornerR.ucaPivot.fixed.flange.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.bearing.tau = 0.0
*/
void AlyssaVehicle_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4139]] /* vehicle.rearSuspension.cornerR.jointUSR.bearing.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.bearing.tau = 0.0
*/
void AlyssaVehicle_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3664]] /* vehicle.rearSuspension.cornerL.tieRod.bearing.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.fixed.flange.tau = 0.0
*/
void AlyssaVehicle_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3925]] /* vehicle.rearSuspension.cornerL.ucaPivot.fixed.flange.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.bearing.tau = 0.0
*/
void AlyssaVehicle_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3279]] /* vehicle.rearSuspension.cornerL.jointUSR.bearing.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
rig.motion.longitudinal.fixed.flange.f = 0.0
*/
void AlyssaVehicle_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1181]] /* rig.motion.longitudinal.fixed.flange.f variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
rig.motion.lateral.fixed.flange.f = 0.0
*/
void AlyssaVehicle_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1159]] /* rig.motion.lateral.fixed.flange.f variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
rig.motion.heave.fixed.flange.f = 0.0
*/
void AlyssaVehicle_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1137]] /* rig.motion.heave.fixed.flange.f variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
rig.motion.yaw.fixed.flange.tau = 0.0
*/
void AlyssaVehicle_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1283]] /* rig.motion.yaw.fixed.flange.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
rig.motion.pitch.fixed.flange.tau = 0.0
*/
void AlyssaVehicle_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1206]] /* rig.motion.pitch.fixed.flange.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
rig.motion.roll.fixed.flange.tau = 0.0
*/
void AlyssaVehicle_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1249]] /* rig.motion.roll.fixed.flange.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipForces.mz = 0.0
*/
void AlyssaVehicle_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5276]] /* vehicle.wheelFR.slipForces.mz variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[1] = vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.r_center[1] - vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] * 0.5 * vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinderLength
*/
void AlyssaVehicle_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5250]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[1] variable */) = (data->simulationInfo->realParameter[3718] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.r_center[1] PARAM */) - (((data->simulationInfo->realParameter[3709] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * ((0.5) * ((data->simulationInfo->realParameter[3708] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */))));
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[2] = vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.r_center[2] - vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2] * 0.5 * vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinderLength
*/
void AlyssaVehicle_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5251]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[2] variable */) = (data->simulationInfo->realParameter[3719] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.r_center[2] PARAM */) - (((data->simulationInfo->realParameter[3710] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * ((0.5) * ((data->simulationInfo->realParameter[3708] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */))));
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[3] = vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.r_center[3] - vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3] * 0.5 * vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinderLength
*/
void AlyssaVehicle_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5252]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[3] variable */) = (data->simulationInfo->realParameter[3720] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.r_center[3] PARAM */) - (((data->simulationInfo->realParameter[3711] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * ((0.5) * ((data->simulationInfo->realParameter[3708] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */))));
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5247]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[2] = -1.0
*/
void AlyssaVehicle_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5248]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[2] variable */) = -1.0;
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5249]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5253]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5254]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5255]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.color[3] = 155.0
*/
void AlyssaVehicle_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5245]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.color[2] = 155.0
*/
void AlyssaVehicle_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5244]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.color[1] = 155.0
*/
void AlyssaVehicle_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5243]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.cylinderColor[1] = 155
*/
void AlyssaVehicle_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[288]] /* vehicle.wheelFR.rim.rotor1D.cylinderColor[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.cylinderColor[2] = 155
*/
void AlyssaVehicle_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[289]] /* vehicle.wheelFR.rim.rotor1D.cylinderColor[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.cylinderColor[3] = 155
*/
void AlyssaVehicle_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[290]] /* vehicle.wheelFR.rim.rotor1D.cylinderColor[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipForces.mz = 0.0
*/
void AlyssaVehicle_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5183]] /* vehicle.wheelFL.slipForces.mz variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[1] = vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.r_center[1] - vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] * 0.5 * vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinderLength
*/
void AlyssaVehicle_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5157]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[1] variable */) = (data->simulationInfo->realParameter[3601] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.r_center[1] PARAM */) - (((data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * ((0.5) * ((data->simulationInfo->realParameter[3591] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */))));
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[2] = vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.r_center[2] - vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2] * 0.5 * vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinderLength
*/
void AlyssaVehicle_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5158]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[2] variable */) = (data->simulationInfo->realParameter[3602] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.r_center[2] PARAM */) - (((data->simulationInfo->realParameter[3593] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * ((0.5) * ((data->simulationInfo->realParameter[3591] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */))));
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[3] = vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.r_center[3] - vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3] * 0.5 * vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinderLength
*/
void AlyssaVehicle_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5159]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[3] variable */) = (data->simulationInfo->realParameter[3603] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.r_center[3] PARAM */) - (((data->simulationInfo->realParameter[3594] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * ((0.5) * ((data->simulationInfo->realParameter[3591] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */))));
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5154]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[2] = -1.0
*/
void AlyssaVehicle_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5155]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[2] variable */) = -1.0;
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5156]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5160]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5161]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5162]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.color[3] = 155.0
*/
void AlyssaVehicle_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5152]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.color[2] = 155.0
*/
void AlyssaVehicle_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5151]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.color[1] = 155.0
*/
void AlyssaVehicle_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5150]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.cylinderColor[1] = 155
*/
void AlyssaVehicle_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[285]] /* vehicle.wheelFL.rim.rotor1D.cylinderColor[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.cylinderColor[2] = 155
*/
void AlyssaVehicle_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[286]] /* vehicle.wheelFL.rim.rotor1D.cylinderColor[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.cylinderColor[3] = 155
*/
void AlyssaVehicle_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[287]] /* vehicle.wheelFL.rim.rotor1D.cylinderColor[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
vehicle.wheelRR.slipForces.mz = 0.0
*/
void AlyssaVehicle_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5462]] /* vehicle.wheelRR.slipForces.mz variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[1] = vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.r_center[1] - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] * 0.5 * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinderLength
*/
void AlyssaVehicle_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5436]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[1] variable */) = (data->simulationInfo->realParameter[3952] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.r_center[1] PARAM */) - (((data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * ((0.5) * ((data->simulationInfo->realParameter[3942] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */))));
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[2] = vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.r_center[2] - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] * 0.5 * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinderLength
*/
void AlyssaVehicle_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5437]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[2] variable */) = (data->simulationInfo->realParameter[3953] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.r_center[2] PARAM */) - (((data->simulationInfo->realParameter[3944] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * ((0.5) * ((data->simulationInfo->realParameter[3942] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */))));
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[3] = vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.r_center[3] - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] * 0.5 * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinderLength
*/
void AlyssaVehicle_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5438]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[3] variable */) = (data->simulationInfo->realParameter[3954] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.r_center[3] PARAM */) - (((data->simulationInfo->realParameter[3945] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * ((0.5) * ((data->simulationInfo->realParameter[3942] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */))));
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5433]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[2] = -1.0
*/
void AlyssaVehicle_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5434]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[2] variable */) = -1.0;
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5435]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5439]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5440]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5441]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.color[3] = 155.0
*/
void AlyssaVehicle_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5431]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.color[2] = 155.0
*/
void AlyssaVehicle_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5430]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 63
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.color[1] = 155.0
*/
void AlyssaVehicle_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5429]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 64
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.cylinderColor[1] = 155
*/
void AlyssaVehicle_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[294]] /* vehicle.wheelRR.rim.rotor1D.cylinderColor[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 65
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.cylinderColor[2] = 155
*/
void AlyssaVehicle_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[295]] /* vehicle.wheelRR.rim.rotor1D.cylinderColor[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 66
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.cylinderColor[3] = 155
*/
void AlyssaVehicle_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[296]] /* vehicle.wheelRR.rim.rotor1D.cylinderColor[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
vehicle.wheelRL.slipForces.mz = 0.0
*/
void AlyssaVehicle_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5369]] /* vehicle.wheelRL.slipForces.mz variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[1] = vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.r_center[1] - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] * 0.5 * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinderLength
*/
void AlyssaVehicle_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5343]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[1] variable */) = (data->simulationInfo->realParameter[3835] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.r_center[1] PARAM */) - (((data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * ((0.5) * ((data->simulationInfo->realParameter[3825] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */))));
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[2] = vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.r_center[2] - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] * 0.5 * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinderLength
*/
void AlyssaVehicle_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5344]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[2] variable */) = (data->simulationInfo->realParameter[3836] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.r_center[2] PARAM */) - (((data->simulationInfo->realParameter[3827] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * ((0.5) * ((data->simulationInfo->realParameter[3825] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */))));
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[3] = vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.r_center[3] - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] * 0.5 * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinderLength
*/
void AlyssaVehicle_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5345]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.r_shape[3] variable */) = (data->simulationInfo->realParameter[3837] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.r_center[3] PARAM */) - (((data->simulationInfo->realParameter[3828] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * ((0.5) * ((data->simulationInfo->realParameter[3825] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */))));
  TRACE_POP
}

/*
equation index: 71
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5340]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 72
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[2] = -1.0
*/
void AlyssaVehicle_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5341]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[2] variable */) = -1.0;
  TRACE_POP
}

/*
equation index: 73
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5342]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5346]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5347]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5348]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.color[3] = 155.0
*/
void AlyssaVehicle_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5338]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.color[2] = 155.0
*/
void AlyssaVehicle_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5337]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.color[1] = 155.0
*/
void AlyssaVehicle_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5336]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 80
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.cylinderColor[1] = 155
*/
void AlyssaVehicle_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[291]] /* vehicle.wheelRL.rim.rotor1D.cylinderColor[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 81
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.cylinderColor[2] = 155
*/
void AlyssaVehicle_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[292]] /* vehicle.wheelRL.rim.rotor1D.cylinderColor[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 82
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.cylinderColor[3] = 155
*/
void AlyssaVehicle_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[293]] /* vehicle.wheelRL.rim.rotor1D.cylinderColor[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 83
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.cylinder.r_shape[1] = 0.0
*/
void AlyssaVehicle_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5005]] /* vehicle.vehicleBody.body.cylinder.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 84
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.cylinder.r_shape[2] = 0.0
*/
void AlyssaVehicle_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5006]] /* vehicle.vehicleBody.body.cylinder.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.cylinder.r_shape[3] = 0.0
*/
void AlyssaVehicle_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5007]] /* vehicle.vehicleBody.body.cylinder.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 86
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.cylinder.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5008]] /* vehicle.vehicleBody.body.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 87
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.cylinder.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5009]] /* vehicle.vehicleBody.body.cylinder.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 88
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.cylinder.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5010]] /* vehicle.vehicleBody.body.cylinder.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.sphere.r_shape[1] = vehicle.vehicleBody.body.r_CM[1] - 0.05555555555555555
*/
void AlyssaVehicle_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5040]] /* vehicle.vehicleBody.body.sphere.r_shape[1] variable */) = (data->simulationInfo->realParameter[3439] /* vehicle.vehicleBody.body.r_CM[1] PARAM */) - 0.05555555555555555;
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.sphere.lengthDirection[1] = 1.0
*/
void AlyssaVehicle_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.sphere.lengthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 91
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.sphere.lengthDirection[2] = 0.0
*/
void AlyssaVehicle_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5038]] /* vehicle.vehicleBody.body.sphere.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 92
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.sphere.lengthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5039]] /* vehicle.vehicleBody.body.sphere.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 93
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.sphere.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5042]] /* vehicle.vehicleBody.body.sphere.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 94
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.sphere.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5043]] /* vehicle.vehicleBody.body.sphere.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 95
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.sphere.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5044]] /* vehicle.vehicleBody.body.sphere.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 96
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.sphere.color[3] = 255.0
*/
void AlyssaVehicle_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5033]] /* vehicle.vehicleBody.body.sphere.color[3] variable */) = 255.0;
  TRACE_POP
}

/*
equation index: 97
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.sphere.color[2] = 128.0
*/
void AlyssaVehicle_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5032]] /* vehicle.vehicleBody.body.sphere.color[2] variable */) = 128.0;
  TRACE_POP
}

/*
equation index: 98
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.sphere.color[1] = 0.0
*/
void AlyssaVehicle_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5031]] /* vehicle.vehicleBody.body.sphere.color[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 99
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.cylinder.color[3] = 255.0
*/
void AlyssaVehicle_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5002]] /* vehicle.vehicleBody.body.cylinder.color[3] variable */) = 255.0;
  TRACE_POP
}

/*
equation index: 100
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.cylinder.color[2] = 128.0
*/
void AlyssaVehicle_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5001]] /* vehicle.vehicleBody.body.cylinder.color[2] variable */) = 128.0;
  TRACE_POP
}

/*
equation index: 101
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.cylinder.color[1] = 0.0
*/
void AlyssaVehicle_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5000]] /* vehicle.vehicleBody.body.cylinder.color[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 102
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.sphereColor[1] = 0.0
*/
void AlyssaVehicle_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[276]] /* vehicle.vehicleBody.body.sphereColor[1] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 103
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.sphereColor[2] = 128
*/
void AlyssaVehicle_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[277]] /* vehicle.vehicleBody.body.sphereColor[2] DISCRETE */) = ((modelica_integer) 128);
  TRACE_POP
}

/*
equation index: 104
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.sphereColor[3] = 255
*/
void AlyssaVehicle_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[278]] /* vehicle.vehicleBody.body.sphereColor[3] DISCRETE */) = ((modelica_integer) 255);
  TRACE_POP
}

/*
equation index: 105
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.Q[1] = 0.0
*/
void AlyssaVehicle_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4993]] /* vehicle.vehicleBody.body.Q[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 106
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.Q[2] = 0.0
*/
void AlyssaVehicle_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4994]] /* vehicle.vehicleBody.body.Q[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 107
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.Q[3] = 0.0
*/
void AlyssaVehicle_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4995]] /* vehicle.vehicleBody.body.Q[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 108
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.Q[4] = 1.0
*/
void AlyssaVehicle_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4996]] /* vehicle.vehicleBody.body.Q[4] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 109
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.phi[1] = 0.0
*/
void AlyssaVehicle_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5022]] /* vehicle.vehicleBody.body.phi[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 110
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.phi[2] = 0.0
*/
void AlyssaVehicle_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5023]] /* vehicle.vehicleBody.body.phi[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 111
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.phi[3] = 0.0
*/
void AlyssaVehicle_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5024]] /* vehicle.vehicleBody.body.phi[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 112
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.phi_d[1] = 0.0
*/
void AlyssaVehicle_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5025]] /* vehicle.vehicleBody.body.phi_d[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 113
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.phi_d[2] = 0.0
*/
void AlyssaVehicle_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5026]] /* vehicle.vehicleBody.body.phi_d[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 114
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.phi_d[3] = 0.0
*/
void AlyssaVehicle_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5027]] /* vehicle.vehicleBody.body.phi_d[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 115
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.phi_dd[1] = 0.0
*/
void AlyssaVehicle_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5028]] /* vehicle.vehicleBody.body.phi_dd[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.phi_dd[2] = 0.0
*/
void AlyssaVehicle_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5029]] /* vehicle.vehicleBody.body.phi_dd[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.phi_dd[3] = 0.0
*/
void AlyssaVehicle_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5030]] /* vehicle.vehicleBody.body.phi_dd[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.shape.r_shape[1] = 0.0
*/
void AlyssaVehicle_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5062]] /* vehicle.vehicleBody.fixedTranslationFront.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.shape.r_shape[2] = 0.0
*/
void AlyssaVehicle_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5063]] /* vehicle.vehicleBody.fixedTranslationFront.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.shape.r_shape[3] = 0.0
*/
void AlyssaVehicle_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5064]] /* vehicle.vehicleBody.fixedTranslationFront.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.shape.lengthDirection[1] = -1.9
*/
void AlyssaVehicle_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5059]] /* vehicle.vehicleBody.fixedTranslationFront.shape.lengthDirection[1] variable */) = -1.9;
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.shape.lengthDirection[2] = 0.0
*/
void AlyssaVehicle_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5060]] /* vehicle.vehicleBody.fixedTranslationFront.shape.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.shape.lengthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5061]] /* vehicle.vehicleBody.fixedTranslationFront.shape.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.shape.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5065]] /* vehicle.vehicleBody.fixedTranslationFront.shape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 125
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.shape.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5066]] /* vehicle.vehicleBody.fixedTranslationFront.shape.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 126
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.shape.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5067]] /* vehicle.vehicleBody.fixedTranslationFront.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 127
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.shape.color[3] = 155.0
*/
void AlyssaVehicle_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5058]] /* vehicle.vehicleBody.fixedTranslationFront.shape.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 128
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.shape.color[2] = 155.0
*/
void AlyssaVehicle_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5057]] /* vehicle.vehicleBody.fixedTranslationFront.shape.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.shape.color[1] = 155.0
*/
void AlyssaVehicle_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5056]] /* vehicle.vehicleBody.fixedTranslationFront.shape.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.color[1] = 155
*/
void AlyssaVehicle_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[279]] /* vehicle.vehicleBody.fixedTranslationFront.color[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 131
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.color[2] = 155
*/
void AlyssaVehicle_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[280]] /* vehicle.vehicleBody.fixedTranslationFront.color[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.color[3] = 155
*/
void AlyssaVehicle_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[281]] /* vehicle.vehicleBody.fixedTranslationFront.color[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 133
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.shape.r_shape[1] = 0.0
*/
void AlyssaVehicle_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5076]] /* vehicle.vehicleBody.fixedTranslationRear.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.shape.r_shape[2] = 0.0
*/
void AlyssaVehicle_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5077]] /* vehicle.vehicleBody.fixedTranslationRear.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.shape.r_shape[3] = 0.0
*/
void AlyssaVehicle_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5078]] /* vehicle.vehicleBody.fixedTranslationRear.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.shape.lengthDirection[1] = 1.7
*/
void AlyssaVehicle_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5073]] /* vehicle.vehicleBody.fixedTranslationRear.shape.lengthDirection[1] variable */) = 1.7;
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.shape.lengthDirection[2] = 0.0
*/
void AlyssaVehicle_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5074]] /* vehicle.vehicleBody.fixedTranslationRear.shape.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.shape.lengthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5075]] /* vehicle.vehicleBody.fixedTranslationRear.shape.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.shape.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5079]] /* vehicle.vehicleBody.fixedTranslationRear.shape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.shape.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5080]] /* vehicle.vehicleBody.fixedTranslationRear.shape.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.shape.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5081]] /* vehicle.vehicleBody.fixedTranslationRear.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.shape.color[3] = 155.0
*/
void AlyssaVehicle_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5072]] /* vehicle.vehicleBody.fixedTranslationRear.shape.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.shape.color[2] = 155.0
*/
void AlyssaVehicle_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5071]] /* vehicle.vehicleBody.fixedTranslationRear.shape.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.shape.color[1] = 155.0
*/
void AlyssaVehicle_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5070]] /* vehicle.vehicleBody.fixedTranslationRear.shape.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.color[1] = 155
*/
void AlyssaVehicle_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[282]] /* vehicle.vehicleBody.fixedTranslationRear.color[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.color[2] = 155
*/
void AlyssaVehicle_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[283]] /* vehicle.vehicleBody.fixedTranslationRear.color[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.color[3] = 155
*/
void AlyssaVehicle_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[284]] /* vehicle.vehicleBody.fixedTranslationRear.color[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.shape.r_shape[1] = 0.0
*/
void AlyssaVehicle_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3114]] /* vehicle.frontSuspension.steering.housing.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.shape.r_shape[2] = 0.0
*/
void AlyssaVehicle_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3115]] /* vehicle.frontSuspension.steering.housing.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.shape.r_shape[3] = 0.0
*/
void AlyssaVehicle_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3116]] /* vehicle.frontSuspension.steering.housing.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 151
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.shape.lengthDirection[1] = -0.12
*/
void AlyssaVehicle_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3111]] /* vehicle.frontSuspension.steering.housing.shape.lengthDirection[1] variable */) = -0.12;
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.shape.lengthDirection[2] = 0.0
*/
void AlyssaVehicle_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3112]] /* vehicle.frontSuspension.steering.housing.shape.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.shape.lengthDirection[3] = 0.1
*/
void AlyssaVehicle_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3113]] /* vehicle.frontSuspension.steering.housing.shape.lengthDirection[3] variable */) = 0.1;
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.shape.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3117]] /* vehicle.frontSuspension.steering.housing.shape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.shape.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3118]] /* vehicle.frontSuspension.steering.housing.shape.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.shape.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3119]] /* vehicle.frontSuspension.steering.housing.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.shape.color[3] = 155.0
*/
void AlyssaVehicle_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3110]] /* vehicle.frontSuspension.steering.housing.shape.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.shape.color[2] = 155.0
*/
void AlyssaVehicle_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3109]] /* vehicle.frontSuspension.steering.housing.shape.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 159
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.shape.color[1] = 155.0
*/
void AlyssaVehicle_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3108]] /* vehicle.frontSuspension.steering.housing.shape.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 160
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.color[1] = 155
*/
void AlyssaVehicle_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[144]] /* vehicle.frontSuspension.steering.housing.color[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 161
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.color[2] = 155
*/
void AlyssaVehicle_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[145]] /* vehicle.frontSuspension.steering.housing.color[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 162
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.color[3] = 155
*/
void AlyssaVehicle_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[146]] /* vehicle.frontSuspension.steering.housing.color[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 163
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.box.r_shape[1] = 0.0
*/
void AlyssaVehicle_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3132]] /* vehicle.frontSuspension.steering.rack.box.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 164
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.box.r_shape[2] = 0.0
*/
void AlyssaVehicle_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3133]] /* vehicle.frontSuspension.steering.rack.box.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 165
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.box.r_shape[3] = 0.0
*/
void AlyssaVehicle_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3134]] /* vehicle.frontSuspension.steering.rack.box.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 166
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.box.lengthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3129]] /* vehicle.frontSuspension.steering.rack.box.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 167
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.box.lengthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3130]] /* vehicle.frontSuspension.steering.rack.box.lengthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 168
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.box.lengthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3131]] /* vehicle.frontSuspension.steering.rack.box.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 169
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.box.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3135]] /* vehicle.frontSuspension.steering.rack.box.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 170
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.box.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3136]] /* vehicle.frontSuspension.steering.rack.box.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.box.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3137]] /* vehicle.frontSuspension.steering.rack.box.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.box.color[3] = 0.0
*/
void AlyssaVehicle_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3126]] /* vehicle.frontSuspension.steering.rack.box.color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.box.color[2] = 0.0
*/
void AlyssaVehicle_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3125]] /* vehicle.frontSuspension.steering.rack.box.color[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 174
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.box.color[1] = 255.0
*/
void AlyssaVehicle_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3124]] /* vehicle.frontSuspension.steering.rack.box.color[1] variable */) = 255.0;
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.boxColor[1] = 255
*/
void AlyssaVehicle_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[147]] /* vehicle.frontSuspension.steering.rack.boxColor[1] DISCRETE */) = ((modelica_integer) 255);
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.boxColor[2] = 0.0
*/
void AlyssaVehicle_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[148]] /* vehicle.frontSuspension.steering.rack.boxColor[2] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.boxColor[3] = 0.0
*/
void AlyssaVehicle_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[149]] /* vehicle.frontSuspension.steering.rack.boxColor[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.pos.v = 0.0
*/
void AlyssaVehicle_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3122]] /* vehicle.frontSuspension.steering.pos.v variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.pos.a = 0.0
*/
void AlyssaVehicle_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3120]] /* vehicle.frontSuspension.steering.pos.a variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.shape.r_shape[1] = 0.0
*/
void AlyssaVehicle_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3081]] /* vehicle.frontSuspension.steering.endL.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 181
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.shape.r_shape[2] = 0.0
*/
void AlyssaVehicle_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3082]] /* vehicle.frontSuspension.steering.endL.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 182
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.shape.r_shape[3] = 0.0
*/
void AlyssaVehicle_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3083]] /* vehicle.frontSuspension.steering.endL.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 183
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.shape.lengthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3078]] /* vehicle.frontSuspension.steering.endL.shape.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 184
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.shape.lengthDirection[2] = -0.4
*/
void AlyssaVehicle_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3079]] /* vehicle.frontSuspension.steering.endL.shape.lengthDirection[2] variable */) = -0.4;
  TRACE_POP
}

/*
equation index: 185
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.shape.lengthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3080]] /* vehicle.frontSuspension.steering.endL.shape.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 186
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.shape.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3084]] /* vehicle.frontSuspension.steering.endL.shape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 187
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.shape.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3085]] /* vehicle.frontSuspension.steering.endL.shape.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 188
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.shape.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3086]] /* vehicle.frontSuspension.steering.endL.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 189
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.shape.color[3] = 155.0
*/
void AlyssaVehicle_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3077]] /* vehicle.frontSuspension.steering.endL.shape.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 190
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.shape.color[2] = 155.0
*/
void AlyssaVehicle_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3076]] /* vehicle.frontSuspension.steering.endL.shape.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 191
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.shape.color[1] = 155.0
*/
void AlyssaVehicle_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3075]] /* vehicle.frontSuspension.steering.endL.shape.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 192
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.color[1] = 155
*/
void AlyssaVehicle_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[138]] /* vehicle.frontSuspension.steering.endL.color[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 193
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.color[2] = 155
*/
void AlyssaVehicle_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[139]] /* vehicle.frontSuspension.steering.endL.color[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 194
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.color[3] = 155
*/
void AlyssaVehicle_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[140]] /* vehicle.frontSuspension.steering.endL.color[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 195
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.shape.r_shape[1] = 0.0
*/
void AlyssaVehicle_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3101]] /* vehicle.frontSuspension.steering.endR.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 196
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.shape.r_shape[2] = 0.0
*/
void AlyssaVehicle_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3102]] /* vehicle.frontSuspension.steering.endR.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.shape.r_shape[3] = 0.0
*/
void AlyssaVehicle_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3103]] /* vehicle.frontSuspension.steering.endR.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.shape.lengthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3098]] /* vehicle.frontSuspension.steering.endR.shape.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.shape.lengthDirection[2] = 0.4
*/
void AlyssaVehicle_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3099]] /* vehicle.frontSuspension.steering.endR.shape.lengthDirection[2] variable */) = 0.4;
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.shape.lengthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3100]] /* vehicle.frontSuspension.steering.endR.shape.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.shape.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3104]] /* vehicle.frontSuspension.steering.endR.shape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.shape.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3105]] /* vehicle.frontSuspension.steering.endR.shape.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.shape.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3106]] /* vehicle.frontSuspension.steering.endR.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.shape.color[3] = 155.0
*/
void AlyssaVehicle_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3097]] /* vehicle.frontSuspension.steering.endR.shape.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.shape.color[2] = 155.0
*/
void AlyssaVehicle_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3096]] /* vehicle.frontSuspension.steering.endR.shape.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.shape.color[1] = 155.0
*/
void AlyssaVehicle_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3095]] /* vehicle.frontSuspension.steering.endR.shape.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.color[1] = 155
*/
void AlyssaVehicle_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[141]] /* vehicle.frontSuspension.steering.endR.color[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.color[2] = 155
*/
void AlyssaVehicle_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[142]] /* vehicle.frontSuspension.steering.endR.color[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 209
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.color[3] = 155
*/
void AlyssaVehicle_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[143]] /* vehicle.frontSuspension.steering.endR.color[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 210
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.r_shape[1] = (-0.05500653241360921) * vehicle.frontSuspension.cornerR.tieRod.revolute.cylinderLength
*/
void AlyssaVehicle_eqFunction_210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2729]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.r_shape[1] variable */) = (-0.05500653241360921) * ((data->simulationInfo->realParameter[1467] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinderLength PARAM */));
  TRACE_POP
}

/*
equation index: 211
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.r_shape[2] = (-0.12376469793062068) * vehicle.frontSuspension.cornerR.tieRod.revolute.cylinderLength
*/
void AlyssaVehicle_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2730]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.r_shape[2] variable */) = (-0.12376469793062068) * ((data->simulationInfo->realParameter[1467] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinderLength PARAM */));
  TRACE_POP
}

/*
equation index: 212
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.r_shape[3] = (-0.4813071586190806) * vehicle.frontSuspension.cornerR.tieRod.revolute.cylinderLength
*/
void AlyssaVehicle_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2731]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.r_shape[3] variable */) = (-0.4813071586190806) * ((data->simulationInfo->realParameter[1467] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinderLength PARAM */));
  TRACE_POP
}

/*
equation index: 213
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.lengthDirection[1] = 0.11001306482721843
*/
void AlyssaVehicle_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.lengthDirection[1] variable */) = 0.11001306482721843;
  TRACE_POP
}

/*
equation index: 214
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.lengthDirection[2] = 0.24752939586124137
*/
void AlyssaVehicle_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.lengthDirection[2] variable */) = 0.24752939586124137;
  TRACE_POP
}

/*
equation index: 215
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.lengthDirection[3] = 0.9626143172381612
*/
void AlyssaVehicle_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2728]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.lengthDirection[3] variable */) = 0.9626143172381612;
  TRACE_POP
}

/*
equation index: 216
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2732]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 217
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2733]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 218
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2734]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 219
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.color[3] = 0.0
*/
void AlyssaVehicle_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2724]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 220
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.color[2] = 0.0
*/
void AlyssaVehicle_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2723]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.color[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 221
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.color[1] = 255.0
*/
void AlyssaVehicle_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2722]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.color[1] variable */) = 255.0;
  TRACE_POP
}

/*
equation index: 222
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revoluteColor[1] = 255
*/
void AlyssaVehicle_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[114]] /* vehicle.frontSuspension.cornerR.tieRod.revoluteColor[1] DISCRETE */) = ((modelica_integer) 255);
  TRACE_POP
}

/*
equation index: 223
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revoluteColor[2] = 0.0
*/
void AlyssaVehicle_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[115]] /* vehicle.frontSuspension.cornerR.tieRod.revoluteColor[2] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 224
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revoluteColor[3] = 0.0
*/
void AlyssaVehicle_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[116]] /* vehicle.frontSuspension.cornerR.tieRod.revoluteColor[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 225
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.bearing.phi = 0.0
*/
void AlyssaVehicle_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2721]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.bearing.phi variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.massColor[1] = 0.0
*/
void AlyssaVehicle_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[117]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.massColor[1] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.massColor[2] = 128
*/
void AlyssaVehicle_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[118]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.massColor[2] DISCRETE */) = ((modelica_integer) 128);
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.massColor[3] = 255
*/
void AlyssaVehicle_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[119]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.massColor[3] DISCRETE */) = ((modelica_integer) 255);
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.r_shape[1] = 0.0
*/
void AlyssaVehicle_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2808]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.r_shape[2] = 0.0
*/
void AlyssaVehicle_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2809]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.r_shape[3] = 0.0
*/
void AlyssaVehicle_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2810]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2811]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_a.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_a.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_a.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_a.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_a.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2793]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_a.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2801]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2802]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2803]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.color[3] = 0.0
*/
void AlyssaVehicle_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2796]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.color[2] = 0.0
*/
void AlyssaVehicle_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2795]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.color[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.color[1] = 255.0
*/
void AlyssaVehicle_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2794]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.color[1] variable */) = 255.0;
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.sphereColor[1] = 255
*/
void AlyssaVehicle_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[123]] /* vehicle.frontSuspension.cornerR.tieRod.sphereColor[1] DISCRETE */) = ((modelica_integer) 255);
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.sphereColor[2] = 0.0
*/
void AlyssaVehicle_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[124]] /* vehicle.frontSuspension.cornerR.tieRod.sphereColor[2] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.sphereColor[3] = 0.0
*/
void AlyssaVehicle_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[125]] /* vehicle.frontSuspension.cornerR.tieRod.sphereColor[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.r_CM_0[1] = 0.0
*/
void AlyssaVehicle_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.r_CM_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.r_CM_0[2] = 0.0
*/
void AlyssaVehicle_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.r_CM_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.r_CM_0[3] = 0.0
*/
void AlyssaVehicle_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2786]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.r_CM_0[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.v_CM_0[1] = 0.0
*/
void AlyssaVehicle_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2815]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.v_CM_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.v_CM_0[2] = 0.0
*/
void AlyssaVehicle_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2816]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.v_CM_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.v_CM_0[3] = 0.0
*/
void AlyssaVehicle_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2817]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.v_CM_0[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.f_CM_a[1] = 0.0
*/
void AlyssaVehicle_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.f_CM_a[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.f_CM_a[2] = 0.0
*/
void AlyssaVehicle_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.f_CM_a[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.f_CM_a[3] = 0.0
*/
void AlyssaVehicle_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2762]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.f_CM_a[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.f_CM_e[1] = 0.0
*/
void AlyssaVehicle_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2763]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.f_CM_e[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.f_CM_e[2] = 0.0
*/
void AlyssaVehicle_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2764]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.f_CM_e[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.f_CM_e[3] = 0.0
*/
void AlyssaVehicle_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2765]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.f_CM_e[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.totalPower = 0.0
*/
void AlyssaVehicle_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2814]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.totalPower variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.shape.r_shape[1] = 0.0
*/
void AlyssaVehicle_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2831]] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.shape.r_shape[2] = 0.0
*/
void AlyssaVehicle_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2832]] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.shape.r_shape[3] = 0.0
*/
void AlyssaVehicle_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.shape.lengthDirection[1] = -0.09999999999999999
*/
void AlyssaVehicle_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2828]] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shape.lengthDirection[1] variable */) = -0.09999999999999999;
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.shape.lengthDirection[2] = 0.07000000000000006
*/
void AlyssaVehicle_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2829]] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shape.lengthDirection[2] variable */) = 0.07000000000000006;
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.shape.lengthDirection[3] = 0.30000000000000004
*/
void AlyssaVehicle_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2830]] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shape.lengthDirection[3] variable */) = 0.30000000000000004;
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.shape.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.shape.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2835]] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shape.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.shape.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2836]] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.shape.color[3] = 155.0
*/
void AlyssaVehicle_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shape.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.shape.color[2] = 155.0
*/
void AlyssaVehicle_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2825]] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shape.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.shape.color[1] = 155.0
*/
void AlyssaVehicle_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2824]] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shape.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.color[3] = 155.0
*/
void AlyssaVehicle_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.color[2] = 155.0
*/
void AlyssaVehicle_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.color[1] = 155.0
*/
void AlyssaVehicle_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2804]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1Color[1] = 155
*/
void AlyssaVehicle_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[120]] /* vehicle.frontSuspension.cornerR.tieRod.rod1Color[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1Color[2] = 155
*/
void AlyssaVehicle_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[121]] /* vehicle.frontSuspension.cornerR.tieRod.rod1Color[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1Color[3] = 155
*/
void AlyssaVehicle_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[122]] /* vehicle.frontSuspension.cornerR.tieRod.rod1Color[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_resolve.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2678]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_resolve.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2679]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_resolve.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2680]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_resolve.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2681]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_resolve.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2682]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_resolve.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2683]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 284
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.w[1] = 0.0
*/
void AlyssaVehicle_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2693]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 285
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.w[2] = 0.0
*/
void AlyssaVehicle_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 286
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.w[3] = 0.0
*/
void AlyssaVehicle_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 287
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.T[1,1] = 1.0
*/
void AlyssaVehicle_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2684]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 288
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.T[1,2] = 0.0
*/
void AlyssaVehicle_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2685]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 289
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.T[1,3] = 0.0
*/
void AlyssaVehicle_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2686]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.T[2,1] = 0.0
*/
void AlyssaVehicle_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2687]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.T[2,2] = 1.0
*/
void AlyssaVehicle_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2688]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.T[2,3] = 0.0
*/
void AlyssaVehicle_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2689]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.T[3,1] = 0.0
*/
void AlyssaVehicle_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2690]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.T[3,2] = 0.0
*/
void AlyssaVehicle_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2691]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.T[3,3] = 1.0
*/
void AlyssaVehicle_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2692]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.r_0[1] = 0.0
*/
void AlyssaVehicle_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.r_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.r_0[2] = 0.0
*/
void AlyssaVehicle_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2700]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.r_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.r_0[3] = 0.0
*/
void AlyssaVehicle_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2701]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.zeroPosition.frame_resolve.r_0[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.totalPower = 0.0
*/
void AlyssaVehicle_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2837]] /* vehicle.frontSuspension.cornerR.tieRod.totalPower variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.shape.r_shape[1] = 0.0
*/
void AlyssaVehicle_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2571]] /* vehicle.frontSuspension.cornerR.spindle.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 301
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.shape.r_shape[2] = 0.0
*/
void AlyssaVehicle_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2572]] /* vehicle.frontSuspension.cornerR.spindle.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 302
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.shape.r_shape[3] = 0.0
*/
void AlyssaVehicle_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2573]] /* vehicle.frontSuspension.cornerR.spindle.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.shape.lengthDirection[1] = 0.02
*/
void AlyssaVehicle_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2568]] /* vehicle.frontSuspension.cornerR.spindle.shape.lengthDirection[1] variable */) = 0.02;
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.shape.lengthDirection[2] = 0.15000000000000002
*/
void AlyssaVehicle_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2569]] /* vehicle.frontSuspension.cornerR.spindle.shape.lengthDirection[2] variable */) = 0.15000000000000002;
  TRACE_POP
}

/*
equation index: 305
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.shape.lengthDirection[3] = 0.2
*/
void AlyssaVehicle_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2570]] /* vehicle.frontSuspension.cornerR.spindle.shape.lengthDirection[3] variable */) = 0.2;
  TRACE_POP
}

/*
equation index: 306
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.shape.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2574]] /* vehicle.frontSuspension.cornerR.spindle.shape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 307
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.shape.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2575]] /* vehicle.frontSuspension.cornerR.spindle.shape.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 308
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.shape.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2576]] /* vehicle.frontSuspension.cornerR.spindle.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 309
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.shape.color[3] = 155.0
*/
void AlyssaVehicle_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2567]] /* vehicle.frontSuspension.cornerR.spindle.shape.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 310
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.shape.color[2] = 155.0
*/
void AlyssaVehicle_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2566]] /* vehicle.frontSuspension.cornerR.spindle.shape.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 311
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.shape.color[1] = 155.0
*/
void AlyssaVehicle_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2565]] /* vehicle.frontSuspension.cornerR.spindle.shape.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 312
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.color[1] = 155
*/
void AlyssaVehicle_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[102]] /* vehicle.frontSuspension.cornerR.spindle.color[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.color[2] = 155
*/
void AlyssaVehicle_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[103]] /* vehicle.frontSuspension.cornerR.spindle.color[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 314
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.color[3] = 155
*/
void AlyssaVehicle_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[104]] /* vehicle.frontSuspension.cornerR.spindle.color[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.shape.r_shape[1] = 0.0
*/
void AlyssaVehicle_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2643]] /* vehicle.frontSuspension.cornerR.staticAlign.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.shape.r_shape[2] = 0.0
*/
void AlyssaVehicle_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2644]] /* vehicle.frontSuspension.cornerR.staticAlign.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 317
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.shape.r_shape[3] = 0.0
*/
void AlyssaVehicle_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2645]] /* vehicle.frontSuspension.cornerR.staticAlign.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 318
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.shape.lengthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2640]] /* vehicle.frontSuspension.cornerR.staticAlign.shape.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 319
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.shape.lengthDirection[2] = 0.0
*/
void AlyssaVehicle_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2641]] /* vehicle.frontSuspension.cornerR.staticAlign.shape.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 320
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.shape.lengthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2642]] /* vehicle.frontSuspension.cornerR.staticAlign.shape.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 321
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.shape.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2646]] /* vehicle.frontSuspension.cornerR.staticAlign.shape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 322
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.shape.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2647]] /* vehicle.frontSuspension.cornerR.staticAlign.shape.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 323
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.shape.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2648]] /* vehicle.frontSuspension.cornerR.staticAlign.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 324
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.shape.color[3] = 155.0
*/
void AlyssaVehicle_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2639]] /* vehicle.frontSuspension.cornerR.staticAlign.shape.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 325
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.shape.color[2] = 155.0
*/
void AlyssaVehicle_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2638]] /* vehicle.frontSuspension.cornerR.staticAlign.shape.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 326
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.shape.color[1] = 155.0
*/
void AlyssaVehicle_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2637]] /* vehicle.frontSuspension.cornerR.staticAlign.shape.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 327
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.color[1] = 155
*/
void AlyssaVehicle_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[111]] /* vehicle.frontSuspension.cornerR.staticAlign.color[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 328
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.color[2] = 155
*/
void AlyssaVehicle_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[112]] /* vehicle.frontSuspension.cornerR.staticAlign.color[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.color[3] = 155
*/
void AlyssaVehicle_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[113]] /* vehicle.frontSuspension.cornerR.staticAlign.color[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 330
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.cylinder.r_shape[1] = 0.0
*/
void AlyssaVehicle_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2926]] /* vehicle.frontSuspension.cornerR.upright.cylinder.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.cylinder.r_shape[2] = 0.0
*/
void AlyssaVehicle_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2927]] /* vehicle.frontSuspension.cornerR.upright.cylinder.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.cylinder.r_shape[3] = 0.0
*/
void AlyssaVehicle_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* vehicle.frontSuspension.cornerR.upright.cylinder.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.cylinder.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2929]] /* vehicle.frontSuspension.cornerR.upright.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 334
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.cylinder.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2930]] /* vehicle.frontSuspension.cornerR.upright.cylinder.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 335
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.cylinder.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2931]] /* vehicle.frontSuspension.cornerR.upright.cylinder.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 336
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.sphere.r_shape[1] = vehicle.frontSuspension.cornerR.upright.r_CM[1] - 0.05555555555555555
*/
void AlyssaVehicle_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2961]] /* vehicle.frontSuspension.cornerR.upright.sphere.r_shape[1] variable */) = (data->simulationInfo->realParameter[1638] /* vehicle.frontSuspension.cornerR.upright.r_CM[1] PARAM */) - 0.05555555555555555;
  TRACE_POP
}

/*
equation index: 337
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.sphere.lengthDirection[1] = 1.0
*/
void AlyssaVehicle_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2958]] /* vehicle.frontSuspension.cornerR.upright.sphere.lengthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 338
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.sphere.lengthDirection[2] = 0.0
*/
void AlyssaVehicle_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2959]] /* vehicle.frontSuspension.cornerR.upright.sphere.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 339
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.sphere.lengthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2960]] /* vehicle.frontSuspension.cornerR.upright.sphere.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 340
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.sphere.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2963]] /* vehicle.frontSuspension.cornerR.upright.sphere.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 341
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.sphere.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2964]] /* vehicle.frontSuspension.cornerR.upright.sphere.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 342
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.sphere.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2965]] /* vehicle.frontSuspension.cornerR.upright.sphere.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 343
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.sphere.color[3] = 255.0
*/
void AlyssaVehicle_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2954]] /* vehicle.frontSuspension.cornerR.upright.sphere.color[3] variable */) = 255.0;
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.sphere.color[2] = 128.0
*/
void AlyssaVehicle_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2953]] /* vehicle.frontSuspension.cornerR.upright.sphere.color[2] variable */) = 128.0;
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.sphere.color[1] = 0.0
*/
void AlyssaVehicle_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2952]] /* vehicle.frontSuspension.cornerR.upright.sphere.color[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.cylinder.color[3] = 255.0
*/
void AlyssaVehicle_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2923]] /* vehicle.frontSuspension.cornerR.upright.cylinder.color[3] variable */) = 255.0;
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.cylinder.color[2] = 128.0
*/
void AlyssaVehicle_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2922]] /* vehicle.frontSuspension.cornerR.upright.cylinder.color[2] variable */) = 128.0;
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.cylinder.color[1] = 0.0
*/
void AlyssaVehicle_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2921]] /* vehicle.frontSuspension.cornerR.upright.cylinder.color[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.sphereColor[1] = 0.0
*/
void AlyssaVehicle_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[135]] /* vehicle.frontSuspension.cornerR.upright.sphereColor[1] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.sphereColor[2] = 128
*/
void AlyssaVehicle_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[136]] /* vehicle.frontSuspension.cornerR.upright.sphereColor[2] DISCRETE */) = ((modelica_integer) 128);
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.sphereColor[3] = 255
*/
void AlyssaVehicle_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[137]] /* vehicle.frontSuspension.cornerR.upright.sphereColor[3] DISCRETE */) = ((modelica_integer) 255);
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.Q[1] = 0.0
*/
void AlyssaVehicle_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2914]] /* vehicle.frontSuspension.cornerR.upright.Q[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.Q[2] = 0.0
*/
void AlyssaVehicle_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2915]] /* vehicle.frontSuspension.cornerR.upright.Q[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.Q[3] = 0.0
*/
void AlyssaVehicle_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2916]] /* vehicle.frontSuspension.cornerR.upright.Q[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.Q[4] = 1.0
*/
void AlyssaVehicle_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* vehicle.frontSuspension.cornerR.upright.Q[4] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.phi[1] = 0.0
*/
void AlyssaVehicle_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2943]] /* vehicle.frontSuspension.cornerR.upright.phi[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.phi[2] = 0.0
*/
void AlyssaVehicle_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2944]] /* vehicle.frontSuspension.cornerR.upright.phi[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.phi[3] = 0.0
*/
void AlyssaVehicle_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2945]] /* vehicle.frontSuspension.cornerR.upright.phi[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.phi_d[1] = 0.0
*/
void AlyssaVehicle_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2946]] /* vehicle.frontSuspension.cornerR.upright.phi_d[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.phi_d[2] = 0.0
*/
void AlyssaVehicle_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2947]] /* vehicle.frontSuspension.cornerR.upright.phi_d[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.phi_d[3] = 0.0
*/
void AlyssaVehicle_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2948]] /* vehicle.frontSuspension.cornerR.upright.phi_d[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.phi_dd[1] = 0.0
*/
void AlyssaVehicle_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2949]] /* vehicle.frontSuspension.cornerR.upright.phi_dd[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.phi_dd[2] = 0.0
*/
void AlyssaVehicle_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2950]] /* vehicle.frontSuspension.cornerR.upright.phi_dd[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.phi_dd[3] = 0.0
*/
void AlyssaVehicle_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2951]] /* vehicle.frontSuspension.cornerR.upright.phi_dd[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 365
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_resolve.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3014]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_resolve.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3015]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_resolve.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3016]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_resolve.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3017]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_resolve.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3018]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_resolve.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3019]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.w[1] = 0.0
*/
void AlyssaVehicle_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3029]] /* vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.w[2] = 0.0
*/
void AlyssaVehicle_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3030]] /* vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.w[3] = 0.0
*/
void AlyssaVehicle_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3031]] /* vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.T[1,1] = 1.0
*/
void AlyssaVehicle_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.T[1,2] = 0.0
*/
void AlyssaVehicle_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3021]] /* vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.T[1,3] = 0.0
*/
void AlyssaVehicle_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3022]] /* vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.T[2,1] = 0.0
*/
void AlyssaVehicle_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3023]] /* vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.T[2,2] = 1.0
*/
void AlyssaVehicle_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3024]] /* vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.T[2,3] = 0.0
*/
void AlyssaVehicle_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3025]] /* vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.T[3,1] = 0.0
*/
void AlyssaVehicle_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3026]] /* vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.T[3,2] = 0.0
*/
void AlyssaVehicle_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3027]] /* vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.T[3,3] = 1.0
*/
void AlyssaVehicle_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3028]] /* vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.r_0[1] = 0.0
*/
void AlyssaVehicle_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3035]] /* vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.r_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.r_0[2] = 0.0
*/
void AlyssaVehicle_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3036]] /* vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.r_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.r_0[3] = 0.0
*/
void AlyssaVehicle_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3037]] /* vehicle.frontSuspension.cornerR.wheelPosition.zeroPosition.frame_resolve.r_0[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.shape.r_shape[1] = 0.0
*/
void AlyssaVehicle_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2880]] /* vehicle.frontSuspension.cornerR.ucaMount.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.shape.r_shape[2] = 0.0
*/
void AlyssaVehicle_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2881]] /* vehicle.frontSuspension.cornerR.ucaMount.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.shape.r_shape[3] = 0.0
*/
void AlyssaVehicle_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* vehicle.frontSuspension.cornerR.ucaMount.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.shape.lengthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2877]] /* vehicle.frontSuspension.cornerR.ucaMount.shape.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.shape.lengthDirection[2] = 0.51
*/
void AlyssaVehicle_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2878]] /* vehicle.frontSuspension.cornerR.ucaMount.shape.lengthDirection[2] variable */) = 0.51;
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.shape.lengthDirection[3] = -0.2
*/
void AlyssaVehicle_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2879]] /* vehicle.frontSuspension.cornerR.ucaMount.shape.lengthDirection[3] variable */) = -0.2;
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.shape.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* vehicle.frontSuspension.cornerR.ucaMount.shape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.shape.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2884]] /* vehicle.frontSuspension.cornerR.ucaMount.shape.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.shape.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2885]] /* vehicle.frontSuspension.cornerR.ucaMount.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.shape.color[3] = 155.0
*/
void AlyssaVehicle_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* vehicle.frontSuspension.cornerR.ucaMount.shape.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.shape.color[2] = 155.0
*/
void AlyssaVehicle_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2874]] /* vehicle.frontSuspension.cornerR.ucaMount.shape.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.shape.color[1] = 155.0
*/
void AlyssaVehicle_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2873]] /* vehicle.frontSuspension.cornerR.ucaMount.shape.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.color[1] = 155
*/
void AlyssaVehicle_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[129]] /* vehicle.frontSuspension.cornerR.ucaMount.color[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.color[2] = 155
*/
void AlyssaVehicle_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[130]] /* vehicle.frontSuspension.cornerR.ucaMount.color[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.color[3] = 155
*/
void AlyssaVehicle_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[131]] /* vehicle.frontSuspension.cornerR.ucaMount.color[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinder.r_shape[1] = (-vehicle.frontSuspension.cornerR.ucaPivot.e[1]) * 0.5 * vehicle.frontSuspension.cornerR.ucaPivot.cylinderLength
*/
void AlyssaVehicle_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinder.r_shape[1] variable */) = ((-(data->simulationInfo->realParameter[1580] /* vehicle.frontSuspension.cornerR.ucaPivot.e[1] PARAM */))) * ((0.5) * ((data->simulationInfo->realParameter[1579] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinderLength PARAM */)));
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinder.r_shape[2] = (-vehicle.frontSuspension.cornerR.ucaPivot.e[2]) * 0.5 * vehicle.frontSuspension.cornerR.ucaPivot.cylinderLength
*/
void AlyssaVehicle_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2905]] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinder.r_shape[2] variable */) = ((-(data->simulationInfo->realParameter[1581] /* vehicle.frontSuspension.cornerR.ucaPivot.e[2] PARAM */))) * ((0.5) * ((data->simulationInfo->realParameter[1579] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinderLength PARAM */)));
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinder.r_shape[3] = (-vehicle.frontSuspension.cornerR.ucaPivot.e[3]) * 0.5 * vehicle.frontSuspension.cornerR.ucaPivot.cylinderLength
*/
void AlyssaVehicle_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2906]] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinder.r_shape[3] variable */) = ((-(data->simulationInfo->realParameter[1582] /* vehicle.frontSuspension.cornerR.ucaPivot.e[3] PARAM */))) * ((0.5) * ((data->simulationInfo->realParameter[1579] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinderLength PARAM */)));
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinder.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2907]] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinder.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2908]] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinder.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinder.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2909]] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinder.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinder.color[3] = 0.0
*/
void AlyssaVehicle_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2902]] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinder.color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinder.color[2] = 0.0
*/
void AlyssaVehicle_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2901]] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinder.color[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinder.color[1] = 255.0
*/
void AlyssaVehicle_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2900]] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinder.color[1] variable */) = 255.0;
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinderColor[1] = 255
*/
void AlyssaVehicle_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[132]] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinderColor[1] DISCRETE */) = ((modelica_integer) 255);
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinderColor[2] = 0.0
*/
void AlyssaVehicle_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[133]] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinderColor[2] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinderColor[3] = 0.0
*/
void AlyssaVehicle_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[134]] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinderColor[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.shape.r_shape[1] = 0.0
*/
void AlyssaVehicle_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* vehicle.frontSuspension.cornerR.uca.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.shape.r_shape[2] = 0.0
*/
void AlyssaVehicle_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* vehicle.frontSuspension.cornerR.uca.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.shape.r_shape[3] = 0.0
*/
void AlyssaVehicle_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2863]] /* vehicle.frontSuspension.cornerR.uca.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.shape.lengthDirection[1] = -0.02
*/
void AlyssaVehicle_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2858]] /* vehicle.frontSuspension.cornerR.uca.shape.lengthDirection[1] variable */) = -0.02;
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.shape.lengthDirection[2] = 0.33999999999999997
*/
void AlyssaVehicle_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2859]] /* vehicle.frontSuspension.cornerR.uca.shape.lengthDirection[2] variable */) = 0.33999999999999997;
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.shape.lengthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2860]] /* vehicle.frontSuspension.cornerR.uca.shape.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.shape.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2864]] /* vehicle.frontSuspension.cornerR.uca.shape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.shape.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2865]] /* vehicle.frontSuspension.cornerR.uca.shape.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.shape.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2866]] /* vehicle.frontSuspension.cornerR.uca.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.shape.color[3] = 155.0
*/
void AlyssaVehicle_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2857]] /* vehicle.frontSuspension.cornerR.uca.shape.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.shape.color[2] = 155.0
*/
void AlyssaVehicle_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2856]] /* vehicle.frontSuspension.cornerR.uca.shape.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.shape.color[1] = 155.0
*/
void AlyssaVehicle_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* vehicle.frontSuspension.cornerR.uca.shape.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.color[1] = 155
*/
void AlyssaVehicle_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[126]] /* vehicle.frontSuspension.cornerR.uca.color[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.color[2] = 155
*/
void AlyssaVehicle_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[127]] /* vehicle.frontSuspension.cornerR.uca.color[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.color[3] = 155
*/
void AlyssaVehicle_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[128]] /* vehicle.frontSuspension.cornerR.uca.color[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.shape.r_shape[1] = 0.0
*/
void AlyssaVehicle_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2550]] /* vehicle.frontSuspension.cornerR.lcaMount.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.shape.r_shape[2] = 0.0
*/
void AlyssaVehicle_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2551]] /* vehicle.frontSuspension.cornerR.lcaMount.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.shape.r_shape[3] = 0.0
*/
void AlyssaVehicle_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* vehicle.frontSuspension.cornerR.lcaMount.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.shape.lengthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2547]] /* vehicle.frontSuspension.cornerR.lcaMount.shape.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.shape.lengthDirection[2] = 0.39
*/
void AlyssaVehicle_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2548]] /* vehicle.frontSuspension.cornerR.lcaMount.shape.lengthDirection[2] variable */) = 0.39;
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.shape.lengthDirection[3] = 0.15
*/
void AlyssaVehicle_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2549]] /* vehicle.frontSuspension.cornerR.lcaMount.shape.lengthDirection[3] variable */) = 0.15;
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.shape.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* vehicle.frontSuspension.cornerR.lcaMount.shape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.shape.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2554]] /* vehicle.frontSuspension.cornerR.lcaMount.shape.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.shape.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2555]] /* vehicle.frontSuspension.cornerR.lcaMount.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.shape.color[3] = 155.0
*/
void AlyssaVehicle_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2545]] /* vehicle.frontSuspension.cornerR.lcaMount.shape.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.shape.color[2] = 155.0
*/
void AlyssaVehicle_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2544]] /* vehicle.frontSuspension.cornerR.lcaMount.shape.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.shape.color[1] = 155.0
*/
void AlyssaVehicle_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2543]] /* vehicle.frontSuspension.cornerR.lcaMount.shape.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.color[1] = 155
*/
void AlyssaVehicle_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[99]] /* vehicle.frontSuspension.cornerR.lcaMount.color[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.color[2] = 155
*/
void AlyssaVehicle_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[100]] /* vehicle.frontSuspension.cornerR.lcaMount.color[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.color[3] = 155
*/
void AlyssaVehicle_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[101]] /* vehicle.frontSuspension.cornerR.lcaMount.color[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.r_shape[1] = 0.5 * vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinderLength
*/
void AlyssaVehicle_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2375]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.r_shape[1] variable */) = (0.5) * ((data->simulationInfo->realParameter[1175] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinderLength PARAM */));
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.r_shape[2] = 0.0
*/
void AlyssaVehicle_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2376]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.r_shape[3] = 0.0
*/
void AlyssaVehicle_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2377]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.lengthDirection[1] = -1.0
*/
void AlyssaVehicle_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.lengthDirection[1] variable */) = -1.0;
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.lengthDirection[2] = 0.0
*/
void AlyssaVehicle_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.lengthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2374]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2378]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2379]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2380]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.color[3] = 0.0
*/
void AlyssaVehicle_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2370]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.color[2] = 0.0
*/
void AlyssaVehicle_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2369]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.color[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.color[1] = 255.0
*/
void AlyssaVehicle_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2368]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.color[1] variable */) = 255.0;
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revoluteColor[1] = 255
*/
void AlyssaVehicle_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[90]] /* vehicle.frontSuspension.cornerR.jointUSR.revoluteColor[1] DISCRETE */) = ((modelica_integer) 255);
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revoluteColor[2] = 0.0
*/
void AlyssaVehicle_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[91]] /* vehicle.frontSuspension.cornerR.jointUSR.revoluteColor[2] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revoluteColor[3] = 0.0
*/
void AlyssaVehicle_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[92]] /* vehicle.frontSuspension.cornerR.jointUSR.revoluteColor[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.bearing.phi = 0.0
*/
void AlyssaVehicle_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2367]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.bearing.phi variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.r_shape[1] = 0.0
*/
void AlyssaVehicle_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2469]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.r_shape[2] = 0.0
*/
void AlyssaVehicle_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2470]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.r_shape[3] = 0.0
*/
void AlyssaVehicle_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2471]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.lengthDirection[1] = 0.11001306482721841
*/
void AlyssaVehicle_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.lengthDirection[1] variable */) = 0.11001306482721841;
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.lengthDirection[2] = 0.24752939586124134
*/
void AlyssaVehicle_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.lengthDirection[2] variable */) = 0.24752939586124134;
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.lengthDirection[3] = 0.962614317238161
*/
void AlyssaVehicle_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2468]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.lengthDirection[3] variable */) = 0.962614317238161;
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2472]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.widthDirection[2] = 0.9684929325968497
*/
void AlyssaVehicle_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2473]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.widthDirection[2] variable */) = 0.9684929325968497;
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.widthDirection[3] = -0.24904103981061843
*/
void AlyssaVehicle_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2474]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.widthDirection[3] variable */) = -0.24904103981061843;
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.r_shape[1] = (-0.5) * vehicle.frontSuspension.cornerR.jointUSR.rod1.sphereDiameter
*/
void AlyssaVehicle_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2482]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.r_shape[1] variable */) = (-0.5) * ((data->simulationInfo->realParameter[1214] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphereDiameter PARAM */));
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.r_shape[2] = 0.0
*/
void AlyssaVehicle_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2483]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.r_shape[3] = 0.0
*/
void AlyssaVehicle_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2484]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.lengthDirection[1] = 1.0
*/
void AlyssaVehicle_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2479]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.lengthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.lengthDirection[2] = 0.0
*/
void AlyssaVehicle_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2480]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.lengthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2481]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.widthDirection[1] = 0.0
*/
void AlyssaVehicle_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2485]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.widthDirection[2] = 1.0
*/
void AlyssaVehicle_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2486]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.widthDirection[3] = 0.0
*/
void AlyssaVehicle_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2487]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.color[3] = 0.0
*/
void AlyssaVehicle_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2477]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.color[2] = 0.0
*/
void AlyssaVehicle_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2476]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.color[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 479
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.color[1] = 255.0
*/
void AlyssaVehicle_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2475]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.color[1] variable */) = 255.0;
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.sphereColor[1] = 255
*/
void AlyssaVehicle_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[96]] /* vehicle.frontSuspension.cornerR.jointUSR.sphereColor[1] DISCRETE */) = ((modelica_integer) 255);
  TRACE_POP
}

/*
equation index: 481
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.sphereColor[2] = 0.0
*/
void AlyssaVehicle_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[97]] /* vehicle.frontSuspension.cornerR.jointUSR.sphereColor[2] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 482
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.sphereColor[3] = 0.0
*/
void AlyssaVehicle_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[98]] /* vehicle.frontSuspension.cornerR.jointUSR.sphereColor[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.r_shape[1] = 0.5 * vehicle.frontSuspension.cornerR.jointUSR.rod1.cylinderLength
*/
void AlyssaVehicle_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2496]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.r_shape[1] variable */) = (0.5) * ((data->simulationInfo->realParameter[1189] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.cylinderLength PARAM */));
  TRACE_POP
}

/*
equation index: 484
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.r_shape[2] = 0.0
*/
void AlyssaVehicle_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2497]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 485
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.r_shape[3] = 0.0
*/
void AlyssaVehicle_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.lengthDirection[1] = -1.0
*/
void AlyssaVehicle_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2493]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.lengthDirection[1] variable */) = -1.0;
  TRACE_POP
}
OMC_DISABLE_OPT
void AlyssaVehicle_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  AlyssaVehicle_eqFunction_1(data, threadData);
  AlyssaVehicle_eqFunction_2(data, threadData);
  AlyssaVehicle_eqFunction_3(data, threadData);
  AlyssaVehicle_eqFunction_4(data, threadData);
  AlyssaVehicle_eqFunction_5(data, threadData);
  AlyssaVehicle_eqFunction_6(data, threadData);
  AlyssaVehicle_eqFunction_7(data, threadData);
  AlyssaVehicle_eqFunction_8(data, threadData);
  AlyssaVehicle_eqFunction_9(data, threadData);
  AlyssaVehicle_eqFunction_10(data, threadData);
  AlyssaVehicle_eqFunction_11(data, threadData);
  AlyssaVehicle_eqFunction_12(data, threadData);
  AlyssaVehicle_eqFunction_13(data, threadData);
  AlyssaVehicle_eqFunction_14(data, threadData);
  AlyssaVehicle_eqFunction_15(data, threadData);
  AlyssaVehicle_eqFunction_16(data, threadData);
  AlyssaVehicle_eqFunction_17(data, threadData);
  AlyssaVehicle_eqFunction_18(data, threadData);
  AlyssaVehicle_eqFunction_19(data, threadData);
  AlyssaVehicle_eqFunction_20(data, threadData);
  AlyssaVehicle_eqFunction_21(data, threadData);
  AlyssaVehicle_eqFunction_22(data, threadData);
  AlyssaVehicle_eqFunction_23(data, threadData);
  AlyssaVehicle_eqFunction_24(data, threadData);
  AlyssaVehicle_eqFunction_25(data, threadData);
  AlyssaVehicle_eqFunction_26(data, threadData);
  AlyssaVehicle_eqFunction_27(data, threadData);
  AlyssaVehicle_eqFunction_28(data, threadData);
  AlyssaVehicle_eqFunction_29(data, threadData);
  AlyssaVehicle_eqFunction_30(data, threadData);
  AlyssaVehicle_eqFunction_31(data, threadData);
  AlyssaVehicle_eqFunction_32(data, threadData);
  AlyssaVehicle_eqFunction_33(data, threadData);
  AlyssaVehicle_eqFunction_34(data, threadData);
  AlyssaVehicle_eqFunction_35(data, threadData);
  AlyssaVehicle_eqFunction_36(data, threadData);
  AlyssaVehicle_eqFunction_37(data, threadData);
  AlyssaVehicle_eqFunction_38(data, threadData);
  AlyssaVehicle_eqFunction_39(data, threadData);
  AlyssaVehicle_eqFunction_40(data, threadData);
  AlyssaVehicle_eqFunction_41(data, threadData);
  AlyssaVehicle_eqFunction_42(data, threadData);
  AlyssaVehicle_eqFunction_43(data, threadData);
  AlyssaVehicle_eqFunction_44(data, threadData);
  AlyssaVehicle_eqFunction_45(data, threadData);
  AlyssaVehicle_eqFunction_46(data, threadData);
  AlyssaVehicle_eqFunction_47(data, threadData);
  AlyssaVehicle_eqFunction_48(data, threadData);
  AlyssaVehicle_eqFunction_49(data, threadData);
  AlyssaVehicle_eqFunction_50(data, threadData);
  AlyssaVehicle_eqFunction_51(data, threadData);
  AlyssaVehicle_eqFunction_52(data, threadData);
  AlyssaVehicle_eqFunction_53(data, threadData);
  AlyssaVehicle_eqFunction_54(data, threadData);
  AlyssaVehicle_eqFunction_55(data, threadData);
  AlyssaVehicle_eqFunction_56(data, threadData);
  AlyssaVehicle_eqFunction_57(data, threadData);
  AlyssaVehicle_eqFunction_58(data, threadData);
  AlyssaVehicle_eqFunction_59(data, threadData);
  AlyssaVehicle_eqFunction_60(data, threadData);
  AlyssaVehicle_eqFunction_61(data, threadData);
  AlyssaVehicle_eqFunction_62(data, threadData);
  AlyssaVehicle_eqFunction_63(data, threadData);
  AlyssaVehicle_eqFunction_64(data, threadData);
  AlyssaVehicle_eqFunction_65(data, threadData);
  AlyssaVehicle_eqFunction_66(data, threadData);
  AlyssaVehicle_eqFunction_67(data, threadData);
  AlyssaVehicle_eqFunction_68(data, threadData);
  AlyssaVehicle_eqFunction_69(data, threadData);
  AlyssaVehicle_eqFunction_70(data, threadData);
  AlyssaVehicle_eqFunction_71(data, threadData);
  AlyssaVehicle_eqFunction_72(data, threadData);
  AlyssaVehicle_eqFunction_73(data, threadData);
  AlyssaVehicle_eqFunction_74(data, threadData);
  AlyssaVehicle_eqFunction_75(data, threadData);
  AlyssaVehicle_eqFunction_76(data, threadData);
  AlyssaVehicle_eqFunction_77(data, threadData);
  AlyssaVehicle_eqFunction_78(data, threadData);
  AlyssaVehicle_eqFunction_79(data, threadData);
  AlyssaVehicle_eqFunction_80(data, threadData);
  AlyssaVehicle_eqFunction_81(data, threadData);
  AlyssaVehicle_eqFunction_82(data, threadData);
  AlyssaVehicle_eqFunction_83(data, threadData);
  AlyssaVehicle_eqFunction_84(data, threadData);
  AlyssaVehicle_eqFunction_85(data, threadData);
  AlyssaVehicle_eqFunction_86(data, threadData);
  AlyssaVehicle_eqFunction_87(data, threadData);
  AlyssaVehicle_eqFunction_88(data, threadData);
  AlyssaVehicle_eqFunction_89(data, threadData);
  AlyssaVehicle_eqFunction_90(data, threadData);
  AlyssaVehicle_eqFunction_91(data, threadData);
  AlyssaVehicle_eqFunction_92(data, threadData);
  AlyssaVehicle_eqFunction_93(data, threadData);
  AlyssaVehicle_eqFunction_94(data, threadData);
  AlyssaVehicle_eqFunction_95(data, threadData);
  AlyssaVehicle_eqFunction_96(data, threadData);
  AlyssaVehicle_eqFunction_97(data, threadData);
  AlyssaVehicle_eqFunction_98(data, threadData);
  AlyssaVehicle_eqFunction_99(data, threadData);
  AlyssaVehicle_eqFunction_100(data, threadData);
  AlyssaVehicle_eqFunction_101(data, threadData);
  AlyssaVehicle_eqFunction_102(data, threadData);
  AlyssaVehicle_eqFunction_103(data, threadData);
  AlyssaVehicle_eqFunction_104(data, threadData);
  AlyssaVehicle_eqFunction_105(data, threadData);
  AlyssaVehicle_eqFunction_106(data, threadData);
  AlyssaVehicle_eqFunction_107(data, threadData);
  AlyssaVehicle_eqFunction_108(data, threadData);
  AlyssaVehicle_eqFunction_109(data, threadData);
  AlyssaVehicle_eqFunction_110(data, threadData);
  AlyssaVehicle_eqFunction_111(data, threadData);
  AlyssaVehicle_eqFunction_112(data, threadData);
  AlyssaVehicle_eqFunction_113(data, threadData);
  AlyssaVehicle_eqFunction_114(data, threadData);
  AlyssaVehicle_eqFunction_115(data, threadData);
  AlyssaVehicle_eqFunction_116(data, threadData);
  AlyssaVehicle_eqFunction_117(data, threadData);
  AlyssaVehicle_eqFunction_118(data, threadData);
  AlyssaVehicle_eqFunction_119(data, threadData);
  AlyssaVehicle_eqFunction_120(data, threadData);
  AlyssaVehicle_eqFunction_121(data, threadData);
  AlyssaVehicle_eqFunction_122(data, threadData);
  AlyssaVehicle_eqFunction_123(data, threadData);
  AlyssaVehicle_eqFunction_124(data, threadData);
  AlyssaVehicle_eqFunction_125(data, threadData);
  AlyssaVehicle_eqFunction_126(data, threadData);
  AlyssaVehicle_eqFunction_127(data, threadData);
  AlyssaVehicle_eqFunction_128(data, threadData);
  AlyssaVehicle_eqFunction_129(data, threadData);
  AlyssaVehicle_eqFunction_130(data, threadData);
  AlyssaVehicle_eqFunction_131(data, threadData);
  AlyssaVehicle_eqFunction_132(data, threadData);
  AlyssaVehicle_eqFunction_133(data, threadData);
  AlyssaVehicle_eqFunction_134(data, threadData);
  AlyssaVehicle_eqFunction_135(data, threadData);
  AlyssaVehicle_eqFunction_136(data, threadData);
  AlyssaVehicle_eqFunction_137(data, threadData);
  AlyssaVehicle_eqFunction_138(data, threadData);
  AlyssaVehicle_eqFunction_139(data, threadData);
  AlyssaVehicle_eqFunction_140(data, threadData);
  AlyssaVehicle_eqFunction_141(data, threadData);
  AlyssaVehicle_eqFunction_142(data, threadData);
  AlyssaVehicle_eqFunction_143(data, threadData);
  AlyssaVehicle_eqFunction_144(data, threadData);
  AlyssaVehicle_eqFunction_145(data, threadData);
  AlyssaVehicle_eqFunction_146(data, threadData);
  AlyssaVehicle_eqFunction_147(data, threadData);
  AlyssaVehicle_eqFunction_148(data, threadData);
  AlyssaVehicle_eqFunction_149(data, threadData);
  AlyssaVehicle_eqFunction_150(data, threadData);
  AlyssaVehicle_eqFunction_151(data, threadData);
  AlyssaVehicle_eqFunction_152(data, threadData);
  AlyssaVehicle_eqFunction_153(data, threadData);
  AlyssaVehicle_eqFunction_154(data, threadData);
  AlyssaVehicle_eqFunction_155(data, threadData);
  AlyssaVehicle_eqFunction_156(data, threadData);
  AlyssaVehicle_eqFunction_157(data, threadData);
  AlyssaVehicle_eqFunction_158(data, threadData);
  AlyssaVehicle_eqFunction_159(data, threadData);
  AlyssaVehicle_eqFunction_160(data, threadData);
  AlyssaVehicle_eqFunction_161(data, threadData);
  AlyssaVehicle_eqFunction_162(data, threadData);
  AlyssaVehicle_eqFunction_163(data, threadData);
  AlyssaVehicle_eqFunction_164(data, threadData);
  AlyssaVehicle_eqFunction_165(data, threadData);
  AlyssaVehicle_eqFunction_166(data, threadData);
  AlyssaVehicle_eqFunction_167(data, threadData);
  AlyssaVehicle_eqFunction_168(data, threadData);
  AlyssaVehicle_eqFunction_169(data, threadData);
  AlyssaVehicle_eqFunction_170(data, threadData);
  AlyssaVehicle_eqFunction_171(data, threadData);
  AlyssaVehicle_eqFunction_172(data, threadData);
  AlyssaVehicle_eqFunction_173(data, threadData);
  AlyssaVehicle_eqFunction_174(data, threadData);
  AlyssaVehicle_eqFunction_175(data, threadData);
  AlyssaVehicle_eqFunction_176(data, threadData);
  AlyssaVehicle_eqFunction_177(data, threadData);
  AlyssaVehicle_eqFunction_178(data, threadData);
  AlyssaVehicle_eqFunction_179(data, threadData);
  AlyssaVehicle_eqFunction_180(data, threadData);
  AlyssaVehicle_eqFunction_181(data, threadData);
  AlyssaVehicle_eqFunction_182(data, threadData);
  AlyssaVehicle_eqFunction_183(data, threadData);
  AlyssaVehicle_eqFunction_184(data, threadData);
  AlyssaVehicle_eqFunction_185(data, threadData);
  AlyssaVehicle_eqFunction_186(data, threadData);
  AlyssaVehicle_eqFunction_187(data, threadData);
  AlyssaVehicle_eqFunction_188(data, threadData);
  AlyssaVehicle_eqFunction_189(data, threadData);
  AlyssaVehicle_eqFunction_190(data, threadData);
  AlyssaVehicle_eqFunction_191(data, threadData);
  AlyssaVehicle_eqFunction_192(data, threadData);
  AlyssaVehicle_eqFunction_193(data, threadData);
  AlyssaVehicle_eqFunction_194(data, threadData);
  AlyssaVehicle_eqFunction_195(data, threadData);
  AlyssaVehicle_eqFunction_196(data, threadData);
  AlyssaVehicle_eqFunction_197(data, threadData);
  AlyssaVehicle_eqFunction_198(data, threadData);
  AlyssaVehicle_eqFunction_199(data, threadData);
  AlyssaVehicle_eqFunction_200(data, threadData);
  AlyssaVehicle_eqFunction_201(data, threadData);
  AlyssaVehicle_eqFunction_202(data, threadData);
  AlyssaVehicle_eqFunction_203(data, threadData);
  AlyssaVehicle_eqFunction_204(data, threadData);
  AlyssaVehicle_eqFunction_205(data, threadData);
  AlyssaVehicle_eqFunction_206(data, threadData);
  AlyssaVehicle_eqFunction_207(data, threadData);
  AlyssaVehicle_eqFunction_208(data, threadData);
  AlyssaVehicle_eqFunction_209(data, threadData);
  AlyssaVehicle_eqFunction_210(data, threadData);
  AlyssaVehicle_eqFunction_211(data, threadData);
  AlyssaVehicle_eqFunction_212(data, threadData);
  AlyssaVehicle_eqFunction_213(data, threadData);
  AlyssaVehicle_eqFunction_214(data, threadData);
  AlyssaVehicle_eqFunction_215(data, threadData);
  AlyssaVehicle_eqFunction_216(data, threadData);
  AlyssaVehicle_eqFunction_217(data, threadData);
  AlyssaVehicle_eqFunction_218(data, threadData);
  AlyssaVehicle_eqFunction_219(data, threadData);
  AlyssaVehicle_eqFunction_220(data, threadData);
  AlyssaVehicle_eqFunction_221(data, threadData);
  AlyssaVehicle_eqFunction_222(data, threadData);
  AlyssaVehicle_eqFunction_223(data, threadData);
  AlyssaVehicle_eqFunction_224(data, threadData);
  AlyssaVehicle_eqFunction_225(data, threadData);
  AlyssaVehicle_eqFunction_226(data, threadData);
  AlyssaVehicle_eqFunction_227(data, threadData);
  AlyssaVehicle_eqFunction_228(data, threadData);
  AlyssaVehicle_eqFunction_229(data, threadData);
  AlyssaVehicle_eqFunction_230(data, threadData);
  AlyssaVehicle_eqFunction_231(data, threadData);
  AlyssaVehicle_eqFunction_232(data, threadData);
  AlyssaVehicle_eqFunction_233(data, threadData);
  AlyssaVehicle_eqFunction_234(data, threadData);
  AlyssaVehicle_eqFunction_235(data, threadData);
  AlyssaVehicle_eqFunction_236(data, threadData);
  AlyssaVehicle_eqFunction_237(data, threadData);
  AlyssaVehicle_eqFunction_238(data, threadData);
  AlyssaVehicle_eqFunction_239(data, threadData);
  AlyssaVehicle_eqFunction_240(data, threadData);
  AlyssaVehicle_eqFunction_241(data, threadData);
  AlyssaVehicle_eqFunction_242(data, threadData);
  AlyssaVehicle_eqFunction_243(data, threadData);
  AlyssaVehicle_eqFunction_244(data, threadData);
  AlyssaVehicle_eqFunction_245(data, threadData);
  AlyssaVehicle_eqFunction_246(data, threadData);
  AlyssaVehicle_eqFunction_247(data, threadData);
  AlyssaVehicle_eqFunction_248(data, threadData);
  AlyssaVehicle_eqFunction_249(data, threadData);
  AlyssaVehicle_eqFunction_250(data, threadData);
  AlyssaVehicle_eqFunction_251(data, threadData);
  AlyssaVehicle_eqFunction_252(data, threadData);
  AlyssaVehicle_eqFunction_253(data, threadData);
  AlyssaVehicle_eqFunction_254(data, threadData);
  AlyssaVehicle_eqFunction_255(data, threadData);
  AlyssaVehicle_eqFunction_256(data, threadData);
  AlyssaVehicle_eqFunction_257(data, threadData);
  AlyssaVehicle_eqFunction_258(data, threadData);
  AlyssaVehicle_eqFunction_259(data, threadData);
  AlyssaVehicle_eqFunction_260(data, threadData);
  AlyssaVehicle_eqFunction_261(data, threadData);
  AlyssaVehicle_eqFunction_262(data, threadData);
  AlyssaVehicle_eqFunction_263(data, threadData);
  AlyssaVehicle_eqFunction_264(data, threadData);
  AlyssaVehicle_eqFunction_265(data, threadData);
  AlyssaVehicle_eqFunction_266(data, threadData);
  AlyssaVehicle_eqFunction_267(data, threadData);
  AlyssaVehicle_eqFunction_268(data, threadData);
  AlyssaVehicle_eqFunction_269(data, threadData);
  AlyssaVehicle_eqFunction_270(data, threadData);
  AlyssaVehicle_eqFunction_271(data, threadData);
  AlyssaVehicle_eqFunction_272(data, threadData);
  AlyssaVehicle_eqFunction_273(data, threadData);
  AlyssaVehicle_eqFunction_274(data, threadData);
  AlyssaVehicle_eqFunction_275(data, threadData);
  AlyssaVehicle_eqFunction_276(data, threadData);
  AlyssaVehicle_eqFunction_277(data, threadData);
  AlyssaVehicle_eqFunction_278(data, threadData);
  AlyssaVehicle_eqFunction_279(data, threadData);
  AlyssaVehicle_eqFunction_280(data, threadData);
  AlyssaVehicle_eqFunction_281(data, threadData);
  AlyssaVehicle_eqFunction_282(data, threadData);
  AlyssaVehicle_eqFunction_283(data, threadData);
  AlyssaVehicle_eqFunction_284(data, threadData);
  AlyssaVehicle_eqFunction_285(data, threadData);
  AlyssaVehicle_eqFunction_286(data, threadData);
  AlyssaVehicle_eqFunction_287(data, threadData);
  AlyssaVehicle_eqFunction_288(data, threadData);
  AlyssaVehicle_eqFunction_289(data, threadData);
  AlyssaVehicle_eqFunction_290(data, threadData);
  AlyssaVehicle_eqFunction_291(data, threadData);
  AlyssaVehicle_eqFunction_292(data, threadData);
  AlyssaVehicle_eqFunction_293(data, threadData);
  AlyssaVehicle_eqFunction_294(data, threadData);
  AlyssaVehicle_eqFunction_295(data, threadData);
  AlyssaVehicle_eqFunction_296(data, threadData);
  AlyssaVehicle_eqFunction_297(data, threadData);
  AlyssaVehicle_eqFunction_298(data, threadData);
  AlyssaVehicle_eqFunction_299(data, threadData);
  AlyssaVehicle_eqFunction_300(data, threadData);
  AlyssaVehicle_eqFunction_301(data, threadData);
  AlyssaVehicle_eqFunction_302(data, threadData);
  AlyssaVehicle_eqFunction_303(data, threadData);
  AlyssaVehicle_eqFunction_304(data, threadData);
  AlyssaVehicle_eqFunction_305(data, threadData);
  AlyssaVehicle_eqFunction_306(data, threadData);
  AlyssaVehicle_eqFunction_307(data, threadData);
  AlyssaVehicle_eqFunction_308(data, threadData);
  AlyssaVehicle_eqFunction_309(data, threadData);
  AlyssaVehicle_eqFunction_310(data, threadData);
  AlyssaVehicle_eqFunction_311(data, threadData);
  AlyssaVehicle_eqFunction_312(data, threadData);
  AlyssaVehicle_eqFunction_313(data, threadData);
  AlyssaVehicle_eqFunction_314(data, threadData);
  AlyssaVehicle_eqFunction_315(data, threadData);
  AlyssaVehicle_eqFunction_316(data, threadData);
  AlyssaVehicle_eqFunction_317(data, threadData);
  AlyssaVehicle_eqFunction_318(data, threadData);
  AlyssaVehicle_eqFunction_319(data, threadData);
  AlyssaVehicle_eqFunction_320(data, threadData);
  AlyssaVehicle_eqFunction_321(data, threadData);
  AlyssaVehicle_eqFunction_322(data, threadData);
  AlyssaVehicle_eqFunction_323(data, threadData);
  AlyssaVehicle_eqFunction_324(data, threadData);
  AlyssaVehicle_eqFunction_325(data, threadData);
  AlyssaVehicle_eqFunction_326(data, threadData);
  AlyssaVehicle_eqFunction_327(data, threadData);
  AlyssaVehicle_eqFunction_328(data, threadData);
  AlyssaVehicle_eqFunction_329(data, threadData);
  AlyssaVehicle_eqFunction_330(data, threadData);
  AlyssaVehicle_eqFunction_331(data, threadData);
  AlyssaVehicle_eqFunction_332(data, threadData);
  AlyssaVehicle_eqFunction_333(data, threadData);
  AlyssaVehicle_eqFunction_334(data, threadData);
  AlyssaVehicle_eqFunction_335(data, threadData);
  AlyssaVehicle_eqFunction_336(data, threadData);
  AlyssaVehicle_eqFunction_337(data, threadData);
  AlyssaVehicle_eqFunction_338(data, threadData);
  AlyssaVehicle_eqFunction_339(data, threadData);
  AlyssaVehicle_eqFunction_340(data, threadData);
  AlyssaVehicle_eqFunction_341(data, threadData);
  AlyssaVehicle_eqFunction_342(data, threadData);
  AlyssaVehicle_eqFunction_343(data, threadData);
  AlyssaVehicle_eqFunction_344(data, threadData);
  AlyssaVehicle_eqFunction_345(data, threadData);
  AlyssaVehicle_eqFunction_346(data, threadData);
  AlyssaVehicle_eqFunction_347(data, threadData);
  AlyssaVehicle_eqFunction_348(data, threadData);
  AlyssaVehicle_eqFunction_349(data, threadData);
  AlyssaVehicle_eqFunction_350(data, threadData);
  AlyssaVehicle_eqFunction_351(data, threadData);
  AlyssaVehicle_eqFunction_352(data, threadData);
  AlyssaVehicle_eqFunction_353(data, threadData);
  AlyssaVehicle_eqFunction_354(data, threadData);
  AlyssaVehicle_eqFunction_355(data, threadData);
  AlyssaVehicle_eqFunction_356(data, threadData);
  AlyssaVehicle_eqFunction_357(data, threadData);
  AlyssaVehicle_eqFunction_358(data, threadData);
  AlyssaVehicle_eqFunction_359(data, threadData);
  AlyssaVehicle_eqFunction_360(data, threadData);
  AlyssaVehicle_eqFunction_361(data, threadData);
  AlyssaVehicle_eqFunction_362(data, threadData);
  AlyssaVehicle_eqFunction_363(data, threadData);
  AlyssaVehicle_eqFunction_364(data, threadData);
  AlyssaVehicle_eqFunction_365(data, threadData);
  AlyssaVehicle_eqFunction_366(data, threadData);
  AlyssaVehicle_eqFunction_367(data, threadData);
  AlyssaVehicle_eqFunction_368(data, threadData);
  AlyssaVehicle_eqFunction_369(data, threadData);
  AlyssaVehicle_eqFunction_370(data, threadData);
  AlyssaVehicle_eqFunction_371(data, threadData);
  AlyssaVehicle_eqFunction_372(data, threadData);
  AlyssaVehicle_eqFunction_373(data, threadData);
  AlyssaVehicle_eqFunction_374(data, threadData);
  AlyssaVehicle_eqFunction_375(data, threadData);
  AlyssaVehicle_eqFunction_376(data, threadData);
  AlyssaVehicle_eqFunction_377(data, threadData);
  AlyssaVehicle_eqFunction_378(data, threadData);
  AlyssaVehicle_eqFunction_379(data, threadData);
  AlyssaVehicle_eqFunction_380(data, threadData);
  AlyssaVehicle_eqFunction_381(data, threadData);
  AlyssaVehicle_eqFunction_382(data, threadData);
  AlyssaVehicle_eqFunction_383(data, threadData);
  AlyssaVehicle_eqFunction_384(data, threadData);
  AlyssaVehicle_eqFunction_385(data, threadData);
  AlyssaVehicle_eqFunction_386(data, threadData);
  AlyssaVehicle_eqFunction_387(data, threadData);
  AlyssaVehicle_eqFunction_388(data, threadData);
  AlyssaVehicle_eqFunction_389(data, threadData);
  AlyssaVehicle_eqFunction_390(data, threadData);
  AlyssaVehicle_eqFunction_391(data, threadData);
  AlyssaVehicle_eqFunction_392(data, threadData);
  AlyssaVehicle_eqFunction_393(data, threadData);
  AlyssaVehicle_eqFunction_394(data, threadData);
  AlyssaVehicle_eqFunction_395(data, threadData);
  AlyssaVehicle_eqFunction_396(data, threadData);
  AlyssaVehicle_eqFunction_397(data, threadData);
  AlyssaVehicle_eqFunction_398(data, threadData);
  AlyssaVehicle_eqFunction_399(data, threadData);
  AlyssaVehicle_eqFunction_400(data, threadData);
  AlyssaVehicle_eqFunction_401(data, threadData);
  AlyssaVehicle_eqFunction_402(data, threadData);
  AlyssaVehicle_eqFunction_403(data, threadData);
  AlyssaVehicle_eqFunction_404(data, threadData);
  AlyssaVehicle_eqFunction_405(data, threadData);
  AlyssaVehicle_eqFunction_406(data, threadData);
  AlyssaVehicle_eqFunction_407(data, threadData);
  AlyssaVehicle_eqFunction_408(data, threadData);
  AlyssaVehicle_eqFunction_409(data, threadData);
  AlyssaVehicle_eqFunction_410(data, threadData);
  AlyssaVehicle_eqFunction_411(data, threadData);
  AlyssaVehicle_eqFunction_412(data, threadData);
  AlyssaVehicle_eqFunction_413(data, threadData);
  AlyssaVehicle_eqFunction_414(data, threadData);
  AlyssaVehicle_eqFunction_415(data, threadData);
  AlyssaVehicle_eqFunction_416(data, threadData);
  AlyssaVehicle_eqFunction_417(data, threadData);
  AlyssaVehicle_eqFunction_418(data, threadData);
  AlyssaVehicle_eqFunction_419(data, threadData);
  AlyssaVehicle_eqFunction_420(data, threadData);
  AlyssaVehicle_eqFunction_421(data, threadData);
  AlyssaVehicle_eqFunction_422(data, threadData);
  AlyssaVehicle_eqFunction_423(data, threadData);
  AlyssaVehicle_eqFunction_424(data, threadData);
  AlyssaVehicle_eqFunction_425(data, threadData);
  AlyssaVehicle_eqFunction_426(data, threadData);
  AlyssaVehicle_eqFunction_427(data, threadData);
  AlyssaVehicle_eqFunction_428(data, threadData);
  AlyssaVehicle_eqFunction_429(data, threadData);
  AlyssaVehicle_eqFunction_430(data, threadData);
  AlyssaVehicle_eqFunction_431(data, threadData);
  AlyssaVehicle_eqFunction_432(data, threadData);
  AlyssaVehicle_eqFunction_433(data, threadData);
  AlyssaVehicle_eqFunction_434(data, threadData);
  AlyssaVehicle_eqFunction_435(data, threadData);
  AlyssaVehicle_eqFunction_436(data, threadData);
  AlyssaVehicle_eqFunction_437(data, threadData);
  AlyssaVehicle_eqFunction_438(data, threadData);
  AlyssaVehicle_eqFunction_439(data, threadData);
  AlyssaVehicle_eqFunction_440(data, threadData);
  AlyssaVehicle_eqFunction_441(data, threadData);
  AlyssaVehicle_eqFunction_442(data, threadData);
  AlyssaVehicle_eqFunction_443(data, threadData);
  AlyssaVehicle_eqFunction_444(data, threadData);
  AlyssaVehicle_eqFunction_445(data, threadData);
  AlyssaVehicle_eqFunction_446(data, threadData);
  AlyssaVehicle_eqFunction_447(data, threadData);
  AlyssaVehicle_eqFunction_448(data, threadData);
  AlyssaVehicle_eqFunction_449(data, threadData);
  AlyssaVehicle_eqFunction_450(data, threadData);
  AlyssaVehicle_eqFunction_451(data, threadData);
  AlyssaVehicle_eqFunction_452(data, threadData);
  AlyssaVehicle_eqFunction_453(data, threadData);
  AlyssaVehicle_eqFunction_454(data, threadData);
  AlyssaVehicle_eqFunction_455(data, threadData);
  AlyssaVehicle_eqFunction_456(data, threadData);
  AlyssaVehicle_eqFunction_457(data, threadData);
  AlyssaVehicle_eqFunction_458(data, threadData);
  AlyssaVehicle_eqFunction_459(data, threadData);
  AlyssaVehicle_eqFunction_460(data, threadData);
  AlyssaVehicle_eqFunction_461(data, threadData);
  AlyssaVehicle_eqFunction_462(data, threadData);
  AlyssaVehicle_eqFunction_463(data, threadData);
  AlyssaVehicle_eqFunction_464(data, threadData);
  AlyssaVehicle_eqFunction_465(data, threadData);
  AlyssaVehicle_eqFunction_466(data, threadData);
  AlyssaVehicle_eqFunction_467(data, threadData);
  AlyssaVehicle_eqFunction_468(data, threadData);
  AlyssaVehicle_eqFunction_469(data, threadData);
  AlyssaVehicle_eqFunction_470(data, threadData);
  AlyssaVehicle_eqFunction_471(data, threadData);
  AlyssaVehicle_eqFunction_472(data, threadData);
  AlyssaVehicle_eqFunction_473(data, threadData);
  AlyssaVehicle_eqFunction_474(data, threadData);
  AlyssaVehicle_eqFunction_475(data, threadData);
  AlyssaVehicle_eqFunction_476(data, threadData);
  AlyssaVehicle_eqFunction_477(data, threadData);
  AlyssaVehicle_eqFunction_478(data, threadData);
  AlyssaVehicle_eqFunction_479(data, threadData);
  AlyssaVehicle_eqFunction_480(data, threadData);
  AlyssaVehicle_eqFunction_481(data, threadData);
  AlyssaVehicle_eqFunction_482(data, threadData);
  AlyssaVehicle_eqFunction_483(data, threadData);
  AlyssaVehicle_eqFunction_484(data, threadData);
  AlyssaVehicle_eqFunction_485(data, threadData);
  AlyssaVehicle_eqFunction_486(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif
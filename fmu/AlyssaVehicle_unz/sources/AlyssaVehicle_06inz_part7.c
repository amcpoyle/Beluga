#include "AlyssaVehicle_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern void AlyssaVehicle_eqFunction_7735(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7740(DATA *data, threadData_t *threadData);


/*
equation index: 3423
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.shape_b.r_shape[2] = vehicle.rearSuspension.cornerR.coilover.e_a[2] * min(vehicle.rearSuspension.cornerR.coilover.length_a, vehicle.rearSuspension.cornerR.coilover.s)
*/
void AlyssaVehicle_eqFunction_3423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3423};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4132]] /* vehicle.rearSuspension.cornerR.coilover.shape_b.r_shape[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4076]] /* vehicle.rearSuspension.cornerR.coilover.e_a[2] variable */)) * (fmin((data->simulationInfo->realParameter[2570] /* vehicle.rearSuspension.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4103]] /* vehicle.rearSuspension.cornerR.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7734(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7739(DATA *data, threadData_t *threadData);


/*
equation index: 3426
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.shape_b.r_shape[1] = vehicle.rearSuspension.cornerR.coilover.e_a[1] * min(vehicle.rearSuspension.cornerR.coilover.length_a, vehicle.rearSuspension.cornerR.coilover.s)
*/
void AlyssaVehicle_eqFunction_3426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3426};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4131]] /* vehicle.rearSuspension.cornerR.coilover.shape_b.r_shape[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4075]] /* vehicle.rearSuspension.cornerR.coilover.e_a[1] variable */)) * (fmin((data->simulationInfo->realParameter[2570] /* vehicle.rearSuspension.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4103]] /* vehicle.rearSuspension.cornerR.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7730(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7731(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7756(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7757(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7758(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7759(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7760(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7761(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7763(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7765(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7764(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7762(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7767(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7766(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7768(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7775(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7776(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7780(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7792(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7782(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7781(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7793(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7777(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7790(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7779(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7778(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7791(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7794(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7784(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7783(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7788(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7786(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7785(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7789(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7798(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7796(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7795(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7797(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7799(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7800(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7801(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7787(DATA *data, threadData_t *threadData);


/*
equation index: 3469
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springArm.frame_b.R.w[2] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.vehicleBody.body.w_a[2] - vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.vehicleBody.body.w_a[3]
*/
void AlyssaVehicle_eqFunction_3469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3469};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4466]] /* vehicle.rearSuspension.cornerR.springArm.frame_b.R.w[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4239]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5049]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4238]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5050]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7754(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7886(DATA *data, threadData_t *threadData);


/*
equation index: 3472
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.angle = if noEvent(vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle == 0.0) then vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle else ($DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.ksin_angle * vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle - vehicle.rearSuspension.cornerR.jointUSR.revolute.ksin_angle * $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle) / (vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (vehicle.rearSuspension.cornerR.jointUSR.revolute.ksin_angle / vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle) ^ 2.0))
*/
void AlyssaVehicle_eqFunction_3472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3472};
  modelica_real tmp491;
  modelica_real tmp492;
  modelica_boolean tmp493;
  modelica_real tmp494;
  tmp493 = (modelica_boolean)((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4268]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */) == 0.0);
  if(tmp493)
  {
    tmp494 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4268]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */);
  }
  else
  {
    tmp491 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4268]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */);
    tmp492 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4269]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.ksin_angle DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4268]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */),"vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle",equationIndexes);
    tmp494 = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[873]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.ksin_angle) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4268]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4269]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.ksin_angle DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[872]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle) DUMMY_DER */))),((tmp491 * tmp491)) * (1.0 + (tmp492 * tmp492)),"vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (vehicle.rearSuspension.cornerR.jointUSR.revolute.ksin_angle / vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle) ^ 2.0)",equationIndexes);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[867]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.angle) DUMMY_DER */) = tmp494;
  TRACE_POP
}

/*
equation index: 3473
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.w[1] = -$DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_3473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3473};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4240]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.w[1] DUMMY_STATE */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[867]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7889(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7893(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7894(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7891(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7892(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7890(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7926(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7947(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7948(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7953(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7954(DATA *data, threadData_t *threadData);


/*
equation index: 3485
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.frame_ia.R.w[1] = vehicle.rearSuspension.cornerR.jointUSR.rod1.R_rel_ia.w[1] - vehicle.rearSuspension.cornerR.jointUSR.rod1.e3_a[3] * vehicle.rearSuspension.cornerR.jointUSR.frame_a.R.w[3] - vehicle.rearSuspension.cornerR.jointUSR.rod1.e3_a[2] * vehicle.rearSuspension.cornerR.jointUSR.frame_a.R.w[2] - vehicle.rearSuspension.cornerR.jointUSR.rod1.e3_a[1] * vehicle.rearSuspension.cornerR.jointUSR.frame_a.R.w[1]
*/
void AlyssaVehicle_eqFunction_3485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3485};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4167]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_ia.R.w[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4283]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.R_rel_ia.w[1] DUMMY_STATE */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4307]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.e3_a[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4152]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4306]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.e3_a[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4151]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_a.R.w[2] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4305]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.e3_a[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4150]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_a.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7949(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7931(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7950(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7952(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7956(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7960(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7951(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7955(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7961(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7962(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7957(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7966(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7964(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7963(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7965(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7967(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7968(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7969(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7934(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7935(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7932(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7933(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7936(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7937(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7938(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7945(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7944(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7940(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7942(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7941(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7946(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7927(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7928(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7930(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8051(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8044(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8037(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7929(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8050(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8043(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8036(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7943(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7939(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8049(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8042(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8035(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7899(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7900(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7897(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7898(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7895(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7896(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7901(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7902(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7903(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7917(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7904(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7909(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7908(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7910(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7905(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7915(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7914(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7916(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7911(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7913(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7912(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7907(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7906(DATA *data, threadData_t *threadData);


/*
equation index: 3555
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] = cos(vehicle.rearSuspension.cornerR.jointUSR.revolute.angle) * $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_3555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3555};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[864]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */) = (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4243]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[867]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3556
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] = (-sin(vehicle.rearSuspension.cornerR.jointUSR.revolute.angle)) * $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_3556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3556};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4243]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[867]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3557
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,3] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,3] + $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,3] + vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,3] + $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3557};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[915]] /* der(vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4238]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(vehicle.chassisFrame.R.T[2,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[864]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4239]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* der(vehicle.chassisFrame.R.T[3,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3558
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,2] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,2] + $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,2] + vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,2] + $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3558};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[914]] /* der(vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,2]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4238]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(vehicle.chassisFrame.R.T[2,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[864]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1328]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4239]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* der(vehicle.chassisFrame.R.T[3,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3559
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,1] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,1] + $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,1] + vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,1] + $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3559};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[913]] /* der(vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,1]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4238]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* der(vehicle.chassisFrame.R.T[2,1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[864]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4239]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* der(vehicle.chassisFrame.R.T[3,1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3560
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,3] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[2,3] + $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,3] + (-vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) * $DER.vehicle.chassisFrame.R.T[3,3] - $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3560};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* der(vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4239]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(vehicle.chassisFrame.R.T[2,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4238]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* der(vehicle.chassisFrame.R.T[3,3]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[864]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3561
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,1] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[2,1] + $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,1] + (-vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) * $DER.vehicle.chassisFrame.R.T[3,1] - $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3561};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[911]] /* der(vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,1]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4239]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* der(vehicle.chassisFrame.R.T[2,1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4238]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* der(vehicle.chassisFrame.R.T[3,1]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[864]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3562
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.positiveBranch = AlyssaModel.Experiments.OptimalControlFMU.vehicle.rearSuspension.cornerR.tieRod.revolute.selectBranch(vehicle.rearSuspension.cornerR.tieRod.revolute.lengthConstraint, {0.0, 0.222824801502141, 0.9748585065718673}, 0.017453292519943295 * (vehicle.rearSuspension.cornerR.tieRod.revolute.phi_offset + vehicle.rearSuspension.cornerR.tieRod.revolute.phi_guess), vehicle.rearSuspension.cornerR.tieRod.revolute.r_a, vehicle.rearSuspension.cornerR.tieRod.revolute.r_b)
*/
void AlyssaVehicle_eqFunction_3562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3562};
  real_array tmp495;
  real_array tmp496;
  real_array_create(&tmp495, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4625]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp496, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4628]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.r_b[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[198] /* vehicle.rearSuspension.cornerR.tieRod.revolute.positiveBranch PARAM */) = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerR_tieRod_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[2978] /* vehicle.rearSuspension.cornerR.tieRod.revolute.lengthConstraint PARAM */), _OMC_LIT25, (0.017453292519943295) * ((data->simulationInfo->realParameter[2983] /* vehicle.rearSuspension.cornerR.tieRod.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[2982] /* vehicle.rearSuspension.cornerR.tieRod.revolute.phi_guess PARAM */)), tmp495, tmp496);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7803(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7971(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7802(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7804(DATA *data, threadData_t *threadData);


/*
equation index: 3567
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[3,1] = 0.222824801502141 * sin(vehicle.rearSuspension.cornerR.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3567};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4589]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[3,1] DUMMY_STATE */) = (0.222824801502141) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4595]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3568
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[2,1] = (-0.9748585065718673) * sin(vehicle.rearSuspension.cornerR.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3568};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4586]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[2,1] DUMMY_STATE */) = (-0.9748585065718673) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4595]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3569
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,3] = (-0.222824801502141) * sin(vehicle.rearSuspension.cornerR.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3569};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4585]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,3] DUMMY_STATE */) = (-0.222824801502141) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4595]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3570
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,2] = 0.9748585065718673 * sin(vehicle.rearSuspension.cornerR.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3570};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4584]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,2] DUMMY_STATE */) = (0.9748585065718673) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4595]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7805(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7814(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7813(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7959(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7809(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7808(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7828(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7821(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7836(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7807(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7806(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7818(DATA *data, threadData_t *threadData);


/*
equation index: 3583
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.frame_a.r_0[2] = vehicle.rearSuspension.cornerR.jointUSR.frame_ia.r_0[2] + 0.13 * vehicle.rearSuspension.cornerR.upright.frame_a.R.T[2,2] + 0.2 * vehicle.rearSuspension.cornerR.upright.frame_a.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3583};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4820]] /* vehicle.rearSuspension.cornerR.upright.frame_a.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4174]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_ia.r_0[2] DUMMY_STATE */) + (0.13) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4811]] /* vehicle.rearSuspension.cornerR.upright.frame_a.R.T[2,2] DUMMY_STATE */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4814]] /* vehicle.rearSuspension.cornerR.upright.frame_a.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3584
type: SIMPLE_ASSIGN
vehicle.wheelRR.contactPatch.frame_a.r_0[2] = vehicle.rearSuspension.cornerR.upright.frame_a.r_0[2]
*/
void AlyssaVehicle_eqFunction_3584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3584};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5372]] /* vehicle.wheelRR.contactPatch.frame_a.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4820]] /* vehicle.rearSuspension.cornerR.upright.frame_a.r_0[2] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7831(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7832(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7819(DATA *data, threadData_t *threadData);


/*
equation index: 3588
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,2] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[1,2] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[2,2] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3588};
  real_array tmp497;
  real_array tmp498;
  real_array tmp499;
  real_array tmp500;
  real_array tmp501;
  real_array tmp502;
  real_array tmp503;
  real_array tmp504;
  real_array tmp505;
  real_array tmp506;
  real_array tmp507;
  real_array tmp508;
  real_array tmp509;
  real_array tmp510;
  real_array tmp511;
  real_array tmp512;
  real_array tmp513;
  real_array tmp514;
  real_array tmp515;
  real_array tmp516;
  real_array tmp517;
  real_array tmp518;
  real_array tmp519;
  real_array tmp520;
  real_array tmp521;
  real_array tmp522;
  real_array tmp523;
  real_array tmp524;
  real_array tmp525;
  real_array tmp526;
  real_array_create(&tmp497, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp497, ((modelica_integer) 2) - ndims_base_array(&tmp497), &tmp498);
  real_array_create(&tmp499, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp499, ((modelica_integer) 2) - ndims_base_array(&tmp499), &tmp500);
  transpose_alloc_real_array(&tmp500, &tmp501);
  real_array_create(&tmp502, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp502, ((modelica_integer) 2) - ndims_base_array(&tmp502), &tmp503);
  real_array_create(&tmp504, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp504, ((modelica_integer) 2) - ndims_base_array(&tmp504), &tmp505);
  transpose_alloc_real_array(&tmp505, &tmp506);
  real_array_create(&tmp507, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp507, ((modelica_integer) 2) - ndims_base_array(&tmp507), &tmp508);
  real_array_create(&tmp509, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp509, ((modelica_integer) 2) - ndims_base_array(&tmp509), &tmp510);
  transpose_alloc_real_array(&tmp510, &tmp511);
  real_array_create(&tmp512, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp512, ((modelica_integer) 2) - ndims_base_array(&tmp512), &tmp513);
  real_array_create(&tmp514, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp514, ((modelica_integer) 2) - ndims_base_array(&tmp514), &tmp515);
  transpose_alloc_real_array(&tmp515, &tmp516);
  real_array_create(&tmp517, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp517, ((modelica_integer) 2) - ndims_base_array(&tmp517), &tmp518);
  real_array_create(&tmp519, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp519, ((modelica_integer) 2) - ndims_base_array(&tmp519), &tmp520);
  transpose_alloc_real_array(&tmp520, &tmp521);
  real_array_create(&tmp522, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp522, ((modelica_integer) 2) - ndims_base_array(&tmp522), &tmp523);
  real_array_create(&tmp524, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp524, ((modelica_integer) 2) - ndims_base_array(&tmp524), &tmp525);
  transpose_alloc_real_array(&tmp525, &tmp526);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5424]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp498, tmp501), 2, 0) + ((data->simulationInfo->realParameter[3944] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp503, tmp506), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3192]] /* vehicle.hubRR.bearingFrame.R.T[1,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp508, tmp511), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp513, tmp516), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3195]] /* vehicle.hubRR.bearingFrame.R.T[2,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp518, tmp521), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp523, tmp526), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3198]] /* vehicle.hubRR.bearingFrame.R.T[3,2] variable */));
  TRACE_POP
}

/*
equation index: 3589
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,2] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[1,2] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[2,2] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3589};
  real_array tmp527;
  real_array tmp528;
  real_array tmp529;
  real_array tmp530;
  real_array tmp531;
  real_array tmp532;
  real_array tmp533;
  real_array tmp534;
  real_array tmp535;
  real_array tmp536;
  real_array tmp537;
  real_array tmp538;
  real_array tmp539;
  real_array tmp540;
  real_array tmp541;
  real_array tmp542;
  real_array tmp543;
  real_array tmp544;
  real_array tmp545;
  real_array tmp546;
  real_array tmp547;
  real_array tmp548;
  real_array tmp549;
  real_array tmp550;
  real_array tmp551;
  real_array tmp552;
  real_array tmp553;
  real_array tmp554;
  real_array tmp555;
  real_array tmp556;
  real_array_create(&tmp527, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp527, ((modelica_integer) 2) - ndims_base_array(&tmp527), &tmp528);
  real_array_create(&tmp529, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp529, ((modelica_integer) 2) - ndims_base_array(&tmp529), &tmp530);
  transpose_alloc_real_array(&tmp530, &tmp531);
  real_array_create(&tmp532, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp532, ((modelica_integer) 2) - ndims_base_array(&tmp532), &tmp533);
  real_array_create(&tmp534, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp534, ((modelica_integer) 2) - ndims_base_array(&tmp534), &tmp535);
  transpose_alloc_real_array(&tmp535, &tmp536);
  real_array_create(&tmp537, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp537, ((modelica_integer) 2) - ndims_base_array(&tmp537), &tmp538);
  real_array_create(&tmp539, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp539, ((modelica_integer) 2) - ndims_base_array(&tmp539), &tmp540);
  transpose_alloc_real_array(&tmp540, &tmp541);
  real_array_create(&tmp542, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp542, ((modelica_integer) 2) - ndims_base_array(&tmp542), &tmp543);
  real_array_create(&tmp544, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp544, ((modelica_integer) 2) - ndims_base_array(&tmp544), &tmp545);
  transpose_alloc_real_array(&tmp545, &tmp546);
  real_array_create(&tmp547, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp547, ((modelica_integer) 2) - ndims_base_array(&tmp547), &tmp548);
  real_array_create(&tmp549, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp549, ((modelica_integer) 2) - ndims_base_array(&tmp549), &tmp550);
  transpose_alloc_real_array(&tmp550, &tmp551);
  real_array_create(&tmp552, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp552, ((modelica_integer) 2) - ndims_base_array(&tmp552), &tmp553);
  real_array_create(&tmp554, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp554, ((modelica_integer) 2) - ndims_base_array(&tmp554), &tmp555);
  transpose_alloc_real_array(&tmp555, &tmp556);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5421]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp528, tmp531), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp533, tmp536), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3945] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3192]] /* vehicle.hubRR.bearingFrame.R.T[1,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp538, tmp541), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp543, tmp546), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3195]] /* vehicle.hubRR.bearingFrame.R.T[2,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp548, tmp551), 1, 2) + ((data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp553, tmp556), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3198]] /* vehicle.hubRR.bearingFrame.R.T[3,2] variable */));
  TRACE_POP
}

/*
equation index: 3590
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,2] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[1,2] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[2,2] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3590};
  real_array tmp557;
  real_array tmp558;
  real_array tmp559;
  real_array tmp560;
  real_array tmp561;
  real_array tmp562;
  real_array tmp563;
  real_array tmp564;
  real_array tmp565;
  real_array tmp566;
  real_array tmp567;
  real_array tmp568;
  real_array tmp569;
  real_array tmp570;
  real_array tmp571;
  real_array tmp572;
  real_array tmp573;
  real_array tmp574;
  real_array tmp575;
  real_array tmp576;
  real_array tmp577;
  real_array tmp578;
  real_array tmp579;
  real_array tmp580;
  real_array tmp581;
  real_array tmp582;
  real_array tmp583;
  real_array tmp584;
  real_array tmp585;
  real_array tmp586;
  real_array_create(&tmp557, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp557, ((modelica_integer) 2) - ndims_base_array(&tmp557), &tmp558);
  real_array_create(&tmp559, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp559, ((modelica_integer) 2) - ndims_base_array(&tmp559), &tmp560);
  transpose_alloc_real_array(&tmp560, &tmp561);
  real_array_create(&tmp562, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp562, ((modelica_integer) 2) - ndims_base_array(&tmp562), &tmp563);
  real_array_create(&tmp564, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp564, ((modelica_integer) 2) - ndims_base_array(&tmp564), &tmp565);
  transpose_alloc_real_array(&tmp565, &tmp566);
  real_array_create(&tmp567, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp567, ((modelica_integer) 2) - ndims_base_array(&tmp567), &tmp568);
  real_array_create(&tmp569, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp569, ((modelica_integer) 2) - ndims_base_array(&tmp569), &tmp570);
  transpose_alloc_real_array(&tmp570, &tmp571);
  real_array_create(&tmp572, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp572, ((modelica_integer) 2) - ndims_base_array(&tmp572), &tmp573);
  real_array_create(&tmp574, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp574, ((modelica_integer) 2) - ndims_base_array(&tmp574), &tmp575);
  transpose_alloc_real_array(&tmp575, &tmp576);
  real_array_create(&tmp577, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp577, ((modelica_integer) 2) - ndims_base_array(&tmp577), &tmp578);
  real_array_create(&tmp579, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp579, ((modelica_integer) 2) - ndims_base_array(&tmp579), &tmp580);
  transpose_alloc_real_array(&tmp580, &tmp581);
  real_array_create(&tmp582, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp582, ((modelica_integer) 2) - ndims_base_array(&tmp582), &tmp583);
  real_array_create(&tmp584, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp584, ((modelica_integer) 2) - ndims_base_array(&tmp584), &tmp585);
  transpose_alloc_real_array(&tmp585, &tmp586);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5418]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp558, tmp561), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp563, tmp566), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3192]] /* vehicle.hubRR.bearingFrame.R.T[1,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp568, tmp571), 0, 1) + ((data->simulationInfo->realParameter[3945] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp573, tmp576), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3195]] /* vehicle.hubRR.bearingFrame.R.T[2,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp578, tmp581), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp583, tmp586), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3944] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3198]] /* vehicle.hubRR.bearingFrame.R.T[3,2] variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7833(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7834(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7816(DATA *data, threadData_t *threadData);


/*
equation index: 3594
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.frame_a.r_0[1] = vehicle.rearSuspension.cornerR.jointUSR.frame_ia.r_0[1] + 0.13 * vehicle.rearSuspension.cornerR.upright.frame_a.R.T[2,1] + 0.2 * vehicle.rearSuspension.cornerR.upright.frame_a.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3594};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4819]] /* vehicle.rearSuspension.cornerR.upright.frame_a.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4173]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_ia.r_0[1] DUMMY_STATE */) + (0.13) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4810]] /* vehicle.rearSuspension.cornerR.upright.frame_a.R.T[2,1] DUMMY_STATE */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4813]] /* vehicle.rearSuspension.cornerR.upright.frame_a.R.T[3,1] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3595
type: SIMPLE_ASSIGN
vehicle.wheelRR.contactPatch.frame_a.r_0[1] = vehicle.rearSuspension.cornerR.upright.frame_a.r_0[1]
*/
void AlyssaVehicle_eqFunction_3595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3595};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5371]] /* vehicle.wheelRR.contactPatch.frame_a.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4819]] /* vehicle.rearSuspension.cornerR.upright.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7824(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7825(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7817(DATA *data, threadData_t *threadData);


/*
equation index: 3599
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,1] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[1,1] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[2,1] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3599};
  real_array tmp587;
  real_array tmp588;
  real_array tmp589;
  real_array tmp590;
  real_array tmp591;
  real_array tmp592;
  real_array tmp593;
  real_array tmp594;
  real_array tmp595;
  real_array tmp596;
  real_array tmp597;
  real_array tmp598;
  real_array tmp599;
  real_array tmp600;
  real_array tmp601;
  real_array tmp602;
  real_array tmp603;
  real_array tmp604;
  real_array tmp605;
  real_array tmp606;
  real_array tmp607;
  real_array tmp608;
  real_array tmp609;
  real_array tmp610;
  real_array tmp611;
  real_array tmp612;
  real_array tmp613;
  real_array tmp614;
  real_array tmp615;
  real_array tmp616;
  real_array_create(&tmp587, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp587, ((modelica_integer) 2) - ndims_base_array(&tmp587), &tmp588);
  real_array_create(&tmp589, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp589, ((modelica_integer) 2) - ndims_base_array(&tmp589), &tmp590);
  transpose_alloc_real_array(&tmp590, &tmp591);
  real_array_create(&tmp592, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp592, ((modelica_integer) 2) - ndims_base_array(&tmp592), &tmp593);
  real_array_create(&tmp594, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp594, ((modelica_integer) 2) - ndims_base_array(&tmp594), &tmp595);
  transpose_alloc_real_array(&tmp595, &tmp596);
  real_array_create(&tmp597, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp597, ((modelica_integer) 2) - ndims_base_array(&tmp597), &tmp598);
  real_array_create(&tmp599, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp599, ((modelica_integer) 2) - ndims_base_array(&tmp599), &tmp600);
  transpose_alloc_real_array(&tmp600, &tmp601);
  real_array_create(&tmp602, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp602, ((modelica_integer) 2) - ndims_base_array(&tmp602), &tmp603);
  real_array_create(&tmp604, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp604, ((modelica_integer) 2) - ndims_base_array(&tmp604), &tmp605);
  transpose_alloc_real_array(&tmp605, &tmp606);
  real_array_create(&tmp607, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp607, ((modelica_integer) 2) - ndims_base_array(&tmp607), &tmp608);
  real_array_create(&tmp609, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp609, ((modelica_integer) 2) - ndims_base_array(&tmp609), &tmp610);
  transpose_alloc_real_array(&tmp610, &tmp611);
  real_array_create(&tmp612, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp612, ((modelica_integer) 2) - ndims_base_array(&tmp612), &tmp613);
  real_array_create(&tmp614, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp614, ((modelica_integer) 2) - ndims_base_array(&tmp614), &tmp615);
  transpose_alloc_real_array(&tmp615, &tmp616);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5423]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp588, tmp591), 2, 0) + ((data->simulationInfo->realParameter[3944] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp593, tmp596), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3191]] /* vehicle.hubRR.bearingFrame.R.T[1,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp598, tmp601), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp603, tmp606), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3194]] /* vehicle.hubRR.bearingFrame.R.T[2,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp608, tmp611), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp613, tmp616), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3197]] /* vehicle.hubRR.bearingFrame.R.T[3,1] variable */));
  TRACE_POP
}

/*
equation index: 3600
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,1] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[1,1] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[2,1] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3600};
  real_array tmp617;
  real_array tmp618;
  real_array tmp619;
  real_array tmp620;
  real_array tmp621;
  real_array tmp622;
  real_array tmp623;
  real_array tmp624;
  real_array tmp625;
  real_array tmp626;
  real_array tmp627;
  real_array tmp628;
  real_array tmp629;
  real_array tmp630;
  real_array tmp631;
  real_array tmp632;
  real_array tmp633;
  real_array tmp634;
  real_array tmp635;
  real_array tmp636;
  real_array tmp637;
  real_array tmp638;
  real_array tmp639;
  real_array tmp640;
  real_array tmp641;
  real_array tmp642;
  real_array tmp643;
  real_array tmp644;
  real_array tmp645;
  real_array tmp646;
  real_array_create(&tmp617, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp617, ((modelica_integer) 2) - ndims_base_array(&tmp617), &tmp618);
  real_array_create(&tmp619, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp619, ((modelica_integer) 2) - ndims_base_array(&tmp619), &tmp620);
  transpose_alloc_real_array(&tmp620, &tmp621);
  real_array_create(&tmp622, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp622, ((modelica_integer) 2) - ndims_base_array(&tmp622), &tmp623);
  real_array_create(&tmp624, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp624, ((modelica_integer) 2) - ndims_base_array(&tmp624), &tmp625);
  transpose_alloc_real_array(&tmp625, &tmp626);
  real_array_create(&tmp627, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp627, ((modelica_integer) 2) - ndims_base_array(&tmp627), &tmp628);
  real_array_create(&tmp629, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp629, ((modelica_integer) 2) - ndims_base_array(&tmp629), &tmp630);
  transpose_alloc_real_array(&tmp630, &tmp631);
  real_array_create(&tmp632, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp632, ((modelica_integer) 2) - ndims_base_array(&tmp632), &tmp633);
  real_array_create(&tmp634, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp634, ((modelica_integer) 2) - ndims_base_array(&tmp634), &tmp635);
  transpose_alloc_real_array(&tmp635, &tmp636);
  real_array_create(&tmp637, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp637, ((modelica_integer) 2) - ndims_base_array(&tmp637), &tmp638);
  real_array_create(&tmp639, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp639, ((modelica_integer) 2) - ndims_base_array(&tmp639), &tmp640);
  transpose_alloc_real_array(&tmp640, &tmp641);
  real_array_create(&tmp642, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp642, ((modelica_integer) 2) - ndims_base_array(&tmp642), &tmp643);
  real_array_create(&tmp644, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp644, ((modelica_integer) 2) - ndims_base_array(&tmp644), &tmp645);
  transpose_alloc_real_array(&tmp645, &tmp646);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5420]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp618, tmp621), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp623, tmp626), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3945] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3191]] /* vehicle.hubRR.bearingFrame.R.T[1,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp628, tmp631), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp633, tmp636), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3194]] /* vehicle.hubRR.bearingFrame.R.T[2,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp638, tmp641), 1, 2) + ((data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp643, tmp646), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3197]] /* vehicle.hubRR.bearingFrame.R.T[3,1] variable */));
  TRACE_POP
}

/*
equation index: 3601
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,1] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[1,1] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[2,1] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3601};
  real_array tmp647;
  real_array tmp648;
  real_array tmp649;
  real_array tmp650;
  real_array tmp651;
  real_array tmp652;
  real_array tmp653;
  real_array tmp654;
  real_array tmp655;
  real_array tmp656;
  real_array tmp657;
  real_array tmp658;
  real_array tmp659;
  real_array tmp660;
  real_array tmp661;
  real_array tmp662;
  real_array tmp663;
  real_array tmp664;
  real_array tmp665;
  real_array tmp666;
  real_array tmp667;
  real_array tmp668;
  real_array tmp669;
  real_array tmp670;
  real_array tmp671;
  real_array tmp672;
  real_array tmp673;
  real_array tmp674;
  real_array tmp675;
  real_array tmp676;
  real_array_create(&tmp647, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp647, ((modelica_integer) 2) - ndims_base_array(&tmp647), &tmp648);
  real_array_create(&tmp649, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp649, ((modelica_integer) 2) - ndims_base_array(&tmp649), &tmp650);
  transpose_alloc_real_array(&tmp650, &tmp651);
  real_array_create(&tmp652, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp652, ((modelica_integer) 2) - ndims_base_array(&tmp652), &tmp653);
  real_array_create(&tmp654, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp654, ((modelica_integer) 2) - ndims_base_array(&tmp654), &tmp655);
  transpose_alloc_real_array(&tmp655, &tmp656);
  real_array_create(&tmp657, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp657, ((modelica_integer) 2) - ndims_base_array(&tmp657), &tmp658);
  real_array_create(&tmp659, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp659, ((modelica_integer) 2) - ndims_base_array(&tmp659), &tmp660);
  transpose_alloc_real_array(&tmp660, &tmp661);
  real_array_create(&tmp662, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp662, ((modelica_integer) 2) - ndims_base_array(&tmp662), &tmp663);
  real_array_create(&tmp664, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp664, ((modelica_integer) 2) - ndims_base_array(&tmp664), &tmp665);
  transpose_alloc_real_array(&tmp665, &tmp666);
  real_array_create(&tmp667, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp667, ((modelica_integer) 2) - ndims_base_array(&tmp667), &tmp668);
  real_array_create(&tmp669, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp669, ((modelica_integer) 2) - ndims_base_array(&tmp669), &tmp670);
  transpose_alloc_real_array(&tmp670, &tmp671);
  real_array_create(&tmp672, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp672, ((modelica_integer) 2) - ndims_base_array(&tmp672), &tmp673);
  real_array_create(&tmp674, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp674, ((modelica_integer) 2) - ndims_base_array(&tmp674), &tmp675);
  transpose_alloc_real_array(&tmp675, &tmp676);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5417]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp648, tmp651), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp653, tmp656), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3191]] /* vehicle.hubRR.bearingFrame.R.T[1,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp658, tmp661), 0, 1) + ((data->simulationInfo->realParameter[3945] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp663, tmp666), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3194]] /* vehicle.hubRR.bearingFrame.R.T[2,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp668, tmp671), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp673, tmp676), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3944] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3197]] /* vehicle.hubRR.bearingFrame.R.T[3,1] variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7826(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7827(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7837(DATA *data, threadData_t *threadData);


/*
equation index: 3605
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.frame_a.r_0[3] = vehicle.rearSuspension.cornerR.jointUSR.frame_ia.r_0[3] + 0.13 * vehicle.rearSuspension.cornerR.upright.frame_a.R.T[2,3] + 0.2 * vehicle.rearSuspension.cornerR.upright.frame_a.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3605};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4821]] /* vehicle.rearSuspension.cornerR.upright.frame_a.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4175]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_ia.r_0[3] DUMMY_STATE */) + (0.13) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4812]] /* vehicle.rearSuspension.cornerR.upright.frame_a.R.T[2,3] variable */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4815]] /* vehicle.rearSuspension.cornerR.upright.frame_a.R.T[3,3] variable */));
  TRACE_POP
}

/*
equation index: 3606
type: SIMPLE_ASSIGN
vehicle.wheelRR.contactPatch.frame_a.r_0[3] = vehicle.rearSuspension.cornerR.upright.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3606};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5373]] /* vehicle.wheelRR.contactPatch.frame_a.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4821]] /* vehicle.rearSuspension.cornerR.upright.frame_a.r_0[3] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7842(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7841(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7840(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7839(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7844(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7868(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7871(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7870(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7869(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7864(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7867(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7866(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7865(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7860(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7863(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7862(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7861(DATA *data, threadData_t *threadData);


/*
equation index: 3624
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,3] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[1,3] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[2,3] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3624};
  real_array tmp677;
  real_array tmp678;
  real_array tmp679;
  real_array tmp680;
  real_array tmp681;
  real_array tmp682;
  real_array tmp683;
  real_array tmp684;
  real_array tmp685;
  real_array tmp686;
  real_array tmp687;
  real_array tmp688;
  real_array tmp689;
  real_array tmp690;
  real_array tmp691;
  real_array tmp692;
  real_array tmp693;
  real_array tmp694;
  real_array tmp695;
  real_array tmp696;
  real_array tmp697;
  real_array tmp698;
  real_array tmp699;
  real_array tmp700;
  real_array tmp701;
  real_array tmp702;
  real_array tmp703;
  real_array tmp704;
  real_array tmp705;
  real_array tmp706;
  real_array_create(&tmp677, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp677, ((modelica_integer) 2) - ndims_base_array(&tmp677), &tmp678);
  real_array_create(&tmp679, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp679, ((modelica_integer) 2) - ndims_base_array(&tmp679), &tmp680);
  transpose_alloc_real_array(&tmp680, &tmp681);
  real_array_create(&tmp682, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp682, ((modelica_integer) 2) - ndims_base_array(&tmp682), &tmp683);
  real_array_create(&tmp684, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp684, ((modelica_integer) 2) - ndims_base_array(&tmp684), &tmp685);
  transpose_alloc_real_array(&tmp685, &tmp686);
  real_array_create(&tmp687, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp687, ((modelica_integer) 2) - ndims_base_array(&tmp687), &tmp688);
  real_array_create(&tmp689, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp689, ((modelica_integer) 2) - ndims_base_array(&tmp689), &tmp690);
  transpose_alloc_real_array(&tmp690, &tmp691);
  real_array_create(&tmp692, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp692, ((modelica_integer) 2) - ndims_base_array(&tmp692), &tmp693);
  real_array_create(&tmp694, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp694, ((modelica_integer) 2) - ndims_base_array(&tmp694), &tmp695);
  transpose_alloc_real_array(&tmp695, &tmp696);
  real_array_create(&tmp697, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp697, ((modelica_integer) 2) - ndims_base_array(&tmp697), &tmp698);
  real_array_create(&tmp699, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp699, ((modelica_integer) 2) - ndims_base_array(&tmp699), &tmp700);
  transpose_alloc_real_array(&tmp700, &tmp701);
  real_array_create(&tmp702, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp702, ((modelica_integer) 2) - ndims_base_array(&tmp702), &tmp703);
  real_array_create(&tmp704, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp704, ((modelica_integer) 2) - ndims_base_array(&tmp704), &tmp705);
  transpose_alloc_real_array(&tmp705, &tmp706);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5425]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp678, tmp681), 2, 0) + ((data->simulationInfo->realParameter[3944] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp683, tmp686), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3193]] /* vehicle.hubRR.bearingFrame.R.T[1,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp688, tmp691), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp693, tmp696), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3196]] /* vehicle.hubRR.bearingFrame.R.T[2,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp698, tmp701), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp703, tmp706), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3199]] /* vehicle.hubRR.bearingFrame.R.T[3,3] variable */));
  TRACE_POP
}

/*
equation index: 3625
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,3] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[1,3] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[2,3] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3625};
  real_array tmp707;
  real_array tmp708;
  real_array tmp709;
  real_array tmp710;
  real_array tmp711;
  real_array tmp712;
  real_array tmp713;
  real_array tmp714;
  real_array tmp715;
  real_array tmp716;
  real_array tmp717;
  real_array tmp718;
  real_array tmp719;
  real_array tmp720;
  real_array tmp721;
  real_array tmp722;
  real_array tmp723;
  real_array tmp724;
  real_array tmp725;
  real_array tmp726;
  real_array tmp727;
  real_array tmp728;
  real_array tmp729;
  real_array tmp730;
  real_array tmp731;
  real_array tmp732;
  real_array tmp733;
  real_array tmp734;
  real_array tmp735;
  real_array tmp736;
  real_array_create(&tmp707, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp707, ((modelica_integer) 2) - ndims_base_array(&tmp707), &tmp708);
  real_array_create(&tmp709, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp709, ((modelica_integer) 2) - ndims_base_array(&tmp709), &tmp710);
  transpose_alloc_real_array(&tmp710, &tmp711);
  real_array_create(&tmp712, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp712, ((modelica_integer) 2) - ndims_base_array(&tmp712), &tmp713);
  real_array_create(&tmp714, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp714, ((modelica_integer) 2) - ndims_base_array(&tmp714), &tmp715);
  transpose_alloc_real_array(&tmp715, &tmp716);
  real_array_create(&tmp717, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp717, ((modelica_integer) 2) - ndims_base_array(&tmp717), &tmp718);
  real_array_create(&tmp719, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp719, ((modelica_integer) 2) - ndims_base_array(&tmp719), &tmp720);
  transpose_alloc_real_array(&tmp720, &tmp721);
  real_array_create(&tmp722, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp722, ((modelica_integer) 2) - ndims_base_array(&tmp722), &tmp723);
  real_array_create(&tmp724, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp724, ((modelica_integer) 2) - ndims_base_array(&tmp724), &tmp725);
  transpose_alloc_real_array(&tmp725, &tmp726);
  real_array_create(&tmp727, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp727, ((modelica_integer) 2) - ndims_base_array(&tmp727), &tmp728);
  real_array_create(&tmp729, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp729, ((modelica_integer) 2) - ndims_base_array(&tmp729), &tmp730);
  transpose_alloc_real_array(&tmp730, &tmp731);
  real_array_create(&tmp732, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp732, ((modelica_integer) 2) - ndims_base_array(&tmp732), &tmp733);
  real_array_create(&tmp734, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp734, ((modelica_integer) 2) - ndims_base_array(&tmp734), &tmp735);
  transpose_alloc_real_array(&tmp735, &tmp736);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5422]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp708, tmp711), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp713, tmp716), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3945] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3193]] /* vehicle.hubRR.bearingFrame.R.T[1,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp718, tmp721), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp723, tmp726), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3196]] /* vehicle.hubRR.bearingFrame.R.T[2,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp728, tmp731), 1, 2) + ((data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp733, tmp736), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3199]] /* vehicle.hubRR.bearingFrame.R.T[3,3] variable */));
  TRACE_POP
}

/*
equation index: 3626
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,3] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[1,3] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[2,3] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3626};
  real_array tmp737;
  real_array tmp738;
  real_array tmp739;
  real_array tmp740;
  real_array tmp741;
  real_array tmp742;
  real_array tmp743;
  real_array tmp744;
  real_array tmp745;
  real_array tmp746;
  real_array tmp747;
  real_array tmp748;
  real_array tmp749;
  real_array tmp750;
  real_array tmp751;
  real_array tmp752;
  real_array tmp753;
  real_array tmp754;
  real_array tmp755;
  real_array tmp756;
  real_array tmp757;
  real_array tmp758;
  real_array tmp759;
  real_array tmp760;
  real_array tmp761;
  real_array tmp762;
  real_array tmp763;
  real_array tmp764;
  real_array tmp765;
  real_array tmp766;
  real_array_create(&tmp737, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp737, ((modelica_integer) 2) - ndims_base_array(&tmp737), &tmp738);
  real_array_create(&tmp739, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp739, ((modelica_integer) 2) - ndims_base_array(&tmp739), &tmp740);
  transpose_alloc_real_array(&tmp740, &tmp741);
  real_array_create(&tmp742, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp742, ((modelica_integer) 2) - ndims_base_array(&tmp742), &tmp743);
  real_array_create(&tmp744, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp744, ((modelica_integer) 2) - ndims_base_array(&tmp744), &tmp745);
  transpose_alloc_real_array(&tmp745, &tmp746);
  real_array_create(&tmp747, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp747, ((modelica_integer) 2) - ndims_base_array(&tmp747), &tmp748);
  real_array_create(&tmp749, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp749, ((modelica_integer) 2) - ndims_base_array(&tmp749), &tmp750);
  transpose_alloc_real_array(&tmp750, &tmp751);
  real_array_create(&tmp752, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp752, ((modelica_integer) 2) - ndims_base_array(&tmp752), &tmp753);
  real_array_create(&tmp754, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp754, ((modelica_integer) 2) - ndims_base_array(&tmp754), &tmp755);
  transpose_alloc_real_array(&tmp755, &tmp756);
  real_array_create(&tmp757, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp757, ((modelica_integer) 2) - ndims_base_array(&tmp757), &tmp758);
  real_array_create(&tmp759, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp759, ((modelica_integer) 2) - ndims_base_array(&tmp759), &tmp760);
  transpose_alloc_real_array(&tmp760, &tmp761);
  real_array_create(&tmp762, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp762, ((modelica_integer) 2) - ndims_base_array(&tmp762), &tmp763);
  real_array_create(&tmp764, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp764, ((modelica_integer) 2) - ndims_base_array(&tmp764), &tmp765);
  transpose_alloc_real_array(&tmp765, &tmp766);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5419]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp738, tmp741), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp743, tmp746), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3193]] /* vehicle.hubRR.bearingFrame.R.T[1,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp748, tmp751), 0, 1) + ((data->simulationInfo->realParameter[3945] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp753, tmp756), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3196]] /* vehicle.hubRR.bearingFrame.R.T[2,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp758, tmp761), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp763, tmp766), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3944] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3199]] /* vehicle.hubRR.bearingFrame.R.T[3,3] variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7845(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7846(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7855(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7856(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7858(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7857(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7851(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7852(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7854(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7853(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7847(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7848(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7859(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7850(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7849(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7835(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7970(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7972(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7974(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7987(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7973(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7984(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7996(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7997(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7994(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7995(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7985(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7986(DATA *data, threadData_t *threadData);


/*
equation index: 3655
type: LINEAR

<var>vehicle.rearSuspension.cornerR.toe</var>
<var>vehicle.rearSuspension.cornerR.camber</var>
<var>vehicle.rearSuspension.cornerR.wheelAngles.angles[3]</var>
<row>
  <cell>Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(vehicle.rearSuspension.cornerR.wheelAngles.R_rel, {3, 1, 2}, vehicle.rearSuspension.cornerR.wheelAngles.guessAngle1)[1]</cell>
  <cell>Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(vehicle.rearSuspension.cornerR.wheelAngles.R_rel, {3, 1, 2}, vehicle.rearSuspension.cornerR.wheelAngles.guessAngle1)[2]</cell>
  <cell>Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(vehicle.rearSuspension.cornerR.wheelAngles.R_rel, {3, 1, 2}, vehicle.rearSuspension.cornerR.wheelAngles.guessAngle1)[3]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-1.0</residual>
  </cell><cell row="1" col="1">
    <residual>1.0</residual>
  </cell><cell row="2" col="2">
    <residual>1.0</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void AlyssaVehicle_eqFunction_3655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3655};
  /* Linear equation system */
  int retValue;
  double aux_x[3] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4719]] /* vehicle.rearSuspension.cornerR.toe variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4065]] /* vehicle.rearSuspension.cornerR.camber variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4871]] /* vehicle.rearSuspension.cornerR.wheelAngles.angles[3] variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 3655 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 5, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3655};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 3655 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4719]] /* vehicle.rearSuspension.cornerR.toe variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4065]] /* vehicle.rearSuspension.cornerR.camber variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4871]] /* vehicle.rearSuspension.cornerR.wheelAngles.angles[3] variable */) = aux_x[2];

  TRACE_POP
}

/*
equation index: 3656
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[3] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[1] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[2] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[3]
*/
void AlyssaVehicle_eqFunction_3656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3656};
  real_array tmp767;
  real_array tmp768;
  real_array tmp769;
  real_array tmp770;
  real_array tmp771;
  real_array tmp772;
  real_array tmp773;
  real_array tmp774;
  real_array tmp775;
  real_array tmp776;
  real_array tmp777;
  real_array tmp778;
  real_array tmp779;
  real_array tmp780;
  real_array tmp781;
  real_array tmp782;
  real_array tmp783;
  real_array tmp784;
  real_array tmp785;
  real_array tmp786;
  real_array tmp787;
  real_array tmp788;
  real_array tmp789;
  real_array tmp790;
  real_array tmp791;
  real_array tmp792;
  real_array tmp793;
  real_array tmp794;
  real_array tmp795;
  real_array tmp796;
  real_array_create(&tmp767, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp767, ((modelica_integer) 2) - ndims_base_array(&tmp767), &tmp768);
  real_array_create(&tmp769, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp769, ((modelica_integer) 2) - ndims_base_array(&tmp769), &tmp770);
  transpose_alloc_real_array(&tmp770, &tmp771);
  real_array_create(&tmp772, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp772, ((modelica_integer) 2) - ndims_base_array(&tmp772), &tmp773);
  real_array_create(&tmp774, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp774, ((modelica_integer) 2) - ndims_base_array(&tmp774), &tmp775);
  transpose_alloc_real_array(&tmp775, &tmp776);
  real_array_create(&tmp777, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp777, ((modelica_integer) 2) - ndims_base_array(&tmp777), &tmp778);
  real_array_create(&tmp779, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp779, ((modelica_integer) 2) - ndims_base_array(&tmp779), &tmp780);
  transpose_alloc_real_array(&tmp780, &tmp781);
  real_array_create(&tmp782, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp782, ((modelica_integer) 2) - ndims_base_array(&tmp782), &tmp783);
  real_array_create(&tmp784, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp784, ((modelica_integer) 2) - ndims_base_array(&tmp784), &tmp785);
  transpose_alloc_real_array(&tmp785, &tmp786);
  real_array_create(&tmp787, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp787, ((modelica_integer) 2) - ndims_base_array(&tmp787), &tmp788);
  real_array_create(&tmp789, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp789, ((modelica_integer) 2) - ndims_base_array(&tmp789), &tmp790);
  transpose_alloc_real_array(&tmp790, &tmp791);
  real_array_create(&tmp792, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp792, ((modelica_integer) 2) - ndims_base_array(&tmp792), &tmp793);
  real_array_create(&tmp794, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp794, ((modelica_integer) 2) - ndims_base_array(&tmp794), &tmp795);
  transpose_alloc_real_array(&tmp795, &tmp796);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5428]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp768, tmp771), 2, 0) + ((data->simulationInfo->realParameter[3944] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp773, tmp776), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5445]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp778, tmp781), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp783, tmp786), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5446]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp788, tmp791), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp793, tmp796), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5447]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3657
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[2] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[1] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[2] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[3]
*/
void AlyssaVehicle_eqFunction_3657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3657};
  real_array tmp797;
  real_array tmp798;
  real_array tmp799;
  real_array tmp800;
  real_array tmp801;
  real_array tmp802;
  real_array tmp803;
  real_array tmp804;
  real_array tmp805;
  real_array tmp806;
  real_array tmp807;
  real_array tmp808;
  real_array tmp809;
  real_array tmp810;
  real_array tmp811;
  real_array tmp812;
  real_array tmp813;
  real_array tmp814;
  real_array tmp815;
  real_array tmp816;
  real_array tmp817;
  real_array tmp818;
  real_array tmp819;
  real_array tmp820;
  real_array tmp821;
  real_array tmp822;
  real_array tmp823;
  real_array tmp824;
  real_array tmp825;
  real_array tmp826;
  real_array_create(&tmp797, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp797, ((modelica_integer) 2) - ndims_base_array(&tmp797), &tmp798);
  real_array_create(&tmp799, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp799, ((modelica_integer) 2) - ndims_base_array(&tmp799), &tmp800);
  transpose_alloc_real_array(&tmp800, &tmp801);
  real_array_create(&tmp802, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp802, ((modelica_integer) 2) - ndims_base_array(&tmp802), &tmp803);
  real_array_create(&tmp804, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp804, ((modelica_integer) 2) - ndims_base_array(&tmp804), &tmp805);
  transpose_alloc_real_array(&tmp805, &tmp806);
  real_array_create(&tmp807, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp807, ((modelica_integer) 2) - ndims_base_array(&tmp807), &tmp808);
  real_array_create(&tmp809, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp809, ((modelica_integer) 2) - ndims_base_array(&tmp809), &tmp810);
  transpose_alloc_real_array(&tmp810, &tmp811);
  real_array_create(&tmp812, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp812, ((modelica_integer) 2) - ndims_base_array(&tmp812), &tmp813);
  real_array_create(&tmp814, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp814, ((modelica_integer) 2) - ndims_base_array(&tmp814), &tmp815);
  transpose_alloc_real_array(&tmp815, &tmp816);
  real_array_create(&tmp817, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp817, ((modelica_integer) 2) - ndims_base_array(&tmp817), &tmp818);
  real_array_create(&tmp819, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp819, ((modelica_integer) 2) - ndims_base_array(&tmp819), &tmp820);
  transpose_alloc_real_array(&tmp820, &tmp821);
  real_array_create(&tmp822, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp822, ((modelica_integer) 2) - ndims_base_array(&tmp822), &tmp823);
  real_array_create(&tmp824, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp824, ((modelica_integer) 2) - ndims_base_array(&tmp824), &tmp825);
  transpose_alloc_real_array(&tmp825, &tmp826);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5427]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp798, tmp801), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp803, tmp806), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3945] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5445]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp808, tmp811), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp813, tmp816), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5446]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp818, tmp821), 1, 2) + ((data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp823, tmp826), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5447]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3658
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[1] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[1] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[2] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[3]
*/
void AlyssaVehicle_eqFunction_3658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3658};
  real_array tmp827;
  real_array tmp828;
  real_array tmp829;
  real_array tmp830;
  real_array tmp831;
  real_array tmp832;
  real_array tmp833;
  real_array tmp834;
  real_array tmp835;
  real_array tmp836;
  real_array tmp837;
  real_array tmp838;
  real_array tmp839;
  real_array tmp840;
  real_array tmp841;
  real_array tmp842;
  real_array tmp843;
  real_array tmp844;
  real_array tmp845;
  real_array tmp846;
  real_array tmp847;
  real_array tmp848;
  real_array tmp849;
  real_array tmp850;
  real_array tmp851;
  real_array tmp852;
  real_array tmp853;
  real_array tmp854;
  real_array tmp855;
  real_array tmp856;
  real_array_create(&tmp827, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp827, ((modelica_integer) 2) - ndims_base_array(&tmp827), &tmp828);
  real_array_create(&tmp829, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp829, ((modelica_integer) 2) - ndims_base_array(&tmp829), &tmp830);
  transpose_alloc_real_array(&tmp830, &tmp831);
  real_array_create(&tmp832, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp832, ((modelica_integer) 2) - ndims_base_array(&tmp832), &tmp833);
  real_array_create(&tmp834, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp834, ((modelica_integer) 2) - ndims_base_array(&tmp834), &tmp835);
  transpose_alloc_real_array(&tmp835, &tmp836);
  real_array_create(&tmp837, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp837, ((modelica_integer) 2) - ndims_base_array(&tmp837), &tmp838);
  real_array_create(&tmp839, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp839, ((modelica_integer) 2) - ndims_base_array(&tmp839), &tmp840);
  transpose_alloc_real_array(&tmp840, &tmp841);
  real_array_create(&tmp842, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp842, ((modelica_integer) 2) - ndims_base_array(&tmp842), &tmp843);
  real_array_create(&tmp844, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp844, ((modelica_integer) 2) - ndims_base_array(&tmp844), &tmp845);
  transpose_alloc_real_array(&tmp845, &tmp846);
  real_array_create(&tmp847, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp847, ((modelica_integer) 2) - ndims_base_array(&tmp847), &tmp848);
  real_array_create(&tmp849, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp849, ((modelica_integer) 2) - ndims_base_array(&tmp849), &tmp850);
  transpose_alloc_real_array(&tmp850, &tmp851);
  real_array_create(&tmp852, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp852, ((modelica_integer) 2) - ndims_base_array(&tmp852), &tmp853);
  real_array_create(&tmp854, ((modelica_real*)&((&data->simulationInfo->realParameter[3943] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp854, ((modelica_integer) 2) - ndims_base_array(&tmp854), &tmp855);
  transpose_alloc_real_array(&tmp855, &tmp856);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5426]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp828, tmp831), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp833, tmp836), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5445]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp838, tmp841), 0, 1) + ((data->simulationInfo->realParameter[3945] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp843, tmp846), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5446]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp848, tmp851), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp853, tmp856), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3944] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5447]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7999(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8018(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8017(DATA *data, threadData_t *threadData);


/*
equation index: 3662
type: SIMPLE_ASSIGN
$DER.vehicle.wheelRR.contactPatch.pen = 0.5 * ($DER.vehicle.wheelRR.contactPatch.frame_a.r_0[3] + (vehicle.wheelRR.contactPatch.r0 + vehicle.wheelRR.contactPatch.frame_a.r_0[3] - road.z0) * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[3] / sqrt((vehicle.wheelRR.contactPatch.r0 + vehicle.wheelRR.contactPatch.frame_a.r_0[3] - road.z0) ^ 2.0 + 1e-12))
*/
void AlyssaVehicle_eqFunction_3662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3662};
  modelica_real tmp857;
  modelica_real tmp858;
  tmp857 = (data->simulationInfo->realParameter[3903] /* vehicle.wheelRR.contactPatch.r0 PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5373]] /* vehicle.wheelRR.contactPatch.frame_a.r_0[3] DUMMY_STATE */) - (data->simulationInfo->realParameter[410] /* road.z0 PARAM */);
  tmp858 = (tmp857 * tmp857) + 1e-12;
  if(!(tmp858 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt((vehicle.wheelRR.contactPatch.r0 + vehicle.wheelRR.contactPatch.frame_a.r_0[3] - road.z0) ^ 2.0 + 1e-12) was %g should be >= 0", tmp858);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* der(vehicle.wheelRR.contactPatch.pen) DUMMY_DER */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[3]) DUMMY_DER */) + ((data->simulationInfo->realParameter[3903] /* vehicle.wheelRR.contactPatch.r0 PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5373]] /* vehicle.wheelRR.contactPatch.frame_a.r_0[3] DUMMY_STATE */) - (data->simulationInfo->realParameter[410] /* road.z0 PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[3]) DUMMY_DER */),sqrt(tmp858),"sqrt((vehicle.wheelRR.contactPatch.r0 + vehicle.wheelRR.contactPatch.frame_a.r_0[3] - road.z0) ^ 2.0 + 1e-12)",equationIndexes)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8009(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8011(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8016(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8014(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8013(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8012(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7991(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7992(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7993(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7988(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7989(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7990(DATA *data, threadData_t *threadData);


/*
equation index: 3675
type: SIMPLE_ASSIGN
vehicle.wheelRR.contactPatch.vC[3] = vehicle.hubRR.bearingFrame.R.T[3,1] * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[1] + vehicle.hubRR.bearingFrame.R.T[3,2] * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[2] + vehicle.hubRR.bearingFrame.R.T[3,3] * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3675};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5378]] /* vehicle.wheelRR.contactPatch.vC[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3197]] /* vehicle.hubRR.bearingFrame.R.T[3,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3198]] /* vehicle.hubRR.bearingFrame.R.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3199]] /* vehicle.hubRR.bearingFrame.R.T[3,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[3]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3676
type: SIMPLE_ASSIGN
vehicle.wheelRR.contactPatch.vHub[2] = vehicle.hubRR.bearingFrame.R.T[2,1] * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[1] + vehicle.hubRR.bearingFrame.R.T[2,2] * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[2] + vehicle.hubRR.bearingFrame.R.T[2,3] * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3676};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5380]] /* vehicle.wheelRR.contactPatch.vHub[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3194]] /* vehicle.hubRR.bearingFrame.R.T[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3195]] /* vehicle.hubRR.bearingFrame.R.T[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3196]] /* vehicle.hubRR.bearingFrame.R.T[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[3]) DUMMY_DER */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8002(DATA *data, threadData_t *threadData);


/*
equation index: 3678
type: SIMPLE_ASSIGN
vehicle.wheelRR.contactPatch.vHub[1] = vehicle.hubRR.bearingFrame.R.T[1,1] * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[1] + vehicle.hubRR.bearingFrame.R.T[1,2] * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[2] + vehicle.hubRR.bearingFrame.R.T[1,3] * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3678};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5379]] /* vehicle.wheelRR.contactPatch.vHub[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3191]] /* vehicle.hubRR.bearingFrame.R.T[1,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3192]] /* vehicle.hubRR.bearingFrame.R.T[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3193]] /* vehicle.hubRR.bearingFrame.R.T[1,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[3]) DUMMY_DER */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8004(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8005(DATA *data, threadData_t *threadData);


/*
equation index: 3681
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[3,1] = 0.222824801502141 * cos(vehicle.rearSuspension.cornerR.tieRod.revolute.angle) * $DER.vehicle.rearSuspension.cornerR.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_3681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3681};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[927]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[3,1]) DUMMY_DER */) = (0.222824801502141) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4595]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[932]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3682
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[2,1] = (-0.9748585065718673) * cos(vehicle.rearSuspension.cornerR.tieRod.revolute.angle) * $DER.vehicle.rearSuspension.cornerR.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_3682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3682};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[924]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[2,1]) DUMMY_DER */) = (-0.9748585065718673) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4595]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[932]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3683
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,3] = (-0.222824801502141) * cos(vehicle.rearSuspension.cornerR.tieRod.revolute.angle) * $DER.vehicle.rearSuspension.cornerR.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_3683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3683};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[923]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,3]) DUMMY_DER */) = (-0.222824801502141) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4595]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[932]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3684
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,2] = 0.9748585065718673 * cos(vehicle.rearSuspension.cornerR.tieRod.revolute.angle) * $DER.vehicle.rearSuspension.cornerR.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_3684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3684};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,2]) DUMMY_DER */) = (0.9748585065718673) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4595]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[932]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3685
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,1] = (-sin(vehicle.rearSuspension.cornerR.tieRod.revolute.angle)) * $DER.vehicle.rearSuspension.cornerR.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_3685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3685};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,1]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4595]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[932]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8047(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8040(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7983(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7982(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8046(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8039(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7981(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7980(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8045(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8038(DATA *data, threadData_t *threadData);


/*
equation index: 3696
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.rodLength = 0.36359317925395684
*/
void AlyssaVehicle_eqFunction_3696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3696};
  (data->simulationInfo->realParameter[560] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.rodLength PARAM */) = 0.36359317925395684;
  TRACE_POP
}

/*
equation index: 3697
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.rodShape.length = vehicle.frontSuspension.cornerL.jointUSR.rod1.rodLength
*/
void AlyssaVehicle_eqFunction_3697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3697};
  (data->simulationInfo->realParameter[562] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.rodShape.length PARAM */) = (data->simulationInfo->realParameter[560] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 3698
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1Length = vehicle.frontSuspension.cornerL.jointUSR.rod1.rodLength
*/
void AlyssaVehicle_eqFunction_3698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3698};
  (data->simulationInfo->realParameter[581] /* vehicle.frontSuspension.cornerL.jointUSR.rod1Length PARAM */) = (data->simulationInfo->realParameter[560] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 3699
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.lengthConstraint = vehicle.frontSuspension.cornerL.jointUSR.rod1Length
*/
void AlyssaVehicle_eqFunction_3699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3699};
  (data->simulationInfo->realParameter[532] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.lengthConstraint PARAM */) = (data->simulationInfo->realParameter[581] /* vehicle.frontSuspension.cornerL.jointUSR.rod1Length PARAM */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8083(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8084(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8085(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8086(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8248(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8249(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8250(DATA *data, threadData_t *threadData);


/*
equation index: 3707
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.positiveBranch = AlyssaModel.Experiments.OptimalControlFMU.vehicle.frontSuspension.cornerL.jointUSR.revolute.selectBranch(vehicle.frontSuspension.cornerL.jointUSR.revolute.lengthConstraint, {-1.0, -0.0, 0.0}, 0.017453292519943295 * (vehicle.frontSuspension.cornerL.jointUSR.revolute.phi_offset + vehicle.frontSuspension.cornerL.jointUSR.revolute.phi_guess), vehicle.frontSuspension.cornerL.jointUSR.revolute.r_a, vehicle.frontSuspension.cornerL.jointUSR.revolute.r_b)
*/
void AlyssaVehicle_eqFunction_3707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3707};
  real_array tmp859;
  real_array tmp860;
  real_array_create(&tmp859, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1541]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp860, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1544]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.r_b[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[42] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.positiveBranch PARAM */) = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_frontSuspension_cornerL_jointUSR_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[532] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.lengthConstraint PARAM */), _OMC_LIT23, (0.017453292519943295) * ((data->simulationInfo->realParameter[537] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[536] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.phi_guess PARAM */)), tmp859, tmp860);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8088(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8252(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8087(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8089(DATA *data, threadData_t *threadData);


/*
equation index: 3712
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] = sin(vehicle.frontSuspension.cornerL.jointUSR.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3712};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */) = sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1512]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.angle DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8090(DATA *data, threadData_t *threadData);


/*
equation index: 3714
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,3] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,3] + vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3714};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1737]] /* vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3715
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,2] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,2] + vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3715};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1736]] /* vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,2] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1328]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3716
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,1] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,1] + vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3716};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1735]] /* vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,1] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3717
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,3] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,3] - vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3717};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1734]] /* vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8109(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8110(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8101(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8131(DATA *data, threadData_t *threadData);


/*
equation index: 3722
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,2] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,2] - vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3722};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1733]] /* vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,2] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1328]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8106(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8107(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8098(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8099(DATA *data, threadData_t *threadData);


/*
equation index: 3727
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,1] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,1] - vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3727};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,1] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8103(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8104(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8111(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8112(DATA *data, threadData_t *threadData);


/*
equation index: 3732
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.shape_b.length = max(vehicle.frontSuspension.cornerL.coilover.s - vehicle.frontSuspension.cornerL.coilover.length_a, 0.0)
*/
void AlyssaVehicle_eqFunction_3732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3732};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1398]] /* vehicle.frontSuspension.cornerL.coilover.shape_b.length variable */) = fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* vehicle.frontSuspension.cornerL.coilover.s DUMMY_STATE */) - (data->simulationInfo->realParameter[416] /* vehicle.frontSuspension.cornerL.coilover.length_a PARAM */),0.0);
  TRACE_POP
}

/*
equation index: 3733
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.shape_a.length = min(vehicle.frontSuspension.cornerL.coilover.length_a, vehicle.frontSuspension.cornerL.coilover.s)
*/
void AlyssaVehicle_eqFunction_3733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3733};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1387]] /* vehicle.frontSuspension.cornerL.coilover.shape_a.length variable */) = fmin((data->simulationInfo->realParameter[416] /* vehicle.frontSuspension.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* vehicle.frontSuspension.cornerL.coilover.s DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8119(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8117(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8118(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8120(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8121(DATA *data, threadData_t *threadData);


/*
equation index: 3739
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.shape_b.r_shape[3] = vehicle.frontSuspension.cornerL.coilover.e_a[3] * min(vehicle.frontSuspension.cornerL.coilover.length_a, vehicle.frontSuspension.cornerL.coilover.s)
*/
void AlyssaVehicle_eqFunction_3739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3739};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1401]] /* vehicle.frontSuspension.cornerL.coilover.shape_b.r_shape[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* vehicle.frontSuspension.cornerL.coilover.e_a[3] variable */)) * (fmin((data->simulationInfo->realParameter[416] /* vehicle.frontSuspension.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* vehicle.frontSuspension.cornerL.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8123(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8124(DATA *data, threadData_t *threadData);


/*
equation index: 3742
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.shape_b.r_shape[2] = vehicle.frontSuspension.cornerL.coilover.e_a[2] * min(vehicle.frontSuspension.cornerL.coilover.length_a, vehicle.frontSuspension.cornerL.coilover.s)
*/
void AlyssaVehicle_eqFunction_3742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3742};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1400]] /* vehicle.frontSuspension.cornerL.coilover.shape_b.r_shape[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* vehicle.frontSuspension.cornerL.coilover.e_a[2] variable */)) * (fmin((data->simulationInfo->realParameter[416] /* vehicle.frontSuspension.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* vehicle.frontSuspension.cornerL.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8126(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8127(DATA *data, threadData_t *threadData);


/*
equation index: 3745
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.shape_b.r_shape[1] = vehicle.frontSuspension.cornerL.coilover.e_a[1] * min(vehicle.frontSuspension.cornerL.coilover.length_a, vehicle.frontSuspension.cornerL.coilover.s)
*/
void AlyssaVehicle_eqFunction_3745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3745};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1399]] /* vehicle.frontSuspension.cornerL.coilover.shape_b.r_shape[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* vehicle.frontSuspension.cornerL.coilover.e_a[1] variable */)) * (fmin((data->simulationInfo->realParameter[416] /* vehicle.frontSuspension.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* vehicle.frontSuspension.cornerL.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8095(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8096(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8134(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8135(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8132(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8133(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8136(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8137(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8138(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8139(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8140(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8141(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8142(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8157(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8154(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8151(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8147(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8150(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8149(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8148(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8143(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8146(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8164(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8159(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8158(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8165(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8145(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8162(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8156(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8155(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8163(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8144(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8160(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8153(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8152(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8161(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8168(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8166(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8170(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8167(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8169(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8171(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8172(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8173(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8236(DATA *data, threadData_t *threadData);


/*
equation index: 3791
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.frame_b.R.w[3] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.vehicleBody.body.w_a[2] + vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.vehicleBody.body.w_a[3]
*/
void AlyssaVehicle_eqFunction_3791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3791};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* vehicle.frontSuspension.cornerL.springArm.frame_b.R.w[3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5049]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5050]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3792
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.frame_b.R.w[2] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.vehicleBody.body.w_a[2] - vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.vehicleBody.body.w_a[3]
*/
void AlyssaVehicle_eqFunction_3792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3792};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* vehicle.frontSuspension.cornerL.springArm.frame_b.R.w[2] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5049]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5050]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8130(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8251(DATA *data, threadData_t *threadData);


/*
equation index: 3795
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.angle = if noEvent(vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle == 0.0) then vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle else ($DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.ksin_angle * vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle - vehicle.frontSuspension.cornerL.jointUSR.revolute.ksin_angle * $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle) / (vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (vehicle.frontSuspension.cornerL.jointUSR.revolute.ksin_angle / vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle) ^ 2.0))
*/
void AlyssaVehicle_eqFunction_3795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3795};
  modelica_real tmp861;
  modelica_real tmp862;
  modelica_boolean tmp863;
  modelica_real tmp864;
  tmp863 = (modelica_boolean)((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1538]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */) == 0.0);
  if(tmp863)
  {
    tmp864 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1538]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */);
  }
  else
  {
    tmp861 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1538]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */);
    tmp862 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1539]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.ksin_angle DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1538]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */),"vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle",equationIndexes);
    tmp864 = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[397]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.ksin_angle) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1538]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1539]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.ksin_angle DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[396]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle) DUMMY_DER */))),((tmp861 * tmp861)) * (1.0 + (tmp862 * tmp862)),"vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (vehicle.frontSuspension.cornerL.jointUSR.revolute.ksin_angle / vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle) ^ 2.0)",equationIndexes);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.angle) DUMMY_DER */) = tmp864;
  TRACE_POP
}

/*
equation index: 3796
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.w[1] = -$DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_3796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3796};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.w[1] DUMMY_STATE */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8254(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8258(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8259(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8256(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8257(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8255(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8292(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8297(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8296(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8300(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8298(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8301(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8304(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8293(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8299(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8303(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8307(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8309(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8302(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8305(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8306(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8308(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8312(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8310(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8314(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8311(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8313(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8315(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8316(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8317(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8371(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8372(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8373(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8374(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8375(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8376(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8380(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8377(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8384(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8294(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8295(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8387(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8386(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8385(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8378(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8383(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8382(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8379(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8381(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8390(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8420(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8413(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8409(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8389(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8419(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8412(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8408(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8388(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8418(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8411(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8407(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8260(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8261(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8262(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8263(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8264(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8265(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8266(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8267(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8268(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8282(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8269(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8274(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8273(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8275(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8270(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8280(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8279(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8281(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8276(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8278(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8277(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8272(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8271(DATA *data, threadData_t *threadData);


/*
equation index: 3881
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] = cos(vehicle.frontSuspension.cornerL.jointUSR.revolute.angle) * $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_3881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3881};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */) = (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1512]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3882
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] = (-sin(vehicle.frontSuspension.cornerL.jointUSR.revolute.angle)) * $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_3882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3882};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1512]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3883
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,3] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,3] + $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,3] + vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,3] + $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3883};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* der(vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(vehicle.chassisFrame.R.T[2,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* der(vehicle.chassisFrame.R.T[3,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3884
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,2] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,2] + $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,2] + vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,2] + $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3884};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* der(vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,2]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(vehicle.chassisFrame.R.T[2,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1328]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* der(vehicle.chassisFrame.R.T[3,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3885
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,1] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,1] + $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,1] + vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,1] + $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3885};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* der(vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,1]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* der(vehicle.chassisFrame.R.T[2,1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* der(vehicle.chassisFrame.R.T[3,1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3886
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,3] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[2,3] + $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,3] + (-vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) * $DER.vehicle.chassisFrame.R.T[3,3] - $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3886};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[440]] /* der(vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(vehicle.chassisFrame.R.T[2,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* der(vehicle.chassisFrame.R.T[3,3]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3887
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,2] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[2,2] + $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,2] + (-vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) * $DER.vehicle.chassisFrame.R.T[3,2] - $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3887};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* der(vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,2]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(vehicle.chassisFrame.R.T[2,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1328]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* der(vehicle.chassisFrame.R.T[3,2]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3888
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,1] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[2,1] + $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,1] + (-vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) * $DER.vehicle.chassisFrame.R.T[3,1] - $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3888};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[438]] /* der(vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,1]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* der(vehicle.chassisFrame.R.T[2,1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* der(vehicle.chassisFrame.R.T[3,1]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3889
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.positiveBranch = AlyssaModel.Experiments.OptimalControlFMU.vehicle.frontSuspension.cornerL.tieRod.revolute.selectBranch(vehicle.frontSuspension.cornerL.tieRod.revolute.lengthConstraint, {0.11001306482721843, -0.24752939586124137, 0.9626143172381612}, 0.017453292519943295 * (vehicle.frontSuspension.cornerL.tieRod.revolute.phi_offset + vehicle.frontSuspension.cornerL.tieRod.revolute.phi_guess), vehicle.frontSuspension.cornerL.tieRod.revolute.r_a, vehicle.frontSuspension.cornerL.tieRod.revolute.r_b)
*/
void AlyssaVehicle_eqFunction_3889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3889};
  real_array tmp865;
  real_array tmp866;
  real_array_create(&tmp865, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1896]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp866, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1899]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.r_b[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[58] /* vehicle.frontSuspension.cornerL.tieRod.revolute.positiveBranch PARAM */) = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_frontSuspension_cornerL_tieRod_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[824] /* vehicle.frontSuspension.cornerL.tieRod.revolute.lengthConstraint PARAM */), _OMC_LIT26, (0.017453292519943295) * ((data->simulationInfo->realParameter[829] /* vehicle.frontSuspension.cornerL.tieRod.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[828] /* vehicle.frontSuspension.cornerL.tieRod.revolute.phi_guess PARAM */)), tmp865, tmp866);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8175(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8319(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8174(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8176(DATA *data, threadData_t *threadData);


/*
equation index: 3894
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[3,3] = 0.9266263237518911 + 0.07337367624810887 * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3894};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1862]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[3,3] DUMMY_STATE */) = 0.9266263237518911 + (0.07337367624810887) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1866]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3895
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[3,2] = -0.2382753403933434 + 0.2382753403933434 * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) - 0.11001306482721843 * sin(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3895};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1861]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[3,2] DUMMY_STATE */) = -0.2382753403933434 + (0.2382753403933434) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1866]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) - ((0.11001306482721843) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1866]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 3896
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[3,1] = 0.10590015128593043 + (-0.10590015128593043) * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) - 0.24752939586124137 * sin(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3896};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1860]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[3,1] DUMMY_STATE */) = 0.10590015128593043 + (-0.10590015128593043) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1866]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) - ((0.24752939586124137) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1866]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8211(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8192(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8197(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8234(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8233(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8232(DATA *data, threadData_t *threadData);


/*
equation index: 3903
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[2,3] = -0.2382753403933434 + 0.2382753403933434 * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) - (-0.11001306482721843) * sin(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3903};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1859]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[2,3] DUMMY_STATE */) = -0.2382753403933434 + (0.2382753403933434) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1866]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) - ((-0.11001306482721843) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1866]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 3904
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[2,2] = 0.06127080181543114 + 0.9387291981845689 * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3904};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1858]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[2,2] DUMMY_STATE */) = 0.06127080181543114 + (0.9387291981845689) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1866]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3905
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[2,1] = -0.027231467473524958 + 0.027231467473524958 * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) - 0.9626143172381612 * sin(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3905};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1857]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[2,1] DUMMY_STATE */) = -0.027231467473524958 + (0.027231467473524958) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1866]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) - ((0.9626143172381612) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1866]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8207(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void AlyssaVehicle_functionInitialEquations_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  AlyssaVehicle_eqFunction_7735(data, threadData);
  AlyssaVehicle_eqFunction_7740(data, threadData);
  AlyssaVehicle_eqFunction_3423(data, threadData);
  AlyssaVehicle_eqFunction_7734(data, threadData);
  AlyssaVehicle_eqFunction_7739(data, threadData);
  AlyssaVehicle_eqFunction_3426(data, threadData);
  AlyssaVehicle_eqFunction_7730(data, threadData);
  AlyssaVehicle_eqFunction_7731(data, threadData);
  AlyssaVehicle_eqFunction_7756(data, threadData);
  AlyssaVehicle_eqFunction_7757(data, threadData);
  AlyssaVehicle_eqFunction_7758(data, threadData);
  AlyssaVehicle_eqFunction_7759(data, threadData);
  AlyssaVehicle_eqFunction_7760(data, threadData);
  AlyssaVehicle_eqFunction_7761(data, threadData);
  AlyssaVehicle_eqFunction_7763(data, threadData);
  AlyssaVehicle_eqFunction_7765(data, threadData);
  AlyssaVehicle_eqFunction_7764(data, threadData);
  AlyssaVehicle_eqFunction_7762(data, threadData);
  AlyssaVehicle_eqFunction_7767(data, threadData);
  AlyssaVehicle_eqFunction_7766(data, threadData);
  AlyssaVehicle_eqFunction_7768(data, threadData);
  AlyssaVehicle_eqFunction_7775(data, threadData);
  AlyssaVehicle_eqFunction_7776(data, threadData);
  AlyssaVehicle_eqFunction_7780(data, threadData);
  AlyssaVehicle_eqFunction_7792(data, threadData);
  AlyssaVehicle_eqFunction_7782(data, threadData);
  AlyssaVehicle_eqFunction_7781(data, threadData);
  AlyssaVehicle_eqFunction_7793(data, threadData);
  AlyssaVehicle_eqFunction_7777(data, threadData);
  AlyssaVehicle_eqFunction_7790(data, threadData);
  AlyssaVehicle_eqFunction_7779(data, threadData);
  AlyssaVehicle_eqFunction_7778(data, threadData);
  AlyssaVehicle_eqFunction_7791(data, threadData);
  AlyssaVehicle_eqFunction_7794(data, threadData);
  AlyssaVehicle_eqFunction_7784(data, threadData);
  AlyssaVehicle_eqFunction_7783(data, threadData);
  AlyssaVehicle_eqFunction_7788(data, threadData);
  AlyssaVehicle_eqFunction_7786(data, threadData);
  AlyssaVehicle_eqFunction_7785(data, threadData);
  AlyssaVehicle_eqFunction_7789(data, threadData);
  AlyssaVehicle_eqFunction_7798(data, threadData);
  AlyssaVehicle_eqFunction_7796(data, threadData);
  AlyssaVehicle_eqFunction_7795(data, threadData);
  AlyssaVehicle_eqFunction_7797(data, threadData);
  AlyssaVehicle_eqFunction_7799(data, threadData);
  AlyssaVehicle_eqFunction_7800(data, threadData);
  AlyssaVehicle_eqFunction_7801(data, threadData);
  AlyssaVehicle_eqFunction_7787(data, threadData);
  AlyssaVehicle_eqFunction_3469(data, threadData);
  AlyssaVehicle_eqFunction_7754(data, threadData);
  AlyssaVehicle_eqFunction_7886(data, threadData);
  AlyssaVehicle_eqFunction_3472(data, threadData);
  AlyssaVehicle_eqFunction_3473(data, threadData);
  AlyssaVehicle_eqFunction_7889(data, threadData);
  AlyssaVehicle_eqFunction_7893(data, threadData);
  AlyssaVehicle_eqFunction_7894(data, threadData);
  AlyssaVehicle_eqFunction_7891(data, threadData);
  AlyssaVehicle_eqFunction_7892(data, threadData);
  AlyssaVehicle_eqFunction_7890(data, threadData);
  AlyssaVehicle_eqFunction_7926(data, threadData);
  AlyssaVehicle_eqFunction_7947(data, threadData);
  AlyssaVehicle_eqFunction_7948(data, threadData);
  AlyssaVehicle_eqFunction_7953(data, threadData);
  AlyssaVehicle_eqFunction_7954(data, threadData);
  AlyssaVehicle_eqFunction_3485(data, threadData);
  AlyssaVehicle_eqFunction_7949(data, threadData);
  AlyssaVehicle_eqFunction_7931(data, threadData);
  AlyssaVehicle_eqFunction_7950(data, threadData);
  AlyssaVehicle_eqFunction_7952(data, threadData);
  AlyssaVehicle_eqFunction_7956(data, threadData);
  AlyssaVehicle_eqFunction_7960(data, threadData);
  AlyssaVehicle_eqFunction_7951(data, threadData);
  AlyssaVehicle_eqFunction_7955(data, threadData);
  AlyssaVehicle_eqFunction_7961(data, threadData);
  AlyssaVehicle_eqFunction_7962(data, threadData);
  AlyssaVehicle_eqFunction_7957(data, threadData);
  AlyssaVehicle_eqFunction_7966(data, threadData);
  AlyssaVehicle_eqFunction_7964(data, threadData);
  AlyssaVehicle_eqFunction_7963(data, threadData);
  AlyssaVehicle_eqFunction_7965(data, threadData);
  AlyssaVehicle_eqFunction_7967(data, threadData);
  AlyssaVehicle_eqFunction_7968(data, threadData);
  AlyssaVehicle_eqFunction_7969(data, threadData);
  AlyssaVehicle_eqFunction_7934(data, threadData);
  AlyssaVehicle_eqFunction_7935(data, threadData);
  AlyssaVehicle_eqFunction_7932(data, threadData);
  AlyssaVehicle_eqFunction_7933(data, threadData);
  AlyssaVehicle_eqFunction_7936(data, threadData);
  AlyssaVehicle_eqFunction_7937(data, threadData);
  AlyssaVehicle_eqFunction_7938(data, threadData);
  AlyssaVehicle_eqFunction_7945(data, threadData);
  AlyssaVehicle_eqFunction_7944(data, threadData);
  AlyssaVehicle_eqFunction_7940(data, threadData);
  AlyssaVehicle_eqFunction_7942(data, threadData);
  AlyssaVehicle_eqFunction_7941(data, threadData);
  AlyssaVehicle_eqFunction_7946(data, threadData);
  AlyssaVehicle_eqFunction_7927(data, threadData);
  AlyssaVehicle_eqFunction_7928(data, threadData);
  AlyssaVehicle_eqFunction_7930(data, threadData);
  AlyssaVehicle_eqFunction_8051(data, threadData);
  AlyssaVehicle_eqFunction_8044(data, threadData);
  AlyssaVehicle_eqFunction_8037(data, threadData);
  AlyssaVehicle_eqFunction_7929(data, threadData);
  AlyssaVehicle_eqFunction_8050(data, threadData);
  AlyssaVehicle_eqFunction_8043(data, threadData);
  AlyssaVehicle_eqFunction_8036(data, threadData);
  AlyssaVehicle_eqFunction_7943(data, threadData);
  AlyssaVehicle_eqFunction_7939(data, threadData);
  AlyssaVehicle_eqFunction_8049(data, threadData);
  AlyssaVehicle_eqFunction_8042(data, threadData);
  AlyssaVehicle_eqFunction_8035(data, threadData);
  AlyssaVehicle_eqFunction_7899(data, threadData);
  AlyssaVehicle_eqFunction_7900(data, threadData);
  AlyssaVehicle_eqFunction_7897(data, threadData);
  AlyssaVehicle_eqFunction_7898(data, threadData);
  AlyssaVehicle_eqFunction_7895(data, threadData);
  AlyssaVehicle_eqFunction_7896(data, threadData);
  AlyssaVehicle_eqFunction_7901(data, threadData);
  AlyssaVehicle_eqFunction_7902(data, threadData);
  AlyssaVehicle_eqFunction_7903(data, threadData);
  AlyssaVehicle_eqFunction_7917(data, threadData);
  AlyssaVehicle_eqFunction_7904(data, threadData);
  AlyssaVehicle_eqFunction_7909(data, threadData);
  AlyssaVehicle_eqFunction_7908(data, threadData);
  AlyssaVehicle_eqFunction_7910(data, threadData);
  AlyssaVehicle_eqFunction_7905(data, threadData);
  AlyssaVehicle_eqFunction_7915(data, threadData);
  AlyssaVehicle_eqFunction_7914(data, threadData);
  AlyssaVehicle_eqFunction_7916(data, threadData);
  AlyssaVehicle_eqFunction_7911(data, threadData);
  AlyssaVehicle_eqFunction_7913(data, threadData);
  AlyssaVehicle_eqFunction_7912(data, threadData);
  AlyssaVehicle_eqFunction_7907(data, threadData);
  AlyssaVehicle_eqFunction_7906(data, threadData);
  AlyssaVehicle_eqFunction_3555(data, threadData);
  AlyssaVehicle_eqFunction_3556(data, threadData);
  AlyssaVehicle_eqFunction_3557(data, threadData);
  AlyssaVehicle_eqFunction_3558(data, threadData);
  AlyssaVehicle_eqFunction_3559(data, threadData);
  AlyssaVehicle_eqFunction_3560(data, threadData);
  AlyssaVehicle_eqFunction_3561(data, threadData);
  AlyssaVehicle_eqFunction_3562(data, threadData);
  AlyssaVehicle_eqFunction_7803(data, threadData);
  AlyssaVehicle_eqFunction_7971(data, threadData);
  AlyssaVehicle_eqFunction_7802(data, threadData);
  AlyssaVehicle_eqFunction_7804(data, threadData);
  AlyssaVehicle_eqFunction_3567(data, threadData);
  AlyssaVehicle_eqFunction_3568(data, threadData);
  AlyssaVehicle_eqFunction_3569(data, threadData);
  AlyssaVehicle_eqFunction_3570(data, threadData);
  AlyssaVehicle_eqFunction_7805(data, threadData);
  AlyssaVehicle_eqFunction_7814(data, threadData);
  AlyssaVehicle_eqFunction_7813(data, threadData);
  AlyssaVehicle_eqFunction_7959(data, threadData);
  AlyssaVehicle_eqFunction_7809(data, threadData);
  AlyssaVehicle_eqFunction_7808(data, threadData);
  AlyssaVehicle_eqFunction_7828(data, threadData);
  AlyssaVehicle_eqFunction_7821(data, threadData);
  AlyssaVehicle_eqFunction_7836(data, threadData);
  AlyssaVehicle_eqFunction_7807(data, threadData);
  AlyssaVehicle_eqFunction_7806(data, threadData);
  AlyssaVehicle_eqFunction_7818(data, threadData);
  AlyssaVehicle_eqFunction_3583(data, threadData);
  AlyssaVehicle_eqFunction_3584(data, threadData);
  AlyssaVehicle_eqFunction_7831(data, threadData);
  AlyssaVehicle_eqFunction_7832(data, threadData);
  AlyssaVehicle_eqFunction_7819(data, threadData);
  AlyssaVehicle_eqFunction_3588(data, threadData);
  AlyssaVehicle_eqFunction_3589(data, threadData);
  AlyssaVehicle_eqFunction_3590(data, threadData);
  AlyssaVehicle_eqFunction_7833(data, threadData);
  AlyssaVehicle_eqFunction_7834(data, threadData);
  AlyssaVehicle_eqFunction_7816(data, threadData);
  AlyssaVehicle_eqFunction_3594(data, threadData);
  AlyssaVehicle_eqFunction_3595(data, threadData);
  AlyssaVehicle_eqFunction_7824(data, threadData);
  AlyssaVehicle_eqFunction_7825(data, threadData);
  AlyssaVehicle_eqFunction_7817(data, threadData);
  AlyssaVehicle_eqFunction_3599(data, threadData);
  AlyssaVehicle_eqFunction_3600(data, threadData);
  AlyssaVehicle_eqFunction_3601(data, threadData);
  AlyssaVehicle_eqFunction_7826(data, threadData);
  AlyssaVehicle_eqFunction_7827(data, threadData);
  AlyssaVehicle_eqFunction_7837(data, threadData);
  AlyssaVehicle_eqFunction_3605(data, threadData);
  AlyssaVehicle_eqFunction_3606(data, threadData);
  AlyssaVehicle_eqFunction_7842(data, threadData);
  AlyssaVehicle_eqFunction_7841(data, threadData);
  AlyssaVehicle_eqFunction_7840(data, threadData);
  AlyssaVehicle_eqFunction_7839(data, threadData);
  AlyssaVehicle_eqFunction_7844(data, threadData);
  AlyssaVehicle_eqFunction_7868(data, threadData);
  AlyssaVehicle_eqFunction_7871(data, threadData);
  AlyssaVehicle_eqFunction_7870(data, threadData);
  AlyssaVehicle_eqFunction_7869(data, threadData);
  AlyssaVehicle_eqFunction_7864(data, threadData);
  AlyssaVehicle_eqFunction_7867(data, threadData);
  AlyssaVehicle_eqFunction_7866(data, threadData);
  AlyssaVehicle_eqFunction_7865(data, threadData);
  AlyssaVehicle_eqFunction_7860(data, threadData);
  AlyssaVehicle_eqFunction_7863(data, threadData);
  AlyssaVehicle_eqFunction_7862(data, threadData);
  AlyssaVehicle_eqFunction_7861(data, threadData);
  AlyssaVehicle_eqFunction_3624(data, threadData);
  AlyssaVehicle_eqFunction_3625(data, threadData);
  AlyssaVehicle_eqFunction_3626(data, threadData);
  AlyssaVehicle_eqFunction_7845(data, threadData);
  AlyssaVehicle_eqFunction_7846(data, threadData);
  AlyssaVehicle_eqFunction_7855(data, threadData);
  AlyssaVehicle_eqFunction_7856(data, threadData);
  AlyssaVehicle_eqFunction_7858(data, threadData);
  AlyssaVehicle_eqFunction_7857(data, threadData);
  AlyssaVehicle_eqFunction_7851(data, threadData);
  AlyssaVehicle_eqFunction_7852(data, threadData);
  AlyssaVehicle_eqFunction_7854(data, threadData);
  AlyssaVehicle_eqFunction_7853(data, threadData);
  AlyssaVehicle_eqFunction_7847(data, threadData);
  AlyssaVehicle_eqFunction_7848(data, threadData);
  AlyssaVehicle_eqFunction_7859(data, threadData);
  AlyssaVehicle_eqFunction_7850(data, threadData);
  AlyssaVehicle_eqFunction_7849(data, threadData);
  AlyssaVehicle_eqFunction_7835(data, threadData);
  AlyssaVehicle_eqFunction_7970(data, threadData);
  AlyssaVehicle_eqFunction_7972(data, threadData);
  AlyssaVehicle_eqFunction_7974(data, threadData);
  AlyssaVehicle_eqFunction_7987(data, threadData);
  AlyssaVehicle_eqFunction_7973(data, threadData);
  AlyssaVehicle_eqFunction_7984(data, threadData);
  AlyssaVehicle_eqFunction_7996(data, threadData);
  AlyssaVehicle_eqFunction_7997(data, threadData);
  AlyssaVehicle_eqFunction_7994(data, threadData);
  AlyssaVehicle_eqFunction_7995(data, threadData);
  AlyssaVehicle_eqFunction_7985(data, threadData);
  AlyssaVehicle_eqFunction_7986(data, threadData);
  AlyssaVehicle_eqFunction_3655(data, threadData);
  AlyssaVehicle_eqFunction_3656(data, threadData);
  AlyssaVehicle_eqFunction_3657(data, threadData);
  AlyssaVehicle_eqFunction_3658(data, threadData);
  AlyssaVehicle_eqFunction_7999(data, threadData);
  AlyssaVehicle_eqFunction_8018(data, threadData);
  AlyssaVehicle_eqFunction_8017(data, threadData);
  AlyssaVehicle_eqFunction_3662(data, threadData);
  AlyssaVehicle_eqFunction_8009(data, threadData);
  AlyssaVehicle_eqFunction_8011(data, threadData);
  AlyssaVehicle_eqFunction_8016(data, threadData);
  AlyssaVehicle_eqFunction_8014(data, threadData);
  AlyssaVehicle_eqFunction_8013(data, threadData);
  AlyssaVehicle_eqFunction_8012(data, threadData);
  AlyssaVehicle_eqFunction_7991(data, threadData);
  AlyssaVehicle_eqFunction_7992(data, threadData);
  AlyssaVehicle_eqFunction_7993(data, threadData);
  AlyssaVehicle_eqFunction_7988(data, threadData);
  AlyssaVehicle_eqFunction_7989(data, threadData);
  AlyssaVehicle_eqFunction_7990(data, threadData);
  AlyssaVehicle_eqFunction_3675(data, threadData);
  AlyssaVehicle_eqFunction_3676(data, threadData);
  AlyssaVehicle_eqFunction_8002(data, threadData);
  AlyssaVehicle_eqFunction_3678(data, threadData);
  AlyssaVehicle_eqFunction_8004(data, threadData);
  AlyssaVehicle_eqFunction_8005(data, threadData);
  AlyssaVehicle_eqFunction_3681(data, threadData);
  AlyssaVehicle_eqFunction_3682(data, threadData);
  AlyssaVehicle_eqFunction_3683(data, threadData);
  AlyssaVehicle_eqFunction_3684(data, threadData);
  AlyssaVehicle_eqFunction_3685(data, threadData);
  AlyssaVehicle_eqFunction_8047(data, threadData);
  AlyssaVehicle_eqFunction_8040(data, threadData);
  AlyssaVehicle_eqFunction_7983(data, threadData);
  AlyssaVehicle_eqFunction_7982(data, threadData);
  AlyssaVehicle_eqFunction_8046(data, threadData);
  AlyssaVehicle_eqFunction_8039(data, threadData);
  AlyssaVehicle_eqFunction_7981(data, threadData);
  AlyssaVehicle_eqFunction_7980(data, threadData);
  AlyssaVehicle_eqFunction_8045(data, threadData);
  AlyssaVehicle_eqFunction_8038(data, threadData);
  AlyssaVehicle_eqFunction_3696(data, threadData);
  AlyssaVehicle_eqFunction_3697(data, threadData);
  AlyssaVehicle_eqFunction_3698(data, threadData);
  AlyssaVehicle_eqFunction_3699(data, threadData);
  AlyssaVehicle_eqFunction_8083(data, threadData);
  AlyssaVehicle_eqFunction_8084(data, threadData);
  AlyssaVehicle_eqFunction_8085(data, threadData);
  AlyssaVehicle_eqFunction_8086(data, threadData);
  AlyssaVehicle_eqFunction_8248(data, threadData);
  AlyssaVehicle_eqFunction_8249(data, threadData);
  AlyssaVehicle_eqFunction_8250(data, threadData);
  AlyssaVehicle_eqFunction_3707(data, threadData);
  AlyssaVehicle_eqFunction_8088(data, threadData);
  AlyssaVehicle_eqFunction_8252(data, threadData);
  AlyssaVehicle_eqFunction_8087(data, threadData);
  AlyssaVehicle_eqFunction_8089(data, threadData);
  AlyssaVehicle_eqFunction_3712(data, threadData);
  AlyssaVehicle_eqFunction_8090(data, threadData);
  AlyssaVehicle_eqFunction_3714(data, threadData);
  AlyssaVehicle_eqFunction_3715(data, threadData);
  AlyssaVehicle_eqFunction_3716(data, threadData);
  AlyssaVehicle_eqFunction_3717(data, threadData);
  AlyssaVehicle_eqFunction_8109(data, threadData);
  AlyssaVehicle_eqFunction_8110(data, threadData);
  AlyssaVehicle_eqFunction_8101(data, threadData);
  AlyssaVehicle_eqFunction_8131(data, threadData);
  AlyssaVehicle_eqFunction_3722(data, threadData);
  AlyssaVehicle_eqFunction_8106(data, threadData);
  AlyssaVehicle_eqFunction_8107(data, threadData);
  AlyssaVehicle_eqFunction_8098(data, threadData);
  AlyssaVehicle_eqFunction_8099(data, threadData);
  AlyssaVehicle_eqFunction_3727(data, threadData);
  AlyssaVehicle_eqFunction_8103(data, threadData);
  AlyssaVehicle_eqFunction_8104(data, threadData);
  AlyssaVehicle_eqFunction_8111(data, threadData);
  AlyssaVehicle_eqFunction_8112(data, threadData);
  AlyssaVehicle_eqFunction_3732(data, threadData);
  AlyssaVehicle_eqFunction_3733(data, threadData);
  AlyssaVehicle_eqFunction_8119(data, threadData);
  AlyssaVehicle_eqFunction_8117(data, threadData);
  AlyssaVehicle_eqFunction_8118(data, threadData);
  AlyssaVehicle_eqFunction_8120(data, threadData);
  AlyssaVehicle_eqFunction_8121(data, threadData);
  AlyssaVehicle_eqFunction_3739(data, threadData);
  AlyssaVehicle_eqFunction_8123(data, threadData);
  AlyssaVehicle_eqFunction_8124(data, threadData);
  AlyssaVehicle_eqFunction_3742(data, threadData);
  AlyssaVehicle_eqFunction_8126(data, threadData);
  AlyssaVehicle_eqFunction_8127(data, threadData);
  AlyssaVehicle_eqFunction_3745(data, threadData);
  AlyssaVehicle_eqFunction_8095(data, threadData);
  AlyssaVehicle_eqFunction_8096(data, threadData);
  AlyssaVehicle_eqFunction_8134(data, threadData);
  AlyssaVehicle_eqFunction_8135(data, threadData);
  AlyssaVehicle_eqFunction_8132(data, threadData);
  AlyssaVehicle_eqFunction_8133(data, threadData);
  AlyssaVehicle_eqFunction_8136(data, threadData);
  AlyssaVehicle_eqFunction_8137(data, threadData);
  AlyssaVehicle_eqFunction_8138(data, threadData);
  AlyssaVehicle_eqFunction_8139(data, threadData);
  AlyssaVehicle_eqFunction_8140(data, threadData);
  AlyssaVehicle_eqFunction_8141(data, threadData);
  AlyssaVehicle_eqFunction_8142(data, threadData);
  AlyssaVehicle_eqFunction_8157(data, threadData);
  AlyssaVehicle_eqFunction_8154(data, threadData);
  AlyssaVehicle_eqFunction_8151(data, threadData);
  AlyssaVehicle_eqFunction_8147(data, threadData);
  AlyssaVehicle_eqFunction_8150(data, threadData);
  AlyssaVehicle_eqFunction_8149(data, threadData);
  AlyssaVehicle_eqFunction_8148(data, threadData);
  AlyssaVehicle_eqFunction_8143(data, threadData);
  AlyssaVehicle_eqFunction_8146(data, threadData);
  AlyssaVehicle_eqFunction_8164(data, threadData);
  AlyssaVehicle_eqFunction_8159(data, threadData);
  AlyssaVehicle_eqFunction_8158(data, threadData);
  AlyssaVehicle_eqFunction_8165(data, threadData);
  AlyssaVehicle_eqFunction_8145(data, threadData);
  AlyssaVehicle_eqFunction_8162(data, threadData);
  AlyssaVehicle_eqFunction_8156(data, threadData);
  AlyssaVehicle_eqFunction_8155(data, threadData);
  AlyssaVehicle_eqFunction_8163(data, threadData);
  AlyssaVehicle_eqFunction_8144(data, threadData);
  AlyssaVehicle_eqFunction_8160(data, threadData);
  AlyssaVehicle_eqFunction_8153(data, threadData);
  AlyssaVehicle_eqFunction_8152(data, threadData);
  AlyssaVehicle_eqFunction_8161(data, threadData);
  AlyssaVehicle_eqFunction_8168(data, threadData);
  AlyssaVehicle_eqFunction_8166(data, threadData);
  AlyssaVehicle_eqFunction_8170(data, threadData);
  AlyssaVehicle_eqFunction_8167(data, threadData);
  AlyssaVehicle_eqFunction_8169(data, threadData);
  AlyssaVehicle_eqFunction_8171(data, threadData);
  AlyssaVehicle_eqFunction_8172(data, threadData);
  AlyssaVehicle_eqFunction_8173(data, threadData);
  AlyssaVehicle_eqFunction_8236(data, threadData);
  AlyssaVehicle_eqFunction_3791(data, threadData);
  AlyssaVehicle_eqFunction_3792(data, threadData);
  AlyssaVehicle_eqFunction_8130(data, threadData);
  AlyssaVehicle_eqFunction_8251(data, threadData);
  AlyssaVehicle_eqFunction_3795(data, threadData);
  AlyssaVehicle_eqFunction_3796(data, threadData);
  AlyssaVehicle_eqFunction_8254(data, threadData);
  AlyssaVehicle_eqFunction_8258(data, threadData);
  AlyssaVehicle_eqFunction_8259(data, threadData);
  AlyssaVehicle_eqFunction_8256(data, threadData);
  AlyssaVehicle_eqFunction_8257(data, threadData);
  AlyssaVehicle_eqFunction_8255(data, threadData);
  AlyssaVehicle_eqFunction_8292(data, threadData);
  AlyssaVehicle_eqFunction_8297(data, threadData);
  AlyssaVehicle_eqFunction_8296(data, threadData);
  AlyssaVehicle_eqFunction_8300(data, threadData);
  AlyssaVehicle_eqFunction_8298(data, threadData);
  AlyssaVehicle_eqFunction_8301(data, threadData);
  AlyssaVehicle_eqFunction_8304(data, threadData);
  AlyssaVehicle_eqFunction_8293(data, threadData);
  AlyssaVehicle_eqFunction_8299(data, threadData);
  AlyssaVehicle_eqFunction_8303(data, threadData);
  AlyssaVehicle_eqFunction_8307(data, threadData);
  AlyssaVehicle_eqFunction_8309(data, threadData);
  AlyssaVehicle_eqFunction_8302(data, threadData);
  AlyssaVehicle_eqFunction_8305(data, threadData);
  AlyssaVehicle_eqFunction_8306(data, threadData);
  AlyssaVehicle_eqFunction_8308(data, threadData);
  AlyssaVehicle_eqFunction_8312(data, threadData);
  AlyssaVehicle_eqFunction_8310(data, threadData);
  AlyssaVehicle_eqFunction_8314(data, threadData);
  AlyssaVehicle_eqFunction_8311(data, threadData);
  AlyssaVehicle_eqFunction_8313(data, threadData);
  AlyssaVehicle_eqFunction_8315(data, threadData);
  AlyssaVehicle_eqFunction_8316(data, threadData);
  AlyssaVehicle_eqFunction_8317(data, threadData);
  AlyssaVehicle_eqFunction_8371(data, threadData);
  AlyssaVehicle_eqFunction_8372(data, threadData);
  AlyssaVehicle_eqFunction_8373(data, threadData);
  AlyssaVehicle_eqFunction_8374(data, threadData);
  AlyssaVehicle_eqFunction_8375(data, threadData);
  AlyssaVehicle_eqFunction_8376(data, threadData);
  AlyssaVehicle_eqFunction_8380(data, threadData);
  AlyssaVehicle_eqFunction_8377(data, threadData);
  AlyssaVehicle_eqFunction_8384(data, threadData);
  AlyssaVehicle_eqFunction_8294(data, threadData);
  AlyssaVehicle_eqFunction_8295(data, threadData);
  AlyssaVehicle_eqFunction_8387(data, threadData);
  AlyssaVehicle_eqFunction_8386(data, threadData);
  AlyssaVehicle_eqFunction_8385(data, threadData);
  AlyssaVehicle_eqFunction_8378(data, threadData);
  AlyssaVehicle_eqFunction_8383(data, threadData);
  AlyssaVehicle_eqFunction_8382(data, threadData);
  AlyssaVehicle_eqFunction_8379(data, threadData);
  AlyssaVehicle_eqFunction_8381(data, threadData);
  AlyssaVehicle_eqFunction_8390(data, threadData);
  AlyssaVehicle_eqFunction_8420(data, threadData);
  AlyssaVehicle_eqFunction_8413(data, threadData);
  AlyssaVehicle_eqFunction_8409(data, threadData);
  AlyssaVehicle_eqFunction_8389(data, threadData);
  AlyssaVehicle_eqFunction_8419(data, threadData);
  AlyssaVehicle_eqFunction_8412(data, threadData);
  AlyssaVehicle_eqFunction_8408(data, threadData);
  AlyssaVehicle_eqFunction_8388(data, threadData);
  AlyssaVehicle_eqFunction_8418(data, threadData);
  AlyssaVehicle_eqFunction_8411(data, threadData);
  AlyssaVehicle_eqFunction_8407(data, threadData);
  AlyssaVehicle_eqFunction_8260(data, threadData);
  AlyssaVehicle_eqFunction_8261(data, threadData);
  AlyssaVehicle_eqFunction_8262(data, threadData);
  AlyssaVehicle_eqFunction_8263(data, threadData);
  AlyssaVehicle_eqFunction_8264(data, threadData);
  AlyssaVehicle_eqFunction_8265(data, threadData);
  AlyssaVehicle_eqFunction_8266(data, threadData);
  AlyssaVehicle_eqFunction_8267(data, threadData);
  AlyssaVehicle_eqFunction_8268(data, threadData);
  AlyssaVehicle_eqFunction_8282(data, threadData);
  AlyssaVehicle_eqFunction_8269(data, threadData);
  AlyssaVehicle_eqFunction_8274(data, threadData);
  AlyssaVehicle_eqFunction_8273(data, threadData);
  AlyssaVehicle_eqFunction_8275(data, threadData);
  AlyssaVehicle_eqFunction_8270(data, threadData);
  AlyssaVehicle_eqFunction_8280(data, threadData);
  AlyssaVehicle_eqFunction_8279(data, threadData);
  AlyssaVehicle_eqFunction_8281(data, threadData);
  AlyssaVehicle_eqFunction_8276(data, threadData);
  AlyssaVehicle_eqFunction_8278(data, threadData);
  AlyssaVehicle_eqFunction_8277(data, threadData);
  AlyssaVehicle_eqFunction_8272(data, threadData);
  AlyssaVehicle_eqFunction_8271(data, threadData);
  AlyssaVehicle_eqFunction_3881(data, threadData);
  AlyssaVehicle_eqFunction_3882(data, threadData);
  AlyssaVehicle_eqFunction_3883(data, threadData);
  AlyssaVehicle_eqFunction_3884(data, threadData);
  AlyssaVehicle_eqFunction_3885(data, threadData);
  AlyssaVehicle_eqFunction_3886(data, threadData);
  AlyssaVehicle_eqFunction_3887(data, threadData);
  AlyssaVehicle_eqFunction_3888(data, threadData);
  AlyssaVehicle_eqFunction_3889(data, threadData);
  AlyssaVehicle_eqFunction_8175(data, threadData);
  AlyssaVehicle_eqFunction_8319(data, threadData);
  AlyssaVehicle_eqFunction_8174(data, threadData);
  AlyssaVehicle_eqFunction_8176(data, threadData);
  AlyssaVehicle_eqFunction_3894(data, threadData);
  AlyssaVehicle_eqFunction_3895(data, threadData);
  AlyssaVehicle_eqFunction_3896(data, threadData);
  AlyssaVehicle_eqFunction_8211(data, threadData);
  AlyssaVehicle_eqFunction_8192(data, threadData);
  AlyssaVehicle_eqFunction_8197(data, threadData);
  AlyssaVehicle_eqFunction_8234(data, threadData);
  AlyssaVehicle_eqFunction_8233(data, threadData);
  AlyssaVehicle_eqFunction_8232(data, threadData);
  AlyssaVehicle_eqFunction_3903(data, threadData);
  AlyssaVehicle_eqFunction_3904(data, threadData);
  AlyssaVehicle_eqFunction_3905(data, threadData);
  AlyssaVehicle_eqFunction_8207(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif
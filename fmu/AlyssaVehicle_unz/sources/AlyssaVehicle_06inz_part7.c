#include "AlyssaVehicle_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern void AlyssaVehicle_eqFunction_7781(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7782(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7783(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7784(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7786(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7788(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7787(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7785(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7790(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7789(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7791(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7798(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7799(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7803(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7815(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7805(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7804(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7816(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7800(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7813(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7802(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7801(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7814(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7817(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7807(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7806(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7811(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7809(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7808(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7812(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7821(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7819(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7818(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7820(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7822(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7823(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7824(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7810(DATA *data, threadData_t *threadData);


/*
equation index: 3466
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springArm.frame_b.R.w[2] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.vehicleBody.body.w_a[2] - vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.vehicleBody.body.w_a[3]
*/
void AlyssaVehicle_eqFunction_3466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3466};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4453]] /* vehicle.rearSuspension.cornerR.springArm.frame_b.R.w[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4226]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4225]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7777(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7910(DATA *data, threadData_t *threadData);


/*
equation index: 3469
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.angle = if noEvent(vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle == 0.0) then vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle else ($DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.ksin_angle * vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle - vehicle.rearSuspension.cornerR.jointUSR.revolute.ksin_angle * $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle) / (vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (vehicle.rearSuspension.cornerR.jointUSR.revolute.ksin_angle / vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle) ^ 2.0))
*/
void AlyssaVehicle_eqFunction_3469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3469};
  modelica_real tmp491;
  modelica_real tmp492;
  modelica_boolean tmp493;
  modelica_real tmp494;
  tmp493 = (modelica_boolean)((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4255]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */) == 0.0);
  if(tmp493)
  {
    tmp494 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4255]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */);
  }
  else
  {
    tmp491 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4255]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */);
    tmp492 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4256]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.ksin_angle DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4255]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */),"vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle",equationIndexes);
    tmp494 = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[871]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.ksin_angle) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4255]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4256]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.ksin_angle DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[870]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle) DUMMY_DER */))),((tmp491 * tmp491)) * (1.0 + (tmp492 * tmp492)),"vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (vehicle.rearSuspension.cornerR.jointUSR.revolute.ksin_angle / vehicle.rearSuspension.cornerR.jointUSR.revolute.kcos_angle) ^ 2.0)",equationIndexes);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.angle) DUMMY_DER */) = tmp494;
  TRACE_POP
}

/*
equation index: 3470
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.w[1] = -$DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_3470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3470};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4227]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.w[1] DUMMY_STATE */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7913(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7917(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7918(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7915(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7916(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7914(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7950(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7971(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7972(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7977(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7978(DATA *data, threadData_t *threadData);


/*
equation index: 3482
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.frame_ia.R.w[1] = vehicle.rearSuspension.cornerR.jointUSR.rod1.R_rel_ia.w[1] - vehicle.rearSuspension.cornerR.jointUSR.rod1.e3_a[3] * vehicle.rearSuspension.cornerR.jointUSR.frame_a.R.w[3] - vehicle.rearSuspension.cornerR.jointUSR.rod1.e3_a[2] * vehicle.rearSuspension.cornerR.jointUSR.frame_a.R.w[2] - vehicle.rearSuspension.cornerR.jointUSR.rod1.e3_a[1] * vehicle.rearSuspension.cornerR.jointUSR.frame_a.R.w[1]
*/
void AlyssaVehicle_eqFunction_3482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3482};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4154]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_ia.R.w[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4270]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.R_rel_ia.w[1] DUMMY_STATE */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4294]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.e3_a[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4139]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4293]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.e3_a[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4138]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_a.R.w[2] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4292]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.e3_a[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4137]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_a.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7973(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7955(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7974(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7976(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7980(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7984(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7975(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7979(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7985(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7986(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7981(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7990(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7988(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7987(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7989(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7991(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7992(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7993(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7958(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7959(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7956(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7957(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7960(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7961(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7962(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7969(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7968(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7964(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7966(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7965(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7970(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7951(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7952(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7954(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8074(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8067(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8060(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7953(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8073(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8066(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8059(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7967(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7963(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8072(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8065(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8058(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7923(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7924(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7921(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7922(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7919(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7920(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7925(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7926(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7927(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7941(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7928(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7933(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7932(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7934(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7929(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7939(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7938(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7940(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7935(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7937(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7936(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7931(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7930(DATA *data, threadData_t *threadData);


/*
equation index: 3552
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] = cos(vehicle.rearSuspension.cornerR.jointUSR.revolute.angle) * $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_3552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3552};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */) = (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4230]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3553
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] = (-sin(vehicle.rearSuspension.cornerR.jointUSR.revolute.angle)) * $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_3553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3553};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[863]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4230]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3554
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,3] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,3] + $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,3] + vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,3] + $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3554};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[913]] /* der(vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4225]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(vehicle.chassisFrame.R.T[2,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4226]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* der(vehicle.chassisFrame.R.T[3,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[863]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3555
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,2] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,2] + $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,2] + vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,2] + $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3555};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* der(vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,2]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4225]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(vehicle.chassisFrame.R.T[2,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4226]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* der(vehicle.chassisFrame.R.T[3,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[863]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3556
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,1] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,1] + $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,1] + vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,1] + $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3556};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[911]] /* der(vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,1]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4225]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* der(vehicle.chassisFrame.R.T[2,1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4226]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* der(vehicle.chassisFrame.R.T[3,1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[863]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3557
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,3] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[2,3] + $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,3] + (-vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) * $DER.vehicle.chassisFrame.R.T[3,3] - $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3557};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* der(vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4226]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(vehicle.chassisFrame.R.T[2,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[863]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4225]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* der(vehicle.chassisFrame.R.T[3,3]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3558
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,2] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[2,2] + $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,2] + (-vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) * $DER.vehicle.chassisFrame.R.T[3,2] - $DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3558};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[909]] /* der(vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,2]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4226]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(vehicle.chassisFrame.R.T[2,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[863]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4225]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* der(vehicle.chassisFrame.R.T[3,2]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3559
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.positiveBranch = AlyssaModel.Experiments.OptimalControlFMU.vehicle.rearSuspension.cornerR.tieRod.revolute.selectBranch(vehicle.rearSuspension.cornerR.tieRod.revolute.lengthConstraint, {0.0, 0.222824801502141, 0.9748585065718673}, 0.017453292519943295 * (vehicle.rearSuspension.cornerR.tieRod.revolute.phi_offset + vehicle.rearSuspension.cornerR.tieRod.revolute.phi_guess), vehicle.rearSuspension.cornerR.tieRod.revolute.r_a, vehicle.rearSuspension.cornerR.tieRod.revolute.r_b)
*/
void AlyssaVehicle_eqFunction_3559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3559};
  real_array tmp495;
  real_array tmp496;
  real_array_create(&tmp495, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4612]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp496, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4615]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.r_b[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[198] /* vehicle.rearSuspension.cornerR.tieRod.revolute.positiveBranch PARAM */) = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerR_tieRod_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[2978] /* vehicle.rearSuspension.cornerR.tieRod.revolute.lengthConstraint PARAM */), _OMC_LIT25, (0.017453292519943295) * ((data->simulationInfo->realParameter[2983] /* vehicle.rearSuspension.cornerR.tieRod.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[2982] /* vehicle.rearSuspension.cornerR.tieRod.revolute.phi_guess PARAM */)), tmp495, tmp496);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7826(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7995(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7825(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7827(DATA *data, threadData_t *threadData);


/*
equation index: 3564
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[3,1] = 0.222824801502141 * sin(vehicle.rearSuspension.cornerR.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3564};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4576]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[3,1] DUMMY_STATE */) = (0.222824801502141) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4582]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3565
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[2,1] = (-0.9748585065718673) * sin(vehicle.rearSuspension.cornerR.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3565};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4573]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[2,1] DUMMY_STATE */) = (-0.9748585065718673) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4582]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3566
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,3] = (-0.222824801502141) * sin(vehicle.rearSuspension.cornerR.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3566};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4572]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,3] DUMMY_STATE */) = (-0.222824801502141) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4582]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3567
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,2] = 0.9748585065718673 * sin(vehicle.rearSuspension.cornerR.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3567};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4571]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,2] DUMMY_STATE */) = (0.9748585065718673) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4582]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7828(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7837(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7836(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7983(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7832(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7831(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7859(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7851(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7844(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7830(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7829(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7841(DATA *data, threadData_t *threadData);


/*
equation index: 3580
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.frame_a.r_0[2] = vehicle.rearSuspension.cornerR.jointUSR.frame_ia.r_0[2] + 0.13 * vehicle.rearSuspension.cornerR.upright.frame_a.R.T[2,2] + 0.2 * vehicle.rearSuspension.cornerR.upright.frame_a.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3580};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4807]] /* vehicle.rearSuspension.cornerR.upright.frame_a.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4161]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_ia.r_0[2] DUMMY_STATE */) + (0.13) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4798]] /* vehicle.rearSuspension.cornerR.upright.frame_a.R.T[2,2] DUMMY_STATE */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4801]] /* vehicle.rearSuspension.cornerR.upright.frame_a.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3581
type: SIMPLE_ASSIGN
vehicle.wheelRR.contactPatch.frame_a.r_0[2] = vehicle.rearSuspension.cornerR.upright.frame_a.r_0[2]
*/
void AlyssaVehicle_eqFunction_3581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3581};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5371]] /* vehicle.wheelRR.contactPatch.frame_a.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4807]] /* vehicle.rearSuspension.cornerR.upright.frame_a.r_0[2] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7854(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7855(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7842(DATA *data, threadData_t *threadData);


/*
equation index: 3585
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,2] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[1,2] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[2,2] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3585};
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
  real_array_create(&tmp497, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp497, ((modelica_integer) 2) - ndims_base_array(&tmp497), &tmp498);
  real_array_create(&tmp499, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp499, ((modelica_integer) 2) - ndims_base_array(&tmp499), &tmp500);
  transpose_alloc_real_array(&tmp500, &tmp501);
  real_array_create(&tmp502, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp502, ((modelica_integer) 2) - ndims_base_array(&tmp502), &tmp503);
  real_array_create(&tmp504, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp504, ((modelica_integer) 2) - ndims_base_array(&tmp504), &tmp505);
  transpose_alloc_real_array(&tmp505, &tmp506);
  real_array_create(&tmp507, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp507, ((modelica_integer) 2) - ndims_base_array(&tmp507), &tmp508);
  real_array_create(&tmp509, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp509, ((modelica_integer) 2) - ndims_base_array(&tmp509), &tmp510);
  transpose_alloc_real_array(&tmp510, &tmp511);
  real_array_create(&tmp512, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp512, ((modelica_integer) 2) - ndims_base_array(&tmp512), &tmp513);
  real_array_create(&tmp514, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp514, ((modelica_integer) 2) - ndims_base_array(&tmp514), &tmp515);
  transpose_alloc_real_array(&tmp515, &tmp516);
  real_array_create(&tmp517, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp517, ((modelica_integer) 2) - ndims_base_array(&tmp517), &tmp518);
  real_array_create(&tmp519, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp519, ((modelica_integer) 2) - ndims_base_array(&tmp519), &tmp520);
  transpose_alloc_real_array(&tmp520, &tmp521);
  real_array_create(&tmp522, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp522, ((modelica_integer) 2) - ndims_base_array(&tmp522), &tmp523);
  real_array_create(&tmp524, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp524, ((modelica_integer) 2) - ndims_base_array(&tmp524), &tmp525);
  transpose_alloc_real_array(&tmp525, &tmp526);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5425]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp498, tmp501), 2, 0) + ((data->simulationInfo->realParameter[3812] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp503, tmp506), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3179]] /* vehicle.hubRR.bearingFrame.R.T[1,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp508, tmp511), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp513, tmp516), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* vehicle.hubRR.bearingFrame.R.T[2,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp518, tmp521), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp523, tmp526), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3185]] /* vehicle.hubRR.bearingFrame.R.T[3,2] variable */));
  TRACE_POP
}

/*
equation index: 3586
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,2] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[1,2] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[2,2] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3586};
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
  real_array_create(&tmp527, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp527, ((modelica_integer) 2) - ndims_base_array(&tmp527), &tmp528);
  real_array_create(&tmp529, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp529, ((modelica_integer) 2) - ndims_base_array(&tmp529), &tmp530);
  transpose_alloc_real_array(&tmp530, &tmp531);
  real_array_create(&tmp532, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp532, ((modelica_integer) 2) - ndims_base_array(&tmp532), &tmp533);
  real_array_create(&tmp534, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp534, ((modelica_integer) 2) - ndims_base_array(&tmp534), &tmp535);
  transpose_alloc_real_array(&tmp535, &tmp536);
  real_array_create(&tmp537, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp537, ((modelica_integer) 2) - ndims_base_array(&tmp537), &tmp538);
  real_array_create(&tmp539, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp539, ((modelica_integer) 2) - ndims_base_array(&tmp539), &tmp540);
  transpose_alloc_real_array(&tmp540, &tmp541);
  real_array_create(&tmp542, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp542, ((modelica_integer) 2) - ndims_base_array(&tmp542), &tmp543);
  real_array_create(&tmp544, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp544, ((modelica_integer) 2) - ndims_base_array(&tmp544), &tmp545);
  transpose_alloc_real_array(&tmp545, &tmp546);
  real_array_create(&tmp547, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp547, ((modelica_integer) 2) - ndims_base_array(&tmp547), &tmp548);
  real_array_create(&tmp549, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp549, ((modelica_integer) 2) - ndims_base_array(&tmp549), &tmp550);
  transpose_alloc_real_array(&tmp550, &tmp551);
  real_array_create(&tmp552, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp552, ((modelica_integer) 2) - ndims_base_array(&tmp552), &tmp553);
  real_array_create(&tmp554, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp554, ((modelica_integer) 2) - ndims_base_array(&tmp554), &tmp555);
  transpose_alloc_real_array(&tmp555, &tmp556);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5422]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp528, tmp531), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp533, tmp536), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3813] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3179]] /* vehicle.hubRR.bearingFrame.R.T[1,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp538, tmp541), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp543, tmp546), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* vehicle.hubRR.bearingFrame.R.T[2,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp548, tmp551), 1, 2) + ((data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp553, tmp556), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3185]] /* vehicle.hubRR.bearingFrame.R.T[3,2] variable */));
  TRACE_POP
}

/*
equation index: 3587
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,2] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[1,2] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[2,2] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3587};
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
  real_array_create(&tmp557, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp557, ((modelica_integer) 2) - ndims_base_array(&tmp557), &tmp558);
  real_array_create(&tmp559, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp559, ((modelica_integer) 2) - ndims_base_array(&tmp559), &tmp560);
  transpose_alloc_real_array(&tmp560, &tmp561);
  real_array_create(&tmp562, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp562, ((modelica_integer) 2) - ndims_base_array(&tmp562), &tmp563);
  real_array_create(&tmp564, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp564, ((modelica_integer) 2) - ndims_base_array(&tmp564), &tmp565);
  transpose_alloc_real_array(&tmp565, &tmp566);
  real_array_create(&tmp567, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp567, ((modelica_integer) 2) - ndims_base_array(&tmp567), &tmp568);
  real_array_create(&tmp569, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp569, ((modelica_integer) 2) - ndims_base_array(&tmp569), &tmp570);
  transpose_alloc_real_array(&tmp570, &tmp571);
  real_array_create(&tmp572, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp572, ((modelica_integer) 2) - ndims_base_array(&tmp572), &tmp573);
  real_array_create(&tmp574, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp574, ((modelica_integer) 2) - ndims_base_array(&tmp574), &tmp575);
  transpose_alloc_real_array(&tmp575, &tmp576);
  real_array_create(&tmp577, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp577, ((modelica_integer) 2) - ndims_base_array(&tmp577), &tmp578);
  real_array_create(&tmp579, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp579, ((modelica_integer) 2) - ndims_base_array(&tmp579), &tmp580);
  transpose_alloc_real_array(&tmp580, &tmp581);
  real_array_create(&tmp582, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp582, ((modelica_integer) 2) - ndims_base_array(&tmp582), &tmp583);
  real_array_create(&tmp584, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp584, ((modelica_integer) 2) - ndims_base_array(&tmp584), &tmp585);
  transpose_alloc_real_array(&tmp585, &tmp586);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5419]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp558, tmp561), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp563, tmp566), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3179]] /* vehicle.hubRR.bearingFrame.R.T[1,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp568, tmp571), 0, 1) + ((data->simulationInfo->realParameter[3813] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp573, tmp576), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* vehicle.hubRR.bearingFrame.R.T[2,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp578, tmp581), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp583, tmp586), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3812] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3185]] /* vehicle.hubRR.bearingFrame.R.T[3,2] variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7856(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7857(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7839(DATA *data, threadData_t *threadData);


/*
equation index: 3591
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.frame_a.r_0[1] = vehicle.rearSuspension.cornerR.jointUSR.frame_ia.r_0[1] + 0.13 * vehicle.rearSuspension.cornerR.upright.frame_a.R.T[2,1] + 0.2 * vehicle.rearSuspension.cornerR.upright.frame_a.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3591};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4806]] /* vehicle.rearSuspension.cornerR.upright.frame_a.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4160]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_ia.r_0[1] DUMMY_STATE */) + (0.13) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4797]] /* vehicle.rearSuspension.cornerR.upright.frame_a.R.T[2,1] DUMMY_STATE */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4800]] /* vehicle.rearSuspension.cornerR.upright.frame_a.R.T[3,1] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3592
type: SIMPLE_ASSIGN
vehicle.wheelRR.contactPatch.frame_a.r_0[1] = vehicle.rearSuspension.cornerR.upright.frame_a.r_0[1]
*/
void AlyssaVehicle_eqFunction_3592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3592};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5370]] /* vehicle.wheelRR.contactPatch.frame_a.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4806]] /* vehicle.rearSuspension.cornerR.upright.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7847(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7848(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7840(DATA *data, threadData_t *threadData);


/*
equation index: 3596
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,1] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[1,1] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[2,1] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3596};
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
  real_array_create(&tmp587, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp587, ((modelica_integer) 2) - ndims_base_array(&tmp587), &tmp588);
  real_array_create(&tmp589, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp589, ((modelica_integer) 2) - ndims_base_array(&tmp589), &tmp590);
  transpose_alloc_real_array(&tmp590, &tmp591);
  real_array_create(&tmp592, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp592, ((modelica_integer) 2) - ndims_base_array(&tmp592), &tmp593);
  real_array_create(&tmp594, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp594, ((modelica_integer) 2) - ndims_base_array(&tmp594), &tmp595);
  transpose_alloc_real_array(&tmp595, &tmp596);
  real_array_create(&tmp597, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp597, ((modelica_integer) 2) - ndims_base_array(&tmp597), &tmp598);
  real_array_create(&tmp599, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp599, ((modelica_integer) 2) - ndims_base_array(&tmp599), &tmp600);
  transpose_alloc_real_array(&tmp600, &tmp601);
  real_array_create(&tmp602, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp602, ((modelica_integer) 2) - ndims_base_array(&tmp602), &tmp603);
  real_array_create(&tmp604, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp604, ((modelica_integer) 2) - ndims_base_array(&tmp604), &tmp605);
  transpose_alloc_real_array(&tmp605, &tmp606);
  real_array_create(&tmp607, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp607, ((modelica_integer) 2) - ndims_base_array(&tmp607), &tmp608);
  real_array_create(&tmp609, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp609, ((modelica_integer) 2) - ndims_base_array(&tmp609), &tmp610);
  transpose_alloc_real_array(&tmp610, &tmp611);
  real_array_create(&tmp612, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp612, ((modelica_integer) 2) - ndims_base_array(&tmp612), &tmp613);
  real_array_create(&tmp614, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp614, ((modelica_integer) 2) - ndims_base_array(&tmp614), &tmp615);
  transpose_alloc_real_array(&tmp615, &tmp616);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5424]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp588, tmp591), 2, 0) + ((data->simulationInfo->realParameter[3812] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp593, tmp596), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3178]] /* vehicle.hubRR.bearingFrame.R.T[1,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp598, tmp601), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp603, tmp606), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* vehicle.hubRR.bearingFrame.R.T[2,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp608, tmp611), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp613, tmp616), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3184]] /* vehicle.hubRR.bearingFrame.R.T[3,1] variable */));
  TRACE_POP
}

/*
equation index: 3597
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,1] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[1,1] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[2,1] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3597};
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
  real_array_create(&tmp617, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp617, ((modelica_integer) 2) - ndims_base_array(&tmp617), &tmp618);
  real_array_create(&tmp619, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp619, ((modelica_integer) 2) - ndims_base_array(&tmp619), &tmp620);
  transpose_alloc_real_array(&tmp620, &tmp621);
  real_array_create(&tmp622, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp622, ((modelica_integer) 2) - ndims_base_array(&tmp622), &tmp623);
  real_array_create(&tmp624, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp624, ((modelica_integer) 2) - ndims_base_array(&tmp624), &tmp625);
  transpose_alloc_real_array(&tmp625, &tmp626);
  real_array_create(&tmp627, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp627, ((modelica_integer) 2) - ndims_base_array(&tmp627), &tmp628);
  real_array_create(&tmp629, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp629, ((modelica_integer) 2) - ndims_base_array(&tmp629), &tmp630);
  transpose_alloc_real_array(&tmp630, &tmp631);
  real_array_create(&tmp632, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp632, ((modelica_integer) 2) - ndims_base_array(&tmp632), &tmp633);
  real_array_create(&tmp634, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp634, ((modelica_integer) 2) - ndims_base_array(&tmp634), &tmp635);
  transpose_alloc_real_array(&tmp635, &tmp636);
  real_array_create(&tmp637, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp637, ((modelica_integer) 2) - ndims_base_array(&tmp637), &tmp638);
  real_array_create(&tmp639, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp639, ((modelica_integer) 2) - ndims_base_array(&tmp639), &tmp640);
  transpose_alloc_real_array(&tmp640, &tmp641);
  real_array_create(&tmp642, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp642, ((modelica_integer) 2) - ndims_base_array(&tmp642), &tmp643);
  real_array_create(&tmp644, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp644, ((modelica_integer) 2) - ndims_base_array(&tmp644), &tmp645);
  transpose_alloc_real_array(&tmp645, &tmp646);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5421]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp618, tmp621), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp623, tmp626), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3813] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3178]] /* vehicle.hubRR.bearingFrame.R.T[1,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp628, tmp631), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp633, tmp636), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* vehicle.hubRR.bearingFrame.R.T[2,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp638, tmp641), 1, 2) + ((data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp643, tmp646), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3184]] /* vehicle.hubRR.bearingFrame.R.T[3,1] variable */));
  TRACE_POP
}

/*
equation index: 3598
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,1] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[1,1] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[2,1] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3598};
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
  real_array_create(&tmp647, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp647, ((modelica_integer) 2) - ndims_base_array(&tmp647), &tmp648);
  real_array_create(&tmp649, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp649, ((modelica_integer) 2) - ndims_base_array(&tmp649), &tmp650);
  transpose_alloc_real_array(&tmp650, &tmp651);
  real_array_create(&tmp652, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp652, ((modelica_integer) 2) - ndims_base_array(&tmp652), &tmp653);
  real_array_create(&tmp654, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp654, ((modelica_integer) 2) - ndims_base_array(&tmp654), &tmp655);
  transpose_alloc_real_array(&tmp655, &tmp656);
  real_array_create(&tmp657, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp657, ((modelica_integer) 2) - ndims_base_array(&tmp657), &tmp658);
  real_array_create(&tmp659, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp659, ((modelica_integer) 2) - ndims_base_array(&tmp659), &tmp660);
  transpose_alloc_real_array(&tmp660, &tmp661);
  real_array_create(&tmp662, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp662, ((modelica_integer) 2) - ndims_base_array(&tmp662), &tmp663);
  real_array_create(&tmp664, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp664, ((modelica_integer) 2) - ndims_base_array(&tmp664), &tmp665);
  transpose_alloc_real_array(&tmp665, &tmp666);
  real_array_create(&tmp667, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp667, ((modelica_integer) 2) - ndims_base_array(&tmp667), &tmp668);
  real_array_create(&tmp669, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp669, ((modelica_integer) 2) - ndims_base_array(&tmp669), &tmp670);
  transpose_alloc_real_array(&tmp670, &tmp671);
  real_array_create(&tmp672, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp672, ((modelica_integer) 2) - ndims_base_array(&tmp672), &tmp673);
  real_array_create(&tmp674, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp674, ((modelica_integer) 2) - ndims_base_array(&tmp674), &tmp675);
  transpose_alloc_real_array(&tmp675, &tmp676);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5418]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp648, tmp651), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp653, tmp656), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3178]] /* vehicle.hubRR.bearingFrame.R.T[1,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp658, tmp661), 0, 1) + ((data->simulationInfo->realParameter[3813] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp663, tmp666), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* vehicle.hubRR.bearingFrame.R.T[2,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp668, tmp671), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp673, tmp676), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3812] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3184]] /* vehicle.hubRR.bearingFrame.R.T[3,1] variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7849(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7850(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7860(DATA *data, threadData_t *threadData);


/*
equation index: 3602
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.frame_a.r_0[3] = vehicle.rearSuspension.cornerR.jointUSR.frame_ia.r_0[3] + 0.13 * vehicle.rearSuspension.cornerR.upright.frame_a.R.T[2,3] + 0.2 * vehicle.rearSuspension.cornerR.upright.frame_a.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3602};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4808]] /* vehicle.rearSuspension.cornerR.upright.frame_a.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4162]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_ia.r_0[3] DUMMY_STATE */) + (0.13) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4799]] /* vehicle.rearSuspension.cornerR.upright.frame_a.R.T[2,3] variable */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4802]] /* vehicle.rearSuspension.cornerR.upright.frame_a.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3603
type: SIMPLE_ASSIGN
vehicle.wheelRR.contactPatch.frame_a.r_0[3] = vehicle.rearSuspension.cornerR.upright.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3603};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5372]] /* vehicle.wheelRR.contactPatch.frame_a.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4808]] /* vehicle.rearSuspension.cornerR.upright.frame_a.r_0[3] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7865(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7864(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7863(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7862(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7867(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7892(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7895(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7894(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7893(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7887(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7890(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7889(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7888(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7891(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7883(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7886(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7885(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7884(DATA *data, threadData_t *threadData);


/*
equation index: 3622
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,3] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[1,3] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[2,3] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3622};
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
  real_array_create(&tmp677, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp677, ((modelica_integer) 2) - ndims_base_array(&tmp677), &tmp678);
  real_array_create(&tmp679, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp679, ((modelica_integer) 2) - ndims_base_array(&tmp679), &tmp680);
  transpose_alloc_real_array(&tmp680, &tmp681);
  real_array_create(&tmp682, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp682, ((modelica_integer) 2) - ndims_base_array(&tmp682), &tmp683);
  real_array_create(&tmp684, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp684, ((modelica_integer) 2) - ndims_base_array(&tmp684), &tmp685);
  transpose_alloc_real_array(&tmp685, &tmp686);
  real_array_create(&tmp687, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp687, ((modelica_integer) 2) - ndims_base_array(&tmp687), &tmp688);
  real_array_create(&tmp689, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp689, ((modelica_integer) 2) - ndims_base_array(&tmp689), &tmp690);
  transpose_alloc_real_array(&tmp690, &tmp691);
  real_array_create(&tmp692, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp692, ((modelica_integer) 2) - ndims_base_array(&tmp692), &tmp693);
  real_array_create(&tmp694, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp694, ((modelica_integer) 2) - ndims_base_array(&tmp694), &tmp695);
  transpose_alloc_real_array(&tmp695, &tmp696);
  real_array_create(&tmp697, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp697, ((modelica_integer) 2) - ndims_base_array(&tmp697), &tmp698);
  real_array_create(&tmp699, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp699, ((modelica_integer) 2) - ndims_base_array(&tmp699), &tmp700);
  transpose_alloc_real_array(&tmp700, &tmp701);
  real_array_create(&tmp702, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp702, ((modelica_integer) 2) - ndims_base_array(&tmp702), &tmp703);
  real_array_create(&tmp704, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp704, ((modelica_integer) 2) - ndims_base_array(&tmp704), &tmp705);
  transpose_alloc_real_array(&tmp705, &tmp706);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5426]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp678, tmp681), 2, 0) + ((data->simulationInfo->realParameter[3812] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp683, tmp686), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* vehicle.hubRR.bearingFrame.R.T[1,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp688, tmp691), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp693, tmp696), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3183]] /* vehicle.hubRR.bearingFrame.R.T[2,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp698, tmp701), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp703, tmp706), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3186]] /* vehicle.hubRR.bearingFrame.R.T[3,3] variable */));
  TRACE_POP
}

/*
equation index: 3623
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,3] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[1,3] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[2,3] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3623};
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
  real_array_create(&tmp707, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp707, ((modelica_integer) 2) - ndims_base_array(&tmp707), &tmp708);
  real_array_create(&tmp709, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp709, ((modelica_integer) 2) - ndims_base_array(&tmp709), &tmp710);
  transpose_alloc_real_array(&tmp710, &tmp711);
  real_array_create(&tmp712, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp712, ((modelica_integer) 2) - ndims_base_array(&tmp712), &tmp713);
  real_array_create(&tmp714, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp714, ((modelica_integer) 2) - ndims_base_array(&tmp714), &tmp715);
  transpose_alloc_real_array(&tmp715, &tmp716);
  real_array_create(&tmp717, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp717, ((modelica_integer) 2) - ndims_base_array(&tmp717), &tmp718);
  real_array_create(&tmp719, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp719, ((modelica_integer) 2) - ndims_base_array(&tmp719), &tmp720);
  transpose_alloc_real_array(&tmp720, &tmp721);
  real_array_create(&tmp722, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp722, ((modelica_integer) 2) - ndims_base_array(&tmp722), &tmp723);
  real_array_create(&tmp724, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp724, ((modelica_integer) 2) - ndims_base_array(&tmp724), &tmp725);
  transpose_alloc_real_array(&tmp725, &tmp726);
  real_array_create(&tmp727, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp727, ((modelica_integer) 2) - ndims_base_array(&tmp727), &tmp728);
  real_array_create(&tmp729, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp729, ((modelica_integer) 2) - ndims_base_array(&tmp729), &tmp730);
  transpose_alloc_real_array(&tmp730, &tmp731);
  real_array_create(&tmp732, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp732, ((modelica_integer) 2) - ndims_base_array(&tmp732), &tmp733);
  real_array_create(&tmp734, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp734, ((modelica_integer) 2) - ndims_base_array(&tmp734), &tmp735);
  transpose_alloc_real_array(&tmp735, &tmp736);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5423]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp708, tmp711), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp713, tmp716), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3813] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* vehicle.hubRR.bearingFrame.R.T[1,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp718, tmp721), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp723, tmp726), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3183]] /* vehicle.hubRR.bearingFrame.R.T[2,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp728, tmp731), 1, 2) + ((data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp733, tmp736), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3186]] /* vehicle.hubRR.bearingFrame.R.T[3,3] variable */));
  TRACE_POP
}

/*
equation index: 3624
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,3] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[1,3] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[2,3] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.hubRR.bearingFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3624};
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
  real_array_create(&tmp737, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp737, ((modelica_integer) 2) - ndims_base_array(&tmp737), &tmp738);
  real_array_create(&tmp739, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp739, ((modelica_integer) 2) - ndims_base_array(&tmp739), &tmp740);
  transpose_alloc_real_array(&tmp740, &tmp741);
  real_array_create(&tmp742, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp742, ((modelica_integer) 2) - ndims_base_array(&tmp742), &tmp743);
  real_array_create(&tmp744, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp744, ((modelica_integer) 2) - ndims_base_array(&tmp744), &tmp745);
  transpose_alloc_real_array(&tmp745, &tmp746);
  real_array_create(&tmp747, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp747, ((modelica_integer) 2) - ndims_base_array(&tmp747), &tmp748);
  real_array_create(&tmp749, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp749, ((modelica_integer) 2) - ndims_base_array(&tmp749), &tmp750);
  transpose_alloc_real_array(&tmp750, &tmp751);
  real_array_create(&tmp752, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp752, ((modelica_integer) 2) - ndims_base_array(&tmp752), &tmp753);
  real_array_create(&tmp754, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp754, ((modelica_integer) 2) - ndims_base_array(&tmp754), &tmp755);
  transpose_alloc_real_array(&tmp755, &tmp756);
  real_array_create(&tmp757, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp757, ((modelica_integer) 2) - ndims_base_array(&tmp757), &tmp758);
  real_array_create(&tmp759, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp759, ((modelica_integer) 2) - ndims_base_array(&tmp759), &tmp760);
  transpose_alloc_real_array(&tmp760, &tmp761);
  real_array_create(&tmp762, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp762, ((modelica_integer) 2) - ndims_base_array(&tmp762), &tmp763);
  real_array_create(&tmp764, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp764, ((modelica_integer) 2) - ndims_base_array(&tmp764), &tmp765);
  transpose_alloc_real_array(&tmp765, &tmp766);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5420]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp738, tmp741), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp743, tmp746), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* vehicle.hubRR.bearingFrame.R.T[1,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp748, tmp751), 0, 1) + ((data->simulationInfo->realParameter[3813] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp753, tmp756), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3183]] /* vehicle.hubRR.bearingFrame.R.T[2,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp758, tmp761), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp763, tmp766), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3812] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3186]] /* vehicle.hubRR.bearingFrame.R.T[3,3] variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7868(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7869(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7878(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7879(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7881(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7880(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7874(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7875(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7877(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7876(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7870(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7871(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7882(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7873(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7872(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7858(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7994(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7996(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7998(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8011(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7997(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8008(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8020(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8021(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8018(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8019(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8009(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8010(DATA *data, threadData_t *threadData);


/*
equation index: 3653
type: LINEAR

<var>vehicle.rearSuspension.cornerR.wheelAngles.angles[3]</var>
<var>vehicle.rearSuspension.cornerR.camber</var>
<var>vehicle.rearSuspension.cornerR.toe</var>
<row>
  <cell>Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(vehicle.rearSuspension.cornerR.wheelAngles.R_rel, {3, 1, 2}, vehicle.rearSuspension.cornerR.wheelAngles.guessAngle1)[1]</cell>
  <cell>Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(vehicle.rearSuspension.cornerR.wheelAngles.R_rel, {3, 1, 2}, vehicle.rearSuspension.cornerR.wheelAngles.guessAngle1)[2]</cell>
  <cell>Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(vehicle.rearSuspension.cornerR.wheelAngles.R_rel, {3, 1, 2}, vehicle.rearSuspension.cornerR.wheelAngles.guessAngle1)[3]</cell>
</row>
<matrix>
  <cell row="0" col="2">
    <residual>-1.0</residual>
  </cell><cell row="1" col="1">
    <residual>1.0</residual>
  </cell><cell row="2" col="0">
    <residual>1.0</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void AlyssaVehicle_eqFunction_3653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3653};
  /* Linear equation system */
  int retValue;
  double aux_x[3] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4858]] /* vehicle.rearSuspension.cornerR.wheelAngles.angles[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4052]] /* vehicle.rearSuspension.cornerR.camber variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4706]] /* vehicle.rearSuspension.cornerR.toe variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 3653 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 5, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3653};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 3653 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4858]] /* vehicle.rearSuspension.cornerR.wheelAngles.angles[3] variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4052]] /* vehicle.rearSuspension.cornerR.camber variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4706]] /* vehicle.rearSuspension.cornerR.toe variable */) = aux_x[2];

  TRACE_POP
}

/*
equation index: 3654
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[3] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[1] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[2] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[3]
*/
void AlyssaVehicle_eqFunction_3654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3654};
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
  real_array_create(&tmp767, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp767, ((modelica_integer) 2) - ndims_base_array(&tmp767), &tmp768);
  real_array_create(&tmp769, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp769, ((modelica_integer) 2) - ndims_base_array(&tmp769), &tmp770);
  transpose_alloc_real_array(&tmp770, &tmp771);
  real_array_create(&tmp772, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp772, ((modelica_integer) 2) - ndims_base_array(&tmp772), &tmp773);
  real_array_create(&tmp774, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp774, ((modelica_integer) 2) - ndims_base_array(&tmp774), &tmp775);
  transpose_alloc_real_array(&tmp775, &tmp776);
  real_array_create(&tmp777, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp777, ((modelica_integer) 2) - ndims_base_array(&tmp777), &tmp778);
  real_array_create(&tmp779, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp779, ((modelica_integer) 2) - ndims_base_array(&tmp779), &tmp780);
  transpose_alloc_real_array(&tmp780, &tmp781);
  real_array_create(&tmp782, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp782, ((modelica_integer) 2) - ndims_base_array(&tmp782), &tmp783);
  real_array_create(&tmp784, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp784, ((modelica_integer) 2) - ndims_base_array(&tmp784), &tmp785);
  transpose_alloc_real_array(&tmp785, &tmp786);
  real_array_create(&tmp787, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp787, ((modelica_integer) 2) - ndims_base_array(&tmp787), &tmp788);
  real_array_create(&tmp789, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp789, ((modelica_integer) 2) - ndims_base_array(&tmp789), &tmp790);
  transpose_alloc_real_array(&tmp790, &tmp791);
  real_array_create(&tmp792, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp792, ((modelica_integer) 2) - ndims_base_array(&tmp792), &tmp793);
  real_array_create(&tmp794, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp794, ((modelica_integer) 2) - ndims_base_array(&tmp794), &tmp795);
  transpose_alloc_real_array(&tmp795, &tmp796);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5429]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp768, tmp771), 2, 0) + ((data->simulationInfo->realParameter[3812] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp773, tmp776), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5446]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp778, tmp781), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp783, tmp786), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5447]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp788, tmp791), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp793, tmp796), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5448]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3655
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[2] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[1] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[2] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[3]
*/
void AlyssaVehicle_eqFunction_3655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3655};
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
  real_array_create(&tmp797, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp797, ((modelica_integer) 2) - ndims_base_array(&tmp797), &tmp798);
  real_array_create(&tmp799, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp799, ((modelica_integer) 2) - ndims_base_array(&tmp799), &tmp800);
  transpose_alloc_real_array(&tmp800, &tmp801);
  real_array_create(&tmp802, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp802, ((modelica_integer) 2) - ndims_base_array(&tmp802), &tmp803);
  real_array_create(&tmp804, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp804, ((modelica_integer) 2) - ndims_base_array(&tmp804), &tmp805);
  transpose_alloc_real_array(&tmp805, &tmp806);
  real_array_create(&tmp807, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp807, ((modelica_integer) 2) - ndims_base_array(&tmp807), &tmp808);
  real_array_create(&tmp809, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp809, ((modelica_integer) 2) - ndims_base_array(&tmp809), &tmp810);
  transpose_alloc_real_array(&tmp810, &tmp811);
  real_array_create(&tmp812, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp812, ((modelica_integer) 2) - ndims_base_array(&tmp812), &tmp813);
  real_array_create(&tmp814, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp814, ((modelica_integer) 2) - ndims_base_array(&tmp814), &tmp815);
  transpose_alloc_real_array(&tmp815, &tmp816);
  real_array_create(&tmp817, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp817, ((modelica_integer) 2) - ndims_base_array(&tmp817), &tmp818);
  real_array_create(&tmp819, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp819, ((modelica_integer) 2) - ndims_base_array(&tmp819), &tmp820);
  transpose_alloc_real_array(&tmp820, &tmp821);
  real_array_create(&tmp822, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp822, ((modelica_integer) 2) - ndims_base_array(&tmp822), &tmp823);
  real_array_create(&tmp824, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp824, ((modelica_integer) 2) - ndims_base_array(&tmp824), &tmp825);
  transpose_alloc_real_array(&tmp825, &tmp826);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5428]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp798, tmp801), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp803, tmp806), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3813] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5446]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp808, tmp811), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp813, tmp816), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5447]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp818, tmp821), 1, 2) + ((data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp823, tmp826), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5448]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3656
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[1] = ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[1] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRR.rim.rotor1D.phi) - (promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[2] + ((promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelRR.rim.rotor1D.phi) - vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRR.rim.rotor1D.phi)) * vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[3]
*/
void AlyssaVehicle_eqFunction_3656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3656};
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
  real_array_create(&tmp827, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp827, ((modelica_integer) 2) - ndims_base_array(&tmp827), &tmp828);
  real_array_create(&tmp829, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp829, ((modelica_integer) 2) - ndims_base_array(&tmp829), &tmp830);
  transpose_alloc_real_array(&tmp830, &tmp831);
  real_array_create(&tmp832, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp832, ((modelica_integer) 2) - ndims_base_array(&tmp832), &tmp833);
  real_array_create(&tmp834, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp834, ((modelica_integer) 2) - ndims_base_array(&tmp834), &tmp835);
  transpose_alloc_real_array(&tmp835, &tmp836);
  real_array_create(&tmp837, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp837, ((modelica_integer) 2) - ndims_base_array(&tmp837), &tmp838);
  real_array_create(&tmp839, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp839, ((modelica_integer) 2) - ndims_base_array(&tmp839), &tmp840);
  transpose_alloc_real_array(&tmp840, &tmp841);
  real_array_create(&tmp842, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp842, ((modelica_integer) 2) - ndims_base_array(&tmp842), &tmp843);
  real_array_create(&tmp844, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp844, ((modelica_integer) 2) - ndims_base_array(&tmp844), &tmp845);
  transpose_alloc_real_array(&tmp845, &tmp846);
  real_array_create(&tmp847, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp847, ((modelica_integer) 2) - ndims_base_array(&tmp847), &tmp848);
  real_array_create(&tmp849, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp849, ((modelica_integer) 2) - ndims_base_array(&tmp849), &tmp850);
  transpose_alloc_real_array(&tmp850, &tmp851);
  real_array_create(&tmp852, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp852, ((modelica_integer) 2) - ndims_base_array(&tmp852), &tmp853);
  real_array_create(&tmp854, ((modelica_real*)&((&data->simulationInfo->realParameter[3811] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp854, ((modelica_integer) 2) - ndims_base_array(&tmp854), &tmp855);
  transpose_alloc_real_array(&tmp855, &tmp856);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5427]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp828, tmp831), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp833, tmp836), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5446]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp838, tmp841), 0, 1) + ((data->simulationInfo->realParameter[3813] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp843, tmp846), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5447]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp848, tmp851), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp853, tmp856), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3812] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5448]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8023(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8041(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8040(DATA *data, threadData_t *threadData);


/*
equation index: 3660
type: SIMPLE_ASSIGN
$DER.vehicle.wheelRR.contactPatch.pen = 0.5 * ($DER.vehicle.wheelRR.contactPatch.frame_a.r_0[3] + (vehicle.wheelRR.contactPatch.r0 + vehicle.wheelRR.contactPatch.frame_a.r_0[3] - road.z0) * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[3] / sqrt((vehicle.wheelRR.contactPatch.r0 + vehicle.wheelRR.contactPatch.frame_a.r_0[3] - road.z0) ^ 2.0 + 1e-12))
*/
void AlyssaVehicle_eqFunction_3660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3660};
  modelica_real tmp857;
  modelica_real tmp858;
  tmp857 = (data->simulationInfo->realParameter[3771] /* vehicle.wheelRR.contactPatch.r0 PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5372]] /* vehicle.wheelRR.contactPatch.frame_a.r_0[3] DUMMY_STATE */) - (data->simulationInfo->realParameter[410] /* road.z0 PARAM */);
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* der(vehicle.wheelRR.contactPatch.pen) DUMMY_DER */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[3]) DUMMY_DER */) + ((data->simulationInfo->realParameter[3771] /* vehicle.wheelRR.contactPatch.r0 PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5372]] /* vehicle.wheelRR.contactPatch.frame_a.r_0[3] DUMMY_STATE */) - (data->simulationInfo->realParameter[410] /* road.z0 PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[3]) DUMMY_DER */),sqrt(tmp858),"sqrt((vehicle.wheelRR.contactPatch.r0 + vehicle.wheelRR.contactPatch.frame_a.r_0[3] - road.z0) ^ 2.0 + 1e-12)",equationIndexes)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8033(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8035(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8037(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8038(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8036(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8039(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8015(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8016(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8017(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8012(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8013(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8014(DATA *data, threadData_t *threadData);


/*
equation index: 3673
type: SIMPLE_ASSIGN
vehicle.wheelRR.contactPatch.vC[3] = vehicle.hubRR.bearingFrame.R.T[3,1] * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[1] + vehicle.hubRR.bearingFrame.R.T[3,2] * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[2] + vehicle.hubRR.bearingFrame.R.T[3,3] * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3673};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5378]] /* vehicle.wheelRR.contactPatch.vC[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3184]] /* vehicle.hubRR.bearingFrame.R.T[3,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3185]] /* vehicle.hubRR.bearingFrame.R.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3186]] /* vehicle.hubRR.bearingFrame.R.T[3,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[3]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3674
type: SIMPLE_ASSIGN
vehicle.wheelRR.contactPatch.vHub[2] = vehicle.hubRR.bearingFrame.R.T[2,1] * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[1] + vehicle.hubRR.bearingFrame.R.T[2,2] * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[2] + vehicle.hubRR.bearingFrame.R.T[2,3] * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3674};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5380]] /* vehicle.wheelRR.contactPatch.vHub[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* vehicle.hubRR.bearingFrame.R.T[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* vehicle.hubRR.bearingFrame.R.T[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3183]] /* vehicle.hubRR.bearingFrame.R.T[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[3]) DUMMY_DER */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8026(DATA *data, threadData_t *threadData);


/*
equation index: 3676
type: SIMPLE_ASSIGN
vehicle.wheelRR.contactPatch.vHub[1] = vehicle.hubRR.bearingFrame.R.T[1,1] * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[1] + vehicle.hubRR.bearingFrame.R.T[1,2] * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[2] + vehicle.hubRR.bearingFrame.R.T[1,3] * $DER.vehicle.wheelRR.contactPatch.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3676};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5379]] /* vehicle.wheelRR.contactPatch.vHub[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3178]] /* vehicle.hubRR.bearingFrame.R.T[1,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3179]] /* vehicle.hubRR.bearingFrame.R.T[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* vehicle.hubRR.bearingFrame.R.T[1,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* der(vehicle.wheelRR.contactPatch.frame_a.r_0[3]) DUMMY_DER */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8028(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8029(DATA *data, threadData_t *threadData);


/*
equation index: 3679
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[3,1] = 0.222824801502141 * cos(vehicle.rearSuspension.cornerR.tieRod.revolute.angle) * $DER.vehicle.rearSuspension.cornerR.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_3679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3679};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[3,1]) DUMMY_DER */) = (0.222824801502141) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4582]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3680
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[2,1] = (-0.9748585065718673) * cos(vehicle.rearSuspension.cornerR.tieRod.revolute.angle) * $DER.vehicle.rearSuspension.cornerR.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_3680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3680};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[2,1]) DUMMY_DER */) = (-0.9748585065718673) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4582]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3681
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,3] = (-0.222824801502141) * cos(vehicle.rearSuspension.cornerR.tieRod.revolute.angle) * $DER.vehicle.rearSuspension.cornerR.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_3681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3681};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,3]) DUMMY_DER */) = (-0.222824801502141) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4582]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3682
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,2] = 0.9748585065718673 * cos(vehicle.rearSuspension.cornerR.tieRod.revolute.angle) * $DER.vehicle.rearSuspension.cornerR.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_3682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3682};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,2]) DUMMY_DER */) = (0.9748585065718673) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4582]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3683
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,1] = (-sin(vehicle.rearSuspension.cornerR.tieRod.revolute.angle)) * $DER.vehicle.rearSuspension.cornerR.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_3683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3683};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.T[1,1]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4582]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* der(vehicle.rearSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8070(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8063(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8007(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8006(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8075(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8069(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8062(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8005(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8004(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8068(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8061(DATA *data, threadData_t *threadData);


/*
equation index: 3695
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.rodLength = 0.36359317925395684
*/
void AlyssaVehicle_eqFunction_3695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3695};
  (data->simulationInfo->realParameter[560] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.rodLength PARAM */) = 0.36359317925395684;
  TRACE_POP
}

/*
equation index: 3696
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.rodShape.length = vehicle.frontSuspension.cornerL.jointUSR.rod1.rodLength
*/
void AlyssaVehicle_eqFunction_3696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3696};
  (data->simulationInfo->realParameter[562] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.rodShape.length PARAM */) = (data->simulationInfo->realParameter[560] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 3697
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1Length = vehicle.frontSuspension.cornerL.jointUSR.rod1.rodLength
*/
void AlyssaVehicle_eqFunction_3697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3697};
  (data->simulationInfo->realParameter[581] /* vehicle.frontSuspension.cornerL.jointUSR.rod1Length PARAM */) = (data->simulationInfo->realParameter[560] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 3698
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.lengthConstraint = vehicle.frontSuspension.cornerL.jointUSR.rod1Length
*/
void AlyssaVehicle_eqFunction_3698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3698};
  (data->simulationInfo->realParameter[532] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.lengthConstraint PARAM */) = (data->simulationInfo->realParameter[581] /* vehicle.frontSuspension.cornerL.jointUSR.rod1Length PARAM */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8107(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8108(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8109(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8110(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8273(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8274(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8275(DATA *data, threadData_t *threadData);


/*
equation index: 3706
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.positiveBranch = AlyssaModel.Experiments.OptimalControlFMU.vehicle.frontSuspension.cornerL.jointUSR.revolute.selectBranch(vehicle.frontSuspension.cornerL.jointUSR.revolute.lengthConstraint, {-1.0, -0.0, 0.0}, 0.017453292519943295 * (vehicle.frontSuspension.cornerL.jointUSR.revolute.phi_offset + vehicle.frontSuspension.cornerL.jointUSR.revolute.phi_guess), vehicle.frontSuspension.cornerL.jointUSR.revolute.r_a, vehicle.frontSuspension.cornerL.jointUSR.revolute.r_b)
*/
void AlyssaVehicle_eqFunction_3706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3706};
  real_array tmp859;
  real_array tmp860;
  real_array_create(&tmp859, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1528]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp860, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1531]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.r_b[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[42] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.positiveBranch PARAM */) = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_frontSuspension_cornerL_jointUSR_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[532] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.lengthConstraint PARAM */), _OMC_LIT23, (0.017453292519943295) * ((data->simulationInfo->realParameter[537] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[536] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.phi_guess PARAM */)), tmp859, tmp860);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8112(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8277(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8111(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8113(DATA *data, threadData_t *threadData);


/*
equation index: 3711
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] = sin(vehicle.frontSuspension.cornerL.jointUSR.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3711};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */) = sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1499]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.angle DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8114(DATA *data, threadData_t *threadData);


/*
equation index: 3713
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,3] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,3] + vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3713};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1724]] /* vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3714
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,2] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,2] + vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3714};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1723]] /* vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,2] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3715
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,1] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,1] + vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3715};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,1] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3716
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,3] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,3] - vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3716};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1721]] /* vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8133(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8134(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8125(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8155(DATA *data, threadData_t *threadData);


/*
equation index: 3721
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,2] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,2] - vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3721};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,2] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8130(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8131(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8122(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8123(DATA *data, threadData_t *threadData);


/*
equation index: 3726
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,1] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,1] - vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3726};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1719]] /* vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,1] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8127(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8128(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8135(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8136(DATA *data, threadData_t *threadData);


/*
equation index: 3731
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.shape_b.length = max(vehicle.frontSuspension.cornerL.coilover.s - vehicle.frontSuspension.cornerL.coilover.length_a, 0.0)
*/
void AlyssaVehicle_eqFunction_3731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3731};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1385]] /* vehicle.frontSuspension.cornerL.coilover.shape_b.length variable */) = fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* vehicle.frontSuspension.cornerL.coilover.s DUMMY_STATE */) - (data->simulationInfo->realParameter[416] /* vehicle.frontSuspension.cornerL.coilover.length_a PARAM */),0.0);
  TRACE_POP
}

/*
equation index: 3732
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.shape_a.length = min(vehicle.frontSuspension.cornerL.coilover.length_a, vehicle.frontSuspension.cornerL.coilover.s)
*/
void AlyssaVehicle_eqFunction_3732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3732};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1374]] /* vehicle.frontSuspension.cornerL.coilover.shape_a.length variable */) = fmin((data->simulationInfo->realParameter[416] /* vehicle.frontSuspension.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* vehicle.frontSuspension.cornerL.coilover.s DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8143(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8141(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8142(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8144(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8145(DATA *data, threadData_t *threadData);


/*
equation index: 3738
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.shape_b.r_shape[3] = vehicle.frontSuspension.cornerL.coilover.e_a[3] * min(vehicle.frontSuspension.cornerL.coilover.length_a, vehicle.frontSuspension.cornerL.coilover.s)
*/
void AlyssaVehicle_eqFunction_3738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3738};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1388]] /* vehicle.frontSuspension.cornerL.coilover.shape_b.r_shape[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* vehicle.frontSuspension.cornerL.coilover.e_a[3] variable */)) * (fmin((data->simulationInfo->realParameter[416] /* vehicle.frontSuspension.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* vehicle.frontSuspension.cornerL.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8147(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8148(DATA *data, threadData_t *threadData);


/*
equation index: 3741
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.shape_b.r_shape[2] = vehicle.frontSuspension.cornerL.coilover.e_a[2] * min(vehicle.frontSuspension.cornerL.coilover.length_a, vehicle.frontSuspension.cornerL.coilover.s)
*/
void AlyssaVehicle_eqFunction_3741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3741};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1387]] /* vehicle.frontSuspension.cornerL.coilover.shape_b.r_shape[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* vehicle.frontSuspension.cornerL.coilover.e_a[2] variable */)) * (fmin((data->simulationInfo->realParameter[416] /* vehicle.frontSuspension.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* vehicle.frontSuspension.cornerL.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8150(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8151(DATA *data, threadData_t *threadData);


/*
equation index: 3744
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.shape_b.r_shape[1] = vehicle.frontSuspension.cornerL.coilover.e_a[1] * min(vehicle.frontSuspension.cornerL.coilover.length_a, vehicle.frontSuspension.cornerL.coilover.s)
*/
void AlyssaVehicle_eqFunction_3744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3744};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1386]] /* vehicle.frontSuspension.cornerL.coilover.shape_b.r_shape[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* vehicle.frontSuspension.cornerL.coilover.e_a[1] variable */)) * (fmin((data->simulationInfo->realParameter[416] /* vehicle.frontSuspension.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* vehicle.frontSuspension.cornerL.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8119(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8120(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8158(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8159(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8156(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8157(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8160(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8161(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8162(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8163(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8164(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8165(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8166(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8181(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8178(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8175(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8171(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8174(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8173(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8172(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8167(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8170(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8188(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8183(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8182(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8189(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8169(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8186(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8180(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8179(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8187(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8168(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8184(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8177(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8176(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8185(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8192(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8190(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8194(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8191(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8193(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8195(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8196(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8197(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8261(DATA *data, threadData_t *threadData);


/*
equation index: 3790
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.frame_b.R.w[3] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.vehicleBody.body.w_a[2] + vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.vehicleBody.body.w_a[3]
*/
void AlyssaVehicle_eqFunction_3790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3790};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1727]] /* vehicle.frontSuspension.cornerL.springArm.frame_b.R.w[3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3791
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.frame_b.R.w[2] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.vehicleBody.body.w_a[2] - vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.vehicleBody.body.w_a[3]
*/
void AlyssaVehicle_eqFunction_3791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3791};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1726]] /* vehicle.frontSuspension.cornerL.springArm.frame_b.R.w[2] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8154(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8276(DATA *data, threadData_t *threadData);


/*
equation index: 3794
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.angle = if noEvent(vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle == 0.0) then vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle else ($DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.ksin_angle * vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle - vehicle.frontSuspension.cornerL.jointUSR.revolute.ksin_angle * $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle) / (vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (vehicle.frontSuspension.cornerL.jointUSR.revolute.ksin_angle / vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle) ^ 2.0))
*/
void AlyssaVehicle_eqFunction_3794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3794};
  modelica_real tmp861;
  modelica_real tmp862;
  modelica_boolean tmp863;
  modelica_real tmp864;
  tmp863 = (modelica_boolean)((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1525]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */) == 0.0);
  if(tmp863)
  {
    tmp864 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1525]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */);
  }
  else
  {
    tmp861 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1525]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */);
    tmp862 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1526]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.ksin_angle DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1525]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */),"vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle",equationIndexes);
    tmp864 = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[397]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.ksin_angle) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1525]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1526]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.ksin_angle DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[396]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle) DUMMY_DER */))),((tmp861 * tmp861)) * (1.0 + (tmp862 * tmp862)),"vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (vehicle.frontSuspension.cornerL.jointUSR.revolute.ksin_angle / vehicle.frontSuspension.cornerL.jointUSR.revolute.kcos_angle) ^ 2.0)",equationIndexes);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.angle) DUMMY_DER */) = tmp864;
  TRACE_POP
}

/*
equation index: 3795
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.w[1] = -$DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_3795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3795};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1496]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.w[1] DUMMY_STATE */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8279(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8283(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8284(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8281(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8282(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8280(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8317(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8322(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8321(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8325(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8323(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8326(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8329(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8318(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8324(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8328(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8332(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8334(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8327(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8330(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8331(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8333(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8337(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8335(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8339(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8336(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8338(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8340(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8341(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8342(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8395(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8396(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8397(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8398(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8399(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8400(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8404(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8401(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8408(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8319(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8320(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8411(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8410(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8409(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8402(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8407(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8406(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8403(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8405(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8414(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8445(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8438(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8433(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8413(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8444(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8437(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8432(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8412(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8443(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8436(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8431(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8285(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8286(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8287(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8288(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8289(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8290(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8291(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8292(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8293(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8307(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8294(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8299(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8298(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8300(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8295(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8305(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8304(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8306(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8301(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8303(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8302(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8297(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8296(DATA *data, threadData_t *threadData);


/*
equation index: 3880
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] = cos(vehicle.frontSuspension.cornerL.jointUSR.revolute.angle) * $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_3880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3880};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */) = (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1499]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3881
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] = (-sin(vehicle.frontSuspension.cornerL.jointUSR.revolute.angle)) * $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_3881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3881};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1499]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3882
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,3] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,3] + $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,3] + vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,3] + $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3882};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* der(vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(vehicle.chassisFrame.R.T[2,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* der(vehicle.chassisFrame.R.T[3,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3883
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,2] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,2] + $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,2] + vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,2] + $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3883};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* der(vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,2]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(vehicle.chassisFrame.R.T[2,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* der(vehicle.chassisFrame.R.T[3,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3884
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,1] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,1] + $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,1] + vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,1] + $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3884};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* der(vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[3,1]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* der(vehicle.chassisFrame.R.T[2,1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* der(vehicle.chassisFrame.R.T[3,1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3885
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,3] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[2,3] + $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,3] + (-vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) * $DER.vehicle.chassisFrame.R.T[3,3] - $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3885};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[440]] /* der(vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(vehicle.chassisFrame.R.T[2,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* der(vehicle.chassisFrame.R.T[3,3]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3886
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,2] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[2,2] + $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,2] + (-vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) * $DER.vehicle.chassisFrame.R.T[3,2] - $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3886};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* der(vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,2]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(vehicle.chassisFrame.R.T[2,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* der(vehicle.chassisFrame.R.T[3,2]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3887
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,1] = vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[2,1] + $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,1] + (-vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) * $DER.vehicle.chassisFrame.R.T[3,1] - $DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3887};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[438]] /* der(vehicle.frontSuspension.cornerL.springArm.frame_b.R.T[2,1]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* der(vehicle.chassisFrame.R.T[2,1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* der(vehicle.chassisFrame.R.T[3,1]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* der(vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3888
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.positiveBranch = AlyssaModel.Experiments.OptimalControlFMU.vehicle.frontSuspension.cornerL.tieRod.revolute.selectBranch(vehicle.frontSuspension.cornerL.tieRod.revolute.lengthConstraint, {0.11001306482721843, -0.24752939586124137, 0.9626143172381612}, 0.017453292519943295 * (vehicle.frontSuspension.cornerL.tieRod.revolute.phi_offset + vehicle.frontSuspension.cornerL.tieRod.revolute.phi_guess), vehicle.frontSuspension.cornerL.tieRod.revolute.r_a, vehicle.frontSuspension.cornerL.tieRod.revolute.r_b)
*/
void AlyssaVehicle_eqFunction_3888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3888};
  real_array tmp865;
  real_array tmp866;
  real_array_create(&tmp865, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp866, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1886]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.r_b[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[58] /* vehicle.frontSuspension.cornerL.tieRod.revolute.positiveBranch PARAM */) = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_frontSuspension_cornerL_tieRod_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[824] /* vehicle.frontSuspension.cornerL.tieRod.revolute.lengthConstraint PARAM */), _OMC_LIT26, (0.017453292519943295) * ((data->simulationInfo->realParameter[829] /* vehicle.frontSuspension.cornerL.tieRod.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[828] /* vehicle.frontSuspension.cornerL.tieRod.revolute.phi_guess PARAM */)), tmp865, tmp866);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8199(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8344(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8198(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8200(DATA *data, threadData_t *threadData);


/*
equation index: 3893
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[3,3] = 0.9266263237518911 + 0.07337367624810887 * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3893};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1849]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[3,3] DUMMY_STATE */) = 0.9266263237518911 + (0.07337367624810887) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3894
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[3,2] = -0.2382753403933434 + 0.2382753403933434 * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) - 0.11001306482721843 * sin(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3894};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1848]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[3,2] DUMMY_STATE */) = -0.2382753403933434 + (0.2382753403933434) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) - ((0.11001306482721843) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 3895
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[3,1] = 0.10590015128593043 + (-0.10590015128593043) * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) - 0.24752939586124137 * sin(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3895};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1847]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[3,1] DUMMY_STATE */) = 0.10590015128593043 + (-0.10590015128593043) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) - ((0.24752939586124137) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8236(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8216(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8221(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8259(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8258(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8257(DATA *data, threadData_t *threadData);


/*
equation index: 3902
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[2,3] = -0.2382753403933434 + 0.2382753403933434 * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) - (-0.11001306482721843) * sin(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3902};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1846]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[2,3] DUMMY_STATE */) = -0.2382753403933434 + (0.2382753403933434) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) - ((-0.11001306482721843) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 3903
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[2,2] = 0.06127080181543114 + 0.9387291981845689 * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3903};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1845]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[2,2] DUMMY_STATE */) = 0.06127080181543114 + (0.9387291981845689) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3904
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[2,1] = -0.027231467473524958 + 0.027231467473524958 * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) - 0.9626143172381612 * sin(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3904};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[2,1] DUMMY_STATE */) = -0.027231467473524958 + (0.027231467473524958) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) - ((0.9626143172381612) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8231(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8232(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8213(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8212(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8233(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8234(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8235(DATA *data, threadData_t *threadData);


/*
equation index: 3912
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[1,3] = 0.10590015128593043 + (-0.10590015128593043) * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) - (-0.24752939586124137) * sin(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3912};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1843]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[1,3] DUMMY_STATE */) = 0.10590015128593043 + (-0.10590015128593043) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) - ((-0.24752939586124137) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 3913
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[1,2] = -0.027231467473524958 + 0.027231467473524958 * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) - (-0.9626143172381612) * sin(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3913};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1842]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[1,2] DUMMY_STATE */) = -0.027231467473524958 + (0.027231467473524958) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) - ((-0.9626143172381612) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 3914
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[1,1] = 0.012102874432677765 + 0.9878971255673222 * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3914};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1841]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[1,1] DUMMY_STATE */) = 0.012102874432677765 + (0.9878971255673222) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}
OMC_DISABLE_OPT
void AlyssaVehicle_functionInitialEquations_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  AlyssaVehicle_eqFunction_7781(data, threadData);
  AlyssaVehicle_eqFunction_7782(data, threadData);
  AlyssaVehicle_eqFunction_7783(data, threadData);
  AlyssaVehicle_eqFunction_7784(data, threadData);
  AlyssaVehicle_eqFunction_7786(data, threadData);
  AlyssaVehicle_eqFunction_7788(data, threadData);
  AlyssaVehicle_eqFunction_7787(data, threadData);
  AlyssaVehicle_eqFunction_7785(data, threadData);
  AlyssaVehicle_eqFunction_7790(data, threadData);
  AlyssaVehicle_eqFunction_7789(data, threadData);
  AlyssaVehicle_eqFunction_7791(data, threadData);
  AlyssaVehicle_eqFunction_7798(data, threadData);
  AlyssaVehicle_eqFunction_7799(data, threadData);
  AlyssaVehicle_eqFunction_7803(data, threadData);
  AlyssaVehicle_eqFunction_7815(data, threadData);
  AlyssaVehicle_eqFunction_7805(data, threadData);
  AlyssaVehicle_eqFunction_7804(data, threadData);
  AlyssaVehicle_eqFunction_7816(data, threadData);
  AlyssaVehicle_eqFunction_7800(data, threadData);
  AlyssaVehicle_eqFunction_7813(data, threadData);
  AlyssaVehicle_eqFunction_7802(data, threadData);
  AlyssaVehicle_eqFunction_7801(data, threadData);
  AlyssaVehicle_eqFunction_7814(data, threadData);
  AlyssaVehicle_eqFunction_7817(data, threadData);
  AlyssaVehicle_eqFunction_7807(data, threadData);
  AlyssaVehicle_eqFunction_7806(data, threadData);
  AlyssaVehicle_eqFunction_7811(data, threadData);
  AlyssaVehicle_eqFunction_7809(data, threadData);
  AlyssaVehicle_eqFunction_7808(data, threadData);
  AlyssaVehicle_eqFunction_7812(data, threadData);
  AlyssaVehicle_eqFunction_7821(data, threadData);
  AlyssaVehicle_eqFunction_7819(data, threadData);
  AlyssaVehicle_eqFunction_7818(data, threadData);
  AlyssaVehicle_eqFunction_7820(data, threadData);
  AlyssaVehicle_eqFunction_7822(data, threadData);
  AlyssaVehicle_eqFunction_7823(data, threadData);
  AlyssaVehicle_eqFunction_7824(data, threadData);
  AlyssaVehicle_eqFunction_7810(data, threadData);
  AlyssaVehicle_eqFunction_3466(data, threadData);
  AlyssaVehicle_eqFunction_7777(data, threadData);
  AlyssaVehicle_eqFunction_7910(data, threadData);
  AlyssaVehicle_eqFunction_3469(data, threadData);
  AlyssaVehicle_eqFunction_3470(data, threadData);
  AlyssaVehicle_eqFunction_7913(data, threadData);
  AlyssaVehicle_eqFunction_7917(data, threadData);
  AlyssaVehicle_eqFunction_7918(data, threadData);
  AlyssaVehicle_eqFunction_7915(data, threadData);
  AlyssaVehicle_eqFunction_7916(data, threadData);
  AlyssaVehicle_eqFunction_7914(data, threadData);
  AlyssaVehicle_eqFunction_7950(data, threadData);
  AlyssaVehicle_eqFunction_7971(data, threadData);
  AlyssaVehicle_eqFunction_7972(data, threadData);
  AlyssaVehicle_eqFunction_7977(data, threadData);
  AlyssaVehicle_eqFunction_7978(data, threadData);
  AlyssaVehicle_eqFunction_3482(data, threadData);
  AlyssaVehicle_eqFunction_7973(data, threadData);
  AlyssaVehicle_eqFunction_7955(data, threadData);
  AlyssaVehicle_eqFunction_7974(data, threadData);
  AlyssaVehicle_eqFunction_7976(data, threadData);
  AlyssaVehicle_eqFunction_7980(data, threadData);
  AlyssaVehicle_eqFunction_7984(data, threadData);
  AlyssaVehicle_eqFunction_7975(data, threadData);
  AlyssaVehicle_eqFunction_7979(data, threadData);
  AlyssaVehicle_eqFunction_7985(data, threadData);
  AlyssaVehicle_eqFunction_7986(data, threadData);
  AlyssaVehicle_eqFunction_7981(data, threadData);
  AlyssaVehicle_eqFunction_7990(data, threadData);
  AlyssaVehicle_eqFunction_7988(data, threadData);
  AlyssaVehicle_eqFunction_7987(data, threadData);
  AlyssaVehicle_eqFunction_7989(data, threadData);
  AlyssaVehicle_eqFunction_7991(data, threadData);
  AlyssaVehicle_eqFunction_7992(data, threadData);
  AlyssaVehicle_eqFunction_7993(data, threadData);
  AlyssaVehicle_eqFunction_7958(data, threadData);
  AlyssaVehicle_eqFunction_7959(data, threadData);
  AlyssaVehicle_eqFunction_7956(data, threadData);
  AlyssaVehicle_eqFunction_7957(data, threadData);
  AlyssaVehicle_eqFunction_7960(data, threadData);
  AlyssaVehicle_eqFunction_7961(data, threadData);
  AlyssaVehicle_eqFunction_7962(data, threadData);
  AlyssaVehicle_eqFunction_7969(data, threadData);
  AlyssaVehicle_eqFunction_7968(data, threadData);
  AlyssaVehicle_eqFunction_7964(data, threadData);
  AlyssaVehicle_eqFunction_7966(data, threadData);
  AlyssaVehicle_eqFunction_7965(data, threadData);
  AlyssaVehicle_eqFunction_7970(data, threadData);
  AlyssaVehicle_eqFunction_7951(data, threadData);
  AlyssaVehicle_eqFunction_7952(data, threadData);
  AlyssaVehicle_eqFunction_7954(data, threadData);
  AlyssaVehicle_eqFunction_8074(data, threadData);
  AlyssaVehicle_eqFunction_8067(data, threadData);
  AlyssaVehicle_eqFunction_8060(data, threadData);
  AlyssaVehicle_eqFunction_7953(data, threadData);
  AlyssaVehicle_eqFunction_8073(data, threadData);
  AlyssaVehicle_eqFunction_8066(data, threadData);
  AlyssaVehicle_eqFunction_8059(data, threadData);
  AlyssaVehicle_eqFunction_7967(data, threadData);
  AlyssaVehicle_eqFunction_7963(data, threadData);
  AlyssaVehicle_eqFunction_8072(data, threadData);
  AlyssaVehicle_eqFunction_8065(data, threadData);
  AlyssaVehicle_eqFunction_8058(data, threadData);
  AlyssaVehicle_eqFunction_7923(data, threadData);
  AlyssaVehicle_eqFunction_7924(data, threadData);
  AlyssaVehicle_eqFunction_7921(data, threadData);
  AlyssaVehicle_eqFunction_7922(data, threadData);
  AlyssaVehicle_eqFunction_7919(data, threadData);
  AlyssaVehicle_eqFunction_7920(data, threadData);
  AlyssaVehicle_eqFunction_7925(data, threadData);
  AlyssaVehicle_eqFunction_7926(data, threadData);
  AlyssaVehicle_eqFunction_7927(data, threadData);
  AlyssaVehicle_eqFunction_7941(data, threadData);
  AlyssaVehicle_eqFunction_7928(data, threadData);
  AlyssaVehicle_eqFunction_7933(data, threadData);
  AlyssaVehicle_eqFunction_7932(data, threadData);
  AlyssaVehicle_eqFunction_7934(data, threadData);
  AlyssaVehicle_eqFunction_7929(data, threadData);
  AlyssaVehicle_eqFunction_7939(data, threadData);
  AlyssaVehicle_eqFunction_7938(data, threadData);
  AlyssaVehicle_eqFunction_7940(data, threadData);
  AlyssaVehicle_eqFunction_7935(data, threadData);
  AlyssaVehicle_eqFunction_7937(data, threadData);
  AlyssaVehicle_eqFunction_7936(data, threadData);
  AlyssaVehicle_eqFunction_7931(data, threadData);
  AlyssaVehicle_eqFunction_7930(data, threadData);
  AlyssaVehicle_eqFunction_3552(data, threadData);
  AlyssaVehicle_eqFunction_3553(data, threadData);
  AlyssaVehicle_eqFunction_3554(data, threadData);
  AlyssaVehicle_eqFunction_3555(data, threadData);
  AlyssaVehicle_eqFunction_3556(data, threadData);
  AlyssaVehicle_eqFunction_3557(data, threadData);
  AlyssaVehicle_eqFunction_3558(data, threadData);
  AlyssaVehicle_eqFunction_3559(data, threadData);
  AlyssaVehicle_eqFunction_7826(data, threadData);
  AlyssaVehicle_eqFunction_7995(data, threadData);
  AlyssaVehicle_eqFunction_7825(data, threadData);
  AlyssaVehicle_eqFunction_7827(data, threadData);
  AlyssaVehicle_eqFunction_3564(data, threadData);
  AlyssaVehicle_eqFunction_3565(data, threadData);
  AlyssaVehicle_eqFunction_3566(data, threadData);
  AlyssaVehicle_eqFunction_3567(data, threadData);
  AlyssaVehicle_eqFunction_7828(data, threadData);
  AlyssaVehicle_eqFunction_7837(data, threadData);
  AlyssaVehicle_eqFunction_7836(data, threadData);
  AlyssaVehicle_eqFunction_7983(data, threadData);
  AlyssaVehicle_eqFunction_7832(data, threadData);
  AlyssaVehicle_eqFunction_7831(data, threadData);
  AlyssaVehicle_eqFunction_7859(data, threadData);
  AlyssaVehicle_eqFunction_7851(data, threadData);
  AlyssaVehicle_eqFunction_7844(data, threadData);
  AlyssaVehicle_eqFunction_7830(data, threadData);
  AlyssaVehicle_eqFunction_7829(data, threadData);
  AlyssaVehicle_eqFunction_7841(data, threadData);
  AlyssaVehicle_eqFunction_3580(data, threadData);
  AlyssaVehicle_eqFunction_3581(data, threadData);
  AlyssaVehicle_eqFunction_7854(data, threadData);
  AlyssaVehicle_eqFunction_7855(data, threadData);
  AlyssaVehicle_eqFunction_7842(data, threadData);
  AlyssaVehicle_eqFunction_3585(data, threadData);
  AlyssaVehicle_eqFunction_3586(data, threadData);
  AlyssaVehicle_eqFunction_3587(data, threadData);
  AlyssaVehicle_eqFunction_7856(data, threadData);
  AlyssaVehicle_eqFunction_7857(data, threadData);
  AlyssaVehicle_eqFunction_7839(data, threadData);
  AlyssaVehicle_eqFunction_3591(data, threadData);
  AlyssaVehicle_eqFunction_3592(data, threadData);
  AlyssaVehicle_eqFunction_7847(data, threadData);
  AlyssaVehicle_eqFunction_7848(data, threadData);
  AlyssaVehicle_eqFunction_7840(data, threadData);
  AlyssaVehicle_eqFunction_3596(data, threadData);
  AlyssaVehicle_eqFunction_3597(data, threadData);
  AlyssaVehicle_eqFunction_3598(data, threadData);
  AlyssaVehicle_eqFunction_7849(data, threadData);
  AlyssaVehicle_eqFunction_7850(data, threadData);
  AlyssaVehicle_eqFunction_7860(data, threadData);
  AlyssaVehicle_eqFunction_3602(data, threadData);
  AlyssaVehicle_eqFunction_3603(data, threadData);
  AlyssaVehicle_eqFunction_7865(data, threadData);
  AlyssaVehicle_eqFunction_7864(data, threadData);
  AlyssaVehicle_eqFunction_7863(data, threadData);
  AlyssaVehicle_eqFunction_7862(data, threadData);
  AlyssaVehicle_eqFunction_7867(data, threadData);
  AlyssaVehicle_eqFunction_7892(data, threadData);
  AlyssaVehicle_eqFunction_7895(data, threadData);
  AlyssaVehicle_eqFunction_7894(data, threadData);
  AlyssaVehicle_eqFunction_7893(data, threadData);
  AlyssaVehicle_eqFunction_7887(data, threadData);
  AlyssaVehicle_eqFunction_7890(data, threadData);
  AlyssaVehicle_eqFunction_7889(data, threadData);
  AlyssaVehicle_eqFunction_7888(data, threadData);
  AlyssaVehicle_eqFunction_7891(data, threadData);
  AlyssaVehicle_eqFunction_7883(data, threadData);
  AlyssaVehicle_eqFunction_7886(data, threadData);
  AlyssaVehicle_eqFunction_7885(data, threadData);
  AlyssaVehicle_eqFunction_7884(data, threadData);
  AlyssaVehicle_eqFunction_3622(data, threadData);
  AlyssaVehicle_eqFunction_3623(data, threadData);
  AlyssaVehicle_eqFunction_3624(data, threadData);
  AlyssaVehicle_eqFunction_7868(data, threadData);
  AlyssaVehicle_eqFunction_7869(data, threadData);
  AlyssaVehicle_eqFunction_7878(data, threadData);
  AlyssaVehicle_eqFunction_7879(data, threadData);
  AlyssaVehicle_eqFunction_7881(data, threadData);
  AlyssaVehicle_eqFunction_7880(data, threadData);
  AlyssaVehicle_eqFunction_7874(data, threadData);
  AlyssaVehicle_eqFunction_7875(data, threadData);
  AlyssaVehicle_eqFunction_7877(data, threadData);
  AlyssaVehicle_eqFunction_7876(data, threadData);
  AlyssaVehicle_eqFunction_7870(data, threadData);
  AlyssaVehicle_eqFunction_7871(data, threadData);
  AlyssaVehicle_eqFunction_7882(data, threadData);
  AlyssaVehicle_eqFunction_7873(data, threadData);
  AlyssaVehicle_eqFunction_7872(data, threadData);
  AlyssaVehicle_eqFunction_7858(data, threadData);
  AlyssaVehicle_eqFunction_7994(data, threadData);
  AlyssaVehicle_eqFunction_7996(data, threadData);
  AlyssaVehicle_eqFunction_7998(data, threadData);
  AlyssaVehicle_eqFunction_8011(data, threadData);
  AlyssaVehicle_eqFunction_7997(data, threadData);
  AlyssaVehicle_eqFunction_8008(data, threadData);
  AlyssaVehicle_eqFunction_8020(data, threadData);
  AlyssaVehicle_eqFunction_8021(data, threadData);
  AlyssaVehicle_eqFunction_8018(data, threadData);
  AlyssaVehicle_eqFunction_8019(data, threadData);
  AlyssaVehicle_eqFunction_8009(data, threadData);
  AlyssaVehicle_eqFunction_8010(data, threadData);
  AlyssaVehicle_eqFunction_3653(data, threadData);
  AlyssaVehicle_eqFunction_3654(data, threadData);
  AlyssaVehicle_eqFunction_3655(data, threadData);
  AlyssaVehicle_eqFunction_3656(data, threadData);
  AlyssaVehicle_eqFunction_8023(data, threadData);
  AlyssaVehicle_eqFunction_8041(data, threadData);
  AlyssaVehicle_eqFunction_8040(data, threadData);
  AlyssaVehicle_eqFunction_3660(data, threadData);
  AlyssaVehicle_eqFunction_8033(data, threadData);
  AlyssaVehicle_eqFunction_8035(data, threadData);
  AlyssaVehicle_eqFunction_8037(data, threadData);
  AlyssaVehicle_eqFunction_8038(data, threadData);
  AlyssaVehicle_eqFunction_8036(data, threadData);
  AlyssaVehicle_eqFunction_8039(data, threadData);
  AlyssaVehicle_eqFunction_8015(data, threadData);
  AlyssaVehicle_eqFunction_8016(data, threadData);
  AlyssaVehicle_eqFunction_8017(data, threadData);
  AlyssaVehicle_eqFunction_8012(data, threadData);
  AlyssaVehicle_eqFunction_8013(data, threadData);
  AlyssaVehicle_eqFunction_8014(data, threadData);
  AlyssaVehicle_eqFunction_3673(data, threadData);
  AlyssaVehicle_eqFunction_3674(data, threadData);
  AlyssaVehicle_eqFunction_8026(data, threadData);
  AlyssaVehicle_eqFunction_3676(data, threadData);
  AlyssaVehicle_eqFunction_8028(data, threadData);
  AlyssaVehicle_eqFunction_8029(data, threadData);
  AlyssaVehicle_eqFunction_3679(data, threadData);
  AlyssaVehicle_eqFunction_3680(data, threadData);
  AlyssaVehicle_eqFunction_3681(data, threadData);
  AlyssaVehicle_eqFunction_3682(data, threadData);
  AlyssaVehicle_eqFunction_3683(data, threadData);
  AlyssaVehicle_eqFunction_8070(data, threadData);
  AlyssaVehicle_eqFunction_8063(data, threadData);
  AlyssaVehicle_eqFunction_8007(data, threadData);
  AlyssaVehicle_eqFunction_8006(data, threadData);
  AlyssaVehicle_eqFunction_8075(data, threadData);
  AlyssaVehicle_eqFunction_8069(data, threadData);
  AlyssaVehicle_eqFunction_8062(data, threadData);
  AlyssaVehicle_eqFunction_8005(data, threadData);
  AlyssaVehicle_eqFunction_8004(data, threadData);
  AlyssaVehicle_eqFunction_8068(data, threadData);
  AlyssaVehicle_eqFunction_8061(data, threadData);
  AlyssaVehicle_eqFunction_3695(data, threadData);
  AlyssaVehicle_eqFunction_3696(data, threadData);
  AlyssaVehicle_eqFunction_3697(data, threadData);
  AlyssaVehicle_eqFunction_3698(data, threadData);
  AlyssaVehicle_eqFunction_8107(data, threadData);
  AlyssaVehicle_eqFunction_8108(data, threadData);
  AlyssaVehicle_eqFunction_8109(data, threadData);
  AlyssaVehicle_eqFunction_8110(data, threadData);
  AlyssaVehicle_eqFunction_8273(data, threadData);
  AlyssaVehicle_eqFunction_8274(data, threadData);
  AlyssaVehicle_eqFunction_8275(data, threadData);
  AlyssaVehicle_eqFunction_3706(data, threadData);
  AlyssaVehicle_eqFunction_8112(data, threadData);
  AlyssaVehicle_eqFunction_8277(data, threadData);
  AlyssaVehicle_eqFunction_8111(data, threadData);
  AlyssaVehicle_eqFunction_8113(data, threadData);
  AlyssaVehicle_eqFunction_3711(data, threadData);
  AlyssaVehicle_eqFunction_8114(data, threadData);
  AlyssaVehicle_eqFunction_3713(data, threadData);
  AlyssaVehicle_eqFunction_3714(data, threadData);
  AlyssaVehicle_eqFunction_3715(data, threadData);
  AlyssaVehicle_eqFunction_3716(data, threadData);
  AlyssaVehicle_eqFunction_8133(data, threadData);
  AlyssaVehicle_eqFunction_8134(data, threadData);
  AlyssaVehicle_eqFunction_8125(data, threadData);
  AlyssaVehicle_eqFunction_8155(data, threadData);
  AlyssaVehicle_eqFunction_3721(data, threadData);
  AlyssaVehicle_eqFunction_8130(data, threadData);
  AlyssaVehicle_eqFunction_8131(data, threadData);
  AlyssaVehicle_eqFunction_8122(data, threadData);
  AlyssaVehicle_eqFunction_8123(data, threadData);
  AlyssaVehicle_eqFunction_3726(data, threadData);
  AlyssaVehicle_eqFunction_8127(data, threadData);
  AlyssaVehicle_eqFunction_8128(data, threadData);
  AlyssaVehicle_eqFunction_8135(data, threadData);
  AlyssaVehicle_eqFunction_8136(data, threadData);
  AlyssaVehicle_eqFunction_3731(data, threadData);
  AlyssaVehicle_eqFunction_3732(data, threadData);
  AlyssaVehicle_eqFunction_8143(data, threadData);
  AlyssaVehicle_eqFunction_8141(data, threadData);
  AlyssaVehicle_eqFunction_8142(data, threadData);
  AlyssaVehicle_eqFunction_8144(data, threadData);
  AlyssaVehicle_eqFunction_8145(data, threadData);
  AlyssaVehicle_eqFunction_3738(data, threadData);
  AlyssaVehicle_eqFunction_8147(data, threadData);
  AlyssaVehicle_eqFunction_8148(data, threadData);
  AlyssaVehicle_eqFunction_3741(data, threadData);
  AlyssaVehicle_eqFunction_8150(data, threadData);
  AlyssaVehicle_eqFunction_8151(data, threadData);
  AlyssaVehicle_eqFunction_3744(data, threadData);
  AlyssaVehicle_eqFunction_8119(data, threadData);
  AlyssaVehicle_eqFunction_8120(data, threadData);
  AlyssaVehicle_eqFunction_8158(data, threadData);
  AlyssaVehicle_eqFunction_8159(data, threadData);
  AlyssaVehicle_eqFunction_8156(data, threadData);
  AlyssaVehicle_eqFunction_8157(data, threadData);
  AlyssaVehicle_eqFunction_8160(data, threadData);
  AlyssaVehicle_eqFunction_8161(data, threadData);
  AlyssaVehicle_eqFunction_8162(data, threadData);
  AlyssaVehicle_eqFunction_8163(data, threadData);
  AlyssaVehicle_eqFunction_8164(data, threadData);
  AlyssaVehicle_eqFunction_8165(data, threadData);
  AlyssaVehicle_eqFunction_8166(data, threadData);
  AlyssaVehicle_eqFunction_8181(data, threadData);
  AlyssaVehicle_eqFunction_8178(data, threadData);
  AlyssaVehicle_eqFunction_8175(data, threadData);
  AlyssaVehicle_eqFunction_8171(data, threadData);
  AlyssaVehicle_eqFunction_8174(data, threadData);
  AlyssaVehicle_eqFunction_8173(data, threadData);
  AlyssaVehicle_eqFunction_8172(data, threadData);
  AlyssaVehicle_eqFunction_8167(data, threadData);
  AlyssaVehicle_eqFunction_8170(data, threadData);
  AlyssaVehicle_eqFunction_8188(data, threadData);
  AlyssaVehicle_eqFunction_8183(data, threadData);
  AlyssaVehicle_eqFunction_8182(data, threadData);
  AlyssaVehicle_eqFunction_8189(data, threadData);
  AlyssaVehicle_eqFunction_8169(data, threadData);
  AlyssaVehicle_eqFunction_8186(data, threadData);
  AlyssaVehicle_eqFunction_8180(data, threadData);
  AlyssaVehicle_eqFunction_8179(data, threadData);
  AlyssaVehicle_eqFunction_8187(data, threadData);
  AlyssaVehicle_eqFunction_8168(data, threadData);
  AlyssaVehicle_eqFunction_8184(data, threadData);
  AlyssaVehicle_eqFunction_8177(data, threadData);
  AlyssaVehicle_eqFunction_8176(data, threadData);
  AlyssaVehicle_eqFunction_8185(data, threadData);
  AlyssaVehicle_eqFunction_8192(data, threadData);
  AlyssaVehicle_eqFunction_8190(data, threadData);
  AlyssaVehicle_eqFunction_8194(data, threadData);
  AlyssaVehicle_eqFunction_8191(data, threadData);
  AlyssaVehicle_eqFunction_8193(data, threadData);
  AlyssaVehicle_eqFunction_8195(data, threadData);
  AlyssaVehicle_eqFunction_8196(data, threadData);
  AlyssaVehicle_eqFunction_8197(data, threadData);
  AlyssaVehicle_eqFunction_8261(data, threadData);
  AlyssaVehicle_eqFunction_3790(data, threadData);
  AlyssaVehicle_eqFunction_3791(data, threadData);
  AlyssaVehicle_eqFunction_8154(data, threadData);
  AlyssaVehicle_eqFunction_8276(data, threadData);
  AlyssaVehicle_eqFunction_3794(data, threadData);
  AlyssaVehicle_eqFunction_3795(data, threadData);
  AlyssaVehicle_eqFunction_8279(data, threadData);
  AlyssaVehicle_eqFunction_8283(data, threadData);
  AlyssaVehicle_eqFunction_8284(data, threadData);
  AlyssaVehicle_eqFunction_8281(data, threadData);
  AlyssaVehicle_eqFunction_8282(data, threadData);
  AlyssaVehicle_eqFunction_8280(data, threadData);
  AlyssaVehicle_eqFunction_8317(data, threadData);
  AlyssaVehicle_eqFunction_8322(data, threadData);
  AlyssaVehicle_eqFunction_8321(data, threadData);
  AlyssaVehicle_eqFunction_8325(data, threadData);
  AlyssaVehicle_eqFunction_8323(data, threadData);
  AlyssaVehicle_eqFunction_8326(data, threadData);
  AlyssaVehicle_eqFunction_8329(data, threadData);
  AlyssaVehicle_eqFunction_8318(data, threadData);
  AlyssaVehicle_eqFunction_8324(data, threadData);
  AlyssaVehicle_eqFunction_8328(data, threadData);
  AlyssaVehicle_eqFunction_8332(data, threadData);
  AlyssaVehicle_eqFunction_8334(data, threadData);
  AlyssaVehicle_eqFunction_8327(data, threadData);
  AlyssaVehicle_eqFunction_8330(data, threadData);
  AlyssaVehicle_eqFunction_8331(data, threadData);
  AlyssaVehicle_eqFunction_8333(data, threadData);
  AlyssaVehicle_eqFunction_8337(data, threadData);
  AlyssaVehicle_eqFunction_8335(data, threadData);
  AlyssaVehicle_eqFunction_8339(data, threadData);
  AlyssaVehicle_eqFunction_8336(data, threadData);
  AlyssaVehicle_eqFunction_8338(data, threadData);
  AlyssaVehicle_eqFunction_8340(data, threadData);
  AlyssaVehicle_eqFunction_8341(data, threadData);
  AlyssaVehicle_eqFunction_8342(data, threadData);
  AlyssaVehicle_eqFunction_8395(data, threadData);
  AlyssaVehicle_eqFunction_8396(data, threadData);
  AlyssaVehicle_eqFunction_8397(data, threadData);
  AlyssaVehicle_eqFunction_8398(data, threadData);
  AlyssaVehicle_eqFunction_8399(data, threadData);
  AlyssaVehicle_eqFunction_8400(data, threadData);
  AlyssaVehicle_eqFunction_8404(data, threadData);
  AlyssaVehicle_eqFunction_8401(data, threadData);
  AlyssaVehicle_eqFunction_8408(data, threadData);
  AlyssaVehicle_eqFunction_8319(data, threadData);
  AlyssaVehicle_eqFunction_8320(data, threadData);
  AlyssaVehicle_eqFunction_8411(data, threadData);
  AlyssaVehicle_eqFunction_8410(data, threadData);
  AlyssaVehicle_eqFunction_8409(data, threadData);
  AlyssaVehicle_eqFunction_8402(data, threadData);
  AlyssaVehicle_eqFunction_8407(data, threadData);
  AlyssaVehicle_eqFunction_8406(data, threadData);
  AlyssaVehicle_eqFunction_8403(data, threadData);
  AlyssaVehicle_eqFunction_8405(data, threadData);
  AlyssaVehicle_eqFunction_8414(data, threadData);
  AlyssaVehicle_eqFunction_8445(data, threadData);
  AlyssaVehicle_eqFunction_8438(data, threadData);
  AlyssaVehicle_eqFunction_8433(data, threadData);
  AlyssaVehicle_eqFunction_8413(data, threadData);
  AlyssaVehicle_eqFunction_8444(data, threadData);
  AlyssaVehicle_eqFunction_8437(data, threadData);
  AlyssaVehicle_eqFunction_8432(data, threadData);
  AlyssaVehicle_eqFunction_8412(data, threadData);
  AlyssaVehicle_eqFunction_8443(data, threadData);
  AlyssaVehicle_eqFunction_8436(data, threadData);
  AlyssaVehicle_eqFunction_8431(data, threadData);
  AlyssaVehicle_eqFunction_8285(data, threadData);
  AlyssaVehicle_eqFunction_8286(data, threadData);
  AlyssaVehicle_eqFunction_8287(data, threadData);
  AlyssaVehicle_eqFunction_8288(data, threadData);
  AlyssaVehicle_eqFunction_8289(data, threadData);
  AlyssaVehicle_eqFunction_8290(data, threadData);
  AlyssaVehicle_eqFunction_8291(data, threadData);
  AlyssaVehicle_eqFunction_8292(data, threadData);
  AlyssaVehicle_eqFunction_8293(data, threadData);
  AlyssaVehicle_eqFunction_8307(data, threadData);
  AlyssaVehicle_eqFunction_8294(data, threadData);
  AlyssaVehicle_eqFunction_8299(data, threadData);
  AlyssaVehicle_eqFunction_8298(data, threadData);
  AlyssaVehicle_eqFunction_8300(data, threadData);
  AlyssaVehicle_eqFunction_8295(data, threadData);
  AlyssaVehicle_eqFunction_8305(data, threadData);
  AlyssaVehicle_eqFunction_8304(data, threadData);
  AlyssaVehicle_eqFunction_8306(data, threadData);
  AlyssaVehicle_eqFunction_8301(data, threadData);
  AlyssaVehicle_eqFunction_8303(data, threadData);
  AlyssaVehicle_eqFunction_8302(data, threadData);
  AlyssaVehicle_eqFunction_8297(data, threadData);
  AlyssaVehicle_eqFunction_8296(data, threadData);
  AlyssaVehicle_eqFunction_3880(data, threadData);
  AlyssaVehicle_eqFunction_3881(data, threadData);
  AlyssaVehicle_eqFunction_3882(data, threadData);
  AlyssaVehicle_eqFunction_3883(data, threadData);
  AlyssaVehicle_eqFunction_3884(data, threadData);
  AlyssaVehicle_eqFunction_3885(data, threadData);
  AlyssaVehicle_eqFunction_3886(data, threadData);
  AlyssaVehicle_eqFunction_3887(data, threadData);
  AlyssaVehicle_eqFunction_3888(data, threadData);
  AlyssaVehicle_eqFunction_8199(data, threadData);
  AlyssaVehicle_eqFunction_8344(data, threadData);
  AlyssaVehicle_eqFunction_8198(data, threadData);
  AlyssaVehicle_eqFunction_8200(data, threadData);
  AlyssaVehicle_eqFunction_3893(data, threadData);
  AlyssaVehicle_eqFunction_3894(data, threadData);
  AlyssaVehicle_eqFunction_3895(data, threadData);
  AlyssaVehicle_eqFunction_8236(data, threadData);
  AlyssaVehicle_eqFunction_8216(data, threadData);
  AlyssaVehicle_eqFunction_8221(data, threadData);
  AlyssaVehicle_eqFunction_8259(data, threadData);
  AlyssaVehicle_eqFunction_8258(data, threadData);
  AlyssaVehicle_eqFunction_8257(data, threadData);
  AlyssaVehicle_eqFunction_3902(data, threadData);
  AlyssaVehicle_eqFunction_3903(data, threadData);
  AlyssaVehicle_eqFunction_3904(data, threadData);
  AlyssaVehicle_eqFunction_8231(data, threadData);
  AlyssaVehicle_eqFunction_8232(data, threadData);
  AlyssaVehicle_eqFunction_8213(data, threadData);
  AlyssaVehicle_eqFunction_8212(data, threadData);
  AlyssaVehicle_eqFunction_8233(data, threadData);
  AlyssaVehicle_eqFunction_8234(data, threadData);
  AlyssaVehicle_eqFunction_8235(data, threadData);
  AlyssaVehicle_eqFunction_3912(data, threadData);
  AlyssaVehicle_eqFunction_3913(data, threadData);
  AlyssaVehicle_eqFunction_3914(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif
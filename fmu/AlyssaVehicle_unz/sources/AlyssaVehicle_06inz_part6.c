#include "AlyssaVehicle_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern void AlyssaVehicle_eqFunction_8266(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8272(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8269(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8271(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7242(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7301(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7192(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8459(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8465(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8635(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7241(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8636(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7300(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8637(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7191(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8638(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8641(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8640(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8643(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8639(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8645(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8642(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8644(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7237(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7296(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7187(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7245(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7305(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7195(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7246(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7306(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7196(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7247(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7307(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7197(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7248(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7308(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7198(DATA *data, threadData_t *threadData);


/*
equation index: 2979
type: SIMPLE_ASSIGN
$DER.rig.motion.roll.R_rel.T[3,3] = (1.0 - rig.motion.roll.e[3] ^ 2.0) * (-sin(rig.motion.roll.phi)) * rig.motion.roll.w
*/
void AlyssaVehicle_eqFunction_2979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2979};
  modelica_real tmp116;
  tmp116 = (data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* der(rig.motion.roll.R_rel.T[3,3]) DUMMY_DER */) = (1.0 - ((tmp116 * tmp116))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */)));
  TRACE_POP
}

/*
equation index: 2980
type: SIMPLE_ASSIGN
$DER.rig.motion.roll.R_rel.T[3,2] = (-rig.motion.roll.e[3]) * (-sin(rig.motion.roll.phi)) * rig.motion.roll.w * rig.motion.roll.e[2] - rig.motion.roll.e[1] * cos(rig.motion.roll.phi) * rig.motion.roll.w
*/
void AlyssaVehicle_eqFunction_2980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2980};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* der(rig.motion.roll.R_rel.T[3,2]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */)) * ((data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */)))) - (((data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */))));
  TRACE_POP
}

/*
equation index: 2981
type: SIMPLE_ASSIGN
$DER.rig.motion.roll.R_rel.T[3,1] = rig.motion.roll.e[2] * cos(rig.motion.roll.phi) * rig.motion.roll.w - rig.motion.roll.e[3] * (-sin(rig.motion.roll.phi)) * rig.motion.roll.w * rig.motion.roll.e[1]
*/
void AlyssaVehicle_eqFunction_2981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2981};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* der(rig.motion.roll.R_rel.T[3,1]) DUMMY_DER */) = ((data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */))) - (((data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */)) * ((data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */)))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7328(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7335(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7342(DATA *data, threadData_t *threadData);


/*
equation index: 2985
type: SIMPLE_ASSIGN
$DER.rig.motion.roll.R_rel.T[2,3] = rig.motion.roll.e[1] * cos(rig.motion.roll.phi) * rig.motion.roll.w - rig.motion.roll.e[2] * (-sin(rig.motion.roll.phi)) * rig.motion.roll.w * rig.motion.roll.e[3]
*/
void AlyssaVehicle_eqFunction_2985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2985};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* der(rig.motion.roll.R_rel.T[2,3]) DUMMY_DER */) = ((data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */))) - (((data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */)) * ((data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2986
type: SIMPLE_ASSIGN
$DER.rig.motion.roll.R_rel.T[2,2] = (1.0 - rig.motion.roll.e[2] ^ 2.0) * (-sin(rig.motion.roll.phi)) * rig.motion.roll.w
*/
void AlyssaVehicle_eqFunction_2986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2986};
  modelica_real tmp117;
  tmp117 = (data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* der(rig.motion.roll.R_rel.T[2,2]) DUMMY_DER */) = (1.0 - ((tmp117 * tmp117))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */)));
  TRACE_POP
}

/*
equation index: 2987
type: SIMPLE_ASSIGN
$DER.rig.motion.roll.R_rel.T[2,1] = (-rig.motion.roll.e[2]) * (-sin(rig.motion.roll.phi)) * rig.motion.roll.w * rig.motion.roll.e[1] - rig.motion.roll.e[3] * cos(rig.motion.roll.phi) * rig.motion.roll.w
*/
void AlyssaVehicle_eqFunction_2987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2987};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* der(rig.motion.roll.R_rel.T[2,1]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */)) * ((data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */)))) - (((data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7327(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7334(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7341(DATA *data, threadData_t *threadData);


/*
equation index: 2991
type: SIMPLE_ASSIGN
$DER.rig.motion.roll.R_rel.T[1,3] = (-rig.motion.roll.e[1]) * (-sin(rig.motion.roll.phi)) * rig.motion.roll.w * rig.motion.roll.e[3] - rig.motion.roll.e[2] * cos(rig.motion.roll.phi) * rig.motion.roll.w
*/
void AlyssaVehicle_eqFunction_2991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2991};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* der(rig.motion.roll.R_rel.T[1,3]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */)) * ((data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */)))) - (((data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */))));
  TRACE_POP
}

/*
equation index: 2992
type: SIMPLE_ASSIGN
$DER.rig.motion.roll.R_rel.T[1,2] = rig.motion.roll.e[3] * cos(rig.motion.roll.phi) * rig.motion.roll.w - rig.motion.roll.e[1] * (-sin(rig.motion.roll.phi)) * rig.motion.roll.w * rig.motion.roll.e[2]
*/
void AlyssaVehicle_eqFunction_2992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2992};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* der(rig.motion.roll.R_rel.T[1,2]) DUMMY_DER */) = ((data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */))) - (((data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */)) * ((data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2993
type: SIMPLE_ASSIGN
$DER.rig.motion.roll.R_rel.T[1,1] = (1.0 - rig.motion.roll.e[1] ^ 2.0) * (-sin(rig.motion.roll.phi)) * rig.motion.roll.w
*/
void AlyssaVehicle_eqFunction_2993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2993};
  modelica_real tmp118;
  tmp118 = (data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* der(rig.motion.roll.R_rel.T[1,1]) DUMMY_DER */) = (1.0 - ((tmp118 * tmp118))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7326(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7683(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7689(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7701(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8047(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8053(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8071(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8420(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8426(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8442(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8792(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8798(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8808(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7333(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7682(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7688(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7697(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8046(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8052(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8064(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8419(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8425(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8435(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8791(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8797(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8807(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7340(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7681(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7687(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7693(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8045(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8051(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8057(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8418(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8424(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8430(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8790(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8796(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8802(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7029(DATA *data, threadData_t *threadData);


/*
equation index: 3034
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.drive = $START.rigController.pedalSmoothing.drive
*/
void AlyssaVehicle_eqFunction_3034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3034};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* rigController.pedalSmoothing.drive STATE(1) */) = (data->modelData->realVarsData[13] /* rigController.pedalSmoothing.drive STATE(1) */).attribute .start;
  TRACE_POP
}

/*
equation index: 3035
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.brake = $START.rigController.pedalSmoothing.brake
*/
void AlyssaVehicle_eqFunction_3035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3035};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* rigController.pedalSmoothing.brake STATE(1) */) = (data->modelData->realVarsData[12] /* rigController.pedalSmoothing.brake STATE(1) */).attribute .start;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7039(DATA *data, threadData_t *threadData);


/*
equation index: 3037
type: SIMPLE_ASSIGN
rigController.steerSmoothing.delta = $START.rigController.steerSmoothing.delta
*/
void AlyssaVehicle_eqFunction_3037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3037};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* rigController.steerSmoothing.delta STATE(1) */) = (data->modelData->realVarsData[14] /* rigController.steerSmoothing.delta STATE(1) */).attribute .start;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7048(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7049(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7227(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7229(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7228(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7238(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7240(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7239(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7286(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7288(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7287(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7297(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7299(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7298(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7177(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7179(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7178(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7188(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7190(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7189(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7050(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7043(DATA *data, threadData_t *threadData);


/*
equation index: 3060
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod1.rodLength = 0.3590264614203248
*/
void AlyssaVehicle_eqFunction_3060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3060};
  (data->simulationInfo->realParameter[2067] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.rodLength PARAM */) = 0.3590264614203248;
  TRACE_POP
}

/*
equation index: 3061
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod1.rodShape.length = vehicle.rearSuspension.cornerL.jointUSR.rod1.rodLength
*/
void AlyssaVehicle_eqFunction_3061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3061};
  (data->simulationInfo->realParameter[2069] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.rodShape.length PARAM */) = (data->simulationInfo->realParameter[2067] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 3062
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod1Length = vehicle.rearSuspension.cornerL.jointUSR.rod1.rodLength
*/
void AlyssaVehicle_eqFunction_3062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3062};
  (data->simulationInfo->realParameter[2088] /* vehicle.rearSuspension.cornerL.jointUSR.rod1Length PARAM */) = (data->simulationInfo->realParameter[2067] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 3063
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.revolute.lengthConstraint = vehicle.rearSuspension.cornerL.jointUSR.rod1Length
*/
void AlyssaVehicle_eqFunction_3063(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3063};
  (data->simulationInfo->realParameter[2039] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.lengthConstraint PARAM */) = (data->simulationInfo->realParameter[2088] /* vehicle.rearSuspension.cornerL.jointUSR.rod1Length PARAM */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7368(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7369(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7370(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7371(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7545(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7546(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7547(DATA *data, threadData_t *threadData);


/*
equation index: 3071
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.revolute.positiveBranch = AlyssaModel.Experiments.OptimalControlFMU.vehicle.rearSuspension.cornerL.jointUSR.revolute.selectBranch(vehicle.rearSuspension.cornerL.jointUSR.revolute.lengthConstraint, {-1.0, -0.0, 0.0}, 0.017453292519943295 * (vehicle.rearSuspension.cornerL.jointUSR.revolute.phi_offset + vehicle.rearSuspension.cornerL.jointUSR.revolute.phi_guess), vehicle.rearSuspension.cornerL.jointUSR.revolute.r_a, vehicle.rearSuspension.cornerL.jointUSR.revolute.r_b)
*/
void AlyssaVehicle_eqFunction_3071(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3071};
  real_array tmp119;
  real_array tmp120;
  real_array_create(&tmp119, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3398]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp120, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3401]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.r_b[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[139] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.positiveBranch PARAM */) = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerL_jointUSR_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[2039] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.lengthConstraint PARAM */), _OMC_LIT23, (0.017453292519943295) * ((data->simulationInfo->realParameter[2044] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[2043] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.phi_guess PARAM */)), tmp119, tmp120);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7373(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7549(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7372(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7374(DATA *data, threadData_t *threadData);


/*
equation index: 3076
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] = sin(vehicle.rearSuspension.cornerL.jointUSR.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3076(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3076};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3365]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */) = sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3370]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.angle DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7375(DATA *data, threadData_t *threadData);


/*
equation index: 3078
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,3] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,3] + vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3078};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3591]] /* vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3365]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3366]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3079
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,2] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,2] + vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3079};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3590]] /* vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,2] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3365]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3366]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3080
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,1] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,1] + vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3080};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3589]] /* vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,1] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3365]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3366]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3081
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,3] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,3] - vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3081};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3588]] /* vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3366]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3365]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7393(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7394(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7385(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7416(DATA *data, threadData_t *threadData);


/*
equation index: 3086
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,2] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,2] - vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3086};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3587]] /* vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,2] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3366]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3365]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7390(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7391(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7382(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7383(DATA *data, threadData_t *threadData);


/*
equation index: 3091
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,1] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,1] - vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3091};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3586]] /* vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,1] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3366]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3365]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7387(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7388(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7395(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7396(DATA *data, threadData_t *threadData);


/*
equation index: 3096
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.shape_b.length = max(vehicle.rearSuspension.cornerL.coilover.s - vehicle.rearSuspension.cornerL.coilover.length_a, 0.0)
*/
void AlyssaVehicle_eqFunction_3096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3096};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3257]] /* vehicle.rearSuspension.cornerL.coilover.shape_b.length variable */) = fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3230]] /* vehicle.rearSuspension.cornerL.coilover.s DUMMY_STATE */) - (data->simulationInfo->realParameter[1923] /* vehicle.rearSuspension.cornerL.coilover.length_a PARAM */),0.0);
  TRACE_POP
}

/*
equation index: 3097
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.shape_a.length = min(vehicle.rearSuspension.cornerL.coilover.length_a, vehicle.rearSuspension.cornerL.coilover.s)
*/
void AlyssaVehicle_eqFunction_3097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3097};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3246]] /* vehicle.rearSuspension.cornerL.coilover.shape_a.length variable */) = fmin((data->simulationInfo->realParameter[1923] /* vehicle.rearSuspension.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3230]] /* vehicle.rearSuspension.cornerL.coilover.s DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7403(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7401(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7402(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7404(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7405(DATA *data, threadData_t *threadData);


/*
equation index: 3103
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.shape_b.r_shape[3] = vehicle.rearSuspension.cornerL.coilover.e_a[3] * min(vehicle.rearSuspension.cornerL.coilover.length_a, vehicle.rearSuspension.cornerL.coilover.s)
*/
void AlyssaVehicle_eqFunction_3103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3260]] /* vehicle.rearSuspension.cornerL.coilover.shape_b.r_shape[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3204]] /* vehicle.rearSuspension.cornerL.coilover.e_a[3] variable */)) * (fmin((data->simulationInfo->realParameter[1923] /* vehicle.rearSuspension.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3230]] /* vehicle.rearSuspension.cornerL.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7407(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7408(DATA *data, threadData_t *threadData);


/*
equation index: 3106
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.shape_b.r_shape[2] = vehicle.rearSuspension.cornerL.coilover.e_a[2] * min(vehicle.rearSuspension.cornerL.coilover.length_a, vehicle.rearSuspension.cornerL.coilover.s)
*/
void AlyssaVehicle_eqFunction_3106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3259]] /* vehicle.rearSuspension.cornerL.coilover.shape_b.r_shape[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3203]] /* vehicle.rearSuspension.cornerL.coilover.e_a[2] variable */)) * (fmin((data->simulationInfo->realParameter[1923] /* vehicle.rearSuspension.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3230]] /* vehicle.rearSuspension.cornerL.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7410(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7411(DATA *data, threadData_t *threadData);


/*
equation index: 3109
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.shape_b.r_shape[1] = vehicle.rearSuspension.cornerL.coilover.e_a[1] * min(vehicle.rearSuspension.cornerL.coilover.length_a, vehicle.rearSuspension.cornerL.coilover.s)
*/
void AlyssaVehicle_eqFunction_3109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3258]] /* vehicle.rearSuspension.cornerL.coilover.shape_b.r_shape[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3202]] /* vehicle.rearSuspension.cornerL.coilover.e_a[1] variable */)) * (fmin((data->simulationInfo->realParameter[1923] /* vehicle.rearSuspension.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3230]] /* vehicle.rearSuspension.cornerL.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7379(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7380(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7417(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7418(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7419(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7420(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7421(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7422(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7424(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7426(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7425(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7423(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7428(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7427(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7429(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7436(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7437(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7441(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7452(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7443(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7442(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7453(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7438(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7450(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7440(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7439(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7451(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7454(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7445(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7444(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7448(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7447(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7446(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7449(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7458(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7456(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7455(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7457(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7459(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7460(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7461(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7533(DATA *data, threadData_t *threadData);


/*
equation index: 3152
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springArm.frame_b.R.w[3] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.vehicleBody.body.w_a[2] + vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.vehicleBody.body.w_a[3]
*/
void AlyssaVehicle_eqFunction_3152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3594]] /* vehicle.rearSuspension.cornerL.springArm.frame_b.R.w[3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3365]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3366]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3153
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springArm.frame_b.R.w[2] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.vehicleBody.body.w_a[2] - vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.vehicleBody.body.w_a[3]
*/
void AlyssaVehicle_eqFunction_3153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3593]] /* vehicle.rearSuspension.cornerL.springArm.frame_b.R.w[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3366]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3365]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7415(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7548(DATA *data, threadData_t *threadData);


/*
equation index: 3156
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.angle = if noEvent(vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle == 0.0) then vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle else ($DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.ksin_angle * vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle - vehicle.rearSuspension.cornerL.jointUSR.revolute.ksin_angle * $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle) / (vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (vehicle.rearSuspension.cornerL.jointUSR.revolute.ksin_angle / vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle) ^ 2.0))
*/
void AlyssaVehicle_eqFunction_3156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3156};
  modelica_real tmp121;
  modelica_real tmp122;
  modelica_boolean tmp123;
  modelica_real tmp124;
  tmp123 = (modelica_boolean)((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3395]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */) == 0.0);
  if(tmp123)
  {
    tmp124 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3395]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */);
  }
  else
  {
    tmp121 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3395]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */);
    tmp122 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3396]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.ksin_angle DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3395]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */),"vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle",equationIndexes);
    tmp124 = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.ksin_angle) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3395]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3396]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.ksin_angle DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle) DUMMY_DER */))),((tmp121 * tmp121)) * (1.0 + (tmp122 * tmp122)),"vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (vehicle.rearSuspension.cornerL.jointUSR.revolute.ksin_angle / vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle) ^ 2.0)",equationIndexes);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.angle) DUMMY_DER */) = tmp124;
  TRACE_POP
}

/*
equation index: 3157
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.w[1] = -$DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_3157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3157};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3367]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.w[1] DUMMY_STATE */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7551(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7555(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7556(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7553(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7554(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7552(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7589(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7596(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7595(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7601(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7602(DATA *data, threadData_t *threadData);


/*
equation index: 3169
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.frame_ia.R.w[1] = vehicle.rearSuspension.cornerL.jointUSR.rod1.R_rel_ia.w[1] - vehicle.rearSuspension.cornerL.jointUSR.rod1.e3_a[3] * vehicle.rearSuspension.cornerL.jointUSR.frame_a.R.w[3] - vehicle.rearSuspension.cornerL.jointUSR.rod1.e3_a[2] * vehicle.rearSuspension.cornerL.jointUSR.frame_a.R.w[2] - vehicle.rearSuspension.cornerL.jointUSR.rod1.e3_a[1] * vehicle.rearSuspension.cornerL.jointUSR.frame_a.R.w[1]
*/
void AlyssaVehicle_eqFunction_3169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3294]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_ia.R.w[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3410]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.R_rel_ia.w[1] DUMMY_STATE */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3434]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.e3_a[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3279]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3433]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.e3_a[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3278]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_a.R.w[2] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3432]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.e3_a[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3277]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_a.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7597(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7590(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7598(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7600(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7604(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7608(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7599(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7603(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7609(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7610(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7605(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7614(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7612(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7611(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7613(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7615(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7616(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7617(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7663(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7664(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7665(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7666(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7667(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7668(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7671(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7673(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7672(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7669(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7677(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7676(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7675(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7591(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7592(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7594(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7704(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7700(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7696(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7593(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7703(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7699(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7695(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7670(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7674(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7702(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7698(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7694(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7561(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7562(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7559(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7560(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7557(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7558(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7563(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7564(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7565(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7579(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7566(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7571(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7570(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7572(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7567(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7577(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7576(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7578(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7573(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7575(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7574(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7569(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7568(DATA *data, threadData_t *threadData);


/*
equation index: 3239
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] = cos(vehicle.rearSuspension.cornerL.jointUSR.revolute.angle) * $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_3239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */) = (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3370]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3240
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] = (-sin(vehicle.rearSuspension.cornerL.jointUSR.revolute.angle)) * $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_3240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3370]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3241
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,3] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,3] + $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,3] + vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,3] + $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* der(vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3365]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(vehicle.chassisFrame.R.T[2,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3366]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* der(vehicle.chassisFrame.R.T[3,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3242
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,2] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,2] + $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,2] + vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,2] + $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* der(vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,2]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3365]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(vehicle.chassisFrame.R.T[2,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3366]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* der(vehicle.chassisFrame.R.T[3,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3243
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,1] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,1] + $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,1] + vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,1] + $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* der(vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,1]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3365]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* der(vehicle.chassisFrame.R.T[2,1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3366]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* der(vehicle.chassisFrame.R.T[3,1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3244
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,3] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[2,3] + $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,3] + (-vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) * $DER.vehicle.chassisFrame.R.T[3,3] - $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* der(vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3366]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(vehicle.chassisFrame.R.T[2,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3365]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* der(vehicle.chassisFrame.R.T[3,3]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3245
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,2] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[2,2] + $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,2] + (-vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) * $DER.vehicle.chassisFrame.R.T[3,2] - $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* der(vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,2]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3366]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(vehicle.chassisFrame.R.T[2,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3365]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* der(vehicle.chassisFrame.R.T[3,2]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3246
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,1] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[2,1] + $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,1] + (-vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) * $DER.vehicle.chassisFrame.R.T[3,1] - $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* der(vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,1]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3366]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* der(vehicle.chassisFrame.R.T[2,1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3365]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* der(vehicle.chassisFrame.R.T[3,1]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3247
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.positiveBranch = AlyssaModel.Experiments.OptimalControlFMU.vehicle.rearSuspension.cornerL.tieRod.revolute.selectBranch(vehicle.rearSuspension.cornerL.tieRod.revolute.lengthConstraint, {0.0, -0.222824801502141, 0.9748585065718673}, 0.017453292519943295 * (vehicle.rearSuspension.cornerL.tieRod.revolute.phi_offset + vehicle.rearSuspension.cornerL.tieRod.revolute.phi_guess), vehicle.rearSuspension.cornerL.tieRod.revolute.r_a, vehicle.rearSuspension.cornerL.tieRod.revolute.r_b)
*/
void AlyssaVehicle_eqFunction_3247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3247};
  real_array tmp125;
  real_array tmp126;
  real_array_create(&tmp125, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3752]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp126, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3755]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.r_b[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[155] /* vehicle.rearSuspension.cornerL.tieRod.revolute.positiveBranch PARAM */) = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerL_tieRod_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[2331] /* vehicle.rearSuspension.cornerL.tieRod.revolute.lengthConstraint PARAM */), _OMC_LIT24, (0.017453292519943295) * ((data->simulationInfo->realParameter[2336] /* vehicle.rearSuspension.cornerL.tieRod.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[2335] /* vehicle.rearSuspension.cornerL.tieRod.revolute.phi_guess PARAM */)), tmp125, tmp126);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7463(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7619(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7462(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7464(DATA *data, threadData_t *threadData);


/*
equation index: 3252
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[3,1] = (-0.222824801502141) * sin(vehicle.rearSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3716]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[3,1] DUMMY_STATE */) = (-0.222824801502141) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3722]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3253
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,3] = 0.222824801502141 * sin(vehicle.rearSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3712]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,3] DUMMY_STATE */) = (0.222824801502141) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3722]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3254
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,2] = 0.9748585065718673 * sin(vehicle.rearSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3711]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,2] DUMMY_STATE */) = (0.9748585065718673) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3722]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7465(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7607(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7467(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7466(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7496(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7476(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7477(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7497(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7473(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7474(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7468(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7469(DATA *data, threadData_t *threadData);


/*
equation index: 3267
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[2,1] = (-0.9748585065718673) * sin(vehicle.rearSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3267};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3713]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[2,1] variable */) = (-0.9748585065718673) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3722]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7498(DATA *data, threadData_t *threadData);


/*
equation index: 3269
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.frame_a.r_0[3] = vehicle.rearSuspension.cornerL.jointUSR.frame_ia.r_0[3] + (-0.13) * vehicle.rearSuspension.cornerL.upright.frame_a.R.T[2,3] + 0.2 * vehicle.rearSuspension.cornerL.upright.frame_a.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3948]] /* vehicle.rearSuspension.cornerL.upright.frame_a.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3302]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_ia.r_0[3] DUMMY_STATE */) + (-0.13) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3939]] /* vehicle.rearSuspension.cornerL.upright.frame_a.R.T[2,3] variable */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3942]] /* vehicle.rearSuspension.cornerL.upright.frame_a.R.T[3,3] variable */));
  TRACE_POP
}

/*
equation index: 3270
type: SIMPLE_ASSIGN
vehicle.wheelRL.contactPatch.frame_a.r_0[3] = vehicle.rearSuspension.cornerL.upright.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3270};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5275]] /* vehicle.wheelRL.contactPatch.frame_a.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3948]] /* vehicle.rearSuspension.cornerL.upright.frame_a.r_0[3] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7531(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7523(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7518(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7522(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7514(DATA *data, threadData_t *threadData);


/*
equation index: 3276
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,3] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[1,3] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[2,3] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3276};
  real_array tmp127;
  real_array tmp128;
  real_array tmp129;
  real_array tmp130;
  real_array tmp131;
  real_array tmp132;
  real_array tmp133;
  real_array tmp134;
  real_array tmp135;
  real_array tmp136;
  real_array tmp137;
  real_array tmp138;
  real_array tmp139;
  real_array tmp140;
  real_array tmp141;
  real_array tmp142;
  real_array tmp143;
  real_array tmp144;
  real_array tmp145;
  real_array tmp146;
  real_array tmp147;
  real_array tmp148;
  real_array tmp149;
  real_array tmp150;
  real_array tmp151;
  real_array tmp152;
  real_array tmp153;
  real_array tmp154;
  real_array tmp155;
  real_array tmp156;
  real_array_create(&tmp127, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp127, ((modelica_integer) 2) - ndims_base_array(&tmp127), &tmp128);
  real_array_create(&tmp129, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp129, ((modelica_integer) 2) - ndims_base_array(&tmp129), &tmp130);
  transpose_alloc_real_array(&tmp130, &tmp131);
  real_array_create(&tmp132, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp132, ((modelica_integer) 2) - ndims_base_array(&tmp132), &tmp133);
  real_array_create(&tmp134, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp134, ((modelica_integer) 2) - ndims_base_array(&tmp134), &tmp135);
  transpose_alloc_real_array(&tmp135, &tmp136);
  real_array_create(&tmp137, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp137, ((modelica_integer) 2) - ndims_base_array(&tmp137), &tmp138);
  real_array_create(&tmp139, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp139, ((modelica_integer) 2) - ndims_base_array(&tmp139), &tmp140);
  transpose_alloc_real_array(&tmp140, &tmp141);
  real_array_create(&tmp142, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp142, ((modelica_integer) 2) - ndims_base_array(&tmp142), &tmp143);
  real_array_create(&tmp144, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp144, ((modelica_integer) 2) - ndims_base_array(&tmp144), &tmp145);
  transpose_alloc_real_array(&tmp145, &tmp146);
  real_array_create(&tmp147, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp147, ((modelica_integer) 2) - ndims_base_array(&tmp147), &tmp148);
  real_array_create(&tmp149, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp149, ((modelica_integer) 2) - ndims_base_array(&tmp149), &tmp150);
  transpose_alloc_real_array(&tmp150, &tmp151);
  real_array_create(&tmp152, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp152, ((modelica_integer) 2) - ndims_base_array(&tmp152), &tmp153);
  real_array_create(&tmp154, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp154, ((modelica_integer) 2) - ndims_base_array(&tmp154), &tmp155);
  transpose_alloc_real_array(&tmp155, &tmp156);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5329]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp128, tmp131), 2, 0) + ((data->simulationInfo->realParameter[3739] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp133, tmp136), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3166]] /* vehicle.hubRL.bearingFrame.R.T[1,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp138, tmp141), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp143, tmp146), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3169]] /* vehicle.hubRL.bearingFrame.R.T[2,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp148, tmp151), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp153, tmp156), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3172]] /* vehicle.hubRL.bearingFrame.R.T[3,3] variable */));
  TRACE_POP
}

/*
equation index: 3277
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,3] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[1,3] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[2,3] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3277};
  real_array tmp157;
  real_array tmp158;
  real_array tmp159;
  real_array tmp160;
  real_array tmp161;
  real_array tmp162;
  real_array tmp163;
  real_array tmp164;
  real_array tmp165;
  real_array tmp166;
  real_array tmp167;
  real_array tmp168;
  real_array tmp169;
  real_array tmp170;
  real_array tmp171;
  real_array tmp172;
  real_array tmp173;
  real_array tmp174;
  real_array tmp175;
  real_array tmp176;
  real_array tmp177;
  real_array tmp178;
  real_array tmp179;
  real_array tmp180;
  real_array tmp181;
  real_array tmp182;
  real_array tmp183;
  real_array tmp184;
  real_array tmp185;
  real_array tmp186;
  real_array_create(&tmp157, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp157, ((modelica_integer) 2) - ndims_base_array(&tmp157), &tmp158);
  real_array_create(&tmp159, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp159, ((modelica_integer) 2) - ndims_base_array(&tmp159), &tmp160);
  transpose_alloc_real_array(&tmp160, &tmp161);
  real_array_create(&tmp162, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp162, ((modelica_integer) 2) - ndims_base_array(&tmp162), &tmp163);
  real_array_create(&tmp164, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp164, ((modelica_integer) 2) - ndims_base_array(&tmp164), &tmp165);
  transpose_alloc_real_array(&tmp165, &tmp166);
  real_array_create(&tmp167, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp167, ((modelica_integer) 2) - ndims_base_array(&tmp167), &tmp168);
  real_array_create(&tmp169, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp169, ((modelica_integer) 2) - ndims_base_array(&tmp169), &tmp170);
  transpose_alloc_real_array(&tmp170, &tmp171);
  real_array_create(&tmp172, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp172, ((modelica_integer) 2) - ndims_base_array(&tmp172), &tmp173);
  real_array_create(&tmp174, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp174, ((modelica_integer) 2) - ndims_base_array(&tmp174), &tmp175);
  transpose_alloc_real_array(&tmp175, &tmp176);
  real_array_create(&tmp177, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp177, ((modelica_integer) 2) - ndims_base_array(&tmp177), &tmp178);
  real_array_create(&tmp179, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp179, ((modelica_integer) 2) - ndims_base_array(&tmp179), &tmp180);
  transpose_alloc_real_array(&tmp180, &tmp181);
  real_array_create(&tmp182, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp182, ((modelica_integer) 2) - ndims_base_array(&tmp182), &tmp183);
  real_array_create(&tmp184, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp184, ((modelica_integer) 2) - ndims_base_array(&tmp184), &tmp185);
  transpose_alloc_real_array(&tmp185, &tmp186);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5326]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp158, tmp161), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp163, tmp166), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3740] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3166]] /* vehicle.hubRL.bearingFrame.R.T[1,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp168, tmp171), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp173, tmp176), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3169]] /* vehicle.hubRL.bearingFrame.R.T[2,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp178, tmp181), 1, 2) + ((data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp183, tmp186), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3172]] /* vehicle.hubRL.bearingFrame.R.T[3,3] variable */));
  TRACE_POP
}

/*
equation index: 3278
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,3] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[1,3] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[2,3] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3278};
  real_array tmp187;
  real_array tmp188;
  real_array tmp189;
  real_array tmp190;
  real_array tmp191;
  real_array tmp192;
  real_array tmp193;
  real_array tmp194;
  real_array tmp195;
  real_array tmp196;
  real_array tmp197;
  real_array tmp198;
  real_array tmp199;
  real_array tmp200;
  real_array tmp201;
  real_array tmp202;
  real_array tmp203;
  real_array tmp204;
  real_array tmp205;
  real_array tmp206;
  real_array tmp207;
  real_array tmp208;
  real_array tmp209;
  real_array tmp210;
  real_array tmp211;
  real_array tmp212;
  real_array tmp213;
  real_array tmp214;
  real_array tmp215;
  real_array tmp216;
  real_array_create(&tmp187, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp187, ((modelica_integer) 2) - ndims_base_array(&tmp187), &tmp188);
  real_array_create(&tmp189, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp189, ((modelica_integer) 2) - ndims_base_array(&tmp189), &tmp190);
  transpose_alloc_real_array(&tmp190, &tmp191);
  real_array_create(&tmp192, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp192, ((modelica_integer) 2) - ndims_base_array(&tmp192), &tmp193);
  real_array_create(&tmp194, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp194, ((modelica_integer) 2) - ndims_base_array(&tmp194), &tmp195);
  transpose_alloc_real_array(&tmp195, &tmp196);
  real_array_create(&tmp197, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp197, ((modelica_integer) 2) - ndims_base_array(&tmp197), &tmp198);
  real_array_create(&tmp199, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp199, ((modelica_integer) 2) - ndims_base_array(&tmp199), &tmp200);
  transpose_alloc_real_array(&tmp200, &tmp201);
  real_array_create(&tmp202, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp202, ((modelica_integer) 2) - ndims_base_array(&tmp202), &tmp203);
  real_array_create(&tmp204, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp204, ((modelica_integer) 2) - ndims_base_array(&tmp204), &tmp205);
  transpose_alloc_real_array(&tmp205, &tmp206);
  real_array_create(&tmp207, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp207, ((modelica_integer) 2) - ndims_base_array(&tmp207), &tmp208);
  real_array_create(&tmp209, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp209, ((modelica_integer) 2) - ndims_base_array(&tmp209), &tmp210);
  transpose_alloc_real_array(&tmp210, &tmp211);
  real_array_create(&tmp212, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp212, ((modelica_integer) 2) - ndims_base_array(&tmp212), &tmp213);
  real_array_create(&tmp214, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp214, ((modelica_integer) 2) - ndims_base_array(&tmp214), &tmp215);
  transpose_alloc_real_array(&tmp215, &tmp216);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5323]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp188, tmp191), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp193, tmp196), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3166]] /* vehicle.hubRL.bearingFrame.R.T[1,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp198, tmp201), 0, 1) + ((data->simulationInfo->realParameter[3740] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp203, tmp206), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3169]] /* vehicle.hubRL.bearingFrame.R.T[2,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp208, tmp211), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp213, tmp216), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3739] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3172]] /* vehicle.hubRL.bearingFrame.R.T[3,3] variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7499(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7500(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7487(DATA *data, threadData_t *threadData);


/*
equation index: 3282
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.frame_a.r_0[2] = vehicle.rearSuspension.cornerL.jointUSR.frame_ia.r_0[2] + (-0.13) * vehicle.rearSuspension.cornerL.upright.frame_a.R.T[2,2] + 0.2 * vehicle.rearSuspension.cornerL.upright.frame_a.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3282};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3947]] /* vehicle.rearSuspension.cornerL.upright.frame_a.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3301]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_ia.r_0[2] DUMMY_STATE */) + (-0.13) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3938]] /* vehicle.rearSuspension.cornerL.upright.frame_a.R.T[2,2] variable */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3941]] /* vehicle.rearSuspension.cornerL.upright.frame_a.R.T[3,2] variable */));
  TRACE_POP
}

/*
equation index: 3283
type: SIMPLE_ASSIGN
vehicle.wheelRL.contactPatch.frame_a.r_0[2] = vehicle.rearSuspension.cornerL.upright.frame_a.r_0[2]
*/
void AlyssaVehicle_eqFunction_3283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5274]] /* vehicle.wheelRL.contactPatch.frame_a.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3947]] /* vehicle.rearSuspension.cornerL.upright.frame_a.r_0[2] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7492(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7491(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7490(DATA *data, threadData_t *threadData);


/*
equation index: 3287
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,2] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[1,2] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[2,2] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3287};
  real_array tmp217;
  real_array tmp218;
  real_array tmp219;
  real_array tmp220;
  real_array tmp221;
  real_array tmp222;
  real_array tmp223;
  real_array tmp224;
  real_array tmp225;
  real_array tmp226;
  real_array tmp227;
  real_array tmp228;
  real_array tmp229;
  real_array tmp230;
  real_array tmp231;
  real_array tmp232;
  real_array tmp233;
  real_array tmp234;
  real_array tmp235;
  real_array tmp236;
  real_array tmp237;
  real_array tmp238;
  real_array tmp239;
  real_array tmp240;
  real_array tmp241;
  real_array tmp242;
  real_array tmp243;
  real_array tmp244;
  real_array tmp245;
  real_array tmp246;
  real_array_create(&tmp217, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp217, ((modelica_integer) 2) - ndims_base_array(&tmp217), &tmp218);
  real_array_create(&tmp219, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp219, ((modelica_integer) 2) - ndims_base_array(&tmp219), &tmp220);
  transpose_alloc_real_array(&tmp220, &tmp221);
  real_array_create(&tmp222, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp222, ((modelica_integer) 2) - ndims_base_array(&tmp222), &tmp223);
  real_array_create(&tmp224, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp224, ((modelica_integer) 2) - ndims_base_array(&tmp224), &tmp225);
  transpose_alloc_real_array(&tmp225, &tmp226);
  real_array_create(&tmp227, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp227, ((modelica_integer) 2) - ndims_base_array(&tmp227), &tmp228);
  real_array_create(&tmp229, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp229, ((modelica_integer) 2) - ndims_base_array(&tmp229), &tmp230);
  transpose_alloc_real_array(&tmp230, &tmp231);
  real_array_create(&tmp232, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp232, ((modelica_integer) 2) - ndims_base_array(&tmp232), &tmp233);
  real_array_create(&tmp234, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp234, ((modelica_integer) 2) - ndims_base_array(&tmp234), &tmp235);
  transpose_alloc_real_array(&tmp235, &tmp236);
  real_array_create(&tmp237, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp237, ((modelica_integer) 2) - ndims_base_array(&tmp237), &tmp238);
  real_array_create(&tmp239, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp239, ((modelica_integer) 2) - ndims_base_array(&tmp239), &tmp240);
  transpose_alloc_real_array(&tmp240, &tmp241);
  real_array_create(&tmp242, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp242, ((modelica_integer) 2) - ndims_base_array(&tmp242), &tmp243);
  real_array_create(&tmp244, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp244, ((modelica_integer) 2) - ndims_base_array(&tmp244), &tmp245);
  transpose_alloc_real_array(&tmp245, &tmp246);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5328]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp218, tmp221), 2, 0) + ((data->simulationInfo->realParameter[3739] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp223, tmp226), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3165]] /* vehicle.hubRL.bearingFrame.R.T[1,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp228, tmp231), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp233, tmp236), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3168]] /* vehicle.hubRL.bearingFrame.R.T[2,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp238, tmp241), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp243, tmp246), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3171]] /* vehicle.hubRL.bearingFrame.R.T[3,2] variable */));
  TRACE_POP
}

/*
equation index: 3288
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,2] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[1,2] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[2,2] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3288};
  real_array tmp247;
  real_array tmp248;
  real_array tmp249;
  real_array tmp250;
  real_array tmp251;
  real_array tmp252;
  real_array tmp253;
  real_array tmp254;
  real_array tmp255;
  real_array tmp256;
  real_array tmp257;
  real_array tmp258;
  real_array tmp259;
  real_array tmp260;
  real_array tmp261;
  real_array tmp262;
  real_array tmp263;
  real_array tmp264;
  real_array tmp265;
  real_array tmp266;
  real_array tmp267;
  real_array tmp268;
  real_array tmp269;
  real_array tmp270;
  real_array tmp271;
  real_array tmp272;
  real_array tmp273;
  real_array tmp274;
  real_array tmp275;
  real_array tmp276;
  real_array_create(&tmp247, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp247, ((modelica_integer) 2) - ndims_base_array(&tmp247), &tmp248);
  real_array_create(&tmp249, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp249, ((modelica_integer) 2) - ndims_base_array(&tmp249), &tmp250);
  transpose_alloc_real_array(&tmp250, &tmp251);
  real_array_create(&tmp252, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp252, ((modelica_integer) 2) - ndims_base_array(&tmp252), &tmp253);
  real_array_create(&tmp254, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp254, ((modelica_integer) 2) - ndims_base_array(&tmp254), &tmp255);
  transpose_alloc_real_array(&tmp255, &tmp256);
  real_array_create(&tmp257, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp257, ((modelica_integer) 2) - ndims_base_array(&tmp257), &tmp258);
  real_array_create(&tmp259, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp259, ((modelica_integer) 2) - ndims_base_array(&tmp259), &tmp260);
  transpose_alloc_real_array(&tmp260, &tmp261);
  real_array_create(&tmp262, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp262, ((modelica_integer) 2) - ndims_base_array(&tmp262), &tmp263);
  real_array_create(&tmp264, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp264, ((modelica_integer) 2) - ndims_base_array(&tmp264), &tmp265);
  transpose_alloc_real_array(&tmp265, &tmp266);
  real_array_create(&tmp267, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp267, ((modelica_integer) 2) - ndims_base_array(&tmp267), &tmp268);
  real_array_create(&tmp269, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp269, ((modelica_integer) 2) - ndims_base_array(&tmp269), &tmp270);
  transpose_alloc_real_array(&tmp270, &tmp271);
  real_array_create(&tmp272, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp272, ((modelica_integer) 2) - ndims_base_array(&tmp272), &tmp273);
  real_array_create(&tmp274, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp274, ((modelica_integer) 2) - ndims_base_array(&tmp274), &tmp275);
  transpose_alloc_real_array(&tmp275, &tmp276);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5325]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp248, tmp251), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp253, tmp256), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3740] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3165]] /* vehicle.hubRL.bearingFrame.R.T[1,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp258, tmp261), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp263, tmp266), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3168]] /* vehicle.hubRL.bearingFrame.R.T[2,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp268, tmp271), 1, 2) + ((data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp273, tmp276), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3171]] /* vehicle.hubRL.bearingFrame.R.T[3,2] variable */));
  TRACE_POP
}

/*
equation index: 3289
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,2] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[1,2] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[2,2] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3289};
  real_array tmp277;
  real_array tmp278;
  real_array tmp279;
  real_array tmp280;
  real_array tmp281;
  real_array tmp282;
  real_array tmp283;
  real_array tmp284;
  real_array tmp285;
  real_array tmp286;
  real_array tmp287;
  real_array tmp288;
  real_array tmp289;
  real_array tmp290;
  real_array tmp291;
  real_array tmp292;
  real_array tmp293;
  real_array tmp294;
  real_array tmp295;
  real_array tmp296;
  real_array tmp297;
  real_array tmp298;
  real_array tmp299;
  real_array tmp300;
  real_array tmp301;
  real_array tmp302;
  real_array tmp303;
  real_array tmp304;
  real_array tmp305;
  real_array tmp306;
  real_array_create(&tmp277, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp277, ((modelica_integer) 2) - ndims_base_array(&tmp277), &tmp278);
  real_array_create(&tmp279, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp279, ((modelica_integer) 2) - ndims_base_array(&tmp279), &tmp280);
  transpose_alloc_real_array(&tmp280, &tmp281);
  real_array_create(&tmp282, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp282, ((modelica_integer) 2) - ndims_base_array(&tmp282), &tmp283);
  real_array_create(&tmp284, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp284, ((modelica_integer) 2) - ndims_base_array(&tmp284), &tmp285);
  transpose_alloc_real_array(&tmp285, &tmp286);
  real_array_create(&tmp287, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp287, ((modelica_integer) 2) - ndims_base_array(&tmp287), &tmp288);
  real_array_create(&tmp289, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp289, ((modelica_integer) 2) - ndims_base_array(&tmp289), &tmp290);
  transpose_alloc_real_array(&tmp290, &tmp291);
  real_array_create(&tmp292, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp292, ((modelica_integer) 2) - ndims_base_array(&tmp292), &tmp293);
  real_array_create(&tmp294, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp294, ((modelica_integer) 2) - ndims_base_array(&tmp294), &tmp295);
  transpose_alloc_real_array(&tmp295, &tmp296);
  real_array_create(&tmp297, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp297, ((modelica_integer) 2) - ndims_base_array(&tmp297), &tmp298);
  real_array_create(&tmp299, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp299, ((modelica_integer) 2) - ndims_base_array(&tmp299), &tmp300);
  transpose_alloc_real_array(&tmp300, &tmp301);
  real_array_create(&tmp302, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp302, ((modelica_integer) 2) - ndims_base_array(&tmp302), &tmp303);
  real_array_create(&tmp304, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp304, ((modelica_integer) 2) - ndims_base_array(&tmp304), &tmp305);
  transpose_alloc_real_array(&tmp305, &tmp306);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5322]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp278, tmp281), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp283, tmp286), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3165]] /* vehicle.hubRL.bearingFrame.R.T[1,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp288, tmp291), 0, 1) + ((data->simulationInfo->realParameter[3740] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp293, tmp296), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3168]] /* vehicle.hubRL.bearingFrame.R.T[2,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp298, tmp301), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp303, tmp306), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3739] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3171]] /* vehicle.hubRL.bearingFrame.R.T[3,2] variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7488(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7489(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7479(DATA *data, threadData_t *threadData);


/*
equation index: 3293
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.frame_a.r_0[1] = vehicle.rearSuspension.cornerL.jointUSR.frame_ia.r_0[1] + (-0.13) * vehicle.rearSuspension.cornerL.upright.frame_a.R.T[2,1] + 0.2 * vehicle.rearSuspension.cornerL.upright.frame_a.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3293};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3946]] /* vehicle.rearSuspension.cornerL.upright.frame_a.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3300]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_ia.r_0[1] DUMMY_STATE */) + (-0.13) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3937]] /* vehicle.rearSuspension.cornerL.upright.frame_a.R.T[2,1] variable */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3940]] /* vehicle.rearSuspension.cornerL.upright.frame_a.R.T[3,1] variable */));
  TRACE_POP
}

/*
equation index: 3294
type: SIMPLE_ASSIGN
vehicle.wheelRL.contactPatch.frame_a.r_0[1] = vehicle.rearSuspension.cornerL.upright.frame_a.r_0[1]
*/
void AlyssaVehicle_eqFunction_3294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3294};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5273]] /* vehicle.wheelRL.contactPatch.frame_a.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3946]] /* vehicle.rearSuspension.cornerL.upright.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7530(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7529(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7528(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7484(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7526(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7525(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7524(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7483(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7521(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7520(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7519(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7482(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7517(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7516(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7515(DATA *data, threadData_t *threadData);


/*
equation index: 3310
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,1] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[1,1] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[2,1] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3310};
  real_array tmp307;
  real_array tmp308;
  real_array tmp309;
  real_array tmp310;
  real_array tmp311;
  real_array tmp312;
  real_array tmp313;
  real_array tmp314;
  real_array tmp315;
  real_array tmp316;
  real_array tmp317;
  real_array tmp318;
  real_array tmp319;
  real_array tmp320;
  real_array tmp321;
  real_array tmp322;
  real_array tmp323;
  real_array tmp324;
  real_array tmp325;
  real_array tmp326;
  real_array tmp327;
  real_array tmp328;
  real_array tmp329;
  real_array tmp330;
  real_array tmp331;
  real_array tmp332;
  real_array tmp333;
  real_array tmp334;
  real_array tmp335;
  real_array tmp336;
  real_array_create(&tmp307, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp307, ((modelica_integer) 2) - ndims_base_array(&tmp307), &tmp308);
  real_array_create(&tmp309, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp309, ((modelica_integer) 2) - ndims_base_array(&tmp309), &tmp310);
  transpose_alloc_real_array(&tmp310, &tmp311);
  real_array_create(&tmp312, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp312, ((modelica_integer) 2) - ndims_base_array(&tmp312), &tmp313);
  real_array_create(&tmp314, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp314, ((modelica_integer) 2) - ndims_base_array(&tmp314), &tmp315);
  transpose_alloc_real_array(&tmp315, &tmp316);
  real_array_create(&tmp317, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp317, ((modelica_integer) 2) - ndims_base_array(&tmp317), &tmp318);
  real_array_create(&tmp319, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp319, ((modelica_integer) 2) - ndims_base_array(&tmp319), &tmp320);
  transpose_alloc_real_array(&tmp320, &tmp321);
  real_array_create(&tmp322, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp322, ((modelica_integer) 2) - ndims_base_array(&tmp322), &tmp323);
  real_array_create(&tmp324, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp324, ((modelica_integer) 2) - ndims_base_array(&tmp324), &tmp325);
  transpose_alloc_real_array(&tmp325, &tmp326);
  real_array_create(&tmp327, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp327, ((modelica_integer) 2) - ndims_base_array(&tmp327), &tmp328);
  real_array_create(&tmp329, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp329, ((modelica_integer) 2) - ndims_base_array(&tmp329), &tmp330);
  transpose_alloc_real_array(&tmp330, &tmp331);
  real_array_create(&tmp332, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp332, ((modelica_integer) 2) - ndims_base_array(&tmp332), &tmp333);
  real_array_create(&tmp334, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp334, ((modelica_integer) 2) - ndims_base_array(&tmp334), &tmp335);
  transpose_alloc_real_array(&tmp335, &tmp336);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5327]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp308, tmp311), 2, 0) + ((data->simulationInfo->realParameter[3739] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp313, tmp316), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3164]] /* vehicle.hubRL.bearingFrame.R.T[1,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp318, tmp321), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp323, tmp326), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3167]] /* vehicle.hubRL.bearingFrame.R.T[2,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp328, tmp331), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp333, tmp336), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3170]] /* vehicle.hubRL.bearingFrame.R.T[3,1] variable */));
  TRACE_POP
}

/*
equation index: 3311
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,1] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[1,1] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[2,1] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3311};
  real_array tmp337;
  real_array tmp338;
  real_array tmp339;
  real_array tmp340;
  real_array tmp341;
  real_array tmp342;
  real_array tmp343;
  real_array tmp344;
  real_array tmp345;
  real_array tmp346;
  real_array tmp347;
  real_array tmp348;
  real_array tmp349;
  real_array tmp350;
  real_array tmp351;
  real_array tmp352;
  real_array tmp353;
  real_array tmp354;
  real_array tmp355;
  real_array tmp356;
  real_array tmp357;
  real_array tmp358;
  real_array tmp359;
  real_array tmp360;
  real_array tmp361;
  real_array tmp362;
  real_array tmp363;
  real_array tmp364;
  real_array tmp365;
  real_array tmp366;
  real_array_create(&tmp337, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp337, ((modelica_integer) 2) - ndims_base_array(&tmp337), &tmp338);
  real_array_create(&tmp339, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp339, ((modelica_integer) 2) - ndims_base_array(&tmp339), &tmp340);
  transpose_alloc_real_array(&tmp340, &tmp341);
  real_array_create(&tmp342, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp342, ((modelica_integer) 2) - ndims_base_array(&tmp342), &tmp343);
  real_array_create(&tmp344, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp344, ((modelica_integer) 2) - ndims_base_array(&tmp344), &tmp345);
  transpose_alloc_real_array(&tmp345, &tmp346);
  real_array_create(&tmp347, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp347, ((modelica_integer) 2) - ndims_base_array(&tmp347), &tmp348);
  real_array_create(&tmp349, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp349, ((modelica_integer) 2) - ndims_base_array(&tmp349), &tmp350);
  transpose_alloc_real_array(&tmp350, &tmp351);
  real_array_create(&tmp352, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp352, ((modelica_integer) 2) - ndims_base_array(&tmp352), &tmp353);
  real_array_create(&tmp354, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp354, ((modelica_integer) 2) - ndims_base_array(&tmp354), &tmp355);
  transpose_alloc_real_array(&tmp355, &tmp356);
  real_array_create(&tmp357, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp357, ((modelica_integer) 2) - ndims_base_array(&tmp357), &tmp358);
  real_array_create(&tmp359, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp359, ((modelica_integer) 2) - ndims_base_array(&tmp359), &tmp360);
  transpose_alloc_real_array(&tmp360, &tmp361);
  real_array_create(&tmp362, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp362, ((modelica_integer) 2) - ndims_base_array(&tmp362), &tmp363);
  real_array_create(&tmp364, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp364, ((modelica_integer) 2) - ndims_base_array(&tmp364), &tmp365);
  transpose_alloc_real_array(&tmp365, &tmp366);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5324]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp338, tmp341), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp343, tmp346), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3740] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3164]] /* vehicle.hubRL.bearingFrame.R.T[1,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp348, tmp351), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp353, tmp356), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3167]] /* vehicle.hubRL.bearingFrame.R.T[2,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp358, tmp361), 1, 2) + ((data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp363, tmp366), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3170]] /* vehicle.hubRL.bearingFrame.R.T[3,1] variable */));
  TRACE_POP
}

/*
equation index: 3312
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,1] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[1,1] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[2,1] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3312};
  real_array tmp367;
  real_array tmp368;
  real_array tmp369;
  real_array tmp370;
  real_array tmp371;
  real_array tmp372;
  real_array tmp373;
  real_array tmp374;
  real_array tmp375;
  real_array tmp376;
  real_array tmp377;
  real_array tmp378;
  real_array tmp379;
  real_array tmp380;
  real_array tmp381;
  real_array tmp382;
  real_array tmp383;
  real_array tmp384;
  real_array tmp385;
  real_array tmp386;
  real_array tmp387;
  real_array tmp388;
  real_array tmp389;
  real_array tmp390;
  real_array tmp391;
  real_array tmp392;
  real_array tmp393;
  real_array tmp394;
  real_array tmp395;
  real_array tmp396;
  real_array_create(&tmp367, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp367, ((modelica_integer) 2) - ndims_base_array(&tmp367), &tmp368);
  real_array_create(&tmp369, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp369, ((modelica_integer) 2) - ndims_base_array(&tmp369), &tmp370);
  transpose_alloc_real_array(&tmp370, &tmp371);
  real_array_create(&tmp372, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp372, ((modelica_integer) 2) - ndims_base_array(&tmp372), &tmp373);
  real_array_create(&tmp374, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp374, ((modelica_integer) 2) - ndims_base_array(&tmp374), &tmp375);
  transpose_alloc_real_array(&tmp375, &tmp376);
  real_array_create(&tmp377, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp377, ((modelica_integer) 2) - ndims_base_array(&tmp377), &tmp378);
  real_array_create(&tmp379, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp379, ((modelica_integer) 2) - ndims_base_array(&tmp379), &tmp380);
  transpose_alloc_real_array(&tmp380, &tmp381);
  real_array_create(&tmp382, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp382, ((modelica_integer) 2) - ndims_base_array(&tmp382), &tmp383);
  real_array_create(&tmp384, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp384, ((modelica_integer) 2) - ndims_base_array(&tmp384), &tmp385);
  transpose_alloc_real_array(&tmp385, &tmp386);
  real_array_create(&tmp387, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp387, ((modelica_integer) 2) - ndims_base_array(&tmp387), &tmp388);
  real_array_create(&tmp389, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp389, ((modelica_integer) 2) - ndims_base_array(&tmp389), &tmp390);
  transpose_alloc_real_array(&tmp390, &tmp391);
  real_array_create(&tmp392, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp392, ((modelica_integer) 2) - ndims_base_array(&tmp392), &tmp393);
  real_array_create(&tmp394, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp394, ((modelica_integer) 2) - ndims_base_array(&tmp394), &tmp395);
  transpose_alloc_real_array(&tmp395, &tmp396);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5321]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp368, tmp371), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp373, tmp376), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3164]] /* vehicle.hubRL.bearingFrame.R.T[1,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp378, tmp381), 0, 1) + ((data->simulationInfo->realParameter[3740] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp383, tmp386), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3167]] /* vehicle.hubRL.bearingFrame.R.T[2,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp388, tmp391), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp393, tmp396), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3739] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3170]] /* vehicle.hubRL.bearingFrame.R.T[3,1] variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7480(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7481(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7509(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7510(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7512(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7511(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7505(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7506(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7508(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7507(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7501(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7502(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7513(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7504(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7503(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7495(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7618(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7620(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7622(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7629(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7621(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7630(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7660(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7661(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7654(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7655(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7651(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7652(DATA *data, threadData_t *threadData);


/*
equation index: 3341
type: LINEAR

<var>vehicle.rearSuspension.cornerL.wheelAngles.angles[3]</var>
<var>vehicle.rearSuspension.cornerL.camber</var>
<var>vehicle.rearSuspension.cornerL.toe</var>
<row>
  <cell>Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(vehicle.rearSuspension.cornerL.wheelAngles.R_rel, {3, 1, 2}, vehicle.rearSuspension.cornerL.wheelAngles.guessAngle1)[1]</cell>
  <cell>Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(vehicle.rearSuspension.cornerL.wheelAngles.R_rel, {3, 1, 2}, vehicle.rearSuspension.cornerL.wheelAngles.guessAngle1)[2]</cell>
  <cell>Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(vehicle.rearSuspension.cornerL.wheelAngles.R_rel, {3, 1, 2}, vehicle.rearSuspension.cornerL.wheelAngles.guessAngle1)[3]</cell>
</row>
<matrix>
  <cell row="0" col="2">
    <residual>1.0</residual>
  </cell><cell row="1" col="1">
    <residual>-1.0</residual>
  </cell><cell row="2" col="0">
    <residual>1.0</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void AlyssaVehicle_eqFunction_3341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3341};
  /* Linear equation system */
  int retValue;
  double aux_x[3] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3998]] /* vehicle.rearSuspension.cornerL.wheelAngles.angles[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3192]] /* vehicle.rearSuspension.cornerL.camber variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3846]] /* vehicle.rearSuspension.cornerL.toe variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 3341 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 4, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3341};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 3341 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3998]] /* vehicle.rearSuspension.cornerL.wheelAngles.angles[3] variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3192]] /* vehicle.rearSuspension.cornerL.camber variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3846]] /* vehicle.rearSuspension.cornerL.toe variable */) = aux_x[2];

  TRACE_POP
}

/*
equation index: 3342
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[3] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[1] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[2] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[3]
*/
void AlyssaVehicle_eqFunction_3342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3342};
  real_array tmp397;
  real_array tmp398;
  real_array tmp399;
  real_array tmp400;
  real_array tmp401;
  real_array tmp402;
  real_array tmp403;
  real_array tmp404;
  real_array tmp405;
  real_array tmp406;
  real_array tmp407;
  real_array tmp408;
  real_array tmp409;
  real_array tmp410;
  real_array tmp411;
  real_array tmp412;
  real_array tmp413;
  real_array tmp414;
  real_array tmp415;
  real_array tmp416;
  real_array tmp417;
  real_array tmp418;
  real_array tmp419;
  real_array tmp420;
  real_array tmp421;
  real_array tmp422;
  real_array tmp423;
  real_array tmp424;
  real_array tmp425;
  real_array tmp426;
  real_array_create(&tmp397, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp397, ((modelica_integer) 2) - ndims_base_array(&tmp397), &tmp398);
  real_array_create(&tmp399, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp399, ((modelica_integer) 2) - ndims_base_array(&tmp399), &tmp400);
  transpose_alloc_real_array(&tmp400, &tmp401);
  real_array_create(&tmp402, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp402, ((modelica_integer) 2) - ndims_base_array(&tmp402), &tmp403);
  real_array_create(&tmp404, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp404, ((modelica_integer) 2) - ndims_base_array(&tmp404), &tmp405);
  transpose_alloc_real_array(&tmp405, &tmp406);
  real_array_create(&tmp407, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp407, ((modelica_integer) 2) - ndims_base_array(&tmp407), &tmp408);
  real_array_create(&tmp409, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp409, ((modelica_integer) 2) - ndims_base_array(&tmp409), &tmp410);
  transpose_alloc_real_array(&tmp410, &tmp411);
  real_array_create(&tmp412, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp412, ((modelica_integer) 2) - ndims_base_array(&tmp412), &tmp413);
  real_array_create(&tmp414, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp414, ((modelica_integer) 2) - ndims_base_array(&tmp414), &tmp415);
  transpose_alloc_real_array(&tmp415, &tmp416);
  real_array_create(&tmp417, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp417, ((modelica_integer) 2) - ndims_base_array(&tmp417), &tmp418);
  real_array_create(&tmp419, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp419, ((modelica_integer) 2) - ndims_base_array(&tmp419), &tmp420);
  transpose_alloc_real_array(&tmp420, &tmp421);
  real_array_create(&tmp422, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp422, ((modelica_integer) 2) - ndims_base_array(&tmp422), &tmp423);
  real_array_create(&tmp424, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp424, ((modelica_integer) 2) - ndims_base_array(&tmp424), &tmp425);
  transpose_alloc_real_array(&tmp425, &tmp426);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5332]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp398, tmp401), 2, 0) + ((data->simulationInfo->realParameter[3739] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp403, tmp406), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5349]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp408, tmp411), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp413, tmp416), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5350]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp418, tmp421), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp423, tmp426), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5351]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3343
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[2] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[1] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[2] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[3]
*/
void AlyssaVehicle_eqFunction_3343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3343};
  real_array tmp427;
  real_array tmp428;
  real_array tmp429;
  real_array tmp430;
  real_array tmp431;
  real_array tmp432;
  real_array tmp433;
  real_array tmp434;
  real_array tmp435;
  real_array tmp436;
  real_array tmp437;
  real_array tmp438;
  real_array tmp439;
  real_array tmp440;
  real_array tmp441;
  real_array tmp442;
  real_array tmp443;
  real_array tmp444;
  real_array tmp445;
  real_array tmp446;
  real_array tmp447;
  real_array tmp448;
  real_array tmp449;
  real_array tmp450;
  real_array tmp451;
  real_array tmp452;
  real_array tmp453;
  real_array tmp454;
  real_array tmp455;
  real_array tmp456;
  real_array_create(&tmp427, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp427, ((modelica_integer) 2) - ndims_base_array(&tmp427), &tmp428);
  real_array_create(&tmp429, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp429, ((modelica_integer) 2) - ndims_base_array(&tmp429), &tmp430);
  transpose_alloc_real_array(&tmp430, &tmp431);
  real_array_create(&tmp432, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp432, ((modelica_integer) 2) - ndims_base_array(&tmp432), &tmp433);
  real_array_create(&tmp434, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp434, ((modelica_integer) 2) - ndims_base_array(&tmp434), &tmp435);
  transpose_alloc_real_array(&tmp435, &tmp436);
  real_array_create(&tmp437, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp437, ((modelica_integer) 2) - ndims_base_array(&tmp437), &tmp438);
  real_array_create(&tmp439, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp439, ((modelica_integer) 2) - ndims_base_array(&tmp439), &tmp440);
  transpose_alloc_real_array(&tmp440, &tmp441);
  real_array_create(&tmp442, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp442, ((modelica_integer) 2) - ndims_base_array(&tmp442), &tmp443);
  real_array_create(&tmp444, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp444, ((modelica_integer) 2) - ndims_base_array(&tmp444), &tmp445);
  transpose_alloc_real_array(&tmp445, &tmp446);
  real_array_create(&tmp447, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp447, ((modelica_integer) 2) - ndims_base_array(&tmp447), &tmp448);
  real_array_create(&tmp449, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp449, ((modelica_integer) 2) - ndims_base_array(&tmp449), &tmp450);
  transpose_alloc_real_array(&tmp450, &tmp451);
  real_array_create(&tmp452, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp452, ((modelica_integer) 2) - ndims_base_array(&tmp452), &tmp453);
  real_array_create(&tmp454, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp454, ((modelica_integer) 2) - ndims_base_array(&tmp454), &tmp455);
  transpose_alloc_real_array(&tmp455, &tmp456);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5331]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp428, tmp431), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp433, tmp436), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3740] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5349]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp438, tmp441), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp443, tmp446), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5350]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp448, tmp451), 1, 2) + ((data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp453, tmp456), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5351]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3344
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[1] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[1] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[2] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[3]
*/
void AlyssaVehicle_eqFunction_3344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3344};
  real_array tmp457;
  real_array tmp458;
  real_array tmp459;
  real_array tmp460;
  real_array tmp461;
  real_array tmp462;
  real_array tmp463;
  real_array tmp464;
  real_array tmp465;
  real_array tmp466;
  real_array tmp467;
  real_array tmp468;
  real_array tmp469;
  real_array tmp470;
  real_array tmp471;
  real_array tmp472;
  real_array tmp473;
  real_array tmp474;
  real_array tmp475;
  real_array tmp476;
  real_array tmp477;
  real_array tmp478;
  real_array tmp479;
  real_array tmp480;
  real_array tmp481;
  real_array tmp482;
  real_array tmp483;
  real_array tmp484;
  real_array tmp485;
  real_array tmp486;
  real_array_create(&tmp457, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp457, ((modelica_integer) 2) - ndims_base_array(&tmp457), &tmp458);
  real_array_create(&tmp459, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp459, ((modelica_integer) 2) - ndims_base_array(&tmp459), &tmp460);
  transpose_alloc_real_array(&tmp460, &tmp461);
  real_array_create(&tmp462, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp462, ((modelica_integer) 2) - ndims_base_array(&tmp462), &tmp463);
  real_array_create(&tmp464, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp464, ((modelica_integer) 2) - ndims_base_array(&tmp464), &tmp465);
  transpose_alloc_real_array(&tmp465, &tmp466);
  real_array_create(&tmp467, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp467, ((modelica_integer) 2) - ndims_base_array(&tmp467), &tmp468);
  real_array_create(&tmp469, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp469, ((modelica_integer) 2) - ndims_base_array(&tmp469), &tmp470);
  transpose_alloc_real_array(&tmp470, &tmp471);
  real_array_create(&tmp472, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp472, ((modelica_integer) 2) - ndims_base_array(&tmp472), &tmp473);
  real_array_create(&tmp474, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp474, ((modelica_integer) 2) - ndims_base_array(&tmp474), &tmp475);
  transpose_alloc_real_array(&tmp475, &tmp476);
  real_array_create(&tmp477, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp477, ((modelica_integer) 2) - ndims_base_array(&tmp477), &tmp478);
  real_array_create(&tmp479, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp479, ((modelica_integer) 2) - ndims_base_array(&tmp479), &tmp480);
  transpose_alloc_real_array(&tmp480, &tmp481);
  real_array_create(&tmp482, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp482, ((modelica_integer) 2) - ndims_base_array(&tmp482), &tmp483);
  real_array_create(&tmp484, ((modelica_real*)&((&data->simulationInfo->realParameter[3738] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp484, ((modelica_integer) 2) - ndims_base_array(&tmp484), &tmp485);
  transpose_alloc_real_array(&tmp485, &tmp486);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5330]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp458, tmp461), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp463, tmp466), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5349]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp468, tmp471), 0, 1) + ((data->simulationInfo->realParameter[3740] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp473, tmp476), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5350]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp478, tmp481), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp483, tmp486), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3739] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5351]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7637(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7650(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7649(DATA *data, threadData_t *threadData);


/*
equation index: 3348
type: SIMPLE_ASSIGN
$DER.vehicle.wheelRL.contactPatch.pen = 0.5 * ($DER.vehicle.wheelRL.contactPatch.frame_a.r_0[3] + (vehicle.wheelRL.contactPatch.r0 + vehicle.wheelRL.contactPatch.frame_a.r_0[3] - road.z0) * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[3] / sqrt((vehicle.wheelRL.contactPatch.r0 + vehicle.wheelRL.contactPatch.frame_a.r_0[3] - road.z0) ^ 2.0 + 1e-12))
*/
void AlyssaVehicle_eqFunction_3348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3348};
  modelica_real tmp487;
  modelica_real tmp488;
  tmp487 = (data->simulationInfo->realParameter[3698] /* vehicle.wheelRL.contactPatch.r0 PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5275]] /* vehicle.wheelRL.contactPatch.frame_a.r_0[3] DUMMY_STATE */) - (data->simulationInfo->realParameter[410] /* road.z0 PARAM */);
  tmp488 = (tmp487 * tmp487) + 1e-12;
  if(!(tmp488 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt((vehicle.wheelRL.contactPatch.r0 + vehicle.wheelRL.contactPatch.frame_a.r_0[3] - road.z0) ^ 2.0 + 1e-12) was %g should be >= 0", tmp488);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* der(vehicle.wheelRL.contactPatch.pen) DUMMY_DER */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[3]) DUMMY_DER */) + ((data->simulationInfo->realParameter[3698] /* vehicle.wheelRL.contactPatch.r0 PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5275]] /* vehicle.wheelRL.contactPatch.frame_a.r_0[3] DUMMY_STATE */) - (data->simulationInfo->realParameter[410] /* road.z0 PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[3]) DUMMY_DER */),sqrt(tmp488),"sqrt((vehicle.wheelRL.contactPatch.r0 + vehicle.wheelRL.contactPatch.frame_a.r_0[3] - road.z0) ^ 2.0 + 1e-12)",equationIndexes)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7642(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7644(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7646(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7647(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7645(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7648(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7634(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7636(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7635(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7631(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7633(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7632(DATA *data, threadData_t *threadData);


/*
equation index: 3361
type: SIMPLE_ASSIGN
vehicle.wheelRL.contactPatch.vC[3] = vehicle.hubRL.bearingFrame.R.T[3,1] * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[1] + vehicle.hubRL.bearingFrame.R.T[3,2] * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[2] + vehicle.hubRL.bearingFrame.R.T[3,3] * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5281]] /* vehicle.wheelRL.contactPatch.vC[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3170]] /* vehicle.hubRL.bearingFrame.R.T[3,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1005]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3171]] /* vehicle.hubRL.bearingFrame.R.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3172]] /* vehicle.hubRL.bearingFrame.R.T[3,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[3]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3362
type: SIMPLE_ASSIGN
vehicle.wheelRL.contactPatch.vHub[2] = vehicle.hubRL.bearingFrame.R.T[2,1] * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[1] + vehicle.hubRL.bearingFrame.R.T[2,2] * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[2] + vehicle.hubRL.bearingFrame.R.T[2,3] * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3362};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5283]] /* vehicle.wheelRL.contactPatch.vHub[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3167]] /* vehicle.hubRL.bearingFrame.R.T[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1005]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3168]] /* vehicle.hubRL.bearingFrame.R.T[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3169]] /* vehicle.hubRL.bearingFrame.R.T[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[3]) DUMMY_DER */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7653(DATA *data, threadData_t *threadData);


/*
equation index: 3364
type: SIMPLE_ASSIGN
vehicle.wheelRL.contactPatch.vHub[1] = vehicle.hubRL.bearingFrame.R.T[1,1] * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[1] + vehicle.hubRL.bearingFrame.R.T[1,2] * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[2] + vehicle.hubRL.bearingFrame.R.T[1,3] * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3364};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5282]] /* vehicle.wheelRL.contactPatch.vHub[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3164]] /* vehicle.hubRL.bearingFrame.R.T[1,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1005]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3165]] /* vehicle.hubRL.bearingFrame.R.T[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3166]] /* vehicle.hubRL.bearingFrame.R.T[1,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[3]) DUMMY_DER */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7656(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7657(DATA *data, threadData_t *threadData);


/*
equation index: 3367
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[3,1] = (-0.222824801502141) * cos(vehicle.rearSuspension.cornerL.tieRod.revolute.angle) * $DER.vehicle.rearSuspension.cornerL.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_3367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* der(vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[3,1]) DUMMY_DER */) = (-0.222824801502141) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3722]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[780]] /* der(vehicle.rearSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3368
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,3] = 0.222824801502141 * cos(vehicle.rearSuspension.cornerL.tieRod.revolute.angle) * $DER.vehicle.rearSuspension.cornerL.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_3368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3368};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* der(vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,3]) DUMMY_DER */) = (0.222824801502141) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3722]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[780]] /* der(vehicle.rearSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3369
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,2] = 0.9748585065718673 * cos(vehicle.rearSuspension.cornerL.tieRod.revolute.angle) * $DER.vehicle.rearSuspension.cornerL.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_3369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3369};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* der(vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,2]) DUMMY_DER */) = (0.9748585065718673) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3722]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[780]] /* der(vehicle.rearSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3370
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,1] = (-sin(vehicle.rearSuspension.cornerL.tieRod.revolute.angle)) * $DER.vehicle.rearSuspension.cornerL.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_3370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3370};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* der(vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,1]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3722]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[780]] /* der(vehicle.rearSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7628(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7627(DATA *data, threadData_t *threadData);


/*
equation index: 3373
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod1.rodLength = 0.3590264614203248
*/
void AlyssaVehicle_eqFunction_3373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3373};
  (data->simulationInfo->realParameter[2714] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.rodLength PARAM */) = 0.3590264614203248;
  TRACE_POP
}

/*
equation index: 3374
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod1.rodShape.length = vehicle.rearSuspension.cornerR.jointUSR.rod1.rodLength
*/
void AlyssaVehicle_eqFunction_3374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3374};
  (data->simulationInfo->realParameter[2716] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.rodShape.length PARAM */) = (data->simulationInfo->realParameter[2714] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 3375
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod1Length = vehicle.rearSuspension.cornerR.jointUSR.rod1.rodLength
*/
void AlyssaVehicle_eqFunction_3375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3375};
  (data->simulationInfo->realParameter[2735] /* vehicle.rearSuspension.cornerR.jointUSR.rod1Length PARAM */) = (data->simulationInfo->realParameter[2714] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 3376
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.revolute.lengthConstraint = vehicle.rearSuspension.cornerR.jointUSR.rod1Length
*/
void AlyssaVehicle_eqFunction_3376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3376};
  (data->simulationInfo->realParameter[2686] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.lengthConstraint PARAM */) = (data->simulationInfo->realParameter[2735] /* vehicle.rearSuspension.cornerR.jointUSR.rod1Length PARAM */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7730(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7731(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7732(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7733(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7907(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7908(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7909(DATA *data, threadData_t *threadData);


/*
equation index: 3384
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.revolute.positiveBranch = AlyssaModel.Experiments.OptimalControlFMU.vehicle.rearSuspension.cornerR.jointUSR.revolute.selectBranch(vehicle.rearSuspension.cornerR.jointUSR.revolute.lengthConstraint, {-1.0, 0.0, 0.0}, 0.017453292519943295 * (vehicle.rearSuspension.cornerR.jointUSR.revolute.phi_offset + vehicle.rearSuspension.cornerR.jointUSR.revolute.phi_guess), vehicle.rearSuspension.cornerR.jointUSR.revolute.r_a, vehicle.rearSuspension.cornerR.jointUSR.revolute.r_b)
*/
void AlyssaVehicle_eqFunction_3384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3384};
  real_array tmp489;
  real_array tmp490;
  real_array_create(&tmp489, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4258]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp490, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4261]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.r_b[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[182] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.positiveBranch PARAM */) = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerR_jointUSR_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[2686] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.lengthConstraint PARAM */), _OMC_LIT22, (0.017453292519943295) * ((data->simulationInfo->realParameter[2691] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[2690] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.phi_guess PARAM */)), tmp489, tmp490);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7735(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7911(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7734(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7736(DATA *data, threadData_t *threadData);


/*
equation index: 3389
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] = sin(vehicle.rearSuspension.cornerR.jointUSR.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3389};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4225]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */) = sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4230]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.angle DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7737(DATA *data, threadData_t *threadData);


/*
equation index: 3391
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,3] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,3] + vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3391};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4451]] /* vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4225]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4226]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3392
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,2] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,2] + vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3392};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4450]] /* vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,2] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4225]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4226]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3393
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,1] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,1] + vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3393};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4449]] /* vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,1] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4225]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4226]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3394
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,3] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,3] - vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3394};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4448]] /* vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4226]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4225]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7750(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7751(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7744(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7778(DATA *data, threadData_t *threadData);


/*
equation index: 3399
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,2] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,2] - vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3399};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4447]] /* vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,2] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4226]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4225]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7747(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7748(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7741(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7742(DATA *data, threadData_t *threadData);


/*
equation index: 3404
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springArm.frame_b.R.w[3] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.vehicleBody.body.w_a[2] + vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.vehicleBody.body.w_a[3]
*/
void AlyssaVehicle_eqFunction_3404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3404};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4454]] /* vehicle.rearSuspension.cornerR.springArm.frame_b.R.w[3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4225]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4226]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3405
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,1] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,1] - vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3405};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4446]] /* vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4226]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4225]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7755(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7756(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7760(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7761(DATA *data, threadData_t *threadData);


/*
equation index: 3410
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.shape_b.length = max(vehicle.rearSuspension.cornerR.coilover.s - vehicle.rearSuspension.cornerR.coilover.length_a, 0.0)
*/
void AlyssaVehicle_eqFunction_3410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3410};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4117]] /* vehicle.rearSuspension.cornerR.coilover.shape_b.length variable */) = fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4090]] /* vehicle.rearSuspension.cornerR.coilover.s DUMMY_STATE */) - (data->simulationInfo->realParameter[2570] /* vehicle.rearSuspension.cornerR.coilover.length_a PARAM */),0.0);
  TRACE_POP
}

/*
equation index: 3411
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.shape_a.length = min(vehicle.rearSuspension.cornerR.coilover.length_a, vehicle.rearSuspension.cornerR.coilover.s)
*/
void AlyssaVehicle_eqFunction_3411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3411};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4106]] /* vehicle.rearSuspension.cornerR.coilover.shape_a.length variable */) = fmin((data->simulationInfo->realParameter[2570] /* vehicle.rearSuspension.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4090]] /* vehicle.rearSuspension.cornerR.coilover.s DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7766(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7765(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7774(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7759(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7764(DATA *data, threadData_t *threadData);


/*
equation index: 3417
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.shape_b.r_shape[3] = vehicle.rearSuspension.cornerR.coilover.e_a[3] * min(vehicle.rearSuspension.cornerR.coilover.length_a, vehicle.rearSuspension.cornerR.coilover.s)
*/
void AlyssaVehicle_eqFunction_3417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3417};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4120]] /* vehicle.rearSuspension.cornerR.coilover.shape_b.r_shape[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4064]] /* vehicle.rearSuspension.cornerR.coilover.e_a[3] variable */)) * (fmin((data->simulationInfo->realParameter[2570] /* vehicle.rearSuspension.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4090]] /* vehicle.rearSuspension.cornerR.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7758(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7763(DATA *data, threadData_t *threadData);


/*
equation index: 3420
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.shape_b.r_shape[2] = vehicle.rearSuspension.cornerR.coilover.e_a[2] * min(vehicle.rearSuspension.cornerR.coilover.length_a, vehicle.rearSuspension.cornerR.coilover.s)
*/
void AlyssaVehicle_eqFunction_3420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3420};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4119]] /* vehicle.rearSuspension.cornerR.coilover.shape_b.r_shape[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4063]] /* vehicle.rearSuspension.cornerR.coilover.e_a[2] variable */)) * (fmin((data->simulationInfo->realParameter[2570] /* vehicle.rearSuspension.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4090]] /* vehicle.rearSuspension.cornerR.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7757(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7762(DATA *data, threadData_t *threadData);


/*
equation index: 3423
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.shape_b.r_shape[1] = vehicle.rearSuspension.cornerR.coilover.e_a[1] * min(vehicle.rearSuspension.cornerR.coilover.length_a, vehicle.rearSuspension.cornerR.coilover.s)
*/
void AlyssaVehicle_eqFunction_3423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3423};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4118]] /* vehicle.rearSuspension.cornerR.coilover.shape_b.r_shape[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4062]] /* vehicle.rearSuspension.cornerR.coilover.e_a[1] variable */)) * (fmin((data->simulationInfo->realParameter[2570] /* vehicle.rearSuspension.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4090]] /* vehicle.rearSuspension.cornerR.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7753(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7754(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7779(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7780(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void AlyssaVehicle_functionInitialEquations_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  AlyssaVehicle_eqFunction_8266(data, threadData);
  AlyssaVehicle_eqFunction_8272(data, threadData);
  AlyssaVehicle_eqFunction_8269(data, threadData);
  AlyssaVehicle_eqFunction_8271(data, threadData);
  AlyssaVehicle_eqFunction_7242(data, threadData);
  AlyssaVehicle_eqFunction_7301(data, threadData);
  AlyssaVehicle_eqFunction_7192(data, threadData);
  AlyssaVehicle_eqFunction_8459(data, threadData);
  AlyssaVehicle_eqFunction_8465(data, threadData);
  AlyssaVehicle_eqFunction_8635(data, threadData);
  AlyssaVehicle_eqFunction_7241(data, threadData);
  AlyssaVehicle_eqFunction_8636(data, threadData);
  AlyssaVehicle_eqFunction_7300(data, threadData);
  AlyssaVehicle_eqFunction_8637(data, threadData);
  AlyssaVehicle_eqFunction_7191(data, threadData);
  AlyssaVehicle_eqFunction_8638(data, threadData);
  AlyssaVehicle_eqFunction_8641(data, threadData);
  AlyssaVehicle_eqFunction_8640(data, threadData);
  AlyssaVehicle_eqFunction_8643(data, threadData);
  AlyssaVehicle_eqFunction_8639(data, threadData);
  AlyssaVehicle_eqFunction_8645(data, threadData);
  AlyssaVehicle_eqFunction_8642(data, threadData);
  AlyssaVehicle_eqFunction_8644(data, threadData);
  AlyssaVehicle_eqFunction_7237(data, threadData);
  AlyssaVehicle_eqFunction_7296(data, threadData);
  AlyssaVehicle_eqFunction_7187(data, threadData);
  AlyssaVehicle_eqFunction_7245(data, threadData);
  AlyssaVehicle_eqFunction_7305(data, threadData);
  AlyssaVehicle_eqFunction_7195(data, threadData);
  AlyssaVehicle_eqFunction_7246(data, threadData);
  AlyssaVehicle_eqFunction_7306(data, threadData);
  AlyssaVehicle_eqFunction_7196(data, threadData);
  AlyssaVehicle_eqFunction_7247(data, threadData);
  AlyssaVehicle_eqFunction_7307(data, threadData);
  AlyssaVehicle_eqFunction_7197(data, threadData);
  AlyssaVehicle_eqFunction_7248(data, threadData);
  AlyssaVehicle_eqFunction_7308(data, threadData);
  AlyssaVehicle_eqFunction_7198(data, threadData);
  AlyssaVehicle_eqFunction_2979(data, threadData);
  AlyssaVehicle_eqFunction_2980(data, threadData);
  AlyssaVehicle_eqFunction_2981(data, threadData);
  AlyssaVehicle_eqFunction_7328(data, threadData);
  AlyssaVehicle_eqFunction_7335(data, threadData);
  AlyssaVehicle_eqFunction_7342(data, threadData);
  AlyssaVehicle_eqFunction_2985(data, threadData);
  AlyssaVehicle_eqFunction_2986(data, threadData);
  AlyssaVehicle_eqFunction_2987(data, threadData);
  AlyssaVehicle_eqFunction_7327(data, threadData);
  AlyssaVehicle_eqFunction_7334(data, threadData);
  AlyssaVehicle_eqFunction_7341(data, threadData);
  AlyssaVehicle_eqFunction_2991(data, threadData);
  AlyssaVehicle_eqFunction_2992(data, threadData);
  AlyssaVehicle_eqFunction_2993(data, threadData);
  AlyssaVehicle_eqFunction_7326(data, threadData);
  AlyssaVehicle_eqFunction_7683(data, threadData);
  AlyssaVehicle_eqFunction_7689(data, threadData);
  AlyssaVehicle_eqFunction_7701(data, threadData);
  AlyssaVehicle_eqFunction_8047(data, threadData);
  AlyssaVehicle_eqFunction_8053(data, threadData);
  AlyssaVehicle_eqFunction_8071(data, threadData);
  AlyssaVehicle_eqFunction_8420(data, threadData);
  AlyssaVehicle_eqFunction_8426(data, threadData);
  AlyssaVehicle_eqFunction_8442(data, threadData);
  AlyssaVehicle_eqFunction_8792(data, threadData);
  AlyssaVehicle_eqFunction_8798(data, threadData);
  AlyssaVehicle_eqFunction_8808(data, threadData);
  AlyssaVehicle_eqFunction_7333(data, threadData);
  AlyssaVehicle_eqFunction_7682(data, threadData);
  AlyssaVehicle_eqFunction_7688(data, threadData);
  AlyssaVehicle_eqFunction_7697(data, threadData);
  AlyssaVehicle_eqFunction_8046(data, threadData);
  AlyssaVehicle_eqFunction_8052(data, threadData);
  AlyssaVehicle_eqFunction_8064(data, threadData);
  AlyssaVehicle_eqFunction_8419(data, threadData);
  AlyssaVehicle_eqFunction_8425(data, threadData);
  AlyssaVehicle_eqFunction_8435(data, threadData);
  AlyssaVehicle_eqFunction_8791(data, threadData);
  AlyssaVehicle_eqFunction_8797(data, threadData);
  AlyssaVehicle_eqFunction_8807(data, threadData);
  AlyssaVehicle_eqFunction_7340(data, threadData);
  AlyssaVehicle_eqFunction_7681(data, threadData);
  AlyssaVehicle_eqFunction_7687(data, threadData);
  AlyssaVehicle_eqFunction_7693(data, threadData);
  AlyssaVehicle_eqFunction_8045(data, threadData);
  AlyssaVehicle_eqFunction_8051(data, threadData);
  AlyssaVehicle_eqFunction_8057(data, threadData);
  AlyssaVehicle_eqFunction_8418(data, threadData);
  AlyssaVehicle_eqFunction_8424(data, threadData);
  AlyssaVehicle_eqFunction_8430(data, threadData);
  AlyssaVehicle_eqFunction_8790(data, threadData);
  AlyssaVehicle_eqFunction_8796(data, threadData);
  AlyssaVehicle_eqFunction_8802(data, threadData);
  AlyssaVehicle_eqFunction_7029(data, threadData);
  AlyssaVehicle_eqFunction_3034(data, threadData);
  AlyssaVehicle_eqFunction_3035(data, threadData);
  AlyssaVehicle_eqFunction_7039(data, threadData);
  AlyssaVehicle_eqFunction_3037(data, threadData);
  AlyssaVehicle_eqFunction_7048(data, threadData);
  AlyssaVehicle_eqFunction_7049(data, threadData);
  AlyssaVehicle_eqFunction_7227(data, threadData);
  AlyssaVehicle_eqFunction_7229(data, threadData);
  AlyssaVehicle_eqFunction_7228(data, threadData);
  AlyssaVehicle_eqFunction_7238(data, threadData);
  AlyssaVehicle_eqFunction_7240(data, threadData);
  AlyssaVehicle_eqFunction_7239(data, threadData);
  AlyssaVehicle_eqFunction_7286(data, threadData);
  AlyssaVehicle_eqFunction_7288(data, threadData);
  AlyssaVehicle_eqFunction_7287(data, threadData);
  AlyssaVehicle_eqFunction_7297(data, threadData);
  AlyssaVehicle_eqFunction_7299(data, threadData);
  AlyssaVehicle_eqFunction_7298(data, threadData);
  AlyssaVehicle_eqFunction_7177(data, threadData);
  AlyssaVehicle_eqFunction_7179(data, threadData);
  AlyssaVehicle_eqFunction_7178(data, threadData);
  AlyssaVehicle_eqFunction_7188(data, threadData);
  AlyssaVehicle_eqFunction_7190(data, threadData);
  AlyssaVehicle_eqFunction_7189(data, threadData);
  AlyssaVehicle_eqFunction_7050(data, threadData);
  AlyssaVehicle_eqFunction_7043(data, threadData);
  AlyssaVehicle_eqFunction_3060(data, threadData);
  AlyssaVehicle_eqFunction_3061(data, threadData);
  AlyssaVehicle_eqFunction_3062(data, threadData);
  AlyssaVehicle_eqFunction_3063(data, threadData);
  AlyssaVehicle_eqFunction_7368(data, threadData);
  AlyssaVehicle_eqFunction_7369(data, threadData);
  AlyssaVehicle_eqFunction_7370(data, threadData);
  AlyssaVehicle_eqFunction_7371(data, threadData);
  AlyssaVehicle_eqFunction_7545(data, threadData);
  AlyssaVehicle_eqFunction_7546(data, threadData);
  AlyssaVehicle_eqFunction_7547(data, threadData);
  AlyssaVehicle_eqFunction_3071(data, threadData);
  AlyssaVehicle_eqFunction_7373(data, threadData);
  AlyssaVehicle_eqFunction_7549(data, threadData);
  AlyssaVehicle_eqFunction_7372(data, threadData);
  AlyssaVehicle_eqFunction_7374(data, threadData);
  AlyssaVehicle_eqFunction_3076(data, threadData);
  AlyssaVehicle_eqFunction_7375(data, threadData);
  AlyssaVehicle_eqFunction_3078(data, threadData);
  AlyssaVehicle_eqFunction_3079(data, threadData);
  AlyssaVehicle_eqFunction_3080(data, threadData);
  AlyssaVehicle_eqFunction_3081(data, threadData);
  AlyssaVehicle_eqFunction_7393(data, threadData);
  AlyssaVehicle_eqFunction_7394(data, threadData);
  AlyssaVehicle_eqFunction_7385(data, threadData);
  AlyssaVehicle_eqFunction_7416(data, threadData);
  AlyssaVehicle_eqFunction_3086(data, threadData);
  AlyssaVehicle_eqFunction_7390(data, threadData);
  AlyssaVehicle_eqFunction_7391(data, threadData);
  AlyssaVehicle_eqFunction_7382(data, threadData);
  AlyssaVehicle_eqFunction_7383(data, threadData);
  AlyssaVehicle_eqFunction_3091(data, threadData);
  AlyssaVehicle_eqFunction_7387(data, threadData);
  AlyssaVehicle_eqFunction_7388(data, threadData);
  AlyssaVehicle_eqFunction_7395(data, threadData);
  AlyssaVehicle_eqFunction_7396(data, threadData);
  AlyssaVehicle_eqFunction_3096(data, threadData);
  AlyssaVehicle_eqFunction_3097(data, threadData);
  AlyssaVehicle_eqFunction_7403(data, threadData);
  AlyssaVehicle_eqFunction_7401(data, threadData);
  AlyssaVehicle_eqFunction_7402(data, threadData);
  AlyssaVehicle_eqFunction_7404(data, threadData);
  AlyssaVehicle_eqFunction_7405(data, threadData);
  AlyssaVehicle_eqFunction_3103(data, threadData);
  AlyssaVehicle_eqFunction_7407(data, threadData);
  AlyssaVehicle_eqFunction_7408(data, threadData);
  AlyssaVehicle_eqFunction_3106(data, threadData);
  AlyssaVehicle_eqFunction_7410(data, threadData);
  AlyssaVehicle_eqFunction_7411(data, threadData);
  AlyssaVehicle_eqFunction_3109(data, threadData);
  AlyssaVehicle_eqFunction_7379(data, threadData);
  AlyssaVehicle_eqFunction_7380(data, threadData);
  AlyssaVehicle_eqFunction_7417(data, threadData);
  AlyssaVehicle_eqFunction_7418(data, threadData);
  AlyssaVehicle_eqFunction_7419(data, threadData);
  AlyssaVehicle_eqFunction_7420(data, threadData);
  AlyssaVehicle_eqFunction_7421(data, threadData);
  AlyssaVehicle_eqFunction_7422(data, threadData);
  AlyssaVehicle_eqFunction_7424(data, threadData);
  AlyssaVehicle_eqFunction_7426(data, threadData);
  AlyssaVehicle_eqFunction_7425(data, threadData);
  AlyssaVehicle_eqFunction_7423(data, threadData);
  AlyssaVehicle_eqFunction_7428(data, threadData);
  AlyssaVehicle_eqFunction_7427(data, threadData);
  AlyssaVehicle_eqFunction_7429(data, threadData);
  AlyssaVehicle_eqFunction_7436(data, threadData);
  AlyssaVehicle_eqFunction_7437(data, threadData);
  AlyssaVehicle_eqFunction_7441(data, threadData);
  AlyssaVehicle_eqFunction_7452(data, threadData);
  AlyssaVehicle_eqFunction_7443(data, threadData);
  AlyssaVehicle_eqFunction_7442(data, threadData);
  AlyssaVehicle_eqFunction_7453(data, threadData);
  AlyssaVehicle_eqFunction_7438(data, threadData);
  AlyssaVehicle_eqFunction_7450(data, threadData);
  AlyssaVehicle_eqFunction_7440(data, threadData);
  AlyssaVehicle_eqFunction_7439(data, threadData);
  AlyssaVehicle_eqFunction_7451(data, threadData);
  AlyssaVehicle_eqFunction_7454(data, threadData);
  AlyssaVehicle_eqFunction_7445(data, threadData);
  AlyssaVehicle_eqFunction_7444(data, threadData);
  AlyssaVehicle_eqFunction_7448(data, threadData);
  AlyssaVehicle_eqFunction_7447(data, threadData);
  AlyssaVehicle_eqFunction_7446(data, threadData);
  AlyssaVehicle_eqFunction_7449(data, threadData);
  AlyssaVehicle_eqFunction_7458(data, threadData);
  AlyssaVehicle_eqFunction_7456(data, threadData);
  AlyssaVehicle_eqFunction_7455(data, threadData);
  AlyssaVehicle_eqFunction_7457(data, threadData);
  AlyssaVehicle_eqFunction_7459(data, threadData);
  AlyssaVehicle_eqFunction_7460(data, threadData);
  AlyssaVehicle_eqFunction_7461(data, threadData);
  AlyssaVehicle_eqFunction_7533(data, threadData);
  AlyssaVehicle_eqFunction_3152(data, threadData);
  AlyssaVehicle_eqFunction_3153(data, threadData);
  AlyssaVehicle_eqFunction_7415(data, threadData);
  AlyssaVehicle_eqFunction_7548(data, threadData);
  AlyssaVehicle_eqFunction_3156(data, threadData);
  AlyssaVehicle_eqFunction_3157(data, threadData);
  AlyssaVehicle_eqFunction_7551(data, threadData);
  AlyssaVehicle_eqFunction_7555(data, threadData);
  AlyssaVehicle_eqFunction_7556(data, threadData);
  AlyssaVehicle_eqFunction_7553(data, threadData);
  AlyssaVehicle_eqFunction_7554(data, threadData);
  AlyssaVehicle_eqFunction_7552(data, threadData);
  AlyssaVehicle_eqFunction_7589(data, threadData);
  AlyssaVehicle_eqFunction_7596(data, threadData);
  AlyssaVehicle_eqFunction_7595(data, threadData);
  AlyssaVehicle_eqFunction_7601(data, threadData);
  AlyssaVehicle_eqFunction_7602(data, threadData);
  AlyssaVehicle_eqFunction_3169(data, threadData);
  AlyssaVehicle_eqFunction_7597(data, threadData);
  AlyssaVehicle_eqFunction_7590(data, threadData);
  AlyssaVehicle_eqFunction_7598(data, threadData);
  AlyssaVehicle_eqFunction_7600(data, threadData);
  AlyssaVehicle_eqFunction_7604(data, threadData);
  AlyssaVehicle_eqFunction_7608(data, threadData);
  AlyssaVehicle_eqFunction_7599(data, threadData);
  AlyssaVehicle_eqFunction_7603(data, threadData);
  AlyssaVehicle_eqFunction_7609(data, threadData);
  AlyssaVehicle_eqFunction_7610(data, threadData);
  AlyssaVehicle_eqFunction_7605(data, threadData);
  AlyssaVehicle_eqFunction_7614(data, threadData);
  AlyssaVehicle_eqFunction_7612(data, threadData);
  AlyssaVehicle_eqFunction_7611(data, threadData);
  AlyssaVehicle_eqFunction_7613(data, threadData);
  AlyssaVehicle_eqFunction_7615(data, threadData);
  AlyssaVehicle_eqFunction_7616(data, threadData);
  AlyssaVehicle_eqFunction_7617(data, threadData);
  AlyssaVehicle_eqFunction_7663(data, threadData);
  AlyssaVehicle_eqFunction_7664(data, threadData);
  AlyssaVehicle_eqFunction_7665(data, threadData);
  AlyssaVehicle_eqFunction_7666(data, threadData);
  AlyssaVehicle_eqFunction_7667(data, threadData);
  AlyssaVehicle_eqFunction_7668(data, threadData);
  AlyssaVehicle_eqFunction_7671(data, threadData);
  AlyssaVehicle_eqFunction_7673(data, threadData);
  AlyssaVehicle_eqFunction_7672(data, threadData);
  AlyssaVehicle_eqFunction_7669(data, threadData);
  AlyssaVehicle_eqFunction_7677(data, threadData);
  AlyssaVehicle_eqFunction_7676(data, threadData);
  AlyssaVehicle_eqFunction_7675(data, threadData);
  AlyssaVehicle_eqFunction_7591(data, threadData);
  AlyssaVehicle_eqFunction_7592(data, threadData);
  AlyssaVehicle_eqFunction_7594(data, threadData);
  AlyssaVehicle_eqFunction_7704(data, threadData);
  AlyssaVehicle_eqFunction_7700(data, threadData);
  AlyssaVehicle_eqFunction_7696(data, threadData);
  AlyssaVehicle_eqFunction_7593(data, threadData);
  AlyssaVehicle_eqFunction_7703(data, threadData);
  AlyssaVehicle_eqFunction_7699(data, threadData);
  AlyssaVehicle_eqFunction_7695(data, threadData);
  AlyssaVehicle_eqFunction_7670(data, threadData);
  AlyssaVehicle_eqFunction_7674(data, threadData);
  AlyssaVehicle_eqFunction_7702(data, threadData);
  AlyssaVehicle_eqFunction_7698(data, threadData);
  AlyssaVehicle_eqFunction_7694(data, threadData);
  AlyssaVehicle_eqFunction_7561(data, threadData);
  AlyssaVehicle_eqFunction_7562(data, threadData);
  AlyssaVehicle_eqFunction_7559(data, threadData);
  AlyssaVehicle_eqFunction_7560(data, threadData);
  AlyssaVehicle_eqFunction_7557(data, threadData);
  AlyssaVehicle_eqFunction_7558(data, threadData);
  AlyssaVehicle_eqFunction_7563(data, threadData);
  AlyssaVehicle_eqFunction_7564(data, threadData);
  AlyssaVehicle_eqFunction_7565(data, threadData);
  AlyssaVehicle_eqFunction_7579(data, threadData);
  AlyssaVehicle_eqFunction_7566(data, threadData);
  AlyssaVehicle_eqFunction_7571(data, threadData);
  AlyssaVehicle_eqFunction_7570(data, threadData);
  AlyssaVehicle_eqFunction_7572(data, threadData);
  AlyssaVehicle_eqFunction_7567(data, threadData);
  AlyssaVehicle_eqFunction_7577(data, threadData);
  AlyssaVehicle_eqFunction_7576(data, threadData);
  AlyssaVehicle_eqFunction_7578(data, threadData);
  AlyssaVehicle_eqFunction_7573(data, threadData);
  AlyssaVehicle_eqFunction_7575(data, threadData);
  AlyssaVehicle_eqFunction_7574(data, threadData);
  AlyssaVehicle_eqFunction_7569(data, threadData);
  AlyssaVehicle_eqFunction_7568(data, threadData);
  AlyssaVehicle_eqFunction_3239(data, threadData);
  AlyssaVehicle_eqFunction_3240(data, threadData);
  AlyssaVehicle_eqFunction_3241(data, threadData);
  AlyssaVehicle_eqFunction_3242(data, threadData);
  AlyssaVehicle_eqFunction_3243(data, threadData);
  AlyssaVehicle_eqFunction_3244(data, threadData);
  AlyssaVehicle_eqFunction_3245(data, threadData);
  AlyssaVehicle_eqFunction_3246(data, threadData);
  AlyssaVehicle_eqFunction_3247(data, threadData);
  AlyssaVehicle_eqFunction_7463(data, threadData);
  AlyssaVehicle_eqFunction_7619(data, threadData);
  AlyssaVehicle_eqFunction_7462(data, threadData);
  AlyssaVehicle_eqFunction_7464(data, threadData);
  AlyssaVehicle_eqFunction_3252(data, threadData);
  AlyssaVehicle_eqFunction_3253(data, threadData);
  AlyssaVehicle_eqFunction_3254(data, threadData);
  AlyssaVehicle_eqFunction_7465(data, threadData);
  AlyssaVehicle_eqFunction_7607(data, threadData);
  AlyssaVehicle_eqFunction_7467(data, threadData);
  AlyssaVehicle_eqFunction_7466(data, threadData);
  AlyssaVehicle_eqFunction_7496(data, threadData);
  AlyssaVehicle_eqFunction_7476(data, threadData);
  AlyssaVehicle_eqFunction_7477(data, threadData);
  AlyssaVehicle_eqFunction_7497(data, threadData);
  AlyssaVehicle_eqFunction_7473(data, threadData);
  AlyssaVehicle_eqFunction_7474(data, threadData);
  AlyssaVehicle_eqFunction_7468(data, threadData);
  AlyssaVehicle_eqFunction_7469(data, threadData);
  AlyssaVehicle_eqFunction_3267(data, threadData);
  AlyssaVehicle_eqFunction_7498(data, threadData);
  AlyssaVehicle_eqFunction_3269(data, threadData);
  AlyssaVehicle_eqFunction_3270(data, threadData);
  AlyssaVehicle_eqFunction_7531(data, threadData);
  AlyssaVehicle_eqFunction_7523(data, threadData);
  AlyssaVehicle_eqFunction_7518(data, threadData);
  AlyssaVehicle_eqFunction_7522(data, threadData);
  AlyssaVehicle_eqFunction_7514(data, threadData);
  AlyssaVehicle_eqFunction_3276(data, threadData);
  AlyssaVehicle_eqFunction_3277(data, threadData);
  AlyssaVehicle_eqFunction_3278(data, threadData);
  AlyssaVehicle_eqFunction_7499(data, threadData);
  AlyssaVehicle_eqFunction_7500(data, threadData);
  AlyssaVehicle_eqFunction_7487(data, threadData);
  AlyssaVehicle_eqFunction_3282(data, threadData);
  AlyssaVehicle_eqFunction_3283(data, threadData);
  AlyssaVehicle_eqFunction_7492(data, threadData);
  AlyssaVehicle_eqFunction_7491(data, threadData);
  AlyssaVehicle_eqFunction_7490(data, threadData);
  AlyssaVehicle_eqFunction_3287(data, threadData);
  AlyssaVehicle_eqFunction_3288(data, threadData);
  AlyssaVehicle_eqFunction_3289(data, threadData);
  AlyssaVehicle_eqFunction_7488(data, threadData);
  AlyssaVehicle_eqFunction_7489(data, threadData);
  AlyssaVehicle_eqFunction_7479(data, threadData);
  AlyssaVehicle_eqFunction_3293(data, threadData);
  AlyssaVehicle_eqFunction_3294(data, threadData);
  AlyssaVehicle_eqFunction_7530(data, threadData);
  AlyssaVehicle_eqFunction_7529(data, threadData);
  AlyssaVehicle_eqFunction_7528(data, threadData);
  AlyssaVehicle_eqFunction_7484(data, threadData);
  AlyssaVehicle_eqFunction_7526(data, threadData);
  AlyssaVehicle_eqFunction_7525(data, threadData);
  AlyssaVehicle_eqFunction_7524(data, threadData);
  AlyssaVehicle_eqFunction_7483(data, threadData);
  AlyssaVehicle_eqFunction_7521(data, threadData);
  AlyssaVehicle_eqFunction_7520(data, threadData);
  AlyssaVehicle_eqFunction_7519(data, threadData);
  AlyssaVehicle_eqFunction_7482(data, threadData);
  AlyssaVehicle_eqFunction_7517(data, threadData);
  AlyssaVehicle_eqFunction_7516(data, threadData);
  AlyssaVehicle_eqFunction_7515(data, threadData);
  AlyssaVehicle_eqFunction_3310(data, threadData);
  AlyssaVehicle_eqFunction_3311(data, threadData);
  AlyssaVehicle_eqFunction_3312(data, threadData);
  AlyssaVehicle_eqFunction_7480(data, threadData);
  AlyssaVehicle_eqFunction_7481(data, threadData);
  AlyssaVehicle_eqFunction_7509(data, threadData);
  AlyssaVehicle_eqFunction_7510(data, threadData);
  AlyssaVehicle_eqFunction_7512(data, threadData);
  AlyssaVehicle_eqFunction_7511(data, threadData);
  AlyssaVehicle_eqFunction_7505(data, threadData);
  AlyssaVehicle_eqFunction_7506(data, threadData);
  AlyssaVehicle_eqFunction_7508(data, threadData);
  AlyssaVehicle_eqFunction_7507(data, threadData);
  AlyssaVehicle_eqFunction_7501(data, threadData);
  AlyssaVehicle_eqFunction_7502(data, threadData);
  AlyssaVehicle_eqFunction_7513(data, threadData);
  AlyssaVehicle_eqFunction_7504(data, threadData);
  AlyssaVehicle_eqFunction_7503(data, threadData);
  AlyssaVehicle_eqFunction_7495(data, threadData);
  AlyssaVehicle_eqFunction_7618(data, threadData);
  AlyssaVehicle_eqFunction_7620(data, threadData);
  AlyssaVehicle_eqFunction_7622(data, threadData);
  AlyssaVehicle_eqFunction_7629(data, threadData);
  AlyssaVehicle_eqFunction_7621(data, threadData);
  AlyssaVehicle_eqFunction_7630(data, threadData);
  AlyssaVehicle_eqFunction_7660(data, threadData);
  AlyssaVehicle_eqFunction_7661(data, threadData);
  AlyssaVehicle_eqFunction_7654(data, threadData);
  AlyssaVehicle_eqFunction_7655(data, threadData);
  AlyssaVehicle_eqFunction_7651(data, threadData);
  AlyssaVehicle_eqFunction_7652(data, threadData);
  AlyssaVehicle_eqFunction_3341(data, threadData);
  AlyssaVehicle_eqFunction_3342(data, threadData);
  AlyssaVehicle_eqFunction_3343(data, threadData);
  AlyssaVehicle_eqFunction_3344(data, threadData);
  AlyssaVehicle_eqFunction_7637(data, threadData);
  AlyssaVehicle_eqFunction_7650(data, threadData);
  AlyssaVehicle_eqFunction_7649(data, threadData);
  AlyssaVehicle_eqFunction_3348(data, threadData);
  AlyssaVehicle_eqFunction_7642(data, threadData);
  AlyssaVehicle_eqFunction_7644(data, threadData);
  AlyssaVehicle_eqFunction_7646(data, threadData);
  AlyssaVehicle_eqFunction_7647(data, threadData);
  AlyssaVehicle_eqFunction_7645(data, threadData);
  AlyssaVehicle_eqFunction_7648(data, threadData);
  AlyssaVehicle_eqFunction_7634(data, threadData);
  AlyssaVehicle_eqFunction_7636(data, threadData);
  AlyssaVehicle_eqFunction_7635(data, threadData);
  AlyssaVehicle_eqFunction_7631(data, threadData);
  AlyssaVehicle_eqFunction_7633(data, threadData);
  AlyssaVehicle_eqFunction_7632(data, threadData);
  AlyssaVehicle_eqFunction_3361(data, threadData);
  AlyssaVehicle_eqFunction_3362(data, threadData);
  AlyssaVehicle_eqFunction_7653(data, threadData);
  AlyssaVehicle_eqFunction_3364(data, threadData);
  AlyssaVehicle_eqFunction_7656(data, threadData);
  AlyssaVehicle_eqFunction_7657(data, threadData);
  AlyssaVehicle_eqFunction_3367(data, threadData);
  AlyssaVehicle_eqFunction_3368(data, threadData);
  AlyssaVehicle_eqFunction_3369(data, threadData);
  AlyssaVehicle_eqFunction_3370(data, threadData);
  AlyssaVehicle_eqFunction_7628(data, threadData);
  AlyssaVehicle_eqFunction_7627(data, threadData);
  AlyssaVehicle_eqFunction_3373(data, threadData);
  AlyssaVehicle_eqFunction_3374(data, threadData);
  AlyssaVehicle_eqFunction_3375(data, threadData);
  AlyssaVehicle_eqFunction_3376(data, threadData);
  AlyssaVehicle_eqFunction_7730(data, threadData);
  AlyssaVehicle_eqFunction_7731(data, threadData);
  AlyssaVehicle_eqFunction_7732(data, threadData);
  AlyssaVehicle_eqFunction_7733(data, threadData);
  AlyssaVehicle_eqFunction_7907(data, threadData);
  AlyssaVehicle_eqFunction_7908(data, threadData);
  AlyssaVehicle_eqFunction_7909(data, threadData);
  AlyssaVehicle_eqFunction_3384(data, threadData);
  AlyssaVehicle_eqFunction_7735(data, threadData);
  AlyssaVehicle_eqFunction_7911(data, threadData);
  AlyssaVehicle_eqFunction_7734(data, threadData);
  AlyssaVehicle_eqFunction_7736(data, threadData);
  AlyssaVehicle_eqFunction_3389(data, threadData);
  AlyssaVehicle_eqFunction_7737(data, threadData);
  AlyssaVehicle_eqFunction_3391(data, threadData);
  AlyssaVehicle_eqFunction_3392(data, threadData);
  AlyssaVehicle_eqFunction_3393(data, threadData);
  AlyssaVehicle_eqFunction_3394(data, threadData);
  AlyssaVehicle_eqFunction_7750(data, threadData);
  AlyssaVehicle_eqFunction_7751(data, threadData);
  AlyssaVehicle_eqFunction_7744(data, threadData);
  AlyssaVehicle_eqFunction_7778(data, threadData);
  AlyssaVehicle_eqFunction_3399(data, threadData);
  AlyssaVehicle_eqFunction_7747(data, threadData);
  AlyssaVehicle_eqFunction_7748(data, threadData);
  AlyssaVehicle_eqFunction_7741(data, threadData);
  AlyssaVehicle_eqFunction_7742(data, threadData);
  AlyssaVehicle_eqFunction_3404(data, threadData);
  AlyssaVehicle_eqFunction_3405(data, threadData);
  AlyssaVehicle_eqFunction_7755(data, threadData);
  AlyssaVehicle_eqFunction_7756(data, threadData);
  AlyssaVehicle_eqFunction_7760(data, threadData);
  AlyssaVehicle_eqFunction_7761(data, threadData);
  AlyssaVehicle_eqFunction_3410(data, threadData);
  AlyssaVehicle_eqFunction_3411(data, threadData);
  AlyssaVehicle_eqFunction_7766(data, threadData);
  AlyssaVehicle_eqFunction_7765(data, threadData);
  AlyssaVehicle_eqFunction_7774(data, threadData);
  AlyssaVehicle_eqFunction_7759(data, threadData);
  AlyssaVehicle_eqFunction_7764(data, threadData);
  AlyssaVehicle_eqFunction_3417(data, threadData);
  AlyssaVehicle_eqFunction_7758(data, threadData);
  AlyssaVehicle_eqFunction_7763(data, threadData);
  AlyssaVehicle_eqFunction_3420(data, threadData);
  AlyssaVehicle_eqFunction_7757(data, threadData);
  AlyssaVehicle_eqFunction_7762(data, threadData);
  AlyssaVehicle_eqFunction_3423(data, threadData);
  AlyssaVehicle_eqFunction_7753(data, threadData);
  AlyssaVehicle_eqFunction_7754(data, threadData);
  AlyssaVehicle_eqFunction_7779(data, threadData);
  AlyssaVehicle_eqFunction_7780(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif
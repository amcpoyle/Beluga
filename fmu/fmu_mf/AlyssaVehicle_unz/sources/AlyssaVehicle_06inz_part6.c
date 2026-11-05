#include "AlyssaVehicle_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern void AlyssaVehicle_eqFunction_8237(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7220(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8238(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7279(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8239(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7170(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8240(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8243(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8242(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8245(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8241(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8247(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8244(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8246(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7219(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7278(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7169(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8434(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8440(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8609(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7218(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8610(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7277(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8611(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7168(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8612(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8615(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8614(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8617(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8613(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8619(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8616(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8618(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7214(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7273(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7164(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7222(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7282(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7172(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7223(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7283(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7173(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7224(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7284(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7174(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7225(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7285(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7175(DATA *data, threadData_t *threadData);


/*
equation index: 2983
type: SIMPLE_ASSIGN
$DER.rig.motion.roll.R_rel.T[3,3] = (1.0 - rig.motion.roll.e[3] ^ 2.0) * (-sin(rig.motion.roll.phi)) * rig.motion.roll.w
*/
void AlyssaVehicle_eqFunction_2983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2983};
  modelica_real tmp116;
  tmp116 = (data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* der(rig.motion.roll.R_rel.T[3,3]) DUMMY_DER */) = (1.0 - ((tmp116 * tmp116))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */)));
  TRACE_POP
}

/*
equation index: 2984
type: SIMPLE_ASSIGN
$DER.rig.motion.roll.R_rel.T[3,2] = (-rig.motion.roll.e[3]) * (-sin(rig.motion.roll.phi)) * rig.motion.roll.w * rig.motion.roll.e[2] - rig.motion.roll.e[1] * cos(rig.motion.roll.phi) * rig.motion.roll.w
*/
void AlyssaVehicle_eqFunction_2984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2984};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* der(rig.motion.roll.R_rel.T[3,2]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */)) * ((data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */)))) - (((data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */))));
  TRACE_POP
}

/*
equation index: 2985
type: SIMPLE_ASSIGN
$DER.rig.motion.roll.R_rel.T[3,1] = rig.motion.roll.e[2] * cos(rig.motion.roll.phi) * rig.motion.roll.w - rig.motion.roll.e[3] * (-sin(rig.motion.roll.phi)) * rig.motion.roll.w * rig.motion.roll.e[1]
*/
void AlyssaVehicle_eqFunction_2985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2985};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* der(rig.motion.roll.R_rel.T[3,1]) DUMMY_DER */) = ((data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */))) - (((data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */)) * ((data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */)))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7305(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7312(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7319(DATA *data, threadData_t *threadData);


/*
equation index: 2989
type: SIMPLE_ASSIGN
$DER.rig.motion.roll.R_rel.T[2,3] = rig.motion.roll.e[1] * cos(rig.motion.roll.phi) * rig.motion.roll.w - rig.motion.roll.e[2] * (-sin(rig.motion.roll.phi)) * rig.motion.roll.w * rig.motion.roll.e[3]
*/
void AlyssaVehicle_eqFunction_2989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2989};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* der(rig.motion.roll.R_rel.T[2,3]) DUMMY_DER */) = ((data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */))) - (((data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */)) * ((data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2990
type: SIMPLE_ASSIGN
$DER.rig.motion.roll.R_rel.T[2,2] = (1.0 - rig.motion.roll.e[2] ^ 2.0) * (-sin(rig.motion.roll.phi)) * rig.motion.roll.w
*/
void AlyssaVehicle_eqFunction_2990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2990};
  modelica_real tmp117;
  tmp117 = (data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* der(rig.motion.roll.R_rel.T[2,2]) DUMMY_DER */) = (1.0 - ((tmp117 * tmp117))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */)));
  TRACE_POP
}

/*
equation index: 2991
type: SIMPLE_ASSIGN
$DER.rig.motion.roll.R_rel.T[2,1] = (-rig.motion.roll.e[2]) * (-sin(rig.motion.roll.phi)) * rig.motion.roll.w * rig.motion.roll.e[1] - rig.motion.roll.e[3] * cos(rig.motion.roll.phi) * rig.motion.roll.w
*/
void AlyssaVehicle_eqFunction_2991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2991};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* der(rig.motion.roll.R_rel.T[2,1]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */)) * ((data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */)))) - (((data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7304(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7311(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7318(DATA *data, threadData_t *threadData);


/*
equation index: 2995
type: SIMPLE_ASSIGN
$DER.rig.motion.roll.R_rel.T[1,3] = (-rig.motion.roll.e[1]) * (-sin(rig.motion.roll.phi)) * rig.motion.roll.w * rig.motion.roll.e[3] - rig.motion.roll.e[2] * cos(rig.motion.roll.phi) * rig.motion.roll.w
*/
void AlyssaVehicle_eqFunction_2995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2995};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* der(rig.motion.roll.R_rel.T[1,3]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */)) * ((data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */)))) - (((data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */))));
  TRACE_POP
}

/*
equation index: 2996
type: SIMPLE_ASSIGN
$DER.rig.motion.roll.R_rel.T[1,2] = rig.motion.roll.e[3] * cos(rig.motion.roll.phi) * rig.motion.roll.w - rig.motion.roll.e[1] * (-sin(rig.motion.roll.phi)) * rig.motion.roll.w * rig.motion.roll.e[2]
*/
void AlyssaVehicle_eqFunction_2996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2996};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* der(rig.motion.roll.R_rel.T[1,2]) DUMMY_DER */) = ((data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */))) - (((data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */)) * ((data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2997
type: SIMPLE_ASSIGN
$DER.rig.motion.roll.R_rel.T[1,1] = (1.0 - rig.motion.roll.e[1] ^ 2.0) * (-sin(rig.motion.roll.phi)) * rig.motion.roll.w
*/
void AlyssaVehicle_eqFunction_2997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2997};
  modelica_real tmp118;
  tmp118 = (data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* der(rig.motion.roll.R_rel.T[1,1]) DUMMY_DER */) = (1.0 - ((tmp118 * tmp118))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7303(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7660(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7666(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7678(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8024(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8030(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8048(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8396(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8402(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8417(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8766(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8772(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8786(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7310(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7659(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7665(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7674(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8023(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8029(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8041(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8395(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8401(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8410(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8765(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8771(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8781(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7317(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7658(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7664(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7670(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8022(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8028(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8034(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8394(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8400(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8406(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8764(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8770(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8776(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7006(DATA *data, threadData_t *threadData);


/*
equation index: 3038
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.drive = $START.rigController.pedalSmoothing.drive
*/
void AlyssaVehicle_eqFunction_3038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3038};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* rigController.pedalSmoothing.drive STATE(1) */) = (data->modelData->realVarsData[13] /* rigController.pedalSmoothing.drive STATE(1) */).attribute .start;
  TRACE_POP
}

/*
equation index: 3039
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.brake = $START.rigController.pedalSmoothing.brake
*/
void AlyssaVehicle_eqFunction_3039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3039};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* rigController.pedalSmoothing.brake STATE(1) */) = (data->modelData->realVarsData[12] /* rigController.pedalSmoothing.brake STATE(1) */).attribute .start;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7016(DATA *data, threadData_t *threadData);


/*
equation index: 3041
type: SIMPLE_ASSIGN
rigController.steerSmoothing.delta = $START.rigController.steerSmoothing.delta
*/
void AlyssaVehicle_eqFunction_3041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3041};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* rigController.steerSmoothing.delta STATE(1) */) = (data->modelData->realVarsData[14] /* rigController.steerSmoothing.delta STATE(1) */).attribute .start;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7025(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7026(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7204(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7206(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7205(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7215(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7217(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7216(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7263(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7265(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7264(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7274(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7276(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7275(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7154(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7156(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7155(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7165(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7167(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7166(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7027(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7020(DATA *data, threadData_t *threadData);


/*
equation index: 3064
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod1.rodLength = 0.3590264614203248
*/
void AlyssaVehicle_eqFunction_3064(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3064};
  (data->simulationInfo->realParameter[2067] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.rodLength PARAM */) = 0.3590264614203248;
  TRACE_POP
}

/*
equation index: 3065
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod1.rodShape.length = vehicle.rearSuspension.cornerL.jointUSR.rod1.rodLength
*/
void AlyssaVehicle_eqFunction_3065(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3065};
  (data->simulationInfo->realParameter[2069] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.rodShape.length PARAM */) = (data->simulationInfo->realParameter[2067] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 3066
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod1Length = vehicle.rearSuspension.cornerL.jointUSR.rod1.rodLength
*/
void AlyssaVehicle_eqFunction_3066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3066};
  (data->simulationInfo->realParameter[2088] /* vehicle.rearSuspension.cornerL.jointUSR.rod1Length PARAM */) = (data->simulationInfo->realParameter[2067] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 3067
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.revolute.lengthConstraint = vehicle.rearSuspension.cornerL.jointUSR.rod1Length
*/
void AlyssaVehicle_eqFunction_3067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3067};
  (data->simulationInfo->realParameter[2039] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.lengthConstraint PARAM */) = (data->simulationInfo->realParameter[2088] /* vehicle.rearSuspension.cornerL.jointUSR.rod1Length PARAM */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7345(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7346(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7347(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7348(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7521(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7522(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7523(DATA *data, threadData_t *threadData);


/*
equation index: 3075
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.revolute.positiveBranch = AlyssaModel.Experiments.OptimalControlFMU.vehicle.rearSuspension.cornerL.jointUSR.revolute.selectBranch(vehicle.rearSuspension.cornerL.jointUSR.revolute.lengthConstraint, {-1.0, -0.0, 0.0}, 0.017453292519943295 * (vehicle.rearSuspension.cornerL.jointUSR.revolute.phi_offset + vehicle.rearSuspension.cornerL.jointUSR.revolute.phi_guess), vehicle.rearSuspension.cornerL.jointUSR.revolute.r_a, vehicle.rearSuspension.cornerL.jointUSR.revolute.r_b)
*/
void AlyssaVehicle_eqFunction_3075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3075};
  real_array tmp119;
  real_array tmp120;
  real_array_create(&tmp119, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3411]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp120, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3414]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.r_b[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[139] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.positiveBranch PARAM */) = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerL_jointUSR_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[2039] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.lengthConstraint PARAM */), _OMC_LIT23, (0.017453292519943295) * ((data->simulationInfo->realParameter[2044] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[2043] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.phi_guess PARAM */)), tmp119, tmp120);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7350(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7525(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7349(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7351(DATA *data, threadData_t *threadData);


/*
equation index: 3080
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] = sin(vehicle.rearSuspension.cornerL.jointUSR.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3080};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */) = sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3383]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.angle DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7352(DATA *data, threadData_t *threadData);


/*
equation index: 3082
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,3] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,3] + vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3082};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3604]] /* vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3083
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,2] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,2] + vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3083};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3603]] /* vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,2] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1328]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3084
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,1] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,1] + vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3084};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3602]] /* vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,1] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3085
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,3] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,3] - vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3085};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3601]] /* vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7370(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7371(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7362(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7393(DATA *data, threadData_t *threadData);


/*
equation index: 3090
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,2] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,2] - vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3090};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3600]] /* vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,2] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1328]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7367(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7368(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7359(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7360(DATA *data, threadData_t *threadData);


/*
equation index: 3095
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,1] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,1] - vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3095};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3599]] /* vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,1] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7364(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7365(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7372(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7373(DATA *data, threadData_t *threadData);


/*
equation index: 3100
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.shape_b.length = max(vehicle.rearSuspension.cornerL.coilover.s - vehicle.rearSuspension.cornerL.coilover.length_a, 0.0)
*/
void AlyssaVehicle_eqFunction_3100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3100};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3270]] /* vehicle.rearSuspension.cornerL.coilover.shape_b.length variable */) = fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* vehicle.rearSuspension.cornerL.coilover.s DUMMY_STATE */) - (data->simulationInfo->realParameter[1923] /* vehicle.rearSuspension.cornerL.coilover.length_a PARAM */),0.0);
  TRACE_POP
}

/*
equation index: 3101
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.shape_a.length = min(vehicle.rearSuspension.cornerL.coilover.length_a, vehicle.rearSuspension.cornerL.coilover.s)
*/
void AlyssaVehicle_eqFunction_3101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3259]] /* vehicle.rearSuspension.cornerL.coilover.shape_a.length variable */) = fmin((data->simulationInfo->realParameter[1923] /* vehicle.rearSuspension.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* vehicle.rearSuspension.cornerL.coilover.s DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7380(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7378(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7379(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7381(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7382(DATA *data, threadData_t *threadData);


/*
equation index: 3107
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.shape_b.r_shape[3] = vehicle.rearSuspension.cornerL.coilover.e_a[3] * min(vehicle.rearSuspension.cornerL.coilover.length_a, vehicle.rearSuspension.cornerL.coilover.s)
*/
void AlyssaVehicle_eqFunction_3107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3273]] /* vehicle.rearSuspension.cornerL.coilover.shape_b.r_shape[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3217]] /* vehicle.rearSuspension.cornerL.coilover.e_a[3] variable */)) * (fmin((data->simulationInfo->realParameter[1923] /* vehicle.rearSuspension.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* vehicle.rearSuspension.cornerL.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7384(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7385(DATA *data, threadData_t *threadData);


/*
equation index: 3110
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.shape_b.r_shape[2] = vehicle.rearSuspension.cornerL.coilover.e_a[2] * min(vehicle.rearSuspension.cornerL.coilover.length_a, vehicle.rearSuspension.cornerL.coilover.s)
*/
void AlyssaVehicle_eqFunction_3110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3272]] /* vehicle.rearSuspension.cornerL.coilover.shape_b.r_shape[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3216]] /* vehicle.rearSuspension.cornerL.coilover.e_a[2] variable */)) * (fmin((data->simulationInfo->realParameter[1923] /* vehicle.rearSuspension.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* vehicle.rearSuspension.cornerL.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7387(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7388(DATA *data, threadData_t *threadData);


/*
equation index: 3113
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.shape_b.r_shape[1] = vehicle.rearSuspension.cornerL.coilover.e_a[1] * min(vehicle.rearSuspension.cornerL.coilover.length_a, vehicle.rearSuspension.cornerL.coilover.s)
*/
void AlyssaVehicle_eqFunction_3113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3271]] /* vehicle.rearSuspension.cornerL.coilover.shape_b.r_shape[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3215]] /* vehicle.rearSuspension.cornerL.coilover.e_a[1] variable */)) * (fmin((data->simulationInfo->realParameter[1923] /* vehicle.rearSuspension.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* vehicle.rearSuspension.cornerL.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7356(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7357(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7394(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7395(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7396(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7397(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7398(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7399(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7401(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7403(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7402(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7400(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7405(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7404(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7406(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7413(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7414(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7418(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7429(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7420(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7419(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7430(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7415(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7427(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7417(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7416(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7428(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7431(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7422(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7421(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7425(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7424(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7423(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7426(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7435(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7433(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7432(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7434(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7436(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7437(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7438(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7509(DATA *data, threadData_t *threadData);


/*
equation index: 3156
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springArm.frame_b.R.w[3] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.vehicleBody.body.w_a[2] + vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.vehicleBody.body.w_a[3]
*/
void AlyssaVehicle_eqFunction_3156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3156};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3607]] /* vehicle.rearSuspension.cornerL.springArm.frame_b.R.w[3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5049]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5050]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3157
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springArm.frame_b.R.w[2] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.vehicleBody.body.w_a[2] - vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.vehicleBody.body.w_a[3]
*/
void AlyssaVehicle_eqFunction_3157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3157};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3606]] /* vehicle.rearSuspension.cornerL.springArm.frame_b.R.w[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5049]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5050]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7392(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7524(DATA *data, threadData_t *threadData);


/*
equation index: 3160
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.angle = if noEvent(vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle == 0.0) then vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle else ($DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.ksin_angle * vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle - vehicle.rearSuspension.cornerL.jointUSR.revolute.ksin_angle * $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle) / (vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (vehicle.rearSuspension.cornerL.jointUSR.revolute.ksin_angle / vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle) ^ 2.0))
*/
void AlyssaVehicle_eqFunction_3160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3160};
  modelica_real tmp121;
  modelica_real tmp122;
  modelica_boolean tmp123;
  modelica_real tmp124;
  tmp123 = (modelica_boolean)((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3408]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */) == 0.0);
  if(tmp123)
  {
    tmp124 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3408]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */);
  }
  else
  {
    tmp121 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3408]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */);
    tmp122 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3409]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.ksin_angle DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3408]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */),"vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle",equationIndexes);
    tmp124 = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.ksin_angle) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3408]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3409]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.ksin_angle DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle) DUMMY_DER */))),((tmp121 * tmp121)) * (1.0 + (tmp122 * tmp122)),"vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (vehicle.rearSuspension.cornerL.jointUSR.revolute.ksin_angle / vehicle.rearSuspension.cornerL.jointUSR.revolute.kcos_angle) ^ 2.0)",equationIndexes);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.angle) DUMMY_DER */) = tmp124;
  TRACE_POP
}

/*
equation index: 3161
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.w[1] = -$DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_3161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3380]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.w[1] DUMMY_STATE */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7527(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7531(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7532(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7529(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7530(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7528(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7565(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7572(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7571(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7577(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7578(DATA *data, threadData_t *threadData);


/*
equation index: 3173
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.frame_ia.R.w[1] = vehicle.rearSuspension.cornerL.jointUSR.rod1.R_rel_ia.w[1] - vehicle.rearSuspension.cornerL.jointUSR.rod1.e3_a[3] * vehicle.rearSuspension.cornerL.jointUSR.frame_a.R.w[3] - vehicle.rearSuspension.cornerL.jointUSR.rod1.e3_a[2] * vehicle.rearSuspension.cornerL.jointUSR.frame_a.R.w[2] - vehicle.rearSuspension.cornerL.jointUSR.rod1.e3_a[1] * vehicle.rearSuspension.cornerL.jointUSR.frame_a.R.w[1]
*/
void AlyssaVehicle_eqFunction_3173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3307]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_ia.R.w[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3423]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.R_rel_ia.w[1] DUMMY_STATE */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3447]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.e3_a[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3292]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3446]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.e3_a[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3291]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_a.R.w[2] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3445]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.e3_a[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3290]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_a.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7573(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7566(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7574(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7576(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7580(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7584(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7575(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7579(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7585(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7586(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7581(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7590(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7588(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7587(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7589(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7591(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7592(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7593(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7640(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7641(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7642(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7643(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7644(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7645(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7648(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7650(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7649(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7646(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7654(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7653(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7652(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7567(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7568(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7570(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7681(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7677(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7673(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7569(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7680(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7676(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7672(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7647(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7651(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7679(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7675(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7671(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7537(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7538(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7535(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7536(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7533(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7534(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7539(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7540(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7541(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7555(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7542(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7547(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7546(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7548(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7543(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7553(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7552(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7554(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7549(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7551(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7550(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7545(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7544(DATA *data, threadData_t *threadData);


/*
equation index: 3243
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] = cos(vehicle.rearSuspension.cornerL.jointUSR.revolute.angle) * $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_3243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */) = (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3383]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3244
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] = (-sin(vehicle.rearSuspension.cornerL.jointUSR.revolute.angle)) * $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_3244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3383]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3245
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,3] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,3] + $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,3] + vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,3] + $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* der(vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(vehicle.chassisFrame.R.T[2,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* der(vehicle.chassisFrame.R.T[3,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3246
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,2] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,2] + $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,2] + vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,2] + $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* der(vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,2]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(vehicle.chassisFrame.R.T[2,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1328]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* der(vehicle.chassisFrame.R.T[3,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3247
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,1] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,1] + $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,1] + vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,1] + $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* der(vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[3,1]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* der(vehicle.chassisFrame.R.T[2,1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* der(vehicle.chassisFrame.R.T[3,1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3248
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,3] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[2,3] + $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,3] + (-vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) * $DER.vehicle.chassisFrame.R.T[3,3] - $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* der(vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(vehicle.chassisFrame.R.T[2,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* der(vehicle.chassisFrame.R.T[3,3]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3249
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,2] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[2,2] + $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,2] + (-vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) * $DER.vehicle.chassisFrame.R.T[3,2] - $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* der(vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,2]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(vehicle.chassisFrame.R.T[2,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1328]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* der(vehicle.chassisFrame.R.T[3,2]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3250
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,1] = vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[2,1] + $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,1] + (-vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) * $DER.vehicle.chassisFrame.R.T[3,1] - $DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* der(vehicle.rearSuspension.cornerL.springArm.frame_b.R.T[2,1]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* der(vehicle.chassisFrame.R.T[2,1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* der(vehicle.chassisFrame.R.T[3,1]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* der(vehicle.rearSuspension.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3251
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.positiveBranch = AlyssaModel.Experiments.OptimalControlFMU.vehicle.rearSuspension.cornerL.tieRod.revolute.selectBranch(vehicle.rearSuspension.cornerL.tieRod.revolute.lengthConstraint, {0.0, -0.222824801502141, 0.9748585065718673}, 0.017453292519943295 * (vehicle.rearSuspension.cornerL.tieRod.revolute.phi_offset + vehicle.rearSuspension.cornerL.tieRod.revolute.phi_guess), vehicle.rearSuspension.cornerL.tieRod.revolute.r_a, vehicle.rearSuspension.cornerL.tieRod.revolute.r_b)
*/
void AlyssaVehicle_eqFunction_3251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3251};
  real_array tmp125;
  real_array tmp126;
  real_array_create(&tmp125, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3765]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp126, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3768]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.r_b[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[155] /* vehicle.rearSuspension.cornerL.tieRod.revolute.positiveBranch PARAM */) = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerL_tieRod_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[2331] /* vehicle.rearSuspension.cornerL.tieRod.revolute.lengthConstraint PARAM */), _OMC_LIT24, (0.017453292519943295) * ((data->simulationInfo->realParameter[2336] /* vehicle.rearSuspension.cornerL.tieRod.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[2335] /* vehicle.rearSuspension.cornerL.tieRod.revolute.phi_guess PARAM */)), tmp125, tmp126);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7440(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7595(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7439(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7441(DATA *data, threadData_t *threadData);


/*
equation index: 3256
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[3,1] = (-0.222824801502141) * sin(vehicle.rearSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3256};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3729]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[3,1] DUMMY_STATE */) = (-0.222824801502141) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3735]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3257
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,3] = 0.222824801502141 * sin(vehicle.rearSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3257};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3725]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,3] DUMMY_STATE */) = (0.222824801502141) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3735]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3258
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,2] = 0.9748585065718673 * sin(vehicle.rearSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3258};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3724]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,2] DUMMY_STATE */) = (0.9748585065718673) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3735]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7442(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7583(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7444(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7443(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7473(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7453(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7454(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7474(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7450(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7451(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7445(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7446(DATA *data, threadData_t *threadData);


/*
equation index: 3271
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[2,1] = (-0.9748585065718673) * sin(vehicle.rearSuspension.cornerL.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3271};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3726]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[2,1] variable */) = (-0.9748585065718673) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3735]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7475(DATA *data, threadData_t *threadData);


/*
equation index: 3273
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.frame_a.r_0[3] = vehicle.rearSuspension.cornerL.jointUSR.frame_ia.r_0[3] + (-0.13) * vehicle.rearSuspension.cornerL.upright.frame_a.R.T[2,3] + 0.2 * vehicle.rearSuspension.cornerL.upright.frame_a.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3273};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3961]] /* vehicle.rearSuspension.cornerL.upright.frame_a.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3315]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_ia.r_0[3] DUMMY_STATE */) + (-0.13) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3952]] /* vehicle.rearSuspension.cornerL.upright.frame_a.R.T[2,3] variable */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3955]] /* vehicle.rearSuspension.cornerL.upright.frame_a.R.T[3,3] variable */));
  TRACE_POP
}

/*
equation index: 3274
type: SIMPLE_ASSIGN
vehicle.wheelRL.contactPatch.frame_a.r_0[3] = vehicle.rearSuspension.cornerL.upright.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3274};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5280]] /* vehicle.wheelRL.contactPatch.frame_a.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3961]] /* vehicle.rearSuspension.cornerL.upright.frame_a.r_0[3] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7507(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7499(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7495(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7491(DATA *data, threadData_t *threadData);


/*
equation index: 3279
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,3] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[1,3] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[2,3] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3279};
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
  real_array_create(&tmp127, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp127, ((modelica_integer) 2) - ndims_base_array(&tmp127), &tmp128);
  real_array_create(&tmp129, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp129, ((modelica_integer) 2) - ndims_base_array(&tmp129), &tmp130);
  transpose_alloc_real_array(&tmp130, &tmp131);
  real_array_create(&tmp132, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp132, ((modelica_integer) 2) - ndims_base_array(&tmp132), &tmp133);
  real_array_create(&tmp134, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp134, ((modelica_integer) 2) - ndims_base_array(&tmp134), &tmp135);
  transpose_alloc_real_array(&tmp135, &tmp136);
  real_array_create(&tmp137, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp137, ((modelica_integer) 2) - ndims_base_array(&tmp137), &tmp138);
  real_array_create(&tmp139, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp139, ((modelica_integer) 2) - ndims_base_array(&tmp139), &tmp140);
  transpose_alloc_real_array(&tmp140, &tmp141);
  real_array_create(&tmp142, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp142, ((modelica_integer) 2) - ndims_base_array(&tmp142), &tmp143);
  real_array_create(&tmp144, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp144, ((modelica_integer) 2) - ndims_base_array(&tmp144), &tmp145);
  transpose_alloc_real_array(&tmp145, &tmp146);
  real_array_create(&tmp147, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp147, ((modelica_integer) 2) - ndims_base_array(&tmp147), &tmp148);
  real_array_create(&tmp149, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp149, ((modelica_integer) 2) - ndims_base_array(&tmp149), &tmp150);
  transpose_alloc_real_array(&tmp150, &tmp151);
  real_array_create(&tmp152, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp152, ((modelica_integer) 2) - ndims_base_array(&tmp152), &tmp153);
  real_array_create(&tmp154, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp154, ((modelica_integer) 2) - ndims_base_array(&tmp154), &tmp155);
  transpose_alloc_real_array(&tmp155, &tmp156);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5332]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp128, tmp131), 2, 0) + ((data->simulationInfo->realParameter[3827] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp133, tmp136), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3179]] /* vehicle.hubRL.bearingFrame.R.T[1,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp138, tmp141), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp143, tmp146), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* vehicle.hubRL.bearingFrame.R.T[2,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp148, tmp151), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp153, tmp156), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3185]] /* vehicle.hubRL.bearingFrame.R.T[3,3] variable */));
  TRACE_POP
}

/*
equation index: 3280
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,3] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[1,3] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[2,3] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3280};
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
  real_array_create(&tmp157, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp157, ((modelica_integer) 2) - ndims_base_array(&tmp157), &tmp158);
  real_array_create(&tmp159, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp159, ((modelica_integer) 2) - ndims_base_array(&tmp159), &tmp160);
  transpose_alloc_real_array(&tmp160, &tmp161);
  real_array_create(&tmp162, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp162, ((modelica_integer) 2) - ndims_base_array(&tmp162), &tmp163);
  real_array_create(&tmp164, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp164, ((modelica_integer) 2) - ndims_base_array(&tmp164), &tmp165);
  transpose_alloc_real_array(&tmp165, &tmp166);
  real_array_create(&tmp167, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp167, ((modelica_integer) 2) - ndims_base_array(&tmp167), &tmp168);
  real_array_create(&tmp169, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp169, ((modelica_integer) 2) - ndims_base_array(&tmp169), &tmp170);
  transpose_alloc_real_array(&tmp170, &tmp171);
  real_array_create(&tmp172, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp172, ((modelica_integer) 2) - ndims_base_array(&tmp172), &tmp173);
  real_array_create(&tmp174, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp174, ((modelica_integer) 2) - ndims_base_array(&tmp174), &tmp175);
  transpose_alloc_real_array(&tmp175, &tmp176);
  real_array_create(&tmp177, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp177, ((modelica_integer) 2) - ndims_base_array(&tmp177), &tmp178);
  real_array_create(&tmp179, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp179, ((modelica_integer) 2) - ndims_base_array(&tmp179), &tmp180);
  transpose_alloc_real_array(&tmp180, &tmp181);
  real_array_create(&tmp182, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp182, ((modelica_integer) 2) - ndims_base_array(&tmp182), &tmp183);
  real_array_create(&tmp184, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp184, ((modelica_integer) 2) - ndims_base_array(&tmp184), &tmp185);
  transpose_alloc_real_array(&tmp185, &tmp186);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5329]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp158, tmp161), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp163, tmp166), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3828] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3179]] /* vehicle.hubRL.bearingFrame.R.T[1,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp168, tmp171), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp173, tmp176), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* vehicle.hubRL.bearingFrame.R.T[2,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp178, tmp181), 1, 2) + ((data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp183, tmp186), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3185]] /* vehicle.hubRL.bearingFrame.R.T[3,3] variable */));
  TRACE_POP
}

/*
equation index: 3281
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,3] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[1,3] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[2,3] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3281};
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
  real_array_create(&tmp187, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp187, ((modelica_integer) 2) - ndims_base_array(&tmp187), &tmp188);
  real_array_create(&tmp189, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp189, ((modelica_integer) 2) - ndims_base_array(&tmp189), &tmp190);
  transpose_alloc_real_array(&tmp190, &tmp191);
  real_array_create(&tmp192, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp192, ((modelica_integer) 2) - ndims_base_array(&tmp192), &tmp193);
  real_array_create(&tmp194, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp194, ((modelica_integer) 2) - ndims_base_array(&tmp194), &tmp195);
  transpose_alloc_real_array(&tmp195, &tmp196);
  real_array_create(&tmp197, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp197, ((modelica_integer) 2) - ndims_base_array(&tmp197), &tmp198);
  real_array_create(&tmp199, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp199, ((modelica_integer) 2) - ndims_base_array(&tmp199), &tmp200);
  transpose_alloc_real_array(&tmp200, &tmp201);
  real_array_create(&tmp202, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp202, ((modelica_integer) 2) - ndims_base_array(&tmp202), &tmp203);
  real_array_create(&tmp204, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp204, ((modelica_integer) 2) - ndims_base_array(&tmp204), &tmp205);
  transpose_alloc_real_array(&tmp205, &tmp206);
  real_array_create(&tmp207, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp207, ((modelica_integer) 2) - ndims_base_array(&tmp207), &tmp208);
  real_array_create(&tmp209, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp209, ((modelica_integer) 2) - ndims_base_array(&tmp209), &tmp210);
  transpose_alloc_real_array(&tmp210, &tmp211);
  real_array_create(&tmp212, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp212, ((modelica_integer) 2) - ndims_base_array(&tmp212), &tmp213);
  real_array_create(&tmp214, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp214, ((modelica_integer) 2) - ndims_base_array(&tmp214), &tmp215);
  transpose_alloc_real_array(&tmp215, &tmp216);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5326]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp188, tmp191), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp193, tmp196), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3179]] /* vehicle.hubRL.bearingFrame.R.T[1,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp198, tmp201), 0, 1) + ((data->simulationInfo->realParameter[3828] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp203, tmp206), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* vehicle.hubRL.bearingFrame.R.T[2,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp208, tmp211), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp213, tmp216), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3827] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3185]] /* vehicle.hubRL.bearingFrame.R.T[3,3] variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7476(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7477(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7464(DATA *data, threadData_t *threadData);


/*
equation index: 3285
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.frame_a.r_0[2] = vehicle.rearSuspension.cornerL.jointUSR.frame_ia.r_0[2] + (-0.13) * vehicle.rearSuspension.cornerL.upright.frame_a.R.T[2,2] + 0.2 * vehicle.rearSuspension.cornerL.upright.frame_a.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3285};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3960]] /* vehicle.rearSuspension.cornerL.upright.frame_a.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3314]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_ia.r_0[2] DUMMY_STATE */) + (-0.13) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3951]] /* vehicle.rearSuspension.cornerL.upright.frame_a.R.T[2,2] variable */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3954]] /* vehicle.rearSuspension.cornerL.upright.frame_a.R.T[3,2] variable */));
  TRACE_POP
}

/*
equation index: 3286
type: SIMPLE_ASSIGN
vehicle.wheelRL.contactPatch.frame_a.r_0[2] = vehicle.rearSuspension.cornerL.upright.frame_a.r_0[2]
*/
void AlyssaVehicle_eqFunction_3286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3286};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5279]] /* vehicle.wheelRL.contactPatch.frame_a.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3960]] /* vehicle.rearSuspension.cornerL.upright.frame_a.r_0[2] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7469(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7468(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7467(DATA *data, threadData_t *threadData);


/*
equation index: 3290
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,2] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[1,2] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[2,2] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3290};
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
  real_array_create(&tmp217, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp217, ((modelica_integer) 2) - ndims_base_array(&tmp217), &tmp218);
  real_array_create(&tmp219, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp219, ((modelica_integer) 2) - ndims_base_array(&tmp219), &tmp220);
  transpose_alloc_real_array(&tmp220, &tmp221);
  real_array_create(&tmp222, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp222, ((modelica_integer) 2) - ndims_base_array(&tmp222), &tmp223);
  real_array_create(&tmp224, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp224, ((modelica_integer) 2) - ndims_base_array(&tmp224), &tmp225);
  transpose_alloc_real_array(&tmp225, &tmp226);
  real_array_create(&tmp227, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp227, ((modelica_integer) 2) - ndims_base_array(&tmp227), &tmp228);
  real_array_create(&tmp229, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp229, ((modelica_integer) 2) - ndims_base_array(&tmp229), &tmp230);
  transpose_alloc_real_array(&tmp230, &tmp231);
  real_array_create(&tmp232, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp232, ((modelica_integer) 2) - ndims_base_array(&tmp232), &tmp233);
  real_array_create(&tmp234, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp234, ((modelica_integer) 2) - ndims_base_array(&tmp234), &tmp235);
  transpose_alloc_real_array(&tmp235, &tmp236);
  real_array_create(&tmp237, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp237, ((modelica_integer) 2) - ndims_base_array(&tmp237), &tmp238);
  real_array_create(&tmp239, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp239, ((modelica_integer) 2) - ndims_base_array(&tmp239), &tmp240);
  transpose_alloc_real_array(&tmp240, &tmp241);
  real_array_create(&tmp242, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp242, ((modelica_integer) 2) - ndims_base_array(&tmp242), &tmp243);
  real_array_create(&tmp244, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp244, ((modelica_integer) 2) - ndims_base_array(&tmp244), &tmp245);
  transpose_alloc_real_array(&tmp245, &tmp246);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5331]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp218, tmp221), 2, 0) + ((data->simulationInfo->realParameter[3827] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp223, tmp226), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3178]] /* vehicle.hubRL.bearingFrame.R.T[1,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp228, tmp231), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp233, tmp236), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* vehicle.hubRL.bearingFrame.R.T[2,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp238, tmp241), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp243, tmp246), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3184]] /* vehicle.hubRL.bearingFrame.R.T[3,2] variable */));
  TRACE_POP
}

/*
equation index: 3291
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,2] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[1,2] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[2,2] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3291};
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
  real_array_create(&tmp247, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp247, ((modelica_integer) 2) - ndims_base_array(&tmp247), &tmp248);
  real_array_create(&tmp249, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp249, ((modelica_integer) 2) - ndims_base_array(&tmp249), &tmp250);
  transpose_alloc_real_array(&tmp250, &tmp251);
  real_array_create(&tmp252, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp252, ((modelica_integer) 2) - ndims_base_array(&tmp252), &tmp253);
  real_array_create(&tmp254, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp254, ((modelica_integer) 2) - ndims_base_array(&tmp254), &tmp255);
  transpose_alloc_real_array(&tmp255, &tmp256);
  real_array_create(&tmp257, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp257, ((modelica_integer) 2) - ndims_base_array(&tmp257), &tmp258);
  real_array_create(&tmp259, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp259, ((modelica_integer) 2) - ndims_base_array(&tmp259), &tmp260);
  transpose_alloc_real_array(&tmp260, &tmp261);
  real_array_create(&tmp262, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp262, ((modelica_integer) 2) - ndims_base_array(&tmp262), &tmp263);
  real_array_create(&tmp264, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp264, ((modelica_integer) 2) - ndims_base_array(&tmp264), &tmp265);
  transpose_alloc_real_array(&tmp265, &tmp266);
  real_array_create(&tmp267, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp267, ((modelica_integer) 2) - ndims_base_array(&tmp267), &tmp268);
  real_array_create(&tmp269, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp269, ((modelica_integer) 2) - ndims_base_array(&tmp269), &tmp270);
  transpose_alloc_real_array(&tmp270, &tmp271);
  real_array_create(&tmp272, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp272, ((modelica_integer) 2) - ndims_base_array(&tmp272), &tmp273);
  real_array_create(&tmp274, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp274, ((modelica_integer) 2) - ndims_base_array(&tmp274), &tmp275);
  transpose_alloc_real_array(&tmp275, &tmp276);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5328]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp248, tmp251), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp253, tmp256), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3828] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3178]] /* vehicle.hubRL.bearingFrame.R.T[1,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp258, tmp261), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp263, tmp266), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* vehicle.hubRL.bearingFrame.R.T[2,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp268, tmp271), 1, 2) + ((data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp273, tmp276), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3184]] /* vehicle.hubRL.bearingFrame.R.T[3,2] variable */));
  TRACE_POP
}

/*
equation index: 3292
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,2] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[1,2] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[2,2] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3292};
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
  real_array_create(&tmp277, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp277, ((modelica_integer) 2) - ndims_base_array(&tmp277), &tmp278);
  real_array_create(&tmp279, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp279, ((modelica_integer) 2) - ndims_base_array(&tmp279), &tmp280);
  transpose_alloc_real_array(&tmp280, &tmp281);
  real_array_create(&tmp282, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp282, ((modelica_integer) 2) - ndims_base_array(&tmp282), &tmp283);
  real_array_create(&tmp284, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp284, ((modelica_integer) 2) - ndims_base_array(&tmp284), &tmp285);
  transpose_alloc_real_array(&tmp285, &tmp286);
  real_array_create(&tmp287, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp287, ((modelica_integer) 2) - ndims_base_array(&tmp287), &tmp288);
  real_array_create(&tmp289, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp289, ((modelica_integer) 2) - ndims_base_array(&tmp289), &tmp290);
  transpose_alloc_real_array(&tmp290, &tmp291);
  real_array_create(&tmp292, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp292, ((modelica_integer) 2) - ndims_base_array(&tmp292), &tmp293);
  real_array_create(&tmp294, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp294, ((modelica_integer) 2) - ndims_base_array(&tmp294), &tmp295);
  transpose_alloc_real_array(&tmp295, &tmp296);
  real_array_create(&tmp297, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp297, ((modelica_integer) 2) - ndims_base_array(&tmp297), &tmp298);
  real_array_create(&tmp299, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp299, ((modelica_integer) 2) - ndims_base_array(&tmp299), &tmp300);
  transpose_alloc_real_array(&tmp300, &tmp301);
  real_array_create(&tmp302, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp302, ((modelica_integer) 2) - ndims_base_array(&tmp302), &tmp303);
  real_array_create(&tmp304, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp304, ((modelica_integer) 2) - ndims_base_array(&tmp304), &tmp305);
  transpose_alloc_real_array(&tmp305, &tmp306);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5325]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp278, tmp281), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp283, tmp286), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3178]] /* vehicle.hubRL.bearingFrame.R.T[1,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp288, tmp291), 0, 1) + ((data->simulationInfo->realParameter[3828] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp293, tmp296), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* vehicle.hubRL.bearingFrame.R.T[2,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp298, tmp301), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp303, tmp306), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3827] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3184]] /* vehicle.hubRL.bearingFrame.R.T[3,2] variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7465(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7466(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7456(DATA *data, threadData_t *threadData);


/*
equation index: 3296
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.frame_a.r_0[1] = vehicle.rearSuspension.cornerL.jointUSR.frame_ia.r_0[1] + (-0.13) * vehicle.rearSuspension.cornerL.upright.frame_a.R.T[2,1] + 0.2 * vehicle.rearSuspension.cornerL.upright.frame_a.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3296};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3959]] /* vehicle.rearSuspension.cornerL.upright.frame_a.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3313]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_ia.r_0[1] DUMMY_STATE */) + (-0.13) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3950]] /* vehicle.rearSuspension.cornerL.upright.frame_a.R.T[2,1] variable */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3953]] /* vehicle.rearSuspension.cornerL.upright.frame_a.R.T[3,1] variable */));
  TRACE_POP
}

/*
equation index: 3297
type: SIMPLE_ASSIGN
vehicle.wheelRL.contactPatch.frame_a.r_0[1] = vehicle.rearSuspension.cornerL.upright.frame_a.r_0[1]
*/
void AlyssaVehicle_eqFunction_3297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3297};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5278]] /* vehicle.wheelRL.contactPatch.frame_a.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3959]] /* vehicle.rearSuspension.cornerL.upright.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7506(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7505(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7504(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7461(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7502(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7501(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7500(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7460(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7498(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7497(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7496(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7459(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7494(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7493(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7492(DATA *data, threadData_t *threadData);


/*
equation index: 3313
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,1] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[1,1] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[2,1] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3313};
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
  real_array_create(&tmp307, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp307, ((modelica_integer) 2) - ndims_base_array(&tmp307), &tmp308);
  real_array_create(&tmp309, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp309, ((modelica_integer) 2) - ndims_base_array(&tmp309), &tmp310);
  transpose_alloc_real_array(&tmp310, &tmp311);
  real_array_create(&tmp312, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp312, ((modelica_integer) 2) - ndims_base_array(&tmp312), &tmp313);
  real_array_create(&tmp314, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp314, ((modelica_integer) 2) - ndims_base_array(&tmp314), &tmp315);
  transpose_alloc_real_array(&tmp315, &tmp316);
  real_array_create(&tmp317, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp317, ((modelica_integer) 2) - ndims_base_array(&tmp317), &tmp318);
  real_array_create(&tmp319, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp319, ((modelica_integer) 2) - ndims_base_array(&tmp319), &tmp320);
  transpose_alloc_real_array(&tmp320, &tmp321);
  real_array_create(&tmp322, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp322, ((modelica_integer) 2) - ndims_base_array(&tmp322), &tmp323);
  real_array_create(&tmp324, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp324, ((modelica_integer) 2) - ndims_base_array(&tmp324), &tmp325);
  transpose_alloc_real_array(&tmp325, &tmp326);
  real_array_create(&tmp327, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp327, ((modelica_integer) 2) - ndims_base_array(&tmp327), &tmp328);
  real_array_create(&tmp329, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp329, ((modelica_integer) 2) - ndims_base_array(&tmp329), &tmp330);
  transpose_alloc_real_array(&tmp330, &tmp331);
  real_array_create(&tmp332, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp332, ((modelica_integer) 2) - ndims_base_array(&tmp332), &tmp333);
  real_array_create(&tmp334, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp334, ((modelica_integer) 2) - ndims_base_array(&tmp334), &tmp335);
  transpose_alloc_real_array(&tmp335, &tmp336);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5330]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp308, tmp311), 2, 0) + ((data->simulationInfo->realParameter[3827] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp313, tmp316), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3177]] /* vehicle.hubRL.bearingFrame.R.T[1,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp318, tmp321), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp323, tmp326), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* vehicle.hubRL.bearingFrame.R.T[2,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp328, tmp331), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp333, tmp336), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3183]] /* vehicle.hubRL.bearingFrame.R.T[3,1] variable */));
  TRACE_POP
}

/*
equation index: 3314
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,1] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[1,1] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[2,1] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3314};
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
  real_array_create(&tmp337, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp337, ((modelica_integer) 2) - ndims_base_array(&tmp337), &tmp338);
  real_array_create(&tmp339, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp339, ((modelica_integer) 2) - ndims_base_array(&tmp339), &tmp340);
  transpose_alloc_real_array(&tmp340, &tmp341);
  real_array_create(&tmp342, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp342, ((modelica_integer) 2) - ndims_base_array(&tmp342), &tmp343);
  real_array_create(&tmp344, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp344, ((modelica_integer) 2) - ndims_base_array(&tmp344), &tmp345);
  transpose_alloc_real_array(&tmp345, &tmp346);
  real_array_create(&tmp347, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp347, ((modelica_integer) 2) - ndims_base_array(&tmp347), &tmp348);
  real_array_create(&tmp349, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp349, ((modelica_integer) 2) - ndims_base_array(&tmp349), &tmp350);
  transpose_alloc_real_array(&tmp350, &tmp351);
  real_array_create(&tmp352, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp352, ((modelica_integer) 2) - ndims_base_array(&tmp352), &tmp353);
  real_array_create(&tmp354, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp354, ((modelica_integer) 2) - ndims_base_array(&tmp354), &tmp355);
  transpose_alloc_real_array(&tmp355, &tmp356);
  real_array_create(&tmp357, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp357, ((modelica_integer) 2) - ndims_base_array(&tmp357), &tmp358);
  real_array_create(&tmp359, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp359, ((modelica_integer) 2) - ndims_base_array(&tmp359), &tmp360);
  transpose_alloc_real_array(&tmp360, &tmp361);
  real_array_create(&tmp362, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp362, ((modelica_integer) 2) - ndims_base_array(&tmp362), &tmp363);
  real_array_create(&tmp364, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp364, ((modelica_integer) 2) - ndims_base_array(&tmp364), &tmp365);
  transpose_alloc_real_array(&tmp365, &tmp366);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5327]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp338, tmp341), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp343, tmp346), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3828] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3177]] /* vehicle.hubRL.bearingFrame.R.T[1,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp348, tmp351), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp353, tmp356), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* vehicle.hubRL.bearingFrame.R.T[2,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp358, tmp361), 1, 2) + ((data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp363, tmp366), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3183]] /* vehicle.hubRL.bearingFrame.R.T[3,1] variable */));
  TRACE_POP
}

/*
equation index: 3315
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,1] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[1,1] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[2,1] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.hubRL.bearingFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3315};
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
  real_array_create(&tmp367, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp367, ((modelica_integer) 2) - ndims_base_array(&tmp367), &tmp368);
  real_array_create(&tmp369, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp369, ((modelica_integer) 2) - ndims_base_array(&tmp369), &tmp370);
  transpose_alloc_real_array(&tmp370, &tmp371);
  real_array_create(&tmp372, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp372, ((modelica_integer) 2) - ndims_base_array(&tmp372), &tmp373);
  real_array_create(&tmp374, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp374, ((modelica_integer) 2) - ndims_base_array(&tmp374), &tmp375);
  transpose_alloc_real_array(&tmp375, &tmp376);
  real_array_create(&tmp377, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp377, ((modelica_integer) 2) - ndims_base_array(&tmp377), &tmp378);
  real_array_create(&tmp379, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp379, ((modelica_integer) 2) - ndims_base_array(&tmp379), &tmp380);
  transpose_alloc_real_array(&tmp380, &tmp381);
  real_array_create(&tmp382, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp382, ((modelica_integer) 2) - ndims_base_array(&tmp382), &tmp383);
  real_array_create(&tmp384, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp384, ((modelica_integer) 2) - ndims_base_array(&tmp384), &tmp385);
  transpose_alloc_real_array(&tmp385, &tmp386);
  real_array_create(&tmp387, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp387, ((modelica_integer) 2) - ndims_base_array(&tmp387), &tmp388);
  real_array_create(&tmp389, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp389, ((modelica_integer) 2) - ndims_base_array(&tmp389), &tmp390);
  transpose_alloc_real_array(&tmp390, &tmp391);
  real_array_create(&tmp392, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp392, ((modelica_integer) 2) - ndims_base_array(&tmp392), &tmp393);
  real_array_create(&tmp394, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp394, ((modelica_integer) 2) - ndims_base_array(&tmp394), &tmp395);
  transpose_alloc_real_array(&tmp395, &tmp396);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5324]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp368, tmp371), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp373, tmp376), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3177]] /* vehicle.hubRL.bearingFrame.R.T[1,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp378, tmp381), 0, 1) + ((data->simulationInfo->realParameter[3828] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp383, tmp386), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* vehicle.hubRL.bearingFrame.R.T[2,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp388, tmp391), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp393, tmp396), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3827] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3183]] /* vehicle.hubRL.bearingFrame.R.T[3,1] variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7457(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7458(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7486(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7487(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7489(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7488(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7482(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7483(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7485(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7484(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7478(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7479(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7490(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7481(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7480(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7472(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7594(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7596(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7598(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7605(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7597(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7606(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7637(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7638(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7631(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7632(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7628(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7629(DATA *data, threadData_t *threadData);


/*
equation index: 3344
type: LINEAR

<var>vehicle.rearSuspension.cornerL.toe</var>
<var>vehicle.rearSuspension.cornerL.wheelAngles.angles[3]</var>
<var>vehicle.rearSuspension.cornerL.camber</var>
<row>
  <cell>Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(vehicle.rearSuspension.cornerL.wheelAngles.R_rel, {3, 1, 2}, vehicle.rearSuspension.cornerL.wheelAngles.guessAngle1)[1]</cell>
  <cell>Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(vehicle.rearSuspension.cornerL.wheelAngles.R_rel, {3, 1, 2}, vehicle.rearSuspension.cornerL.wheelAngles.guessAngle1)[2]</cell>
  <cell>Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(vehicle.rearSuspension.cornerL.wheelAngles.R_rel, {3, 1, 2}, vehicle.rearSuspension.cornerL.wheelAngles.guessAngle1)[3]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>1.0</residual>
  </cell><cell row="1" col="2">
    <residual>-1.0</residual>
  </cell><cell row="2" col="1">
    <residual>1.0</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void AlyssaVehicle_eqFunction_3344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3344};
  /* Linear equation system */
  int retValue;
  double aux_x[3] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3859]] /* vehicle.rearSuspension.cornerL.toe variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4011]] /* vehicle.rearSuspension.cornerL.wheelAngles.angles[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3205]] /* vehicle.rearSuspension.cornerL.camber variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 3344 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 4, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3344};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 3344 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3859]] /* vehicle.rearSuspension.cornerL.toe variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4011]] /* vehicle.rearSuspension.cornerL.wheelAngles.angles[3] variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3205]] /* vehicle.rearSuspension.cornerL.camber variable */) = aux_x[2];

  TRACE_POP
}

/*
equation index: 3345
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[3] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[1] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[2] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[3]
*/
void AlyssaVehicle_eqFunction_3345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3345};
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
  real_array_create(&tmp397, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp397, ((modelica_integer) 2) - ndims_base_array(&tmp397), &tmp398);
  real_array_create(&tmp399, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp399, ((modelica_integer) 2) - ndims_base_array(&tmp399), &tmp400);
  transpose_alloc_real_array(&tmp400, &tmp401);
  real_array_create(&tmp402, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp402, ((modelica_integer) 2) - ndims_base_array(&tmp402), &tmp403);
  real_array_create(&tmp404, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp404, ((modelica_integer) 2) - ndims_base_array(&tmp404), &tmp405);
  transpose_alloc_real_array(&tmp405, &tmp406);
  real_array_create(&tmp407, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp407, ((modelica_integer) 2) - ndims_base_array(&tmp407), &tmp408);
  real_array_create(&tmp409, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp409, ((modelica_integer) 2) - ndims_base_array(&tmp409), &tmp410);
  transpose_alloc_real_array(&tmp410, &tmp411);
  real_array_create(&tmp412, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp412, ((modelica_integer) 2) - ndims_base_array(&tmp412), &tmp413);
  real_array_create(&tmp414, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp414, ((modelica_integer) 2) - ndims_base_array(&tmp414), &tmp415);
  transpose_alloc_real_array(&tmp415, &tmp416);
  real_array_create(&tmp417, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp417, ((modelica_integer) 2) - ndims_base_array(&tmp417), &tmp418);
  real_array_create(&tmp419, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp419, ((modelica_integer) 2) - ndims_base_array(&tmp419), &tmp420);
  transpose_alloc_real_array(&tmp420, &tmp421);
  real_array_create(&tmp422, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp422, ((modelica_integer) 2) - ndims_base_array(&tmp422), &tmp423);
  real_array_create(&tmp424, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp424, ((modelica_integer) 2) - ndims_base_array(&tmp424), &tmp425);
  transpose_alloc_real_array(&tmp425, &tmp426);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5335]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp398, tmp401), 2, 0) + ((data->simulationInfo->realParameter[3827] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp403, tmp406), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5352]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp408, tmp411), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp413, tmp416), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5353]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp418, tmp421), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp423, tmp426), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5354]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3346
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[2] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[1] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[2] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[3]
*/
void AlyssaVehicle_eqFunction_3346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3346};
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
  real_array_create(&tmp427, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp427, ((modelica_integer) 2) - ndims_base_array(&tmp427), &tmp428);
  real_array_create(&tmp429, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp429, ((modelica_integer) 2) - ndims_base_array(&tmp429), &tmp430);
  transpose_alloc_real_array(&tmp430, &tmp431);
  real_array_create(&tmp432, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp432, ((modelica_integer) 2) - ndims_base_array(&tmp432), &tmp433);
  real_array_create(&tmp434, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp434, ((modelica_integer) 2) - ndims_base_array(&tmp434), &tmp435);
  transpose_alloc_real_array(&tmp435, &tmp436);
  real_array_create(&tmp437, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp437, ((modelica_integer) 2) - ndims_base_array(&tmp437), &tmp438);
  real_array_create(&tmp439, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp439, ((modelica_integer) 2) - ndims_base_array(&tmp439), &tmp440);
  transpose_alloc_real_array(&tmp440, &tmp441);
  real_array_create(&tmp442, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp442, ((modelica_integer) 2) - ndims_base_array(&tmp442), &tmp443);
  real_array_create(&tmp444, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp444, ((modelica_integer) 2) - ndims_base_array(&tmp444), &tmp445);
  transpose_alloc_real_array(&tmp445, &tmp446);
  real_array_create(&tmp447, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp447, ((modelica_integer) 2) - ndims_base_array(&tmp447), &tmp448);
  real_array_create(&tmp449, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp449, ((modelica_integer) 2) - ndims_base_array(&tmp449), &tmp450);
  transpose_alloc_real_array(&tmp450, &tmp451);
  real_array_create(&tmp452, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp452, ((modelica_integer) 2) - ndims_base_array(&tmp452), &tmp453);
  real_array_create(&tmp454, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp454, ((modelica_integer) 2) - ndims_base_array(&tmp454), &tmp455);
  transpose_alloc_real_array(&tmp455, &tmp456);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5334]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp428, tmp431), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp433, tmp436), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3828] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5352]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp438, tmp441), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp443, tmp446), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5353]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp448, tmp451), 1, 2) + ((data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp453, tmp456), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5354]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3347
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[1] = ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[1] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelRL.rim.rotor1D.phi) - (promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[2] + ((promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelRL.rim.rotor1D.phi) - vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelRL.rim.rotor1D.phi)) * vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[3]
*/
void AlyssaVehicle_eqFunction_3347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3347};
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
  real_array_create(&tmp457, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp457, ((modelica_integer) 2) - ndims_base_array(&tmp457), &tmp458);
  real_array_create(&tmp459, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp459, ((modelica_integer) 2) - ndims_base_array(&tmp459), &tmp460);
  transpose_alloc_real_array(&tmp460, &tmp461);
  real_array_create(&tmp462, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp462, ((modelica_integer) 2) - ndims_base_array(&tmp462), &tmp463);
  real_array_create(&tmp464, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp464, ((modelica_integer) 2) - ndims_base_array(&tmp464), &tmp465);
  transpose_alloc_real_array(&tmp465, &tmp466);
  real_array_create(&tmp467, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp467, ((modelica_integer) 2) - ndims_base_array(&tmp467), &tmp468);
  real_array_create(&tmp469, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp469, ((modelica_integer) 2) - ndims_base_array(&tmp469), &tmp470);
  transpose_alloc_real_array(&tmp470, &tmp471);
  real_array_create(&tmp472, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp472, ((modelica_integer) 2) - ndims_base_array(&tmp472), &tmp473);
  real_array_create(&tmp474, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp474, ((modelica_integer) 2) - ndims_base_array(&tmp474), &tmp475);
  transpose_alloc_real_array(&tmp475, &tmp476);
  real_array_create(&tmp477, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp477, ((modelica_integer) 2) - ndims_base_array(&tmp477), &tmp478);
  real_array_create(&tmp479, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp479, ((modelica_integer) 2) - ndims_base_array(&tmp479), &tmp480);
  transpose_alloc_real_array(&tmp480, &tmp481);
  real_array_create(&tmp482, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp482, ((modelica_integer) 2) - ndims_base_array(&tmp482), &tmp483);
  real_array_create(&tmp484, ((modelica_real*)&((&data->simulationInfo->realParameter[3826] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp484, ((modelica_integer) 2) - ndims_base_array(&tmp484), &tmp485);
  transpose_alloc_real_array(&tmp485, &tmp486);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5333]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp458, tmp461), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp463, tmp466), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5352]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp468, tmp471), 0, 1) + ((data->simulationInfo->realParameter[3828] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp473, tmp476), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5353]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp478, tmp481), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp483, tmp486), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3827] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5354]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7613(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7627(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7626(DATA *data, threadData_t *threadData);


/*
equation index: 3351
type: SIMPLE_ASSIGN
$DER.vehicle.wheelRL.contactPatch.pen = 0.5 * ($DER.vehicle.wheelRL.contactPatch.frame_a.r_0[3] + (vehicle.wheelRL.contactPatch.r0 + vehicle.wheelRL.contactPatch.frame_a.r_0[3] - road.z0) * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[3] / sqrt((vehicle.wheelRL.contactPatch.r0 + vehicle.wheelRL.contactPatch.frame_a.r_0[3] - road.z0) ^ 2.0 + 1e-12))
*/
void AlyssaVehicle_eqFunction_3351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3351};
  modelica_real tmp487;
  modelica_real tmp488;
  tmp487 = (data->simulationInfo->realParameter[3786] /* vehicle.wheelRL.contactPatch.r0 PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5280]] /* vehicle.wheelRL.contactPatch.frame_a.r_0[3] DUMMY_STATE */) - (data->simulationInfo->realParameter[410] /* road.z0 PARAM */);
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1009]] /* der(vehicle.wheelRL.contactPatch.pen) DUMMY_DER */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[3]) DUMMY_DER */) + ((data->simulationInfo->realParameter[3786] /* vehicle.wheelRL.contactPatch.r0 PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5280]] /* vehicle.wheelRL.contactPatch.frame_a.r_0[3] DUMMY_STATE */) - (data->simulationInfo->realParameter[410] /* road.z0 PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[3]) DUMMY_DER */),sqrt(tmp488),"sqrt((vehicle.wheelRL.contactPatch.r0 + vehicle.wheelRL.contactPatch.frame_a.r_0[3] - road.z0) ^ 2.0 + 1e-12)",equationIndexes)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7618(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7620(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7625(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7623(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7622(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7621(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7610(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7612(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7611(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7607(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7609(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7608(DATA *data, threadData_t *threadData);


/*
equation index: 3364
type: SIMPLE_ASSIGN
vehicle.wheelRL.contactPatch.vC[3] = vehicle.hubRL.bearingFrame.R.T[3,1] * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[1] + vehicle.hubRL.bearingFrame.R.T[3,2] * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[2] + vehicle.hubRL.bearingFrame.R.T[3,3] * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3364};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5285]] /* vehicle.wheelRL.contactPatch.vC[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3183]] /* vehicle.hubRL.bearingFrame.R.T[3,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3184]] /* vehicle.hubRL.bearingFrame.R.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3185]] /* vehicle.hubRL.bearingFrame.R.T[3,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[3]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3365
type: SIMPLE_ASSIGN
vehicle.wheelRL.contactPatch.vHub[2] = vehicle.hubRL.bearingFrame.R.T[2,1] * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[1] + vehicle.hubRL.bearingFrame.R.T[2,2] * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[2] + vehicle.hubRL.bearingFrame.R.T[2,3] * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3365};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5287]] /* vehicle.wheelRL.contactPatch.vHub[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* vehicle.hubRL.bearingFrame.R.T[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* vehicle.hubRL.bearingFrame.R.T[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* vehicle.hubRL.bearingFrame.R.T[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[3]) DUMMY_DER */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7630(DATA *data, threadData_t *threadData);


/*
equation index: 3367
type: SIMPLE_ASSIGN
vehicle.wheelRL.contactPatch.vHub[1] = vehicle.hubRL.bearingFrame.R.T[1,1] * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[1] + vehicle.hubRL.bearingFrame.R.T[1,2] * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[2] + vehicle.hubRL.bearingFrame.R.T[1,3] * $DER.vehicle.wheelRL.contactPatch.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5286]] /* vehicle.wheelRL.contactPatch.vHub[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3177]] /* vehicle.hubRL.bearingFrame.R.T[1,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3178]] /* vehicle.hubRL.bearingFrame.R.T[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3179]] /* vehicle.hubRL.bearingFrame.R.T[1,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* der(vehicle.wheelRL.contactPatch.frame_a.r_0[3]) DUMMY_DER */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7633(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7634(DATA *data, threadData_t *threadData);


/*
equation index: 3370
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[3,1] = (-0.222824801502141) * cos(vehicle.rearSuspension.cornerL.tieRod.revolute.angle) * $DER.vehicle.rearSuspension.cornerL.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_3370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3370};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[777]] /* der(vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[3,1]) DUMMY_DER */) = (-0.222824801502141) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3735]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[782]] /* der(vehicle.rearSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3371
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,3] = 0.222824801502141 * cos(vehicle.rearSuspension.cornerL.tieRod.revolute.angle) * $DER.vehicle.rearSuspension.cornerL.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_3371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3371};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* der(vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,3]) DUMMY_DER */) = (0.222824801502141) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3735]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[782]] /* der(vehicle.rearSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3372
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,2] = 0.9748585065718673 * cos(vehicle.rearSuspension.cornerL.tieRod.revolute.angle) * $DER.vehicle.rearSuspension.cornerL.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_3372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3372};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* der(vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,2]) DUMMY_DER */) = (0.9748585065718673) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3735]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[782]] /* der(vehicle.rearSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3373
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,1] = (-sin(vehicle.rearSuspension.cornerL.tieRod.revolute.angle)) * $DER.vehicle.rearSuspension.cornerL.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_3373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3373};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* der(vehicle.rearSuspension.cornerL.tieRod.revolute.R_rel.T[1,1]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3735]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[782]] /* der(vehicle.rearSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7604(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7603(DATA *data, threadData_t *threadData);


/*
equation index: 3376
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod1.rodLength = 0.3590264614203248
*/
void AlyssaVehicle_eqFunction_3376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3376};
  (data->simulationInfo->realParameter[2714] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.rodLength PARAM */) = 0.3590264614203248;
  TRACE_POP
}

/*
equation index: 3377
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod1.rodShape.length = vehicle.rearSuspension.cornerR.jointUSR.rod1.rodLength
*/
void AlyssaVehicle_eqFunction_3377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3377};
  (data->simulationInfo->realParameter[2716] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.rodShape.length PARAM */) = (data->simulationInfo->realParameter[2714] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 3378
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod1Length = vehicle.rearSuspension.cornerR.jointUSR.rod1.rodLength
*/
void AlyssaVehicle_eqFunction_3378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3378};
  (data->simulationInfo->realParameter[2735] /* vehicle.rearSuspension.cornerR.jointUSR.rod1Length PARAM */) = (data->simulationInfo->realParameter[2714] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 3379
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.revolute.lengthConstraint = vehicle.rearSuspension.cornerR.jointUSR.rod1Length
*/
void AlyssaVehicle_eqFunction_3379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3379};
  (data->simulationInfo->realParameter[2686] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.lengthConstraint PARAM */) = (data->simulationInfo->realParameter[2735] /* vehicle.rearSuspension.cornerR.jointUSR.rod1Length PARAM */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7707(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7708(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7709(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7710(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7883(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7884(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7885(DATA *data, threadData_t *threadData);


/*
equation index: 3387
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.revolute.positiveBranch = AlyssaModel.Experiments.OptimalControlFMU.vehicle.rearSuspension.cornerR.jointUSR.revolute.selectBranch(vehicle.rearSuspension.cornerR.jointUSR.revolute.lengthConstraint, {-1.0, 0.0, 0.0}, 0.017453292519943295 * (vehicle.rearSuspension.cornerR.jointUSR.revolute.phi_offset + vehicle.rearSuspension.cornerR.jointUSR.revolute.phi_guess), vehicle.rearSuspension.cornerR.jointUSR.revolute.r_a, vehicle.rearSuspension.cornerR.jointUSR.revolute.r_b)
*/
void AlyssaVehicle_eqFunction_3387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3387};
  real_array tmp489;
  real_array tmp490;
  real_array_create(&tmp489, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4271]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp490, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4274]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.r_b[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[182] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.positiveBranch PARAM */) = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerR_jointUSR_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[2686] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.lengthConstraint PARAM */), _OMC_LIT22, (0.017453292519943295) * ((data->simulationInfo->realParameter[2691] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[2690] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.phi_guess PARAM */)), tmp489, tmp490);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7712(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7887(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7711(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7713(DATA *data, threadData_t *threadData);


/*
equation index: 3392
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] = sin(vehicle.rearSuspension.cornerR.jointUSR.revolute.angle)
*/
void AlyssaVehicle_eqFunction_3392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3392};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4238]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */) = sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4243]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.angle DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7714(DATA *data, threadData_t *threadData);


/*
equation index: 3394
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,3] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,3] + vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3394};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4464]] /* vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4238]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4239]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3395
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,2] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,2] + vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3395};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4463]] /* vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,2] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4238]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1328]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4239]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3396
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,1] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,1] + vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3396};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4462]] /* vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[3,1] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4238]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4239]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3397
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,3] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,3] - vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3397};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4461]] /* vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4239]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4238]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7727(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7728(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7721(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7755(DATA *data, threadData_t *threadData);


/*
equation index: 3402
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,1] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,1] - vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3402};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4459]] /* vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,1] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4239]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4238]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7723(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7724(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7718(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7719(DATA *data, threadData_t *threadData);


/*
equation index: 3407
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springArm.frame_b.R.w[3] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.vehicleBody.body.w_a[2] + vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.vehicleBody.body.w_a[3]
*/
void AlyssaVehicle_eqFunction_3407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3407};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4467]] /* vehicle.rearSuspension.cornerR.springArm.frame_b.R.w[3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4238]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5049]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4239]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5050]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3408
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,2] = vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,2] - vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3408};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4460]] /* vehicle.rearSuspension.cornerR.springArm.frame_b.R.T[2,2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4239]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1328]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4238]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7732(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7733(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7737(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7738(DATA *data, threadData_t *threadData);


/*
equation index: 3413
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.shape_b.length = max(vehicle.rearSuspension.cornerR.coilover.s - vehicle.rearSuspension.cornerR.coilover.length_a, 0.0)
*/
void AlyssaVehicle_eqFunction_3413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3413};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4130]] /* vehicle.rearSuspension.cornerR.coilover.shape_b.length variable */) = fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4103]] /* vehicle.rearSuspension.cornerR.coilover.s DUMMY_STATE */) - (data->simulationInfo->realParameter[2570] /* vehicle.rearSuspension.cornerR.coilover.length_a PARAM */),0.0);
  TRACE_POP
}

/*
equation index: 3414
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.shape_a.length = min(vehicle.rearSuspension.cornerR.coilover.length_a, vehicle.rearSuspension.cornerR.coilover.s)
*/
void AlyssaVehicle_eqFunction_3414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3414};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4119]] /* vehicle.rearSuspension.cornerR.coilover.shape_a.length variable */) = fmin((data->simulationInfo->realParameter[2570] /* vehicle.rearSuspension.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4103]] /* vehicle.rearSuspension.cornerR.coilover.s DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7743(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7742(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7751(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7736(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7741(DATA *data, threadData_t *threadData);


/*
equation index: 3420
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.shape_b.r_shape[3] = vehicle.rearSuspension.cornerR.coilover.e_a[3] * min(vehicle.rearSuspension.cornerR.coilover.length_a, vehicle.rearSuspension.cornerR.coilover.s)
*/
void AlyssaVehicle_eqFunction_3420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3420};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4133]] /* vehicle.rearSuspension.cornerR.coilover.shape_b.r_shape[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4077]] /* vehicle.rearSuspension.cornerR.coilover.e_a[3] variable */)) * (fmin((data->simulationInfo->realParameter[2570] /* vehicle.rearSuspension.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4103]] /* vehicle.rearSuspension.cornerR.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
OMC_DISABLE_OPT
void AlyssaVehicle_functionInitialEquations_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  AlyssaVehicle_eqFunction_8237(data, threadData);
  AlyssaVehicle_eqFunction_7220(data, threadData);
  AlyssaVehicle_eqFunction_8238(data, threadData);
  AlyssaVehicle_eqFunction_7279(data, threadData);
  AlyssaVehicle_eqFunction_8239(data, threadData);
  AlyssaVehicle_eqFunction_7170(data, threadData);
  AlyssaVehicle_eqFunction_8240(data, threadData);
  AlyssaVehicle_eqFunction_8243(data, threadData);
  AlyssaVehicle_eqFunction_8242(data, threadData);
  AlyssaVehicle_eqFunction_8245(data, threadData);
  AlyssaVehicle_eqFunction_8241(data, threadData);
  AlyssaVehicle_eqFunction_8247(data, threadData);
  AlyssaVehicle_eqFunction_8244(data, threadData);
  AlyssaVehicle_eqFunction_8246(data, threadData);
  AlyssaVehicle_eqFunction_7219(data, threadData);
  AlyssaVehicle_eqFunction_7278(data, threadData);
  AlyssaVehicle_eqFunction_7169(data, threadData);
  AlyssaVehicle_eqFunction_8434(data, threadData);
  AlyssaVehicle_eqFunction_8440(data, threadData);
  AlyssaVehicle_eqFunction_8609(data, threadData);
  AlyssaVehicle_eqFunction_7218(data, threadData);
  AlyssaVehicle_eqFunction_8610(data, threadData);
  AlyssaVehicle_eqFunction_7277(data, threadData);
  AlyssaVehicle_eqFunction_8611(data, threadData);
  AlyssaVehicle_eqFunction_7168(data, threadData);
  AlyssaVehicle_eqFunction_8612(data, threadData);
  AlyssaVehicle_eqFunction_8615(data, threadData);
  AlyssaVehicle_eqFunction_8614(data, threadData);
  AlyssaVehicle_eqFunction_8617(data, threadData);
  AlyssaVehicle_eqFunction_8613(data, threadData);
  AlyssaVehicle_eqFunction_8619(data, threadData);
  AlyssaVehicle_eqFunction_8616(data, threadData);
  AlyssaVehicle_eqFunction_8618(data, threadData);
  AlyssaVehicle_eqFunction_7214(data, threadData);
  AlyssaVehicle_eqFunction_7273(data, threadData);
  AlyssaVehicle_eqFunction_7164(data, threadData);
  AlyssaVehicle_eqFunction_7222(data, threadData);
  AlyssaVehicle_eqFunction_7282(data, threadData);
  AlyssaVehicle_eqFunction_7172(data, threadData);
  AlyssaVehicle_eqFunction_7223(data, threadData);
  AlyssaVehicle_eqFunction_7283(data, threadData);
  AlyssaVehicle_eqFunction_7173(data, threadData);
  AlyssaVehicle_eqFunction_7224(data, threadData);
  AlyssaVehicle_eqFunction_7284(data, threadData);
  AlyssaVehicle_eqFunction_7174(data, threadData);
  AlyssaVehicle_eqFunction_7225(data, threadData);
  AlyssaVehicle_eqFunction_7285(data, threadData);
  AlyssaVehicle_eqFunction_7175(data, threadData);
  AlyssaVehicle_eqFunction_2983(data, threadData);
  AlyssaVehicle_eqFunction_2984(data, threadData);
  AlyssaVehicle_eqFunction_2985(data, threadData);
  AlyssaVehicle_eqFunction_7305(data, threadData);
  AlyssaVehicle_eqFunction_7312(data, threadData);
  AlyssaVehicle_eqFunction_7319(data, threadData);
  AlyssaVehicle_eqFunction_2989(data, threadData);
  AlyssaVehicle_eqFunction_2990(data, threadData);
  AlyssaVehicle_eqFunction_2991(data, threadData);
  AlyssaVehicle_eqFunction_7304(data, threadData);
  AlyssaVehicle_eqFunction_7311(data, threadData);
  AlyssaVehicle_eqFunction_7318(data, threadData);
  AlyssaVehicle_eqFunction_2995(data, threadData);
  AlyssaVehicle_eqFunction_2996(data, threadData);
  AlyssaVehicle_eqFunction_2997(data, threadData);
  AlyssaVehicle_eqFunction_7303(data, threadData);
  AlyssaVehicle_eqFunction_7660(data, threadData);
  AlyssaVehicle_eqFunction_7666(data, threadData);
  AlyssaVehicle_eqFunction_7678(data, threadData);
  AlyssaVehicle_eqFunction_8024(data, threadData);
  AlyssaVehicle_eqFunction_8030(data, threadData);
  AlyssaVehicle_eqFunction_8048(data, threadData);
  AlyssaVehicle_eqFunction_8396(data, threadData);
  AlyssaVehicle_eqFunction_8402(data, threadData);
  AlyssaVehicle_eqFunction_8417(data, threadData);
  AlyssaVehicle_eqFunction_8766(data, threadData);
  AlyssaVehicle_eqFunction_8772(data, threadData);
  AlyssaVehicle_eqFunction_8786(data, threadData);
  AlyssaVehicle_eqFunction_7310(data, threadData);
  AlyssaVehicle_eqFunction_7659(data, threadData);
  AlyssaVehicle_eqFunction_7665(data, threadData);
  AlyssaVehicle_eqFunction_7674(data, threadData);
  AlyssaVehicle_eqFunction_8023(data, threadData);
  AlyssaVehicle_eqFunction_8029(data, threadData);
  AlyssaVehicle_eqFunction_8041(data, threadData);
  AlyssaVehicle_eqFunction_8395(data, threadData);
  AlyssaVehicle_eqFunction_8401(data, threadData);
  AlyssaVehicle_eqFunction_8410(data, threadData);
  AlyssaVehicle_eqFunction_8765(data, threadData);
  AlyssaVehicle_eqFunction_8771(data, threadData);
  AlyssaVehicle_eqFunction_8781(data, threadData);
  AlyssaVehicle_eqFunction_7317(data, threadData);
  AlyssaVehicle_eqFunction_7658(data, threadData);
  AlyssaVehicle_eqFunction_7664(data, threadData);
  AlyssaVehicle_eqFunction_7670(data, threadData);
  AlyssaVehicle_eqFunction_8022(data, threadData);
  AlyssaVehicle_eqFunction_8028(data, threadData);
  AlyssaVehicle_eqFunction_8034(data, threadData);
  AlyssaVehicle_eqFunction_8394(data, threadData);
  AlyssaVehicle_eqFunction_8400(data, threadData);
  AlyssaVehicle_eqFunction_8406(data, threadData);
  AlyssaVehicle_eqFunction_8764(data, threadData);
  AlyssaVehicle_eqFunction_8770(data, threadData);
  AlyssaVehicle_eqFunction_8776(data, threadData);
  AlyssaVehicle_eqFunction_7006(data, threadData);
  AlyssaVehicle_eqFunction_3038(data, threadData);
  AlyssaVehicle_eqFunction_3039(data, threadData);
  AlyssaVehicle_eqFunction_7016(data, threadData);
  AlyssaVehicle_eqFunction_3041(data, threadData);
  AlyssaVehicle_eqFunction_7025(data, threadData);
  AlyssaVehicle_eqFunction_7026(data, threadData);
  AlyssaVehicle_eqFunction_7204(data, threadData);
  AlyssaVehicle_eqFunction_7206(data, threadData);
  AlyssaVehicle_eqFunction_7205(data, threadData);
  AlyssaVehicle_eqFunction_7215(data, threadData);
  AlyssaVehicle_eqFunction_7217(data, threadData);
  AlyssaVehicle_eqFunction_7216(data, threadData);
  AlyssaVehicle_eqFunction_7263(data, threadData);
  AlyssaVehicle_eqFunction_7265(data, threadData);
  AlyssaVehicle_eqFunction_7264(data, threadData);
  AlyssaVehicle_eqFunction_7274(data, threadData);
  AlyssaVehicle_eqFunction_7276(data, threadData);
  AlyssaVehicle_eqFunction_7275(data, threadData);
  AlyssaVehicle_eqFunction_7154(data, threadData);
  AlyssaVehicle_eqFunction_7156(data, threadData);
  AlyssaVehicle_eqFunction_7155(data, threadData);
  AlyssaVehicle_eqFunction_7165(data, threadData);
  AlyssaVehicle_eqFunction_7167(data, threadData);
  AlyssaVehicle_eqFunction_7166(data, threadData);
  AlyssaVehicle_eqFunction_7027(data, threadData);
  AlyssaVehicle_eqFunction_7020(data, threadData);
  AlyssaVehicle_eqFunction_3064(data, threadData);
  AlyssaVehicle_eqFunction_3065(data, threadData);
  AlyssaVehicle_eqFunction_3066(data, threadData);
  AlyssaVehicle_eqFunction_3067(data, threadData);
  AlyssaVehicle_eqFunction_7345(data, threadData);
  AlyssaVehicle_eqFunction_7346(data, threadData);
  AlyssaVehicle_eqFunction_7347(data, threadData);
  AlyssaVehicle_eqFunction_7348(data, threadData);
  AlyssaVehicle_eqFunction_7521(data, threadData);
  AlyssaVehicle_eqFunction_7522(data, threadData);
  AlyssaVehicle_eqFunction_7523(data, threadData);
  AlyssaVehicle_eqFunction_3075(data, threadData);
  AlyssaVehicle_eqFunction_7350(data, threadData);
  AlyssaVehicle_eqFunction_7525(data, threadData);
  AlyssaVehicle_eqFunction_7349(data, threadData);
  AlyssaVehicle_eqFunction_7351(data, threadData);
  AlyssaVehicle_eqFunction_3080(data, threadData);
  AlyssaVehicle_eqFunction_7352(data, threadData);
  AlyssaVehicle_eqFunction_3082(data, threadData);
  AlyssaVehicle_eqFunction_3083(data, threadData);
  AlyssaVehicle_eqFunction_3084(data, threadData);
  AlyssaVehicle_eqFunction_3085(data, threadData);
  AlyssaVehicle_eqFunction_7370(data, threadData);
  AlyssaVehicle_eqFunction_7371(data, threadData);
  AlyssaVehicle_eqFunction_7362(data, threadData);
  AlyssaVehicle_eqFunction_7393(data, threadData);
  AlyssaVehicle_eqFunction_3090(data, threadData);
  AlyssaVehicle_eqFunction_7367(data, threadData);
  AlyssaVehicle_eqFunction_7368(data, threadData);
  AlyssaVehicle_eqFunction_7359(data, threadData);
  AlyssaVehicle_eqFunction_7360(data, threadData);
  AlyssaVehicle_eqFunction_3095(data, threadData);
  AlyssaVehicle_eqFunction_7364(data, threadData);
  AlyssaVehicle_eqFunction_7365(data, threadData);
  AlyssaVehicle_eqFunction_7372(data, threadData);
  AlyssaVehicle_eqFunction_7373(data, threadData);
  AlyssaVehicle_eqFunction_3100(data, threadData);
  AlyssaVehicle_eqFunction_3101(data, threadData);
  AlyssaVehicle_eqFunction_7380(data, threadData);
  AlyssaVehicle_eqFunction_7378(data, threadData);
  AlyssaVehicle_eqFunction_7379(data, threadData);
  AlyssaVehicle_eqFunction_7381(data, threadData);
  AlyssaVehicle_eqFunction_7382(data, threadData);
  AlyssaVehicle_eqFunction_3107(data, threadData);
  AlyssaVehicle_eqFunction_7384(data, threadData);
  AlyssaVehicle_eqFunction_7385(data, threadData);
  AlyssaVehicle_eqFunction_3110(data, threadData);
  AlyssaVehicle_eqFunction_7387(data, threadData);
  AlyssaVehicle_eqFunction_7388(data, threadData);
  AlyssaVehicle_eqFunction_3113(data, threadData);
  AlyssaVehicle_eqFunction_7356(data, threadData);
  AlyssaVehicle_eqFunction_7357(data, threadData);
  AlyssaVehicle_eqFunction_7394(data, threadData);
  AlyssaVehicle_eqFunction_7395(data, threadData);
  AlyssaVehicle_eqFunction_7396(data, threadData);
  AlyssaVehicle_eqFunction_7397(data, threadData);
  AlyssaVehicle_eqFunction_7398(data, threadData);
  AlyssaVehicle_eqFunction_7399(data, threadData);
  AlyssaVehicle_eqFunction_7401(data, threadData);
  AlyssaVehicle_eqFunction_7403(data, threadData);
  AlyssaVehicle_eqFunction_7402(data, threadData);
  AlyssaVehicle_eqFunction_7400(data, threadData);
  AlyssaVehicle_eqFunction_7405(data, threadData);
  AlyssaVehicle_eqFunction_7404(data, threadData);
  AlyssaVehicle_eqFunction_7406(data, threadData);
  AlyssaVehicle_eqFunction_7413(data, threadData);
  AlyssaVehicle_eqFunction_7414(data, threadData);
  AlyssaVehicle_eqFunction_7418(data, threadData);
  AlyssaVehicle_eqFunction_7429(data, threadData);
  AlyssaVehicle_eqFunction_7420(data, threadData);
  AlyssaVehicle_eqFunction_7419(data, threadData);
  AlyssaVehicle_eqFunction_7430(data, threadData);
  AlyssaVehicle_eqFunction_7415(data, threadData);
  AlyssaVehicle_eqFunction_7427(data, threadData);
  AlyssaVehicle_eqFunction_7417(data, threadData);
  AlyssaVehicle_eqFunction_7416(data, threadData);
  AlyssaVehicle_eqFunction_7428(data, threadData);
  AlyssaVehicle_eqFunction_7431(data, threadData);
  AlyssaVehicle_eqFunction_7422(data, threadData);
  AlyssaVehicle_eqFunction_7421(data, threadData);
  AlyssaVehicle_eqFunction_7425(data, threadData);
  AlyssaVehicle_eqFunction_7424(data, threadData);
  AlyssaVehicle_eqFunction_7423(data, threadData);
  AlyssaVehicle_eqFunction_7426(data, threadData);
  AlyssaVehicle_eqFunction_7435(data, threadData);
  AlyssaVehicle_eqFunction_7433(data, threadData);
  AlyssaVehicle_eqFunction_7432(data, threadData);
  AlyssaVehicle_eqFunction_7434(data, threadData);
  AlyssaVehicle_eqFunction_7436(data, threadData);
  AlyssaVehicle_eqFunction_7437(data, threadData);
  AlyssaVehicle_eqFunction_7438(data, threadData);
  AlyssaVehicle_eqFunction_7509(data, threadData);
  AlyssaVehicle_eqFunction_3156(data, threadData);
  AlyssaVehicle_eqFunction_3157(data, threadData);
  AlyssaVehicle_eqFunction_7392(data, threadData);
  AlyssaVehicle_eqFunction_7524(data, threadData);
  AlyssaVehicle_eqFunction_3160(data, threadData);
  AlyssaVehicle_eqFunction_3161(data, threadData);
  AlyssaVehicle_eqFunction_7527(data, threadData);
  AlyssaVehicle_eqFunction_7531(data, threadData);
  AlyssaVehicle_eqFunction_7532(data, threadData);
  AlyssaVehicle_eqFunction_7529(data, threadData);
  AlyssaVehicle_eqFunction_7530(data, threadData);
  AlyssaVehicle_eqFunction_7528(data, threadData);
  AlyssaVehicle_eqFunction_7565(data, threadData);
  AlyssaVehicle_eqFunction_7572(data, threadData);
  AlyssaVehicle_eqFunction_7571(data, threadData);
  AlyssaVehicle_eqFunction_7577(data, threadData);
  AlyssaVehicle_eqFunction_7578(data, threadData);
  AlyssaVehicle_eqFunction_3173(data, threadData);
  AlyssaVehicle_eqFunction_7573(data, threadData);
  AlyssaVehicle_eqFunction_7566(data, threadData);
  AlyssaVehicle_eqFunction_7574(data, threadData);
  AlyssaVehicle_eqFunction_7576(data, threadData);
  AlyssaVehicle_eqFunction_7580(data, threadData);
  AlyssaVehicle_eqFunction_7584(data, threadData);
  AlyssaVehicle_eqFunction_7575(data, threadData);
  AlyssaVehicle_eqFunction_7579(data, threadData);
  AlyssaVehicle_eqFunction_7585(data, threadData);
  AlyssaVehicle_eqFunction_7586(data, threadData);
  AlyssaVehicle_eqFunction_7581(data, threadData);
  AlyssaVehicle_eqFunction_7590(data, threadData);
  AlyssaVehicle_eqFunction_7588(data, threadData);
  AlyssaVehicle_eqFunction_7587(data, threadData);
  AlyssaVehicle_eqFunction_7589(data, threadData);
  AlyssaVehicle_eqFunction_7591(data, threadData);
  AlyssaVehicle_eqFunction_7592(data, threadData);
  AlyssaVehicle_eqFunction_7593(data, threadData);
  AlyssaVehicle_eqFunction_7640(data, threadData);
  AlyssaVehicle_eqFunction_7641(data, threadData);
  AlyssaVehicle_eqFunction_7642(data, threadData);
  AlyssaVehicle_eqFunction_7643(data, threadData);
  AlyssaVehicle_eqFunction_7644(data, threadData);
  AlyssaVehicle_eqFunction_7645(data, threadData);
  AlyssaVehicle_eqFunction_7648(data, threadData);
  AlyssaVehicle_eqFunction_7650(data, threadData);
  AlyssaVehicle_eqFunction_7649(data, threadData);
  AlyssaVehicle_eqFunction_7646(data, threadData);
  AlyssaVehicle_eqFunction_7654(data, threadData);
  AlyssaVehicle_eqFunction_7653(data, threadData);
  AlyssaVehicle_eqFunction_7652(data, threadData);
  AlyssaVehicle_eqFunction_7567(data, threadData);
  AlyssaVehicle_eqFunction_7568(data, threadData);
  AlyssaVehicle_eqFunction_7570(data, threadData);
  AlyssaVehicle_eqFunction_7681(data, threadData);
  AlyssaVehicle_eqFunction_7677(data, threadData);
  AlyssaVehicle_eqFunction_7673(data, threadData);
  AlyssaVehicle_eqFunction_7569(data, threadData);
  AlyssaVehicle_eqFunction_7680(data, threadData);
  AlyssaVehicle_eqFunction_7676(data, threadData);
  AlyssaVehicle_eqFunction_7672(data, threadData);
  AlyssaVehicle_eqFunction_7647(data, threadData);
  AlyssaVehicle_eqFunction_7651(data, threadData);
  AlyssaVehicle_eqFunction_7679(data, threadData);
  AlyssaVehicle_eqFunction_7675(data, threadData);
  AlyssaVehicle_eqFunction_7671(data, threadData);
  AlyssaVehicle_eqFunction_7537(data, threadData);
  AlyssaVehicle_eqFunction_7538(data, threadData);
  AlyssaVehicle_eqFunction_7535(data, threadData);
  AlyssaVehicle_eqFunction_7536(data, threadData);
  AlyssaVehicle_eqFunction_7533(data, threadData);
  AlyssaVehicle_eqFunction_7534(data, threadData);
  AlyssaVehicle_eqFunction_7539(data, threadData);
  AlyssaVehicle_eqFunction_7540(data, threadData);
  AlyssaVehicle_eqFunction_7541(data, threadData);
  AlyssaVehicle_eqFunction_7555(data, threadData);
  AlyssaVehicle_eqFunction_7542(data, threadData);
  AlyssaVehicle_eqFunction_7547(data, threadData);
  AlyssaVehicle_eqFunction_7546(data, threadData);
  AlyssaVehicle_eqFunction_7548(data, threadData);
  AlyssaVehicle_eqFunction_7543(data, threadData);
  AlyssaVehicle_eqFunction_7553(data, threadData);
  AlyssaVehicle_eqFunction_7552(data, threadData);
  AlyssaVehicle_eqFunction_7554(data, threadData);
  AlyssaVehicle_eqFunction_7549(data, threadData);
  AlyssaVehicle_eqFunction_7551(data, threadData);
  AlyssaVehicle_eqFunction_7550(data, threadData);
  AlyssaVehicle_eqFunction_7545(data, threadData);
  AlyssaVehicle_eqFunction_7544(data, threadData);
  AlyssaVehicle_eqFunction_3243(data, threadData);
  AlyssaVehicle_eqFunction_3244(data, threadData);
  AlyssaVehicle_eqFunction_3245(data, threadData);
  AlyssaVehicle_eqFunction_3246(data, threadData);
  AlyssaVehicle_eqFunction_3247(data, threadData);
  AlyssaVehicle_eqFunction_3248(data, threadData);
  AlyssaVehicle_eqFunction_3249(data, threadData);
  AlyssaVehicle_eqFunction_3250(data, threadData);
  AlyssaVehicle_eqFunction_3251(data, threadData);
  AlyssaVehicle_eqFunction_7440(data, threadData);
  AlyssaVehicle_eqFunction_7595(data, threadData);
  AlyssaVehicle_eqFunction_7439(data, threadData);
  AlyssaVehicle_eqFunction_7441(data, threadData);
  AlyssaVehicle_eqFunction_3256(data, threadData);
  AlyssaVehicle_eqFunction_3257(data, threadData);
  AlyssaVehicle_eqFunction_3258(data, threadData);
  AlyssaVehicle_eqFunction_7442(data, threadData);
  AlyssaVehicle_eqFunction_7583(data, threadData);
  AlyssaVehicle_eqFunction_7444(data, threadData);
  AlyssaVehicle_eqFunction_7443(data, threadData);
  AlyssaVehicle_eqFunction_7473(data, threadData);
  AlyssaVehicle_eqFunction_7453(data, threadData);
  AlyssaVehicle_eqFunction_7454(data, threadData);
  AlyssaVehicle_eqFunction_7474(data, threadData);
  AlyssaVehicle_eqFunction_7450(data, threadData);
  AlyssaVehicle_eqFunction_7451(data, threadData);
  AlyssaVehicle_eqFunction_7445(data, threadData);
  AlyssaVehicle_eqFunction_7446(data, threadData);
  AlyssaVehicle_eqFunction_3271(data, threadData);
  AlyssaVehicle_eqFunction_7475(data, threadData);
  AlyssaVehicle_eqFunction_3273(data, threadData);
  AlyssaVehicle_eqFunction_3274(data, threadData);
  AlyssaVehicle_eqFunction_7507(data, threadData);
  AlyssaVehicle_eqFunction_7499(data, threadData);
  AlyssaVehicle_eqFunction_7495(data, threadData);
  AlyssaVehicle_eqFunction_7491(data, threadData);
  AlyssaVehicle_eqFunction_3279(data, threadData);
  AlyssaVehicle_eqFunction_3280(data, threadData);
  AlyssaVehicle_eqFunction_3281(data, threadData);
  AlyssaVehicle_eqFunction_7476(data, threadData);
  AlyssaVehicle_eqFunction_7477(data, threadData);
  AlyssaVehicle_eqFunction_7464(data, threadData);
  AlyssaVehicle_eqFunction_3285(data, threadData);
  AlyssaVehicle_eqFunction_3286(data, threadData);
  AlyssaVehicle_eqFunction_7469(data, threadData);
  AlyssaVehicle_eqFunction_7468(data, threadData);
  AlyssaVehicle_eqFunction_7467(data, threadData);
  AlyssaVehicle_eqFunction_3290(data, threadData);
  AlyssaVehicle_eqFunction_3291(data, threadData);
  AlyssaVehicle_eqFunction_3292(data, threadData);
  AlyssaVehicle_eqFunction_7465(data, threadData);
  AlyssaVehicle_eqFunction_7466(data, threadData);
  AlyssaVehicle_eqFunction_7456(data, threadData);
  AlyssaVehicle_eqFunction_3296(data, threadData);
  AlyssaVehicle_eqFunction_3297(data, threadData);
  AlyssaVehicle_eqFunction_7506(data, threadData);
  AlyssaVehicle_eqFunction_7505(data, threadData);
  AlyssaVehicle_eqFunction_7504(data, threadData);
  AlyssaVehicle_eqFunction_7461(data, threadData);
  AlyssaVehicle_eqFunction_7502(data, threadData);
  AlyssaVehicle_eqFunction_7501(data, threadData);
  AlyssaVehicle_eqFunction_7500(data, threadData);
  AlyssaVehicle_eqFunction_7460(data, threadData);
  AlyssaVehicle_eqFunction_7498(data, threadData);
  AlyssaVehicle_eqFunction_7497(data, threadData);
  AlyssaVehicle_eqFunction_7496(data, threadData);
  AlyssaVehicle_eqFunction_7459(data, threadData);
  AlyssaVehicle_eqFunction_7494(data, threadData);
  AlyssaVehicle_eqFunction_7493(data, threadData);
  AlyssaVehicle_eqFunction_7492(data, threadData);
  AlyssaVehicle_eqFunction_3313(data, threadData);
  AlyssaVehicle_eqFunction_3314(data, threadData);
  AlyssaVehicle_eqFunction_3315(data, threadData);
  AlyssaVehicle_eqFunction_7457(data, threadData);
  AlyssaVehicle_eqFunction_7458(data, threadData);
  AlyssaVehicle_eqFunction_7486(data, threadData);
  AlyssaVehicle_eqFunction_7487(data, threadData);
  AlyssaVehicle_eqFunction_7489(data, threadData);
  AlyssaVehicle_eqFunction_7488(data, threadData);
  AlyssaVehicle_eqFunction_7482(data, threadData);
  AlyssaVehicle_eqFunction_7483(data, threadData);
  AlyssaVehicle_eqFunction_7485(data, threadData);
  AlyssaVehicle_eqFunction_7484(data, threadData);
  AlyssaVehicle_eqFunction_7478(data, threadData);
  AlyssaVehicle_eqFunction_7479(data, threadData);
  AlyssaVehicle_eqFunction_7490(data, threadData);
  AlyssaVehicle_eqFunction_7481(data, threadData);
  AlyssaVehicle_eqFunction_7480(data, threadData);
  AlyssaVehicle_eqFunction_7472(data, threadData);
  AlyssaVehicle_eqFunction_7594(data, threadData);
  AlyssaVehicle_eqFunction_7596(data, threadData);
  AlyssaVehicle_eqFunction_7598(data, threadData);
  AlyssaVehicle_eqFunction_7605(data, threadData);
  AlyssaVehicle_eqFunction_7597(data, threadData);
  AlyssaVehicle_eqFunction_7606(data, threadData);
  AlyssaVehicle_eqFunction_7637(data, threadData);
  AlyssaVehicle_eqFunction_7638(data, threadData);
  AlyssaVehicle_eqFunction_7631(data, threadData);
  AlyssaVehicle_eqFunction_7632(data, threadData);
  AlyssaVehicle_eqFunction_7628(data, threadData);
  AlyssaVehicle_eqFunction_7629(data, threadData);
  AlyssaVehicle_eqFunction_3344(data, threadData);
  AlyssaVehicle_eqFunction_3345(data, threadData);
  AlyssaVehicle_eqFunction_3346(data, threadData);
  AlyssaVehicle_eqFunction_3347(data, threadData);
  AlyssaVehicle_eqFunction_7613(data, threadData);
  AlyssaVehicle_eqFunction_7627(data, threadData);
  AlyssaVehicle_eqFunction_7626(data, threadData);
  AlyssaVehicle_eqFunction_3351(data, threadData);
  AlyssaVehicle_eqFunction_7618(data, threadData);
  AlyssaVehicle_eqFunction_7620(data, threadData);
  AlyssaVehicle_eqFunction_7625(data, threadData);
  AlyssaVehicle_eqFunction_7623(data, threadData);
  AlyssaVehicle_eqFunction_7622(data, threadData);
  AlyssaVehicle_eqFunction_7621(data, threadData);
  AlyssaVehicle_eqFunction_7610(data, threadData);
  AlyssaVehicle_eqFunction_7612(data, threadData);
  AlyssaVehicle_eqFunction_7611(data, threadData);
  AlyssaVehicle_eqFunction_7607(data, threadData);
  AlyssaVehicle_eqFunction_7609(data, threadData);
  AlyssaVehicle_eqFunction_7608(data, threadData);
  AlyssaVehicle_eqFunction_3364(data, threadData);
  AlyssaVehicle_eqFunction_3365(data, threadData);
  AlyssaVehicle_eqFunction_7630(data, threadData);
  AlyssaVehicle_eqFunction_3367(data, threadData);
  AlyssaVehicle_eqFunction_7633(data, threadData);
  AlyssaVehicle_eqFunction_7634(data, threadData);
  AlyssaVehicle_eqFunction_3370(data, threadData);
  AlyssaVehicle_eqFunction_3371(data, threadData);
  AlyssaVehicle_eqFunction_3372(data, threadData);
  AlyssaVehicle_eqFunction_3373(data, threadData);
  AlyssaVehicle_eqFunction_7604(data, threadData);
  AlyssaVehicle_eqFunction_7603(data, threadData);
  AlyssaVehicle_eqFunction_3376(data, threadData);
  AlyssaVehicle_eqFunction_3377(data, threadData);
  AlyssaVehicle_eqFunction_3378(data, threadData);
  AlyssaVehicle_eqFunction_3379(data, threadData);
  AlyssaVehicle_eqFunction_7707(data, threadData);
  AlyssaVehicle_eqFunction_7708(data, threadData);
  AlyssaVehicle_eqFunction_7709(data, threadData);
  AlyssaVehicle_eqFunction_7710(data, threadData);
  AlyssaVehicle_eqFunction_7883(data, threadData);
  AlyssaVehicle_eqFunction_7884(data, threadData);
  AlyssaVehicle_eqFunction_7885(data, threadData);
  AlyssaVehicle_eqFunction_3387(data, threadData);
  AlyssaVehicle_eqFunction_7712(data, threadData);
  AlyssaVehicle_eqFunction_7887(data, threadData);
  AlyssaVehicle_eqFunction_7711(data, threadData);
  AlyssaVehicle_eqFunction_7713(data, threadData);
  AlyssaVehicle_eqFunction_3392(data, threadData);
  AlyssaVehicle_eqFunction_7714(data, threadData);
  AlyssaVehicle_eqFunction_3394(data, threadData);
  AlyssaVehicle_eqFunction_3395(data, threadData);
  AlyssaVehicle_eqFunction_3396(data, threadData);
  AlyssaVehicle_eqFunction_3397(data, threadData);
  AlyssaVehicle_eqFunction_7727(data, threadData);
  AlyssaVehicle_eqFunction_7728(data, threadData);
  AlyssaVehicle_eqFunction_7721(data, threadData);
  AlyssaVehicle_eqFunction_7755(data, threadData);
  AlyssaVehicle_eqFunction_3402(data, threadData);
  AlyssaVehicle_eqFunction_7723(data, threadData);
  AlyssaVehicle_eqFunction_7724(data, threadData);
  AlyssaVehicle_eqFunction_7718(data, threadData);
  AlyssaVehicle_eqFunction_7719(data, threadData);
  AlyssaVehicle_eqFunction_3407(data, threadData);
  AlyssaVehicle_eqFunction_3408(data, threadData);
  AlyssaVehicle_eqFunction_7732(data, threadData);
  AlyssaVehicle_eqFunction_7733(data, threadData);
  AlyssaVehicle_eqFunction_7737(data, threadData);
  AlyssaVehicle_eqFunction_7738(data, threadData);
  AlyssaVehicle_eqFunction_3413(data, threadData);
  AlyssaVehicle_eqFunction_3414(data, threadData);
  AlyssaVehicle_eqFunction_7743(data, threadData);
  AlyssaVehicle_eqFunction_7742(data, threadData);
  AlyssaVehicle_eqFunction_7751(data, threadData);
  AlyssaVehicle_eqFunction_7736(data, threadData);
  AlyssaVehicle_eqFunction_7741(data, threadData);
  AlyssaVehicle_eqFunction_3420(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif
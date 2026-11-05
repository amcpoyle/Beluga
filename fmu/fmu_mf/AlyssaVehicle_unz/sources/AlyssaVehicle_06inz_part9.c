#include "AlyssaVehicle_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern void AlyssaVehicle_eqFunction_8855(DATA *data, threadData_t *threadData);


/*
equation index: 4394
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.a = (rig.tau[4] + vehicle.wheelRR.rim.rotor1D.flange_b.tau) / vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.J
*/
void AlyssaVehicle_eqFunction_4394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4394};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5414]] /* vehicle.wheelRR.rim.rotor1D.a variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1309]] /* rig.tau[4] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5415]] /* vehicle.wheelRR.rim.rotor1D.flange_b.tau variable */),(data->simulationInfo->realParameter[3936] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.J PARAM */),"vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.J",equationIndexes);
  TRACE_POP
}

/*
equation index: 4395
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.damper.a_rel = -vehicle.wheelRR.rim.rotor1D.a
*/
void AlyssaVehicle_eqFunction_4395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4395};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5393]] /* vehicle.wheelRR.rim.damper.a_rel variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5414]] /* vehicle.wheelRR.rim.rotor1D.a variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8854(DATA *data, threadData_t *threadData);


/*
equation index: 4397
type: SIMPLE_ASSIGN
$DER.vehicle.wheelRR.rim.rotor1D.w = vehicle.wheelRR.rim.rotor1D.a
*/
void AlyssaVehicle_eqFunction_4397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4397};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[75]] /* der(vehicle.wheelRR.rim.rotor1D.w) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5414]] /* vehicle.wheelRR.rim.rotor1D.a variable */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8006(DATA *data, threadData_t *threadData);


/*
equation index: 4399
type: SIMPLE_ASSIGN
$DER.vehicle.wheelFL.slipDynamics.kappa = 0.0
*/
void AlyssaVehicle_eqFunction_4399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4399};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* der(vehicle.wheelFL.slipDynamics.kappa) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 4400
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipDynamics.kappa = 0.0
*/
void AlyssaVehicle_eqFunction_4400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4400};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* vehicle.wheelFL.slipDynamics.kappa STATE(1) */) = 0.0;
  TRACE_POP
}

/*
equation index: 4401
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.vRim = vehicle.wheelFL.contactPatch.vx + vehicle.wheelFL.slipDynamics.sigmaX * $DER.vehicle.wheelFL.slipDynamics.kappa + vehicle.wheelFL.slipDynamics.vxAbs * vehicle.wheelFL.slipDynamics.kappa
*/
void AlyssaVehicle_eqFunction_4401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4401};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5171]] /* vehicle.wheelFL.rim.vRim variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5102]] /* vehicle.wheelFL.contactPatch.vx variable */) + ((data->simulationInfo->realParameter[3609] /* vehicle.wheelFL.slipDynamics.sigmaX PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* der(vehicle.wheelFL.slipDynamics.kappa) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5173]] /* vehicle.wheelFL.slipDynamics.vxAbs variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* vehicle.wheelFL.slipDynamics.kappa STATE(1) */));
  TRACE_POP
}

/*
equation index: 4402
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.w = vehicle.wheelFL.rim.vRim / vehicle.wheelFL.rim.rEff
*/
void AlyssaVehicle_eqFunction_4402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4402};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* vehicle.wheelFL.rim.rotor1D.w STATE(1) */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5171]] /* vehicle.wheelFL.rim.vRim variable */),(data->simulationInfo->realParameter[3572] /* vehicle.wheelFL.rim.rEff PARAM */),"vehicle.wheelFL.rim.rEff",equationIndexes);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_6930(DATA *data, threadData_t *threadData);


/*
equation index: 4404
type: SIMPLE_ASSIGN
$DER.vehicle.wheelFL.rim.damper.phi_rel = vehicle.wheelFL.rim.damper.w_rel
*/
void AlyssaVehicle_eqFunction_4404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4404};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* der(vehicle.wheelFL.rim.damper.phi_rel) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5118]] /* vehicle.wheelFL.rim.damper.w_rel DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 4405
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.damper.tau = vehicle.wheelFL.rim.damper.d * vehicle.wheelFL.rim.damper.w_rel
*/
void AlyssaVehicle_eqFunction_4405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4405};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5117]] /* vehicle.wheelFL.rim.damper.tau variable */) = ((data->simulationInfo->realParameter[3560] /* vehicle.wheelFL.rim.damper.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5118]] /* vehicle.wheelFL.rim.damper.w_rel DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4406
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.damper.lossPower = vehicle.wheelFL.rim.damper.tau * vehicle.wheelFL.rim.damper.w_rel
*/
void AlyssaVehicle_eqFunction_4406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4406};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5115]] /* vehicle.wheelFL.rim.damper.lossPower variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5117]] /* vehicle.wheelFL.rim.damper.tau variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5118]] /* vehicle.wheelFL.rim.damper.w_rel DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7014(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8346(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6985(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8351(DATA *data, threadData_t *threadData);


/*
equation index: 4411
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipDynamics.tanAlpha = 0.0
*/
void AlyssaVehicle_eqFunction_4411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4411};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* vehicle.wheelFL.slipDynamics.tanAlpha STATE(1) */) = 0.0;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8876(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8877(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8878(DATA *data, threadData_t *threadData);


/*
equation index: 4415
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipForces.muY = vehicle.wheelFL.slipForces.muYMax * sin(vehicle.wheelFL.slipForces.params.qy * atan(vehicle.wheelFL.slipForces.sy * vehicle.wheelFL.slipForces.rho))
*/
void AlyssaVehicle_eqFunction_4415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4415};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5181]] /* vehicle.wheelFL.slipForces.muY variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5182]] /* vehicle.wheelFL.slipForces.muYMax variable */)) * (sin(((data->simulationInfo->realParameter[3654] /* vehicle.wheelFL.slipForces.params.qy PARAM */)) * (atan(((data->simulationInfo->realParameter[3666] /* vehicle.wheelFL.slipForces.sy PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5184]] /* vehicle.wheelFL.slipForces.rho variable */))))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8895(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8897(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8896(DATA *data, threadData_t *threadData);


/*
equation index: 4419
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipForces.muX = vehicle.wheelFL.slipForces.muXMax * sin(vehicle.wheelFL.slipForces.params.qx * atan(vehicle.wheelFL.slipForces.sx * vehicle.wheelFL.slipForces.rho))
*/
void AlyssaVehicle_eqFunction_4419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4419};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5179]] /* vehicle.wheelFL.slipForces.muX variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5180]] /* vehicle.wheelFL.slipForces.muXMax variable */)) * (sin(((data->simulationInfo->realParameter[3653] /* vehicle.wheelFL.slipForces.params.qx PARAM */)) * (atan(((data->simulationInfo->realParameter[3665] /* vehicle.wheelFL.slipForces.sx PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5184]] /* vehicle.wheelFL.slipForces.rho variable */))))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8885(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8894(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8893(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8886(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8887(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8892(DATA *data, threadData_t *threadData);


/*
equation index: 4426
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.a = (rig.tau[1] + vehicle.wheelFL.rim.rotor1D.flange_b.tau) / vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.J
*/
void AlyssaVehicle_eqFunction_4426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4426};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5135]] /* vehicle.wheelFL.rim.rotor1D.a variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1306]] /* rig.tau[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5136]] /* vehicle.wheelFL.rim.rotor1D.flange_b.tau variable */),(data->simulationInfo->realParameter[3585] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.J PARAM */),"vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.J",equationIndexes);
  TRACE_POP
}

/*
equation index: 4427
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.damper.a_rel = -vehicle.wheelFL.rim.rotor1D.a
*/
void AlyssaVehicle_eqFunction_4427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4427};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5114]] /* vehicle.wheelFL.rim.damper.a_rel variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5135]] /* vehicle.wheelFL.rim.rotor1D.a variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8891(DATA *data, threadData_t *threadData);


/*
equation index: 4429
type: SIMPLE_ASSIGN
$DER.vehicle.wheelFL.rim.rotor1D.w = vehicle.wheelFL.rim.rotor1D.a
*/
void AlyssaVehicle_eqFunction_4429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4429};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[63]] /* der(vehicle.wheelFL.rim.rotor1D.w) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5135]] /* vehicle.wheelFL.rim.rotor1D.a variable */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8366(DATA *data, threadData_t *threadData);


/*
equation index: 4431
type: SIMPLE_ASSIGN
$DER.vehicle.wheelFR.slipDynamics.kappa = 0.0
*/
void AlyssaVehicle_eqFunction_4431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4431};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* der(vehicle.wheelFR.slipDynamics.kappa) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 4432
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipDynamics.kappa = 0.0
*/
void AlyssaVehicle_eqFunction_4432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4432};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* vehicle.wheelFR.slipDynamics.kappa STATE(1) */) = 0.0;
  TRACE_POP
}

/*
equation index: 4433
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.vRim = vehicle.wheelFR.contactPatch.vx + vehicle.wheelFR.slipDynamics.sigmaX * $DER.vehicle.wheelFR.slipDynamics.kappa + vehicle.wheelFR.slipDynamics.vxAbs * vehicle.wheelFR.slipDynamics.kappa
*/
void AlyssaVehicle_eqFunction_4433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4433};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5264]] /* vehicle.wheelFR.rim.vRim variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5195]] /* vehicle.wheelFR.contactPatch.vx variable */) + ((data->simulationInfo->realParameter[3726] /* vehicle.wheelFR.slipDynamics.sigmaX PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* der(vehicle.wheelFR.slipDynamics.kappa) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5266]] /* vehicle.wheelFR.slipDynamics.vxAbs variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* vehicle.wheelFR.slipDynamics.kappa STATE(1) */));
  TRACE_POP
}

/*
equation index: 4434
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.w = vehicle.wheelFR.rim.vRim / vehicle.wheelFR.rim.rEff
*/
void AlyssaVehicle_eqFunction_4434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4434};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* vehicle.wheelFR.rim.rotor1D.w STATE(1) */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5264]] /* vehicle.wheelFR.rim.vRim variable */),(data->simulationInfo->realParameter[3689] /* vehicle.wheelFR.rim.rEff PARAM */),"vehicle.wheelFR.rim.rEff",equationIndexes);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_6929(DATA *data, threadData_t *threadData);


/*
equation index: 4436
type: SIMPLE_ASSIGN
$DER.vehicle.wheelFR.rim.damper.phi_rel = vehicle.wheelFR.rim.damper.w_rel
*/
void AlyssaVehicle_eqFunction_4436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4436};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* der(vehicle.wheelFR.rim.damper.phi_rel) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5211]] /* vehicle.wheelFR.rim.damper.w_rel DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 4437
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.damper.tau = vehicle.wheelFR.rim.damper.d * vehicle.wheelFR.rim.damper.w_rel
*/
void AlyssaVehicle_eqFunction_4437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4437};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5210]] /* vehicle.wheelFR.rim.damper.tau variable */) = ((data->simulationInfo->realParameter[3677] /* vehicle.wheelFR.rim.damper.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5211]] /* vehicle.wheelFR.rim.damper.w_rel DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4438
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.damper.lossPower = vehicle.wheelFR.rim.damper.tau * vehicle.wheelFR.rim.damper.w_rel
*/
void AlyssaVehicle_eqFunction_4438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4438};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5208]] /* vehicle.wheelFR.rim.damper.lossPower variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5210]] /* vehicle.wheelFR.rim.damper.tau variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5211]] /* vehicle.wheelFR.rim.damper.w_rel DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7015(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8739(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6981(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8744(DATA *data, threadData_t *threadData);


/*
equation index: 4443
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipDynamics.tanAlpha = 0.0
*/
void AlyssaVehicle_eqFunction_4443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4443};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* vehicle.wheelFR.slipDynamics.tanAlpha STATE(1) */) = 0.0;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8912(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8913(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8914(DATA *data, threadData_t *threadData);


/*
equation index: 4447
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipForces.muY = vehicle.wheelFR.slipForces.muYMax * sin(vehicle.wheelFR.slipForces.params.qy * atan(vehicle.wheelFR.slipForces.sy * vehicle.wheelFR.slipForces.rho))
*/
void AlyssaVehicle_eqFunction_4447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4447};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5274]] /* vehicle.wheelFR.slipForces.muY variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5275]] /* vehicle.wheelFR.slipForces.muYMax variable */)) * (sin(((data->simulationInfo->realParameter[3771] /* vehicle.wheelFR.slipForces.params.qy PARAM */)) * (atan(((data->simulationInfo->realParameter[3783] /* vehicle.wheelFR.slipForces.sy PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5277]] /* vehicle.wheelFR.slipForces.rho variable */))))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8931(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10529(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8932(DATA *data, threadData_t *threadData);


/*
equation index: 4451
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipForces.muX = vehicle.wheelFR.slipForces.muXMax * sin(vehicle.wheelFR.slipForces.params.qx * atan(vehicle.wheelFR.slipForces.sx * vehicle.wheelFR.slipForces.rho))
*/
void AlyssaVehicle_eqFunction_4451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4451};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5272]] /* vehicle.wheelFR.slipForces.muX variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5273]] /* vehicle.wheelFR.slipForces.muXMax variable */)) * (sin(((data->simulationInfo->realParameter[3770] /* vehicle.wheelFR.slipForces.params.qx PARAM */)) * (atan(((data->simulationInfo->realParameter[3782] /* vehicle.wheelFR.slipForces.sx PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5277]] /* vehicle.wheelFR.slipForces.rho variable */))))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8921(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8930(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8929(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8922(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8923(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8928(DATA *data, threadData_t *threadData);


/*
equation index: 4458
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.a = (rig.tau[2] + vehicle.wheelFR.rim.rotor1D.flange_b.tau) / vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.J
*/
void AlyssaVehicle_eqFunction_4458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4458};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5228]] /* vehicle.wheelFR.rim.rotor1D.a variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1307]] /* rig.tau[2] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5229]] /* vehicle.wheelFR.rim.rotor1D.flange_b.tau variable */),(data->simulationInfo->realParameter[3702] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.J PARAM */),"vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.J",equationIndexes);
  TRACE_POP
}

/*
equation index: 4459
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.damper.a_rel = -vehicle.wheelFR.rim.rotor1D.a
*/
void AlyssaVehicle_eqFunction_4459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4459};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5207]] /* vehicle.wheelFR.rim.damper.a_rel variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5228]] /* vehicle.wheelFR.rim.rotor1D.a variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8927(DATA *data, threadData_t *threadData);


/*
equation index: 4461
type: SIMPLE_ASSIGN
$DER.vehicle.wheelFR.rim.rotor1D.w = vehicle.wheelFR.rim.rotor1D.a
*/
void AlyssaVehicle_eqFunction_4461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4461};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[67]] /* der(vehicle.wheelFR.rim.rotor1D.w) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5228]] /* vehicle.wheelFR.rim.rotor1D.a variable */);
  TRACE_POP
}

/*
equation index: 5974
type: LINEAR

<var>vehicle.vehicleBody.body.z_a[3]</var>
<var>vehicle.vehicleBody.body.z_a[1]</var>
<var>$DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.w[1]</var>
<var>vehicle.rearSuspension.frame_bL.t[1]</var>
<var>vehicle.rearSuspension.cornerL.staticAlign.frame_a.t[3]</var>
<var>vehicle.wheelRL.rim.frame_a.t[2]</var>
<var>$DER.$DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.k1b</var>
<var>$DER.$DER.vehicle.rearSuspension.cornerL.tieRod.revolute.k1b</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.C</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.k1a</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.C</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.k1a</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerR.tieRod.revolute.C</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerR.tieRod.revolute.k1a</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerL.tieRod.revolute.C</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerL.tieRod.revolute.k1a</var>
<var>$DER.$DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.k1b</var>
<var>vehicle.rearSuspension.frame_bR.t[1]</var>
<var>vehicle.rearSuspension.cornerR.staticAlign.frame_a.t[3]</var>
<var>vehicle.wheelRR.rim.frame_a.t[2]</var>
<var>$DER.$DER.vehicle.rearSuspension.cornerR.tieRod.revolute.k1b</var>
<var>$DER.$DER.vehicle.rearSuspension.cornerL.tieRod.revolute.angle</var>
<var>$DER.$DER.vehicle.rearSuspension.cornerR.tieRod.revolute.angle</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerR.tieRod.revolute.angle</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerL.tieRod.revolute.angle</var>
<var>vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.t[3]</var>
<var>vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.t[2]</var>
<var>vehicle.rearSuspension.cornerL.uca.frame_a.t[2]</var>
<var>vehicle.rearSuspension.cornerL.uca.frame_a.t[3]</var>
<var>vehicle.rearSuspension.cornerL.jointUSR.f_rod</var>
<var>vehicle.rearSuspension.cornerL.jointUSR.rod1.f_b_a[2]</var>
<var>vehicle.rearSuspension.cornerL.jointUSR.rod1.f_b_a[3]</var>
<var>vehicle.rearSuspension.cornerL.jointUSR.rod1.f_b_a[1]</var>
<var>vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.f[3]</var>
<var>vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.f[1]</var>
<var>vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.t[1]</var>
<var>vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.f[2]</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerL.jointUSR.rod1.rRod_0[2]</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerL.jointUSR.rod1.rRod_0[3]</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerR.jointUSR.rod1.rRod_0[3]</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerR.jointUSR.rod1.rRod_0[2]</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerR.jointUSR.rod1.rRod_0[1]</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerL.jointUSR.rod1.rRod_0[1]</var>
<var>vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.t[2]</var>
<var>vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.t[3]</var>
<var>vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.t[1]</var>
<var>vehicle.rearSuspension.cornerR.uca.frame_a.t[2]</var>
<var>vehicle.rearSuspension.cornerR.uca.frame_a.t[3]</var>
<var>vehicle.rearSuspension.cornerR.jointUSR.f_rod</var>
<var>vehicle.rearSuspension.cornerR.jointUSR.rod1.f_b_a[3]</var>
<var>vehicle.rearSuspension.cornerR.jointUSR.rod1.f_b_a[2]</var>
<var>vehicle.rearSuspension.cornerR.jointUSR.rod1.f_b_a[1]</var>
<var>vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.f[2]</var>
<var>vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.f[1]</var>
<var>vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.f[3]</var>
<var>vehicle.rearSuspension.cornerR.jointUSR.revolute.frame_b.t[3]</var>
<var>vehicle.rearSuspension.cornerL.jointUSR.revolute.frame_b.t[3]</var>
<var>vehicle.rearSuspension.cornerL.tieRod.f_rod</var>
<var>vehicle.rearSuspension.cornerR.tieRod.f_rod</var>
<var>vehicle.frontSuspension.cornerR.upright.a_0[2]</var>
<var>vehicle.frontSuspension.cornerR.upright.a_0[1]</var>
<var>vehicle.frontSuspension.cornerR.upright.a_0[3]</var>
<var>vehicle.frontSuspension.cornerL.upright.a_0[3]</var>
<var>vehicle.frontSuspension.cornerL.upright.a_0[2]</var>
<var>vehicle.frontSuspension.cornerL.upright.a_0[1]</var>
<var>vehicle.rearSuspension.cornerR.ucaPivot.a</var>
<var>vehicle.rearSuspension.cornerL.ucaPivot.a</var>
<var>vehicle.frontSuspension.cornerR.ucaPivot.a</var>
<var>vehicle.frontSuspension.cornerL.ucaPivot.a</var>
<var>vehicle.frontSuspension.cornerR.upright.z_a[2]</var>
<var>vehicle.frontSuspension.cornerR.upright.z_a[1]</var>
<var>vehicle.frontSuspension.cornerR.upright.z_a[3]</var>
<var>vehicle.frontSuspension.cornerL.upright.z_a[2]</var>
<var>vehicle.frontSuspension.cornerL.upright.z_a[1]</var>
<var>vehicle.frontSuspension.cornerL.upright.z_a[3]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void AlyssaVehicle_eqFunction_5974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5974};
  /* Linear equation system */
  int retValue;
  double aux_x[75] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[5053]] /* vehicle.vehicleBody.body.z_a[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[5051]] /* vehicle.vehicleBody.body.z_a[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[866]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.w[1]) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4925]] /* vehicle.rearSuspension.frame_bL.t[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3649]] /* vehicle.rearSuspension.cornerL.staticAlign.frame_a.t[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[5309]] /* vehicle.wheelRL.rim.frame_a.t[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[197]] /* der(der(vehicle.rearSuspension.cornerL.jointUSR.revolute.k1b)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[217]] /* der(der(vehicle.rearSuspension.cornerL.tieRod.revolute.k1b)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[93]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.revolute.C)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[96]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.revolute.k1a)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[138]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.revolute.C)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[141]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.revolute.k1a)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[157]] /* der(der(vehicle.frontSuspension.cornerR.tieRod.revolute.C)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[161]] /* der(der(vehicle.frontSuspension.cornerR.tieRod.revolute.k1a)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[112]] /* der(der(vehicle.frontSuspension.cornerL.tieRod.revolute.C)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[116]] /* der(der(vehicle.frontSuspension.cornerL.tieRod.revolute.k1a)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[242]] /* der(der(vehicle.rearSuspension.cornerR.jointUSR.revolute.k1b)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4928]] /* vehicle.rearSuspension.frame_bR.t[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4509]] /* vehicle.rearSuspension.cornerR.staticAlign.frame_a.t[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[5402]] /* vehicle.wheelRR.rim.frame_a.t[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[262]] /* der(der(vehicle.rearSuspension.cornerR.tieRod.revolute.k1b)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[213]] /* der(der(vehicle.rearSuspension.cornerL.tieRod.revolute.angle)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[258]] /* der(der(vehicle.rearSuspension.cornerR.tieRod.revolute.angle)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[158]] /* der(der(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[113]] /* der(der(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3757]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.t[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3756]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.t[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3868]] /* vehicle.rearSuspension.cornerL.uca.frame_a.t[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3869]] /* vehicle.rearSuspension.cornerL.uca.frame_a.t[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3280]] /* vehicle.rearSuspension.cornerL.jointUSR.f_rod variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3452]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.f_b_a[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3453]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.f_b_a[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3451]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.f_b_a[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3754]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.f[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3752]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.f[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3755]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.t[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3753]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.f[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[105]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.rod1.rRod_0[2])) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[106]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.rod1.rRod_0[3])) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[151]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.rod1.rRod_0[3])) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[150]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.rod1.rRod_0[2])) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[149]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.rod1.rRod_0[1])) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[104]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.rod1.rRod_0[1])) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4616]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.t[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4617]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.t[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4615]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.t[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4728]] /* vehicle.rearSuspension.cornerR.uca.frame_a.t[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4729]] /* vehicle.rearSuspension.cornerR.uca.frame_a.t[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4140]] /* vehicle.rearSuspension.cornerR.jointUSR.f_rod variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4313]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.f_b_a[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4312]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.f_b_a[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4311]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.f_b_a[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4613]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.f[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4612]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.f[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4614]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.f[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4263]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.frame_b.t[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3403]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.frame_b.t[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3665]] /* vehicle.rearSuspension.cornerL.tieRod.f_rod variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4525]] /* vehicle.rearSuspension.cornerR.tieRod.f_rod variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2919]] /* vehicle.frontSuspension.cornerR.upright.a_0[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2918]] /* vehicle.frontSuspension.cornerR.upright.a_0[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2920]] /* vehicle.frontSuspension.cornerR.upright.a_0[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2066]] /* vehicle.frontSuspension.cornerL.upright.a_0[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2065]] /* vehicle.frontSuspension.cornerL.upright.a_0[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2064]] /* vehicle.frontSuspension.cornerL.upright.a_0[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4773]] /* vehicle.rearSuspension.cornerR.ucaPivot.a variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3913]] /* vehicle.rearSuspension.cornerL.ucaPivot.a variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2898]] /* vehicle.frontSuspension.cornerR.ucaPivot.a variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2044]] /* vehicle.frontSuspension.cornerL.ucaPivot.a variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2973]] /* vehicle.frontSuspension.cornerR.upright.z_a[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2972]] /* vehicle.frontSuspension.cornerR.upright.z_a[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2974]] /* vehicle.frontSuspension.cornerR.upright.z_a[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2119]] /* vehicle.frontSuspension.cornerL.upright.z_a[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2118]] /* vehicle.frontSuspension.cornerL.upright.z_a[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2120]] /* vehicle.frontSuspension.cornerL.upright.z_a[3] variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 5974 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 8, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,5974};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 5974 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5053]] /* vehicle.vehicleBody.body.z_a[3] variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5051]] /* vehicle.vehicleBody.body.z_a[1] variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[866]] /* der(vehicle.rearSuspension.cornerR.jointUSR.revolute.R_rel.w[1]) DUMMY_DER */) = aux_x[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4925]] /* vehicle.rearSuspension.frame_bL.t[1] variable */) = aux_x[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3649]] /* vehicle.rearSuspension.cornerL.staticAlign.frame_a.t[3] variable */) = aux_x[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5309]] /* vehicle.wheelRL.rim.frame_a.t[2] variable */) = aux_x[5];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[197]] /* der(der(vehicle.rearSuspension.cornerL.jointUSR.revolute.k1b)) DUMMY_DER */) = aux_x[6];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* der(der(vehicle.rearSuspension.cornerL.tieRod.revolute.k1b)) DUMMY_DER */) = aux_x[7];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.revolute.C)) DUMMY_DER */) = aux_x[8];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.revolute.k1a)) DUMMY_DER */) = aux_x[9];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.revolute.C)) DUMMY_DER */) = aux_x[10];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.revolute.k1a)) DUMMY_DER */) = aux_x[11];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* der(der(vehicle.frontSuspension.cornerR.tieRod.revolute.C)) DUMMY_DER */) = aux_x[12];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* der(der(vehicle.frontSuspension.cornerR.tieRod.revolute.k1a)) DUMMY_DER */) = aux_x[13];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* der(der(vehicle.frontSuspension.cornerL.tieRod.revolute.C)) DUMMY_DER */) = aux_x[14];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* der(der(vehicle.frontSuspension.cornerL.tieRod.revolute.k1a)) DUMMY_DER */) = aux_x[15];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[242]] /* der(der(vehicle.rearSuspension.cornerR.jointUSR.revolute.k1b)) DUMMY_DER */) = aux_x[16];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4928]] /* vehicle.rearSuspension.frame_bR.t[1] variable */) = aux_x[17];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4509]] /* vehicle.rearSuspension.cornerR.staticAlign.frame_a.t[3] variable */) = aux_x[18];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5402]] /* vehicle.wheelRR.rim.frame_a.t[2] variable */) = aux_x[19];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* der(der(vehicle.rearSuspension.cornerR.tieRod.revolute.k1b)) DUMMY_DER */) = aux_x[20];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* der(der(vehicle.rearSuspension.cornerL.tieRod.revolute.angle)) DUMMY_DER */) = aux_x[21];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* der(der(vehicle.rearSuspension.cornerR.tieRod.revolute.angle)) DUMMY_DER */) = aux_x[22];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* der(der(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)) DUMMY_DER */) = aux_x[23];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* der(der(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)) DUMMY_DER */) = aux_x[24];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3757]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.t[3] variable */) = aux_x[25];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3756]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.t[2] variable */) = aux_x[26];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3868]] /* vehicle.rearSuspension.cornerL.uca.frame_a.t[2] variable */) = aux_x[27];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3869]] /* vehicle.rearSuspension.cornerL.uca.frame_a.t[3] variable */) = aux_x[28];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3280]] /* vehicle.rearSuspension.cornerL.jointUSR.f_rod variable */) = aux_x[29];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3452]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.f_b_a[2] variable */) = aux_x[30];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3453]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.f_b_a[3] variable */) = aux_x[31];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3451]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.f_b_a[1] variable */) = aux_x[32];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3754]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.f[3] variable */) = aux_x[33];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3752]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.f[1] variable */) = aux_x[34];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3755]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.t[1] variable */) = aux_x[35];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3753]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.f[2] variable */) = aux_x[36];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[105]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.rod1.rRod_0[2])) DUMMY_DER */) = aux_x[37];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.rod1.rRod_0[3])) DUMMY_DER */) = aux_x[38];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.rod1.rRod_0[3])) DUMMY_DER */) = aux_x[39];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.rod1.rRod_0[2])) DUMMY_DER */) = aux_x[40];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.rod1.rRod_0[1])) DUMMY_DER */) = aux_x[41];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[104]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.rod1.rRod_0[1])) DUMMY_DER */) = aux_x[42];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4616]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.t[2] variable */) = aux_x[43];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4617]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.t[3] variable */) = aux_x[44];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4615]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.t[1] variable */) = aux_x[45];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4728]] /* vehicle.rearSuspension.cornerR.uca.frame_a.t[2] variable */) = aux_x[46];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4729]] /* vehicle.rearSuspension.cornerR.uca.frame_a.t[3] variable */) = aux_x[47];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4140]] /* vehicle.rearSuspension.cornerR.jointUSR.f_rod variable */) = aux_x[48];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4313]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.f_b_a[3] variable */) = aux_x[49];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4312]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.f_b_a[2] variable */) = aux_x[50];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4311]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.f_b_a[1] variable */) = aux_x[51];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4613]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.f[2] variable */) = aux_x[52];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4612]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.f[1] variable */) = aux_x[53];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4614]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.f[3] variable */) = aux_x[54];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4263]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.frame_b.t[3] variable */) = aux_x[55];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3403]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.frame_b.t[3] variable */) = aux_x[56];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3665]] /* vehicle.rearSuspension.cornerL.tieRod.f_rod variable */) = aux_x[57];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4525]] /* vehicle.rearSuspension.cornerR.tieRod.f_rod variable */) = aux_x[58];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2919]] /* vehicle.frontSuspension.cornerR.upright.a_0[2] variable */) = aux_x[59];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* vehicle.frontSuspension.cornerR.upright.a_0[1] variable */) = aux_x[60];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2920]] /* vehicle.frontSuspension.cornerR.upright.a_0[3] variable */) = aux_x[61];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2066]] /* vehicle.frontSuspension.cornerL.upright.a_0[3] variable */) = aux_x[62];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2065]] /* vehicle.frontSuspension.cornerL.upright.a_0[2] variable */) = aux_x[63];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2064]] /* vehicle.frontSuspension.cornerL.upright.a_0[1] variable */) = aux_x[64];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4773]] /* vehicle.rearSuspension.cornerR.ucaPivot.a variable */) = aux_x[65];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3913]] /* vehicle.rearSuspension.cornerL.ucaPivot.a variable */) = aux_x[66];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2898]] /* vehicle.frontSuspension.cornerR.ucaPivot.a variable */) = aux_x[67];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2044]] /* vehicle.frontSuspension.cornerL.ucaPivot.a variable */) = aux_x[68];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2973]] /* vehicle.frontSuspension.cornerR.upright.z_a[2] variable */) = aux_x[69];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2972]] /* vehicle.frontSuspension.cornerR.upright.z_a[1] variable */) = aux_x[70];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2974]] /* vehicle.frontSuspension.cornerR.upright.z_a[3] variable */) = aux_x[71];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2119]] /* vehicle.frontSuspension.cornerL.upright.z_a[2] variable */) = aux_x[72];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2118]] /* vehicle.frontSuspension.cornerL.upright.z_a[1] variable */) = aux_x[73];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2120]] /* vehicle.frontSuspension.cornerL.upright.z_a[3] variable */) = aux_x[74];

  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_10451(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10461(DATA *data, threadData_t *threadData);


/*
equation index: 6010
type: LINEAR

<var>rig.motion.yaw.a</var>
<var>rig.motion.roll.a</var>
<var>rig.motion.pitch.a</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void AlyssaVehicle_eqFunction_6010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6010};
  /* Linear equation system */
  int retValue;
  double aux_x[3] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1271]] /* rig.motion.yaw.a variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1237]] /* rig.motion.roll.a variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1194]] /* rig.motion.pitch.a variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 6010 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 9, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,6010};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 6010 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* rig.motion.yaw.a variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* rig.motion.roll.a variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* rig.motion.pitch.a variable */) = aux_x[2];

  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_10502(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10505(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10503(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10463(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10456(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10459(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10462(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10449(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10427(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10432(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10460(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10439(DATA *data, threadData_t *threadData);


/*
equation index: 6023
type: SIMPLE_ASSIGN
rig.motion.lateral.a = $DER.$DER.rig.motion.heave.frame_a.r_0[2] - $DER.$DER.rig.motion.lateral.frame_a.r_0[2]
*/
void AlyssaVehicle_eqFunction_6023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6023};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* rig.motion.lateral.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* der(der(rig.motion.heave.frame_a.r_0[2])) DUMMY_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* der(der(rig.motion.lateral.frame_a.r_0[2])) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 6024
type: SIMPLE_ASSIGN
$DER.rig.motion.lateral.v = rig.motion.lateral.a
*/
void AlyssaVehicle_eqFunction_6024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6024};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* der(rig.motion.lateral.v) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* rig.motion.lateral.a variable */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_10438(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10446(DATA *data, threadData_t *threadData);


/*
equation index: 6027
type: SIMPLE_ASSIGN
$DER.$DER.rig.motion.lateral.frame_a.r_0[1] = $DER.$DER.rig.motion.heave.frame_a.r_0[1]
*/
void AlyssaVehicle_eqFunction_6027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6027};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* der(der(rig.motion.lateral.frame_a.r_0[1])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* der(der(rig.motion.heave.frame_a.r_0[1])) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 6028
type: SIMPLE_ASSIGN
rig.motion.longitudinal.a = $DER.$DER.rig.motion.lateral.frame_a.r_0[1]
*/
void AlyssaVehicle_eqFunction_6028(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6028};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* rig.motion.longitudinal.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* der(der(rig.motion.lateral.frame_a.r_0[1])) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 6029
type: SIMPLE_ASSIGN
$DER.rig.motion.longitudinal.v = rig.motion.longitudinal.a
*/
void AlyssaVehicle_eqFunction_6029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6029};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* der(rig.motion.longitudinal.v) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* rig.motion.longitudinal.a variable */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_10445(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10444(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10443(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10442(DATA *data, threadData_t *threadData);


/*
equation index: 6034
type: SIMPLE_ASSIGN
rig.motion.heave.a = vehicle.vehicleBody.body.a_0[3] - $DER.$DER.rig.motion.heave.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_6034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6034};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* rig.motion.heave.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4999]] /* vehicle.vehicleBody.body.a_0[3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* der(der(rig.motion.heave.frame_a.r_0[3])) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 6035
type: SIMPLE_ASSIGN
$DER.rig.motion.heave.v = rig.motion.heave.a
*/
void AlyssaVehicle_eqFunction_6035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6035};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* der(rig.motion.heave.v) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* rig.motion.heave.a variable */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_10429(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10425(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10526(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10523(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10528(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10435(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10433(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10423(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10431(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10426(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10513(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10436(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10511(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10516(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10514(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10434(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10506(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10455(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10452(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10450(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10453(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10466(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8756(DATA *data, threadData_t *threadData);


/*
equation index: 6059
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod1.e2_a[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6059(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6059};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3442]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.e2_a[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6060
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod1.e2_a[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6060};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4302]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.e2_a[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6061
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.e2_a[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6061};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1575]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.e2_a[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6062
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.e2_a[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6062};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2429]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.e2_a[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6063
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod2.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6063(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6063};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3536]] /* vehicle.rearSuspension.cornerL.jointUSR.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6064
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod2.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6064(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6064};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3532]] /* vehicle.rearSuspension.cornerL.jointUSR.rod2.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6065
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod2.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6065(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6065};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3534]] /* vehicle.rearSuspension.cornerL.jointUSR.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6066
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.rod2.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6066};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3838]] /* vehicle.rearSuspension.cornerL.tieRod.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6067
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.rod2.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6067};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3837]] /* vehicle.rearSuspension.cornerL.tieRod.rod2.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6068
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.rod2.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6068(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6068};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3836]] /* vehicle.rearSuspension.cornerL.tieRod.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6069
type: SIMPLE_ASSIGN
vehicle.rearSuspension.toeLinks.tieRodInnerL.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6069(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6069};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4945]] /* vehicle.rearSuspension.toeLinks.tieRodInnerL.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6070
type: SIMPLE_ASSIGN
vehicle.rearSuspension.toeLinks.tieRodInnerL.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6070(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6070};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4944]] /* vehicle.rearSuspension.toeLinks.tieRodInnerL.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6071
type: SIMPLE_ASSIGN
vehicle.rearSuspension.toeLinks.tieRodInnerL.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6071(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6071};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4943]] /* vehicle.rearSuspension.toeLinks.tieRodInnerL.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6072
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod2.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6072(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6072};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4396]] /* vehicle.rearSuspension.cornerR.jointUSR.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6073
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod2.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6073(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6073};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4392]] /* vehicle.rearSuspension.cornerR.jointUSR.rod2.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6074
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod2.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6074(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6074};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4394]] /* vehicle.rearSuspension.cornerR.jointUSR.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6075
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod2.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6075};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4698]] /* vehicle.rearSuspension.cornerR.tieRod.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6076
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod2.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6076(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6076};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4697]] /* vehicle.rearSuspension.cornerR.tieRod.rod2.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6077
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod2.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6077(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6077};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4696]] /* vehicle.rearSuspension.cornerR.tieRod.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6078
type: SIMPLE_ASSIGN
vehicle.rearSuspension.toeLinks.tieRodInnerR.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6078};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4951]] /* vehicle.rearSuspension.toeLinks.tieRodInnerR.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6079
type: SIMPLE_ASSIGN
vehicle.rearSuspension.toeLinks.tieRodInnerR.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6079};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4950]] /* vehicle.rearSuspension.toeLinks.tieRodInnerR.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6080
type: SIMPLE_ASSIGN
vehicle.rearSuspension.toeLinks.tieRodInnerR.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6080};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4949]] /* vehicle.rearSuspension.toeLinks.tieRodInnerR.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6081
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod2.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6081};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1669]] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6082
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod2.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6082};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1668]] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6083
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod2.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6083};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1667]] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6084
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod2.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6084};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1969]] /* vehicle.frontSuspension.cornerL.tieRod.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6085
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod2.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6085};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1968]] /* vehicle.frontSuspension.cornerL.tieRod.rod2.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6086
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod2.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6086};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1967]] /* vehicle.frontSuspension.cornerL.tieRod.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6087
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRodInner.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6087};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1989]] /* vehicle.frontSuspension.cornerL.tieRodInner.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6088
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.tieRodInnerL.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6088};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3154]] /* vehicle.frontSuspension.steering.tieRodInnerL.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6089
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRodInner.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6089};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1987]] /* vehicle.frontSuspension.cornerL.tieRodInner.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6090
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod2.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6090};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2523]] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6091
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod2.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6091};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2522]] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6092
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod2.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6092};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2521]] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6093
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6093};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2823]] /* vehicle.frontSuspension.cornerR.tieRod.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6094
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6094};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2822]] /* vehicle.frontSuspension.cornerR.tieRod.rod2.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6095
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6095};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2821]] /* vehicle.frontSuspension.cornerR.tieRod.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6096
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRodInner.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6096};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2843]] /* vehicle.frontSuspension.cornerR.tieRodInner.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6097
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.tieRodInnerR.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6097};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3160]] /* vehicle.frontSuspension.steering.tieRodInnerR.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6098
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRodInner.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6098};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* vehicle.frontSuspension.cornerR.tieRodInner.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6099
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6099};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5307]] /* vehicle.wheelRL.rim.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6100
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6100};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5306]] /* vehicle.wheelRL.rim.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6101
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5305]] /* vehicle.wheelRL.rim.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6102
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6102};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5400]] /* vehicle.wheelRR.rim.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6103
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5399]] /* vehicle.wheelRR.rim.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6104
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6104};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5398]] /* vehicle.wheelRR.rim.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6105
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6105};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5121]] /* vehicle.wheelFL.rim.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6106
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5120]] /* vehicle.wheelFL.rim.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6107
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5119]] /* vehicle.wheelFL.rim.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6108
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6108};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5214]] /* vehicle.wheelFR.rim.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6109
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5213]] /* vehicle.wheelFR.rim.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6110
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5212]] /* vehicle.wheelFR.rim.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6111
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.frame_im.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2654]] /* vehicle.frontSuspension.cornerR.tieRod.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6112
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.frame_im.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6112};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2655]] /* vehicle.frontSuspension.cornerR.tieRod.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6113
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.frame_im.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2656]] /* vehicle.frontSuspension.cornerR.tieRod.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6114
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.frame_im.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6114};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2660]] /* vehicle.frontSuspension.cornerR.tieRod.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6115
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.frame_im.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2661]] /* vehicle.frontSuspension.cornerR.tieRod.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6116
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.frame_im.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6116};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2662]] /* vehicle.frontSuspension.cornerR.tieRod.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6117
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.frame_im.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2302]] /* vehicle.frontSuspension.cornerR.jointUSR.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6118
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.frame_im.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6118};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2303]] /* vehicle.frontSuspension.cornerR.jointUSR.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6119
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.frame_im.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2304]] /* vehicle.frontSuspension.cornerR.jointUSR.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6120
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.frame_im.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6120};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2308]] /* vehicle.frontSuspension.cornerR.jointUSR.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6121
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.frame_im.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2309]] /* vehicle.frontSuspension.cornerR.jointUSR.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6122
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.frame_im.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6122};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2310]] /* vehicle.frontSuspension.cornerR.jointUSR.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6123
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.frame_im.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1800]] /* vehicle.frontSuspension.cornerL.tieRod.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6124
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.frame_im.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1801]] /* vehicle.frontSuspension.cornerL.tieRod.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6125
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.frame_im.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1802]] /* vehicle.frontSuspension.cornerL.tieRod.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6126
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.frame_im.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6126};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1806]] /* vehicle.frontSuspension.cornerL.tieRod.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6127
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.frame_im.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6127};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1807]] /* vehicle.frontSuspension.cornerL.tieRod.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6128
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.frame_im.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6128};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1808]] /* vehicle.frontSuspension.cornerL.tieRod.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6129
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.frame_im.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6129};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* vehicle.frontSuspension.cornerL.jointUSR.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6130
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.frame_im.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6130};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1449]] /* vehicle.frontSuspension.cornerL.jointUSR.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6131
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.frame_im.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6131};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1450]] /* vehicle.frontSuspension.cornerL.jointUSR.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6132
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.frame_im.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6132};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1454]] /* vehicle.frontSuspension.cornerL.jointUSR.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6133
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.frame_im.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6133};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1455]] /* vehicle.frontSuspension.cornerL.jointUSR.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6134
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.frame_im.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6134};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1456]] /* vehicle.frontSuspension.cornerL.jointUSR.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6135
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.frame_im.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4529]] /* vehicle.rearSuspension.cornerR.tieRod.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6136
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.frame_im.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6136};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4530]] /* vehicle.rearSuspension.cornerR.tieRod.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6137
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.frame_im.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6137};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4531]] /* vehicle.rearSuspension.cornerR.tieRod.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6138
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.frame_im.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6138};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4535]] /* vehicle.rearSuspension.cornerR.tieRod.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6139
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.frame_im.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4536]] /* vehicle.rearSuspension.cornerR.tieRod.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6140
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.frame_im.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6140};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4537]] /* vehicle.rearSuspension.cornerR.tieRod.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6141
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.frame_im.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4179]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6142
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.frame_im.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6142};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4180]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6143
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.frame_im.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4181]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6144
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.frame_im.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4185]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6145
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.frame_im.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4186]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6146
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.frame_im.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6146};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4187]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6147
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.frame_im.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6147};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3669]] /* vehicle.rearSuspension.cornerL.tieRod.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6148
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.frame_im.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6148};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3670]] /* vehicle.rearSuspension.cornerL.tieRod.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6149
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.frame_im.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6149};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3671]] /* vehicle.rearSuspension.cornerL.tieRod.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6150
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.frame_im.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3675]] /* vehicle.rearSuspension.cornerL.tieRod.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6151
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.frame_im.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6151};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3676]] /* vehicle.rearSuspension.cornerL.tieRod.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6152
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.frame_im.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3677]] /* vehicle.rearSuspension.cornerL.tieRod.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6153
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.frame_im.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3319]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6154
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.frame_im.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6154};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3320]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6155
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.frame_im.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6155};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3321]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6156
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.frame_im.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6156};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3325]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6157
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.frame_im.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6157};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3326]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6158
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.frame_im.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6158};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3327]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6159
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5256]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6160
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6160};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5257]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6161
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5258]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6162
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.mounting1D.housing.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6162};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5223]] /* vehicle.wheelFR.rim.mounting1D.housing.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6163
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.mounting1D.housing.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6163};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5224]] /* vehicle.wheelFR.rim.mounting1D.housing.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6164
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.mounting1D.housing.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6164};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5225]] /* vehicle.wheelFR.rim.mounting1D.housing.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6165
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.mounting1D.housing.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6165};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5226]] /* vehicle.wheelFR.rim.mounting1D.housing.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6166
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.mounting1D.housing.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6166};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5227]] /* vehicle.wheelFR.rim.mounting1D.housing.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6167
type: SIMPLE_ASSIGN
vehicle.wheelFR.contactPatch.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6167};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5190]] /* vehicle.wheelFR.contactPatch.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6168
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6168};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5163]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6169
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5164]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6170
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6170};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5165]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6171
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.mounting1D.housing.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6171};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5130]] /* vehicle.wheelFL.rim.mounting1D.housing.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6172
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.mounting1D.housing.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5131]] /* vehicle.wheelFL.rim.mounting1D.housing.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6173
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.mounting1D.housing.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5132]] /* vehicle.wheelFL.rim.mounting1D.housing.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6174
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.mounting1D.housing.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6174};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5133]] /* vehicle.wheelFL.rim.mounting1D.housing.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6175
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.mounting1D.housing.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6175};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5134]] /* vehicle.wheelFL.rim.mounting1D.housing.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6176
type: SIMPLE_ASSIGN
vehicle.wheelFL.contactPatch.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6176};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5097]] /* vehicle.wheelFL.contactPatch.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6177
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6177};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5442]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6178
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5443]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6179
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6179};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5444]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6180
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.mounting1D.housing.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6180};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5409]] /* vehicle.wheelRR.rim.mounting1D.housing.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6181
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.mounting1D.housing.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5410]] /* vehicle.wheelRR.rim.mounting1D.housing.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6182
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.mounting1D.housing.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6182};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5411]] /* vehicle.wheelRR.rim.mounting1D.housing.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6183
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.mounting1D.housing.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5412]] /* vehicle.wheelRR.rim.mounting1D.housing.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6184
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.mounting1D.housing.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6184};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5413]] /* vehicle.wheelRR.rim.mounting1D.housing.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6185
type: SIMPLE_ASSIGN
vehicle.wheelRR.contactPatch.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5376]] /* vehicle.wheelRR.contactPatch.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6186
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6186};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5349]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6187
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6187};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5350]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6188
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6188};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5351]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6189
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.mounting1D.housing.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5316]] /* vehicle.wheelRL.rim.mounting1D.housing.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6190
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.mounting1D.housing.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6190};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5317]] /* vehicle.wheelRL.rim.mounting1D.housing.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6191
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.mounting1D.housing.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6191};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5318]] /* vehicle.wheelRL.rim.mounting1D.housing.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6192
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.mounting1D.housing.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6192};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5319]] /* vehicle.wheelRL.rim.mounting1D.housing.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6193
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.mounting1D.housing.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6193};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5320]] /* vehicle.wheelRL.rim.mounting1D.housing.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6194
type: SIMPLE_ASSIGN
vehicle.wheelRL.contactPatch.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6194};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5283]] /* vehicle.wheelRL.contactPatch.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6195
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.g_0[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5020]] /* vehicle.vehicleBody.body.g_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6196
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.g_0[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6196};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5021]] /* vehicle.vehicleBody.body.g_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6197
type: SIMPLE_ASSIGN
vehicle.vehicleBody.aero.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6197};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4985]] /* vehicle.vehicleBody.aero.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6198
type: SIMPLE_ASSIGN
vehicle.vehicleBody.aero.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6198};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4987]] /* vehicle.vehicleBody.aero.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6199
type: SIMPLE_ASSIGN
vehicle.vehicleBody.aero.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4989]] /* vehicle.vehicleBody.aero.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6200
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.axis.tau = 0.0
*/
void AlyssaVehicle_eqFunction_6200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6200};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* vehicle.frontSuspension.cornerR.tieRod.axis.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6201
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.constraintResidue = 0.0
*/
void AlyssaVehicle_eqFunction_6201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6201};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.constraintResidue variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6202
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6202};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2769]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6203
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2770]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6204
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2771]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6205
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2775]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6206
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6206};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2776]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6207
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6207};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6208
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.f_b_a1[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6208};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2766]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.f_b_a1[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6209
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.f_b_a1[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6209};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2767]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.f_b_a1[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6210
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.f_b_a1[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2768]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.f_b_a1[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6211
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2666]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6212
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6212};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2667]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6213
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6213};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6214
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6214};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6215
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6215};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2670]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6216
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6216};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2671]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6217
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6217};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2672]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6218
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6218};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2673]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6219
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6219};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2674]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6220
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6220};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2675]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6221
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2676]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6222
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6222};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2677]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6223
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.position_b[1].y = -0.09999999999999999
*/
void AlyssaVehicle_eqFunction_6223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6223};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2663]] /* vehicle.frontSuspension.cornerR.tieRod.position_b[1].y variable */) = -0.09999999999999999;
  TRACE_POP
}

/*
equation index: 6224
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.position_b[2].y = 0.07000000000000006
*/
void AlyssaVehicle_eqFunction_6224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6224};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2664]] /* vehicle.frontSuspension.cornerR.tieRod.position_b[2].y variable */) = 0.07000000000000006;
  TRACE_POP
}

/*
equation index: 6225
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.position_b[3].y = 0.30000000000000004
*/
void AlyssaVehicle_eqFunction_6225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2665]] /* vehicle.frontSuspension.cornerR.tieRod.position_b[3].y variable */) = 0.30000000000000004;
  TRACE_POP
}

/*
equation index: 6226
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.g_0[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2941]] /* vehicle.frontSuspension.cornerR.upright.g_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6227
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.g_0[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6227};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2942]] /* vehicle.frontSuspension.cornerR.upright.g_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6228
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6228};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2988]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6229
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2989]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6230
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2990]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6231
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6231};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2991]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6232
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2992]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6233
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2993]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6234
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_b.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2994]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6235
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_b.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2995]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6236
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_b.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2996]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6237
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2997]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6238
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2998]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6239
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2999]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6240
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3002]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6241
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3003]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6242
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3004]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6243
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3005]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6244
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3006]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6245
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3007]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6246
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3008]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6247
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3009]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6248
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3010]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6249
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3011]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6250
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3012]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6251
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3013]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6252
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.phi_support = 0.0
*/
void AlyssaVehicle_eqFunction_6252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2899]] /* vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.phi_support variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6253
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.axis.tau = 0.0
*/
void AlyssaVehicle_eqFunction_6253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2260]] /* vehicle.frontSuspension.cornerR.jointUSR.axis.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6254
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.w[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6255
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.w[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6256
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[1,1] = 1.0
*/
void AlyssaVehicle_eqFunction_6256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6256};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2356]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 6257
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[1,2] = 0.0
*/
void AlyssaVehicle_eqFunction_6257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6257};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2357]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6258
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[1,3] = 0.0
*/
void AlyssaVehicle_eqFunction_6258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6258};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2358]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6259
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[2,1] = 0.0
*/
void AlyssaVehicle_eqFunction_6259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6259};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2359]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6260
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,1] = 0.0
*/
void AlyssaVehicle_eqFunction_6260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6260};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6261
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.constraintResidue = 0.0
*/
void AlyssaVehicle_eqFunction_6261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6261};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2425]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.constraintResidue variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6262
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.n2_a[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6262};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2455]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.n2_a[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6263
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.w[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6263};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6264
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.w[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6264};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6265
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.w[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6265};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2424]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6266
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[1,1] = 0.11001306482721841
*/
void AlyssaVehicle_eqFunction_6266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6266};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2413]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[1,1] variable */) = 0.11001306482721841;
  TRACE_POP
}

/*
equation index: 6267
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2] = 0.0
*/
void AlyssaVehicle_eqFunction_6267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6267};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2414]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6268
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[1,3] = -0.9939301411906785
*/
void AlyssaVehicle_eqFunction_6268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6268};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2415]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[1,3] variable */) = -0.9939301411906785;
  TRACE_POP
}

/*
equation index: 6269
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[2,1] = 0.24752939586124134
*/
void AlyssaVehicle_eqFunction_6269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2416]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[2,1] variable */) = 0.24752939586124134;
  TRACE_POP
}

/*
equation index: 6270
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2] = 0.9684929325968497
*/
void AlyssaVehicle_eqFunction_6270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6270};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2417]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2] variable */) = 0.9684929325968497;
  TRACE_POP
}

/*
equation index: 6271
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[2,3] = 0.027397768057323447
*/
void AlyssaVehicle_eqFunction_6271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6271};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2418]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[2,3] variable */) = 0.027397768057323447;
  TRACE_POP
}

/*
equation index: 6272
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[3,1] = 0.962614317238161
*/
void AlyssaVehicle_eqFunction_6272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6272};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2419]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[3,1] variable */) = 0.962614317238161;
  TRACE_POP
}

/*
equation index: 6273
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2] = -0.24904103981061843
*/
void AlyssaVehicle_eqFunction_6273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6273};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2420]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2] variable */) = -0.24904103981061843;
  TRACE_POP
}

/*
equation index: 6274
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[3,3] = 0.1065468757784801
*/
void AlyssaVehicle_eqFunction_6274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6274};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2421]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[3,3] variable */) = 0.1065468757784801;
  TRACE_POP
}

/*
equation index: 6275
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6275};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2450]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6276
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6276};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2451]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6277
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6277};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2452]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6278
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6278};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6279
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6280
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6280};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2316]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6281
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6281};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2317]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6282
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6282};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2318]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6283
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2319]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6284
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6284};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2320]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6285
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6285};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2321]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6286
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6286};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2322]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6287
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6287};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2323]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6288
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6288};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2324]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6289
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6289};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2325]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6290
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.position_b[1].y = 0.02
*/
void AlyssaVehicle_eqFunction_6290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2311]] /* vehicle.frontSuspension.cornerR.jointUSR.position_b[1].y variable */) = 0.02;
  TRACE_POP
}

/*
equation index: 6291
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.position_b[2].y = 0.5499999999999999
*/
void AlyssaVehicle_eqFunction_6291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6291};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2312]] /* vehicle.frontSuspension.cornerR.jointUSR.position_b[2].y variable */) = 0.5499999999999999;
  TRACE_POP
}

/*
equation index: 6292
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.position_b[3].y = 0.0
*/
void AlyssaVehicle_eqFunction_6292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6292};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2313]] /* vehicle.frontSuspension.cornerR.jointUSR.position_b[3].y variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6293
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6293};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2208]] /* vehicle.frontSuspension.cornerR.coilover.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6294
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6294};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2209]] /* vehicle.frontSuspension.cornerR.coilover.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6295
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2210]] /* vehicle.frontSuspension.cornerR.coilover.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6296
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6296};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2214]] /* vehicle.frontSuspension.cornerR.coilover.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6297
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6297};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2215]] /* vehicle.frontSuspension.cornerR.coilover.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6298
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6298};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2216]] /* vehicle.frontSuspension.cornerR.coilover.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6299
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.axis.tau = 0.0
*/
void AlyssaVehicle_eqFunction_6299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1796]] /* vehicle.frontSuspension.cornerL.tieRod.axis.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6300
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.constraintResidue = 0.0
*/
void AlyssaVehicle_eqFunction_6300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6300};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1902]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.constraintResidue variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6301
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1915]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6302
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1916]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6303
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6303};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1917]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6304
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1921]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6305
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6306
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6307
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.f_b_a1[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1912]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.f_b_a1[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6308
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.f_b_a1[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1913]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.f_b_a1[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6309
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.f_b_a1[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1914]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.f_b_a1[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6310
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6310};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1812]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6311
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6311};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1813]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6312
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6312};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1814]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6313
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6313};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1815]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6314
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6314};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1816]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6315
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6315};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1817]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6316
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6316};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1818]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6317
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6317};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1819]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6318
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6318};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1820]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6319
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6319};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1821]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6320
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6320};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1822]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6321
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6321};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1823]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6322
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.position_b[1].y = -0.09999999999999999
*/
void AlyssaVehicle_eqFunction_6322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6322};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1809]] /* vehicle.frontSuspension.cornerL.tieRod.position_b[1].y variable */) = -0.09999999999999999;
  TRACE_POP
}

/*
equation index: 6323
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.position_b[2].y = -0.07000000000000006
*/
void AlyssaVehicle_eqFunction_6323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6323};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1810]] /* vehicle.frontSuspension.cornerL.tieRod.position_b[2].y variable */) = -0.07000000000000006;
  TRACE_POP
}

/*
equation index: 6324
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.position_b[3].y = 0.30000000000000004
*/
void AlyssaVehicle_eqFunction_6324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1811]] /* vehicle.frontSuspension.cornerL.tieRod.position_b[3].y variable */) = 0.30000000000000004;
  TRACE_POP
}

/*
equation index: 6325
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.g_0[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6325};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2087]] /* vehicle.frontSuspension.cornerL.upright.g_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6326
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.g_0[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6326};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2088]] /* vehicle.frontSuspension.cornerL.upright.g_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6327
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6327};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2134]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6328
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6328};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2135]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6329
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6329};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2136]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6330
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6330};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2137]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6331
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6331};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2138]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6332
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6332};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2139]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6333
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_b.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6333};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2140]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6334
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_b.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6334};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2141]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6335
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_b.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6335};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2142]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6336
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6336};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2143]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6337
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6337};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2144]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6338
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6338};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2145]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6339
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6339};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2148]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6340
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6340};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2149]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6341
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6341};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2150]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6342
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6342};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2151]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6343
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6343};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2152]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6344
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6344};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2153]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6345
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6345};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2154]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6346
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6346};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2155]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6347
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6347};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2156]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6348
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6348};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2157]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6349
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6349};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2158]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6350
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6350};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2159]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6351
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.phi_support = 0.0
*/
void AlyssaVehicle_eqFunction_6351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6351};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2045]] /* vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.phi_support variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6352
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.axis.tau = 0.0
*/
void AlyssaVehicle_eqFunction_6352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6352};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1406]] /* vehicle.frontSuspension.cornerL.jointUSR.axis.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6353
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.w[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6353};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6354
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.w[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6354};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6355
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[1,1] = 1.0
*/
void AlyssaVehicle_eqFunction_6355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6355};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1502]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 6356
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[1,2] = 0.0
*/
void AlyssaVehicle_eqFunction_6356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6356};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1503]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6357
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[1,3] = 0.0
*/
void AlyssaVehicle_eqFunction_6357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6357};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1504]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6358
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[2,1] = 0.0
*/
void AlyssaVehicle_eqFunction_6358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6358};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1505]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6359
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,1] = 0.0
*/
void AlyssaVehicle_eqFunction_6359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6359};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1506]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6360
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.constraintResidue = 0.0
*/
void AlyssaVehicle_eqFunction_6360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6360};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1571]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.constraintResidue variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6361
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.n2_a[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.n2_a[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6362
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.w[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6362};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1568]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6363
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.w[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6363};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1569]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6364
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.w[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6364};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1570]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6365
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[1,1] = 0.11001306482721841
*/
void AlyssaVehicle_eqFunction_6365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6365};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1559]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[1,1] variable */) = 0.11001306482721841;
  TRACE_POP
}

/*
equation index: 6366
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2] = 0.0
*/
void AlyssaVehicle_eqFunction_6366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6366};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1560]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6367
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[1,3] = -0.9939301411906785
*/
void AlyssaVehicle_eqFunction_6367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1561]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[1,3] variable */) = -0.9939301411906785;
  TRACE_POP
}

/*
equation index: 6368
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[2,1] = -0.24752939586124134
*/
void AlyssaVehicle_eqFunction_6368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6368};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1562]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[2,1] variable */) = -0.24752939586124134;
  TRACE_POP
}

/*
equation index: 6369
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2] = 0.9684929325968497
*/
void AlyssaVehicle_eqFunction_6369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6369};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1563]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2] variable */) = 0.9684929325968497;
  TRACE_POP
}

/*
equation index: 6370
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[2,3] = -0.027397768057323447
*/
void AlyssaVehicle_eqFunction_6370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6370};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1564]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[2,3] variable */) = -0.027397768057323447;
  TRACE_POP
}

/*
equation index: 6371
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[3,1] = 0.962614317238161
*/
void AlyssaVehicle_eqFunction_6371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6371};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1565]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[3,1] variable */) = 0.962614317238161;
  TRACE_POP
}

/*
equation index: 6372
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2] = 0.24904103981061843
*/
void AlyssaVehicle_eqFunction_6372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6372};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1566]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2] variable */) = 0.24904103981061843;
  TRACE_POP
}

/*
equation index: 6373
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[3,3] = 0.1065468757784801
*/
void AlyssaVehicle_eqFunction_6373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6373};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1567]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[3,3] variable */) = 0.1065468757784801;
  TRACE_POP
}

/*
equation index: 6374
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6374};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1596]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6375
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6375};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1597]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6376
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6376};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1598]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6377
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6377};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1460]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6378
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6378};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1461]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6379
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6379};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6380
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6380};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6381
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6381};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6382
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6382};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6383
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6383};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1466]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6384
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6384};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1467]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6385
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6385};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1468]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6386
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6386};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1469]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6387
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6387};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1470]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6388
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6388};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1471]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6389
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.position_b[1].y = 0.02
*/
void AlyssaVehicle_eqFunction_6389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6389};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1457]] /* vehicle.frontSuspension.cornerL.jointUSR.position_b[1].y variable */) = 0.02;
  TRACE_POP
}

/*
equation index: 6390
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.position_b[2].y = -0.5499999999999999
*/
void AlyssaVehicle_eqFunction_6390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6390};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1458]] /* vehicle.frontSuspension.cornerL.jointUSR.position_b[2].y variable */) = -0.5499999999999999;
  TRACE_POP
}

/*
equation index: 6391
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.position_b[3].y = 0.0
*/
void AlyssaVehicle_eqFunction_6391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6391};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1459]] /* vehicle.frontSuspension.cornerL.jointUSR.position_b[3].y variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6392
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6392};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1354]] /* vehicle.frontSuspension.cornerL.coilover.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6393
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6393};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1355]] /* vehicle.frontSuspension.cornerL.coilover.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6394
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6394};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1356]] /* vehicle.frontSuspension.cornerL.coilover.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6395
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6395};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1360]] /* vehicle.frontSuspension.cornerL.coilover.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6396
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6396};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1361]] /* vehicle.frontSuspension.cornerL.coilover.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6397
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6397};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1362]] /* vehicle.frontSuspension.cornerL.coilover.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6398
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.axis.tau = 0.0
*/
void AlyssaVehicle_eqFunction_6398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6398};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4523]] /* vehicle.rearSuspension.cornerR.tieRod.axis.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6399
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.w[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6399};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4592]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6400
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.constraintResidue = 0.0
*/
void AlyssaVehicle_eqFunction_6400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6400};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4631]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.constraintResidue variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6401
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6401};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4644]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6402
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6402};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4645]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6403
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6403};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4646]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6404
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6404};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4650]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6405
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6405};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4651]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6406
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6406};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4652]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6407
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.f_b_a1[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6407};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4641]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.f_b_a1[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6408
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.f_b_a1[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6408};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4642]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.f_b_a1[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6409
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.f_b_a1[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6409};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4643]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.f_b_a1[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6410
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6410};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4541]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6411
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6411};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4542]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6412
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6412};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4543]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6413
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6413};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4544]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6414
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6414};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4545]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6415
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6415};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4546]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6416
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6416};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4547]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6417
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6417};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4548]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6418
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6418};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4549]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6419
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6419};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4550]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6420
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6420};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4551]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6421
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6421};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4552]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6422
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.position_b[1].y = -0.1
*/
void AlyssaVehicle_eqFunction_6422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6422};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4538]] /* vehicle.rearSuspension.cornerR.tieRod.position_b[1].y variable */) = -0.1;
  TRACE_POP
}

/*
equation index: 6423
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.position_b[2].y = 0.06000000000000005
*/
void AlyssaVehicle_eqFunction_6423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6423};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4539]] /* vehicle.rearSuspension.cornerR.tieRod.position_b[2].y variable */) = 0.06000000000000005;
  TRACE_POP
}
OMC_DISABLE_OPT
void AlyssaVehicle_functionInitialEquations_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  AlyssaVehicle_eqFunction_8855(data, threadData);
  AlyssaVehicle_eqFunction_4394(data, threadData);
  AlyssaVehicle_eqFunction_4395(data, threadData);
  AlyssaVehicle_eqFunction_8854(data, threadData);
  AlyssaVehicle_eqFunction_4397(data, threadData);
  AlyssaVehicle_eqFunction_8006(data, threadData);
  AlyssaVehicle_eqFunction_4399(data, threadData);
  AlyssaVehicle_eqFunction_4400(data, threadData);
  AlyssaVehicle_eqFunction_4401(data, threadData);
  AlyssaVehicle_eqFunction_4402(data, threadData);
  AlyssaVehicle_eqFunction_6930(data, threadData);
  AlyssaVehicle_eqFunction_4404(data, threadData);
  AlyssaVehicle_eqFunction_4405(data, threadData);
  AlyssaVehicle_eqFunction_4406(data, threadData);
  AlyssaVehicle_eqFunction_7014(data, threadData);
  AlyssaVehicle_eqFunction_8346(data, threadData);
  AlyssaVehicle_eqFunction_6985(data, threadData);
  AlyssaVehicle_eqFunction_8351(data, threadData);
  AlyssaVehicle_eqFunction_4411(data, threadData);
  AlyssaVehicle_eqFunction_8876(data, threadData);
  AlyssaVehicle_eqFunction_8877(data, threadData);
  AlyssaVehicle_eqFunction_8878(data, threadData);
  AlyssaVehicle_eqFunction_4415(data, threadData);
  AlyssaVehicle_eqFunction_8895(data, threadData);
  AlyssaVehicle_eqFunction_8897(data, threadData);
  AlyssaVehicle_eqFunction_8896(data, threadData);
  AlyssaVehicle_eqFunction_4419(data, threadData);
  AlyssaVehicle_eqFunction_8885(data, threadData);
  AlyssaVehicle_eqFunction_8894(data, threadData);
  AlyssaVehicle_eqFunction_8893(data, threadData);
  AlyssaVehicle_eqFunction_8886(data, threadData);
  AlyssaVehicle_eqFunction_8887(data, threadData);
  AlyssaVehicle_eqFunction_8892(data, threadData);
  AlyssaVehicle_eqFunction_4426(data, threadData);
  AlyssaVehicle_eqFunction_4427(data, threadData);
  AlyssaVehicle_eqFunction_8891(data, threadData);
  AlyssaVehicle_eqFunction_4429(data, threadData);
  AlyssaVehicle_eqFunction_8366(data, threadData);
  AlyssaVehicle_eqFunction_4431(data, threadData);
  AlyssaVehicle_eqFunction_4432(data, threadData);
  AlyssaVehicle_eqFunction_4433(data, threadData);
  AlyssaVehicle_eqFunction_4434(data, threadData);
  AlyssaVehicle_eqFunction_6929(data, threadData);
  AlyssaVehicle_eqFunction_4436(data, threadData);
  AlyssaVehicle_eqFunction_4437(data, threadData);
  AlyssaVehicle_eqFunction_4438(data, threadData);
  AlyssaVehicle_eqFunction_7015(data, threadData);
  AlyssaVehicle_eqFunction_8739(data, threadData);
  AlyssaVehicle_eqFunction_6981(data, threadData);
  AlyssaVehicle_eqFunction_8744(data, threadData);
  AlyssaVehicle_eqFunction_4443(data, threadData);
  AlyssaVehicle_eqFunction_8912(data, threadData);
  AlyssaVehicle_eqFunction_8913(data, threadData);
  AlyssaVehicle_eqFunction_8914(data, threadData);
  AlyssaVehicle_eqFunction_4447(data, threadData);
  AlyssaVehicle_eqFunction_8931(data, threadData);
  AlyssaVehicle_eqFunction_10529(data, threadData);
  AlyssaVehicle_eqFunction_8932(data, threadData);
  AlyssaVehicle_eqFunction_4451(data, threadData);
  AlyssaVehicle_eqFunction_8921(data, threadData);
  AlyssaVehicle_eqFunction_8930(data, threadData);
  AlyssaVehicle_eqFunction_8929(data, threadData);
  AlyssaVehicle_eqFunction_8922(data, threadData);
  AlyssaVehicle_eqFunction_8923(data, threadData);
  AlyssaVehicle_eqFunction_8928(data, threadData);
  AlyssaVehicle_eqFunction_4458(data, threadData);
  AlyssaVehicle_eqFunction_4459(data, threadData);
  AlyssaVehicle_eqFunction_8927(data, threadData);
  AlyssaVehicle_eqFunction_4461(data, threadData);
  AlyssaVehicle_eqFunction_5974(data, threadData);
  AlyssaVehicle_eqFunction_10451(data, threadData);
  AlyssaVehicle_eqFunction_10461(data, threadData);
  AlyssaVehicle_eqFunction_6010(data, threadData);
  AlyssaVehicle_eqFunction_10502(data, threadData);
  AlyssaVehicle_eqFunction_10505(data, threadData);
  AlyssaVehicle_eqFunction_10503(data, threadData);
  AlyssaVehicle_eqFunction_10463(data, threadData);
  AlyssaVehicle_eqFunction_10456(data, threadData);
  AlyssaVehicle_eqFunction_10459(data, threadData);
  AlyssaVehicle_eqFunction_10462(data, threadData);
  AlyssaVehicle_eqFunction_10449(data, threadData);
  AlyssaVehicle_eqFunction_10427(data, threadData);
  AlyssaVehicle_eqFunction_10432(data, threadData);
  AlyssaVehicle_eqFunction_10460(data, threadData);
  AlyssaVehicle_eqFunction_10439(data, threadData);
  AlyssaVehicle_eqFunction_6023(data, threadData);
  AlyssaVehicle_eqFunction_6024(data, threadData);
  AlyssaVehicle_eqFunction_10438(data, threadData);
  AlyssaVehicle_eqFunction_10446(data, threadData);
  AlyssaVehicle_eqFunction_6027(data, threadData);
  AlyssaVehicle_eqFunction_6028(data, threadData);
  AlyssaVehicle_eqFunction_6029(data, threadData);
  AlyssaVehicle_eqFunction_10445(data, threadData);
  AlyssaVehicle_eqFunction_10444(data, threadData);
  AlyssaVehicle_eqFunction_10443(data, threadData);
  AlyssaVehicle_eqFunction_10442(data, threadData);
  AlyssaVehicle_eqFunction_6034(data, threadData);
  AlyssaVehicle_eqFunction_6035(data, threadData);
  AlyssaVehicle_eqFunction_10429(data, threadData);
  AlyssaVehicle_eqFunction_10425(data, threadData);
  AlyssaVehicle_eqFunction_10526(data, threadData);
  AlyssaVehicle_eqFunction_10523(data, threadData);
  AlyssaVehicle_eqFunction_10528(data, threadData);
  AlyssaVehicle_eqFunction_10435(data, threadData);
  AlyssaVehicle_eqFunction_10433(data, threadData);
  AlyssaVehicle_eqFunction_10423(data, threadData);
  AlyssaVehicle_eqFunction_10431(data, threadData);
  AlyssaVehicle_eqFunction_10426(data, threadData);
  AlyssaVehicle_eqFunction_10513(data, threadData);
  AlyssaVehicle_eqFunction_10436(data, threadData);
  AlyssaVehicle_eqFunction_10511(data, threadData);
  AlyssaVehicle_eqFunction_10516(data, threadData);
  AlyssaVehicle_eqFunction_10514(data, threadData);
  AlyssaVehicle_eqFunction_10434(data, threadData);
  AlyssaVehicle_eqFunction_10506(data, threadData);
  AlyssaVehicle_eqFunction_10455(data, threadData);
  AlyssaVehicle_eqFunction_10452(data, threadData);
  AlyssaVehicle_eqFunction_10450(data, threadData);
  AlyssaVehicle_eqFunction_10453(data, threadData);
  AlyssaVehicle_eqFunction_10466(data, threadData);
  AlyssaVehicle_eqFunction_8756(data, threadData);
  AlyssaVehicle_eqFunction_6059(data, threadData);
  AlyssaVehicle_eqFunction_6060(data, threadData);
  AlyssaVehicle_eqFunction_6061(data, threadData);
  AlyssaVehicle_eqFunction_6062(data, threadData);
  AlyssaVehicle_eqFunction_6063(data, threadData);
  AlyssaVehicle_eqFunction_6064(data, threadData);
  AlyssaVehicle_eqFunction_6065(data, threadData);
  AlyssaVehicle_eqFunction_6066(data, threadData);
  AlyssaVehicle_eqFunction_6067(data, threadData);
  AlyssaVehicle_eqFunction_6068(data, threadData);
  AlyssaVehicle_eqFunction_6069(data, threadData);
  AlyssaVehicle_eqFunction_6070(data, threadData);
  AlyssaVehicle_eqFunction_6071(data, threadData);
  AlyssaVehicle_eqFunction_6072(data, threadData);
  AlyssaVehicle_eqFunction_6073(data, threadData);
  AlyssaVehicle_eqFunction_6074(data, threadData);
  AlyssaVehicle_eqFunction_6075(data, threadData);
  AlyssaVehicle_eqFunction_6076(data, threadData);
  AlyssaVehicle_eqFunction_6077(data, threadData);
  AlyssaVehicle_eqFunction_6078(data, threadData);
  AlyssaVehicle_eqFunction_6079(data, threadData);
  AlyssaVehicle_eqFunction_6080(data, threadData);
  AlyssaVehicle_eqFunction_6081(data, threadData);
  AlyssaVehicle_eqFunction_6082(data, threadData);
  AlyssaVehicle_eqFunction_6083(data, threadData);
  AlyssaVehicle_eqFunction_6084(data, threadData);
  AlyssaVehicle_eqFunction_6085(data, threadData);
  AlyssaVehicle_eqFunction_6086(data, threadData);
  AlyssaVehicle_eqFunction_6087(data, threadData);
  AlyssaVehicle_eqFunction_6088(data, threadData);
  AlyssaVehicle_eqFunction_6089(data, threadData);
  AlyssaVehicle_eqFunction_6090(data, threadData);
  AlyssaVehicle_eqFunction_6091(data, threadData);
  AlyssaVehicle_eqFunction_6092(data, threadData);
  AlyssaVehicle_eqFunction_6093(data, threadData);
  AlyssaVehicle_eqFunction_6094(data, threadData);
  AlyssaVehicle_eqFunction_6095(data, threadData);
  AlyssaVehicle_eqFunction_6096(data, threadData);
  AlyssaVehicle_eqFunction_6097(data, threadData);
  AlyssaVehicle_eqFunction_6098(data, threadData);
  AlyssaVehicle_eqFunction_6099(data, threadData);
  AlyssaVehicle_eqFunction_6100(data, threadData);
  AlyssaVehicle_eqFunction_6101(data, threadData);
  AlyssaVehicle_eqFunction_6102(data, threadData);
  AlyssaVehicle_eqFunction_6103(data, threadData);
  AlyssaVehicle_eqFunction_6104(data, threadData);
  AlyssaVehicle_eqFunction_6105(data, threadData);
  AlyssaVehicle_eqFunction_6106(data, threadData);
  AlyssaVehicle_eqFunction_6107(data, threadData);
  AlyssaVehicle_eqFunction_6108(data, threadData);
  AlyssaVehicle_eqFunction_6109(data, threadData);
  AlyssaVehicle_eqFunction_6110(data, threadData);
  AlyssaVehicle_eqFunction_6111(data, threadData);
  AlyssaVehicle_eqFunction_6112(data, threadData);
  AlyssaVehicle_eqFunction_6113(data, threadData);
  AlyssaVehicle_eqFunction_6114(data, threadData);
  AlyssaVehicle_eqFunction_6115(data, threadData);
  AlyssaVehicle_eqFunction_6116(data, threadData);
  AlyssaVehicle_eqFunction_6117(data, threadData);
  AlyssaVehicle_eqFunction_6118(data, threadData);
  AlyssaVehicle_eqFunction_6119(data, threadData);
  AlyssaVehicle_eqFunction_6120(data, threadData);
  AlyssaVehicle_eqFunction_6121(data, threadData);
  AlyssaVehicle_eqFunction_6122(data, threadData);
  AlyssaVehicle_eqFunction_6123(data, threadData);
  AlyssaVehicle_eqFunction_6124(data, threadData);
  AlyssaVehicle_eqFunction_6125(data, threadData);
  AlyssaVehicle_eqFunction_6126(data, threadData);
  AlyssaVehicle_eqFunction_6127(data, threadData);
  AlyssaVehicle_eqFunction_6128(data, threadData);
  AlyssaVehicle_eqFunction_6129(data, threadData);
  AlyssaVehicle_eqFunction_6130(data, threadData);
  AlyssaVehicle_eqFunction_6131(data, threadData);
  AlyssaVehicle_eqFunction_6132(data, threadData);
  AlyssaVehicle_eqFunction_6133(data, threadData);
  AlyssaVehicle_eqFunction_6134(data, threadData);
  AlyssaVehicle_eqFunction_6135(data, threadData);
  AlyssaVehicle_eqFunction_6136(data, threadData);
  AlyssaVehicle_eqFunction_6137(data, threadData);
  AlyssaVehicle_eqFunction_6138(data, threadData);
  AlyssaVehicle_eqFunction_6139(data, threadData);
  AlyssaVehicle_eqFunction_6140(data, threadData);
  AlyssaVehicle_eqFunction_6141(data, threadData);
  AlyssaVehicle_eqFunction_6142(data, threadData);
  AlyssaVehicle_eqFunction_6143(data, threadData);
  AlyssaVehicle_eqFunction_6144(data, threadData);
  AlyssaVehicle_eqFunction_6145(data, threadData);
  AlyssaVehicle_eqFunction_6146(data, threadData);
  AlyssaVehicle_eqFunction_6147(data, threadData);
  AlyssaVehicle_eqFunction_6148(data, threadData);
  AlyssaVehicle_eqFunction_6149(data, threadData);
  AlyssaVehicle_eqFunction_6150(data, threadData);
  AlyssaVehicle_eqFunction_6151(data, threadData);
  AlyssaVehicle_eqFunction_6152(data, threadData);
  AlyssaVehicle_eqFunction_6153(data, threadData);
  AlyssaVehicle_eqFunction_6154(data, threadData);
  AlyssaVehicle_eqFunction_6155(data, threadData);
  AlyssaVehicle_eqFunction_6156(data, threadData);
  AlyssaVehicle_eqFunction_6157(data, threadData);
  AlyssaVehicle_eqFunction_6158(data, threadData);
  AlyssaVehicle_eqFunction_6159(data, threadData);
  AlyssaVehicle_eqFunction_6160(data, threadData);
  AlyssaVehicle_eqFunction_6161(data, threadData);
  AlyssaVehicle_eqFunction_6162(data, threadData);
  AlyssaVehicle_eqFunction_6163(data, threadData);
  AlyssaVehicle_eqFunction_6164(data, threadData);
  AlyssaVehicle_eqFunction_6165(data, threadData);
  AlyssaVehicle_eqFunction_6166(data, threadData);
  AlyssaVehicle_eqFunction_6167(data, threadData);
  AlyssaVehicle_eqFunction_6168(data, threadData);
  AlyssaVehicle_eqFunction_6169(data, threadData);
  AlyssaVehicle_eqFunction_6170(data, threadData);
  AlyssaVehicle_eqFunction_6171(data, threadData);
  AlyssaVehicle_eqFunction_6172(data, threadData);
  AlyssaVehicle_eqFunction_6173(data, threadData);
  AlyssaVehicle_eqFunction_6174(data, threadData);
  AlyssaVehicle_eqFunction_6175(data, threadData);
  AlyssaVehicle_eqFunction_6176(data, threadData);
  AlyssaVehicle_eqFunction_6177(data, threadData);
  AlyssaVehicle_eqFunction_6178(data, threadData);
  AlyssaVehicle_eqFunction_6179(data, threadData);
  AlyssaVehicle_eqFunction_6180(data, threadData);
  AlyssaVehicle_eqFunction_6181(data, threadData);
  AlyssaVehicle_eqFunction_6182(data, threadData);
  AlyssaVehicle_eqFunction_6183(data, threadData);
  AlyssaVehicle_eqFunction_6184(data, threadData);
  AlyssaVehicle_eqFunction_6185(data, threadData);
  AlyssaVehicle_eqFunction_6186(data, threadData);
  AlyssaVehicle_eqFunction_6187(data, threadData);
  AlyssaVehicle_eqFunction_6188(data, threadData);
  AlyssaVehicle_eqFunction_6189(data, threadData);
  AlyssaVehicle_eqFunction_6190(data, threadData);
  AlyssaVehicle_eqFunction_6191(data, threadData);
  AlyssaVehicle_eqFunction_6192(data, threadData);
  AlyssaVehicle_eqFunction_6193(data, threadData);
  AlyssaVehicle_eqFunction_6194(data, threadData);
  AlyssaVehicle_eqFunction_6195(data, threadData);
  AlyssaVehicle_eqFunction_6196(data, threadData);
  AlyssaVehicle_eqFunction_6197(data, threadData);
  AlyssaVehicle_eqFunction_6198(data, threadData);
  AlyssaVehicle_eqFunction_6199(data, threadData);
  AlyssaVehicle_eqFunction_6200(data, threadData);
  AlyssaVehicle_eqFunction_6201(data, threadData);
  AlyssaVehicle_eqFunction_6202(data, threadData);
  AlyssaVehicle_eqFunction_6203(data, threadData);
  AlyssaVehicle_eqFunction_6204(data, threadData);
  AlyssaVehicle_eqFunction_6205(data, threadData);
  AlyssaVehicle_eqFunction_6206(data, threadData);
  AlyssaVehicle_eqFunction_6207(data, threadData);
  AlyssaVehicle_eqFunction_6208(data, threadData);
  AlyssaVehicle_eqFunction_6209(data, threadData);
  AlyssaVehicle_eqFunction_6210(data, threadData);
  AlyssaVehicle_eqFunction_6211(data, threadData);
  AlyssaVehicle_eqFunction_6212(data, threadData);
  AlyssaVehicle_eqFunction_6213(data, threadData);
  AlyssaVehicle_eqFunction_6214(data, threadData);
  AlyssaVehicle_eqFunction_6215(data, threadData);
  AlyssaVehicle_eqFunction_6216(data, threadData);
  AlyssaVehicle_eqFunction_6217(data, threadData);
  AlyssaVehicle_eqFunction_6218(data, threadData);
  AlyssaVehicle_eqFunction_6219(data, threadData);
  AlyssaVehicle_eqFunction_6220(data, threadData);
  AlyssaVehicle_eqFunction_6221(data, threadData);
  AlyssaVehicle_eqFunction_6222(data, threadData);
  AlyssaVehicle_eqFunction_6223(data, threadData);
  AlyssaVehicle_eqFunction_6224(data, threadData);
  AlyssaVehicle_eqFunction_6225(data, threadData);
  AlyssaVehicle_eqFunction_6226(data, threadData);
  AlyssaVehicle_eqFunction_6227(data, threadData);
  AlyssaVehicle_eqFunction_6228(data, threadData);
  AlyssaVehicle_eqFunction_6229(data, threadData);
  AlyssaVehicle_eqFunction_6230(data, threadData);
  AlyssaVehicle_eqFunction_6231(data, threadData);
  AlyssaVehicle_eqFunction_6232(data, threadData);
  AlyssaVehicle_eqFunction_6233(data, threadData);
  AlyssaVehicle_eqFunction_6234(data, threadData);
  AlyssaVehicle_eqFunction_6235(data, threadData);
  AlyssaVehicle_eqFunction_6236(data, threadData);
  AlyssaVehicle_eqFunction_6237(data, threadData);
  AlyssaVehicle_eqFunction_6238(data, threadData);
  AlyssaVehicle_eqFunction_6239(data, threadData);
  AlyssaVehicle_eqFunction_6240(data, threadData);
  AlyssaVehicle_eqFunction_6241(data, threadData);
  AlyssaVehicle_eqFunction_6242(data, threadData);
  AlyssaVehicle_eqFunction_6243(data, threadData);
  AlyssaVehicle_eqFunction_6244(data, threadData);
  AlyssaVehicle_eqFunction_6245(data, threadData);
  AlyssaVehicle_eqFunction_6246(data, threadData);
  AlyssaVehicle_eqFunction_6247(data, threadData);
  AlyssaVehicle_eqFunction_6248(data, threadData);
  AlyssaVehicle_eqFunction_6249(data, threadData);
  AlyssaVehicle_eqFunction_6250(data, threadData);
  AlyssaVehicle_eqFunction_6251(data, threadData);
  AlyssaVehicle_eqFunction_6252(data, threadData);
  AlyssaVehicle_eqFunction_6253(data, threadData);
  AlyssaVehicle_eqFunction_6254(data, threadData);
  AlyssaVehicle_eqFunction_6255(data, threadData);
  AlyssaVehicle_eqFunction_6256(data, threadData);
  AlyssaVehicle_eqFunction_6257(data, threadData);
  AlyssaVehicle_eqFunction_6258(data, threadData);
  AlyssaVehicle_eqFunction_6259(data, threadData);
  AlyssaVehicle_eqFunction_6260(data, threadData);
  AlyssaVehicle_eqFunction_6261(data, threadData);
  AlyssaVehicle_eqFunction_6262(data, threadData);
  AlyssaVehicle_eqFunction_6263(data, threadData);
  AlyssaVehicle_eqFunction_6264(data, threadData);
  AlyssaVehicle_eqFunction_6265(data, threadData);
  AlyssaVehicle_eqFunction_6266(data, threadData);
  AlyssaVehicle_eqFunction_6267(data, threadData);
  AlyssaVehicle_eqFunction_6268(data, threadData);
  AlyssaVehicle_eqFunction_6269(data, threadData);
  AlyssaVehicle_eqFunction_6270(data, threadData);
  AlyssaVehicle_eqFunction_6271(data, threadData);
  AlyssaVehicle_eqFunction_6272(data, threadData);
  AlyssaVehicle_eqFunction_6273(data, threadData);
  AlyssaVehicle_eqFunction_6274(data, threadData);
  AlyssaVehicle_eqFunction_6275(data, threadData);
  AlyssaVehicle_eqFunction_6276(data, threadData);
  AlyssaVehicle_eqFunction_6277(data, threadData);
  AlyssaVehicle_eqFunction_6278(data, threadData);
  AlyssaVehicle_eqFunction_6279(data, threadData);
  AlyssaVehicle_eqFunction_6280(data, threadData);
  AlyssaVehicle_eqFunction_6281(data, threadData);
  AlyssaVehicle_eqFunction_6282(data, threadData);
  AlyssaVehicle_eqFunction_6283(data, threadData);
  AlyssaVehicle_eqFunction_6284(data, threadData);
  AlyssaVehicle_eqFunction_6285(data, threadData);
  AlyssaVehicle_eqFunction_6286(data, threadData);
  AlyssaVehicle_eqFunction_6287(data, threadData);
  AlyssaVehicle_eqFunction_6288(data, threadData);
  AlyssaVehicle_eqFunction_6289(data, threadData);
  AlyssaVehicle_eqFunction_6290(data, threadData);
  AlyssaVehicle_eqFunction_6291(data, threadData);
  AlyssaVehicle_eqFunction_6292(data, threadData);
  AlyssaVehicle_eqFunction_6293(data, threadData);
  AlyssaVehicle_eqFunction_6294(data, threadData);
  AlyssaVehicle_eqFunction_6295(data, threadData);
  AlyssaVehicle_eqFunction_6296(data, threadData);
  AlyssaVehicle_eqFunction_6297(data, threadData);
  AlyssaVehicle_eqFunction_6298(data, threadData);
  AlyssaVehicle_eqFunction_6299(data, threadData);
  AlyssaVehicle_eqFunction_6300(data, threadData);
  AlyssaVehicle_eqFunction_6301(data, threadData);
  AlyssaVehicle_eqFunction_6302(data, threadData);
  AlyssaVehicle_eqFunction_6303(data, threadData);
  AlyssaVehicle_eqFunction_6304(data, threadData);
  AlyssaVehicle_eqFunction_6305(data, threadData);
  AlyssaVehicle_eqFunction_6306(data, threadData);
  AlyssaVehicle_eqFunction_6307(data, threadData);
  AlyssaVehicle_eqFunction_6308(data, threadData);
  AlyssaVehicle_eqFunction_6309(data, threadData);
  AlyssaVehicle_eqFunction_6310(data, threadData);
  AlyssaVehicle_eqFunction_6311(data, threadData);
  AlyssaVehicle_eqFunction_6312(data, threadData);
  AlyssaVehicle_eqFunction_6313(data, threadData);
  AlyssaVehicle_eqFunction_6314(data, threadData);
  AlyssaVehicle_eqFunction_6315(data, threadData);
  AlyssaVehicle_eqFunction_6316(data, threadData);
  AlyssaVehicle_eqFunction_6317(data, threadData);
  AlyssaVehicle_eqFunction_6318(data, threadData);
  AlyssaVehicle_eqFunction_6319(data, threadData);
  AlyssaVehicle_eqFunction_6320(data, threadData);
  AlyssaVehicle_eqFunction_6321(data, threadData);
  AlyssaVehicle_eqFunction_6322(data, threadData);
  AlyssaVehicle_eqFunction_6323(data, threadData);
  AlyssaVehicle_eqFunction_6324(data, threadData);
  AlyssaVehicle_eqFunction_6325(data, threadData);
  AlyssaVehicle_eqFunction_6326(data, threadData);
  AlyssaVehicle_eqFunction_6327(data, threadData);
  AlyssaVehicle_eqFunction_6328(data, threadData);
  AlyssaVehicle_eqFunction_6329(data, threadData);
  AlyssaVehicle_eqFunction_6330(data, threadData);
  AlyssaVehicle_eqFunction_6331(data, threadData);
  AlyssaVehicle_eqFunction_6332(data, threadData);
  AlyssaVehicle_eqFunction_6333(data, threadData);
  AlyssaVehicle_eqFunction_6334(data, threadData);
  AlyssaVehicle_eqFunction_6335(data, threadData);
  AlyssaVehicle_eqFunction_6336(data, threadData);
  AlyssaVehicle_eqFunction_6337(data, threadData);
  AlyssaVehicle_eqFunction_6338(data, threadData);
  AlyssaVehicle_eqFunction_6339(data, threadData);
  AlyssaVehicle_eqFunction_6340(data, threadData);
  AlyssaVehicle_eqFunction_6341(data, threadData);
  AlyssaVehicle_eqFunction_6342(data, threadData);
  AlyssaVehicle_eqFunction_6343(data, threadData);
  AlyssaVehicle_eqFunction_6344(data, threadData);
  AlyssaVehicle_eqFunction_6345(data, threadData);
  AlyssaVehicle_eqFunction_6346(data, threadData);
  AlyssaVehicle_eqFunction_6347(data, threadData);
  AlyssaVehicle_eqFunction_6348(data, threadData);
  AlyssaVehicle_eqFunction_6349(data, threadData);
  AlyssaVehicle_eqFunction_6350(data, threadData);
  AlyssaVehicle_eqFunction_6351(data, threadData);
  AlyssaVehicle_eqFunction_6352(data, threadData);
  AlyssaVehicle_eqFunction_6353(data, threadData);
  AlyssaVehicle_eqFunction_6354(data, threadData);
  AlyssaVehicle_eqFunction_6355(data, threadData);
  AlyssaVehicle_eqFunction_6356(data, threadData);
  AlyssaVehicle_eqFunction_6357(data, threadData);
  AlyssaVehicle_eqFunction_6358(data, threadData);
  AlyssaVehicle_eqFunction_6359(data, threadData);
  AlyssaVehicle_eqFunction_6360(data, threadData);
  AlyssaVehicle_eqFunction_6361(data, threadData);
  AlyssaVehicle_eqFunction_6362(data, threadData);
  AlyssaVehicle_eqFunction_6363(data, threadData);
  AlyssaVehicle_eqFunction_6364(data, threadData);
  AlyssaVehicle_eqFunction_6365(data, threadData);
  AlyssaVehicle_eqFunction_6366(data, threadData);
  AlyssaVehicle_eqFunction_6367(data, threadData);
  AlyssaVehicle_eqFunction_6368(data, threadData);
  AlyssaVehicle_eqFunction_6369(data, threadData);
  AlyssaVehicle_eqFunction_6370(data, threadData);
  AlyssaVehicle_eqFunction_6371(data, threadData);
  AlyssaVehicle_eqFunction_6372(data, threadData);
  AlyssaVehicle_eqFunction_6373(data, threadData);
  AlyssaVehicle_eqFunction_6374(data, threadData);
  AlyssaVehicle_eqFunction_6375(data, threadData);
  AlyssaVehicle_eqFunction_6376(data, threadData);
  AlyssaVehicle_eqFunction_6377(data, threadData);
  AlyssaVehicle_eqFunction_6378(data, threadData);
  AlyssaVehicle_eqFunction_6379(data, threadData);
  AlyssaVehicle_eqFunction_6380(data, threadData);
  AlyssaVehicle_eqFunction_6381(data, threadData);
  AlyssaVehicle_eqFunction_6382(data, threadData);
  AlyssaVehicle_eqFunction_6383(data, threadData);
  AlyssaVehicle_eqFunction_6384(data, threadData);
  AlyssaVehicle_eqFunction_6385(data, threadData);
  AlyssaVehicle_eqFunction_6386(data, threadData);
  AlyssaVehicle_eqFunction_6387(data, threadData);
  AlyssaVehicle_eqFunction_6388(data, threadData);
  AlyssaVehicle_eqFunction_6389(data, threadData);
  AlyssaVehicle_eqFunction_6390(data, threadData);
  AlyssaVehicle_eqFunction_6391(data, threadData);
  AlyssaVehicle_eqFunction_6392(data, threadData);
  AlyssaVehicle_eqFunction_6393(data, threadData);
  AlyssaVehicle_eqFunction_6394(data, threadData);
  AlyssaVehicle_eqFunction_6395(data, threadData);
  AlyssaVehicle_eqFunction_6396(data, threadData);
  AlyssaVehicle_eqFunction_6397(data, threadData);
  AlyssaVehicle_eqFunction_6398(data, threadData);
  AlyssaVehicle_eqFunction_6399(data, threadData);
  AlyssaVehicle_eqFunction_6400(data, threadData);
  AlyssaVehicle_eqFunction_6401(data, threadData);
  AlyssaVehicle_eqFunction_6402(data, threadData);
  AlyssaVehicle_eqFunction_6403(data, threadData);
  AlyssaVehicle_eqFunction_6404(data, threadData);
  AlyssaVehicle_eqFunction_6405(data, threadData);
  AlyssaVehicle_eqFunction_6406(data, threadData);
  AlyssaVehicle_eqFunction_6407(data, threadData);
  AlyssaVehicle_eqFunction_6408(data, threadData);
  AlyssaVehicle_eqFunction_6409(data, threadData);
  AlyssaVehicle_eqFunction_6410(data, threadData);
  AlyssaVehicle_eqFunction_6411(data, threadData);
  AlyssaVehicle_eqFunction_6412(data, threadData);
  AlyssaVehicle_eqFunction_6413(data, threadData);
  AlyssaVehicle_eqFunction_6414(data, threadData);
  AlyssaVehicle_eqFunction_6415(data, threadData);
  AlyssaVehicle_eqFunction_6416(data, threadData);
  AlyssaVehicle_eqFunction_6417(data, threadData);
  AlyssaVehicle_eqFunction_6418(data, threadData);
  AlyssaVehicle_eqFunction_6419(data, threadData);
  AlyssaVehicle_eqFunction_6420(data, threadData);
  AlyssaVehicle_eqFunction_6421(data, threadData);
  AlyssaVehicle_eqFunction_6422(data, threadData);
  AlyssaVehicle_eqFunction_6423(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif
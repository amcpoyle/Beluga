#include "AlyssaVehicle_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern void AlyssaVehicle_eqFunction_8874(DATA *data, threadData_t *threadData);


/*
equation index: 4403
type: SIMPLE_ASSIGN
$DER.vehicle.wheelRR.rim.rotor1D.w = vehicle.wheelRR.rim.rotor1D.a
*/
void AlyssaVehicle_eqFunction_4403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4403};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[75]] /* der(vehicle.wheelRR.rim.rotor1D.w) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5415]] /* vehicle.wheelRR.rim.rotor1D.a variable */);
  TRACE_POP
}

/*
equation index: 4404
type: SIMPLE_ASSIGN
vehicle.wheelRR.slipForces.pFric = vehicle.wheelRR.slipDynamics.vxAbs * (fx[4] * vehicle.wheelRR.slipDynamics.kappa - fy[4] * tan(vehicle.wheelRR.slipDynamics.alpha))
*/
void AlyssaVehicle_eqFunction_4404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4404};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5463]] /* vehicle.wheelRR.slipForces.pFric variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5453]] /* vehicle.wheelRR.slipDynamics.vxAbs variable */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* fx[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* vehicle.wheelRR.slipDynamics.kappa STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* fy[4] variable */)) * (tan((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5452]] /* vehicle.wheelRR.slipDynamics.alpha variable */)))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8030(DATA *data, threadData_t *threadData);


/*
equation index: 4406
type: SIMPLE_ASSIGN
$DER.vehicle.wheelFL.slipDynamics.kappa = 0.0
*/
void AlyssaVehicle_eqFunction_4406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4406};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* der(vehicle.wheelFL.slipDynamics.kappa) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 4407
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipDynamics.kappa = 0.0
*/
void AlyssaVehicle_eqFunction_4407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4407};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* vehicle.wheelFL.slipDynamics.kappa STATE(1) */) = 0.0;
  TRACE_POP
}

/*
equation index: 4408
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.vRim = vehicle.wheelFL.contactPatch.vx + vehicle.wheelFL.slipDynamics.sigmaX * $DER.vehicle.wheelFL.slipDynamics.kappa + vehicle.wheelFL.slipDynamics.vxAbs * vehicle.wheelFL.slipDynamics.kappa
*/
void AlyssaVehicle_eqFunction_4408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4408};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5160]] /* vehicle.wheelFL.rim.vRim variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5090]] /* vehicle.wheelFL.contactPatch.vx variable */) + ((data->simulationInfo->realParameter[3609] /* vehicle.wheelFL.slipDynamics.sigmaX PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* der(vehicle.wheelFL.slipDynamics.kappa) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5162]] /* vehicle.wheelFL.slipDynamics.vxAbs variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* vehicle.wheelFL.slipDynamics.kappa STATE(1) */));
  TRACE_POP
}

/*
equation index: 4409
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.w = vehicle.wheelFL.rim.vRim / vehicle.wheelFL.rim.rEff
*/
void AlyssaVehicle_eqFunction_4409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4409};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* vehicle.wheelFL.rim.rotor1D.w STATE(1) */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5160]] /* vehicle.wheelFL.rim.vRim variable */),(data->simulationInfo->realParameter[3572] /* vehicle.wheelFL.rim.rEff PARAM */),"vehicle.wheelFL.rim.rEff",equationIndexes);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_6945(DATA *data, threadData_t *threadData);


/*
equation index: 4411
type: SIMPLE_ASSIGN
$DER.vehicle.wheelFL.rim.damper.phi_rel = vehicle.wheelFL.rim.damper.w_rel
*/
void AlyssaVehicle_eqFunction_4411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4411};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* der(vehicle.wheelFL.rim.damper.phi_rel) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5107]] /* vehicle.wheelFL.rim.damper.w_rel DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 4412
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.damper.tau = vehicle.wheelFL.rim.damper.d * vehicle.wheelFL.rim.damper.w_rel
*/
void AlyssaVehicle_eqFunction_4412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4412};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5106]] /* vehicle.wheelFL.rim.damper.tau variable */) = ((data->simulationInfo->realParameter[3560] /* vehicle.wheelFL.rim.damper.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5107]] /* vehicle.wheelFL.rim.damper.w_rel DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4413
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.damper.lossPower = vehicle.wheelFL.rim.damper.tau * vehicle.wheelFL.rim.damper.w_rel
*/
void AlyssaVehicle_eqFunction_4413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4413};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5104]] /* vehicle.wheelFL.rim.damper.lossPower variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5106]] /* vehicle.wheelFL.rim.damper.tau variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5107]] /* vehicle.wheelFL.rim.damper.w_rel DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7037(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8371(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7004(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7002(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7003(DATA *data, threadData_t *threadData);


/*
equation index: 4419
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipDynamics.tanAlpha = 0.0
*/
void AlyssaVehicle_eqFunction_4419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4419};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* vehicle.wheelFL.slipDynamics.tanAlpha STATE(1) */) = 0.0;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8898(DATA *data, threadData_t *threadData);


/*
equation index: 4421
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipForces.sigma_y = tan(vehicle.wheelFL.slipDynamics.alpha) / vehicle.wheelFL.slipForces.d
*/
void AlyssaVehicle_eqFunction_4421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4421};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5174]] /* vehicle.wheelFL.slipForces.sigma_y variable */) = DIVISION_SIM(tan((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5161]] /* vehicle.wheelFL.slipDynamics.alpha variable */)),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5167]] /* vehicle.wheelFL.slipForces.d variable */),"vehicle.wheelFL.slipForces.d",equationIndexes);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8901(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8902(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8903(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8918(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8904(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8915(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8917(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8916(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8905(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8914(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8913(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8906(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8907(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8912(DATA *data, threadData_t *threadData);


/*
equation index: 4436
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.a = (rig.tau[1] + vehicle.wheelFL.rim.rotor1D.flange_b.tau) / vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.J
*/
void AlyssaVehicle_eqFunction_4436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4436};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5124]] /* vehicle.wheelFL.rim.rotor1D.a variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1293]] /* rig.tau[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5125]] /* vehicle.wheelFL.rim.rotor1D.flange_b.tau variable */),(data->simulationInfo->realParameter[3585] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.J PARAM */),"vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.J",equationIndexes);
  TRACE_POP
}

/*
equation index: 4437
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.damper.a_rel = -vehicle.wheelFL.rim.rotor1D.a
*/
void AlyssaVehicle_eqFunction_4437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4437};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5103]] /* vehicle.wheelFL.rim.damper.a_rel variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5124]] /* vehicle.wheelFL.rim.rotor1D.a variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8911(DATA *data, threadData_t *threadData);


/*
equation index: 4439
type: SIMPLE_ASSIGN
$DER.vehicle.wheelFL.rim.rotor1D.w = vehicle.wheelFL.rim.rotor1D.a
*/
void AlyssaVehicle_eqFunction_4439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4439};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[63]] /* der(vehicle.wheelFL.rim.rotor1D.w) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5124]] /* vehicle.wheelFL.rim.rotor1D.a variable */);
  TRACE_POP
}

/*
equation index: 4440
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipForces.pFric = vehicle.wheelFL.slipDynamics.vxAbs * (fx[1] * vehicle.wheelFL.slipDynamics.kappa - fy[1] * tan(vehicle.wheelFL.slipDynamics.alpha))
*/
void AlyssaVehicle_eqFunction_4440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4440};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5172]] /* vehicle.wheelFL.slipForces.pFric variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5162]] /* vehicle.wheelFL.slipDynamics.vxAbs variable */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* fx[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* vehicle.wheelFL.slipDynamics.kappa STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* fy[1] variable */)) * (tan((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5161]] /* vehicle.wheelFL.slipDynamics.alpha variable */)))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8390(DATA *data, threadData_t *threadData);


/*
equation index: 4442
type: SIMPLE_ASSIGN
$DER.vehicle.wheelFR.slipDynamics.kappa = 0.0
*/
void AlyssaVehicle_eqFunction_4442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4442};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* der(vehicle.wheelFR.slipDynamics.kappa) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 4443
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipDynamics.kappa = 0.0
*/
void AlyssaVehicle_eqFunction_4443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4443};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* vehicle.wheelFR.slipDynamics.kappa STATE(1) */) = 0.0;
  TRACE_POP
}

/*
equation index: 4444
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.vRim = vehicle.wheelFR.contactPatch.vx + vehicle.wheelFR.slipDynamics.sigmaX * $DER.vehicle.wheelFR.slipDynamics.kappa + vehicle.wheelFR.slipDynamics.vxAbs * vehicle.wheelFR.slipDynamics.kappa
*/
void AlyssaVehicle_eqFunction_4444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4444};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5257]] /* vehicle.wheelFR.rim.vRim variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5187]] /* vehicle.wheelFR.contactPatch.vx variable */) + ((data->simulationInfo->realParameter[3682] /* vehicle.wheelFR.slipDynamics.sigmaX PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* der(vehicle.wheelFR.slipDynamics.kappa) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5259]] /* vehicle.wheelFR.slipDynamics.vxAbs variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* vehicle.wheelFR.slipDynamics.kappa STATE(1) */));
  TRACE_POP
}

/*
equation index: 4445
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.w = vehicle.wheelFR.rim.vRim / vehicle.wheelFR.rim.rEff
*/
void AlyssaVehicle_eqFunction_4445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4445};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* vehicle.wheelFR.rim.rotor1D.w STATE(1) */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5257]] /* vehicle.wheelFR.rim.vRim variable */),(data->simulationInfo->realParameter[3645] /* vehicle.wheelFR.rim.rEff PARAM */),"vehicle.wheelFR.rim.rEff",equationIndexes);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_6944(DATA *data, threadData_t *threadData);


/*
equation index: 4447
type: SIMPLE_ASSIGN
$DER.vehicle.wheelFR.rim.damper.phi_rel = vehicle.wheelFR.rim.damper.w_rel
*/
void AlyssaVehicle_eqFunction_4447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4447};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1000]] /* der(vehicle.wheelFR.rim.damper.phi_rel) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5204]] /* vehicle.wheelFR.rim.damper.w_rel DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 4448
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.damper.tau = vehicle.wheelFR.rim.damper.d * vehicle.wheelFR.rim.damper.w_rel
*/
void AlyssaVehicle_eqFunction_4448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4448};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5203]] /* vehicle.wheelFR.rim.damper.tau variable */) = ((data->simulationInfo->realParameter[3633] /* vehicle.wheelFR.rim.damper.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5204]] /* vehicle.wheelFR.rim.damper.w_rel DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4449
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.damper.lossPower = vehicle.wheelFR.rim.damper.tau * vehicle.wheelFR.rim.damper.w_rel
*/
void AlyssaVehicle_eqFunction_4449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4449};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5201]] /* vehicle.wheelFR.rim.damper.lossPower variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5203]] /* vehicle.wheelFR.rim.damper.tau variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5204]] /* vehicle.wheelFR.rim.damper.w_rel DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7038(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8766(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6998(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6996(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6997(DATA *data, threadData_t *threadData);


/*
equation index: 4455
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipDynamics.tanAlpha = 0.0
*/
void AlyssaVehicle_eqFunction_4455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4455};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* vehicle.wheelFR.slipDynamics.tanAlpha STATE(1) */) = 0.0;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8934(DATA *data, threadData_t *threadData);


/*
equation index: 4457
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipForces.sigma_y = tan(vehicle.wheelFR.slipDynamics.alpha) / vehicle.wheelFR.slipForces.d
*/
void AlyssaVehicle_eqFunction_4457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4457};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5271]] /* vehicle.wheelFR.slipForces.sigma_y variable */) = DIVISION_SIM(tan((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5258]] /* vehicle.wheelFR.slipDynamics.alpha variable */)),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5264]] /* vehicle.wheelFR.slipForces.d variable */),"vehicle.wheelFR.slipForces.d",equationIndexes);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8937(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8938(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8939(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10550(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8940(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8951(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10549(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8952(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8941(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8950(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8949(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8942(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8943(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8948(DATA *data, threadData_t *threadData);


/*
equation index: 4472
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.a = (rig.tau[2] + vehicle.wheelFR.rim.rotor1D.flange_b.tau) / vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.J
*/
void AlyssaVehicle_eqFunction_4472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4472};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5221]] /* vehicle.wheelFR.rim.rotor1D.a variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1294]] /* rig.tau[2] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5222]] /* vehicle.wheelFR.rim.rotor1D.flange_b.tau variable */),(data->simulationInfo->realParameter[3658] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.J PARAM */),"vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.J",equationIndexes);
  TRACE_POP
}

/*
equation index: 4473
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.damper.a_rel = -vehicle.wheelFR.rim.rotor1D.a
*/
void AlyssaVehicle_eqFunction_4473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4473};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5200]] /* vehicle.wheelFR.rim.damper.a_rel variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5221]] /* vehicle.wheelFR.rim.rotor1D.a variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8947(DATA *data, threadData_t *threadData);


/*
equation index: 4475
type: SIMPLE_ASSIGN
$DER.vehicle.wheelFR.rim.rotor1D.w = vehicle.wheelFR.rim.rotor1D.a
*/
void AlyssaVehicle_eqFunction_4475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4475};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[67]] /* der(vehicle.wheelFR.rim.rotor1D.w) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5221]] /* vehicle.wheelFR.rim.rotor1D.a variable */);
  TRACE_POP
}

/*
equation index: 5988
type: LINEAR

<var>vehicle.vehicleBody.body.z_a[3]</var>
<var>vehicle.vehicleBody.body.z_a[1]</var>
<var>$DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.w[1]</var>
<var>vehicle.rearSuspension.frame_bL.t[1]</var>
<var>vehicle.rearSuspension.cornerL.staticAlign.frame_a.t[3]</var>
<var>vehicle.wheelRL.rim.frame_a.t[2]</var>
<var>$DER.$DER.vehicle.rearSuspension.cornerL.jointUSR.revolute.k1b</var>
<var>$DER.$DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.C</var>
<var>$DER.$DER.vehicle.rearSuspension.cornerR.jointUSR.revolute.k1a</var>
<var>$DER.$DER.vehicle.rearSuspension.cornerL.tieRod.revolute.C</var>
<var>$DER.$DER.vehicle.rearSuspension.cornerL.tieRod.revolute.k1a</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.C</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerL.jointUSR.revolute.k1a</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.C</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.k1a</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerR.tieRod.revolute.C</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerR.tieRod.revolute.k1a</var>
<var>vehicle.rearSuspension.frame_bR.t[1]</var>
<var>vehicle.rearSuspension.cornerR.staticAlign.frame_a.t[3]</var>
<var>vehicle.wheelRR.rim.frame_a.t[2]</var>
<var>$DER.$DER.vehicle.rearSuspension.cornerR.tieRod.revolute.C</var>
<var>$DER.$DER.vehicle.rearSuspension.cornerR.tieRod.revolute.k1a</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerL.tieRod.revolute.k1b</var>
<var>$DER.$DER.vehicle.rearSuspension.cornerL.tieRod.revolute.angle</var>
<var>$DER.$DER.vehicle.rearSuspension.cornerR.tieRod.revolute.angle</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerR.tieRod.revolute.angle</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerL.tieRod.revolute.angle</var>
<var>vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.t[1]</var>
<var>vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.t[2]</var>
<var>vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.t[3]</var>
<var>vehicle.rearSuspension.cornerL.uca.frame_a.t[2]</var>
<var>vehicle.rearSuspension.cornerL.uca.frame_a.t[3]</var>
<var>vehicle.rearSuspension.cornerL.jointUSR.f_rod</var>
<var>vehicle.rearSuspension.cornerL.jointUSR.rod1.f_b_a[1]</var>
<var>vehicle.rearSuspension.cornerL.jointUSR.rod1.f_b_a[3]</var>
<var>vehicle.rearSuspension.cornerL.jointUSR.rod1.f_b_a[2]</var>
<var>vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.f[2]</var>
<var>vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.f[3]</var>
<var>vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.f[1]</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerR.jointUSR.rod1.rRod_0[3]</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerR.jointUSR.rod1.rRod_0[2]</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerL.jointUSR.rod1.rRod_0[3]</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerL.jointUSR.rod1.rRod_0[1]</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerL.jointUSR.rod1.rRod_0[2]</var>
<var>$DER.$DER.vehicle.frontSuspension.cornerR.jointUSR.rod1.rRod_0[1]</var>
<var>vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.t[1]</var>
<var>vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.t[3]</var>
<var>vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.t[2]</var>
<var>vehicle.rearSuspension.cornerR.uca.frame_a.t[3]</var>
<var>vehicle.rearSuspension.cornerR.uca.frame_a.t[2]</var>
<var>vehicle.rearSuspension.cornerR.jointUSR.f_rod</var>
<var>vehicle.rearSuspension.cornerR.jointUSR.rod1.f_b_a[3]</var>
<var>vehicle.rearSuspension.cornerR.jointUSR.rod1.f_b_a[2]</var>
<var>vehicle.rearSuspension.cornerR.jointUSR.rod1.f_b_a[1]</var>
<var>vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.f[2]</var>
<var>vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.f[3]</var>
<var>vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.f[1]</var>
<var>vehicle.rearSuspension.cornerR.jointUSR.revolute.frame_b.t[3]</var>
<var>vehicle.rearSuspension.cornerL.jointUSR.revolute.frame_b.t[3]</var>
<var>vehicle.rearSuspension.cornerL.tieRod.f_rod</var>
<var>vehicle.rearSuspension.cornerR.tieRod.f_rod</var>
<var>vehicle.frontSuspension.cornerL.upright.a_0[2]</var>
<var>vehicle.frontSuspension.cornerL.upright.a_0[3]</var>
<var>vehicle.frontSuspension.cornerR.upright.a_0[3]</var>
<var>vehicle.frontSuspension.cornerR.upright.a_0[1]</var>
<var>vehicle.frontSuspension.cornerR.upright.a_0[2]</var>
<var>vehicle.frontSuspension.cornerL.upright.a_0[1]</var>
<var>vehicle.rearSuspension.cornerL.ucaPivot.a</var>
<var>vehicle.rearSuspension.cornerR.ucaPivot.a</var>
<var>vehicle.frontSuspension.cornerR.ucaPivot.a</var>
<var>vehicle.frontSuspension.cornerL.ucaPivot.a</var>
<var>vehicle.frontSuspension.cornerR.upright.z_a[1]</var>
<var>vehicle.frontSuspension.cornerR.upright.z_a[2]</var>
<var>vehicle.frontSuspension.cornerR.upright.z_a[3]</var>
<var>vehicle.frontSuspension.cornerL.upright.z_a[3]</var>
<var>vehicle.frontSuspension.cornerL.upright.z_a[2]</var>
<var>vehicle.frontSuspension.cornerL.upright.z_a[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void AlyssaVehicle_eqFunction_5988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5988};
  /* Linear equation system */
  int retValue;
  double aux_x[77] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[5040]] /* vehicle.vehicleBody.body.z_a[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[5038]] /* vehicle.vehicleBody.body.z_a[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[541]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.w[1]) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4912]] /* vehicle.rearSuspension.frame_bL.t[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3636]] /* vehicle.rearSuspension.cornerL.staticAlign.frame_a.t[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[5306]] /* vehicle.wheelRL.rim.frame_a.t[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[197]] /* der(der(vehicle.rearSuspension.cornerL.jointUSR.revolute.k1b)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[238]] /* der(der(vehicle.rearSuspension.cornerR.jointUSR.revolute.C)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[241]] /* der(der(vehicle.rearSuspension.cornerR.jointUSR.revolute.k1a)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[212]] /* der(der(vehicle.rearSuspension.cornerL.tieRod.revolute.C)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[216]] /* der(der(vehicle.rearSuspension.cornerL.tieRod.revolute.k1a)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[93]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.revolute.C)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[96]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.revolute.k1a)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[138]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.revolute.C)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[141]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.revolute.k1a)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[157]] /* der(der(vehicle.frontSuspension.cornerR.tieRod.revolute.C)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[161]] /* der(der(vehicle.frontSuspension.cornerR.tieRod.revolute.k1a)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4915]] /* vehicle.rearSuspension.frame_bR.t[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4496]] /* vehicle.rearSuspension.cornerR.staticAlign.frame_a.t[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[5403]] /* vehicle.wheelRR.rim.frame_a.t[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[257]] /* der(der(vehicle.rearSuspension.cornerR.tieRod.revolute.C)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[261]] /* der(der(vehicle.rearSuspension.cornerR.tieRod.revolute.k1a)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[117]] /* der(der(vehicle.frontSuspension.cornerL.tieRod.revolute.k1b)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[213]] /* der(der(vehicle.rearSuspension.cornerL.tieRod.revolute.angle)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[258]] /* der(der(vehicle.rearSuspension.cornerR.tieRod.revolute.angle)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[158]] /* der(der(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[113]] /* der(der(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3742]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.t[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3743]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.t[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3744]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.t[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3855]] /* vehicle.rearSuspension.cornerL.uca.frame_a.t[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3856]] /* vehicle.rearSuspension.cornerL.uca.frame_a.t[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3267]] /* vehicle.rearSuspension.cornerL.jointUSR.f_rod variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3438]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.f_b_a[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3440]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.f_b_a[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3439]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.f_b_a[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3740]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.f[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3741]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.f[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3739]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.f[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[151]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.rod1.rRod_0[3])) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[150]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.rod1.rRod_0[2])) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[106]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.rod1.rRod_0[3])) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[104]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.rod1.rRod_0[1])) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[105]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.rod1.rRod_0[2])) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[149]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.rod1.rRod_0[1])) DUMMY_DER */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4602]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.t[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4604]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.t[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4603]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.t[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4716]] /* vehicle.rearSuspension.cornerR.uca.frame_a.t[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4715]] /* vehicle.rearSuspension.cornerR.uca.frame_a.t[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4127]] /* vehicle.rearSuspension.cornerR.jointUSR.f_rod variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4300]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.f_b_a[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4299]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.f_b_a[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4298]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.f_b_a[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4600]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.f[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4601]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.f[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4599]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.f[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4250]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.frame_b.t[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3390]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.frame_b.t[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3652]] /* vehicle.rearSuspension.cornerL.tieRod.f_rod variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4512]] /* vehicle.rearSuspension.cornerR.tieRod.f_rod variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2052]] /* vehicle.frontSuspension.cornerL.upright.a_0[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2053]] /* vehicle.frontSuspension.cornerL.upright.a_0[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2907]] /* vehicle.frontSuspension.cornerR.upright.a_0[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2905]] /* vehicle.frontSuspension.cornerR.upright.a_0[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2906]] /* vehicle.frontSuspension.cornerR.upright.a_0[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2051]] /* vehicle.frontSuspension.cornerL.upright.a_0[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3900]] /* vehicle.rearSuspension.cornerL.ucaPivot.a variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4760]] /* vehicle.rearSuspension.cornerR.ucaPivot.a variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2885]] /* vehicle.frontSuspension.cornerR.ucaPivot.a variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2031]] /* vehicle.frontSuspension.cornerL.ucaPivot.a variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2959]] /* vehicle.frontSuspension.cornerR.upright.z_a[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2960]] /* vehicle.frontSuspension.cornerR.upright.z_a[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2961]] /* vehicle.frontSuspension.cornerR.upright.z_a[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2107]] /* vehicle.frontSuspension.cornerL.upright.z_a[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2106]] /* vehicle.frontSuspension.cornerL.upright.z_a[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2105]] /* vehicle.frontSuspension.cornerL.upright.z_a[1] variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 5988 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 8, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,5988};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 5988 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5040]] /* vehicle.vehicleBody.body.z_a[3] variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5038]] /* vehicle.vehicleBody.body.z_a[1] variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[541]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.w[1]) DUMMY_DER */) = aux_x[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4912]] /* vehicle.rearSuspension.frame_bL.t[1] variable */) = aux_x[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3636]] /* vehicle.rearSuspension.cornerL.staticAlign.frame_a.t[3] variable */) = aux_x[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5306]] /* vehicle.wheelRL.rim.frame_a.t[2] variable */) = aux_x[5];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[197]] /* der(der(vehicle.rearSuspension.cornerL.jointUSR.revolute.k1b)) DUMMY_DER */) = aux_x[6];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* der(der(vehicle.rearSuspension.cornerR.jointUSR.revolute.C)) DUMMY_DER */) = aux_x[7];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* der(der(vehicle.rearSuspension.cornerR.jointUSR.revolute.k1a)) DUMMY_DER */) = aux_x[8];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[212]] /* der(der(vehicle.rearSuspension.cornerL.tieRod.revolute.C)) DUMMY_DER */) = aux_x[9];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* der(der(vehicle.rearSuspension.cornerL.tieRod.revolute.k1a)) DUMMY_DER */) = aux_x[10];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.revolute.C)) DUMMY_DER */) = aux_x[11];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.revolute.k1a)) DUMMY_DER */) = aux_x[12];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.revolute.C)) DUMMY_DER */) = aux_x[13];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.revolute.k1a)) DUMMY_DER */) = aux_x[14];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* der(der(vehicle.frontSuspension.cornerR.tieRod.revolute.C)) DUMMY_DER */) = aux_x[15];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* der(der(vehicle.frontSuspension.cornerR.tieRod.revolute.k1a)) DUMMY_DER */) = aux_x[16];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4915]] /* vehicle.rearSuspension.frame_bR.t[1] variable */) = aux_x[17];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4496]] /* vehicle.rearSuspension.cornerR.staticAlign.frame_a.t[3] variable */) = aux_x[18];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5403]] /* vehicle.wheelRR.rim.frame_a.t[2] variable */) = aux_x[19];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* der(der(vehicle.rearSuspension.cornerR.tieRod.revolute.C)) DUMMY_DER */) = aux_x[20];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* der(der(vehicle.rearSuspension.cornerR.tieRod.revolute.k1a)) DUMMY_DER */) = aux_x[21];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* der(der(vehicle.frontSuspension.cornerL.tieRod.revolute.k1b)) DUMMY_DER */) = aux_x[22];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* der(der(vehicle.rearSuspension.cornerL.tieRod.revolute.angle)) DUMMY_DER */) = aux_x[23];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* der(der(vehicle.rearSuspension.cornerR.tieRod.revolute.angle)) DUMMY_DER */) = aux_x[24];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* der(der(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)) DUMMY_DER */) = aux_x[25];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* der(der(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)) DUMMY_DER */) = aux_x[26];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3742]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.t[1] variable */) = aux_x[27];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3743]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.t[2] variable */) = aux_x[28];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3744]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.t[3] variable */) = aux_x[29];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3855]] /* vehicle.rearSuspension.cornerL.uca.frame_a.t[2] variable */) = aux_x[30];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3856]] /* vehicle.rearSuspension.cornerL.uca.frame_a.t[3] variable */) = aux_x[31];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3267]] /* vehicle.rearSuspension.cornerL.jointUSR.f_rod variable */) = aux_x[32];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3438]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.f_b_a[1] variable */) = aux_x[33];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3440]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.f_b_a[3] variable */) = aux_x[34];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3439]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.f_b_a[2] variable */) = aux_x[35];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3740]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.f[2] variable */) = aux_x[36];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3741]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.f[3] variable */) = aux_x[37];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3739]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.frame_b.f[1] variable */) = aux_x[38];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.rod1.rRod_0[3])) DUMMY_DER */) = aux_x[39];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.rod1.rRod_0[2])) DUMMY_DER */) = aux_x[40];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.rod1.rRod_0[3])) DUMMY_DER */) = aux_x[41];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[104]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.rod1.rRod_0[1])) DUMMY_DER */) = aux_x[42];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[105]] /* der(der(vehicle.frontSuspension.cornerL.jointUSR.rod1.rRod_0[2])) DUMMY_DER */) = aux_x[43];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* der(der(vehicle.frontSuspension.cornerR.jointUSR.rod1.rRod_0[1])) DUMMY_DER */) = aux_x[44];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4602]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.t[1] variable */) = aux_x[45];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4604]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.t[3] variable */) = aux_x[46];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4603]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.t[2] variable */) = aux_x[47];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4716]] /* vehicle.rearSuspension.cornerR.uca.frame_a.t[3] variable */) = aux_x[48];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4715]] /* vehicle.rearSuspension.cornerR.uca.frame_a.t[2] variable */) = aux_x[49];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4127]] /* vehicle.rearSuspension.cornerR.jointUSR.f_rod variable */) = aux_x[50];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4300]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.f_b_a[3] variable */) = aux_x[51];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4299]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.f_b_a[2] variable */) = aux_x[52];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4298]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.f_b_a[1] variable */) = aux_x[53];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4600]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.f[2] variable */) = aux_x[54];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4601]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.f[3] variable */) = aux_x[55];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4599]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.frame_b.f[1] variable */) = aux_x[56];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4250]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.frame_b.t[3] variable */) = aux_x[57];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3390]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.frame_b.t[3] variable */) = aux_x[58];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3652]] /* vehicle.rearSuspension.cornerL.tieRod.f_rod variable */) = aux_x[59];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4512]] /* vehicle.rearSuspension.cornerR.tieRod.f_rod variable */) = aux_x[60];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2052]] /* vehicle.frontSuspension.cornerL.upright.a_0[2] variable */) = aux_x[61];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2053]] /* vehicle.frontSuspension.cornerL.upright.a_0[3] variable */) = aux_x[62];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2907]] /* vehicle.frontSuspension.cornerR.upright.a_0[3] variable */) = aux_x[63];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2905]] /* vehicle.frontSuspension.cornerR.upright.a_0[1] variable */) = aux_x[64];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2906]] /* vehicle.frontSuspension.cornerR.upright.a_0[2] variable */) = aux_x[65];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2051]] /* vehicle.frontSuspension.cornerL.upright.a_0[1] variable */) = aux_x[66];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3900]] /* vehicle.rearSuspension.cornerL.ucaPivot.a variable */) = aux_x[67];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4760]] /* vehicle.rearSuspension.cornerR.ucaPivot.a variable */) = aux_x[68];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2885]] /* vehicle.frontSuspension.cornerR.ucaPivot.a variable */) = aux_x[69];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2031]] /* vehicle.frontSuspension.cornerL.ucaPivot.a variable */) = aux_x[70];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2959]] /* vehicle.frontSuspension.cornerR.upright.z_a[1] variable */) = aux_x[71];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2960]] /* vehicle.frontSuspension.cornerR.upright.z_a[2] variable */) = aux_x[72];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2961]] /* vehicle.frontSuspension.cornerR.upright.z_a[3] variable */) = aux_x[73];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2107]] /* vehicle.frontSuspension.cornerL.upright.z_a[3] variable */) = aux_x[74];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2106]] /* vehicle.frontSuspension.cornerL.upright.z_a[2] variable */) = aux_x[75];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2105]] /* vehicle.frontSuspension.cornerL.upright.z_a[1] variable */) = aux_x[76];

  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_10543(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10453(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10539(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10491(DATA *data, threadData_t *threadData);


/*
equation index: 5993
type: SIMPLE_ASSIGN
$DER.$DER.rig.motion.lateral.frame_a.r_0[1] = $DER.$DER.rig.motion.heave.frame_a.r_0[1]
*/
void AlyssaVehicle_eqFunction_5993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5993};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* der(der(rig.motion.lateral.frame_a.r_0[1])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* der(der(rig.motion.heave.frame_a.r_0[1])) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 5994
type: SIMPLE_ASSIGN
rig.motion.longitudinal.a = $DER.$DER.rig.motion.lateral.frame_a.r_0[1]
*/
void AlyssaVehicle_eqFunction_5994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5994};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* rig.motion.longitudinal.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* der(der(rig.motion.lateral.frame_a.r_0[1])) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 5995
type: SIMPLE_ASSIGN
$DER.rig.motion.longitudinal.v = rig.motion.longitudinal.a
*/
void AlyssaVehicle_eqFunction_5995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5995};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* der(rig.motion.longitudinal.v) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* rig.motion.longitudinal.a variable */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_10478(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10476(DATA *data, threadData_t *threadData);


/*
equation index: 6031
type: LINEAR

<var>rig.motion.yaw.a</var>
<var>rig.motion.pitch.a</var>
<var>rig.motion.roll.a</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void AlyssaVehicle_eqFunction_6031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6031};
  /* Linear equation system */
  int retValue;
  double aux_x[3] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1258]] /* rig.motion.yaw.a variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1181]] /* rig.motion.pitch.a variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1224]] /* rig.motion.roll.a variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 6031 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 9, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,6031};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 6031 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1258]] /* rig.motion.yaw.a variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1181]] /* rig.motion.pitch.a variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* rig.motion.roll.a variable */) = aux_x[2];

  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_10533(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10535(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10536(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10486(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10471(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10487(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10456(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10485(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10455(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10473(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10482(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10448(DATA *data, threadData_t *threadData);


/*
equation index: 6044
type: SIMPLE_ASSIGN
rig.motion.heave.a = vehicle.vehicleBody.body.a_0[3] - $DER.$DER.rig.motion.heave.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_6044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6044};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* rig.motion.heave.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4986]] /* vehicle.vehicleBody.body.a_0[3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* der(der(rig.motion.heave.frame_a.r_0[3])) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 6045
type: SIMPLE_ASSIGN
$DER.rig.motion.heave.v = rig.motion.heave.a
*/
void AlyssaVehicle_eqFunction_6045(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6045};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* der(rig.motion.heave.v) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* rig.motion.heave.a variable */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_10498(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10497(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10496(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10495(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10469(DATA *data, threadData_t *threadData);


/*
equation index: 6051
type: SIMPLE_ASSIGN
rig.motion.lateral.a = $DER.$DER.rig.motion.heave.frame_a.r_0[2] - $DER.$DER.rig.motion.lateral.frame_a.r_0[2]
*/
void AlyssaVehicle_eqFunction_6051(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6051};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1130]] /* rig.motion.lateral.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* der(der(rig.motion.heave.frame_a.r_0[2])) DUMMY_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* der(der(rig.motion.lateral.frame_a.r_0[2])) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 6052
type: SIMPLE_ASSIGN
$DER.rig.motion.lateral.v = rig.motion.lateral.a
*/
void AlyssaVehicle_eqFunction_6052(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6052};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* der(rig.motion.lateral.v) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1130]] /* rig.motion.lateral.a variable */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_10468(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10537(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10540(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10446(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10449(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10548(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10464(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10441(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10546(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10460(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10545(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10447(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10477(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10475(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10480(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10474(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10490(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10445(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_10541(DATA *data, threadData_t *threadData);


/*
equation index: 6072
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipForces.pFric = vehicle.wheelFR.slipDynamics.vxAbs * (fx[2] * vehicle.wheelFR.slipDynamics.kappa - fy[2] * tan(vehicle.wheelFR.slipDynamics.alpha))
*/
void AlyssaVehicle_eqFunction_6072(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6072};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5269]] /* vehicle.wheelFR.slipForces.pFric variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5259]] /* vehicle.wheelFR.slipDynamics.vxAbs variable */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* fx[2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* vehicle.wheelFR.slipDynamics.kappa STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* fy[2] variable */)) * (tan((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5258]] /* vehicle.wheelFR.slipDynamics.alpha variable */)))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8782(DATA *data, threadData_t *threadData);


/*
equation index: 6074
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod1.e2_a[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6074(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6074};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3429]] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.e2_a[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6075
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod1.e2_a[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6075};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4289]] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.e2_a[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6076
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.e2_a[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6076(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6076};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1562]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.e2_a[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6077
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.e2_a[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6077(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6077};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2416]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.e2_a[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6078
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod2.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6078};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3523]] /* vehicle.rearSuspension.cornerL.jointUSR.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6079
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod2.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6079};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3519]] /* vehicle.rearSuspension.cornerL.jointUSR.rod2.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6080
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod2.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6080};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3521]] /* vehicle.rearSuspension.cornerL.jointUSR.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6081
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.rod2.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6081};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3825]] /* vehicle.rearSuspension.cornerL.tieRod.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6082
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.rod2.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6082};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3824]] /* vehicle.rearSuspension.cornerL.tieRod.rod2.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6083
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.rod2.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6083};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3823]] /* vehicle.rearSuspension.cornerL.tieRod.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6084
type: SIMPLE_ASSIGN
vehicle.rearSuspension.toeLinks.tieRodInnerL.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6084};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4932]] /* vehicle.rearSuspension.toeLinks.tieRodInnerL.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6085
type: SIMPLE_ASSIGN
vehicle.rearSuspension.toeLinks.tieRodInnerL.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6085};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4931]] /* vehicle.rearSuspension.toeLinks.tieRodInnerL.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6086
type: SIMPLE_ASSIGN
vehicle.rearSuspension.toeLinks.tieRodInnerL.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6086};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4930]] /* vehicle.rearSuspension.toeLinks.tieRodInnerL.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6087
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod2.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6087};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4383]] /* vehicle.rearSuspension.cornerR.jointUSR.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6088
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod2.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6088};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4379]] /* vehicle.rearSuspension.cornerR.jointUSR.rod2.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6089
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod2.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6089};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4381]] /* vehicle.rearSuspension.cornerR.jointUSR.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6090
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod2.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6090};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4685]] /* vehicle.rearSuspension.cornerR.tieRod.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6091
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod2.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6091};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4684]] /* vehicle.rearSuspension.cornerR.tieRod.rod2.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6092
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod2.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6092};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4683]] /* vehicle.rearSuspension.cornerR.tieRod.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6093
type: SIMPLE_ASSIGN
vehicle.rearSuspension.toeLinks.tieRodInnerR.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6093};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4938]] /* vehicle.rearSuspension.toeLinks.tieRodInnerR.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6094
type: SIMPLE_ASSIGN
vehicle.rearSuspension.toeLinks.tieRodInnerR.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6094};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4937]] /* vehicle.rearSuspension.toeLinks.tieRodInnerR.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6095
type: SIMPLE_ASSIGN
vehicle.rearSuspension.toeLinks.tieRodInnerR.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6095};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4936]] /* vehicle.rearSuspension.toeLinks.tieRodInnerR.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6096
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod2.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6096};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1656]] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6097
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod2.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6097};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1655]] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6098
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod2.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6098};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1654]] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6099
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod2.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6099};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1956]] /* vehicle.frontSuspension.cornerL.tieRod.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6100
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod2.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6100};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1955]] /* vehicle.frontSuspension.cornerL.tieRod.rod2.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6101
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod2.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1954]] /* vehicle.frontSuspension.cornerL.tieRod.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6102
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRodInner.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6102};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1976]] /* vehicle.frontSuspension.cornerL.tieRodInner.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6103
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.tieRodInnerL.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3141]] /* vehicle.frontSuspension.steering.tieRodInnerL.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6104
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRodInner.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6104};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1974]] /* vehicle.frontSuspension.cornerL.tieRodInner.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6105
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod2.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6105};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2510]] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6106
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod2.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6107
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod2.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6108
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6108};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2810]] /* vehicle.frontSuspension.cornerR.tieRod.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6109
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2809]] /* vehicle.frontSuspension.cornerR.tieRod.rod2.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6110
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2808]] /* vehicle.frontSuspension.cornerR.tieRod.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6111
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRodInner.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2830]] /* vehicle.frontSuspension.cornerR.tieRodInner.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6112
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.tieRodInnerR.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6112};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3147]] /* vehicle.frontSuspension.steering.tieRodInnerR.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6113
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRodInner.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2828]] /* vehicle.frontSuspension.cornerR.tieRodInner.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6114
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6114};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5304]] /* vehicle.wheelRL.rim.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6115
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5303]] /* vehicle.wheelRL.rim.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6116
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6116};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5302]] /* vehicle.wheelRL.rim.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6117
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5401]] /* vehicle.wheelRR.rim.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6118
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6118};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5400]] /* vehicle.wheelRR.rim.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6119
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5399]] /* vehicle.wheelRR.rim.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6120
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6120};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5110]] /* vehicle.wheelFL.rim.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6121
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5109]] /* vehicle.wheelFL.rim.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6122
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6122};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5108]] /* vehicle.wheelFL.rim.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6123
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5207]] /* vehicle.wheelFR.rim.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6124
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5206]] /* vehicle.wheelFR.rim.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6125
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5205]] /* vehicle.wheelFR.rim.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6126
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.frame_im.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6126};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2641]] /* vehicle.frontSuspension.cornerR.tieRod.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6127
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.frame_im.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6127};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2642]] /* vehicle.frontSuspension.cornerR.tieRod.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6128
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.frame_im.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6128};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2643]] /* vehicle.frontSuspension.cornerR.tieRod.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6129
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.frame_im.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6129};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2647]] /* vehicle.frontSuspension.cornerR.tieRod.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6130
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.frame_im.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6130};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2648]] /* vehicle.frontSuspension.cornerR.tieRod.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6131
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.frame_im.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6131};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2649]] /* vehicle.frontSuspension.cornerR.tieRod.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6132
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.frame_im.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6132};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2289]] /* vehicle.frontSuspension.cornerR.jointUSR.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6133
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.frame_im.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6133};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2290]] /* vehicle.frontSuspension.cornerR.jointUSR.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6134
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.frame_im.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6134};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2291]] /* vehicle.frontSuspension.cornerR.jointUSR.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6135
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.frame_im.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2295]] /* vehicle.frontSuspension.cornerR.jointUSR.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6136
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.frame_im.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6136};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* vehicle.frontSuspension.cornerR.jointUSR.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6137
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.frame_im.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6137};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* vehicle.frontSuspension.cornerR.jointUSR.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6138
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.frame_im.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6138};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* vehicle.frontSuspension.cornerL.tieRod.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6139
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.frame_im.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1788]] /* vehicle.frontSuspension.cornerL.tieRod.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6140
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.frame_im.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6140};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1789]] /* vehicle.frontSuspension.cornerL.tieRod.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6141
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.frame_im.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* vehicle.frontSuspension.cornerL.tieRod.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6142
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.frame_im.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6142};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1794]] /* vehicle.frontSuspension.cornerL.tieRod.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6143
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.frame_im.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1795]] /* vehicle.frontSuspension.cornerL.tieRod.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6144
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.frame_im.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1435]] /* vehicle.frontSuspension.cornerL.jointUSR.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6145
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.frame_im.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1436]] /* vehicle.frontSuspension.cornerL.jointUSR.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6146
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.frame_im.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6146};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1437]] /* vehicle.frontSuspension.cornerL.jointUSR.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6147
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.frame_im.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6147};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1441]] /* vehicle.frontSuspension.cornerL.jointUSR.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6148
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.frame_im.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6148};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1442]] /* vehicle.frontSuspension.cornerL.jointUSR.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6149
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.frame_im.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6149};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1443]] /* vehicle.frontSuspension.cornerL.jointUSR.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6150
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.frame_im.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4516]] /* vehicle.rearSuspension.cornerR.tieRod.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6151
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.frame_im.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6151};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4517]] /* vehicle.rearSuspension.cornerR.tieRod.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6152
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.frame_im.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4518]] /* vehicle.rearSuspension.cornerR.tieRod.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6153
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.frame_im.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4522]] /* vehicle.rearSuspension.cornerR.tieRod.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6154
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.frame_im.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6154};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4523]] /* vehicle.rearSuspension.cornerR.tieRod.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6155
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.frame_im.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6155};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4524]] /* vehicle.rearSuspension.cornerR.tieRod.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6156
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.frame_im.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6156};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4166]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6157
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.frame_im.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6157};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4167]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6158
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.frame_im.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6158};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4168]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6159
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.frame_im.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4172]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6160
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.frame_im.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6160};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4173]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6161
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.frame_im.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4174]] /* vehicle.rearSuspension.cornerR.jointUSR.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6162
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.frame_im.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6162};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3656]] /* vehicle.rearSuspension.cornerL.tieRod.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6163
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.frame_im.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6163};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3657]] /* vehicle.rearSuspension.cornerL.tieRod.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6164
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.frame_im.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6164};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3658]] /* vehicle.rearSuspension.cornerL.tieRod.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6165
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.frame_im.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6165};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3662]] /* vehicle.rearSuspension.cornerL.tieRod.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6166
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.frame_im.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6166};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3663]] /* vehicle.rearSuspension.cornerL.tieRod.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6167
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.frame_im.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6167};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3664]] /* vehicle.rearSuspension.cornerL.tieRod.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6168
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.frame_im.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6168};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3306]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6169
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.frame_im.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3307]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6170
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.frame_im.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6170};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3308]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6171
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.frame_im.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6171};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3312]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6172
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.frame_im.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3313]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6173
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.frame_im.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3314]] /* vehicle.rearSuspension.cornerL.jointUSR.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6174
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6174};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5249]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6175
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6175};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5250]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6176
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6176};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5251]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6177
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.mounting1D.housing.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6177};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5216]] /* vehicle.wheelFR.rim.mounting1D.housing.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6178
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.mounting1D.housing.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5217]] /* vehicle.wheelFR.rim.mounting1D.housing.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6179
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.mounting1D.housing.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6179};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5218]] /* vehicle.wheelFR.rim.mounting1D.housing.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6180
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.mounting1D.housing.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6180};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5219]] /* vehicle.wheelFR.rim.mounting1D.housing.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6181
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.mounting1D.housing.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5220]] /* vehicle.wheelFR.rim.mounting1D.housing.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6182
type: SIMPLE_ASSIGN
vehicle.wheelFR.contactPatch.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6182};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5181]] /* vehicle.wheelFR.contactPatch.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6183
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5152]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6184
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6184};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5153]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6185
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5154]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6186
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.mounting1D.housing.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6186};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5119]] /* vehicle.wheelFL.rim.mounting1D.housing.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6187
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.mounting1D.housing.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6187};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5120]] /* vehicle.wheelFL.rim.mounting1D.housing.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6188
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.mounting1D.housing.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6188};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5121]] /* vehicle.wheelFL.rim.mounting1D.housing.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6189
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.mounting1D.housing.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5122]] /* vehicle.wheelFL.rim.mounting1D.housing.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6190
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.mounting1D.housing.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6190};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5123]] /* vehicle.wheelFL.rim.mounting1D.housing.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6191
type: SIMPLE_ASSIGN
vehicle.wheelFL.contactPatch.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6191};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5084]] /* vehicle.wheelFL.contactPatch.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6192
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6192};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5443]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6193
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6193};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5444]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6194
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6194};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5445]] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6195
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.mounting1D.housing.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5410]] /* vehicle.wheelRR.rim.mounting1D.housing.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6196
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.mounting1D.housing.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6196};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5411]] /* vehicle.wheelRR.rim.mounting1D.housing.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6197
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.mounting1D.housing.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6197};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5412]] /* vehicle.wheelRR.rim.mounting1D.housing.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6198
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.mounting1D.housing.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6198};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5413]] /* vehicle.wheelRR.rim.mounting1D.housing.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6199
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.mounting1D.housing.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5414]] /* vehicle.wheelRR.rim.mounting1D.housing.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6200
type: SIMPLE_ASSIGN
vehicle.wheelRR.contactPatch.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6200};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5375]] /* vehicle.wheelRR.contactPatch.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6201
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6201};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5346]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6202
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6202};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5347]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6203
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5348]] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6204
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.mounting1D.housing.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5313]] /* vehicle.wheelRL.rim.mounting1D.housing.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6205
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.mounting1D.housing.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5314]] /* vehicle.wheelRL.rim.mounting1D.housing.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6206
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.mounting1D.housing.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6206};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5315]] /* vehicle.wheelRL.rim.mounting1D.housing.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6207
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.mounting1D.housing.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6207};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5316]] /* vehicle.wheelRL.rim.mounting1D.housing.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6208
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.mounting1D.housing.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6208};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5317]] /* vehicle.wheelRL.rim.mounting1D.housing.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6209
type: SIMPLE_ASSIGN
vehicle.wheelRL.contactPatch.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6209};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5278]] /* vehicle.wheelRL.contactPatch.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6210
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.g_0[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5007]] /* vehicle.vehicleBody.body.g_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6211
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.g_0[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5008]] /* vehicle.vehicleBody.body.g_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6212
type: SIMPLE_ASSIGN
vehicle.vehicleBody.aero.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6212};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4972]] /* vehicle.vehicleBody.aero.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6213
type: SIMPLE_ASSIGN
vehicle.vehicleBody.aero.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6213};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4974]] /* vehicle.vehicleBody.aero.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6214
type: SIMPLE_ASSIGN
vehicle.vehicleBody.aero.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6214};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4976]] /* vehicle.vehicleBody.aero.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6215
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.axis.tau = 0.0
*/
void AlyssaVehicle_eqFunction_6215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6215};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2637]] /* vehicle.frontSuspension.cornerR.tieRod.axis.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6216
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.constraintResidue = 0.0
*/
void AlyssaVehicle_eqFunction_6216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6216};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2743]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.constraintResidue variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6217
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6217};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6218
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6218};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6219
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6219};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2758]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6220
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6220};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2762]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6221
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2763]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6222
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6222};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2764]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6223
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.f_b_a1[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6223};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2753]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.f_b_a1[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6224
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.f_b_a1[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6224};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2754]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.f_b_a1[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6225
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.f_b_a1[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2755]] /* vehicle.frontSuspension.cornerR.tieRod.rod1.f_b_a1[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6226
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2653]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6227
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6227};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2654]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6228
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6228};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2655]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6229
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2656]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6230
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2657]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6231
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6231};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2658]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6232
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2659]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6233
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2660]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6234
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2661]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6235
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2662]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6236
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2663]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6237
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2664]] /* vehicle.frontSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6238
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.position_b[1].y = -0.09999999999999999
*/
void AlyssaVehicle_eqFunction_6238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* vehicle.frontSuspension.cornerR.tieRod.position_b[1].y variable */) = -0.09999999999999999;
  TRACE_POP
}

/*
equation index: 6239
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.position_b[2].y = 0.07000000000000006
*/
void AlyssaVehicle_eqFunction_6239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* vehicle.frontSuspension.cornerR.tieRod.position_b[2].y variable */) = 0.07000000000000006;
  TRACE_POP
}

/*
equation index: 6240
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.position_b[3].y = 0.30000000000000004
*/
void AlyssaVehicle_eqFunction_6240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2652]] /* vehicle.frontSuspension.cornerR.tieRod.position_b[3].y variable */) = 0.30000000000000004;
  TRACE_POP
}

/*
equation index: 6241
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.g_0[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* vehicle.frontSuspension.cornerR.upright.g_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6242
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.g_0[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2929]] /* vehicle.frontSuspension.cornerR.upright.g_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6243
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2975]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6244
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2976]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6245
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2977]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6246
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2978]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6247
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2979]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6248
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2980]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6249
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_b.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2981]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6250
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_b.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2982]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6251
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_b.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2983]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6252
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2984]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6253
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2985]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6254
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2986]] /* vehicle.frontSuspension.cornerR.wheelAngles.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6255
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2989]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6256
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6256};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2990]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6257
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6257};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2991]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6258
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6258};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2992]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6259
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6259};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2993]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6260
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6260};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2994]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6261
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6261};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2995]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6262
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6262};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2996]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6263
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6263};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2997]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6264
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6264};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2998]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6265
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6265};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2999]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6266
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6266};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3000]] /* vehicle.frontSuspension.cornerR.wheelPosition.relativePosition.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6267
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.phi_support = 0.0
*/
void AlyssaVehicle_eqFunction_6267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6267};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2886]] /* vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.phi_support variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6268
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.axis.tau = 0.0
*/
void AlyssaVehicle_eqFunction_6268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6268};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2247]] /* vehicle.frontSuspension.cornerR.jointUSR.axis.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6269
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.w[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2351]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6270
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.w[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6270};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2352]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6271
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[1,1] = 1.0
*/
void AlyssaVehicle_eqFunction_6271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6271};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2343]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 6272
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[1,2] = 0.0
*/
void AlyssaVehicle_eqFunction_6272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6272};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2344]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6273
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[1,3] = 0.0
*/
void AlyssaVehicle_eqFunction_6273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6273};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2345]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6274
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[2,1] = 0.0
*/
void AlyssaVehicle_eqFunction_6274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6274};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2346]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6275
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,1] = 0.0
*/
void AlyssaVehicle_eqFunction_6275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6275};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2347]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6276
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.constraintResidue = 0.0
*/
void AlyssaVehicle_eqFunction_6276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6276};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2412]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.constraintResidue variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6277
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.n2_a[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6277};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2442]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.n2_a[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6278
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.w[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6278};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2409]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6279
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.w[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2410]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6280
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.w[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6280};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2411]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6281
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[1,1] = 0.11001306482721841
*/
void AlyssaVehicle_eqFunction_6281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6281};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2400]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[1,1] variable */) = 0.11001306482721841;
  TRACE_POP
}

/*
equation index: 6282
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2] = 0.0
*/
void AlyssaVehicle_eqFunction_6282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6282};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2401]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6283
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[1,3] = -0.9939301411906785
*/
void AlyssaVehicle_eqFunction_6283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2402]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[1,3] variable */) = -0.9939301411906785;
  TRACE_POP
}

/*
equation index: 6284
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[2,1] = 0.24752939586124134
*/
void AlyssaVehicle_eqFunction_6284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6284};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2403]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[2,1] variable */) = 0.24752939586124134;
  TRACE_POP
}

/*
equation index: 6285
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2] = 0.9684929325968497
*/
void AlyssaVehicle_eqFunction_6285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6285};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2404]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2] variable */) = 0.9684929325968497;
  TRACE_POP
}

/*
equation index: 6286
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[2,3] = 0.027397768057323447
*/
void AlyssaVehicle_eqFunction_6286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6286};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2405]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[2,3] variable */) = 0.027397768057323447;
  TRACE_POP
}

/*
equation index: 6287
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[3,1] = 0.962614317238161
*/
void AlyssaVehicle_eqFunction_6287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6287};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2406]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[3,1] variable */) = 0.962614317238161;
  TRACE_POP
}

/*
equation index: 6288
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2] = -0.24904103981061843
*/
void AlyssaVehicle_eqFunction_6288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6288};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2407]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2] variable */) = -0.24904103981061843;
  TRACE_POP
}

/*
equation index: 6289
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[3,3] = 0.1065468757784801
*/
void AlyssaVehicle_eqFunction_6289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6289};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2408]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.R_rel_ia2.T[3,3] variable */) = 0.1065468757784801;
  TRACE_POP
}

/*
equation index: 6290
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2437]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6291
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6291};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6292
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6292};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6293
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6293};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2301]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6294
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6294};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2302]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6295
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2303]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6296
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6296};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2304]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6297
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6297};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2305]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6298
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6298};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2306]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6299
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2307]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6300
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6300};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2308]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6301
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2309]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6302
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2310]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6303
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6303};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2311]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6304
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2312]] /* vehicle.frontSuspension.cornerR.jointUSR.relativePosition.relativePosition.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6305
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.position_b[1].y = 0.02
*/
void AlyssaVehicle_eqFunction_6305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2298]] /* vehicle.frontSuspension.cornerR.jointUSR.position_b[1].y variable */) = 0.02;
  TRACE_POP
}

/*
equation index: 6306
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.position_b[2].y = 0.5499999999999999
*/
void AlyssaVehicle_eqFunction_6306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2299]] /* vehicle.frontSuspension.cornerR.jointUSR.position_b[2].y variable */) = 0.5499999999999999;
  TRACE_POP
}

/*
equation index: 6307
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.position_b[3].y = 0.0
*/
void AlyssaVehicle_eqFunction_6307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2300]] /* vehicle.frontSuspension.cornerR.jointUSR.position_b[3].y variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6308
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2195]] /* vehicle.frontSuspension.cornerR.coilover.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6309
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2196]] /* vehicle.frontSuspension.cornerR.coilover.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6310
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6310};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2197]] /* vehicle.frontSuspension.cornerR.coilover.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6311
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6311};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2201]] /* vehicle.frontSuspension.cornerR.coilover.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6312
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6312};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2202]] /* vehicle.frontSuspension.cornerR.coilover.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6313
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6313};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2203]] /* vehicle.frontSuspension.cornerR.coilover.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6314
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.axis.tau = 0.0
*/
void AlyssaVehicle_eqFunction_6314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6314};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1783]] /* vehicle.frontSuspension.cornerL.tieRod.axis.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6315
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.constraintResidue = 0.0
*/
void AlyssaVehicle_eqFunction_6315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6315};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1889]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.constraintResidue variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6316
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6316};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1902]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6317
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6317};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1903]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6318
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6318};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1904]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6319
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6319};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1908]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6320
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6320};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1909]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6321
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6321};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1910]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6322
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.f_b_a1[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6322};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1899]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.f_b_a1[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6323
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.f_b_a1[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6323};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1900]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.f_b_a1[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6324
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.f_b_a1[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1901]] /* vehicle.frontSuspension.cornerL.tieRod.rod1.f_b_a1[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6325
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6325};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1799]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6326
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6326};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1800]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6327
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6327};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1801]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6328
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6328};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1802]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6329
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6329};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1803]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6330
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6330};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1804]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6331
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6331};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1805]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6332
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6332};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1806]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6333
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6333};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1807]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6334
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6334};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1808]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6335
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6335};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1809]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6336
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6336};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1810]] /* vehicle.frontSuspension.cornerL.tieRod.relativePosition.relativePosition.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6337
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.position_b[1].y = -0.09999999999999999
*/
void AlyssaVehicle_eqFunction_6337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6337};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1796]] /* vehicle.frontSuspension.cornerL.tieRod.position_b[1].y variable */) = -0.09999999999999999;
  TRACE_POP
}

/*
equation index: 6338
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.position_b[2].y = -0.07000000000000006
*/
void AlyssaVehicle_eqFunction_6338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6338};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* vehicle.frontSuspension.cornerL.tieRod.position_b[2].y variable */) = -0.07000000000000006;
  TRACE_POP
}

/*
equation index: 6339
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.position_b[3].y = 0.30000000000000004
*/
void AlyssaVehicle_eqFunction_6339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6339};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* vehicle.frontSuspension.cornerL.tieRod.position_b[3].y variable */) = 0.30000000000000004;
  TRACE_POP
}

/*
equation index: 6340
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.g_0[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6340};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2074]] /* vehicle.frontSuspension.cornerL.upright.g_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6341
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.g_0[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6341};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2075]] /* vehicle.frontSuspension.cornerL.upright.g_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6342
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6342};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2121]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6343
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6343};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2122]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6344
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6344};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2123]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6345
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6345};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2124]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6346
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6346};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2125]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6347
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6347};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2126]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6348
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_b.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6348};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2127]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6349
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_b.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6349};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2128]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6350
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_b.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6350};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2129]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6351
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6351};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2130]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6352
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6352};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2131]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6353
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6353};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2132]] /* vehicle.frontSuspension.cornerL.wheelAngles.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6354
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6354};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2135]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6355
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6355};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2136]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6356
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6356};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2137]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6357
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6357};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2138]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6358
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6358};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2139]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6359
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6359};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2140]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6360
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6360};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2141]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6361
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2142]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6362
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6362};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2143]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6363
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6363};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2144]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6364
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6364};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2145]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6365
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6365};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2146]] /* vehicle.frontSuspension.cornerL.wheelPosition.relativePosition.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6366
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.phi_support = 0.0
*/
void AlyssaVehicle_eqFunction_6366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6366};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2032]] /* vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.phi_support variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6367
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.axis.tau = 0.0
*/
void AlyssaVehicle_eqFunction_6367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1393]] /* vehicle.frontSuspension.cornerL.jointUSR.axis.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6368
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.w[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6368};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1497]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6369
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.w[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6369};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1498]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6370
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[1,1] = 1.0
*/
void AlyssaVehicle_eqFunction_6370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6370};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1489]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 6371
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[1,2] = 0.0
*/
void AlyssaVehicle_eqFunction_6371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6371};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1490]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6372
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[1,3] = 0.0
*/
void AlyssaVehicle_eqFunction_6372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6372};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1491]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6373
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[2,1] = 0.0
*/
void AlyssaVehicle_eqFunction_6373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6373};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1492]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6374
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,1] = 0.0
*/
void AlyssaVehicle_eqFunction_6374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6374};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1493]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.R_rel.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6375
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.constraintResidue = 0.0
*/
void AlyssaVehicle_eqFunction_6375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6375};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1558]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.constraintResidue variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6376
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.n2_a[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6376};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1588]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.n2_a[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6377
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.w[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6377};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6378
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.w[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6378};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6379
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.w[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6379};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6380
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[1,1] = 0.11001306482721841
*/
void AlyssaVehicle_eqFunction_6380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6380};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1546]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[1,1] variable */) = 0.11001306482721841;
  TRACE_POP
}

/*
equation index: 6381
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2] = 0.0
*/
void AlyssaVehicle_eqFunction_6381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6381};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1547]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6382
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[1,3] = -0.9939301411906785
*/
void AlyssaVehicle_eqFunction_6382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6382};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1548]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[1,3] variable */) = -0.9939301411906785;
  TRACE_POP
}

/*
equation index: 6383
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[2,1] = -0.24752939586124134
*/
void AlyssaVehicle_eqFunction_6383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6383};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1549]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[2,1] variable */) = -0.24752939586124134;
  TRACE_POP
}

/*
equation index: 6384
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2] = 0.9684929325968497
*/
void AlyssaVehicle_eqFunction_6384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6384};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1550]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2] variable */) = 0.9684929325968497;
  TRACE_POP
}

/*
equation index: 6385
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[2,3] = -0.027397768057323447
*/
void AlyssaVehicle_eqFunction_6385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6385};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1551]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[2,3] variable */) = -0.027397768057323447;
  TRACE_POP
}

/*
equation index: 6386
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[3,1] = 0.962614317238161
*/
void AlyssaVehicle_eqFunction_6386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6386};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1552]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[3,1] variable */) = 0.962614317238161;
  TRACE_POP
}

/*
equation index: 6387
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2] = 0.24904103981061843
*/
void AlyssaVehicle_eqFunction_6387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6387};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1553]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2] variable */) = 0.24904103981061843;
  TRACE_POP
}

/*
equation index: 6388
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[3,3] = 0.1065468757784801
*/
void AlyssaVehicle_eqFunction_6388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6388};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.R_rel_ia2.T[3,3] variable */) = 0.1065468757784801;
  TRACE_POP
}

/*
equation index: 6389
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6389};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1583]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6390
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6390};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1584]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6391
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6391};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1585]] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6392
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6392};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6393
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6393};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6394
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6394};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1449]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6395
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6395};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1450]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6396
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6396};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1451]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6397
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6397};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1452]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6398
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6398};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1453]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6399
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6399};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1454]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6400
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6400};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1455]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6401
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6401};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1456]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6402
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6402};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1457]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6403
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6403};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1458]] /* vehicle.frontSuspension.cornerL.jointUSR.relativePosition.relativePosition.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6404
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.position_b[1].y = 0.02
*/
void AlyssaVehicle_eqFunction_6404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6404};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1444]] /* vehicle.frontSuspension.cornerL.jointUSR.position_b[1].y variable */) = 0.02;
  TRACE_POP
}

/*
equation index: 6405
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.position_b[2].y = -0.5499999999999999
*/
void AlyssaVehicle_eqFunction_6405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6405};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1445]] /* vehicle.frontSuspension.cornerL.jointUSR.position_b[2].y variable */) = -0.5499999999999999;
  TRACE_POP
}

/*
equation index: 6406
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.position_b[3].y = 0.0
*/
void AlyssaVehicle_eqFunction_6406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6406};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* vehicle.frontSuspension.cornerL.jointUSR.position_b[3].y variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6407
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6407};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* vehicle.frontSuspension.cornerL.coilover.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6408
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6408};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* vehicle.frontSuspension.cornerL.coilover.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6409
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6409};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* vehicle.frontSuspension.cornerL.coilover.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6410
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6410};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1347]] /* vehicle.frontSuspension.cornerL.coilover.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6411
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6411};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1348]] /* vehicle.frontSuspension.cornerL.coilover.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6412
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6412};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1349]] /* vehicle.frontSuspension.cornerL.coilover.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6413
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.axis.tau = 0.0
*/
void AlyssaVehicle_eqFunction_6413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6413};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4510]] /* vehicle.rearSuspension.cornerR.tieRod.axis.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6414
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.w[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6414};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4579]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.R_rel.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6415
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.constraintResidue = 0.0
*/
void AlyssaVehicle_eqFunction_6415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6415};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4618]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.constraintResidue variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6416
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6416};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4631]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6417
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6417};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4632]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6418
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6418};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4633]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6419
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.frame_b.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6419};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4637]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6420
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.frame_b.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6420};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4638]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6421
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.frame_b.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6421};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4639]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6422
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.f_b_a1[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6422};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4628]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.f_b_a1[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6423
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.f_b_a1[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6423};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4629]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.f_b_a1[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6424
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.f_b_a1[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6424};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4630]] /* vehicle.rearSuspension.cornerR.tieRod.rod1.f_b_a1[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6425
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6425};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4528]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6426
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6426};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4529]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6427
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6427};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4530]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6428
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6428};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4531]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6429
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6429};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4532]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6430
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6430};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4533]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6431
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[1] = 0.0
*/
void AlyssaVehicle_eqFunction_6431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6431};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4534]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6432
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[2] = 0.0
*/
void AlyssaVehicle_eqFunction_6432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6432};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4535]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6433
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[3] = 0.0
*/
void AlyssaVehicle_eqFunction_6433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6433};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4536]] /* vehicle.rearSuspension.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}
OMC_DISABLE_OPT
void AlyssaVehicle_functionInitialEquations_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  AlyssaVehicle_eqFunction_8874(data, threadData);
  AlyssaVehicle_eqFunction_4403(data, threadData);
  AlyssaVehicle_eqFunction_4404(data, threadData);
  AlyssaVehicle_eqFunction_8030(data, threadData);
  AlyssaVehicle_eqFunction_4406(data, threadData);
  AlyssaVehicle_eqFunction_4407(data, threadData);
  AlyssaVehicle_eqFunction_4408(data, threadData);
  AlyssaVehicle_eqFunction_4409(data, threadData);
  AlyssaVehicle_eqFunction_6945(data, threadData);
  AlyssaVehicle_eqFunction_4411(data, threadData);
  AlyssaVehicle_eqFunction_4412(data, threadData);
  AlyssaVehicle_eqFunction_4413(data, threadData);
  AlyssaVehicle_eqFunction_7037(data, threadData);
  AlyssaVehicle_eqFunction_8371(data, threadData);
  AlyssaVehicle_eqFunction_7004(data, threadData);
  AlyssaVehicle_eqFunction_7002(data, threadData);
  AlyssaVehicle_eqFunction_7003(data, threadData);
  AlyssaVehicle_eqFunction_4419(data, threadData);
  AlyssaVehicle_eqFunction_8898(data, threadData);
  AlyssaVehicle_eqFunction_4421(data, threadData);
  AlyssaVehicle_eqFunction_8901(data, threadData);
  AlyssaVehicle_eqFunction_8902(data, threadData);
  AlyssaVehicle_eqFunction_8903(data, threadData);
  AlyssaVehicle_eqFunction_8918(data, threadData);
  AlyssaVehicle_eqFunction_8904(data, threadData);
  AlyssaVehicle_eqFunction_8915(data, threadData);
  AlyssaVehicle_eqFunction_8917(data, threadData);
  AlyssaVehicle_eqFunction_8916(data, threadData);
  AlyssaVehicle_eqFunction_8905(data, threadData);
  AlyssaVehicle_eqFunction_8914(data, threadData);
  AlyssaVehicle_eqFunction_8913(data, threadData);
  AlyssaVehicle_eqFunction_8906(data, threadData);
  AlyssaVehicle_eqFunction_8907(data, threadData);
  AlyssaVehicle_eqFunction_8912(data, threadData);
  AlyssaVehicle_eqFunction_4436(data, threadData);
  AlyssaVehicle_eqFunction_4437(data, threadData);
  AlyssaVehicle_eqFunction_8911(data, threadData);
  AlyssaVehicle_eqFunction_4439(data, threadData);
  AlyssaVehicle_eqFunction_4440(data, threadData);
  AlyssaVehicle_eqFunction_8390(data, threadData);
  AlyssaVehicle_eqFunction_4442(data, threadData);
  AlyssaVehicle_eqFunction_4443(data, threadData);
  AlyssaVehicle_eqFunction_4444(data, threadData);
  AlyssaVehicle_eqFunction_4445(data, threadData);
  AlyssaVehicle_eqFunction_6944(data, threadData);
  AlyssaVehicle_eqFunction_4447(data, threadData);
  AlyssaVehicle_eqFunction_4448(data, threadData);
  AlyssaVehicle_eqFunction_4449(data, threadData);
  AlyssaVehicle_eqFunction_7038(data, threadData);
  AlyssaVehicle_eqFunction_8766(data, threadData);
  AlyssaVehicle_eqFunction_6998(data, threadData);
  AlyssaVehicle_eqFunction_6996(data, threadData);
  AlyssaVehicle_eqFunction_6997(data, threadData);
  AlyssaVehicle_eqFunction_4455(data, threadData);
  AlyssaVehicle_eqFunction_8934(data, threadData);
  AlyssaVehicle_eqFunction_4457(data, threadData);
  AlyssaVehicle_eqFunction_8937(data, threadData);
  AlyssaVehicle_eqFunction_8938(data, threadData);
  AlyssaVehicle_eqFunction_8939(data, threadData);
  AlyssaVehicle_eqFunction_10550(data, threadData);
  AlyssaVehicle_eqFunction_8940(data, threadData);
  AlyssaVehicle_eqFunction_8951(data, threadData);
  AlyssaVehicle_eqFunction_10549(data, threadData);
  AlyssaVehicle_eqFunction_8952(data, threadData);
  AlyssaVehicle_eqFunction_8941(data, threadData);
  AlyssaVehicle_eqFunction_8950(data, threadData);
  AlyssaVehicle_eqFunction_8949(data, threadData);
  AlyssaVehicle_eqFunction_8942(data, threadData);
  AlyssaVehicle_eqFunction_8943(data, threadData);
  AlyssaVehicle_eqFunction_8948(data, threadData);
  AlyssaVehicle_eqFunction_4472(data, threadData);
  AlyssaVehicle_eqFunction_4473(data, threadData);
  AlyssaVehicle_eqFunction_8947(data, threadData);
  AlyssaVehicle_eqFunction_4475(data, threadData);
  AlyssaVehicle_eqFunction_5988(data, threadData);
  AlyssaVehicle_eqFunction_10543(data, threadData);
  AlyssaVehicle_eqFunction_10453(data, threadData);
  AlyssaVehicle_eqFunction_10539(data, threadData);
  AlyssaVehicle_eqFunction_10491(data, threadData);
  AlyssaVehicle_eqFunction_5993(data, threadData);
  AlyssaVehicle_eqFunction_5994(data, threadData);
  AlyssaVehicle_eqFunction_5995(data, threadData);
  AlyssaVehicle_eqFunction_10478(data, threadData);
  AlyssaVehicle_eqFunction_10476(data, threadData);
  AlyssaVehicle_eqFunction_6031(data, threadData);
  AlyssaVehicle_eqFunction_10533(data, threadData);
  AlyssaVehicle_eqFunction_10535(data, threadData);
  AlyssaVehicle_eqFunction_10536(data, threadData);
  AlyssaVehicle_eqFunction_10486(data, threadData);
  AlyssaVehicle_eqFunction_10471(data, threadData);
  AlyssaVehicle_eqFunction_10487(data, threadData);
  AlyssaVehicle_eqFunction_10456(data, threadData);
  AlyssaVehicle_eqFunction_10485(data, threadData);
  AlyssaVehicle_eqFunction_10455(data, threadData);
  AlyssaVehicle_eqFunction_10473(data, threadData);
  AlyssaVehicle_eqFunction_10482(data, threadData);
  AlyssaVehicle_eqFunction_10448(data, threadData);
  AlyssaVehicle_eqFunction_6044(data, threadData);
  AlyssaVehicle_eqFunction_6045(data, threadData);
  AlyssaVehicle_eqFunction_10498(data, threadData);
  AlyssaVehicle_eqFunction_10497(data, threadData);
  AlyssaVehicle_eqFunction_10496(data, threadData);
  AlyssaVehicle_eqFunction_10495(data, threadData);
  AlyssaVehicle_eqFunction_10469(data, threadData);
  AlyssaVehicle_eqFunction_6051(data, threadData);
  AlyssaVehicle_eqFunction_6052(data, threadData);
  AlyssaVehicle_eqFunction_10468(data, threadData);
  AlyssaVehicle_eqFunction_10537(data, threadData);
  AlyssaVehicle_eqFunction_10540(data, threadData);
  AlyssaVehicle_eqFunction_10446(data, threadData);
  AlyssaVehicle_eqFunction_10449(data, threadData);
  AlyssaVehicle_eqFunction_10548(data, threadData);
  AlyssaVehicle_eqFunction_10464(data, threadData);
  AlyssaVehicle_eqFunction_10441(data, threadData);
  AlyssaVehicle_eqFunction_10546(data, threadData);
  AlyssaVehicle_eqFunction_10460(data, threadData);
  AlyssaVehicle_eqFunction_10545(data, threadData);
  AlyssaVehicle_eqFunction_10447(data, threadData);
  AlyssaVehicle_eqFunction_10477(data, threadData);
  AlyssaVehicle_eqFunction_10475(data, threadData);
  AlyssaVehicle_eqFunction_10480(data, threadData);
  AlyssaVehicle_eqFunction_10474(data, threadData);
  AlyssaVehicle_eqFunction_10490(data, threadData);
  AlyssaVehicle_eqFunction_10445(data, threadData);
  AlyssaVehicle_eqFunction_10541(data, threadData);
  AlyssaVehicle_eqFunction_6072(data, threadData);
  AlyssaVehicle_eqFunction_8782(data, threadData);
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
  AlyssaVehicle_eqFunction_6424(data, threadData);
  AlyssaVehicle_eqFunction_6425(data, threadData);
  AlyssaVehicle_eqFunction_6426(data, threadData);
  AlyssaVehicle_eqFunction_6427(data, threadData);
  AlyssaVehicle_eqFunction_6428(data, threadData);
  AlyssaVehicle_eqFunction_6429(data, threadData);
  AlyssaVehicle_eqFunction_6430(data, threadData);
  AlyssaVehicle_eqFunction_6431(data, threadData);
  AlyssaVehicle_eqFunction_6432(data, threadData);
  AlyssaVehicle_eqFunction_6433(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif
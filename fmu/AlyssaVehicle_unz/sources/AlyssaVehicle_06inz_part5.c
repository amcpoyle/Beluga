#include "AlyssaVehicle_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 2436
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.frame_a.t[2] = 0.0
*/
void AlyssaVehicle_eqFunction_2436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2436};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3130]] /* vehicle.frontSuspension.steering.rack.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2437
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.r_b[1] = -0.09999999999999999
*/
void AlyssaVehicle_eqFunction_2437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2437};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2740]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.r_b[1] variable */) = -0.09999999999999999;
  TRACE_POP
}

/*
equation index: 2438
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.r_b[2] = 0.07000000000000006
*/
void AlyssaVehicle_eqFunction_2438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2438};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2741]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.r_b[2] variable */) = 0.07000000000000006;
  TRACE_POP
}

/*
equation index: 2439
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.r_b[3] = 0.30000000000000004
*/
void AlyssaVehicle_eqFunction_2439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2439};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2742]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.r_b[3] variable */) = 0.30000000000000004;
  TRACE_POP
}

/*
equation index: 2440
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.e_r_b = 0.11001306482721843 * vehicle.frontSuspension.cornerR.tieRod.revolute.r_b[1] + 0.24752939586124137 * vehicle.frontSuspension.cornerR.tieRod.revolute.r_b[2] + 0.9626143172381612 * vehicle.frontSuspension.cornerR.tieRod.revolute.r_b[3]
*/
void AlyssaVehicle_eqFunction_2440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2440};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2723]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.e_r_b variable */) = (0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2740]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.r_b[1] variable */)) + (0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2741]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.r_b[2] variable */)) + (0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2742]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.r_b[3] variable */));
  TRACE_POP
}

/*
equation index: 2441
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.r_b[1] = 0.02
*/
void AlyssaVehicle_eqFunction_2441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2441};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2385]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.r_b[1] variable */) = 0.02;
  TRACE_POP
}

/*
equation index: 2442
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.r_b[2] = 0.5499999999999999
*/
void AlyssaVehicle_eqFunction_2442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2442};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2386]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.r_b[2] variable */) = 0.5499999999999999;
  TRACE_POP
}

/*
equation index: 2443
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.r_b[3] = 0.0
*/
void AlyssaVehicle_eqFunction_2443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2443};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2387]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.r_b[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2444
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.r_b[1] = -0.09999999999999999
*/
void AlyssaVehicle_eqFunction_2444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2444};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1886]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.r_b[1] variable */) = -0.09999999999999999;
  TRACE_POP
}

/*
equation index: 2445
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.r_b[2] = -0.07000000000000006
*/
void AlyssaVehicle_eqFunction_2445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2445};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1887]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.r_b[2] variable */) = -0.07000000000000006;
  TRACE_POP
}

/*
equation index: 2446
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.r_b[3] = 0.30000000000000004
*/
void AlyssaVehicle_eqFunction_2446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2446};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1888]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.r_b[3] variable */) = 0.30000000000000004;
  TRACE_POP
}

/*
equation index: 2447
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.e_r_b = 0.11001306482721843 * vehicle.frontSuspension.cornerL.tieRod.revolute.r_b[1] + (-0.24752939586124137) * vehicle.frontSuspension.cornerL.tieRod.revolute.r_b[2] + 0.9626143172381612 * vehicle.frontSuspension.cornerL.tieRod.revolute.r_b[3]
*/
void AlyssaVehicle_eqFunction_2447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2447};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1869]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.e_r_b variable */) = (0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1886]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.r_b[1] variable */)) + (-0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1887]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.r_b[2] variable */)) + (0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1888]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.r_b[3] variable */));
  TRACE_POP
}

/*
equation index: 2448
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.r_b[1] = 0.02
*/
void AlyssaVehicle_eqFunction_2448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2448};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1531]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.r_b[1] variable */) = 0.02;
  TRACE_POP
}

/*
equation index: 2449
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.r_b[2] = -0.5499999999999999
*/
void AlyssaVehicle_eqFunction_2449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2449};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1532]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.r_b[2] variable */) = -0.5499999999999999;
  TRACE_POP
}

/*
equation index: 2450
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.r_b[3] = 0.0
*/
void AlyssaVehicle_eqFunction_2450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2450};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1533]] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.r_b[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2451
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.r_b[1] = -0.1
*/
void AlyssaVehicle_eqFunction_2451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2451};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4615]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.r_b[1] variable */) = -0.1;
  TRACE_POP
}

/*
equation index: 2452
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.r_b[2] = 0.06000000000000005
*/
void AlyssaVehicle_eqFunction_2452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2452};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4616]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.r_b[2] variable */) = 0.06000000000000005;
  TRACE_POP
}

/*
equation index: 2453
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.r_b[3] = 0.28
*/
void AlyssaVehicle_eqFunction_2453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2453};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4617]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.r_b[3] variable */) = 0.28;
  TRACE_POP
}

/*
equation index: 2454
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.e_r_b = 0.222824801502141 * vehicle.rearSuspension.cornerR.tieRod.revolute.r_b[2] + 0.9748585065718673 * vehicle.rearSuspension.cornerR.tieRod.revolute.r_b[3]
*/
void AlyssaVehicle_eqFunction_2454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2454};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4598]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.e_r_b variable */) = (0.222824801502141) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4616]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.r_b[2] variable */)) + (0.9748585065718673) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4617]] /* vehicle.rearSuspension.cornerR.tieRod.revolute.r_b[3] variable */));
  TRACE_POP
}

/*
equation index: 2455
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.revolute.r_b[1] = 0.0
*/
void AlyssaVehicle_eqFunction_2455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2455};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4261]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.r_b[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2456
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.revolute.r_b[2] = 0.6199999999999999
*/
void AlyssaVehicle_eqFunction_2456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2456};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4262]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.r_b[2] variable */) = 0.6199999999999999;
  TRACE_POP
}

/*
equation index: 2457
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.revolute.r_b[3] = 0.0
*/
void AlyssaVehicle_eqFunction_2457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2457};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4263]] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.r_b[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2458
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.r_b[1] = -0.1
*/
void AlyssaVehicle_eqFunction_2458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2458};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3755]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.r_b[1] variable */) = -0.1;
  TRACE_POP
}

/*
equation index: 2459
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.r_b[2] = -0.06000000000000005
*/
void AlyssaVehicle_eqFunction_2459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2459};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3756]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.r_b[2] variable */) = -0.06000000000000005;
  TRACE_POP
}

/*
equation index: 2460
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.r_b[3] = 0.28
*/
void AlyssaVehicle_eqFunction_2460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2460};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3757]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.r_b[3] variable */) = 0.28;
  TRACE_POP
}

/*
equation index: 2461
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.e_r_b = (-0.222824801502141) * vehicle.rearSuspension.cornerL.tieRod.revolute.r_b[2] + 0.9748585065718673 * vehicle.rearSuspension.cornerL.tieRod.revolute.r_b[3]
*/
void AlyssaVehicle_eqFunction_2461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2461};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3738]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.e_r_b variable */) = (-0.222824801502141) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3756]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.r_b[2] variable */)) + (0.9748585065718673) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3757]] /* vehicle.rearSuspension.cornerL.tieRod.revolute.r_b[3] variable */));
  TRACE_POP
}

/*
equation index: 2462
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.revolute.r_b[1] = 0.0
*/
void AlyssaVehicle_eqFunction_2462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2462};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3401]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.r_b[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2463
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.revolute.r_b[2] = -0.6199999999999999
*/
void AlyssaVehicle_eqFunction_2463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2463};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3402]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.r_b[2] variable */) = -0.6199999999999999;
  TRACE_POP
}

/*
equation index: 2464
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.revolute.r_b[3] = 0.0
*/
void AlyssaVehicle_eqFunction_2464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2464};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3403]] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.r_b[3] variable */) = 0.0;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_6933(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6931(DATA *data, threadData_t *threadData);


/*
equation index: 2467
type: SIMPLE_ASSIGN
$DER.$DER.rig.motion.heave.frame_a.r_0[3] = $DER.$DER.rig.motion.lateral.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_2467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2467};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* der(der(rig.motion.heave.frame_a.r_0[3])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* der(der(rig.motion.lateral.frame_a.r_0[3])) DUMMY_DER */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_6930(DATA *data, threadData_t *threadData);


/*
equation index: 2469
type: SIMPLE_ASSIGN
$DER.$DER.vehicle.frontSuspension.steering.pos.s = vehicle.frontSuspension.steering.rackRatioGain.k * $DER.$DER.rigController.steerSmoothing.delta
*/
void AlyssaVehicle_eqFunction_2469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2469};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* der(der(vehicle.frontSuspension.steering.pos.s)) DUMMY_DER */) = ((data->simulationInfo->realParameter[1864] /* vehicle.frontSuspension.steering.rackRatioGain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* der(der(rigController.steerSmoothing.delta)) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 2470
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.a = $DER.$DER.vehicle.frontSuspension.steering.pos.s
*/
void AlyssaVehicle_eqFunction_2470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2470};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3110]] /* vehicle.frontSuspension.steering.rack.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* der(der(vehicle.frontSuspension.steering.pos.s)) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2471
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.steering.rack.v = vehicle.frontSuspension.steering.rack.a
*/
void AlyssaVehicle_eqFunction_2471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2471};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[666]] /* der(vehicle.frontSuspension.steering.rack.v) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3110]] /* vehicle.frontSuspension.steering.rack.a variable */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_6929(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6928(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6926(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6924(DATA *data, threadData_t *threadData);


/*
equation index: 2476
type: SIMPLE_ASSIGN
$DER.rig.motion.heave.frame_a.r_0[3] = $DER.rig.motion.lateral.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_2476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2476};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* der(rig.motion.heave.frame_a.r_0[3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* der(rig.motion.lateral.frame_a.r_0[3]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2477
type: SIMPLE_ASSIGN
rig.motion.heave.frame_a.r_0[3] = rig.motion.lateral.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_2477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2477};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1127]] /* rig.motion.heave.frame_a.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1149]] /* rig.motion.lateral.frame_a.r_0[3] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7075(DATA *data, threadData_t *threadData);


/*
equation index: 2479
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.steering.pos.s = vehicle.frontSuspension.steering.rackRatioGain.k * $DER.rigController.steerSmoothing.delta
*/
void AlyssaVehicle_eqFunction_2479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2479};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* der(vehicle.frontSuspension.steering.pos.s) DUMMY_DER */) = ((data->simulationInfo->realParameter[1864] /* vehicle.frontSuspension.steering.rackRatioGain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* der(rigController.steerSmoothing.delta) STATE_DER */));
  TRACE_POP
}

/*
equation index: 2480
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.v = $DER.vehicle.frontSuspension.steering.pos.s
*/
void AlyssaVehicle_eqFunction_2480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2480};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3136]] /* vehicle.frontSuspension.steering.rack.v DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* der(vehicle.frontSuspension.steering.pos.s) DUMMY_DER */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7078(DATA *data, threadData_t *threadData);


/*
equation index: 2482
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.phi = $START.vehicle.wheelFR.rim.rotor1D.phi
*/
void AlyssaVehicle_eqFunction_2482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2482};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */) = (data->modelData->realVarsData[27] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */).attribute .start;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7044(DATA *data, threadData_t *threadData);


/*
equation index: 2484
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.phi = $START.vehicle.wheelFL.rim.rotor1D.phi
*/
void AlyssaVehicle_eqFunction_2484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2484};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */) = (data->modelData->realVarsData[23] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */).attribute .start;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7045(DATA *data, threadData_t *threadData);


/*
equation index: 2486
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.phi = $START.vehicle.wheelRR.rim.rotor1D.phi
*/
void AlyssaVehicle_eqFunction_2486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2486};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */) = (data->modelData->realVarsData[35] /* vehicle.wheelRR.rim.rotor1D.phi STATE(1,vehicle.wheelRR.rim.rotor1D.w) */).attribute .start;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7046(DATA *data, threadData_t *threadData);


/*
equation index: 2488
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.phi = $START.vehicle.wheelRL.rim.rotor1D.phi
*/
void AlyssaVehicle_eqFunction_2488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2488};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */) = (data->modelData->realVarsData[31] /* vehicle.wheelRL.rim.rotor1D.phi STATE(1,vehicle.wheelRL.rim.rotor1D.w) */).attribute .start;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7047(DATA *data, threadData_t *threadData);


/*
equation index: 2490
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.phi = $START.vehicle.frontSuspension.cornerR.ucaPivot.phi
*/
void AlyssaVehicle_eqFunction_2490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2490};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */) = (data->modelData->realVarsData[17] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */).attribute .start;
  TRACE_POP
}

/*
equation index: 2491
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[3,3] = vehicle.frontSuspension.cornerR.ucaPivot.e[3] ^ 2.0 + (1.0 - vehicle.frontSuspension.cornerR.ucaPivot.e[3] ^ 2.0) * cos(vehicle.frontSuspension.cornerR.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2491};
  modelica_real tmp56;
  modelica_real tmp57;
  tmp56 = (data->simulationInfo->realParameter[1582] /* vehicle.frontSuspension.cornerR.ucaPivot.e[3] PARAM */);
  tmp57 = (data->simulationInfo->realParameter[1582] /* vehicle.frontSuspension.cornerR.ucaPivot.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2881]] /* vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[3,3] DUMMY_STATE */) = (tmp56 * tmp56) + (1.0 - ((tmp57 * tmp57))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2492
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[3,2] = (vehicle.frontSuspension.cornerR.ucaPivot.e[3] - vehicle.frontSuspension.cornerR.ucaPivot.e[3] * cos(vehicle.frontSuspension.cornerR.ucaPivot.phi)) * vehicle.frontSuspension.cornerR.ucaPivot.e[2] - vehicle.frontSuspension.cornerR.ucaPivot.e[1] * sin(vehicle.frontSuspension.cornerR.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2492};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2880]] /* vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[3,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[1582] /* vehicle.frontSuspension.cornerR.ucaPivot.e[3] PARAM */) - (((data->simulationInfo->realParameter[1582] /* vehicle.frontSuspension.cornerR.ucaPivot.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[1581] /* vehicle.frontSuspension.cornerR.ucaPivot.e[2] PARAM */)) - (((data->simulationInfo->realParameter[1580] /* vehicle.frontSuspension.cornerR.ucaPivot.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 2493
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[3,1] = (vehicle.frontSuspension.cornerR.ucaPivot.e[3] - vehicle.frontSuspension.cornerR.ucaPivot.e[3] * cos(vehicle.frontSuspension.cornerR.ucaPivot.phi)) * vehicle.frontSuspension.cornerR.ucaPivot.e[1] + vehicle.frontSuspension.cornerR.ucaPivot.e[2] * sin(vehicle.frontSuspension.cornerR.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2493};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2879]] /* vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[3,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[1582] /* vehicle.frontSuspension.cornerR.ucaPivot.e[3] PARAM */) - (((data->simulationInfo->realParameter[1582] /* vehicle.frontSuspension.cornerR.ucaPivot.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[1580] /* vehicle.frontSuspension.cornerR.ucaPivot.e[1] PARAM */)) + ((data->simulationInfo->realParameter[1581] /* vehicle.frontSuspension.cornerR.ucaPivot.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2494
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[2,3] = (vehicle.frontSuspension.cornerR.ucaPivot.e[2] - vehicle.frontSuspension.cornerR.ucaPivot.e[2] * cos(vehicle.frontSuspension.cornerR.ucaPivot.phi)) * vehicle.frontSuspension.cornerR.ucaPivot.e[3] + vehicle.frontSuspension.cornerR.ucaPivot.e[1] * sin(vehicle.frontSuspension.cornerR.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2494};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2878]] /* vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[2,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[1581] /* vehicle.frontSuspension.cornerR.ucaPivot.e[2] PARAM */) - (((data->simulationInfo->realParameter[1581] /* vehicle.frontSuspension.cornerR.ucaPivot.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[1582] /* vehicle.frontSuspension.cornerR.ucaPivot.e[3] PARAM */)) + ((data->simulationInfo->realParameter[1580] /* vehicle.frontSuspension.cornerR.ucaPivot.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2495
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[2,2] = vehicle.frontSuspension.cornerR.ucaPivot.e[2] ^ 2.0 + (1.0 - vehicle.frontSuspension.cornerR.ucaPivot.e[2] ^ 2.0) * cos(vehicle.frontSuspension.cornerR.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2495};
  modelica_real tmp58;
  modelica_real tmp59;
  tmp58 = (data->simulationInfo->realParameter[1581] /* vehicle.frontSuspension.cornerR.ucaPivot.e[2] PARAM */);
  tmp59 = (data->simulationInfo->realParameter[1581] /* vehicle.frontSuspension.cornerR.ucaPivot.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2877]] /* vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[2,2] DUMMY_STATE */) = (tmp58 * tmp58) + (1.0 - ((tmp59 * tmp59))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2496
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[2,1] = (vehicle.frontSuspension.cornerR.ucaPivot.e[2] - vehicle.frontSuspension.cornerR.ucaPivot.e[2] * cos(vehicle.frontSuspension.cornerR.ucaPivot.phi)) * vehicle.frontSuspension.cornerR.ucaPivot.e[1] - vehicle.frontSuspension.cornerR.ucaPivot.e[3] * sin(vehicle.frontSuspension.cornerR.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2496};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[2,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[1581] /* vehicle.frontSuspension.cornerR.ucaPivot.e[2] PARAM */) - (((data->simulationInfo->realParameter[1581] /* vehicle.frontSuspension.cornerR.ucaPivot.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[1580] /* vehicle.frontSuspension.cornerR.ucaPivot.e[1] PARAM */)) - (((data->simulationInfo->realParameter[1582] /* vehicle.frontSuspension.cornerR.ucaPivot.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 2497
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[1,3] = (vehicle.frontSuspension.cornerR.ucaPivot.e[1] - vehicle.frontSuspension.cornerR.ucaPivot.e[1] * cos(vehicle.frontSuspension.cornerR.ucaPivot.phi)) * vehicle.frontSuspension.cornerR.ucaPivot.e[3] - vehicle.frontSuspension.cornerR.ucaPivot.e[2] * sin(vehicle.frontSuspension.cornerR.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2497};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[1,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[1580] /* vehicle.frontSuspension.cornerR.ucaPivot.e[1] PARAM */) - (((data->simulationInfo->realParameter[1580] /* vehicle.frontSuspension.cornerR.ucaPivot.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[1582] /* vehicle.frontSuspension.cornerR.ucaPivot.e[3] PARAM */)) - (((data->simulationInfo->realParameter[1581] /* vehicle.frontSuspension.cornerR.ucaPivot.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 2498
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[1,2] = (vehicle.frontSuspension.cornerR.ucaPivot.e[1] - vehicle.frontSuspension.cornerR.ucaPivot.e[1] * cos(vehicle.frontSuspension.cornerR.ucaPivot.phi)) * vehicle.frontSuspension.cornerR.ucaPivot.e[2] + vehicle.frontSuspension.cornerR.ucaPivot.e[3] * sin(vehicle.frontSuspension.cornerR.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2498};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2874]] /* vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[1,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[1580] /* vehicle.frontSuspension.cornerR.ucaPivot.e[1] PARAM */) - (((data->simulationInfo->realParameter[1580] /* vehicle.frontSuspension.cornerR.ucaPivot.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[1581] /* vehicle.frontSuspension.cornerR.ucaPivot.e[2] PARAM */)) + ((data->simulationInfo->realParameter[1582] /* vehicle.frontSuspension.cornerR.ucaPivot.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2499
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[1,1] = vehicle.frontSuspension.cornerR.ucaPivot.e[1] ^ 2.0 + (1.0 - vehicle.frontSuspension.cornerR.ucaPivot.e[1] ^ 2.0) * cos(vehicle.frontSuspension.cornerR.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2499};
  modelica_real tmp60;
  modelica_real tmp61;
  tmp60 = (data->simulationInfo->realParameter[1580] /* vehicle.frontSuspension.cornerR.ucaPivot.e[1] PARAM */);
  tmp61 = (data->simulationInfo->realParameter[1580] /* vehicle.frontSuspension.cornerR.ucaPivot.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2873]] /* vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[1,1] DUMMY_STATE */) = (tmp60 * tmp60) + (1.0 - ((tmp61 * tmp61))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2500
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.w = $START.vehicle.frontSuspension.cornerR.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2500};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* vehicle.frontSuspension.cornerR.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.a) */) = (data->modelData->realVarsData[18] /* vehicle.frontSuspension.cornerR.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.a) */).attribute .start;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7053(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7052(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7051(DATA *data, threadData_t *threadData);


/*
equation index: 2504
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[3,3] = (1.0 - vehicle.frontSuspension.cornerR.ucaPivot.e[3] ^ 2.0) * (-sin(vehicle.frontSuspension.cornerR.ucaPivot.phi)) * vehicle.frontSuspension.cornerR.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2504};
  modelica_real tmp62;
  tmp62 = (data->simulationInfo->realParameter[1582] /* vehicle.frontSuspension.cornerR.ucaPivot.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* der(vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[3,3]) DUMMY_DER */) = (1.0 - ((tmp62 * tmp62))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* vehicle.frontSuspension.cornerR.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 2505
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[3,2] = (-vehicle.frontSuspension.cornerR.ucaPivot.e[3]) * (-sin(vehicle.frontSuspension.cornerR.ucaPivot.phi)) * vehicle.frontSuspension.cornerR.ucaPivot.w * vehicle.frontSuspension.cornerR.ucaPivot.e[2] - vehicle.frontSuspension.cornerR.ucaPivot.e[1] * cos(vehicle.frontSuspension.cornerR.ucaPivot.phi) * vehicle.frontSuspension.cornerR.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2505};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* der(vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[3,2]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[1582] /* vehicle.frontSuspension.cornerR.ucaPivot.e[3] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* vehicle.frontSuspension.cornerR.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[1581] /* vehicle.frontSuspension.cornerR.ucaPivot.e[2] PARAM */)))) - (((data->simulationInfo->realParameter[1580] /* vehicle.frontSuspension.cornerR.ucaPivot.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* vehicle.frontSuspension.cornerR.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 2506
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[3,1] = vehicle.frontSuspension.cornerR.ucaPivot.e[2] * cos(vehicle.frontSuspension.cornerR.ucaPivot.phi) * vehicle.frontSuspension.cornerR.ucaPivot.w - vehicle.frontSuspension.cornerR.ucaPivot.e[3] * (-sin(vehicle.frontSuspension.cornerR.ucaPivot.phi)) * vehicle.frontSuspension.cornerR.ucaPivot.w * vehicle.frontSuspension.cornerR.ucaPivot.e[1]
*/
void AlyssaVehicle_eqFunction_2506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2506};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* der(vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[3,1]) DUMMY_DER */) = ((data->simulationInfo->realParameter[1581] /* vehicle.frontSuspension.cornerR.ucaPivot.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* vehicle.frontSuspension.cornerR.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[1582] /* vehicle.frontSuspension.cornerR.ucaPivot.e[3] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* vehicle.frontSuspension.cornerR.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[1580] /* vehicle.frontSuspension.cornerR.ucaPivot.e[1] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2507
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[2,3] = vehicle.frontSuspension.cornerR.ucaPivot.e[1] * cos(vehicle.frontSuspension.cornerR.ucaPivot.phi) * vehicle.frontSuspension.cornerR.ucaPivot.w - vehicle.frontSuspension.cornerR.ucaPivot.e[2] * (-sin(vehicle.frontSuspension.cornerR.ucaPivot.phi)) * vehicle.frontSuspension.cornerR.ucaPivot.w * vehicle.frontSuspension.cornerR.ucaPivot.e[3]
*/
void AlyssaVehicle_eqFunction_2507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2507};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* der(vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[2,3]) DUMMY_DER */) = ((data->simulationInfo->realParameter[1580] /* vehicle.frontSuspension.cornerR.ucaPivot.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* vehicle.frontSuspension.cornerR.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[1581] /* vehicle.frontSuspension.cornerR.ucaPivot.e[2] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* vehicle.frontSuspension.cornerR.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[1582] /* vehicle.frontSuspension.cornerR.ucaPivot.e[3] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2508
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[2,2] = (1.0 - vehicle.frontSuspension.cornerR.ucaPivot.e[2] ^ 2.0) * (-sin(vehicle.frontSuspension.cornerR.ucaPivot.phi)) * vehicle.frontSuspension.cornerR.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2508};
  modelica_real tmp63;
  tmp63 = (data->simulationInfo->realParameter[1581] /* vehicle.frontSuspension.cornerR.ucaPivot.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* der(vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[2,2]) DUMMY_DER */) = (1.0 - ((tmp63 * tmp63))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* vehicle.frontSuspension.cornerR.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 2509
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[2,1] = (-vehicle.frontSuspension.cornerR.ucaPivot.e[2]) * (-sin(vehicle.frontSuspension.cornerR.ucaPivot.phi)) * vehicle.frontSuspension.cornerR.ucaPivot.w * vehicle.frontSuspension.cornerR.ucaPivot.e[1] - vehicle.frontSuspension.cornerR.ucaPivot.e[3] * cos(vehicle.frontSuspension.cornerR.ucaPivot.phi) * vehicle.frontSuspension.cornerR.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2509};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* der(vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[2,1]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[1581] /* vehicle.frontSuspension.cornerR.ucaPivot.e[2] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* vehicle.frontSuspension.cornerR.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[1580] /* vehicle.frontSuspension.cornerR.ucaPivot.e[1] PARAM */)))) - (((data->simulationInfo->realParameter[1582] /* vehicle.frontSuspension.cornerR.ucaPivot.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* vehicle.frontSuspension.cornerR.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 2510
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[1,3] = (-vehicle.frontSuspension.cornerR.ucaPivot.e[1]) * (-sin(vehicle.frontSuspension.cornerR.ucaPivot.phi)) * vehicle.frontSuspension.cornerR.ucaPivot.w * vehicle.frontSuspension.cornerR.ucaPivot.e[3] - vehicle.frontSuspension.cornerR.ucaPivot.e[2] * cos(vehicle.frontSuspension.cornerR.ucaPivot.phi) * vehicle.frontSuspension.cornerR.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2510};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* der(vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[1,3]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[1580] /* vehicle.frontSuspension.cornerR.ucaPivot.e[1] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* vehicle.frontSuspension.cornerR.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[1582] /* vehicle.frontSuspension.cornerR.ucaPivot.e[3] PARAM */)))) - (((data->simulationInfo->realParameter[1581] /* vehicle.frontSuspension.cornerR.ucaPivot.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* vehicle.frontSuspension.cornerR.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 2511
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[1,2] = vehicle.frontSuspension.cornerR.ucaPivot.e[3] * cos(vehicle.frontSuspension.cornerR.ucaPivot.phi) * vehicle.frontSuspension.cornerR.ucaPivot.w - vehicle.frontSuspension.cornerR.ucaPivot.e[1] * (-sin(vehicle.frontSuspension.cornerR.ucaPivot.phi)) * vehicle.frontSuspension.cornerR.ucaPivot.w * vehicle.frontSuspension.cornerR.ucaPivot.e[2]
*/
void AlyssaVehicle_eqFunction_2511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2511};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* der(vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[1,2]) DUMMY_DER */) = ((data->simulationInfo->realParameter[1582] /* vehicle.frontSuspension.cornerR.ucaPivot.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* vehicle.frontSuspension.cornerR.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[1580] /* vehicle.frontSuspension.cornerR.ucaPivot.e[1] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* vehicle.frontSuspension.cornerR.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[1581] /* vehicle.frontSuspension.cornerR.ucaPivot.e[2] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2512
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[1,1] = (1.0 - vehicle.frontSuspension.cornerR.ucaPivot.e[1] ^ 2.0) * (-sin(vehicle.frontSuspension.cornerR.ucaPivot.phi)) * vehicle.frontSuspension.cornerR.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2512};
  modelica_real tmp64;
  tmp64 = (data->simulationInfo->realParameter[1580] /* vehicle.frontSuspension.cornerR.ucaPivot.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* der(vehicle.frontSuspension.cornerR.ucaPivot.R_rel.T[1,1]) DUMMY_DER */) = (1.0 - ((tmp64 * tmp64))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* vehicle.frontSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* vehicle.frontSuspension.cornerR.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerR.ucaPivot.a) */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7020(DATA *data, threadData_t *threadData);


/*
equation index: 2514
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.phi = $START.vehicle.frontSuspension.cornerL.ucaPivot.phi
*/
void AlyssaVehicle_eqFunction_2514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2514};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */) = (data->modelData->realVarsData[15] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */).attribute .start;
  TRACE_POP
}

/*
equation index: 2515
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[3,3] = vehicle.frontSuspension.cornerL.ucaPivot.e[3] ^ 2.0 + (1.0 - vehicle.frontSuspension.cornerL.ucaPivot.e[3] ^ 2.0) * cos(vehicle.frontSuspension.cornerL.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2515};
  modelica_real tmp65;
  modelica_real tmp66;
  tmp65 = (data->simulationInfo->realParameter[935] /* vehicle.frontSuspension.cornerL.ucaPivot.e[3] PARAM */);
  tmp66 = (data->simulationInfo->realParameter[935] /* vehicle.frontSuspension.cornerL.ucaPivot.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2027]] /* vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[3,3] DUMMY_STATE */) = (tmp65 * tmp65) + (1.0 - ((tmp66 * tmp66))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2516
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[3,2] = (vehicle.frontSuspension.cornerL.ucaPivot.e[3] - vehicle.frontSuspension.cornerL.ucaPivot.e[3] * cos(vehicle.frontSuspension.cornerL.ucaPivot.phi)) * vehicle.frontSuspension.cornerL.ucaPivot.e[2] - vehicle.frontSuspension.cornerL.ucaPivot.e[1] * sin(vehicle.frontSuspension.cornerL.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2516};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2026]] /* vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[3,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[935] /* vehicle.frontSuspension.cornerL.ucaPivot.e[3] PARAM */) - (((data->simulationInfo->realParameter[935] /* vehicle.frontSuspension.cornerL.ucaPivot.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[934] /* vehicle.frontSuspension.cornerL.ucaPivot.e[2] PARAM */)) - (((data->simulationInfo->realParameter[933] /* vehicle.frontSuspension.cornerL.ucaPivot.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 2517
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[3,1] = (vehicle.frontSuspension.cornerL.ucaPivot.e[3] - vehicle.frontSuspension.cornerL.ucaPivot.e[3] * cos(vehicle.frontSuspension.cornerL.ucaPivot.phi)) * vehicle.frontSuspension.cornerL.ucaPivot.e[1] + vehicle.frontSuspension.cornerL.ucaPivot.e[2] * sin(vehicle.frontSuspension.cornerL.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2517};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2025]] /* vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[3,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[935] /* vehicle.frontSuspension.cornerL.ucaPivot.e[3] PARAM */) - (((data->simulationInfo->realParameter[935] /* vehicle.frontSuspension.cornerL.ucaPivot.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[933] /* vehicle.frontSuspension.cornerL.ucaPivot.e[1] PARAM */)) + ((data->simulationInfo->realParameter[934] /* vehicle.frontSuspension.cornerL.ucaPivot.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2518
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[2,3] = (vehicle.frontSuspension.cornerL.ucaPivot.e[2] - vehicle.frontSuspension.cornerL.ucaPivot.e[2] * cos(vehicle.frontSuspension.cornerL.ucaPivot.phi)) * vehicle.frontSuspension.cornerL.ucaPivot.e[3] + vehicle.frontSuspension.cornerL.ucaPivot.e[1] * sin(vehicle.frontSuspension.cornerL.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2518};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2024]] /* vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[2,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[934] /* vehicle.frontSuspension.cornerL.ucaPivot.e[2] PARAM */) - (((data->simulationInfo->realParameter[934] /* vehicle.frontSuspension.cornerL.ucaPivot.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[935] /* vehicle.frontSuspension.cornerL.ucaPivot.e[3] PARAM */)) + ((data->simulationInfo->realParameter[933] /* vehicle.frontSuspension.cornerL.ucaPivot.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2519
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[2,2] = vehicle.frontSuspension.cornerL.ucaPivot.e[2] ^ 2.0 + (1.0 - vehicle.frontSuspension.cornerL.ucaPivot.e[2] ^ 2.0) * cos(vehicle.frontSuspension.cornerL.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2519};
  modelica_real tmp67;
  modelica_real tmp68;
  tmp67 = (data->simulationInfo->realParameter[934] /* vehicle.frontSuspension.cornerL.ucaPivot.e[2] PARAM */);
  tmp68 = (data->simulationInfo->realParameter[934] /* vehicle.frontSuspension.cornerL.ucaPivot.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2023]] /* vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[2,2] DUMMY_STATE */) = (tmp67 * tmp67) + (1.0 - ((tmp68 * tmp68))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2520
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[2,1] = (vehicle.frontSuspension.cornerL.ucaPivot.e[2] - vehicle.frontSuspension.cornerL.ucaPivot.e[2] * cos(vehicle.frontSuspension.cornerL.ucaPivot.phi)) * vehicle.frontSuspension.cornerL.ucaPivot.e[1] - vehicle.frontSuspension.cornerL.ucaPivot.e[3] * sin(vehicle.frontSuspension.cornerL.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2520};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2022]] /* vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[2,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[934] /* vehicle.frontSuspension.cornerL.ucaPivot.e[2] PARAM */) - (((data->simulationInfo->realParameter[934] /* vehicle.frontSuspension.cornerL.ucaPivot.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[933] /* vehicle.frontSuspension.cornerL.ucaPivot.e[1] PARAM */)) - (((data->simulationInfo->realParameter[935] /* vehicle.frontSuspension.cornerL.ucaPivot.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 2521
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[1,3] = (vehicle.frontSuspension.cornerL.ucaPivot.e[1] - vehicle.frontSuspension.cornerL.ucaPivot.e[1] * cos(vehicle.frontSuspension.cornerL.ucaPivot.phi)) * vehicle.frontSuspension.cornerL.ucaPivot.e[3] - vehicle.frontSuspension.cornerL.ucaPivot.e[2] * sin(vehicle.frontSuspension.cornerL.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2521};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2021]] /* vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[1,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[933] /* vehicle.frontSuspension.cornerL.ucaPivot.e[1] PARAM */) - (((data->simulationInfo->realParameter[933] /* vehicle.frontSuspension.cornerL.ucaPivot.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[935] /* vehicle.frontSuspension.cornerL.ucaPivot.e[3] PARAM */)) - (((data->simulationInfo->realParameter[934] /* vehicle.frontSuspension.cornerL.ucaPivot.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 2522
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[1,2] = (vehicle.frontSuspension.cornerL.ucaPivot.e[1] - vehicle.frontSuspension.cornerL.ucaPivot.e[1] * cos(vehicle.frontSuspension.cornerL.ucaPivot.phi)) * vehicle.frontSuspension.cornerL.ucaPivot.e[2] + vehicle.frontSuspension.cornerL.ucaPivot.e[3] * sin(vehicle.frontSuspension.cornerL.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2522};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2020]] /* vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[1,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[933] /* vehicle.frontSuspension.cornerL.ucaPivot.e[1] PARAM */) - (((data->simulationInfo->realParameter[933] /* vehicle.frontSuspension.cornerL.ucaPivot.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[934] /* vehicle.frontSuspension.cornerL.ucaPivot.e[2] PARAM */)) + ((data->simulationInfo->realParameter[935] /* vehicle.frontSuspension.cornerL.ucaPivot.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2523
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[1,1] = vehicle.frontSuspension.cornerL.ucaPivot.e[1] ^ 2.0 + (1.0 - vehicle.frontSuspension.cornerL.ucaPivot.e[1] ^ 2.0) * cos(vehicle.frontSuspension.cornerL.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2523};
  modelica_real tmp69;
  modelica_real tmp70;
  tmp69 = (data->simulationInfo->realParameter[933] /* vehicle.frontSuspension.cornerL.ucaPivot.e[1] PARAM */);
  tmp70 = (data->simulationInfo->realParameter[933] /* vehicle.frontSuspension.cornerL.ucaPivot.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2019]] /* vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[1,1] DUMMY_STATE */) = (tmp69 * tmp69) + (1.0 - ((tmp70 * tmp70))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2524
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.w = $START.vehicle.frontSuspension.cornerL.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2524};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* vehicle.frontSuspension.cornerL.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.a) */) = (data->modelData->realVarsData[16] /* vehicle.frontSuspension.cornerL.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.a) */).attribute .start;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7056(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7055(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7054(DATA *data, threadData_t *threadData);


/*
equation index: 2528
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[3,3] = (1.0 - vehicle.frontSuspension.cornerL.ucaPivot.e[3] ^ 2.0) * (-sin(vehicle.frontSuspension.cornerL.ucaPivot.phi)) * vehicle.frontSuspension.cornerL.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2528};
  modelica_real tmp71;
  tmp71 = (data->simulationInfo->realParameter[935] /* vehicle.frontSuspension.cornerL.ucaPivot.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* der(vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[3,3]) DUMMY_DER */) = (1.0 - ((tmp71 * tmp71))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* vehicle.frontSuspension.cornerL.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 2529
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[3,2] = (-vehicle.frontSuspension.cornerL.ucaPivot.e[3]) * (-sin(vehicle.frontSuspension.cornerL.ucaPivot.phi)) * vehicle.frontSuspension.cornerL.ucaPivot.w * vehicle.frontSuspension.cornerL.ucaPivot.e[2] - vehicle.frontSuspension.cornerL.ucaPivot.e[1] * cos(vehicle.frontSuspension.cornerL.ucaPivot.phi) * vehicle.frontSuspension.cornerL.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2529};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* der(vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[3,2]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[935] /* vehicle.frontSuspension.cornerL.ucaPivot.e[3] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* vehicle.frontSuspension.cornerL.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[934] /* vehicle.frontSuspension.cornerL.ucaPivot.e[2] PARAM */)))) - (((data->simulationInfo->realParameter[933] /* vehicle.frontSuspension.cornerL.ucaPivot.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* vehicle.frontSuspension.cornerL.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 2530
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[3,1] = vehicle.frontSuspension.cornerL.ucaPivot.e[2] * cos(vehicle.frontSuspension.cornerL.ucaPivot.phi) * vehicle.frontSuspension.cornerL.ucaPivot.w - vehicle.frontSuspension.cornerL.ucaPivot.e[3] * (-sin(vehicle.frontSuspension.cornerL.ucaPivot.phi)) * vehicle.frontSuspension.cornerL.ucaPivot.w * vehicle.frontSuspension.cornerL.ucaPivot.e[1]
*/
void AlyssaVehicle_eqFunction_2530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2530};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[485]] /* der(vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[3,1]) DUMMY_DER */) = ((data->simulationInfo->realParameter[934] /* vehicle.frontSuspension.cornerL.ucaPivot.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* vehicle.frontSuspension.cornerL.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[935] /* vehicle.frontSuspension.cornerL.ucaPivot.e[3] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* vehicle.frontSuspension.cornerL.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[933] /* vehicle.frontSuspension.cornerL.ucaPivot.e[1] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2531
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[2,3] = vehicle.frontSuspension.cornerL.ucaPivot.e[1] * cos(vehicle.frontSuspension.cornerL.ucaPivot.phi) * vehicle.frontSuspension.cornerL.ucaPivot.w - vehicle.frontSuspension.cornerL.ucaPivot.e[2] * (-sin(vehicle.frontSuspension.cornerL.ucaPivot.phi)) * vehicle.frontSuspension.cornerL.ucaPivot.w * vehicle.frontSuspension.cornerL.ucaPivot.e[3]
*/
void AlyssaVehicle_eqFunction_2531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2531};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* der(vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[2,3]) DUMMY_DER */) = ((data->simulationInfo->realParameter[933] /* vehicle.frontSuspension.cornerL.ucaPivot.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* vehicle.frontSuspension.cornerL.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[934] /* vehicle.frontSuspension.cornerL.ucaPivot.e[2] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* vehicle.frontSuspension.cornerL.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[935] /* vehicle.frontSuspension.cornerL.ucaPivot.e[3] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2532
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[2,2] = (1.0 - vehicle.frontSuspension.cornerL.ucaPivot.e[2] ^ 2.0) * (-sin(vehicle.frontSuspension.cornerL.ucaPivot.phi)) * vehicle.frontSuspension.cornerL.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2532};
  modelica_real tmp72;
  tmp72 = (data->simulationInfo->realParameter[934] /* vehicle.frontSuspension.cornerL.ucaPivot.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[483]] /* der(vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[2,2]) DUMMY_DER */) = (1.0 - ((tmp72 * tmp72))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* vehicle.frontSuspension.cornerL.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 2533
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[2,1] = (-vehicle.frontSuspension.cornerL.ucaPivot.e[2]) * (-sin(vehicle.frontSuspension.cornerL.ucaPivot.phi)) * vehicle.frontSuspension.cornerL.ucaPivot.w * vehicle.frontSuspension.cornerL.ucaPivot.e[1] - vehicle.frontSuspension.cornerL.ucaPivot.e[3] * cos(vehicle.frontSuspension.cornerL.ucaPivot.phi) * vehicle.frontSuspension.cornerL.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2533};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[482]] /* der(vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[2,1]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[934] /* vehicle.frontSuspension.cornerL.ucaPivot.e[2] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* vehicle.frontSuspension.cornerL.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[933] /* vehicle.frontSuspension.cornerL.ucaPivot.e[1] PARAM */)))) - (((data->simulationInfo->realParameter[935] /* vehicle.frontSuspension.cornerL.ucaPivot.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* vehicle.frontSuspension.cornerL.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 2534
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[1,3] = (-vehicle.frontSuspension.cornerL.ucaPivot.e[1]) * (-sin(vehicle.frontSuspension.cornerL.ucaPivot.phi)) * vehicle.frontSuspension.cornerL.ucaPivot.w * vehicle.frontSuspension.cornerL.ucaPivot.e[3] - vehicle.frontSuspension.cornerL.ucaPivot.e[2] * cos(vehicle.frontSuspension.cornerL.ucaPivot.phi) * vehicle.frontSuspension.cornerL.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2534};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* der(vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[1,3]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[933] /* vehicle.frontSuspension.cornerL.ucaPivot.e[1] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* vehicle.frontSuspension.cornerL.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[935] /* vehicle.frontSuspension.cornerL.ucaPivot.e[3] PARAM */)))) - (((data->simulationInfo->realParameter[934] /* vehicle.frontSuspension.cornerL.ucaPivot.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* vehicle.frontSuspension.cornerL.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 2535
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[1,2] = vehicle.frontSuspension.cornerL.ucaPivot.e[3] * cos(vehicle.frontSuspension.cornerL.ucaPivot.phi) * vehicle.frontSuspension.cornerL.ucaPivot.w - vehicle.frontSuspension.cornerL.ucaPivot.e[1] * (-sin(vehicle.frontSuspension.cornerL.ucaPivot.phi)) * vehicle.frontSuspension.cornerL.ucaPivot.w * vehicle.frontSuspension.cornerL.ucaPivot.e[2]
*/
void AlyssaVehicle_eqFunction_2535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2535};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* der(vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[1,2]) DUMMY_DER */) = ((data->simulationInfo->realParameter[935] /* vehicle.frontSuspension.cornerL.ucaPivot.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* vehicle.frontSuspension.cornerL.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[933] /* vehicle.frontSuspension.cornerL.ucaPivot.e[1] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* vehicle.frontSuspension.cornerL.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[934] /* vehicle.frontSuspension.cornerL.ucaPivot.e[2] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2536
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[1,1] = (1.0 - vehicle.frontSuspension.cornerL.ucaPivot.e[1] ^ 2.0) * (-sin(vehicle.frontSuspension.cornerL.ucaPivot.phi)) * vehicle.frontSuspension.cornerL.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2536};
  modelica_real tmp73;
  tmp73 = (data->simulationInfo->realParameter[933] /* vehicle.frontSuspension.cornerL.ucaPivot.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* der(vehicle.frontSuspension.cornerL.ucaPivot.R_rel.T[1,1]) DUMMY_DER */) = (1.0 - ((tmp73 * tmp73))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* vehicle.frontSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* vehicle.frontSuspension.cornerL.ucaPivot.w STATE(1,vehicle.frontSuspension.cornerL.ucaPivot.a) */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7021(DATA *data, threadData_t *threadData);


/*
equation index: 2538
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.phi = $START.vehicle.rearSuspension.cornerR.ucaPivot.phi
*/
void AlyssaVehicle_eqFunction_2538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2538};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */) = (data->modelData->realVarsData[21] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */).attribute .start;
  TRACE_POP
}

/*
equation index: 2539
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[3,3] = vehicle.rearSuspension.cornerR.ucaPivot.e[3] ^ 2.0 + (1.0 - vehicle.rearSuspension.cornerR.ucaPivot.e[3] ^ 2.0) * cos(vehicle.rearSuspension.cornerR.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2539};
  modelica_real tmp74;
  modelica_real tmp75;
  tmp74 = (data->simulationInfo->realParameter[3089] /* vehicle.rearSuspension.cornerR.ucaPivot.e[3] PARAM */);
  tmp75 = (data->simulationInfo->realParameter[3089] /* vehicle.rearSuspension.cornerR.ucaPivot.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4756]] /* vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[3,3] DUMMY_STATE */) = (tmp74 * tmp74) + (1.0 - ((tmp75 * tmp75))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2540
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[3,2] = (vehicle.rearSuspension.cornerR.ucaPivot.e[3] - vehicle.rearSuspension.cornerR.ucaPivot.e[3] * cos(vehicle.rearSuspension.cornerR.ucaPivot.phi)) * vehicle.rearSuspension.cornerR.ucaPivot.e[2] - vehicle.rearSuspension.cornerR.ucaPivot.e[1] * sin(vehicle.rearSuspension.cornerR.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2540};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4755]] /* vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[3,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[3089] /* vehicle.rearSuspension.cornerR.ucaPivot.e[3] PARAM */) - (((data->simulationInfo->realParameter[3089] /* vehicle.rearSuspension.cornerR.ucaPivot.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[3088] /* vehicle.rearSuspension.cornerR.ucaPivot.e[2] PARAM */)) - (((data->simulationInfo->realParameter[3087] /* vehicle.rearSuspension.cornerR.ucaPivot.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 2541
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[3,1] = (vehicle.rearSuspension.cornerR.ucaPivot.e[3] - vehicle.rearSuspension.cornerR.ucaPivot.e[3] * cos(vehicle.rearSuspension.cornerR.ucaPivot.phi)) * vehicle.rearSuspension.cornerR.ucaPivot.e[1] + vehicle.rearSuspension.cornerR.ucaPivot.e[2] * sin(vehicle.rearSuspension.cornerR.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2541};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4754]] /* vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[3,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[3089] /* vehicle.rearSuspension.cornerR.ucaPivot.e[3] PARAM */) - (((data->simulationInfo->realParameter[3089] /* vehicle.rearSuspension.cornerR.ucaPivot.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[3087] /* vehicle.rearSuspension.cornerR.ucaPivot.e[1] PARAM */)) + ((data->simulationInfo->realParameter[3088] /* vehicle.rearSuspension.cornerR.ucaPivot.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2542
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[2,3] = (vehicle.rearSuspension.cornerR.ucaPivot.e[2] - vehicle.rearSuspension.cornerR.ucaPivot.e[2] * cos(vehicle.rearSuspension.cornerR.ucaPivot.phi)) * vehicle.rearSuspension.cornerR.ucaPivot.e[3] + vehicle.rearSuspension.cornerR.ucaPivot.e[1] * sin(vehicle.rearSuspension.cornerR.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2542};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4753]] /* vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[2,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[3088] /* vehicle.rearSuspension.cornerR.ucaPivot.e[2] PARAM */) - (((data->simulationInfo->realParameter[3088] /* vehicle.rearSuspension.cornerR.ucaPivot.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[3089] /* vehicle.rearSuspension.cornerR.ucaPivot.e[3] PARAM */)) + ((data->simulationInfo->realParameter[3087] /* vehicle.rearSuspension.cornerR.ucaPivot.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2543
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[2,2] = vehicle.rearSuspension.cornerR.ucaPivot.e[2] ^ 2.0 + (1.0 - vehicle.rearSuspension.cornerR.ucaPivot.e[2] ^ 2.0) * cos(vehicle.rearSuspension.cornerR.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2543};
  modelica_real tmp76;
  modelica_real tmp77;
  tmp76 = (data->simulationInfo->realParameter[3088] /* vehicle.rearSuspension.cornerR.ucaPivot.e[2] PARAM */);
  tmp77 = (data->simulationInfo->realParameter[3088] /* vehicle.rearSuspension.cornerR.ucaPivot.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4752]] /* vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[2,2] DUMMY_STATE */) = (tmp76 * tmp76) + (1.0 - ((tmp77 * tmp77))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2544
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[2,1] = (vehicle.rearSuspension.cornerR.ucaPivot.e[2] - vehicle.rearSuspension.cornerR.ucaPivot.e[2] * cos(vehicle.rearSuspension.cornerR.ucaPivot.phi)) * vehicle.rearSuspension.cornerR.ucaPivot.e[1] - vehicle.rearSuspension.cornerR.ucaPivot.e[3] * sin(vehicle.rearSuspension.cornerR.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2544};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4751]] /* vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[2,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[3088] /* vehicle.rearSuspension.cornerR.ucaPivot.e[2] PARAM */) - (((data->simulationInfo->realParameter[3088] /* vehicle.rearSuspension.cornerR.ucaPivot.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[3087] /* vehicle.rearSuspension.cornerR.ucaPivot.e[1] PARAM */)) - (((data->simulationInfo->realParameter[3089] /* vehicle.rearSuspension.cornerR.ucaPivot.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 2545
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[1,3] = (vehicle.rearSuspension.cornerR.ucaPivot.e[1] - vehicle.rearSuspension.cornerR.ucaPivot.e[1] * cos(vehicle.rearSuspension.cornerR.ucaPivot.phi)) * vehicle.rearSuspension.cornerR.ucaPivot.e[3] - vehicle.rearSuspension.cornerR.ucaPivot.e[2] * sin(vehicle.rearSuspension.cornerR.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2545};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4750]] /* vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[1,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[3087] /* vehicle.rearSuspension.cornerR.ucaPivot.e[1] PARAM */) - (((data->simulationInfo->realParameter[3087] /* vehicle.rearSuspension.cornerR.ucaPivot.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[3089] /* vehicle.rearSuspension.cornerR.ucaPivot.e[3] PARAM */)) - (((data->simulationInfo->realParameter[3088] /* vehicle.rearSuspension.cornerR.ucaPivot.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 2546
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[1,2] = (vehicle.rearSuspension.cornerR.ucaPivot.e[1] - vehicle.rearSuspension.cornerR.ucaPivot.e[1] * cos(vehicle.rearSuspension.cornerR.ucaPivot.phi)) * vehicle.rearSuspension.cornerR.ucaPivot.e[2] + vehicle.rearSuspension.cornerR.ucaPivot.e[3] * sin(vehicle.rearSuspension.cornerR.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2546};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4749]] /* vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[1,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[3087] /* vehicle.rearSuspension.cornerR.ucaPivot.e[1] PARAM */) - (((data->simulationInfo->realParameter[3087] /* vehicle.rearSuspension.cornerR.ucaPivot.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[3088] /* vehicle.rearSuspension.cornerR.ucaPivot.e[2] PARAM */)) + ((data->simulationInfo->realParameter[3089] /* vehicle.rearSuspension.cornerR.ucaPivot.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2547
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[1,1] = vehicle.rearSuspension.cornerR.ucaPivot.e[1] ^ 2.0 + (1.0 - vehicle.rearSuspension.cornerR.ucaPivot.e[1] ^ 2.0) * cos(vehicle.rearSuspension.cornerR.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2547};
  modelica_real tmp78;
  modelica_real tmp79;
  tmp78 = (data->simulationInfo->realParameter[3087] /* vehicle.rearSuspension.cornerR.ucaPivot.e[1] PARAM */);
  tmp79 = (data->simulationInfo->realParameter[3087] /* vehicle.rearSuspension.cornerR.ucaPivot.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4748]] /* vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[1,1] DUMMY_STATE */) = (tmp78 * tmp78) + (1.0 - ((tmp79 * tmp79))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2548
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.w = $START.vehicle.rearSuspension.cornerR.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2548};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* vehicle.rearSuspension.cornerR.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.a) */) = (data->modelData->realVarsData[22] /* vehicle.rearSuspension.cornerR.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.a) */).attribute .start;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7059(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7058(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7057(DATA *data, threadData_t *threadData);


/*
equation index: 2552
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[3,3] = (1.0 - vehicle.rearSuspension.cornerR.ucaPivot.e[3] ^ 2.0) * (-sin(vehicle.rearSuspension.cornerR.ucaPivot.phi)) * vehicle.rearSuspension.cornerR.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2552};
  modelica_real tmp80;
  tmp80 = (data->simulationInfo->realParameter[3089] /* vehicle.rearSuspension.cornerR.ucaPivot.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[955]] /* der(vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[3,3]) DUMMY_DER */) = (1.0 - ((tmp80 * tmp80))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* vehicle.rearSuspension.cornerR.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 2553
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[3,2] = (-vehicle.rearSuspension.cornerR.ucaPivot.e[3]) * (-sin(vehicle.rearSuspension.cornerR.ucaPivot.phi)) * vehicle.rearSuspension.cornerR.ucaPivot.w * vehicle.rearSuspension.cornerR.ucaPivot.e[2] - vehicle.rearSuspension.cornerR.ucaPivot.e[1] * cos(vehicle.rearSuspension.cornerR.ucaPivot.phi) * vehicle.rearSuspension.cornerR.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2553};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* der(vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[3,2]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[3089] /* vehicle.rearSuspension.cornerR.ucaPivot.e[3] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* vehicle.rearSuspension.cornerR.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[3088] /* vehicle.rearSuspension.cornerR.ucaPivot.e[2] PARAM */)))) - (((data->simulationInfo->realParameter[3087] /* vehicle.rearSuspension.cornerR.ucaPivot.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* vehicle.rearSuspension.cornerR.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 2554
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[3,1] = vehicle.rearSuspension.cornerR.ucaPivot.e[2] * cos(vehicle.rearSuspension.cornerR.ucaPivot.phi) * vehicle.rearSuspension.cornerR.ucaPivot.w - vehicle.rearSuspension.cornerR.ucaPivot.e[3] * (-sin(vehicle.rearSuspension.cornerR.ucaPivot.phi)) * vehicle.rearSuspension.cornerR.ucaPivot.w * vehicle.rearSuspension.cornerR.ucaPivot.e[1]
*/
void AlyssaVehicle_eqFunction_2554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2554};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[953]] /* der(vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[3,1]) DUMMY_DER */) = ((data->simulationInfo->realParameter[3088] /* vehicle.rearSuspension.cornerR.ucaPivot.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* vehicle.rearSuspension.cornerR.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[3089] /* vehicle.rearSuspension.cornerR.ucaPivot.e[3] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* vehicle.rearSuspension.cornerR.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[3087] /* vehicle.rearSuspension.cornerR.ucaPivot.e[1] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2555
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[2,3] = vehicle.rearSuspension.cornerR.ucaPivot.e[1] * cos(vehicle.rearSuspension.cornerR.ucaPivot.phi) * vehicle.rearSuspension.cornerR.ucaPivot.w - vehicle.rearSuspension.cornerR.ucaPivot.e[2] * (-sin(vehicle.rearSuspension.cornerR.ucaPivot.phi)) * vehicle.rearSuspension.cornerR.ucaPivot.w * vehicle.rearSuspension.cornerR.ucaPivot.e[3]
*/
void AlyssaVehicle_eqFunction_2555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2555};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[952]] /* der(vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[2,3]) DUMMY_DER */) = ((data->simulationInfo->realParameter[3087] /* vehicle.rearSuspension.cornerR.ucaPivot.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* vehicle.rearSuspension.cornerR.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[3088] /* vehicle.rearSuspension.cornerR.ucaPivot.e[2] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* vehicle.rearSuspension.cornerR.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[3089] /* vehicle.rearSuspension.cornerR.ucaPivot.e[3] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2556
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[2,2] = (1.0 - vehicle.rearSuspension.cornerR.ucaPivot.e[2] ^ 2.0) * (-sin(vehicle.rearSuspension.cornerR.ucaPivot.phi)) * vehicle.rearSuspension.cornerR.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2556};
  modelica_real tmp81;
  tmp81 = (data->simulationInfo->realParameter[3088] /* vehicle.rearSuspension.cornerR.ucaPivot.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[951]] /* der(vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[2,2]) DUMMY_DER */) = (1.0 - ((tmp81 * tmp81))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* vehicle.rearSuspension.cornerR.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 2557
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[2,1] = (-vehicle.rearSuspension.cornerR.ucaPivot.e[2]) * (-sin(vehicle.rearSuspension.cornerR.ucaPivot.phi)) * vehicle.rearSuspension.cornerR.ucaPivot.w * vehicle.rearSuspension.cornerR.ucaPivot.e[1] - vehicle.rearSuspension.cornerR.ucaPivot.e[3] * cos(vehicle.rearSuspension.cornerR.ucaPivot.phi) * vehicle.rearSuspension.cornerR.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2557};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[950]] /* der(vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[2,1]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[3088] /* vehicle.rearSuspension.cornerR.ucaPivot.e[2] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* vehicle.rearSuspension.cornerR.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[3087] /* vehicle.rearSuspension.cornerR.ucaPivot.e[1] PARAM */)))) - (((data->simulationInfo->realParameter[3089] /* vehicle.rearSuspension.cornerR.ucaPivot.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* vehicle.rearSuspension.cornerR.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 2558
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[1,3] = (-vehicle.rearSuspension.cornerR.ucaPivot.e[1]) * (-sin(vehicle.rearSuspension.cornerR.ucaPivot.phi)) * vehicle.rearSuspension.cornerR.ucaPivot.w * vehicle.rearSuspension.cornerR.ucaPivot.e[3] - vehicle.rearSuspension.cornerR.ucaPivot.e[2] * cos(vehicle.rearSuspension.cornerR.ucaPivot.phi) * vehicle.rearSuspension.cornerR.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2558};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* der(vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[1,3]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[3087] /* vehicle.rearSuspension.cornerR.ucaPivot.e[1] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* vehicle.rearSuspension.cornerR.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[3089] /* vehicle.rearSuspension.cornerR.ucaPivot.e[3] PARAM */)))) - (((data->simulationInfo->realParameter[3088] /* vehicle.rearSuspension.cornerR.ucaPivot.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* vehicle.rearSuspension.cornerR.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 2559
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[1,2] = vehicle.rearSuspension.cornerR.ucaPivot.e[3] * cos(vehicle.rearSuspension.cornerR.ucaPivot.phi) * vehicle.rearSuspension.cornerR.ucaPivot.w - vehicle.rearSuspension.cornerR.ucaPivot.e[1] * (-sin(vehicle.rearSuspension.cornerR.ucaPivot.phi)) * vehicle.rearSuspension.cornerR.ucaPivot.w * vehicle.rearSuspension.cornerR.ucaPivot.e[2]
*/
void AlyssaVehicle_eqFunction_2559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2559};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[948]] /* der(vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[1,2]) DUMMY_DER */) = ((data->simulationInfo->realParameter[3089] /* vehicle.rearSuspension.cornerR.ucaPivot.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* vehicle.rearSuspension.cornerR.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[3087] /* vehicle.rearSuspension.cornerR.ucaPivot.e[1] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* vehicle.rearSuspension.cornerR.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[3088] /* vehicle.rearSuspension.cornerR.ucaPivot.e[2] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2560
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[1,1] = (1.0 - vehicle.rearSuspension.cornerR.ucaPivot.e[1] ^ 2.0) * (-sin(vehicle.rearSuspension.cornerR.ucaPivot.phi)) * vehicle.rearSuspension.cornerR.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2560};
  modelica_real tmp82;
  tmp82 = (data->simulationInfo->realParameter[3087] /* vehicle.rearSuspension.cornerR.ucaPivot.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[947]] /* der(vehicle.rearSuspension.cornerR.ucaPivot.R_rel.T[1,1]) DUMMY_DER */) = (1.0 - ((tmp82 * tmp82))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* vehicle.rearSuspension.cornerR.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* vehicle.rearSuspension.cornerR.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerR.ucaPivot.a) */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7022(DATA *data, threadData_t *threadData);


/*
equation index: 2562
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.phi = $START.vehicle.rearSuspension.cornerL.ucaPivot.phi
*/
void AlyssaVehicle_eqFunction_2562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2562};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */) = (data->modelData->realVarsData[19] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */).attribute .start;
  TRACE_POP
}

/*
equation index: 2563
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[3,3] = vehicle.rearSuspension.cornerL.ucaPivot.e[3] ^ 2.0 + (1.0 - vehicle.rearSuspension.cornerL.ucaPivot.e[3] ^ 2.0) * cos(vehicle.rearSuspension.cornerL.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2563};
  modelica_real tmp83;
  modelica_real tmp84;
  tmp83 = (data->simulationInfo->realParameter[2442] /* vehicle.rearSuspension.cornerL.ucaPivot.e[3] PARAM */);
  tmp84 = (data->simulationInfo->realParameter[2442] /* vehicle.rearSuspension.cornerL.ucaPivot.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3896]] /* vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[3,3] DUMMY_STATE */) = (tmp83 * tmp83) + (1.0 - ((tmp84 * tmp84))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2564
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[3,2] = (vehicle.rearSuspension.cornerL.ucaPivot.e[3] - vehicle.rearSuspension.cornerL.ucaPivot.e[3] * cos(vehicle.rearSuspension.cornerL.ucaPivot.phi)) * vehicle.rearSuspension.cornerL.ucaPivot.e[2] - vehicle.rearSuspension.cornerL.ucaPivot.e[1] * sin(vehicle.rearSuspension.cornerL.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2564};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3895]] /* vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[3,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2442] /* vehicle.rearSuspension.cornerL.ucaPivot.e[3] PARAM */) - (((data->simulationInfo->realParameter[2442] /* vehicle.rearSuspension.cornerL.ucaPivot.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[2441] /* vehicle.rearSuspension.cornerL.ucaPivot.e[2] PARAM */)) - (((data->simulationInfo->realParameter[2440] /* vehicle.rearSuspension.cornerL.ucaPivot.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 2565
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[3,1] = (vehicle.rearSuspension.cornerL.ucaPivot.e[3] - vehicle.rearSuspension.cornerL.ucaPivot.e[3] * cos(vehicle.rearSuspension.cornerL.ucaPivot.phi)) * vehicle.rearSuspension.cornerL.ucaPivot.e[1] + vehicle.rearSuspension.cornerL.ucaPivot.e[2] * sin(vehicle.rearSuspension.cornerL.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2565};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3894]] /* vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[3,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2442] /* vehicle.rearSuspension.cornerL.ucaPivot.e[3] PARAM */) - (((data->simulationInfo->realParameter[2442] /* vehicle.rearSuspension.cornerL.ucaPivot.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[2440] /* vehicle.rearSuspension.cornerL.ucaPivot.e[1] PARAM */)) + ((data->simulationInfo->realParameter[2441] /* vehicle.rearSuspension.cornerL.ucaPivot.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2566
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[2,3] = (vehicle.rearSuspension.cornerL.ucaPivot.e[2] - vehicle.rearSuspension.cornerL.ucaPivot.e[2] * cos(vehicle.rearSuspension.cornerL.ucaPivot.phi)) * vehicle.rearSuspension.cornerL.ucaPivot.e[3] + vehicle.rearSuspension.cornerL.ucaPivot.e[1] * sin(vehicle.rearSuspension.cornerL.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2566};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3893]] /* vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[2,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2441] /* vehicle.rearSuspension.cornerL.ucaPivot.e[2] PARAM */) - (((data->simulationInfo->realParameter[2441] /* vehicle.rearSuspension.cornerL.ucaPivot.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[2442] /* vehicle.rearSuspension.cornerL.ucaPivot.e[3] PARAM */)) + ((data->simulationInfo->realParameter[2440] /* vehicle.rearSuspension.cornerL.ucaPivot.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2567
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[2,2] = vehicle.rearSuspension.cornerL.ucaPivot.e[2] ^ 2.0 + (1.0 - vehicle.rearSuspension.cornerL.ucaPivot.e[2] ^ 2.0) * cos(vehicle.rearSuspension.cornerL.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2567};
  modelica_real tmp85;
  modelica_real tmp86;
  tmp85 = (data->simulationInfo->realParameter[2441] /* vehicle.rearSuspension.cornerL.ucaPivot.e[2] PARAM */);
  tmp86 = (data->simulationInfo->realParameter[2441] /* vehicle.rearSuspension.cornerL.ucaPivot.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3892]] /* vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[2,2] DUMMY_STATE */) = (tmp85 * tmp85) + (1.0 - ((tmp86 * tmp86))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2568
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[2,1] = (vehicle.rearSuspension.cornerL.ucaPivot.e[2] - vehicle.rearSuspension.cornerL.ucaPivot.e[2] * cos(vehicle.rearSuspension.cornerL.ucaPivot.phi)) * vehicle.rearSuspension.cornerL.ucaPivot.e[1] - vehicle.rearSuspension.cornerL.ucaPivot.e[3] * sin(vehicle.rearSuspension.cornerL.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2568};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3891]] /* vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[2,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2441] /* vehicle.rearSuspension.cornerL.ucaPivot.e[2] PARAM */) - (((data->simulationInfo->realParameter[2441] /* vehicle.rearSuspension.cornerL.ucaPivot.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[2440] /* vehicle.rearSuspension.cornerL.ucaPivot.e[1] PARAM */)) - (((data->simulationInfo->realParameter[2442] /* vehicle.rearSuspension.cornerL.ucaPivot.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 2569
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[1,3] = (vehicle.rearSuspension.cornerL.ucaPivot.e[1] - vehicle.rearSuspension.cornerL.ucaPivot.e[1] * cos(vehicle.rearSuspension.cornerL.ucaPivot.phi)) * vehicle.rearSuspension.cornerL.ucaPivot.e[3] - vehicle.rearSuspension.cornerL.ucaPivot.e[2] * sin(vehicle.rearSuspension.cornerL.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2569};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3890]] /* vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[1,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2440] /* vehicle.rearSuspension.cornerL.ucaPivot.e[1] PARAM */) - (((data->simulationInfo->realParameter[2440] /* vehicle.rearSuspension.cornerL.ucaPivot.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[2442] /* vehicle.rearSuspension.cornerL.ucaPivot.e[3] PARAM */)) - (((data->simulationInfo->realParameter[2441] /* vehicle.rearSuspension.cornerL.ucaPivot.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 2570
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[1,2] = (vehicle.rearSuspension.cornerL.ucaPivot.e[1] - vehicle.rearSuspension.cornerL.ucaPivot.e[1] * cos(vehicle.rearSuspension.cornerL.ucaPivot.phi)) * vehicle.rearSuspension.cornerL.ucaPivot.e[2] + vehicle.rearSuspension.cornerL.ucaPivot.e[3] * sin(vehicle.rearSuspension.cornerL.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2570};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3889]] /* vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[1,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2440] /* vehicle.rearSuspension.cornerL.ucaPivot.e[1] PARAM */) - (((data->simulationInfo->realParameter[2440] /* vehicle.rearSuspension.cornerL.ucaPivot.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[2441] /* vehicle.rearSuspension.cornerL.ucaPivot.e[2] PARAM */)) + ((data->simulationInfo->realParameter[2442] /* vehicle.rearSuspension.cornerL.ucaPivot.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2571
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[1,1] = vehicle.rearSuspension.cornerL.ucaPivot.e[1] ^ 2.0 + (1.0 - vehicle.rearSuspension.cornerL.ucaPivot.e[1] ^ 2.0) * cos(vehicle.rearSuspension.cornerL.ucaPivot.phi)
*/
void AlyssaVehicle_eqFunction_2571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2571};
  modelica_real tmp87;
  modelica_real tmp88;
  tmp87 = (data->simulationInfo->realParameter[2440] /* vehicle.rearSuspension.cornerL.ucaPivot.e[1] PARAM */);
  tmp88 = (data->simulationInfo->realParameter[2440] /* vehicle.rearSuspension.cornerL.ucaPivot.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3888]] /* vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[1,1] DUMMY_STATE */) = (tmp87 * tmp87) + (1.0 - ((tmp88 * tmp88))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 2572
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.w = $START.vehicle.rearSuspension.cornerL.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2572};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* vehicle.rearSuspension.cornerL.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.a) */) = (data->modelData->realVarsData[20] /* vehicle.rearSuspension.cornerL.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.a) */).attribute .start;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7062(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7061(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7060(DATA *data, threadData_t *threadData);


/*
equation index: 2576
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[3,3] = (1.0 - vehicle.rearSuspension.cornerL.ucaPivot.e[3] ^ 2.0) * (-sin(vehicle.rearSuspension.cornerL.ucaPivot.phi)) * vehicle.rearSuspension.cornerL.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2576};
  modelica_real tmp89;
  tmp89 = (data->simulationInfo->realParameter[2442] /* vehicle.rearSuspension.cornerL.ucaPivot.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* der(vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[3,3]) DUMMY_DER */) = (1.0 - ((tmp89 * tmp89))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* vehicle.rearSuspension.cornerL.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 2577
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[3,2] = (-vehicle.rearSuspension.cornerL.ucaPivot.e[3]) * (-sin(vehicle.rearSuspension.cornerL.ucaPivot.phi)) * vehicle.rearSuspension.cornerL.ucaPivot.w * vehicle.rearSuspension.cornerL.ucaPivot.e[2] - vehicle.rearSuspension.cornerL.ucaPivot.e[1] * cos(vehicle.rearSuspension.cornerL.ucaPivot.phi) * vehicle.rearSuspension.cornerL.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2577};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* der(vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[3,2]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[2442] /* vehicle.rearSuspension.cornerL.ucaPivot.e[3] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* vehicle.rearSuspension.cornerL.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[2441] /* vehicle.rearSuspension.cornerL.ucaPivot.e[2] PARAM */)))) - (((data->simulationInfo->realParameter[2440] /* vehicle.rearSuspension.cornerL.ucaPivot.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* vehicle.rearSuspension.cornerL.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 2578
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[3,1] = vehicle.rearSuspension.cornerL.ucaPivot.e[2] * cos(vehicle.rearSuspension.cornerL.ucaPivot.phi) * vehicle.rearSuspension.cornerL.ucaPivot.w - vehicle.rearSuspension.cornerL.ucaPivot.e[3] * (-sin(vehicle.rearSuspension.cornerL.ucaPivot.phi)) * vehicle.rearSuspension.cornerL.ucaPivot.w * vehicle.rearSuspension.cornerL.ucaPivot.e[1]
*/
void AlyssaVehicle_eqFunction_2578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2578};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* der(vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[3,1]) DUMMY_DER */) = ((data->simulationInfo->realParameter[2441] /* vehicle.rearSuspension.cornerL.ucaPivot.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* vehicle.rearSuspension.cornerL.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[2442] /* vehicle.rearSuspension.cornerL.ucaPivot.e[3] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* vehicle.rearSuspension.cornerL.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[2440] /* vehicle.rearSuspension.cornerL.ucaPivot.e[1] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2579
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[2,3] = vehicle.rearSuspension.cornerL.ucaPivot.e[1] * cos(vehicle.rearSuspension.cornerL.ucaPivot.phi) * vehicle.rearSuspension.cornerL.ucaPivot.w - vehicle.rearSuspension.cornerL.ucaPivot.e[2] * (-sin(vehicle.rearSuspension.cornerL.ucaPivot.phi)) * vehicle.rearSuspension.cornerL.ucaPivot.w * vehicle.rearSuspension.cornerL.ucaPivot.e[3]
*/
void AlyssaVehicle_eqFunction_2579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2579};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* der(vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[2,3]) DUMMY_DER */) = ((data->simulationInfo->realParameter[2440] /* vehicle.rearSuspension.cornerL.ucaPivot.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* vehicle.rearSuspension.cornerL.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[2441] /* vehicle.rearSuspension.cornerL.ucaPivot.e[2] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* vehicle.rearSuspension.cornerL.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[2442] /* vehicle.rearSuspension.cornerL.ucaPivot.e[3] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2580
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[2,2] = (1.0 - vehicle.rearSuspension.cornerL.ucaPivot.e[2] ^ 2.0) * (-sin(vehicle.rearSuspension.cornerL.ucaPivot.phi)) * vehicle.rearSuspension.cornerL.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2580};
  modelica_real tmp90;
  tmp90 = (data->simulationInfo->realParameter[2441] /* vehicle.rearSuspension.cornerL.ucaPivot.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* der(vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[2,2]) DUMMY_DER */) = (1.0 - ((tmp90 * tmp90))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* vehicle.rearSuspension.cornerL.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 2581
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[2,1] = (-vehicle.rearSuspension.cornerL.ucaPivot.e[2]) * (-sin(vehicle.rearSuspension.cornerL.ucaPivot.phi)) * vehicle.rearSuspension.cornerL.ucaPivot.w * vehicle.rearSuspension.cornerL.ucaPivot.e[1] - vehicle.rearSuspension.cornerL.ucaPivot.e[3] * cos(vehicle.rearSuspension.cornerL.ucaPivot.phi) * vehicle.rearSuspension.cornerL.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2581};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* der(vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[2,1]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[2441] /* vehicle.rearSuspension.cornerL.ucaPivot.e[2] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* vehicle.rearSuspension.cornerL.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[2440] /* vehicle.rearSuspension.cornerL.ucaPivot.e[1] PARAM */)))) - (((data->simulationInfo->realParameter[2442] /* vehicle.rearSuspension.cornerL.ucaPivot.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* vehicle.rearSuspension.cornerL.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 2582
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[1,3] = (-vehicle.rearSuspension.cornerL.ucaPivot.e[1]) * (-sin(vehicle.rearSuspension.cornerL.ucaPivot.phi)) * vehicle.rearSuspension.cornerL.ucaPivot.w * vehicle.rearSuspension.cornerL.ucaPivot.e[3] - vehicle.rearSuspension.cornerL.ucaPivot.e[2] * cos(vehicle.rearSuspension.cornerL.ucaPivot.phi) * vehicle.rearSuspension.cornerL.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2582};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* der(vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[1,3]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[2440] /* vehicle.rearSuspension.cornerL.ucaPivot.e[1] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* vehicle.rearSuspension.cornerL.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[2442] /* vehicle.rearSuspension.cornerL.ucaPivot.e[3] PARAM */)))) - (((data->simulationInfo->realParameter[2441] /* vehicle.rearSuspension.cornerL.ucaPivot.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* vehicle.rearSuspension.cornerL.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 2583
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[1,2] = vehicle.rearSuspension.cornerL.ucaPivot.e[3] * cos(vehicle.rearSuspension.cornerL.ucaPivot.phi) * vehicle.rearSuspension.cornerL.ucaPivot.w - vehicle.rearSuspension.cornerL.ucaPivot.e[1] * (-sin(vehicle.rearSuspension.cornerL.ucaPivot.phi)) * vehicle.rearSuspension.cornerL.ucaPivot.w * vehicle.rearSuspension.cornerL.ucaPivot.e[2]
*/
void AlyssaVehicle_eqFunction_2583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2583};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* der(vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[1,2]) DUMMY_DER */) = ((data->simulationInfo->realParameter[2442] /* vehicle.rearSuspension.cornerL.ucaPivot.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* vehicle.rearSuspension.cornerL.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[2440] /* vehicle.rearSuspension.cornerL.ucaPivot.e[1] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* vehicle.rearSuspension.cornerL.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[2441] /* vehicle.rearSuspension.cornerL.ucaPivot.e[2] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2584
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[1,1] = (1.0 - vehicle.rearSuspension.cornerL.ucaPivot.e[1] ^ 2.0) * (-sin(vehicle.rearSuspension.cornerL.ucaPivot.phi)) * vehicle.rearSuspension.cornerL.ucaPivot.w
*/
void AlyssaVehicle_eqFunction_2584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2584};
  modelica_real tmp91;
  tmp91 = (data->simulationInfo->realParameter[2440] /* vehicle.rearSuspension.cornerL.ucaPivot.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* der(vehicle.rearSuspension.cornerL.ucaPivot.R_rel.T[1,1]) DUMMY_DER */) = (1.0 - ((tmp91 * tmp91))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* vehicle.rearSuspension.cornerL.ucaPivot.phi STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* vehicle.rearSuspension.cornerL.ucaPivot.w STATE(1,vehicle.rearSuspension.cornerL.ucaPivot.a) */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7023(DATA *data, threadData_t *threadData);


/*
equation index: 2586
type: SIMPLE_ASSIGN
rig.motion.longitudinal.s = $START.rig.motion.longitudinal.s
*/
void AlyssaVehicle_eqFunction_2586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2586};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rig.motion.longitudinal.s STATE(1,rig.motion.longitudinal.v) */) = (data->modelData->realVarsData[4] /* rig.motion.longitudinal.s STATE(1,rig.motion.longitudinal.v) */).attribute .start;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_6953(DATA *data, threadData_t *threadData);


/*
equation index: 2588
type: SIMPLE_ASSIGN
rig.motion.heave.frame_a.r_0[1] = rig.motion.lateral.frame_a.r_0[1]
*/
void AlyssaVehicle_eqFunction_2588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2588};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* rig.motion.heave.frame_a.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* rig.motion.lateral.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 2589
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.frame_a.r_0[1] = rig.motion.heave.frame_a.r_0[1]
*/
void AlyssaVehicle_eqFunction_2589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2589};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5001]] /* vehicle.vehicleBody.body.frame_a.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* rig.motion.heave.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7040(DATA *data, threadData_t *threadData);


/*
equation index: 2591
type: SIMPLE_ASSIGN
rig.motion.longitudinal.v = $START.rig.motion.longitudinal.v
*/
void AlyssaVehicle_eqFunction_2591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2591};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rig.motion.longitudinal.v STATE(1,vehicle.vehicleBody.body.a_0[1]) */) = (data->modelData->realVarsData[5] /* rig.motion.longitudinal.v STATE(1,vehicle.vehicleBody.body.a_0[1]) */).attribute .start;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_6950(DATA *data, threadData_t *threadData);


/*
equation index: 2593
type: SIMPLE_ASSIGN
$DER.rig.motion.heave.frame_a.r_0[1] = $DER.rig.motion.lateral.frame_a.r_0[1]
*/
void AlyssaVehicle_eqFunction_2593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2593};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* der(rig.motion.heave.frame_a.r_0[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* der(rig.motion.lateral.frame_a.r_0[1]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2594
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.v_0[1] = $DER.rig.motion.heave.frame_a.r_0[1]
*/
void AlyssaVehicle_eqFunction_2594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2594};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5032]] /* vehicle.vehicleBody.body.v_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* der(rig.motion.heave.frame_a.r_0[1]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2595
type: SIMPLE_ASSIGN
$DER.vehicle.vehicleBody.body.frame_a.r_0[1] = vehicle.vehicleBody.body.v_0[1]
*/
void AlyssaVehicle_eqFunction_2595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2595};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[978]] /* der(vehicle.vehicleBody.body.frame_a.r_0[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5032]] /* vehicle.vehicleBody.body.v_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7024(DATA *data, threadData_t *threadData);


/*
equation index: 2597
type: SIMPLE_ASSIGN
rig.motion.lateral.s = $START.rig.motion.lateral.s
*/
void AlyssaVehicle_eqFunction_2597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2597};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* rig.motion.lateral.s STATE(1,rig.motion.lateral.v) */) = (data->modelData->realVarsData[2] /* rig.motion.lateral.s STATE(1,rig.motion.lateral.v) */).attribute .start;
  TRACE_POP
}

/*
equation index: 2598
type: SIMPLE_ASSIGN
rig.motion.heave.frame_a.r_0[2] = rig.motion.lateral.frame_a.r_0[2] + rig.motion.lateral.s
*/
void AlyssaVehicle_eqFunction_2598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2598};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1126]] /* rig.motion.heave.frame_a.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* rig.motion.lateral.frame_a.r_0[2] DUMMY_STATE */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* rig.motion.lateral.s STATE(1,rig.motion.lateral.v) */);
  TRACE_POP
}

/*
equation index: 2599
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.frame_a.r_0[2] = rig.motion.heave.frame_a.r_0[2]
*/
void AlyssaVehicle_eqFunction_2599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2599};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5002]] /* vehicle.vehicleBody.body.frame_a.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1126]] /* rig.motion.heave.frame_a.r_0[2] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7041(DATA *data, threadData_t *threadData);


/*
equation index: 2601
type: SIMPLE_ASSIGN
rig.motion.lateral.v = $START.rig.motion.lateral.v
*/
void AlyssaVehicle_eqFunction_2601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2601};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* rig.motion.lateral.v STATE(1,vehicle.vehicleBody.body.a_0[2]) */) = (data->modelData->realVarsData[3] /* rig.motion.lateral.v STATE(1,vehicle.vehicleBody.body.a_0[2]) */).attribute .start;
  TRACE_POP
}

/*
equation index: 2602
type: SIMPLE_ASSIGN
$DER.rig.motion.heave.frame_a.r_0[2] = $DER.rig.motion.lateral.frame_a.r_0[2] + rig.motion.lateral.v
*/
void AlyssaVehicle_eqFunction_2602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2602};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* der(rig.motion.heave.frame_a.r_0[2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* der(rig.motion.lateral.frame_a.r_0[2]) DUMMY_DER */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* rig.motion.lateral.v STATE(1,vehicle.vehicleBody.body.a_0[2]) */);
  TRACE_POP
}

/*
equation index: 2603
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.v_0[2] = $DER.rig.motion.heave.frame_a.r_0[2]
*/
void AlyssaVehicle_eqFunction_2603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2603};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5033]] /* vehicle.vehicleBody.body.v_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* der(rig.motion.heave.frame_a.r_0[2]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2604
type: SIMPLE_ASSIGN
$DER.vehicle.vehicleBody.body.frame_a.r_0[2] = vehicle.vehicleBody.body.v_0[2]
*/
void AlyssaVehicle_eqFunction_2604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2604};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[979]] /* der(vehicle.vehicleBody.body.frame_a.r_0[2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5033]] /* vehicle.vehicleBody.body.v_0[2] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7025(DATA *data, threadData_t *threadData);


/*
equation index: 2606
type: SIMPLE_ASSIGN
rig.motion.heave.s = rig.motion.zChassis0
*/
void AlyssaVehicle_eqFunction_2606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2606};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* rig.motion.heave.s STATE(1,rig.motion.heave.v) */) = (data->simulationInfo->realParameter[219] /* rig.motion.zChassis0 PARAM */);
  TRACE_POP
}

/*
equation index: 2607
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.frame_a.r_0[3] = rig.motion.heave.frame_a.r_0[3] + rig.motion.heave.s
*/
void AlyssaVehicle_eqFunction_2607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2607};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5003]] /* vehicle.vehicleBody.body.frame_a.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1127]] /* rig.motion.heave.frame_a.r_0[3] DUMMY_STATE */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* rig.motion.heave.s STATE(1,rig.motion.heave.v) */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7042(DATA *data, threadData_t *threadData);


/*
equation index: 2609
type: SIMPLE_ASSIGN
rig.motion.heave.v = $START.rig.motion.heave.v
*/
void AlyssaVehicle_eqFunction_2609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2609};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* rig.motion.heave.v STATE(1,vehicle.vehicleBody.body.a_0[3]) */) = (data->modelData->realVarsData[1] /* rig.motion.heave.v STATE(1,vehicle.vehicleBody.body.a_0[3]) */).attribute .start;
  TRACE_POP
}

/*
equation index: 2610
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.v_0[3] = $DER.rig.motion.heave.frame_a.r_0[3] + rig.motion.heave.v
*/
void AlyssaVehicle_eqFunction_2610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2610};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5034]] /* vehicle.vehicleBody.body.v_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* der(rig.motion.heave.frame_a.r_0[3]) DUMMY_DER */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* rig.motion.heave.v STATE(1,vehicle.vehicleBody.body.a_0[3]) */);
  TRACE_POP
}

/*
equation index: 2611
type: SIMPLE_ASSIGN
$DER.vehicle.vehicleBody.body.frame_a.r_0[3] = vehicle.vehicleBody.body.v_0[3]
*/
void AlyssaVehicle_eqFunction_2611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2611};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[980]] /* der(vehicle.vehicleBody.body.frame_a.r_0[3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5034]] /* vehicle.vehicleBody.body.v_0[3] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7026(DATA *data, threadData_t *threadData);


/*
equation index: 2613
type: SIMPLE_ASSIGN
rig.motion.yaw.phi = $START.rig.motion.yaw.phi
*/
void AlyssaVehicle_eqFunction_2613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2613};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */) = (data->modelData->realVarsData[10] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */).attribute .start;
  TRACE_POP
}

/*
equation index: 2614
type: SIMPLE_ASSIGN
rig.motion.pitch.frame_a.R.T[3,3] = rig.motion.yaw.e[3] ^ 2.0 + (1.0 - rig.motion.yaw.e[3] ^ 2.0) * cos(rig.motion.yaw.phi)
*/
void AlyssaVehicle_eqFunction_2614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2614};
  modelica_real tmp92;
  modelica_real tmp93;
  tmp92 = (data->simulationInfo->realParameter[206] /* rig.motion.yaw.e[3] PARAM */);
  tmp93 = (data->simulationInfo->realParameter[206] /* rig.motion.yaw.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1202]] /* rig.motion.pitch.frame_a.R.T[3,3] DUMMY_STATE */) = (tmp92 * tmp92) + (1.0 - ((tmp93 * tmp93))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */)));
  TRACE_POP
}

/*
equation index: 2615
type: SIMPLE_ASSIGN
rig.motion.pitch.frame_a.R.T[3,2] = (rig.motion.yaw.e[3] - rig.motion.yaw.e[3] * cos(rig.motion.yaw.phi)) * rig.motion.yaw.e[2] - rig.motion.yaw.e[1] * sin(rig.motion.yaw.phi)
*/
void AlyssaVehicle_eqFunction_2615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2615};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1201]] /* rig.motion.pitch.frame_a.R.T[3,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[206] /* rig.motion.yaw.e[3] PARAM */) - (((data->simulationInfo->realParameter[206] /* rig.motion.yaw.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */))))) * ((data->simulationInfo->realParameter[205] /* rig.motion.yaw.e[2] PARAM */)) - (((data->simulationInfo->realParameter[204] /* rig.motion.yaw.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */))));
  TRACE_POP
}

/*
equation index: 2616
type: SIMPLE_ASSIGN
rig.motion.pitch.frame_a.R.T[3,1] = (rig.motion.yaw.e[3] - rig.motion.yaw.e[3] * cos(rig.motion.yaw.phi)) * rig.motion.yaw.e[1] + rig.motion.yaw.e[2] * sin(rig.motion.yaw.phi)
*/
void AlyssaVehicle_eqFunction_2616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2616};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* rig.motion.pitch.frame_a.R.T[3,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[206] /* rig.motion.yaw.e[3] PARAM */) - (((data->simulationInfo->realParameter[206] /* rig.motion.yaw.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */))))) * ((data->simulationInfo->realParameter[204] /* rig.motion.yaw.e[1] PARAM */)) + ((data->simulationInfo->realParameter[205] /* rig.motion.yaw.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */)));
  TRACE_POP
}

/*
equation index: 2617
type: SIMPLE_ASSIGN
rig.motion.pitch.frame_a.R.T[2,3] = (rig.motion.yaw.e[2] - rig.motion.yaw.e[2] * cos(rig.motion.yaw.phi)) * rig.motion.yaw.e[3] + rig.motion.yaw.e[1] * sin(rig.motion.yaw.phi)
*/
void AlyssaVehicle_eqFunction_2617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2617};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* rig.motion.pitch.frame_a.R.T[2,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[205] /* rig.motion.yaw.e[2] PARAM */) - (((data->simulationInfo->realParameter[205] /* rig.motion.yaw.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */))))) * ((data->simulationInfo->realParameter[206] /* rig.motion.yaw.e[3] PARAM */)) + ((data->simulationInfo->realParameter[204] /* rig.motion.yaw.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */)));
  TRACE_POP
}

/*
equation index: 2618
type: SIMPLE_ASSIGN
rig.motion.pitch.frame_a.R.T[2,2] = rig.motion.yaw.e[2] ^ 2.0 + (1.0 - rig.motion.yaw.e[2] ^ 2.0) * cos(rig.motion.yaw.phi)
*/
void AlyssaVehicle_eqFunction_2618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2618};
  modelica_real tmp94;
  modelica_real tmp95;
  tmp94 = (data->simulationInfo->realParameter[205] /* rig.motion.yaw.e[2] PARAM */);
  tmp95 = (data->simulationInfo->realParameter[205] /* rig.motion.yaw.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1198]] /* rig.motion.pitch.frame_a.R.T[2,2] DUMMY_STATE */) = (tmp94 * tmp94) + (1.0 - ((tmp95 * tmp95))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */)));
  TRACE_POP
}

/*
equation index: 2619
type: SIMPLE_ASSIGN
rig.motion.pitch.frame_a.R.T[2,1] = (rig.motion.yaw.e[2] - rig.motion.yaw.e[2] * cos(rig.motion.yaw.phi)) * rig.motion.yaw.e[1] - rig.motion.yaw.e[3] * sin(rig.motion.yaw.phi)
*/
void AlyssaVehicle_eqFunction_2619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2619};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1197]] /* rig.motion.pitch.frame_a.R.T[2,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[205] /* rig.motion.yaw.e[2] PARAM */) - (((data->simulationInfo->realParameter[205] /* rig.motion.yaw.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */))))) * ((data->simulationInfo->realParameter[204] /* rig.motion.yaw.e[1] PARAM */)) - (((data->simulationInfo->realParameter[206] /* rig.motion.yaw.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */))));
  TRACE_POP
}

/*
equation index: 2620
type: SIMPLE_ASSIGN
rig.motion.pitch.frame_a.R.T[1,3] = (rig.motion.yaw.e[1] - rig.motion.yaw.e[1] * cos(rig.motion.yaw.phi)) * rig.motion.yaw.e[3] - rig.motion.yaw.e[2] * sin(rig.motion.yaw.phi)
*/
void AlyssaVehicle_eqFunction_2620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2620};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1196]] /* rig.motion.pitch.frame_a.R.T[1,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[204] /* rig.motion.yaw.e[1] PARAM */) - (((data->simulationInfo->realParameter[204] /* rig.motion.yaw.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */))))) * ((data->simulationInfo->realParameter[206] /* rig.motion.yaw.e[3] PARAM */)) - (((data->simulationInfo->realParameter[205] /* rig.motion.yaw.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */))));
  TRACE_POP
}

/*
equation index: 2621
type: SIMPLE_ASSIGN
rig.motion.pitch.frame_a.R.T[1,2] = (rig.motion.yaw.e[1] - rig.motion.yaw.e[1] * cos(rig.motion.yaw.phi)) * rig.motion.yaw.e[2] + rig.motion.yaw.e[3] * sin(rig.motion.yaw.phi)
*/
void AlyssaVehicle_eqFunction_2621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2621};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* rig.motion.pitch.frame_a.R.T[1,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[204] /* rig.motion.yaw.e[1] PARAM */) - (((data->simulationInfo->realParameter[204] /* rig.motion.yaw.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */))))) * ((data->simulationInfo->realParameter[205] /* rig.motion.yaw.e[2] PARAM */)) + ((data->simulationInfo->realParameter[206] /* rig.motion.yaw.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */)));
  TRACE_POP
}

/*
equation index: 2622
type: SIMPLE_ASSIGN
rig.motion.pitch.frame_a.R.T[1,1] = rig.motion.yaw.e[1] ^ 2.0 + (1.0 - rig.motion.yaw.e[1] ^ 2.0) * cos(rig.motion.yaw.phi)
*/
void AlyssaVehicle_eqFunction_2622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2622};
  modelica_real tmp96;
  modelica_real tmp97;
  tmp96 = (data->simulationInfo->realParameter[204] /* rig.motion.yaw.e[1] PARAM */);
  tmp97 = (data->simulationInfo->realParameter[204] /* rig.motion.yaw.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* rig.motion.pitch.frame_a.R.T[1,1] DUMMY_STATE */) = (tmp96 * tmp96) + (1.0 - ((tmp97 * tmp97))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */)));
  TRACE_POP
}

/*
equation index: 2623
type: LINEAR

<var>rig.motion.pitch.frame_a.f[1]</var>
<var>rig.motion.pitch.frame_a.f[2]</var>
<var>rig.motion.pitch.frame_a.f[3]</var>
<row>
  <cell>-rig.motion.longitudinal.constantForce.f_constant</cell>
  <cell>-rig.motion.lateral.constantForce.f_constant</cell>
  <cell>-rig.motion.heave.constantForce.f_constant</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-rig.motion.pitch.frame_a.R.T[1,1]</residual>
  </cell><cell row="0" col="1">
    <residual>-rig.motion.pitch.frame_a.R.T[2,1]</residual>
  </cell><cell row="0" col="2">
    <residual>-rig.motion.pitch.frame_a.R.T[3,1]</residual>
  </cell><cell row="1" col="0">
    <residual>-rig.motion.pitch.frame_a.R.T[1,2]</residual>
  </cell><cell row="1" col="1">
    <residual>-rig.motion.pitch.frame_a.R.T[2,2]</residual>
  </cell><cell row="1" col="2">
    <residual>-rig.motion.pitch.frame_a.R.T[3,2]</residual>
  </cell><cell row="2" col="0">
    <residual>-rig.motion.pitch.frame_a.R.T[1,3]</residual>
  </cell><cell row="2" col="1">
    <residual>-rig.motion.pitch.frame_a.R.T[2,3]</residual>
  </cell><cell row="2" col="2">
    <residual>-rig.motion.pitch.frame_a.R.T[3,3]</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void AlyssaVehicle_eqFunction_2623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2623};
  /* Linear equation system */
  int retValue;
  double aux_x[3] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1206]] /* rig.motion.pitch.frame_a.f[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1207]] /* rig.motion.pitch.frame_a.f[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1208]] /* rig.motion.pitch.frame_a.f[3] variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 2623 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2623};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 2623 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1206]] /* rig.motion.pitch.frame_a.f[1] variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1207]] /* rig.motion.pitch.frame_a.f[2] variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* rig.motion.pitch.frame_a.f[3] variable */) = aux_x[2];

  TRACE_POP
}

/*
equation index: 2624
type: SIMPLE_ASSIGN
rig.motion.yaw.w = $START.rig.motion.yaw.w
*/
void AlyssaVehicle_eqFunction_2624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2624};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */) = (data->modelData->realVarsData[11] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */).attribute .start;
  TRACE_POP
}

/*
equation index: 2625
type: SIMPLE_ASSIGN
rig.motion.yaw.R_rel.w[3] = rig.motion.yaw.e[3] * rig.motion.yaw.w
*/
void AlyssaVehicle_eqFunction_2625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2625};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* rig.motion.yaw.R_rel.w[3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[206] /* rig.motion.yaw.e[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */));
  TRACE_POP
}

/*
equation index: 2626
type: SIMPLE_ASSIGN
rig.motion.pitch.frame_a.R.w[3] = rig.motion.yaw.R_rel.w[3]
*/
void AlyssaVehicle_eqFunction_2626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2626};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* rig.motion.pitch.frame_a.R.w[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* rig.motion.yaw.R_rel.w[3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 2627
type: SIMPLE_ASSIGN
rig.motion.yaw.R_rel.w[2] = rig.motion.yaw.e[2] * rig.motion.yaw.w
*/
void AlyssaVehicle_eqFunction_2627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2627};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1256]] /* rig.motion.yaw.R_rel.w[2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[205] /* rig.motion.yaw.e[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */));
  TRACE_POP
}

/*
equation index: 2628
type: SIMPLE_ASSIGN
rig.motion.pitch.frame_a.R.w[2] = rig.motion.yaw.R_rel.w[2]
*/
void AlyssaVehicle_eqFunction_2628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2628};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1204]] /* rig.motion.pitch.frame_a.R.w[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1256]] /* rig.motion.yaw.R_rel.w[2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 2629
type: SIMPLE_ASSIGN
rig.motion.yaw.R_rel.w[1] = rig.motion.yaw.e[1] * rig.motion.yaw.w
*/
void AlyssaVehicle_eqFunction_2629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2629};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1255]] /* rig.motion.yaw.R_rel.w[1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[204] /* rig.motion.yaw.e[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */));
  TRACE_POP
}

/*
equation index: 2630
type: SIMPLE_ASSIGN
rig.motion.pitch.frame_a.R.w[1] = rig.motion.yaw.R_rel.w[1]
*/
void AlyssaVehicle_eqFunction_2630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2630};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1203]] /* rig.motion.pitch.frame_a.R.w[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1255]] /* rig.motion.yaw.R_rel.w[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 2631
type: SIMPLE_ASSIGN
$DER.rig.motion.pitch.frame_a.R.T[3,3] = (1.0 - rig.motion.yaw.e[3] ^ 2.0) * (-sin(rig.motion.yaw.phi)) * rig.motion.yaw.w
*/
void AlyssaVehicle_eqFunction_2631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2631};
  modelica_real tmp98;
  tmp98 = (data->simulationInfo->realParameter[206] /* rig.motion.yaw.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* der(rig.motion.pitch.frame_a.R.T[3,3]) DUMMY_DER */) = (1.0 - ((tmp98 * tmp98))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */)));
  TRACE_POP
}

/*
equation index: 2632
type: SIMPLE_ASSIGN
$DER.rig.motion.pitch.frame_a.R.T[3,2] = (-rig.motion.yaw.e[3]) * (-sin(rig.motion.yaw.phi)) * rig.motion.yaw.w * rig.motion.yaw.e[2] - rig.motion.yaw.e[1] * cos(rig.motion.yaw.phi) * rig.motion.yaw.w
*/
void AlyssaVehicle_eqFunction_2632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2632};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* der(rig.motion.pitch.frame_a.R.T[3,2]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[206] /* rig.motion.yaw.e[3] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */)) * ((data->simulationInfo->realParameter[205] /* rig.motion.yaw.e[2] PARAM */)))) - (((data->simulationInfo->realParameter[204] /* rig.motion.yaw.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */))));
  TRACE_POP
}

/*
equation index: 2633
type: SIMPLE_ASSIGN
$DER.rig.motion.pitch.frame_a.R.T[3,1] = rig.motion.yaw.e[2] * cos(rig.motion.yaw.phi) * rig.motion.yaw.w - rig.motion.yaw.e[3] * (-sin(rig.motion.yaw.phi)) * rig.motion.yaw.w * rig.motion.yaw.e[1]
*/
void AlyssaVehicle_eqFunction_2633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2633};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* der(rig.motion.pitch.frame_a.R.T[3,1]) DUMMY_DER */) = ((data->simulationInfo->realParameter[205] /* rig.motion.yaw.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */))) - (((data->simulationInfo->realParameter[206] /* rig.motion.yaw.e[3] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */)) * ((data->simulationInfo->realParameter[204] /* rig.motion.yaw.e[1] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2634
type: SIMPLE_ASSIGN
$DER.rig.motion.pitch.frame_a.R.T[2,3] = rig.motion.yaw.e[1] * cos(rig.motion.yaw.phi) * rig.motion.yaw.w - rig.motion.yaw.e[2] * (-sin(rig.motion.yaw.phi)) * rig.motion.yaw.w * rig.motion.yaw.e[3]
*/
void AlyssaVehicle_eqFunction_2634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2634};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* der(rig.motion.pitch.frame_a.R.T[2,3]) DUMMY_DER */) = ((data->simulationInfo->realParameter[204] /* rig.motion.yaw.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */))) - (((data->simulationInfo->realParameter[205] /* rig.motion.yaw.e[2] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */)) * ((data->simulationInfo->realParameter[206] /* rig.motion.yaw.e[3] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2635
type: SIMPLE_ASSIGN
$DER.rig.motion.pitch.frame_a.R.T[2,2] = (1.0 - rig.motion.yaw.e[2] ^ 2.0) * (-sin(rig.motion.yaw.phi)) * rig.motion.yaw.w
*/
void AlyssaVehicle_eqFunction_2635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2635};
  modelica_real tmp99;
  tmp99 = (data->simulationInfo->realParameter[205] /* rig.motion.yaw.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* der(rig.motion.pitch.frame_a.R.T[2,2]) DUMMY_DER */) = (1.0 - ((tmp99 * tmp99))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */)));
  TRACE_POP
}

/*
equation index: 2636
type: SIMPLE_ASSIGN
$DER.rig.motion.pitch.frame_a.R.T[2,1] = (-rig.motion.yaw.e[2]) * (-sin(rig.motion.yaw.phi)) * rig.motion.yaw.w * rig.motion.yaw.e[1] - rig.motion.yaw.e[3] * cos(rig.motion.yaw.phi) * rig.motion.yaw.w
*/
void AlyssaVehicle_eqFunction_2636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2636};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* der(rig.motion.pitch.frame_a.R.T[2,1]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[205] /* rig.motion.yaw.e[2] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */)) * ((data->simulationInfo->realParameter[204] /* rig.motion.yaw.e[1] PARAM */)))) - (((data->simulationInfo->realParameter[206] /* rig.motion.yaw.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */))));
  TRACE_POP
}

/*
equation index: 2637
type: SIMPLE_ASSIGN
$DER.rig.motion.pitch.frame_a.R.T[1,3] = (-rig.motion.yaw.e[1]) * (-sin(rig.motion.yaw.phi)) * rig.motion.yaw.w * rig.motion.yaw.e[3] - rig.motion.yaw.e[2] * cos(rig.motion.yaw.phi) * rig.motion.yaw.w
*/
void AlyssaVehicle_eqFunction_2637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2637};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* der(rig.motion.pitch.frame_a.R.T[1,3]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[204] /* rig.motion.yaw.e[1] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */)) * ((data->simulationInfo->realParameter[206] /* rig.motion.yaw.e[3] PARAM */)))) - (((data->simulationInfo->realParameter[205] /* rig.motion.yaw.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */))));
  TRACE_POP
}

/*
equation index: 2638
type: SIMPLE_ASSIGN
$DER.rig.motion.pitch.frame_a.R.T[1,2] = rig.motion.yaw.e[3] * cos(rig.motion.yaw.phi) * rig.motion.yaw.w - rig.motion.yaw.e[1] * (-sin(rig.motion.yaw.phi)) * rig.motion.yaw.w * rig.motion.yaw.e[2]
*/
void AlyssaVehicle_eqFunction_2638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2638};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* der(rig.motion.pitch.frame_a.R.T[1,2]) DUMMY_DER */) = ((data->simulationInfo->realParameter[206] /* rig.motion.yaw.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */))) - (((data->simulationInfo->realParameter[204] /* rig.motion.yaw.e[1] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */)) * ((data->simulationInfo->realParameter[205] /* rig.motion.yaw.e[2] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2639
type: SIMPLE_ASSIGN
$DER.rig.motion.pitch.frame_a.R.T[1,1] = (1.0 - rig.motion.yaw.e[1] ^ 2.0) * (-sin(rig.motion.yaw.phi)) * rig.motion.yaw.w
*/
void AlyssaVehicle_eqFunction_2639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2639};
  modelica_real tmp100;
  tmp100 = (data->simulationInfo->realParameter[204] /* rig.motion.yaw.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* der(rig.motion.pitch.frame_a.R.T[1,1]) DUMMY_DER */) = (1.0 - ((tmp100 * tmp100))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* rig.motion.yaw.phi STATE(1,rig.motion.yaw.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* rig.motion.yaw.w STATE(1,rig.motion.yaw.a) */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7027(DATA *data, threadData_t *threadData);


/*
equation index: 2641
type: SIMPLE_ASSIGN
rig.motion.pitch.phi = $START.rig.motion.pitch.phi
*/
void AlyssaVehicle_eqFunction_2641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2641};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */) = (data->modelData->realVarsData[6] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */).attribute .start;
  TRACE_POP
}

/*
equation index: 2642
type: SIMPLE_ASSIGN
rig.motion.pitch.R_rel.T[3,3] = rig.motion.pitch.e[3] ^ 2.0 + (1.0 - rig.motion.pitch.e[3] ^ 2.0) * cos(rig.motion.pitch.phi)
*/
void AlyssaVehicle_eqFunction_2642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2642};
  modelica_real tmp101;
  modelica_real tmp102;
  tmp101 = (data->simulationInfo->realParameter[103] /* rig.motion.pitch.e[3] PARAM */);
  tmp102 = (data->simulationInfo->realParameter[103] /* rig.motion.pitch.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* rig.motion.pitch.R_rel.T[3,3] DUMMY_STATE */) = (tmp101 * tmp101) + (1.0 - ((tmp102 * tmp102))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */)));
  TRACE_POP
}

/*
equation index: 2643
type: SIMPLE_ASSIGN
rig.motion.pitch.R_rel.T[3,2] = (rig.motion.pitch.e[3] - rig.motion.pitch.e[3] * cos(rig.motion.pitch.phi)) * rig.motion.pitch.e[2] - rig.motion.pitch.e[1] * sin(rig.motion.pitch.phi)
*/
void AlyssaVehicle_eqFunction_2643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2643};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* rig.motion.pitch.R_rel.T[3,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[103] /* rig.motion.pitch.e[3] PARAM */) - (((data->simulationInfo->realParameter[103] /* rig.motion.pitch.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */))))) * ((data->simulationInfo->realParameter[102] /* rig.motion.pitch.e[2] PARAM */)) - (((data->simulationInfo->realParameter[101] /* rig.motion.pitch.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */))));
  TRACE_POP
}

/*
equation index: 2644
type: SIMPLE_ASSIGN
rig.motion.pitch.R_rel.T[3,1] = (rig.motion.pitch.e[3] - rig.motion.pitch.e[3] * cos(rig.motion.pitch.phi)) * rig.motion.pitch.e[1] + rig.motion.pitch.e[2] * sin(rig.motion.pitch.phi)
*/
void AlyssaVehicle_eqFunction_2644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2644};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* rig.motion.pitch.R_rel.T[3,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[103] /* rig.motion.pitch.e[3] PARAM */) - (((data->simulationInfo->realParameter[103] /* rig.motion.pitch.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */))))) * ((data->simulationInfo->realParameter[101] /* rig.motion.pitch.e[1] PARAM */)) + ((data->simulationInfo->realParameter[102] /* rig.motion.pitch.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7205(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7255(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7155(DATA *data, threadData_t *threadData);


/*
equation index: 2648
type: SIMPLE_ASSIGN
rig.motion.pitch.R_rel.T[2,3] = (rig.motion.pitch.e[2] - rig.motion.pitch.e[2] * cos(rig.motion.pitch.phi)) * rig.motion.pitch.e[3] + rig.motion.pitch.e[1] * sin(rig.motion.pitch.phi)
*/
void AlyssaVehicle_eqFunction_2648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2648};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* rig.motion.pitch.R_rel.T[2,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[102] /* rig.motion.pitch.e[2] PARAM */) - (((data->simulationInfo->realParameter[102] /* rig.motion.pitch.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */))))) * ((data->simulationInfo->realParameter[103] /* rig.motion.pitch.e[3] PARAM */)) + ((data->simulationInfo->realParameter[101] /* rig.motion.pitch.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */)));
  TRACE_POP
}

/*
equation index: 2649
type: SIMPLE_ASSIGN
rig.motion.pitch.R_rel.T[2,2] = rig.motion.pitch.e[2] ^ 2.0 + (1.0 - rig.motion.pitch.e[2] ^ 2.0) * cos(rig.motion.pitch.phi)
*/
void AlyssaVehicle_eqFunction_2649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2649};
  modelica_real tmp103;
  modelica_real tmp104;
  tmp103 = (data->simulationInfo->realParameter[102] /* rig.motion.pitch.e[2] PARAM */);
  tmp104 = (data->simulationInfo->realParameter[102] /* rig.motion.pitch.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* rig.motion.pitch.R_rel.T[2,2] DUMMY_STATE */) = (tmp103 * tmp103) + (1.0 - ((tmp104 * tmp104))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */)));
  TRACE_POP
}

/*
equation index: 2650
type: SIMPLE_ASSIGN
rig.motion.pitch.R_rel.T[2,1] = (rig.motion.pitch.e[2] - rig.motion.pitch.e[2] * cos(rig.motion.pitch.phi)) * rig.motion.pitch.e[1] - rig.motion.pitch.e[3] * sin(rig.motion.pitch.phi)
*/
void AlyssaVehicle_eqFunction_2650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2650};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* rig.motion.pitch.R_rel.T[2,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[102] /* rig.motion.pitch.e[2] PARAM */) - (((data->simulationInfo->realParameter[102] /* rig.motion.pitch.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */))))) * ((data->simulationInfo->realParameter[101] /* rig.motion.pitch.e[1] PARAM */)) - (((data->simulationInfo->realParameter[103] /* rig.motion.pitch.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7204(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7254(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7154(DATA *data, threadData_t *threadData);


/*
equation index: 2654
type: SIMPLE_ASSIGN
rig.motion.pitch.R_rel.T[1,3] = (rig.motion.pitch.e[1] - rig.motion.pitch.e[1] * cos(rig.motion.pitch.phi)) * rig.motion.pitch.e[3] - rig.motion.pitch.e[2] * sin(rig.motion.pitch.phi)
*/
void AlyssaVehicle_eqFunction_2654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2654};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* rig.motion.pitch.R_rel.T[1,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[101] /* rig.motion.pitch.e[1] PARAM */) - (((data->simulationInfo->realParameter[101] /* rig.motion.pitch.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */))))) * ((data->simulationInfo->realParameter[103] /* rig.motion.pitch.e[3] PARAM */)) - (((data->simulationInfo->realParameter[102] /* rig.motion.pitch.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */))));
  TRACE_POP
}

/*
equation index: 2655
type: SIMPLE_ASSIGN
rig.motion.pitch.R_rel.T[1,2] = (rig.motion.pitch.e[1] - rig.motion.pitch.e[1] * cos(rig.motion.pitch.phi)) * rig.motion.pitch.e[2] + rig.motion.pitch.e[3] * sin(rig.motion.pitch.phi)
*/
void AlyssaVehicle_eqFunction_2655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2655};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* rig.motion.pitch.R_rel.T[1,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[101] /* rig.motion.pitch.e[1] PARAM */) - (((data->simulationInfo->realParameter[101] /* rig.motion.pitch.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */))))) * ((data->simulationInfo->realParameter[102] /* rig.motion.pitch.e[2] PARAM */)) + ((data->simulationInfo->realParameter[103] /* rig.motion.pitch.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */)));
  TRACE_POP
}

/*
equation index: 2656
type: SIMPLE_ASSIGN
rig.motion.pitch.R_rel.T[1,1] = rig.motion.pitch.e[1] ^ 2.0 + (1.0 - rig.motion.pitch.e[1] ^ 2.0) * cos(rig.motion.pitch.phi)
*/
void AlyssaVehicle_eqFunction_2656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2656};
  modelica_real tmp105;
  modelica_real tmp106;
  tmp105 = (data->simulationInfo->realParameter[101] /* rig.motion.pitch.e[1] PARAM */);
  tmp106 = (data->simulationInfo->realParameter[101] /* rig.motion.pitch.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* rig.motion.pitch.R_rel.T[1,1] DUMMY_STATE */) = (tmp105 * tmp105) + (1.0 - ((tmp106 * tmp106))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7203(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7253(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7153(DATA *data, threadData_t *threadData);


/*
equation index: 2660
type: LINEAR

<var>rig.motion.roll.frame_a.f[3]</var>
<var>rig.motion.roll.frame_a.f[1]</var>
<var>rig.motion.roll.frame_a.f[2]</var>
<row>
  <cell>-rig.motion.pitch.frame_a.f[1]</cell>
  <cell>-rig.motion.pitch.frame_a.f[2]</cell>
  <cell>-rig.motion.pitch.frame_a.f[3]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-rig.motion.pitch.R_rel.T[3,1]</residual>
  </cell><cell row="0" col="1">
    <residual>-rig.motion.pitch.R_rel.T[1,1]</residual>
  </cell><cell row="0" col="2">
    <residual>-rig.motion.pitch.R_rel.T[2,1]</residual>
  </cell><cell row="1" col="0">
    <residual>-rig.motion.pitch.R_rel.T[3,2]</residual>
  </cell><cell row="1" col="1">
    <residual>-rig.motion.pitch.R_rel.T[1,2]</residual>
  </cell><cell row="1" col="2">
    <residual>-rig.motion.pitch.R_rel.T[2,2]</residual>
  </cell><cell row="2" col="0">
    <residual>-rig.motion.pitch.R_rel.T[3,3]</residual>
  </cell><cell row="2" col="1">
    <residual>-rig.motion.pitch.R_rel.T[1,3]</residual>
  </cell><cell row="2" col="2">
    <residual>-rig.motion.pitch.R_rel.T[2,3]</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void AlyssaVehicle_eqFunction_2660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2660};
  /* Linear equation system */
  int retValue;
  double aux_x[3] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1251]] /* rig.motion.roll.frame_a.f[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1249]] /* rig.motion.roll.frame_a.f[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1250]] /* rig.motion.roll.frame_a.f[2] variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 2660 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2660};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 2660 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1251]] /* rig.motion.roll.frame_a.f[3] variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1249]] /* rig.motion.roll.frame_a.f[1] variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1250]] /* rig.motion.roll.frame_a.f[2] variable */) = aux_x[2];

  TRACE_POP
}

/*
equation index: 2661
type: SIMPLE_ASSIGN
rig.motion.pitch.w = $START.rig.motion.pitch.w
*/
void AlyssaVehicle_eqFunction_2661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2661};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rig.motion.pitch.w STATE(1,rig.motion.pitch.a) */) = (data->modelData->realVarsData[7] /* rig.motion.pitch.w STATE(1,rig.motion.pitch.a) */).attribute .start;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7071(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7106(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7070(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7109(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7069(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7112(DATA *data, threadData_t *threadData);


/*
equation index: 2668
type: SIMPLE_ASSIGN
$DER.rig.motion.pitch.R_rel.T[3,3] = (1.0 - rig.motion.pitch.e[3] ^ 2.0) * (-sin(rig.motion.pitch.phi)) * rig.motion.pitch.w
*/
void AlyssaVehicle_eqFunction_2668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2668};
  modelica_real tmp107;
  tmp107 = (data->simulationInfo->realParameter[103] /* rig.motion.pitch.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* der(rig.motion.pitch.R_rel.T[3,3]) DUMMY_DER */) = (1.0 - ((tmp107 * tmp107))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rig.motion.pitch.w STATE(1,rig.motion.pitch.a) */)));
  TRACE_POP
}

/*
equation index: 2669
type: SIMPLE_ASSIGN
$DER.rig.motion.pitch.R_rel.T[3,2] = (-rig.motion.pitch.e[3]) * (-sin(rig.motion.pitch.phi)) * rig.motion.pitch.w * rig.motion.pitch.e[2] - rig.motion.pitch.e[1] * cos(rig.motion.pitch.phi) * rig.motion.pitch.w
*/
void AlyssaVehicle_eqFunction_2669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2669};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* der(rig.motion.pitch.R_rel.T[3,2]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[103] /* rig.motion.pitch.e[3] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rig.motion.pitch.w STATE(1,rig.motion.pitch.a) */)) * ((data->simulationInfo->realParameter[102] /* rig.motion.pitch.e[2] PARAM */)))) - (((data->simulationInfo->realParameter[101] /* rig.motion.pitch.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rig.motion.pitch.w STATE(1,rig.motion.pitch.a) */))));
  TRACE_POP
}

/*
equation index: 2670
type: SIMPLE_ASSIGN
$DER.rig.motion.pitch.R_rel.T[3,1] = rig.motion.pitch.e[2] * cos(rig.motion.pitch.phi) * rig.motion.pitch.w - rig.motion.pitch.e[3] * (-sin(rig.motion.pitch.phi)) * rig.motion.pitch.w * rig.motion.pitch.e[1]
*/
void AlyssaVehicle_eqFunction_2670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2670};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* der(rig.motion.pitch.R_rel.T[3,1]) DUMMY_DER */) = ((data->simulationInfo->realParameter[102] /* rig.motion.pitch.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rig.motion.pitch.w STATE(1,rig.motion.pitch.a) */))) - (((data->simulationInfo->realParameter[103] /* rig.motion.pitch.e[3] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rig.motion.pitch.w STATE(1,rig.motion.pitch.a) */)) * ((data->simulationInfo->realParameter[101] /* rig.motion.pitch.e[1] PARAM */)))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7325(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7332(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7339(DATA *data, threadData_t *threadData);


/*
equation index: 2674
type: SIMPLE_ASSIGN
$DER.rig.motion.pitch.R_rel.T[2,3] = rig.motion.pitch.e[1] * cos(rig.motion.pitch.phi) * rig.motion.pitch.w - rig.motion.pitch.e[2] * (-sin(rig.motion.pitch.phi)) * rig.motion.pitch.w * rig.motion.pitch.e[3]
*/
void AlyssaVehicle_eqFunction_2674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2674};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* der(rig.motion.pitch.R_rel.T[2,3]) DUMMY_DER */) = ((data->simulationInfo->realParameter[101] /* rig.motion.pitch.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rig.motion.pitch.w STATE(1,rig.motion.pitch.a) */))) - (((data->simulationInfo->realParameter[102] /* rig.motion.pitch.e[2] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rig.motion.pitch.w STATE(1,rig.motion.pitch.a) */)) * ((data->simulationInfo->realParameter[103] /* rig.motion.pitch.e[3] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2675
type: SIMPLE_ASSIGN
$DER.rig.motion.pitch.R_rel.T[2,2] = (1.0 - rig.motion.pitch.e[2] ^ 2.0) * (-sin(rig.motion.pitch.phi)) * rig.motion.pitch.w
*/
void AlyssaVehicle_eqFunction_2675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2675};
  modelica_real tmp108;
  tmp108 = (data->simulationInfo->realParameter[102] /* rig.motion.pitch.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* der(rig.motion.pitch.R_rel.T[2,2]) DUMMY_DER */) = (1.0 - ((tmp108 * tmp108))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rig.motion.pitch.w STATE(1,rig.motion.pitch.a) */)));
  TRACE_POP
}

/*
equation index: 2676
type: SIMPLE_ASSIGN
$DER.rig.motion.pitch.R_rel.T[2,1] = (-rig.motion.pitch.e[2]) * (-sin(rig.motion.pitch.phi)) * rig.motion.pitch.w * rig.motion.pitch.e[1] - rig.motion.pitch.e[3] * cos(rig.motion.pitch.phi) * rig.motion.pitch.w
*/
void AlyssaVehicle_eqFunction_2676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2676};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* der(rig.motion.pitch.R_rel.T[2,1]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[102] /* rig.motion.pitch.e[2] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rig.motion.pitch.w STATE(1,rig.motion.pitch.a) */)) * ((data->simulationInfo->realParameter[101] /* rig.motion.pitch.e[1] PARAM */)))) - (((data->simulationInfo->realParameter[103] /* rig.motion.pitch.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rig.motion.pitch.w STATE(1,rig.motion.pitch.a) */))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7324(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7331(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7338(DATA *data, threadData_t *threadData);


/*
equation index: 2680
type: SIMPLE_ASSIGN
$DER.rig.motion.pitch.R_rel.T[1,3] = (-rig.motion.pitch.e[1]) * (-sin(rig.motion.pitch.phi)) * rig.motion.pitch.w * rig.motion.pitch.e[3] - rig.motion.pitch.e[2] * cos(rig.motion.pitch.phi) * rig.motion.pitch.w
*/
void AlyssaVehicle_eqFunction_2680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2680};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* der(rig.motion.pitch.R_rel.T[1,3]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[101] /* rig.motion.pitch.e[1] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rig.motion.pitch.w STATE(1,rig.motion.pitch.a) */)) * ((data->simulationInfo->realParameter[103] /* rig.motion.pitch.e[3] PARAM */)))) - (((data->simulationInfo->realParameter[102] /* rig.motion.pitch.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rig.motion.pitch.w STATE(1,rig.motion.pitch.a) */))));
  TRACE_POP
}

/*
equation index: 2681
type: SIMPLE_ASSIGN
$DER.rig.motion.pitch.R_rel.T[1,2] = rig.motion.pitch.e[3] * cos(rig.motion.pitch.phi) * rig.motion.pitch.w - rig.motion.pitch.e[1] * (-sin(rig.motion.pitch.phi)) * rig.motion.pitch.w * rig.motion.pitch.e[2]
*/
void AlyssaVehicle_eqFunction_2681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2681};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* der(rig.motion.pitch.R_rel.T[1,2]) DUMMY_DER */) = ((data->simulationInfo->realParameter[103] /* rig.motion.pitch.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rig.motion.pitch.w STATE(1,rig.motion.pitch.a) */))) - (((data->simulationInfo->realParameter[101] /* rig.motion.pitch.e[1] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rig.motion.pitch.w STATE(1,rig.motion.pitch.a) */)) * ((data->simulationInfo->realParameter[102] /* rig.motion.pitch.e[2] PARAM */)))));
  TRACE_POP
}

/*
equation index: 2682
type: SIMPLE_ASSIGN
$DER.rig.motion.pitch.R_rel.T[1,1] = (1.0 - rig.motion.pitch.e[1] ^ 2.0) * (-sin(rig.motion.pitch.phi)) * rig.motion.pitch.w
*/
void AlyssaVehicle_eqFunction_2682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2682};
  modelica_real tmp109;
  tmp109 = (data->simulationInfo->realParameter[101] /* rig.motion.pitch.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* der(rig.motion.pitch.R_rel.T[1,1]) DUMMY_DER */) = (1.0 - ((tmp109 * tmp109))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rig.motion.pitch.phi STATE(1,rig.motion.pitch.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rig.motion.pitch.w STATE(1,rig.motion.pitch.a) */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7323(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7330(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7337(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7028(DATA *data, threadData_t *threadData);


/*
equation index: 2687
type: SIMPLE_ASSIGN
rig.motion.roll.phi = $START.rig.motion.roll.phi
*/
void AlyssaVehicle_eqFunction_2687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2687};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */) = (data->modelData->realVarsData[8] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */).attribute .start;
  TRACE_POP
}

/*
equation index: 2688
type: SIMPLE_ASSIGN
rig.motion.roll.R_rel.T[3,3] = rig.motion.roll.e[3] ^ 2.0 + (1.0 - rig.motion.roll.e[3] ^ 2.0) * cos(rig.motion.roll.phi)
*/
void AlyssaVehicle_eqFunction_2688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2688};
  modelica_real tmp110;
  modelica_real tmp111;
  tmp110 = (data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */);
  tmp111 = (data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* rig.motion.roll.R_rel.T[3,3] DUMMY_STATE */) = (tmp110 * tmp110) + (1.0 - ((tmp111 * tmp111))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)));
  TRACE_POP
}

/*
equation index: 2689
type: SIMPLE_ASSIGN
rig.motion.roll.R_rel.T[3,2] = (rig.motion.roll.e[3] - rig.motion.roll.e[3] * cos(rig.motion.roll.phi)) * rig.motion.roll.e[2] - rig.motion.roll.e[1] * sin(rig.motion.roll.phi)
*/
void AlyssaVehicle_eqFunction_2689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2689};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1219]] /* rig.motion.roll.R_rel.T[3,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */) - (((data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))))) * ((data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */)) - (((data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))));
  TRACE_POP
}

/*
equation index: 2690
type: SIMPLE_ASSIGN
rig.motion.roll.R_rel.T[3,1] = (rig.motion.roll.e[3] - rig.motion.roll.e[3] * cos(rig.motion.roll.phi)) * rig.motion.roll.e[1] + rig.motion.roll.e[2] * sin(rig.motion.roll.phi)
*/
void AlyssaVehicle_eqFunction_2690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2690};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1218]] /* rig.motion.roll.R_rel.T[3,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */) - (((data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))))) * ((data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */)) + ((data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7210(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7269(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7160(DATA *data, threadData_t *threadData);


/*
equation index: 2694
type: SIMPLE_ASSIGN
vBody[3] = vehicle.chassisFrame.R.T[3,1] * vehicle.vehicleBody.body.v_0[1] + vehicle.chassisFrame.R.T[3,2] * vehicle.vehicleBody.body.v_0[2] + vehicle.chassisFrame.R.T[3,3] * vehicle.vehicleBody.body.v_0[3]
*/
void AlyssaVehicle_eqFunction_2694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2694};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1310]] /* vBody[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5032]] /* vehicle.vehicleBody.body.v_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5033]] /* vehicle.vehicleBody.body.v_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5034]] /* vehicle.vehicleBody.body.v_0[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 2695
type: SIMPLE_ASSIGN
vehicle.vehicleBody.aero.vBody[3] = vehicle.chassisFrame.R.T[3,1] * vehicle.vehicleBody.body.v_0[1] + vehicle.chassisFrame.R.T[3,2] * vehicle.vehicleBody.body.v_0[2] + vehicle.chassisFrame.R.T[3,3] * vehicle.vehicleBody.body.v_0[3]
*/
void AlyssaVehicle_eqFunction_2695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2695};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4978]] /* vehicle.vehicleBody.aero.vBody[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5032]] /* vehicle.vehicleBody.body.v_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5033]] /* vehicle.vehicleBody.body.v_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5034]] /* vehicle.vehicleBody.body.v_0[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 2696
type: SIMPLE_ASSIGN
rig.motion.roll.R_rel.T[2,3] = (rig.motion.roll.e[2] - rig.motion.roll.e[2] * cos(rig.motion.roll.phi)) * rig.motion.roll.e[3] + rig.motion.roll.e[1] * sin(rig.motion.roll.phi)
*/
void AlyssaVehicle_eqFunction_2696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2696};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* rig.motion.roll.R_rel.T[2,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */) - (((data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))))) * ((data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */)) + ((data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)));
  TRACE_POP
}

/*
equation index: 2697
type: SIMPLE_ASSIGN
rig.motion.roll.R_rel.T[2,2] = rig.motion.roll.e[2] ^ 2.0 + (1.0 - rig.motion.roll.e[2] ^ 2.0) * cos(rig.motion.roll.phi)
*/
void AlyssaVehicle_eqFunction_2697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2697};
  modelica_real tmp112;
  modelica_real tmp113;
  tmp112 = (data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */);
  tmp113 = (data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* rig.motion.roll.R_rel.T[2,2] DUMMY_STATE */) = (tmp112 * tmp112) + (1.0 - ((tmp113 * tmp113))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)));
  TRACE_POP
}

/*
equation index: 2698
type: SIMPLE_ASSIGN
rig.motion.roll.R_rel.T[2,1] = (rig.motion.roll.e[2] - rig.motion.roll.e[2] * cos(rig.motion.roll.phi)) * rig.motion.roll.e[1] - rig.motion.roll.e[3] * sin(rig.motion.roll.phi)
*/
void AlyssaVehicle_eqFunction_2698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2698};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1215]] /* rig.motion.roll.R_rel.T[2,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */) - (((data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))))) * ((data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */)) - (((data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7209(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7266(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7159(DATA *data, threadData_t *threadData);


/*
equation index: 2702
type: SIMPLE_ASSIGN
vyBody = vehicle.chassisFrame.R.T[2,1] * vehicle.vehicleBody.body.v_0[1] + vehicle.chassisFrame.R.T[2,2] * vehicle.vehicleBody.body.v_0[2] + vehicle.chassisFrame.R.T[2,3] * vehicle.vehicleBody.body.v_0[3]
*/
void AlyssaVehicle_eqFunction_2702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2702};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5468]] /* vyBody variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5032]] /* vehicle.vehicleBody.body.v_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5033]] /* vehicle.vehicleBody.body.v_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5034]] /* vehicle.vehicleBody.body.v_0[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 2703
type: SIMPLE_ASSIGN
vehicle.vehicleBody.aero.vBody[2] = vehicle.chassisFrame.R.T[2,1] * vehicle.vehicleBody.body.v_0[1] + vehicle.chassisFrame.R.T[2,2] * vehicle.vehicleBody.body.v_0[2] + vehicle.chassisFrame.R.T[2,3] * vehicle.vehicleBody.body.v_0[3]
*/
void AlyssaVehicle_eqFunction_2703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2703};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4977]] /* vehicle.vehicleBody.aero.vBody[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5032]] /* vehicle.vehicleBody.body.v_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5033]] /* vehicle.vehicleBody.body.v_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5034]] /* vehicle.vehicleBody.body.v_0[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 2704
type: SIMPLE_ASSIGN
rig.motion.roll.R_rel.T[1,3] = (rig.motion.roll.e[1] - rig.motion.roll.e[1] * cos(rig.motion.roll.phi)) * rig.motion.roll.e[3] - rig.motion.roll.e[2] * sin(rig.motion.roll.phi)
*/
void AlyssaVehicle_eqFunction_2704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2704};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* rig.motion.roll.R_rel.T[1,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */) - (((data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))))) * ((data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */)) - (((data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))));
  TRACE_POP
}

/*
equation index: 2705
type: SIMPLE_ASSIGN
rig.motion.roll.R_rel.T[1,2] = (rig.motion.roll.e[1] - rig.motion.roll.e[1] * cos(rig.motion.roll.phi)) * rig.motion.roll.e[2] + rig.motion.roll.e[3] * sin(rig.motion.roll.phi)
*/
void AlyssaVehicle_eqFunction_2705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2705};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1213]] /* rig.motion.roll.R_rel.T[1,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */) - (((data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */))))) * ((data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */)) + ((data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)));
  TRACE_POP
}

/*
equation index: 2706
type: SIMPLE_ASSIGN
rig.motion.roll.R_rel.T[1,1] = rig.motion.roll.e[1] ^ 2.0 + (1.0 - rig.motion.roll.e[1] ^ 2.0) * cos(rig.motion.roll.phi)
*/
void AlyssaVehicle_eqFunction_2706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2706};
  modelica_real tmp114;
  modelica_real tmp115;
  tmp114 = (data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */);
  tmp115 = (data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* rig.motion.roll.R_rel.T[1,1] DUMMY_STATE */) = (tmp114 * tmp114) + (1.0 - ((tmp115 * tmp115))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* rig.motion.roll.phi STATE(1,rig.motion.roll.w) */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7206(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7352(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7360(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7435(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7714(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7722(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7797(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8085(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8091(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8099(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8458(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8464(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8472(DATA *data, threadData_t *threadData);


/*
equation index: 2720
type: SIMPLE_ASSIGN
vehicle.rearSuspension.subFrameRear.r_0[3] = vehicle.vehicleBody.body.frame_a.r_0[3] - 1.7 * vehicle.chassisFrame.R.T[1,3]
*/
void AlyssaVehicle_eqFunction_2720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2720};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4920]] /* vehicle.rearSuspension.subFrameRear.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5003]] /* vehicle.vehicleBody.body.frame_a.r_0[3] DUMMY_STATE */) - ((1.7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1313]] /* vehicle.chassisFrame.R.T[1,3] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7218(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7217(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7216(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7361(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7215(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7214(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7213(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7723(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7212(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7211(DATA *data, threadData_t *threadData);


/*
equation index: 2731
type: SIMPLE_ASSIGN
vehicle.frontSuspension.subFrameFront.r_0[3] = vehicle.vehicleBody.body.frame_a.r_0[3] - (-1.9) * vehicle.chassisFrame.R.T[1,3]
*/
void AlyssaVehicle_eqFunction_2731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2731};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3151]] /* vehicle.frontSuspension.subFrameFront.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5003]] /* vehicle.vehicleBody.body.frame_a.r_0[3] DUMMY_STATE */) - ((-1.9) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1313]] /* vehicle.chassisFrame.R.T[1,3] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7235(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7234(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7233(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8100(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7232(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7231(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7230(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8473(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7226(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7256(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7351(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7358(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7434(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7713(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7720(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7796(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8084(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8090(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8097(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8457(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8463(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8470(DATA *data, threadData_t *threadData);


/*
equation index: 2754
type: SIMPLE_ASSIGN
vehicle.rearSuspension.subFrameRear.r_0[2] = vehicle.vehicleBody.body.frame_a.r_0[2] - 1.7 * vehicle.chassisFrame.R.T[1,2]
*/
void AlyssaVehicle_eqFunction_2754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2754};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4919]] /* vehicle.rearSuspension.subFrameRear.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5002]] /* vehicle.vehicleBody.body.frame_a.r_0[2] DUMMY_STATE */) - ((1.7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* vehicle.chassisFrame.R.T[1,2] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7277(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7276(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7275(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7359(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7274(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7273(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7272(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7721(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7271(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7270(DATA *data, threadData_t *threadData);


/*
equation index: 2765
type: SIMPLE_ASSIGN
vehicle.frontSuspension.subFrameFront.r_0[2] = vehicle.vehicleBody.body.frame_a.r_0[2] - (-1.9) * vehicle.chassisFrame.R.T[1,2]
*/
void AlyssaVehicle_eqFunction_2765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2765};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3150]] /* vehicle.frontSuspension.subFrameFront.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5002]] /* vehicle.vehicleBody.body.frame_a.r_0[2] DUMMY_STATE */) - ((-1.9) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* vehicle.chassisFrame.R.T[1,2] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7294(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7293(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7292(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8098(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7291(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7290(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7289(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8471(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7285(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7156(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7350(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7356(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7433(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7712(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7718(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7795(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8083(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8089(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8095(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8456(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8462(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8468(DATA *data, threadData_t *threadData);


/*
equation index: 2788
type: SIMPLE_ASSIGN
vehicle.rearSuspension.subFrameRear.r_0[1] = vehicle.vehicleBody.body.frame_a.r_0[1] - 1.7 * vehicle.chassisFrame.R.T[1,1]
*/
void AlyssaVehicle_eqFunction_2788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2788};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4918]] /* vehicle.rearSuspension.subFrameRear.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5001]] /* vehicle.vehicleBody.body.frame_a.r_0[1] DUMMY_STATE */) - ((1.7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* vehicle.chassisFrame.R.T[1,1] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7168(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7167(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7166(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7357(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7364(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7363(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7366(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7362(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7365(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7367(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7165(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7164(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7163(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7719(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7726(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7725(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7728(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7724(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7727(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7729(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7162(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7161(DATA *data, threadData_t *threadData);


/*
equation index: 2811
type: SIMPLE_ASSIGN
vehicle.frontSuspension.subFrameFront.r_0[1] = vehicle.vehicleBody.body.frame_a.r_0[1] - (-1.9) * vehicle.chassisFrame.R.T[1,1]
*/
void AlyssaVehicle_eqFunction_2811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2811};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3149]] /* vehicle.frontSuspension.subFrameFront.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5001]] /* vehicle.vehicleBody.body.frame_a.r_0[1] DUMMY_STATE */) - ((-1.9) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* vehicle.chassisFrame.R.T[1,1] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7185(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7184(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7183(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8096(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8103(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8102(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8105(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8101(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8104(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8106(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7182(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7181(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7180(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8469(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8476(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8475(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8478(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8474(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8477(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8479(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7176(DATA *data, threadData_t *threadData);


/*
equation index: 2833
type: SIMPLE_ASSIGN
vxBody = vehicle.chassisFrame.R.T[1,1] * vehicle.vehicleBody.body.v_0[1] + vehicle.chassisFrame.R.T[1,2] * vehicle.vehicleBody.body.v_0[2] + vehicle.chassisFrame.R.T[1,3] * vehicle.vehicleBody.body.v_0[3]
*/
void AlyssaVehicle_eqFunction_2833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2833};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5467]] /* vxBody variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* vehicle.chassisFrame.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5032]] /* vehicle.vehicleBody.body.v_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* vehicle.chassisFrame.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5033]] /* vehicle.vehicleBody.body.v_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1313]] /* vehicle.chassisFrame.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5034]] /* vehicle.vehicleBody.body.v_0[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 2834
type: SIMPLE_ASSIGN
vehicle.vehicleBody.aero.vx = vehicle.chassisFrame.R.T[1,1] * vehicle.vehicleBody.body.v_0[1] + vehicle.chassisFrame.R.T[1,2] * vehicle.vehicleBody.body.v_0[2] + vehicle.chassisFrame.R.T[1,3] * vehicle.vehicleBody.body.v_0[3]
*/
void AlyssaVehicle_eqFunction_2834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2834};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4979]] /* vehicle.vehicleBody.aero.vx variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* vehicle.chassisFrame.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5032]] /* vehicle.vehicleBody.body.v_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* vehicle.chassisFrame.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5033]] /* vehicle.vehicleBody.body.v_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1313]] /* vehicle.chassisFrame.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5034]] /* vehicle.vehicleBody.body.v_0[3] DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7263(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7262(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7264(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7261(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7265(DATA *data, threadData_t *threadData);


/*
equation index: 2858
type: LINEAR

<var>rig.vehicleFrame.t[2]</var>
<var>rig.vehicleFrame.t[3]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void AlyssaVehicle_eqFunction_2858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2858};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1301]] /* rig.vehicleFrame.t[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1302]] /* rig.vehicleFrame.t[3] variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 2858 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2858};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 2858 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1301]] /* rig.vehicleFrame.t[2] variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1302]] /* rig.vehicleFrame.t[3] variable */) = aux_x[1];

  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7249(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7250(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7251(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7310(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7311(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7312(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7199(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7200(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7201(DATA *data, threadData_t *threadData);


/*
equation index: 2868
type: LINEAR

<var>rig.vehicleFrame.f[1]</var>
<var>rig.vehicleFrame.f[3]</var>
<var>rig.vehicleFrame.f[2]</var>
<row>
  <cell>-rig.motion.roll.frame_a.f[1]</cell>
  <cell>-rig.motion.roll.frame_a.f[2]</cell>
  <cell>-rig.motion.roll.frame_a.f[3]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>rig.motion.roll.R_rel.T[1,1]</residual>
  </cell><cell row="0" col="1">
    <residual>rig.motion.roll.R_rel.T[3,1]</residual>
  </cell><cell row="0" col="2">
    <residual>rig.motion.roll.R_rel.T[2,1]</residual>
  </cell><cell row="1" col="0">
    <residual>rig.motion.roll.R_rel.T[1,2]</residual>
  </cell><cell row="1" col="1">
    <residual>rig.motion.roll.R_rel.T[3,2]</residual>
  </cell><cell row="1" col="2">
    <residual>rig.motion.roll.R_rel.T[2,2]</residual>
  </cell><cell row="2" col="0">
    <residual>rig.motion.roll.R_rel.T[1,3]</residual>
  </cell><cell row="2" col="1">
    <residual>rig.motion.roll.R_rel.T[3,3]</residual>
  </cell><cell row="2" col="2">
    <residual>rig.motion.roll.R_rel.T[2,3]</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void AlyssaVehicle_eqFunction_2868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2868};
  /* Linear equation system */
  int retValue;
  double aux_x[3] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1297]] /* rig.vehicleFrame.f[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1299]] /* rig.vehicleFrame.f[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1298]] /* rig.vehicleFrame.f[2] variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 2868 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 3, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2868};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 2868 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1297]] /* rig.vehicleFrame.f[1] variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1299]] /* rig.vehicleFrame.f[3] variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1298]] /* rig.vehicleFrame.f[2] variable */) = aux_x[2];

  TRACE_POP
}

/*
equation index: 2869
type: SIMPLE_ASSIGN
rig.motion.roll.w = $START.rig.motion.roll.w
*/
void AlyssaVehicle_eqFunction_2869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2869};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */) = (data->modelData->realVarsData[9] /* rig.motion.roll.w STATE(1,rig.motion.roll.a) */).attribute .start;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7074(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7115(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7073(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7114(DATA *data, threadData_t *threadData);


/*
equation index: 2874
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.subFrameRear.r_0[3] = vehicle.vehicleBody.body.v_0[3] - (1.7 * vehicle.chassisFrame.R.T[2,3] * vehicle.vehicleBody.body.w_a[3] + (-1.7) * vehicle.chassisFrame.R.T[3,3] * vehicle.vehicleBody.body.w_a[2])
*/
void AlyssaVehicle_eqFunction_2874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2874};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[977]] /* der(vehicle.rearSuspension.subFrameRear.r_0[3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5034]] /* vehicle.vehicleBody.body.v_0[3] DUMMY_STATE */) - ((1.7) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */))) + (-1.7) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 2875
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.subFrameRear.r_0[2] = vehicle.vehicleBody.body.v_0[2] - (1.7 * vehicle.chassisFrame.R.T[2,2] * vehicle.vehicleBody.body.w_a[3] + (-1.7) * vehicle.chassisFrame.R.T[3,2] * vehicle.vehicleBody.body.w_a[2])
*/
void AlyssaVehicle_eqFunction_2875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2875};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[976]] /* der(vehicle.rearSuspension.subFrameRear.r_0[2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5033]] /* vehicle.vehicleBody.body.v_0[2] DUMMY_STATE */) - ((1.7) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */))) + (-1.7) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 2876
type: SIMPLE_ASSIGN
$DER.vehicle.rearSuspension.subFrameRear.r_0[1] = vehicle.vehicleBody.body.v_0[1] - (1.7 * vehicle.chassisFrame.R.T[2,1] * vehicle.vehicleBody.body.w_a[3] + (-1.7) * vehicle.chassisFrame.R.T[3,1] * vehicle.vehicleBody.body.w_a[2])
*/
void AlyssaVehicle_eqFunction_2876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2876};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[975]] /* der(vehicle.rearSuspension.subFrameRear.r_0[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5032]] /* vehicle.vehicleBody.body.v_0[1] DUMMY_STATE */) - ((1.7) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */))) + (-1.7) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 2877
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.subFrameFront.r_0[3] = vehicle.vehicleBody.body.v_0[3] - ((-1.9) * vehicle.chassisFrame.R.T[2,3] * vehicle.vehicleBody.body.w_a[3] + 1.9 * vehicle.chassisFrame.R.T[3,3] * vehicle.vehicleBody.body.w_a[2])
*/
void AlyssaVehicle_eqFunction_2877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2877};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* der(vehicle.frontSuspension.subFrameFront.r_0[3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5034]] /* vehicle.vehicleBody.body.v_0[3] DUMMY_STATE */) - ((-1.9) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */))) + (1.9) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 2878
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.subFrameFront.r_0[2] = vehicle.vehicleBody.body.v_0[2] - ((-1.9) * vehicle.chassisFrame.R.T[2,2] * vehicle.vehicleBody.body.w_a[3] + 1.9 * vehicle.chassisFrame.R.T[3,2] * vehicle.vehicleBody.body.w_a[2])
*/
void AlyssaVehicle_eqFunction_2878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2878};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[668]] /* der(vehicle.frontSuspension.subFrameFront.r_0[2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5033]] /* vehicle.vehicleBody.body.v_0[2] DUMMY_STATE */) - ((-1.9) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */))) + (1.9) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 2879
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.subFrameFront.r_0[1] = vehicle.vehicleBody.body.v_0[1] - ((-1.9) * vehicle.chassisFrame.R.T[2,1] * vehicle.vehicleBody.body.w_a[3] + 1.9 * vehicle.chassisFrame.R.T[3,1] * vehicle.vehicleBody.body.w_a[2])
*/
void AlyssaVehicle_eqFunction_2879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2879};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* der(vehicle.frontSuspension.subFrameFront.r_0[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5032]] /* vehicle.vehicleBody.body.v_0[1] DUMMY_STATE */) - ((-1.9) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */))) + (1.9) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7072(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7113(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7225(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7284(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7175(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7353(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7430(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7534(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7224(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7535(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7283(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7536(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7174(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7537(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7540(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7539(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7542(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7538(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7544(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7541(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7543(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7223(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7282(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7173(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7715(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7792(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7896(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7222(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7897(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7281(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7898(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7172(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7899(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7902(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7901(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7904(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7900(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7906(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7903(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7905(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7221(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7280(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7171(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7220(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7279(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7170(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7244(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7303(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7194(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8086(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8092(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8262(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7243(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8263(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7302(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8264(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7193(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8265(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8268(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8267(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8270(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void AlyssaVehicle_functionInitialEquations_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  AlyssaVehicle_eqFunction_2436(data, threadData);
  AlyssaVehicle_eqFunction_2437(data, threadData);
  AlyssaVehicle_eqFunction_2438(data, threadData);
  AlyssaVehicle_eqFunction_2439(data, threadData);
  AlyssaVehicle_eqFunction_2440(data, threadData);
  AlyssaVehicle_eqFunction_2441(data, threadData);
  AlyssaVehicle_eqFunction_2442(data, threadData);
  AlyssaVehicle_eqFunction_2443(data, threadData);
  AlyssaVehicle_eqFunction_2444(data, threadData);
  AlyssaVehicle_eqFunction_2445(data, threadData);
  AlyssaVehicle_eqFunction_2446(data, threadData);
  AlyssaVehicle_eqFunction_2447(data, threadData);
  AlyssaVehicle_eqFunction_2448(data, threadData);
  AlyssaVehicle_eqFunction_2449(data, threadData);
  AlyssaVehicle_eqFunction_2450(data, threadData);
  AlyssaVehicle_eqFunction_2451(data, threadData);
  AlyssaVehicle_eqFunction_2452(data, threadData);
  AlyssaVehicle_eqFunction_2453(data, threadData);
  AlyssaVehicle_eqFunction_2454(data, threadData);
  AlyssaVehicle_eqFunction_2455(data, threadData);
  AlyssaVehicle_eqFunction_2456(data, threadData);
  AlyssaVehicle_eqFunction_2457(data, threadData);
  AlyssaVehicle_eqFunction_2458(data, threadData);
  AlyssaVehicle_eqFunction_2459(data, threadData);
  AlyssaVehicle_eqFunction_2460(data, threadData);
  AlyssaVehicle_eqFunction_2461(data, threadData);
  AlyssaVehicle_eqFunction_2462(data, threadData);
  AlyssaVehicle_eqFunction_2463(data, threadData);
  AlyssaVehicle_eqFunction_2464(data, threadData);
  AlyssaVehicle_eqFunction_6933(data, threadData);
  AlyssaVehicle_eqFunction_6931(data, threadData);
  AlyssaVehicle_eqFunction_2467(data, threadData);
  AlyssaVehicle_eqFunction_6930(data, threadData);
  AlyssaVehicle_eqFunction_2469(data, threadData);
  AlyssaVehicle_eqFunction_2470(data, threadData);
  AlyssaVehicle_eqFunction_2471(data, threadData);
  AlyssaVehicle_eqFunction_6929(data, threadData);
  AlyssaVehicle_eqFunction_6928(data, threadData);
  AlyssaVehicle_eqFunction_6926(data, threadData);
  AlyssaVehicle_eqFunction_6924(data, threadData);
  AlyssaVehicle_eqFunction_2476(data, threadData);
  AlyssaVehicle_eqFunction_2477(data, threadData);
  AlyssaVehicle_eqFunction_7075(data, threadData);
  AlyssaVehicle_eqFunction_2479(data, threadData);
  AlyssaVehicle_eqFunction_2480(data, threadData);
  AlyssaVehicle_eqFunction_7078(data, threadData);
  AlyssaVehicle_eqFunction_2482(data, threadData);
  AlyssaVehicle_eqFunction_7044(data, threadData);
  AlyssaVehicle_eqFunction_2484(data, threadData);
  AlyssaVehicle_eqFunction_7045(data, threadData);
  AlyssaVehicle_eqFunction_2486(data, threadData);
  AlyssaVehicle_eqFunction_7046(data, threadData);
  AlyssaVehicle_eqFunction_2488(data, threadData);
  AlyssaVehicle_eqFunction_7047(data, threadData);
  AlyssaVehicle_eqFunction_2490(data, threadData);
  AlyssaVehicle_eqFunction_2491(data, threadData);
  AlyssaVehicle_eqFunction_2492(data, threadData);
  AlyssaVehicle_eqFunction_2493(data, threadData);
  AlyssaVehicle_eqFunction_2494(data, threadData);
  AlyssaVehicle_eqFunction_2495(data, threadData);
  AlyssaVehicle_eqFunction_2496(data, threadData);
  AlyssaVehicle_eqFunction_2497(data, threadData);
  AlyssaVehicle_eqFunction_2498(data, threadData);
  AlyssaVehicle_eqFunction_2499(data, threadData);
  AlyssaVehicle_eqFunction_2500(data, threadData);
  AlyssaVehicle_eqFunction_7053(data, threadData);
  AlyssaVehicle_eqFunction_7052(data, threadData);
  AlyssaVehicle_eqFunction_7051(data, threadData);
  AlyssaVehicle_eqFunction_2504(data, threadData);
  AlyssaVehicle_eqFunction_2505(data, threadData);
  AlyssaVehicle_eqFunction_2506(data, threadData);
  AlyssaVehicle_eqFunction_2507(data, threadData);
  AlyssaVehicle_eqFunction_2508(data, threadData);
  AlyssaVehicle_eqFunction_2509(data, threadData);
  AlyssaVehicle_eqFunction_2510(data, threadData);
  AlyssaVehicle_eqFunction_2511(data, threadData);
  AlyssaVehicle_eqFunction_2512(data, threadData);
  AlyssaVehicle_eqFunction_7020(data, threadData);
  AlyssaVehicle_eqFunction_2514(data, threadData);
  AlyssaVehicle_eqFunction_2515(data, threadData);
  AlyssaVehicle_eqFunction_2516(data, threadData);
  AlyssaVehicle_eqFunction_2517(data, threadData);
  AlyssaVehicle_eqFunction_2518(data, threadData);
  AlyssaVehicle_eqFunction_2519(data, threadData);
  AlyssaVehicle_eqFunction_2520(data, threadData);
  AlyssaVehicle_eqFunction_2521(data, threadData);
  AlyssaVehicle_eqFunction_2522(data, threadData);
  AlyssaVehicle_eqFunction_2523(data, threadData);
  AlyssaVehicle_eqFunction_2524(data, threadData);
  AlyssaVehicle_eqFunction_7056(data, threadData);
  AlyssaVehicle_eqFunction_7055(data, threadData);
  AlyssaVehicle_eqFunction_7054(data, threadData);
  AlyssaVehicle_eqFunction_2528(data, threadData);
  AlyssaVehicle_eqFunction_2529(data, threadData);
  AlyssaVehicle_eqFunction_2530(data, threadData);
  AlyssaVehicle_eqFunction_2531(data, threadData);
  AlyssaVehicle_eqFunction_2532(data, threadData);
  AlyssaVehicle_eqFunction_2533(data, threadData);
  AlyssaVehicle_eqFunction_2534(data, threadData);
  AlyssaVehicle_eqFunction_2535(data, threadData);
  AlyssaVehicle_eqFunction_2536(data, threadData);
  AlyssaVehicle_eqFunction_7021(data, threadData);
  AlyssaVehicle_eqFunction_2538(data, threadData);
  AlyssaVehicle_eqFunction_2539(data, threadData);
  AlyssaVehicle_eqFunction_2540(data, threadData);
  AlyssaVehicle_eqFunction_2541(data, threadData);
  AlyssaVehicle_eqFunction_2542(data, threadData);
  AlyssaVehicle_eqFunction_2543(data, threadData);
  AlyssaVehicle_eqFunction_2544(data, threadData);
  AlyssaVehicle_eqFunction_2545(data, threadData);
  AlyssaVehicle_eqFunction_2546(data, threadData);
  AlyssaVehicle_eqFunction_2547(data, threadData);
  AlyssaVehicle_eqFunction_2548(data, threadData);
  AlyssaVehicle_eqFunction_7059(data, threadData);
  AlyssaVehicle_eqFunction_7058(data, threadData);
  AlyssaVehicle_eqFunction_7057(data, threadData);
  AlyssaVehicle_eqFunction_2552(data, threadData);
  AlyssaVehicle_eqFunction_2553(data, threadData);
  AlyssaVehicle_eqFunction_2554(data, threadData);
  AlyssaVehicle_eqFunction_2555(data, threadData);
  AlyssaVehicle_eqFunction_2556(data, threadData);
  AlyssaVehicle_eqFunction_2557(data, threadData);
  AlyssaVehicle_eqFunction_2558(data, threadData);
  AlyssaVehicle_eqFunction_2559(data, threadData);
  AlyssaVehicle_eqFunction_2560(data, threadData);
  AlyssaVehicle_eqFunction_7022(data, threadData);
  AlyssaVehicle_eqFunction_2562(data, threadData);
  AlyssaVehicle_eqFunction_2563(data, threadData);
  AlyssaVehicle_eqFunction_2564(data, threadData);
  AlyssaVehicle_eqFunction_2565(data, threadData);
  AlyssaVehicle_eqFunction_2566(data, threadData);
  AlyssaVehicle_eqFunction_2567(data, threadData);
  AlyssaVehicle_eqFunction_2568(data, threadData);
  AlyssaVehicle_eqFunction_2569(data, threadData);
  AlyssaVehicle_eqFunction_2570(data, threadData);
  AlyssaVehicle_eqFunction_2571(data, threadData);
  AlyssaVehicle_eqFunction_2572(data, threadData);
  AlyssaVehicle_eqFunction_7062(data, threadData);
  AlyssaVehicle_eqFunction_7061(data, threadData);
  AlyssaVehicle_eqFunction_7060(data, threadData);
  AlyssaVehicle_eqFunction_2576(data, threadData);
  AlyssaVehicle_eqFunction_2577(data, threadData);
  AlyssaVehicle_eqFunction_2578(data, threadData);
  AlyssaVehicle_eqFunction_2579(data, threadData);
  AlyssaVehicle_eqFunction_2580(data, threadData);
  AlyssaVehicle_eqFunction_2581(data, threadData);
  AlyssaVehicle_eqFunction_2582(data, threadData);
  AlyssaVehicle_eqFunction_2583(data, threadData);
  AlyssaVehicle_eqFunction_2584(data, threadData);
  AlyssaVehicle_eqFunction_7023(data, threadData);
  AlyssaVehicle_eqFunction_2586(data, threadData);
  AlyssaVehicle_eqFunction_6953(data, threadData);
  AlyssaVehicle_eqFunction_2588(data, threadData);
  AlyssaVehicle_eqFunction_2589(data, threadData);
  AlyssaVehicle_eqFunction_7040(data, threadData);
  AlyssaVehicle_eqFunction_2591(data, threadData);
  AlyssaVehicle_eqFunction_6950(data, threadData);
  AlyssaVehicle_eqFunction_2593(data, threadData);
  AlyssaVehicle_eqFunction_2594(data, threadData);
  AlyssaVehicle_eqFunction_2595(data, threadData);
  AlyssaVehicle_eqFunction_7024(data, threadData);
  AlyssaVehicle_eqFunction_2597(data, threadData);
  AlyssaVehicle_eqFunction_2598(data, threadData);
  AlyssaVehicle_eqFunction_2599(data, threadData);
  AlyssaVehicle_eqFunction_7041(data, threadData);
  AlyssaVehicle_eqFunction_2601(data, threadData);
  AlyssaVehicle_eqFunction_2602(data, threadData);
  AlyssaVehicle_eqFunction_2603(data, threadData);
  AlyssaVehicle_eqFunction_2604(data, threadData);
  AlyssaVehicle_eqFunction_7025(data, threadData);
  AlyssaVehicle_eqFunction_2606(data, threadData);
  AlyssaVehicle_eqFunction_2607(data, threadData);
  AlyssaVehicle_eqFunction_7042(data, threadData);
  AlyssaVehicle_eqFunction_2609(data, threadData);
  AlyssaVehicle_eqFunction_2610(data, threadData);
  AlyssaVehicle_eqFunction_2611(data, threadData);
  AlyssaVehicle_eqFunction_7026(data, threadData);
  AlyssaVehicle_eqFunction_2613(data, threadData);
  AlyssaVehicle_eqFunction_2614(data, threadData);
  AlyssaVehicle_eqFunction_2615(data, threadData);
  AlyssaVehicle_eqFunction_2616(data, threadData);
  AlyssaVehicle_eqFunction_2617(data, threadData);
  AlyssaVehicle_eqFunction_2618(data, threadData);
  AlyssaVehicle_eqFunction_2619(data, threadData);
  AlyssaVehicle_eqFunction_2620(data, threadData);
  AlyssaVehicle_eqFunction_2621(data, threadData);
  AlyssaVehicle_eqFunction_2622(data, threadData);
  AlyssaVehicle_eqFunction_2623(data, threadData);
  AlyssaVehicle_eqFunction_2624(data, threadData);
  AlyssaVehicle_eqFunction_2625(data, threadData);
  AlyssaVehicle_eqFunction_2626(data, threadData);
  AlyssaVehicle_eqFunction_2627(data, threadData);
  AlyssaVehicle_eqFunction_2628(data, threadData);
  AlyssaVehicle_eqFunction_2629(data, threadData);
  AlyssaVehicle_eqFunction_2630(data, threadData);
  AlyssaVehicle_eqFunction_2631(data, threadData);
  AlyssaVehicle_eqFunction_2632(data, threadData);
  AlyssaVehicle_eqFunction_2633(data, threadData);
  AlyssaVehicle_eqFunction_2634(data, threadData);
  AlyssaVehicle_eqFunction_2635(data, threadData);
  AlyssaVehicle_eqFunction_2636(data, threadData);
  AlyssaVehicle_eqFunction_2637(data, threadData);
  AlyssaVehicle_eqFunction_2638(data, threadData);
  AlyssaVehicle_eqFunction_2639(data, threadData);
  AlyssaVehicle_eqFunction_7027(data, threadData);
  AlyssaVehicle_eqFunction_2641(data, threadData);
  AlyssaVehicle_eqFunction_2642(data, threadData);
  AlyssaVehicle_eqFunction_2643(data, threadData);
  AlyssaVehicle_eqFunction_2644(data, threadData);
  AlyssaVehicle_eqFunction_7205(data, threadData);
  AlyssaVehicle_eqFunction_7255(data, threadData);
  AlyssaVehicle_eqFunction_7155(data, threadData);
  AlyssaVehicle_eqFunction_2648(data, threadData);
  AlyssaVehicle_eqFunction_2649(data, threadData);
  AlyssaVehicle_eqFunction_2650(data, threadData);
  AlyssaVehicle_eqFunction_7204(data, threadData);
  AlyssaVehicle_eqFunction_7254(data, threadData);
  AlyssaVehicle_eqFunction_7154(data, threadData);
  AlyssaVehicle_eqFunction_2654(data, threadData);
  AlyssaVehicle_eqFunction_2655(data, threadData);
  AlyssaVehicle_eqFunction_2656(data, threadData);
  AlyssaVehicle_eqFunction_7203(data, threadData);
  AlyssaVehicle_eqFunction_7253(data, threadData);
  AlyssaVehicle_eqFunction_7153(data, threadData);
  AlyssaVehicle_eqFunction_2660(data, threadData);
  AlyssaVehicle_eqFunction_2661(data, threadData);
  AlyssaVehicle_eqFunction_7071(data, threadData);
  AlyssaVehicle_eqFunction_7106(data, threadData);
  AlyssaVehicle_eqFunction_7070(data, threadData);
  AlyssaVehicle_eqFunction_7109(data, threadData);
  AlyssaVehicle_eqFunction_7069(data, threadData);
  AlyssaVehicle_eqFunction_7112(data, threadData);
  AlyssaVehicle_eqFunction_2668(data, threadData);
  AlyssaVehicle_eqFunction_2669(data, threadData);
  AlyssaVehicle_eqFunction_2670(data, threadData);
  AlyssaVehicle_eqFunction_7325(data, threadData);
  AlyssaVehicle_eqFunction_7332(data, threadData);
  AlyssaVehicle_eqFunction_7339(data, threadData);
  AlyssaVehicle_eqFunction_2674(data, threadData);
  AlyssaVehicle_eqFunction_2675(data, threadData);
  AlyssaVehicle_eqFunction_2676(data, threadData);
  AlyssaVehicle_eqFunction_7324(data, threadData);
  AlyssaVehicle_eqFunction_7331(data, threadData);
  AlyssaVehicle_eqFunction_7338(data, threadData);
  AlyssaVehicle_eqFunction_2680(data, threadData);
  AlyssaVehicle_eqFunction_2681(data, threadData);
  AlyssaVehicle_eqFunction_2682(data, threadData);
  AlyssaVehicle_eqFunction_7323(data, threadData);
  AlyssaVehicle_eqFunction_7330(data, threadData);
  AlyssaVehicle_eqFunction_7337(data, threadData);
  AlyssaVehicle_eqFunction_7028(data, threadData);
  AlyssaVehicle_eqFunction_2687(data, threadData);
  AlyssaVehicle_eqFunction_2688(data, threadData);
  AlyssaVehicle_eqFunction_2689(data, threadData);
  AlyssaVehicle_eqFunction_2690(data, threadData);
  AlyssaVehicle_eqFunction_7210(data, threadData);
  AlyssaVehicle_eqFunction_7269(data, threadData);
  AlyssaVehicle_eqFunction_7160(data, threadData);
  AlyssaVehicle_eqFunction_2694(data, threadData);
  AlyssaVehicle_eqFunction_2695(data, threadData);
  AlyssaVehicle_eqFunction_2696(data, threadData);
  AlyssaVehicle_eqFunction_2697(data, threadData);
  AlyssaVehicle_eqFunction_2698(data, threadData);
  AlyssaVehicle_eqFunction_7209(data, threadData);
  AlyssaVehicle_eqFunction_7266(data, threadData);
  AlyssaVehicle_eqFunction_7159(data, threadData);
  AlyssaVehicle_eqFunction_2702(data, threadData);
  AlyssaVehicle_eqFunction_2703(data, threadData);
  AlyssaVehicle_eqFunction_2704(data, threadData);
  AlyssaVehicle_eqFunction_2705(data, threadData);
  AlyssaVehicle_eqFunction_2706(data, threadData);
  AlyssaVehicle_eqFunction_7206(data, threadData);
  AlyssaVehicle_eqFunction_7352(data, threadData);
  AlyssaVehicle_eqFunction_7360(data, threadData);
  AlyssaVehicle_eqFunction_7435(data, threadData);
  AlyssaVehicle_eqFunction_7714(data, threadData);
  AlyssaVehicle_eqFunction_7722(data, threadData);
  AlyssaVehicle_eqFunction_7797(data, threadData);
  AlyssaVehicle_eqFunction_8085(data, threadData);
  AlyssaVehicle_eqFunction_8091(data, threadData);
  AlyssaVehicle_eqFunction_8099(data, threadData);
  AlyssaVehicle_eqFunction_8458(data, threadData);
  AlyssaVehicle_eqFunction_8464(data, threadData);
  AlyssaVehicle_eqFunction_8472(data, threadData);
  AlyssaVehicle_eqFunction_2720(data, threadData);
  AlyssaVehicle_eqFunction_7218(data, threadData);
  AlyssaVehicle_eqFunction_7217(data, threadData);
  AlyssaVehicle_eqFunction_7216(data, threadData);
  AlyssaVehicle_eqFunction_7361(data, threadData);
  AlyssaVehicle_eqFunction_7215(data, threadData);
  AlyssaVehicle_eqFunction_7214(data, threadData);
  AlyssaVehicle_eqFunction_7213(data, threadData);
  AlyssaVehicle_eqFunction_7723(data, threadData);
  AlyssaVehicle_eqFunction_7212(data, threadData);
  AlyssaVehicle_eqFunction_7211(data, threadData);
  AlyssaVehicle_eqFunction_2731(data, threadData);
  AlyssaVehicle_eqFunction_7235(data, threadData);
  AlyssaVehicle_eqFunction_7234(data, threadData);
  AlyssaVehicle_eqFunction_7233(data, threadData);
  AlyssaVehicle_eqFunction_8100(data, threadData);
  AlyssaVehicle_eqFunction_7232(data, threadData);
  AlyssaVehicle_eqFunction_7231(data, threadData);
  AlyssaVehicle_eqFunction_7230(data, threadData);
  AlyssaVehicle_eqFunction_8473(data, threadData);
  AlyssaVehicle_eqFunction_7226(data, threadData);
  AlyssaVehicle_eqFunction_7256(data, threadData);
  AlyssaVehicle_eqFunction_7351(data, threadData);
  AlyssaVehicle_eqFunction_7358(data, threadData);
  AlyssaVehicle_eqFunction_7434(data, threadData);
  AlyssaVehicle_eqFunction_7713(data, threadData);
  AlyssaVehicle_eqFunction_7720(data, threadData);
  AlyssaVehicle_eqFunction_7796(data, threadData);
  AlyssaVehicle_eqFunction_8084(data, threadData);
  AlyssaVehicle_eqFunction_8090(data, threadData);
  AlyssaVehicle_eqFunction_8097(data, threadData);
  AlyssaVehicle_eqFunction_8457(data, threadData);
  AlyssaVehicle_eqFunction_8463(data, threadData);
  AlyssaVehicle_eqFunction_8470(data, threadData);
  AlyssaVehicle_eqFunction_2754(data, threadData);
  AlyssaVehicle_eqFunction_7277(data, threadData);
  AlyssaVehicle_eqFunction_7276(data, threadData);
  AlyssaVehicle_eqFunction_7275(data, threadData);
  AlyssaVehicle_eqFunction_7359(data, threadData);
  AlyssaVehicle_eqFunction_7274(data, threadData);
  AlyssaVehicle_eqFunction_7273(data, threadData);
  AlyssaVehicle_eqFunction_7272(data, threadData);
  AlyssaVehicle_eqFunction_7721(data, threadData);
  AlyssaVehicle_eqFunction_7271(data, threadData);
  AlyssaVehicle_eqFunction_7270(data, threadData);
  AlyssaVehicle_eqFunction_2765(data, threadData);
  AlyssaVehicle_eqFunction_7294(data, threadData);
  AlyssaVehicle_eqFunction_7293(data, threadData);
  AlyssaVehicle_eqFunction_7292(data, threadData);
  AlyssaVehicle_eqFunction_8098(data, threadData);
  AlyssaVehicle_eqFunction_7291(data, threadData);
  AlyssaVehicle_eqFunction_7290(data, threadData);
  AlyssaVehicle_eqFunction_7289(data, threadData);
  AlyssaVehicle_eqFunction_8471(data, threadData);
  AlyssaVehicle_eqFunction_7285(data, threadData);
  AlyssaVehicle_eqFunction_7156(data, threadData);
  AlyssaVehicle_eqFunction_7350(data, threadData);
  AlyssaVehicle_eqFunction_7356(data, threadData);
  AlyssaVehicle_eqFunction_7433(data, threadData);
  AlyssaVehicle_eqFunction_7712(data, threadData);
  AlyssaVehicle_eqFunction_7718(data, threadData);
  AlyssaVehicle_eqFunction_7795(data, threadData);
  AlyssaVehicle_eqFunction_8083(data, threadData);
  AlyssaVehicle_eqFunction_8089(data, threadData);
  AlyssaVehicle_eqFunction_8095(data, threadData);
  AlyssaVehicle_eqFunction_8456(data, threadData);
  AlyssaVehicle_eqFunction_8462(data, threadData);
  AlyssaVehicle_eqFunction_8468(data, threadData);
  AlyssaVehicle_eqFunction_2788(data, threadData);
  AlyssaVehicle_eqFunction_7168(data, threadData);
  AlyssaVehicle_eqFunction_7167(data, threadData);
  AlyssaVehicle_eqFunction_7166(data, threadData);
  AlyssaVehicle_eqFunction_7357(data, threadData);
  AlyssaVehicle_eqFunction_7364(data, threadData);
  AlyssaVehicle_eqFunction_7363(data, threadData);
  AlyssaVehicle_eqFunction_7366(data, threadData);
  AlyssaVehicle_eqFunction_7362(data, threadData);
  AlyssaVehicle_eqFunction_7365(data, threadData);
  AlyssaVehicle_eqFunction_7367(data, threadData);
  AlyssaVehicle_eqFunction_7165(data, threadData);
  AlyssaVehicle_eqFunction_7164(data, threadData);
  AlyssaVehicle_eqFunction_7163(data, threadData);
  AlyssaVehicle_eqFunction_7719(data, threadData);
  AlyssaVehicle_eqFunction_7726(data, threadData);
  AlyssaVehicle_eqFunction_7725(data, threadData);
  AlyssaVehicle_eqFunction_7728(data, threadData);
  AlyssaVehicle_eqFunction_7724(data, threadData);
  AlyssaVehicle_eqFunction_7727(data, threadData);
  AlyssaVehicle_eqFunction_7729(data, threadData);
  AlyssaVehicle_eqFunction_7162(data, threadData);
  AlyssaVehicle_eqFunction_7161(data, threadData);
  AlyssaVehicle_eqFunction_2811(data, threadData);
  AlyssaVehicle_eqFunction_7185(data, threadData);
  AlyssaVehicle_eqFunction_7184(data, threadData);
  AlyssaVehicle_eqFunction_7183(data, threadData);
  AlyssaVehicle_eqFunction_8096(data, threadData);
  AlyssaVehicle_eqFunction_8103(data, threadData);
  AlyssaVehicle_eqFunction_8102(data, threadData);
  AlyssaVehicle_eqFunction_8105(data, threadData);
  AlyssaVehicle_eqFunction_8101(data, threadData);
  AlyssaVehicle_eqFunction_8104(data, threadData);
  AlyssaVehicle_eqFunction_8106(data, threadData);
  AlyssaVehicle_eqFunction_7182(data, threadData);
  AlyssaVehicle_eqFunction_7181(data, threadData);
  AlyssaVehicle_eqFunction_7180(data, threadData);
  AlyssaVehicle_eqFunction_8469(data, threadData);
  AlyssaVehicle_eqFunction_8476(data, threadData);
  AlyssaVehicle_eqFunction_8475(data, threadData);
  AlyssaVehicle_eqFunction_8478(data, threadData);
  AlyssaVehicle_eqFunction_8474(data, threadData);
  AlyssaVehicle_eqFunction_8477(data, threadData);
  AlyssaVehicle_eqFunction_8479(data, threadData);
  AlyssaVehicle_eqFunction_7176(data, threadData);
  AlyssaVehicle_eqFunction_2833(data, threadData);
  AlyssaVehicle_eqFunction_2834(data, threadData);
  AlyssaVehicle_eqFunction_7263(data, threadData);
  AlyssaVehicle_eqFunction_7262(data, threadData);
  AlyssaVehicle_eqFunction_7264(data, threadData);
  AlyssaVehicle_eqFunction_7261(data, threadData);
  AlyssaVehicle_eqFunction_7265(data, threadData);
  AlyssaVehicle_eqFunction_2858(data, threadData);
  AlyssaVehicle_eqFunction_7249(data, threadData);
  AlyssaVehicle_eqFunction_7250(data, threadData);
  AlyssaVehicle_eqFunction_7251(data, threadData);
  AlyssaVehicle_eqFunction_7310(data, threadData);
  AlyssaVehicle_eqFunction_7311(data, threadData);
  AlyssaVehicle_eqFunction_7312(data, threadData);
  AlyssaVehicle_eqFunction_7199(data, threadData);
  AlyssaVehicle_eqFunction_7200(data, threadData);
  AlyssaVehicle_eqFunction_7201(data, threadData);
  AlyssaVehicle_eqFunction_2868(data, threadData);
  AlyssaVehicle_eqFunction_2869(data, threadData);
  AlyssaVehicle_eqFunction_7074(data, threadData);
  AlyssaVehicle_eqFunction_7115(data, threadData);
  AlyssaVehicle_eqFunction_7073(data, threadData);
  AlyssaVehicle_eqFunction_7114(data, threadData);
  AlyssaVehicle_eqFunction_2874(data, threadData);
  AlyssaVehicle_eqFunction_2875(data, threadData);
  AlyssaVehicle_eqFunction_2876(data, threadData);
  AlyssaVehicle_eqFunction_2877(data, threadData);
  AlyssaVehicle_eqFunction_2878(data, threadData);
  AlyssaVehicle_eqFunction_2879(data, threadData);
  AlyssaVehicle_eqFunction_7072(data, threadData);
  AlyssaVehicle_eqFunction_7113(data, threadData);
  AlyssaVehicle_eqFunction_7225(data, threadData);
  AlyssaVehicle_eqFunction_7284(data, threadData);
  AlyssaVehicle_eqFunction_7175(data, threadData);
  AlyssaVehicle_eqFunction_7353(data, threadData);
  AlyssaVehicle_eqFunction_7430(data, threadData);
  AlyssaVehicle_eqFunction_7534(data, threadData);
  AlyssaVehicle_eqFunction_7224(data, threadData);
  AlyssaVehicle_eqFunction_7535(data, threadData);
  AlyssaVehicle_eqFunction_7283(data, threadData);
  AlyssaVehicle_eqFunction_7536(data, threadData);
  AlyssaVehicle_eqFunction_7174(data, threadData);
  AlyssaVehicle_eqFunction_7537(data, threadData);
  AlyssaVehicle_eqFunction_7540(data, threadData);
  AlyssaVehicle_eqFunction_7539(data, threadData);
  AlyssaVehicle_eqFunction_7542(data, threadData);
  AlyssaVehicle_eqFunction_7538(data, threadData);
  AlyssaVehicle_eqFunction_7544(data, threadData);
  AlyssaVehicle_eqFunction_7541(data, threadData);
  AlyssaVehicle_eqFunction_7543(data, threadData);
  AlyssaVehicle_eqFunction_7223(data, threadData);
  AlyssaVehicle_eqFunction_7282(data, threadData);
  AlyssaVehicle_eqFunction_7173(data, threadData);
  AlyssaVehicle_eqFunction_7715(data, threadData);
  AlyssaVehicle_eqFunction_7792(data, threadData);
  AlyssaVehicle_eqFunction_7896(data, threadData);
  AlyssaVehicle_eqFunction_7222(data, threadData);
  AlyssaVehicle_eqFunction_7897(data, threadData);
  AlyssaVehicle_eqFunction_7281(data, threadData);
  AlyssaVehicle_eqFunction_7898(data, threadData);
  AlyssaVehicle_eqFunction_7172(data, threadData);
  AlyssaVehicle_eqFunction_7899(data, threadData);
  AlyssaVehicle_eqFunction_7902(data, threadData);
  AlyssaVehicle_eqFunction_7901(data, threadData);
  AlyssaVehicle_eqFunction_7904(data, threadData);
  AlyssaVehicle_eqFunction_7900(data, threadData);
  AlyssaVehicle_eqFunction_7906(data, threadData);
  AlyssaVehicle_eqFunction_7903(data, threadData);
  AlyssaVehicle_eqFunction_7905(data, threadData);
  AlyssaVehicle_eqFunction_7221(data, threadData);
  AlyssaVehicle_eqFunction_7280(data, threadData);
  AlyssaVehicle_eqFunction_7171(data, threadData);
  AlyssaVehicle_eqFunction_7220(data, threadData);
  AlyssaVehicle_eqFunction_7279(data, threadData);
  AlyssaVehicle_eqFunction_7170(data, threadData);
  AlyssaVehicle_eqFunction_7244(data, threadData);
  AlyssaVehicle_eqFunction_7303(data, threadData);
  AlyssaVehicle_eqFunction_7194(data, threadData);
  AlyssaVehicle_eqFunction_8086(data, threadData);
  AlyssaVehicle_eqFunction_8092(data, threadData);
  AlyssaVehicle_eqFunction_8262(data, threadData);
  AlyssaVehicle_eqFunction_7243(data, threadData);
  AlyssaVehicle_eqFunction_8263(data, threadData);
  AlyssaVehicle_eqFunction_7302(data, threadData);
  AlyssaVehicle_eqFunction_8264(data, threadData);
  AlyssaVehicle_eqFunction_7193(data, threadData);
  AlyssaVehicle_eqFunction_8265(data, threadData);
  AlyssaVehicle_eqFunction_8268(data, threadData);
  AlyssaVehicle_eqFunction_8267(data, threadData);
  AlyssaVehicle_eqFunction_8270(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif
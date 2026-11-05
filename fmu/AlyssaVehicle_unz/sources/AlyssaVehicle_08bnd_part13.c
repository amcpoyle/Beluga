#include "AlyssaVehicle_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 11576
type: SIMPLE_ASSIGN
vehicle.wheelRL.slipForces.mu = mu.k
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11576};
  (data->simulationInfo->realParameter[3768] /* vehicle.wheelRL.slipForces.mu PARAM */) = (data->simulationInfo->realParameter[0] /* mu.k PARAM */);
  TRACE_POP
}

/*
equation index: 11577
type: SIMPLE_ASSIGN
vehicle.wheelRL.mu = mu.k
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11577};
  (data->simulationInfo->realParameter[3701] /* vehicle.wheelRL.mu PARAM */) = (data->simulationInfo->realParameter[0] /* mu.k PARAM */);
  TRACE_POP
}

/*
equation index: 11578
type: SIMPLE_ASSIGN
vehicle.wheelFL.slipForces.mu = mu.k
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11578};
  (data->simulationInfo->realParameter[3622] /* vehicle.wheelFL.slipForces.mu PARAM */) = (data->simulationInfo->realParameter[0] /* mu.k PARAM */);
  TRACE_POP
}

/*
equation index: 11579
type: SIMPLE_ASSIGN
vehicle.wheelFL.mu = mu.k
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11579};
  (data->simulationInfo->realParameter[3555] /* vehicle.wheelFL.mu PARAM */) = (data->simulationInfo->realParameter[0] /* mu.k PARAM */);
  TRACE_POP
}

/*
equation index: 11580
type: SIMPLE_ASSIGN
vehicle.wheelRR.slipForces.mu = mu.k
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11580};
  (data->simulationInfo->realParameter[3841] /* vehicle.wheelRR.slipForces.mu PARAM */) = (data->simulationInfo->realParameter[0] /* mu.k PARAM */);
  TRACE_POP
}

/*
equation index: 11581
type: SIMPLE_ASSIGN
vehicle.wheelRR.mu = mu.k
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11581};
  (data->simulationInfo->realParameter[3774] /* vehicle.wheelRR.mu PARAM */) = (data->simulationInfo->realParameter[0] /* mu.k PARAM */);
  TRACE_POP
}

/*
equation index: 11582
type: SIMPLE_ASSIGN
vehicle.wheelFR.slipForces.mu = mu.k
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11582};
  (data->simulationInfo->realParameter[3695] /* vehicle.wheelFR.slipForces.mu PARAM */) = (data->simulationInfo->realParameter[0] /* mu.k PARAM */);
  TRACE_POP
}

/*
equation index: 11583
type: SIMPLE_ASSIGN
vehicle.wheelFR.mu = mu.k
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11583};
  (data->simulationInfo->realParameter[3628] /* vehicle.wheelFR.mu PARAM */) = (data->simulationInfo->realParameter[0] /* mu.k PARAM */);
  TRACE_POP
}

/*
equation index: 11584
type: SIMPLE_ASSIGN
vehicle.mu = mu.k
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11584};
  (data->simulationInfo->realParameter[1917] /* vehicle.mu PARAM */) = (data->simulationInfo->realParameter[0] /* mu.k PARAM */);
  TRACE_POP
}

/*
equation index: 11585
type: SIMPLE_ASSIGN
mu.y = mu.k
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11585};
  (data->simulationInfo->realParameter[1] /* mu.y PARAM */) = (data->simulationInfo->realParameter[0] /* mu.k PARAM */);
  TRACE_POP
}

/*
equation index: 11586
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.torque.phi_support = vehicle.wheelFR.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11586};
  (data->simulationInfo->realParameter[3679] /* vehicle.wheelFR.rim.torque.phi_support PARAM */) = (data->simulationInfo->realParameter[3640] /* vehicle.wheelFR.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11587
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.torque.support.phi = vehicle.wheelFR.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11587};
  (data->simulationInfo->realParameter[3680] /* vehicle.wheelFR.rim.torque.support.phi PARAM */) = (data->simulationInfo->realParameter[3640] /* vehicle.wheelFR.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11588
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.damper.flange_b.phi = vehicle.wheelFR.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11588};
  (data->simulationInfo->realParameter[3634] /* vehicle.wheelFR.rim.damper.flange_b.phi PARAM */) = (data->simulationInfo->realParameter[3640] /* vehicle.wheelFR.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11589
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.mounting1D.flange_b.phi = vehicle.wheelFR.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11589};
  (data->simulationInfo->realParameter[3636] /* vehicle.wheelFR.rim.mounting1D.flange_b.phi PARAM */) = (data->simulationInfo->realParameter[3640] /* vehicle.wheelFR.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11590
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.torque.phi_support = vehicle.wheelFL.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11590};
  (data->simulationInfo->realParameter[3606] /* vehicle.wheelFL.rim.torque.phi_support PARAM */) = (data->simulationInfo->realParameter[3567] /* vehicle.wheelFL.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11591
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.torque.support.phi = vehicle.wheelFL.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11591};
  (data->simulationInfo->realParameter[3607] /* vehicle.wheelFL.rim.torque.support.phi PARAM */) = (data->simulationInfo->realParameter[3567] /* vehicle.wheelFL.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11592
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.damper.flange_b.phi = vehicle.wheelFL.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11592};
  (data->simulationInfo->realParameter[3561] /* vehicle.wheelFL.rim.damper.flange_b.phi PARAM */) = (data->simulationInfo->realParameter[3567] /* vehicle.wheelFL.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11593
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.mounting1D.flange_b.phi = vehicle.wheelFL.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11593};
  (data->simulationInfo->realParameter[3563] /* vehicle.wheelFL.rim.mounting1D.flange_b.phi PARAM */) = (data->simulationInfo->realParameter[3567] /* vehicle.wheelFL.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11594
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.torque.phi_support = vehicle.wheelRR.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11594};
  (data->simulationInfo->realParameter[3825] /* vehicle.wheelRR.rim.torque.phi_support PARAM */) = (data->simulationInfo->realParameter[3786] /* vehicle.wheelRR.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11595
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.torque.support.phi = vehicle.wheelRR.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11595};
  (data->simulationInfo->realParameter[3826] /* vehicle.wheelRR.rim.torque.support.phi PARAM */) = (data->simulationInfo->realParameter[3786] /* vehicle.wheelRR.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11596
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.damper.flange_b.phi = vehicle.wheelRR.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11596};
  (data->simulationInfo->realParameter[3780] /* vehicle.wheelRR.rim.damper.flange_b.phi PARAM */) = (data->simulationInfo->realParameter[3786] /* vehicle.wheelRR.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11597
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.mounting1D.flange_b.phi = vehicle.wheelRR.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11597};
  (data->simulationInfo->realParameter[3782] /* vehicle.wheelRR.rim.mounting1D.flange_b.phi PARAM */) = (data->simulationInfo->realParameter[3786] /* vehicle.wheelRR.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11598
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.torque.phi_support = vehicle.wheelRL.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11598};
  (data->simulationInfo->realParameter[3752] /* vehicle.wheelRL.rim.torque.phi_support PARAM */) = (data->simulationInfo->realParameter[3713] /* vehicle.wheelRL.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11599
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.torque.support.phi = vehicle.wheelRL.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11599};
  (data->simulationInfo->realParameter[3753] /* vehicle.wheelRL.rim.torque.support.phi PARAM */) = (data->simulationInfo->realParameter[3713] /* vehicle.wheelRL.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11600
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.damper.flange_b.phi = vehicle.wheelRL.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11600};
  (data->simulationInfo->realParameter[3707] /* vehicle.wheelRL.rim.damper.flange_b.phi PARAM */) = (data->simulationInfo->realParameter[3713] /* vehicle.wheelRL.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11601
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.mounting1D.flange_b.phi = vehicle.wheelRL.rim.mounting1D.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11601};
  (data->simulationInfo->realParameter[3709] /* vehicle.wheelRL.rim.mounting1D.flange_b.phi PARAM */) = (data->simulationInfo->realParameter[3713] /* vehicle.wheelRL.rim.mounting1D.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 11603
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.pos.s_support = vehicle.frontSuspension.steering.rack.fixed.s0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11603};
  (data->simulationInfo->realParameter[1842] /* vehicle.frontSuspension.steering.pos.s_support PARAM */) = (data->simulationInfo->realParameter[1857] /* vehicle.frontSuspension.steering.rack.fixed.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 11604
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.pos.support.s = vehicle.frontSuspension.steering.rack.fixed.s0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11604};
  (data->simulationInfo->realParameter[1843] /* vehicle.frontSuspension.steering.pos.support.s PARAM */) = (data->simulationInfo->realParameter[1857] /* vehicle.frontSuspension.steering.rack.fixed.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 11605
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.support.s = vehicle.frontSuspension.steering.rack.fixed.s0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11605};
  (data->simulationInfo->realParameter[1862] /* vehicle.frontSuspension.steering.rack.support.s PARAM */) = (data->simulationInfo->realParameter[1857] /* vehicle.frontSuspension.steering.rack.fixed.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 11606
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.fixed.flange.s = vehicle.frontSuspension.steering.rack.fixed.s0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11606};
  (data->simulationInfo->realParameter[1856] /* vehicle.frontSuspension.steering.rack.fixed.flange.s PARAM */) = (data->simulationInfo->realParameter[1857] /* vehicle.frontSuspension.steering.rack.fixed.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 11608
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.tau = vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11608};
  (data->simulationInfo->realParameter[1591] /* vehicle.frontSuspension.cornerR.ucaPivot.tau PARAM */) = (data->simulationInfo->realParameter[1570] /* vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11609
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.internalAxis.tau = vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11609};
  (data->simulationInfo->realParameter[1586] /* vehicle.frontSuspension.cornerR.ucaPivot.internalAxis.tau PARAM */) = (data->simulationInfo->realParameter[1570] /* vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11610
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.internalAxis.flange.tau = vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11610};
  (data->simulationInfo->realParameter[1585] /* vehicle.frontSuspension.cornerR.ucaPivot.internalAxis.flange.tau PARAM */) = (data->simulationInfo->realParameter[1570] /* vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11611
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.flange.tau = -vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11611};
  (data->simulationInfo->realParameter[1568] /* vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.flange.tau PARAM */) = (-(data->simulationInfo->realParameter[1570] /* vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11612
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau = vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11612};
  (data->simulationInfo->realParameter[1569] /* vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau PARAM */) = (data->simulationInfo->realParameter[1570] /* vehicle.frontSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11614
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.tau = vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11614};
  (data->simulationInfo->realParameter[944] /* vehicle.frontSuspension.cornerL.ucaPivot.tau PARAM */) = (data->simulationInfo->realParameter[923] /* vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11615
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.internalAxis.tau = vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11615};
  (data->simulationInfo->realParameter[939] /* vehicle.frontSuspension.cornerL.ucaPivot.internalAxis.tau PARAM */) = (data->simulationInfo->realParameter[923] /* vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11616
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.internalAxis.flange.tau = vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11616};
  (data->simulationInfo->realParameter[938] /* vehicle.frontSuspension.cornerL.ucaPivot.internalAxis.flange.tau PARAM */) = (data->simulationInfo->realParameter[923] /* vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11617
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.flange.tau = -vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11617};
  (data->simulationInfo->realParameter[921] /* vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.flange.tau PARAM */) = (-(data->simulationInfo->realParameter[923] /* vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11618
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau = vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11618};
  (data->simulationInfo->realParameter[922] /* vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau PARAM */) = (data->simulationInfo->realParameter[923] /* vehicle.frontSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11620
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.tau = vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11620};
  (data->simulationInfo->realParameter[3098] /* vehicle.rearSuspension.cornerR.ucaPivot.tau PARAM */) = (data->simulationInfo->realParameter[3077] /* vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11621
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.internalAxis.tau = vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11621};
  (data->simulationInfo->realParameter[3093] /* vehicle.rearSuspension.cornerR.ucaPivot.internalAxis.tau PARAM */) = (data->simulationInfo->realParameter[3077] /* vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11622
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.internalAxis.flange.tau = vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11622};
  (data->simulationInfo->realParameter[3092] /* vehicle.rearSuspension.cornerR.ucaPivot.internalAxis.flange.tau PARAM */) = (data->simulationInfo->realParameter[3077] /* vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11623
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.flange.tau = -vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11623};
  (data->simulationInfo->realParameter[3075] /* vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.flange.tau PARAM */) = (-(data->simulationInfo->realParameter[3077] /* vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11624
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau = vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11624};
  (data->simulationInfo->realParameter[3076] /* vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau PARAM */) = (data->simulationInfo->realParameter[3077] /* vehicle.rearSuspension.cornerR.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11626
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.tau = vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11626};
  (data->simulationInfo->realParameter[2451] /* vehicle.rearSuspension.cornerL.ucaPivot.tau PARAM */) = (data->simulationInfo->realParameter[2430] /* vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11627
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.internalAxis.tau = vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11627};
  (data->simulationInfo->realParameter[2446] /* vehicle.rearSuspension.cornerL.ucaPivot.internalAxis.tau PARAM */) = (data->simulationInfo->realParameter[2430] /* vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11628
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.internalAxis.flange.tau = vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11628};
  (data->simulationInfo->realParameter[2445] /* vehicle.rearSuspension.cornerL.ucaPivot.internalAxis.flange.tau PARAM */) = (data->simulationInfo->realParameter[2430] /* vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11629
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.flange.tau = -vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11629};
  (data->simulationInfo->realParameter[2428] /* vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.flange.tau PARAM */) = (-(data->simulationInfo->realParameter[2430] /* vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11630
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau = vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11630};
  (data->simulationInfo->realParameter[2429] /* vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau PARAM */) = (data->simulationInfo->realParameter[2430] /* vehicle.rearSuspension.cornerL.ucaPivot.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11632
type: SIMPLE_ASSIGN
rig.motion.yaw.frame_a.f[1] = rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11632};
  (data->simulationInfo->realParameter[209] /* rig.motion.yaw.frame_a.f[1] PARAM */) = (data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11633
type: SIMPLE_ASSIGN
rig.motion.heave.frame_b.f[1] = -rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11633};
  (data->simulationInfo->realParameter[22] /* rig.motion.heave.frame_b.f[1] PARAM */) = (-(data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11634
type: SIMPLE_ASSIGN
rig.motion.heave.frame_a.f[1] = rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11634};
  (data->simulationInfo->realParameter[19] /* rig.motion.heave.frame_a.f[1] PARAM */) = (data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11635
type: SIMPLE_ASSIGN
rig.motion.lateral.frame_b.f[1] = -rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11635};
  (data->simulationInfo->realParameter[51] /* rig.motion.lateral.frame_b.f[1] PARAM */) = (-(data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11636
type: SIMPLE_ASSIGN
rig.motion.lateral.frame_a.f[1] = rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11636};
  (data->simulationInfo->realParameter[48] /* rig.motion.lateral.frame_a.f[1] PARAM */) = (data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11637
type: SIMPLE_ASSIGN
world.frame_b.f[1] = -rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11637};
  (data->simulationInfo->realParameter[3856] /* world.frame_b.f[1] PARAM */) = (-(data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11638
type: SIMPLE_ASSIGN
rig.worldFrame.f[1] = rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11638};
  (data->simulationInfo->realParameter[248] /* rig.worldFrame.f[1] PARAM */) = (data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11639
type: SIMPLE_ASSIGN
rig.motion.worldFrame.f[1] = rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11639};
  (data->simulationInfo->realParameter[189] /* rig.motion.worldFrame.f[1] PARAM */) = (data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11640
type: SIMPLE_ASSIGN
rig.motion.longitudinal.frame_a.f[1] = rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11640};
  (data->simulationInfo->realParameter[77] /* rig.motion.longitudinal.frame_a.f[1] PARAM */) = (data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11641
type: SIMPLE_ASSIGN
rig.motion.longitudinal.frame_b.f[1] = -rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11641};
  (data->simulationInfo->realParameter[80] /* rig.motion.longitudinal.frame_b.f[1] PARAM */) = (-(data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11642
type: SIMPLE_ASSIGN
rig.motion.longitudinal.f = rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11642};
  (data->simulationInfo->realParameter[74] /* rig.motion.longitudinal.f PARAM */) = (data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11643
type: SIMPLE_ASSIGN
rig.motion.longitudinal.internalAxis.f = rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11643};
  (data->simulationInfo->realParameter[83] /* rig.motion.longitudinal.internalAxis.f PARAM */) = (data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11644
type: SIMPLE_ASSIGN
rig.motion.longitudinal.internalAxis.flange.f = rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11644};
  (data->simulationInfo->realParameter[84] /* rig.motion.longitudinal.internalAxis.flange.f PARAM */) = (data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11645
type: SIMPLE_ASSIGN
rig.motion.longitudinal.constantForce.flange.f = -rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11645};
  (data->simulationInfo->realParameter[70] /* rig.motion.longitudinal.constantForce.flange.f PARAM */) = (-(data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11646
type: SIMPLE_ASSIGN
rig.motion.longitudinal.constantForce.f = -rig.motion.longitudinal.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11646};
  (data->simulationInfo->realParameter[68] /* rig.motion.longitudinal.constantForce.f PARAM */) = (-(data->simulationInfo->realParameter[69] /* rig.motion.longitudinal.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11648
type: SIMPLE_ASSIGN
rig.motion.yaw.frame_a.f[2] = rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11648};
  (data->simulationInfo->realParameter[210] /* rig.motion.yaw.frame_a.f[2] PARAM */) = (data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11649
type: SIMPLE_ASSIGN
rig.motion.heave.frame_b.f[2] = -rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11649};
  (data->simulationInfo->realParameter[23] /* rig.motion.heave.frame_b.f[2] PARAM */) = (-(data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11650
type: SIMPLE_ASSIGN
rig.motion.heave.frame_a.f[2] = rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11650};
  (data->simulationInfo->realParameter[20] /* rig.motion.heave.frame_a.f[2] PARAM */) = (data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11651
type: SIMPLE_ASSIGN
world.frame_b.f[2] = -rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11651};
  (data->simulationInfo->realParameter[3857] /* world.frame_b.f[2] PARAM */) = (-(data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11652
type: SIMPLE_ASSIGN
rig.worldFrame.f[2] = rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11652};
  (data->simulationInfo->realParameter[249] /* rig.worldFrame.f[2] PARAM */) = (data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11653
type: SIMPLE_ASSIGN
rig.motion.worldFrame.f[2] = rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11653};
  (data->simulationInfo->realParameter[190] /* rig.motion.worldFrame.f[2] PARAM */) = (data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11654
type: SIMPLE_ASSIGN
rig.motion.longitudinal.frame_a.f[2] = rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11654};
  (data->simulationInfo->realParameter[78] /* rig.motion.longitudinal.frame_a.f[2] PARAM */) = (data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11655
type: SIMPLE_ASSIGN
rig.motion.longitudinal.frame_b.f[2] = -rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11655};
  (data->simulationInfo->realParameter[81] /* rig.motion.longitudinal.frame_b.f[2] PARAM */) = (-(data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11656
type: SIMPLE_ASSIGN
rig.motion.lateral.frame_a.f[2] = rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11656};
  (data->simulationInfo->realParameter[49] /* rig.motion.lateral.frame_a.f[2] PARAM */) = (data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11657
type: SIMPLE_ASSIGN
rig.motion.lateral.frame_b.f[2] = -rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11657};
  (data->simulationInfo->realParameter[52] /* rig.motion.lateral.frame_b.f[2] PARAM */) = (-(data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11658
type: SIMPLE_ASSIGN
rig.motion.lateral.f = rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11658};
  (data->simulationInfo->realParameter[45] /* rig.motion.lateral.f PARAM */) = (data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11659
type: SIMPLE_ASSIGN
rig.motion.lateral.internalAxis.f = rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11659};
  (data->simulationInfo->realParameter[54] /* rig.motion.lateral.internalAxis.f PARAM */) = (data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11660
type: SIMPLE_ASSIGN
rig.motion.lateral.internalAxis.flange.f = rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11660};
  (data->simulationInfo->realParameter[55] /* rig.motion.lateral.internalAxis.flange.f PARAM */) = (data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11661
type: SIMPLE_ASSIGN
rig.motion.lateral.constantForce.flange.f = -rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11661};
  (data->simulationInfo->realParameter[41] /* rig.motion.lateral.constantForce.flange.f PARAM */) = (-(data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11662
type: SIMPLE_ASSIGN
rig.motion.lateral.constantForce.f = -rig.motion.lateral.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11662};
  (data->simulationInfo->realParameter[39] /* rig.motion.lateral.constantForce.f PARAM */) = (-(data->simulationInfo->realParameter[40] /* rig.motion.lateral.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11664
type: SIMPLE_ASSIGN
rig.motion.yaw.frame_a.f[3] = rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11664};
  (data->simulationInfo->realParameter[211] /* rig.motion.yaw.frame_a.f[3] PARAM */) = (data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11665
type: SIMPLE_ASSIGN
world.frame_b.f[3] = -rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11665};
  (data->simulationInfo->realParameter[3858] /* world.frame_b.f[3] PARAM */) = (-(data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11666
type: SIMPLE_ASSIGN
rig.worldFrame.f[3] = rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11666};
  (data->simulationInfo->realParameter[250] /* rig.worldFrame.f[3] PARAM */) = (data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11667
type: SIMPLE_ASSIGN
rig.motion.worldFrame.f[3] = rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11667};
  (data->simulationInfo->realParameter[191] /* rig.motion.worldFrame.f[3] PARAM */) = (data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11668
type: SIMPLE_ASSIGN
rig.motion.longitudinal.frame_a.f[3] = rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11668};
  (data->simulationInfo->realParameter[79] /* rig.motion.longitudinal.frame_a.f[3] PARAM */) = (data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11669
type: SIMPLE_ASSIGN
rig.motion.longitudinal.frame_b.f[3] = -rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11669};
  (data->simulationInfo->realParameter[82] /* rig.motion.longitudinal.frame_b.f[3] PARAM */) = (-(data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11670
type: SIMPLE_ASSIGN
rig.motion.lateral.frame_a.f[3] = rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11670};
  (data->simulationInfo->realParameter[50] /* rig.motion.lateral.frame_a.f[3] PARAM */) = (data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11671
type: SIMPLE_ASSIGN
rig.motion.lateral.frame_b.f[3] = -rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11671};
  (data->simulationInfo->realParameter[53] /* rig.motion.lateral.frame_b.f[3] PARAM */) = (-(data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11672
type: SIMPLE_ASSIGN
rig.motion.heave.frame_a.f[3] = rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11672};
  (data->simulationInfo->realParameter[21] /* rig.motion.heave.frame_a.f[3] PARAM */) = (data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11673
type: SIMPLE_ASSIGN
rig.motion.heave.frame_b.f[3] = -rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11673};
  (data->simulationInfo->realParameter[24] /* rig.motion.heave.frame_b.f[3] PARAM */) = (-(data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11674
type: SIMPLE_ASSIGN
rig.motion.heave.f = rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11674};
  (data->simulationInfo->realParameter[16] /* rig.motion.heave.f PARAM */) = (data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11675
type: SIMPLE_ASSIGN
rig.motion.heave.internalAxis.f = rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11675};
  (data->simulationInfo->realParameter[25] /* rig.motion.heave.internalAxis.f PARAM */) = (data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11676
type: SIMPLE_ASSIGN
rig.motion.heave.internalAxis.flange.f = rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11676};
  (data->simulationInfo->realParameter[26] /* rig.motion.heave.internalAxis.flange.f PARAM */) = (data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11677
type: SIMPLE_ASSIGN
rig.motion.heave.constantForce.flange.f = -rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11677};
  (data->simulationInfo->realParameter[12] /* rig.motion.heave.constantForce.flange.f PARAM */) = (-(data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11678
type: SIMPLE_ASSIGN
rig.motion.heave.constantForce.f = -rig.motion.heave.constantForce.f_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11678};
  (data->simulationInfo->realParameter[10] /* rig.motion.heave.constantForce.f PARAM */) = (-(data->simulationInfo->realParameter[11] /* rig.motion.heave.constantForce.f_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11680
type: SIMPLE_ASSIGN
rig.motion.yaw.tau = rig.motion.yaw.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11680};
  (data->simulationInfo->realParameter[218] /* rig.motion.yaw.tau PARAM */) = (data->simulationInfo->realParameter[194] /* rig.motion.yaw.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11681
type: SIMPLE_ASSIGN
rig.motion.yaw.internalAxis.tau = rig.motion.yaw.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11681};
  (data->simulationInfo->realParameter[213] /* rig.motion.yaw.internalAxis.tau PARAM */) = (data->simulationInfo->realParameter[194] /* rig.motion.yaw.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11682
type: SIMPLE_ASSIGN
rig.motion.yaw.internalAxis.flange.tau = rig.motion.yaw.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11682};
  (data->simulationInfo->realParameter[212] /* rig.motion.yaw.internalAxis.flange.tau PARAM */) = (data->simulationInfo->realParameter[194] /* rig.motion.yaw.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11683
type: SIMPLE_ASSIGN
rig.motion.yaw.constantTorque.flange.tau = -rig.motion.yaw.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11683};
  (data->simulationInfo->realParameter[192] /* rig.motion.yaw.constantTorque.flange.tau PARAM */) = (-(data->simulationInfo->realParameter[194] /* rig.motion.yaw.constantTorque.tau_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11684
type: SIMPLE_ASSIGN
rig.motion.yaw.constantTorque.tau = rig.motion.yaw.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11684};
  (data->simulationInfo->realParameter[193] /* rig.motion.yaw.constantTorque.tau PARAM */) = (data->simulationInfo->realParameter[194] /* rig.motion.yaw.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11686
type: SIMPLE_ASSIGN
rig.motion.pitch.tau = rig.motion.pitch.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11686};
  (data->simulationInfo->realParameter[112] /* rig.motion.pitch.tau PARAM */) = (data->simulationInfo->realParameter[91] /* rig.motion.pitch.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11687
type: SIMPLE_ASSIGN
rig.motion.pitch.internalAxis.tau = rig.motion.pitch.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11687};
  (data->simulationInfo->realParameter[107] /* rig.motion.pitch.internalAxis.tau PARAM */) = (data->simulationInfo->realParameter[91] /* rig.motion.pitch.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11688
type: SIMPLE_ASSIGN
rig.motion.pitch.internalAxis.flange.tau = rig.motion.pitch.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11688};
  (data->simulationInfo->realParameter[106] /* rig.motion.pitch.internalAxis.flange.tau PARAM */) = (data->simulationInfo->realParameter[91] /* rig.motion.pitch.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11689
type: SIMPLE_ASSIGN
rig.motion.pitch.constantTorque.flange.tau = -rig.motion.pitch.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11689};
  (data->simulationInfo->realParameter[89] /* rig.motion.pitch.constantTorque.flange.tau PARAM */) = (-(data->simulationInfo->realParameter[91] /* rig.motion.pitch.constantTorque.tau_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11690
type: SIMPLE_ASSIGN
rig.motion.pitch.constantTorque.tau = rig.motion.pitch.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11690};
  (data->simulationInfo->realParameter[90] /* rig.motion.pitch.constantTorque.tau PARAM */) = (data->simulationInfo->realParameter[91] /* rig.motion.pitch.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11692
type: SIMPLE_ASSIGN
rig.motion.roll.tau = rig.motion.roll.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11692};
  (data->simulationInfo->realParameter[136] /* rig.motion.roll.tau PARAM */) = (data->simulationInfo->realParameter[115] /* rig.motion.roll.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11693
type: SIMPLE_ASSIGN
rig.motion.roll.internalAxis.tau = rig.motion.roll.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11693};
  (data->simulationInfo->realParameter[131] /* rig.motion.roll.internalAxis.tau PARAM */) = (data->simulationInfo->realParameter[115] /* rig.motion.roll.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11694
type: SIMPLE_ASSIGN
rig.motion.roll.internalAxis.flange.tau = rig.motion.roll.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11694};
  (data->simulationInfo->realParameter[130] /* rig.motion.roll.internalAxis.flange.tau PARAM */) = (data->simulationInfo->realParameter[115] /* rig.motion.roll.constantTorque.tau_constant PARAM */);
  TRACE_POP
}

/*
equation index: 11695
type: SIMPLE_ASSIGN
rig.motion.roll.constantTorque.flange.tau = -rig.motion.roll.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11695};
  (data->simulationInfo->realParameter[113] /* rig.motion.roll.constantTorque.flange.tau PARAM */) = (-(data->simulationInfo->realParameter[115] /* rig.motion.roll.constantTorque.tau_constant PARAM */));
  TRACE_POP
}

/*
equation index: 11696
type: SIMPLE_ASSIGN
rig.motion.roll.constantTorque.tau = rig.motion.roll.constantTorque.tau_constant
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11696};
  (data->simulationInfo->realParameter[114] /* rig.motion.roll.constantTorque.tau PARAM */) = (data->simulationInfo->realParameter[115] /* rig.motion.roll.constantTorque.tau_constant PARAM */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_6783(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_6776(DATA *data, threadData_t *threadData);


/*
equation index: 11927
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.mSprung = rigController.steerSmoothing.vehicleParams.vehicleMass + (-2.0) * (rigController.steerSmoothing.vehicleParams.mUnsprungFront + rigController.steerSmoothing.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11927};
  (data->simulationInfo->realParameter[386] /* rigController.steerSmoothing.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[405] /* rigController.steerSmoothing.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[387] /* rigController.steerSmoothing.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[388] /* rigController.steerSmoothing.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 11928
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.F0Rear = 4.903325 * rigController.steerSmoothing.vehicleParams.mSprung * rigController.steerSmoothing.vehicleParams.a / rigController.steerSmoothing.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11928};
  (data->simulationInfo->realParameter[358] /* rigController.steerSmoothing.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[386] /* rigController.steerSmoothing.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[362] /* rigController.steerSmoothing.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[406] /* rigController.steerSmoothing.vehicleParams.wheelbase PARAM */),"rigController.steerSmoothing.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 11929
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.kRideRear = 0.10197162129779283 * rigController.steerSmoothing.vehicleParams.F0Rear * (6.283185307179586 * rigController.steerSmoothing.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11929};
  modelica_real tmp4;
  tmp4 = (6.283185307179586) * ((data->simulationInfo->realParameter[374] /* rigController.steerSmoothing.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[382] /* rigController.steerSmoothing.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[358] /* rigController.steerSmoothing.vehicleParams.F0Rear PARAM */)) * ((tmp4 * tmp4)));
  TRACE_POP
}

/*
equation index: 11930
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.dWheelRear = 2.0 * rigController.steerSmoothing.vehicleParams.zetaRear * sqrt(rigController.steerSmoothing.vehicleParams.kRideRear * rigController.steerSmoothing.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11930};
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
equation index: 11931
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.F0Front = 4.903325 * rigController.steerSmoothing.vehicleParams.mSprung * rigController.steerSmoothing.vehicleParams.b / rigController.steerSmoothing.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11931};
  (data->simulationInfo->realParameter[357] /* rigController.steerSmoothing.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[386] /* rigController.steerSmoothing.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[366] /* rigController.steerSmoothing.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[406] /* rigController.steerSmoothing.vehicleParams.wheelbase PARAM */),"rigController.steerSmoothing.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 11932
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.kRideFront = 0.10197162129779283 * rigController.steerSmoothing.vehicleParams.F0Front * (6.283185307179586 * rigController.steerSmoothing.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11932};
  modelica_real tmp6;
  tmp6 = (6.283185307179586) * ((data->simulationInfo->realParameter[373] /* rigController.steerSmoothing.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[381] /* rigController.steerSmoothing.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[357] /* rigController.steerSmoothing.vehicleParams.F0Front PARAM */)) * ((tmp6 * tmp6)));
  TRACE_POP
}

/*
equation index: 11933
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.dWheelFront = 2.0 * rigController.steerSmoothing.vehicleParams.zetaFront * sqrt(rigController.steerSmoothing.vehicleParams.kRideFront * rigController.steerSmoothing.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11933};
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
equation index: 11934
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.hpPower = 745.7 * rigController.steerSmoothing.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11934};
  (data->simulationInfo->realParameter[378] /* rigController.steerSmoothing.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[377] /* rigController.steerSmoothing.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 11935
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.track = rigController.steerSmoothing.vehicleParams.tf + rigController.steerSmoothing.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11935};
  (data->simulationInfo->realParameter[404] /* rigController.steerSmoothing.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[402] /* rigController.steerSmoothing.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[403] /* rigController.steerSmoothing.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 11936
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.kRear = rigController.steerSmoothing.vehicleParams.kRideRear * rigController.steerSmoothing.vehicleParams.kz / (rigController.steerSmoothing.vehicleParams.kz - rigController.steerSmoothing.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11936};
  (data->simulationInfo->realParameter[380] /* rigController.steerSmoothing.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[382] /* rigController.steerSmoothing.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[385] /* rigController.steerSmoothing.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[385] /* rigController.steerSmoothing.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[382] /* rigController.steerSmoothing.vehicleParams.kRideRear PARAM */),"rigController.steerSmoothing.vehicleParams.kz - rigController.steerSmoothing.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 11937
type: SIMPLE_ASSIGN
rigController.steerSmoothing.vehicleParams.kFront = rigController.steerSmoothing.vehicleParams.kRideFront * rigController.steerSmoothing.vehicleParams.kz / (rigController.steerSmoothing.vehicleParams.kz - rigController.steerSmoothing.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11937};
  (data->simulationInfo->realParameter[379] /* rigController.steerSmoothing.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[381] /* rigController.steerSmoothing.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[385] /* rigController.steerSmoothing.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[385] /* rigController.steerSmoothing.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[381] /* rigController.steerSmoothing.vehicleParams.kRideFront PARAM */),"rigController.steerSmoothing.vehicleParams.kz - rigController.steerSmoothing.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 11938
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.mSprung = rigController.driveBrakeTorque.vehicleParams.vehicleMass + (-2.0) * (rigController.driveBrakeTorque.vehicleParams.mUnsprungFront + rigController.driveBrakeTorque.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11938};
  (data->simulationInfo->realParameter[281] /* rigController.driveBrakeTorque.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[300] /* rigController.driveBrakeTorque.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[282] /* rigController.driveBrakeTorque.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[283] /* rigController.driveBrakeTorque.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 11939
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.F0Rear = 4.903325 * rigController.driveBrakeTorque.vehicleParams.mSprung * rigController.driveBrakeTorque.vehicleParams.a / rigController.driveBrakeTorque.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11939};
  (data->simulationInfo->realParameter[253] /* rigController.driveBrakeTorque.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[281] /* rigController.driveBrakeTorque.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[257] /* rigController.driveBrakeTorque.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[301] /* rigController.driveBrakeTorque.vehicleParams.wheelbase PARAM */),"rigController.driveBrakeTorque.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 11940
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.kRideRear = 0.10197162129779283 * rigController.driveBrakeTorque.vehicleParams.F0Rear * (6.283185307179586 * rigController.driveBrakeTorque.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11940};
  modelica_real tmp8;
  tmp8 = (6.283185307179586) * ((data->simulationInfo->realParameter[269] /* rigController.driveBrakeTorque.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[277] /* rigController.driveBrakeTorque.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[253] /* rigController.driveBrakeTorque.vehicleParams.F0Rear PARAM */)) * ((tmp8 * tmp8)));
  TRACE_POP
}

/*
equation index: 11941
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.dWheelRear = 2.0 * rigController.driveBrakeTorque.vehicleParams.zetaRear * sqrt(rigController.driveBrakeTorque.vehicleParams.kRideRear * rigController.driveBrakeTorque.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11941};
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
equation index: 11942
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.F0Front = 4.903325 * rigController.driveBrakeTorque.vehicleParams.mSprung * rigController.driveBrakeTorque.vehicleParams.b / rigController.driveBrakeTorque.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11942};
  (data->simulationInfo->realParameter[252] /* rigController.driveBrakeTorque.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[281] /* rigController.driveBrakeTorque.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[261] /* rigController.driveBrakeTorque.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[301] /* rigController.driveBrakeTorque.vehicleParams.wheelbase PARAM */),"rigController.driveBrakeTorque.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 11943
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.kRideFront = 0.10197162129779283 * rigController.driveBrakeTorque.vehicleParams.F0Front * (6.283185307179586 * rigController.driveBrakeTorque.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11943};
  modelica_real tmp10;
  tmp10 = (6.283185307179586) * ((data->simulationInfo->realParameter[268] /* rigController.driveBrakeTorque.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[276] /* rigController.driveBrakeTorque.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[252] /* rigController.driveBrakeTorque.vehicleParams.F0Front PARAM */)) * ((tmp10 * tmp10)));
  TRACE_POP
}

/*
equation index: 11944
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.dWheelFront = 2.0 * rigController.driveBrakeTorque.vehicleParams.zetaFront * sqrt(rigController.driveBrakeTorque.vehicleParams.kRideFront * rigController.driveBrakeTorque.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11944};
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
equation index: 11945
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.hpPower = 745.7 * rigController.driveBrakeTorque.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11945};
  (data->simulationInfo->realParameter[273] /* rigController.driveBrakeTorque.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[272] /* rigController.driveBrakeTorque.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 11946
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.track = rigController.driveBrakeTorque.vehicleParams.tf + rigController.driveBrakeTorque.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11946};
  (data->simulationInfo->realParameter[299] /* rigController.driveBrakeTorque.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[297] /* rigController.driveBrakeTorque.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[298] /* rigController.driveBrakeTorque.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 11947
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.kRear = rigController.driveBrakeTorque.vehicleParams.kRideRear * rigController.driveBrakeTorque.vehicleParams.kz / (rigController.driveBrakeTorque.vehicleParams.kz - rigController.driveBrakeTorque.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11947};
  (data->simulationInfo->realParameter[275] /* rigController.driveBrakeTorque.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[277] /* rigController.driveBrakeTorque.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[280] /* rigController.driveBrakeTorque.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[280] /* rigController.driveBrakeTorque.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[277] /* rigController.driveBrakeTorque.vehicleParams.kRideRear PARAM */),"rigController.driveBrakeTorque.vehicleParams.kz - rigController.driveBrakeTorque.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 11948
type: SIMPLE_ASSIGN
rigController.driveBrakeTorque.vehicleParams.kFront = rigController.driveBrakeTorque.vehicleParams.kRideFront * rigController.driveBrakeTorque.vehicleParams.kz / (rigController.driveBrakeTorque.vehicleParams.kz - rigController.driveBrakeTorque.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11948};
  (data->simulationInfo->realParameter[274] /* rigController.driveBrakeTorque.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[276] /* rigController.driveBrakeTorque.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[280] /* rigController.driveBrakeTorque.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[280] /* rigController.driveBrakeTorque.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[276] /* rigController.driveBrakeTorque.vehicleParams.kRideFront PARAM */),"rigController.driveBrakeTorque.vehicleParams.kz - rigController.driveBrakeTorque.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 11949
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.mSprung = rigController.pedalSmoothing.vehicleParams.vehicleMass + (-2.0) * (rigController.pedalSmoothing.vehicleParams.mUnsprungFront + rigController.pedalSmoothing.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11949};
  (data->simulationInfo->realParameter[334] /* rigController.pedalSmoothing.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[353] /* rigController.pedalSmoothing.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[335] /* rigController.pedalSmoothing.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[336] /* rigController.pedalSmoothing.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 11950
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.F0Rear = 4.903325 * rigController.pedalSmoothing.vehicleParams.mSprung * rigController.pedalSmoothing.vehicleParams.a / rigController.pedalSmoothing.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11950};
  (data->simulationInfo->realParameter[306] /* rigController.pedalSmoothing.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[334] /* rigController.pedalSmoothing.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[310] /* rigController.pedalSmoothing.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[354] /* rigController.pedalSmoothing.vehicleParams.wheelbase PARAM */),"rigController.pedalSmoothing.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 11951
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.kRideRear = 0.10197162129779283 * rigController.pedalSmoothing.vehicleParams.F0Rear * (6.283185307179586 * rigController.pedalSmoothing.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11951};
  modelica_real tmp12;
  tmp12 = (6.283185307179586) * ((data->simulationInfo->realParameter[322] /* rigController.pedalSmoothing.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[330] /* rigController.pedalSmoothing.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[306] /* rigController.pedalSmoothing.vehicleParams.F0Rear PARAM */)) * ((tmp12 * tmp12)));
  TRACE_POP
}

/*
equation index: 11952
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.dWheelRear = 2.0 * rigController.pedalSmoothing.vehicleParams.zetaRear * sqrt(rigController.pedalSmoothing.vehicleParams.kRideRear * rigController.pedalSmoothing.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11952};
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
equation index: 11953
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.F0Front = 4.903325 * rigController.pedalSmoothing.vehicleParams.mSprung * rigController.pedalSmoothing.vehicleParams.b / rigController.pedalSmoothing.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11953};
  (data->simulationInfo->realParameter[305] /* rigController.pedalSmoothing.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[334] /* rigController.pedalSmoothing.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[314] /* rigController.pedalSmoothing.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[354] /* rigController.pedalSmoothing.vehicleParams.wheelbase PARAM */),"rigController.pedalSmoothing.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 11954
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.kRideFront = 0.10197162129779283 * rigController.pedalSmoothing.vehicleParams.F0Front * (6.283185307179586 * rigController.pedalSmoothing.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11954};
  modelica_real tmp14;
  tmp14 = (6.283185307179586) * ((data->simulationInfo->realParameter[321] /* rigController.pedalSmoothing.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[329] /* rigController.pedalSmoothing.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[305] /* rigController.pedalSmoothing.vehicleParams.F0Front PARAM */)) * ((tmp14 * tmp14)));
  TRACE_POP
}

/*
equation index: 11955
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.dWheelFront = 2.0 * rigController.pedalSmoothing.vehicleParams.zetaFront * sqrt(rigController.pedalSmoothing.vehicleParams.kRideFront * rigController.pedalSmoothing.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11955};
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
equation index: 11956
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.hpPower = 745.7 * rigController.pedalSmoothing.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11956};
  (data->simulationInfo->realParameter[326] /* rigController.pedalSmoothing.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[325] /* rigController.pedalSmoothing.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 11957
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.track = rigController.pedalSmoothing.vehicleParams.tf + rigController.pedalSmoothing.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11957};
  (data->simulationInfo->realParameter[352] /* rigController.pedalSmoothing.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[350] /* rigController.pedalSmoothing.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[351] /* rigController.pedalSmoothing.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 11958
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.kRear = rigController.pedalSmoothing.vehicleParams.kRideRear * rigController.pedalSmoothing.vehicleParams.kz / (rigController.pedalSmoothing.vehicleParams.kz - rigController.pedalSmoothing.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11958};
  (data->simulationInfo->realParameter[328] /* rigController.pedalSmoothing.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[330] /* rigController.pedalSmoothing.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[333] /* rigController.pedalSmoothing.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[333] /* rigController.pedalSmoothing.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[330] /* rigController.pedalSmoothing.vehicleParams.kRideRear PARAM */),"rigController.pedalSmoothing.vehicleParams.kz - rigController.pedalSmoothing.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 11959
type: SIMPLE_ASSIGN
rigController.pedalSmoothing.vehicleParams.kFront = rigController.pedalSmoothing.vehicleParams.kRideFront * rigController.pedalSmoothing.vehicleParams.kz / (rigController.pedalSmoothing.vehicleParams.kz - rigController.pedalSmoothing.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11959};
  (data->simulationInfo->realParameter[327] /* rigController.pedalSmoothing.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[329] /* rigController.pedalSmoothing.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[333] /* rigController.pedalSmoothing.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[333] /* rigController.pedalSmoothing.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[329] /* rigController.pedalSmoothing.vehicleParams.kRideFront PARAM */),"rigController.pedalSmoothing.vehicleParams.kz - rigController.pedalSmoothing.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 11988
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.mSprung = rig.motion.vehicleParams.vehicleMass + (-2.0) * (rig.motion.vehicleParams.mUnsprungFront + rig.motion.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11988};
  (data->simulationInfo->realParameter[166] /* rig.motion.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[185] /* rig.motion.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[167] /* rig.motion.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[168] /* rig.motion.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 11989
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.F0Rear = 4.903325 * rig.motion.vehicleParams.mSprung * rig.motion.vehicleParams.a / rig.motion.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11989};
  (data->simulationInfo->realParameter[138] /* rig.motion.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[166] /* rig.motion.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[142] /* rig.motion.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[186] /* rig.motion.vehicleParams.wheelbase PARAM */),"rig.motion.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 11990
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.kRideRear = 0.10197162129779283 * rig.motion.vehicleParams.F0Rear * (6.283185307179586 * rig.motion.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11990};
  modelica_real tmp16;
  tmp16 = (6.283185307179586) * ((data->simulationInfo->realParameter[154] /* rig.motion.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[162] /* rig.motion.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[138] /* rig.motion.vehicleParams.F0Rear PARAM */)) * ((tmp16 * tmp16)));
  TRACE_POP
}

/*
equation index: 11991
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.dWheelRear = 2.0 * rig.motion.vehicleParams.zetaRear * sqrt(rig.motion.vehicleParams.kRideRear * rig.motion.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11991};
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
equation index: 11992
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.F0Front = 4.903325 * rig.motion.vehicleParams.mSprung * rig.motion.vehicleParams.b / rig.motion.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11992};
  (data->simulationInfo->realParameter[137] /* rig.motion.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[166] /* rig.motion.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[146] /* rig.motion.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[186] /* rig.motion.vehicleParams.wheelbase PARAM */),"rig.motion.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 11993
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.kRideFront = 0.10197162129779283 * rig.motion.vehicleParams.F0Front * (6.283185307179586 * rig.motion.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11993};
  modelica_real tmp18;
  tmp18 = (6.283185307179586) * ((data->simulationInfo->realParameter[153] /* rig.motion.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[161] /* rig.motion.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[137] /* rig.motion.vehicleParams.F0Front PARAM */)) * ((tmp18 * tmp18)));
  TRACE_POP
}

/*
equation index: 11994
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.dWheelFront = 2.0 * rig.motion.vehicleParams.zetaFront * sqrt(rig.motion.vehicleParams.kRideFront * rig.motion.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11994};
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
equation index: 11995
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.hpPower = 745.7 * rig.motion.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11995};
  (data->simulationInfo->realParameter[158] /* rig.motion.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[157] /* rig.motion.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 11996
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.track = rig.motion.vehicleParams.tf + rig.motion.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11996};
  (data->simulationInfo->realParameter[184] /* rig.motion.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[182] /* rig.motion.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[183] /* rig.motion.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 11997
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.kRear = rig.motion.vehicleParams.kRideRear * rig.motion.vehicleParams.kz / (rig.motion.vehicleParams.kz - rig.motion.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11997};
  (data->simulationInfo->realParameter[160] /* rig.motion.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[162] /* rig.motion.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[165] /* rig.motion.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[165] /* rig.motion.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[162] /* rig.motion.vehicleParams.kRideRear PARAM */),"rig.motion.vehicleParams.kz - rig.motion.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 11998
type: SIMPLE_ASSIGN
rig.motion.vehicleParams.kFront = rig.motion.vehicleParams.kRideFront * rig.motion.vehicleParams.kz / (rig.motion.vehicleParams.kz - rig.motion.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11998};
  (data->simulationInfo->realParameter[159] /* rig.motion.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[161] /* rig.motion.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[165] /* rig.motion.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[165] /* rig.motion.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[161] /* rig.motion.vehicleParams.kRideFront PARAM */),"rig.motion.vehicleParams.kz - rig.motion.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 12000
type: SIMPLE_ASSIGN
rig.motion.roll.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12000};
  (data->simulationInfo->stringParameter[4] /* rig.motion.roll.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12008
type: SIMPLE_ASSIGN
rig.motion.pitch.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12008};
  (data->simulationInfo->stringParameter[3] /* rig.motion.pitch.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12016
type: SIMPLE_ASSIGN
rig.motion.yaw.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12016};
  (data->simulationInfo->stringParameter[5] /* rig.motion.yaw.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12024
type: SIMPLE_ASSIGN
rig.motion.heave.box.shapeType = "box"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12024};
  (data->simulationInfo->stringParameter[0] /* rig.motion.heave.box.shapeType PARAM */) = _OMC_LIT32;
  TRACE_POP
}

/*
equation index: 12038
type: SIMPLE_ASSIGN
rig.motion.lateral.box.shapeType = "box"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12038};
  (data->simulationInfo->stringParameter[1] /* rig.motion.lateral.box.shapeType PARAM */) = _OMC_LIT32;
  TRACE_POP
}

/*
equation index: 12052
type: SIMPLE_ASSIGN
rig.motion.longitudinal.box.shapeType = "box"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12052(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12052};
  (data->simulationInfo->stringParameter[2] /* rig.motion.longitudinal.box.shapeType PARAM */) = _OMC_LIT32;
  TRACE_POP
}

/*
equation index: 12066
type: SIMPLE_ASSIGN
world.gravityArrowHead.shapeType = "cone"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12066};
  (data->simulationInfo->stringParameter[163] /* world.gravityArrowHead.shapeType PARAM */) = _OMC_LIT33;
  TRACE_POP
}

/*
equation index: 12067
type: SIMPLE_ASSIGN
world.gravityArrowLine.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12067};
  (data->simulationInfo->stringParameter[164] /* world.gravityArrowLine.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12068
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12068(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12068};
  (data->simulationInfo->stringParameter[179] /* world.z_label.cylinders[3].shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12069
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12069(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12069};
  (data->simulationInfo->stringParameter[178] /* world.z_label.cylinders[2].shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12070
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12070(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12070};
  (data->simulationInfo->stringParameter[177] /* world.z_label.cylinders[1].shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12072
type: SIMPLE_ASSIGN
world.z_arrowHead.shapeType = "cone"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12072(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12072};
  (data->simulationInfo->stringParameter[175] /* world.z_arrowHead.shapeType PARAM */) = _OMC_LIT33;
  TRACE_POP
}

/*
equation index: 12073
type: SIMPLE_ASSIGN
world.z_arrowLine.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12073(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12073};
  (data->simulationInfo->stringParameter[176] /* world.z_arrowLine.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12074
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12074(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12074};
  (data->simulationInfo->stringParameter[174] /* world.y_label.cylinders[2].shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12075
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12075};
  (data->simulationInfo->stringParameter[173] /* world.y_label.cylinders[1].shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12077
type: SIMPLE_ASSIGN
world.y_arrowHead.shapeType = "cone"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12077(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12077};
  (data->simulationInfo->stringParameter[171] /* world.y_arrowHead.shapeType PARAM */) = _OMC_LIT33;
  TRACE_POP
}

/*
equation index: 12078
type: SIMPLE_ASSIGN
world.y_arrowLine.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12078};
  (data->simulationInfo->stringParameter[172] /* world.y_arrowLine.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12079
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12079};
  (data->simulationInfo->stringParameter[170] /* world.x_label.cylinders[2].shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12080
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12080};
  (data->simulationInfo->stringParameter[169] /* world.x_label.cylinders[1].shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12082
type: SIMPLE_ASSIGN
world.x_arrowHead.shapeType = "cone"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12082};
  (data->simulationInfo->stringParameter[167] /* world.x_arrowHead.shapeType PARAM */) = _OMC_LIT33;
  TRACE_POP
}

/*
equation index: 12083
type: SIMPLE_ASSIGN
world.x_arrowLine.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12083};
  (data->simulationInfo->stringParameter[168] /* world.x_arrowLine.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12088
type: SIMPLE_ASSIGN
world.groundLength_v = world.groundLength_u
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12088};
  (data->simulationInfo->realParameter[3884] /* world.groundLength_v PARAM */) = (data->simulationInfo->realParameter[3883] /* world.groundLength_u PARAM */);
  TRACE_POP
}

/*
equation index: 12103
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.shape.shapeType = "spring"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12103};
  (data->simulationInfo->stringParameter[81] /* vehicle.rearSuspension.cornerL.coilover.shape.shapeType PARAM */) = _OMC_LIT34;
  TRACE_POP
}

/*
equation index: 12104
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.shape_b.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12104};
  (data->simulationInfo->stringParameter[83] /* vehicle.rearSuspension.cornerL.coilover.shape_b.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12105
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.shape_a.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12105};
  (data->simulationInfo->stringParameter[82] /* vehicle.rearSuspension.cornerL.coilover.shape_a.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12110
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.length_a = world.defaultForceLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12110};
  (data->simulationInfo->realParameter[1923] /* vehicle.rearSuspension.cornerL.coilover.length_a PARAM */) = (data->simulationInfo->realParameter[3847] /* world.defaultForceLength PARAM */);
  TRACE_POP
}

/*
equation index: 12111
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.mSprung = vehicle.rearSuspension.cornerL.vehicleParams.vehicleMass + (-2.0) * (vehicle.rearSuspension.cornerL.vehicleParams.mUnsprungFront + vehicle.rearSuspension.cornerL.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12111};
  (data->simulationInfo->realParameter[2541] /* vehicle.rearSuspension.cornerL.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[2560] /* vehicle.rearSuspension.cornerL.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[2542] /* vehicle.rearSuspension.cornerL.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[2543] /* vehicle.rearSuspension.cornerL.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 12112
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.F0Rear = 4.903325 * vehicle.rearSuspension.cornerL.vehicleParams.mSprung * vehicle.rearSuspension.cornerL.vehicleParams.a / vehicle.rearSuspension.cornerL.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12112};
  (data->simulationInfo->realParameter[2513] /* vehicle.rearSuspension.cornerL.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[2541] /* vehicle.rearSuspension.cornerL.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[2517] /* vehicle.rearSuspension.cornerL.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[2561] /* vehicle.rearSuspension.cornerL.vehicleParams.wheelbase PARAM */),"vehicle.rearSuspension.cornerL.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 12113
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.kRideRear = 0.10197162129779283 * vehicle.rearSuspension.cornerL.vehicleParams.F0Rear * (6.283185307179586 * vehicle.rearSuspension.cornerL.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12113};
  modelica_real tmp20;
  tmp20 = (6.283185307179586) * ((data->simulationInfo->realParameter[2529] /* vehicle.rearSuspension.cornerL.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[2537] /* vehicle.rearSuspension.cornerL.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[2513] /* vehicle.rearSuspension.cornerL.vehicleParams.F0Rear PARAM */)) * ((tmp20 * tmp20)));
  TRACE_POP
}

/*
equation index: 12114
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.dWheelRear = 2.0 * vehicle.rearSuspension.cornerL.vehicleParams.zetaRear * sqrt(vehicle.rearSuspension.cornerL.vehicleParams.kRideRear * vehicle.rearSuspension.cornerL.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12114};
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
equation index: 12115
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.dWheel = vehicle.rearSuspension.cornerL.vehicleParams.dWheelRear
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12115};
  (data->simulationInfo->realParameter[1934] /* vehicle.rearSuspension.cornerL.dWheel PARAM */) = (data->simulationInfo->realParameter[2525] /* vehicle.rearSuspension.cornerL.vehicleParams.dWheelRear PARAM */);
  TRACE_POP
}

/*
equation index: 12116
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.d = vehicle.rearSuspension.cornerL.dWheel / vehicle.rearSuspension.cornerL.motionRatio ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12116};
  modelica_real tmp22;
  tmp22 = (data->simulationInfo->realParameter[2137] /* vehicle.rearSuspension.cornerL.motionRatio PARAM */);
  (data->simulationInfo->realParameter[1921] /* vehicle.rearSuspension.cornerL.coilover.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[1934] /* vehicle.rearSuspension.cornerL.dWheel PARAM */),(tmp22 * tmp22),"vehicle.rearSuspension.cornerL.motionRatio ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 12117
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.kRear = vehicle.rearSuspension.cornerL.vehicleParams.kRideRear * vehicle.rearSuspension.cornerL.vehicleParams.kz / (vehicle.rearSuspension.cornerL.vehicleParams.kz - vehicle.rearSuspension.cornerL.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12117};
  (data->simulationInfo->realParameter[2535] /* vehicle.rearSuspension.cornerL.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[2537] /* vehicle.rearSuspension.cornerL.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[2540] /* vehicle.rearSuspension.cornerL.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[2540] /* vehicle.rearSuspension.cornerL.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[2537] /* vehicle.rearSuspension.cornerL.vehicleParams.kRideRear PARAM */),"vehicle.rearSuspension.cornerL.vehicleParams.kz - vehicle.rearSuspension.cornerL.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 12118
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.kWheel = vehicle.rearSuspension.cornerL.vehicleParams.kRear
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12118};
  (data->simulationInfo->realParameter[2114] /* vehicle.rearSuspension.cornerL.kWheel PARAM */) = (data->simulationInfo->realParameter[2535] /* vehicle.rearSuspension.cornerL.vehicleParams.kRear PARAM */);
  TRACE_POP
}

/*
equation index: 12119
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.F0 = vehicle.rearSuspension.cornerL.vehicleParams.F0Rear
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12119};
  (data->simulationInfo->realParameter[1918] /* vehicle.rearSuspension.cornerL.F0 PARAM */) = (data->simulationInfo->realParameter[2513] /* vehicle.rearSuspension.cornerL.vehicleParams.F0Rear PARAM */);
  TRACE_POP
}

/*
equation index: 12120
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.s_unstretched = 0.4178516483155236 + vehicle.rearSuspension.cornerL.F0 * vehicle.rearSuspension.cornerL.motionRatio / vehicle.rearSuspension.cornerL.kWheel
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12120};
  (data->simulationInfo->realParameter[1925] /* vehicle.rearSuspension.cornerL.coilover.s_unstretched PARAM */) = 0.4178516483155236 + ((data->simulationInfo->realParameter[1918] /* vehicle.rearSuspension.cornerL.F0 PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[2137] /* vehicle.rearSuspension.cornerL.motionRatio PARAM */),(data->simulationInfo->realParameter[2114] /* vehicle.rearSuspension.cornerL.kWheel PARAM */),"vehicle.rearSuspension.cornerL.kWheel",equationIndexes));
  TRACE_POP
}

/*
equation index: 12121
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.coilover.c = vehicle.rearSuspension.cornerL.kWheel / vehicle.rearSuspension.cornerL.motionRatio ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12121};
  modelica_real tmp23;
  tmp23 = (data->simulationInfo->realParameter[2137] /* vehicle.rearSuspension.cornerL.motionRatio PARAM */);
  (data->simulationInfo->realParameter[1920] /* vehicle.rearSuspension.cornerL.coilover.c PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[2114] /* vehicle.rearSuspension.cornerL.kWheel PARAM */),(tmp23 * tmp23),"vehicle.rearSuspension.cornerL.motionRatio ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 12123
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springArm.shape.shapeType = vehicle.rearSuspension.cornerL.springArm.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12123};
  (data->simulationInfo->stringParameter[96] /* vehicle.rearSuspension.cornerL.springArm.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[97] /* vehicle.rearSuspension.cornerL.springArm.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12137
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.springChassis.shape.shapeType = vehicle.rearSuspension.cornerL.springChassis.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12137};
  (data->simulationInfo->stringParameter[98] /* vehicle.rearSuspension.cornerL.springChassis.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[99] /* vehicle.rearSuspension.cornerL.springChassis.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12156
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod2.shape.shapeType = vehicle.rearSuspension.cornerL.jointUSR.rod2.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12156};
  (data->simulationInfo->stringParameter[90] /* vehicle.rearSuspension.cornerL.jointUSR.rod2.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[91] /* vehicle.rearSuspension.cornerL.jointUSR.rod2.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12170
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod1.universalShape2.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12170};
  (data->simulationInfo->stringParameter[89] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.universalShape2.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12171
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod1.universalShape1.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12171};
  (data->simulationInfo->stringParameter[88] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.universalShape1.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12172
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod1.sphericalShape_b.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12172};
  (data->simulationInfo->stringParameter[87] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.sphericalShape_b.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 12173
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.rod1.rodShape.shapeType = vehicle.rearSuspension.cornerL.jointUSR.rod1.rodShapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12173};
  (data->simulationInfo->stringParameter[85] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.rodShape.shapeType PARAM */) = (data->simulationInfo->stringParameter[86] /* vehicle.rearSuspension.cornerL.jointUSR.rod1.rodShapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12194
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.revolute.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12194};
  (data->simulationInfo->stringParameter[84] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12198
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.revolute.phi_guess = vehicle.rearSuspension.cornerL.jointUSR.phi_guess
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12198};
  (data->simulationInfo->realParameter[2043] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.phi_guess PARAM */) = (data->simulationInfo->realParameter[2019] /* vehicle.rearSuspension.cornerL.jointUSR.phi_guess PARAM */);
  TRACE_POP
}

/*
equation index: 12199
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.jointUSR.revolute.phi_offset = vehicle.rearSuspension.cornerL.jointUSR.phi_offset
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12199};
  (data->simulationInfo->realParameter[2044] /* vehicle.rearSuspension.cornerL.jointUSR.revolute.phi_offset PARAM */) = (data->simulationInfo->realParameter[2020] /* vehicle.rearSuspension.cornerL.jointUSR.phi_offset PARAM */);
  TRACE_POP
}

/*
equation index: 12225
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.lcaMount.shape.shapeType = vehicle.rearSuspension.cornerL.lcaMount.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12225};
  (data->simulationInfo->stringParameter[92] /* vehicle.rearSuspension.cornerL.lcaMount.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[93] /* vehicle.rearSuspension.cornerL.lcaMount.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12240
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.uca.shape.shapeType = vehicle.rearSuspension.cornerL.uca.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12240};
  (data->simulationInfo->stringParameter[108] /* vehicle.rearSuspension.cornerL.uca.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[109] /* vehicle.rearSuspension.cornerL.uca.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12255
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12255};
  (data->simulationInfo->stringParameter[112] /* vehicle.rearSuspension.cornerL.ucaPivot.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12262
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaMount.shape.shapeType = vehicle.rearSuspension.cornerL.ucaMount.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12262};
  (data->simulationInfo->stringParameter[110] /* vehicle.rearSuspension.cornerL.ucaMount.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[111] /* vehicle.rearSuspension.cornerL.ucaMount.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12365
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.F0Front = 4.903325 * vehicle.rearSuspension.cornerL.vehicleParams.mSprung * vehicle.rearSuspension.cornerL.vehicleParams.b / vehicle.rearSuspension.cornerL.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12365};
  (data->simulationInfo->realParameter[2512] /* vehicle.rearSuspension.cornerL.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[2541] /* vehicle.rearSuspension.cornerL.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[2521] /* vehicle.rearSuspension.cornerL.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[2561] /* vehicle.rearSuspension.cornerL.vehicleParams.wheelbase PARAM */),"vehicle.rearSuspension.cornerL.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 12366
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.kRideFront = 0.10197162129779283 * vehicle.rearSuspension.cornerL.vehicleParams.F0Front * (6.283185307179586 * vehicle.rearSuspension.cornerL.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12366};
  modelica_real tmp24;
  tmp24 = (6.283185307179586) * ((data->simulationInfo->realParameter[2528] /* vehicle.rearSuspension.cornerL.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[2536] /* vehicle.rearSuspension.cornerL.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[2512] /* vehicle.rearSuspension.cornerL.vehicleParams.F0Front PARAM */)) * ((tmp24 * tmp24)));
  TRACE_POP
}

/*
equation index: 12367
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.dWheelFront = 2.0 * vehicle.rearSuspension.cornerL.vehicleParams.zetaFront * sqrt(vehicle.rearSuspension.cornerL.vehicleParams.kRideFront * vehicle.rearSuspension.cornerL.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12367};
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
equation index: 12368
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.hpPower = 745.7 * vehicle.rearSuspension.cornerL.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12368};
  (data->simulationInfo->realParameter[2533] /* vehicle.rearSuspension.cornerL.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[2532] /* vehicle.rearSuspension.cornerL.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 12369
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.track = vehicle.rearSuspension.cornerL.vehicleParams.tf + vehicle.rearSuspension.cornerL.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12369};
  (data->simulationInfo->realParameter[2559] /* vehicle.rearSuspension.cornerL.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[2557] /* vehicle.rearSuspension.cornerL.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[2558] /* vehicle.rearSuspension.cornerL.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 12370
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.vehicleParams.kFront = vehicle.rearSuspension.cornerL.vehicleParams.kRideFront * vehicle.rearSuspension.cornerL.vehicleParams.kz / (vehicle.rearSuspension.cornerL.vehicleParams.kz - vehicle.rearSuspension.cornerL.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12370};
  (data->simulationInfo->realParameter[2534] /* vehicle.rearSuspension.cornerL.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[2536] /* vehicle.rearSuspension.cornerL.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[2540] /* vehicle.rearSuspension.cornerL.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[2540] /* vehicle.rearSuspension.cornerL.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[2536] /* vehicle.rearSuspension.cornerL.vehicleParams.kRideFront PARAM */),"vehicle.rearSuspension.cornerL.vehicleParams.kz - vehicle.rearSuspension.cornerL.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 12376
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.sphere.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12376};
  (data->simulationInfo->stringParameter[114] /* vehicle.rearSuspension.cornerL.upright.sphere.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 12377
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12377};
  (data->simulationInfo->stringParameter[113] /* vehicle.rearSuspension.cornerL.upright.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12378
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.phi_start[3] = vehicle.rearSuspension.cornerL.upright.angles_start[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12378};
  (data->simulationInfo->realParameter[2497] /* vehicle.rearSuspension.cornerL.upright.phi_start[3] PARAM */) = (data->simulationInfo->realParameter[2485] /* vehicle.rearSuspension.cornerL.upright.angles_start[3] PARAM */);
  TRACE_POP
}

/*
equation index: 12379
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.phi_start[2] = vehicle.rearSuspension.cornerL.upright.angles_start[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12379};
  (data->simulationInfo->realParameter[2496] /* vehicle.rearSuspension.cornerL.upright.phi_start[2] PARAM */) = (data->simulationInfo->realParameter[2484] /* vehicle.rearSuspension.cornerL.upright.angles_start[2] PARAM */);
  TRACE_POP
}

/*
equation index: 12380
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.phi_start[1] = vehicle.rearSuspension.cornerL.upright.angles_start[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12380};
  (data->simulationInfo->realParameter[2495] /* vehicle.rearSuspension.cornerL.upright.phi_start[1] PARAM */) = (data->simulationInfo->realParameter[2483] /* vehicle.rearSuspension.cornerL.upright.angles_start[1] PARAM */);
  TRACE_POP
}

/*
equation index: 12397
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.I[3,3] = vehicle.rearSuspension.cornerL.upright.I_33
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12397};
  (data->simulationInfo->realParameter[2460] /* vehicle.rearSuspension.cornerL.upright.I[3,3] PARAM */) = (data->simulationInfo->realParameter[2466] /* vehicle.rearSuspension.cornerL.upright.I_33 PARAM */);
  TRACE_POP
}

/*
equation index: 12398
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.I[3,2] = vehicle.rearSuspension.cornerL.upright.I_32
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12398};
  (data->simulationInfo->realParameter[2459] /* vehicle.rearSuspension.cornerL.upright.I[3,2] PARAM */) = (data->simulationInfo->realParameter[2465] /* vehicle.rearSuspension.cornerL.upright.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 12399
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.I[3,1] = vehicle.rearSuspension.cornerL.upright.I_31
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12399};
  (data->simulationInfo->realParameter[2458] /* vehicle.rearSuspension.cornerL.upright.I[3,1] PARAM */) = (data->simulationInfo->realParameter[2464] /* vehicle.rearSuspension.cornerL.upright.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 12400
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.I[2,3] = vehicle.rearSuspension.cornerL.upright.I_32
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12400};
  (data->simulationInfo->realParameter[2457] /* vehicle.rearSuspension.cornerL.upright.I[2,3] PARAM */) = (data->simulationInfo->realParameter[2465] /* vehicle.rearSuspension.cornerL.upright.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 12401
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.I[2,2] = vehicle.rearSuspension.cornerL.upright.I_22
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12401};
  (data->simulationInfo->realParameter[2456] /* vehicle.rearSuspension.cornerL.upright.I[2,2] PARAM */) = (data->simulationInfo->realParameter[2463] /* vehicle.rearSuspension.cornerL.upright.I_22 PARAM */);
  TRACE_POP
}

/*
equation index: 12402
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.I[2,1] = vehicle.rearSuspension.cornerL.upright.I_21
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12402};
  (data->simulationInfo->realParameter[2455] /* vehicle.rearSuspension.cornerL.upright.I[2,1] PARAM */) = (data->simulationInfo->realParameter[2462] /* vehicle.rearSuspension.cornerL.upright.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 12403
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.I[1,3] = vehicle.rearSuspension.cornerL.upright.I_31
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12403};
  (data->simulationInfo->realParameter[2454] /* vehicle.rearSuspension.cornerL.upright.I[1,3] PARAM */) = (data->simulationInfo->realParameter[2464] /* vehicle.rearSuspension.cornerL.upright.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 12404
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.I[1,2] = vehicle.rearSuspension.cornerL.upright.I_21
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12404};
  (data->simulationInfo->realParameter[2453] /* vehicle.rearSuspension.cornerL.upright.I[1,2] PARAM */) = (data->simulationInfo->realParameter[2462] /* vehicle.rearSuspension.cornerL.upright.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 12405
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.I[1,1] = vehicle.rearSuspension.cornerL.upright.I_11
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12405};
  (data->simulationInfo->realParameter[2452] /* vehicle.rearSuspension.cornerL.upright.I[1,1] PARAM */) = (data->simulationInfo->realParameter[2461] /* vehicle.rearSuspension.cornerL.upright.I_11 PARAM */);
  TRACE_POP
}

/*
equation index: 12418
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.mUnsprung = vehicle.rearSuspension.cornerL.vehicleParams.mUnsprungRear
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12418};
  (data->simulationInfo->realParameter[2136] /* vehicle.rearSuspension.cornerL.mUnsprung PARAM */) = (data->simulationInfo->realParameter[2543] /* vehicle.rearSuspension.cornerL.vehicleParams.mUnsprungRear PARAM */);
  TRACE_POP
}

/*
equation index: 12419
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.m = vehicle.rearSuspension.cornerL.mUnsprung
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12419};
  (data->simulationInfo->realParameter[2494] /* vehicle.rearSuspension.cornerL.upright.m PARAM */) = (data->simulationInfo->realParameter[2136] /* vehicle.rearSuspension.cornerL.mUnsprung PARAM */);
  TRACE_POP
}

/*
equation index: 12421
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.staticAlign.shape.shapeType = vehicle.rearSuspension.cornerL.staticAlign.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12421};
  (data->simulationInfo->stringParameter[100] /* vehicle.rearSuspension.cornerL.staticAlign.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[101] /* vehicle.rearSuspension.cornerL.staticAlign.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12443
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.staticCamber = vehicle.rearSuspension.cornerL.hp.rear_staticCamber
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12443};
  (data->simulationInfo->realParameter[2309] /* vehicle.rearSuspension.cornerL.staticCamber PARAM */) = (data->simulationInfo->realParameter[2003] /* vehicle.rearSuspension.cornerL.hp.rear_staticCamber PARAM */);
  TRACE_POP
}

/*
equation index: 12444
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.staticAlign.angles[2] = (-57.29577951308232) * vehicle.rearSuspension.cornerL.staticCamber
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12444};
  (data->simulationInfo->realParameter[2276] /* vehicle.rearSuspension.cornerL.staticAlign.angles[2] PARAM */) = (-57.29577951308232) * ((data->simulationInfo->realParameter[2309] /* vehicle.rearSuspension.cornerL.staticCamber PARAM */));
  TRACE_POP
}

/*
equation index: 12445
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.staticToe = vehicle.rearSuspension.cornerL.hp.rear_staticToe
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12445};
  (data->simulationInfo->realParameter[2310] /* vehicle.rearSuspension.cornerL.staticToe PARAM */) = (data->simulationInfo->realParameter[2004] /* vehicle.rearSuspension.cornerL.hp.rear_staticToe PARAM */);
  TRACE_POP
}

/*
equation index: 12446
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.staticAlign.angles[1] = 57.29577951308232 * vehicle.rearSuspension.cornerL.staticToe
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12446};
  (data->simulationInfo->realParameter[2275] /* vehicle.rearSuspension.cornerL.staticAlign.angles[1] PARAM */) = (57.29577951308232) * ((data->simulationInfo->realParameter[2310] /* vehicle.rearSuspension.cornerL.staticToe PARAM */));
  TRACE_POP
}

/*
equation index: 12464
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.spindle.shape.shapeType = vehicle.rearSuspension.cornerL.spindle.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12464};
  (data->simulationInfo->stringParameter[94] /* vehicle.rearSuspension.cornerL.spindle.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[95] /* vehicle.rearSuspension.cornerL.spindle.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12483
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.rod2.shape.shapeType = vehicle.rearSuspension.cornerL.tieRod.rod2.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12483};
  (data->simulationInfo->stringParameter[106] /* vehicle.rearSuspension.cornerL.tieRod.rod2.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[107] /* vehicle.rearSuspension.cornerL.tieRod.rod2.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12498
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.rod1.shape_b.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12498};
  (data->simulationInfo->stringParameter[104] /* vehicle.rearSuspension.cornerL.tieRod.rod1.shape_b.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 12499
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.rod1.shape_a.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12499};
  (data->simulationInfo->stringParameter[103] /* vehicle.rearSuspension.cornerL.tieRod.rod1.shape_a.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 12500
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.rod1.shape_rod.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12500};
  (data->simulationInfo->stringParameter[105] /* vehicle.rearSuspension.cornerL.tieRod.rod1.shape_rod.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12503
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.rod1.massDiameter = vehicle.rearSuspension.cornerL.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12503};
  (data->simulationInfo->realParameter[2341] /* vehicle.rearSuspension.cornerL.tieRod.rod1.massDiameter PARAM */) = (data->simulationInfo->realParameter[2357] /* vehicle.rearSuspension.cornerL.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 12508
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12508};
  (data->simulationInfo->stringParameter[102] /* vehicle.rearSuspension.cornerL.tieRod.revolute.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12512
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.phi_guess = vehicle.rearSuspension.cornerL.tieRod.phi_guess
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12512};
  (data->simulationInfo->realParameter[2335] /* vehicle.rearSuspension.cornerL.tieRod.revolute.phi_guess PARAM */) = (data->simulationInfo->realParameter[2314] /* vehicle.rearSuspension.cornerL.tieRod.phi_guess PARAM */);
  TRACE_POP
}

/*
equation index: 12513
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.phi_offset = vehicle.rearSuspension.cornerL.tieRod.phi_offset
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12513};
  (data->simulationInfo->realParameter[2336] /* vehicle.rearSuspension.cornerL.tieRod.revolute.phi_offset PARAM */) = (data->simulationInfo->realParameter[2315] /* vehicle.rearSuspension.cornerL.tieRod.phi_offset PARAM */);
  TRACE_POP
}

/*
equation index: 12517
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.tieRod.revolute.lengthConstraint = vehicle.rearSuspension.cornerL.tieRod.rod1Length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12517};
  (data->simulationInfo->realParameter[2331] /* vehicle.rearSuspension.cornerL.tieRod.revolute.lengthConstraint PARAM */) = (data->simulationInfo->realParameter[2359] /* vehicle.rearSuspension.cornerL.tieRod.rod1Length PARAM */);
  TRACE_POP
}

/*
equation index: 12543
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.shape.shapeType = "spring"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12543};
  (data->simulationInfo->stringParameter[115] /* vehicle.rearSuspension.cornerR.coilover.shape.shapeType PARAM */) = _OMC_LIT34;
  TRACE_POP
}

/*
equation index: 12544
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.shape_b.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12544};
  (data->simulationInfo->stringParameter[117] /* vehicle.rearSuspension.cornerR.coilover.shape_b.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12545
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.shape_a.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12545};
  (data->simulationInfo->stringParameter[116] /* vehicle.rearSuspension.cornerR.coilover.shape_a.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12550
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.length_a = world.defaultForceLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12550};
  (data->simulationInfo->realParameter[2570] /* vehicle.rearSuspension.cornerR.coilover.length_a PARAM */) = (data->simulationInfo->realParameter[3847] /* world.defaultForceLength PARAM */);
  TRACE_POP
}

/*
equation index: 12551
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.mSprung = vehicle.rearSuspension.cornerR.vehicleParams.vehicleMass + (-2.0) * (vehicle.rearSuspension.cornerR.vehicleParams.mUnsprungFront + vehicle.rearSuspension.cornerR.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12551};
  (data->simulationInfo->realParameter[3188] /* vehicle.rearSuspension.cornerR.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[3207] /* vehicle.rearSuspension.cornerR.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[3189] /* vehicle.rearSuspension.cornerR.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[3190] /* vehicle.rearSuspension.cornerR.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 12552
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.F0Rear = 4.903325 * vehicle.rearSuspension.cornerR.vehicleParams.mSprung * vehicle.rearSuspension.cornerR.vehicleParams.a / vehicle.rearSuspension.cornerR.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12552};
  (data->simulationInfo->realParameter[3160] /* vehicle.rearSuspension.cornerR.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[3188] /* vehicle.rearSuspension.cornerR.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3164] /* vehicle.rearSuspension.cornerR.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[3208] /* vehicle.rearSuspension.cornerR.vehicleParams.wheelbase PARAM */),"vehicle.rearSuspension.cornerR.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 12553
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.kRideRear = 0.10197162129779283 * vehicle.rearSuspension.cornerR.vehicleParams.F0Rear * (6.283185307179586 * vehicle.rearSuspension.cornerR.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12553};
  modelica_real tmp26;
  tmp26 = (6.283185307179586) * ((data->simulationInfo->realParameter[3176] /* vehicle.rearSuspension.cornerR.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[3184] /* vehicle.rearSuspension.cornerR.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[3160] /* vehicle.rearSuspension.cornerR.vehicleParams.F0Rear PARAM */)) * ((tmp26 * tmp26)));
  TRACE_POP
}

/*
equation index: 12554
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.dWheelRear = 2.0 * vehicle.rearSuspension.cornerR.vehicleParams.zetaRear * sqrt(vehicle.rearSuspension.cornerR.vehicleParams.kRideRear * vehicle.rearSuspension.cornerR.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12554};
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
equation index: 12555
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.dWheel = vehicle.rearSuspension.cornerR.vehicleParams.dWheelRear
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12555};
  (data->simulationInfo->realParameter[2581] /* vehicle.rearSuspension.cornerR.dWheel PARAM */) = (data->simulationInfo->realParameter[3172] /* vehicle.rearSuspension.cornerR.vehicleParams.dWheelRear PARAM */);
  TRACE_POP
}

/*
equation index: 12556
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.d = vehicle.rearSuspension.cornerR.dWheel / vehicle.rearSuspension.cornerR.motionRatio ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12556};
  modelica_real tmp28;
  tmp28 = (data->simulationInfo->realParameter[2784] /* vehicle.rearSuspension.cornerR.motionRatio PARAM */);
  (data->simulationInfo->realParameter[2568] /* vehicle.rearSuspension.cornerR.coilover.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[2581] /* vehicle.rearSuspension.cornerR.dWheel PARAM */),(tmp28 * tmp28),"vehicle.rearSuspension.cornerR.motionRatio ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 12557
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.kRear = vehicle.rearSuspension.cornerR.vehicleParams.kRideRear * vehicle.rearSuspension.cornerR.vehicleParams.kz / (vehicle.rearSuspension.cornerR.vehicleParams.kz - vehicle.rearSuspension.cornerR.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12557};
  (data->simulationInfo->realParameter[3182] /* vehicle.rearSuspension.cornerR.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[3184] /* vehicle.rearSuspension.cornerR.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3187] /* vehicle.rearSuspension.cornerR.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[3187] /* vehicle.rearSuspension.cornerR.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[3184] /* vehicle.rearSuspension.cornerR.vehicleParams.kRideRear PARAM */),"vehicle.rearSuspension.cornerR.vehicleParams.kz - vehicle.rearSuspension.cornerR.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 12558
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.kWheel = vehicle.rearSuspension.cornerR.vehicleParams.kRear
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12558};
  (data->simulationInfo->realParameter[2761] /* vehicle.rearSuspension.cornerR.kWheel PARAM */) = (data->simulationInfo->realParameter[3182] /* vehicle.rearSuspension.cornerR.vehicleParams.kRear PARAM */);
  TRACE_POP
}

/*
equation index: 12559
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.F0 = vehicle.rearSuspension.cornerR.vehicleParams.F0Rear
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12559};
  (data->simulationInfo->realParameter[2565] /* vehicle.rearSuspension.cornerR.F0 PARAM */) = (data->simulationInfo->realParameter[3160] /* vehicle.rearSuspension.cornerR.vehicleParams.F0Rear PARAM */);
  TRACE_POP
}

/*
equation index: 12560
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.s_unstretched = 0.4178516483155236 + vehicle.rearSuspension.cornerR.F0 * vehicle.rearSuspension.cornerR.motionRatio / vehicle.rearSuspension.cornerR.kWheel
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12560};
  (data->simulationInfo->realParameter[2572] /* vehicle.rearSuspension.cornerR.coilover.s_unstretched PARAM */) = 0.4178516483155236 + ((data->simulationInfo->realParameter[2565] /* vehicle.rearSuspension.cornerR.F0 PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[2784] /* vehicle.rearSuspension.cornerR.motionRatio PARAM */),(data->simulationInfo->realParameter[2761] /* vehicle.rearSuspension.cornerR.kWheel PARAM */),"vehicle.rearSuspension.cornerR.kWheel",equationIndexes));
  TRACE_POP
}

/*
equation index: 12561
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.coilover.c = vehicle.rearSuspension.cornerR.kWheel / vehicle.rearSuspension.cornerR.motionRatio ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12561};
  modelica_real tmp29;
  tmp29 = (data->simulationInfo->realParameter[2784] /* vehicle.rearSuspension.cornerR.motionRatio PARAM */);
  (data->simulationInfo->realParameter[2567] /* vehicle.rearSuspension.cornerR.coilover.c PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[2761] /* vehicle.rearSuspension.cornerR.kWheel PARAM */),(tmp29 * tmp29),"vehicle.rearSuspension.cornerR.motionRatio ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 12563
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springArm.shape.shapeType = vehicle.rearSuspension.cornerR.springArm.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12563};
  (data->simulationInfo->stringParameter[130] /* vehicle.rearSuspension.cornerR.springArm.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[131] /* vehicle.rearSuspension.cornerR.springArm.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12577
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.springChassis.shape.shapeType = vehicle.rearSuspension.cornerR.springChassis.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12577};
  (data->simulationInfo->stringParameter[132] /* vehicle.rearSuspension.cornerR.springChassis.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[133] /* vehicle.rearSuspension.cornerR.springChassis.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12596
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod2.shape.shapeType = vehicle.rearSuspension.cornerR.jointUSR.rod2.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12596};
  (data->simulationInfo->stringParameter[124] /* vehicle.rearSuspension.cornerR.jointUSR.rod2.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[125] /* vehicle.rearSuspension.cornerR.jointUSR.rod2.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12610
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod1.universalShape2.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12610};
  (data->simulationInfo->stringParameter[123] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.universalShape2.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12611
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod1.universalShape1.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12611};
  (data->simulationInfo->stringParameter[122] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.universalShape1.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12612
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod1.sphericalShape_b.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12612};
  (data->simulationInfo->stringParameter[121] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.sphericalShape_b.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 12613
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.rod1.rodShape.shapeType = vehicle.rearSuspension.cornerR.jointUSR.rod1.rodShapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12613};
  (data->simulationInfo->stringParameter[119] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.rodShape.shapeType PARAM */) = (data->simulationInfo->stringParameter[120] /* vehicle.rearSuspension.cornerR.jointUSR.rod1.rodShapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12634
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.revolute.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12634};
  (data->simulationInfo->stringParameter[118] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12638
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.revolute.phi_guess = vehicle.rearSuspension.cornerR.jointUSR.phi_guess
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12638};
  (data->simulationInfo->realParameter[2690] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.phi_guess PARAM */) = (data->simulationInfo->realParameter[2666] /* vehicle.rearSuspension.cornerR.jointUSR.phi_guess PARAM */);
  TRACE_POP
}

/*
equation index: 12639
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.jointUSR.revolute.phi_offset = vehicle.rearSuspension.cornerR.jointUSR.phi_offset
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12639};
  (data->simulationInfo->realParameter[2691] /* vehicle.rearSuspension.cornerR.jointUSR.revolute.phi_offset PARAM */) = (data->simulationInfo->realParameter[2667] /* vehicle.rearSuspension.cornerR.jointUSR.phi_offset PARAM */);
  TRACE_POP
}

/*
equation index: 12665
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.lcaMount.shape.shapeType = vehicle.rearSuspension.cornerR.lcaMount.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12665};
  (data->simulationInfo->stringParameter[126] /* vehicle.rearSuspension.cornerR.lcaMount.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[127] /* vehicle.rearSuspension.cornerR.lcaMount.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12680
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.uca.shape.shapeType = vehicle.rearSuspension.cornerR.uca.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12680};
  (data->simulationInfo->stringParameter[142] /* vehicle.rearSuspension.cornerR.uca.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[143] /* vehicle.rearSuspension.cornerR.uca.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12695
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12695};
  (data->simulationInfo->stringParameter[146] /* vehicle.rearSuspension.cornerR.ucaPivot.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12702
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaMount.shape.shapeType = vehicle.rearSuspension.cornerR.ucaMount.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12702};
  (data->simulationInfo->stringParameter[144] /* vehicle.rearSuspension.cornerR.ucaMount.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[145] /* vehicle.rearSuspension.cornerR.ucaMount.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12805
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.F0Front = 4.903325 * vehicle.rearSuspension.cornerR.vehicleParams.mSprung * vehicle.rearSuspension.cornerR.vehicleParams.b / vehicle.rearSuspension.cornerR.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12805};
  (data->simulationInfo->realParameter[3159] /* vehicle.rearSuspension.cornerR.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[3188] /* vehicle.rearSuspension.cornerR.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3168] /* vehicle.rearSuspension.cornerR.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[3208] /* vehicle.rearSuspension.cornerR.vehicleParams.wheelbase PARAM */),"vehicle.rearSuspension.cornerR.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 12806
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.kRideFront = 0.10197162129779283 * vehicle.rearSuspension.cornerR.vehicleParams.F0Front * (6.283185307179586 * vehicle.rearSuspension.cornerR.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12806};
  modelica_real tmp30;
  tmp30 = (6.283185307179586) * ((data->simulationInfo->realParameter[3175] /* vehicle.rearSuspension.cornerR.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[3183] /* vehicle.rearSuspension.cornerR.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[3159] /* vehicle.rearSuspension.cornerR.vehicleParams.F0Front PARAM */)) * ((tmp30 * tmp30)));
  TRACE_POP
}

/*
equation index: 12807
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.dWheelFront = 2.0 * vehicle.rearSuspension.cornerR.vehicleParams.zetaFront * sqrt(vehicle.rearSuspension.cornerR.vehicleParams.kRideFront * vehicle.rearSuspension.cornerR.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12807};
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
equation index: 12808
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.hpPower = 745.7 * vehicle.rearSuspension.cornerR.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12808};
  (data->simulationInfo->realParameter[3180] /* vehicle.rearSuspension.cornerR.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[3179] /* vehicle.rearSuspension.cornerR.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 12809
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.track = vehicle.rearSuspension.cornerR.vehicleParams.tf + vehicle.rearSuspension.cornerR.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12809};
  (data->simulationInfo->realParameter[3206] /* vehicle.rearSuspension.cornerR.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[3204] /* vehicle.rearSuspension.cornerR.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[3205] /* vehicle.rearSuspension.cornerR.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 12810
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.vehicleParams.kFront = vehicle.rearSuspension.cornerR.vehicleParams.kRideFront * vehicle.rearSuspension.cornerR.vehicleParams.kz / (vehicle.rearSuspension.cornerR.vehicleParams.kz - vehicle.rearSuspension.cornerR.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12810};
  (data->simulationInfo->realParameter[3181] /* vehicle.rearSuspension.cornerR.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[3183] /* vehicle.rearSuspension.cornerR.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3187] /* vehicle.rearSuspension.cornerR.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[3187] /* vehicle.rearSuspension.cornerR.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[3183] /* vehicle.rearSuspension.cornerR.vehicleParams.kRideFront PARAM */),"vehicle.rearSuspension.cornerR.vehicleParams.kz - vehicle.rearSuspension.cornerR.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 12816
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.sphere.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12816};
  (data->simulationInfo->stringParameter[148] /* vehicle.rearSuspension.cornerR.upright.sphere.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 12817
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12817};
  (data->simulationInfo->stringParameter[147] /* vehicle.rearSuspension.cornerR.upright.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12818
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.phi_start[3] = vehicle.rearSuspension.cornerR.upright.angles_start[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12818};
  (data->simulationInfo->realParameter[3144] /* vehicle.rearSuspension.cornerR.upright.phi_start[3] PARAM */) = (data->simulationInfo->realParameter[3132] /* vehicle.rearSuspension.cornerR.upright.angles_start[3] PARAM */);
  TRACE_POP
}

/*
equation index: 12819
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.phi_start[2] = vehicle.rearSuspension.cornerR.upright.angles_start[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12819};
  (data->simulationInfo->realParameter[3143] /* vehicle.rearSuspension.cornerR.upright.phi_start[2] PARAM */) = (data->simulationInfo->realParameter[3131] /* vehicle.rearSuspension.cornerR.upright.angles_start[2] PARAM */);
  TRACE_POP
}

/*
equation index: 12820
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.phi_start[1] = vehicle.rearSuspension.cornerR.upright.angles_start[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12820};
  (data->simulationInfo->realParameter[3142] /* vehicle.rearSuspension.cornerR.upright.phi_start[1] PARAM */) = (data->simulationInfo->realParameter[3130] /* vehicle.rearSuspension.cornerR.upright.angles_start[1] PARAM */);
  TRACE_POP
}

/*
equation index: 12837
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.I[3,3] = vehicle.rearSuspension.cornerR.upright.I_33
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12837};
  (data->simulationInfo->realParameter[3107] /* vehicle.rearSuspension.cornerR.upright.I[3,3] PARAM */) = (data->simulationInfo->realParameter[3113] /* vehicle.rearSuspension.cornerR.upright.I_33 PARAM */);
  TRACE_POP
}

/*
equation index: 12838
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.I[3,2] = vehicle.rearSuspension.cornerR.upright.I_32
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12838};
  (data->simulationInfo->realParameter[3106] /* vehicle.rearSuspension.cornerR.upright.I[3,2] PARAM */) = (data->simulationInfo->realParameter[3112] /* vehicle.rearSuspension.cornerR.upright.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 12839
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.I[3,1] = vehicle.rearSuspension.cornerR.upright.I_31
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12839};
  (data->simulationInfo->realParameter[3105] /* vehicle.rearSuspension.cornerR.upright.I[3,1] PARAM */) = (data->simulationInfo->realParameter[3111] /* vehicle.rearSuspension.cornerR.upright.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 12840
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.I[2,3] = vehicle.rearSuspension.cornerR.upright.I_32
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12840};
  (data->simulationInfo->realParameter[3104] /* vehicle.rearSuspension.cornerR.upright.I[2,3] PARAM */) = (data->simulationInfo->realParameter[3112] /* vehicle.rearSuspension.cornerR.upright.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 12841
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.I[2,2] = vehicle.rearSuspension.cornerR.upright.I_22
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12841};
  (data->simulationInfo->realParameter[3103] /* vehicle.rearSuspension.cornerR.upright.I[2,2] PARAM */) = (data->simulationInfo->realParameter[3110] /* vehicle.rearSuspension.cornerR.upright.I_22 PARAM */);
  TRACE_POP
}

/*
equation index: 12842
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.I[2,1] = vehicle.rearSuspension.cornerR.upright.I_21
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12842};
  (data->simulationInfo->realParameter[3102] /* vehicle.rearSuspension.cornerR.upright.I[2,1] PARAM */) = (data->simulationInfo->realParameter[3109] /* vehicle.rearSuspension.cornerR.upright.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 12843
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.I[1,3] = vehicle.rearSuspension.cornerR.upright.I_31
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12843};
  (data->simulationInfo->realParameter[3101] /* vehicle.rearSuspension.cornerR.upright.I[1,3] PARAM */) = (data->simulationInfo->realParameter[3111] /* vehicle.rearSuspension.cornerR.upright.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 12844
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.I[1,2] = vehicle.rearSuspension.cornerR.upright.I_21
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12844};
  (data->simulationInfo->realParameter[3100] /* vehicle.rearSuspension.cornerR.upright.I[1,2] PARAM */) = (data->simulationInfo->realParameter[3109] /* vehicle.rearSuspension.cornerR.upright.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 12845
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.I[1,1] = vehicle.rearSuspension.cornerR.upright.I_11
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12845};
  (data->simulationInfo->realParameter[3099] /* vehicle.rearSuspension.cornerR.upright.I[1,1] PARAM */) = (data->simulationInfo->realParameter[3108] /* vehicle.rearSuspension.cornerR.upright.I_11 PARAM */);
  TRACE_POP
}

/*
equation index: 12858
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.mUnsprung = vehicle.rearSuspension.cornerR.vehicleParams.mUnsprungRear
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12858};
  (data->simulationInfo->realParameter[2783] /* vehicle.rearSuspension.cornerR.mUnsprung PARAM */) = (data->simulationInfo->realParameter[3190] /* vehicle.rearSuspension.cornerR.vehicleParams.mUnsprungRear PARAM */);
  TRACE_POP
}

/*
equation index: 12859
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.m = vehicle.rearSuspension.cornerR.mUnsprung
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12859};
  (data->simulationInfo->realParameter[3141] /* vehicle.rearSuspension.cornerR.upright.m PARAM */) = (data->simulationInfo->realParameter[2783] /* vehicle.rearSuspension.cornerR.mUnsprung PARAM */);
  TRACE_POP
}

/*
equation index: 12861
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.staticAlign.shape.shapeType = vehicle.rearSuspension.cornerR.staticAlign.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12861};
  (data->simulationInfo->stringParameter[134] /* vehicle.rearSuspension.cornerR.staticAlign.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[135] /* vehicle.rearSuspension.cornerR.staticAlign.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12883
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.staticCamber = vehicle.rearSuspension.cornerR.hp.rear_staticCamber
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12883};
  (data->simulationInfo->realParameter[2956] /* vehicle.rearSuspension.cornerR.staticCamber PARAM */) = (data->simulationInfo->realParameter[2650] /* vehicle.rearSuspension.cornerR.hp.rear_staticCamber PARAM */);
  TRACE_POP
}

/*
equation index: 12884
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.staticAlign.angles[2] = 57.29577951308232 * vehicle.rearSuspension.cornerR.staticCamber
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12884};
  (data->simulationInfo->realParameter[2923] /* vehicle.rearSuspension.cornerR.staticAlign.angles[2] PARAM */) = (57.29577951308232) * ((data->simulationInfo->realParameter[2956] /* vehicle.rearSuspension.cornerR.staticCamber PARAM */));
  TRACE_POP
}

/*
equation index: 12885
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.staticToe = vehicle.rearSuspension.cornerR.hp.rear_staticToe
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12885};
  (data->simulationInfo->realParameter[2957] /* vehicle.rearSuspension.cornerR.staticToe PARAM */) = (data->simulationInfo->realParameter[2651] /* vehicle.rearSuspension.cornerR.hp.rear_staticToe PARAM */);
  TRACE_POP
}

/*
equation index: 12886
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.staticAlign.angles[1] = (-57.29577951308232) * vehicle.rearSuspension.cornerR.staticToe
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12886};
  (data->simulationInfo->realParameter[2922] /* vehicle.rearSuspension.cornerR.staticAlign.angles[1] PARAM */) = (-57.29577951308232) * ((data->simulationInfo->realParameter[2957] /* vehicle.rearSuspension.cornerR.staticToe PARAM */));
  TRACE_POP
}

/*
equation index: 12904
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.spindle.shape.shapeType = vehicle.rearSuspension.cornerR.spindle.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12904};
  (data->simulationInfo->stringParameter[128] /* vehicle.rearSuspension.cornerR.spindle.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[129] /* vehicle.rearSuspension.cornerR.spindle.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12923
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod2.shape.shapeType = vehicle.rearSuspension.cornerR.tieRod.rod2.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12923};
  (data->simulationInfo->stringParameter[140] /* vehicle.rearSuspension.cornerR.tieRod.rod2.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[141] /* vehicle.rearSuspension.cornerR.tieRod.rod2.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 12938
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.shape_b.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12938};
  (data->simulationInfo->stringParameter[138] /* vehicle.rearSuspension.cornerR.tieRod.rod1.shape_b.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 12939
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.shape_a.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12939};
  (data->simulationInfo->stringParameter[137] /* vehicle.rearSuspension.cornerR.tieRod.rod1.shape_a.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 12940
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.shape_rod.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12940};
  (data->simulationInfo->stringParameter[139] /* vehicle.rearSuspension.cornerR.tieRod.rod1.shape_rod.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12943
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.rod1.massDiameter = vehicle.rearSuspension.cornerR.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12943};
  (data->simulationInfo->realParameter[2988] /* vehicle.rearSuspension.cornerR.tieRod.rod1.massDiameter PARAM */) = (data->simulationInfo->realParameter[3004] /* vehicle.rearSuspension.cornerR.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 12948
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12948};
  (data->simulationInfo->stringParameter[136] /* vehicle.rearSuspension.cornerR.tieRod.revolute.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 12952
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.phi_guess = vehicle.rearSuspension.cornerR.tieRod.phi_guess
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12952};
  (data->simulationInfo->realParameter[2982] /* vehicle.rearSuspension.cornerR.tieRod.revolute.phi_guess PARAM */) = (data->simulationInfo->realParameter[2961] /* vehicle.rearSuspension.cornerR.tieRod.phi_guess PARAM */);
  TRACE_POP
}

/*
equation index: 12953
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.phi_offset = vehicle.rearSuspension.cornerR.tieRod.phi_offset
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12953};
  (data->simulationInfo->realParameter[2983] /* vehicle.rearSuspension.cornerR.tieRod.revolute.phi_offset PARAM */) = (data->simulationInfo->realParameter[2962] /* vehicle.rearSuspension.cornerR.tieRod.phi_offset PARAM */);
  TRACE_POP
}

/*
equation index: 12957
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.tieRod.revolute.lengthConstraint = vehicle.rearSuspension.cornerR.tieRod.rod1Length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12957};
  (data->simulationInfo->realParameter[2978] /* vehicle.rearSuspension.cornerR.tieRod.revolute.lengthConstraint PARAM */) = (data->simulationInfo->realParameter[3006] /* vehicle.rearSuspension.cornerR.tieRod.rod1Length PARAM */);
  TRACE_POP
}

/*
equation index: 12986
type: SIMPLE_ASSIGN
vehicle.rearSuspension.toeLinks.toeLinkL.shape.shapeType = vehicle.rearSuspension.toeLinks.toeLinkL.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_12986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12986};
  (data->simulationInfo->stringParameter[149] /* vehicle.rearSuspension.toeLinks.toeLinkL.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[150] /* vehicle.rearSuspension.toeLinks.toeLinkL.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13000
type: SIMPLE_ASSIGN
vehicle.rearSuspension.toeLinks.toeLinkR.shape.shapeType = vehicle.rearSuspension.toeLinks.toeLinkR.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13000};
  (data->simulationInfo->stringParameter[151] /* vehicle.rearSuspension.toeLinks.toeLinkR.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[152] /* vehicle.rearSuspension.toeLinks.toeLinkR.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13014
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.mSprung = vehicle.rearSuspension.vehicleParams.vehicleMass + (-2.0) * (vehicle.rearSuspension.vehicleParams.mUnsprungFront + vehicle.rearSuspension.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13014};
  (data->simulationInfo->realParameter[3358] /* vehicle.rearSuspension.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[3377] /* vehicle.rearSuspension.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[3359] /* vehicle.rearSuspension.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[3360] /* vehicle.rearSuspension.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 13015
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.F0Rear = 4.903325 * vehicle.rearSuspension.vehicleParams.mSprung * vehicle.rearSuspension.vehicleParams.a / vehicle.rearSuspension.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13015};
  (data->simulationInfo->realParameter[3330] /* vehicle.rearSuspension.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[3358] /* vehicle.rearSuspension.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3334] /* vehicle.rearSuspension.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[3378] /* vehicle.rearSuspension.vehicleParams.wheelbase PARAM */),"vehicle.rearSuspension.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 13016
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.kRideRear = 0.10197162129779283 * vehicle.rearSuspension.vehicleParams.F0Rear * (6.283185307179586 * vehicle.rearSuspension.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13016};
  modelica_real tmp32;
  tmp32 = (6.283185307179586) * ((data->simulationInfo->realParameter[3346] /* vehicle.rearSuspension.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[3354] /* vehicle.rearSuspension.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[3330] /* vehicle.rearSuspension.vehicleParams.F0Rear PARAM */)) * ((tmp32 * tmp32)));
  TRACE_POP
}

/*
equation index: 13017
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.dWheelRear = 2.0 * vehicle.rearSuspension.vehicleParams.zetaRear * sqrt(vehicle.rearSuspension.vehicleParams.kRideRear * vehicle.rearSuspension.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13017};
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
equation index: 13018
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.F0Front = 4.903325 * vehicle.rearSuspension.vehicleParams.mSprung * vehicle.rearSuspension.vehicleParams.b / vehicle.rearSuspension.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13018};
  (data->simulationInfo->realParameter[3329] /* vehicle.rearSuspension.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[3358] /* vehicle.rearSuspension.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3338] /* vehicle.rearSuspension.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[3378] /* vehicle.rearSuspension.vehicleParams.wheelbase PARAM */),"vehicle.rearSuspension.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 13019
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.kRideFront = 0.10197162129779283 * vehicle.rearSuspension.vehicleParams.F0Front * (6.283185307179586 * vehicle.rearSuspension.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13019};
  modelica_real tmp34;
  tmp34 = (6.283185307179586) * ((data->simulationInfo->realParameter[3345] /* vehicle.rearSuspension.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[3353] /* vehicle.rearSuspension.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[3329] /* vehicle.rearSuspension.vehicleParams.F0Front PARAM */)) * ((tmp34 * tmp34)));
  TRACE_POP
}

/*
equation index: 13020
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.dWheelFront = 2.0 * vehicle.rearSuspension.vehicleParams.zetaFront * sqrt(vehicle.rearSuspension.vehicleParams.kRideFront * vehicle.rearSuspension.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13020};
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
equation index: 13021
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.hpPower = 745.7 * vehicle.rearSuspension.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13021};
  (data->simulationInfo->realParameter[3350] /* vehicle.rearSuspension.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[3349] /* vehicle.rearSuspension.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 13022
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.track = vehicle.rearSuspension.vehicleParams.tf + vehicle.rearSuspension.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13022};
  (data->simulationInfo->realParameter[3376] /* vehicle.rearSuspension.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[3374] /* vehicle.rearSuspension.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[3375] /* vehicle.rearSuspension.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 13023
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.kRear = vehicle.rearSuspension.vehicleParams.kRideRear * vehicle.rearSuspension.vehicleParams.kz / (vehicle.rearSuspension.vehicleParams.kz - vehicle.rearSuspension.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13023};
  (data->simulationInfo->realParameter[3352] /* vehicle.rearSuspension.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[3354] /* vehicle.rearSuspension.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3357] /* vehicle.rearSuspension.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[3357] /* vehicle.rearSuspension.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[3354] /* vehicle.rearSuspension.vehicleParams.kRideRear PARAM */),"vehicle.rearSuspension.vehicleParams.kz - vehicle.rearSuspension.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 13024
type: SIMPLE_ASSIGN
vehicle.rearSuspension.vehicleParams.kFront = vehicle.rearSuspension.vehicleParams.kRideFront * vehicle.rearSuspension.vehicleParams.kz / (vehicle.rearSuspension.vehicleParams.kz - vehicle.rearSuspension.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13024};
  (data->simulationInfo->realParameter[3351] /* vehicle.rearSuspension.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[3353] /* vehicle.rearSuspension.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[3357] /* vehicle.rearSuspension.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[3357] /* vehicle.rearSuspension.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[3353] /* vehicle.rearSuspension.vehicleParams.kRideFront PARAM */),"vehicle.rearSuspension.vehicleParams.kz - vehicle.rearSuspension.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 13025
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.shape.shapeType = "spring"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13025};
  (data->simulationInfo->stringParameter[6] /* vehicle.frontSuspension.cornerL.coilover.shape.shapeType PARAM */) = _OMC_LIT34;
  TRACE_POP
}

/*
equation index: 13026
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.shape_b.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13026(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13026};
  (data->simulationInfo->stringParameter[8] /* vehicle.frontSuspension.cornerL.coilover.shape_b.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13027
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.shape_a.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13027};
  (data->simulationInfo->stringParameter[7] /* vehicle.frontSuspension.cornerL.coilover.shape_a.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13032
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.length_a = world.defaultForceLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13032};
  (data->simulationInfo->realParameter[416] /* vehicle.frontSuspension.cornerL.coilover.length_a PARAM */) = (data->simulationInfo->realParameter[3847] /* world.defaultForceLength PARAM */);
  TRACE_POP
}

/*
equation index: 13033
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.mSprung = vehicle.frontSuspension.cornerL.vehicleParams.vehicleMass + (-2.0) * (vehicle.frontSuspension.cornerL.vehicleParams.mUnsprungFront + vehicle.frontSuspension.cornerL.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13033};
  (data->simulationInfo->realParameter[1034] /* vehicle.frontSuspension.cornerL.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[1053] /* vehicle.frontSuspension.cornerL.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[1035] /* vehicle.frontSuspension.cornerL.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[1036] /* vehicle.frontSuspension.cornerL.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 13034
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.F0Front = 4.903325 * vehicle.frontSuspension.cornerL.vehicleParams.mSprung * vehicle.frontSuspension.cornerL.vehicleParams.b / vehicle.frontSuspension.cornerL.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13034};
  (data->simulationInfo->realParameter[1005] /* vehicle.frontSuspension.cornerL.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[1034] /* vehicle.frontSuspension.cornerL.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1014] /* vehicle.frontSuspension.cornerL.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[1054] /* vehicle.frontSuspension.cornerL.vehicleParams.wheelbase PARAM */),"vehicle.frontSuspension.cornerL.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 13035
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.kRideFront = 0.10197162129779283 * vehicle.frontSuspension.cornerL.vehicleParams.F0Front * (6.283185307179586 * vehicle.frontSuspension.cornerL.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13035};
  modelica_real tmp36;
  tmp36 = (6.283185307179586) * ((data->simulationInfo->realParameter[1021] /* vehicle.frontSuspension.cornerL.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[1029] /* vehicle.frontSuspension.cornerL.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[1005] /* vehicle.frontSuspension.cornerL.vehicleParams.F0Front PARAM */)) * ((tmp36 * tmp36)));
  TRACE_POP
}

/*
equation index: 13036
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.dWheelFront = 2.0 * vehicle.frontSuspension.cornerL.vehicleParams.zetaFront * sqrt(vehicle.frontSuspension.cornerL.vehicleParams.kRideFront * vehicle.frontSuspension.cornerL.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13036(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13036};
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
equation index: 13037
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.dWheel = vehicle.frontSuspension.cornerL.vehicleParams.dWheelFront
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13037};
  (data->simulationInfo->realParameter[427] /* vehicle.frontSuspension.cornerL.dWheel PARAM */) = (data->simulationInfo->realParameter[1017] /* vehicle.frontSuspension.cornerL.vehicleParams.dWheelFront PARAM */);
  TRACE_POP
}

/*
equation index: 13038
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.d = vehicle.frontSuspension.cornerL.dWheel / vehicle.frontSuspension.cornerL.motionRatio ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13038};
  modelica_real tmp38;
  tmp38 = (data->simulationInfo->realParameter[630] /* vehicle.frontSuspension.cornerL.motionRatio PARAM */);
  (data->simulationInfo->realParameter[414] /* vehicle.frontSuspension.cornerL.coilover.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[427] /* vehicle.frontSuspension.cornerL.dWheel PARAM */),(tmp38 * tmp38),"vehicle.frontSuspension.cornerL.motionRatio ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 13039
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.kFront = vehicle.frontSuspension.cornerL.vehicleParams.kRideFront * vehicle.frontSuspension.cornerL.vehicleParams.kz / (vehicle.frontSuspension.cornerL.vehicleParams.kz - vehicle.frontSuspension.cornerL.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13039};
  (data->simulationInfo->realParameter[1027] /* vehicle.frontSuspension.cornerL.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[1029] /* vehicle.frontSuspension.cornerL.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1033] /* vehicle.frontSuspension.cornerL.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[1033] /* vehicle.frontSuspension.cornerL.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[1029] /* vehicle.frontSuspension.cornerL.vehicleParams.kRideFront PARAM */),"vehicle.frontSuspension.cornerL.vehicleParams.kz - vehicle.frontSuspension.cornerL.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 13040
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.kWheel = vehicle.frontSuspension.cornerL.vehicleParams.kFront
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13040(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13040};
  (data->simulationInfo->realParameter[607] /* vehicle.frontSuspension.cornerL.kWheel PARAM */) = (data->simulationInfo->realParameter[1027] /* vehicle.frontSuspension.cornerL.vehicleParams.kFront PARAM */);
  TRACE_POP
}

/*
equation index: 13041
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.F0 = vehicle.frontSuspension.cornerL.vehicleParams.F0Front
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13041};
  (data->simulationInfo->realParameter[411] /* vehicle.frontSuspension.cornerL.F0 PARAM */) = (data->simulationInfo->realParameter[1005] /* vehicle.frontSuspension.cornerL.vehicleParams.F0Front PARAM */);
  TRACE_POP
}

/*
equation index: 13042
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.s_unstretched = 0.42154477816715985 + vehicle.frontSuspension.cornerL.F0 * vehicle.frontSuspension.cornerL.motionRatio / vehicle.frontSuspension.cornerL.kWheel
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13042};
  (data->simulationInfo->realParameter[418] /* vehicle.frontSuspension.cornerL.coilover.s_unstretched PARAM */) = 0.42154477816715985 + ((data->simulationInfo->realParameter[411] /* vehicle.frontSuspension.cornerL.F0 PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[630] /* vehicle.frontSuspension.cornerL.motionRatio PARAM */),(data->simulationInfo->realParameter[607] /* vehicle.frontSuspension.cornerL.kWheel PARAM */),"vehicle.frontSuspension.cornerL.kWheel",equationIndexes));
  TRACE_POP
}

/*
equation index: 13043
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.c = vehicle.frontSuspension.cornerL.kWheel / vehicle.frontSuspension.cornerL.motionRatio ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13043(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13043};
  modelica_real tmp39;
  tmp39 = (data->simulationInfo->realParameter[630] /* vehicle.frontSuspension.cornerL.motionRatio PARAM */);
  (data->simulationInfo->realParameter[413] /* vehicle.frontSuspension.cornerL.coilover.c PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[607] /* vehicle.frontSuspension.cornerL.kWheel PARAM */),(tmp39 * tmp39),"vehicle.frontSuspension.cornerL.motionRatio ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 13045
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.shape.shapeType = vehicle.frontSuspension.cornerL.springArm.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13045(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13045};
  (data->simulationInfo->stringParameter[21] /* vehicle.frontSuspension.cornerL.springArm.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[22] /* vehicle.frontSuspension.cornerL.springArm.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13059
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springChassis.shape.shapeType = vehicle.frontSuspension.cornerL.springChassis.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13059(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13059};
  (data->simulationInfo->stringParameter[23] /* vehicle.frontSuspension.cornerL.springChassis.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[24] /* vehicle.frontSuspension.cornerL.springChassis.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13078
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod2.shape.shapeType = vehicle.frontSuspension.cornerL.jointUSR.rod2.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13078};
  (data->simulationInfo->stringParameter[15] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[16] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13092
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape2.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13092};
  (data->simulationInfo->stringParameter[14] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape2.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13093
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape1.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13093};
  (data->simulationInfo->stringParameter[13] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape1.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13094
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.sphericalShape_b.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13094};
  (data->simulationInfo->stringParameter[12] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.sphericalShape_b.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 13095
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.rodShape.shapeType = vehicle.frontSuspension.cornerL.jointUSR.rod1.rodShapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13095};
  (data->simulationInfo->stringParameter[10] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.rodShape.shapeType PARAM */) = (data->simulationInfo->stringParameter[11] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.rodShapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13116
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13116};
  (data->simulationInfo->stringParameter[9] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13120
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.phi_guess = vehicle.frontSuspension.cornerL.jointUSR.phi_guess
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13120};
  (data->simulationInfo->realParameter[536] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.phi_guess PARAM */) = (data->simulationInfo->realParameter[512] /* vehicle.frontSuspension.cornerL.jointUSR.phi_guess PARAM */);
  TRACE_POP
}

/*
equation index: 13121
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.phi_offset = vehicle.frontSuspension.cornerL.jointUSR.phi_offset
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13121};
  (data->simulationInfo->realParameter[537] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.phi_offset PARAM */) = (data->simulationInfo->realParameter[513] /* vehicle.frontSuspension.cornerL.jointUSR.phi_offset PARAM */);
  TRACE_POP
}

/*
equation index: 13147
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.lcaMount.shape.shapeType = vehicle.frontSuspension.cornerL.lcaMount.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13147};
  (data->simulationInfo->stringParameter[17] /* vehicle.frontSuspension.cornerL.lcaMount.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[18] /* vehicle.frontSuspension.cornerL.lcaMount.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13162
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.uca.shape.shapeType = vehicle.frontSuspension.cornerL.uca.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13162};
  (data->simulationInfo->stringParameter[33] /* vehicle.frontSuspension.cornerL.uca.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[34] /* vehicle.frontSuspension.cornerL.uca.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13177
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13177};
  (data->simulationInfo->stringParameter[37] /* vehicle.frontSuspension.cornerL.ucaPivot.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13184
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaMount.shape.shapeType = vehicle.frontSuspension.cornerL.ucaMount.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13184};
  (data->simulationInfo->stringParameter[35] /* vehicle.frontSuspension.cornerL.ucaMount.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[36] /* vehicle.frontSuspension.cornerL.ucaMount.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13287
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.F0Rear = 4.903325 * vehicle.frontSuspension.cornerL.vehicleParams.mSprung * vehicle.frontSuspension.cornerL.vehicleParams.a / vehicle.frontSuspension.cornerL.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13287};
  (data->simulationInfo->realParameter[1006] /* vehicle.frontSuspension.cornerL.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[1034] /* vehicle.frontSuspension.cornerL.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1010] /* vehicle.frontSuspension.cornerL.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[1054] /* vehicle.frontSuspension.cornerL.vehicleParams.wheelbase PARAM */),"vehicle.frontSuspension.cornerL.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 13288
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.kRideRear = 0.10197162129779283 * vehicle.frontSuspension.cornerL.vehicleParams.F0Rear * (6.283185307179586 * vehicle.frontSuspension.cornerL.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13288};
  modelica_real tmp40;
  tmp40 = (6.283185307179586) * ((data->simulationInfo->realParameter[1022] /* vehicle.frontSuspension.cornerL.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[1030] /* vehicle.frontSuspension.cornerL.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[1006] /* vehicle.frontSuspension.cornerL.vehicleParams.F0Rear PARAM */)) * ((tmp40 * tmp40)));
  TRACE_POP
}

/*
equation index: 13289
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.dWheelRear = 2.0 * vehicle.frontSuspension.cornerL.vehicleParams.zetaRear * sqrt(vehicle.frontSuspension.cornerL.vehicleParams.kRideRear * vehicle.frontSuspension.cornerL.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13289};
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
equation index: 13290
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.hpPower = 745.7 * vehicle.frontSuspension.cornerL.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13290};
  (data->simulationInfo->realParameter[1026] /* vehicle.frontSuspension.cornerL.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[1025] /* vehicle.frontSuspension.cornerL.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 13291
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.track = vehicle.frontSuspension.cornerL.vehicleParams.tf + vehicle.frontSuspension.cornerL.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13291};
  (data->simulationInfo->realParameter[1052] /* vehicle.frontSuspension.cornerL.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[1050] /* vehicle.frontSuspension.cornerL.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[1051] /* vehicle.frontSuspension.cornerL.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 13292
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.vehicleParams.kRear = vehicle.frontSuspension.cornerL.vehicleParams.kRideRear * vehicle.frontSuspension.cornerL.vehicleParams.kz / (vehicle.frontSuspension.cornerL.vehicleParams.kz - vehicle.frontSuspension.cornerL.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13292};
  (data->simulationInfo->realParameter[1028] /* vehicle.frontSuspension.cornerL.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[1030] /* vehicle.frontSuspension.cornerL.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1033] /* vehicle.frontSuspension.cornerL.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[1033] /* vehicle.frontSuspension.cornerL.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[1030] /* vehicle.frontSuspension.cornerL.vehicleParams.kRideRear PARAM */),"vehicle.frontSuspension.cornerL.vehicleParams.kz - vehicle.frontSuspension.cornerL.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 13298
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.sphere.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13298};
  (data->simulationInfo->stringParameter[39] /* vehicle.frontSuspension.cornerL.upright.sphere.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 13299
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13299};
  (data->simulationInfo->stringParameter[38] /* vehicle.frontSuspension.cornerL.upright.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13300
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.phi_start[3] = vehicle.frontSuspension.cornerL.upright.angles_start[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13300};
  (data->simulationInfo->realParameter[990] /* vehicle.frontSuspension.cornerL.upright.phi_start[3] PARAM */) = (data->simulationInfo->realParameter[978] /* vehicle.frontSuspension.cornerL.upright.angles_start[3] PARAM */);
  TRACE_POP
}

/*
equation index: 13301
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.phi_start[2] = vehicle.frontSuspension.cornerL.upright.angles_start[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13301};
  (data->simulationInfo->realParameter[989] /* vehicle.frontSuspension.cornerL.upright.phi_start[2] PARAM */) = (data->simulationInfo->realParameter[977] /* vehicle.frontSuspension.cornerL.upright.angles_start[2] PARAM */);
  TRACE_POP
}

/*
equation index: 13302
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.phi_start[1] = vehicle.frontSuspension.cornerL.upright.angles_start[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13302};
  (data->simulationInfo->realParameter[988] /* vehicle.frontSuspension.cornerL.upright.phi_start[1] PARAM */) = (data->simulationInfo->realParameter[976] /* vehicle.frontSuspension.cornerL.upright.angles_start[1] PARAM */);
  TRACE_POP
}

/*
equation index: 13319
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.I[3,3] = vehicle.frontSuspension.cornerL.upright.I_33
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13319};
  (data->simulationInfo->realParameter[953] /* vehicle.frontSuspension.cornerL.upright.I[3,3] PARAM */) = (data->simulationInfo->realParameter[959] /* vehicle.frontSuspension.cornerL.upright.I_33 PARAM */);
  TRACE_POP
}

/*
equation index: 13320
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.I[3,2] = vehicle.frontSuspension.cornerL.upright.I_32
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13320};
  (data->simulationInfo->realParameter[952] /* vehicle.frontSuspension.cornerL.upright.I[3,2] PARAM */) = (data->simulationInfo->realParameter[958] /* vehicle.frontSuspension.cornerL.upright.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 13321
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.I[3,1] = vehicle.frontSuspension.cornerL.upright.I_31
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13321};
  (data->simulationInfo->realParameter[951] /* vehicle.frontSuspension.cornerL.upright.I[3,1] PARAM */) = (data->simulationInfo->realParameter[957] /* vehicle.frontSuspension.cornerL.upright.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 13322
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.I[2,3] = vehicle.frontSuspension.cornerL.upright.I_32
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13322};
  (data->simulationInfo->realParameter[950] /* vehicle.frontSuspension.cornerL.upright.I[2,3] PARAM */) = (data->simulationInfo->realParameter[958] /* vehicle.frontSuspension.cornerL.upright.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 13323
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.I[2,2] = vehicle.frontSuspension.cornerL.upright.I_22
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13323};
  (data->simulationInfo->realParameter[949] /* vehicle.frontSuspension.cornerL.upright.I[2,2] PARAM */) = (data->simulationInfo->realParameter[956] /* vehicle.frontSuspension.cornerL.upright.I_22 PARAM */);
  TRACE_POP
}

/*
equation index: 13324
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.I[2,1] = vehicle.frontSuspension.cornerL.upright.I_21
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13324};
  (data->simulationInfo->realParameter[948] /* vehicle.frontSuspension.cornerL.upright.I[2,1] PARAM */) = (data->simulationInfo->realParameter[955] /* vehicle.frontSuspension.cornerL.upright.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 13325
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.I[1,3] = vehicle.frontSuspension.cornerL.upright.I_31
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13325};
  (data->simulationInfo->realParameter[947] /* vehicle.frontSuspension.cornerL.upright.I[1,3] PARAM */) = (data->simulationInfo->realParameter[957] /* vehicle.frontSuspension.cornerL.upright.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 13326
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.I[1,2] = vehicle.frontSuspension.cornerL.upright.I_21
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13326};
  (data->simulationInfo->realParameter[946] /* vehicle.frontSuspension.cornerL.upright.I[1,2] PARAM */) = (data->simulationInfo->realParameter[955] /* vehicle.frontSuspension.cornerL.upright.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 13327
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.I[1,1] = vehicle.frontSuspension.cornerL.upright.I_11
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13327};
  (data->simulationInfo->realParameter[945] /* vehicle.frontSuspension.cornerL.upright.I[1,1] PARAM */) = (data->simulationInfo->realParameter[954] /* vehicle.frontSuspension.cornerL.upright.I_11 PARAM */);
  TRACE_POP
}

/*
equation index: 13340
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.mUnsprung = vehicle.frontSuspension.cornerL.vehicleParams.mUnsprungFront
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13340};
  (data->simulationInfo->realParameter[629] /* vehicle.frontSuspension.cornerL.mUnsprung PARAM */) = (data->simulationInfo->realParameter[1035] /* vehicle.frontSuspension.cornerL.vehicleParams.mUnsprungFront PARAM */);
  TRACE_POP
}

/*
equation index: 13341
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.m = vehicle.frontSuspension.cornerL.mUnsprung
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13341};
  (data->simulationInfo->realParameter[987] /* vehicle.frontSuspension.cornerL.upright.m PARAM */) = (data->simulationInfo->realParameter[629] /* vehicle.frontSuspension.cornerL.mUnsprung PARAM */);
  TRACE_POP
}

/*
equation index: 13343
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.staticAlign.shape.shapeType = vehicle.frontSuspension.cornerL.staticAlign.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13343};
  (data->simulationInfo->stringParameter[25] /* vehicle.frontSuspension.cornerL.staticAlign.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[26] /* vehicle.frontSuspension.cornerL.staticAlign.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13365
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.staticCamber = vehicle.frontSuspension.cornerL.hp.front_staticCamber
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13365};
  (data->simulationInfo->realParameter[802] /* vehicle.frontSuspension.cornerL.staticCamber PARAM */) = (data->simulationInfo->realParameter[461] /* vehicle.frontSuspension.cornerL.hp.front_staticCamber PARAM */);
  TRACE_POP
}

/*
equation index: 13366
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.staticAlign.angles[2] = (-57.29577951308232) * vehicle.frontSuspension.cornerL.staticCamber
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13366};
  (data->simulationInfo->realParameter[769] /* vehicle.frontSuspension.cornerL.staticAlign.angles[2] PARAM */) = (-57.29577951308232) * ((data->simulationInfo->realParameter[802] /* vehicle.frontSuspension.cornerL.staticCamber PARAM */));
  TRACE_POP
}

/*
equation index: 13367
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.staticToe = vehicle.frontSuspension.cornerL.hp.front_staticToe
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13367};
  (data->simulationInfo->realParameter[803] /* vehicle.frontSuspension.cornerL.staticToe PARAM */) = (data->simulationInfo->realParameter[462] /* vehicle.frontSuspension.cornerL.hp.front_staticToe PARAM */);
  TRACE_POP
}

/*
equation index: 13368
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.staticAlign.angles[1] = 57.29577951308232 * vehicle.frontSuspension.cornerL.staticToe
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13368};
  (data->simulationInfo->realParameter[768] /* vehicle.frontSuspension.cornerL.staticAlign.angles[1] PARAM */) = (57.29577951308232) * ((data->simulationInfo->realParameter[803] /* vehicle.frontSuspension.cornerL.staticToe PARAM */));
  TRACE_POP
}

/*
equation index: 13386
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.spindle.shape.shapeType = vehicle.frontSuspension.cornerL.spindle.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13386};
  (data->simulationInfo->stringParameter[19] /* vehicle.frontSuspension.cornerL.spindle.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[20] /* vehicle.frontSuspension.cornerL.spindle.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13405
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod2.shape.shapeType = vehicle.frontSuspension.cornerL.tieRod.rod2.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13405};
  (data->simulationInfo->stringParameter[31] /* vehicle.frontSuspension.cornerL.tieRod.rod2.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[32] /* vehicle.frontSuspension.cornerL.tieRod.rod2.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13420
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.shape_b.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13420};
  (data->simulationInfo->stringParameter[29] /* vehicle.frontSuspension.cornerL.tieRod.rod1.shape_b.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 13421
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.shape_a.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13421};
  (data->simulationInfo->stringParameter[28] /* vehicle.frontSuspension.cornerL.tieRod.rod1.shape_a.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 13422
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.shape_rod.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13422};
  (data->simulationInfo->stringParameter[30] /* vehicle.frontSuspension.cornerL.tieRod.rod1.shape_rod.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13425
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.massDiameter = vehicle.frontSuspension.cornerL.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13425};
  (data->simulationInfo->realParameter[834] /* vehicle.frontSuspension.cornerL.tieRod.rod1.massDiameter PARAM */) = (data->simulationInfo->realParameter[850] /* vehicle.frontSuspension.cornerL.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 13430
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13430};
  (data->simulationInfo->stringParameter[27] /* vehicle.frontSuspension.cornerL.tieRod.revolute.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13434
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.phi_guess = vehicle.frontSuspension.cornerL.tieRod.phi_guess
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13434};
  (data->simulationInfo->realParameter[828] /* vehicle.frontSuspension.cornerL.tieRod.revolute.phi_guess PARAM */) = (data->simulationInfo->realParameter[807] /* vehicle.frontSuspension.cornerL.tieRod.phi_guess PARAM */);
  TRACE_POP
}

/*
equation index: 13435
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.phi_offset = vehicle.frontSuspension.cornerL.tieRod.phi_offset
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13435};
  (data->simulationInfo->realParameter[829] /* vehicle.frontSuspension.cornerL.tieRod.revolute.phi_offset PARAM */) = (data->simulationInfo->realParameter[808] /* vehicle.frontSuspension.cornerL.tieRod.phi_offset PARAM */);
  TRACE_POP
}

/*
equation index: 13439
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.lengthConstraint = vehicle.frontSuspension.cornerL.tieRod.rod1Length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13439};
  (data->simulationInfo->realParameter[824] /* vehicle.frontSuspension.cornerL.tieRod.revolute.lengthConstraint PARAM */) = (data->simulationInfo->realParameter[852] /* vehicle.frontSuspension.cornerL.tieRod.rod1Length PARAM */);
  TRACE_POP
}

/*
equation index: 13465
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.shape.shapeType = "spring"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13465};
  (data->simulationInfo->stringParameter[40] /* vehicle.frontSuspension.cornerR.coilover.shape.shapeType PARAM */) = _OMC_LIT34;
  TRACE_POP
}

/*
equation index: 13466
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.shape_b.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13466};
  (data->simulationInfo->stringParameter[42] /* vehicle.frontSuspension.cornerR.coilover.shape_b.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13467
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.shape_a.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13467};
  (data->simulationInfo->stringParameter[41] /* vehicle.frontSuspension.cornerR.coilover.shape_a.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13472
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.length_a = world.defaultForceLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13472};
  (data->simulationInfo->realParameter[1063] /* vehicle.frontSuspension.cornerR.coilover.length_a PARAM */) = (data->simulationInfo->realParameter[3847] /* world.defaultForceLength PARAM */);
  TRACE_POP
}

/*
equation index: 13473
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.mSprung = vehicle.frontSuspension.cornerR.vehicleParams.vehicleMass + (-2.0) * (vehicle.frontSuspension.cornerR.vehicleParams.mUnsprungFront + vehicle.frontSuspension.cornerR.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13473};
  (data->simulationInfo->realParameter[1681] /* vehicle.frontSuspension.cornerR.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[1700] /* vehicle.frontSuspension.cornerR.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[1682] /* vehicle.frontSuspension.cornerR.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[1683] /* vehicle.frontSuspension.cornerR.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 13474
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.F0Front = 4.903325 * vehicle.frontSuspension.cornerR.vehicleParams.mSprung * vehicle.frontSuspension.cornerR.vehicleParams.b / vehicle.frontSuspension.cornerR.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13474};
  (data->simulationInfo->realParameter[1652] /* vehicle.frontSuspension.cornerR.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[1681] /* vehicle.frontSuspension.cornerR.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1661] /* vehicle.frontSuspension.cornerR.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[1701] /* vehicle.frontSuspension.cornerR.vehicleParams.wheelbase PARAM */),"vehicle.frontSuspension.cornerR.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 13475
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.kRideFront = 0.10197162129779283 * vehicle.frontSuspension.cornerR.vehicleParams.F0Front * (6.283185307179586 * vehicle.frontSuspension.cornerR.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13475};
  modelica_real tmp42;
  tmp42 = (6.283185307179586) * ((data->simulationInfo->realParameter[1668] /* vehicle.frontSuspension.cornerR.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[1676] /* vehicle.frontSuspension.cornerR.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[1652] /* vehicle.frontSuspension.cornerR.vehicleParams.F0Front PARAM */)) * ((tmp42 * tmp42)));
  TRACE_POP
}

/*
equation index: 13476
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.dWheelFront = 2.0 * vehicle.frontSuspension.cornerR.vehicleParams.zetaFront * sqrt(vehicle.frontSuspension.cornerR.vehicleParams.kRideFront * vehicle.frontSuspension.cornerR.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13476};
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
equation index: 13477
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.dWheel = vehicle.frontSuspension.cornerR.vehicleParams.dWheelFront
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13477};
  (data->simulationInfo->realParameter[1074] /* vehicle.frontSuspension.cornerR.dWheel PARAM */) = (data->simulationInfo->realParameter[1664] /* vehicle.frontSuspension.cornerR.vehicleParams.dWheelFront PARAM */);
  TRACE_POP
}

/*
equation index: 13478
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.d = vehicle.frontSuspension.cornerR.dWheel / vehicle.frontSuspension.cornerR.motionRatio ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13478};
  modelica_real tmp44;
  tmp44 = (data->simulationInfo->realParameter[1277] /* vehicle.frontSuspension.cornerR.motionRatio PARAM */);
  (data->simulationInfo->realParameter[1061] /* vehicle.frontSuspension.cornerR.coilover.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[1074] /* vehicle.frontSuspension.cornerR.dWheel PARAM */),(tmp44 * tmp44),"vehicle.frontSuspension.cornerR.motionRatio ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 13479
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.kFront = vehicle.frontSuspension.cornerR.vehicleParams.kRideFront * vehicle.frontSuspension.cornerR.vehicleParams.kz / (vehicle.frontSuspension.cornerR.vehicleParams.kz - vehicle.frontSuspension.cornerR.vehicleParams.kRideFront)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13479};
  (data->simulationInfo->realParameter[1674] /* vehicle.frontSuspension.cornerR.vehicleParams.kFront PARAM */) = ((data->simulationInfo->realParameter[1676] /* vehicle.frontSuspension.cornerR.vehicleParams.kRideFront PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1680] /* vehicle.frontSuspension.cornerR.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[1680] /* vehicle.frontSuspension.cornerR.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[1676] /* vehicle.frontSuspension.cornerR.vehicleParams.kRideFront PARAM */),"vehicle.frontSuspension.cornerR.vehicleParams.kz - vehicle.frontSuspension.cornerR.vehicleParams.kRideFront",equationIndexes));
  TRACE_POP
}

/*
equation index: 13480
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.kWheel = vehicle.frontSuspension.cornerR.vehicleParams.kFront
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13480};
  (data->simulationInfo->realParameter[1254] /* vehicle.frontSuspension.cornerR.kWheel PARAM */) = (data->simulationInfo->realParameter[1674] /* vehicle.frontSuspension.cornerR.vehicleParams.kFront PARAM */);
  TRACE_POP
}

/*
equation index: 13481
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.F0 = vehicle.frontSuspension.cornerR.vehicleParams.F0Front
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13481};
  (data->simulationInfo->realParameter[1058] /* vehicle.frontSuspension.cornerR.F0 PARAM */) = (data->simulationInfo->realParameter[1652] /* vehicle.frontSuspension.cornerR.vehicleParams.F0Front PARAM */);
  TRACE_POP
}

/*
equation index: 13482
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.s_unstretched = 0.42154477816715985 + vehicle.frontSuspension.cornerR.F0 * vehicle.frontSuspension.cornerR.motionRatio / vehicle.frontSuspension.cornerR.kWheel
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13482};
  (data->simulationInfo->realParameter[1065] /* vehicle.frontSuspension.cornerR.coilover.s_unstretched PARAM */) = 0.42154477816715985 + ((data->simulationInfo->realParameter[1058] /* vehicle.frontSuspension.cornerR.F0 PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1277] /* vehicle.frontSuspension.cornerR.motionRatio PARAM */),(data->simulationInfo->realParameter[1254] /* vehicle.frontSuspension.cornerR.kWheel PARAM */),"vehicle.frontSuspension.cornerR.kWheel",equationIndexes));
  TRACE_POP
}

/*
equation index: 13483
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.c = vehicle.frontSuspension.cornerR.kWheel / vehicle.frontSuspension.cornerR.motionRatio ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13483};
  modelica_real tmp45;
  tmp45 = (data->simulationInfo->realParameter[1277] /* vehicle.frontSuspension.cornerR.motionRatio PARAM */);
  (data->simulationInfo->realParameter[1060] /* vehicle.frontSuspension.cornerR.coilover.c PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[1254] /* vehicle.frontSuspension.cornerR.kWheel PARAM */),(tmp45 * tmp45),"vehicle.frontSuspension.cornerR.motionRatio ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 13485
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springArm.shape.shapeType = vehicle.frontSuspension.cornerR.springArm.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13485};
  (data->simulationInfo->stringParameter[55] /* vehicle.frontSuspension.cornerR.springArm.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[56] /* vehicle.frontSuspension.cornerR.springArm.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13499
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springChassis.shape.shapeType = vehicle.frontSuspension.cornerR.springChassis.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13499};
  (data->simulationInfo->stringParameter[57] /* vehicle.frontSuspension.cornerR.springChassis.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[58] /* vehicle.frontSuspension.cornerR.springChassis.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13518
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod2.shape.shapeType = vehicle.frontSuspension.cornerR.jointUSR.rod2.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13518};
  (data->simulationInfo->stringParameter[49] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[50] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13532
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape2.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13532};
  (data->simulationInfo->stringParameter[48] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape2.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13533
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13533};
  (data->simulationInfo->stringParameter[47] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13534
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13534};
  (data->simulationInfo->stringParameter[46] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 13535
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.shapeType = vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13535};
  (data->simulationInfo->stringParameter[44] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.shapeType PARAM */) = (data->simulationInfo->stringParameter[45] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13556
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13556};
  (data->simulationInfo->stringParameter[43] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13560
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.phi_guess = vehicle.frontSuspension.cornerR.jointUSR.phi_guess
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13560};
  (data->simulationInfo->realParameter[1183] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.phi_guess PARAM */) = (data->simulationInfo->realParameter[1159] /* vehicle.frontSuspension.cornerR.jointUSR.phi_guess PARAM */);
  TRACE_POP
}

/*
equation index: 13561
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.phi_offset = vehicle.frontSuspension.cornerR.jointUSR.phi_offset
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13561};
  (data->simulationInfo->realParameter[1184] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.phi_offset PARAM */) = (data->simulationInfo->realParameter[1160] /* vehicle.frontSuspension.cornerR.jointUSR.phi_offset PARAM */);
  TRACE_POP
}

/*
equation index: 13587
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.shape.shapeType = vehicle.frontSuspension.cornerR.lcaMount.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13587};
  (data->simulationInfo->stringParameter[51] /* vehicle.frontSuspension.cornerR.lcaMount.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[52] /* vehicle.frontSuspension.cornerR.lcaMount.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13602
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.shape.shapeType = vehicle.frontSuspension.cornerR.uca.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13602};
  (data->simulationInfo->stringParameter[67] /* vehicle.frontSuspension.cornerR.uca.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[68] /* vehicle.frontSuspension.cornerR.uca.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13617
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13617};
  (data->simulationInfo->stringParameter[71] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13624
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.shape.shapeType = vehicle.frontSuspension.cornerR.ucaMount.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13624};
  (data->simulationInfo->stringParameter[69] /* vehicle.frontSuspension.cornerR.ucaMount.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[70] /* vehicle.frontSuspension.cornerR.ucaMount.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13727
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.F0Rear = 4.903325 * vehicle.frontSuspension.cornerR.vehicleParams.mSprung * vehicle.frontSuspension.cornerR.vehicleParams.a / vehicle.frontSuspension.cornerR.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13727};
  (data->simulationInfo->realParameter[1653] /* vehicle.frontSuspension.cornerR.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[1681] /* vehicle.frontSuspension.cornerR.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1657] /* vehicle.frontSuspension.cornerR.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[1701] /* vehicle.frontSuspension.cornerR.vehicleParams.wheelbase PARAM */),"vehicle.frontSuspension.cornerR.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 13728
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.kRideRear = 0.10197162129779283 * vehicle.frontSuspension.cornerR.vehicleParams.F0Rear * (6.283185307179586 * vehicle.frontSuspension.cornerR.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13728};
  modelica_real tmp46;
  tmp46 = (6.283185307179586) * ((data->simulationInfo->realParameter[1669] /* vehicle.frontSuspension.cornerR.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[1677] /* vehicle.frontSuspension.cornerR.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[1653] /* vehicle.frontSuspension.cornerR.vehicleParams.F0Rear PARAM */)) * ((tmp46 * tmp46)));
  TRACE_POP
}

/*
equation index: 13729
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.dWheelRear = 2.0 * vehicle.frontSuspension.cornerR.vehicleParams.zetaRear * sqrt(vehicle.frontSuspension.cornerR.vehicleParams.kRideRear * vehicle.frontSuspension.cornerR.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13729};
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
equation index: 13730
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.hpPower = 745.7 * vehicle.frontSuspension.cornerR.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13730};
  (data->simulationInfo->realParameter[1673] /* vehicle.frontSuspension.cornerR.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[1672] /* vehicle.frontSuspension.cornerR.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 13731
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.track = vehicle.frontSuspension.cornerR.vehicleParams.tf + vehicle.frontSuspension.cornerR.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13731};
  (data->simulationInfo->realParameter[1699] /* vehicle.frontSuspension.cornerR.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[1697] /* vehicle.frontSuspension.cornerR.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[1698] /* vehicle.frontSuspension.cornerR.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 13732
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.vehicleParams.kRear = vehicle.frontSuspension.cornerR.vehicleParams.kRideRear * vehicle.frontSuspension.cornerR.vehicleParams.kz / (vehicle.frontSuspension.cornerR.vehicleParams.kz - vehicle.frontSuspension.cornerR.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13732};
  (data->simulationInfo->realParameter[1675] /* vehicle.frontSuspension.cornerR.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[1677] /* vehicle.frontSuspension.cornerR.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1680] /* vehicle.frontSuspension.cornerR.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[1680] /* vehicle.frontSuspension.cornerR.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[1677] /* vehicle.frontSuspension.cornerR.vehicleParams.kRideRear PARAM */),"vehicle.frontSuspension.cornerR.vehicleParams.kz - vehicle.frontSuspension.cornerR.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}

/*
equation index: 13738
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.sphere.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13738};
  (data->simulationInfo->stringParameter[73] /* vehicle.frontSuspension.cornerR.upright.sphere.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 13739
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13739};
  (data->simulationInfo->stringParameter[72] /* vehicle.frontSuspension.cornerR.upright.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13740
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.phi_start[3] = vehicle.frontSuspension.cornerR.upright.angles_start[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13740};
  (data->simulationInfo->realParameter[1637] /* vehicle.frontSuspension.cornerR.upright.phi_start[3] PARAM */) = (data->simulationInfo->realParameter[1625] /* vehicle.frontSuspension.cornerR.upright.angles_start[3] PARAM */);
  TRACE_POP
}

/*
equation index: 13741
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.phi_start[2] = vehicle.frontSuspension.cornerR.upright.angles_start[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13741};
  (data->simulationInfo->realParameter[1636] /* vehicle.frontSuspension.cornerR.upright.phi_start[2] PARAM */) = (data->simulationInfo->realParameter[1624] /* vehicle.frontSuspension.cornerR.upright.angles_start[2] PARAM */);
  TRACE_POP
}

/*
equation index: 13742
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.phi_start[1] = vehicle.frontSuspension.cornerR.upright.angles_start[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13742};
  (data->simulationInfo->realParameter[1635] /* vehicle.frontSuspension.cornerR.upright.phi_start[1] PARAM */) = (data->simulationInfo->realParameter[1623] /* vehicle.frontSuspension.cornerR.upright.angles_start[1] PARAM */);
  TRACE_POP
}

/*
equation index: 13759
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.I[3,3] = vehicle.frontSuspension.cornerR.upright.I_33
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13759};
  (data->simulationInfo->realParameter[1600] /* vehicle.frontSuspension.cornerR.upright.I[3,3] PARAM */) = (data->simulationInfo->realParameter[1606] /* vehicle.frontSuspension.cornerR.upright.I_33 PARAM */);
  TRACE_POP
}

/*
equation index: 13760
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.I[3,2] = vehicle.frontSuspension.cornerR.upright.I_32
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13760};
  (data->simulationInfo->realParameter[1599] /* vehicle.frontSuspension.cornerR.upright.I[3,2] PARAM */) = (data->simulationInfo->realParameter[1605] /* vehicle.frontSuspension.cornerR.upright.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 13761
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.I[3,1] = vehicle.frontSuspension.cornerR.upright.I_31
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13761};
  (data->simulationInfo->realParameter[1598] /* vehicle.frontSuspension.cornerR.upright.I[3,1] PARAM */) = (data->simulationInfo->realParameter[1604] /* vehicle.frontSuspension.cornerR.upright.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 13762
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.I[2,3] = vehicle.frontSuspension.cornerR.upright.I_32
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13762};
  (data->simulationInfo->realParameter[1597] /* vehicle.frontSuspension.cornerR.upright.I[2,3] PARAM */) = (data->simulationInfo->realParameter[1605] /* vehicle.frontSuspension.cornerR.upright.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 13763
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.I[2,2] = vehicle.frontSuspension.cornerR.upright.I_22
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13763};
  (data->simulationInfo->realParameter[1596] /* vehicle.frontSuspension.cornerR.upright.I[2,2] PARAM */) = (data->simulationInfo->realParameter[1603] /* vehicle.frontSuspension.cornerR.upright.I_22 PARAM */);
  TRACE_POP
}

/*
equation index: 13764
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.I[2,1] = vehicle.frontSuspension.cornerR.upright.I_21
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13764};
  (data->simulationInfo->realParameter[1595] /* vehicle.frontSuspension.cornerR.upright.I[2,1] PARAM */) = (data->simulationInfo->realParameter[1602] /* vehicle.frontSuspension.cornerR.upright.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 13765
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.I[1,3] = vehicle.frontSuspension.cornerR.upright.I_31
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13765};
  (data->simulationInfo->realParameter[1594] /* vehicle.frontSuspension.cornerR.upright.I[1,3] PARAM */) = (data->simulationInfo->realParameter[1604] /* vehicle.frontSuspension.cornerR.upright.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 13766
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.I[1,2] = vehicle.frontSuspension.cornerR.upright.I_21
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13766};
  (data->simulationInfo->realParameter[1593] /* vehicle.frontSuspension.cornerR.upright.I[1,2] PARAM */) = (data->simulationInfo->realParameter[1602] /* vehicle.frontSuspension.cornerR.upright.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 13767
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.I[1,1] = vehicle.frontSuspension.cornerR.upright.I_11
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13767};
  (data->simulationInfo->realParameter[1592] /* vehicle.frontSuspension.cornerR.upright.I[1,1] PARAM */) = (data->simulationInfo->realParameter[1601] /* vehicle.frontSuspension.cornerR.upright.I_11 PARAM */);
  TRACE_POP
}

/*
equation index: 13780
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.mUnsprung = vehicle.frontSuspension.cornerR.vehicleParams.mUnsprungFront
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13780};
  (data->simulationInfo->realParameter[1276] /* vehicle.frontSuspension.cornerR.mUnsprung PARAM */) = (data->simulationInfo->realParameter[1682] /* vehicle.frontSuspension.cornerR.vehicleParams.mUnsprungFront PARAM */);
  TRACE_POP
}

/*
equation index: 13781
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.m = vehicle.frontSuspension.cornerR.mUnsprung
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13781};
  (data->simulationInfo->realParameter[1634] /* vehicle.frontSuspension.cornerR.upright.m PARAM */) = (data->simulationInfo->realParameter[1276] /* vehicle.frontSuspension.cornerR.mUnsprung PARAM */);
  TRACE_POP
}

/*
equation index: 13783
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.shape.shapeType = vehicle.frontSuspension.cornerR.staticAlign.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13783};
  (data->simulationInfo->stringParameter[59] /* vehicle.frontSuspension.cornerR.staticAlign.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[60] /* vehicle.frontSuspension.cornerR.staticAlign.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13805
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticCamber = vehicle.frontSuspension.cornerR.hp.front_staticCamber
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13805};
  (data->simulationInfo->realParameter[1449] /* vehicle.frontSuspension.cornerR.staticCamber PARAM */) = (data->simulationInfo->realParameter[1108] /* vehicle.frontSuspension.cornerR.hp.front_staticCamber PARAM */);
  TRACE_POP
}

/*
equation index: 13806
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.angles[2] = 57.29577951308232 * vehicle.frontSuspension.cornerR.staticCamber
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13806};
  (data->simulationInfo->realParameter[1416] /* vehicle.frontSuspension.cornerR.staticAlign.angles[2] PARAM */) = (57.29577951308232) * ((data->simulationInfo->realParameter[1449] /* vehicle.frontSuspension.cornerR.staticCamber PARAM */));
  TRACE_POP
}

/*
equation index: 13807
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticToe = vehicle.frontSuspension.cornerR.hp.front_staticToe
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13807};
  (data->simulationInfo->realParameter[1450] /* vehicle.frontSuspension.cornerR.staticToe PARAM */) = (data->simulationInfo->realParameter[1109] /* vehicle.frontSuspension.cornerR.hp.front_staticToe PARAM */);
  TRACE_POP
}

/*
equation index: 13808
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.angles[1] = (-57.29577951308232) * vehicle.frontSuspension.cornerR.staticToe
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13808};
  (data->simulationInfo->realParameter[1415] /* vehicle.frontSuspension.cornerR.staticAlign.angles[1] PARAM */) = (-57.29577951308232) * ((data->simulationInfo->realParameter[1450] /* vehicle.frontSuspension.cornerR.staticToe PARAM */));
  TRACE_POP
}

/*
equation index: 13826
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.shape.shapeType = vehicle.frontSuspension.cornerR.spindle.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13826};
  (data->simulationInfo->stringParameter[53] /* vehicle.frontSuspension.cornerR.spindle.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[54] /* vehicle.frontSuspension.cornerR.spindle.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13845
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.shape.shapeType = vehicle.frontSuspension.cornerR.tieRod.rod2.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13845};
  (data->simulationInfo->stringParameter[65] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[66] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13860
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13860};
  (data->simulationInfo->stringParameter[63] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 13861
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_a.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13861};
  (data->simulationInfo->stringParameter[62] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_a.shapeType PARAM */) = _OMC_LIT35;
  TRACE_POP
}

/*
equation index: 13862
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13862};
  (data->simulationInfo->stringParameter[64] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13865
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.massDiameter = vehicle.frontSuspension.cornerR.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13865};
  (data->simulationInfo->realParameter[1481] /* vehicle.frontSuspension.cornerR.tieRod.rod1.massDiameter PARAM */) = (data->simulationInfo->realParameter[1497] /* vehicle.frontSuspension.cornerR.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 13870
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13870};
  (data->simulationInfo->stringParameter[61] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.shapeType PARAM */) = _OMC_LIT31;
  TRACE_POP
}

/*
equation index: 13874
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.phi_guess = vehicle.frontSuspension.cornerR.tieRod.phi_guess
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13874};
  (data->simulationInfo->realParameter[1475] /* vehicle.frontSuspension.cornerR.tieRod.revolute.phi_guess PARAM */) = (data->simulationInfo->realParameter[1454] /* vehicle.frontSuspension.cornerR.tieRod.phi_guess PARAM */);
  TRACE_POP
}

/*
equation index: 13875
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.phi_offset = vehicle.frontSuspension.cornerR.tieRod.phi_offset
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13875};
  (data->simulationInfo->realParameter[1476] /* vehicle.frontSuspension.cornerR.tieRod.revolute.phi_offset PARAM */) = (data->simulationInfo->realParameter[1455] /* vehicle.frontSuspension.cornerR.tieRod.phi_offset PARAM */);
  TRACE_POP
}

/*
equation index: 13879
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.lengthConstraint = vehicle.frontSuspension.cornerR.tieRod.rod1Length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13879};
  (data->simulationInfo->realParameter[1471] /* vehicle.frontSuspension.cornerR.tieRod.revolute.lengthConstraint PARAM */) = (data->simulationInfo->realParameter[1499] /* vehicle.frontSuspension.cornerR.tieRod.rod1Length PARAM */);
  TRACE_POP
}

/*
equation index: 13905
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.shape.shapeType = vehicle.frontSuspension.steering.endR.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13905};
  (data->simulationInfo->stringParameter[76] /* vehicle.frontSuspension.steering.endR.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[77] /* vehicle.frontSuspension.steering.endR.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13919
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.shape.shapeType = vehicle.frontSuspension.steering.endL.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13919};
  (data->simulationInfo->stringParameter[74] /* vehicle.frontSuspension.steering.endL.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[75] /* vehicle.frontSuspension.steering.endL.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13933
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rackRatioGain.k = vehicle.frontSuspension.steering.rackRatio
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13933};
  (data->simulationInfo->realParameter[1864] /* vehicle.frontSuspension.steering.rackRatioGain.k PARAM */) = (data->simulationInfo->realParameter[1863] /* vehicle.frontSuspension.steering.rackRatio PARAM */);
  TRACE_POP
}

/*
equation index: 13934
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.pos.w_crit = 6.283185307179586 * vehicle.frontSuspension.steering.pos.f_crit
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13934};
  (data->simulationInfo->realParameter[1844] /* vehicle.frontSuspension.steering.pos.w_crit PARAM */) = (6.283185307179586) * ((data->simulationInfo->realParameter[1841] /* vehicle.frontSuspension.steering.pos.f_crit PARAM */));
  TRACE_POP
}

/*
equation index: 13937
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.box.shapeType = "box"
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13937};
  (data->simulationInfo->stringParameter[80] /* vehicle.frontSuspension.steering.rack.box.shapeType PARAM */) = _OMC_LIT32;
  TRACE_POP
}

/*
equation index: 13950
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.shape.shapeType = vehicle.frontSuspension.steering.housing.shapeType
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13950};
  (data->simulationInfo->stringParameter[78] /* vehicle.frontSuspension.steering.housing.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[79] /* vehicle.frontSuspension.steering.housing.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 13967
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.mSprung = vehicle.frontSuspension.vehicleParams.vehicleMass + (-2.0) * (vehicle.frontSuspension.vehicleParams.mUnsprungFront + vehicle.frontSuspension.vehicleParams.mUnsprungRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13967};
  (data->simulationInfo->realParameter[1894] /* vehicle.frontSuspension.vehicleParams.mSprung PARAM */) = (data->simulationInfo->realParameter[1913] /* vehicle.frontSuspension.vehicleParams.vehicleMass PARAM */) + (-2.0) * ((data->simulationInfo->realParameter[1895] /* vehicle.frontSuspension.vehicleParams.mUnsprungFront PARAM */) + (data->simulationInfo->realParameter[1896] /* vehicle.frontSuspension.vehicleParams.mUnsprungRear PARAM */));
  TRACE_POP
}

/*
equation index: 13968
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.F0Rear = 4.903325 * vehicle.frontSuspension.vehicleParams.mSprung * vehicle.frontSuspension.vehicleParams.a / vehicle.frontSuspension.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13968};
  (data->simulationInfo->realParameter[1866] /* vehicle.frontSuspension.vehicleParams.F0Rear PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[1894] /* vehicle.frontSuspension.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1870] /* vehicle.frontSuspension.vehicleParams.a PARAM */),(data->simulationInfo->realParameter[1914] /* vehicle.frontSuspension.vehicleParams.wheelbase PARAM */),"vehicle.frontSuspension.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 13969
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.kRideRear = 0.10197162129779283 * vehicle.frontSuspension.vehicleParams.F0Rear * (6.283185307179586 * vehicle.frontSuspension.vehicleParams.fRideRear) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13969};
  modelica_real tmp48;
  tmp48 = (6.283185307179586) * ((data->simulationInfo->realParameter[1882] /* vehicle.frontSuspension.vehicleParams.fRideRear PARAM */));
  (data->simulationInfo->realParameter[1890] /* vehicle.frontSuspension.vehicleParams.kRideRear PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[1866] /* vehicle.frontSuspension.vehicleParams.F0Rear PARAM */)) * ((tmp48 * tmp48)));
  TRACE_POP
}

/*
equation index: 13970
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.dWheelRear = 2.0 * vehicle.frontSuspension.vehicleParams.zetaRear * sqrt(vehicle.frontSuspension.vehicleParams.kRideRear * vehicle.frontSuspension.vehicleParams.F0Rear / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13970};
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
equation index: 13971
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.F0Front = 4.903325 * vehicle.frontSuspension.vehicleParams.mSprung * vehicle.frontSuspension.vehicleParams.b / vehicle.frontSuspension.vehicleParams.wheelbase
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13971};
  (data->simulationInfo->realParameter[1865] /* vehicle.frontSuspension.vehicleParams.F0Front PARAM */) = (4.903325) * (((data->simulationInfo->realParameter[1894] /* vehicle.frontSuspension.vehicleParams.mSprung PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1874] /* vehicle.frontSuspension.vehicleParams.b PARAM */),(data->simulationInfo->realParameter[1914] /* vehicle.frontSuspension.vehicleParams.wheelbase PARAM */),"vehicle.frontSuspension.vehicleParams.wheelbase",equationIndexes)));
  TRACE_POP
}

/*
equation index: 13972
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.kRideFront = 0.10197162129779283 * vehicle.frontSuspension.vehicleParams.F0Front * (6.283185307179586 * vehicle.frontSuspension.vehicleParams.fRideFront) ^ 2.0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13972};
  modelica_real tmp50;
  tmp50 = (6.283185307179586) * ((data->simulationInfo->realParameter[1881] /* vehicle.frontSuspension.vehicleParams.fRideFront PARAM */));
  (data->simulationInfo->realParameter[1889] /* vehicle.frontSuspension.vehicleParams.kRideFront PARAM */) = (0.10197162129779283) * (((data->simulationInfo->realParameter[1865] /* vehicle.frontSuspension.vehicleParams.F0Front PARAM */)) * ((tmp50 * tmp50)));
  TRACE_POP
}

/*
equation index: 13973
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.dWheelFront = 2.0 * vehicle.frontSuspension.vehicleParams.zetaFront * sqrt(vehicle.frontSuspension.vehicleParams.kRideFront * vehicle.frontSuspension.vehicleParams.F0Front / 9.80665)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13973};
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
equation index: 13974
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.hpPower = 745.7 * vehicle.frontSuspension.vehicleParams.hp
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13974};
  (data->simulationInfo->realParameter[1886] /* vehicle.frontSuspension.vehicleParams.hpPower PARAM */) = (745.7) * ((data->simulationInfo->realParameter[1885] /* vehicle.frontSuspension.vehicleParams.hp PARAM */));
  TRACE_POP
}

/*
equation index: 13975
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.track = vehicle.frontSuspension.vehicleParams.tf + vehicle.frontSuspension.vehicleParams.tr
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13975};
  (data->simulationInfo->realParameter[1912] /* vehicle.frontSuspension.vehicleParams.track PARAM */) = (data->simulationInfo->realParameter[1910] /* vehicle.frontSuspension.vehicleParams.tf PARAM */) + (data->simulationInfo->realParameter[1911] /* vehicle.frontSuspension.vehicleParams.tr PARAM */);
  TRACE_POP
}

/*
equation index: 13976
type: SIMPLE_ASSIGN
vehicle.frontSuspension.vehicleParams.kRear = vehicle.frontSuspension.vehicleParams.kRideRear * vehicle.frontSuspension.vehicleParams.kz / (vehicle.frontSuspension.vehicleParams.kz - vehicle.frontSuspension.vehicleParams.kRideRear)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_13976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13976};
  (data->simulationInfo->realParameter[1888] /* vehicle.frontSuspension.vehicleParams.kRear PARAM */) = ((data->simulationInfo->realParameter[1890] /* vehicle.frontSuspension.vehicleParams.kRideRear PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[1893] /* vehicle.frontSuspension.vehicleParams.kz PARAM */),(data->simulationInfo->realParameter[1893] /* vehicle.frontSuspension.vehicleParams.kz PARAM */) - (data->simulationInfo->realParameter[1890] /* vehicle.frontSuspension.vehicleParams.kRideRear PARAM */),"vehicle.frontSuspension.vehicleParams.kz - vehicle.frontSuspension.vehicleParams.kRideRear",equationIndexes));
  TRACE_POP
}
OMC_DISABLE_OPT
void AlyssaVehicle_updateBoundParameters_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  AlyssaVehicle_eqFunction_11576(data, threadData);
  AlyssaVehicle_eqFunction_11577(data, threadData);
  AlyssaVehicle_eqFunction_11578(data, threadData);
  AlyssaVehicle_eqFunction_11579(data, threadData);
  AlyssaVehicle_eqFunction_11580(data, threadData);
  AlyssaVehicle_eqFunction_11581(data, threadData);
  AlyssaVehicle_eqFunction_11582(data, threadData);
  AlyssaVehicle_eqFunction_11583(data, threadData);
  AlyssaVehicle_eqFunction_11584(data, threadData);
  AlyssaVehicle_eqFunction_11585(data, threadData);
  AlyssaVehicle_eqFunction_11586(data, threadData);
  AlyssaVehicle_eqFunction_11587(data, threadData);
  AlyssaVehicle_eqFunction_11588(data, threadData);
  AlyssaVehicle_eqFunction_11589(data, threadData);
  AlyssaVehicle_eqFunction_11590(data, threadData);
  AlyssaVehicle_eqFunction_11591(data, threadData);
  AlyssaVehicle_eqFunction_11592(data, threadData);
  AlyssaVehicle_eqFunction_11593(data, threadData);
  AlyssaVehicle_eqFunction_11594(data, threadData);
  AlyssaVehicle_eqFunction_11595(data, threadData);
  AlyssaVehicle_eqFunction_11596(data, threadData);
  AlyssaVehicle_eqFunction_11597(data, threadData);
  AlyssaVehicle_eqFunction_11598(data, threadData);
  AlyssaVehicle_eqFunction_11599(data, threadData);
  AlyssaVehicle_eqFunction_11600(data, threadData);
  AlyssaVehicle_eqFunction_11601(data, threadData);
  AlyssaVehicle_eqFunction_11603(data, threadData);
  AlyssaVehicle_eqFunction_11604(data, threadData);
  AlyssaVehicle_eqFunction_11605(data, threadData);
  AlyssaVehicle_eqFunction_11606(data, threadData);
  AlyssaVehicle_eqFunction_11608(data, threadData);
  AlyssaVehicle_eqFunction_11609(data, threadData);
  AlyssaVehicle_eqFunction_11610(data, threadData);
  AlyssaVehicle_eqFunction_11611(data, threadData);
  AlyssaVehicle_eqFunction_11612(data, threadData);
  AlyssaVehicle_eqFunction_11614(data, threadData);
  AlyssaVehicle_eqFunction_11615(data, threadData);
  AlyssaVehicle_eqFunction_11616(data, threadData);
  AlyssaVehicle_eqFunction_11617(data, threadData);
  AlyssaVehicle_eqFunction_11618(data, threadData);
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
  AlyssaVehicle_eqFunction_11632(data, threadData);
  AlyssaVehicle_eqFunction_11633(data, threadData);
  AlyssaVehicle_eqFunction_11634(data, threadData);
  AlyssaVehicle_eqFunction_11635(data, threadData);
  AlyssaVehicle_eqFunction_11636(data, threadData);
  AlyssaVehicle_eqFunction_11637(data, threadData);
  AlyssaVehicle_eqFunction_11638(data, threadData);
  AlyssaVehicle_eqFunction_11639(data, threadData);
  AlyssaVehicle_eqFunction_11640(data, threadData);
  AlyssaVehicle_eqFunction_11641(data, threadData);
  AlyssaVehicle_eqFunction_11642(data, threadData);
  AlyssaVehicle_eqFunction_11643(data, threadData);
  AlyssaVehicle_eqFunction_11644(data, threadData);
  AlyssaVehicle_eqFunction_11645(data, threadData);
  AlyssaVehicle_eqFunction_11646(data, threadData);
  AlyssaVehicle_eqFunction_11648(data, threadData);
  AlyssaVehicle_eqFunction_11649(data, threadData);
  AlyssaVehicle_eqFunction_11650(data, threadData);
  AlyssaVehicle_eqFunction_11651(data, threadData);
  AlyssaVehicle_eqFunction_11652(data, threadData);
  AlyssaVehicle_eqFunction_11653(data, threadData);
  AlyssaVehicle_eqFunction_11654(data, threadData);
  AlyssaVehicle_eqFunction_11655(data, threadData);
  AlyssaVehicle_eqFunction_11656(data, threadData);
  AlyssaVehicle_eqFunction_11657(data, threadData);
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
  AlyssaVehicle_eqFunction_11669(data, threadData);
  AlyssaVehicle_eqFunction_11670(data, threadData);
  AlyssaVehicle_eqFunction_11671(data, threadData);
  AlyssaVehicle_eqFunction_11672(data, threadData);
  AlyssaVehicle_eqFunction_11673(data, threadData);
  AlyssaVehicle_eqFunction_11674(data, threadData);
  AlyssaVehicle_eqFunction_11675(data, threadData);
  AlyssaVehicle_eqFunction_11676(data, threadData);
  AlyssaVehicle_eqFunction_11677(data, threadData);
  AlyssaVehicle_eqFunction_11678(data, threadData);
  AlyssaVehicle_eqFunction_11680(data, threadData);
  AlyssaVehicle_eqFunction_11681(data, threadData);
  AlyssaVehicle_eqFunction_11682(data, threadData);
  AlyssaVehicle_eqFunction_11683(data, threadData);
  AlyssaVehicle_eqFunction_11684(data, threadData);
  AlyssaVehicle_eqFunction_11686(data, threadData);
  AlyssaVehicle_eqFunction_11687(data, threadData);
  AlyssaVehicle_eqFunction_11688(data, threadData);
  AlyssaVehicle_eqFunction_11689(data, threadData);
  AlyssaVehicle_eqFunction_11690(data, threadData);
  AlyssaVehicle_eqFunction_11692(data, threadData);
  AlyssaVehicle_eqFunction_11693(data, threadData);
  AlyssaVehicle_eqFunction_11694(data, threadData);
  AlyssaVehicle_eqFunction_11695(data, threadData);
  AlyssaVehicle_eqFunction_11696(data, threadData);
  AlyssaVehicle_eqFunction_6783(data, threadData);
  AlyssaVehicle_eqFunction_6776(data, threadData);
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
  AlyssaVehicle_eqFunction_11938(data, threadData);
  AlyssaVehicle_eqFunction_11939(data, threadData);
  AlyssaVehicle_eqFunction_11940(data, threadData);
  AlyssaVehicle_eqFunction_11941(data, threadData);
  AlyssaVehicle_eqFunction_11942(data, threadData);
  AlyssaVehicle_eqFunction_11943(data, threadData);
  AlyssaVehicle_eqFunction_11944(data, threadData);
  AlyssaVehicle_eqFunction_11945(data, threadData);
  AlyssaVehicle_eqFunction_11946(data, threadData);
  AlyssaVehicle_eqFunction_11947(data, threadData);
  AlyssaVehicle_eqFunction_11948(data, threadData);
  AlyssaVehicle_eqFunction_11949(data, threadData);
  AlyssaVehicle_eqFunction_11950(data, threadData);
  AlyssaVehicle_eqFunction_11951(data, threadData);
  AlyssaVehicle_eqFunction_11952(data, threadData);
  AlyssaVehicle_eqFunction_11953(data, threadData);
  AlyssaVehicle_eqFunction_11954(data, threadData);
  AlyssaVehicle_eqFunction_11955(data, threadData);
  AlyssaVehicle_eqFunction_11956(data, threadData);
  AlyssaVehicle_eqFunction_11957(data, threadData);
  AlyssaVehicle_eqFunction_11958(data, threadData);
  AlyssaVehicle_eqFunction_11959(data, threadData);
  AlyssaVehicle_eqFunction_11988(data, threadData);
  AlyssaVehicle_eqFunction_11989(data, threadData);
  AlyssaVehicle_eqFunction_11990(data, threadData);
  AlyssaVehicle_eqFunction_11991(data, threadData);
  AlyssaVehicle_eqFunction_11992(data, threadData);
  AlyssaVehicle_eqFunction_11993(data, threadData);
  AlyssaVehicle_eqFunction_11994(data, threadData);
  AlyssaVehicle_eqFunction_11995(data, threadData);
  AlyssaVehicle_eqFunction_11996(data, threadData);
  AlyssaVehicle_eqFunction_11997(data, threadData);
  AlyssaVehicle_eqFunction_11998(data, threadData);
  AlyssaVehicle_eqFunction_12000(data, threadData);
  AlyssaVehicle_eqFunction_12008(data, threadData);
  AlyssaVehicle_eqFunction_12016(data, threadData);
  AlyssaVehicle_eqFunction_12024(data, threadData);
  AlyssaVehicle_eqFunction_12038(data, threadData);
  AlyssaVehicle_eqFunction_12052(data, threadData);
  AlyssaVehicle_eqFunction_12066(data, threadData);
  AlyssaVehicle_eqFunction_12067(data, threadData);
  AlyssaVehicle_eqFunction_12068(data, threadData);
  AlyssaVehicle_eqFunction_12069(data, threadData);
  AlyssaVehicle_eqFunction_12070(data, threadData);
  AlyssaVehicle_eqFunction_12072(data, threadData);
  AlyssaVehicle_eqFunction_12073(data, threadData);
  AlyssaVehicle_eqFunction_12074(data, threadData);
  AlyssaVehicle_eqFunction_12075(data, threadData);
  AlyssaVehicle_eqFunction_12077(data, threadData);
  AlyssaVehicle_eqFunction_12078(data, threadData);
  AlyssaVehicle_eqFunction_12079(data, threadData);
  AlyssaVehicle_eqFunction_12080(data, threadData);
  AlyssaVehicle_eqFunction_12082(data, threadData);
  AlyssaVehicle_eqFunction_12083(data, threadData);
  AlyssaVehicle_eqFunction_12088(data, threadData);
  AlyssaVehicle_eqFunction_12103(data, threadData);
  AlyssaVehicle_eqFunction_12104(data, threadData);
  AlyssaVehicle_eqFunction_12105(data, threadData);
  AlyssaVehicle_eqFunction_12110(data, threadData);
  AlyssaVehicle_eqFunction_12111(data, threadData);
  AlyssaVehicle_eqFunction_12112(data, threadData);
  AlyssaVehicle_eqFunction_12113(data, threadData);
  AlyssaVehicle_eqFunction_12114(data, threadData);
  AlyssaVehicle_eqFunction_12115(data, threadData);
  AlyssaVehicle_eqFunction_12116(data, threadData);
  AlyssaVehicle_eqFunction_12117(data, threadData);
  AlyssaVehicle_eqFunction_12118(data, threadData);
  AlyssaVehicle_eqFunction_12119(data, threadData);
  AlyssaVehicle_eqFunction_12120(data, threadData);
  AlyssaVehicle_eqFunction_12121(data, threadData);
  AlyssaVehicle_eqFunction_12123(data, threadData);
  AlyssaVehicle_eqFunction_12137(data, threadData);
  AlyssaVehicle_eqFunction_12156(data, threadData);
  AlyssaVehicle_eqFunction_12170(data, threadData);
  AlyssaVehicle_eqFunction_12171(data, threadData);
  AlyssaVehicle_eqFunction_12172(data, threadData);
  AlyssaVehicle_eqFunction_12173(data, threadData);
  AlyssaVehicle_eqFunction_12194(data, threadData);
  AlyssaVehicle_eqFunction_12198(data, threadData);
  AlyssaVehicle_eqFunction_12199(data, threadData);
  AlyssaVehicle_eqFunction_12225(data, threadData);
  AlyssaVehicle_eqFunction_12240(data, threadData);
  AlyssaVehicle_eqFunction_12255(data, threadData);
  AlyssaVehicle_eqFunction_12262(data, threadData);
  AlyssaVehicle_eqFunction_12365(data, threadData);
  AlyssaVehicle_eqFunction_12366(data, threadData);
  AlyssaVehicle_eqFunction_12367(data, threadData);
  AlyssaVehicle_eqFunction_12368(data, threadData);
  AlyssaVehicle_eqFunction_12369(data, threadData);
  AlyssaVehicle_eqFunction_12370(data, threadData);
  AlyssaVehicle_eqFunction_12376(data, threadData);
  AlyssaVehicle_eqFunction_12377(data, threadData);
  AlyssaVehicle_eqFunction_12378(data, threadData);
  AlyssaVehicle_eqFunction_12379(data, threadData);
  AlyssaVehicle_eqFunction_12380(data, threadData);
  AlyssaVehicle_eqFunction_12397(data, threadData);
  AlyssaVehicle_eqFunction_12398(data, threadData);
  AlyssaVehicle_eqFunction_12399(data, threadData);
  AlyssaVehicle_eqFunction_12400(data, threadData);
  AlyssaVehicle_eqFunction_12401(data, threadData);
  AlyssaVehicle_eqFunction_12402(data, threadData);
  AlyssaVehicle_eqFunction_12403(data, threadData);
  AlyssaVehicle_eqFunction_12404(data, threadData);
  AlyssaVehicle_eqFunction_12405(data, threadData);
  AlyssaVehicle_eqFunction_12418(data, threadData);
  AlyssaVehicle_eqFunction_12419(data, threadData);
  AlyssaVehicle_eqFunction_12421(data, threadData);
  AlyssaVehicle_eqFunction_12443(data, threadData);
  AlyssaVehicle_eqFunction_12444(data, threadData);
  AlyssaVehicle_eqFunction_12445(data, threadData);
  AlyssaVehicle_eqFunction_12446(data, threadData);
  AlyssaVehicle_eqFunction_12464(data, threadData);
  AlyssaVehicle_eqFunction_12483(data, threadData);
  AlyssaVehicle_eqFunction_12498(data, threadData);
  AlyssaVehicle_eqFunction_12499(data, threadData);
  AlyssaVehicle_eqFunction_12500(data, threadData);
  AlyssaVehicle_eqFunction_12503(data, threadData);
  AlyssaVehicle_eqFunction_12508(data, threadData);
  AlyssaVehicle_eqFunction_12512(data, threadData);
  AlyssaVehicle_eqFunction_12513(data, threadData);
  AlyssaVehicle_eqFunction_12517(data, threadData);
  AlyssaVehicle_eqFunction_12543(data, threadData);
  AlyssaVehicle_eqFunction_12544(data, threadData);
  AlyssaVehicle_eqFunction_12545(data, threadData);
  AlyssaVehicle_eqFunction_12550(data, threadData);
  AlyssaVehicle_eqFunction_12551(data, threadData);
  AlyssaVehicle_eqFunction_12552(data, threadData);
  AlyssaVehicle_eqFunction_12553(data, threadData);
  AlyssaVehicle_eqFunction_12554(data, threadData);
  AlyssaVehicle_eqFunction_12555(data, threadData);
  AlyssaVehicle_eqFunction_12556(data, threadData);
  AlyssaVehicle_eqFunction_12557(data, threadData);
  AlyssaVehicle_eqFunction_12558(data, threadData);
  AlyssaVehicle_eqFunction_12559(data, threadData);
  AlyssaVehicle_eqFunction_12560(data, threadData);
  AlyssaVehicle_eqFunction_12561(data, threadData);
  AlyssaVehicle_eqFunction_12563(data, threadData);
  AlyssaVehicle_eqFunction_12577(data, threadData);
  AlyssaVehicle_eqFunction_12596(data, threadData);
  AlyssaVehicle_eqFunction_12610(data, threadData);
  AlyssaVehicle_eqFunction_12611(data, threadData);
  AlyssaVehicle_eqFunction_12612(data, threadData);
  AlyssaVehicle_eqFunction_12613(data, threadData);
  AlyssaVehicle_eqFunction_12634(data, threadData);
  AlyssaVehicle_eqFunction_12638(data, threadData);
  AlyssaVehicle_eqFunction_12639(data, threadData);
  AlyssaVehicle_eqFunction_12665(data, threadData);
  AlyssaVehicle_eqFunction_12680(data, threadData);
  AlyssaVehicle_eqFunction_12695(data, threadData);
  AlyssaVehicle_eqFunction_12702(data, threadData);
  AlyssaVehicle_eqFunction_12805(data, threadData);
  AlyssaVehicle_eqFunction_12806(data, threadData);
  AlyssaVehicle_eqFunction_12807(data, threadData);
  AlyssaVehicle_eqFunction_12808(data, threadData);
  AlyssaVehicle_eqFunction_12809(data, threadData);
  AlyssaVehicle_eqFunction_12810(data, threadData);
  AlyssaVehicle_eqFunction_12816(data, threadData);
  AlyssaVehicle_eqFunction_12817(data, threadData);
  AlyssaVehicle_eqFunction_12818(data, threadData);
  AlyssaVehicle_eqFunction_12819(data, threadData);
  AlyssaVehicle_eqFunction_12820(data, threadData);
  AlyssaVehicle_eqFunction_12837(data, threadData);
  AlyssaVehicle_eqFunction_12838(data, threadData);
  AlyssaVehicle_eqFunction_12839(data, threadData);
  AlyssaVehicle_eqFunction_12840(data, threadData);
  AlyssaVehicle_eqFunction_12841(data, threadData);
  AlyssaVehicle_eqFunction_12842(data, threadData);
  AlyssaVehicle_eqFunction_12843(data, threadData);
  AlyssaVehicle_eqFunction_12844(data, threadData);
  AlyssaVehicle_eqFunction_12845(data, threadData);
  AlyssaVehicle_eqFunction_12858(data, threadData);
  AlyssaVehicle_eqFunction_12859(data, threadData);
  AlyssaVehicle_eqFunction_12861(data, threadData);
  AlyssaVehicle_eqFunction_12883(data, threadData);
  AlyssaVehicle_eqFunction_12884(data, threadData);
  AlyssaVehicle_eqFunction_12885(data, threadData);
  AlyssaVehicle_eqFunction_12886(data, threadData);
  AlyssaVehicle_eqFunction_12904(data, threadData);
  AlyssaVehicle_eqFunction_12923(data, threadData);
  AlyssaVehicle_eqFunction_12938(data, threadData);
  AlyssaVehicle_eqFunction_12939(data, threadData);
  AlyssaVehicle_eqFunction_12940(data, threadData);
  AlyssaVehicle_eqFunction_12943(data, threadData);
  AlyssaVehicle_eqFunction_12948(data, threadData);
  AlyssaVehicle_eqFunction_12952(data, threadData);
  AlyssaVehicle_eqFunction_12953(data, threadData);
  AlyssaVehicle_eqFunction_12957(data, threadData);
  AlyssaVehicle_eqFunction_12986(data, threadData);
  AlyssaVehicle_eqFunction_13000(data, threadData);
  AlyssaVehicle_eqFunction_13014(data, threadData);
  AlyssaVehicle_eqFunction_13015(data, threadData);
  AlyssaVehicle_eqFunction_13016(data, threadData);
  AlyssaVehicle_eqFunction_13017(data, threadData);
  AlyssaVehicle_eqFunction_13018(data, threadData);
  AlyssaVehicle_eqFunction_13019(data, threadData);
  AlyssaVehicle_eqFunction_13020(data, threadData);
  AlyssaVehicle_eqFunction_13021(data, threadData);
  AlyssaVehicle_eqFunction_13022(data, threadData);
  AlyssaVehicle_eqFunction_13023(data, threadData);
  AlyssaVehicle_eqFunction_13024(data, threadData);
  AlyssaVehicle_eqFunction_13025(data, threadData);
  AlyssaVehicle_eqFunction_13026(data, threadData);
  AlyssaVehicle_eqFunction_13027(data, threadData);
  AlyssaVehicle_eqFunction_13032(data, threadData);
  AlyssaVehicle_eqFunction_13033(data, threadData);
  AlyssaVehicle_eqFunction_13034(data, threadData);
  AlyssaVehicle_eqFunction_13035(data, threadData);
  AlyssaVehicle_eqFunction_13036(data, threadData);
  AlyssaVehicle_eqFunction_13037(data, threadData);
  AlyssaVehicle_eqFunction_13038(data, threadData);
  AlyssaVehicle_eqFunction_13039(data, threadData);
  AlyssaVehicle_eqFunction_13040(data, threadData);
  AlyssaVehicle_eqFunction_13041(data, threadData);
  AlyssaVehicle_eqFunction_13042(data, threadData);
  AlyssaVehicle_eqFunction_13043(data, threadData);
  AlyssaVehicle_eqFunction_13045(data, threadData);
  AlyssaVehicle_eqFunction_13059(data, threadData);
  AlyssaVehicle_eqFunction_13078(data, threadData);
  AlyssaVehicle_eqFunction_13092(data, threadData);
  AlyssaVehicle_eqFunction_13093(data, threadData);
  AlyssaVehicle_eqFunction_13094(data, threadData);
  AlyssaVehicle_eqFunction_13095(data, threadData);
  AlyssaVehicle_eqFunction_13116(data, threadData);
  AlyssaVehicle_eqFunction_13120(data, threadData);
  AlyssaVehicle_eqFunction_13121(data, threadData);
  AlyssaVehicle_eqFunction_13147(data, threadData);
  AlyssaVehicle_eqFunction_13162(data, threadData);
  AlyssaVehicle_eqFunction_13177(data, threadData);
  AlyssaVehicle_eqFunction_13184(data, threadData);
  AlyssaVehicle_eqFunction_13287(data, threadData);
  AlyssaVehicle_eqFunction_13288(data, threadData);
  AlyssaVehicle_eqFunction_13289(data, threadData);
  AlyssaVehicle_eqFunction_13290(data, threadData);
  AlyssaVehicle_eqFunction_13291(data, threadData);
  AlyssaVehicle_eqFunction_13292(data, threadData);
  AlyssaVehicle_eqFunction_13298(data, threadData);
  AlyssaVehicle_eqFunction_13299(data, threadData);
  AlyssaVehicle_eqFunction_13300(data, threadData);
  AlyssaVehicle_eqFunction_13301(data, threadData);
  AlyssaVehicle_eqFunction_13302(data, threadData);
  AlyssaVehicle_eqFunction_13319(data, threadData);
  AlyssaVehicle_eqFunction_13320(data, threadData);
  AlyssaVehicle_eqFunction_13321(data, threadData);
  AlyssaVehicle_eqFunction_13322(data, threadData);
  AlyssaVehicle_eqFunction_13323(data, threadData);
  AlyssaVehicle_eqFunction_13324(data, threadData);
  AlyssaVehicle_eqFunction_13325(data, threadData);
  AlyssaVehicle_eqFunction_13326(data, threadData);
  AlyssaVehicle_eqFunction_13327(data, threadData);
  AlyssaVehicle_eqFunction_13340(data, threadData);
  AlyssaVehicle_eqFunction_13341(data, threadData);
  AlyssaVehicle_eqFunction_13343(data, threadData);
  AlyssaVehicle_eqFunction_13365(data, threadData);
  AlyssaVehicle_eqFunction_13366(data, threadData);
  AlyssaVehicle_eqFunction_13367(data, threadData);
  AlyssaVehicle_eqFunction_13368(data, threadData);
  AlyssaVehicle_eqFunction_13386(data, threadData);
  AlyssaVehicle_eqFunction_13405(data, threadData);
  AlyssaVehicle_eqFunction_13420(data, threadData);
  AlyssaVehicle_eqFunction_13421(data, threadData);
  AlyssaVehicle_eqFunction_13422(data, threadData);
  AlyssaVehicle_eqFunction_13425(data, threadData);
  AlyssaVehicle_eqFunction_13430(data, threadData);
  AlyssaVehicle_eqFunction_13434(data, threadData);
  AlyssaVehicle_eqFunction_13435(data, threadData);
  AlyssaVehicle_eqFunction_13439(data, threadData);
  AlyssaVehicle_eqFunction_13465(data, threadData);
  AlyssaVehicle_eqFunction_13466(data, threadData);
  AlyssaVehicle_eqFunction_13467(data, threadData);
  AlyssaVehicle_eqFunction_13472(data, threadData);
  AlyssaVehicle_eqFunction_13473(data, threadData);
  AlyssaVehicle_eqFunction_13474(data, threadData);
  AlyssaVehicle_eqFunction_13475(data, threadData);
  AlyssaVehicle_eqFunction_13476(data, threadData);
  AlyssaVehicle_eqFunction_13477(data, threadData);
  AlyssaVehicle_eqFunction_13478(data, threadData);
  AlyssaVehicle_eqFunction_13479(data, threadData);
  AlyssaVehicle_eqFunction_13480(data, threadData);
  AlyssaVehicle_eqFunction_13481(data, threadData);
  AlyssaVehicle_eqFunction_13482(data, threadData);
  AlyssaVehicle_eqFunction_13483(data, threadData);
  AlyssaVehicle_eqFunction_13485(data, threadData);
  AlyssaVehicle_eqFunction_13499(data, threadData);
  AlyssaVehicle_eqFunction_13518(data, threadData);
  AlyssaVehicle_eqFunction_13532(data, threadData);
  AlyssaVehicle_eqFunction_13533(data, threadData);
  AlyssaVehicle_eqFunction_13534(data, threadData);
  AlyssaVehicle_eqFunction_13535(data, threadData);
  AlyssaVehicle_eqFunction_13556(data, threadData);
  AlyssaVehicle_eqFunction_13560(data, threadData);
  AlyssaVehicle_eqFunction_13561(data, threadData);
  AlyssaVehicle_eqFunction_13587(data, threadData);
  AlyssaVehicle_eqFunction_13602(data, threadData);
  AlyssaVehicle_eqFunction_13617(data, threadData);
  AlyssaVehicle_eqFunction_13624(data, threadData);
  AlyssaVehicle_eqFunction_13727(data, threadData);
  AlyssaVehicle_eqFunction_13728(data, threadData);
  AlyssaVehicle_eqFunction_13729(data, threadData);
  AlyssaVehicle_eqFunction_13730(data, threadData);
  AlyssaVehicle_eqFunction_13731(data, threadData);
  AlyssaVehicle_eqFunction_13732(data, threadData);
  AlyssaVehicle_eqFunction_13738(data, threadData);
  AlyssaVehicle_eqFunction_13739(data, threadData);
  AlyssaVehicle_eqFunction_13740(data, threadData);
  AlyssaVehicle_eqFunction_13741(data, threadData);
  AlyssaVehicle_eqFunction_13742(data, threadData);
  AlyssaVehicle_eqFunction_13759(data, threadData);
  AlyssaVehicle_eqFunction_13760(data, threadData);
  AlyssaVehicle_eqFunction_13761(data, threadData);
  AlyssaVehicle_eqFunction_13762(data, threadData);
  AlyssaVehicle_eqFunction_13763(data, threadData);
  AlyssaVehicle_eqFunction_13764(data, threadData);
  AlyssaVehicle_eqFunction_13765(data, threadData);
  AlyssaVehicle_eqFunction_13766(data, threadData);
  AlyssaVehicle_eqFunction_13767(data, threadData);
  AlyssaVehicle_eqFunction_13780(data, threadData);
  AlyssaVehicle_eqFunction_13781(data, threadData);
  AlyssaVehicle_eqFunction_13783(data, threadData);
  AlyssaVehicle_eqFunction_13805(data, threadData);
  AlyssaVehicle_eqFunction_13806(data, threadData);
  AlyssaVehicle_eqFunction_13807(data, threadData);
  AlyssaVehicle_eqFunction_13808(data, threadData);
  AlyssaVehicle_eqFunction_13826(data, threadData);
  AlyssaVehicle_eqFunction_13845(data, threadData);
  AlyssaVehicle_eqFunction_13860(data, threadData);
  AlyssaVehicle_eqFunction_13861(data, threadData);
  AlyssaVehicle_eqFunction_13862(data, threadData);
  AlyssaVehicle_eqFunction_13865(data, threadData);
  AlyssaVehicle_eqFunction_13870(data, threadData);
  AlyssaVehicle_eqFunction_13874(data, threadData);
  AlyssaVehicle_eqFunction_13875(data, threadData);
  AlyssaVehicle_eqFunction_13879(data, threadData);
  AlyssaVehicle_eqFunction_13905(data, threadData);
  AlyssaVehicle_eqFunction_13919(data, threadData);
  AlyssaVehicle_eqFunction_13933(data, threadData);
  AlyssaVehicle_eqFunction_13934(data, threadData);
  AlyssaVehicle_eqFunction_13937(data, threadData);
  AlyssaVehicle_eqFunction_13950(data, threadData);
  AlyssaVehicle_eqFunction_13967(data, threadData);
  AlyssaVehicle_eqFunction_13968(data, threadData);
  AlyssaVehicle_eqFunction_13969(data, threadData);
  AlyssaVehicle_eqFunction_13970(data, threadData);
  AlyssaVehicle_eqFunction_13971(data, threadData);
  AlyssaVehicle_eqFunction_13972(data, threadData);
  AlyssaVehicle_eqFunction_13973(data, threadData);
  AlyssaVehicle_eqFunction_13974(data, threadData);
  AlyssaVehicle_eqFunction_13975(data, threadData);
  AlyssaVehicle_eqFunction_13976(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif
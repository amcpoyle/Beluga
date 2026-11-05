#include "AlyssaVehicle_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 10603
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.cylinder.lengthDirection[1] = vehicle.vehicleBody.body.r_CM[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10603};
  (data->simulationInfo->realParameter[3428] /* vehicle.vehicleBody.body.cylinder.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[3439] /* vehicle.vehicleBody.body.r_CM[1] PARAM */);
  TRACE_POP
}

/*
equation index: 10604
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.cylinder.lengthDirection[2] = vehicle.vehicleBody.body.r_CM[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10604};
  (data->simulationInfo->realParameter[3429] /* vehicle.vehicleBody.body.cylinder.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[3440] /* vehicle.vehicleBody.body.r_CM[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10605
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.cylinder.lengthDirection[3] = vehicle.vehicleBody.body.r_CM[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10605};
  (data->simulationInfo->realParameter[3430] /* vehicle.vehicleBody.body.cylinder.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[3441] /* vehicle.vehicleBody.body.r_CM[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10606
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.sphere.r_shape[2] = vehicle.vehicleBody.body.r_CM[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10606};
  (data->simulationInfo->realParameter[3443] /* vehicle.vehicleBody.body.sphere.r_shape[2] PARAM */) = (data->simulationInfo->realParameter[3440] /* vehicle.vehicleBody.body.r_CM[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10607
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.sphere.r_shape[3] = vehicle.vehicleBody.body.r_CM[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10607};
  (data->simulationInfo->realParameter[3444] /* vehicle.vehicleBody.body.sphere.r_shape[3] PARAM */) = (data->simulationInfo->realParameter[3441] /* vehicle.vehicleBody.body.r_CM[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10608
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.cylinder.lengthDirection[1] = vehicle.frontSuspension.cornerR.upright.r_CM[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10608};
  (data->simulationInfo->realParameter[1627] /* vehicle.frontSuspension.cornerR.upright.cylinder.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[1638] /* vehicle.frontSuspension.cornerR.upright.r_CM[1] PARAM */);
  TRACE_POP
}

/*
equation index: 10609
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.cylinder.lengthDirection[2] = vehicle.frontSuspension.cornerR.upright.r_CM[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10609};
  (data->simulationInfo->realParameter[1628] /* vehicle.frontSuspension.cornerR.upright.cylinder.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[1639] /* vehicle.frontSuspension.cornerR.upright.r_CM[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10610
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.cylinder.lengthDirection[3] = vehicle.frontSuspension.cornerR.upright.r_CM[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10610};
  (data->simulationInfo->realParameter[1629] /* vehicle.frontSuspension.cornerR.upright.cylinder.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[1640] /* vehicle.frontSuspension.cornerR.upright.r_CM[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10611
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.sphere.r_shape[2] = vehicle.frontSuspension.cornerR.upright.r_CM[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10611};
  (data->simulationInfo->realParameter[1642] /* vehicle.frontSuspension.cornerR.upright.sphere.r_shape[2] PARAM */) = (data->simulationInfo->realParameter[1639] /* vehicle.frontSuspension.cornerR.upright.r_CM[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10612
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.sphere.r_shape[3] = vehicle.frontSuspension.cornerR.upright.r_CM[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10612};
  (data->simulationInfo->realParameter[1643] /* vehicle.frontSuspension.cornerR.upright.sphere.r_shape[3] PARAM */) = (data->simulationInfo->realParameter[1640] /* vehicle.frontSuspension.cornerR.upright.r_CM[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10614
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinder.lengthDirection[1] = vehicle.frontSuspension.cornerR.ucaPivot.e[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10614};
  (data->simulationInfo->realParameter[1573] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinder.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[1580] /* vehicle.frontSuspension.cornerR.ucaPivot.e[1] PARAM */);
  TRACE_POP
}

/*
equation index: 10616
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinder.lengthDirection[2] = vehicle.frontSuspension.cornerR.ucaPivot.e[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10616};
  (data->simulationInfo->realParameter[1574] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinder.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[1581] /* vehicle.frontSuspension.cornerR.ucaPivot.e[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10618
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinder.lengthDirection[3] = vehicle.frontSuspension.cornerR.ucaPivot.e[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10618};
  (data->simulationInfo->realParameter[1575] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinder.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[1582] /* vehicle.frontSuspension.cornerR.ucaPivot.e[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10620
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.fixed.flange.phi = vehicle.frontSuspension.cornerR.ucaPivot.fixed.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10620};
  (data->simulationInfo->realParameter[1583] /* vehicle.frontSuspension.cornerR.ucaPivot.fixed.flange.phi PARAM */) = (data->simulationInfo->realParameter[1584] /* vehicle.frontSuspension.cornerR.ucaPivot.fixed.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 10621
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.cylinder.lengthDirection[1] = vehicle.frontSuspension.cornerL.upright.r_CM[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10621};
  (data->simulationInfo->realParameter[980] /* vehicle.frontSuspension.cornerL.upright.cylinder.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[991] /* vehicle.frontSuspension.cornerL.upright.r_CM[1] PARAM */);
  TRACE_POP
}

/*
equation index: 10622
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.cylinder.lengthDirection[2] = vehicle.frontSuspension.cornerL.upright.r_CM[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10622};
  (data->simulationInfo->realParameter[981] /* vehicle.frontSuspension.cornerL.upright.cylinder.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[992] /* vehicle.frontSuspension.cornerL.upright.r_CM[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10623
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.cylinder.lengthDirection[3] = vehicle.frontSuspension.cornerL.upright.r_CM[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10623};
  (data->simulationInfo->realParameter[982] /* vehicle.frontSuspension.cornerL.upright.cylinder.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[993] /* vehicle.frontSuspension.cornerL.upright.r_CM[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10624
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.sphere.r_shape[2] = vehicle.frontSuspension.cornerL.upright.r_CM[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10624};
  (data->simulationInfo->realParameter[995] /* vehicle.frontSuspension.cornerL.upright.sphere.r_shape[2] PARAM */) = (data->simulationInfo->realParameter[992] /* vehicle.frontSuspension.cornerL.upright.r_CM[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10625
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.sphere.r_shape[3] = vehicle.frontSuspension.cornerL.upright.r_CM[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10625};
  (data->simulationInfo->realParameter[996] /* vehicle.frontSuspension.cornerL.upright.sphere.r_shape[3] PARAM */) = (data->simulationInfo->realParameter[993] /* vehicle.frontSuspension.cornerL.upright.r_CM[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10627
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.cylinder.lengthDirection[1] = vehicle.frontSuspension.cornerL.ucaPivot.e[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10627};
  (data->simulationInfo->realParameter[926] /* vehicle.frontSuspension.cornerL.ucaPivot.cylinder.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[933] /* vehicle.frontSuspension.cornerL.ucaPivot.e[1] PARAM */);
  TRACE_POP
}

/*
equation index: 10629
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.cylinder.lengthDirection[2] = vehicle.frontSuspension.cornerL.ucaPivot.e[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10629};
  (data->simulationInfo->realParameter[927] /* vehicle.frontSuspension.cornerL.ucaPivot.cylinder.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[934] /* vehicle.frontSuspension.cornerL.ucaPivot.e[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10631
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.cylinder.lengthDirection[3] = vehicle.frontSuspension.cornerL.ucaPivot.e[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10631};
  (data->simulationInfo->realParameter[928] /* vehicle.frontSuspension.cornerL.ucaPivot.cylinder.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[935] /* vehicle.frontSuspension.cornerL.ucaPivot.e[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10633
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.fixed.flange.phi = vehicle.frontSuspension.cornerL.ucaPivot.fixed.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10633};
  (data->simulationInfo->realParameter[936] /* vehicle.frontSuspension.cornerL.ucaPivot.fixed.flange.phi PARAM */) = (data->simulationInfo->realParameter[937] /* vehicle.frontSuspension.cornerL.ucaPivot.fixed.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 10634
type: SIMPLE_ASSIGN
vehicle.rearSuspension.toeLinks.delta = vehicle.rearSuspension.deltaValue.k
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10634};
  (data->simulationInfo->realParameter[3214] /* vehicle.rearSuspension.toeLinks.delta PARAM */) = (data->simulationInfo->realParameter[3212] /* vehicle.rearSuspension.deltaValue.k PARAM */);
  TRACE_POP
}

/*
equation index: 10635
type: SIMPLE_ASSIGN
vehicle.rearSuspension.deltaValue.y = vehicle.rearSuspension.deltaValue.k
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10635};
  (data->simulationInfo->realParameter[3213] /* vehicle.rearSuspension.deltaValue.y PARAM */) = (data->simulationInfo->realParameter[3212] /* vehicle.rearSuspension.deltaValue.k PARAM */);
  TRACE_POP
}

/*
equation index: 10636
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.cylinder.lengthDirection[1] = vehicle.rearSuspension.cornerR.upright.r_CM[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10636};
  (data->simulationInfo->realParameter[3134] /* vehicle.rearSuspension.cornerR.upright.cylinder.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[3145] /* vehicle.rearSuspension.cornerR.upright.r_CM[1] PARAM */);
  TRACE_POP
}

/*
equation index: 10637
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.cylinder.lengthDirection[2] = vehicle.rearSuspension.cornerR.upright.r_CM[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10637};
  (data->simulationInfo->realParameter[3135] /* vehicle.rearSuspension.cornerR.upright.cylinder.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[3146] /* vehicle.rearSuspension.cornerR.upright.r_CM[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10638
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.cylinder.lengthDirection[3] = vehicle.rearSuspension.cornerR.upright.r_CM[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10638};
  (data->simulationInfo->realParameter[3136] /* vehicle.rearSuspension.cornerR.upright.cylinder.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[3147] /* vehicle.rearSuspension.cornerR.upright.r_CM[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10639
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.sphere.r_shape[2] = vehicle.rearSuspension.cornerR.upright.r_CM[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10639};
  (data->simulationInfo->realParameter[3149] /* vehicle.rearSuspension.cornerR.upright.sphere.r_shape[2] PARAM */) = (data->simulationInfo->realParameter[3146] /* vehicle.rearSuspension.cornerR.upright.r_CM[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10640
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.upright.sphere.r_shape[3] = vehicle.rearSuspension.cornerR.upright.r_CM[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10640};
  (data->simulationInfo->realParameter[3150] /* vehicle.rearSuspension.cornerR.upright.sphere.r_shape[3] PARAM */) = (data->simulationInfo->realParameter[3147] /* vehicle.rearSuspension.cornerR.upright.r_CM[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10642
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.cylinder.lengthDirection[1] = vehicle.rearSuspension.cornerR.ucaPivot.e[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10642};
  (data->simulationInfo->realParameter[3080] /* vehicle.rearSuspension.cornerR.ucaPivot.cylinder.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[3087] /* vehicle.rearSuspension.cornerR.ucaPivot.e[1] PARAM */);
  TRACE_POP
}

/*
equation index: 10644
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.cylinder.lengthDirection[2] = vehicle.rearSuspension.cornerR.ucaPivot.e[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10644};
  (data->simulationInfo->realParameter[3081] /* vehicle.rearSuspension.cornerR.ucaPivot.cylinder.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[3088] /* vehicle.rearSuspension.cornerR.ucaPivot.e[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10646
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.cylinder.lengthDirection[3] = vehicle.rearSuspension.cornerR.ucaPivot.e[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10646};
  (data->simulationInfo->realParameter[3082] /* vehicle.rearSuspension.cornerR.ucaPivot.cylinder.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[3089] /* vehicle.rearSuspension.cornerR.ucaPivot.e[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10648
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerR.ucaPivot.fixed.flange.phi = vehicle.rearSuspension.cornerR.ucaPivot.fixed.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10648};
  (data->simulationInfo->realParameter[3090] /* vehicle.rearSuspension.cornerR.ucaPivot.fixed.flange.phi PARAM */) = (data->simulationInfo->realParameter[3091] /* vehicle.rearSuspension.cornerR.ucaPivot.fixed.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 10649
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.cylinder.lengthDirection[1] = vehicle.rearSuspension.cornerL.upright.r_CM[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10649};
  (data->simulationInfo->realParameter[2487] /* vehicle.rearSuspension.cornerL.upright.cylinder.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[2498] /* vehicle.rearSuspension.cornerL.upright.r_CM[1] PARAM */);
  TRACE_POP
}

/*
equation index: 10650
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.cylinder.lengthDirection[2] = vehicle.rearSuspension.cornerL.upright.r_CM[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10650};
  (data->simulationInfo->realParameter[2488] /* vehicle.rearSuspension.cornerL.upright.cylinder.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[2499] /* vehicle.rearSuspension.cornerL.upright.r_CM[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10651
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.cylinder.lengthDirection[3] = vehicle.rearSuspension.cornerL.upright.r_CM[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10651};
  (data->simulationInfo->realParameter[2489] /* vehicle.rearSuspension.cornerL.upright.cylinder.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[2500] /* vehicle.rearSuspension.cornerL.upright.r_CM[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10652
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.sphere.r_shape[2] = vehicle.rearSuspension.cornerL.upright.r_CM[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10652};
  (data->simulationInfo->realParameter[2502] /* vehicle.rearSuspension.cornerL.upright.sphere.r_shape[2] PARAM */) = (data->simulationInfo->realParameter[2499] /* vehicle.rearSuspension.cornerL.upright.r_CM[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10653
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.upright.sphere.r_shape[3] = vehicle.rearSuspension.cornerL.upright.r_CM[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10653};
  (data->simulationInfo->realParameter[2503] /* vehicle.rearSuspension.cornerL.upright.sphere.r_shape[3] PARAM */) = (data->simulationInfo->realParameter[2500] /* vehicle.rearSuspension.cornerL.upright.r_CM[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10655
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.cylinder.lengthDirection[1] = vehicle.rearSuspension.cornerL.ucaPivot.e[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10655};
  (data->simulationInfo->realParameter[2433] /* vehicle.rearSuspension.cornerL.ucaPivot.cylinder.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[2440] /* vehicle.rearSuspension.cornerL.ucaPivot.e[1] PARAM */);
  TRACE_POP
}

/*
equation index: 10657
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.cylinder.lengthDirection[2] = vehicle.rearSuspension.cornerL.ucaPivot.e[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10657};
  (data->simulationInfo->realParameter[2434] /* vehicle.rearSuspension.cornerL.ucaPivot.cylinder.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[2441] /* vehicle.rearSuspension.cornerL.ucaPivot.e[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10659
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.cylinder.lengthDirection[3] = vehicle.rearSuspension.cornerL.ucaPivot.e[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10659};
  (data->simulationInfo->realParameter[2435] /* vehicle.rearSuspension.cornerL.ucaPivot.cylinder.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[2442] /* vehicle.rearSuspension.cornerL.ucaPivot.e[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10661
type: SIMPLE_ASSIGN
vehicle.rearSuspension.cornerL.ucaPivot.fixed.flange.phi = vehicle.rearSuspension.cornerL.ucaPivot.fixed.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10661};
  (data->simulationInfo->realParameter[2443] /* vehicle.rearSuspension.cornerL.ucaPivot.fixed.flange.phi PARAM */) = (data->simulationInfo->realParameter[2444] /* vehicle.rearSuspension.cornerL.ucaPivot.fixed.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 10662
type: SIMPLE_ASSIGN
world.axisDiameter = world.axisLength / world.defaultFrameDiameterFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10662};
  (data->simulationInfo->realParameter[3842] /* world.axisDiameter PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[3843] /* world.axisLength PARAM */),(data->simulationInfo->realParameter[3849] /* world.defaultFrameDiameterFraction PARAM */),"world.defaultFrameDiameterFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 10663
type: SIMPLE_ASSIGN
world.headLength = min(world.axisLength, world.axisDiameter * 5.0)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10663};
  (data->simulationInfo->realParameter[3885] /* world.headLength PARAM */) = fmin((data->simulationInfo->realParameter[3843] /* world.axisLength PARAM */),((data->simulationInfo->realParameter[3842] /* world.axisDiameter PARAM */)) * (5.0));
  TRACE_POP
}

/*
equation index: 10664
type: SIMPLE_ASSIGN
world.lineLength = max(0.0, world.axisLength - world.headLength)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10664};
  (data->simulationInfo->realParameter[3888] /* world.lineLength PARAM */) = fmax(0.0,(data->simulationInfo->realParameter[3843] /* world.axisLength PARAM */) - (data->simulationInfo->realParameter[3885] /* world.headLength PARAM */));
  TRACE_POP
}

/*
equation index: 10665
type: SIMPLE_ASSIGN
world.x_arrowHead.r[1] = world.lineLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10665};
  (data->simulationInfo->realParameter[3898] /* world.x_arrowHead.r[1] PARAM */) = (data->simulationInfo->realParameter[3888] /* world.lineLength PARAM */);
  TRACE_POP
}

/*
equation index: 10666
type: SIMPLE_ASSIGN
world.y_arrowHead.r[2] = world.lineLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10666};
  (data->simulationInfo->realParameter[3917] /* world.y_arrowHead.r[2] PARAM */) = (data->simulationInfo->realParameter[3888] /* world.lineLength PARAM */);
  TRACE_POP
}

/*
equation index: 10667
type: SIMPLE_ASSIGN
world.z_arrowHead.r[3] = world.lineLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10667};
  (data->simulationInfo->realParameter[3933] /* world.z_arrowHead.r[3] PARAM */) = (data->simulationInfo->realParameter[3888] /* world.lineLength PARAM */);
  TRACE_POP
}

/*
equation index: 10668
type: SIMPLE_ASSIGN
world.gravityArrowLine.r_shape[1] = world.gravityArrowTail[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10668};
  (data->simulationInfo->realParameter[3869] /* world.gravityArrowLine.r_shape[1] PARAM */) = (data->simulationInfo->realParameter[3873] /* world.gravityArrowTail[1] PARAM */);
  TRACE_POP
}

/*
equation index: 10669
type: SIMPLE_ASSIGN
world.gravityArrowLine.r_shape[2] = world.gravityArrowTail[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10669};
  (data->simulationInfo->realParameter[3870] /* world.gravityArrowLine.r_shape[2] PARAM */) = (data->simulationInfo->realParameter[3874] /* world.gravityArrowTail[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10670
type: SIMPLE_ASSIGN
world.gravityArrowLine.r_shape[3] = world.gravityArrowTail[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10670};
  (data->simulationInfo->realParameter[3871] /* world.gravityArrowLine.r_shape[3] PARAM */) = (data->simulationInfo->realParameter[3875] /* world.gravityArrowTail[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10671
type: SIMPLE_ASSIGN
world.gravityArrowHead.r_shape[1] = world.gravityArrowTail[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10671};
  (data->simulationInfo->realParameter[3863] /* world.gravityArrowHead.r_shape[1] PARAM */) = (data->simulationInfo->realParameter[3873] /* world.gravityArrowTail[1] PARAM */);
  TRACE_POP
}

/*
equation index: 10672
type: SIMPLE_ASSIGN
world.gravityArrowHead.r_shape[2] = world.gravityArrowTail[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10672};
  (data->simulationInfo->realParameter[3864] /* world.gravityArrowHead.r_shape[2] PARAM */) = (data->simulationInfo->realParameter[3874] /* world.gravityArrowTail[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10674
type: SIMPLE_ASSIGN
rig.motion.longitudinal.fixed.flange.s = rig.motion.longitudinal.fixed.s0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10674};
  (data->simulationInfo->realParameter[75] /* rig.motion.longitudinal.fixed.flange.s PARAM */) = (data->simulationInfo->realParameter[76] /* rig.motion.longitudinal.fixed.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 10676
type: SIMPLE_ASSIGN
rig.motion.lateral.fixed.flange.s = rig.motion.lateral.fixed.s0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10676};
  (data->simulationInfo->realParameter[46] /* rig.motion.lateral.fixed.flange.s PARAM */) = (data->simulationInfo->realParameter[47] /* rig.motion.lateral.fixed.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 10678
type: SIMPLE_ASSIGN
rig.motion.heave.fixed.flange.s = rig.motion.heave.fixed.s0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10678};
  (data->simulationInfo->realParameter[17] /* rig.motion.heave.fixed.flange.s PARAM */) = (data->simulationInfo->realParameter[18] /* rig.motion.heave.fixed.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 10680
type: SIMPLE_ASSIGN
rig.motion.yaw.cylinder.lengthDirection[1] = rig.motion.yaw.e[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10680};
  (data->simulationInfo->realParameter[197] /* rig.motion.yaw.cylinder.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[204] /* rig.motion.yaw.e[1] PARAM */);
  TRACE_POP
}

/*
equation index: 10682
type: SIMPLE_ASSIGN
rig.motion.yaw.cylinder.lengthDirection[2] = rig.motion.yaw.e[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10682};
  (data->simulationInfo->realParameter[198] /* rig.motion.yaw.cylinder.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[205] /* rig.motion.yaw.e[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10684
type: SIMPLE_ASSIGN
rig.motion.yaw.cylinder.lengthDirection[3] = rig.motion.yaw.e[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10684};
  (data->simulationInfo->realParameter[199] /* rig.motion.yaw.cylinder.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[206] /* rig.motion.yaw.e[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10686
type: SIMPLE_ASSIGN
rig.motion.yaw.fixed.flange.phi = rig.motion.yaw.fixed.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10686};
  (data->simulationInfo->realParameter[207] /* rig.motion.yaw.fixed.flange.phi PARAM */) = (data->simulationInfo->realParameter[208] /* rig.motion.yaw.fixed.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 10688
type: SIMPLE_ASSIGN
rig.motion.pitch.cylinder.lengthDirection[1] = rig.motion.pitch.e[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10688};
  (data->simulationInfo->realParameter[94] /* rig.motion.pitch.cylinder.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[101] /* rig.motion.pitch.e[1] PARAM */);
  TRACE_POP
}

/*
equation index: 10690
type: SIMPLE_ASSIGN
rig.motion.pitch.cylinder.lengthDirection[2] = rig.motion.pitch.e[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10690};
  (data->simulationInfo->realParameter[95] /* rig.motion.pitch.cylinder.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[102] /* rig.motion.pitch.e[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10692
type: SIMPLE_ASSIGN
rig.motion.pitch.cylinder.lengthDirection[3] = rig.motion.pitch.e[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10692};
  (data->simulationInfo->realParameter[96] /* rig.motion.pitch.cylinder.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[103] /* rig.motion.pitch.e[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10694
type: SIMPLE_ASSIGN
rig.motion.pitch.fixed.flange.phi = rig.motion.pitch.fixed.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10694};
  (data->simulationInfo->realParameter[104] /* rig.motion.pitch.fixed.flange.phi PARAM */) = (data->simulationInfo->realParameter[105] /* rig.motion.pitch.fixed.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 10696
type: SIMPLE_ASSIGN
rig.motion.roll.cylinder.lengthDirection[1] = rig.motion.roll.e[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10696};
  (data->simulationInfo->realParameter[118] /* rig.motion.roll.cylinder.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[125] /* rig.motion.roll.e[1] PARAM */);
  TRACE_POP
}

/*
equation index: 10698
type: SIMPLE_ASSIGN
rig.motion.roll.cylinder.lengthDirection[2] = rig.motion.roll.e[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10698};
  (data->simulationInfo->realParameter[119] /* rig.motion.roll.cylinder.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[126] /* rig.motion.roll.e[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10700
type: SIMPLE_ASSIGN
rig.motion.roll.cylinder.lengthDirection[3] = rig.motion.roll.e[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10700};
  (data->simulationInfo->realParameter[120] /* rig.motion.roll.cylinder.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[127] /* rig.motion.roll.e[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10702
type: SIMPLE_ASSIGN
rig.motion.roll.fixed.flange.phi = rig.motion.roll.fixed.phi0
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10702};
  (data->simulationInfo->realParameter[128] /* rig.motion.roll.fixed.flange.phi PARAM */) = (data->simulationInfo->realParameter[129] /* rig.motion.roll.fixed.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 10703
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.cylinderLength = 2.0 * world.defaultJointLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10703};
  (data->simulationInfo->realParameter[3648] /* vehicle.wheelFR.rim.rotor1D.cylinderLength PARAM */) = (2.0) * ((data->simulationInfo->realParameter[3850] /* world.defaultJointLength PARAM */));
  TRACE_POP
}

/*
equation index: 10704
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinderLength = vehicle.wheelFR.rim.rotor1D.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10704};
  (data->simulationInfo->realParameter[3664] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */) = (data->simulationInfo->realParameter[3648] /* vehicle.wheelFR.rim.rotor1D.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 10705
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.length = vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10705};
  (data->simulationInfo->realParameter[3660] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.length PARAM */) = (data->simulationInfo->realParameter[3664] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 10706
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.cylinderDiameter = 2.0 * world.defaultJointWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10706};
  (data->simulationInfo->realParameter[3647] /* vehicle.wheelFR.rim.rotor1D.cylinderDiameter PARAM */) = (2.0) * ((data->simulationInfo->realParameter[3851] /* world.defaultJointWidth PARAM */));
  TRACE_POP
}

/*
equation index: 10707
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinderDiameter = vehicle.wheelFR.rim.rotor1D.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10707};
  (data->simulationInfo->realParameter[3663] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinderDiameter PARAM */) = (data->simulationInfo->realParameter[3647] /* vehicle.wheelFR.rim.rotor1D.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10708
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.width = vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10708};
  (data->simulationInfo->realParameter[3662] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.width PARAM */) = (data->simulationInfo->realParameter[3663] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10709
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.height = vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10709};
  (data->simulationInfo->realParameter[3659] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.height PARAM */) = (data->simulationInfo->realParameter[3663] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10710
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10710};
  (data->simulationInfo->realParameter[3661] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10711
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10711};
  (data->simulationInfo->realParameter[3677] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10712
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10712};
  (data->simulationInfo->realParameter[3678] /* vehicle.wheelFR.rim.rotor1D.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10713
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.cylinderLength = 2.0 * world.defaultJointLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10713};
  (data->simulationInfo->realParameter[3575] /* vehicle.wheelFL.rim.rotor1D.cylinderLength PARAM */) = (2.0) * ((data->simulationInfo->realParameter[3850] /* world.defaultJointLength PARAM */));
  TRACE_POP
}

/*
equation index: 10714
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinderLength = vehicle.wheelFL.rim.rotor1D.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10714};
  (data->simulationInfo->realParameter[3591] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */) = (data->simulationInfo->realParameter[3575] /* vehicle.wheelFL.rim.rotor1D.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 10715
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.length = vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10715};
  (data->simulationInfo->realParameter[3587] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.length PARAM */) = (data->simulationInfo->realParameter[3591] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 10716
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.cylinderDiameter = 2.0 * world.defaultJointWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10716};
  (data->simulationInfo->realParameter[3574] /* vehicle.wheelFL.rim.rotor1D.cylinderDiameter PARAM */) = (2.0) * ((data->simulationInfo->realParameter[3851] /* world.defaultJointWidth PARAM */));
  TRACE_POP
}

/*
equation index: 10717
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinderDiameter = vehicle.wheelFL.rim.rotor1D.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10717};
  (data->simulationInfo->realParameter[3590] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinderDiameter PARAM */) = (data->simulationInfo->realParameter[3574] /* vehicle.wheelFL.rim.rotor1D.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10718
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.width = vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10718};
  (data->simulationInfo->realParameter[3589] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.width PARAM */) = (data->simulationInfo->realParameter[3590] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10719
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.height = vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10719};
  (data->simulationInfo->realParameter[3586] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.height PARAM */) = (data->simulationInfo->realParameter[3590] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10720
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10720};
  (data->simulationInfo->realParameter[3588] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10721
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10721};
  (data->simulationInfo->realParameter[3604] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10722
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10722};
  (data->simulationInfo->realParameter[3605] /* vehicle.wheelFL.rim.rotor1D.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10723
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.cylinderLength = 2.0 * world.defaultJointLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10723};
  (data->simulationInfo->realParameter[3794] /* vehicle.wheelRR.rim.rotor1D.cylinderLength PARAM */) = (2.0) * ((data->simulationInfo->realParameter[3850] /* world.defaultJointLength PARAM */));
  TRACE_POP
}

/*
equation index: 10724
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinderLength = vehicle.wheelRR.rim.rotor1D.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10724};
  (data->simulationInfo->realParameter[3810] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */) = (data->simulationInfo->realParameter[3794] /* vehicle.wheelRR.rim.rotor1D.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 10725
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.length = vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10725};
  (data->simulationInfo->realParameter[3806] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.length PARAM */) = (data->simulationInfo->realParameter[3810] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 10726
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.cylinderDiameter = 2.0 * world.defaultJointWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10726};
  (data->simulationInfo->realParameter[3793] /* vehicle.wheelRR.rim.rotor1D.cylinderDiameter PARAM */) = (2.0) * ((data->simulationInfo->realParameter[3851] /* world.defaultJointWidth PARAM */));
  TRACE_POP
}

/*
equation index: 10727
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinderDiameter = vehicle.wheelRR.rim.rotor1D.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10727};
  (data->simulationInfo->realParameter[3809] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinderDiameter PARAM */) = (data->simulationInfo->realParameter[3793] /* vehicle.wheelRR.rim.rotor1D.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10728
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.width = vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10728};
  (data->simulationInfo->realParameter[3808] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.width PARAM */) = (data->simulationInfo->realParameter[3809] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10729
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.height = vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10729};
  (data->simulationInfo->realParameter[3805] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.height PARAM */) = (data->simulationInfo->realParameter[3809] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10730
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10730};
  (data->simulationInfo->realParameter[3807] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10731
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10731};
  (data->simulationInfo->realParameter[3823] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10732
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10732};
  (data->simulationInfo->realParameter[3824] /* vehicle.wheelRR.rim.rotor1D.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10733
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.cylinderLength = 2.0 * world.defaultJointLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10733};
  (data->simulationInfo->realParameter[3721] /* vehicle.wheelRL.rim.rotor1D.cylinderLength PARAM */) = (2.0) * ((data->simulationInfo->realParameter[3850] /* world.defaultJointLength PARAM */));
  TRACE_POP
}

/*
equation index: 10734
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinderLength = vehicle.wheelRL.rim.rotor1D.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10734};
  (data->simulationInfo->realParameter[3737] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */) = (data->simulationInfo->realParameter[3721] /* vehicle.wheelRL.rim.rotor1D.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 10735
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.length = vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10735};
  (data->simulationInfo->realParameter[3733] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.length PARAM */) = (data->simulationInfo->realParameter[3737] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 10736
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.cylinderDiameter = 2.0 * world.defaultJointWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10736};
  (data->simulationInfo->realParameter[3720] /* vehicle.wheelRL.rim.rotor1D.cylinderDiameter PARAM */) = (2.0) * ((data->simulationInfo->realParameter[3851] /* world.defaultJointWidth PARAM */));
  TRACE_POP
}

/*
equation index: 10737
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinderDiameter = vehicle.wheelRL.rim.rotor1D.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10737};
  (data->simulationInfo->realParameter[3736] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinderDiameter PARAM */) = (data->simulationInfo->realParameter[3720] /* vehicle.wheelRL.rim.rotor1D.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10738
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.width = vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10738};
  (data->simulationInfo->realParameter[3735] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.width PARAM */) = (data->simulationInfo->realParameter[3736] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10739
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.height = vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10739};
  (data->simulationInfo->realParameter[3732] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.height PARAM */) = (data->simulationInfo->realParameter[3736] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10740
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10740};
  (data->simulationInfo->realParameter[3734] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10741
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10741};
  (data->simulationInfo->realParameter[3750] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10742
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10742};
  (data->simulationInfo->realParameter[3751] /* vehicle.wheelRL.rim.rotor1D.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10743
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.cylinder.width = vehicle.vehicleBody.body.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10743};
  (data->simulationInfo->realParameter[3432] /* vehicle.vehicleBody.body.cylinder.width PARAM */) = (data->simulationInfo->realParameter[3433] /* vehicle.vehicleBody.body.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10744
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.cylinder.height = vehicle.vehicleBody.body.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10744};
  (data->simulationInfo->realParameter[3427] /* vehicle.vehicleBody.body.cylinder.height PARAM */) = (data->simulationInfo->realParameter[3433] /* vehicle.vehicleBody.body.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10745
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.cylinder.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10745};
  (data->simulationInfo->realParameter[3431] /* vehicle.vehicleBody.body.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10746
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.sphere.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10746};
  (data->simulationInfo->realParameter[3445] /* vehicle.vehicleBody.body.sphere.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10747
type: SIMPLE_ASSIGN
vehicle.vehicleBody.body.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10747};
  (data->simulationInfo->realParameter[3442] /* vehicle.vehicleBody.body.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10748
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.shape.length = vehicle.vehicleBody.fixedTranslationFront.length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10748};
  (data->simulationInfo->realParameter[3467] /* vehicle.vehicleBody.fixedTranslationFront.shape.length PARAM */) = (data->simulationInfo->realParameter[3455] /* vehicle.vehicleBody.fixedTranslationFront.length PARAM */);
  TRACE_POP
}

/*
equation index: 10749
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.width = vehicle.vehicleBody.fixedTranslationFront.length / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10749};
  (data->simulationInfo->realParameter[3471] /* vehicle.vehicleBody.fixedTranslationFront.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[3455] /* vehicle.vehicleBody.fixedTranslationFront.length PARAM */),(data->simulationInfo->realParameter[3855] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 10750
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.shape.width = vehicle.vehicleBody.fixedTranslationFront.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10750};
  (data->simulationInfo->realParameter[3469] /* vehicle.vehicleBody.fixedTranslationFront.shape.width PARAM */) = (data->simulationInfo->realParameter[3471] /* vehicle.vehicleBody.fixedTranslationFront.width PARAM */);
  TRACE_POP
}

/*
equation index: 10751
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.height = vehicle.vehicleBody.fixedTranslationFront.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10751};
  (data->simulationInfo->realParameter[3454] /* vehicle.vehicleBody.fixedTranslationFront.height PARAM */) = (data->simulationInfo->realParameter[3471] /* vehicle.vehicleBody.fixedTranslationFront.width PARAM */);
  TRACE_POP
}

/*
equation index: 10752
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.shape.height = vehicle.vehicleBody.fixedTranslationFront.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10752};
  (data->simulationInfo->realParameter[3466] /* vehicle.vehicleBody.fixedTranslationFront.shape.height PARAM */) = (data->simulationInfo->realParameter[3454] /* vehicle.vehicleBody.fixedTranslationFront.height PARAM */);
  TRACE_POP
}

/*
equation index: 10753
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.shape.extra = vehicle.vehicleBody.fixedTranslationFront.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10753};
  (data->simulationInfo->realParameter[3465] /* vehicle.vehicleBody.fixedTranslationFront.shape.extra PARAM */) = (data->simulationInfo->realParameter[3453] /* vehicle.vehicleBody.fixedTranslationFront.extra PARAM */);
  TRACE_POP
}

/*
equation index: 10754
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10754};
  (data->simulationInfo->realParameter[3468] /* vehicle.vehicleBody.fixedTranslationFront.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10755
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationFront.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10755};
  (data->simulationInfo->realParameter[3470] /* vehicle.vehicleBody.fixedTranslationFront.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10756
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.shape.length = vehicle.vehicleBody.fixedTranslationRear.length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10756};
  (data->simulationInfo->realParameter[3489] /* vehicle.vehicleBody.fixedTranslationRear.shape.length PARAM */) = (data->simulationInfo->realParameter[3477] /* vehicle.vehicleBody.fixedTranslationRear.length PARAM */);
  TRACE_POP
}

/*
equation index: 10757
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.width = vehicle.vehicleBody.fixedTranslationRear.length / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10757};
  (data->simulationInfo->realParameter[3493] /* vehicle.vehicleBody.fixedTranslationRear.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[3477] /* vehicle.vehicleBody.fixedTranslationRear.length PARAM */),(data->simulationInfo->realParameter[3855] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 10758
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.shape.width = vehicle.vehicleBody.fixedTranslationRear.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10758};
  (data->simulationInfo->realParameter[3491] /* vehicle.vehicleBody.fixedTranslationRear.shape.width PARAM */) = (data->simulationInfo->realParameter[3493] /* vehicle.vehicleBody.fixedTranslationRear.width PARAM */);
  TRACE_POP
}

/*
equation index: 10759
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.height = vehicle.vehicleBody.fixedTranslationRear.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10759};
  (data->simulationInfo->realParameter[3476] /* vehicle.vehicleBody.fixedTranslationRear.height PARAM */) = (data->simulationInfo->realParameter[3493] /* vehicle.vehicleBody.fixedTranslationRear.width PARAM */);
  TRACE_POP
}

/*
equation index: 10760
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.shape.height = vehicle.vehicleBody.fixedTranslationRear.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10760};
  (data->simulationInfo->realParameter[3488] /* vehicle.vehicleBody.fixedTranslationRear.shape.height PARAM */) = (data->simulationInfo->realParameter[3476] /* vehicle.vehicleBody.fixedTranslationRear.height PARAM */);
  TRACE_POP
}

/*
equation index: 10761
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.shape.extra = vehicle.vehicleBody.fixedTranslationRear.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10761};
  (data->simulationInfo->realParameter[3487] /* vehicle.vehicleBody.fixedTranslationRear.shape.extra PARAM */) = (data->simulationInfo->realParameter[3475] /* vehicle.vehicleBody.fixedTranslationRear.extra PARAM */);
  TRACE_POP
}

/*
equation index: 10762
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10762};
  (data->simulationInfo->realParameter[3490] /* vehicle.vehicleBody.fixedTranslationRear.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10763
type: SIMPLE_ASSIGN
vehicle.vehicleBody.fixedTranslationRear.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10763};
  (data->simulationInfo->realParameter[3492] /* vehicle.vehicleBody.fixedTranslationRear.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10764
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.shape.length = vehicle.frontSuspension.steering.housing.length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10764};
  (data->simulationInfo->realParameter[1763] /* vehicle.frontSuspension.steering.housing.shape.length PARAM */) = (data->simulationInfo->realParameter[1751] /* vehicle.frontSuspension.steering.housing.length PARAM */);
  TRACE_POP
}

/*
equation index: 10765
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.width = vehicle.frontSuspension.steering.housing.length / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10765};
  (data->simulationInfo->realParameter[1767] /* vehicle.frontSuspension.steering.housing.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[1751] /* vehicle.frontSuspension.steering.housing.length PARAM */),(data->simulationInfo->realParameter[3855] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 10766
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.shape.width = vehicle.frontSuspension.steering.housing.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10766};
  (data->simulationInfo->realParameter[1765] /* vehicle.frontSuspension.steering.housing.shape.width PARAM */) = (data->simulationInfo->realParameter[1767] /* vehicle.frontSuspension.steering.housing.width PARAM */);
  TRACE_POP
}

/*
equation index: 10767
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.height = vehicle.frontSuspension.steering.housing.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10767};
  (data->simulationInfo->realParameter[1750] /* vehicle.frontSuspension.steering.housing.height PARAM */) = (data->simulationInfo->realParameter[1767] /* vehicle.frontSuspension.steering.housing.width PARAM */);
  TRACE_POP
}

/*
equation index: 10768
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.shape.height = vehicle.frontSuspension.steering.housing.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10768};
  (data->simulationInfo->realParameter[1762] /* vehicle.frontSuspension.steering.housing.shape.height PARAM */) = (data->simulationInfo->realParameter[1750] /* vehicle.frontSuspension.steering.housing.height PARAM */);
  TRACE_POP
}

/*
equation index: 10769
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.shape.extra = vehicle.frontSuspension.steering.housing.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10769};
  (data->simulationInfo->realParameter[1761] /* vehicle.frontSuspension.steering.housing.shape.extra PARAM */) = (data->simulationInfo->realParameter[1749] /* vehicle.frontSuspension.steering.housing.extra PARAM */);
  TRACE_POP
}

/*
equation index: 10770
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10770};
  (data->simulationInfo->realParameter[1764] /* vehicle.frontSuspension.steering.housing.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10771
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.housing.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10771};
  (data->simulationInfo->realParameter[1766] /* vehicle.frontSuspension.steering.housing.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10772
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.boxWidth = world.defaultJointWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10772};
  (data->simulationInfo->realParameter[1849] /* vehicle.frontSuspension.steering.rack.boxWidth PARAM */) = (data->simulationInfo->realParameter[3851] /* world.defaultJointWidth PARAM */);
  TRACE_POP
}

/*
equation index: 10773
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.box.width = vehicle.frontSuspension.steering.rack.boxWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10773};
  (data->simulationInfo->realParameter[1847] /* vehicle.frontSuspension.steering.rack.box.width PARAM */) = (data->simulationInfo->realParameter[1849] /* vehicle.frontSuspension.steering.rack.boxWidth PARAM */);
  TRACE_POP
}

/*
equation index: 10774
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.boxHeight = vehicle.frontSuspension.steering.rack.boxWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10774};
  (data->simulationInfo->realParameter[1848] /* vehicle.frontSuspension.steering.rack.boxHeight PARAM */) = (data->simulationInfo->realParameter[1849] /* vehicle.frontSuspension.steering.rack.boxWidth PARAM */);
  TRACE_POP
}

/*
equation index: 10775
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.box.height = vehicle.frontSuspension.steering.rack.boxHeight
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10775};
  (data->simulationInfo->realParameter[1845] /* vehicle.frontSuspension.steering.rack.box.height PARAM */) = (data->simulationInfo->realParameter[1848] /* vehicle.frontSuspension.steering.rack.boxHeight PARAM */);
  TRACE_POP
}

/*
equation index: 10776
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.box.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10776};
  (data->simulationInfo->realParameter[1846] /* vehicle.frontSuspension.steering.rack.box.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10777
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.rack.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10777};
  (data->simulationInfo->realParameter[1861] /* vehicle.frontSuspension.steering.rack.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10778
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.shape.length = vehicle.frontSuspension.steering.endL.length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10778};
  (data->simulationInfo->realParameter[1719] /* vehicle.frontSuspension.steering.endL.shape.length PARAM */) = (data->simulationInfo->realParameter[1707] /* vehicle.frontSuspension.steering.endL.length PARAM */);
  TRACE_POP
}

/*
equation index: 10779
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.width = vehicle.frontSuspension.steering.endL.length / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10779};
  (data->simulationInfo->realParameter[1723] /* vehicle.frontSuspension.steering.endL.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[1707] /* vehicle.frontSuspension.steering.endL.length PARAM */),(data->simulationInfo->realParameter[3855] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 10780
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.shape.width = vehicle.frontSuspension.steering.endL.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10780};
  (data->simulationInfo->realParameter[1721] /* vehicle.frontSuspension.steering.endL.shape.width PARAM */) = (data->simulationInfo->realParameter[1723] /* vehicle.frontSuspension.steering.endL.width PARAM */);
  TRACE_POP
}

/*
equation index: 10781
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.height = vehicle.frontSuspension.steering.endL.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10781};
  (data->simulationInfo->realParameter[1706] /* vehicle.frontSuspension.steering.endL.height PARAM */) = (data->simulationInfo->realParameter[1723] /* vehicle.frontSuspension.steering.endL.width PARAM */);
  TRACE_POP
}

/*
equation index: 10782
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.shape.height = vehicle.frontSuspension.steering.endL.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10782};
  (data->simulationInfo->realParameter[1718] /* vehicle.frontSuspension.steering.endL.shape.height PARAM */) = (data->simulationInfo->realParameter[1706] /* vehicle.frontSuspension.steering.endL.height PARAM */);
  TRACE_POP
}

/*
equation index: 10783
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.shape.extra = vehicle.frontSuspension.steering.endL.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10783};
  (data->simulationInfo->realParameter[1717] /* vehicle.frontSuspension.steering.endL.shape.extra PARAM */) = (data->simulationInfo->realParameter[1705] /* vehicle.frontSuspension.steering.endL.extra PARAM */);
  TRACE_POP
}

/*
equation index: 10784
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10784};
  (data->simulationInfo->realParameter[1720] /* vehicle.frontSuspension.steering.endL.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10785
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endL.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10785};
  (data->simulationInfo->realParameter[1722] /* vehicle.frontSuspension.steering.endL.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10786
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.shape.length = vehicle.frontSuspension.steering.endR.length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10786};
  (data->simulationInfo->realParameter[1741] /* vehicle.frontSuspension.steering.endR.shape.length PARAM */) = (data->simulationInfo->realParameter[1729] /* vehicle.frontSuspension.steering.endR.length PARAM */);
  TRACE_POP
}

/*
equation index: 10787
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.width = vehicle.frontSuspension.steering.endR.length / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10787};
  (data->simulationInfo->realParameter[1745] /* vehicle.frontSuspension.steering.endR.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[1729] /* vehicle.frontSuspension.steering.endR.length PARAM */),(data->simulationInfo->realParameter[3855] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 10788
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.shape.width = vehicle.frontSuspension.steering.endR.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10788};
  (data->simulationInfo->realParameter[1743] /* vehicle.frontSuspension.steering.endR.shape.width PARAM */) = (data->simulationInfo->realParameter[1745] /* vehicle.frontSuspension.steering.endR.width PARAM */);
  TRACE_POP
}

/*
equation index: 10789
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.height = vehicle.frontSuspension.steering.endR.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10789};
  (data->simulationInfo->realParameter[1728] /* vehicle.frontSuspension.steering.endR.height PARAM */) = (data->simulationInfo->realParameter[1745] /* vehicle.frontSuspension.steering.endR.width PARAM */);
  TRACE_POP
}

/*
equation index: 10790
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.shape.height = vehicle.frontSuspension.steering.endR.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10790};
  (data->simulationInfo->realParameter[1740] /* vehicle.frontSuspension.steering.endR.shape.height PARAM */) = (data->simulationInfo->realParameter[1728] /* vehicle.frontSuspension.steering.endR.height PARAM */);
  TRACE_POP
}

/*
equation index: 10791
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.shape.extra = vehicle.frontSuspension.steering.endR.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10791};
  (data->simulationInfo->realParameter[1739] /* vehicle.frontSuspension.steering.endR.shape.extra PARAM */) = (data->simulationInfo->realParameter[1727] /* vehicle.frontSuspension.steering.endR.extra PARAM */);
  TRACE_POP
}

/*
equation index: 10792
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10792};
  (data->simulationInfo->realParameter[1742] /* vehicle.frontSuspension.steering.endR.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10793
type: SIMPLE_ASSIGN
vehicle.frontSuspension.steering.endR.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10793};
  (data->simulationInfo->realParameter[1744] /* vehicle.frontSuspension.steering.endR.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10794
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revoluteLength = world.defaultJointLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10794};
  (data->simulationInfo->realParameter[1479] /* vehicle.frontSuspension.cornerR.tieRod.revoluteLength PARAM */) = (data->simulationInfo->realParameter[3850] /* world.defaultJointLength PARAM */);
  TRACE_POP
}

/*
equation index: 10795
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinderLength = vehicle.frontSuspension.cornerR.tieRod.revoluteLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10795};
  (data->simulationInfo->realParameter[1467] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinderLength PARAM */) = (data->simulationInfo->realParameter[1479] /* vehicle.frontSuspension.cornerR.tieRod.revoluteLength PARAM */);
  TRACE_POP
}

/*
equation index: 10796
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.length = vehicle.frontSuspension.cornerR.tieRod.revolute.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10796};
  (data->simulationInfo->realParameter[1463] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.length PARAM */) = (data->simulationInfo->realParameter[1467] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 10797
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revoluteDiameter = world.defaultJointWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10797};
  (data->simulationInfo->realParameter[1478] /* vehicle.frontSuspension.cornerR.tieRod.revoluteDiameter PARAM */) = (data->simulationInfo->realParameter[3851] /* world.defaultJointWidth PARAM */);
  TRACE_POP
}

/*
equation index: 10798
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinderDiameter = vehicle.frontSuspension.cornerR.tieRod.revoluteDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10798};
  (data->simulationInfo->realParameter[1466] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinderDiameter PARAM */) = (data->simulationInfo->realParameter[1478] /* vehicle.frontSuspension.cornerR.tieRod.revoluteDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10799
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.width = vehicle.frontSuspension.cornerR.tieRod.revolute.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10799};
  (data->simulationInfo->realParameter[1465] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.width PARAM */) = (data->simulationInfo->realParameter[1466] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10800
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.height = vehicle.frontSuspension.cornerR.tieRod.revolute.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10800};
  (data->simulationInfo->realParameter[1462] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.height PARAM */) = (data->simulationInfo->realParameter[1466] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10801
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.rTieInner[1] = vehicle.frontSuspension.cornerR.hp.front_rTieInner[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10801};
  (data->simulationInfo->realParameter[1302] /* vehicle.frontSuspension.cornerR.rTieInner[1] PARAM */) = (data->simulationInfo->realParameter[1090] /* vehicle.frontSuspension.cornerR.hp.front_rTieInner[1] PARAM */);
  TRACE_POP
}

/*
equation index: 10802
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.rTieInner[2] = vehicle.frontSuspension.cornerR.hp.front_rTieInner[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10802};
  (data->simulationInfo->realParameter[1303] /* vehicle.frontSuspension.cornerR.rTieInner[2] PARAM */) = (data->simulationInfo->realParameter[1091] /* vehicle.frontSuspension.cornerR.hp.front_rTieInner[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10803
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.rTieInner[3] = vehicle.frontSuspension.cornerR.hp.front_rTieInner[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10803};
  (data->simulationInfo->realParameter[1304] /* vehicle.frontSuspension.cornerR.rTieInner[3] PARAM */) = (data->simulationInfo->realParameter[1092] /* vehicle.frontSuspension.cornerR.hp.front_rTieInner[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10804
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1Length = Modelica.Math.Vectors.norm({-0.12 - vehicle.frontSuspension.cornerR.rTieInner[1], 0.92 - vehicle.frontSuspension.cornerR.rTieInner[2], 0.1 - vehicle.frontSuspension.cornerR.rTieInner[3]}, 2.0)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10804};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 3, (modelica_real)-0.12 - (data->simulationInfo->realParameter[1302] /* vehicle.frontSuspension.cornerR.rTieInner[1] PARAM */), (modelica_real)0.92 - (data->simulationInfo->realParameter[1303] /* vehicle.frontSuspension.cornerR.rTieInner[2] PARAM */), (modelica_real)0.1 - (data->simulationInfo->realParameter[1304] /* vehicle.frontSuspension.cornerR.rTieInner[3] PARAM */));
  (data->simulationInfo->realParameter[1499] /* vehicle.frontSuspension.cornerR.tieRod.rod1Length PARAM */) = omc_Modelica_Math_Vectors_norm(threadData, tmp0, 2.0);
  TRACE_POP
}

/*
equation index: 10805
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.rodLength = vehicle.frontSuspension.cornerR.tieRod.rod1Length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10805};
  (data->simulationInfo->realParameter[1483] /* vehicle.frontSuspension.cornerR.tieRod.rod1.rodLength PARAM */) = (data->simulationInfo->realParameter[1499] /* vehicle.frontSuspension.cornerR.tieRod.rod1Length PARAM */);
  TRACE_POP
}

/*
equation index: 10806
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.length = vehicle.frontSuspension.cornerR.tieRod.rod1.rodLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10806};
  (data->simulationInfo->realParameter[1493] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.length PARAM */) = (data->simulationInfo->realParameter[1483] /* vehicle.frontSuspension.cornerR.tieRod.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 10807
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.sphereDiameter = world.defaultJointLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10807};
  (data->simulationInfo->realParameter[1524] /* vehicle.frontSuspension.cornerR.tieRod.sphereDiameter PARAM */) = (data->simulationInfo->realParameter[3850] /* world.defaultJointLength PARAM */);
  TRACE_POP
}

/*
equation index: 10808
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1Diameter = 0.5 * vehicle.frontSuspension.cornerR.tieRod.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10808};
  (data->simulationInfo->realParameter[1498] /* vehicle.frontSuspension.cornerR.tieRod.rod1Diameter PARAM */) = (0.5) * ((data->simulationInfo->realParameter[1524] /* vehicle.frontSuspension.cornerR.tieRod.sphereDiameter PARAM */));
  TRACE_POP
}

/*
equation index: 10809
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.rodDiameter = vehicle.frontSuspension.cornerR.tieRod.rod1Diameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10809};
  (data->simulationInfo->realParameter[1482] /* vehicle.frontSuspension.cornerR.tieRod.rod1.rodDiameter PARAM */) = (data->simulationInfo->realParameter[1498] /* vehicle.frontSuspension.cornerR.tieRod.rod1Diameter PARAM */);
  TRACE_POP
}

/*
equation index: 10810
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.width = vehicle.frontSuspension.cornerR.tieRod.rod1.rodDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10810};
  (data->simulationInfo->realParameter[1495] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.width PARAM */) = (data->simulationInfo->realParameter[1482] /* vehicle.frontSuspension.cornerR.tieRod.rod1.rodDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10811
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.height = vehicle.frontSuspension.cornerR.tieRod.rod1.rodDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10811};
  (data->simulationInfo->realParameter[1492] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.height PARAM */) = (data->simulationInfo->realParameter[1482] /* vehicle.frontSuspension.cornerR.tieRod.rod1.rodDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10812
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.sphereDiameter = vehicle.frontSuspension.cornerR.tieRod.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10812};
  (data->simulationInfo->realParameter[1497] /* vehicle.frontSuspension.cornerR.tieRod.rod1.sphereDiameter PARAM */) = (data->simulationInfo->realParameter[1524] /* vehicle.frontSuspension.cornerR.tieRod.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10813
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_a.length = vehicle.frontSuspension.cornerR.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10813};
  (data->simulationInfo->realParameter[1485] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_a.length PARAM */) = (data->simulationInfo->realParameter[1497] /* vehicle.frontSuspension.cornerR.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10814
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_a.width = vehicle.frontSuspension.cornerR.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10814};
  (data->simulationInfo->realParameter[1487] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_a.width PARAM */) = (data->simulationInfo->realParameter[1497] /* vehicle.frontSuspension.cornerR.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10815
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_a.height = vehicle.frontSuspension.cornerR.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10815};
  (data->simulationInfo->realParameter[1484] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_a.height PARAM */) = (data->simulationInfo->realParameter[1497] /* vehicle.frontSuspension.cornerR.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10816
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.length = vehicle.frontSuspension.cornerR.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10816};
  (data->simulationInfo->realParameter[1489] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.length PARAM */) = (data->simulationInfo->realParameter[1497] /* vehicle.frontSuspension.cornerR.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10817
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.width = vehicle.frontSuspension.cornerR.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10817};
  (data->simulationInfo->realParameter[1491] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.width PARAM */) = (data->simulationInfo->realParameter[1497] /* vehicle.frontSuspension.cornerR.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10818
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.height = vehicle.frontSuspension.cornerR.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10818};
  (data->simulationInfo->realParameter[1488] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.height PARAM */) = (data->simulationInfo->realParameter[1497] /* vehicle.frontSuspension.cornerR.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10819
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2Diameter = vehicle.frontSuspension.cornerR.tieRod.rod1Diameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10819};
  (data->simulationInfo->realParameter[1522] /* vehicle.frontSuspension.cornerR.tieRod.rod2Diameter PARAM */) = (data->simulationInfo->realParameter[1498] /* vehicle.frontSuspension.cornerR.tieRod.rod1Diameter PARAM */);
  TRACE_POP
}

/*
equation index: 10820
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.width = vehicle.frontSuspension.cornerR.tieRod.rod2Diameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10820};
  (data->simulationInfo->realParameter[1518] /* vehicle.frontSuspension.cornerR.tieRod.rod2.width PARAM */) = (data->simulationInfo->realParameter[1522] /* vehicle.frontSuspension.cornerR.tieRod.rod2Diameter PARAM */);
  TRACE_POP
}

/*
equation index: 10821
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.shape.width = vehicle.frontSuspension.cornerR.tieRod.rod2.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10821};
  (data->simulationInfo->realParameter[1516] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shape.width PARAM */) = (data->simulationInfo->realParameter[1518] /* vehicle.frontSuspension.cornerR.tieRod.rod2.width PARAM */);
  TRACE_POP
}

/*
equation index: 10822
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.height = vehicle.frontSuspension.cornerR.tieRod.rod2Diameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10822};
  (data->simulationInfo->realParameter[1502] /* vehicle.frontSuspension.cornerR.tieRod.rod2.height PARAM */) = (data->simulationInfo->realParameter[1522] /* vehicle.frontSuspension.cornerR.tieRod.rod2Diameter PARAM */);
  TRACE_POP
}

/*
equation index: 10823
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.shape.height = vehicle.frontSuspension.cornerR.tieRod.rod2.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10823};
  (data->simulationInfo->realParameter[1514] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shape.height PARAM */) = (data->simulationInfo->realParameter[1502] /* vehicle.frontSuspension.cornerR.tieRod.rod2.height PARAM */);
  TRACE_POP
}

/*
equation index: 10824
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.shape.extra = vehicle.frontSuspension.cornerR.tieRod.rod2.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10824};
  (data->simulationInfo->realParameter[1513] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shape.extra PARAM */) = (data->simulationInfo->realParameter[1501] /* vehicle.frontSuspension.cornerR.tieRod.rod2.extra PARAM */);
  TRACE_POP
}

/*
equation index: 10825
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10825};
  (data->simulationInfo->realParameter[1464] /* vehicle.frontSuspension.cornerR.tieRod.revolute.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10826
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10826};
  (data->simulationInfo->realParameter[1477] /* vehicle.frontSuspension.cornerR.tieRod.revolute.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10827
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10827};
  (data->simulationInfo->realParameter[1494] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_rod.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10828
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_a.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10828};
  (data->simulationInfo->realParameter[1486] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_a.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10829
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10829};
  (data->simulationInfo->realParameter[1490] /* vehicle.frontSuspension.cornerR.tieRod.rod1.shape_b.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10830
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod1.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10830};
  (data->simulationInfo->realParameter[1496] /* vehicle.frontSuspension.cornerR.tieRod.rod1.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10831
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10831};
  (data->simulationInfo->realParameter[1515] /* vehicle.frontSuspension.cornerR.tieRod.rod2.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10832
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.rod2.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10832};
  (data->simulationInfo->realParameter[1517] /* vehicle.frontSuspension.cornerR.tieRod.rod2.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10833
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10833};
  (data->simulationInfo->realParameter[1523] /* vehicle.frontSuspension.cornerR.tieRod.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10834
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.shape.length = vehicle.frontSuspension.cornerR.spindle.length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10834};
  (data->simulationInfo->realParameter[1338] /* vehicle.frontSuspension.cornerR.spindle.shape.length PARAM */) = (data->simulationInfo->realParameter[1326] /* vehicle.frontSuspension.cornerR.spindle.length PARAM */);
  TRACE_POP
}

/*
equation index: 10835
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.width = vehicle.frontSuspension.cornerR.spindle.length / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10835};
  (data->simulationInfo->realParameter[1342] /* vehicle.frontSuspension.cornerR.spindle.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[1326] /* vehicle.frontSuspension.cornerR.spindle.length PARAM */),(data->simulationInfo->realParameter[3855] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 10836
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.shape.width = vehicle.frontSuspension.cornerR.spindle.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10836};
  (data->simulationInfo->realParameter[1340] /* vehicle.frontSuspension.cornerR.spindle.shape.width PARAM */) = (data->simulationInfo->realParameter[1342] /* vehicle.frontSuspension.cornerR.spindle.width PARAM */);
  TRACE_POP
}

/*
equation index: 10837
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.height = vehicle.frontSuspension.cornerR.spindle.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10837};
  (data->simulationInfo->realParameter[1325] /* vehicle.frontSuspension.cornerR.spindle.height PARAM */) = (data->simulationInfo->realParameter[1342] /* vehicle.frontSuspension.cornerR.spindle.width PARAM */);
  TRACE_POP
}

/*
equation index: 10838
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.shape.height = vehicle.frontSuspension.cornerR.spindle.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10838};
  (data->simulationInfo->realParameter[1337] /* vehicle.frontSuspension.cornerR.spindle.shape.height PARAM */) = (data->simulationInfo->realParameter[1325] /* vehicle.frontSuspension.cornerR.spindle.height PARAM */);
  TRACE_POP
}

/*
equation index: 10839
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.shape.extra = vehicle.frontSuspension.cornerR.spindle.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10839};
  (data->simulationInfo->realParameter[1336] /* vehicle.frontSuspension.cornerR.spindle.shape.extra PARAM */) = (data->simulationInfo->realParameter[1324] /* vehicle.frontSuspension.cornerR.spindle.extra PARAM */);
  TRACE_POP
}

/*
equation index: 10840
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10840};
  (data->simulationInfo->realParameter[1339] /* vehicle.frontSuspension.cornerR.spindle.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10841
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.spindle.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10841};
  (data->simulationInfo->realParameter[1341] /* vehicle.frontSuspension.cornerR.spindle.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10842
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.shape.length = vehicle.frontSuspension.cornerR.staticAlign.length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10842};
  (data->simulationInfo->realParameter[1441] /* vehicle.frontSuspension.cornerR.staticAlign.shape.length PARAM */) = (data->simulationInfo->realParameter[1420] /* vehicle.frontSuspension.cornerR.staticAlign.length PARAM */);
  TRACE_POP
}

/*
equation index: 10843
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.width = vehicle.frontSuspension.cornerR.staticAlign.length / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10843};
  (data->simulationInfo->realParameter[1445] /* vehicle.frontSuspension.cornerR.staticAlign.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[1420] /* vehicle.frontSuspension.cornerR.staticAlign.length PARAM */),(data->simulationInfo->realParameter[3855] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 10844
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.shape.width = vehicle.frontSuspension.cornerR.staticAlign.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10844};
  (data->simulationInfo->realParameter[1443] /* vehicle.frontSuspension.cornerR.staticAlign.shape.width PARAM */) = (data->simulationInfo->realParameter[1445] /* vehicle.frontSuspension.cornerR.staticAlign.width PARAM */);
  TRACE_POP
}

/*
equation index: 10845
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.height = vehicle.frontSuspension.cornerR.staticAlign.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10845};
  (data->simulationInfo->realParameter[1419] /* vehicle.frontSuspension.cornerR.staticAlign.height PARAM */) = (data->simulationInfo->realParameter[1445] /* vehicle.frontSuspension.cornerR.staticAlign.width PARAM */);
  TRACE_POP
}

/*
equation index: 10846
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.shape.height = vehicle.frontSuspension.cornerR.staticAlign.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10846};
  (data->simulationInfo->realParameter[1440] /* vehicle.frontSuspension.cornerR.staticAlign.shape.height PARAM */) = (data->simulationInfo->realParameter[1419] /* vehicle.frontSuspension.cornerR.staticAlign.height PARAM */);
  TRACE_POP
}

/*
equation index: 10847
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.shape.extra = vehicle.frontSuspension.cornerR.staticAlign.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10847};
  (data->simulationInfo->realParameter[1439] /* vehicle.frontSuspension.cornerR.staticAlign.shape.extra PARAM */) = (data->simulationInfo->realParameter[1418] /* vehicle.frontSuspension.cornerR.staticAlign.extra PARAM */);
  TRACE_POP
}

/*
equation index: 10848
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10848};
  (data->simulationInfo->realParameter[1442] /* vehicle.frontSuspension.cornerR.staticAlign.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10849
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.staticAlign.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10849};
  (data->simulationInfo->realParameter[1444] /* vehicle.frontSuspension.cornerR.staticAlign.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10850
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.cylinder.width = vehicle.frontSuspension.cornerR.upright.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10850};
  (data->simulationInfo->realParameter[1631] /* vehicle.frontSuspension.cornerR.upright.cylinder.width PARAM */) = (data->simulationInfo->realParameter[1632] /* vehicle.frontSuspension.cornerR.upright.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10851
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.cylinder.height = vehicle.frontSuspension.cornerR.upright.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10851};
  (data->simulationInfo->realParameter[1626] /* vehicle.frontSuspension.cornerR.upright.cylinder.height PARAM */) = (data->simulationInfo->realParameter[1632] /* vehicle.frontSuspension.cornerR.upright.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10852
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.cylinder.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10852};
  (data->simulationInfo->realParameter[1630] /* vehicle.frontSuspension.cornerR.upright.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10853
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.sphere.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10853};
  (data->simulationInfo->realParameter[1644] /* vehicle.frontSuspension.cornerR.upright.sphere.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10854
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10854};
  (data->simulationInfo->realParameter[1641] /* vehicle.frontSuspension.cornerR.upright.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10855
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.width = 0.5478138369920935 / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10855};
  (data->simulationInfo->realParameter[1564] /* vehicle.frontSuspension.cornerR.ucaMount.width PARAM */) = DIVISION_SIM(0.5478138369920935,(data->simulationInfo->realParameter[3855] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 10856
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.shape.width = vehicle.frontSuspension.cornerR.ucaMount.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10856};
  (data->simulationInfo->realParameter[1562] /* vehicle.frontSuspension.cornerR.ucaMount.shape.width PARAM */) = (data->simulationInfo->realParameter[1564] /* vehicle.frontSuspension.cornerR.ucaMount.width PARAM */);
  TRACE_POP
}

/*
equation index: 10857
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.height = vehicle.frontSuspension.cornerR.ucaMount.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10857};
  (data->simulationInfo->realParameter[1548] /* vehicle.frontSuspension.cornerR.ucaMount.height PARAM */) = (data->simulationInfo->realParameter[1564] /* vehicle.frontSuspension.cornerR.ucaMount.width PARAM */);
  TRACE_POP
}

/*
equation index: 10858
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.shape.height = vehicle.frontSuspension.cornerR.ucaMount.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10858};
  (data->simulationInfo->realParameter[1560] /* vehicle.frontSuspension.cornerR.ucaMount.shape.height PARAM */) = (data->simulationInfo->realParameter[1548] /* vehicle.frontSuspension.cornerR.ucaMount.height PARAM */);
  TRACE_POP
}

/*
equation index: 10859
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.shape.extra = vehicle.frontSuspension.cornerR.ucaMount.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10859};
  (data->simulationInfo->realParameter[1559] /* vehicle.frontSuspension.cornerR.ucaMount.shape.extra PARAM */) = (data->simulationInfo->realParameter[1547] /* vehicle.frontSuspension.cornerR.ucaMount.extra PARAM */);
  TRACE_POP
}

/*
equation index: 10860
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10860};
  (data->simulationInfo->realParameter[1561] /* vehicle.frontSuspension.cornerR.ucaMount.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10861
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaMount.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10861};
  (data->simulationInfo->realParameter[1563] /* vehicle.frontSuspension.cornerR.ucaMount.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10862
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinderLength = world.defaultJointLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10862};
  (data->simulationInfo->realParameter[1579] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinderLength PARAM */) = (data->simulationInfo->realParameter[3850] /* world.defaultJointLength PARAM */);
  TRACE_POP
}

/*
equation index: 10863
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinder.length = vehicle.frontSuspension.cornerR.ucaPivot.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10863};
  (data->simulationInfo->realParameter[1572] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinder.length PARAM */) = (data->simulationInfo->realParameter[1579] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 10864
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinderDiameter = world.defaultJointWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10864};
  (data->simulationInfo->realParameter[1578] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinderDiameter PARAM */) = (data->simulationInfo->realParameter[3851] /* world.defaultJointWidth PARAM */);
  TRACE_POP
}

/*
equation index: 10865
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinder.width = vehicle.frontSuspension.cornerR.ucaPivot.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10865};
  (data->simulationInfo->realParameter[1577] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinder.width PARAM */) = (data->simulationInfo->realParameter[1578] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10866
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinder.height = vehicle.frontSuspension.cornerR.ucaPivot.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10866};
  (data->simulationInfo->realParameter[1571] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinder.height PARAM */) = (data->simulationInfo->realParameter[1578] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10867
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.cylinder.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10867};
  (data->simulationInfo->realParameter[1576] /* vehicle.frontSuspension.cornerR.ucaPivot.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10868
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.ucaPivot.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10868};
  (data->simulationInfo->realParameter[1590] /* vehicle.frontSuspension.cornerR.ucaPivot.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10869
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.shape.length = vehicle.frontSuspension.cornerR.uca.length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10869};
  (data->simulationInfo->realParameter[1539] /* vehicle.frontSuspension.cornerR.uca.shape.length PARAM */) = (data->simulationInfo->realParameter[1527] /* vehicle.frontSuspension.cornerR.uca.length PARAM */);
  TRACE_POP
}

/*
equation index: 10870
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.width = vehicle.frontSuspension.cornerR.uca.length / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10870};
  (data->simulationInfo->realParameter[1543] /* vehicle.frontSuspension.cornerR.uca.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[1527] /* vehicle.frontSuspension.cornerR.uca.length PARAM */),(data->simulationInfo->realParameter[3855] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 10871
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.shape.width = vehicle.frontSuspension.cornerR.uca.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10871};
  (data->simulationInfo->realParameter[1541] /* vehicle.frontSuspension.cornerR.uca.shape.width PARAM */) = (data->simulationInfo->realParameter[1543] /* vehicle.frontSuspension.cornerR.uca.width PARAM */);
  TRACE_POP
}

/*
equation index: 10872
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.height = vehicle.frontSuspension.cornerR.uca.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10872};
  (data->simulationInfo->realParameter[1526] /* vehicle.frontSuspension.cornerR.uca.height PARAM */) = (data->simulationInfo->realParameter[1543] /* vehicle.frontSuspension.cornerR.uca.width PARAM */);
  TRACE_POP
}

/*
equation index: 10873
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.shape.height = vehicle.frontSuspension.cornerR.uca.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10873};
  (data->simulationInfo->realParameter[1538] /* vehicle.frontSuspension.cornerR.uca.shape.height PARAM */) = (data->simulationInfo->realParameter[1526] /* vehicle.frontSuspension.cornerR.uca.height PARAM */);
  TRACE_POP
}

/*
equation index: 10874
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.shape.extra = vehicle.frontSuspension.cornerR.uca.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10874};
  (data->simulationInfo->realParameter[1537] /* vehicle.frontSuspension.cornerR.uca.shape.extra PARAM */) = (data->simulationInfo->realParameter[1525] /* vehicle.frontSuspension.cornerR.uca.extra PARAM */);
  TRACE_POP
}

/*
equation index: 10875
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10875};
  (data->simulationInfo->realParameter[1540] /* vehicle.frontSuspension.cornerR.uca.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10876
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.uca.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10876};
  (data->simulationInfo->realParameter[1542] /* vehicle.frontSuspension.cornerR.uca.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10877
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.width = 0.41785164831552357 / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10877};
  (data->simulationInfo->realParameter[1272] /* vehicle.frontSuspension.cornerR.lcaMount.width PARAM */) = DIVISION_SIM(0.41785164831552357,(data->simulationInfo->realParameter[3855] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 10878
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.shape.width = vehicle.frontSuspension.cornerR.lcaMount.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10878};
  (data->simulationInfo->realParameter[1270] /* vehicle.frontSuspension.cornerR.lcaMount.shape.width PARAM */) = (data->simulationInfo->realParameter[1272] /* vehicle.frontSuspension.cornerR.lcaMount.width PARAM */);
  TRACE_POP
}

/*
equation index: 10879
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.height = vehicle.frontSuspension.cornerR.lcaMount.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10879};
  (data->simulationInfo->realParameter[1256] /* vehicle.frontSuspension.cornerR.lcaMount.height PARAM */) = (data->simulationInfo->realParameter[1272] /* vehicle.frontSuspension.cornerR.lcaMount.width PARAM */);
  TRACE_POP
}

/*
equation index: 10880
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.shape.height = vehicle.frontSuspension.cornerR.lcaMount.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10880};
  (data->simulationInfo->realParameter[1268] /* vehicle.frontSuspension.cornerR.lcaMount.shape.height PARAM */) = (data->simulationInfo->realParameter[1256] /* vehicle.frontSuspension.cornerR.lcaMount.height PARAM */);
  TRACE_POP
}

/*
equation index: 10881
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.shape.extra = vehicle.frontSuspension.cornerR.lcaMount.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10881};
  (data->simulationInfo->realParameter[1267] /* vehicle.frontSuspension.cornerR.lcaMount.shape.extra PARAM */) = (data->simulationInfo->realParameter[1255] /* vehicle.frontSuspension.cornerR.lcaMount.extra PARAM */);
  TRACE_POP
}

/*
equation index: 10882
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10882};
  (data->simulationInfo->realParameter[1269] /* vehicle.frontSuspension.cornerR.lcaMount.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10883
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.lcaMount.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10883};
  (data->simulationInfo->realParameter[1271] /* vehicle.frontSuspension.cornerR.lcaMount.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10884
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revoluteLength = world.defaultJointLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10884};
  (data->simulationInfo->realParameter[1187] /* vehicle.frontSuspension.cornerR.jointUSR.revoluteLength PARAM */) = (data->simulationInfo->realParameter[3850] /* world.defaultJointLength PARAM */);
  TRACE_POP
}

/*
equation index: 10885
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinderLength = vehicle.frontSuspension.cornerR.jointUSR.revoluteLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10885};
  (data->simulationInfo->realParameter[1175] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinderLength PARAM */) = (data->simulationInfo->realParameter[1187] /* vehicle.frontSuspension.cornerR.jointUSR.revoluteLength PARAM */);
  TRACE_POP
}

/*
equation index: 10886
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.length = vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10886};
  (data->simulationInfo->realParameter[1171] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.length PARAM */) = (data->simulationInfo->realParameter[1175] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 10887
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revoluteDiameter = world.defaultJointWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10887};
  (data->simulationInfo->realParameter[1186] /* vehicle.frontSuspension.cornerR.jointUSR.revoluteDiameter PARAM */) = (data->simulationInfo->realParameter[3851] /* world.defaultJointWidth PARAM */);
  TRACE_POP
}

/*
equation index: 10888
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinderDiameter = vehicle.frontSuspension.cornerR.jointUSR.revoluteDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10888};
  (data->simulationInfo->realParameter[1174] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinderDiameter PARAM */) = (data->simulationInfo->realParameter[1186] /* vehicle.frontSuspension.cornerR.jointUSR.revoluteDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10889
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.width = vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10889};
  (data->simulationInfo->realParameter[1173] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.width PARAM */) = (data->simulationInfo->realParameter[1174] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10890
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.height = vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10890};
  (data->simulationInfo->realParameter[1170] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.height PARAM */) = (data->simulationInfo->realParameter[1174] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10891
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.sphereDiameter = world.defaultJointLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10891};
  (data->simulationInfo->realParameter[1253] /* vehicle.frontSuspension.cornerR.jointUSR.sphereDiameter PARAM */) = (data->simulationInfo->realParameter[3850] /* world.defaultJointLength PARAM */);
  TRACE_POP
}

/*
equation index: 10892
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1Diameter = 0.5 * vehicle.frontSuspension.cornerR.jointUSR.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10892};
  (data->simulationInfo->realParameter[1227] /* vehicle.frontSuspension.cornerR.jointUSR.rod1Diameter PARAM */) = (0.5) * ((data->simulationInfo->realParameter[1253] /* vehicle.frontSuspension.cornerR.jointUSR.sphereDiameter PARAM */));
  TRACE_POP
}

/*
equation index: 10893
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.rodWidth = vehicle.frontSuspension.cornerR.jointUSR.rod1Diameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10893};
  (data->simulationInfo->realParameter[1212] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodWidth PARAM */) = (data->simulationInfo->realParameter[1227] /* vehicle.frontSuspension.cornerR.jointUSR.rod1Diameter PARAM */);
  TRACE_POP
}

/*
equation index: 10894
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.width = vehicle.frontSuspension.cornerR.jointUSR.rod1.rodWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10894};
  (data->simulationInfo->realParameter[1211] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.width PARAM */) = (data->simulationInfo->realParameter[1212] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodWidth PARAM */);
  TRACE_POP
}

/*
equation index: 10895
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.rodHeight = vehicle.frontSuspension.cornerR.jointUSR.rod1Diameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10895};
  (data->simulationInfo->realParameter[1206] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodHeight PARAM */) = (data->simulationInfo->realParameter[1227] /* vehicle.frontSuspension.cornerR.jointUSR.rod1Diameter PARAM */);
  TRACE_POP
}

/*
equation index: 10896
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.height = vehicle.frontSuspension.cornerR.jointUSR.rod1.rodHeight
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10896};
  (data->simulationInfo->realParameter[1208] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.height PARAM */) = (data->simulationInfo->realParameter[1206] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodHeight PARAM */);
  TRACE_POP
}

/*
equation index: 10897
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.sphereDiameter = vehicle.frontSuspension.cornerR.jointUSR.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10897};
  (data->simulationInfo->realParameter[1214] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphereDiameter PARAM */) = (data->simulationInfo->realParameter[1253] /* vehicle.frontSuspension.cornerR.jointUSR.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10898
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.length = vehicle.frontSuspension.cornerR.jointUSR.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10898};
  (data->simulationInfo->realParameter[1216] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.length PARAM */) = (data->simulationInfo->realParameter[1214] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10899
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.width = vehicle.frontSuspension.cornerR.jointUSR.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10899};
  (data->simulationInfo->realParameter[1218] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.width PARAM */) = (data->simulationInfo->realParameter[1214] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10900
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.height = vehicle.frontSuspension.cornerR.jointUSR.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10900};
  (data->simulationInfo->realParameter[1215] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.height PARAM */) = (data->simulationInfo->realParameter[1214] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10901
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.cylinderLength = world.defaultJointLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10901};
  (data->simulationInfo->realParameter[1146] /* vehicle.frontSuspension.cornerR.jointUSR.cylinderLength PARAM */) = (data->simulationInfo->realParameter[3850] /* world.defaultJointLength PARAM */);
  TRACE_POP
}

/*
equation index: 10902
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.cylinderLength = vehicle.frontSuspension.cornerR.jointUSR.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10902};
  (data->simulationInfo->realParameter[1189] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.cylinderLength PARAM */) = (data->simulationInfo->realParameter[1146] /* vehicle.frontSuspension.cornerR.jointUSR.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 10903
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.length = vehicle.frontSuspension.cornerR.jointUSR.rod1.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10903};
  (data->simulationInfo->realParameter[1220] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.length PARAM */) = (data->simulationInfo->realParameter[1189] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 10904
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.cylinderDiameter = world.defaultJointWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10904};
  (data->simulationInfo->realParameter[1145] /* vehicle.frontSuspension.cornerR.jointUSR.cylinderDiameter PARAM */) = (data->simulationInfo->realParameter[3851] /* world.defaultJointWidth PARAM */);
  TRACE_POP
}

/*
equation index: 10905
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.cylinderDiameter = vehicle.frontSuspension.cornerR.jointUSR.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10905};
  (data->simulationInfo->realParameter[1188] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.cylinderDiameter PARAM */) = (data->simulationInfo->realParameter[1145] /* vehicle.frontSuspension.cornerR.jointUSR.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10906
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.width = vehicle.frontSuspension.cornerR.jointUSR.rod1.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10906};
  (data->simulationInfo->realParameter[1222] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.width PARAM */) = (data->simulationInfo->realParameter[1188] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10907
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.height = vehicle.frontSuspension.cornerR.jointUSR.rod1.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10907};
  (data->simulationInfo->realParameter[1219] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.height PARAM */) = (data->simulationInfo->realParameter[1188] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10908
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape2.length = vehicle.frontSuspension.cornerR.jointUSR.rod1.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10908};
  (data->simulationInfo->realParameter[1224] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape2.length PARAM */) = (data->simulationInfo->realParameter[1189] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 10909
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape2.width = vehicle.frontSuspension.cornerR.jointUSR.rod1.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10909};
  (data->simulationInfo->realParameter[1226] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape2.width PARAM */) = (data->simulationInfo->realParameter[1188] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10910
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape2.height = vehicle.frontSuspension.cornerR.jointUSR.rod1.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10910};
  (data->simulationInfo->realParameter[1223] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape2.height PARAM */) = (data->simulationInfo->realParameter[1188] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10911
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod2.shape.length = vehicle.frontSuspension.cornerR.jointUSR.rod2.length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10911};
  (data->simulationInfo->realParameter[1243] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.shape.length PARAM */) = (data->simulationInfo->realParameter[1231] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.length PARAM */);
  TRACE_POP
}

/*
equation index: 10912
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod2Diameter = vehicle.frontSuspension.cornerR.jointUSR.rod1Diameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10912};
  (data->simulationInfo->realParameter[1251] /* vehicle.frontSuspension.cornerR.jointUSR.rod2Diameter PARAM */) = (data->simulationInfo->realParameter[1227] /* vehicle.frontSuspension.cornerR.jointUSR.rod1Diameter PARAM */);
  TRACE_POP
}

/*
equation index: 10913
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod2.width = vehicle.frontSuspension.cornerR.jointUSR.rod2Diameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10913};
  (data->simulationInfo->realParameter[1247] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.width PARAM */) = (data->simulationInfo->realParameter[1251] /* vehicle.frontSuspension.cornerR.jointUSR.rod2Diameter PARAM */);
  TRACE_POP
}

/*
equation index: 10914
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod2.shape.width = vehicle.frontSuspension.cornerR.jointUSR.rod2.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10914};
  (data->simulationInfo->realParameter[1245] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.shape.width PARAM */) = (data->simulationInfo->realParameter[1247] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.width PARAM */);
  TRACE_POP
}

/*
equation index: 10915
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod2.height = vehicle.frontSuspension.cornerR.jointUSR.rod2Diameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10915};
  (data->simulationInfo->realParameter[1230] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.height PARAM */) = (data->simulationInfo->realParameter[1251] /* vehicle.frontSuspension.cornerR.jointUSR.rod2Diameter PARAM */);
  TRACE_POP
}

/*
equation index: 10916
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod2.shape.height = vehicle.frontSuspension.cornerR.jointUSR.rod2.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10916};
  (data->simulationInfo->realParameter[1242] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.shape.height PARAM */) = (data->simulationInfo->realParameter[1230] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.height PARAM */);
  TRACE_POP
}

/*
equation index: 10917
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod2.shape.extra = vehicle.frontSuspension.cornerR.jointUSR.rod2.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10917};
  (data->simulationInfo->realParameter[1241] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.shape.extra PARAM */) = (data->simulationInfo->realParameter[1229] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.extra PARAM */);
  TRACE_POP
}

/*
equation index: 10918
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10918};
  (data->simulationInfo->realParameter[1172] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10919
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10919};
  (data->simulationInfo->realParameter[1185] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10920
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10920};
  (data->simulationInfo->realParameter[1210] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10921
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10921};
  (data->simulationInfo->realParameter[1217] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.sphericalShape_b.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10922
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10922};
  (data->simulationInfo->realParameter[1221] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape1.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10923
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape2.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10923};
  (data->simulationInfo->realParameter[1225] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.universalShape2.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10924
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10924};
  (data->simulationInfo->realParameter[1213] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10925
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod2.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10925};
  (data->simulationInfo->realParameter[1244] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10926
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod2.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10926};
  (data->simulationInfo->realParameter[1246] /* vehicle.frontSuspension.cornerR.jointUSR.rod2.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10927
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10927};
  (data->simulationInfo->realParameter[1252] /* vehicle.frontSuspension.cornerR.jointUSR.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10928
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springChassis.shape.length = vehicle.frontSuspension.cornerR.springChassis.length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10928};
  (data->simulationInfo->realParameter[1382] /* vehicle.frontSuspension.cornerR.springChassis.shape.length PARAM */) = (data->simulationInfo->realParameter[1370] /* vehicle.frontSuspension.cornerR.springChassis.length PARAM */);
  TRACE_POP
}

/*
equation index: 10929
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springChassis.width = vehicle.frontSuspension.cornerR.springChassis.length / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10929};
  (data->simulationInfo->realParameter[1386] /* vehicle.frontSuspension.cornerR.springChassis.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[1370] /* vehicle.frontSuspension.cornerR.springChassis.length PARAM */),(data->simulationInfo->realParameter[3855] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 10930
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springChassis.shape.width = vehicle.frontSuspension.cornerR.springChassis.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10930};
  (data->simulationInfo->realParameter[1384] /* vehicle.frontSuspension.cornerR.springChassis.shape.width PARAM */) = (data->simulationInfo->realParameter[1386] /* vehicle.frontSuspension.cornerR.springChassis.width PARAM */);
  TRACE_POP
}

/*
equation index: 10931
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springChassis.height = vehicle.frontSuspension.cornerR.springChassis.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10931};
  (data->simulationInfo->realParameter[1369] /* vehicle.frontSuspension.cornerR.springChassis.height PARAM */) = (data->simulationInfo->realParameter[1386] /* vehicle.frontSuspension.cornerR.springChassis.width PARAM */);
  TRACE_POP
}

/*
equation index: 10932
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springChassis.shape.height = vehicle.frontSuspension.cornerR.springChassis.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10932};
  (data->simulationInfo->realParameter[1381] /* vehicle.frontSuspension.cornerR.springChassis.shape.height PARAM */) = (data->simulationInfo->realParameter[1369] /* vehicle.frontSuspension.cornerR.springChassis.height PARAM */);
  TRACE_POP
}

/*
equation index: 10933
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springChassis.shape.extra = vehicle.frontSuspension.cornerR.springChassis.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10933};
  (data->simulationInfo->realParameter[1380] /* vehicle.frontSuspension.cornerR.springChassis.shape.extra PARAM */) = (data->simulationInfo->realParameter[1368] /* vehicle.frontSuspension.cornerR.springChassis.extra PARAM */);
  TRACE_POP
}

/*
equation index: 10934
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springChassis.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10934};
  (data->simulationInfo->realParameter[1383] /* vehicle.frontSuspension.cornerR.springChassis.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10935
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springChassis.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10935};
  (data->simulationInfo->realParameter[1385] /* vehicle.frontSuspension.cornerR.springChassis.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10936
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springArm.shape.length = vehicle.frontSuspension.cornerR.springArm.length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10936};
  (data->simulationInfo->realParameter[1360] /* vehicle.frontSuspension.cornerR.springArm.shape.length PARAM */) = (data->simulationInfo->realParameter[1348] /* vehicle.frontSuspension.cornerR.springArm.length PARAM */);
  TRACE_POP
}

/*
equation index: 10937
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springArm.width = vehicle.frontSuspension.cornerR.springArm.length / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10937};
  (data->simulationInfo->realParameter[1364] /* vehicle.frontSuspension.cornerR.springArm.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[1348] /* vehicle.frontSuspension.cornerR.springArm.length PARAM */),(data->simulationInfo->realParameter[3855] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 10938
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springArm.shape.width = vehicle.frontSuspension.cornerR.springArm.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10938};
  (data->simulationInfo->realParameter[1362] /* vehicle.frontSuspension.cornerR.springArm.shape.width PARAM */) = (data->simulationInfo->realParameter[1364] /* vehicle.frontSuspension.cornerR.springArm.width PARAM */);
  TRACE_POP
}

/*
equation index: 10939
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springArm.height = vehicle.frontSuspension.cornerR.springArm.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10939};
  (data->simulationInfo->realParameter[1347] /* vehicle.frontSuspension.cornerR.springArm.height PARAM */) = (data->simulationInfo->realParameter[1364] /* vehicle.frontSuspension.cornerR.springArm.width PARAM */);
  TRACE_POP
}

/*
equation index: 10940
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springArm.shape.height = vehicle.frontSuspension.cornerR.springArm.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10940};
  (data->simulationInfo->realParameter[1359] /* vehicle.frontSuspension.cornerR.springArm.shape.height PARAM */) = (data->simulationInfo->realParameter[1347] /* vehicle.frontSuspension.cornerR.springArm.height PARAM */);
  TRACE_POP
}

/*
equation index: 10941
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springArm.shape.extra = vehicle.frontSuspension.cornerR.springArm.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10941};
  (data->simulationInfo->realParameter[1358] /* vehicle.frontSuspension.cornerR.springArm.shape.extra PARAM */) = (data->simulationInfo->realParameter[1346] /* vehicle.frontSuspension.cornerR.springArm.extra PARAM */);
  TRACE_POP
}

/*
equation index: 10942
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springArm.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10942};
  (data->simulationInfo->realParameter[1361] /* vehicle.frontSuspension.cornerR.springArm.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10943
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springArm.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10943};
  (data->simulationInfo->realParameter[1363] /* vehicle.frontSuspension.cornerR.springArm.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10944
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.shape_a.width = world.defaultForceWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10944};
  (data->simulationInfo->realParameter[1070] /* vehicle.frontSuspension.cornerR.coilover.shape_a.width PARAM */) = (data->simulationInfo->realParameter[3848] /* world.defaultForceWidth PARAM */);
  TRACE_POP
}

/*
equation index: 10945
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.shape_a.height = world.defaultForceWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10945};
  (data->simulationInfo->realParameter[1068] /* vehicle.frontSuspension.cornerR.coilover.shape_a.height PARAM */) = (data->simulationInfo->realParameter[3848] /* world.defaultForceWidth PARAM */);
  TRACE_POP
}

/*
equation index: 10946
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.diameter_a = world.defaultForceWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10946};
  (data->simulationInfo->realParameter[1062] /* vehicle.frontSuspension.cornerR.coilover.diameter_a PARAM */) = (data->simulationInfo->realParameter[3848] /* world.defaultForceWidth PARAM */);
  TRACE_POP
}

/*
equation index: 10947
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.shape.width = world.defaultForceWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10947};
  (data->simulationInfo->realParameter[1067] /* vehicle.frontSuspension.cornerR.coilover.shape.width PARAM */) = (data->simulationInfo->realParameter[3848] /* world.defaultForceWidth PARAM */);
  TRACE_POP
}

/*
equation index: 10948
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.width = world.defaultForceWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10948};
  (data->simulationInfo->realParameter[1073] /* vehicle.frontSuspension.cornerR.coilover.width PARAM */) = (data->simulationInfo->realParameter[3848] /* world.defaultForceWidth PARAM */);
  TRACE_POP
}

/*
equation index: 10949
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.shape_a.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10949};
  (data->simulationInfo->realParameter[1069] /* vehicle.frontSuspension.cornerR.coilover.shape_a.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10950
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.shape_b.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10950};
  (data->simulationInfo->realParameter[1071] /* vehicle.frontSuspension.cornerR.coilover.shape_b.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10951
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10951};
  (data->simulationInfo->realParameter[1066] /* vehicle.frontSuspension.cornerR.coilover.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10952
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10952};
  (data->simulationInfo->realParameter[1072] /* vehicle.frontSuspension.cornerR.coilover.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10953
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revoluteLength = world.defaultJointLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10953};
  (data->simulationInfo->realParameter[832] /* vehicle.frontSuspension.cornerL.tieRod.revoluteLength PARAM */) = (data->simulationInfo->realParameter[3850] /* world.defaultJointLength PARAM */);
  TRACE_POP
}

/*
equation index: 10954
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.cylinderLength = vehicle.frontSuspension.cornerL.tieRod.revoluteLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10954};
  (data->simulationInfo->realParameter[820] /* vehicle.frontSuspension.cornerL.tieRod.revolute.cylinderLength PARAM */) = (data->simulationInfo->realParameter[832] /* vehicle.frontSuspension.cornerL.tieRod.revoluteLength PARAM */);
  TRACE_POP
}

/*
equation index: 10955
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.cylinder.length = vehicle.frontSuspension.cornerL.tieRod.revolute.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10955};
  (data->simulationInfo->realParameter[816] /* vehicle.frontSuspension.cornerL.tieRod.revolute.cylinder.length PARAM */) = (data->simulationInfo->realParameter[820] /* vehicle.frontSuspension.cornerL.tieRod.revolute.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 10956
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revoluteDiameter = world.defaultJointWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10956};
  (data->simulationInfo->realParameter[831] /* vehicle.frontSuspension.cornerL.tieRod.revoluteDiameter PARAM */) = (data->simulationInfo->realParameter[3851] /* world.defaultJointWidth PARAM */);
  TRACE_POP
}

/*
equation index: 10957
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.cylinderDiameter = vehicle.frontSuspension.cornerL.tieRod.revoluteDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10957};
  (data->simulationInfo->realParameter[819] /* vehicle.frontSuspension.cornerL.tieRod.revolute.cylinderDiameter PARAM */) = (data->simulationInfo->realParameter[831] /* vehicle.frontSuspension.cornerL.tieRod.revoluteDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10958
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.cylinder.width = vehicle.frontSuspension.cornerL.tieRod.revolute.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10958};
  (data->simulationInfo->realParameter[818] /* vehicle.frontSuspension.cornerL.tieRod.revolute.cylinder.width PARAM */) = (data->simulationInfo->realParameter[819] /* vehicle.frontSuspension.cornerL.tieRod.revolute.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10959
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.cylinder.height = vehicle.frontSuspension.cornerL.tieRod.revolute.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10959};
  (data->simulationInfo->realParameter[815] /* vehicle.frontSuspension.cornerL.tieRod.revolute.cylinder.height PARAM */) = (data->simulationInfo->realParameter[819] /* vehicle.frontSuspension.cornerL.tieRod.revolute.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10960
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.rTieInner[1] = vehicle.frontSuspension.cornerL.hp.front_rTieInner[1]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10960};
  (data->simulationInfo->realParameter[655] /* vehicle.frontSuspension.cornerL.rTieInner[1] PARAM */) = (data->simulationInfo->realParameter[443] /* vehicle.frontSuspension.cornerL.hp.front_rTieInner[1] PARAM */);
  TRACE_POP
}

/*
equation index: 10961
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.rTieInner[2] = vehicle.frontSuspension.cornerL.hp.front_rTieInner[2]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10961};
  (data->simulationInfo->realParameter[656] /* vehicle.frontSuspension.cornerL.rTieInner[2] PARAM */) = (data->simulationInfo->realParameter[444] /* vehicle.frontSuspension.cornerL.hp.front_rTieInner[2] PARAM */);
  TRACE_POP
}

/*
equation index: 10962
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.rTieInner[3] = vehicle.frontSuspension.cornerL.hp.front_rTieInner[3]
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10962};
  (data->simulationInfo->realParameter[657] /* vehicle.frontSuspension.cornerL.rTieInner[3] PARAM */) = (data->simulationInfo->realParameter[445] /* vehicle.frontSuspension.cornerL.hp.front_rTieInner[3] PARAM */);
  TRACE_POP
}

/*
equation index: 10963
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1Length = Modelica.Math.Vectors.norm({-0.12 - vehicle.frontSuspension.cornerL.rTieInner[1], 0.92 - vehicle.frontSuspension.cornerL.rTieInner[2], 0.1 - vehicle.frontSuspension.cornerL.rTieInner[3]}, 2.0)
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10963};
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp1, 3, (modelica_real)-0.12 - (data->simulationInfo->realParameter[655] /* vehicle.frontSuspension.cornerL.rTieInner[1] PARAM */), (modelica_real)0.92 - (data->simulationInfo->realParameter[656] /* vehicle.frontSuspension.cornerL.rTieInner[2] PARAM */), (modelica_real)0.1 - (data->simulationInfo->realParameter[657] /* vehicle.frontSuspension.cornerL.rTieInner[3] PARAM */));
  (data->simulationInfo->realParameter[852] /* vehicle.frontSuspension.cornerL.tieRod.rod1Length PARAM */) = omc_Modelica_Math_Vectors_norm(threadData, tmp1, 2.0);
  TRACE_POP
}

/*
equation index: 10964
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.rodLength = vehicle.frontSuspension.cornerL.tieRod.rod1Length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10964};
  (data->simulationInfo->realParameter[836] /* vehicle.frontSuspension.cornerL.tieRod.rod1.rodLength PARAM */) = (data->simulationInfo->realParameter[852] /* vehicle.frontSuspension.cornerL.tieRod.rod1Length PARAM */);
  TRACE_POP
}

/*
equation index: 10965
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.shape_rod.length = vehicle.frontSuspension.cornerL.tieRod.rod1.rodLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10965};
  (data->simulationInfo->realParameter[846] /* vehicle.frontSuspension.cornerL.tieRod.rod1.shape_rod.length PARAM */) = (data->simulationInfo->realParameter[836] /* vehicle.frontSuspension.cornerL.tieRod.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 10966
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.sphereDiameter = world.defaultJointLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10966};
  (data->simulationInfo->realParameter[877] /* vehicle.frontSuspension.cornerL.tieRod.sphereDiameter PARAM */) = (data->simulationInfo->realParameter[3850] /* world.defaultJointLength PARAM */);
  TRACE_POP
}

/*
equation index: 10967
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1Diameter = 0.5 * vehicle.frontSuspension.cornerL.tieRod.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10967};
  (data->simulationInfo->realParameter[851] /* vehicle.frontSuspension.cornerL.tieRod.rod1Diameter PARAM */) = (0.5) * ((data->simulationInfo->realParameter[877] /* vehicle.frontSuspension.cornerL.tieRod.sphereDiameter PARAM */));
  TRACE_POP
}

/*
equation index: 10968
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.rodDiameter = vehicle.frontSuspension.cornerL.tieRod.rod1Diameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10968};
  (data->simulationInfo->realParameter[835] /* vehicle.frontSuspension.cornerL.tieRod.rod1.rodDiameter PARAM */) = (data->simulationInfo->realParameter[851] /* vehicle.frontSuspension.cornerL.tieRod.rod1Diameter PARAM */);
  TRACE_POP
}

/*
equation index: 10969
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.shape_rod.width = vehicle.frontSuspension.cornerL.tieRod.rod1.rodDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10969};
  (data->simulationInfo->realParameter[848] /* vehicle.frontSuspension.cornerL.tieRod.rod1.shape_rod.width PARAM */) = (data->simulationInfo->realParameter[835] /* vehicle.frontSuspension.cornerL.tieRod.rod1.rodDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10970
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.shape_rod.height = vehicle.frontSuspension.cornerL.tieRod.rod1.rodDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10970};
  (data->simulationInfo->realParameter[845] /* vehicle.frontSuspension.cornerL.tieRod.rod1.shape_rod.height PARAM */) = (data->simulationInfo->realParameter[835] /* vehicle.frontSuspension.cornerL.tieRod.rod1.rodDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10971
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.sphereDiameter = vehicle.frontSuspension.cornerL.tieRod.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10971};
  (data->simulationInfo->realParameter[850] /* vehicle.frontSuspension.cornerL.tieRod.rod1.sphereDiameter PARAM */) = (data->simulationInfo->realParameter[877] /* vehicle.frontSuspension.cornerL.tieRod.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10972
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.shape_a.length = vehicle.frontSuspension.cornerL.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10972};
  (data->simulationInfo->realParameter[838] /* vehicle.frontSuspension.cornerL.tieRod.rod1.shape_a.length PARAM */) = (data->simulationInfo->realParameter[850] /* vehicle.frontSuspension.cornerL.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10973
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.shape_a.width = vehicle.frontSuspension.cornerL.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10973};
  (data->simulationInfo->realParameter[840] /* vehicle.frontSuspension.cornerL.tieRod.rod1.shape_a.width PARAM */) = (data->simulationInfo->realParameter[850] /* vehicle.frontSuspension.cornerL.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10974
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.shape_a.height = vehicle.frontSuspension.cornerL.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10974};
  (data->simulationInfo->realParameter[837] /* vehicle.frontSuspension.cornerL.tieRod.rod1.shape_a.height PARAM */) = (data->simulationInfo->realParameter[850] /* vehicle.frontSuspension.cornerL.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10975
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.shape_b.length = vehicle.frontSuspension.cornerL.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10975};
  (data->simulationInfo->realParameter[842] /* vehicle.frontSuspension.cornerL.tieRod.rod1.shape_b.length PARAM */) = (data->simulationInfo->realParameter[850] /* vehicle.frontSuspension.cornerL.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10976
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.shape_b.width = vehicle.frontSuspension.cornerL.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10976};
  (data->simulationInfo->realParameter[844] /* vehicle.frontSuspension.cornerL.tieRod.rod1.shape_b.width PARAM */) = (data->simulationInfo->realParameter[850] /* vehicle.frontSuspension.cornerL.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10977
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.shape_b.height = vehicle.frontSuspension.cornerL.tieRod.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10977};
  (data->simulationInfo->realParameter[841] /* vehicle.frontSuspension.cornerL.tieRod.rod1.shape_b.height PARAM */) = (data->simulationInfo->realParameter[850] /* vehicle.frontSuspension.cornerL.tieRod.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 10978
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod2Diameter = vehicle.frontSuspension.cornerL.tieRod.rod1Diameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10978};
  (data->simulationInfo->realParameter[875] /* vehicle.frontSuspension.cornerL.tieRod.rod2Diameter PARAM */) = (data->simulationInfo->realParameter[851] /* vehicle.frontSuspension.cornerL.tieRod.rod1Diameter PARAM */);
  TRACE_POP
}

/*
equation index: 10979
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod2.width = vehicle.frontSuspension.cornerL.tieRod.rod2Diameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10979};
  (data->simulationInfo->realParameter[871] /* vehicle.frontSuspension.cornerL.tieRod.rod2.width PARAM */) = (data->simulationInfo->realParameter[875] /* vehicle.frontSuspension.cornerL.tieRod.rod2Diameter PARAM */);
  TRACE_POP
}

/*
equation index: 10980
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod2.shape.width = vehicle.frontSuspension.cornerL.tieRod.rod2.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10980};
  (data->simulationInfo->realParameter[869] /* vehicle.frontSuspension.cornerL.tieRod.rod2.shape.width PARAM */) = (data->simulationInfo->realParameter[871] /* vehicle.frontSuspension.cornerL.tieRod.rod2.width PARAM */);
  TRACE_POP
}

/*
equation index: 10981
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod2.height = vehicle.frontSuspension.cornerL.tieRod.rod2Diameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10981};
  (data->simulationInfo->realParameter[855] /* vehicle.frontSuspension.cornerL.tieRod.rod2.height PARAM */) = (data->simulationInfo->realParameter[875] /* vehicle.frontSuspension.cornerL.tieRod.rod2Diameter PARAM */);
  TRACE_POP
}

/*
equation index: 10982
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod2.shape.height = vehicle.frontSuspension.cornerL.tieRod.rod2.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10982};
  (data->simulationInfo->realParameter[867] /* vehicle.frontSuspension.cornerL.tieRod.rod2.shape.height PARAM */) = (data->simulationInfo->realParameter[855] /* vehicle.frontSuspension.cornerL.tieRod.rod2.height PARAM */);
  TRACE_POP
}

/*
equation index: 10983
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod2.shape.extra = vehicle.frontSuspension.cornerL.tieRod.rod2.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10983};
  (data->simulationInfo->realParameter[866] /* vehicle.frontSuspension.cornerL.tieRod.rod2.shape.extra PARAM */) = (data->simulationInfo->realParameter[854] /* vehicle.frontSuspension.cornerL.tieRod.rod2.extra PARAM */);
  TRACE_POP
}

/*
equation index: 10984
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.cylinder.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10984};
  (data->simulationInfo->realParameter[817] /* vehicle.frontSuspension.cornerL.tieRod.revolute.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10985
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.revolute.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10985};
  (data->simulationInfo->realParameter[830] /* vehicle.frontSuspension.cornerL.tieRod.revolute.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10986
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.shape_rod.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10986};
  (data->simulationInfo->realParameter[847] /* vehicle.frontSuspension.cornerL.tieRod.rod1.shape_rod.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10987
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.shape_a.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10987};
  (data->simulationInfo->realParameter[839] /* vehicle.frontSuspension.cornerL.tieRod.rod1.shape_a.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10988
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.shape_b.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10988};
  (data->simulationInfo->realParameter[843] /* vehicle.frontSuspension.cornerL.tieRod.rod1.shape_b.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10989
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod1.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10989};
  (data->simulationInfo->realParameter[849] /* vehicle.frontSuspension.cornerL.tieRod.rod1.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10990
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod2.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10990};
  (data->simulationInfo->realParameter[868] /* vehicle.frontSuspension.cornerL.tieRod.rod2.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10991
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.rod2.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10991};
  (data->simulationInfo->realParameter[870] /* vehicle.frontSuspension.cornerL.tieRod.rod2.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10992
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.tieRod.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10992};
  (data->simulationInfo->realParameter[876] /* vehicle.frontSuspension.cornerL.tieRod.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 10993
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.spindle.shape.length = vehicle.frontSuspension.cornerL.spindle.length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10993};
  (data->simulationInfo->realParameter[691] /* vehicle.frontSuspension.cornerL.spindle.shape.length PARAM */) = (data->simulationInfo->realParameter[679] /* vehicle.frontSuspension.cornerL.spindle.length PARAM */);
  TRACE_POP
}

/*
equation index: 10994
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.spindle.width = vehicle.frontSuspension.cornerL.spindle.length / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10994};
  (data->simulationInfo->realParameter[695] /* vehicle.frontSuspension.cornerL.spindle.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[679] /* vehicle.frontSuspension.cornerL.spindle.length PARAM */),(data->simulationInfo->realParameter[3855] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 10995
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.spindle.shape.width = vehicle.frontSuspension.cornerL.spindle.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10995};
  (data->simulationInfo->realParameter[693] /* vehicle.frontSuspension.cornerL.spindle.shape.width PARAM */) = (data->simulationInfo->realParameter[695] /* vehicle.frontSuspension.cornerL.spindle.width PARAM */);
  TRACE_POP
}

/*
equation index: 10996
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.spindle.height = vehicle.frontSuspension.cornerL.spindle.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10996};
  (data->simulationInfo->realParameter[678] /* vehicle.frontSuspension.cornerL.spindle.height PARAM */) = (data->simulationInfo->realParameter[695] /* vehicle.frontSuspension.cornerL.spindle.width PARAM */);
  TRACE_POP
}

/*
equation index: 10997
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.spindle.shape.height = vehicle.frontSuspension.cornerL.spindle.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10997};
  (data->simulationInfo->realParameter[690] /* vehicle.frontSuspension.cornerL.spindle.shape.height PARAM */) = (data->simulationInfo->realParameter[678] /* vehicle.frontSuspension.cornerL.spindle.height PARAM */);
  TRACE_POP
}

/*
equation index: 10998
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.spindle.shape.extra = vehicle.frontSuspension.cornerL.spindle.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10998};
  (data->simulationInfo->realParameter[689] /* vehicle.frontSuspension.cornerL.spindle.shape.extra PARAM */) = (data->simulationInfo->realParameter[677] /* vehicle.frontSuspension.cornerL.spindle.extra PARAM */);
  TRACE_POP
}

/*
equation index: 10999
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.spindle.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_10999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10999};
  (data->simulationInfo->realParameter[692] /* vehicle.frontSuspension.cornerL.spindle.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11000
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.spindle.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11000};
  (data->simulationInfo->realParameter[694] /* vehicle.frontSuspension.cornerL.spindle.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11001
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.staticAlign.shape.length = vehicle.frontSuspension.cornerL.staticAlign.length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11001};
  (data->simulationInfo->realParameter[794] /* vehicle.frontSuspension.cornerL.staticAlign.shape.length PARAM */) = (data->simulationInfo->realParameter[773] /* vehicle.frontSuspension.cornerL.staticAlign.length PARAM */);
  TRACE_POP
}

/*
equation index: 11002
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.staticAlign.width = vehicle.frontSuspension.cornerL.staticAlign.length / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11002};
  (data->simulationInfo->realParameter[798] /* vehicle.frontSuspension.cornerL.staticAlign.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[773] /* vehicle.frontSuspension.cornerL.staticAlign.length PARAM */),(data->simulationInfo->realParameter[3855] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 11003
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.staticAlign.shape.width = vehicle.frontSuspension.cornerL.staticAlign.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11003};
  (data->simulationInfo->realParameter[796] /* vehicle.frontSuspension.cornerL.staticAlign.shape.width PARAM */) = (data->simulationInfo->realParameter[798] /* vehicle.frontSuspension.cornerL.staticAlign.width PARAM */);
  TRACE_POP
}

/*
equation index: 11004
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.staticAlign.height = vehicle.frontSuspension.cornerL.staticAlign.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11004};
  (data->simulationInfo->realParameter[772] /* vehicle.frontSuspension.cornerL.staticAlign.height PARAM */) = (data->simulationInfo->realParameter[798] /* vehicle.frontSuspension.cornerL.staticAlign.width PARAM */);
  TRACE_POP
}

/*
equation index: 11005
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.staticAlign.shape.height = vehicle.frontSuspension.cornerL.staticAlign.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11005(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11005};
  (data->simulationInfo->realParameter[793] /* vehicle.frontSuspension.cornerL.staticAlign.shape.height PARAM */) = (data->simulationInfo->realParameter[772] /* vehicle.frontSuspension.cornerL.staticAlign.height PARAM */);
  TRACE_POP
}

/*
equation index: 11006
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.staticAlign.shape.extra = vehicle.frontSuspension.cornerL.staticAlign.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11006};
  (data->simulationInfo->realParameter[792] /* vehicle.frontSuspension.cornerL.staticAlign.shape.extra PARAM */) = (data->simulationInfo->realParameter[771] /* vehicle.frontSuspension.cornerL.staticAlign.extra PARAM */);
  TRACE_POP
}

/*
equation index: 11007
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.staticAlign.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11007};
  (data->simulationInfo->realParameter[795] /* vehicle.frontSuspension.cornerL.staticAlign.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11008
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.staticAlign.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11008};
  (data->simulationInfo->realParameter[797] /* vehicle.frontSuspension.cornerL.staticAlign.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11009
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.cylinder.width = vehicle.frontSuspension.cornerL.upright.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11009(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11009};
  (data->simulationInfo->realParameter[984] /* vehicle.frontSuspension.cornerL.upright.cylinder.width PARAM */) = (data->simulationInfo->realParameter[985] /* vehicle.frontSuspension.cornerL.upright.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 11010
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.cylinder.height = vehicle.frontSuspension.cornerL.upright.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11010};
  (data->simulationInfo->realParameter[979] /* vehicle.frontSuspension.cornerL.upright.cylinder.height PARAM */) = (data->simulationInfo->realParameter[985] /* vehicle.frontSuspension.cornerL.upright.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 11011
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.cylinder.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11011(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11011};
  (data->simulationInfo->realParameter[983] /* vehicle.frontSuspension.cornerL.upright.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11012
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.sphere.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11012};
  (data->simulationInfo->realParameter[997] /* vehicle.frontSuspension.cornerL.upright.sphere.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11013
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11013};
  (data->simulationInfo->realParameter[994] /* vehicle.frontSuspension.cornerL.upright.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11014
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaMount.width = 0.5478138369920935 / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11014};
  (data->simulationInfo->realParameter[917] /* vehicle.frontSuspension.cornerL.ucaMount.width PARAM */) = DIVISION_SIM(0.5478138369920935,(data->simulationInfo->realParameter[3855] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 11015
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaMount.shape.width = vehicle.frontSuspension.cornerL.ucaMount.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11015};
  (data->simulationInfo->realParameter[915] /* vehicle.frontSuspension.cornerL.ucaMount.shape.width PARAM */) = (data->simulationInfo->realParameter[917] /* vehicle.frontSuspension.cornerL.ucaMount.width PARAM */);
  TRACE_POP
}

/*
equation index: 11016
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaMount.height = vehicle.frontSuspension.cornerL.ucaMount.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11016};
  (data->simulationInfo->realParameter[901] /* vehicle.frontSuspension.cornerL.ucaMount.height PARAM */) = (data->simulationInfo->realParameter[917] /* vehicle.frontSuspension.cornerL.ucaMount.width PARAM */);
  TRACE_POP
}

/*
equation index: 11017
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaMount.shape.height = vehicle.frontSuspension.cornerL.ucaMount.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11017};
  (data->simulationInfo->realParameter[913] /* vehicle.frontSuspension.cornerL.ucaMount.shape.height PARAM */) = (data->simulationInfo->realParameter[901] /* vehicle.frontSuspension.cornerL.ucaMount.height PARAM */);
  TRACE_POP
}

/*
equation index: 11018
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaMount.shape.extra = vehicle.frontSuspension.cornerL.ucaMount.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11018};
  (data->simulationInfo->realParameter[912] /* vehicle.frontSuspension.cornerL.ucaMount.shape.extra PARAM */) = (data->simulationInfo->realParameter[900] /* vehicle.frontSuspension.cornerL.ucaMount.extra PARAM */);
  TRACE_POP
}

/*
equation index: 11019
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaMount.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11019};
  (data->simulationInfo->realParameter[914] /* vehicle.frontSuspension.cornerL.ucaMount.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11020
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaMount.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11020};
  (data->simulationInfo->realParameter[916] /* vehicle.frontSuspension.cornerL.ucaMount.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11021
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.cylinderLength = world.defaultJointLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11021};
  (data->simulationInfo->realParameter[932] /* vehicle.frontSuspension.cornerL.ucaPivot.cylinderLength PARAM */) = (data->simulationInfo->realParameter[3850] /* world.defaultJointLength PARAM */);
  TRACE_POP
}

/*
equation index: 11022
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.cylinder.length = vehicle.frontSuspension.cornerL.ucaPivot.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11022};
  (data->simulationInfo->realParameter[925] /* vehicle.frontSuspension.cornerL.ucaPivot.cylinder.length PARAM */) = (data->simulationInfo->realParameter[932] /* vehicle.frontSuspension.cornerL.ucaPivot.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 11023
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.cylinderDiameter = world.defaultJointWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11023};
  (data->simulationInfo->realParameter[931] /* vehicle.frontSuspension.cornerL.ucaPivot.cylinderDiameter PARAM */) = (data->simulationInfo->realParameter[3851] /* world.defaultJointWidth PARAM */);
  TRACE_POP
}

/*
equation index: 11024
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.cylinder.width = vehicle.frontSuspension.cornerL.ucaPivot.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11024};
  (data->simulationInfo->realParameter[930] /* vehicle.frontSuspension.cornerL.ucaPivot.cylinder.width PARAM */) = (data->simulationInfo->realParameter[931] /* vehicle.frontSuspension.cornerL.ucaPivot.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 11025
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.cylinder.height = vehicle.frontSuspension.cornerL.ucaPivot.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11025};
  (data->simulationInfo->realParameter[924] /* vehicle.frontSuspension.cornerL.ucaPivot.cylinder.height PARAM */) = (data->simulationInfo->realParameter[931] /* vehicle.frontSuspension.cornerL.ucaPivot.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 11026
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.cylinder.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11026(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11026};
  (data->simulationInfo->realParameter[929] /* vehicle.frontSuspension.cornerL.ucaPivot.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11027
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.ucaPivot.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11027};
  (data->simulationInfo->realParameter[943] /* vehicle.frontSuspension.cornerL.ucaPivot.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11028
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.uca.shape.length = vehicle.frontSuspension.cornerL.uca.length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11028(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11028};
  (data->simulationInfo->realParameter[892] /* vehicle.frontSuspension.cornerL.uca.shape.length PARAM */) = (data->simulationInfo->realParameter[880] /* vehicle.frontSuspension.cornerL.uca.length PARAM */);
  TRACE_POP
}

/*
equation index: 11029
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.uca.width = vehicle.frontSuspension.cornerL.uca.length / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11029};
  (data->simulationInfo->realParameter[896] /* vehicle.frontSuspension.cornerL.uca.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[880] /* vehicle.frontSuspension.cornerL.uca.length PARAM */),(data->simulationInfo->realParameter[3855] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 11030
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.uca.shape.width = vehicle.frontSuspension.cornerL.uca.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11030};
  (data->simulationInfo->realParameter[894] /* vehicle.frontSuspension.cornerL.uca.shape.width PARAM */) = (data->simulationInfo->realParameter[896] /* vehicle.frontSuspension.cornerL.uca.width PARAM */);
  TRACE_POP
}

/*
equation index: 11031
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.uca.height = vehicle.frontSuspension.cornerL.uca.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11031};
  (data->simulationInfo->realParameter[879] /* vehicle.frontSuspension.cornerL.uca.height PARAM */) = (data->simulationInfo->realParameter[896] /* vehicle.frontSuspension.cornerL.uca.width PARAM */);
  TRACE_POP
}

/*
equation index: 11032
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.uca.shape.height = vehicle.frontSuspension.cornerL.uca.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11032};
  (data->simulationInfo->realParameter[891] /* vehicle.frontSuspension.cornerL.uca.shape.height PARAM */) = (data->simulationInfo->realParameter[879] /* vehicle.frontSuspension.cornerL.uca.height PARAM */);
  TRACE_POP
}

/*
equation index: 11033
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.uca.shape.extra = vehicle.frontSuspension.cornerL.uca.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11033};
  (data->simulationInfo->realParameter[890] /* vehicle.frontSuspension.cornerL.uca.shape.extra PARAM */) = (data->simulationInfo->realParameter[878] /* vehicle.frontSuspension.cornerL.uca.extra PARAM */);
  TRACE_POP
}

/*
equation index: 11034
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.uca.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11034};
  (data->simulationInfo->realParameter[893] /* vehicle.frontSuspension.cornerL.uca.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11035
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.uca.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11035};
  (data->simulationInfo->realParameter[895] /* vehicle.frontSuspension.cornerL.uca.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11036
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.lcaMount.width = 0.41785164831552357 / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11036(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11036};
  (data->simulationInfo->realParameter[625] /* vehicle.frontSuspension.cornerL.lcaMount.width PARAM */) = DIVISION_SIM(0.41785164831552357,(data->simulationInfo->realParameter[3855] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 11037
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.lcaMount.shape.width = vehicle.frontSuspension.cornerL.lcaMount.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11037};
  (data->simulationInfo->realParameter[623] /* vehicle.frontSuspension.cornerL.lcaMount.shape.width PARAM */) = (data->simulationInfo->realParameter[625] /* vehicle.frontSuspension.cornerL.lcaMount.width PARAM */);
  TRACE_POP
}

/*
equation index: 11038
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.lcaMount.height = vehicle.frontSuspension.cornerL.lcaMount.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11038};
  (data->simulationInfo->realParameter[609] /* vehicle.frontSuspension.cornerL.lcaMount.height PARAM */) = (data->simulationInfo->realParameter[625] /* vehicle.frontSuspension.cornerL.lcaMount.width PARAM */);
  TRACE_POP
}

/*
equation index: 11039
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.lcaMount.shape.height = vehicle.frontSuspension.cornerL.lcaMount.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11039};
  (data->simulationInfo->realParameter[621] /* vehicle.frontSuspension.cornerL.lcaMount.shape.height PARAM */) = (data->simulationInfo->realParameter[609] /* vehicle.frontSuspension.cornerL.lcaMount.height PARAM */);
  TRACE_POP
}

/*
equation index: 11040
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.lcaMount.shape.extra = vehicle.frontSuspension.cornerL.lcaMount.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11040(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11040};
  (data->simulationInfo->realParameter[620] /* vehicle.frontSuspension.cornerL.lcaMount.shape.extra PARAM */) = (data->simulationInfo->realParameter[608] /* vehicle.frontSuspension.cornerL.lcaMount.extra PARAM */);
  TRACE_POP
}

/*
equation index: 11041
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.lcaMount.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11041};
  (data->simulationInfo->realParameter[622] /* vehicle.frontSuspension.cornerL.lcaMount.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11042
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.lcaMount.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11042};
  (data->simulationInfo->realParameter[624] /* vehicle.frontSuspension.cornerL.lcaMount.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11043
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revoluteLength = world.defaultJointLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11043(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11043};
  (data->simulationInfo->realParameter[540] /* vehicle.frontSuspension.cornerL.jointUSR.revoluteLength PARAM */) = (data->simulationInfo->realParameter[3850] /* world.defaultJointLength PARAM */);
  TRACE_POP
}

/*
equation index: 11044
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinderLength = vehicle.frontSuspension.cornerL.jointUSR.revoluteLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11044};
  (data->simulationInfo->realParameter[528] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinderLength PARAM */) = (data->simulationInfo->realParameter[540] /* vehicle.frontSuspension.cornerL.jointUSR.revoluteLength PARAM */);
  TRACE_POP
}

/*
equation index: 11045
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinder.length = vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11045(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11045};
  (data->simulationInfo->realParameter[524] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinder.length PARAM */) = (data->simulationInfo->realParameter[528] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 11046
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revoluteDiameter = world.defaultJointWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11046};
  (data->simulationInfo->realParameter[539] /* vehicle.frontSuspension.cornerL.jointUSR.revoluteDiameter PARAM */) = (data->simulationInfo->realParameter[3851] /* world.defaultJointWidth PARAM */);
  TRACE_POP
}

/*
equation index: 11047
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinderDiameter = vehicle.frontSuspension.cornerL.jointUSR.revoluteDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11047(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11047};
  (data->simulationInfo->realParameter[527] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinderDiameter PARAM */) = (data->simulationInfo->realParameter[539] /* vehicle.frontSuspension.cornerL.jointUSR.revoluteDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 11048
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinder.width = vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11048};
  (data->simulationInfo->realParameter[526] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinder.width PARAM */) = (data->simulationInfo->realParameter[527] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 11049
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinder.height = vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11049(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11049};
  (data->simulationInfo->realParameter[523] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinder.height PARAM */) = (data->simulationInfo->realParameter[527] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 11050
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.sphereDiameter = world.defaultJointLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11050(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11050};
  (data->simulationInfo->realParameter[606] /* vehicle.frontSuspension.cornerL.jointUSR.sphereDiameter PARAM */) = (data->simulationInfo->realParameter[3850] /* world.defaultJointLength PARAM */);
  TRACE_POP
}

/*
equation index: 11051
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1Diameter = 0.5 * vehicle.frontSuspension.cornerL.jointUSR.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11051(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11051};
  (data->simulationInfo->realParameter[580] /* vehicle.frontSuspension.cornerL.jointUSR.rod1Diameter PARAM */) = (0.5) * ((data->simulationInfo->realParameter[606] /* vehicle.frontSuspension.cornerL.jointUSR.sphereDiameter PARAM */));
  TRACE_POP
}

/*
equation index: 11052
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.rodWidth = vehicle.frontSuspension.cornerL.jointUSR.rod1Diameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11052(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11052};
  (data->simulationInfo->realParameter[565] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.rodWidth PARAM */) = (data->simulationInfo->realParameter[580] /* vehicle.frontSuspension.cornerL.jointUSR.rod1Diameter PARAM */);
  TRACE_POP
}

/*
equation index: 11053
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.rodShape.width = vehicle.frontSuspension.cornerL.jointUSR.rod1.rodWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11053(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11053};
  (data->simulationInfo->realParameter[564] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.rodShape.width PARAM */) = (data->simulationInfo->realParameter[565] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.rodWidth PARAM */);
  TRACE_POP
}

/*
equation index: 11054
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.rodHeight = vehicle.frontSuspension.cornerL.jointUSR.rod1Diameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11054(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11054};
  (data->simulationInfo->realParameter[559] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.rodHeight PARAM */) = (data->simulationInfo->realParameter[580] /* vehicle.frontSuspension.cornerL.jointUSR.rod1Diameter PARAM */);
  TRACE_POP
}

/*
equation index: 11055
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.rodShape.height = vehicle.frontSuspension.cornerL.jointUSR.rod1.rodHeight
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11055(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11055};
  (data->simulationInfo->realParameter[561] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.rodShape.height PARAM */) = (data->simulationInfo->realParameter[559] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.rodHeight PARAM */);
  TRACE_POP
}

/*
equation index: 11056
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.sphereDiameter = vehicle.frontSuspension.cornerL.jointUSR.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11056(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11056};
  (data->simulationInfo->realParameter[567] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.sphereDiameter PARAM */) = (data->simulationInfo->realParameter[606] /* vehicle.frontSuspension.cornerL.jointUSR.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 11057
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.sphericalShape_b.length = vehicle.frontSuspension.cornerL.jointUSR.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11057(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11057};
  (data->simulationInfo->realParameter[569] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.sphericalShape_b.length PARAM */) = (data->simulationInfo->realParameter[567] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 11058
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.sphericalShape_b.width = vehicle.frontSuspension.cornerL.jointUSR.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11058(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11058};
  (data->simulationInfo->realParameter[571] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.sphericalShape_b.width PARAM */) = (data->simulationInfo->realParameter[567] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 11059
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.sphericalShape_b.height = vehicle.frontSuspension.cornerL.jointUSR.rod1.sphereDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11059(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11059};
  (data->simulationInfo->realParameter[568] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.sphericalShape_b.height PARAM */) = (data->simulationInfo->realParameter[567] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 11060
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.cylinderLength = world.defaultJointLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11060};
  (data->simulationInfo->realParameter[499] /* vehicle.frontSuspension.cornerL.jointUSR.cylinderLength PARAM */) = (data->simulationInfo->realParameter[3850] /* world.defaultJointLength PARAM */);
  TRACE_POP
}

/*
equation index: 11061
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.cylinderLength = vehicle.frontSuspension.cornerL.jointUSR.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11061};
  (data->simulationInfo->realParameter[542] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.cylinderLength PARAM */) = (data->simulationInfo->realParameter[499] /* vehicle.frontSuspension.cornerL.jointUSR.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 11062
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape1.length = vehicle.frontSuspension.cornerL.jointUSR.rod1.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11062};
  (data->simulationInfo->realParameter[573] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape1.length PARAM */) = (data->simulationInfo->realParameter[542] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 11063
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.cylinderDiameter = world.defaultJointWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11063(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11063};
  (data->simulationInfo->realParameter[498] /* vehicle.frontSuspension.cornerL.jointUSR.cylinderDiameter PARAM */) = (data->simulationInfo->realParameter[3851] /* world.defaultJointWidth PARAM */);
  TRACE_POP
}

/*
equation index: 11064
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.cylinderDiameter = vehicle.frontSuspension.cornerL.jointUSR.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11064(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11064};
  (data->simulationInfo->realParameter[541] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.cylinderDiameter PARAM */) = (data->simulationInfo->realParameter[498] /* vehicle.frontSuspension.cornerL.jointUSR.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 11065
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape1.width = vehicle.frontSuspension.cornerL.jointUSR.rod1.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11065(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11065};
  (data->simulationInfo->realParameter[575] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape1.width PARAM */) = (data->simulationInfo->realParameter[541] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 11066
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape1.height = vehicle.frontSuspension.cornerL.jointUSR.rod1.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11066};
  (data->simulationInfo->realParameter[572] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape1.height PARAM */) = (data->simulationInfo->realParameter[541] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 11067
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape2.length = vehicle.frontSuspension.cornerL.jointUSR.rod1.cylinderLength
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11067};
  (data->simulationInfo->realParameter[577] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape2.length PARAM */) = (data->simulationInfo->realParameter[542] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 11068
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape2.width = vehicle.frontSuspension.cornerL.jointUSR.rod1.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11068(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11068};
  (data->simulationInfo->realParameter[579] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape2.width PARAM */) = (data->simulationInfo->realParameter[541] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 11069
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape2.height = vehicle.frontSuspension.cornerL.jointUSR.rod1.cylinderDiameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11069(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11069};
  (data->simulationInfo->realParameter[576] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape2.height PARAM */) = (data->simulationInfo->realParameter[541] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 11070
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod2.shape.length = vehicle.frontSuspension.cornerL.jointUSR.rod2.length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11070(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11070};
  (data->simulationInfo->realParameter[596] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.shape.length PARAM */) = (data->simulationInfo->realParameter[584] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.length PARAM */);
  TRACE_POP
}

/*
equation index: 11071
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod2Diameter = vehicle.frontSuspension.cornerL.jointUSR.rod1Diameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11071(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11071};
  (data->simulationInfo->realParameter[604] /* vehicle.frontSuspension.cornerL.jointUSR.rod2Diameter PARAM */) = (data->simulationInfo->realParameter[580] /* vehicle.frontSuspension.cornerL.jointUSR.rod1Diameter PARAM */);
  TRACE_POP
}

/*
equation index: 11072
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod2.width = vehicle.frontSuspension.cornerL.jointUSR.rod2Diameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11072(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11072};
  (data->simulationInfo->realParameter[600] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.width PARAM */) = (data->simulationInfo->realParameter[604] /* vehicle.frontSuspension.cornerL.jointUSR.rod2Diameter PARAM */);
  TRACE_POP
}

/*
equation index: 11073
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod2.shape.width = vehicle.frontSuspension.cornerL.jointUSR.rod2.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11073(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11073};
  (data->simulationInfo->realParameter[598] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.shape.width PARAM */) = (data->simulationInfo->realParameter[600] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.width PARAM */);
  TRACE_POP
}

/*
equation index: 11074
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod2.height = vehicle.frontSuspension.cornerL.jointUSR.rod2Diameter
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11074(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11074};
  (data->simulationInfo->realParameter[583] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.height PARAM */) = (data->simulationInfo->realParameter[604] /* vehicle.frontSuspension.cornerL.jointUSR.rod2Diameter PARAM */);
  TRACE_POP
}

/*
equation index: 11075
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod2.shape.height = vehicle.frontSuspension.cornerL.jointUSR.rod2.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11075};
  (data->simulationInfo->realParameter[595] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.shape.height PARAM */) = (data->simulationInfo->realParameter[583] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.height PARAM */);
  TRACE_POP
}

/*
equation index: 11076
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod2.shape.extra = vehicle.frontSuspension.cornerL.jointUSR.rod2.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11076(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11076};
  (data->simulationInfo->realParameter[594] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.shape.extra PARAM */) = (data->simulationInfo->realParameter[582] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.extra PARAM */);
  TRACE_POP
}

/*
equation index: 11077
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinder.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11077(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11077};
  (data->simulationInfo->realParameter[525] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11078
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.revolute.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11078};
  (data->simulationInfo->realParameter[538] /* vehicle.frontSuspension.cornerL.jointUSR.revolute.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11079
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.rodShape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11079};
  (data->simulationInfo->realParameter[563] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.rodShape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11080
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.sphericalShape_b.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11080};
  (data->simulationInfo->realParameter[570] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.sphericalShape_b.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11081
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape1.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11081};
  (data->simulationInfo->realParameter[574] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape1.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11082
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape2.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11082};
  (data->simulationInfo->realParameter[578] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.universalShape2.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11083
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod1.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11083};
  (data->simulationInfo->realParameter[566] /* vehicle.frontSuspension.cornerL.jointUSR.rod1.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11084
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod2.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11084};
  (data->simulationInfo->realParameter[597] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11085
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.rod2.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11085};
  (data->simulationInfo->realParameter[599] /* vehicle.frontSuspension.cornerL.jointUSR.rod2.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11086
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.jointUSR.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11086};
  (data->simulationInfo->realParameter[605] /* vehicle.frontSuspension.cornerL.jointUSR.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11087
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springChassis.shape.length = vehicle.frontSuspension.cornerL.springChassis.length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11087};
  (data->simulationInfo->realParameter[735] /* vehicle.frontSuspension.cornerL.springChassis.shape.length PARAM */) = (data->simulationInfo->realParameter[723] /* vehicle.frontSuspension.cornerL.springChassis.length PARAM */);
  TRACE_POP
}

/*
equation index: 11088
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springChassis.width = vehicle.frontSuspension.cornerL.springChassis.length / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11088};
  (data->simulationInfo->realParameter[739] /* vehicle.frontSuspension.cornerL.springChassis.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[723] /* vehicle.frontSuspension.cornerL.springChassis.length PARAM */),(data->simulationInfo->realParameter[3855] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 11089
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springChassis.shape.width = vehicle.frontSuspension.cornerL.springChassis.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11089};
  (data->simulationInfo->realParameter[737] /* vehicle.frontSuspension.cornerL.springChassis.shape.width PARAM */) = (data->simulationInfo->realParameter[739] /* vehicle.frontSuspension.cornerL.springChassis.width PARAM */);
  TRACE_POP
}

/*
equation index: 11090
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springChassis.height = vehicle.frontSuspension.cornerL.springChassis.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11090};
  (data->simulationInfo->realParameter[722] /* vehicle.frontSuspension.cornerL.springChassis.height PARAM */) = (data->simulationInfo->realParameter[739] /* vehicle.frontSuspension.cornerL.springChassis.width PARAM */);
  TRACE_POP
}

/*
equation index: 11091
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springChassis.shape.height = vehicle.frontSuspension.cornerL.springChassis.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11091};
  (data->simulationInfo->realParameter[734] /* vehicle.frontSuspension.cornerL.springChassis.shape.height PARAM */) = (data->simulationInfo->realParameter[722] /* vehicle.frontSuspension.cornerL.springChassis.height PARAM */);
  TRACE_POP
}

/*
equation index: 11092
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springChassis.shape.extra = vehicle.frontSuspension.cornerL.springChassis.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11092};
  (data->simulationInfo->realParameter[733] /* vehicle.frontSuspension.cornerL.springChassis.shape.extra PARAM */) = (data->simulationInfo->realParameter[721] /* vehicle.frontSuspension.cornerL.springChassis.extra PARAM */);
  TRACE_POP
}

/*
equation index: 11093
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springChassis.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11093};
  (data->simulationInfo->realParameter[736] /* vehicle.frontSuspension.cornerL.springChassis.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11094
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springChassis.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11094};
  (data->simulationInfo->realParameter[738] /* vehicle.frontSuspension.cornerL.springChassis.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11095
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.shape.length = vehicle.frontSuspension.cornerL.springArm.length
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11095};
  (data->simulationInfo->realParameter[713] /* vehicle.frontSuspension.cornerL.springArm.shape.length PARAM */) = (data->simulationInfo->realParameter[701] /* vehicle.frontSuspension.cornerL.springArm.length PARAM */);
  TRACE_POP
}

/*
equation index: 11096
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.width = vehicle.frontSuspension.cornerL.springArm.length / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11096};
  (data->simulationInfo->realParameter[717] /* vehicle.frontSuspension.cornerL.springArm.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[701] /* vehicle.frontSuspension.cornerL.springArm.length PARAM */),(data->simulationInfo->realParameter[3855] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 11097
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.shape.width = vehicle.frontSuspension.cornerL.springArm.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11097};
  (data->simulationInfo->realParameter[715] /* vehicle.frontSuspension.cornerL.springArm.shape.width PARAM */) = (data->simulationInfo->realParameter[717] /* vehicle.frontSuspension.cornerL.springArm.width PARAM */);
  TRACE_POP
}

/*
equation index: 11098
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.height = vehicle.frontSuspension.cornerL.springArm.width
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11098};
  (data->simulationInfo->realParameter[700] /* vehicle.frontSuspension.cornerL.springArm.height PARAM */) = (data->simulationInfo->realParameter[717] /* vehicle.frontSuspension.cornerL.springArm.width PARAM */);
  TRACE_POP
}

/*
equation index: 11099
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.shape.height = vehicle.frontSuspension.cornerL.springArm.height
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11099};
  (data->simulationInfo->realParameter[712] /* vehicle.frontSuspension.cornerL.springArm.shape.height PARAM */) = (data->simulationInfo->realParameter[700] /* vehicle.frontSuspension.cornerL.springArm.height PARAM */);
  TRACE_POP
}

/*
equation index: 11100
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.shape.extra = vehicle.frontSuspension.cornerL.springArm.extra
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11100};
  (data->simulationInfo->realParameter[711] /* vehicle.frontSuspension.cornerL.springArm.shape.extra PARAM */) = (data->simulationInfo->realParameter[699] /* vehicle.frontSuspension.cornerL.springArm.extra PARAM */);
  TRACE_POP
}

/*
equation index: 11101
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11101};
  (data->simulationInfo->realParameter[714] /* vehicle.frontSuspension.cornerL.springArm.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11102
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.springArm.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11102};
  (data->simulationInfo->realParameter[716] /* vehicle.frontSuspension.cornerL.springArm.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[3854] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 11103
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.shape_a.width = world.defaultForceWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11103};
  (data->simulationInfo->realParameter[423] /* vehicle.frontSuspension.cornerL.coilover.shape_a.width PARAM */) = (data->simulationInfo->realParameter[3848] /* world.defaultForceWidth PARAM */);
  TRACE_POP
}

/*
equation index: 11104
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.coilover.shape_a.height = world.defaultForceWidth
*/
OMC_DISABLE_OPT
static void AlyssaVehicle_eqFunction_11104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11104};
  (data->simulationInfo->realParameter[421] /* vehicle.frontSuspension.cornerL.coilover.shape_a.height PARAM */) = (data->simulationInfo->realParameter[3848] /* world.defaultForceWidth PARAM */);
  TRACE_POP
}
OMC_DISABLE_OPT
void AlyssaVehicle_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  AlyssaVehicle_eqFunction_10603(data, threadData);
  AlyssaVehicle_eqFunction_10604(data, threadData);
  AlyssaVehicle_eqFunction_10605(data, threadData);
  AlyssaVehicle_eqFunction_10606(data, threadData);
  AlyssaVehicle_eqFunction_10607(data, threadData);
  AlyssaVehicle_eqFunction_10608(data, threadData);
  AlyssaVehicle_eqFunction_10609(data, threadData);
  AlyssaVehicle_eqFunction_10610(data, threadData);
  AlyssaVehicle_eqFunction_10611(data, threadData);
  AlyssaVehicle_eqFunction_10612(data, threadData);
  AlyssaVehicle_eqFunction_10614(data, threadData);
  AlyssaVehicle_eqFunction_10616(data, threadData);
  AlyssaVehicle_eqFunction_10618(data, threadData);
  AlyssaVehicle_eqFunction_10620(data, threadData);
  AlyssaVehicle_eqFunction_10621(data, threadData);
  AlyssaVehicle_eqFunction_10622(data, threadData);
  AlyssaVehicle_eqFunction_10623(data, threadData);
  AlyssaVehicle_eqFunction_10624(data, threadData);
  AlyssaVehicle_eqFunction_10625(data, threadData);
  AlyssaVehicle_eqFunction_10627(data, threadData);
  AlyssaVehicle_eqFunction_10629(data, threadData);
  AlyssaVehicle_eqFunction_10631(data, threadData);
  AlyssaVehicle_eqFunction_10633(data, threadData);
  AlyssaVehicle_eqFunction_10634(data, threadData);
  AlyssaVehicle_eqFunction_10635(data, threadData);
  AlyssaVehicle_eqFunction_10636(data, threadData);
  AlyssaVehicle_eqFunction_10637(data, threadData);
  AlyssaVehicle_eqFunction_10638(data, threadData);
  AlyssaVehicle_eqFunction_10639(data, threadData);
  AlyssaVehicle_eqFunction_10640(data, threadData);
  AlyssaVehicle_eqFunction_10642(data, threadData);
  AlyssaVehicle_eqFunction_10644(data, threadData);
  AlyssaVehicle_eqFunction_10646(data, threadData);
  AlyssaVehicle_eqFunction_10648(data, threadData);
  AlyssaVehicle_eqFunction_10649(data, threadData);
  AlyssaVehicle_eqFunction_10650(data, threadData);
  AlyssaVehicle_eqFunction_10651(data, threadData);
  AlyssaVehicle_eqFunction_10652(data, threadData);
  AlyssaVehicle_eqFunction_10653(data, threadData);
  AlyssaVehicle_eqFunction_10655(data, threadData);
  AlyssaVehicle_eqFunction_10657(data, threadData);
  AlyssaVehicle_eqFunction_10659(data, threadData);
  AlyssaVehicle_eqFunction_10661(data, threadData);
  AlyssaVehicle_eqFunction_10662(data, threadData);
  AlyssaVehicle_eqFunction_10663(data, threadData);
  AlyssaVehicle_eqFunction_10664(data, threadData);
  AlyssaVehicle_eqFunction_10665(data, threadData);
  AlyssaVehicle_eqFunction_10666(data, threadData);
  AlyssaVehicle_eqFunction_10667(data, threadData);
  AlyssaVehicle_eqFunction_10668(data, threadData);
  AlyssaVehicle_eqFunction_10669(data, threadData);
  AlyssaVehicle_eqFunction_10670(data, threadData);
  AlyssaVehicle_eqFunction_10671(data, threadData);
  AlyssaVehicle_eqFunction_10672(data, threadData);
  AlyssaVehicle_eqFunction_10674(data, threadData);
  AlyssaVehicle_eqFunction_10676(data, threadData);
  AlyssaVehicle_eqFunction_10678(data, threadData);
  AlyssaVehicle_eqFunction_10680(data, threadData);
  AlyssaVehicle_eqFunction_10682(data, threadData);
  AlyssaVehicle_eqFunction_10684(data, threadData);
  AlyssaVehicle_eqFunction_10686(data, threadData);
  AlyssaVehicle_eqFunction_10688(data, threadData);
  AlyssaVehicle_eqFunction_10690(data, threadData);
  AlyssaVehicle_eqFunction_10692(data, threadData);
  AlyssaVehicle_eqFunction_10694(data, threadData);
  AlyssaVehicle_eqFunction_10696(data, threadData);
  AlyssaVehicle_eqFunction_10698(data, threadData);
  AlyssaVehicle_eqFunction_10700(data, threadData);
  AlyssaVehicle_eqFunction_10702(data, threadData);
  AlyssaVehicle_eqFunction_10703(data, threadData);
  AlyssaVehicle_eqFunction_10704(data, threadData);
  AlyssaVehicle_eqFunction_10705(data, threadData);
  AlyssaVehicle_eqFunction_10706(data, threadData);
  AlyssaVehicle_eqFunction_10707(data, threadData);
  AlyssaVehicle_eqFunction_10708(data, threadData);
  AlyssaVehicle_eqFunction_10709(data, threadData);
  AlyssaVehicle_eqFunction_10710(data, threadData);
  AlyssaVehicle_eqFunction_10711(data, threadData);
  AlyssaVehicle_eqFunction_10712(data, threadData);
  AlyssaVehicle_eqFunction_10713(data, threadData);
  AlyssaVehicle_eqFunction_10714(data, threadData);
  AlyssaVehicle_eqFunction_10715(data, threadData);
  AlyssaVehicle_eqFunction_10716(data, threadData);
  AlyssaVehicle_eqFunction_10717(data, threadData);
  AlyssaVehicle_eqFunction_10718(data, threadData);
  AlyssaVehicle_eqFunction_10719(data, threadData);
  AlyssaVehicle_eqFunction_10720(data, threadData);
  AlyssaVehicle_eqFunction_10721(data, threadData);
  AlyssaVehicle_eqFunction_10722(data, threadData);
  AlyssaVehicle_eqFunction_10723(data, threadData);
  AlyssaVehicle_eqFunction_10724(data, threadData);
  AlyssaVehicle_eqFunction_10725(data, threadData);
  AlyssaVehicle_eqFunction_10726(data, threadData);
  AlyssaVehicle_eqFunction_10727(data, threadData);
  AlyssaVehicle_eqFunction_10728(data, threadData);
  AlyssaVehicle_eqFunction_10729(data, threadData);
  AlyssaVehicle_eqFunction_10730(data, threadData);
  AlyssaVehicle_eqFunction_10731(data, threadData);
  AlyssaVehicle_eqFunction_10732(data, threadData);
  AlyssaVehicle_eqFunction_10733(data, threadData);
  AlyssaVehicle_eqFunction_10734(data, threadData);
  AlyssaVehicle_eqFunction_10735(data, threadData);
  AlyssaVehicle_eqFunction_10736(data, threadData);
  AlyssaVehicle_eqFunction_10737(data, threadData);
  AlyssaVehicle_eqFunction_10738(data, threadData);
  AlyssaVehicle_eqFunction_10739(data, threadData);
  AlyssaVehicle_eqFunction_10740(data, threadData);
  AlyssaVehicle_eqFunction_10741(data, threadData);
  AlyssaVehicle_eqFunction_10742(data, threadData);
  AlyssaVehicle_eqFunction_10743(data, threadData);
  AlyssaVehicle_eqFunction_10744(data, threadData);
  AlyssaVehicle_eqFunction_10745(data, threadData);
  AlyssaVehicle_eqFunction_10746(data, threadData);
  AlyssaVehicle_eqFunction_10747(data, threadData);
  AlyssaVehicle_eqFunction_10748(data, threadData);
  AlyssaVehicle_eqFunction_10749(data, threadData);
  AlyssaVehicle_eqFunction_10750(data, threadData);
  AlyssaVehicle_eqFunction_10751(data, threadData);
  AlyssaVehicle_eqFunction_10752(data, threadData);
  AlyssaVehicle_eqFunction_10753(data, threadData);
  AlyssaVehicle_eqFunction_10754(data, threadData);
  AlyssaVehicle_eqFunction_10755(data, threadData);
  AlyssaVehicle_eqFunction_10756(data, threadData);
  AlyssaVehicle_eqFunction_10757(data, threadData);
  AlyssaVehicle_eqFunction_10758(data, threadData);
  AlyssaVehicle_eqFunction_10759(data, threadData);
  AlyssaVehicle_eqFunction_10760(data, threadData);
  AlyssaVehicle_eqFunction_10761(data, threadData);
  AlyssaVehicle_eqFunction_10762(data, threadData);
  AlyssaVehicle_eqFunction_10763(data, threadData);
  AlyssaVehicle_eqFunction_10764(data, threadData);
  AlyssaVehicle_eqFunction_10765(data, threadData);
  AlyssaVehicle_eqFunction_10766(data, threadData);
  AlyssaVehicle_eqFunction_10767(data, threadData);
  AlyssaVehicle_eqFunction_10768(data, threadData);
  AlyssaVehicle_eqFunction_10769(data, threadData);
  AlyssaVehicle_eqFunction_10770(data, threadData);
  AlyssaVehicle_eqFunction_10771(data, threadData);
  AlyssaVehicle_eqFunction_10772(data, threadData);
  AlyssaVehicle_eqFunction_10773(data, threadData);
  AlyssaVehicle_eqFunction_10774(data, threadData);
  AlyssaVehicle_eqFunction_10775(data, threadData);
  AlyssaVehicle_eqFunction_10776(data, threadData);
  AlyssaVehicle_eqFunction_10777(data, threadData);
  AlyssaVehicle_eqFunction_10778(data, threadData);
  AlyssaVehicle_eqFunction_10779(data, threadData);
  AlyssaVehicle_eqFunction_10780(data, threadData);
  AlyssaVehicle_eqFunction_10781(data, threadData);
  AlyssaVehicle_eqFunction_10782(data, threadData);
  AlyssaVehicle_eqFunction_10783(data, threadData);
  AlyssaVehicle_eqFunction_10784(data, threadData);
  AlyssaVehicle_eqFunction_10785(data, threadData);
  AlyssaVehicle_eqFunction_10786(data, threadData);
  AlyssaVehicle_eqFunction_10787(data, threadData);
  AlyssaVehicle_eqFunction_10788(data, threadData);
  AlyssaVehicle_eqFunction_10789(data, threadData);
  AlyssaVehicle_eqFunction_10790(data, threadData);
  AlyssaVehicle_eqFunction_10791(data, threadData);
  AlyssaVehicle_eqFunction_10792(data, threadData);
  AlyssaVehicle_eqFunction_10793(data, threadData);
  AlyssaVehicle_eqFunction_10794(data, threadData);
  AlyssaVehicle_eqFunction_10795(data, threadData);
  AlyssaVehicle_eqFunction_10796(data, threadData);
  AlyssaVehicle_eqFunction_10797(data, threadData);
  AlyssaVehicle_eqFunction_10798(data, threadData);
  AlyssaVehicle_eqFunction_10799(data, threadData);
  AlyssaVehicle_eqFunction_10800(data, threadData);
  AlyssaVehicle_eqFunction_10801(data, threadData);
  AlyssaVehicle_eqFunction_10802(data, threadData);
  AlyssaVehicle_eqFunction_10803(data, threadData);
  AlyssaVehicle_eqFunction_10804(data, threadData);
  AlyssaVehicle_eqFunction_10805(data, threadData);
  AlyssaVehicle_eqFunction_10806(data, threadData);
  AlyssaVehicle_eqFunction_10807(data, threadData);
  AlyssaVehicle_eqFunction_10808(data, threadData);
  AlyssaVehicle_eqFunction_10809(data, threadData);
  AlyssaVehicle_eqFunction_10810(data, threadData);
  AlyssaVehicle_eqFunction_10811(data, threadData);
  AlyssaVehicle_eqFunction_10812(data, threadData);
  AlyssaVehicle_eqFunction_10813(data, threadData);
  AlyssaVehicle_eqFunction_10814(data, threadData);
  AlyssaVehicle_eqFunction_10815(data, threadData);
  AlyssaVehicle_eqFunction_10816(data, threadData);
  AlyssaVehicle_eqFunction_10817(data, threadData);
  AlyssaVehicle_eqFunction_10818(data, threadData);
  AlyssaVehicle_eqFunction_10819(data, threadData);
  AlyssaVehicle_eqFunction_10820(data, threadData);
  AlyssaVehicle_eqFunction_10821(data, threadData);
  AlyssaVehicle_eqFunction_10822(data, threadData);
  AlyssaVehicle_eqFunction_10823(data, threadData);
  AlyssaVehicle_eqFunction_10824(data, threadData);
  AlyssaVehicle_eqFunction_10825(data, threadData);
  AlyssaVehicle_eqFunction_10826(data, threadData);
  AlyssaVehicle_eqFunction_10827(data, threadData);
  AlyssaVehicle_eqFunction_10828(data, threadData);
  AlyssaVehicle_eqFunction_10829(data, threadData);
  AlyssaVehicle_eqFunction_10830(data, threadData);
  AlyssaVehicle_eqFunction_10831(data, threadData);
  AlyssaVehicle_eqFunction_10832(data, threadData);
  AlyssaVehicle_eqFunction_10833(data, threadData);
  AlyssaVehicle_eqFunction_10834(data, threadData);
  AlyssaVehicle_eqFunction_10835(data, threadData);
  AlyssaVehicle_eqFunction_10836(data, threadData);
  AlyssaVehicle_eqFunction_10837(data, threadData);
  AlyssaVehicle_eqFunction_10838(data, threadData);
  AlyssaVehicle_eqFunction_10839(data, threadData);
  AlyssaVehicle_eqFunction_10840(data, threadData);
  AlyssaVehicle_eqFunction_10841(data, threadData);
  AlyssaVehicle_eqFunction_10842(data, threadData);
  AlyssaVehicle_eqFunction_10843(data, threadData);
  AlyssaVehicle_eqFunction_10844(data, threadData);
  AlyssaVehicle_eqFunction_10845(data, threadData);
  AlyssaVehicle_eqFunction_10846(data, threadData);
  AlyssaVehicle_eqFunction_10847(data, threadData);
  AlyssaVehicle_eqFunction_10848(data, threadData);
  AlyssaVehicle_eqFunction_10849(data, threadData);
  AlyssaVehicle_eqFunction_10850(data, threadData);
  AlyssaVehicle_eqFunction_10851(data, threadData);
  AlyssaVehicle_eqFunction_10852(data, threadData);
  AlyssaVehicle_eqFunction_10853(data, threadData);
  AlyssaVehicle_eqFunction_10854(data, threadData);
  AlyssaVehicle_eqFunction_10855(data, threadData);
  AlyssaVehicle_eqFunction_10856(data, threadData);
  AlyssaVehicle_eqFunction_10857(data, threadData);
  AlyssaVehicle_eqFunction_10858(data, threadData);
  AlyssaVehicle_eqFunction_10859(data, threadData);
  AlyssaVehicle_eqFunction_10860(data, threadData);
  AlyssaVehicle_eqFunction_10861(data, threadData);
  AlyssaVehicle_eqFunction_10862(data, threadData);
  AlyssaVehicle_eqFunction_10863(data, threadData);
  AlyssaVehicle_eqFunction_10864(data, threadData);
  AlyssaVehicle_eqFunction_10865(data, threadData);
  AlyssaVehicle_eqFunction_10866(data, threadData);
  AlyssaVehicle_eqFunction_10867(data, threadData);
  AlyssaVehicle_eqFunction_10868(data, threadData);
  AlyssaVehicle_eqFunction_10869(data, threadData);
  AlyssaVehicle_eqFunction_10870(data, threadData);
  AlyssaVehicle_eqFunction_10871(data, threadData);
  AlyssaVehicle_eqFunction_10872(data, threadData);
  AlyssaVehicle_eqFunction_10873(data, threadData);
  AlyssaVehicle_eqFunction_10874(data, threadData);
  AlyssaVehicle_eqFunction_10875(data, threadData);
  AlyssaVehicle_eqFunction_10876(data, threadData);
  AlyssaVehicle_eqFunction_10877(data, threadData);
  AlyssaVehicle_eqFunction_10878(data, threadData);
  AlyssaVehicle_eqFunction_10879(data, threadData);
  AlyssaVehicle_eqFunction_10880(data, threadData);
  AlyssaVehicle_eqFunction_10881(data, threadData);
  AlyssaVehicle_eqFunction_10882(data, threadData);
  AlyssaVehicle_eqFunction_10883(data, threadData);
  AlyssaVehicle_eqFunction_10884(data, threadData);
  AlyssaVehicle_eqFunction_10885(data, threadData);
  AlyssaVehicle_eqFunction_10886(data, threadData);
  AlyssaVehicle_eqFunction_10887(data, threadData);
  AlyssaVehicle_eqFunction_10888(data, threadData);
  AlyssaVehicle_eqFunction_10889(data, threadData);
  AlyssaVehicle_eqFunction_10890(data, threadData);
  AlyssaVehicle_eqFunction_10891(data, threadData);
  AlyssaVehicle_eqFunction_10892(data, threadData);
  AlyssaVehicle_eqFunction_10893(data, threadData);
  AlyssaVehicle_eqFunction_10894(data, threadData);
  AlyssaVehicle_eqFunction_10895(data, threadData);
  AlyssaVehicle_eqFunction_10896(data, threadData);
  AlyssaVehicle_eqFunction_10897(data, threadData);
  AlyssaVehicle_eqFunction_10898(data, threadData);
  AlyssaVehicle_eqFunction_10899(data, threadData);
  AlyssaVehicle_eqFunction_10900(data, threadData);
  AlyssaVehicle_eqFunction_10901(data, threadData);
  AlyssaVehicle_eqFunction_10902(data, threadData);
  AlyssaVehicle_eqFunction_10903(data, threadData);
  AlyssaVehicle_eqFunction_10904(data, threadData);
  AlyssaVehicle_eqFunction_10905(data, threadData);
  AlyssaVehicle_eqFunction_10906(data, threadData);
  AlyssaVehicle_eqFunction_10907(data, threadData);
  AlyssaVehicle_eqFunction_10908(data, threadData);
  AlyssaVehicle_eqFunction_10909(data, threadData);
  AlyssaVehicle_eqFunction_10910(data, threadData);
  AlyssaVehicle_eqFunction_10911(data, threadData);
  AlyssaVehicle_eqFunction_10912(data, threadData);
  AlyssaVehicle_eqFunction_10913(data, threadData);
  AlyssaVehicle_eqFunction_10914(data, threadData);
  AlyssaVehicle_eqFunction_10915(data, threadData);
  AlyssaVehicle_eqFunction_10916(data, threadData);
  AlyssaVehicle_eqFunction_10917(data, threadData);
  AlyssaVehicle_eqFunction_10918(data, threadData);
  AlyssaVehicle_eqFunction_10919(data, threadData);
  AlyssaVehicle_eqFunction_10920(data, threadData);
  AlyssaVehicle_eqFunction_10921(data, threadData);
  AlyssaVehicle_eqFunction_10922(data, threadData);
  AlyssaVehicle_eqFunction_10923(data, threadData);
  AlyssaVehicle_eqFunction_10924(data, threadData);
  AlyssaVehicle_eqFunction_10925(data, threadData);
  AlyssaVehicle_eqFunction_10926(data, threadData);
  AlyssaVehicle_eqFunction_10927(data, threadData);
  AlyssaVehicle_eqFunction_10928(data, threadData);
  AlyssaVehicle_eqFunction_10929(data, threadData);
  AlyssaVehicle_eqFunction_10930(data, threadData);
  AlyssaVehicle_eqFunction_10931(data, threadData);
  AlyssaVehicle_eqFunction_10932(data, threadData);
  AlyssaVehicle_eqFunction_10933(data, threadData);
  AlyssaVehicle_eqFunction_10934(data, threadData);
  AlyssaVehicle_eqFunction_10935(data, threadData);
  AlyssaVehicle_eqFunction_10936(data, threadData);
  AlyssaVehicle_eqFunction_10937(data, threadData);
  AlyssaVehicle_eqFunction_10938(data, threadData);
  AlyssaVehicle_eqFunction_10939(data, threadData);
  AlyssaVehicle_eqFunction_10940(data, threadData);
  AlyssaVehicle_eqFunction_10941(data, threadData);
  AlyssaVehicle_eqFunction_10942(data, threadData);
  AlyssaVehicle_eqFunction_10943(data, threadData);
  AlyssaVehicle_eqFunction_10944(data, threadData);
  AlyssaVehicle_eqFunction_10945(data, threadData);
  AlyssaVehicle_eqFunction_10946(data, threadData);
  AlyssaVehicle_eqFunction_10947(data, threadData);
  AlyssaVehicle_eqFunction_10948(data, threadData);
  AlyssaVehicle_eqFunction_10949(data, threadData);
  AlyssaVehicle_eqFunction_10950(data, threadData);
  AlyssaVehicle_eqFunction_10951(data, threadData);
  AlyssaVehicle_eqFunction_10952(data, threadData);
  AlyssaVehicle_eqFunction_10953(data, threadData);
  AlyssaVehicle_eqFunction_10954(data, threadData);
  AlyssaVehicle_eqFunction_10955(data, threadData);
  AlyssaVehicle_eqFunction_10956(data, threadData);
  AlyssaVehicle_eqFunction_10957(data, threadData);
  AlyssaVehicle_eqFunction_10958(data, threadData);
  AlyssaVehicle_eqFunction_10959(data, threadData);
  AlyssaVehicle_eqFunction_10960(data, threadData);
  AlyssaVehicle_eqFunction_10961(data, threadData);
  AlyssaVehicle_eqFunction_10962(data, threadData);
  AlyssaVehicle_eqFunction_10963(data, threadData);
  AlyssaVehicle_eqFunction_10964(data, threadData);
  AlyssaVehicle_eqFunction_10965(data, threadData);
  AlyssaVehicle_eqFunction_10966(data, threadData);
  AlyssaVehicle_eqFunction_10967(data, threadData);
  AlyssaVehicle_eqFunction_10968(data, threadData);
  AlyssaVehicle_eqFunction_10969(data, threadData);
  AlyssaVehicle_eqFunction_10970(data, threadData);
  AlyssaVehicle_eqFunction_10971(data, threadData);
  AlyssaVehicle_eqFunction_10972(data, threadData);
  AlyssaVehicle_eqFunction_10973(data, threadData);
  AlyssaVehicle_eqFunction_10974(data, threadData);
  AlyssaVehicle_eqFunction_10975(data, threadData);
  AlyssaVehicle_eqFunction_10976(data, threadData);
  AlyssaVehicle_eqFunction_10977(data, threadData);
  AlyssaVehicle_eqFunction_10978(data, threadData);
  AlyssaVehicle_eqFunction_10979(data, threadData);
  AlyssaVehicle_eqFunction_10980(data, threadData);
  AlyssaVehicle_eqFunction_10981(data, threadData);
  AlyssaVehicle_eqFunction_10982(data, threadData);
  AlyssaVehicle_eqFunction_10983(data, threadData);
  AlyssaVehicle_eqFunction_10984(data, threadData);
  AlyssaVehicle_eqFunction_10985(data, threadData);
  AlyssaVehicle_eqFunction_10986(data, threadData);
  AlyssaVehicle_eqFunction_10987(data, threadData);
  AlyssaVehicle_eqFunction_10988(data, threadData);
  AlyssaVehicle_eqFunction_10989(data, threadData);
  AlyssaVehicle_eqFunction_10990(data, threadData);
  AlyssaVehicle_eqFunction_10991(data, threadData);
  AlyssaVehicle_eqFunction_10992(data, threadData);
  AlyssaVehicle_eqFunction_10993(data, threadData);
  AlyssaVehicle_eqFunction_10994(data, threadData);
  AlyssaVehicle_eqFunction_10995(data, threadData);
  AlyssaVehicle_eqFunction_10996(data, threadData);
  AlyssaVehicle_eqFunction_10997(data, threadData);
  AlyssaVehicle_eqFunction_10998(data, threadData);
  AlyssaVehicle_eqFunction_10999(data, threadData);
  AlyssaVehicle_eqFunction_11000(data, threadData);
  AlyssaVehicle_eqFunction_11001(data, threadData);
  AlyssaVehicle_eqFunction_11002(data, threadData);
  AlyssaVehicle_eqFunction_11003(data, threadData);
  AlyssaVehicle_eqFunction_11004(data, threadData);
  AlyssaVehicle_eqFunction_11005(data, threadData);
  AlyssaVehicle_eqFunction_11006(data, threadData);
  AlyssaVehicle_eqFunction_11007(data, threadData);
  AlyssaVehicle_eqFunction_11008(data, threadData);
  AlyssaVehicle_eqFunction_11009(data, threadData);
  AlyssaVehicle_eqFunction_11010(data, threadData);
  AlyssaVehicle_eqFunction_11011(data, threadData);
  AlyssaVehicle_eqFunction_11012(data, threadData);
  AlyssaVehicle_eqFunction_11013(data, threadData);
  AlyssaVehicle_eqFunction_11014(data, threadData);
  AlyssaVehicle_eqFunction_11015(data, threadData);
  AlyssaVehicle_eqFunction_11016(data, threadData);
  AlyssaVehicle_eqFunction_11017(data, threadData);
  AlyssaVehicle_eqFunction_11018(data, threadData);
  AlyssaVehicle_eqFunction_11019(data, threadData);
  AlyssaVehicle_eqFunction_11020(data, threadData);
  AlyssaVehicle_eqFunction_11021(data, threadData);
  AlyssaVehicle_eqFunction_11022(data, threadData);
  AlyssaVehicle_eqFunction_11023(data, threadData);
  AlyssaVehicle_eqFunction_11024(data, threadData);
  AlyssaVehicle_eqFunction_11025(data, threadData);
  AlyssaVehicle_eqFunction_11026(data, threadData);
  AlyssaVehicle_eqFunction_11027(data, threadData);
  AlyssaVehicle_eqFunction_11028(data, threadData);
  AlyssaVehicle_eqFunction_11029(data, threadData);
  AlyssaVehicle_eqFunction_11030(data, threadData);
  AlyssaVehicle_eqFunction_11031(data, threadData);
  AlyssaVehicle_eqFunction_11032(data, threadData);
  AlyssaVehicle_eqFunction_11033(data, threadData);
  AlyssaVehicle_eqFunction_11034(data, threadData);
  AlyssaVehicle_eqFunction_11035(data, threadData);
  AlyssaVehicle_eqFunction_11036(data, threadData);
  AlyssaVehicle_eqFunction_11037(data, threadData);
  AlyssaVehicle_eqFunction_11038(data, threadData);
  AlyssaVehicle_eqFunction_11039(data, threadData);
  AlyssaVehicle_eqFunction_11040(data, threadData);
  AlyssaVehicle_eqFunction_11041(data, threadData);
  AlyssaVehicle_eqFunction_11042(data, threadData);
  AlyssaVehicle_eqFunction_11043(data, threadData);
  AlyssaVehicle_eqFunction_11044(data, threadData);
  AlyssaVehicle_eqFunction_11045(data, threadData);
  AlyssaVehicle_eqFunction_11046(data, threadData);
  AlyssaVehicle_eqFunction_11047(data, threadData);
  AlyssaVehicle_eqFunction_11048(data, threadData);
  AlyssaVehicle_eqFunction_11049(data, threadData);
  AlyssaVehicle_eqFunction_11050(data, threadData);
  AlyssaVehicle_eqFunction_11051(data, threadData);
  AlyssaVehicle_eqFunction_11052(data, threadData);
  AlyssaVehicle_eqFunction_11053(data, threadData);
  AlyssaVehicle_eqFunction_11054(data, threadData);
  AlyssaVehicle_eqFunction_11055(data, threadData);
  AlyssaVehicle_eqFunction_11056(data, threadData);
  AlyssaVehicle_eqFunction_11057(data, threadData);
  AlyssaVehicle_eqFunction_11058(data, threadData);
  AlyssaVehicle_eqFunction_11059(data, threadData);
  AlyssaVehicle_eqFunction_11060(data, threadData);
  AlyssaVehicle_eqFunction_11061(data, threadData);
  AlyssaVehicle_eqFunction_11062(data, threadData);
  AlyssaVehicle_eqFunction_11063(data, threadData);
  AlyssaVehicle_eqFunction_11064(data, threadData);
  AlyssaVehicle_eqFunction_11065(data, threadData);
  AlyssaVehicle_eqFunction_11066(data, threadData);
  AlyssaVehicle_eqFunction_11067(data, threadData);
  AlyssaVehicle_eqFunction_11068(data, threadData);
  AlyssaVehicle_eqFunction_11069(data, threadData);
  AlyssaVehicle_eqFunction_11070(data, threadData);
  AlyssaVehicle_eqFunction_11071(data, threadData);
  AlyssaVehicle_eqFunction_11072(data, threadData);
  AlyssaVehicle_eqFunction_11073(data, threadData);
  AlyssaVehicle_eqFunction_11074(data, threadData);
  AlyssaVehicle_eqFunction_11075(data, threadData);
  AlyssaVehicle_eqFunction_11076(data, threadData);
  AlyssaVehicle_eqFunction_11077(data, threadData);
  AlyssaVehicle_eqFunction_11078(data, threadData);
  AlyssaVehicle_eqFunction_11079(data, threadData);
  AlyssaVehicle_eqFunction_11080(data, threadData);
  AlyssaVehicle_eqFunction_11081(data, threadData);
  AlyssaVehicle_eqFunction_11082(data, threadData);
  AlyssaVehicle_eqFunction_11083(data, threadData);
  AlyssaVehicle_eqFunction_11084(data, threadData);
  AlyssaVehicle_eqFunction_11085(data, threadData);
  AlyssaVehicle_eqFunction_11086(data, threadData);
  AlyssaVehicle_eqFunction_11087(data, threadData);
  AlyssaVehicle_eqFunction_11088(data, threadData);
  AlyssaVehicle_eqFunction_11089(data, threadData);
  AlyssaVehicle_eqFunction_11090(data, threadData);
  AlyssaVehicle_eqFunction_11091(data, threadData);
  AlyssaVehicle_eqFunction_11092(data, threadData);
  AlyssaVehicle_eqFunction_11093(data, threadData);
  AlyssaVehicle_eqFunction_11094(data, threadData);
  AlyssaVehicle_eqFunction_11095(data, threadData);
  AlyssaVehicle_eqFunction_11096(data, threadData);
  AlyssaVehicle_eqFunction_11097(data, threadData);
  AlyssaVehicle_eqFunction_11098(data, threadData);
  AlyssaVehicle_eqFunction_11099(data, threadData);
  AlyssaVehicle_eqFunction_11100(data, threadData);
  AlyssaVehicle_eqFunction_11101(data, threadData);
  AlyssaVehicle_eqFunction_11102(data, threadData);
  AlyssaVehicle_eqFunction_11103(data, threadData);
  AlyssaVehicle_eqFunction_11104(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif
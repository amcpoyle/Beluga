#include "AlyssaVehicle_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern void AlyssaVehicle_eqFunction_8227(DATA *data, threadData_t *threadData);


/*
equation index: 3916
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.frame_a.r_0[3] = vehicle.frontSuspension.cornerL.jointUSR.frame_ia.r_0[3] + 0.02 * vehicle.frontSuspension.frame_bL.R.T[1,3] + (-0.15000000000000002) * vehicle.frontSuspension.frame_bL.R.T[2,3] + 0.2 * vehicle.frontSuspension.frame_bL.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3916};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2070]] /* vehicle.frontSuspension.cornerL.upright.frame_a.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1431]] /* vehicle.frontSuspension.cornerL.jointUSR.frame_ia.r_0[3] DUMMY_STATE */) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3030]] /* vehicle.frontSuspension.frame_bL.R.T[1,3] DUMMY_STATE */)) + (-0.15000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3033]] /* vehicle.frontSuspension.frame_bL.R.T[2,3] DUMMY_STATE */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3036]] /* vehicle.frontSuspension.frame_bL.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3917
type: SIMPLE_ASSIGN
vehicle.wheelFL.contactPatch.frame_a.r_0[3] = vehicle.frontSuspension.cornerL.upright.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3917};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5081]] /* vehicle.wheelFL.contactPatch.frame_a.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2070]] /* vehicle.frontSuspension.cornerL.upright.frame_a.r_0[3] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8238(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8243(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8244(DATA *data, threadData_t *threadData);


/*
equation index: 3921
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,3] = ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelFL.rim.rotor1D.phi) - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[1,3] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelFL.rim.rotor1D.phi) - vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[2,3] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3921};
  real_array tmp867;
  real_array tmp868;
  real_array tmp869;
  real_array tmp870;
  real_array tmp871;
  real_array tmp872;
  real_array tmp873;
  real_array tmp874;
  real_array tmp875;
  real_array tmp876;
  real_array tmp877;
  real_array tmp878;
  real_array tmp879;
  real_array tmp880;
  real_array tmp881;
  real_array tmp882;
  real_array tmp883;
  real_array tmp884;
  real_array tmp885;
  real_array tmp886;
  real_array tmp887;
  real_array tmp888;
  real_array tmp889;
  real_array tmp890;
  real_array tmp891;
  real_array tmp892;
  real_array tmp893;
  real_array tmp894;
  real_array tmp895;
  real_array tmp896;
  real_array_create(&tmp867, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp867, ((modelica_integer) 2) - ndims_base_array(&tmp867), &tmp868);
  real_array_create(&tmp869, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp869, ((modelica_integer) 2) - ndims_base_array(&tmp869), &tmp870);
  transpose_alloc_real_array(&tmp870, &tmp871);
  real_array_create(&tmp872, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp872, ((modelica_integer) 2) - ndims_base_array(&tmp872), &tmp873);
  real_array_create(&tmp874, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp874, ((modelica_integer) 2) - ndims_base_array(&tmp874), &tmp875);
  transpose_alloc_real_array(&tmp875, &tmp876);
  real_array_create(&tmp877, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp877, ((modelica_integer) 2) - ndims_base_array(&tmp877), &tmp878);
  real_array_create(&tmp879, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp879, ((modelica_integer) 2) - ndims_base_array(&tmp879), &tmp880);
  transpose_alloc_real_array(&tmp880, &tmp881);
  real_array_create(&tmp882, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp882, ((modelica_integer) 2) - ndims_base_array(&tmp882), &tmp883);
  real_array_create(&tmp884, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp884, ((modelica_integer) 2) - ndims_base_array(&tmp884), &tmp885);
  transpose_alloc_real_array(&tmp885, &tmp886);
  real_array_create(&tmp887, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp887, ((modelica_integer) 2) - ndims_base_array(&tmp887), &tmp888);
  real_array_create(&tmp889, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp889, ((modelica_integer) 2) - ndims_base_array(&tmp889), &tmp890);
  transpose_alloc_real_array(&tmp890, &tmp891);
  real_array_create(&tmp892, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp892, ((modelica_integer) 2) - ndims_base_array(&tmp892), &tmp893);
  real_array_create(&tmp894, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp894, ((modelica_integer) 2) - ndims_base_array(&tmp894), &tmp895);
  transpose_alloc_real_array(&tmp895, &tmp896);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5135]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp868, tmp871), 2, 0) + ((data->simulationInfo->realParameter[3593] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp873, tmp876), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3030]] /* vehicle.frontSuspension.frame_bL.R.T[1,3] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp878, tmp881), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp883, tmp886), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3033]] /* vehicle.frontSuspension.frame_bL.R.T[2,3] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp888, tmp891), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp893, tmp896), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3036]] /* vehicle.frontSuspension.frame_bL.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3922
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,3] = ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelFL.rim.rotor1D.phi) - vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[1,3] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[2,3] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelFL.rim.rotor1D.phi) - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3922};
  real_array tmp897;
  real_array tmp898;
  real_array tmp899;
  real_array tmp900;
  real_array tmp901;
  real_array tmp902;
  real_array tmp903;
  real_array tmp904;
  real_array tmp905;
  real_array tmp906;
  real_array tmp907;
  real_array tmp908;
  real_array tmp909;
  real_array tmp910;
  real_array tmp911;
  real_array tmp912;
  real_array tmp913;
  real_array tmp914;
  real_array tmp915;
  real_array tmp916;
  real_array tmp917;
  real_array tmp918;
  real_array tmp919;
  real_array tmp920;
  real_array tmp921;
  real_array tmp922;
  real_array tmp923;
  real_array tmp924;
  real_array tmp925;
  real_array tmp926;
  real_array_create(&tmp897, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp897, ((modelica_integer) 2) - ndims_base_array(&tmp897), &tmp898);
  real_array_create(&tmp899, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp899, ((modelica_integer) 2) - ndims_base_array(&tmp899), &tmp900);
  transpose_alloc_real_array(&tmp900, &tmp901);
  real_array_create(&tmp902, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp902, ((modelica_integer) 2) - ndims_base_array(&tmp902), &tmp903);
  real_array_create(&tmp904, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp904, ((modelica_integer) 2) - ndims_base_array(&tmp904), &tmp905);
  transpose_alloc_real_array(&tmp905, &tmp906);
  real_array_create(&tmp907, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp907, ((modelica_integer) 2) - ndims_base_array(&tmp907), &tmp908);
  real_array_create(&tmp909, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp909, ((modelica_integer) 2) - ndims_base_array(&tmp909), &tmp910);
  transpose_alloc_real_array(&tmp910, &tmp911);
  real_array_create(&tmp912, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp912, ((modelica_integer) 2) - ndims_base_array(&tmp912), &tmp913);
  real_array_create(&tmp914, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp914, ((modelica_integer) 2) - ndims_base_array(&tmp914), &tmp915);
  transpose_alloc_real_array(&tmp915, &tmp916);
  real_array_create(&tmp917, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp917, ((modelica_integer) 2) - ndims_base_array(&tmp917), &tmp918);
  real_array_create(&tmp919, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp919, ((modelica_integer) 2) - ndims_base_array(&tmp919), &tmp920);
  transpose_alloc_real_array(&tmp920, &tmp921);
  real_array_create(&tmp922, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp922, ((modelica_integer) 2) - ndims_base_array(&tmp922), &tmp923);
  real_array_create(&tmp924, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp924, ((modelica_integer) 2) - ndims_base_array(&tmp924), &tmp925);
  transpose_alloc_real_array(&tmp925, &tmp926);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5132]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp898, tmp901), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp903, tmp906), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3594] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3030]] /* vehicle.frontSuspension.frame_bL.R.T[1,3] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp908, tmp911), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp913, tmp916), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3033]] /* vehicle.frontSuspension.frame_bL.R.T[2,3] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp918, tmp921), 1, 2) + ((data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp923, tmp926), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3036]] /* vehicle.frontSuspension.frame_bL.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3923
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,3] = ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[1,3] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelFL.rim.rotor1D.phi) - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[2,3] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelFL.rim.rotor1D.phi) - vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_3923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3923};
  real_array tmp927;
  real_array tmp928;
  real_array tmp929;
  real_array tmp930;
  real_array tmp931;
  real_array tmp932;
  real_array tmp933;
  real_array tmp934;
  real_array tmp935;
  real_array tmp936;
  real_array tmp937;
  real_array tmp938;
  real_array tmp939;
  real_array tmp940;
  real_array tmp941;
  real_array tmp942;
  real_array tmp943;
  real_array tmp944;
  real_array tmp945;
  real_array tmp946;
  real_array tmp947;
  real_array tmp948;
  real_array tmp949;
  real_array tmp950;
  real_array tmp951;
  real_array tmp952;
  real_array tmp953;
  real_array tmp954;
  real_array tmp955;
  real_array tmp956;
  real_array_create(&tmp927, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp927, ((modelica_integer) 2) - ndims_base_array(&tmp927), &tmp928);
  real_array_create(&tmp929, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp929, ((modelica_integer) 2) - ndims_base_array(&tmp929), &tmp930);
  transpose_alloc_real_array(&tmp930, &tmp931);
  real_array_create(&tmp932, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp932, ((modelica_integer) 2) - ndims_base_array(&tmp932), &tmp933);
  real_array_create(&tmp934, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp934, ((modelica_integer) 2) - ndims_base_array(&tmp934), &tmp935);
  transpose_alloc_real_array(&tmp935, &tmp936);
  real_array_create(&tmp937, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp937, ((modelica_integer) 2) - ndims_base_array(&tmp937), &tmp938);
  real_array_create(&tmp939, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp939, ((modelica_integer) 2) - ndims_base_array(&tmp939), &tmp940);
  transpose_alloc_real_array(&tmp940, &tmp941);
  real_array_create(&tmp942, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp942, ((modelica_integer) 2) - ndims_base_array(&tmp942), &tmp943);
  real_array_create(&tmp944, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp944, ((modelica_integer) 2) - ndims_base_array(&tmp944), &tmp945);
  transpose_alloc_real_array(&tmp945, &tmp946);
  real_array_create(&tmp947, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp947, ((modelica_integer) 2) - ndims_base_array(&tmp947), &tmp948);
  real_array_create(&tmp949, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp949, ((modelica_integer) 2) - ndims_base_array(&tmp949), &tmp950);
  transpose_alloc_real_array(&tmp950, &tmp951);
  real_array_create(&tmp952, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp952, ((modelica_integer) 2) - ndims_base_array(&tmp952), &tmp953);
  real_array_create(&tmp954, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp954, ((modelica_integer) 2) - ndims_base_array(&tmp954), &tmp955);
  transpose_alloc_real_array(&tmp955, &tmp956);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5129]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp928, tmp931), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp933, tmp936), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3030]] /* vehicle.frontSuspension.frame_bL.R.T[1,3] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp938, tmp941), 0, 1) + ((data->simulationInfo->realParameter[3594] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp943, tmp946), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3033]] /* vehicle.frontSuspension.frame_bL.R.T[2,3] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp948, tmp951), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp953, tmp956), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3593] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3036]] /* vehicle.frontSuspension.frame_bL.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8208(DATA *data, threadData_t *threadData);


/*
equation index: 3925
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.frame_a.r_0[2] = vehicle.frontSuspension.cornerL.jointUSR.frame_ia.r_0[2] + 0.02 * vehicle.frontSuspension.frame_bL.R.T[1,2] + (-0.15000000000000002) * vehicle.frontSuspension.frame_bL.R.T[2,2] + 0.2 * vehicle.frontSuspension.frame_bL.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3925};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2069]] /* vehicle.frontSuspension.cornerL.upright.frame_a.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1430]] /* vehicle.frontSuspension.cornerL.jointUSR.frame_ia.r_0[2] DUMMY_STATE */) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3029]] /* vehicle.frontSuspension.frame_bL.R.T[1,2] DUMMY_STATE */)) + (-0.15000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3032]] /* vehicle.frontSuspension.frame_bL.R.T[2,2] DUMMY_STATE */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3035]] /* vehicle.frontSuspension.frame_bL.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3926
type: SIMPLE_ASSIGN
vehicle.wheelFL.contactPatch.frame_a.r_0[2] = vehicle.frontSuspension.cornerL.upright.frame_a.r_0[2]
*/
void AlyssaVehicle_eqFunction_3926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3926};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5080]] /* vehicle.wheelFL.contactPatch.frame_a.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2069]] /* vehicle.frontSuspension.cornerL.upright.frame_a.r_0[2] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8219(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8220(DATA *data, threadData_t *threadData);


/*
equation index: 3929
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,2] = ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelFL.rim.rotor1D.phi) - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[1,2] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelFL.rim.rotor1D.phi) - vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[2,2] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3929};
  real_array tmp957;
  real_array tmp958;
  real_array tmp959;
  real_array tmp960;
  real_array tmp961;
  real_array tmp962;
  real_array tmp963;
  real_array tmp964;
  real_array tmp965;
  real_array tmp966;
  real_array tmp967;
  real_array tmp968;
  real_array tmp969;
  real_array tmp970;
  real_array tmp971;
  real_array tmp972;
  real_array tmp973;
  real_array tmp974;
  real_array tmp975;
  real_array tmp976;
  real_array tmp977;
  real_array tmp978;
  real_array tmp979;
  real_array tmp980;
  real_array tmp981;
  real_array tmp982;
  real_array tmp983;
  real_array tmp984;
  real_array tmp985;
  real_array tmp986;
  real_array_create(&tmp957, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp957, ((modelica_integer) 2) - ndims_base_array(&tmp957), &tmp958);
  real_array_create(&tmp959, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp959, ((modelica_integer) 2) - ndims_base_array(&tmp959), &tmp960);
  transpose_alloc_real_array(&tmp960, &tmp961);
  real_array_create(&tmp962, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp962, ((modelica_integer) 2) - ndims_base_array(&tmp962), &tmp963);
  real_array_create(&tmp964, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp964, ((modelica_integer) 2) - ndims_base_array(&tmp964), &tmp965);
  transpose_alloc_real_array(&tmp965, &tmp966);
  real_array_create(&tmp967, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp967, ((modelica_integer) 2) - ndims_base_array(&tmp967), &tmp968);
  real_array_create(&tmp969, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp969, ((modelica_integer) 2) - ndims_base_array(&tmp969), &tmp970);
  transpose_alloc_real_array(&tmp970, &tmp971);
  real_array_create(&tmp972, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp972, ((modelica_integer) 2) - ndims_base_array(&tmp972), &tmp973);
  real_array_create(&tmp974, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp974, ((modelica_integer) 2) - ndims_base_array(&tmp974), &tmp975);
  transpose_alloc_real_array(&tmp975, &tmp976);
  real_array_create(&tmp977, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp977, ((modelica_integer) 2) - ndims_base_array(&tmp977), &tmp978);
  real_array_create(&tmp979, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp979, ((modelica_integer) 2) - ndims_base_array(&tmp979), &tmp980);
  transpose_alloc_real_array(&tmp980, &tmp981);
  real_array_create(&tmp982, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp982, ((modelica_integer) 2) - ndims_base_array(&tmp982), &tmp983);
  real_array_create(&tmp984, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp984, ((modelica_integer) 2) - ndims_base_array(&tmp984), &tmp985);
  transpose_alloc_real_array(&tmp985, &tmp986);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5134]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp958, tmp961), 2, 0) + ((data->simulationInfo->realParameter[3593] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp963, tmp966), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3029]] /* vehicle.frontSuspension.frame_bL.R.T[1,2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp968, tmp971), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp973, tmp976), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3032]] /* vehicle.frontSuspension.frame_bL.R.T[2,2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp978, tmp981), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp983, tmp986), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3035]] /* vehicle.frontSuspension.frame_bL.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3930
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,2] = ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelFL.rim.rotor1D.phi) - vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[1,2] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[2,2] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelFL.rim.rotor1D.phi) - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3930};
  real_array tmp987;
  real_array tmp988;
  real_array tmp989;
  real_array tmp990;
  real_array tmp991;
  real_array tmp992;
  real_array tmp993;
  real_array tmp994;
  real_array tmp995;
  real_array tmp996;
  real_array tmp997;
  real_array tmp998;
  real_array tmp999;
  real_array tmp1000;
  real_array tmp1001;
  real_array tmp1002;
  real_array tmp1003;
  real_array tmp1004;
  real_array tmp1005;
  real_array tmp1006;
  real_array tmp1007;
  real_array tmp1008;
  real_array tmp1009;
  real_array tmp1010;
  real_array tmp1011;
  real_array tmp1012;
  real_array tmp1013;
  real_array tmp1014;
  real_array tmp1015;
  real_array tmp1016;
  real_array_create(&tmp987, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp987, ((modelica_integer) 2) - ndims_base_array(&tmp987), &tmp988);
  real_array_create(&tmp989, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp989, ((modelica_integer) 2) - ndims_base_array(&tmp989), &tmp990);
  transpose_alloc_real_array(&tmp990, &tmp991);
  real_array_create(&tmp992, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp992, ((modelica_integer) 2) - ndims_base_array(&tmp992), &tmp993);
  real_array_create(&tmp994, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp994, ((modelica_integer) 2) - ndims_base_array(&tmp994), &tmp995);
  transpose_alloc_real_array(&tmp995, &tmp996);
  real_array_create(&tmp997, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp997, ((modelica_integer) 2) - ndims_base_array(&tmp997), &tmp998);
  real_array_create(&tmp999, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp999, ((modelica_integer) 2) - ndims_base_array(&tmp999), &tmp1000);
  transpose_alloc_real_array(&tmp1000, &tmp1001);
  real_array_create(&tmp1002, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1002, ((modelica_integer) 2) - ndims_base_array(&tmp1002), &tmp1003);
  real_array_create(&tmp1004, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1004, ((modelica_integer) 2) - ndims_base_array(&tmp1004), &tmp1005);
  transpose_alloc_real_array(&tmp1005, &tmp1006);
  real_array_create(&tmp1007, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1007, ((modelica_integer) 2) - ndims_base_array(&tmp1007), &tmp1008);
  real_array_create(&tmp1009, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1009, ((modelica_integer) 2) - ndims_base_array(&tmp1009), &tmp1010);
  transpose_alloc_real_array(&tmp1010, &tmp1011);
  real_array_create(&tmp1012, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1012, ((modelica_integer) 2) - ndims_base_array(&tmp1012), &tmp1013);
  real_array_create(&tmp1014, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1014, ((modelica_integer) 2) - ndims_base_array(&tmp1014), &tmp1015);
  transpose_alloc_real_array(&tmp1015, &tmp1016);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5131]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp988, tmp991), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp993, tmp996), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3594] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3029]] /* vehicle.frontSuspension.frame_bL.R.T[1,2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp998, tmp1001), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1003, tmp1006), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3032]] /* vehicle.frontSuspension.frame_bL.R.T[2,2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1008, tmp1011), 1, 2) + ((data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1013, tmp1016), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3035]] /* vehicle.frontSuspension.frame_bL.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3931
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,2] = ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[1,2] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelFL.rim.rotor1D.phi) - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[2,2] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelFL.rim.rotor1D.phi) - vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_3931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3931};
  real_array tmp1017;
  real_array tmp1018;
  real_array tmp1019;
  real_array tmp1020;
  real_array tmp1021;
  real_array tmp1022;
  real_array tmp1023;
  real_array tmp1024;
  real_array tmp1025;
  real_array tmp1026;
  real_array tmp1027;
  real_array tmp1028;
  real_array tmp1029;
  real_array tmp1030;
  real_array tmp1031;
  real_array tmp1032;
  real_array tmp1033;
  real_array tmp1034;
  real_array tmp1035;
  real_array tmp1036;
  real_array tmp1037;
  real_array tmp1038;
  real_array tmp1039;
  real_array tmp1040;
  real_array tmp1041;
  real_array tmp1042;
  real_array tmp1043;
  real_array tmp1044;
  real_array tmp1045;
  real_array tmp1046;
  real_array_create(&tmp1017, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1017, ((modelica_integer) 2) - ndims_base_array(&tmp1017), &tmp1018);
  real_array_create(&tmp1019, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1019, ((modelica_integer) 2) - ndims_base_array(&tmp1019), &tmp1020);
  transpose_alloc_real_array(&tmp1020, &tmp1021);
  real_array_create(&tmp1022, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1022, ((modelica_integer) 2) - ndims_base_array(&tmp1022), &tmp1023);
  real_array_create(&tmp1024, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1024, ((modelica_integer) 2) - ndims_base_array(&tmp1024), &tmp1025);
  transpose_alloc_real_array(&tmp1025, &tmp1026);
  real_array_create(&tmp1027, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1027, ((modelica_integer) 2) - ndims_base_array(&tmp1027), &tmp1028);
  real_array_create(&tmp1029, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1029, ((modelica_integer) 2) - ndims_base_array(&tmp1029), &tmp1030);
  transpose_alloc_real_array(&tmp1030, &tmp1031);
  real_array_create(&tmp1032, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1032, ((modelica_integer) 2) - ndims_base_array(&tmp1032), &tmp1033);
  real_array_create(&tmp1034, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1034, ((modelica_integer) 2) - ndims_base_array(&tmp1034), &tmp1035);
  transpose_alloc_real_array(&tmp1035, &tmp1036);
  real_array_create(&tmp1037, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1037, ((modelica_integer) 2) - ndims_base_array(&tmp1037), &tmp1038);
  real_array_create(&tmp1039, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1039, ((modelica_integer) 2) - ndims_base_array(&tmp1039), &tmp1040);
  transpose_alloc_real_array(&tmp1040, &tmp1041);
  real_array_create(&tmp1042, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1042, ((modelica_integer) 2) - ndims_base_array(&tmp1042), &tmp1043);
  real_array_create(&tmp1044, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1044, ((modelica_integer) 2) - ndims_base_array(&tmp1044), &tmp1045);
  transpose_alloc_real_array(&tmp1045, &tmp1046);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5128]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1018, tmp1021), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1023, tmp1026), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3029]] /* vehicle.frontSuspension.frame_bL.R.T[1,2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1028, tmp1031), 0, 1) + ((data->simulationInfo->realParameter[3594] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1033, tmp1036), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3032]] /* vehicle.frontSuspension.frame_bL.R.T[2,2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1038, tmp1041), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp1043, tmp1046), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3593] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3035]] /* vehicle.frontSuspension.frame_bL.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8209(DATA *data, threadData_t *threadData);


/*
equation index: 3933
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.upright.frame_a.r_0[1] = vehicle.frontSuspension.cornerL.jointUSR.frame_ia.r_0[1] + 0.02 * vehicle.frontSuspension.frame_bL.R.T[1,1] + (-0.15000000000000002) * vehicle.frontSuspension.frame_bL.R.T[2,1] + 0.2 * vehicle.frontSuspension.frame_bL.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3933};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2068]] /* vehicle.frontSuspension.cornerL.upright.frame_a.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1429]] /* vehicle.frontSuspension.cornerL.jointUSR.frame_ia.r_0[1] DUMMY_STATE */) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3028]] /* vehicle.frontSuspension.frame_bL.R.T[1,1] variable */)) + (-0.15000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3031]] /* vehicle.frontSuspension.frame_bL.R.T[2,1] DUMMY_STATE */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3034]] /* vehicle.frontSuspension.frame_bL.R.T[3,1] variable */));
  TRACE_POP
}

/*
equation index: 3934
type: SIMPLE_ASSIGN
vehicle.wheelFL.contactPatch.frame_a.r_0[1] = vehicle.frontSuspension.cornerL.upright.frame_a.r_0[1]
*/
void AlyssaVehicle_eqFunction_3934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3934};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5079]] /* vehicle.wheelFL.contactPatch.frame_a.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2068]] /* vehicle.frontSuspension.cornerL.upright.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8241(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8240(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8239(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8230(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8229(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8228(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8222(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8223(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8253(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8254(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8256(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8255(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8249(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8250(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8252(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8251(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8245(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8246(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8260(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8248(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8247(DATA *data, threadData_t *threadData);


/*
equation index: 3956
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,1] = ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelFL.rim.rotor1D.phi) - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[1,1] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelFL.rim.rotor1D.phi) - vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[2,1] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3956};
  real_array tmp1047;
  real_array tmp1048;
  real_array tmp1049;
  real_array tmp1050;
  real_array tmp1051;
  real_array tmp1052;
  real_array tmp1053;
  real_array tmp1054;
  real_array tmp1055;
  real_array tmp1056;
  real_array tmp1057;
  real_array tmp1058;
  real_array tmp1059;
  real_array tmp1060;
  real_array tmp1061;
  real_array tmp1062;
  real_array tmp1063;
  real_array tmp1064;
  real_array tmp1065;
  real_array tmp1066;
  real_array tmp1067;
  real_array tmp1068;
  real_array tmp1069;
  real_array tmp1070;
  real_array tmp1071;
  real_array tmp1072;
  real_array tmp1073;
  real_array tmp1074;
  real_array tmp1075;
  real_array tmp1076;
  real_array_create(&tmp1047, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1047, ((modelica_integer) 2) - ndims_base_array(&tmp1047), &tmp1048);
  real_array_create(&tmp1049, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1049, ((modelica_integer) 2) - ndims_base_array(&tmp1049), &tmp1050);
  transpose_alloc_real_array(&tmp1050, &tmp1051);
  real_array_create(&tmp1052, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1052, ((modelica_integer) 2) - ndims_base_array(&tmp1052), &tmp1053);
  real_array_create(&tmp1054, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1054, ((modelica_integer) 2) - ndims_base_array(&tmp1054), &tmp1055);
  transpose_alloc_real_array(&tmp1055, &tmp1056);
  real_array_create(&tmp1057, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1057, ((modelica_integer) 2) - ndims_base_array(&tmp1057), &tmp1058);
  real_array_create(&tmp1059, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1059, ((modelica_integer) 2) - ndims_base_array(&tmp1059), &tmp1060);
  transpose_alloc_real_array(&tmp1060, &tmp1061);
  real_array_create(&tmp1062, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1062, ((modelica_integer) 2) - ndims_base_array(&tmp1062), &tmp1063);
  real_array_create(&tmp1064, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1064, ((modelica_integer) 2) - ndims_base_array(&tmp1064), &tmp1065);
  transpose_alloc_real_array(&tmp1065, &tmp1066);
  real_array_create(&tmp1067, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1067, ((modelica_integer) 2) - ndims_base_array(&tmp1067), &tmp1068);
  real_array_create(&tmp1069, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1069, ((modelica_integer) 2) - ndims_base_array(&tmp1069), &tmp1070);
  transpose_alloc_real_array(&tmp1070, &tmp1071);
  real_array_create(&tmp1072, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1072, ((modelica_integer) 2) - ndims_base_array(&tmp1072), &tmp1073);
  real_array_create(&tmp1074, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1074, ((modelica_integer) 2) - ndims_base_array(&tmp1074), &tmp1075);
  transpose_alloc_real_array(&tmp1075, &tmp1076);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5133]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1048, tmp1051), 2, 0) + ((data->simulationInfo->realParameter[3593] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1053, tmp1056), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3028]] /* vehicle.frontSuspension.frame_bL.R.T[1,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1058, tmp1061), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp1063, tmp1066), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3031]] /* vehicle.frontSuspension.frame_bL.R.T[2,1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1068, tmp1071), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1073, tmp1076), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3034]] /* vehicle.frontSuspension.frame_bL.R.T[3,1] variable */));
  TRACE_POP
}

/*
equation index: 3957
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,1] = ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelFL.rim.rotor1D.phi) - vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[1,1] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[2,1] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelFL.rim.rotor1D.phi) - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3957};
  real_array tmp1077;
  real_array tmp1078;
  real_array tmp1079;
  real_array tmp1080;
  real_array tmp1081;
  real_array tmp1082;
  real_array tmp1083;
  real_array tmp1084;
  real_array tmp1085;
  real_array tmp1086;
  real_array tmp1087;
  real_array tmp1088;
  real_array tmp1089;
  real_array tmp1090;
  real_array tmp1091;
  real_array tmp1092;
  real_array tmp1093;
  real_array tmp1094;
  real_array tmp1095;
  real_array tmp1096;
  real_array tmp1097;
  real_array tmp1098;
  real_array tmp1099;
  real_array tmp1100;
  real_array tmp1101;
  real_array tmp1102;
  real_array tmp1103;
  real_array tmp1104;
  real_array tmp1105;
  real_array tmp1106;
  real_array_create(&tmp1077, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1077, ((modelica_integer) 2) - ndims_base_array(&tmp1077), &tmp1078);
  real_array_create(&tmp1079, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1079, ((modelica_integer) 2) - ndims_base_array(&tmp1079), &tmp1080);
  transpose_alloc_real_array(&tmp1080, &tmp1081);
  real_array_create(&tmp1082, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1082, ((modelica_integer) 2) - ndims_base_array(&tmp1082), &tmp1083);
  real_array_create(&tmp1084, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1084, ((modelica_integer) 2) - ndims_base_array(&tmp1084), &tmp1085);
  transpose_alloc_real_array(&tmp1085, &tmp1086);
  real_array_create(&tmp1087, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1087, ((modelica_integer) 2) - ndims_base_array(&tmp1087), &tmp1088);
  real_array_create(&tmp1089, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1089, ((modelica_integer) 2) - ndims_base_array(&tmp1089), &tmp1090);
  transpose_alloc_real_array(&tmp1090, &tmp1091);
  real_array_create(&tmp1092, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1092, ((modelica_integer) 2) - ndims_base_array(&tmp1092), &tmp1093);
  real_array_create(&tmp1094, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1094, ((modelica_integer) 2) - ndims_base_array(&tmp1094), &tmp1095);
  transpose_alloc_real_array(&tmp1095, &tmp1096);
  real_array_create(&tmp1097, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1097, ((modelica_integer) 2) - ndims_base_array(&tmp1097), &tmp1098);
  real_array_create(&tmp1099, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1099, ((modelica_integer) 2) - ndims_base_array(&tmp1099), &tmp1100);
  transpose_alloc_real_array(&tmp1100, &tmp1101);
  real_array_create(&tmp1102, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1102, ((modelica_integer) 2) - ndims_base_array(&tmp1102), &tmp1103);
  real_array_create(&tmp1104, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1104, ((modelica_integer) 2) - ndims_base_array(&tmp1104), &tmp1105);
  transpose_alloc_real_array(&tmp1105, &tmp1106);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5130]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1078, tmp1081), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp1083, tmp1086), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3594] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3028]] /* vehicle.frontSuspension.frame_bL.R.T[1,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1088, tmp1091), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1093, tmp1096), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3031]] /* vehicle.frontSuspension.frame_bL.R.T[2,1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1098, tmp1101), 1, 2) + ((data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1103, tmp1106), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3034]] /* vehicle.frontSuspension.frame_bL.R.T[3,1] variable */));
  TRACE_POP
}

/*
equation index: 3958
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,1] = ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[1,1] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelFL.rim.rotor1D.phi) - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[2,1] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelFL.rim.rotor1D.phi) - vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bL.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_3958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3958};
  real_array tmp1107;
  real_array tmp1108;
  real_array tmp1109;
  real_array tmp1110;
  real_array tmp1111;
  real_array tmp1112;
  real_array tmp1113;
  real_array tmp1114;
  real_array tmp1115;
  real_array tmp1116;
  real_array tmp1117;
  real_array tmp1118;
  real_array tmp1119;
  real_array tmp1120;
  real_array tmp1121;
  real_array tmp1122;
  real_array tmp1123;
  real_array tmp1124;
  real_array tmp1125;
  real_array tmp1126;
  real_array tmp1127;
  real_array tmp1128;
  real_array tmp1129;
  real_array tmp1130;
  real_array tmp1131;
  real_array tmp1132;
  real_array tmp1133;
  real_array tmp1134;
  real_array tmp1135;
  real_array tmp1136;
  real_array_create(&tmp1107, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1107, ((modelica_integer) 2) - ndims_base_array(&tmp1107), &tmp1108);
  real_array_create(&tmp1109, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1109, ((modelica_integer) 2) - ndims_base_array(&tmp1109), &tmp1110);
  transpose_alloc_real_array(&tmp1110, &tmp1111);
  real_array_create(&tmp1112, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1112, ((modelica_integer) 2) - ndims_base_array(&tmp1112), &tmp1113);
  real_array_create(&tmp1114, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1114, ((modelica_integer) 2) - ndims_base_array(&tmp1114), &tmp1115);
  transpose_alloc_real_array(&tmp1115, &tmp1116);
  real_array_create(&tmp1117, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1117, ((modelica_integer) 2) - ndims_base_array(&tmp1117), &tmp1118);
  real_array_create(&tmp1119, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1119, ((modelica_integer) 2) - ndims_base_array(&tmp1119), &tmp1120);
  transpose_alloc_real_array(&tmp1120, &tmp1121);
  real_array_create(&tmp1122, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1122, ((modelica_integer) 2) - ndims_base_array(&tmp1122), &tmp1123);
  real_array_create(&tmp1124, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1124, ((modelica_integer) 2) - ndims_base_array(&tmp1124), &tmp1125);
  transpose_alloc_real_array(&tmp1125, &tmp1126);
  real_array_create(&tmp1127, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1127, ((modelica_integer) 2) - ndims_base_array(&tmp1127), &tmp1128);
  real_array_create(&tmp1129, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1129, ((modelica_integer) 2) - ndims_base_array(&tmp1129), &tmp1130);
  transpose_alloc_real_array(&tmp1130, &tmp1131);
  real_array_create(&tmp1132, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1132, ((modelica_integer) 2) - ndims_base_array(&tmp1132), &tmp1133);
  real_array_create(&tmp1134, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1134, ((modelica_integer) 2) - ndims_base_array(&tmp1134), &tmp1135);
  transpose_alloc_real_array(&tmp1135, &tmp1136);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5127]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1108, tmp1111), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1113, tmp1116), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3028]] /* vehicle.frontSuspension.frame_bL.R.T[1,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1118, tmp1121), 0, 1) + ((data->simulationInfo->realParameter[3594] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1123, tmp1126), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3031]] /* vehicle.frontSuspension.frame_bL.R.T[2,1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1128, tmp1131), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp1133, tmp1136), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3593] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3034]] /* vehicle.frontSuspension.frame_bL.R.T[3,1] variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8226(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8343(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8345(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8348(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8364(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8394(DATA *data, threadData_t *threadData);


/*
equation index: 3965
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.R_rel.w[3] = vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[3] + (-vehicle.frontSuspension.frame_bL.R.T[3,2]) * (vehicle.chassisFrame.R.T[1,2] * vehicle.vehicleBody.body.w_a[1] + vehicle.chassisFrame.R.T[2,2] * vehicle.vehicleBody.body.w_a[2] + vehicle.chassisFrame.R.T[3,2] * vehicle.vehicleBody.body.w_a[3]) - vehicle.frontSuspension.frame_bL.R.T[3,3] * (vehicle.chassisFrame.R.T[1,3] * vehicle.vehicleBody.body.w_a[1] + vehicle.chassisFrame.R.T[2,3] * vehicle.vehicleBody.body.w_a[2] + vehicle.chassisFrame.R.T[3,3] * vehicle.vehicleBody.body.w_a[3]) - vehicle.frontSuspension.frame_bL.R.T[3,1] * (vehicle.chassisFrame.R.T[1,1] * vehicle.vehicleBody.body.w_a[1] + vehicle.chassisFrame.R.T[2,1] * vehicle.vehicleBody.body.w_a[2] + vehicle.chassisFrame.R.T[3,1] * vehicle.vehicleBody.body.w_a[3])
*/
void AlyssaVehicle_eqFunction_3965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3965};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2119]] /* vehicle.frontSuspension.cornerL.wheelAngles.R_rel.w[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5157]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3035]] /* vehicle.frontSuspension.frame_bL.R.T[3,2] DUMMY_STATE */))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* vehicle.chassisFrame.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5035]] /* vehicle.vehicleBody.body.w_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3036]] /* vehicle.frontSuspension.frame_bL.R.T[3,3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1313]] /* vehicle.chassisFrame.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5035]] /* vehicle.vehicleBody.body.w_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */)))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3034]] /* vehicle.frontSuspension.frame_bL.R.T[3,1] variable */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* vehicle.chassisFrame.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5035]] /* vehicle.vehicleBody.body.w_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8347(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8361(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8363(DATA *data, threadData_t *threadData);


/*
equation index: 3969
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.R_rel.w[2] = vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[2] + (-vehicle.frontSuspension.frame_bL.R.T[2,2]) * (vehicle.chassisFrame.R.T[1,2] * vehicle.vehicleBody.body.w_a[1] + vehicle.chassisFrame.R.T[2,2] * vehicle.vehicleBody.body.w_a[2] + vehicle.chassisFrame.R.T[3,2] * vehicle.vehicleBody.body.w_a[3]) - vehicle.frontSuspension.frame_bL.R.T[2,3] * (vehicle.chassisFrame.R.T[1,3] * vehicle.vehicleBody.body.w_a[1] + vehicle.chassisFrame.R.T[2,3] * vehicle.vehicleBody.body.w_a[2] + vehicle.chassisFrame.R.T[3,3] * vehicle.vehicleBody.body.w_a[3]) - vehicle.frontSuspension.frame_bL.R.T[2,1] * (vehicle.chassisFrame.R.T[1,1] * vehicle.vehicleBody.body.w_a[1] + vehicle.chassisFrame.R.T[2,1] * vehicle.vehicleBody.body.w_a[2] + vehicle.chassisFrame.R.T[3,1] * vehicle.vehicleBody.body.w_a[3])
*/
void AlyssaVehicle_eqFunction_3969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3969};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2118]] /* vehicle.frontSuspension.cornerL.wheelAngles.R_rel.w[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5156]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3032]] /* vehicle.frontSuspension.frame_bL.R.T[2,2] DUMMY_STATE */))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* vehicle.chassisFrame.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5035]] /* vehicle.vehicleBody.body.w_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3033]] /* vehicle.frontSuspension.frame_bL.R.T[2,3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1313]] /* vehicle.chassisFrame.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5035]] /* vehicle.vehicleBody.body.w_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */)))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3031]] /* vehicle.frontSuspension.frame_bL.R.T[2,1] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* vehicle.chassisFrame.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5035]] /* vehicle.vehicleBody.body.w_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8346(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8358(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8360(DATA *data, threadData_t *threadData);


/*
equation index: 3973
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerL.wheelAngles.R_rel.w[1] = vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[1] + (-vehicle.frontSuspension.frame_bL.R.T[1,2]) * (vehicle.chassisFrame.R.T[1,2] * vehicle.vehicleBody.body.w_a[1] + vehicle.chassisFrame.R.T[2,2] * vehicle.vehicleBody.body.w_a[2] + vehicle.chassisFrame.R.T[3,2] * vehicle.vehicleBody.body.w_a[3]) - vehicle.frontSuspension.frame_bL.R.T[1,3] * (vehicle.chassisFrame.R.T[1,3] * vehicle.vehicleBody.body.w_a[1] + vehicle.chassisFrame.R.T[2,3] * vehicle.vehicleBody.body.w_a[2] + vehicle.chassisFrame.R.T[3,3] * vehicle.vehicleBody.body.w_a[3]) - vehicle.frontSuspension.frame_bL.R.T[1,1] * (vehicle.chassisFrame.R.T[1,1] * vehicle.vehicleBody.body.w_a[1] + vehicle.chassisFrame.R.T[2,1] * vehicle.vehicleBody.body.w_a[2] + vehicle.chassisFrame.R.T[3,1] * vehicle.vehicleBody.body.w_a[3])
*/
void AlyssaVehicle_eqFunction_3973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3973};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2117]] /* vehicle.frontSuspension.cornerL.wheelAngles.R_rel.w[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5155]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3029]] /* vehicle.frontSuspension.frame_bL.R.T[1,2] DUMMY_STATE */))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* vehicle.chassisFrame.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5035]] /* vehicle.vehicleBody.body.w_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3030]] /* vehicle.frontSuspension.frame_bL.R.T[1,3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1313]] /* vehicle.chassisFrame.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5035]] /* vehicle.vehicleBody.body.w_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */)))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3028]] /* vehicle.frontSuspension.frame_bL.R.T[1,1] variable */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* vehicle.chassisFrame.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5035]] /* vehicle.vehicleBody.body.w_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 3974
type: LINEAR

<var>vehicle.frontSuspension.cornerL.wheelAngles.angles[3]</var>
<var>vehicle.frontSuspension.cornerL.camber</var>
<var>vehicle.frontSuspension.cornerL.toe</var>
<row>
  <cell>Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(vehicle.frontSuspension.cornerL.wheelAngles.R_rel, {3, 1, 2}, vehicle.frontSuspension.cornerL.wheelAngles.guessAngle1)[1]</cell>
  <cell>Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(vehicle.frontSuspension.cornerL.wheelAngles.R_rel, {3, 1, 2}, vehicle.frontSuspension.cornerL.wheelAngles.guessAngle1)[2]</cell>
  <cell>Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(vehicle.frontSuspension.cornerL.wheelAngles.R_rel, {3, 1, 2}, vehicle.frontSuspension.cornerL.wheelAngles.guessAngle1)[3]</cell>
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
void AlyssaVehicle_eqFunction_3974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3974};
  /* Linear equation system */
  int retValue;
  double aux_x[3] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2120]] /* vehicle.frontSuspension.cornerL.wheelAngles.angles[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1320]] /* vehicle.frontSuspension.cornerL.camber variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1977]] /* vehicle.frontSuspension.cornerL.toe variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 3974 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 6, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3974};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 3974 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2120]] /* vehicle.frontSuspension.cornerL.wheelAngles.angles[3] variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1320]] /* vehicle.frontSuspension.cornerL.camber variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1977]] /* vehicle.frontSuspension.cornerL.toe variable */) = aux_x[2];

  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8382(DATA *data, threadData_t *threadData);


/*
equation index: 3976
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[3] = ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelFL.rim.rotor1D.phi) - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[1] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelFL.rim.rotor1D.phi) - vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[2] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[3]
*/
void AlyssaVehicle_eqFunction_3976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3976};
  real_array tmp1137;
  real_array tmp1138;
  real_array tmp1139;
  real_array tmp1140;
  real_array tmp1141;
  real_array tmp1142;
  real_array tmp1143;
  real_array tmp1144;
  real_array tmp1145;
  real_array tmp1146;
  real_array tmp1147;
  real_array tmp1148;
  real_array tmp1149;
  real_array tmp1150;
  real_array tmp1151;
  real_array tmp1152;
  real_array tmp1153;
  real_array tmp1154;
  real_array tmp1155;
  real_array tmp1156;
  real_array tmp1157;
  real_array tmp1158;
  real_array tmp1159;
  real_array tmp1160;
  real_array tmp1161;
  real_array tmp1162;
  real_array tmp1163;
  real_array tmp1164;
  real_array tmp1165;
  real_array tmp1166;
  real_array_create(&tmp1137, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1137, ((modelica_integer) 2) - ndims_base_array(&tmp1137), &tmp1138);
  real_array_create(&tmp1139, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1139, ((modelica_integer) 2) - ndims_base_array(&tmp1139), &tmp1140);
  transpose_alloc_real_array(&tmp1140, &tmp1141);
  real_array_create(&tmp1142, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1142, ((modelica_integer) 2) - ndims_base_array(&tmp1142), &tmp1143);
  real_array_create(&tmp1144, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1144, ((modelica_integer) 2) - ndims_base_array(&tmp1144), &tmp1145);
  transpose_alloc_real_array(&tmp1145, &tmp1146);
  real_array_create(&tmp1147, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1147, ((modelica_integer) 2) - ndims_base_array(&tmp1147), &tmp1148);
  real_array_create(&tmp1149, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1149, ((modelica_integer) 2) - ndims_base_array(&tmp1149), &tmp1150);
  transpose_alloc_real_array(&tmp1150, &tmp1151);
  real_array_create(&tmp1152, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1152, ((modelica_integer) 2) - ndims_base_array(&tmp1152), &tmp1153);
  real_array_create(&tmp1154, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1154, ((modelica_integer) 2) - ndims_base_array(&tmp1154), &tmp1155);
  transpose_alloc_real_array(&tmp1155, &tmp1156);
  real_array_create(&tmp1157, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1157, ((modelica_integer) 2) - ndims_base_array(&tmp1157), &tmp1158);
  real_array_create(&tmp1159, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1159, ((modelica_integer) 2) - ndims_base_array(&tmp1159), &tmp1160);
  transpose_alloc_real_array(&tmp1160, &tmp1161);
  real_array_create(&tmp1162, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1162, ((modelica_integer) 2) - ndims_base_array(&tmp1162), &tmp1163);
  real_array_create(&tmp1164, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1164, ((modelica_integer) 2) - ndims_base_array(&tmp1164), &tmp1165);
  transpose_alloc_real_array(&tmp1165, &tmp1166);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5138]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1138, tmp1141), 2, 0) + ((data->simulationInfo->realParameter[3593] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1143, tmp1146), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5155]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1148, tmp1151), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp1153, tmp1156), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5156]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1158, tmp1161), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1163, tmp1166), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5157]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3977
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[2] = ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelFL.rim.rotor1D.phi) - vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[1] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[2] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelFL.rim.rotor1D.phi) - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[3]
*/
void AlyssaVehicle_eqFunction_3977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3977};
  real_array tmp1167;
  real_array tmp1168;
  real_array tmp1169;
  real_array tmp1170;
  real_array tmp1171;
  real_array tmp1172;
  real_array tmp1173;
  real_array tmp1174;
  real_array tmp1175;
  real_array tmp1176;
  real_array tmp1177;
  real_array tmp1178;
  real_array tmp1179;
  real_array tmp1180;
  real_array tmp1181;
  real_array tmp1182;
  real_array tmp1183;
  real_array tmp1184;
  real_array tmp1185;
  real_array tmp1186;
  real_array tmp1187;
  real_array tmp1188;
  real_array tmp1189;
  real_array tmp1190;
  real_array tmp1191;
  real_array tmp1192;
  real_array tmp1193;
  real_array tmp1194;
  real_array tmp1195;
  real_array tmp1196;
  real_array_create(&tmp1167, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1167, ((modelica_integer) 2) - ndims_base_array(&tmp1167), &tmp1168);
  real_array_create(&tmp1169, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1169, ((modelica_integer) 2) - ndims_base_array(&tmp1169), &tmp1170);
  transpose_alloc_real_array(&tmp1170, &tmp1171);
  real_array_create(&tmp1172, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1172, ((modelica_integer) 2) - ndims_base_array(&tmp1172), &tmp1173);
  real_array_create(&tmp1174, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1174, ((modelica_integer) 2) - ndims_base_array(&tmp1174), &tmp1175);
  transpose_alloc_real_array(&tmp1175, &tmp1176);
  real_array_create(&tmp1177, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1177, ((modelica_integer) 2) - ndims_base_array(&tmp1177), &tmp1178);
  real_array_create(&tmp1179, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1179, ((modelica_integer) 2) - ndims_base_array(&tmp1179), &tmp1180);
  transpose_alloc_real_array(&tmp1180, &tmp1181);
  real_array_create(&tmp1182, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1182, ((modelica_integer) 2) - ndims_base_array(&tmp1182), &tmp1183);
  real_array_create(&tmp1184, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1184, ((modelica_integer) 2) - ndims_base_array(&tmp1184), &tmp1185);
  transpose_alloc_real_array(&tmp1185, &tmp1186);
  real_array_create(&tmp1187, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1187, ((modelica_integer) 2) - ndims_base_array(&tmp1187), &tmp1188);
  real_array_create(&tmp1189, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1189, ((modelica_integer) 2) - ndims_base_array(&tmp1189), &tmp1190);
  transpose_alloc_real_array(&tmp1190, &tmp1191);
  real_array_create(&tmp1192, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1192, ((modelica_integer) 2) - ndims_base_array(&tmp1192), &tmp1193);
  real_array_create(&tmp1194, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1194, ((modelica_integer) 2) - ndims_base_array(&tmp1194), &tmp1195);
  transpose_alloc_real_array(&tmp1195, &tmp1196);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5137]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1168, tmp1171), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp1173, tmp1176), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3594] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5155]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1178, tmp1181), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1183, tmp1186), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5156]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1188, tmp1191), 1, 2) + ((data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1193, tmp1196), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5157]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3978
type: SIMPLE_ASSIGN
vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[1] = ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[1] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelFL.rim.rotor1D.phi) - (promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[2] + ((promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelFL.rim.rotor1D.phi) - vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelFL.rim.rotor1D.phi)) * vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[3]
*/
void AlyssaVehicle_eqFunction_3978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3978};
  real_array tmp1197;
  real_array tmp1198;
  real_array tmp1199;
  real_array tmp1200;
  real_array tmp1201;
  real_array tmp1202;
  real_array tmp1203;
  real_array tmp1204;
  real_array tmp1205;
  real_array tmp1206;
  real_array tmp1207;
  real_array tmp1208;
  real_array tmp1209;
  real_array tmp1210;
  real_array tmp1211;
  real_array tmp1212;
  real_array tmp1213;
  real_array tmp1214;
  real_array tmp1215;
  real_array tmp1216;
  real_array tmp1217;
  real_array tmp1218;
  real_array tmp1219;
  real_array tmp1220;
  real_array tmp1221;
  real_array tmp1222;
  real_array tmp1223;
  real_array tmp1224;
  real_array tmp1225;
  real_array tmp1226;
  real_array_create(&tmp1197, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1197, ((modelica_integer) 2) - ndims_base_array(&tmp1197), &tmp1198);
  real_array_create(&tmp1199, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1199, ((modelica_integer) 2) - ndims_base_array(&tmp1199), &tmp1200);
  transpose_alloc_real_array(&tmp1200, &tmp1201);
  real_array_create(&tmp1202, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1202, ((modelica_integer) 2) - ndims_base_array(&tmp1202), &tmp1203);
  real_array_create(&tmp1204, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1204, ((modelica_integer) 2) - ndims_base_array(&tmp1204), &tmp1205);
  transpose_alloc_real_array(&tmp1205, &tmp1206);
  real_array_create(&tmp1207, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1207, ((modelica_integer) 2) - ndims_base_array(&tmp1207), &tmp1208);
  real_array_create(&tmp1209, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1209, ((modelica_integer) 2) - ndims_base_array(&tmp1209), &tmp1210);
  transpose_alloc_real_array(&tmp1210, &tmp1211);
  real_array_create(&tmp1212, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1212, ((modelica_integer) 2) - ndims_base_array(&tmp1212), &tmp1213);
  real_array_create(&tmp1214, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1214, ((modelica_integer) 2) - ndims_base_array(&tmp1214), &tmp1215);
  transpose_alloc_real_array(&tmp1215, &tmp1216);
  real_array_create(&tmp1217, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1217, ((modelica_integer) 2) - ndims_base_array(&tmp1217), &tmp1218);
  real_array_create(&tmp1219, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1219, ((modelica_integer) 2) - ndims_base_array(&tmp1219), &tmp1220);
  transpose_alloc_real_array(&tmp1220, &tmp1221);
  real_array_create(&tmp1222, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1222, ((modelica_integer) 2) - ndims_base_array(&tmp1222), &tmp1223);
  real_array_create(&tmp1224, ((modelica_real*)&((&data->simulationInfo->realParameter[3592] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1224, ((modelica_integer) 2) - ndims_base_array(&tmp1224), &tmp1225);
  transpose_alloc_real_array(&tmp1225, &tmp1226);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5136]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1198, tmp1201), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1203, tmp1206), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5155]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1208, tmp1211), 0, 1) + ((data->simulationInfo->realParameter[3594] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1213, tmp1216), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5156]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1218, tmp1221), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp1223, tmp1226), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3593] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* vehicle.wheelFL.rim.rotor1D.phi STATE(1,vehicle.wheelFL.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5157]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8368(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8378(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8379(DATA *data, threadData_t *threadData);


/*
equation index: 3982
type: SIMPLE_ASSIGN
$DER.vehicle.wheelFL.contactPatch.pen = 0.5 * ($DER.vehicle.wheelFL.contactPatch.frame_a.r_0[3] + (vehicle.wheelFL.contactPatch.r0 + vehicle.wheelFL.contactPatch.frame_a.r_0[3] - road.z0) * $DER.vehicle.wheelFL.contactPatch.frame_a.r_0[3] / sqrt((vehicle.wheelFL.contactPatch.r0 + vehicle.wheelFL.contactPatch.frame_a.r_0[3] - road.z0) ^ 2.0 + 1e-12))
*/
void AlyssaVehicle_eqFunction_3982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3982};
  modelica_real tmp1227;
  modelica_real tmp1228;
  tmp1227 = (data->simulationInfo->realParameter[3552] /* vehicle.wheelFL.contactPatch.r0 PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5081]] /* vehicle.wheelFL.contactPatch.frame_a.r_0[3] DUMMY_STATE */) - (data->simulationInfo->realParameter[410] /* road.z0 PARAM */);
  tmp1228 = (tmp1227 * tmp1227) + 1e-12;
  if(!(tmp1228 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt((vehicle.wheelFL.contactPatch.r0 + vehicle.wheelFL.contactPatch.frame_a.r_0[3] - road.z0) ^ 2.0 + 1e-12) was %g should be >= 0", tmp1228);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* der(vehicle.wheelFL.contactPatch.pen) DUMMY_DER */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* der(vehicle.wheelFL.contactPatch.frame_a.r_0[3]) DUMMY_DER */) + ((data->simulationInfo->realParameter[3552] /* vehicle.wheelFL.contactPatch.r0 PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5081]] /* vehicle.wheelFL.contactPatch.frame_a.r_0[3] DUMMY_STATE */) - (data->simulationInfo->realParameter[410] /* road.z0 PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* der(vehicle.wheelFL.contactPatch.frame_a.r_0[3]) DUMMY_DER */),sqrt(tmp1228),"sqrt((vehicle.wheelFL.contactPatch.r0 + vehicle.wheelFL.contactPatch.frame_a.r_0[3] - road.z0) ^ 2.0 + 1e-12)",equationIndexes)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8370(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8377(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8372(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8374(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8375(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8373(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8376(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8365(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8366(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8367(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8383(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8393(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8392(DATA *data, threadData_t *threadData);


/*
equation index: 3996
type: SIMPLE_ASSIGN
vehicle.wheelFL.contactPatch.vC[3] = vehicle.frontSuspension.frame_bL.R.T[3,1] * $DER.vehicle.wheelFL.contactPatch.frame_a.r_0[1] + vehicle.frontSuspension.frame_bL.R.T[3,2] * $DER.vehicle.wheelFL.contactPatch.frame_a.r_0[2] + vehicle.frontSuspension.frame_bL.R.T[3,3] * $DER.vehicle.wheelFL.contactPatch.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3996};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5087]] /* vehicle.wheelFL.contactPatch.vC[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3034]] /* vehicle.frontSuspension.frame_bL.R.T[3,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* der(vehicle.wheelFL.contactPatch.frame_a.r_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3035]] /* vehicle.frontSuspension.frame_bL.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* der(vehicle.wheelFL.contactPatch.frame_a.r_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3036]] /* vehicle.frontSuspension.frame_bL.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* der(vehicle.wheelFL.contactPatch.frame_a.r_0[3]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3997
type: SIMPLE_ASSIGN
vehicle.wheelFL.contactPatch.vHub[2] = vehicle.frontSuspension.frame_bL.R.T[2,1] * $DER.vehicle.wheelFL.contactPatch.frame_a.r_0[1] + vehicle.frontSuspension.frame_bL.R.T[2,2] * $DER.vehicle.wheelFL.contactPatch.frame_a.r_0[2] + vehicle.frontSuspension.frame_bL.R.T[2,3] * $DER.vehicle.wheelFL.contactPatch.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3997};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5089]] /* vehicle.wheelFL.contactPatch.vHub[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3031]] /* vehicle.frontSuspension.frame_bL.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* der(vehicle.wheelFL.contactPatch.frame_a.r_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3032]] /* vehicle.frontSuspension.frame_bL.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* der(vehicle.wheelFL.contactPatch.frame_a.r_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3033]] /* vehicle.frontSuspension.frame_bL.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* der(vehicle.wheelFL.contactPatch.frame_a.r_0[3]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3998
type: SIMPLE_ASSIGN
vehicle.wheelFL.contactPatch.vy = vehicle.wheelFL.contactPatch.vHub[2] - vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[1] * vehicle.wheelFL.contactPatch.rEff
*/
void AlyssaVehicle_eqFunction_3998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3998};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5091]] /* vehicle.wheelFL.contactPatch.vy variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5089]] /* vehicle.wheelFL.contactPatch.vHub[2] variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5155]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[3553] /* vehicle.wheelFL.contactPatch.rEff PARAM */)));
  TRACE_POP
}

/*
equation index: 3999
type: SIMPLE_ASSIGN
vehicle.wheelFL.contactPatch.vHub[1] = vehicle.frontSuspension.frame_bL.R.T[1,1] * $DER.vehicle.wheelFL.contactPatch.frame_a.r_0[1] + vehicle.frontSuspension.frame_bL.R.T[1,2] * $DER.vehicle.wheelFL.contactPatch.frame_a.r_0[2] + vehicle.frontSuspension.frame_bL.R.T[1,3] * $DER.vehicle.wheelFL.contactPatch.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_3999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3999};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5088]] /* vehicle.wheelFL.contactPatch.vHub[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3028]] /* vehicle.frontSuspension.frame_bL.R.T[1,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* der(vehicle.wheelFL.contactPatch.frame_a.r_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3029]] /* vehicle.frontSuspension.frame_bL.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* der(vehicle.wheelFL.contactPatch.frame_a.r_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3030]] /* vehicle.frontSuspension.frame_bL.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* der(vehicle.wheelFL.contactPatch.frame_a.r_0[3]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 4000
type: SIMPLE_ASSIGN
vehicle.wheelFL.contactPatch.vx = vehicle.wheelFL.contactPatch.vHub[1] + vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[2] * vehicle.wheelFL.contactPatch.rEff
*/
void AlyssaVehicle_eqFunction_4000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4000};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5090]] /* vehicle.wheelFL.contactPatch.vx variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5088]] /* vehicle.wheelFL.contactPatch.vHub[1] variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5156]] /* vehicle.wheelFL.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[3553] /* vehicle.wheelFL.contactPatch.rEff PARAM */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8389(DATA *data, threadData_t *threadData);


/*
equation index: 4002
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[3,3] = 0.07337367624810887 * (-sin(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)) * $DER.vehicle.frontSuspension.cornerL.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_4002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4002};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[458]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[3,3]) DUMMY_DER */) = (0.07337367624810887) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4003
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[3,2] = 0.2382753403933434 * (-sin(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)) * $DER.vehicle.frontSuspension.cornerL.tieRod.revolute.angle + (-0.11001306482721843) * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) * $DER.vehicle.frontSuspension.cornerL.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_4003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4003};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[457]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[3,2]) DUMMY_DER */) = (0.2382753403933434) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */))) + (-0.11001306482721843) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4004
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[3,1] = (-0.10590015128593043) * (-sin(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)) * $DER.vehicle.frontSuspension.cornerL.tieRod.revolute.angle + (-0.24752939586124137) * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) * $DER.vehicle.frontSuspension.cornerL.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_4004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4004};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[456]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[3,1]) DUMMY_DER */) = (-0.10590015128593043) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */))) + (-0.24752939586124137) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8446(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8439(DATA *data, threadData_t *threadData);


/*
equation index: 4007
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[2,3] = 0.2382753403933434 * (-sin(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)) * $DER.vehicle.frontSuspension.cornerL.tieRod.revolute.angle + 0.11001306482721843 * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) * $DER.vehicle.frontSuspension.cornerL.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_4007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4007};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[455]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[2,3]) DUMMY_DER */) = (0.2382753403933434) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */))) + (0.11001306482721843) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4008
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[2,2] = 0.9387291981845689 * (-sin(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)) * $DER.vehicle.frontSuspension.cornerL.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_4008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4008};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[454]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[2,2]) DUMMY_DER */) = (0.9387291981845689) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4009
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[2,1] = 0.027231467473524958 * (-sin(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)) * $DER.vehicle.frontSuspension.cornerL.tieRod.revolute.angle + (-0.9626143172381612) * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) * $DER.vehicle.frontSuspension.cornerL.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_4009(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4009};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[453]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[2,1]) DUMMY_DER */) = (0.027231467473524958) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */))) + (-0.9626143172381612) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8447(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8440(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8434(DATA *data, threadData_t *threadData);


/*
equation index: 4013
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[1,3] = (-0.10590015128593043) * (-sin(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)) * $DER.vehicle.frontSuspension.cornerL.tieRod.revolute.angle + 0.24752939586124137 * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) * $DER.vehicle.frontSuspension.cornerL.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_4013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4013};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[452]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[1,3]) DUMMY_DER */) = (-0.10590015128593043) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */))) + (0.24752939586124137) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4014
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[1,2] = 0.027231467473524958 * (-sin(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)) * $DER.vehicle.frontSuspension.cornerL.tieRod.revolute.angle + 0.9626143172381612 * cos(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) * $DER.vehicle.frontSuspension.cornerL.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_4014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4014};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[451]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[1,2]) DUMMY_DER */) = (0.027231467473524958) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */))) + (0.9626143172381612) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4015
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[1,1] = 0.9878971255673222 * (-sin(vehicle.frontSuspension.cornerL.tieRod.revolute.angle)) * $DER.vehicle.frontSuspension.cornerL.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_4015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4015};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.R_rel.T[1,1]) DUMMY_DER */) = (0.9878971255673222) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* vehicle.frontSuspension.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* der(vehicle.frontSuspension.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8448(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8441(DATA *data, threadData_t *threadData);


/*
equation index: 4018
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.rodLength = 0.36359317925395684
*/
void AlyssaVehicle_eqFunction_4018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4018};
  (data->simulationInfo->realParameter[1207] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodLength PARAM */) = 0.36359317925395684;
  TRACE_POP
}

/*
equation index: 4019
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.length = vehicle.frontSuspension.cornerR.jointUSR.rod1.rodLength
*/
void AlyssaVehicle_eqFunction_4019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4019};
  (data->simulationInfo->realParameter[1209] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodShape.length PARAM */) = (data->simulationInfo->realParameter[1207] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 4020
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.rod1Length = vehicle.frontSuspension.cornerR.jointUSR.rod1.rodLength
*/
void AlyssaVehicle_eqFunction_4020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4020};
  (data->simulationInfo->realParameter[1228] /* vehicle.frontSuspension.cornerR.jointUSR.rod1Length PARAM */) = (data->simulationInfo->realParameter[1207] /* vehicle.frontSuspension.cornerR.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 4021
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.lengthConstraint = vehicle.frontSuspension.cornerR.jointUSR.rod1Length
*/
void AlyssaVehicle_eqFunction_4021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4021};
  (data->simulationInfo->realParameter[1179] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.lengthConstraint PARAM */) = (data->simulationInfo->realParameter[1228] /* vehicle.frontSuspension.cornerR.jointUSR.rod1Length PARAM */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8480(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8481(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8482(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8483(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8646(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8647(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8648(DATA *data, threadData_t *threadData);


/*
equation index: 4029
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.positiveBranch = AlyssaModel.Experiments.OptimalControlFMU.vehicle.frontSuspension.cornerR.jointUSR.revolute.selectBranch(vehicle.frontSuspension.cornerR.jointUSR.revolute.lengthConstraint, {-1.0, 0.0, 0.0}, 0.017453292519943295 * (vehicle.frontSuspension.cornerR.jointUSR.revolute.phi_offset + vehicle.frontSuspension.cornerR.jointUSR.revolute.phi_guess), vehicle.frontSuspension.cornerR.jointUSR.revolute.r_a, vehicle.frontSuspension.cornerR.jointUSR.revolute.r_b)
*/
void AlyssaVehicle_eqFunction_4029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4029};
  real_array tmp1229;
  real_array tmp1230;
  real_array_create(&tmp1229, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2382]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp1230, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2385]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.r_b[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[85] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.positiveBranch PARAM */) = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_frontSuspension_cornerR_jointUSR_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[1179] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.lengthConstraint PARAM */), _OMC_LIT22, (0.017453292519943295) * ((data->simulationInfo->realParameter[1184] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[1183] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.phi_guess PARAM */)), tmp1229, tmp1230);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8485(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8650(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8484(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8486(DATA *data, threadData_t *threadData);


/*
equation index: 4034
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] = sin(vehicle.frontSuspension.cornerR.jointUSR.revolute.angle)
*/
void AlyssaVehicle_eqFunction_4034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4034};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2348]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */) = sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2353]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.angle DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8487(DATA *data, threadData_t *threadData);


/*
equation index: 4036
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[3,3] = vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,3] + vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_4036(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4036};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[3,3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2348]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2349]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4037
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[3,2] = vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,2] + vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_4037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4037};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2577]] /* vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[3,2] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2348]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2349]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4038
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[2,3] = vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,3] - vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_4038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4038};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2575]] /* vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[2,3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2349]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2348]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8503(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8504(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8498(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8528(DATA *data, threadData_t *threadData);


/*
equation index: 4043
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[2,2] = vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,2] - vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_4043(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4043};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2574]] /* vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[2,2] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2349]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2348]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8500(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8501(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8495(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8496(DATA *data, threadData_t *threadData);


/*
equation index: 4048
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[2,1] = vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,1] - vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_4048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4048};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2573]] /* vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[2,1] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2349]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2348]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8492(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8493(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8531(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8532(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8529(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8530(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8533(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8534(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8535(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8536(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8537(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8538(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8539(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8554(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8551(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8548(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8544(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8547(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8546(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8545(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8540(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8543(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8557(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8555(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8556(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8558(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8542(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8552(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8559(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8553(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8560(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8541(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8549(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8561(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8550(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8562(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8565(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8563(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8567(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8564(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8566(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8568(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8569(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8570(DATA *data, threadData_t *threadData);


/*
equation index: 4093
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springArm.frame_b.R.w[3] = vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.vehicleBody.body.w_a[2] + vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.vehicleBody.body.w_a[3]
*/
void AlyssaVehicle_eqFunction_4093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4093};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2581]] /* vehicle.frontSuspension.cornerR.springArm.frame_b.R.w[3] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2348]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2349]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4094
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springArm.frame_b.R.w[2] = vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.vehicleBody.body.w_a[2] - vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.vehicleBody.body.w_a[3]
*/
void AlyssaVehicle_eqFunction_4094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4094};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2580]] /* vehicle.frontSuspension.cornerR.springArm.frame_b.R.w[2] DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2349]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2348]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 4095
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[3,1] = vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,1] + vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_4095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4095};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2576]] /* vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[3,1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2348]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2349]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8506(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8507(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8511(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8512(DATA *data, threadData_t *threadData);


/*
equation index: 4100
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.shape_b.length = max(vehicle.frontSuspension.cornerR.coilover.s - vehicle.frontSuspension.cornerR.coilover.length_a, 0.0)
*/
void AlyssaVehicle_eqFunction_4100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4100};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2239]] /* vehicle.frontSuspension.cornerR.coilover.shape_b.length variable */) = fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2212]] /* vehicle.frontSuspension.cornerR.coilover.s DUMMY_STATE */) - (data->simulationInfo->realParameter[1063] /* vehicle.frontSuspension.cornerR.coilover.length_a PARAM */),0.0);
  TRACE_POP
}

/*
equation index: 4101
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.shape_a.length = min(vehicle.frontSuspension.cornerR.coilover.length_a, vehicle.frontSuspension.cornerR.coilover.s)
*/
void AlyssaVehicle_eqFunction_4101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2228]] /* vehicle.frontSuspension.cornerR.coilover.shape_a.length variable */) = fmin((data->simulationInfo->realParameter[1063] /* vehicle.frontSuspension.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2212]] /* vehicle.frontSuspension.cornerR.coilover.s DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8517(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8516(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8525(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8510(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8515(DATA *data, threadData_t *threadData);


/*
equation index: 4107
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.shape_b.r_shape[3] = vehicle.frontSuspension.cornerR.coilover.e_a[3] * min(vehicle.frontSuspension.cornerR.coilover.length_a, vehicle.frontSuspension.cornerR.coilover.s)
*/
void AlyssaVehicle_eqFunction_4107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2242]] /* vehicle.frontSuspension.cornerR.coilover.shape_b.r_shape[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2186]] /* vehicle.frontSuspension.cornerR.coilover.e_a[3] variable */)) * (fmin((data->simulationInfo->realParameter[1063] /* vehicle.frontSuspension.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2212]] /* vehicle.frontSuspension.cornerR.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8509(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8514(DATA *data, threadData_t *threadData);


/*
equation index: 4110
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.shape_b.r_shape[2] = vehicle.frontSuspension.cornerR.coilover.e_a[2] * min(vehicle.frontSuspension.cornerR.coilover.length_a, vehicle.frontSuspension.cornerR.coilover.s)
*/
void AlyssaVehicle_eqFunction_4110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2241]] /* vehicle.frontSuspension.cornerR.coilover.shape_b.r_shape[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2185]] /* vehicle.frontSuspension.cornerR.coilover.e_a[2] variable */)) * (fmin((data->simulationInfo->realParameter[1063] /* vehicle.frontSuspension.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2212]] /* vehicle.frontSuspension.cornerR.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8508(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8513(DATA *data, threadData_t *threadData);


/*
equation index: 4113
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.coilover.shape_b.r_shape[1] = vehicle.frontSuspension.cornerR.coilover.e_a[1] * min(vehicle.frontSuspension.cornerR.coilover.length_a, vehicle.frontSuspension.cornerR.coilover.s)
*/
void AlyssaVehicle_eqFunction_4113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2240]] /* vehicle.frontSuspension.cornerR.coilover.shape_b.r_shape[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2184]] /* vehicle.frontSuspension.cornerR.coilover.e_a[1] variable */)) * (fmin((data->simulationInfo->realParameter[1063] /* vehicle.frontSuspension.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2212]] /* vehicle.frontSuspension.cornerR.coilover.s DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8634(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8527(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8649(DATA *data, threadData_t *threadData);


/*
equation index: 4117
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.angle = if noEvent(vehicle.frontSuspension.cornerR.jointUSR.revolute.kcos_angle == 0.0) then vehicle.frontSuspension.cornerR.jointUSR.revolute.kcos_angle else ($DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.ksin_angle * vehicle.frontSuspension.cornerR.jointUSR.revolute.kcos_angle - vehicle.frontSuspension.cornerR.jointUSR.revolute.ksin_angle * $DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.kcos_angle) / (vehicle.frontSuspension.cornerR.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (vehicle.frontSuspension.cornerR.jointUSR.revolute.ksin_angle / vehicle.frontSuspension.cornerR.jointUSR.revolute.kcos_angle) ^ 2.0))
*/
void AlyssaVehicle_eqFunction_4117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4117};
  modelica_real tmp1231;
  modelica_real tmp1232;
  modelica_boolean tmp1233;
  modelica_real tmp1234;
  tmp1233 = (modelica_boolean)((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2379]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */) == 0.0);
  if(tmp1233)
  {
    tmp1234 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2379]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */);
  }
  else
  {
    tmp1231 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2379]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */);
    tmp1232 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2380]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.ksin_angle DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2379]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */),"vehicle.frontSuspension.cornerR.jointUSR.revolute.kcos_angle",equationIndexes);
    tmp1234 = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[548]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.ksin_angle) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2379]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2380]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.ksin_angle DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[547]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.kcos_angle) DUMMY_DER */))),((tmp1231 * tmp1231)) * (1.0 + (tmp1232 * tmp1232)),"vehicle.frontSuspension.cornerR.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (vehicle.frontSuspension.cornerR.jointUSR.revolute.ksin_angle / vehicle.frontSuspension.cornerR.jointUSR.revolute.kcos_angle) ^ 2.0)",equationIndexes);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.angle) DUMMY_DER */) = tmp1234;
  TRACE_POP
}

/*
equation index: 4118
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.w[1] = -$DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_4118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4118};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2350]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.w[1] DUMMY_STATE */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8652(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8655(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8656(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8653(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8654(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8680(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8689(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8714(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8713(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8717(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8715(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8718(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8721(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8692(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8716(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8720(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8724(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8726(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8719(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8722(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8723(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8725(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8729(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8727(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8731(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8728(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8730(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8732(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8733(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8734(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8695(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8696(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8693(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8694(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8697(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8698(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8699(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8702(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8706(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8690(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8691(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8709(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8708(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8707(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8703(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8712(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8711(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8710(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8700(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8705(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8809(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8805(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8704(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8804(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8701(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8803(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8657(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8658(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8659(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8660(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8661(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8662(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8663(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8664(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8665(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8679(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8666(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8671(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8670(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8672(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8667(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8677(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8676(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8678(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8673(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8675(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8674(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8669(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8668(DATA *data, threadData_t *threadData);


/*
equation index: 4198
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] = cos(vehicle.frontSuspension.cornerR.jointUSR.revolute.angle) * $DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_4198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4198};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[539]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */) = (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2353]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 4199
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] = (-sin(vehicle.frontSuspension.cornerR.jointUSR.revolute.angle)) * $DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.angle
*/
void AlyssaVehicle_eqFunction_4199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[540]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2353]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 4200
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[3,3] = vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,3] + $DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,3] + vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,3] + $DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_4200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4200};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[593]] /* der(vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[3,3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2348]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(vehicle.chassisFrame.R.T[2,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[539]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2349]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* der(vehicle.chassisFrame.R.T[3,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[540]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4201
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[3,2] = vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * $DER.vehicle.chassisFrame.R.T[2,2] + $DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[2,2] + vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[3,2] + $DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_4201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4201};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[592]] /* der(vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[3,2]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2348]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(vehicle.chassisFrame.R.T[2,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[539]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2349]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* der(vehicle.chassisFrame.R.T[3,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[540]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4202
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[2,3] = vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[2,3] + $DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,3] + (-vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) * $DER.vehicle.chassisFrame.R.T[3,3] - $DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_4202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4202};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[591]] /* der(vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[2,3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2349]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(vehicle.chassisFrame.R.T[2,3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[540]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2348]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* der(vehicle.chassisFrame.R.T[3,3]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[539]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 4203
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[2,2] = vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[2,2] + $DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,2] + (-vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) * $DER.vehicle.chassisFrame.R.T[3,2] - $DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_4203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[590]] /* der(vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[2,2]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2349]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(vehicle.chassisFrame.R.T[2,2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[540]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2348]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* der(vehicle.chassisFrame.R.T[3,2]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[539]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 4204
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[2,1] = vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * $DER.vehicle.chassisFrame.R.T[2,1] + $DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] * vehicle.chassisFrame.R.T[2,1] + (-vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) * $DER.vehicle.chassisFrame.R.T[3,1] - $DER.vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] * vehicle.chassisFrame.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_4204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[589]] /* der(vehicle.frontSuspension.cornerR.springArm.frame_b.R.T[2,1]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2349]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* der(vehicle.chassisFrame.R.T[2,1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[540]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2348]] /* vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* der(vehicle.chassisFrame.R.T[3,1]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[539]] /* der(vehicle.frontSuspension.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 4205
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.positiveBranch = AlyssaModel.Experiments.OptimalControlFMU.vehicle.frontSuspension.cornerR.tieRod.revolute.selectBranch(vehicle.frontSuspension.cornerR.tieRod.revolute.lengthConstraint, {0.11001306482721843, 0.24752939586124137, 0.9626143172381612}, 0.017453292519943295 * (vehicle.frontSuspension.cornerR.tieRod.revolute.phi_offset + vehicle.frontSuspension.cornerR.tieRod.revolute.phi_guess), vehicle.frontSuspension.cornerR.tieRod.revolute.r_a, vehicle.frontSuspension.cornerR.tieRod.revolute.r_b)
*/
void AlyssaVehicle_eqFunction_4205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4205};
  real_array tmp1235;
  real_array tmp1236;
  real_array_create(&tmp1235, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2737]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp1236, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2740]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.r_b[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[101] /* vehicle.frontSuspension.cornerR.tieRod.revolute.positiveBranch PARAM */) = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_frontSuspension_cornerR_tieRod_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[1471] /* vehicle.frontSuspension.cornerR.tieRod.revolute.lengthConstraint PARAM */), _OMC_LIT27, (0.017453292519943295) * ((data->simulationInfo->realParameter[1476] /* vehicle.frontSuspension.cornerR.tieRod.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[1475] /* vehicle.frontSuspension.cornerR.tieRod.revolute.phi_guess PARAM */)), tmp1235, tmp1236);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8572(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8736(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8571(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8573(DATA *data, threadData_t *threadData);


/*
equation index: 4210
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[3,3] = 0.9266263237518911 + 0.07337367624810887 * cos(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_4210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2703]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[3,3] DUMMY_STATE */) = 0.9266263237518911 + (0.07337367624810887) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 4211
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[3,2] = 0.2382753403933434 + (-0.2382753403933434) * cos(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) - 0.11001306482721843 * sin(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_4211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2702]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[3,2] DUMMY_STATE */) = 0.2382753403933434 + (-0.2382753403933434) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) - ((0.11001306482721843) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 4212
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[3,1] = 0.10590015128593043 + (-0.10590015128593043) * cos(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) - (-0.24752939586124137) * sin(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_4212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4212};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2701]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[3,1] DUMMY_STATE */) = 0.10590015128593043 + (-0.10590015128593043) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) - ((-0.24752939586124137) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8600(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8589(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8594(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8603(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8602(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8601(DATA *data, threadData_t *threadData);


/*
equation index: 4219
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[2,3] = 0.2382753403933434 + (-0.2382753403933434) * cos(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) - (-0.11001306482721843) * sin(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_4219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4219};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2700]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[2,3] DUMMY_STATE */) = 0.2382753403933434 + (-0.2382753403933434) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) - ((-0.11001306482721843) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 4220
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[2,2] = 0.06127080181543114 + 0.9387291981845689 * cos(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_4220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4220};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[2,2] DUMMY_STATE */) = 0.06127080181543114 + (0.9387291981845689) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 4221
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[2,1] = 0.027231467473524958 + (-0.027231467473524958) * cos(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) - 0.9626143172381612 * sin(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_4221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[2,1] DUMMY_STATE */) = 0.027231467473524958 + (-0.027231467473524958) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) - ((0.9626143172381612) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8604(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8605(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8585(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8586(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8608(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8607(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8606(DATA *data, threadData_t *threadData);


/*
equation index: 4229
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[1,3] = 0.10590015128593043 + (-0.10590015128593043) * cos(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) - 0.24752939586124137 * sin(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_4229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2697]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[1,3] DUMMY_STATE */) = 0.10590015128593043 + (-0.10590015128593043) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) - ((0.24752939586124137) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 4230
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[1,2] = 0.027231467473524958 + (-0.027231467473524958) * cos(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) - (-0.9626143172381612) * sin(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_4230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2696]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[1,2] DUMMY_STATE */) = 0.027231467473524958 + (-0.027231467473524958) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) - ((-0.9626143172381612) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 4231
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[1,1] = 0.012102874432677765 + 0.9878971255673222 * cos(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)
*/
void AlyssaVehicle_eqFunction_4231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4231};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[1,1] DUMMY_STATE */) = 0.012102874432677765 + (0.9878971255673222) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8581(DATA *data, threadData_t *threadData);


/*
equation index: 4233
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.frame_a.r_0[1] = vehicle.frontSuspension.cornerR.jointUSR.frame_ia.r_0[1] + 0.02 * vehicle.frontSuspension.frame_bR.R.T[1,1] + 0.15000000000000002 * vehicle.frontSuspension.frame_bR.R.T[2,1] + 0.2 * vehicle.frontSuspension.frame_bR.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_4233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2922]] /* vehicle.frontSuspension.cornerR.upright.frame_a.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2283]] /* vehicle.frontSuspension.cornerR.jointUSR.frame_ia.r_0[1] DUMMY_STATE */) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3040]] /* vehicle.frontSuspension.frame_bR.R.T[1,1] DUMMY_STATE */)) + (0.15000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3043]] /* vehicle.frontSuspension.frame_bR.R.T[2,1] variable */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3046]] /* vehicle.frontSuspension.frame_bR.R.T[3,1] variable */));
  TRACE_POP
}

/*
equation index: 4234
type: SIMPLE_ASSIGN
vehicle.wheelFR.contactPatch.frame_a.r_0[1] = vehicle.frontSuspension.cornerR.upright.frame_a.r_0[1]
*/
void AlyssaVehicle_eqFunction_4234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5176]] /* vehicle.wheelFR.contactPatch.frame_a.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2922]] /* vehicle.frontSuspension.cornerR.upright.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8595(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8596(DATA *data, threadData_t *threadData);


/*
equation index: 4237
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,1] = ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelFR.rim.rotor1D.phi) - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[1,1] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelFR.rim.rotor1D.phi) - vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[2,1] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_4237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4237};
  real_array tmp1237;
  real_array tmp1238;
  real_array tmp1239;
  real_array tmp1240;
  real_array tmp1241;
  real_array tmp1242;
  real_array tmp1243;
  real_array tmp1244;
  real_array tmp1245;
  real_array tmp1246;
  real_array tmp1247;
  real_array tmp1248;
  real_array tmp1249;
  real_array tmp1250;
  real_array tmp1251;
  real_array tmp1252;
  real_array tmp1253;
  real_array tmp1254;
  real_array tmp1255;
  real_array tmp1256;
  real_array tmp1257;
  real_array tmp1258;
  real_array tmp1259;
  real_array tmp1260;
  real_array tmp1261;
  real_array tmp1262;
  real_array tmp1263;
  real_array tmp1264;
  real_array tmp1265;
  real_array tmp1266;
  real_array_create(&tmp1237, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1237, ((modelica_integer) 2) - ndims_base_array(&tmp1237), &tmp1238);
  real_array_create(&tmp1239, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1239, ((modelica_integer) 2) - ndims_base_array(&tmp1239), &tmp1240);
  transpose_alloc_real_array(&tmp1240, &tmp1241);
  real_array_create(&tmp1242, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1242, ((modelica_integer) 2) - ndims_base_array(&tmp1242), &tmp1243);
  real_array_create(&tmp1244, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1244, ((modelica_integer) 2) - ndims_base_array(&tmp1244), &tmp1245);
  transpose_alloc_real_array(&tmp1245, &tmp1246);
  real_array_create(&tmp1247, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1247, ((modelica_integer) 2) - ndims_base_array(&tmp1247), &tmp1248);
  real_array_create(&tmp1249, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1249, ((modelica_integer) 2) - ndims_base_array(&tmp1249), &tmp1250);
  transpose_alloc_real_array(&tmp1250, &tmp1251);
  real_array_create(&tmp1252, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1252, ((modelica_integer) 2) - ndims_base_array(&tmp1252), &tmp1253);
  real_array_create(&tmp1254, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1254, ((modelica_integer) 2) - ndims_base_array(&tmp1254), &tmp1255);
  transpose_alloc_real_array(&tmp1255, &tmp1256);
  real_array_create(&tmp1257, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1257, ((modelica_integer) 2) - ndims_base_array(&tmp1257), &tmp1258);
  real_array_create(&tmp1259, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1259, ((modelica_integer) 2) - ndims_base_array(&tmp1259), &tmp1260);
  transpose_alloc_real_array(&tmp1260, &tmp1261);
  real_array_create(&tmp1262, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1262, ((modelica_integer) 2) - ndims_base_array(&tmp1262), &tmp1263);
  real_array_create(&tmp1264, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1264, ((modelica_integer) 2) - ndims_base_array(&tmp1264), &tmp1265);
  transpose_alloc_real_array(&tmp1265, &tmp1266);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5230]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1238, tmp1241), 2, 0) + ((data->simulationInfo->realParameter[3666] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1243, tmp1246), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3040]] /* vehicle.frontSuspension.frame_bR.R.T[1,1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1248, tmp1251), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp1253, tmp1256), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3043]] /* vehicle.frontSuspension.frame_bR.R.T[2,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1258, tmp1261), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1263, tmp1266), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3046]] /* vehicle.frontSuspension.frame_bR.R.T[3,1] variable */));
  TRACE_POP
}

/*
equation index: 4238
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,1] = ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelFR.rim.rotor1D.phi) - vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[1,1] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[2,1] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelFR.rim.rotor1D.phi) - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_4238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4238};
  real_array tmp1267;
  real_array tmp1268;
  real_array tmp1269;
  real_array tmp1270;
  real_array tmp1271;
  real_array tmp1272;
  real_array tmp1273;
  real_array tmp1274;
  real_array tmp1275;
  real_array tmp1276;
  real_array tmp1277;
  real_array tmp1278;
  real_array tmp1279;
  real_array tmp1280;
  real_array tmp1281;
  real_array tmp1282;
  real_array tmp1283;
  real_array tmp1284;
  real_array tmp1285;
  real_array tmp1286;
  real_array tmp1287;
  real_array tmp1288;
  real_array tmp1289;
  real_array tmp1290;
  real_array tmp1291;
  real_array tmp1292;
  real_array tmp1293;
  real_array tmp1294;
  real_array tmp1295;
  real_array tmp1296;
  real_array_create(&tmp1267, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1267, ((modelica_integer) 2) - ndims_base_array(&tmp1267), &tmp1268);
  real_array_create(&tmp1269, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1269, ((modelica_integer) 2) - ndims_base_array(&tmp1269), &tmp1270);
  transpose_alloc_real_array(&tmp1270, &tmp1271);
  real_array_create(&tmp1272, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1272, ((modelica_integer) 2) - ndims_base_array(&tmp1272), &tmp1273);
  real_array_create(&tmp1274, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1274, ((modelica_integer) 2) - ndims_base_array(&tmp1274), &tmp1275);
  transpose_alloc_real_array(&tmp1275, &tmp1276);
  real_array_create(&tmp1277, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1277, ((modelica_integer) 2) - ndims_base_array(&tmp1277), &tmp1278);
  real_array_create(&tmp1279, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1279, ((modelica_integer) 2) - ndims_base_array(&tmp1279), &tmp1280);
  transpose_alloc_real_array(&tmp1280, &tmp1281);
  real_array_create(&tmp1282, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1282, ((modelica_integer) 2) - ndims_base_array(&tmp1282), &tmp1283);
  real_array_create(&tmp1284, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1284, ((modelica_integer) 2) - ndims_base_array(&tmp1284), &tmp1285);
  transpose_alloc_real_array(&tmp1285, &tmp1286);
  real_array_create(&tmp1287, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1287, ((modelica_integer) 2) - ndims_base_array(&tmp1287), &tmp1288);
  real_array_create(&tmp1289, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1289, ((modelica_integer) 2) - ndims_base_array(&tmp1289), &tmp1290);
  transpose_alloc_real_array(&tmp1290, &tmp1291);
  real_array_create(&tmp1292, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1292, ((modelica_integer) 2) - ndims_base_array(&tmp1292), &tmp1293);
  real_array_create(&tmp1294, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1294, ((modelica_integer) 2) - ndims_base_array(&tmp1294), &tmp1295);
  transpose_alloc_real_array(&tmp1295, &tmp1296);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5227]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1268, tmp1271), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp1273, tmp1276), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3667] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3040]] /* vehicle.frontSuspension.frame_bR.R.T[1,1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1278, tmp1281), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1283, tmp1286), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3043]] /* vehicle.frontSuspension.frame_bR.R.T[2,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1288, tmp1291), 1, 2) + ((data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1293, tmp1296), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3046]] /* vehicle.frontSuspension.frame_bR.R.T[3,1] variable */));
  TRACE_POP
}

/*
equation index: 4239
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,1] = ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[1,1] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelFR.rim.rotor1D.phi) - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[2,1] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelFR.rim.rotor1D.phi) - vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[3,1]
*/
void AlyssaVehicle_eqFunction_4239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4239};
  real_array tmp1297;
  real_array tmp1298;
  real_array tmp1299;
  real_array tmp1300;
  real_array tmp1301;
  real_array tmp1302;
  real_array tmp1303;
  real_array tmp1304;
  real_array tmp1305;
  real_array tmp1306;
  real_array tmp1307;
  real_array tmp1308;
  real_array tmp1309;
  real_array tmp1310;
  real_array tmp1311;
  real_array tmp1312;
  real_array tmp1313;
  real_array tmp1314;
  real_array tmp1315;
  real_array tmp1316;
  real_array tmp1317;
  real_array tmp1318;
  real_array tmp1319;
  real_array tmp1320;
  real_array tmp1321;
  real_array tmp1322;
  real_array tmp1323;
  real_array tmp1324;
  real_array tmp1325;
  real_array tmp1326;
  real_array_create(&tmp1297, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1297, ((modelica_integer) 2) - ndims_base_array(&tmp1297), &tmp1298);
  real_array_create(&tmp1299, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1299, ((modelica_integer) 2) - ndims_base_array(&tmp1299), &tmp1300);
  transpose_alloc_real_array(&tmp1300, &tmp1301);
  real_array_create(&tmp1302, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1302, ((modelica_integer) 2) - ndims_base_array(&tmp1302), &tmp1303);
  real_array_create(&tmp1304, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1304, ((modelica_integer) 2) - ndims_base_array(&tmp1304), &tmp1305);
  transpose_alloc_real_array(&tmp1305, &tmp1306);
  real_array_create(&tmp1307, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1307, ((modelica_integer) 2) - ndims_base_array(&tmp1307), &tmp1308);
  real_array_create(&tmp1309, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1309, ((modelica_integer) 2) - ndims_base_array(&tmp1309), &tmp1310);
  transpose_alloc_real_array(&tmp1310, &tmp1311);
  real_array_create(&tmp1312, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1312, ((modelica_integer) 2) - ndims_base_array(&tmp1312), &tmp1313);
  real_array_create(&tmp1314, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1314, ((modelica_integer) 2) - ndims_base_array(&tmp1314), &tmp1315);
  transpose_alloc_real_array(&tmp1315, &tmp1316);
  real_array_create(&tmp1317, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1317, ((modelica_integer) 2) - ndims_base_array(&tmp1317), &tmp1318);
  real_array_create(&tmp1319, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1319, ((modelica_integer) 2) - ndims_base_array(&tmp1319), &tmp1320);
  transpose_alloc_real_array(&tmp1320, &tmp1321);
  real_array_create(&tmp1322, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1322, ((modelica_integer) 2) - ndims_base_array(&tmp1322), &tmp1323);
  real_array_create(&tmp1324, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1324, ((modelica_integer) 2) - ndims_base_array(&tmp1324), &tmp1325);
  transpose_alloc_real_array(&tmp1325, &tmp1326);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5224]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1298, tmp1301), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1303, tmp1306), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3040]] /* vehicle.frontSuspension.frame_bR.R.T[1,1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1308, tmp1311), 0, 1) + ((data->simulationInfo->realParameter[3667] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1313, tmp1316), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3043]] /* vehicle.frontSuspension.frame_bR.R.T[2,1] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1318, tmp1321), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp1323, tmp1326), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3666] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3046]] /* vehicle.frontSuspension.frame_bR.R.T[3,1] variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8609(DATA *data, threadData_t *threadData);


/*
equation index: 4241
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.frame_a.r_0[3] = vehicle.frontSuspension.cornerR.jointUSR.frame_ia.r_0[3] + 0.02 * vehicle.frontSuspension.frame_bR.R.T[1,3] + 0.15000000000000002 * vehicle.frontSuspension.frame_bR.R.T[2,3] + 0.2 * vehicle.frontSuspension.frame_bR.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_4241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* vehicle.frontSuspension.cornerR.upright.frame_a.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2285]] /* vehicle.frontSuspension.cornerR.jointUSR.frame_ia.r_0[3] DUMMY_STATE */) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3042]] /* vehicle.frontSuspension.frame_bR.R.T[1,3] variable */)) + (0.15000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3045]] /* vehicle.frontSuspension.frame_bR.R.T[2,3] variable */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3048]] /* vehicle.frontSuspension.frame_bR.R.T[3,3] variable */));
  TRACE_POP
}

/*
equation index: 4242
type: SIMPLE_ASSIGN
vehicle.wheelFR.contactPatch.frame_a.r_0[3] = vehicle.frontSuspension.cornerR.upright.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_4242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5178]] /* vehicle.wheelFR.contactPatch.frame_a.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* vehicle.frontSuspension.cornerR.upright.frame_a.r_0[3] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8625(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8610(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8611(DATA *data, threadData_t *threadData);


/*
equation index: 4246
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,3] = ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelFR.rim.rotor1D.phi) - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[1,3] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelFR.rim.rotor1D.phi) - vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[2,3] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_4246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4246};
  real_array tmp1327;
  real_array tmp1328;
  real_array tmp1329;
  real_array tmp1330;
  real_array tmp1331;
  real_array tmp1332;
  real_array tmp1333;
  real_array tmp1334;
  real_array tmp1335;
  real_array tmp1336;
  real_array tmp1337;
  real_array tmp1338;
  real_array tmp1339;
  real_array tmp1340;
  real_array tmp1341;
  real_array tmp1342;
  real_array tmp1343;
  real_array tmp1344;
  real_array tmp1345;
  real_array tmp1346;
  real_array tmp1347;
  real_array tmp1348;
  real_array tmp1349;
  real_array tmp1350;
  real_array tmp1351;
  real_array tmp1352;
  real_array tmp1353;
  real_array tmp1354;
  real_array tmp1355;
  real_array tmp1356;
  real_array_create(&tmp1327, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1327, ((modelica_integer) 2) - ndims_base_array(&tmp1327), &tmp1328);
  real_array_create(&tmp1329, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1329, ((modelica_integer) 2) - ndims_base_array(&tmp1329), &tmp1330);
  transpose_alloc_real_array(&tmp1330, &tmp1331);
  real_array_create(&tmp1332, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1332, ((modelica_integer) 2) - ndims_base_array(&tmp1332), &tmp1333);
  real_array_create(&tmp1334, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1334, ((modelica_integer) 2) - ndims_base_array(&tmp1334), &tmp1335);
  transpose_alloc_real_array(&tmp1335, &tmp1336);
  real_array_create(&tmp1337, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1337, ((modelica_integer) 2) - ndims_base_array(&tmp1337), &tmp1338);
  real_array_create(&tmp1339, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1339, ((modelica_integer) 2) - ndims_base_array(&tmp1339), &tmp1340);
  transpose_alloc_real_array(&tmp1340, &tmp1341);
  real_array_create(&tmp1342, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1342, ((modelica_integer) 2) - ndims_base_array(&tmp1342), &tmp1343);
  real_array_create(&tmp1344, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1344, ((modelica_integer) 2) - ndims_base_array(&tmp1344), &tmp1345);
  transpose_alloc_real_array(&tmp1345, &tmp1346);
  real_array_create(&tmp1347, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1347, ((modelica_integer) 2) - ndims_base_array(&tmp1347), &tmp1348);
  real_array_create(&tmp1349, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1349, ((modelica_integer) 2) - ndims_base_array(&tmp1349), &tmp1350);
  transpose_alloc_real_array(&tmp1350, &tmp1351);
  real_array_create(&tmp1352, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1352, ((modelica_integer) 2) - ndims_base_array(&tmp1352), &tmp1353);
  real_array_create(&tmp1354, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1354, ((modelica_integer) 2) - ndims_base_array(&tmp1354), &tmp1355);
  transpose_alloc_real_array(&tmp1355, &tmp1356);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5232]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1328, tmp1331), 2, 0) + ((data->simulationInfo->realParameter[3666] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1333, tmp1336), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3042]] /* vehicle.frontSuspension.frame_bR.R.T[1,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1338, tmp1341), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp1343, tmp1346), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3045]] /* vehicle.frontSuspension.frame_bR.R.T[2,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1348, tmp1351), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1353, tmp1356), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3048]] /* vehicle.frontSuspension.frame_bR.R.T[3,3] variable */));
  TRACE_POP
}

/*
equation index: 4247
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,3] = ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelFR.rim.rotor1D.phi) - vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[1,3] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[2,3] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelFR.rim.rotor1D.phi) - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_4247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4247};
  real_array tmp1357;
  real_array tmp1358;
  real_array tmp1359;
  real_array tmp1360;
  real_array tmp1361;
  real_array tmp1362;
  real_array tmp1363;
  real_array tmp1364;
  real_array tmp1365;
  real_array tmp1366;
  real_array tmp1367;
  real_array tmp1368;
  real_array tmp1369;
  real_array tmp1370;
  real_array tmp1371;
  real_array tmp1372;
  real_array tmp1373;
  real_array tmp1374;
  real_array tmp1375;
  real_array tmp1376;
  real_array tmp1377;
  real_array tmp1378;
  real_array tmp1379;
  real_array tmp1380;
  real_array tmp1381;
  real_array tmp1382;
  real_array tmp1383;
  real_array tmp1384;
  real_array tmp1385;
  real_array tmp1386;
  real_array_create(&tmp1357, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1357, ((modelica_integer) 2) - ndims_base_array(&tmp1357), &tmp1358);
  real_array_create(&tmp1359, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1359, ((modelica_integer) 2) - ndims_base_array(&tmp1359), &tmp1360);
  transpose_alloc_real_array(&tmp1360, &tmp1361);
  real_array_create(&tmp1362, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1362, ((modelica_integer) 2) - ndims_base_array(&tmp1362), &tmp1363);
  real_array_create(&tmp1364, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1364, ((modelica_integer) 2) - ndims_base_array(&tmp1364), &tmp1365);
  transpose_alloc_real_array(&tmp1365, &tmp1366);
  real_array_create(&tmp1367, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1367, ((modelica_integer) 2) - ndims_base_array(&tmp1367), &tmp1368);
  real_array_create(&tmp1369, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1369, ((modelica_integer) 2) - ndims_base_array(&tmp1369), &tmp1370);
  transpose_alloc_real_array(&tmp1370, &tmp1371);
  real_array_create(&tmp1372, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1372, ((modelica_integer) 2) - ndims_base_array(&tmp1372), &tmp1373);
  real_array_create(&tmp1374, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1374, ((modelica_integer) 2) - ndims_base_array(&tmp1374), &tmp1375);
  transpose_alloc_real_array(&tmp1375, &tmp1376);
  real_array_create(&tmp1377, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1377, ((modelica_integer) 2) - ndims_base_array(&tmp1377), &tmp1378);
  real_array_create(&tmp1379, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1379, ((modelica_integer) 2) - ndims_base_array(&tmp1379), &tmp1380);
  transpose_alloc_real_array(&tmp1380, &tmp1381);
  real_array_create(&tmp1382, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1382, ((modelica_integer) 2) - ndims_base_array(&tmp1382), &tmp1383);
  real_array_create(&tmp1384, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1384, ((modelica_integer) 2) - ndims_base_array(&tmp1384), &tmp1385);
  transpose_alloc_real_array(&tmp1385, &tmp1386);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5229]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1358, tmp1361), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp1363, tmp1366), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3667] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3042]] /* vehicle.frontSuspension.frame_bR.R.T[1,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1368, tmp1371), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1373, tmp1376), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3045]] /* vehicle.frontSuspension.frame_bR.R.T[2,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1378, tmp1381), 1, 2) + ((data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1383, tmp1386), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3048]] /* vehicle.frontSuspension.frame_bR.R.T[3,3] variable */));
  TRACE_POP
}

/*
equation index: 4248
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,3] = ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[1,3] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelFR.rim.rotor1D.phi) - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[2,3] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelFR.rim.rotor1D.phi) - vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[3,3]
*/
void AlyssaVehicle_eqFunction_4248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4248};
  real_array tmp1387;
  real_array tmp1388;
  real_array tmp1389;
  real_array tmp1390;
  real_array tmp1391;
  real_array tmp1392;
  real_array tmp1393;
  real_array tmp1394;
  real_array tmp1395;
  real_array tmp1396;
  real_array tmp1397;
  real_array tmp1398;
  real_array tmp1399;
  real_array tmp1400;
  real_array tmp1401;
  real_array tmp1402;
  real_array tmp1403;
  real_array tmp1404;
  real_array tmp1405;
  real_array tmp1406;
  real_array tmp1407;
  real_array tmp1408;
  real_array tmp1409;
  real_array tmp1410;
  real_array tmp1411;
  real_array tmp1412;
  real_array tmp1413;
  real_array tmp1414;
  real_array tmp1415;
  real_array tmp1416;
  real_array_create(&tmp1387, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1387, ((modelica_integer) 2) - ndims_base_array(&tmp1387), &tmp1388);
  real_array_create(&tmp1389, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1389, ((modelica_integer) 2) - ndims_base_array(&tmp1389), &tmp1390);
  transpose_alloc_real_array(&tmp1390, &tmp1391);
  real_array_create(&tmp1392, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1392, ((modelica_integer) 2) - ndims_base_array(&tmp1392), &tmp1393);
  real_array_create(&tmp1394, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1394, ((modelica_integer) 2) - ndims_base_array(&tmp1394), &tmp1395);
  transpose_alloc_real_array(&tmp1395, &tmp1396);
  real_array_create(&tmp1397, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1397, ((modelica_integer) 2) - ndims_base_array(&tmp1397), &tmp1398);
  real_array_create(&tmp1399, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1399, ((modelica_integer) 2) - ndims_base_array(&tmp1399), &tmp1400);
  transpose_alloc_real_array(&tmp1400, &tmp1401);
  real_array_create(&tmp1402, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1402, ((modelica_integer) 2) - ndims_base_array(&tmp1402), &tmp1403);
  real_array_create(&tmp1404, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1404, ((modelica_integer) 2) - ndims_base_array(&tmp1404), &tmp1405);
  transpose_alloc_real_array(&tmp1405, &tmp1406);
  real_array_create(&tmp1407, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1407, ((modelica_integer) 2) - ndims_base_array(&tmp1407), &tmp1408);
  real_array_create(&tmp1409, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1409, ((modelica_integer) 2) - ndims_base_array(&tmp1409), &tmp1410);
  transpose_alloc_real_array(&tmp1410, &tmp1411);
  real_array_create(&tmp1412, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1412, ((modelica_integer) 2) - ndims_base_array(&tmp1412), &tmp1413);
  real_array_create(&tmp1414, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1414, ((modelica_integer) 2) - ndims_base_array(&tmp1414), &tmp1415);
  transpose_alloc_real_array(&tmp1415, &tmp1416);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5226]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1388, tmp1391), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1393, tmp1396), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3042]] /* vehicle.frontSuspension.frame_bR.R.T[1,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1398, tmp1401), 0, 1) + ((data->simulationInfo->realParameter[3667] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1403, tmp1406), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3045]] /* vehicle.frontSuspension.frame_bR.R.T[2,3] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1408, tmp1411), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp1413, tmp1416), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3666] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3048]] /* vehicle.frontSuspension.frame_bR.R.T[3,3] variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8582(DATA *data, threadData_t *threadData);


/*
equation index: 4250
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.upright.frame_a.r_0[2] = vehicle.frontSuspension.cornerR.jointUSR.frame_ia.r_0[2] + 0.02 * vehicle.frontSuspension.frame_bR.R.T[1,2] + 0.15000000000000002 * vehicle.frontSuspension.frame_bR.R.T[2,2] + 0.2 * vehicle.frontSuspension.frame_bR.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_4250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2923]] /* vehicle.frontSuspension.cornerR.upright.frame_a.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2284]] /* vehicle.frontSuspension.cornerR.jointUSR.frame_ia.r_0[2] DUMMY_STATE */) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3041]] /* vehicle.frontSuspension.frame_bR.R.T[1,2] variable */)) + (0.15000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3044]] /* vehicle.frontSuspension.frame_bR.R.T[2,2] variable */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3047]] /* vehicle.frontSuspension.frame_bR.R.T[3,2] variable */));
  TRACE_POP
}

/*
equation index: 4251
type: SIMPLE_ASSIGN
vehicle.wheelFR.contactPatch.frame_a.r_0[2] = vehicle.frontSuspension.cornerR.upright.frame_a.r_0[2]
*/
void AlyssaVehicle_eqFunction_4251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5177]] /* vehicle.wheelFR.contactPatch.frame_a.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2923]] /* vehicle.frontSuspension.cornerR.upright.frame_a.r_0[2] DUMMY_STATE */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8628(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8627(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8626(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8633(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8632(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8631(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8590(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8591(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8620(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8621(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8623(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8622(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8616(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8617(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8619(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8618(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8612(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8613(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8630(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8615(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8614(DATA *data, threadData_t *threadData);


/*
equation index: 4273
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,2] = ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelFR.rim.rotor1D.phi) - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[1,2] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelFR.rim.rotor1D.phi) - vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[2,2] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_4273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4273};
  real_array tmp1417;
  real_array tmp1418;
  real_array tmp1419;
  real_array tmp1420;
  real_array tmp1421;
  real_array tmp1422;
  real_array tmp1423;
  real_array tmp1424;
  real_array tmp1425;
  real_array tmp1426;
  real_array tmp1427;
  real_array tmp1428;
  real_array tmp1429;
  real_array tmp1430;
  real_array tmp1431;
  real_array tmp1432;
  real_array tmp1433;
  real_array tmp1434;
  real_array tmp1435;
  real_array tmp1436;
  real_array tmp1437;
  real_array tmp1438;
  real_array tmp1439;
  real_array tmp1440;
  real_array tmp1441;
  real_array tmp1442;
  real_array tmp1443;
  real_array tmp1444;
  real_array tmp1445;
  real_array tmp1446;
  real_array_create(&tmp1417, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1417, ((modelica_integer) 2) - ndims_base_array(&tmp1417), &tmp1418);
  real_array_create(&tmp1419, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1419, ((modelica_integer) 2) - ndims_base_array(&tmp1419), &tmp1420);
  transpose_alloc_real_array(&tmp1420, &tmp1421);
  real_array_create(&tmp1422, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1422, ((modelica_integer) 2) - ndims_base_array(&tmp1422), &tmp1423);
  real_array_create(&tmp1424, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1424, ((modelica_integer) 2) - ndims_base_array(&tmp1424), &tmp1425);
  transpose_alloc_real_array(&tmp1425, &tmp1426);
  real_array_create(&tmp1427, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1427, ((modelica_integer) 2) - ndims_base_array(&tmp1427), &tmp1428);
  real_array_create(&tmp1429, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1429, ((modelica_integer) 2) - ndims_base_array(&tmp1429), &tmp1430);
  transpose_alloc_real_array(&tmp1430, &tmp1431);
  real_array_create(&tmp1432, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1432, ((modelica_integer) 2) - ndims_base_array(&tmp1432), &tmp1433);
  real_array_create(&tmp1434, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1434, ((modelica_integer) 2) - ndims_base_array(&tmp1434), &tmp1435);
  transpose_alloc_real_array(&tmp1435, &tmp1436);
  real_array_create(&tmp1437, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1437, ((modelica_integer) 2) - ndims_base_array(&tmp1437), &tmp1438);
  real_array_create(&tmp1439, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1439, ((modelica_integer) 2) - ndims_base_array(&tmp1439), &tmp1440);
  transpose_alloc_real_array(&tmp1440, &tmp1441);
  real_array_create(&tmp1442, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1442, ((modelica_integer) 2) - ndims_base_array(&tmp1442), &tmp1443);
  real_array_create(&tmp1444, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1444, ((modelica_integer) 2) - ndims_base_array(&tmp1444), &tmp1445);
  transpose_alloc_real_array(&tmp1445, &tmp1446);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5231]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[3,2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1418, tmp1421), 2, 0) + ((data->simulationInfo->realParameter[3666] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1423, tmp1426), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3041]] /* vehicle.frontSuspension.frame_bR.R.T[1,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1428, tmp1431), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp1433, tmp1436), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3044]] /* vehicle.frontSuspension.frame_bR.R.T[2,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1438, tmp1441), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1443, tmp1446), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3047]] /* vehicle.frontSuspension.frame_bR.R.T[3,2] variable */));
  TRACE_POP
}

/*
equation index: 4274
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,2] = ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelFR.rim.rotor1D.phi) - vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[1,2] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[2,2] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelFR.rim.rotor1D.phi) - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_4274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4274};
  real_array tmp1447;
  real_array tmp1448;
  real_array tmp1449;
  real_array tmp1450;
  real_array tmp1451;
  real_array tmp1452;
  real_array tmp1453;
  real_array tmp1454;
  real_array tmp1455;
  real_array tmp1456;
  real_array tmp1457;
  real_array tmp1458;
  real_array tmp1459;
  real_array tmp1460;
  real_array tmp1461;
  real_array tmp1462;
  real_array tmp1463;
  real_array tmp1464;
  real_array tmp1465;
  real_array tmp1466;
  real_array tmp1467;
  real_array tmp1468;
  real_array tmp1469;
  real_array tmp1470;
  real_array tmp1471;
  real_array tmp1472;
  real_array tmp1473;
  real_array tmp1474;
  real_array tmp1475;
  real_array tmp1476;
  real_array_create(&tmp1447, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1447, ((modelica_integer) 2) - ndims_base_array(&tmp1447), &tmp1448);
  real_array_create(&tmp1449, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1449, ((modelica_integer) 2) - ndims_base_array(&tmp1449), &tmp1450);
  transpose_alloc_real_array(&tmp1450, &tmp1451);
  real_array_create(&tmp1452, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1452, ((modelica_integer) 2) - ndims_base_array(&tmp1452), &tmp1453);
  real_array_create(&tmp1454, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1454, ((modelica_integer) 2) - ndims_base_array(&tmp1454), &tmp1455);
  transpose_alloc_real_array(&tmp1455, &tmp1456);
  real_array_create(&tmp1457, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1457, ((modelica_integer) 2) - ndims_base_array(&tmp1457), &tmp1458);
  real_array_create(&tmp1459, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1459, ((modelica_integer) 2) - ndims_base_array(&tmp1459), &tmp1460);
  transpose_alloc_real_array(&tmp1460, &tmp1461);
  real_array_create(&tmp1462, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1462, ((modelica_integer) 2) - ndims_base_array(&tmp1462), &tmp1463);
  real_array_create(&tmp1464, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1464, ((modelica_integer) 2) - ndims_base_array(&tmp1464), &tmp1465);
  transpose_alloc_real_array(&tmp1465, &tmp1466);
  real_array_create(&tmp1467, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1467, ((modelica_integer) 2) - ndims_base_array(&tmp1467), &tmp1468);
  real_array_create(&tmp1469, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1469, ((modelica_integer) 2) - ndims_base_array(&tmp1469), &tmp1470);
  transpose_alloc_real_array(&tmp1470, &tmp1471);
  real_array_create(&tmp1472, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1472, ((modelica_integer) 2) - ndims_base_array(&tmp1472), &tmp1473);
  real_array_create(&tmp1474, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1474, ((modelica_integer) 2) - ndims_base_array(&tmp1474), &tmp1475);
  transpose_alloc_real_array(&tmp1475, &tmp1476);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5228]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[2,2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1448, tmp1451), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp1453, tmp1456), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3667] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3041]] /* vehicle.frontSuspension.frame_bR.R.T[1,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1458, tmp1461), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1463, tmp1466), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3044]] /* vehicle.frontSuspension.frame_bR.R.T[2,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1468, tmp1471), 1, 2) + ((data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1473, tmp1476), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3047]] /* vehicle.frontSuspension.frame_bR.R.T[3,2] variable */));
  TRACE_POP
}

/*
equation index: 4275
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,2] = ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[1,2] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelFR.rim.rotor1D.phi) - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[2,2] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelFR.rim.rotor1D.phi) - vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.frontSuspension.frame_bR.R.T[3,2]
*/
void AlyssaVehicle_eqFunction_4275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4275};
  real_array tmp1477;
  real_array tmp1478;
  real_array tmp1479;
  real_array tmp1480;
  real_array tmp1481;
  real_array tmp1482;
  real_array tmp1483;
  real_array tmp1484;
  real_array tmp1485;
  real_array tmp1486;
  real_array tmp1487;
  real_array tmp1488;
  real_array tmp1489;
  real_array tmp1490;
  real_array tmp1491;
  real_array tmp1492;
  real_array tmp1493;
  real_array tmp1494;
  real_array tmp1495;
  real_array tmp1496;
  real_array tmp1497;
  real_array tmp1498;
  real_array tmp1499;
  real_array tmp1500;
  real_array tmp1501;
  real_array tmp1502;
  real_array tmp1503;
  real_array tmp1504;
  real_array tmp1505;
  real_array tmp1506;
  real_array_create(&tmp1477, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1477, ((modelica_integer) 2) - ndims_base_array(&tmp1477), &tmp1478);
  real_array_create(&tmp1479, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1479, ((modelica_integer) 2) - ndims_base_array(&tmp1479), &tmp1480);
  transpose_alloc_real_array(&tmp1480, &tmp1481);
  real_array_create(&tmp1482, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1482, ((modelica_integer) 2) - ndims_base_array(&tmp1482), &tmp1483);
  real_array_create(&tmp1484, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1484, ((modelica_integer) 2) - ndims_base_array(&tmp1484), &tmp1485);
  transpose_alloc_real_array(&tmp1485, &tmp1486);
  real_array_create(&tmp1487, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1487, ((modelica_integer) 2) - ndims_base_array(&tmp1487), &tmp1488);
  real_array_create(&tmp1489, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1489, ((modelica_integer) 2) - ndims_base_array(&tmp1489), &tmp1490);
  transpose_alloc_real_array(&tmp1490, &tmp1491);
  real_array_create(&tmp1492, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1492, ((modelica_integer) 2) - ndims_base_array(&tmp1492), &tmp1493);
  real_array_create(&tmp1494, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1494, ((modelica_integer) 2) - ndims_base_array(&tmp1494), &tmp1495);
  transpose_alloc_real_array(&tmp1495, &tmp1496);
  real_array_create(&tmp1497, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1497, ((modelica_integer) 2) - ndims_base_array(&tmp1497), &tmp1498);
  real_array_create(&tmp1499, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1499, ((modelica_integer) 2) - ndims_base_array(&tmp1499), &tmp1500);
  transpose_alloc_real_array(&tmp1500, &tmp1501);
  real_array_create(&tmp1502, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1502, ((modelica_integer) 2) - ndims_base_array(&tmp1502), &tmp1503);
  real_array_create(&tmp1504, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1504, ((modelica_integer) 2) - ndims_base_array(&tmp1504), &tmp1505);
  transpose_alloc_real_array(&tmp1505, &tmp1506);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5225]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.T[1,2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1478, tmp1481), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1483, tmp1486), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3041]] /* vehicle.frontSuspension.frame_bR.R.T[1,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1488, tmp1491), 0, 1) + ((data->simulationInfo->realParameter[3667] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1493, tmp1496), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3044]] /* vehicle.frontSuspension.frame_bR.R.T[2,2] variable */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1498, tmp1501), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp1503, tmp1506), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3666] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3047]] /* vehicle.frontSuspension.frame_bR.R.T[3,2] variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8599(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8735(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8737(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8740(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8756(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8786(DATA *data, threadData_t *threadData);


/*
equation index: 4282
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.R_rel.w[3] = vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[3] + (-vehicle.frontSuspension.frame_bR.R.T[3,2]) * (vehicle.chassisFrame.R.T[1,2] * vehicle.vehicleBody.body.w_a[1] + vehicle.chassisFrame.R.T[2,2] * vehicle.vehicleBody.body.w_a[2] + vehicle.chassisFrame.R.T[3,2] * vehicle.vehicleBody.body.w_a[3]) - vehicle.frontSuspension.frame_bR.R.T[3,3] * (vehicle.chassisFrame.R.T[1,3] * vehicle.vehicleBody.body.w_a[1] + vehicle.chassisFrame.R.T[2,3] * vehicle.vehicleBody.body.w_a[2] + vehicle.chassisFrame.R.T[3,3] * vehicle.vehicleBody.body.w_a[3]) - vehicle.frontSuspension.frame_bR.R.T[3,1] * (vehicle.chassisFrame.R.T[1,1] * vehicle.vehicleBody.body.w_a[1] + vehicle.chassisFrame.R.T[2,1] * vehicle.vehicleBody.body.w_a[2] + vehicle.chassisFrame.R.T[3,1] * vehicle.vehicleBody.body.w_a[3])
*/
void AlyssaVehicle_eqFunction_4282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4282};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2973]] /* vehicle.frontSuspension.cornerR.wheelAngles.R_rel.w[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5254]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3047]] /* vehicle.frontSuspension.frame_bR.R.T[3,2] variable */))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* vehicle.chassisFrame.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5035]] /* vehicle.vehicleBody.body.w_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3048]] /* vehicle.frontSuspension.frame_bR.R.T[3,3] variable */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1313]] /* vehicle.chassisFrame.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5035]] /* vehicle.vehicleBody.body.w_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */)))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3046]] /* vehicle.frontSuspension.frame_bR.R.T[3,1] variable */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* vehicle.chassisFrame.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5035]] /* vehicle.vehicleBody.body.w_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8739(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8753(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8755(DATA *data, threadData_t *threadData);


/*
equation index: 4286
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.R_rel.w[2] = vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[2] + (-vehicle.frontSuspension.frame_bR.R.T[2,2]) * (vehicle.chassisFrame.R.T[1,2] * vehicle.vehicleBody.body.w_a[1] + vehicle.chassisFrame.R.T[2,2] * vehicle.vehicleBody.body.w_a[2] + vehicle.chassisFrame.R.T[3,2] * vehicle.vehicleBody.body.w_a[3]) - vehicle.frontSuspension.frame_bR.R.T[2,3] * (vehicle.chassisFrame.R.T[1,3] * vehicle.vehicleBody.body.w_a[1] + vehicle.chassisFrame.R.T[2,3] * vehicle.vehicleBody.body.w_a[2] + vehicle.chassisFrame.R.T[3,3] * vehicle.vehicleBody.body.w_a[3]) - vehicle.frontSuspension.frame_bR.R.T[2,1] * (vehicle.chassisFrame.R.T[1,1] * vehicle.vehicleBody.body.w_a[1] + vehicle.chassisFrame.R.T[2,1] * vehicle.vehicleBody.body.w_a[2] + vehicle.chassisFrame.R.T[3,1] * vehicle.vehicleBody.body.w_a[3])
*/
void AlyssaVehicle_eqFunction_4286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4286};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2972]] /* vehicle.frontSuspension.cornerR.wheelAngles.R_rel.w[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5253]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3044]] /* vehicle.frontSuspension.frame_bR.R.T[2,2] variable */))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* vehicle.chassisFrame.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5035]] /* vehicle.vehicleBody.body.w_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3045]] /* vehicle.frontSuspension.frame_bR.R.T[2,3] variable */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1313]] /* vehicle.chassisFrame.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5035]] /* vehicle.vehicleBody.body.w_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */)))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3043]] /* vehicle.frontSuspension.frame_bR.R.T[2,1] variable */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* vehicle.chassisFrame.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5035]] /* vehicle.vehicleBody.body.w_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8738(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8750(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8752(DATA *data, threadData_t *threadData);


/*
equation index: 4290
type: SIMPLE_ASSIGN
vehicle.frontSuspension.cornerR.wheelAngles.R_rel.w[1] = vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[1] + (-vehicle.frontSuspension.frame_bR.R.T[1,2]) * (vehicle.chassisFrame.R.T[1,2] * vehicle.vehicleBody.body.w_a[1] + vehicle.chassisFrame.R.T[2,2] * vehicle.vehicleBody.body.w_a[2] + vehicle.chassisFrame.R.T[3,2] * vehicle.vehicleBody.body.w_a[3]) - vehicle.frontSuspension.frame_bR.R.T[1,3] * (vehicle.chassisFrame.R.T[1,3] * vehicle.vehicleBody.body.w_a[1] + vehicle.chassisFrame.R.T[2,3] * vehicle.vehicleBody.body.w_a[2] + vehicle.chassisFrame.R.T[3,3] * vehicle.vehicleBody.body.w_a[3]) - vehicle.frontSuspension.frame_bR.R.T[1,1] * (vehicle.chassisFrame.R.T[1,1] * vehicle.vehicleBody.body.w_a[1] + vehicle.chassisFrame.R.T[2,1] * vehicle.vehicleBody.body.w_a[2] + vehicle.chassisFrame.R.T[3,1] * vehicle.vehicleBody.body.w_a[3])
*/
void AlyssaVehicle_eqFunction_4290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2971]] /* vehicle.frontSuspension.cornerR.wheelAngles.R_rel.w[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5252]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3041]] /* vehicle.frontSuspension.frame_bR.R.T[1,2] variable */))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* vehicle.chassisFrame.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5035]] /* vehicle.vehicleBody.body.w_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* vehicle.chassisFrame.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* vehicle.chassisFrame.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3042]] /* vehicle.frontSuspension.frame_bR.R.T[1,3] variable */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1313]] /* vehicle.chassisFrame.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5035]] /* vehicle.vehicleBody.body.w_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* vehicle.chassisFrame.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* vehicle.chassisFrame.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */)))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3040]] /* vehicle.frontSuspension.frame_bR.R.T[1,1] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* vehicle.chassisFrame.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5035]] /* vehicle.vehicleBody.body.w_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* vehicle.chassisFrame.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* vehicle.vehicleBody.body.w_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* vehicle.chassisFrame.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* vehicle.vehicleBody.body.w_a[3] DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 4291
type: LINEAR

<var>vehicle.frontSuspension.cornerR.wheelAngles.angles[3]</var>
<var>vehicle.frontSuspension.cornerR.camber</var>
<var>vehicle.frontSuspension.cornerR.toe</var>
<row>
  <cell>Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(vehicle.frontSuspension.cornerR.wheelAngles.R_rel, {3, 1, 2}, vehicle.frontSuspension.cornerR.wheelAngles.guessAngle1)[1]</cell>
  <cell>Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(vehicle.frontSuspension.cornerR.wheelAngles.R_rel, {3, 1, 2}, vehicle.frontSuspension.cornerR.wheelAngles.guessAngle1)[2]</cell>
  <cell>Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(vehicle.frontSuspension.cornerR.wheelAngles.R_rel, {3, 1, 2}, vehicle.frontSuspension.cornerR.wheelAngles.guessAngle1)[3]</cell>
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
void AlyssaVehicle_eqFunction_4291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4291};
  /* Linear equation system */
  int retValue;
  double aux_x[3] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2974]] /* vehicle.frontSuspension.cornerR.wheelAngles.angles[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2174]] /* vehicle.frontSuspension.cornerR.camber variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2831]] /* vehicle.frontSuspension.cornerR.toe variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 4291 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 7, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,4291};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 4291 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2974]] /* vehicle.frontSuspension.cornerR.wheelAngles.angles[3] variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2174]] /* vehicle.frontSuspension.cornerR.camber variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2831]] /* vehicle.frontSuspension.cornerR.toe variable */) = aux_x[2];

  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8759(DATA *data, threadData_t *threadData);


/*
equation index: 4293
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[3] = ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] + vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelFR.rim.rotor1D.phi) - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 1] * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[1] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2] + (-(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 2]) * cos(vehicle.wheelFR.rim.rotor1D.phi) - vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[2] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3] + (1.0 - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[3, 3]) * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[3]
*/
void AlyssaVehicle_eqFunction_4293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4293};
  real_array tmp1507;
  real_array tmp1508;
  real_array tmp1509;
  real_array tmp1510;
  real_array tmp1511;
  real_array tmp1512;
  real_array tmp1513;
  real_array tmp1514;
  real_array tmp1515;
  real_array tmp1516;
  real_array tmp1517;
  real_array tmp1518;
  real_array tmp1519;
  real_array tmp1520;
  real_array tmp1521;
  real_array tmp1522;
  real_array tmp1523;
  real_array tmp1524;
  real_array tmp1525;
  real_array tmp1526;
  real_array tmp1527;
  real_array tmp1528;
  real_array tmp1529;
  real_array tmp1530;
  real_array tmp1531;
  real_array tmp1532;
  real_array tmp1533;
  real_array tmp1534;
  real_array tmp1535;
  real_array tmp1536;
  real_array_create(&tmp1507, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1507, ((modelica_integer) 2) - ndims_base_array(&tmp1507), &tmp1508);
  real_array_create(&tmp1509, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1509, ((modelica_integer) 2) - ndims_base_array(&tmp1509), &tmp1510);
  transpose_alloc_real_array(&tmp1510, &tmp1511);
  real_array_create(&tmp1512, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1512, ((modelica_integer) 2) - ndims_base_array(&tmp1512), &tmp1513);
  real_array_create(&tmp1514, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1514, ((modelica_integer) 2) - ndims_base_array(&tmp1514), &tmp1515);
  transpose_alloc_real_array(&tmp1515, &tmp1516);
  real_array_create(&tmp1517, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1517, ((modelica_integer) 2) - ndims_base_array(&tmp1517), &tmp1518);
  real_array_create(&tmp1519, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1519, ((modelica_integer) 2) - ndims_base_array(&tmp1519), &tmp1520);
  transpose_alloc_real_array(&tmp1520, &tmp1521);
  real_array_create(&tmp1522, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1522, ((modelica_integer) 2) - ndims_base_array(&tmp1522), &tmp1523);
  real_array_create(&tmp1524, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1524, ((modelica_integer) 2) - ndims_base_array(&tmp1524), &tmp1525);
  transpose_alloc_real_array(&tmp1525, &tmp1526);
  real_array_create(&tmp1527, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1527, ((modelica_integer) 2) - ndims_base_array(&tmp1527), &tmp1528);
  real_array_create(&tmp1529, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1529, ((modelica_integer) 2) - ndims_base_array(&tmp1529), &tmp1530);
  transpose_alloc_real_array(&tmp1530, &tmp1531);
  real_array_create(&tmp1532, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1532, ((modelica_integer) 2) - ndims_base_array(&tmp1532), &tmp1533);
  real_array_create(&tmp1534, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1534, ((modelica_integer) 2) - ndims_base_array(&tmp1534), &tmp1535);
  transpose_alloc_real_array(&tmp1535, &tmp1536);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5235]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[3] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1508, tmp1511), 2, 0) + ((data->simulationInfo->realParameter[3666] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1513, tmp1516), 2, 0)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5252]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1518, tmp1521), 2, 1) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp1523, tmp1526), 2, 1)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5253]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1528, tmp1531), 2, 2) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1533, tmp1536), 2, 2))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5254]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4294
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[2] = ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1] + (-(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 1]) * cos(vehicle.wheelFR.rim.rotor1D.phi) - vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[1] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2] + (1.0 - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 2]) * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[2] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] + vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] * sin(vehicle.wheelFR.rim.rotor1D.phi) - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[2, 3] * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[3]
*/
void AlyssaVehicle_eqFunction_4294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4294};
  real_array tmp1537;
  real_array tmp1538;
  real_array tmp1539;
  real_array tmp1540;
  real_array tmp1541;
  real_array tmp1542;
  real_array tmp1543;
  real_array tmp1544;
  real_array tmp1545;
  real_array tmp1546;
  real_array tmp1547;
  real_array tmp1548;
  real_array tmp1549;
  real_array tmp1550;
  real_array tmp1551;
  real_array tmp1552;
  real_array tmp1553;
  real_array tmp1554;
  real_array tmp1555;
  real_array tmp1556;
  real_array tmp1557;
  real_array tmp1558;
  real_array tmp1559;
  real_array tmp1560;
  real_array tmp1561;
  real_array tmp1562;
  real_array tmp1563;
  real_array tmp1564;
  real_array tmp1565;
  real_array tmp1566;
  real_array_create(&tmp1537, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1537, ((modelica_integer) 2) - ndims_base_array(&tmp1537), &tmp1538);
  real_array_create(&tmp1539, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1539, ((modelica_integer) 2) - ndims_base_array(&tmp1539), &tmp1540);
  transpose_alloc_real_array(&tmp1540, &tmp1541);
  real_array_create(&tmp1542, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1542, ((modelica_integer) 2) - ndims_base_array(&tmp1542), &tmp1543);
  real_array_create(&tmp1544, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1544, ((modelica_integer) 2) - ndims_base_array(&tmp1544), &tmp1545);
  transpose_alloc_real_array(&tmp1545, &tmp1546);
  real_array_create(&tmp1547, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1547, ((modelica_integer) 2) - ndims_base_array(&tmp1547), &tmp1548);
  real_array_create(&tmp1549, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1549, ((modelica_integer) 2) - ndims_base_array(&tmp1549), &tmp1550);
  transpose_alloc_real_array(&tmp1550, &tmp1551);
  real_array_create(&tmp1552, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1552, ((modelica_integer) 2) - ndims_base_array(&tmp1552), &tmp1553);
  real_array_create(&tmp1554, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1554, ((modelica_integer) 2) - ndims_base_array(&tmp1554), &tmp1555);
  transpose_alloc_real_array(&tmp1555, &tmp1556);
  real_array_create(&tmp1557, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1557, ((modelica_integer) 2) - ndims_base_array(&tmp1557), &tmp1558);
  real_array_create(&tmp1559, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1559, ((modelica_integer) 2) - ndims_base_array(&tmp1559), &tmp1560);
  transpose_alloc_real_array(&tmp1560, &tmp1561);
  real_array_create(&tmp1562, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1562, ((modelica_integer) 2) - ndims_base_array(&tmp1562), &tmp1563);
  real_array_create(&tmp1564, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1564, ((modelica_integer) 2) - ndims_base_array(&tmp1564), &tmp1565);
  transpose_alloc_real_array(&tmp1565, &tmp1566);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5234]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[2] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1538, tmp1541), 1, 0) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp1543, tmp1546), 1, 0)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3667] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5252]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1548, tmp1551), 1, 1) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1553, tmp1556), 1, 1))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5253]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1558, tmp1561), 1, 2) + ((data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1563, tmp1566), 1, 2)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5254]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4295
type: SIMPLE_ASSIGN
vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[1] = ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1] + (1.0 - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 1]) * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[1] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] + vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3] * sin(vehicle.wheelFR.rim.rotor1D.phi) - (promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 2] * cos(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[2] + ((promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3] + (-(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2) * transpose(promote(vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e, 2)))[1, 3]) * cos(vehicle.wheelFR.rim.rotor1D.phi) - vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2] * sin(vehicle.wheelFR.rim.rotor1D.phi)) * vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[3]
*/
void AlyssaVehicle_eqFunction_4295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4295};
  real_array tmp1567;
  real_array tmp1568;
  real_array tmp1569;
  real_array tmp1570;
  real_array tmp1571;
  real_array tmp1572;
  real_array tmp1573;
  real_array tmp1574;
  real_array tmp1575;
  real_array tmp1576;
  real_array tmp1577;
  real_array tmp1578;
  real_array tmp1579;
  real_array tmp1580;
  real_array tmp1581;
  real_array tmp1582;
  real_array tmp1583;
  real_array tmp1584;
  real_array tmp1585;
  real_array tmp1586;
  real_array tmp1587;
  real_array tmp1588;
  real_array tmp1589;
  real_array tmp1590;
  real_array tmp1591;
  real_array tmp1592;
  real_array tmp1593;
  real_array tmp1594;
  real_array tmp1595;
  real_array tmp1596;
  real_array_create(&tmp1567, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1567, ((modelica_integer) 2) - ndims_base_array(&tmp1567), &tmp1568);
  real_array_create(&tmp1569, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1569, ((modelica_integer) 2) - ndims_base_array(&tmp1569), &tmp1570);
  transpose_alloc_real_array(&tmp1570, &tmp1571);
  real_array_create(&tmp1572, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1572, ((modelica_integer) 2) - ndims_base_array(&tmp1572), &tmp1573);
  real_array_create(&tmp1574, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1574, ((modelica_integer) 2) - ndims_base_array(&tmp1574), &tmp1575);
  transpose_alloc_real_array(&tmp1575, &tmp1576);
  real_array_create(&tmp1577, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1577, ((modelica_integer) 2) - ndims_base_array(&tmp1577), &tmp1578);
  real_array_create(&tmp1579, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1579, ((modelica_integer) 2) - ndims_base_array(&tmp1579), &tmp1580);
  transpose_alloc_real_array(&tmp1580, &tmp1581);
  real_array_create(&tmp1582, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1582, ((modelica_integer) 2) - ndims_base_array(&tmp1582), &tmp1583);
  real_array_create(&tmp1584, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1584, ((modelica_integer) 2) - ndims_base_array(&tmp1584), &tmp1585);
  transpose_alloc_real_array(&tmp1585, &tmp1586);
  real_array_create(&tmp1587, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1587, ((modelica_integer) 2) - ndims_base_array(&tmp1587), &tmp1588);
  real_array_create(&tmp1589, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1589, ((modelica_integer) 2) - ndims_base_array(&tmp1589), &tmp1590);
  transpose_alloc_real_array(&tmp1590, &tmp1591);
  real_array_create(&tmp1592, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1592, ((modelica_integer) 2) - ndims_base_array(&tmp1592), &tmp1593);
  real_array_create(&tmp1594, ((modelica_real*)&((&data->simulationInfo->realParameter[3665] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  promote_alloc_real_array(&tmp1594, ((modelica_integer) 2) - ndims_base_array(&tmp1594), &tmp1595);
  transpose_alloc_real_array(&tmp1595, &tmp1596);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5233]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.cylinder.R.w[1] variable */) = (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1568, tmp1571), 0, 0) + (1.0 - (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1573, tmp1576), 0, 0))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5252]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1578, tmp1581), 0, 1) + ((data->simulationInfo->realParameter[3667] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - ((real_get_2D(mul_alloc_real_matrix_product_smart(tmp1583, tmp1586), 0, 1)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5253]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) + (real_get_2D(mul_alloc_real_matrix_product_smart(tmp1588, tmp1591), 0, 2) + ((-(real_get_2D(mul_alloc_real_matrix_product_smart(tmp1593, tmp1596), 0, 2)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))) - (((data->simulationInfo->realParameter[3666] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* vehicle.wheelFR.rim.rotor1D.phi STATE(1,vehicle.wheelFR.rim.rotor1D.w) */))))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5254]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[3] DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8763(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8774(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8773(DATA *data, threadData_t *threadData);


/*
equation index: 4299
type: SIMPLE_ASSIGN
$DER.vehicle.wheelFR.contactPatch.pen = 0.5 * ($DER.vehicle.wheelFR.contactPatch.frame_a.r_0[3] + (vehicle.wheelFR.contactPatch.r0 + vehicle.wheelFR.contactPatch.frame_a.r_0[3] - road.z0) * $DER.vehicle.wheelFR.contactPatch.frame_a.r_0[3] / sqrt((vehicle.wheelFR.contactPatch.r0 + vehicle.wheelFR.contactPatch.frame_a.r_0[3] - road.z0) ^ 2.0 + 1e-12))
*/
void AlyssaVehicle_eqFunction_4299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4299};
  modelica_real tmp1597;
  modelica_real tmp1598;
  tmp1597 = (data->simulationInfo->realParameter[3625] /* vehicle.wheelFR.contactPatch.r0 PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5178]] /* vehicle.wheelFR.contactPatch.frame_a.r_0[3] DUMMY_STATE */) - (data->simulationInfo->realParameter[410] /* road.z0 PARAM */);
  tmp1598 = (tmp1597 * tmp1597) + 1e-12;
  if(!(tmp1598 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt((vehicle.wheelFR.contactPatch.r0 + vehicle.wheelFR.contactPatch.frame_a.r_0[3] - road.z0) ^ 2.0 + 1e-12) was %g should be >= 0", tmp1598);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* der(vehicle.wheelFR.contactPatch.pen) DUMMY_DER */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* der(vehicle.wheelFR.contactPatch.frame_a.r_0[3]) DUMMY_DER */) + ((data->simulationInfo->realParameter[3625] /* vehicle.wheelFR.contactPatch.r0 PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5178]] /* vehicle.wheelFR.contactPatch.frame_a.r_0[3] DUMMY_STATE */) - (data->simulationInfo->realParameter[410] /* road.z0 PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* der(vehicle.wheelFR.contactPatch.frame_a.r_0[3]) DUMMY_DER */),sqrt(tmp1598),"sqrt((vehicle.wheelFR.contactPatch.r0 + vehicle.wheelFR.contactPatch.frame_a.r_0[3] - road.z0) ^ 2.0 + 1e-12)",equationIndexes)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8765(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8772(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8767(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8769(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8770(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8768(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8771(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8775(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8785(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8784(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8760(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8762(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8761(DATA *data, threadData_t *threadData);


/*
equation index: 4313
type: SIMPLE_ASSIGN
vehicle.wheelFR.contactPatch.vC[3] = vehicle.frontSuspension.frame_bR.R.T[3,1] * $DER.vehicle.wheelFR.contactPatch.frame_a.r_0[1] + vehicle.frontSuspension.frame_bR.R.T[3,2] * $DER.vehicle.wheelFR.contactPatch.frame_a.r_0[2] + vehicle.frontSuspension.frame_bR.R.T[3,3] * $DER.vehicle.wheelFR.contactPatch.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_4313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4313};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5184]] /* vehicle.wheelFR.contactPatch.vC[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3046]] /* vehicle.frontSuspension.frame_bR.R.T[3,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* der(vehicle.wheelFR.contactPatch.frame_a.r_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3047]] /* vehicle.frontSuspension.frame_bR.R.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* der(vehicle.wheelFR.contactPatch.frame_a.r_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3048]] /* vehicle.frontSuspension.frame_bR.R.T[3,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* der(vehicle.wheelFR.contactPatch.frame_a.r_0[3]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 4314
type: SIMPLE_ASSIGN
vehicle.wheelFR.contactPatch.vHub[2] = vehicle.frontSuspension.frame_bR.R.T[2,1] * $DER.vehicle.wheelFR.contactPatch.frame_a.r_0[1] + vehicle.frontSuspension.frame_bR.R.T[2,2] * $DER.vehicle.wheelFR.contactPatch.frame_a.r_0[2] + vehicle.frontSuspension.frame_bR.R.T[2,3] * $DER.vehicle.wheelFR.contactPatch.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_4314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4314};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5186]] /* vehicle.wheelFR.contactPatch.vHub[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3043]] /* vehicle.frontSuspension.frame_bR.R.T[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* der(vehicle.wheelFR.contactPatch.frame_a.r_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3044]] /* vehicle.frontSuspension.frame_bR.R.T[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* der(vehicle.wheelFR.contactPatch.frame_a.r_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3045]] /* vehicle.frontSuspension.frame_bR.R.T[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* der(vehicle.wheelFR.contactPatch.frame_a.r_0[3]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 4315
type: SIMPLE_ASSIGN
vehicle.wheelFR.contactPatch.vy = vehicle.wheelFR.contactPatch.vHub[2] - vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[1] * vehicle.wheelFR.contactPatch.rEff
*/
void AlyssaVehicle_eqFunction_4315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4315};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5188]] /* vehicle.wheelFR.contactPatch.vy variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5186]] /* vehicle.wheelFR.contactPatch.vHub[2] variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5252]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[3626] /* vehicle.wheelFR.contactPatch.rEff PARAM */)));
  TRACE_POP
}

/*
equation index: 4316
type: SIMPLE_ASSIGN
vehicle.wheelFR.contactPatch.vHub[1] = vehicle.frontSuspension.frame_bR.R.T[1,1] * $DER.vehicle.wheelFR.contactPatch.frame_a.r_0[1] + vehicle.frontSuspension.frame_bR.R.T[1,2] * $DER.vehicle.wheelFR.contactPatch.frame_a.r_0[2] + vehicle.frontSuspension.frame_bR.R.T[1,3] * $DER.vehicle.wheelFR.contactPatch.frame_a.r_0[3]
*/
void AlyssaVehicle_eqFunction_4316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4316};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5185]] /* vehicle.wheelFR.contactPatch.vHub[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3040]] /* vehicle.frontSuspension.frame_bR.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* der(vehicle.wheelFR.contactPatch.frame_a.r_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3041]] /* vehicle.frontSuspension.frame_bR.R.T[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* der(vehicle.wheelFR.contactPatch.frame_a.r_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3042]] /* vehicle.frontSuspension.frame_bR.R.T[1,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* der(vehicle.wheelFR.contactPatch.frame_a.r_0[3]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 4317
type: SIMPLE_ASSIGN
vehicle.wheelFR.contactPatch.vx = vehicle.wheelFR.contactPatch.vHub[1] + vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[2] * vehicle.wheelFR.contactPatch.rEff
*/
void AlyssaVehicle_eqFunction_4317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4317};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5187]] /* vehicle.wheelFR.contactPatch.vx variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5185]] /* vehicle.wheelFR.contactPatch.vHub[1] variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5253]] /* vehicle.wheelFR.rim.rotor1D.rotorWith3DEffects.w_a[2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[3626] /* vehicle.wheelFR.contactPatch.rEff PARAM */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8781(DATA *data, threadData_t *threadData);


/*
equation index: 4319
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[3,3] = 0.07337367624810887 * (-sin(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)) * $DER.vehicle.frontSuspension.cornerR.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_4319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4319};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[3,3]) DUMMY_DER */) = (0.07337367624810887) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4320
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[3,2] = (-0.2382753403933434) * (-sin(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)) * $DER.vehicle.frontSuspension.cornerR.tieRod.revolute.angle + (-0.11001306482721843) * cos(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) * $DER.vehicle.frontSuspension.cornerR.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_4320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4320};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[3,2]) DUMMY_DER */) = (-0.2382753403933434) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */))) + (-0.11001306482721843) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4321
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[3,1] = (-0.10590015128593043) * (-sin(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)) * $DER.vehicle.frontSuspension.cornerR.tieRod.revolute.angle + 0.24752939586124137 * cos(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) * $DER.vehicle.frontSuspension.cornerR.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_4321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4321};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[3,1]) DUMMY_DER */) = (-0.10590015128593043) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */))) + (0.24752939586124137) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4322
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[2,3] = (-0.2382753403933434) * (-sin(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)) * $DER.vehicle.frontSuspension.cornerR.tieRod.revolute.angle + 0.11001306482721843 * cos(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) * $DER.vehicle.frontSuspension.cornerR.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_4322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4322};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[2,3]) DUMMY_DER */) = (-0.2382753403933434) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */))) + (0.11001306482721843) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4323
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[2,2] = 0.9387291981845689 * (-sin(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)) * $DER.vehicle.frontSuspension.cornerR.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_4323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4323};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[2,2]) DUMMY_DER */) = (0.9387291981845689) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4324
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[2,1] = (-0.027231467473524958) * (-sin(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)) * $DER.vehicle.frontSuspension.cornerR.tieRod.revolute.angle + (-0.9626143172381612) * cos(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) * $DER.vehicle.frontSuspension.cornerR.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_4324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[2,1]) DUMMY_DER */) = (-0.027231467473524958) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */))) + (-0.9626143172381612) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4325
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[1,3] = (-0.10590015128593043) * (-sin(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)) * $DER.vehicle.frontSuspension.cornerR.tieRod.revolute.angle + (-0.24752939586124137) * cos(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) * $DER.vehicle.frontSuspension.cornerR.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_4325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4325};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[1,3]) DUMMY_DER */) = (-0.10590015128593043) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */))) + (-0.24752939586124137) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4326
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[1,2] = (-0.027231467473524958) * (-sin(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)) * $DER.vehicle.frontSuspension.cornerR.tieRod.revolute.angle + 0.9626143172381612 * cos(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) * $DER.vehicle.frontSuspension.cornerR.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_4326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4326};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[601]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[1,2]) DUMMY_DER */) = (-0.027231467473524958) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */))) + (0.9626143172381612) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4327
type: SIMPLE_ASSIGN
$DER.vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[1,1] = 0.9878971255673222 * (-sin(vehicle.frontSuspension.cornerR.tieRod.revolute.angle)) * $DER.vehicle.frontSuspension.cornerR.tieRod.revolute.angle
*/
void AlyssaVehicle_eqFunction_4327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4327};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[600]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.R_rel.T[1,1]) DUMMY_DER */) = (0.9878971255673222) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* vehicle.frontSuspension.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* der(vehicle.frontSuspension.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8806(DATA *data, threadData_t *threadData);


/*
equation index: 4329
type: SIMPLE_ASSIGN
$DER.vehicle.wheelRL.slipDynamics.kappa = 0.0
*/
void AlyssaVehicle_eqFunction_4329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4329};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[72]] /* der(vehicle.wheelRL.slipDynamics.kappa) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 4330
type: SIMPLE_ASSIGN
vehicle.wheelRL.slipDynamics.kappa = 0.0
*/
void AlyssaVehicle_eqFunction_4330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4330};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* vehicle.wheelRL.slipDynamics.kappa STATE(1) */) = 0.0;
  TRACE_POP
}

/*
equation index: 4331
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.vRim = vehicle.wheelRL.contactPatch.vx + vehicle.wheelRL.slipDynamics.sigmaX * $DER.vehicle.wheelRL.slipDynamics.kappa + vehicle.wheelRL.slipDynamics.vxAbs * vehicle.wheelRL.slipDynamics.kappa
*/
void AlyssaVehicle_eqFunction_4331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4331};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5354]] /* vehicle.wheelRL.rim.vRim variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5284]] /* vehicle.wheelRL.contactPatch.vx variable */) + ((data->simulationInfo->realParameter[3755] /* vehicle.wheelRL.slipDynamics.sigmaX PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[72]] /* der(vehicle.wheelRL.slipDynamics.kappa) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5356]] /* vehicle.wheelRL.slipDynamics.vxAbs variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* vehicle.wheelRL.slipDynamics.kappa STATE(1) */));
  TRACE_POP
}

/*
equation index: 4332
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.w = vehicle.wheelRL.rim.vRim / vehicle.wheelRL.rim.rEff
*/
void AlyssaVehicle_eqFunction_4332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4332};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* vehicle.wheelRL.rim.rotor1D.w STATE(1) */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5354]] /* vehicle.wheelRL.rim.vRim variable */),(data->simulationInfo->realParameter[3718] /* vehicle.wheelRL.rim.rEff PARAM */),"vehicle.wheelRL.rim.rEff",equationIndexes);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_6947(DATA *data, threadData_t *threadData);


/*
equation index: 4334
type: SIMPLE_ASSIGN
$DER.vehicle.wheelRL.rim.damper.phi_rel = vehicle.wheelRL.rim.damper.w_rel
*/
void AlyssaVehicle_eqFunction_4334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4334};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1009]] /* der(vehicle.wheelRL.rim.damper.phi_rel) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5301]] /* vehicle.wheelRL.rim.damper.w_rel DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 4335
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.damper.tau = vehicle.wheelRL.rim.damper.d * vehicle.wheelRL.rim.damper.w_rel
*/
void AlyssaVehicle_eqFunction_4335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4335};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5300]] /* vehicle.wheelRL.rim.damper.tau variable */) = ((data->simulationInfo->realParameter[3706] /* vehicle.wheelRL.rim.damper.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5301]] /* vehicle.wheelRL.rim.damper.w_rel DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4336
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.damper.lossPower = vehicle.wheelRL.rim.damper.tau * vehicle.wheelRL.rim.damper.w_rel
*/
void AlyssaVehicle_eqFunction_4336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4336};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5298]] /* vehicle.wheelRL.rim.damper.lossPower variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5300]] /* vehicle.wheelRL.rim.damper.tau variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5301]] /* vehicle.wheelRL.rim.damper.w_rel DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7643(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7016(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7014(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7015(DATA *data, threadData_t *threadData);


/*
equation index: 4341
type: SIMPLE_ASSIGN
vehicle.wheelRL.slipDynamics.tanAlpha = 0.0
*/
void AlyssaVehicle_eqFunction_4341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4341};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* vehicle.wheelRL.slipDynamics.tanAlpha STATE(1) */) = 0.0;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8824(DATA *data, threadData_t *threadData);


/*
equation index: 4343
type: SIMPLE_ASSIGN
vehicle.wheelRL.slipForces.sigma_y = tan(vehicle.wheelRL.slipDynamics.alpha) / vehicle.wheelRL.slipForces.d
*/
void AlyssaVehicle_eqFunction_4343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4343};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5368]] /* vehicle.wheelRL.slipForces.sigma_y variable */) = DIVISION_SIM(tan((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5355]] /* vehicle.wheelRL.slipDynamics.alpha variable */)),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5361]] /* vehicle.wheelRL.slipForces.d variable */),"vehicle.wheelRL.slipForces.d",equationIndexes);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8827(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8828(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8829(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8845(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8830(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8840(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8844(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8841(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8831(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8843(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8842(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8839(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8832(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8833(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8838(DATA *data, threadData_t *threadData);


/*
equation index: 4359
type: SIMPLE_ASSIGN
vehicle.wheelRL.slipForces.pFric = vehicle.wheelRL.slipDynamics.vxAbs * (fx[3] * vehicle.wheelRL.slipDynamics.kappa - fy[3] * tan(vehicle.wheelRL.slipDynamics.alpha))
*/
void AlyssaVehicle_eqFunction_4359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4359};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5366]] /* vehicle.wheelRL.slipForces.pFric variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5356]] /* vehicle.wheelRL.slipDynamics.vxAbs variable */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* fx[3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* vehicle.wheelRL.slipDynamics.kappa STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* fy[3] variable */)) * (tan((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5355]] /* vehicle.wheelRL.slipDynamics.alpha variable */)))));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7658(DATA *data, threadData_t *threadData);


/*
equation index: 4361
type: SIMPLE_ASSIGN
$DER.vehicle.wheelRR.slipDynamics.kappa = 0.0
*/
void AlyssaVehicle_eqFunction_4361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* der(vehicle.wheelRR.slipDynamics.kappa) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 4362
type: SIMPLE_ASSIGN
vehicle.wheelRR.slipDynamics.kappa = 0.0
*/
void AlyssaVehicle_eqFunction_4362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4362};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* vehicle.wheelRR.slipDynamics.kappa STATE(1) */) = 0.0;
  TRACE_POP
}

/*
equation index: 4363
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.vRim = vehicle.wheelRR.contactPatch.vx + vehicle.wheelRR.slipDynamics.sigmaX * $DER.vehicle.wheelRR.slipDynamics.kappa + vehicle.wheelRR.slipDynamics.vxAbs * vehicle.wheelRR.slipDynamics.kappa
*/
void AlyssaVehicle_eqFunction_4363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4363};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5451]] /* vehicle.wheelRR.rim.vRim variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5381]] /* vehicle.wheelRR.contactPatch.vx variable */) + ((data->simulationInfo->realParameter[3828] /* vehicle.wheelRR.slipDynamics.sigmaX PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* der(vehicle.wheelRR.slipDynamics.kappa) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5453]] /* vehicle.wheelRR.slipDynamics.vxAbs variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* vehicle.wheelRR.slipDynamics.kappa STATE(1) */));
  TRACE_POP
}

/*
equation index: 4364
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.w = vehicle.wheelRR.rim.vRim / vehicle.wheelRR.rim.rEff
*/
void AlyssaVehicle_eqFunction_4364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4364};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* vehicle.wheelRR.rim.rotor1D.w STATE(1) */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5451]] /* vehicle.wheelRR.rim.vRim variable */),(data->simulationInfo->realParameter[3791] /* vehicle.wheelRR.rim.rEff PARAM */),"vehicle.wheelRR.rim.rEff",equationIndexes);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_6946(DATA *data, threadData_t *threadData);


/*
equation index: 4366
type: SIMPLE_ASSIGN
$DER.vehicle.wheelRR.rim.damper.phi_rel = vehicle.wheelRR.rim.damper.w_rel
*/
void AlyssaVehicle_eqFunction_4366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4366};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* der(vehicle.wheelRR.rim.damper.phi_rel) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5398]] /* vehicle.wheelRR.rim.damper.w_rel DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 4367
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.damper.tau = vehicle.wheelRR.rim.damper.d * vehicle.wheelRR.rim.damper.w_rel
*/
void AlyssaVehicle_eqFunction_4367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5397]] /* vehicle.wheelRR.rim.damper.tau variable */) = ((data->simulationInfo->realParameter[3779] /* vehicle.wheelRR.rim.damper.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5398]] /* vehicle.wheelRR.rim.damper.w_rel DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4368
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.damper.lossPower = vehicle.wheelRR.rim.damper.tau * vehicle.wheelRR.rim.damper.w_rel
*/
void AlyssaVehicle_eqFunction_4368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4368};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5395]] /* vehicle.wheelRR.rim.damper.lossPower variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5397]] /* vehicle.wheelRR.rim.damper.tau variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5398]] /* vehicle.wheelRR.rim.damper.w_rel DUMMY_STATE */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_7032(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7033(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7034(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7036(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7035(DATA *data, threadData_t *threadData);


/*
equation index: 4374
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.rotor1D.a = (rig.tau[3] + vehicle.wheelRL.rim.rotor1D.flange_b.tau) / vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.J
*/
void AlyssaVehicle_eqFunction_4374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4374};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5318]] /* vehicle.wheelRL.rim.rotor1D.a variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1295]] /* rig.tau[3] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5319]] /* vehicle.wheelRL.rim.rotor1D.flange_b.tau variable */),(data->simulationInfo->realParameter[3731] /* vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.J PARAM */),"vehicle.wheelRL.rim.rotor1D.rotorWith3DEffects.J",equationIndexes);
  TRACE_POP
}

/*
equation index: 4375
type: SIMPLE_ASSIGN
vehicle.wheelRL.rim.damper.a_rel = -vehicle.wheelRL.rim.rotor1D.a
*/
void AlyssaVehicle_eqFunction_4375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4375};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5297]] /* vehicle.wheelRL.rim.damper.a_rel variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5318]] /* vehicle.wheelRL.rim.rotor1D.a variable */));
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8837(DATA *data, threadData_t *threadData);


/*
equation index: 4377
type: SIMPLE_ASSIGN
$DER.vehicle.wheelRL.rim.rotor1D.w = vehicle.wheelRL.rim.rotor1D.a
*/
void AlyssaVehicle_eqFunction_4377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4377};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* der(vehicle.wheelRL.rim.rotor1D.w) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5318]] /* vehicle.wheelRL.rim.rotor1D.a variable */);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8034(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7010(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7008(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_7009(DATA *data, threadData_t *threadData);


/*
equation index: 4382
type: SIMPLE_ASSIGN
vehicle.wheelRR.slipDynamics.tanAlpha = 0.0
*/
void AlyssaVehicle_eqFunction_4382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4382};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* vehicle.wheelRR.slipDynamics.tanAlpha STATE(1) */) = 0.0;
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8861(DATA *data, threadData_t *threadData);


/*
equation index: 4384
type: SIMPLE_ASSIGN
vehicle.wheelRR.slipForces.sigma_y = tan(vehicle.wheelRR.slipDynamics.alpha) / vehicle.wheelRR.slipForces.d
*/
void AlyssaVehicle_eqFunction_4384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4384};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5465]] /* vehicle.wheelRR.slipForces.sigma_y variable */) = DIVISION_SIM(tan((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5452]] /* vehicle.wheelRR.slipDynamics.alpha variable */)),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5458]] /* vehicle.wheelRR.slipForces.d variable */),"vehicle.wheelRR.slipForces.d",equationIndexes);
  TRACE_POP
}
extern void AlyssaVehicle_eqFunction_8864(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8865(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8866(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8882(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8867(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8877(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8881(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8878(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8868(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8880(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8879(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8876(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8869(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8870(DATA *data, threadData_t *threadData);

extern void AlyssaVehicle_eqFunction_8875(DATA *data, threadData_t *threadData);


/*
equation index: 4400
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.rotor1D.a = (rig.tau[4] + vehicle.wheelRR.rim.rotor1D.flange_b.tau) / vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.J
*/
void AlyssaVehicle_eqFunction_4400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4400};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5415]] /* vehicle.wheelRR.rim.rotor1D.a variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1296]] /* rig.tau[4] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5416]] /* vehicle.wheelRR.rim.rotor1D.flange_b.tau variable */),(data->simulationInfo->realParameter[3804] /* vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.J PARAM */),"vehicle.wheelRR.rim.rotor1D.rotorWith3DEffects.J",equationIndexes);
  TRACE_POP
}

/*
equation index: 4401
type: SIMPLE_ASSIGN
vehicle.wheelRR.rim.damper.a_rel = -vehicle.wheelRR.rim.rotor1D.a
*/
void AlyssaVehicle_eqFunction_4401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4401};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5394]] /* vehicle.wheelRR.rim.damper.a_rel variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5415]] /* vehicle.wheelRR.rim.rotor1D.a variable */));
  TRACE_POP
}
OMC_DISABLE_OPT
void AlyssaVehicle_functionInitialEquations_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  AlyssaVehicle_eqFunction_8227(data, threadData);
  AlyssaVehicle_eqFunction_3916(data, threadData);
  AlyssaVehicle_eqFunction_3917(data, threadData);
  AlyssaVehicle_eqFunction_8238(data, threadData);
  AlyssaVehicle_eqFunction_8243(data, threadData);
  AlyssaVehicle_eqFunction_8244(data, threadData);
  AlyssaVehicle_eqFunction_3921(data, threadData);
  AlyssaVehicle_eqFunction_3922(data, threadData);
  AlyssaVehicle_eqFunction_3923(data, threadData);
  AlyssaVehicle_eqFunction_8208(data, threadData);
  AlyssaVehicle_eqFunction_3925(data, threadData);
  AlyssaVehicle_eqFunction_3926(data, threadData);
  AlyssaVehicle_eqFunction_8219(data, threadData);
  AlyssaVehicle_eqFunction_8220(data, threadData);
  AlyssaVehicle_eqFunction_3929(data, threadData);
  AlyssaVehicle_eqFunction_3930(data, threadData);
  AlyssaVehicle_eqFunction_3931(data, threadData);
  AlyssaVehicle_eqFunction_8209(data, threadData);
  AlyssaVehicle_eqFunction_3933(data, threadData);
  AlyssaVehicle_eqFunction_3934(data, threadData);
  AlyssaVehicle_eqFunction_8241(data, threadData);
  AlyssaVehicle_eqFunction_8240(data, threadData);
  AlyssaVehicle_eqFunction_8239(data, threadData);
  AlyssaVehicle_eqFunction_8230(data, threadData);
  AlyssaVehicle_eqFunction_8229(data, threadData);
  AlyssaVehicle_eqFunction_8228(data, threadData);
  AlyssaVehicle_eqFunction_8222(data, threadData);
  AlyssaVehicle_eqFunction_8223(data, threadData);
  AlyssaVehicle_eqFunction_8253(data, threadData);
  AlyssaVehicle_eqFunction_8254(data, threadData);
  AlyssaVehicle_eqFunction_8256(data, threadData);
  AlyssaVehicle_eqFunction_8255(data, threadData);
  AlyssaVehicle_eqFunction_8249(data, threadData);
  AlyssaVehicle_eqFunction_8250(data, threadData);
  AlyssaVehicle_eqFunction_8252(data, threadData);
  AlyssaVehicle_eqFunction_8251(data, threadData);
  AlyssaVehicle_eqFunction_8245(data, threadData);
  AlyssaVehicle_eqFunction_8246(data, threadData);
  AlyssaVehicle_eqFunction_8260(data, threadData);
  AlyssaVehicle_eqFunction_8248(data, threadData);
  AlyssaVehicle_eqFunction_8247(data, threadData);
  AlyssaVehicle_eqFunction_3956(data, threadData);
  AlyssaVehicle_eqFunction_3957(data, threadData);
  AlyssaVehicle_eqFunction_3958(data, threadData);
  AlyssaVehicle_eqFunction_8226(data, threadData);
  AlyssaVehicle_eqFunction_8343(data, threadData);
  AlyssaVehicle_eqFunction_8345(data, threadData);
  AlyssaVehicle_eqFunction_8348(data, threadData);
  AlyssaVehicle_eqFunction_8364(data, threadData);
  AlyssaVehicle_eqFunction_8394(data, threadData);
  AlyssaVehicle_eqFunction_3965(data, threadData);
  AlyssaVehicle_eqFunction_8347(data, threadData);
  AlyssaVehicle_eqFunction_8361(data, threadData);
  AlyssaVehicle_eqFunction_8363(data, threadData);
  AlyssaVehicle_eqFunction_3969(data, threadData);
  AlyssaVehicle_eqFunction_8346(data, threadData);
  AlyssaVehicle_eqFunction_8358(data, threadData);
  AlyssaVehicle_eqFunction_8360(data, threadData);
  AlyssaVehicle_eqFunction_3973(data, threadData);
  AlyssaVehicle_eqFunction_3974(data, threadData);
  AlyssaVehicle_eqFunction_8382(data, threadData);
  AlyssaVehicle_eqFunction_3976(data, threadData);
  AlyssaVehicle_eqFunction_3977(data, threadData);
  AlyssaVehicle_eqFunction_3978(data, threadData);
  AlyssaVehicle_eqFunction_8368(data, threadData);
  AlyssaVehicle_eqFunction_8378(data, threadData);
  AlyssaVehicle_eqFunction_8379(data, threadData);
  AlyssaVehicle_eqFunction_3982(data, threadData);
  AlyssaVehicle_eqFunction_8370(data, threadData);
  AlyssaVehicle_eqFunction_8377(data, threadData);
  AlyssaVehicle_eqFunction_8372(data, threadData);
  AlyssaVehicle_eqFunction_8374(data, threadData);
  AlyssaVehicle_eqFunction_8375(data, threadData);
  AlyssaVehicle_eqFunction_8373(data, threadData);
  AlyssaVehicle_eqFunction_8376(data, threadData);
  AlyssaVehicle_eqFunction_8365(data, threadData);
  AlyssaVehicle_eqFunction_8366(data, threadData);
  AlyssaVehicle_eqFunction_8367(data, threadData);
  AlyssaVehicle_eqFunction_8383(data, threadData);
  AlyssaVehicle_eqFunction_8393(data, threadData);
  AlyssaVehicle_eqFunction_8392(data, threadData);
  AlyssaVehicle_eqFunction_3996(data, threadData);
  AlyssaVehicle_eqFunction_3997(data, threadData);
  AlyssaVehicle_eqFunction_3998(data, threadData);
  AlyssaVehicle_eqFunction_3999(data, threadData);
  AlyssaVehicle_eqFunction_4000(data, threadData);
  AlyssaVehicle_eqFunction_8389(data, threadData);
  AlyssaVehicle_eqFunction_4002(data, threadData);
  AlyssaVehicle_eqFunction_4003(data, threadData);
  AlyssaVehicle_eqFunction_4004(data, threadData);
  AlyssaVehicle_eqFunction_8446(data, threadData);
  AlyssaVehicle_eqFunction_8439(data, threadData);
  AlyssaVehicle_eqFunction_4007(data, threadData);
  AlyssaVehicle_eqFunction_4008(data, threadData);
  AlyssaVehicle_eqFunction_4009(data, threadData);
  AlyssaVehicle_eqFunction_8447(data, threadData);
  AlyssaVehicle_eqFunction_8440(data, threadData);
  AlyssaVehicle_eqFunction_8434(data, threadData);
  AlyssaVehicle_eqFunction_4013(data, threadData);
  AlyssaVehicle_eqFunction_4014(data, threadData);
  AlyssaVehicle_eqFunction_4015(data, threadData);
  AlyssaVehicle_eqFunction_8448(data, threadData);
  AlyssaVehicle_eqFunction_8441(data, threadData);
  AlyssaVehicle_eqFunction_4018(data, threadData);
  AlyssaVehicle_eqFunction_4019(data, threadData);
  AlyssaVehicle_eqFunction_4020(data, threadData);
  AlyssaVehicle_eqFunction_4021(data, threadData);
  AlyssaVehicle_eqFunction_8480(data, threadData);
  AlyssaVehicle_eqFunction_8481(data, threadData);
  AlyssaVehicle_eqFunction_8482(data, threadData);
  AlyssaVehicle_eqFunction_8483(data, threadData);
  AlyssaVehicle_eqFunction_8646(data, threadData);
  AlyssaVehicle_eqFunction_8647(data, threadData);
  AlyssaVehicle_eqFunction_8648(data, threadData);
  AlyssaVehicle_eqFunction_4029(data, threadData);
  AlyssaVehicle_eqFunction_8485(data, threadData);
  AlyssaVehicle_eqFunction_8650(data, threadData);
  AlyssaVehicle_eqFunction_8484(data, threadData);
  AlyssaVehicle_eqFunction_8486(data, threadData);
  AlyssaVehicle_eqFunction_4034(data, threadData);
  AlyssaVehicle_eqFunction_8487(data, threadData);
  AlyssaVehicle_eqFunction_4036(data, threadData);
  AlyssaVehicle_eqFunction_4037(data, threadData);
  AlyssaVehicle_eqFunction_4038(data, threadData);
  AlyssaVehicle_eqFunction_8503(data, threadData);
  AlyssaVehicle_eqFunction_8504(data, threadData);
  AlyssaVehicle_eqFunction_8498(data, threadData);
  AlyssaVehicle_eqFunction_8528(data, threadData);
  AlyssaVehicle_eqFunction_4043(data, threadData);
  AlyssaVehicle_eqFunction_8500(data, threadData);
  AlyssaVehicle_eqFunction_8501(data, threadData);
  AlyssaVehicle_eqFunction_8495(data, threadData);
  AlyssaVehicle_eqFunction_8496(data, threadData);
  AlyssaVehicle_eqFunction_4048(data, threadData);
  AlyssaVehicle_eqFunction_8492(data, threadData);
  AlyssaVehicle_eqFunction_8493(data, threadData);
  AlyssaVehicle_eqFunction_8531(data, threadData);
  AlyssaVehicle_eqFunction_8532(data, threadData);
  AlyssaVehicle_eqFunction_8529(data, threadData);
  AlyssaVehicle_eqFunction_8530(data, threadData);
  AlyssaVehicle_eqFunction_8533(data, threadData);
  AlyssaVehicle_eqFunction_8534(data, threadData);
  AlyssaVehicle_eqFunction_8535(data, threadData);
  AlyssaVehicle_eqFunction_8536(data, threadData);
  AlyssaVehicle_eqFunction_8537(data, threadData);
  AlyssaVehicle_eqFunction_8538(data, threadData);
  AlyssaVehicle_eqFunction_8539(data, threadData);
  AlyssaVehicle_eqFunction_8554(data, threadData);
  AlyssaVehicle_eqFunction_8551(data, threadData);
  AlyssaVehicle_eqFunction_8548(data, threadData);
  AlyssaVehicle_eqFunction_8544(data, threadData);
  AlyssaVehicle_eqFunction_8547(data, threadData);
  AlyssaVehicle_eqFunction_8546(data, threadData);
  AlyssaVehicle_eqFunction_8545(data, threadData);
  AlyssaVehicle_eqFunction_8540(data, threadData);
  AlyssaVehicle_eqFunction_8543(data, threadData);
  AlyssaVehicle_eqFunction_8557(data, threadData);
  AlyssaVehicle_eqFunction_8555(data, threadData);
  AlyssaVehicle_eqFunction_8556(data, threadData);
  AlyssaVehicle_eqFunction_8558(data, threadData);
  AlyssaVehicle_eqFunction_8542(data, threadData);
  AlyssaVehicle_eqFunction_8552(data, threadData);
  AlyssaVehicle_eqFunction_8559(data, threadData);
  AlyssaVehicle_eqFunction_8553(data, threadData);
  AlyssaVehicle_eqFunction_8560(data, threadData);
  AlyssaVehicle_eqFunction_8541(data, threadData);
  AlyssaVehicle_eqFunction_8549(data, threadData);
  AlyssaVehicle_eqFunction_8561(data, threadData);
  AlyssaVehicle_eqFunction_8550(data, threadData);
  AlyssaVehicle_eqFunction_8562(data, threadData);
  AlyssaVehicle_eqFunction_8565(data, threadData);
  AlyssaVehicle_eqFunction_8563(data, threadData);
  AlyssaVehicle_eqFunction_8567(data, threadData);
  AlyssaVehicle_eqFunction_8564(data, threadData);
  AlyssaVehicle_eqFunction_8566(data, threadData);
  AlyssaVehicle_eqFunction_8568(data, threadData);
  AlyssaVehicle_eqFunction_8569(data, threadData);
  AlyssaVehicle_eqFunction_8570(data, threadData);
  AlyssaVehicle_eqFunction_4093(data, threadData);
  AlyssaVehicle_eqFunction_4094(data, threadData);
  AlyssaVehicle_eqFunction_4095(data, threadData);
  AlyssaVehicle_eqFunction_8506(data, threadData);
  AlyssaVehicle_eqFunction_8507(data, threadData);
  AlyssaVehicle_eqFunction_8511(data, threadData);
  AlyssaVehicle_eqFunction_8512(data, threadData);
  AlyssaVehicle_eqFunction_4100(data, threadData);
  AlyssaVehicle_eqFunction_4101(data, threadData);
  AlyssaVehicle_eqFunction_8517(data, threadData);
  AlyssaVehicle_eqFunction_8516(data, threadData);
  AlyssaVehicle_eqFunction_8525(data, threadData);
  AlyssaVehicle_eqFunction_8510(data, threadData);
  AlyssaVehicle_eqFunction_8515(data, threadData);
  AlyssaVehicle_eqFunction_4107(data, threadData);
  AlyssaVehicle_eqFunction_8509(data, threadData);
  AlyssaVehicle_eqFunction_8514(data, threadData);
  AlyssaVehicle_eqFunction_4110(data, threadData);
  AlyssaVehicle_eqFunction_8508(data, threadData);
  AlyssaVehicle_eqFunction_8513(data, threadData);
  AlyssaVehicle_eqFunction_4113(data, threadData);
  AlyssaVehicle_eqFunction_8634(data, threadData);
  AlyssaVehicle_eqFunction_8527(data, threadData);
  AlyssaVehicle_eqFunction_8649(data, threadData);
  AlyssaVehicle_eqFunction_4117(data, threadData);
  AlyssaVehicle_eqFunction_4118(data, threadData);
  AlyssaVehicle_eqFunction_8652(data, threadData);
  AlyssaVehicle_eqFunction_8655(data, threadData);
  AlyssaVehicle_eqFunction_8656(data, threadData);
  AlyssaVehicle_eqFunction_8653(data, threadData);
  AlyssaVehicle_eqFunction_8654(data, threadData);
  AlyssaVehicle_eqFunction_8680(data, threadData);
  AlyssaVehicle_eqFunction_8689(data, threadData);
  AlyssaVehicle_eqFunction_8714(data, threadData);
  AlyssaVehicle_eqFunction_8713(data, threadData);
  AlyssaVehicle_eqFunction_8717(data, threadData);
  AlyssaVehicle_eqFunction_8715(data, threadData);
  AlyssaVehicle_eqFunction_8718(data, threadData);
  AlyssaVehicle_eqFunction_8721(data, threadData);
  AlyssaVehicle_eqFunction_8692(data, threadData);
  AlyssaVehicle_eqFunction_8716(data, threadData);
  AlyssaVehicle_eqFunction_8720(data, threadData);
  AlyssaVehicle_eqFunction_8724(data, threadData);
  AlyssaVehicle_eqFunction_8726(data, threadData);
  AlyssaVehicle_eqFunction_8719(data, threadData);
  AlyssaVehicle_eqFunction_8722(data, threadData);
  AlyssaVehicle_eqFunction_8723(data, threadData);
  AlyssaVehicle_eqFunction_8725(data, threadData);
  AlyssaVehicle_eqFunction_8729(data, threadData);
  AlyssaVehicle_eqFunction_8727(data, threadData);
  AlyssaVehicle_eqFunction_8731(data, threadData);
  AlyssaVehicle_eqFunction_8728(data, threadData);
  AlyssaVehicle_eqFunction_8730(data, threadData);
  AlyssaVehicle_eqFunction_8732(data, threadData);
  AlyssaVehicle_eqFunction_8733(data, threadData);
  AlyssaVehicle_eqFunction_8734(data, threadData);
  AlyssaVehicle_eqFunction_8695(data, threadData);
  AlyssaVehicle_eqFunction_8696(data, threadData);
  AlyssaVehicle_eqFunction_8693(data, threadData);
  AlyssaVehicle_eqFunction_8694(data, threadData);
  AlyssaVehicle_eqFunction_8697(data, threadData);
  AlyssaVehicle_eqFunction_8698(data, threadData);
  AlyssaVehicle_eqFunction_8699(data, threadData);
  AlyssaVehicle_eqFunction_8702(data, threadData);
  AlyssaVehicle_eqFunction_8706(data, threadData);
  AlyssaVehicle_eqFunction_8690(data, threadData);
  AlyssaVehicle_eqFunction_8691(data, threadData);
  AlyssaVehicle_eqFunction_8709(data, threadData);
  AlyssaVehicle_eqFunction_8708(data, threadData);
  AlyssaVehicle_eqFunction_8707(data, threadData);
  AlyssaVehicle_eqFunction_8703(data, threadData);
  AlyssaVehicle_eqFunction_8712(data, threadData);
  AlyssaVehicle_eqFunction_8711(data, threadData);
  AlyssaVehicle_eqFunction_8710(data, threadData);
  AlyssaVehicle_eqFunction_8700(data, threadData);
  AlyssaVehicle_eqFunction_8705(data, threadData);
  AlyssaVehicle_eqFunction_8809(data, threadData);
  AlyssaVehicle_eqFunction_8805(data, threadData);
  AlyssaVehicle_eqFunction_8704(data, threadData);
  AlyssaVehicle_eqFunction_8804(data, threadData);
  AlyssaVehicle_eqFunction_8701(data, threadData);
  AlyssaVehicle_eqFunction_8803(data, threadData);
  AlyssaVehicle_eqFunction_8657(data, threadData);
  AlyssaVehicle_eqFunction_8658(data, threadData);
  AlyssaVehicle_eqFunction_8659(data, threadData);
  AlyssaVehicle_eqFunction_8660(data, threadData);
  AlyssaVehicle_eqFunction_8661(data, threadData);
  AlyssaVehicle_eqFunction_8662(data, threadData);
  AlyssaVehicle_eqFunction_8663(data, threadData);
  AlyssaVehicle_eqFunction_8664(data, threadData);
  AlyssaVehicle_eqFunction_8665(data, threadData);
  AlyssaVehicle_eqFunction_8679(data, threadData);
  AlyssaVehicle_eqFunction_8666(data, threadData);
  AlyssaVehicle_eqFunction_8671(data, threadData);
  AlyssaVehicle_eqFunction_8670(data, threadData);
  AlyssaVehicle_eqFunction_8672(data, threadData);
  AlyssaVehicle_eqFunction_8667(data, threadData);
  AlyssaVehicle_eqFunction_8677(data, threadData);
  AlyssaVehicle_eqFunction_8676(data, threadData);
  AlyssaVehicle_eqFunction_8678(data, threadData);
  AlyssaVehicle_eqFunction_8673(data, threadData);
  AlyssaVehicle_eqFunction_8675(data, threadData);
  AlyssaVehicle_eqFunction_8674(data, threadData);
  AlyssaVehicle_eqFunction_8669(data, threadData);
  AlyssaVehicle_eqFunction_8668(data, threadData);
  AlyssaVehicle_eqFunction_4198(data, threadData);
  AlyssaVehicle_eqFunction_4199(data, threadData);
  AlyssaVehicle_eqFunction_4200(data, threadData);
  AlyssaVehicle_eqFunction_4201(data, threadData);
  AlyssaVehicle_eqFunction_4202(data, threadData);
  AlyssaVehicle_eqFunction_4203(data, threadData);
  AlyssaVehicle_eqFunction_4204(data, threadData);
  AlyssaVehicle_eqFunction_4205(data, threadData);
  AlyssaVehicle_eqFunction_8572(data, threadData);
  AlyssaVehicle_eqFunction_8736(data, threadData);
  AlyssaVehicle_eqFunction_8571(data, threadData);
  AlyssaVehicle_eqFunction_8573(data, threadData);
  AlyssaVehicle_eqFunction_4210(data, threadData);
  AlyssaVehicle_eqFunction_4211(data, threadData);
  AlyssaVehicle_eqFunction_4212(data, threadData);
  AlyssaVehicle_eqFunction_8600(data, threadData);
  AlyssaVehicle_eqFunction_8589(data, threadData);
  AlyssaVehicle_eqFunction_8594(data, threadData);
  AlyssaVehicle_eqFunction_8603(data, threadData);
  AlyssaVehicle_eqFunction_8602(data, threadData);
  AlyssaVehicle_eqFunction_8601(data, threadData);
  AlyssaVehicle_eqFunction_4219(data, threadData);
  AlyssaVehicle_eqFunction_4220(data, threadData);
  AlyssaVehicle_eqFunction_4221(data, threadData);
  AlyssaVehicle_eqFunction_8604(data, threadData);
  AlyssaVehicle_eqFunction_8605(data, threadData);
  AlyssaVehicle_eqFunction_8585(data, threadData);
  AlyssaVehicle_eqFunction_8586(data, threadData);
  AlyssaVehicle_eqFunction_8608(data, threadData);
  AlyssaVehicle_eqFunction_8607(data, threadData);
  AlyssaVehicle_eqFunction_8606(data, threadData);
  AlyssaVehicle_eqFunction_4229(data, threadData);
  AlyssaVehicle_eqFunction_4230(data, threadData);
  AlyssaVehicle_eqFunction_4231(data, threadData);
  AlyssaVehicle_eqFunction_8581(data, threadData);
  AlyssaVehicle_eqFunction_4233(data, threadData);
  AlyssaVehicle_eqFunction_4234(data, threadData);
  AlyssaVehicle_eqFunction_8595(data, threadData);
  AlyssaVehicle_eqFunction_8596(data, threadData);
  AlyssaVehicle_eqFunction_4237(data, threadData);
  AlyssaVehicle_eqFunction_4238(data, threadData);
  AlyssaVehicle_eqFunction_4239(data, threadData);
  AlyssaVehicle_eqFunction_8609(data, threadData);
  AlyssaVehicle_eqFunction_4241(data, threadData);
  AlyssaVehicle_eqFunction_4242(data, threadData);
  AlyssaVehicle_eqFunction_8625(data, threadData);
  AlyssaVehicle_eqFunction_8610(data, threadData);
  AlyssaVehicle_eqFunction_8611(data, threadData);
  AlyssaVehicle_eqFunction_4246(data, threadData);
  AlyssaVehicle_eqFunction_4247(data, threadData);
  AlyssaVehicle_eqFunction_4248(data, threadData);
  AlyssaVehicle_eqFunction_8582(data, threadData);
  AlyssaVehicle_eqFunction_4250(data, threadData);
  AlyssaVehicle_eqFunction_4251(data, threadData);
  AlyssaVehicle_eqFunction_8628(data, threadData);
  AlyssaVehicle_eqFunction_8627(data, threadData);
  AlyssaVehicle_eqFunction_8626(data, threadData);
  AlyssaVehicle_eqFunction_8633(data, threadData);
  AlyssaVehicle_eqFunction_8632(data, threadData);
  AlyssaVehicle_eqFunction_8631(data, threadData);
  AlyssaVehicle_eqFunction_8590(data, threadData);
  AlyssaVehicle_eqFunction_8591(data, threadData);
  AlyssaVehicle_eqFunction_8620(data, threadData);
  AlyssaVehicle_eqFunction_8621(data, threadData);
  AlyssaVehicle_eqFunction_8623(data, threadData);
  AlyssaVehicle_eqFunction_8622(data, threadData);
  AlyssaVehicle_eqFunction_8616(data, threadData);
  AlyssaVehicle_eqFunction_8617(data, threadData);
  AlyssaVehicle_eqFunction_8619(data, threadData);
  AlyssaVehicle_eqFunction_8618(data, threadData);
  AlyssaVehicle_eqFunction_8612(data, threadData);
  AlyssaVehicle_eqFunction_8613(data, threadData);
  AlyssaVehicle_eqFunction_8630(data, threadData);
  AlyssaVehicle_eqFunction_8615(data, threadData);
  AlyssaVehicle_eqFunction_8614(data, threadData);
  AlyssaVehicle_eqFunction_4273(data, threadData);
  AlyssaVehicle_eqFunction_4274(data, threadData);
  AlyssaVehicle_eqFunction_4275(data, threadData);
  AlyssaVehicle_eqFunction_8599(data, threadData);
  AlyssaVehicle_eqFunction_8735(data, threadData);
  AlyssaVehicle_eqFunction_8737(data, threadData);
  AlyssaVehicle_eqFunction_8740(data, threadData);
  AlyssaVehicle_eqFunction_8756(data, threadData);
  AlyssaVehicle_eqFunction_8786(data, threadData);
  AlyssaVehicle_eqFunction_4282(data, threadData);
  AlyssaVehicle_eqFunction_8739(data, threadData);
  AlyssaVehicle_eqFunction_8753(data, threadData);
  AlyssaVehicle_eqFunction_8755(data, threadData);
  AlyssaVehicle_eqFunction_4286(data, threadData);
  AlyssaVehicle_eqFunction_8738(data, threadData);
  AlyssaVehicle_eqFunction_8750(data, threadData);
  AlyssaVehicle_eqFunction_8752(data, threadData);
  AlyssaVehicle_eqFunction_4290(data, threadData);
  AlyssaVehicle_eqFunction_4291(data, threadData);
  AlyssaVehicle_eqFunction_8759(data, threadData);
  AlyssaVehicle_eqFunction_4293(data, threadData);
  AlyssaVehicle_eqFunction_4294(data, threadData);
  AlyssaVehicle_eqFunction_4295(data, threadData);
  AlyssaVehicle_eqFunction_8763(data, threadData);
  AlyssaVehicle_eqFunction_8774(data, threadData);
  AlyssaVehicle_eqFunction_8773(data, threadData);
  AlyssaVehicle_eqFunction_4299(data, threadData);
  AlyssaVehicle_eqFunction_8765(data, threadData);
  AlyssaVehicle_eqFunction_8772(data, threadData);
  AlyssaVehicle_eqFunction_8767(data, threadData);
  AlyssaVehicle_eqFunction_8769(data, threadData);
  AlyssaVehicle_eqFunction_8770(data, threadData);
  AlyssaVehicle_eqFunction_8768(data, threadData);
  AlyssaVehicle_eqFunction_8771(data, threadData);
  AlyssaVehicle_eqFunction_8775(data, threadData);
  AlyssaVehicle_eqFunction_8785(data, threadData);
  AlyssaVehicle_eqFunction_8784(data, threadData);
  AlyssaVehicle_eqFunction_8760(data, threadData);
  AlyssaVehicle_eqFunction_8762(data, threadData);
  AlyssaVehicle_eqFunction_8761(data, threadData);
  AlyssaVehicle_eqFunction_4313(data, threadData);
  AlyssaVehicle_eqFunction_4314(data, threadData);
  AlyssaVehicle_eqFunction_4315(data, threadData);
  AlyssaVehicle_eqFunction_4316(data, threadData);
  AlyssaVehicle_eqFunction_4317(data, threadData);
  AlyssaVehicle_eqFunction_8781(data, threadData);
  AlyssaVehicle_eqFunction_4319(data, threadData);
  AlyssaVehicle_eqFunction_4320(data, threadData);
  AlyssaVehicle_eqFunction_4321(data, threadData);
  AlyssaVehicle_eqFunction_4322(data, threadData);
  AlyssaVehicle_eqFunction_4323(data, threadData);
  AlyssaVehicle_eqFunction_4324(data, threadData);
  AlyssaVehicle_eqFunction_4325(data, threadData);
  AlyssaVehicle_eqFunction_4326(data, threadData);
  AlyssaVehicle_eqFunction_4327(data, threadData);
  AlyssaVehicle_eqFunction_8806(data, threadData);
  AlyssaVehicle_eqFunction_4329(data, threadData);
  AlyssaVehicle_eqFunction_4330(data, threadData);
  AlyssaVehicle_eqFunction_4331(data, threadData);
  AlyssaVehicle_eqFunction_4332(data, threadData);
  AlyssaVehicle_eqFunction_6947(data, threadData);
  AlyssaVehicle_eqFunction_4334(data, threadData);
  AlyssaVehicle_eqFunction_4335(data, threadData);
  AlyssaVehicle_eqFunction_4336(data, threadData);
  AlyssaVehicle_eqFunction_7643(data, threadData);
  AlyssaVehicle_eqFunction_7016(data, threadData);
  AlyssaVehicle_eqFunction_7014(data, threadData);
  AlyssaVehicle_eqFunction_7015(data, threadData);
  AlyssaVehicle_eqFunction_4341(data, threadData);
  AlyssaVehicle_eqFunction_8824(data, threadData);
  AlyssaVehicle_eqFunction_4343(data, threadData);
  AlyssaVehicle_eqFunction_8827(data, threadData);
  AlyssaVehicle_eqFunction_8828(data, threadData);
  AlyssaVehicle_eqFunction_8829(data, threadData);
  AlyssaVehicle_eqFunction_8845(data, threadData);
  AlyssaVehicle_eqFunction_8830(data, threadData);
  AlyssaVehicle_eqFunction_8840(data, threadData);
  AlyssaVehicle_eqFunction_8844(data, threadData);
  AlyssaVehicle_eqFunction_8841(data, threadData);
  AlyssaVehicle_eqFunction_8831(data, threadData);
  AlyssaVehicle_eqFunction_8843(data, threadData);
  AlyssaVehicle_eqFunction_8842(data, threadData);
  AlyssaVehicle_eqFunction_8839(data, threadData);
  AlyssaVehicle_eqFunction_8832(data, threadData);
  AlyssaVehicle_eqFunction_8833(data, threadData);
  AlyssaVehicle_eqFunction_8838(data, threadData);
  AlyssaVehicle_eqFunction_4359(data, threadData);
  AlyssaVehicle_eqFunction_7658(data, threadData);
  AlyssaVehicle_eqFunction_4361(data, threadData);
  AlyssaVehicle_eqFunction_4362(data, threadData);
  AlyssaVehicle_eqFunction_4363(data, threadData);
  AlyssaVehicle_eqFunction_4364(data, threadData);
  AlyssaVehicle_eqFunction_6946(data, threadData);
  AlyssaVehicle_eqFunction_4366(data, threadData);
  AlyssaVehicle_eqFunction_4367(data, threadData);
  AlyssaVehicle_eqFunction_4368(data, threadData);
  AlyssaVehicle_eqFunction_7032(data, threadData);
  AlyssaVehicle_eqFunction_7033(data, threadData);
  AlyssaVehicle_eqFunction_7034(data, threadData);
  AlyssaVehicle_eqFunction_7036(data, threadData);
  AlyssaVehicle_eqFunction_7035(data, threadData);
  AlyssaVehicle_eqFunction_4374(data, threadData);
  AlyssaVehicle_eqFunction_4375(data, threadData);
  AlyssaVehicle_eqFunction_8837(data, threadData);
  AlyssaVehicle_eqFunction_4377(data, threadData);
  AlyssaVehicle_eqFunction_8034(data, threadData);
  AlyssaVehicle_eqFunction_7010(data, threadData);
  AlyssaVehicle_eqFunction_7008(data, threadData);
  AlyssaVehicle_eqFunction_7009(data, threadData);
  AlyssaVehicle_eqFunction_4382(data, threadData);
  AlyssaVehicle_eqFunction_8861(data, threadData);
  AlyssaVehicle_eqFunction_4384(data, threadData);
  AlyssaVehicle_eqFunction_8864(data, threadData);
  AlyssaVehicle_eqFunction_8865(data, threadData);
  AlyssaVehicle_eqFunction_8866(data, threadData);
  AlyssaVehicle_eqFunction_8882(data, threadData);
  AlyssaVehicle_eqFunction_8867(data, threadData);
  AlyssaVehicle_eqFunction_8877(data, threadData);
  AlyssaVehicle_eqFunction_8881(data, threadData);
  AlyssaVehicle_eqFunction_8878(data, threadData);
  AlyssaVehicle_eqFunction_8868(data, threadData);
  AlyssaVehicle_eqFunction_8880(data, threadData);
  AlyssaVehicle_eqFunction_8879(data, threadData);
  AlyssaVehicle_eqFunction_8876(data, threadData);
  AlyssaVehicle_eqFunction_8869(data, threadData);
  AlyssaVehicle_eqFunction_8870(data, threadData);
  AlyssaVehicle_eqFunction_8875(data, threadData);
  AlyssaVehicle_eqFunction_4400(data, threadData);
  AlyssaVehicle_eqFunction_4401(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif
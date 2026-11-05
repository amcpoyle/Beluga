#include "omc_simulation_settings.h"
#include "AlyssaVehicle_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "AlyssaVehicle_includes.h"


DLLDirection
modelica_boolean omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_frontSuspension_cornerL_jointUSR_revolute_selectBranch(threadData_t *threadData, modelica_real _L, real_array _e, modelica_real _angle_guess, real_array _r_a, real_array _r_b)
{
  modelica_boolean _positiveBranch;
  modelica_real _e_r_a;
  modelica_real _e_r_b;
  modelica_real _A;
  modelica_real _B;
  modelica_real _C;
  modelica_real _k1;
  modelica_real _k2;
  modelica_real _k1a;
  modelica_real _k1b;
  modelica_real _kcos1;
  modelica_real _ksin1;
  modelica_real _kcos2;
  modelica_real _ksin2;
  modelica_real _angle1;
  modelica_real _angle2;
  static int tmp1 = 0;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _positiveBranch has no default value.
  // _e_r_a has no default value.
  // _e_r_b has no default value.
  // _A has no default value.
  // _B has no default value.
  // _C has no default value.
  // _k1 has no default value.
  // _k2 has no default value.
  // _k1a has no default value.
  // _k1b has no default value.
  // _kcos1 has no default value.
  // _ksin1 has no default value.
  // _kcos2 has no default value.
  // _ksin2 has no default value.
  // _angle1 has no default value.
  // _angle2 has no default value.
  _e_r_a = (real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3)));

  _e_r_b = (real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_b, 1, ((modelica_integer) 1))) + (real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_b, 1, ((modelica_integer) 2))) + (real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_b, 1, ((modelica_integer) 3)));

  _A = (-((2.0) * ((real_array_get(_r_b, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_r_b, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_r_b, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) - ((_e_r_b) * (_e_r_a)))));

  _B = ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 1)))) * ((real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) - ((real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))))) + ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 2)))) * ((real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) - ((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))))) + ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 3)))) * ((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) - ((real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 1)))));

  _C = (real_array_get(_r_a, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_r_a, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_r_a, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) + (real_array_get(_r_b, 1, ((modelica_integer) 1))) * (real_array_get(_r_b, 1, ((modelica_integer) 1))) + (real_array_get(_r_b, 1, ((modelica_integer) 2))) * (real_array_get(_r_b, 1, ((modelica_integer) 2))) + (real_array_get(_r_b, 1, ((modelica_integer) 3))) * (real_array_get(_r_b, 1, ((modelica_integer) 3))) - ((_L) * (_L)) - (((2.0) * (_e_r_b)) * (_e_r_a));

  _k1 = (_A) * (_A) + (_B) * (_B);

  _k1a = _k1 - ((_C) * (_C));

  {
    if(!(_k1a > 1e-10))
    {
      {
        FILE_INFO info = {"C:/Users/amcpo/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Joints/Internal/RevoluteWithLengthConstraint.mo",160,5,172,3,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT8));
      }
    }
  }

  _k1b = fmax(_k1a,1e-12);

  tmp2 = _k1b;
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(k1b) was %g should be >= 0", tmp2);
  }
  _k2 = sqrt(tmp2);

  _kcos1 = (_B) * (_k2) - ((_A) * (_C));

  _ksin1 = (-((_B) * (_C) + (_A) * (_k2)));

  _angle1 = atan2(_ksin1, _kcos1);

  _kcos2 = (-((_A) * (_C) + (_B) * (_k2)));

  _ksin2 = (_A) * (_k2) - ((_B) * (_C));

  _angle2 = atan2(_ksin2, _kcos2);

  if((fabs(_angle1 - _angle_guess) <= fabs(_angle2 - _angle_guess)))
  {
    _positiveBranch = 1 /* true */;
  }
  else
  {
    _positiveBranch = 0 /* false */;
  }
  _return: OMC_LABEL_UNUSED
  return _positiveBranch;
}
modelica_metatype boxptr_AlyssaModel_Experiments_OptimalControlFMU_vehicle_frontSuspension_cornerL_jointUSR_revolute_selectBranch(threadData_t *threadData, modelica_metatype _L, modelica_metatype _e, modelica_metatype _angle_guess, modelica_metatype _r_a, modelica_metatype _r_b)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean _positiveBranch;
  modelica_metatype out_positiveBranch;
  tmp1 = mmc_unbox_real(_L);
  tmp2 = mmc_unbox_real(_angle_guess);
  _positiveBranch = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_frontSuspension_cornerL_jointUSR_revolute_selectBranch(threadData, tmp1, *((base_array_t*)_e), tmp2, *((base_array_t*)_r_a), *((base_array_t*)_r_b));
  out_positiveBranch = mmc_mk_icon(_positiveBranch);
  return out_positiveBranch;
}

DLLDirection
modelica_boolean omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_frontSuspension_cornerL_tieRod_revolute_selectBranch(threadData_t *threadData, modelica_real _L, real_array _e, modelica_real _angle_guess, real_array _r_a, real_array _r_b)
{
  modelica_boolean _positiveBranch;
  modelica_real _e_r_a;
  modelica_real _e_r_b;
  modelica_real _A;
  modelica_real _B;
  modelica_real _C;
  modelica_real _k1;
  modelica_real _k2;
  modelica_real _k1a;
  modelica_real _k1b;
  modelica_real _kcos1;
  modelica_real _ksin1;
  modelica_real _kcos2;
  modelica_real _ksin2;
  modelica_real _angle1;
  modelica_real _angle2;
  static int tmp1 = 0;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _positiveBranch has no default value.
  // _e_r_a has no default value.
  // _e_r_b has no default value.
  // _A has no default value.
  // _B has no default value.
  // _C has no default value.
  // _k1 has no default value.
  // _k2 has no default value.
  // _k1a has no default value.
  // _k1b has no default value.
  // _kcos1 has no default value.
  // _ksin1 has no default value.
  // _kcos2 has no default value.
  // _ksin2 has no default value.
  // _angle1 has no default value.
  // _angle2 has no default value.
  _e_r_a = (real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3)));

  _e_r_b = (real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_b, 1, ((modelica_integer) 1))) + (real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_b, 1, ((modelica_integer) 2))) + (real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_b, 1, ((modelica_integer) 3)));

  _A = (-((2.0) * ((real_array_get(_r_b, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_r_b, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_r_b, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) - ((_e_r_b) * (_e_r_a)))));

  _B = ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 1)))) * ((real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) - ((real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))))) + ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 2)))) * ((real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) - ((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))))) + ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 3)))) * ((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) - ((real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 1)))));

  _C = (real_array_get(_r_a, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_r_a, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_r_a, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) + (real_array_get(_r_b, 1, ((modelica_integer) 1))) * (real_array_get(_r_b, 1, ((modelica_integer) 1))) + (real_array_get(_r_b, 1, ((modelica_integer) 2))) * (real_array_get(_r_b, 1, ((modelica_integer) 2))) + (real_array_get(_r_b, 1, ((modelica_integer) 3))) * (real_array_get(_r_b, 1, ((modelica_integer) 3))) - ((_L) * (_L)) - (((2.0) * (_e_r_b)) * (_e_r_a));

  _k1 = (_A) * (_A) + (_B) * (_B);

  _k1a = _k1 - ((_C) * (_C));

  {
    if(!(_k1a > 1e-10))
    {
      {
        FILE_INFO info = {"C:/Users/amcpo/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Joints/Internal/RevoluteWithLengthConstraint.mo",160,5,172,3,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT8));
      }
    }
  }

  _k1b = fmax(_k1a,1e-12);

  tmp2 = _k1b;
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(k1b) was %g should be >= 0", tmp2);
  }
  _k2 = sqrt(tmp2);

  _kcos1 = (_B) * (_k2) - ((_A) * (_C));

  _ksin1 = (-((_B) * (_C) + (_A) * (_k2)));

  _angle1 = atan2(_ksin1, _kcos1);

  _kcos2 = (-((_A) * (_C) + (_B) * (_k2)));

  _ksin2 = (_A) * (_k2) - ((_B) * (_C));

  _angle2 = atan2(_ksin2, _kcos2);

  if((fabs(_angle1 - _angle_guess) <= fabs(_angle2 - _angle_guess)))
  {
    _positiveBranch = 1 /* true */;
  }
  else
  {
    _positiveBranch = 0 /* false */;
  }
  _return: OMC_LABEL_UNUSED
  return _positiveBranch;
}
modelica_metatype boxptr_AlyssaModel_Experiments_OptimalControlFMU_vehicle_frontSuspension_cornerL_tieRod_revolute_selectBranch(threadData_t *threadData, modelica_metatype _L, modelica_metatype _e, modelica_metatype _angle_guess, modelica_metatype _r_a, modelica_metatype _r_b)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean _positiveBranch;
  modelica_metatype out_positiveBranch;
  tmp1 = mmc_unbox_real(_L);
  tmp2 = mmc_unbox_real(_angle_guess);
  _positiveBranch = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_frontSuspension_cornerL_tieRod_revolute_selectBranch(threadData, tmp1, *((base_array_t*)_e), tmp2, *((base_array_t*)_r_a), *((base_array_t*)_r_b));
  out_positiveBranch = mmc_mk_icon(_positiveBranch);
  return out_positiveBranch;
}

DLLDirection
modelica_boolean omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_frontSuspension_cornerR_jointUSR_revolute_selectBranch(threadData_t *threadData, modelica_real _L, real_array _e, modelica_real _angle_guess, real_array _r_a, real_array _r_b)
{
  modelica_boolean _positiveBranch;
  modelica_real _e_r_a;
  modelica_real _e_r_b;
  modelica_real _A;
  modelica_real _B;
  modelica_real _C;
  modelica_real _k1;
  modelica_real _k2;
  modelica_real _k1a;
  modelica_real _k1b;
  modelica_real _kcos1;
  modelica_real _ksin1;
  modelica_real _kcos2;
  modelica_real _ksin2;
  modelica_real _angle1;
  modelica_real _angle2;
  static int tmp1 = 0;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _positiveBranch has no default value.
  // _e_r_a has no default value.
  // _e_r_b has no default value.
  // _A has no default value.
  // _B has no default value.
  // _C has no default value.
  // _k1 has no default value.
  // _k2 has no default value.
  // _k1a has no default value.
  // _k1b has no default value.
  // _kcos1 has no default value.
  // _ksin1 has no default value.
  // _kcos2 has no default value.
  // _ksin2 has no default value.
  // _angle1 has no default value.
  // _angle2 has no default value.
  _e_r_a = (real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3)));

  _e_r_b = (real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_b, 1, ((modelica_integer) 1))) + (real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_b, 1, ((modelica_integer) 2))) + (real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_b, 1, ((modelica_integer) 3)));

  _A = (-((2.0) * ((real_array_get(_r_b, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_r_b, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_r_b, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) - ((_e_r_b) * (_e_r_a)))));

  _B = ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 1)))) * ((real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) - ((real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))))) + ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 2)))) * ((real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) - ((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))))) + ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 3)))) * ((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) - ((real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 1)))));

  _C = (real_array_get(_r_a, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_r_a, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_r_a, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) + (real_array_get(_r_b, 1, ((modelica_integer) 1))) * (real_array_get(_r_b, 1, ((modelica_integer) 1))) + (real_array_get(_r_b, 1, ((modelica_integer) 2))) * (real_array_get(_r_b, 1, ((modelica_integer) 2))) + (real_array_get(_r_b, 1, ((modelica_integer) 3))) * (real_array_get(_r_b, 1, ((modelica_integer) 3))) - ((_L) * (_L)) - (((2.0) * (_e_r_b)) * (_e_r_a));

  _k1 = (_A) * (_A) + (_B) * (_B);

  _k1a = _k1 - ((_C) * (_C));

  {
    if(!(_k1a > 1e-10))
    {
      {
        FILE_INFO info = {"C:/Users/amcpo/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Joints/Internal/RevoluteWithLengthConstraint.mo",160,5,172,3,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT8));
      }
    }
  }

  _k1b = fmax(_k1a,1e-12);

  tmp2 = _k1b;
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(k1b) was %g should be >= 0", tmp2);
  }
  _k2 = sqrt(tmp2);

  _kcos1 = (_B) * (_k2) - ((_A) * (_C));

  _ksin1 = (-((_B) * (_C) + (_A) * (_k2)));

  _angle1 = atan2(_ksin1, _kcos1);

  _kcos2 = (-((_A) * (_C) + (_B) * (_k2)));

  _ksin2 = (_A) * (_k2) - ((_B) * (_C));

  _angle2 = atan2(_ksin2, _kcos2);

  if((fabs(_angle1 - _angle_guess) <= fabs(_angle2 - _angle_guess)))
  {
    _positiveBranch = 1 /* true */;
  }
  else
  {
    _positiveBranch = 0 /* false */;
  }
  _return: OMC_LABEL_UNUSED
  return _positiveBranch;
}
modelica_metatype boxptr_AlyssaModel_Experiments_OptimalControlFMU_vehicle_frontSuspension_cornerR_jointUSR_revolute_selectBranch(threadData_t *threadData, modelica_metatype _L, modelica_metatype _e, modelica_metatype _angle_guess, modelica_metatype _r_a, modelica_metatype _r_b)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean _positiveBranch;
  modelica_metatype out_positiveBranch;
  tmp1 = mmc_unbox_real(_L);
  tmp2 = mmc_unbox_real(_angle_guess);
  _positiveBranch = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_frontSuspension_cornerR_jointUSR_revolute_selectBranch(threadData, tmp1, *((base_array_t*)_e), tmp2, *((base_array_t*)_r_a), *((base_array_t*)_r_b));
  out_positiveBranch = mmc_mk_icon(_positiveBranch);
  return out_positiveBranch;
}

DLLDirection
modelica_boolean omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_frontSuspension_cornerR_tieRod_revolute_selectBranch(threadData_t *threadData, modelica_real _L, real_array _e, modelica_real _angle_guess, real_array _r_a, real_array _r_b)
{
  modelica_boolean _positiveBranch;
  modelica_real _e_r_a;
  modelica_real _e_r_b;
  modelica_real _A;
  modelica_real _B;
  modelica_real _C;
  modelica_real _k1;
  modelica_real _k2;
  modelica_real _k1a;
  modelica_real _k1b;
  modelica_real _kcos1;
  modelica_real _ksin1;
  modelica_real _kcos2;
  modelica_real _ksin2;
  modelica_real _angle1;
  modelica_real _angle2;
  static int tmp1 = 0;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _positiveBranch has no default value.
  // _e_r_a has no default value.
  // _e_r_b has no default value.
  // _A has no default value.
  // _B has no default value.
  // _C has no default value.
  // _k1 has no default value.
  // _k2 has no default value.
  // _k1a has no default value.
  // _k1b has no default value.
  // _kcos1 has no default value.
  // _ksin1 has no default value.
  // _kcos2 has no default value.
  // _ksin2 has no default value.
  // _angle1 has no default value.
  // _angle2 has no default value.
  _e_r_a = (real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3)));

  _e_r_b = (real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_b, 1, ((modelica_integer) 1))) + (real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_b, 1, ((modelica_integer) 2))) + (real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_b, 1, ((modelica_integer) 3)));

  _A = (-((2.0) * ((real_array_get(_r_b, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_r_b, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_r_b, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) - ((_e_r_b) * (_e_r_a)))));

  _B = ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 1)))) * ((real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) - ((real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))))) + ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 2)))) * ((real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) - ((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))))) + ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 3)))) * ((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) - ((real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 1)))));

  _C = (real_array_get(_r_a, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_r_a, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_r_a, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) + (real_array_get(_r_b, 1, ((modelica_integer) 1))) * (real_array_get(_r_b, 1, ((modelica_integer) 1))) + (real_array_get(_r_b, 1, ((modelica_integer) 2))) * (real_array_get(_r_b, 1, ((modelica_integer) 2))) + (real_array_get(_r_b, 1, ((modelica_integer) 3))) * (real_array_get(_r_b, 1, ((modelica_integer) 3))) - ((_L) * (_L)) - (((2.0) * (_e_r_b)) * (_e_r_a));

  _k1 = (_A) * (_A) + (_B) * (_B);

  _k1a = _k1 - ((_C) * (_C));

  {
    if(!(_k1a > 1e-10))
    {
      {
        FILE_INFO info = {"C:/Users/amcpo/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Joints/Internal/RevoluteWithLengthConstraint.mo",160,5,172,3,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT8));
      }
    }
  }

  _k1b = fmax(_k1a,1e-12);

  tmp2 = _k1b;
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(k1b) was %g should be >= 0", tmp2);
  }
  _k2 = sqrt(tmp2);

  _kcos1 = (_B) * (_k2) - ((_A) * (_C));

  _ksin1 = (-((_B) * (_C) + (_A) * (_k2)));

  _angle1 = atan2(_ksin1, _kcos1);

  _kcos2 = (-((_A) * (_C) + (_B) * (_k2)));

  _ksin2 = (_A) * (_k2) - ((_B) * (_C));

  _angle2 = atan2(_ksin2, _kcos2);

  if((fabs(_angle1 - _angle_guess) <= fabs(_angle2 - _angle_guess)))
  {
    _positiveBranch = 1 /* true */;
  }
  else
  {
    _positiveBranch = 0 /* false */;
  }
  _return: OMC_LABEL_UNUSED
  return _positiveBranch;
}
modelica_metatype boxptr_AlyssaModel_Experiments_OptimalControlFMU_vehicle_frontSuspension_cornerR_tieRod_revolute_selectBranch(threadData_t *threadData, modelica_metatype _L, modelica_metatype _e, modelica_metatype _angle_guess, modelica_metatype _r_a, modelica_metatype _r_b)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean _positiveBranch;
  modelica_metatype out_positiveBranch;
  tmp1 = mmc_unbox_real(_L);
  tmp2 = mmc_unbox_real(_angle_guess);
  _positiveBranch = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_frontSuspension_cornerR_tieRod_revolute_selectBranch(threadData, tmp1, *((base_array_t*)_e), tmp2, *((base_array_t*)_r_a), *((base_array_t*)_r_b));
  out_positiveBranch = mmc_mk_icon(_positiveBranch);
  return out_positiveBranch;
}

DLLDirection
modelica_boolean omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerL_jointUSR_revolute_selectBranch(threadData_t *threadData, modelica_real _L, real_array _e, modelica_real _angle_guess, real_array _r_a, real_array _r_b)
{
  modelica_boolean _positiveBranch;
  modelica_real _e_r_a;
  modelica_real _e_r_b;
  modelica_real _A;
  modelica_real _B;
  modelica_real _C;
  modelica_real _k1;
  modelica_real _k2;
  modelica_real _k1a;
  modelica_real _k1b;
  modelica_real _kcos1;
  modelica_real _ksin1;
  modelica_real _kcos2;
  modelica_real _ksin2;
  modelica_real _angle1;
  modelica_real _angle2;
  static int tmp1 = 0;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _positiveBranch has no default value.
  // _e_r_a has no default value.
  // _e_r_b has no default value.
  // _A has no default value.
  // _B has no default value.
  // _C has no default value.
  // _k1 has no default value.
  // _k2 has no default value.
  // _k1a has no default value.
  // _k1b has no default value.
  // _kcos1 has no default value.
  // _ksin1 has no default value.
  // _kcos2 has no default value.
  // _ksin2 has no default value.
  // _angle1 has no default value.
  // _angle2 has no default value.
  _e_r_a = (real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3)));

  _e_r_b = (real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_b, 1, ((modelica_integer) 1))) + (real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_b, 1, ((modelica_integer) 2))) + (real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_b, 1, ((modelica_integer) 3)));

  _A = (-((2.0) * ((real_array_get(_r_b, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_r_b, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_r_b, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) - ((_e_r_b) * (_e_r_a)))));

  _B = ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 1)))) * ((real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) - ((real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))))) + ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 2)))) * ((real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) - ((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))))) + ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 3)))) * ((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) - ((real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 1)))));

  _C = (real_array_get(_r_a, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_r_a, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_r_a, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) + (real_array_get(_r_b, 1, ((modelica_integer) 1))) * (real_array_get(_r_b, 1, ((modelica_integer) 1))) + (real_array_get(_r_b, 1, ((modelica_integer) 2))) * (real_array_get(_r_b, 1, ((modelica_integer) 2))) + (real_array_get(_r_b, 1, ((modelica_integer) 3))) * (real_array_get(_r_b, 1, ((modelica_integer) 3))) - ((_L) * (_L)) - (((2.0) * (_e_r_b)) * (_e_r_a));

  _k1 = (_A) * (_A) + (_B) * (_B);

  _k1a = _k1 - ((_C) * (_C));

  {
    if(!(_k1a > 1e-10))
    {
      {
        FILE_INFO info = {"C:/Users/amcpo/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Joints/Internal/RevoluteWithLengthConstraint.mo",160,5,172,3,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT8));
      }
    }
  }

  _k1b = fmax(_k1a,1e-12);

  tmp2 = _k1b;
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(k1b) was %g should be >= 0", tmp2);
  }
  _k2 = sqrt(tmp2);

  _kcos1 = (_B) * (_k2) - ((_A) * (_C));

  _ksin1 = (-((_B) * (_C) + (_A) * (_k2)));

  _angle1 = atan2(_ksin1, _kcos1);

  _kcos2 = (-((_A) * (_C) + (_B) * (_k2)));

  _ksin2 = (_A) * (_k2) - ((_B) * (_C));

  _angle2 = atan2(_ksin2, _kcos2);

  if((fabs(_angle1 - _angle_guess) <= fabs(_angle2 - _angle_guess)))
  {
    _positiveBranch = 1 /* true */;
  }
  else
  {
    _positiveBranch = 0 /* false */;
  }
  _return: OMC_LABEL_UNUSED
  return _positiveBranch;
}
modelica_metatype boxptr_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerL_jointUSR_revolute_selectBranch(threadData_t *threadData, modelica_metatype _L, modelica_metatype _e, modelica_metatype _angle_guess, modelica_metatype _r_a, modelica_metatype _r_b)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean _positiveBranch;
  modelica_metatype out_positiveBranch;
  tmp1 = mmc_unbox_real(_L);
  tmp2 = mmc_unbox_real(_angle_guess);
  _positiveBranch = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerL_jointUSR_revolute_selectBranch(threadData, tmp1, *((base_array_t*)_e), tmp2, *((base_array_t*)_r_a), *((base_array_t*)_r_b));
  out_positiveBranch = mmc_mk_icon(_positiveBranch);
  return out_positiveBranch;
}

DLLDirection
modelica_boolean omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerL_tieRod_revolute_selectBranch(threadData_t *threadData, modelica_real _L, real_array _e, modelica_real _angle_guess, real_array _r_a, real_array _r_b)
{
  modelica_boolean _positiveBranch;
  modelica_real _e_r_a;
  modelica_real _e_r_b;
  modelica_real _A;
  modelica_real _B;
  modelica_real _C;
  modelica_real _k1;
  modelica_real _k2;
  modelica_real _k1a;
  modelica_real _k1b;
  modelica_real _kcos1;
  modelica_real _ksin1;
  modelica_real _kcos2;
  modelica_real _ksin2;
  modelica_real _angle1;
  modelica_real _angle2;
  static int tmp1 = 0;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _positiveBranch has no default value.
  // _e_r_a has no default value.
  // _e_r_b has no default value.
  // _A has no default value.
  // _B has no default value.
  // _C has no default value.
  // _k1 has no default value.
  // _k2 has no default value.
  // _k1a has no default value.
  // _k1b has no default value.
  // _kcos1 has no default value.
  // _ksin1 has no default value.
  // _kcos2 has no default value.
  // _ksin2 has no default value.
  // _angle1 has no default value.
  // _angle2 has no default value.
  _e_r_a = (real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3)));

  _e_r_b = (real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_b, 1, ((modelica_integer) 1))) + (real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_b, 1, ((modelica_integer) 2))) + (real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_b, 1, ((modelica_integer) 3)));

  _A = (-((2.0) * ((real_array_get(_r_b, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_r_b, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_r_b, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) - ((_e_r_b) * (_e_r_a)))));

  _B = ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 1)))) * ((real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) - ((real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))))) + ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 2)))) * ((real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) - ((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))))) + ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 3)))) * ((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) - ((real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 1)))));

  _C = (real_array_get(_r_a, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_r_a, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_r_a, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) + (real_array_get(_r_b, 1, ((modelica_integer) 1))) * (real_array_get(_r_b, 1, ((modelica_integer) 1))) + (real_array_get(_r_b, 1, ((modelica_integer) 2))) * (real_array_get(_r_b, 1, ((modelica_integer) 2))) + (real_array_get(_r_b, 1, ((modelica_integer) 3))) * (real_array_get(_r_b, 1, ((modelica_integer) 3))) - ((_L) * (_L)) - (((2.0) * (_e_r_b)) * (_e_r_a));

  _k1 = (_A) * (_A) + (_B) * (_B);

  _k1a = _k1 - ((_C) * (_C));

  {
    if(!(_k1a > 1e-10))
    {
      {
        FILE_INFO info = {"C:/Users/amcpo/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Joints/Internal/RevoluteWithLengthConstraint.mo",160,5,172,3,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT8));
      }
    }
  }

  _k1b = fmax(_k1a,1e-12);

  tmp2 = _k1b;
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(k1b) was %g should be >= 0", tmp2);
  }
  _k2 = sqrt(tmp2);

  _kcos1 = (_B) * (_k2) - ((_A) * (_C));

  _ksin1 = (-((_B) * (_C) + (_A) * (_k2)));

  _angle1 = atan2(_ksin1, _kcos1);

  _kcos2 = (-((_A) * (_C) + (_B) * (_k2)));

  _ksin2 = (_A) * (_k2) - ((_B) * (_C));

  _angle2 = atan2(_ksin2, _kcos2);

  if((fabs(_angle1 - _angle_guess) <= fabs(_angle2 - _angle_guess)))
  {
    _positiveBranch = 1 /* true */;
  }
  else
  {
    _positiveBranch = 0 /* false */;
  }
  _return: OMC_LABEL_UNUSED
  return _positiveBranch;
}
modelica_metatype boxptr_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerL_tieRod_revolute_selectBranch(threadData_t *threadData, modelica_metatype _L, modelica_metatype _e, modelica_metatype _angle_guess, modelica_metatype _r_a, modelica_metatype _r_b)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean _positiveBranch;
  modelica_metatype out_positiveBranch;
  tmp1 = mmc_unbox_real(_L);
  tmp2 = mmc_unbox_real(_angle_guess);
  _positiveBranch = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerL_tieRod_revolute_selectBranch(threadData, tmp1, *((base_array_t*)_e), tmp2, *((base_array_t*)_r_a), *((base_array_t*)_r_b));
  out_positiveBranch = mmc_mk_icon(_positiveBranch);
  return out_positiveBranch;
}

DLLDirection
modelica_boolean omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerR_jointUSR_revolute_selectBranch(threadData_t *threadData, modelica_real _L, real_array _e, modelica_real _angle_guess, real_array _r_a, real_array _r_b)
{
  modelica_boolean _positiveBranch;
  modelica_real _e_r_a;
  modelica_real _e_r_b;
  modelica_real _A;
  modelica_real _B;
  modelica_real _C;
  modelica_real _k1;
  modelica_real _k2;
  modelica_real _k1a;
  modelica_real _k1b;
  modelica_real _kcos1;
  modelica_real _ksin1;
  modelica_real _kcos2;
  modelica_real _ksin2;
  modelica_real _angle1;
  modelica_real _angle2;
  static int tmp1 = 0;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _positiveBranch has no default value.
  // _e_r_a has no default value.
  // _e_r_b has no default value.
  // _A has no default value.
  // _B has no default value.
  // _C has no default value.
  // _k1 has no default value.
  // _k2 has no default value.
  // _k1a has no default value.
  // _k1b has no default value.
  // _kcos1 has no default value.
  // _ksin1 has no default value.
  // _kcos2 has no default value.
  // _ksin2 has no default value.
  // _angle1 has no default value.
  // _angle2 has no default value.
  _e_r_a = (real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3)));

  _e_r_b = (real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_b, 1, ((modelica_integer) 1))) + (real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_b, 1, ((modelica_integer) 2))) + (real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_b, 1, ((modelica_integer) 3)));

  _A = (-((2.0) * ((real_array_get(_r_b, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_r_b, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_r_b, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) - ((_e_r_b) * (_e_r_a)))));

  _B = ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 1)))) * ((real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) - ((real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))))) + ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 2)))) * ((real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) - ((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))))) + ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 3)))) * ((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) - ((real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 1)))));

  _C = (real_array_get(_r_a, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_r_a, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_r_a, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) + (real_array_get(_r_b, 1, ((modelica_integer) 1))) * (real_array_get(_r_b, 1, ((modelica_integer) 1))) + (real_array_get(_r_b, 1, ((modelica_integer) 2))) * (real_array_get(_r_b, 1, ((modelica_integer) 2))) + (real_array_get(_r_b, 1, ((modelica_integer) 3))) * (real_array_get(_r_b, 1, ((modelica_integer) 3))) - ((_L) * (_L)) - (((2.0) * (_e_r_b)) * (_e_r_a));

  _k1 = (_A) * (_A) + (_B) * (_B);

  _k1a = _k1 - ((_C) * (_C));

  {
    if(!(_k1a > 1e-10))
    {
      {
        FILE_INFO info = {"C:/Users/amcpo/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Joints/Internal/RevoluteWithLengthConstraint.mo",160,5,172,3,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT8));
      }
    }
  }

  _k1b = fmax(_k1a,1e-12);

  tmp2 = _k1b;
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(k1b) was %g should be >= 0", tmp2);
  }
  _k2 = sqrt(tmp2);

  _kcos1 = (_B) * (_k2) - ((_A) * (_C));

  _ksin1 = (-((_B) * (_C) + (_A) * (_k2)));

  _angle1 = atan2(_ksin1, _kcos1);

  _kcos2 = (-((_A) * (_C) + (_B) * (_k2)));

  _ksin2 = (_A) * (_k2) - ((_B) * (_C));

  _angle2 = atan2(_ksin2, _kcos2);

  if((fabs(_angle1 - _angle_guess) <= fabs(_angle2 - _angle_guess)))
  {
    _positiveBranch = 1 /* true */;
  }
  else
  {
    _positiveBranch = 0 /* false */;
  }
  _return: OMC_LABEL_UNUSED
  return _positiveBranch;
}
modelica_metatype boxptr_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerR_jointUSR_revolute_selectBranch(threadData_t *threadData, modelica_metatype _L, modelica_metatype _e, modelica_metatype _angle_guess, modelica_metatype _r_a, modelica_metatype _r_b)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean _positiveBranch;
  modelica_metatype out_positiveBranch;
  tmp1 = mmc_unbox_real(_L);
  tmp2 = mmc_unbox_real(_angle_guess);
  _positiveBranch = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerR_jointUSR_revolute_selectBranch(threadData, tmp1, *((base_array_t*)_e), tmp2, *((base_array_t*)_r_a), *((base_array_t*)_r_b));
  out_positiveBranch = mmc_mk_icon(_positiveBranch);
  return out_positiveBranch;
}

DLLDirection
modelica_boolean omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerR_tieRod_revolute_selectBranch(threadData_t *threadData, modelica_real _L, real_array _e, modelica_real _angle_guess, real_array _r_a, real_array _r_b)
{
  modelica_boolean _positiveBranch;
  modelica_real _e_r_a;
  modelica_real _e_r_b;
  modelica_real _A;
  modelica_real _B;
  modelica_real _C;
  modelica_real _k1;
  modelica_real _k2;
  modelica_real _k1a;
  modelica_real _k1b;
  modelica_real _kcos1;
  modelica_real _ksin1;
  modelica_real _kcos2;
  modelica_real _ksin2;
  modelica_real _angle1;
  modelica_real _angle2;
  static int tmp1 = 0;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _positiveBranch has no default value.
  // _e_r_a has no default value.
  // _e_r_b has no default value.
  // _A has no default value.
  // _B has no default value.
  // _C has no default value.
  // _k1 has no default value.
  // _k2 has no default value.
  // _k1a has no default value.
  // _k1b has no default value.
  // _kcos1 has no default value.
  // _ksin1 has no default value.
  // _kcos2 has no default value.
  // _ksin2 has no default value.
  // _angle1 has no default value.
  // _angle2 has no default value.
  _e_r_a = (real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3)));

  _e_r_b = (real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_b, 1, ((modelica_integer) 1))) + (real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_b, 1, ((modelica_integer) 2))) + (real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_b, 1, ((modelica_integer) 3)));

  _A = (-((2.0) * ((real_array_get(_r_b, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_r_b, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_r_b, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) - ((_e_r_b) * (_e_r_a)))));

  _B = ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 1)))) * ((real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) - ((real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))))) + ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 2)))) * ((real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) - ((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))))) + ((2.0) * (real_array_get(_r_b, 1, ((modelica_integer) 3)))) * ((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) - ((real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 1)))));

  _C = (real_array_get(_r_a, 1, ((modelica_integer) 1))) * (real_array_get(_r_a, 1, ((modelica_integer) 1))) + (real_array_get(_r_a, 1, ((modelica_integer) 2))) * (real_array_get(_r_a, 1, ((modelica_integer) 2))) + (real_array_get(_r_a, 1, ((modelica_integer) 3))) * (real_array_get(_r_a, 1, ((modelica_integer) 3))) + (real_array_get(_r_b, 1, ((modelica_integer) 1))) * (real_array_get(_r_b, 1, ((modelica_integer) 1))) + (real_array_get(_r_b, 1, ((modelica_integer) 2))) * (real_array_get(_r_b, 1, ((modelica_integer) 2))) + (real_array_get(_r_b, 1, ((modelica_integer) 3))) * (real_array_get(_r_b, 1, ((modelica_integer) 3))) - ((_L) * (_L)) - (((2.0) * (_e_r_b)) * (_e_r_a));

  _k1 = (_A) * (_A) + (_B) * (_B);

  _k1a = _k1 - ((_C) * (_C));

  {
    if(!(_k1a > 1e-10))
    {
      {
        FILE_INFO info = {"C:/Users/amcpo/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Joints/Internal/RevoluteWithLengthConstraint.mo",160,5,172,3,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT8));
      }
    }
  }

  _k1b = fmax(_k1a,1e-12);

  tmp2 = _k1b;
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(k1b) was %g should be >= 0", tmp2);
  }
  _k2 = sqrt(tmp2);

  _kcos1 = (_B) * (_k2) - ((_A) * (_C));

  _ksin1 = (-((_B) * (_C) + (_A) * (_k2)));

  _angle1 = atan2(_ksin1, _kcos1);

  _kcos2 = (-((_A) * (_C) + (_B) * (_k2)));

  _ksin2 = (_A) * (_k2) - ((_B) * (_C));

  _angle2 = atan2(_ksin2, _kcos2);

  if((fabs(_angle1 - _angle_guess) <= fabs(_angle2 - _angle_guess)))
  {
    _positiveBranch = 1 /* true */;
  }
  else
  {
    _positiveBranch = 0 /* false */;
  }
  _return: OMC_LABEL_UNUSED
  return _positiveBranch;
}
modelica_metatype boxptr_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerR_tieRod_revolute_selectBranch(threadData_t *threadData, modelica_metatype _L, modelica_metatype _e, modelica_metatype _angle_guess, modelica_metatype _r_a, modelica_metatype _r_b)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean _positiveBranch;
  modelica_metatype out_positiveBranch;
  tmp1 = mmc_unbox_real(_L);
  tmp2 = mmc_unbox_real(_angle_guess);
  _positiveBranch = omc_AlyssaModel_Experiments_OptimalControlFMU_vehicle_rearSuspension_cornerR_tieRod_revolute_selectBranch(threadData, tmp1, *((base_array_t*)_e), tmp2, *((base_array_t*)_r_a), *((base_array_t*)_r_b));
  out_positiveBranch = mmc_mk_icon(_positiveBranch);
  return out_positiveBranch;
}

DLLDirection
modelica_real omc_Modelica_Math_Vectors_length(threadData_t *threadData, real_array _v)
{
  modelica_real _result;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  tmp1 = mul_real_scalar_product(_v, _v);
  if(!(tmp1 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(v * v) was %g should be >= 0", tmp1);
  }
  _result = sqrt(tmp1);
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_Modelica_Math_Vectors_length(threadData_t *threadData, modelica_metatype _v)
{
  modelica_real _result;
  modelica_metatype out_result;
  _result = omc_Modelica_Math_Vectors_length(threadData, *((base_array_t*)_v));
  out_result = mmc_mk_rcon(_result);
  return out_result;
}

DLLDirection
modelica_real omc_Modelica_Math_Vectors_norm(threadData_t *threadData, real_array _v, modelica_real _p)
{
  modelica_real _result;
  modelica_real _eps;
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp8;
  modelica_real tmp13;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_string tmp33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  static int tmp36 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  _result = 0.0;
  _eps = 1.0000000000000002e-14;
  tmp1 = size_of_dimension_base_array(_v, ((modelica_integer) 1));
  if((tmp1 > ((modelica_integer) 0)))
  {
    if(((_p >= 2.0 - _eps) && (_p <= 2.0 + _eps)))
    {
      tmp2 = mul_real_scalar_product(_v, _v);
      if(!(tmp2 >= 0.0))
      {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert(threadData, info, "Model error: Argument of sqrt(v * v) was %g should be >= 0", tmp2);
      }
      _result = sqrt(tmp2);
    }
    else
    {
      if((_p >= 1e60))
      {
        {
          modelica_real __omcQ_24tmpVar3;
          modelica_real __omcQ_24tmpVar2;
          modelica_integer tmp4;
          modelica_integer tmp5;
          modelica_integer tmp6;
          modelica_integer tmp7;
          modelica_integer __omcQ_24i1;
          tmp7 = size_of_dimension_base_array(_v, ((modelica_integer) 1));
          tmp5 = 1 /* Range step-value */;
          tmp6 = tmp7 /* Range stop-value */;
          __omcQ_24i1 = ((modelica_integer) 1) /* Range start-value */;
          __omcQ_24i1 = (((modelica_integer) 1) /* Range start-value */)-tmp5;
          __omcQ_24tmpVar3 = -8.777798510069901e304; /* defaultValue */
          while(1) {
            tmp4 = 1;
            if (tmp5 > 0 ? __omcQ_24i1+tmp5 <= tmp6 : __omcQ_24i1+tmp5 >= tmp6) {
              __omcQ_24i1 += tmp5;
              tmp4--;
            }
            if (tmp4 == 0) {
              __omcQ_24tmpVar2 = fabs(real_array_get(_v, 1, __omcQ_24i1));
              __omcQ_24tmpVar3 = fmax(__omcQ_24tmpVar2,__omcQ_24tmpVar3);
            } else if (tmp4 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          tmp3 = __omcQ_24tmpVar3;
        }
        _result = tmp3;
      }
      else
      {
        if(((_p >= 1.0 - _eps) && (_p <= 1.0 + _eps)))
        {
          {
            modelica_real __omcQ_24tmpVar5;
            modelica_real __omcQ_24tmpVar4;
            modelica_integer tmp9;
            modelica_integer tmp10;
            modelica_integer tmp11;
            modelica_integer tmp12;
            modelica_integer __omcQ_24i1;
            tmp12 = size_of_dimension_base_array(_v, ((modelica_integer) 1));
            tmp10 = 1 /* Range step-value */;
            tmp11 = tmp12 /* Range stop-value */;
            __omcQ_24i1 = ((modelica_integer) 1) /* Range start-value */;
            __omcQ_24i1 = (((modelica_integer) 1) /* Range start-value */)-tmp10;
            __omcQ_24tmpVar5 = 0.0; /* defaultValue */
            while(1) {
              tmp9 = 1;
              if (tmp10 > 0 ? __omcQ_24i1+tmp10 <= tmp11 : __omcQ_24i1+tmp10 >= tmp11) {
                __omcQ_24i1 += tmp10;
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar4 = fabs(real_array_get(_v, 1, __omcQ_24i1));
                __omcQ_24tmpVar5 = __omcQ_24tmpVar5 + __omcQ_24tmpVar4;
              } else if (tmp9 == 1) {
                break;
              } else {
                MMC_THROW_INTERNAL();
              }
            }
            tmp8 = __omcQ_24tmpVar5;
          }
          _result = tmp8;
        }
        else
        {
          if((_p >= 1.0))
          {
            {
              modelica_real __omcQ_24tmpVar1;
              modelica_real tmp14;
              modelica_real tmp15;
              modelica_real tmp16;
              modelica_real tmp17;
              modelica_real tmp18;
              modelica_real tmp19;
              modelica_real tmp20;
              modelica_real __omcQ_24tmpVar0;
              modelica_integer tmp21;
              modelica_integer tmp22;
              modelica_integer tmp23;
              modelica_integer tmp24;
              modelica_integer _i;
              tmp24 = size_of_dimension_base_array(_v, ((modelica_integer) 1));
              tmp22 = 1 /* Range step-value */;
              tmp23 = tmp24 /* Range stop-value */;
              _i = ((modelica_integer) 1) /* Range start-value */;
              _i = (((modelica_integer) 1) /* Range start-value */)-tmp22;
              __omcQ_24tmpVar1 = 0.0; /* defaultValue */
              while(1) {
                tmp21 = 1;
                if (tmp22 > 0 ? _i+tmp22 <= tmp23 : _i+tmp22 >= tmp23) {
                  _i += tmp22;
                  tmp21--;
                }
                if (tmp21 == 0) {
                  tmp14 = fabs(real_array_get(_v, 1, _i));
                  tmp15 = _p;
                  if(tmp14 < 0.0 && tmp15 != 0.0)
                  {
                    tmp17 = modf(tmp15, &tmp18);
                    
                    if(tmp17 > 0.5)
                    {
                      tmp17 -= 1.0;
                      tmp18 += 1.0;
                    }
                    else if(tmp17 < -0.5)
                    {
                      tmp17 += 1.0;
                      tmp18 -= 1.0;
                    }
                    
                    if(fabs(tmp17) < 1e-10)
                      tmp16 = pow(tmp14, tmp18);
                    else
                    {
                      tmp20 = modf(1.0/tmp15, &tmp19);
                      if(tmp20 > 0.5)
                      {
                        tmp20 -= 1.0;
                        tmp19 += 1.0;
                      }
                      else if(tmp20 < -0.5)
                      {
                        tmp20 += 1.0;
                        tmp19 -= 1.0;
                      }
                      if(fabs(tmp20) < 1e-10 && ((unsigned long)tmp19 & 1))
                      {
                        tmp16 = -pow(-tmp14, tmp17)*pow(tmp14, tmp18);
                      }
                      else
                      {
                        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp14, tmp15);
                      }
                    }
                  }
                  else
                  {
                    tmp16 = pow(tmp14, tmp15);
                  }
                  if(isnan(tmp16) || isinf(tmp16))
                  {
                    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp14, tmp15);
                  }__omcQ_24tmpVar0 = tmp16;
                  __omcQ_24tmpVar1 = __omcQ_24tmpVar1 + __omcQ_24tmpVar0;
                } else if (tmp21 == 1) {
                  break;
                } else {
                  MMC_THROW_INTERNAL();
                }
              }
              tmp13 = __omcQ_24tmpVar1;
            }
            tmp25 = _p;
            if (tmp25 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / p");}
            tmp26 = tmp13;
            tmp27 = (1.0) / tmp25;
            if(tmp26 < 0.0 && tmp27 != 0.0)
            {
              tmp29 = modf(tmp27, &tmp30);
              
              if(tmp29 > 0.5)
              {
                tmp29 -= 1.0;
                tmp30 += 1.0;
              }
              else if(tmp29 < -0.5)
              {
                tmp29 += 1.0;
                tmp30 -= 1.0;
              }
              
              if(fabs(tmp29) < 1e-10)
                tmp28 = pow(tmp26, tmp30);
              else
              {
                tmp32 = modf(1.0/tmp27, &tmp31);
                if(tmp32 > 0.5)
                {
                  tmp32 -= 1.0;
                  tmp31 += 1.0;
                }
                else if(tmp32 < -0.5)
                {
                  tmp32 += 1.0;
                  tmp31 -= 1.0;
                }
                if(fabs(tmp32) < 1e-10 && ((unsigned long)tmp31 & 1))
                {
                  tmp28 = -pow(-tmp26, tmp29)*pow(tmp26, tmp30);
                }
                else
                {
                  throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp26, tmp27);
                }
              }
            }
            else
            {
              tmp28 = pow(tmp26, tmp27);
            }
            if(isnan(tmp28) || isinf(tmp28))
            {
              throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp26, tmp27);
            }
            _result = tmp28;
          }
          else
          {
            {
              if(!0 /* false */)
              {
                tmp33 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
                tmpMeta34 = stringAppend(_OMC_LIT9,tmp33);
                tmpMeta35 = stringAppend(tmpMeta34,_OMC_LIT10);
                {
                  FILE_INFO info = {"C:/Users/amcpo/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Math/package.mo",159,7,159,104,0};
                  omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta35));
                }
              }
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_Modelica_Math_Vectors_norm(threadData_t *threadData, modelica_metatype _v, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _result;
  modelica_metatype out_result;
  tmp1 = mmc_unbox_real(_p);
  _result = omc_Modelica_Math_Vectors_norm(threadData, *((base_array_t*)_v), tmp1);
  out_result = mmc_mk_rcon(_result);
  return out_result;
}

DLLDirection
real_array omc_Modelica_Math_Vectors_normalize(threadData_t *threadData, real_array _v, modelica_real _eps)
{
  real_array _result;
  modelica_integer tmp1;
  modelica_boolean tmp2;
  real_array tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = size_of_dimension_base_array(_v, ((modelica_integer) 1));
  alloc_real_array(&(_result), 1, (_index_t)tmp1); // _result has no default value.
  tmp2 = (modelica_boolean)(omc_Modelica_Math_Vectors_length(threadData, _v) >= _eps);
  if(tmp2)
  {
    tmp3 = div_alloc_real_array_scalar(_v, omc_Modelica_Math_Vectors_length(threadData, _v));
  }
  else
  {
    tmp3 = div_alloc_real_array_scalar(_v, _eps);
  }
  real_array_copy_data(tmp3, _result);
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_Modelica_Math_Vectors_normalize(threadData_t *threadData, modelica_metatype _v, modelica_metatype _eps)
{
  modelica_real tmp1;
  real_array _result;
  modelica_integer tmp2;
  modelica_metatype out_result;
  tmp1 = mmc_unbox_real(_eps);
  _result = omc_Modelica_Math_Vectors_normalize(threadData, *((base_array_t*)_v), tmp1);
  out_result = mmc_mk_modelica_array(_result);
  return out_result;
}

Modelica_Mechanics_MultiBody_Frames_Orientation omc_Modelica_Mechanics_MultiBody_Frames_Orientation(threadData_t *threadData, real_array omc_T, real_array omc_w)
{
  Modelica_Mechanics_MultiBody_Frames_Orientation tmp1;
  tmp1._T = omc_T;
  tmp1._w = omc_w;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_Orientation(threadData_t *threadData, modelica_metatype _T, modelica_metatype _w)
{
  return mmc_mk_box3(3, &Modelica_Mechanics_MultiBody_Frames_Orientation__desc, _T, _w);
}

DLLDirection
real_array omc_Modelica_Mechanics_MultiBody_Frames_axesRotationsAngles(threadData_t *threadData, Modelica_Mechanics_MultiBody_Frames_Orientation _R, integer_array _sequence, modelica_real _guessAngle1)
{
  real_array _angles;
  real_array _e1_1;
  real_array _e2_1a;
  real_array _e3_1;
  real_array _e3_2;
  modelica_real _A;
  modelica_real _B;
  modelica_real _angle_1a;
  modelica_real _angle_1b;
  real_array _T_1a;
  static int tmp1 = 0;
  modelica_boolean tmp2;
  real_array tmp3;
  modelica_boolean tmp4;
  real_array tmp5;
  modelica_boolean tmp6;
  real_array tmp7;
  modelica_boolean tmp8;
  real_array tmp9;
  real_array tmp10;
  index_spec_t tmp11;
  modelica_boolean tmp12;
  real_array tmp13;
  modelica_boolean tmp14;
  real_array tmp15;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_real_array(&(_angles), 1, (_index_t)3); // _angles has no default value.
  alloc_real_array(&(_e1_1), 1, (_index_t)3); // _e1_1 has no default value.
  alloc_real_array(&(_e2_1a), 1, (_index_t)3); // _e2_1a has no default value.
  alloc_real_array(&(_e3_1), 1, (_index_t)3); // _e3_1 has no default value.
  alloc_real_array(&(_e3_2), 1, (_index_t)3); // _e3_2 has no default value.
  // _A has no default value.
  // _B has no default value.
  // _angle_1a has no default value.
  // _angle_1b has no default value.
  alloc_real_array(&(_T_1a), 2, (_index_t)3, (_index_t)3); // _T_1a has no default value.
  {
    if(!((integer_array_get(_sequence, 1, ((modelica_integer) 1)) != integer_array_get(_sequence, 1, ((modelica_integer) 2))) && (integer_array_get(_sequence, 1, ((modelica_integer) 2)) != integer_array_get(_sequence, 1, ((modelica_integer) 3)))))
    {
      {
        FILE_INFO info = {"C:/Users/amcpo/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Frames/axesRotationsAngles.mo",76,3,77,51,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT17));
      }
    }
  }

  tmp4 = (modelica_boolean)(integer_array_get(_sequence, 1, ((modelica_integer) 1)) == ((modelica_integer) 1));
  if(tmp4)
  {
    tmp5 = _OMC_LIT18;
  }
  else
  {
    tmp2 = (modelica_boolean)(integer_array_get(_sequence, 1, ((modelica_integer) 1)) == ((modelica_integer) 2));
    if(tmp2)
    {
      tmp3 = _OMC_LIT19;
    }
    else
    {
      tmp3 = _OMC_LIT20;
    }
    tmp5 = tmp3;
  }
  real_array_copy_data(tmp5, _e1_1);

  tmp8 = (modelica_boolean)(integer_array_get(_sequence, 1, ((modelica_integer) 2)) == ((modelica_integer) 1));
  if(tmp8)
  {
    tmp9 = _OMC_LIT18;
  }
  else
  {
    tmp6 = (modelica_boolean)(integer_array_get(_sequence, 1, ((modelica_integer) 2)) == ((modelica_integer) 2));
    if(tmp6)
    {
      tmp7 = _OMC_LIT19;
    }
    else
    {
      tmp7 = _OMC_LIT20;
    }
    tmp9 = tmp7;
  }
  real_array_copy_data(tmp9, _e2_1a);

  create_index_spec(&tmp11, 2, (modelica_integer)(0), make_index_array(1, (modelica_integer) integer_array_get(_sequence, 1, ((modelica_integer) 3))), 'S', (modelica_integer)(1), (int*)0, 'W');
  index_alloc_real_array(&_R._T, &tmp11, &tmp10);
  real_array_copy_data(tmp10, _e3_1);

  tmp14 = (modelica_boolean)(integer_array_get(_sequence, 1, ((modelica_integer) 3)) == ((modelica_integer) 1));
  if(tmp14)
  {
    tmp15 = _OMC_LIT18;
  }
  else
  {
    tmp12 = (modelica_boolean)(integer_array_get(_sequence, 1, ((modelica_integer) 3)) == ((modelica_integer) 2));
    if(tmp12)
    {
      tmp13 = _OMC_LIT19;
    }
    else
    {
      tmp13 = _OMC_LIT20;
    }
    tmp15 = tmp13;
  }
  real_array_copy_data(tmp15, _e3_2);

  _A = (real_array_get(_e2_1a, 1, ((modelica_integer) 1))) * (real_array_get(_e3_1, 1, ((modelica_integer) 1))) + (real_array_get(_e2_1a, 1, ((modelica_integer) 2))) * (real_array_get(_e3_1, 1, ((modelica_integer) 2))) + (real_array_get(_e2_1a, 1, ((modelica_integer) 3))) * (real_array_get(_e3_1, 1, ((modelica_integer) 3)));

  _B = ((real_array_get(_e1_1, 1, ((modelica_integer) 2))) * (real_array_get(_e2_1a, 1, ((modelica_integer) 3))) - ((real_array_get(_e1_1, 1, ((modelica_integer) 3))) * (real_array_get(_e2_1a, 1, ((modelica_integer) 2))))) * (real_array_get(_e3_1, 1, ((modelica_integer) 1))) + ((real_array_get(_e1_1, 1, ((modelica_integer) 3))) * (real_array_get(_e2_1a, 1, ((modelica_integer) 1))) - ((real_array_get(_e1_1, 1, ((modelica_integer) 1))) * (real_array_get(_e2_1a, 1, ((modelica_integer) 3))))) * (real_array_get(_e3_1, 1, ((modelica_integer) 2))) + ((real_array_get(_e1_1, 1, ((modelica_integer) 1))) * (real_array_get(_e2_1a, 1, ((modelica_integer) 2))) - ((real_array_get(_e1_1, 1, ((modelica_integer) 2))) * (real_array_get(_e2_1a, 1, ((modelica_integer) 1))))) * (real_array_get(_e3_1, 1, ((modelica_integer) 3)));

  if(((fabs(_A) <= 1e-12) && (fabs(_B) <= 1e-12)))
  {
    real_array_get(_angles, 1, ((modelica_integer) 1)) = _guessAngle1;
  }
  else
  {
    _angle_1a = atan2(_A, (-_B));

    _angle_1b = atan2((-_A), _B);

    real_array_get(_angles, 1, ((modelica_integer) 1)) = ((fabs(_angle_1a - _guessAngle1) <= fabs(_angle_1b - _guessAngle1))?_angle_1a:_angle_1b);
  }

  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_planarRotation(threadData, _e1_1, real_array_get(_angles, 1, ((modelica_integer) 1))), _T_1a);

  real_array_get(_angles, 1, ((modelica_integer) 2)) = omc_Modelica_Mechanics_MultiBody_Frames_planarRotationAngle(threadData, _e2_1a, omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve2(threadData, _T_1a, _e3_1), _e3_2);

  real_array_get(_angles, 1, ((modelica_integer) 3)) = omc_Modelica_Mechanics_MultiBody_Frames_planarRotationAngle(threadData, _e3_2, _e2_1a, omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve2(threadData, _R._T, omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve1(threadData, _T_1a, _e2_1a)));
  _return: OMC_LABEL_UNUSED
  return _angles;
}
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_axesRotationsAngles(threadData_t *threadData, modelica_metatype _R, modelica_metatype _sequence, modelica_metatype _guessAngle1)
{
  Modelica_Mechanics_MultiBody_Frames_Orientation tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_real tmp4;
  real_array _angles;
  modelica_metatype out_angles;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_R), 2)));
  tmp1._T = *((base_array_t*)tmpMeta2);
  tmpMeta3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_R), 3)));
  tmp1._w = *((base_array_t*)tmpMeta3);tmp4 = mmc_unbox_real(_guessAngle1);
  _angles = omc_Modelica_Mechanics_MultiBody_Frames_axesRotationsAngles(threadData, tmp1, *((base_array_t*)_sequence), tmp4);
  out_angles = mmc_mk_modelica_array(_angles);
  return out_angles;
}

DLLDirection
modelica_real omc_Modelica_Mechanics_MultiBody_Frames_planarRotationAngle(threadData_t *threadData, real_array _e, real_array _v1, real_array _v2)
{
  modelica_real _angle;
  _tailrecursive: OMC_LABEL_UNUSED
  // _angle has no default value.
  _angle = atan2((-(((real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_v1, 1, ((modelica_integer) 3))) - ((real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_v1, 1, ((modelica_integer) 2))))) * (real_array_get(_v2, 1, ((modelica_integer) 1))) + ((real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_v1, 1, ((modelica_integer) 1))) - ((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_v1, 1, ((modelica_integer) 3))))) * (real_array_get(_v2, 1, ((modelica_integer) 2))) + ((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_v1, 1, ((modelica_integer) 2))) - ((real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_v1, 1, ((modelica_integer) 1))))) * (real_array_get(_v2, 1, ((modelica_integer) 3))))), (real_array_get(_v1, 1, ((modelica_integer) 1))) * (real_array_get(_v2, 1, ((modelica_integer) 1))) + (real_array_get(_v1, 1, ((modelica_integer) 2))) * (real_array_get(_v2, 1, ((modelica_integer) 2))) + (real_array_get(_v1, 1, ((modelica_integer) 3))) * (real_array_get(_v2, 1, ((modelica_integer) 3))) - (((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_v1, 1, ((modelica_integer) 1))) + (real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_v1, 1, ((modelica_integer) 2))) + (real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_v1, 1, ((modelica_integer) 3)))) * ((real_array_get(_e, 1, ((modelica_integer) 1))) * (real_array_get(_v2, 1, ((modelica_integer) 1))) + (real_array_get(_e, 1, ((modelica_integer) 2))) * (real_array_get(_v2, 1, ((modelica_integer) 2))) + (real_array_get(_e, 1, ((modelica_integer) 3))) * (real_array_get(_v2, 1, ((modelica_integer) 3))))));
  _return: OMC_LABEL_UNUSED
  return _angle;
}
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_planarRotationAngle(threadData_t *threadData, modelica_metatype _e, modelica_metatype _v1, modelica_metatype _v2)
{
  modelica_real _angle;
  modelica_metatype out_angle;
  _angle = omc_Modelica_Mechanics_MultiBody_Frames_planarRotationAngle(threadData, *((base_array_t*)_e), *((base_array_t*)_v1), *((base_array_t*)_v2));
  out_angle = mmc_mk_rcon(_angle);
  return out_angle;
}

DLLDirection
modelica_real omc_Modelica_Mechanics_MultiBody_Frames_Internal_maxWithoutEvent(threadData_t *threadData, modelica_real _u1, modelica_real _u2)
{
  modelica_real _y;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  _y = ((_u1 > _u2)?_u1:_u2);
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_Internal_maxWithoutEvent(threadData_t *threadData, modelica_metatype _u1, modelica_metatype _u2)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_u1);
  tmp2 = mmc_unbox_real(_u2);
  _y = omc_Modelica_Mechanics_MultiBody_Frames_Internal_maxWithoutEvent(threadData, tmp1, tmp2);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLDirection
modelica_real omc_Modelica_Mechanics_MultiBody_Frames_Internal_maxWithoutEvent__d(threadData_t *threadData, modelica_real _u1, modelica_real _u2, modelica_real _u1_d, modelica_real _u2_d)
{
  modelica_real _y_d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y_d has no default value.
  _y_d = ((_u1 > _u2)?_u1_d:_u2_d);
  _return: OMC_LABEL_UNUSED
  return _y_d;
}
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_Internal_maxWithoutEvent__d(threadData_t *threadData, modelica_metatype _u1, modelica_metatype _u2, modelica_metatype _u1_d, modelica_metatype _u2_d)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _y_d;
  modelica_metatype out_y_d;
  tmp1 = mmc_unbox_real(_u1);
  tmp2 = mmc_unbox_real(_u2);
  tmp3 = mmc_unbox_real(_u1_d);
  tmp4 = mmc_unbox_real(_u2_d);
  _y_d = omc_Modelica_Mechanics_MultiBody_Frames_Internal_maxWithoutEvent__d(threadData, tmp1, tmp2, tmp3, tmp4);
  out_y_d = mmc_mk_rcon(_y_d);
  return out_y_d;
}

DLLDirection
real_array omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData_t *threadData, real_array _n_x, real_array _n_y)
{
  real_array _T;
  real_array _e_x;
  modelica_boolean tmp1;
  real_array tmp2;
  real_array _e_y;
  modelica_boolean tmp3;
  real_array tmp4;
  real_array _n_z_aux;
  real_array tmp5;
  real_array _n_y_aux;
  modelica_boolean tmp6;
  real_array tmp7;
  modelica_boolean tmp8;
  real_array tmp9;
  real_array _e_z_aux;
  real_array tmp10;
  real_array _e_z;
  real_array tmp11;
  real_array tmp12;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_real_array(&(_T), 2, (_index_t)3, (_index_t)3); // _T has no default value.
  alloc_real_array(&(_e_x), 1, (_index_t)3);
  tmp1 = (modelica_boolean)(omc_Modelica_Math_Vectors_length(threadData, _n_x) < 1e-10);
  if(tmp1)
  {
    tmp2 = _OMC_LIT18;
  }
  else
  {
    tmp2 = omc_Modelica_Math_Vectors_normalize(threadData, _n_x, 1e-13);
  }
  real_array_copy_data(tmp2, _e_x);
  
  alloc_real_array(&(_e_y), 1, (_index_t)3);
  tmp3 = (modelica_boolean)(omc_Modelica_Math_Vectors_length(threadData, _n_y) < 1e-10);
  if(tmp3)
  {
    tmp4 = _OMC_LIT19;
  }
  else
  {
    tmp4 = omc_Modelica_Math_Vectors_normalize(threadData, _n_y, 1e-13);
  }
  real_array_copy_data(tmp4, _e_y);
  
  alloc_real_array(&(_n_z_aux), 1, (_index_t)3);
  array_alloc_scalar_real_array(&tmp5, 3, (modelica_real)(real_array_get(_e_x, 1, ((modelica_integer) 2))) * (real_array_get(_e_y, 1, ((modelica_integer) 3))) - ((real_array_get(_e_x, 1, ((modelica_integer) 3))) * (real_array_get(_e_y, 1, ((modelica_integer) 2)))), (modelica_real)(real_array_get(_e_x, 1, ((modelica_integer) 3))) * (real_array_get(_e_y, 1, ((modelica_integer) 1))) - ((real_array_get(_e_x, 1, ((modelica_integer) 1))) * (real_array_get(_e_y, 1, ((modelica_integer) 3)))), (modelica_real)(real_array_get(_e_x, 1, ((modelica_integer) 1))) * (real_array_get(_e_y, 1, ((modelica_integer) 2))) - ((real_array_get(_e_x, 1, ((modelica_integer) 2))) * (real_array_get(_e_y, 1, ((modelica_integer) 1)))));
  real_array_copy_data(tmp5, _n_z_aux);
  
  alloc_real_array(&(_n_y_aux), 1, (_index_t)3);
  tmp8 = (modelica_boolean)((real_array_get(_n_z_aux, 1, ((modelica_integer) 1))) * (real_array_get(_n_z_aux, 1, ((modelica_integer) 1))) + (real_array_get(_n_z_aux, 1, ((modelica_integer) 2))) * (real_array_get(_n_z_aux, 1, ((modelica_integer) 2))) + (real_array_get(_n_z_aux, 1, ((modelica_integer) 3))) * (real_array_get(_n_z_aux, 1, ((modelica_integer) 3))) > 1e-6);
  if(tmp8)
  {
    tmp9 = _e_y;
  }
  else
  {
    tmp6 = (modelica_boolean)(fabs(real_array_get(_e_x, 1, ((modelica_integer) 1))) > 1e-6);
    if(tmp6)
    {
      tmp7 = _OMC_LIT19;
    }
    else
    {
      tmp7 = _OMC_LIT18;
    }
    tmp9 = tmp7;
  }
  real_array_copy_data(tmp9, _n_y_aux);
  
  alloc_real_array(&(_e_z_aux), 1, (_index_t)3);
  array_alloc_scalar_real_array(&tmp10, 3, (modelica_real)(real_array_get(_e_x, 1, ((modelica_integer) 2))) * (real_array_get(_n_y_aux, 1, ((modelica_integer) 3))) - ((real_array_get(_e_x, 1, ((modelica_integer) 3))) * (real_array_get(_n_y_aux, 1, ((modelica_integer) 2)))), (modelica_real)(real_array_get(_e_x, 1, ((modelica_integer) 3))) * (real_array_get(_n_y_aux, 1, ((modelica_integer) 1))) - ((real_array_get(_e_x, 1, ((modelica_integer) 1))) * (real_array_get(_n_y_aux, 1, ((modelica_integer) 3)))), (modelica_real)(real_array_get(_e_x, 1, ((modelica_integer) 1))) * (real_array_get(_n_y_aux, 1, ((modelica_integer) 2))) - ((real_array_get(_e_x, 1, ((modelica_integer) 2))) * (real_array_get(_n_y_aux, 1, ((modelica_integer) 1)))));
  real_array_copy_data(tmp10, _e_z_aux);
  
  alloc_real_array(&(_e_z), 1, (_index_t)3);
  real_array_copy_data(omc_Modelica_Math_Vectors_normalize(threadData, _e_z_aux, 1e-13), _e_z);
  
  array_alloc_scalar_real_array(&tmp12, 3, (modelica_real)(real_array_get(_e_z, 1, ((modelica_integer) 2))) * (real_array_get(_e_x, 1, ((modelica_integer) 3))) - ((real_array_get(_e_z, 1, ((modelica_integer) 3))) * (real_array_get(_e_x, 1, ((modelica_integer) 2)))), (modelica_real)(real_array_get(_e_z, 1, ((modelica_integer) 3))) * (real_array_get(_e_x, 1, ((modelica_integer) 1))) - ((real_array_get(_e_z, 1, ((modelica_integer) 1))) * (real_array_get(_e_x, 1, ((modelica_integer) 3)))), (modelica_real)(real_array_get(_e_z, 1, ((modelica_integer) 1))) * (real_array_get(_e_x, 1, ((modelica_integer) 2))) - ((real_array_get(_e_z, 1, ((modelica_integer) 2))) * (real_array_get(_e_x, 1, ((modelica_integer) 1)))));
  array_alloc_real_array(&tmp11, 3, _e_x, tmp12, _e_z);
  real_array_copy_data(tmp11, _T);
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData_t *threadData, modelica_metatype _n_x, modelica_metatype _n_y)
{
  real_array _T;
  modelica_metatype out_T;
  _T = omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, *((base_array_t*)_n_x), *((base_array_t*)_n_y));
  out_T = mmc_mk_modelica_array(_T);
  return out_T;
}

DLLDirection
real_array omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_planarRotation(threadData_t *threadData, real_array _e, modelica_real _angle)
{
  real_array _T;
  real_array tmp1;
  real_array tmp2;
  real_array tmp3;
  real_array tmp4;
  real_array tmp5;
  real_array tmp6;
  real_array tmp7;
  real_array tmp8;
  real_array tmp9;
  real_array tmp10;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_real_array(&(_T), 2, (_index_t)3, (_index_t)3); // _T has no default value.
  promote_alloc_real_array(&_e, ((modelica_integer) 2) - ndims_base_array(&_e), &tmp1);
  promote_alloc_real_array(&_e, ((modelica_integer) 2) - ndims_base_array(&_e), &tmp2);
  transpose_alloc_real_array(&tmp2, &tmp3);
  promote_alloc_real_array(&_e, ((modelica_integer) 2) - ndims_base_array(&_e), &tmp4);
  promote_alloc_real_array(&_e, ((modelica_integer) 2) - ndims_base_array(&_e), &tmp5);
  transpose_alloc_real_array(&tmp5, &tmp6);
  array_alloc_scalar_real_array(&tmp8, 3, (modelica_real)0.0, (modelica_real)((-real_array_get(_e, 1, ((modelica_integer) 3)))) * (sin(_angle)), (modelica_real)(real_array_get(_e, 1, ((modelica_integer) 2))) * (sin(_angle)));
  array_alloc_scalar_real_array(&tmp9, 3, (modelica_real)(real_array_get(_e, 1, ((modelica_integer) 3))) * (sin(_angle)), (modelica_real)0.0, (modelica_real)((-real_array_get(_e, 1, ((modelica_integer) 1)))) * (sin(_angle)));
  array_alloc_scalar_real_array(&tmp10, 3, (modelica_real)((-real_array_get(_e, 1, ((modelica_integer) 2)))) * (sin(_angle)), (modelica_real)(real_array_get(_e, 1, ((modelica_integer) 1))) * (sin(_angle)), (modelica_real)0.0);
  array_alloc_real_array(&tmp7, 3, tmp8, tmp9, tmp10);
  real_array_copy_data(sub_alloc_real_array(add_alloc_real_array(mul_alloc_real_matrix_product_smart(tmp1, tmp3), mul_alloc_real_array_scalar(sub_alloc_real_array(_OMC_LIT21, mul_alloc_real_matrix_product_smart(tmp4, tmp6)), cos(_angle))), tmp7), _T);
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_planarRotation(threadData_t *threadData, modelica_metatype _e, modelica_metatype _angle)
{
  modelica_real tmp1;
  real_array _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_angle);
  _T = omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_planarRotation(threadData, *((base_array_t*)_e), tmp1);
  out_T = mmc_mk_modelica_array(_T);
  return out_T;
}

DLLDirection
real_array omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve1(threadData_t *threadData, real_array _T, real_array _v2)
{
  real_array _v1;
  real_array tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_real_array(&(_v1), 1, (_index_t)3); // _v1 has no default value.
  array_alloc_scalar_real_array(&tmp1, 3, (modelica_real)(real_array_get(_T, 2, ((modelica_integer) 1), ((modelica_integer) 1))) * (real_array_get(_v2, 1, ((modelica_integer) 1))) + (real_array_get(_T, 2, ((modelica_integer) 2), ((modelica_integer) 1))) * (real_array_get(_v2, 1, ((modelica_integer) 2))) + (real_array_get(_T, 2, ((modelica_integer) 3), ((modelica_integer) 1))) * (real_array_get(_v2, 1, ((modelica_integer) 3))), (modelica_real)(real_array_get(_T, 2, ((modelica_integer) 1), ((modelica_integer) 2))) * (real_array_get(_v2, 1, ((modelica_integer) 1))) + (real_array_get(_T, 2, ((modelica_integer) 2), ((modelica_integer) 2))) * (real_array_get(_v2, 1, ((modelica_integer) 2))) + (real_array_get(_T, 2, ((modelica_integer) 3), ((modelica_integer) 2))) * (real_array_get(_v2, 1, ((modelica_integer) 3))), (modelica_real)(real_array_get(_T, 2, ((modelica_integer) 1), ((modelica_integer) 3))) * (real_array_get(_v2, 1, ((modelica_integer) 1))) + (real_array_get(_T, 2, ((modelica_integer) 2), ((modelica_integer) 3))) * (real_array_get(_v2, 1, ((modelica_integer) 2))) + (real_array_get(_T, 2, ((modelica_integer) 3), ((modelica_integer) 3))) * (real_array_get(_v2, 1, ((modelica_integer) 3))));
  real_array_copy_data(tmp1, _v1);
  _return: OMC_LABEL_UNUSED
  return _v1;
}
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve1(threadData_t *threadData, modelica_metatype _T, modelica_metatype _v2)
{
  real_array _v1;
  modelica_metatype out_v1;
  _v1 = omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve1(threadData, *((base_array_t*)_T), *((base_array_t*)_v2));
  out_v1 = mmc_mk_modelica_array(_v1);
  return out_v1;
}

DLLDirection
real_array omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve2(threadData_t *threadData, real_array _T, real_array _v1)
{
  real_array _v2;
  real_array tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_real_array(&(_v2), 1, (_index_t)3); // _v2 has no default value.
  array_alloc_scalar_real_array(&tmp1, 3, (modelica_real)(real_array_get(_T, 2, ((modelica_integer) 1), ((modelica_integer) 1))) * (real_array_get(_v1, 1, ((modelica_integer) 1))) + (real_array_get(_T, 2, ((modelica_integer) 1), ((modelica_integer) 2))) * (real_array_get(_v1, 1, ((modelica_integer) 2))) + (real_array_get(_T, 2, ((modelica_integer) 1), ((modelica_integer) 3))) * (real_array_get(_v1, 1, ((modelica_integer) 3))), (modelica_real)(real_array_get(_T, 2, ((modelica_integer) 2), ((modelica_integer) 1))) * (real_array_get(_v1, 1, ((modelica_integer) 1))) + (real_array_get(_T, 2, ((modelica_integer) 2), ((modelica_integer) 2))) * (real_array_get(_v1, 1, ((modelica_integer) 2))) + (real_array_get(_T, 2, ((modelica_integer) 2), ((modelica_integer) 3))) * (real_array_get(_v1, 1, ((modelica_integer) 3))), (modelica_real)(real_array_get(_T, 2, ((modelica_integer) 3), ((modelica_integer) 1))) * (real_array_get(_v1, 1, ((modelica_integer) 1))) + (real_array_get(_T, 2, ((modelica_integer) 3), ((modelica_integer) 2))) * (real_array_get(_v1, 1, ((modelica_integer) 2))) + (real_array_get(_T, 2, ((modelica_integer) 3), ((modelica_integer) 3))) * (real_array_get(_v1, 1, ((modelica_integer) 3))));
  real_array_copy_data(tmp1, _v2);
  _return: OMC_LABEL_UNUSED
  return _v2;
}
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve2(threadData_t *threadData, modelica_metatype _T, modelica_metatype _v1)
{
  real_array _v2;
  modelica_metatype out_v2;
  _v2 = omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve2(threadData, *((base_array_t*)_T), *((base_array_t*)_v1));
  out_v2 = mmc_mk_modelica_array(_v2);
  return out_v2;
}

#ifdef __cplusplus
}
#endif

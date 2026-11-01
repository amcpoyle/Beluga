#ifdef __cplusplus
extern "C" {
#endif

#define _OMC_LIT0_data "Length"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,6,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "m"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "Angle"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,5,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "rad"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,3,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "deg"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,3,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static _index_t _OMC_LIT6_dims[1] = {3};
static const modelica_string _OMC_LIT6_data[] = {_OMC_LIT0, _OMC_LIT0, _OMC_LIT0};
static string_array const _OMC_LIT6 = {
  1, _OMC_LIT6_dims, (void*) _OMC_LIT6_data, (modelica_boolean) 0
};
static _index_t _OMC_LIT7_dims[1] = {3};
static const modelica_string _OMC_LIT7_data[] = {_OMC_LIT1, _OMC_LIT1, _OMC_LIT1};
static string_array const _OMC_LIT7 = {
  1, _OMC_LIT7_dims, (void*) _OMC_LIT7_data, (modelica_boolean) 0
};
#define _OMC_LIT8_data "\nSingular position of loop (either no or two analytic solutions;\nthe mechanism has lost one-degree-of freedom in this position).\nTry first to use another Modelica.Mechanics.MultiBody.Joints.Assemblies.JointXXX component.\nIn most cases it is best that the joints outside of the JointXXX\ncomponent are revolute and NOT prismatic joints. If this also\nlead to singular positions, it could be that this kinematic loop\ncannot be solved analytically. In this case you have to build\nup the loop with basic joints (NO aggregation JointXXX components)\nand rely on dynamic state selection, i.e., during simulation\nthe states will be dynamically selected in such a way that in no\nposition a degree of freedom is lost.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,706,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "Optional argument \"p\" (= "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,25,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data ") of function \"norm\" >= 1 required"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,34,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static _index_t _OMC_LIT11_dims[1] = {3};
static const modelica_integer _OMC_LIT11_data[] = {1, 2, 3};
static integer_array const _OMC_LIT11 = {
  1, _OMC_LIT11_dims, (void*) _OMC_LIT11_data, (modelica_boolean) 0
};
static _index_t _OMC_LIT12_dims[1] = {3};
static const modelica_integer _OMC_LIT12_data[] = {1, 1, 1};
static integer_array const _OMC_LIT12 = {
  1, _OMC_LIT12_dims, (void*) _OMC_LIT12_data, (modelica_boolean) 0
};
static _index_t _OMC_LIT13_dims[1] = {3};
static const modelica_integer _OMC_LIT13_data[] = {3, 3, 3};
static integer_array const _OMC_LIT13 = {
  1, _OMC_LIT13_dims, (void*) _OMC_LIT13_data, (modelica_boolean) 0
};
static _index_t _OMC_LIT14_dims[1] = {3};
static const modelica_string _OMC_LIT14_data[] = {_OMC_LIT3, _OMC_LIT3, _OMC_LIT3};
static string_array const _OMC_LIT14 = {
  1, _OMC_LIT14_dims, (void*) _OMC_LIT14_data, (modelica_boolean) 0
};
static _index_t _OMC_LIT15_dims[1] = {3};
static const modelica_string _OMC_LIT15_data[] = {_OMC_LIT4, _OMC_LIT4, _OMC_LIT4};
static string_array const _OMC_LIT15 = {
  1, _OMC_LIT15_dims, (void*) _OMC_LIT15_data, (modelica_boolean) 0
};
static _index_t _OMC_LIT16_dims[1] = {3};
static const modelica_string _OMC_LIT16_data[] = {_OMC_LIT5, _OMC_LIT5, _OMC_LIT5};
static string_array const _OMC_LIT16 = {
  1, _OMC_LIT16_dims, (void*) _OMC_LIT16_data, (modelica_boolean) 0
};
#define _OMC_LIT17_data "input argument 'sequence[1:3]' is not valid"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,43,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
static _index_t _OMC_LIT18_dims[1] = {3};
static const modelica_real _OMC_LIT18_data[] = {1.0, 0.0, 0.0};
static real_array const _OMC_LIT18 = {
  1, _OMC_LIT18_dims, (void*) _OMC_LIT18_data, (modelica_boolean) 0
};
static _index_t _OMC_LIT19_dims[1] = {3};
static const modelica_real _OMC_LIT19_data[] = {0.0, 1.0, 0.0};
static real_array const _OMC_LIT19 = {
  1, _OMC_LIT19_dims, (void*) _OMC_LIT19_data, (modelica_boolean) 0
};
static _index_t _OMC_LIT20_dims[1] = {3};
static const modelica_real _OMC_LIT20_data[] = {0.0, 0.0, 1.0};
static real_array const _OMC_LIT20 = {
  1, _OMC_LIT20_dims, (void*) _OMC_LIT20_data, (modelica_boolean) 0
};
static _index_t _OMC_LIT21_dims[2] = {3, 3};
static const modelica_real _OMC_LIT21_data[] = {1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0};
static real_array const _OMC_LIT21 = {
  2, _OMC_LIT21_dims, (void*) _OMC_LIT21_data, (modelica_boolean) 0
};
static _index_t _OMC_LIT22_dims[1] = {3};
static const modelica_real _OMC_LIT22_data[] = {-1.0, 0.0, 0.0};
static real_array const _OMC_LIT22 = {
  1, _OMC_LIT22_dims, (void*) _OMC_LIT22_data, (modelica_boolean) 0
};
static _index_t _OMC_LIT23_dims[1] = {3};
static const modelica_real _OMC_LIT23_data[] = {-1.0, -0.0, 0.0};
static real_array const _OMC_LIT23 = {
  1, _OMC_LIT23_dims, (void*) _OMC_LIT23_data, (modelica_boolean) 0
};
static _index_t _OMC_LIT24_dims[1] = {3};
static const modelica_real _OMC_LIT24_data[] = {0.0, -0.222824801502141, 0.9748585065718673};
static real_array const _OMC_LIT24 = {
  1, _OMC_LIT24_dims, (void*) _OMC_LIT24_data, (modelica_boolean) 0
};
static _index_t _OMC_LIT25_dims[1] = {3};
static const modelica_real _OMC_LIT25_data[] = {0.0, 0.222824801502141, 0.9748585065718673};
static real_array const _OMC_LIT25 = {
  1, _OMC_LIT25_dims, (void*) _OMC_LIT25_data, (modelica_boolean) 0
};
static _index_t _OMC_LIT26_dims[1] = {3};
static const modelica_real _OMC_LIT26_data[] = {0.11001306482721843, -0.24752939586124137, 0.9626143172381612};
static real_array const _OMC_LIT26 = {
  1, _OMC_LIT26_dims, (void*) _OMC_LIT26_data, (modelica_boolean) 0
};
static _index_t _OMC_LIT27_dims[1] = {3};
static const modelica_real _OMC_LIT27_data[] = {0.11001306482721843, 0.24752939586124137, 0.9626143172381612};
static real_array const _OMC_LIT27 = {
  1, _OMC_LIT27_dims, (void*) _OMC_LIT27_data, (modelica_boolean) 0
};
static _index_t _OMC_LIT28_dims[2] = {3, 3};
static const modelica_real _OMC_LIT28_data[] = {0.9999965730559848, -0.0026174167187536785, 5.482706441510991e-5, 0.0026179908874179934, 0.9997772572824157, -0.020942348114856475, 0.0, 0.020942419883356957, 0.9997806834748455};
static real_array const _OMC_LIT28 = {
  2, _OMC_LIT28_dims, (void*) _OMC_LIT28_data, (modelica_boolean) 0
};
static _index_t _OMC_LIT29_dims[1] = {3};
static const modelica_real _OMC_LIT29_data[] = {0.0, 0.0, 0.0};
static real_array const _OMC_LIT29 = {
  1, _OMC_LIT29_dims, (void*) _OMC_LIT29_data, (modelica_boolean) 0
};
static _index_t _OMC_LIT30_dims[2] = {3, 3};
static const modelica_real _OMC_LIT30_data[] = {0.9999965730559848, 0.0026174167187536785, 5.482706441510991e-5, -0.0026179908874179934, 0.9997772572824157, 0.020942348114856475, 0.0, -0.020942419883356957, 0.9997806834748455};
static real_array const _OMC_LIT30 = {
  2, _OMC_LIT30_dims, (void*) _OMC_LIT30_data, (modelica_boolean) 0
};
#define _OMC_LIT31_data "cylinder"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,8,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "box"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,3,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "cone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,4,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "spring"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,6,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "sphere"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,6,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)

#ifdef __cplusplus
}
#endif

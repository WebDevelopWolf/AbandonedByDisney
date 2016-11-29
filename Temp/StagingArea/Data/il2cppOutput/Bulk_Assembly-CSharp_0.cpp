#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// TextController
struct TextController_t949652095;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_TextController949652095.h"
#include "AssemblyU2DCSharp_TextController949652095MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433MethodDeclarations.h"
#include "AssemblyU2DCSharp_TextController_States2214569690.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_TextAnchor112990806.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "AssemblyU2DCSharp_TextController_States2214569690MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TextController::.ctor()
extern "C"  void TextController__ctor_m4032868830 (TextController_t949652095 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextController::Start()
extern Il2CppCodeGenString* _stringLiteral4230253590;
extern const uint32_t TextController_Start_m3645149610_MetadataUsageId;
extern "C"  void TextController_Start_m3645149610 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_Start_m3645149610_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_myState_3(0);
		__this->set_floorplan_check_4((bool)0);
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral4230253590);
		Text_t356221433 * L_1 = __this->get_text_2();
		Text_set_alignment_m1816221961(L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextController::Update()
extern Il2CppClass* States_t2214569690_il2cpp_TypeInfo_var;
extern const uint32_t TextController_Update_m1619616711_MetadataUsageId;
extern "C"  void TextController_Update_m1619616711 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_Update_m1619616711_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = __this->get_myState_3();
		int32_t L_1 = L_0;
		Il2CppObject * L_2 = Box(States_t2214569690_il2cpp_TypeInfo_var, &L_1);
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_myState_3();
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		TextController_gate_m2119417125(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_0026:
	{
		int32_t L_4 = __this->get_myState_3();
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_003d;
		}
	}
	{
		TextController_courtyard_m700192827(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_003d:
	{
		int32_t L_5 = __this->get_myState_3();
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0054;
		}
	}
	{
		TextController_baloo_m786132093(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_0054:
	{
		int32_t L_6 = __this->get_myState_3();
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_006b;
		}
	}
	{
		TextController_palace_0_m142988415(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_006b:
	{
		int32_t L_7 = __this->get_myState_3();
		if ((!(((uint32_t)L_7) == ((uint32_t)5))))
		{
			goto IL_0082;
		}
	}
	{
		TextController_floorplan_m1188633001(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_0082:
	{
		int32_t L_8 = __this->get_myState_3();
		if ((!(((uint32_t)L_8) == ((uint32_t)4))))
		{
			goto IL_0099;
		}
	}
	{
		TextController_palace_1_m1688869380(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_0099:
	{
		int32_t L_9 = __this->get_myState_3();
		if ((!(((uint32_t)L_9) == ((uint32_t)6))))
		{
			goto IL_00b0;
		}
	}
	{
		TextController_kitchen_m1885541930(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_00b0:
	{
		int32_t L_10 = __this->get_myState_3();
		if ((!(((uint32_t)L_10) == ((uint32_t)7))))
		{
			goto IL_00c7;
		}
	}
	{
		TextController_bathroom_m2097266530(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_00c7:
	{
		int32_t L_11 = __this->get_myState_3();
		if ((!(((uint32_t)L_11) == ((uint32_t)8))))
		{
			goto IL_00de;
		}
	}
	{
		TextController_rooms_m4007514254(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_00de:
	{
		int32_t L_12 = __this->get_myState_3();
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00f6;
		}
	}
	{
		TextController_stairs_m3078146050(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_00f6:
	{
		int32_t L_13 = __this->get_myState_3();
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_010e;
		}
	}
	{
		TextController_rooms_1_m4131873226(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_010e:
	{
		int32_t L_14 = __this->get_myState_3();
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0126;
		}
	}
	{
		TextController_innerCourtyard_m3893174893(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_0126:
	{
		int32_t L_15 = __this->get_myState_3();
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_013e;
		}
	}
	{
		TextController_python_m427432774(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_013e:
	{
		int32_t L_16 = __this->get_myState_3();
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0156;
		}
	}
	{
		TextController_lounge_m3527825090(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_0156:
	{
		int32_t L_17 = __this->get_myState_3();
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_016e;
		}
	}
	{
		TextController_mascots_m183100118(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_016e:
	{
		int32_t L_18 = __this->get_myState_3();
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0186;
		}
	}
	{
		TextController_tables_m1036172803(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_0186:
	{
		int32_t L_19 = __this->get_myState_3();
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_019e;
		}
	}
	{
		TextController_breakRoom_m2597120730(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_019e:
	{
		int32_t L_20 = __this->get_myState_3();
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_01b6;
		}
	}
	{
		TextController_hallway_m1193321984(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_01b6:
	{
		int32_t L_21 = __this->get_myState_3();
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_01ce;
		}
	}
	{
		TextController_charPrep_m2385696029(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_01ce:
	{
		int32_t L_22 = __this->get_myState_3();
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)19)))))
		{
			goto IL_01e6;
		}
	}
	{
		TextController_charPrep_1_m726559595(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_01e6:
	{
		int32_t L_23 = __this->get_myState_3();
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_01fe;
		}
	}
	{
		TextController_costumes_m3350225487(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_01fe:
	{
		int32_t L_24 = __this->get_myState_3();
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)21)))))
		{
			goto IL_0216;
		}
	}
	{
		TextController_mickey_m833290802(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_0216:
	{
		int32_t L_25 = __this->get_myState_3();
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)22)))))
		{
			goto IL_022e;
		}
	}
	{
		TextController_charPrep_2_m585397094(__this, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_022e:
	{
		int32_t L_26 = __this->get_myState_3();
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_0241;
		}
	}
	{
		TextController_ending_m1150490205(__this, /*hidden argument*/NULL);
	}

IL_0241:
	{
		return;
	}
}
// System.Void TextController::gate()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3734184501;
extern Il2CppCodeGenString* _stringLiteral3541823419;
extern const uint32_t TextController_gate_m2119417125_MetadataUsageId;
extern "C"  void TextController_gate_m2119417125 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_gate_m2119417125_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)273), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}

IL_001b:
	{
		Text_t356221433 * L_2 = __this->get_text_2();
		Text_set_alignment_m1816221961(L_2, 0, /*hidden argument*/NULL);
		Text_t356221433 * L_3 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral3734184501);
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)274), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0062;
		}
	}
	{
		Text_t356221433 * L_5 = __this->get_text_2();
		Text_set_alignment_m1816221961(L_5, 0, /*hidden argument*/NULL);
		Text_t356221433 * L_6 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteral3541823419);
	}

IL_0062:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)103), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		__this->set_myState_3(1);
	}

IL_0075:
	{
		return;
	}
}
// System.Void TextController::courtyard()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2799697843;
extern const uint32_t TextController_courtyard_m700192827_MetadataUsageId;
extern "C"  void TextController_courtyard_m700192827 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_courtyard_m700192827_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2799697843);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_myState_3(2);
		goto IL_003b;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)112), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		__this->set_myState_3(3);
	}

IL_003b:
	{
		return;
	}
}
// System.Void TextController::baloo()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3237841421;
extern const uint32_t TextController_baloo_m786132093_MetadataUsageId;
extern "C"  void TextController_baloo_m786132093 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_baloo_m786132093_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3237841421);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)112), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(3);
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::palace_0()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4135289160;
extern const uint32_t TextController_palace_0_m142988415_MetadataUsageId;
extern "C"  void TextController_palace_0_m142988415 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_palace_0_m142988415_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral4135289160);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)112), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_myState_3(5);
		goto IL_006b;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)108), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		__this->set_myState_3(6);
		goto IL_006b;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)109), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		__this->set_myState_3(7);
		goto IL_006b;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006b;
		}
	}
	{
		__this->set_myState_3(8);
	}

IL_006b:
	{
		return;
	}
}
// System.Void TextController::floorplan()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3141694463;
extern const uint32_t TextController_floorplan_m1188633001_MetadataUsageId;
extern "C"  void TextController_floorplan_m1188633001 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_floorplan_m1188633001_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3141694463);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)116), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		__this->set_myState_3(4);
		__this->set_floorplan_check_4((bool)1);
		goto IL_0042;
	}

IL_002f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)108), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		__this->set_myState_3(3);
	}

IL_0042:
	{
		return;
	}
}
// System.Void TextController::palace_1()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2436692610;
extern const uint32_t TextController_palace_1_m1688869380_MetadataUsageId;
extern "C"  void TextController_palace_1_m1688869380 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_palace_1_m1688869380_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2436692610);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)107), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_myState_3(6);
		goto IL_0053;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)98), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		__this->set_myState_3(7);
		goto IL_0053;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		__this->set_myState_3(8);
	}

IL_0053:
	{
		return;
	}
}
// System.Void TextController::kitchen()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral73334240;
extern const uint32_t TextController_kitchen_m1885541930_MetadataUsageId;
extern "C"  void TextController_kitchen_m1885541930 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_kitchen_m1885541930_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral73334240);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		bool L_2 = __this->get_floorplan_check_4();
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		__this->set_myState_3(4);
		goto IL_0051;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		bool L_4 = __this->get_floorplan_check_4();
		if (L_4)
		{
			goto IL_0051;
		}
	}
	{
		__this->set_myState_3(3);
	}

IL_0051:
	{
		return;
	}
}
// System.Void TextController::bathroom()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral905812542;
extern const uint32_t TextController_bathroom_m2097266530_MetadataUsageId;
extern "C"  void TextController_bathroom_m2097266530 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_bathroom_m2097266530_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral905812542);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		bool L_2 = __this->get_floorplan_check_4();
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		__this->set_myState_3(4);
		goto IL_0051;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		bool L_4 = __this->get_floorplan_check_4();
		if (L_4)
		{
			goto IL_0051;
		}
	}
	{
		__this->set_myState_3(3);
	}

IL_0051:
	{
		return;
	}
}
// System.Void TextController::rooms()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2501389760;
extern const uint32_t TextController_rooms_m4007514254_MetadataUsageId;
extern "C"  void TextController_rooms_m4007514254 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_rooms_m4007514254_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2501389760);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		bool L_2 = __this->get_floorplan_check_4();
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		__this->set_myState_3(4);
		goto IL_006a;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		bool L_4 = __this->get_floorplan_check_4();
		if (L_4)
		{
			goto IL_0056;
		}
	}
	{
		__this->set_myState_3(3);
		goto IL_006a;
	}

IL_0056:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_006a;
		}
	}
	{
		__this->set_myState_3(((int32_t)9));
	}

IL_006a:
	{
		return;
	}
}
// System.Void TextController::stairs()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3832059363;
extern const uint32_t TextController_stairs_m3078146050_MetadataUsageId;
extern "C"  void TextController_stairs_m3078146050 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_stairs_m3078146050_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3832059363);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		__this->set_myState_3(((int32_t)11));
		goto IL_003d;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		__this->set_myState_3(((int32_t)10));
	}

IL_003d:
	{
		return;
	}
}
// System.Void TextController::rooms_1()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4202580989;
extern const uint32_t TextController_rooms_1_m4131873226_MetadataUsageId;
extern "C"  void TextController_rooms_1_m4131873226 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_rooms_1_m4131873226_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral4202580989);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		bool L_2 = __this->get_floorplan_check_4();
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		__this->set_myState_3(4);
		goto IL_006a;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		bool L_4 = __this->get_floorplan_check_4();
		if (L_4)
		{
			goto IL_0056;
		}
	}
	{
		__this->set_myState_3(3);
		goto IL_006a;
	}

IL_0056:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_006a;
		}
	}
	{
		__this->set_myState_3(((int32_t)9));
	}

IL_006a:
	{
		return;
	}
}
// System.Void TextController::innerCourtyard()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1186088767;
extern const uint32_t TextController_innerCourtyard_m3893174893_MetadataUsageId;
extern "C"  void TextController_innerCourtyard_m3893174893 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_innerCourtyard_m3893174893_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1186088767);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)112), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		__this->set_myState_3(((int32_t)12));
		goto IL_003d;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)105), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		__this->set_myState_3(((int32_t)13));
	}

IL_003d:
	{
		return;
	}
}
// System.Void TextController::python()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1023655241;
extern const uint32_t TextController_python_m427432774_MetadataUsageId;
extern "C"  void TextController_python_m427432774 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_python_m427432774_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1023655241);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)108), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)13));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::lounge()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2516523459;
extern const uint32_t TextController_lounge_m3527825090_MetadataUsageId;
extern "C"  void TextController_lounge_m3527825090 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_lounge_m3527825090_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2516523459);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)14));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::mascots()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1589240701;
extern const uint32_t TextController_mascots_m183100118_MetadataUsageId;
extern "C"  void TextController_mascots_m183100118 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_mascots_m183100118_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1589240701);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)116), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		__this->set_myState_3(((int32_t)15));
		goto IL_0056;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)98), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		__this->set_myState_3(((int32_t)16));
		goto IL_0056;
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)104), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		__this->set_myState_3(((int32_t)17));
	}

IL_0056:
	{
		return;
	}
}
// System.Void TextController::tables()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3957824911;
extern const uint32_t TextController_tables_m1036172803_MetadataUsageId;
extern "C"  void TextController_tables_m1036172803 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_tables_m1036172803_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3957824911);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)14));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::breakRoom()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4234025617;
extern const uint32_t TextController_breakRoom_m2597120730_MetadataUsageId;
extern "C"  void TextController_breakRoom_m2597120730 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_breakRoom_m2597120730_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral4234025617);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)14));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::hallway()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2392155398;
extern const uint32_t TextController_hallway_m1193321984_MetadataUsageId;
extern "C"  void TextController_hallway_m1193321984 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_hallway_m1193321984_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2392155398);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)18));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::charPrep()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4182321849;
extern const uint32_t TextController_charPrep_m2385696029_MetadataUsageId;
extern "C"  void TextController_charPrep_m2385696029 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_charPrep_m2385696029_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral4182321849);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)19));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::charPrep_1()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4183425602;
extern const uint32_t TextController_charPrep_1_m726559595_MetadataUsageId;
extern "C"  void TextController_charPrep_1_m726559595 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_charPrep_1_m726559595_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral4183425602);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)99), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		__this->set_myState_3(((int32_t)20));
		goto IL_003d;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)109), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		__this->set_myState_3(((int32_t)21));
	}

IL_003d:
	{
		return;
	}
}
// System.Void TextController::costumes()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1082350496;
extern const uint32_t TextController_costumes_m3350225487_MetadataUsageId;
extern "C"  void TextController_costumes_m3350225487 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_costumes_m3350225487_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1082350496);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)116), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)22));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::mickey()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral123301914;
extern const uint32_t TextController_mickey_m833290802_MetadataUsageId;
extern "C"  void TextController_mickey_m833290802 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_mickey_m833290802_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral123301914);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)116), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)22));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::charPrep_2()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1538858707;
extern const uint32_t TextController_charPrep_2_m585397094_MetadataUsageId;
extern "C"  void TextController_charPrep_2_m585397094 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_charPrep_2_m585397094_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1538858707);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)23));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::ending()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3364375054;
extern const uint32_t TextController_ending_m1150490205_MetadataUsageId;
extern "C"  void TextController_ending_m1150490205 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextController_ending_m1150490205_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3364375054);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(0);
	}

IL_0023:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

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

struct t1685;
struct t2227;
struct t14;
struct t2228;
struct t1686;
struct t2229;
struct t2230;
struct t1688;
struct t2232;
struct t2233;
struct t1689;
struct t2234;
struct t2235;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "t17.h"
#include "t1685.h"
#include "t1685MD.h"
#include "t18.h"
#include "t2227MD.h"
#include "t1558.h"
#include "t24.h"
#include "t1558MD.h"
#include "t2227.h"
#include "t14MD.h"
#include "t331MD.h"
#include "t963MD.h"
#include "t331.h"
#include "t354.h"
#include "t22.h"
#include "mscorlib_ArrayTypes.h"
#include "t14.h"
#include "t2228.h"
#include "t2228MD.h"
#include "t387MD.h"
#include "t387.h"
#include "t15.h"
#include "t1686.h"
#include "t1686MD.h"
#include "t2229MD.h"
#include "t2229.h"
#include "t2230.h"
#include "t2230MD.h"
#include "t1688.h"
#include "t1688MD.h"
#include "t2232MD.h"
#include "t866.h"
#include "t866MD.h"
#include "t2232.h"
#include "t2233.h"
#include "t2233MD.h"
#include "t1689.h"
#include "t1689MD.h"
#include "t2234MD.h"
#include "t2234.h"
#include "t2235.h"
#include "t2235MD.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void m10138_gshared (t1685 * __this, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (t2227 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2227 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m16711_gshared (t1685 * __this, t1558  p0, t1558  p1, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		t1558  L_0 = p0;
		goto IL_001e;
	}
	{
		t1558  L_1 = p1;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		t1558  L_2 = p1;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		t1558  L_3 = p1;
		int32_t L_4 = m9692((t1558 *)(&p0), (t1558 )L_3, NULL);
		return L_4;
	}
}
extern "C" void m16712_gshared (t2227 * __this, const MethodInfo* method)
{
	{
		m1474((t14 *)__this, NULL);
		return;
	}
}
extern const Il2CppType* t2416_0_0_0_var;
extern TypeInfo* t331_TI_var;
extern TypeInfo* t531_TI_var;
extern "C" void m16713_gshared (t14 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2416_0_0_0_var = il2cpp_codegen_type_from_index(2505);
		t331_TI_var = il2cpp_codegen_type_info_from_index(156);
		t531_TI_var = il2cpp_codegen_type_info_from_index(307);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t331_TI_var);
		t331 * L_0 = m1721(NULL, (t354 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		t331 * L_1 = m1721(NULL, (t354 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t331 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t331 *)L_0, (t331 *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t331_TI_var);
		t331 * L_3 = m1721(NULL, (t354 )LoadTypeToken(t2416_0_0_0_var), NULL);
		t531* L_4 = (t531*)((t531*)SZArrayNew(t531_TI_var, 1));
		t331 * L_5 = m1721(NULL, (t354 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_4, L_5);
		*((t331 **)(t331 **)SZArrayLdElema(L_4, 0, sizeof(t331 *))) = (t331 *)L_5;
		t331 * L_6 = (t331 *)VirtFuncInvoker1< t331 *, t531* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (t331 *)L_3, (t531*)L_4);
		t14 * L_7 = m9249(NULL, (t331 *)L_6, NULL);
		((t2227_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = ((t2227 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		t2228 * L_8 = (t2228 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (t2228 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((t2227_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
extern TypeInfo* t387_TI_var;
extern "C" int32_t m16714_gshared (t2227 * __this, t14 * p0, t14 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t387_TI_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		t14 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t14 * L_1 = p1;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B4_0 = (-1);
	}

IL_0013:
	{
		return G_B4_0;
	}

IL_0014:
	{
		t14 * L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		return 1;
	}

IL_001c:
	{
		t14 * L_3 = p0;
		if (!((t14 *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		t14 * L_4 = p1;
		if (!((t14 *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		t14 * L_5 = p0;
		t14 * L_6 = p1;
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, t1558 , t1558  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::Compare(T,T) */, (t2227 *)__this, (t1558 )((*(t1558 *)((t1558 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (t1558 )((*(t1558 *)((t1558 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0045:
	{
		t387 * L_8 = (t387 *)il2cpp_codegen_object_new (t387_TI_var);
		m9275(L_8, NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
extern "C" t2227 * m16715_gshared (t14 * __this , const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2227 * L_0 = ((t2227_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
extern "C" void m16716_gshared (t2228 * __this, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (t2227 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2227 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern TypeInfo* t1646_TI_var;
extern TypeInfo* t387_TI_var;
extern Il2CppCodeGenString* _stringLiteral2680;
extern "C" int32_t m16717_gshared (t2228 * __this, t1558  p0, t1558  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1646_TI_var = il2cpp_codegen_type_info_from_index(657);
		t387_TI_var = il2cpp_codegen_type_info_from_index(234);
		_stringLiteral2680 = il2cpp_codegen_string_literal_from_index(2680);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		t1558  L_0 = p0;
		goto IL_001e;
	}
	{
		t1558  L_1 = p1;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		t1558  L_2 = p1;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		t1558  L_3 = p0;
		t1558  L_4 = L_3;
		t14 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((t14*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		t1558  L_6 = p0;
		t1558  L_7 = L_6;
		t14 * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		t1558  L_9 = p1;
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t1558  >::Invoke(0 /* System.Int32 System.IComparable`1<System.Guid>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (t14*)((t14*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (t1558 )L_9);
		return L_10;
	}

IL_004d:
	{
		t1558  L_11 = p0;
		t1558  L_12 = L_11;
		t14 * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((t14 *)IsInst(L_13, t1646_TI_var)))
		{
			goto IL_0074;
		}
	}
	{
		t1558  L_14 = p0;
		t1558  L_15 = L_14;
		t14 * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		t1558  L_17 = p1;
		t1558  L_18 = L_17;
		t14 * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_18);
		int32_t L_20 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, t1646_TI_var, (t14 *)((t14 *)Castclass(L_16, t1646_TI_var)), (t14 *)L_19);
		return L_20;
	}

IL_0074:
	{
		t387 * L_21 = (t387 *)il2cpp_codegen_object_new (t387_TI_var);
		m2010(L_21, (t15*)_stringLiteral2680, NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}
}
extern "C" void m10139_gshared (t1686 * __this, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (t2229 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2229 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m16718_gshared (t1686 * __this, t1558  p0, const MethodInfo* method)
{
	{
		t1558  L_0 = p0;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = m9694((t1558 *)(&p0), NULL);
		return L_1;
	}
}
extern "C" bool m16719_gshared (t1686 * __this, t1558  p0, t1558  p1, const MethodInfo* method)
{
	{
		t1558  L_0 = p0;
		goto IL_0015;
	}
	{
		t1558  L_1 = p1;
		t1558  L_2 = L_1;
		t14 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((t14*)(t14 *)L_3) == ((t14*)(t14 *)NULL))? 1 : 0);
	}

IL_0015:
	{
		t1558  L_4 = p1;
		bool L_5 = m9693((t1558 *)(&p0), (t1558 )L_4, NULL);
		return L_5;
	}
}
extern "C" void m16720_gshared (t2229 * __this, const MethodInfo* method)
{
	{
		m1474((t14 *)__this, NULL);
		return;
	}
}
extern const Il2CppType* t2415_0_0_0_var;
extern TypeInfo* t331_TI_var;
extern TypeInfo* t531_TI_var;
extern "C" void m16721_gshared (t14 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2415_0_0_0_var = il2cpp_codegen_type_from_index(2504);
		t331_TI_var = il2cpp_codegen_type_info_from_index(156);
		t531_TI_var = il2cpp_codegen_type_info_from_index(307);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t331_TI_var);
		t331 * L_0 = m1721(NULL, (t354 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		t331 * L_1 = m1721(NULL, (t354 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t331 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t331 *)L_0, (t331 *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t331_TI_var);
		t331 * L_3 = m1721(NULL, (t354 )LoadTypeToken(t2415_0_0_0_var), NULL);
		t531* L_4 = (t531*)((t531*)SZArrayNew(t531_TI_var, 1));
		t331 * L_5 = m1721(NULL, (t354 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_4, L_5);
		*((t331 **)(t331 **)SZArrayLdElema(L_4, 0, sizeof(t331 *))) = (t331 *)L_5;
		t331 * L_6 = (t331 *)VirtFuncInvoker1< t331 *, t531* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (t331 *)L_3, (t531*)L_4);
		t14 * L_7 = m9249(NULL, (t331 *)L_6, NULL);
		((t2229_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = ((t2229 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		t2230 * L_8 = (t2230 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (t2230 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((t2229_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
extern "C" int32_t m16722_gshared (t2229 * __this, t14 * p0, const MethodInfo* method)
{
	{
		t14 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t1558  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T) */, (t2229 *)__this, (t1558 )((*(t1558 *)((t1558 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
extern "C" bool m16723_gshared (t2229 * __this, t14 * p0, t14 * p1, const MethodInfo* method)
{
	{
		t14 * L_0 = p0;
		t14 * L_1 = p1;
		bool L_2 = (bool)VirtFuncInvoker2< bool, t1558 , t1558  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, (t2229 *)__this, (t1558 )((*(t1558 *)((t1558 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (t1558 )((*(t1558 *)((t1558 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
extern "C" t2229 * m16724_gshared (t14 * __this , const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2229 * L_0 = ((t2229_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
extern "C" void m16725_gshared (t2230 * __this, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (t2229 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2229 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m16726_gshared (t2230 * __this, t1558  p0, const MethodInfo* method)
{
	{
		t1558  L_0 = p0;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = m9694((t1558 *)(&p0), NULL);
		return L_1;
	}
}
extern "C" bool m16727_gshared (t2230 * __this, t1558  p0, t1558  p1, const MethodInfo* method)
{
	{
		t1558  L_0 = p0;
		goto IL_0015;
	}
	{
		t1558  L_1 = p1;
		t1558  L_2 = L_1;
		t14 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((t14*)(t14 *)L_3) == ((t14*)(t14 *)NULL))? 1 : 0);
	}

IL_0015:
	{
		t1558  L_4 = p1;
		t1558  L_5 = L_4;
		t14 * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		bool L_7 = m9691((t1558 *)(&p0), (t14 *)L_6, NULL);
		return L_7;
	}
}
extern "C" void m10141_gshared (t1688 * __this, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (t2232 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2232 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m16764_gshared (t1688 * __this, t866  p0, t866  p1, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		t866  L_0 = p0;
		goto IL_001e;
	}
	{
		t866  L_1 = p1;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		t866  L_2 = p1;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		t866  L_3 = p1;
		int32_t L_4 = m9983((t866 *)(&p0), (t866 )L_3, NULL);
		return L_4;
	}
}
extern "C" void m16765_gshared (t2232 * __this, const MethodInfo* method)
{
	{
		m1474((t14 *)__this, NULL);
		return;
	}
}
extern const Il2CppType* t2416_0_0_0_var;
extern TypeInfo* t331_TI_var;
extern TypeInfo* t531_TI_var;
extern "C" void m16766_gshared (t14 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2416_0_0_0_var = il2cpp_codegen_type_from_index(2505);
		t331_TI_var = il2cpp_codegen_type_info_from_index(156);
		t531_TI_var = il2cpp_codegen_type_info_from_index(307);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t331_TI_var);
		t331 * L_0 = m1721(NULL, (t354 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		t331 * L_1 = m1721(NULL, (t354 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t331 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t331 *)L_0, (t331 *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t331_TI_var);
		t331 * L_3 = m1721(NULL, (t354 )LoadTypeToken(t2416_0_0_0_var), NULL);
		t531* L_4 = (t531*)((t531*)SZArrayNew(t531_TI_var, 1));
		t331 * L_5 = m1721(NULL, (t354 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_4, L_5);
		*((t331 **)(t331 **)SZArrayLdElema(L_4, 0, sizeof(t331 *))) = (t331 *)L_5;
		t331 * L_6 = (t331 *)VirtFuncInvoker1< t331 *, t531* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (t331 *)L_3, (t531*)L_4);
		t14 * L_7 = m9249(NULL, (t331 *)L_6, NULL);
		((t2232_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = ((t2232 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		t2233 * L_8 = (t2233 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (t2233 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((t2232_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
extern TypeInfo* t387_TI_var;
extern "C" int32_t m16767_gshared (t2232 * __this, t14 * p0, t14 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t387_TI_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		t14 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t14 * L_1 = p1;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B4_0 = (-1);
	}

IL_0013:
	{
		return G_B4_0;
	}

IL_0014:
	{
		t14 * L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		return 1;
	}

IL_001c:
	{
		t14 * L_3 = p0;
		if (!((t14 *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		t14 * L_4 = p1;
		if (!((t14 *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		t14 * L_5 = p0;
		t14 * L_6 = p1;
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, t866 , t866  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::Compare(T,T) */, (t2232 *)__this, (t866 )((*(t866 *)((t866 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (t866 )((*(t866 *)((t866 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0045:
	{
		t387 * L_8 = (t387 *)il2cpp_codegen_object_new (t387_TI_var);
		m9275(L_8, NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
extern "C" t2232 * m16768_gshared (t14 * __this , const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2232 * L_0 = ((t2232_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
extern "C" void m16769_gshared (t2233 * __this, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (t2232 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2232 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern TypeInfo* t1646_TI_var;
extern TypeInfo* t387_TI_var;
extern Il2CppCodeGenString* _stringLiteral2680;
extern "C" int32_t m16770_gshared (t2233 * __this, t866  p0, t866  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1646_TI_var = il2cpp_codegen_type_info_from_index(657);
		t387_TI_var = il2cpp_codegen_type_info_from_index(234);
		_stringLiteral2680 = il2cpp_codegen_string_literal_from_index(2680);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		t866  L_0 = p0;
		goto IL_001e;
	}
	{
		t866  L_1 = p1;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		t866  L_2 = p1;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		t866  L_3 = p0;
		t866  L_4 = L_3;
		t14 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((t14*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		t866  L_6 = p0;
		t866  L_7 = L_6;
		t14 * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		t866  L_9 = p1;
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t866  >::Invoke(0 /* System.Int32 System.IComparable`1<System.TimeSpan>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (t14*)((t14*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (t866 )L_9);
		return L_10;
	}

IL_004d:
	{
		t866  L_11 = p0;
		t866  L_12 = L_11;
		t14 * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((t14 *)IsInst(L_13, t1646_TI_var)))
		{
			goto IL_0074;
		}
	}
	{
		t866  L_14 = p0;
		t866  L_15 = L_14;
		t14 * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		t866  L_17 = p1;
		t866  L_18 = L_17;
		t14 * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_18);
		int32_t L_20 = (int32_t)InterfaceFuncInvoker1< int32_t, t14 * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, t1646_TI_var, (t14 *)((t14 *)Castclass(L_16, t1646_TI_var)), (t14 *)L_19);
		return L_20;
	}

IL_0074:
	{
		t387 * L_21 = (t387 *)il2cpp_codegen_object_new (t387_TI_var);
		m2010(L_21, (t15*)_stringLiteral2680, NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}
}
extern "C" void m10142_gshared (t1689 * __this, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (t2234 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2234 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m16771_gshared (t1689 * __this, t866  p0, const MethodInfo* method)
{
	{
		t866  L_0 = p0;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = m9993((t866 *)(&p0), NULL);
		return L_1;
	}
}
extern "C" bool m16772_gshared (t1689 * __this, t866  p0, t866  p1, const MethodInfo* method)
{
	{
		t866  L_0 = p0;
		goto IL_0015;
	}
	{
		t866  L_1 = p1;
		t866  L_2 = L_1;
		t14 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((t14*)(t14 *)L_3) == ((t14*)(t14 *)NULL))? 1 : 0);
	}

IL_0015:
	{
		t866  L_4 = p1;
		bool L_5 = m9984((t866 *)(&p0), (t866 )L_4, NULL);
		return L_5;
	}
}
extern "C" void m16773_gshared (t2234 * __this, const MethodInfo* method)
{
	{
		m1474((t14 *)__this, NULL);
		return;
	}
}
extern const Il2CppType* t2415_0_0_0_var;
extern TypeInfo* t331_TI_var;
extern TypeInfo* t531_TI_var;
extern "C" void m16774_gshared (t14 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2415_0_0_0_var = il2cpp_codegen_type_from_index(2504);
		t331_TI_var = il2cpp_codegen_type_info_from_index(156);
		t531_TI_var = il2cpp_codegen_type_info_from_index(307);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t331_TI_var);
		t331 * L_0 = m1721(NULL, (t354 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		t331 * L_1 = m1721(NULL, (t354 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t331 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t331 *)L_0, (t331 *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t331_TI_var);
		t331 * L_3 = m1721(NULL, (t354 )LoadTypeToken(t2415_0_0_0_var), NULL);
		t531* L_4 = (t531*)((t531*)SZArrayNew(t531_TI_var, 1));
		t331 * L_5 = m1721(NULL, (t354 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_4, L_5);
		*((t331 **)(t331 **)SZArrayLdElema(L_4, 0, sizeof(t331 *))) = (t331 *)L_5;
		t331 * L_6 = (t331 *)VirtFuncInvoker1< t331 *, t531* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (t331 *)L_3, (t531*)L_4);
		t14 * L_7 = m9249(NULL, (t331 *)L_6, NULL);
		((t2234_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = ((t2234 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		t2235 * L_8 = (t2235 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (t2235 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((t2234_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
extern "C" int32_t m16775_gshared (t2234 * __this, t14 * p0, const MethodInfo* method)
{
	{
		t14 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t866  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::GetHashCode(T) */, (t2234 *)__this, (t866 )((*(t866 *)((t866 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
extern "C" bool m16776_gshared (t2234 * __this, t14 * p0, t14 * p1, const MethodInfo* method)
{
	{
		t14 * L_0 = p0;
		t14 * L_1 = p1;
		bool L_2 = (bool)VirtFuncInvoker2< bool, t866 , t866  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::Equals(T,T) */, (t2234 *)__this, (t866 )((*(t866 *)((t866 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (t866 )((*(t866 *)((t866 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
extern "C" t2234 * m16777_gshared (t14 * __this , const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2234 * L_0 = ((t2234_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
extern "C" void m16778_gshared (t2235 * __this, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (t2234 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2234 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m16779_gshared (t2235 * __this, t866  p0, const MethodInfo* method)
{
	{
		t866  L_0 = p0;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = m9993((t866 *)(&p0), NULL);
		return L_1;
	}
}
extern "C" bool m16780_gshared (t2235 * __this, t866  p0, t866  p1, const MethodInfo* method)
{
	{
		t866  L_0 = p0;
		goto IL_0015;
	}
	{
		t866  L_1 = p1;
		t866  L_2 = L_1;
		t14 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((t14*)(t14 *)L_3) == ((t14*)(t14 *)NULL))? 1 : 0);
	}

IL_0015:
	{
		t866  L_4 = p1;
		t866  L_5 = L_4;
		t14 * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		bool L_7 = m9986((t866 *)(&p0), (t14 *)L_6, NULL);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

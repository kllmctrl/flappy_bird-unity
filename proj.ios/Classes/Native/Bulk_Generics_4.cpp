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

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t1095697167;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t4056035046;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t3051495417;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t3784905282;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1903595547;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t606618774;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t2727799310;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t1372135904;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t3149477088;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2935245934;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Reflection_MonoProperty_StaticGett1095697167.h"
#include "mscorlib_System_Reflection_MonoProperty_StaticGett1095697167MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "UnityEngine_UnityEngine_CastHelper_1_gen3207297272.h"
#include "UnityEngine_UnityEngine_CastHelper_1_gen3207297272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen4056035046.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen4056035046MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen3051495417.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen3051495417MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_2_gen3784905282.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_2_gen3784905282MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_2_gen1903595547.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_2_gen1903595547MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2981886439.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_2_gen606618774.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_2_gen606618774MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen2727799310.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen2727799310MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEventBase828812576MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_2_gen1372135904.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_2_gen1372135904MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_3_gen3149477088.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_3_gen3149477088MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_4_gen2935245934.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_4_gen2935245934MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void StaticGetter_1__ctor_m1290492285_gshared (StaticGetter_1_t1095697167 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C"  Il2CppObject * StaticGetter_1_Invoke_m1348877692_gshared (StaticGetter_1_t1095697167 * __this, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		StaticGetter_1_Invoke_m1348877692((StaticGetter_1_t1095697167 *)__this->get_prev_9(), method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if ((__this->get_m_target_2() != NULL || MethodHasParameters((MethodInfo*)(__this->get_method_3().get_m_value_0()))) && ___methodIsStatic)
	{
		typedef Il2CppObject * (*FunctionPointerType) (Il2CppObject *, void* __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef Il2CppObject * (*FunctionPointerType) (void* __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * StaticGetter_1_BeginInvoke_m2732579814_gshared (StaticGetter_1_t1095697167 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback0, (Il2CppObject*)___object1);
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * StaticGetter_1_EndInvoke_m44757160_gshared (StaticGetter_1_t1095697167 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Il2CppObject *)__result;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m2836997866_gshared (UnityAction_1_t4056035046 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C"  void UnityAction_1_Invoke_m1279804060_gshared (UnityAction_1_t4056035046 * __this, Il2CppObject * ___arg00, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_1_Invoke_m1279804060((UnityAction_1_t4056035046 *)__this->get_prev_9(),___arg00, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Il2CppObject *, void* __this, Il2CppObject * ___arg00, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg00,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (void* __this, Il2CppObject * ___arg00, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg00,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(___arg00,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_1_BeginInvoke_m3462722079_gshared (UnityAction_1_t4056035046 * __this, Il2CppObject * ___arg00, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg00;
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback1, (Il2CppObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_1_EndInvoke_m2822290096_gshared (UnityAction_1_t4056035046 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m2627946124_gshared (UnityAction_1_t3051495417 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
extern "C"  void UnityAction_1_Invoke_m3061904506_gshared (UnityAction_1_t3051495417 * __this, Scene_t1684909666  ___arg00, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_1_Invoke_m3061904506((UnityAction_1_t3051495417 *)__this->get_prev_9(),___arg00, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Il2CppObject *, void* __this, Scene_t1684909666  ___arg00, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg00,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, Scene_t1684909666  ___arg00, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg00,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern Il2CppClass* Scene_t1684909666_il2cpp_TypeInfo_var;
extern const uint32_t UnityAction_1_BeginInvoke_m2974933271_MetadataUsageId;
extern "C"  Il2CppObject * UnityAction_1_BeginInvoke_m2974933271_gshared (UnityAction_1_t3051495417 * __this, Scene_t1684909666  ___arg00, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m2974933271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Scene_t1684909666_il2cpp_TypeInfo_var, &___arg00);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback1, (Il2CppObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_1_EndInvoke_m3641222126_gshared (UnityAction_1_t3051495417 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_2__ctor_m622153369_gshared (UnityAction_2_t3784905282 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C"  void UnityAction_2_Invoke_m1994351568_gshared (UnityAction_2_t3784905282 * __this, Il2CppObject * ___arg00, Il2CppObject * ___arg11, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_2_Invoke_m1994351568((UnityAction_2_t3784905282 *)__this->get_prev_9(),___arg00, ___arg11, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Il2CppObject *, void* __this, Il2CppObject * ___arg00, Il2CppObject * ___arg11, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg00, ___arg11,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (void* __this, Il2CppObject * ___arg00, Il2CppObject * ___arg11, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg00, ___arg11,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, Il2CppObject * ___arg11, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(___arg00, ___arg11,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_2_BeginInvoke_m3203769083_gshared (UnityAction_2_t3784905282 * __this, Il2CppObject * ___arg00, Il2CppObject * ___arg11, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback2, (Il2CppObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_2_EndInvoke_m4199296611_gshared (UnityAction_2_t3784905282 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_2__ctor_m2684626998_gshared (UnityAction_2_t1903595547 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::Invoke(T0,T1)
extern "C"  void UnityAction_2_Invoke_m1528820797_gshared (UnityAction_2_t1903595547 * __this, Scene_t1684909666  ___arg00, int32_t ___arg11, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_2_Invoke_m1528820797((UnityAction_2_t1903595547 *)__this->get_prev_9(),___arg00, ___arg11, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Il2CppObject *, void* __this, Scene_t1684909666  ___arg00, int32_t ___arg11, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg00, ___arg11,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, Scene_t1684909666  ___arg00, int32_t ___arg11, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg00, ___arg11,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern Il2CppClass* Scene_t1684909666_il2cpp_TypeInfo_var;
extern Il2CppClass* LoadSceneMode_t2981886439_il2cpp_TypeInfo_var;
extern const uint32_t UnityAction_2_BeginInvoke_m2528278652_MetadataUsageId;
extern "C"  Il2CppObject * UnityAction_2_BeginInvoke_m2528278652_gshared (UnityAction_2_t1903595547 * __this, Scene_t1684909666  ___arg00, int32_t ___arg11, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_m2528278652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t1684909666_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(LoadSceneMode_t2981886439_il2cpp_TypeInfo_var, &___arg11);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback2, (Il2CppObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_2_EndInvoke_m1593881300_gshared (UnityAction_2_t1903595547 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_2__ctor_m2892452633_gshared (UnityAction_2_t606618774 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
extern "C"  void UnityAction_2_Invoke_m670567184_gshared (UnityAction_2_t606618774 * __this, Scene_t1684909666  ___arg00, Scene_t1684909666  ___arg11, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_2_Invoke_m670567184((UnityAction_2_t606618774 *)__this->get_prev_9(),___arg00, ___arg11, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Il2CppObject *, void* __this, Scene_t1684909666  ___arg00, Scene_t1684909666  ___arg11, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg00, ___arg11,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, Scene_t1684909666  ___arg00, Scene_t1684909666  ___arg11, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg00, ___arg11,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern Il2CppClass* Scene_t1684909666_il2cpp_TypeInfo_var;
extern const uint32_t UnityAction_2_BeginInvoke_m2733450299_MetadataUsageId;
extern "C"  Il2CppObject * UnityAction_2_BeginInvoke_m2733450299_gshared (UnityAction_2_t606618774 * __this, Scene_t1684909666  ___arg00, Scene_t1684909666  ___arg11, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_m2733450299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t1684909666_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Scene_t1684909666_il2cpp_TypeInfo_var, &___arg11);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback2, (Il2CppObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_2_EndInvoke_m234106915_gshared (UnityAction_2_t606618774 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern const uint32_t UnityEvent_1__ctor_m2073978020_MetadataUsageId;
extern "C"  void UnityEvent_1__ctor_m2073978020_gshared (UnityEvent_1_t2727799310 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1__ctor_m2073978020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_InvokeArray_4(((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)1)));
		NullCheck((UnityEventBase_t828812576 *)__this);
		UnityEventBase__ctor_m4062111756((UnityEventBase_t828812576 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern const uint32_t UnityEvent_2__ctor_m3717034779_MetadataUsageId;
extern "C"  void UnityEvent_2__ctor_m3717034779_gshared (UnityEvent_2_t1372135904 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2__ctor_m3717034779_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_InvokeArray_4(((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)2)));
		NullCheck((UnityEventBase_t828812576 *)__this);
		UnityEventBase__ctor_m4062111756((UnityEventBase_t828812576 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern const uint32_t UnityEvent_3__ctor_m3502631330_MetadataUsageId;
extern "C"  void UnityEvent_3__ctor_m3502631330_gshared (UnityEvent_3_t3149477088 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3__ctor_m3502631330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_InvokeArray_4(((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)3)));
		NullCheck((UnityEventBase_t828812576 *)__this);
		UnityEventBase__ctor_m4062111756((UnityEventBase_t828812576 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern const uint32_t UnityEvent_4__ctor_m3102731553_MetadataUsageId;
extern "C"  void UnityEvent_4__ctor_m3102731553_gshared (UnityEvent_4_t2935245934 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_4__ctor_m3102731553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_InvokeArray_4(((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4)));
		NullCheck((UnityEventBase_t828812576 *)__this);
		UnityEventBase__ctor_m4062111756((UnityEventBase_t828812576 *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

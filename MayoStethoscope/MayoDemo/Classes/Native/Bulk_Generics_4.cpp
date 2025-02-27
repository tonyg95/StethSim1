﻿#include "il2cpp-config.h"

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
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Comparer`1<System.Boolean>
struct Comparer_1_t322447E2E777F3707F8006FD88B8393DEAC1F196;
// System.Collections.Generic.Comparer`1<System.Int32>
struct Comparer_1_t0796DB4CA0FA9609FBB2A6AEBA7EDF7DD7EE23A2;
// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t1DB742817DFA148A84E0F6044361F97B935058A7;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_tEF2C39D86C36E82597707B89981FFD60E94C824B;
// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_tF7174A8BEF4C636DBBD3C6BBD234B0F315F64F33;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t54972BA287ED38B066E4BE7A3B21F49803B62EBA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694;
// System.Collections.IComparer
struct IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC;
// System.Func`1<System.Object>
struct Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`1<System.Threading.Tasks.VoidTaskResult>
struct Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9;
// System.Func`2<System.Object,System.Object>
struct Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4;
// System.Func`2<System.Object,System.Threading.Tasks.VoidTaskResult>
struct Func_2_t2055ABF714892AC88A9515BF45D469142AE0BA83;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_tDAE4310E42C13AE378CDF0371BD31D6BF4E61EBD;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>
struct Func_2_t9183BE7C6FB5EAED091785FC3E1D3D41DB3497F7;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>>
struct Func_2_t9FE43757FE22F96D0EA4E7945B6D146812F2671F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.ExecutionContext
struct ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70;
// System.Threading.ManualResetEventSlim
struct ManualResetEventSlim_t085E880B24016C42F7DE42113674D0A41B4FB445;
// System.Threading.Tasks.Shared`1<System.Threading.CancellationTokenRegistration>
struct Shared_1_t6EFAE49AC0A1E070F87779D3DD8273B35F28E7D2;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskExceptionHolder
struct TaskExceptionHolder_t1F44F1CE648090AA15DDC759304A18E998EFA811;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_tA50D9207CAE2C505277DD5F03CBE64700177257C;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task>
struct TaskFactory_1_t58FE324C5DC18B5ED9A0E49CA8543DEEA65B4462;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct TaskFactory_1_t3C0D0DC20C0FC00DE4F8740B351BE642467AB03D;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t6E4E91059C08F359F21A42B8BFA51E8BBFA47138;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t1359D75350E9D976BFA28AD96E417450DE277673;
// System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Object>
struct SparseArray_1_t3343BC28ED7AB6481D2C9C24AC382CCEFD5148F1;
// System.Tuple`2<System.Object,System.Char>
struct Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5;
// System.Tuple`3<System.Object,System.Object,System.Object>
struct Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9;
// System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>
struct Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1;
// System.Tuple`4<System.Object,System.Object,System.Object,System.Object>
struct Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3;
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct CachedInvokableCall_1_tD9D6B42DED8777941C4EE375EDB67DF2B8F445D7;
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6;
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_tF7F1670398EB759A3D4AFEB35F47850DCD7D00AD;
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t853CA34F3C49BD37B91F7733304984E8B1FDEF0A;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB;
// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5;
// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC;
// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26;
// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E;
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D;
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89;
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;

extern RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
extern RuntimeClass* IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var;
extern RuntimeClass* IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var;
extern RuntimeClass* IStructuralComparable_tFB90BCCBE0F0B8DB22F725191ACB265543CC63E6_il2cpp_TypeInfo_var;
extern RuntimeClass* IStructuralEquatable_tDF8DE3C01DB964F73A35127713C2F590D93C899C_il2cpp_TypeInfo_var;
extern RuntimeClass* ITupleInternal_tF49169C678DFB8C15124E55AD72513BA3BA968AD_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var;
extern RuntimeClass* LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
extern RuntimeClass* Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral142F817C3EC0586DE0F960C1C0483043B61A0D06;
extern String_t* _stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40;
extern String_t* _stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F;
extern String_t* _stringLiteral699B142A794903652E588B3D75019329F77A9209;
extern String_t* _stringLiteralABFC501D210FA3194339D5355419BE3336C98217;
extern String_t* _stringLiteralB074C920DAB17C140FA8E906179F603DBCE3EC79;
extern String_t* _stringLiteralC218E39EFA2E1AAE69F39D2054528369CE1E1F46;
extern String_t* _stringLiteralD0941E68DA8F38151FF86A61FC59F7C5CF9FCAA2;
extern String_t* _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
extern String_t* _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A;
extern const RuntimeMethod* InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_1_Invoke_m48AB6731BEF540A6B1F23189413840859F56D212_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_1_Invoke_mD853B78F92A849FE113AE5A310944708C59AB2B0_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_StartNew_m46510EA62A4E2F3AA6D8F5118AE02697E0DE59A6_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_StartNew_m49456826C31982E9488BCC3E6A9E150BF86A4DE0_RuntimeMethod_var;
extern const RuntimeMethod* Task_1__ctor_m294345A83D9CAC9B7198CA662BA64B776B5A8B23_RuntimeMethod_var;
extern const RuntimeMethod* Task_1__ctor_mBEFEA339A56C64CA5FFF1E01DF78A638DF46B88F_RuntimeMethod_var;
extern const RuntimeMethod* Task_1__ctor_mC9E6249923CC0B54FC33C426D648D5CBEEFAB5EA_RuntimeMethod_var;
extern const RuntimeMethod* Task_1__ctor_mE073C298840D69BB66B6D85DD376692298625414_RuntimeMethod_var;
extern const RuntimeMethod* Tuple_2_System_Collections_IStructuralComparable_CompareTo_m0AB47D85881D220770A2DD2F1454E8964F02919E_RuntimeMethod_var;
extern const RuntimeMethod* Tuple_2_System_Collections_IStructuralComparable_CompareTo_m6EDDC04DBC238729BC03FDF965215D0A1C4D37BC_RuntimeMethod_var;
extern const RuntimeMethod* Tuple_3_System_Collections_IStructuralComparable_CompareTo_mC272578AC2EACCA6A7439A948CF67173E26BAB6B_RuntimeMethod_var;
extern const RuntimeMethod* Tuple_4_System_Collections_IStructuralComparable_CompareTo_m424E09DF6E5390655D4E4893F249752846C86D1C_RuntimeMethod_var;
extern const RuntimeMethod* Tuple_4_System_Collections_IStructuralComparable_CompareTo_mD693226F3B3FE5CC2D114FD0DC9D4B17BF46A743_RuntimeMethod_var;
extern const RuntimeMethod* ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m9E2EC3FF01327CD456734C77156EFF94D04A0EDA_RuntimeMethod_var;
extern const RuntimeMethod* ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mE82D0EABA63B5FA33C3C81C53A410C3833C3DF99_RuntimeMethod_var;
extern const RuntimeMethod* ValueTuple_2_System_IComparable_CompareTo_m38D278F852F918B696F44604D70FEC23FE286A72_RuntimeMethod_var;
extern const RuntimeMethod* ValueTuple_2_System_IComparable_CompareTo_mB5E4B8A3A387346D734860B30F983C53049E6623_RuntimeMethod_var;
extern const uint32_t InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_MetadataUsageId;
extern const uint32_t InvokableCall_1_Invoke_m48AB6731BEF540A6B1F23189413840859F56D212_MetadataUsageId;
extern const uint32_t InvokableCall_1_Invoke_mD853B78F92A849FE113AE5A310944708C59AB2B0_MetadataUsageId;
extern const uint32_t InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_MetadataUsageId;
extern const uint32_t InvokableCall_1__ctor_m1BF8BFBAE0C6EF1B38DC415ABDD2BB4E583CBA6A_MetadataUsageId;
extern const uint32_t InvokableCall_1__ctor_m670F85A0ED4D975C93265F6969B9C1C06A87E8D2_MetadataUsageId;
extern const uint32_t InvokableCall_1__ctor_mD2F6B2A04293002F65F10FC1E15CA20CE07D39A6_MetadataUsageId;
extern const uint32_t InvokableCall_1__ctor_mD592EB69D1FB0A9CF5AB24ED4C76E3BE3AD2F91E_MetadataUsageId;
extern const uint32_t InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_MetadataUsageId;
extern const uint32_t InvokableCall_2__ctor_mE80CFA8D8605680746EBD7DC371B30DD42759D38_MetadataUsageId;
extern const uint32_t InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_MetadataUsageId;
extern const uint32_t InvokableCall_3__ctor_mA26C0B9D52E628D915E0C705A735F226BBA9B3EE_MetadataUsageId;
extern const uint32_t InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_MetadataUsageId;
extern const uint32_t InvokableCall_4__ctor_mDF3741C3CF51E23313E2DF7062488C430F25EEF0_MetadataUsageId;
extern const uint32_t Task_1_StartNew_m46510EA62A4E2F3AA6D8F5118AE02697E0DE59A6_MetadataUsageId;
extern const uint32_t Task_1_StartNew_m49456826C31982E9488BCC3E6A9E150BF86A4DE0_MetadataUsageId;
extern const uint32_t Task_1__ctor_m2749D54DEB57DB6C3380667A6A89A1C42E8B8635_MetadataUsageId;
extern const uint32_t Task_1__ctor_m294345A83D9CAC9B7198CA662BA64B776B5A8B23_MetadataUsageId;
extern const uint32_t Task_1__ctor_m3418D05E6E80990C18478A5EC60290D71B493EB3_MetadataUsageId;
extern const uint32_t Task_1__ctor_m3533BD867272C008F003BC8B763A0803A4C77C47_MetadataUsageId;
extern const uint32_t Task_1__ctor_m528B09E23B751134A17B56BEE3B345D54893657C_MetadataUsageId;
extern const uint32_t Task_1__ctor_m67769680F7DB97B973008CAE25870C31EF32B3D6_MetadataUsageId;
extern const uint32_t Task_1__ctor_m6DAC1732E56024E32076DEE1A3863F17635A8944_MetadataUsageId;
extern const uint32_t Task_1__ctor_m853EDDB7B8743654CF53E235439CD8E404BF9DF7_MetadataUsageId;
extern const uint32_t Task_1__ctor_mB6BFCB1A119B19A4AE30679E41E1F4EC47797EB4_MetadataUsageId;
extern const uint32_t Task_1__ctor_mBEFEA339A56C64CA5FFF1E01DF78A638DF46B88F_MetadataUsageId;
extern const uint32_t Task_1__ctor_mC9E6249923CC0B54FC33C426D648D5CBEEFAB5EA_MetadataUsageId;
extern const uint32_t Task_1__ctor_mD68EB9EEC6D405CDAC2E1DDE3B2E157876D931A3_MetadataUsageId;
extern const uint32_t Task_1__ctor_mE073C298840D69BB66B6D85DD376692298625414_MetadataUsageId;
extern const uint32_t Task_1__ctor_mF5DBC38A2E1E1FB34392CED5AD220E050985BEE1_MetadataUsageId;
extern const uint32_t Tuple_2_Equals_m5489EC6EEB99D6E3669146F997E5FEEF41F2C72A_MetadataUsageId;
extern const uint32_t Tuple_2_Equals_m8A8A8D99EB3E1F2AA7E2DE52E08E046B2368F89D_MetadataUsageId;
extern const uint32_t Tuple_2_GetHashCode_m602D0444139C96302CCD796893FC1AD8C0A29E2C_MetadataUsageId;
extern const uint32_t Tuple_2_GetHashCode_m854CCCEB905FCB156F336EBDF479ADE365C0272E_MetadataUsageId;
extern const uint32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_m0AB47D85881D220770A2DD2F1454E8964F02919E_MetadataUsageId;
extern const uint32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_m6EDDC04DBC238729BC03FDF965215D0A1C4D37BC_MetadataUsageId;
extern const uint32_t Tuple_2_System_Collections_IStructuralEquatable_Equals_m2FA914EB3559BC6801FC3BC2233B10F6E5DBE38E_MetadataUsageId;
extern const uint32_t Tuple_2_System_Collections_IStructuralEquatable_Equals_mA17D63F2DD00C7883626B17244FED7986933D386_MetadataUsageId;
extern const uint32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_m15D00B3B45FFA5706EECE7B551BB6E271BD20D5A_MetadataUsageId;
extern const uint32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_mAE1289785CBA73ABECFEEF8C126E6A753935A94C_MetadataUsageId;
extern const uint32_t Tuple_2_System_IComparable_CompareTo_m7EDE6EE8084F322A95C98D624C1882AEE4DB1206_MetadataUsageId;
extern const uint32_t Tuple_2_System_IComparable_CompareTo_mFE66A9713981581AA901E86D923FD7134B7F1BBB_MetadataUsageId;
extern const uint32_t Tuple_2_System_ITupleInternal_ToString_mCF0149D9D45E81908EF4599A4FA6EFB9F0718C1B_MetadataUsageId;
extern const uint32_t Tuple_2_System_ITupleInternal_ToString_mD5905DD42981D13FF686A3417B93BAF352D64B26_MetadataUsageId;
extern const uint32_t Tuple_2_ToString_m0C084BDD964C3A87FFB8FB3EB734D11784C59C1D_MetadataUsageId;
extern const uint32_t Tuple_2_ToString_m31887EF8F6A0F74C9433F9FEEE155C3DE8DD45CB_MetadataUsageId;
extern const uint32_t Tuple_3_Equals_m68A9A911CD09450DEA271118525BA7764415D6B1_MetadataUsageId;
extern const uint32_t Tuple_3_GetHashCode_m9381A44EC7D65D6DAFD105845431DE6C1A8FCCA2_MetadataUsageId;
extern const uint32_t Tuple_3_System_Collections_IStructuralComparable_CompareTo_mC272578AC2EACCA6A7439A948CF67173E26BAB6B_MetadataUsageId;
extern const uint32_t Tuple_3_System_Collections_IStructuralEquatable_Equals_m6105CDBE879D9F544868829F7421B047654FA2AF_MetadataUsageId;
extern const uint32_t Tuple_3_System_Collections_IStructuralEquatable_GetHashCode_m0A1022262707E6B874F1E6E840CBD5FDBC7C0B77_MetadataUsageId;
extern const uint32_t Tuple_3_System_IComparable_CompareTo_m64636C837A283A95130C6E0BB403581B0DA10E31_MetadataUsageId;
extern const uint32_t Tuple_3_System_ITupleInternal_ToString_mC14281AA0E9F04F3ADB9D13C9527F2246F4C9DBA_MetadataUsageId;
extern const uint32_t Tuple_3_ToString_m6E6F703A60AD7C96598E4781ED8C09EF3F348B4D_MetadataUsageId;
extern const uint32_t Tuple_4_Equals_m7B3F96F7CA90EE57BE8CC07D7109050AA0E6B93A_MetadataUsageId;
extern const uint32_t Tuple_4_Equals_mC0249B793F94DFE100705A5B3915C963F9691706_MetadataUsageId;
extern const uint32_t Tuple_4_GetHashCode_m921EB95FF812E8E39CB95BB46541009F596C7918_MetadataUsageId;
extern const uint32_t Tuple_4_GetHashCode_mAA9E1DB7088598BDE71317B7CEACA6841F4D16BC_MetadataUsageId;
extern const uint32_t Tuple_4_System_Collections_IStructuralComparable_CompareTo_m424E09DF6E5390655D4E4893F249752846C86D1C_MetadataUsageId;
extern const uint32_t Tuple_4_System_Collections_IStructuralComparable_CompareTo_mD693226F3B3FE5CC2D114FD0DC9D4B17BF46A743_MetadataUsageId;
extern const uint32_t Tuple_4_System_Collections_IStructuralEquatable_Equals_m63C0D572F63A297DB44E1F1FA169AEADA2CB06B0_MetadataUsageId;
extern const uint32_t Tuple_4_System_Collections_IStructuralEquatable_Equals_m6CF9C225128362F8CA4CD3D74856E01E47192E30_MetadataUsageId;
extern const uint32_t Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_m8197ECBBB8792160853DA07010DB8ADC3C5BEF60_MetadataUsageId;
extern const uint32_t Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_mFE9718A63453CFBBF99090ECC6894135DDB91646_MetadataUsageId;
extern const uint32_t Tuple_4_System_IComparable_CompareTo_m41C7B9791744C922831D4DD708993977184E31F4_MetadataUsageId;
extern const uint32_t Tuple_4_System_IComparable_CompareTo_m9862814A457B9F16A6E6C1A83956C5E55946324C_MetadataUsageId;
extern const uint32_t Tuple_4_System_ITupleInternal_ToString_m0548E0D262AB3E3E44385395135288B1DE01DD2D_MetadataUsageId;
extern const uint32_t Tuple_4_System_ITupleInternal_ToString_m6FF9026CFBE78AE8973B1B2A9A418E8A3CB58A59_MetadataUsageId;
extern const uint32_t Tuple_4_ToString_mC5B2A4704AE9971CC5B6ACD9956704B859C3FADA_MetadataUsageId;
extern const uint32_t Tuple_4_ToString_mD10589B5824EE601B09453A0625C1384F52AD791_MetadataUsageId;
extern const uint32_t UnityAction_1_BeginInvoke_m383296E02ACDA4892A49F2B148201A5A37D9F57F_MetadataUsageId;
extern const uint32_t UnityAction_1_BeginInvoke_m4B1EE21C25114A9D9BAFC50E3F2D67E5F665F5AC_MetadataUsageId;
extern const uint32_t UnityAction_1_BeginInvoke_m5DEFA82EDDF619690E524720C4128D58F303EBCB_MetadataUsageId;
extern const uint32_t UnityAction_1_BeginInvoke_mC8A9A9332EEEA81428669FAD060934954B73DDCB_MetadataUsageId;
extern const uint32_t UnityAction_2_BeginInvoke_m5F2C976EFE2F0144C74BB2FE1E3E2247617C81E0_MetadataUsageId;
extern const uint32_t UnityAction_2_BeginInvoke_mC72F0DCBBB077E215EC9ADA58D300288CC39E069_MetadataUsageId;
extern const uint32_t UnityEvent_1_FindMethod_Impl_m2EB10E941A967C89B4297A9278FBA88053A2D828_MetadataUsageId;
extern const uint32_t UnityEvent_1_FindMethod_Impl_mDD1047ED8F4A1CABD0ACBC76D73B344DCDAC3126_MetadataUsageId;
extern const uint32_t UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_MetadataUsageId;
extern const uint32_t UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_MetadataUsageId;
extern const uint32_t UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_MetadataUsageId;
extern const uint32_t UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_MetadataUsageId;
extern const uint32_t UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_MetadataUsageId;
extern const uint32_t ValueTuple_2_GetHashCodeCore_mAF7F89E5DC73E33AF443FF3F96962F500DA9DAA9_MetadataUsageId;
extern const uint32_t ValueTuple_2_GetHashCodeCore_mC913A22788B06DF404EF3DAA4135CF5AFF7503A6_MetadataUsageId;
extern const uint32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m9E2EC3FF01327CD456734C77156EFF94D04A0EDA_MetadataUsageId;
extern const uint32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mE82D0EABA63B5FA33C3C81C53A410C3833C3DF99_MetadataUsageId;
extern const uint32_t ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4F7F0770AB8C9A15CBE5B826DED2E5A1C2D93890_MetadataUsageId;
extern const uint32_t ValueTuple_2_System_Collections_IStructuralEquatable_Equals_mCEA5B5B92AA3543CFDC812368AA11D9D023F167A_MetadataUsageId;
extern const uint32_t ValueTuple_2_System_IComparable_CompareTo_m38D278F852F918B696F44604D70FEC23FE286A72_MetadataUsageId;
extern const uint32_t ValueTuple_2_System_IComparable_CompareTo_mB5E4B8A3A387346D734860B30F983C53049E6623_MetadataUsageId;
extern const uint32_t ValueTuple_2_ToString_m8FD918EEFE0B893C5120E66DD569D45C6E98FC4D_MetadataUsageId;
extern const uint32_t ValueTuple_2_ToString_mB9C389C92D5BDE41FF6641BADDB038D1F8A3AEE6_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef COMPARER_1_T322447E2E777F3707F8006FD88B8393DEAC1F196_H
#define COMPARER_1_T322447E2E777F3707F8006FD88B8393DEAC1F196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Comparer`1<System.Boolean>
struct  Comparer_1_t322447E2E777F3707F8006FD88B8393DEAC1F196  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_t322447E2E777F3707F8006FD88B8393DEAC1F196_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t322447E2E777F3707F8006FD88B8393DEAC1F196 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_t322447E2E777F3707F8006FD88B8393DEAC1F196_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_t322447E2E777F3707F8006FD88B8393DEAC1F196 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_t322447E2E777F3707F8006FD88B8393DEAC1F196 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_t322447E2E777F3707F8006FD88B8393DEAC1F196 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARER_1_T322447E2E777F3707F8006FD88B8393DEAC1F196_H
#ifndef COMPARER_1_T0796DB4CA0FA9609FBB2A6AEBA7EDF7DD7EE23A2_H
#define COMPARER_1_T0796DB4CA0FA9609FBB2A6AEBA7EDF7DD7EE23A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Comparer`1<System.Int32>
struct  Comparer_1_t0796DB4CA0FA9609FBB2A6AEBA7EDF7DD7EE23A2  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_t0796DB4CA0FA9609FBB2A6AEBA7EDF7DD7EE23A2_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t0796DB4CA0FA9609FBB2A6AEBA7EDF7DD7EE23A2 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_t0796DB4CA0FA9609FBB2A6AEBA7EDF7DD7EE23A2_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_t0796DB4CA0FA9609FBB2A6AEBA7EDF7DD7EE23A2 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_t0796DB4CA0FA9609FBB2A6AEBA7EDF7DD7EE23A2 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_t0796DB4CA0FA9609FBB2A6AEBA7EDF7DD7EE23A2 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARER_1_T0796DB4CA0FA9609FBB2A6AEBA7EDF7DD7EE23A2_H
#ifndef COMPARER_1_T1DB742817DFA148A84E0F6044361F97B935058A7_H
#define COMPARER_1_T1DB742817DFA148A84E0F6044361F97B935058A7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Comparer`1<System.Object>
struct  Comparer_1_t1DB742817DFA148A84E0F6044361F97B935058A7  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_t1DB742817DFA148A84E0F6044361F97B935058A7_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t1DB742817DFA148A84E0F6044361F97B935058A7 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_t1DB742817DFA148A84E0F6044361F97B935058A7_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_t1DB742817DFA148A84E0F6044361F97B935058A7 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_t1DB742817DFA148A84E0F6044361F97B935058A7 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_t1DB742817DFA148A84E0F6044361F97B935058A7 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARER_1_T1DB742817DFA148A84E0F6044361F97B935058A7_H
#ifndef EQUALITYCOMPARER_1_TEF2C39D86C36E82597707B89981FFD60E94C824B_H
#define EQUALITYCOMPARER_1_TEF2C39D86C36E82597707B89981FFD60E94C824B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct  EqualityComparer_1_tEF2C39D86C36E82597707B89981FFD60E94C824B  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tEF2C39D86C36E82597707B89981FFD60E94C824B_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tEF2C39D86C36E82597707B89981FFD60E94C824B * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tEF2C39D86C36E82597707B89981FFD60E94C824B_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tEF2C39D86C36E82597707B89981FFD60E94C824B * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tEF2C39D86C36E82597707B89981FFD60E94C824B ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tEF2C39D86C36E82597707B89981FFD60E94C824B * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_TEF2C39D86C36E82597707B89981FFD60E94C824B_H
#ifndef EQUALITYCOMPARER_1_TF7174A8BEF4C636DBBD3C6BBD234B0F315F64F33_H
#define EQUALITYCOMPARER_1_TF7174A8BEF4C636DBBD3C6BBD234B0F315F64F33_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct  EqualityComparer_1_tF7174A8BEF4C636DBBD3C6BBD234B0F315F64F33  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tF7174A8BEF4C636DBBD3C6BBD234B0F315F64F33_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tF7174A8BEF4C636DBBD3C6BBD234B0F315F64F33 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tF7174A8BEF4C636DBBD3C6BBD234B0F315F64F33_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tF7174A8BEF4C636DBBD3C6BBD234B0F315F64F33 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tF7174A8BEF4C636DBBD3C6BBD234B0F315F64F33 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tF7174A8BEF4C636DBBD3C6BBD234B0F315F64F33 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_TF7174A8BEF4C636DBBD3C6BBD234B0F315F64F33_H
#ifndef EQUALITYCOMPARER_1_T54972BA287ED38B066E4BE7A3B21F49803B62EBA_H
#define EQUALITYCOMPARER_1_T54972BA287ED38B066E4BE7A3B21F49803B62EBA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.Object>
struct  EqualityComparer_1_t54972BA287ED38B066E4BE7A3B21F49803B62EBA  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t54972BA287ED38B066E4BE7A3B21F49803B62EBA_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t54972BA287ED38B066E4BE7A3B21F49803B62EBA * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t54972BA287ED38B066E4BE7A3B21F49803B62EBA_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t54972BA287ED38B066E4BE7A3B21F49803B62EBA * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t54972BA287ED38B066E4BE7A3B21F49803B62EBA ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t54972BA287ED38B066E4BE7A3B21F49803B62EBA * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T54972BA287ED38B066E4BE7A3B21F49803B62EBA_H
#ifndef LIST_1_TB6CB50ED979D7494123AC5ADF0C1C587142B5694_H
#define LIST_1_TB6CB50ED979D7494123AC5ADF0C1C587142B5694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct  List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____items_1)); }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* get__items_1() const { return ____items_1; }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694_StaticFields, ____emptyArray_5)); }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TB6CB50ED979D7494123AC5ADF0C1C587142B5694_H
#ifndef OBJECTEQUALITYCOMPARER_T816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_H
#define OBJECTEQUALITYCOMPARER_T816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.ObjectEqualityComparer
struct  ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC  : public RuntimeObject
{
public:

public:
};

struct ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_StaticFields
{
public:
	// System.Collections.Generic.ObjectEqualityComparer System.Collections.Generic.ObjectEqualityComparer::Default
	ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_StaticFields, ___Default_0)); }
	inline ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC * get_Default_0() const { return ___Default_0; }
	inline ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTEQUALITYCOMPARER_T816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_H
#ifndef LOWLEVELCOMPARER_T4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_H
#define LOWLEVELCOMPARER_T4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.LowLevelComparer
struct  LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1  : public RuntimeObject
{
public:

public:
};

struct LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_StaticFields
{
public:
	// System.Collections.LowLevelComparer System.Collections.LowLevelComparer::Default
	LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_StaticFields, ___Default_0)); }
	inline LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1 * get_Default_0() const { return ___Default_0; }
	inline LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWLEVELCOMPARER_T4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef U3CU3EC_T6DA6385CAAB5CFB768B2244E61BDA7A3B499F2E4_H
#define U3CU3EC_T6DA6385CAAB5CFB768B2244E61BDA7A3B499F2E4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1_<>c<System.Object>
struct  U3CU3Ec_t6DA6385CAAB5CFB768B2244E61BDA7A3B499F2E4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t6DA6385CAAB5CFB768B2244E61BDA7A3B499F2E4_StaticFields
{
public:
	// System.Threading.Tasks.Task`1_<>c<TResult> System.Threading.Tasks.Task`1_<>c::<>9
	U3CU3Ec_t6DA6385CAAB5CFB768B2244E61BDA7A3B499F2E4 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6DA6385CAAB5CFB768B2244E61BDA7A3B499F2E4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t6DA6385CAAB5CFB768B2244E61BDA7A3B499F2E4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t6DA6385CAAB5CFB768B2244E61BDA7A3B499F2E4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t6DA6385CAAB5CFB768B2244E61BDA7A3B499F2E4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T6DA6385CAAB5CFB768B2244E61BDA7A3B499F2E4_H
#ifndef U3CU3EC_T08F2DBEFC89AC9DC915D17B4BBD89DDA5A459893_H
#define U3CU3EC_T08F2DBEFC89AC9DC915D17B4BBD89DDA5A459893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1_<>c<System.Threading.Tasks.VoidTaskResult>
struct  U3CU3Ec_t08F2DBEFC89AC9DC915D17B4BBD89DDA5A459893  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t08F2DBEFC89AC9DC915D17B4BBD89DDA5A459893_StaticFields
{
public:
	// System.Threading.Tasks.Task`1_<>c<TResult> System.Threading.Tasks.Task`1_<>c::<>9
	U3CU3Ec_t08F2DBEFC89AC9DC915D17B4BBD89DDA5A459893 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t08F2DBEFC89AC9DC915D17B4BBD89DDA5A459893_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t08F2DBEFC89AC9DC915D17B4BBD89DDA5A459893 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t08F2DBEFC89AC9DC915D17B4BBD89DDA5A459893 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t08F2DBEFC89AC9DC915D17B4BBD89DDA5A459893 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T08F2DBEFC89AC9DC915D17B4BBD89DDA5A459893_H
#ifndef SPARSEARRAY_1_T3343BC28ED7AB6481D2C9C24AC382CCEFD5148F1_H
#define SPARSEARRAY_1_T3343BC28ED7AB6481D2C9C24AC382CCEFD5148F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadPoolWorkQueue_SparseArray`1<System.Object>
struct  SparseArray_1_t3343BC28ED7AB6481D2C9C24AC382CCEFD5148F1  : public RuntimeObject
{
public:
	// T[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ThreadPoolWorkQueue_SparseArray`1::m_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_array_0;

public:
	inline static int32_t get_offset_of_m_array_0() { return static_cast<int32_t>(offsetof(SparseArray_1_t3343BC28ED7AB6481D2C9C24AC382CCEFD5148F1, ___m_array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_array_0() const { return ___m_array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_array_0() { return &___m_array_0; }
	inline void set_m_array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_array_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_array_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPARSEARRAY_1_T3343BC28ED7AB6481D2C9C24AC382CCEFD5148F1_H
#ifndef TUPLE_2_T10AF2DAB336473A3A993F224EC2171B187E7D000_H
#define TUPLE_2_T10AF2DAB336473A3A993F224EC2171B187E7D000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Tuple`2<System.Object,System.Char>
struct  Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	Il2CppChar ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item1_0), value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000, ___m_Item2_1)); }
	inline Il2CppChar get_m_Item2_1() const { return ___m_Item2_1; }
	inline Il2CppChar* get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(Il2CppChar value)
	{
		___m_Item2_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_2_T10AF2DAB336473A3A993F224EC2171B187E7D000_H
#ifndef TUPLE_2_T66BEEC45F61266028F5253B4045F569CB4C812F5_H
#define TUPLE_2_T66BEEC45F61266028F5253B4045F569CB4C812F5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Tuple`2<System.Object,System.Object>
struct  Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject * ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item1_0), value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_2_T66BEEC45F61266028F5253B4045F569CB4C812F5_H
#ifndef TUPLE_3_TCA94A9157918EBC76337751E950A3BF20BBF71F9_H
#define TUPLE_3_TCA94A9157918EBC76337751E950A3BF20BBF71F9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Tuple`3<System.Object,System.Object,System.Object>
struct  Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9  : public RuntimeObject
{
public:
	// T1 System.Tuple`3::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`3::m_Item2
	RuntimeObject * ___m_Item2_1;
	// T3 System.Tuple`3::m_Item3
	RuntimeObject * ___m_Item3_2;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item1_0), value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item2_1), value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9, ___m_Item3_2)); }
	inline RuntimeObject * get_m_Item3_2() const { return ___m_Item3_2; }
	inline RuntimeObject ** get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(RuntimeObject * value)
	{
		___m_Item3_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item3_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_3_TCA94A9157918EBC76337751E950A3BF20BBF71F9_H
#ifndef TUPLE_4_TF7CBADC8FB46E4E6569992CB77252B1C464DA8B1_H
#define TUPLE_4_TF7CBADC8FB46E4E6569992CB77252B1C464DA8B1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>
struct  Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1  : public RuntimeObject
{
public:
	// T1 System.Tuple`4::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`4::m_Item2
	RuntimeObject * ___m_Item2_1;
	// T3 System.Tuple`4::m_Item3
	int32_t ___m_Item3_2;
	// T4 System.Tuple`4::m_Item4
	int32_t ___m_Item4_3;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item1_0), value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item2_1), value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1, ___m_Item3_2)); }
	inline int32_t get_m_Item3_2() const { return ___m_Item3_2; }
	inline int32_t* get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(int32_t value)
	{
		___m_Item3_2 = value;
	}

	inline static int32_t get_offset_of_m_Item4_3() { return static_cast<int32_t>(offsetof(Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1, ___m_Item4_3)); }
	inline int32_t get_m_Item4_3() const { return ___m_Item4_3; }
	inline int32_t* get_address_of_m_Item4_3() { return &___m_Item4_3; }
	inline void set_m_Item4_3(int32_t value)
	{
		___m_Item4_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_4_TF7CBADC8FB46E4E6569992CB77252B1C464DA8B1_H
#ifndef TUPLE_4_TE9A25F2998DB840363C69F6316C427AAFB7CEFCF_H
#define TUPLE_4_TE9A25F2998DB840363C69F6316C427AAFB7CEFCF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Tuple`4<System.Object,System.Object,System.Object,System.Object>
struct  Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF  : public RuntimeObject
{
public:
	// T1 System.Tuple`4::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`4::m_Item2
	RuntimeObject * ___m_Item2_1;
	// T3 System.Tuple`4::m_Item3
	RuntimeObject * ___m_Item3_2;
	// T4 System.Tuple`4::m_Item4
	RuntimeObject * ___m_Item4_3;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item1_0), value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item2_1), value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF, ___m_Item3_2)); }
	inline RuntimeObject * get_m_Item3_2() const { return ___m_Item3_2; }
	inline RuntimeObject ** get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(RuntimeObject * value)
	{
		___m_Item3_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item3_2), value);
	}

	inline static int32_t get_offset_of_m_Item4_3() { return static_cast<int32_t>(offsetof(Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF, ___m_Item4_3)); }
	inline RuntimeObject * get_m_Item4_3() const { return ___m_Item4_3; }
	inline RuntimeObject ** get_address_of_m_Item4_3() { return &___m_Item4_3; }
	inline void set_m_Item4_3(RuntimeObject * value)
	{
		___m_Item4_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Item4_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_4_TE9A25F2998DB840363C69F6316C427AAFB7CEFCF_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef BASEINVOKABLECALL_TE686BE3371ABBF6DB32C422D433199AD18316DF5_H
#define BASEINVOKABLECALL_TE686BE3371ABBF6DB32C422D433199AD18316DF5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_TE686BE3371ABBF6DB32C422D433199AD18316DF5_H
#ifndef UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#define UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#define CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef CONFIGUREDTASKAWAITER_TFB3C4197768C6CF02BE088F703AA6E46D703D46E_H
#define CONFIGUREDTASKAWAITER_TFB3C4197768C6CF02BE088F703AA6E46D703D46E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Object>
struct  ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E, ___m_task_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGUREDTASKAWAITER_TFB3C4197768C6CF02BE088F703AA6E46D703D46E_H
#ifndef CONFIGUREDTASKAWAITER_T5A7BFB889EC19616C3271962663CCFD263CE8CA4_H
#define CONFIGUREDTASKAWAITER_T5A7BFB889EC19616C3271962663CCFD263CE8CA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Threading.Tasks.VoidTaskResult>
struct  ConfiguredTaskAwaiter_t5A7BFB889EC19616C3271962663CCFD263CE8CA4 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_task
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t5A7BFB889EC19616C3271962663CCFD263CE8CA4, ___m_task_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t5A7BFB889EC19616C3271962663CCFD263CE8CA4, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGUREDTASKAWAITER_T5A7BFB889EC19616C3271962663CCFD263CE8CA4_H
#ifndef TASKAWAITER_1_T8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_H
#define TASKAWAITER_1_T8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977, ___m_task_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_H
#ifndef TASKAWAITER_1_T2A96C6E5A8159F39BE46A120CE0712DCA38C4BCE_H
#define TASKAWAITER_1_T2A96C6E5A8159F39BE46A120CE0712DCA38C4BCE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>
struct  TaskAwaiter_1_t2A96C6E5A8159F39BE46A120CE0712DCA38C4BCE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2A96C6E5A8159F39BE46A120CE0712DCA38C4BCE, ___m_task_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T2A96C6E5A8159F39BE46A120CE0712DCA38C4BCE_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef CANCELLATIONTOKEN_T9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_H
#define CANCELLATIONTOKEN_T9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationToken
struct  CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB, ___m_source_0)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_source_0), value);
	}
};

struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_ActionToActionObjShunt_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_pinvoke
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_com
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};
#endif // CANCELLATIONTOKEN_T9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_H
#ifndef VOIDTASKRESULT_T66EBC10DDE738848DB00F6EC1A2536D7D4715F40_H
#define VOIDTASKRESULT_T66EBC10DDE738848DB00F6EC1A2536D7D4715F40_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.VoidTaskResult
struct  VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOIDTASKRESULT_T66EBC10DDE738848DB00F6EC1A2536D7D4715F40_H
#ifndef VALUETUPLE_2_T446756A8057B54D18CAD5BA1D73699DA4B40A264_H
#define VALUETUPLE_2_T446756A8057B54D18CAD5BA1D73699DA4B40A264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueTuple`2<System.Int32,System.Boolean>
struct  ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	bool ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264, ___Item2_1)); }
	inline bool get_Item2_1() const { return ___Item2_1; }
	inline bool* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(bool value)
	{
		___Item2_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUETUPLE_2_T446756A8057B54D18CAD5BA1D73699DA4B40A264_H
#ifndef VALUETUPLE_2_TD870A19E4522EBDF165C22F9F2B7251A228D8ACE_H
#define VALUETUPLE_2_TD870A19E4522EBDF165C22F9F2B7251A228D8ACE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueTuple`2<System.Object,System.Object>
struct  ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((&___Item1_0), value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((&___Item2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUETUPLE_2_TD870A19E4522EBDF165C22F9F2B7251A228D8ACE_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef INVOKABLECALL_T4195709D9C5DF20B7FC3986828A7612C9C28B0FC_H
#define INVOKABLECALL_T4195709D9C5DF20B7FC3986828A7612C9C28B0FC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC, ___Delegate_0)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T4195709D9C5DF20B7FC3986828A7612C9C28B0FC_H
#ifndef INVOKABLECALL_1_T6BD1F5F651D0A87B8D70001680F43294771251CB_H
#define INVOKABLECALL_1_T6BD1F5F651D0A87B8D70001680F43294771251CB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct  InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB, ___Delegate_0)); }
	inline UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T6BD1F5F651D0A87B8D70001680F43294771251CB_H
#ifndef INVOKABLECALL_1_T39872274B662BF6B73E43C748C83E91947E649E5_H
#define INVOKABLECALL_1_T39872274B662BF6B73E43C748C83E91947E649E5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct  InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5, ___Delegate_0)); }
	inline UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T39872274B662BF6B73E43C748C83E91947E649E5_H
#ifndef INVOKABLECALL_1_T4C25D83F8CA99D8F1156E28315A6AD077D0951BC_H
#define INVOKABLECALL_1_T4C25D83F8CA99D8F1156E28315A6AD077D0951BC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Object>
struct  InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC, ___Delegate_0)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T4C25D83F8CA99D8F1156E28315A6AD077D0951BC_H
#ifndef INVOKABLECALL_1_TBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26_H
#define INVOKABLECALL_1_TBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Single>
struct  InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26, ___Delegate_0)); }
	inline UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_TBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26_H
#ifndef INVOKABLECALL_2_T92DAC0F2FB25BD6576E876379F30AD0C93C4E42E_H
#define INVOKABLECALL_2_T92DAC0F2FB25BD6576E876379F30AD0C93C4E42E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct  InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`2<T1,T2> UnityEngine.Events.InvokableCall`2::Delegate
	UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E, ___Delegate_0)); }
	inline UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_2_T92DAC0F2FB25BD6576E876379F30AD0C93C4E42E_H
#ifndef INVOKABLECALL_3_T4C86EE6D323407D93E34FFFC787D64FE62C5973D_H
#define INVOKABLECALL_3_T4C86EE6D323407D93E34FFFC787D64FE62C5973D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct  InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D, ___Delegate_0)); }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_3_T4C86EE6D323407D93E34FFFC787D64FE62C5973D_H
#ifndef INVOKABLECALL_4_T72FB1137599CE871685340E96EFDD317DB4831E6_H
#define INVOKABLECALL_4_T72FB1137599CE871685340E96EFDD317DB4831E6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct  InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> UnityEngine.Events.InvokableCall`4::Delegate
	UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6, ___Delegate_0)); }
	inline UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_4_T72FB1137599CE871685340E96EFDD317DB4831E6_H
#ifndef UNITYEVENT_1_T6DD758393B13FC2A58BE44E647D9EBEA4F27D914_H
#define UNITYEVENT_1_T6DD758393B13FC2A58BE44E647D9EBEA4F27D914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T6DD758393B13FC2A58BE44E647D9EBEA4F27D914_H
#ifndef UNITYEVENT_1_T9E897A46A46C78F7104A831E63BB081546EFFF0D_H
#define UNITYEVENT_1_T9E897A46A46C78F7104A831E63BB081546EFFF0D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Object>
struct  UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T9E897A46A46C78F7104A831E63BB081546EFFF0D_H
#ifndef UNITYEVENT_2_TCABE16DD12281C927273F04C2F6D54BE6ED094EC_H
#define UNITYEVENT_2_TCABE16DD12281C927273F04C2F6D54BE6ED094EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct  UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_2_TCABE16DD12281C927273F04C2F6D54BE6ED094EC_H
#ifndef UNITYEVENT_3_T695DB93DCFCA35084D787B62352792D5C4F564C9_H
#define UNITYEVENT_3_T695DB93DCFCA35084D787B62352792D5C4F564C9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct  UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_3_T695DB93DCFCA35084D787B62352792D5C4F564C9_H
#ifndef UNITYEVENT_4_T2145BBDEE01F7E33D8060C904609F2FFD8845A0A_H
#define UNITYEVENT_4_T2145BBDEE01F7E33D8060C904609F2FFD8845A0A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`4::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_4_T2145BBDEE01F7E33D8060C904609F2FFD8845A0A_H
#ifndef SCENE_T942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_H
#define SCENE_T942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_H
#ifndef ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#define ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#define INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef CONFIGUREDTASKAWAITABLE_1_TA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8_H
#define CONFIGUREDTASKAWAITABLE_1_TA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct  ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  value)
	{
		___m_configuredTaskAwaiter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGUREDTASKAWAITABLE_1_TA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8_H
#ifndef CONFIGUREDTASKAWAITABLE_1_TBF6C7E1E5DE2AF3654C5691FB3AF9811B3D076C3_H
#define CONFIGUREDTASKAWAITABLE_1_TBF6C7E1E5DE2AF3654C5691FB3AF9811B3D076C3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Threading.Tasks.VoidTaskResult>
struct  ConfiguredTaskAwaitable_1_tBF6C7E1E5DE2AF3654C5691FB3AF9811B3D076C3 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t5A7BFB889EC19616C3271962663CCFD263CE8CA4  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_tBF6C7E1E5DE2AF3654C5691FB3AF9811B3D076C3, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t5A7BFB889EC19616C3271962663CCFD263CE8CA4  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t5A7BFB889EC19616C3271962663CCFD263CE8CA4 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t5A7BFB889EC19616C3271962663CCFD263CE8CA4  value)
	{
		___m_configuredTaskAwaiter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGUREDTASKAWAITABLE_1_TBF6C7E1E5DE2AF3654C5691FB3AF9811B3D076C3_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef STACKCRAWLMARK_T857D8DE506F124E737FD26BB7ADAAAAD13E4F943_H
#define STACKCRAWLMARK_T857D8DE506F124E737FD26BB7ADAAAAD13E4F943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.StackCrawlMark
struct  StackCrawlMark_t857D8DE506F124E737FD26BB7ADAAAAD13E4F943 
{
public:
	// System.Int32 System.Threading.StackCrawlMark::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StackCrawlMark_t857D8DE506F124E737FD26BB7ADAAAAD13E4F943, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKCRAWLMARK_T857D8DE506F124E737FD26BB7ADAAAAD13E4F943_H
#ifndef INTERNALTASKOPTIONS_T370B96BF359DE59C57EB5444F9310B8FFFA2AA6A_H
#define INTERNALTASKOPTIONS_T370B96BF359DE59C57EB5444F9310B8FFFA2AA6A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.InternalTaskOptions
struct  InternalTaskOptions_t370B96BF359DE59C57EB5444F9310B8FFFA2AA6A 
{
public:
	// System.Int32 System.Threading.Tasks.InternalTaskOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InternalTaskOptions_t370B96BF359DE59C57EB5444F9310B8FFFA2AA6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALTASKOPTIONS_T370B96BF359DE59C57EB5444F9310B8FFFA2AA6A_H
#ifndef TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#define TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_action_5), value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateObject_6), value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_taskScheduler_7), value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_parent_8), value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_continuationObject_10), value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_15)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_contingentProperties_15), value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_factory_3), value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCompletionSentinel_11), value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_currentActiveTasks_13), value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_activeTasksLock_14), value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCancelCallback_16), value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_createContingentProperties_17), value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_18)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_completedTask_18), value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsExceptionObservedByParentPredicate_19), value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_ecCallback_20), value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsTaskContinuationNullPredicate_21), value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_currentTask_0), value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((&___t_stackGuard_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#ifndef CONTINGENTPROPERTIES_T7149A27D01507C74E8BDAAA3848B45D2644FDF08_H
#define CONTINGENTPROPERTIES_T7149A27D01507C74E8BDAAA3848B45D2644FDF08_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task_ContingentProperties
struct  ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08  : public RuntimeObject
{
public:
	// System.Threading.ExecutionContext System.Threading.Tasks.Task_ContingentProperties::m_capturedContext
	ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * ___m_capturedContext_0;
	// System.Threading.ManualResetEventSlim modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task_ContingentProperties::m_completionEvent
	ManualResetEventSlim_t085E880B24016C42F7DE42113674D0A41B4FB445 * ___m_completionEvent_1;
	// System.Threading.Tasks.TaskExceptionHolder modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task_ContingentProperties::m_exceptionsHolder
	TaskExceptionHolder_t1F44F1CE648090AA15DDC759304A18E998EFA811 * ___m_exceptionsHolder_2;
	// System.Threading.CancellationToken System.Threading.Tasks.Task_ContingentProperties::m_cancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___m_cancellationToken_3;
	// System.Threading.Tasks.Shared`1<System.Threading.CancellationTokenRegistration> System.Threading.Tasks.Task_ContingentProperties::m_cancellationRegistration
	Shared_1_t6EFAE49AC0A1E070F87779D3DD8273B35F28E7D2 * ___m_cancellationRegistration_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task_ContingentProperties::m_internalCancellationRequested
	int32_t ___m_internalCancellationRequested_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task_ContingentProperties::m_completionCountdown
	int32_t ___m_completionCountdown_6;
	// System.Collections.Generic.List`1<System.Threading.Tasks.Task> modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task_ContingentProperties::m_exceptionalChildren
	List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E * ___m_exceptionalChildren_7;

public:
	inline static int32_t get_offset_of_m_capturedContext_0() { return static_cast<int32_t>(offsetof(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08, ___m_capturedContext_0)); }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * get_m_capturedContext_0() const { return ___m_capturedContext_0; }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 ** get_address_of_m_capturedContext_0() { return &___m_capturedContext_0; }
	inline void set_m_capturedContext_0(ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * value)
	{
		___m_capturedContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_capturedContext_0), value);
	}

	inline static int32_t get_offset_of_m_completionEvent_1() { return static_cast<int32_t>(offsetof(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08, ___m_completionEvent_1)); }
	inline ManualResetEventSlim_t085E880B24016C42F7DE42113674D0A41B4FB445 * get_m_completionEvent_1() const { return ___m_completionEvent_1; }
	inline ManualResetEventSlim_t085E880B24016C42F7DE42113674D0A41B4FB445 ** get_address_of_m_completionEvent_1() { return &___m_completionEvent_1; }
	inline void set_m_completionEvent_1(ManualResetEventSlim_t085E880B24016C42F7DE42113674D0A41B4FB445 * value)
	{
		___m_completionEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completionEvent_1), value);
	}

	inline static int32_t get_offset_of_m_exceptionsHolder_2() { return static_cast<int32_t>(offsetof(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08, ___m_exceptionsHolder_2)); }
	inline TaskExceptionHolder_t1F44F1CE648090AA15DDC759304A18E998EFA811 * get_m_exceptionsHolder_2() const { return ___m_exceptionsHolder_2; }
	inline TaskExceptionHolder_t1F44F1CE648090AA15DDC759304A18E998EFA811 ** get_address_of_m_exceptionsHolder_2() { return &___m_exceptionsHolder_2; }
	inline void set_m_exceptionsHolder_2(TaskExceptionHolder_t1F44F1CE648090AA15DDC759304A18E998EFA811 * value)
	{
		___m_exceptionsHolder_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_exceptionsHolder_2), value);
	}

	inline static int32_t get_offset_of_m_cancellationToken_3() { return static_cast<int32_t>(offsetof(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08, ___m_cancellationToken_3)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_m_cancellationToken_3() const { return ___m_cancellationToken_3; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_m_cancellationToken_3() { return &___m_cancellationToken_3; }
	inline void set_m_cancellationToken_3(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___m_cancellationToken_3 = value;
	}

	inline static int32_t get_offset_of_m_cancellationRegistration_4() { return static_cast<int32_t>(offsetof(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08, ___m_cancellationRegistration_4)); }
	inline Shared_1_t6EFAE49AC0A1E070F87779D3DD8273B35F28E7D2 * get_m_cancellationRegistration_4() const { return ___m_cancellationRegistration_4; }
	inline Shared_1_t6EFAE49AC0A1E070F87779D3DD8273B35F28E7D2 ** get_address_of_m_cancellationRegistration_4() { return &___m_cancellationRegistration_4; }
	inline void set_m_cancellationRegistration_4(Shared_1_t6EFAE49AC0A1E070F87779D3DD8273B35F28E7D2 * value)
	{
		___m_cancellationRegistration_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_cancellationRegistration_4), value);
	}

	inline static int32_t get_offset_of_m_internalCancellationRequested_5() { return static_cast<int32_t>(offsetof(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08, ___m_internalCancellationRequested_5)); }
	inline int32_t get_m_internalCancellationRequested_5() const { return ___m_internalCancellationRequested_5; }
	inline int32_t* get_address_of_m_internalCancellationRequested_5() { return &___m_internalCancellationRequested_5; }
	inline void set_m_internalCancellationRequested_5(int32_t value)
	{
		___m_internalCancellationRequested_5 = value;
	}

	inline static int32_t get_offset_of_m_completionCountdown_6() { return static_cast<int32_t>(offsetof(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08, ___m_completionCountdown_6)); }
	inline int32_t get_m_completionCountdown_6() const { return ___m_completionCountdown_6; }
	inline int32_t* get_address_of_m_completionCountdown_6() { return &___m_completionCountdown_6; }
	inline void set_m_completionCountdown_6(int32_t value)
	{
		___m_completionCountdown_6 = value;
	}

	inline static int32_t get_offset_of_m_exceptionalChildren_7() { return static_cast<int32_t>(offsetof(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08, ___m_exceptionalChildren_7)); }
	inline List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E * get_m_exceptionalChildren_7() const { return ___m_exceptionalChildren_7; }
	inline List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E ** get_address_of_m_exceptionalChildren_7() { return &___m_exceptionalChildren_7; }
	inline void set_m_exceptionalChildren_7(List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E * value)
	{
		___m_exceptionalChildren_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_exceptionalChildren_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTINGENTPROPERTIES_T7149A27D01507C74E8BDAAA3848B45D2644FDF08_H
#ifndef TASKCONTINUATIONOPTIONS_T749581ABDD24D74BD051F09EC4E3408C209121A2_H
#define TASKCONTINUATIONOPTIONS_T749581ABDD24D74BD051F09EC4E3408C209121A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskContinuationOptions
struct  TaskContinuationOptions_t749581ABDD24D74BD051F09EC4E3408C209121A2 
{
public:
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskContinuationOptions_t749581ABDD24D74BD051F09EC4E3408C209121A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKCONTINUATIONOPTIONS_T749581ABDD24D74BD051F09EC4E3408C209121A2_H
#ifndef TASKCREATIONOPTIONS_T73D75E64925AACDF2A90DDB3D508192A8E74D375_H
#define TASKCREATIONOPTIONS_T73D75E64925AACDF2A90DDB3D508192A8E74D375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskCreationOptions
struct  TaskCreationOptions_t73D75E64925AACDF2A90DDB3D508192A8E74D375 
{
public:
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskCreationOptions_t73D75E64925AACDF2A90DDB3D508192A8E74D375, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKCREATIONOPTIONS_T73D75E64925AACDF2A90DDB3D508192A8E74D375_H
#ifndef TASKSCHEDULER_T966F2798F198FA90A0DA8EFC92BAC08297793114_H
#define TASKSCHEDULER_T966F2798F198FA90A0DA8EFC92BAC08297793114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskScheduler
struct  TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;

public:
	inline static int32_t get_offset_of_m_taskSchedulerId_3() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114, ___m_taskSchedulerId_3)); }
	inline int32_t get_m_taskSchedulerId_3() const { return ___m_taskSchedulerId_3; }
	inline int32_t* get_address_of_m_taskSchedulerId_3() { return &___m_taskSchedulerId_3; }
	inline void set_m_taskSchedulerId_3(int32_t value)
	{
		___m_taskSchedulerId_3 = value;
	}
};

struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C * ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC * ____unobservedTaskException_4;
	// System.Object System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	RuntimeObject * ____unobservedTaskExceptionLockObject_5;

public:
	inline static int32_t get_offset_of_s_activeTaskSchedulers_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ___s_activeTaskSchedulers_0)); }
	inline ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C * get_s_activeTaskSchedulers_0() const { return ___s_activeTaskSchedulers_0; }
	inline ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C ** get_address_of_s_activeTaskSchedulers_0() { return &___s_activeTaskSchedulers_0; }
	inline void set_s_activeTaskSchedulers_0(ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C * value)
	{
		___s_activeTaskSchedulers_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_activeTaskSchedulers_0), value);
	}

	inline static int32_t get_offset_of_s_defaultTaskScheduler_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ___s_defaultTaskScheduler_1)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_s_defaultTaskScheduler_1() const { return ___s_defaultTaskScheduler_1; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_s_defaultTaskScheduler_1() { return &___s_defaultTaskScheduler_1; }
	inline void set_s_defaultTaskScheduler_1(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___s_defaultTaskScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultTaskScheduler_1), value);
	}

	inline static int32_t get_offset_of_s_taskSchedulerIdCounter_2() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ___s_taskSchedulerIdCounter_2)); }
	inline int32_t get_s_taskSchedulerIdCounter_2() const { return ___s_taskSchedulerIdCounter_2; }
	inline int32_t* get_address_of_s_taskSchedulerIdCounter_2() { return &___s_taskSchedulerIdCounter_2; }
	inline void set_s_taskSchedulerIdCounter_2(int32_t value)
	{
		___s_taskSchedulerIdCounter_2 = value;
	}

	inline static int32_t get_offset_of__unobservedTaskException_4() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ____unobservedTaskException_4)); }
	inline EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC * get__unobservedTaskException_4() const { return ____unobservedTaskException_4; }
	inline EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC ** get_address_of__unobservedTaskException_4() { return &____unobservedTaskException_4; }
	inline void set__unobservedTaskException_4(EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC * value)
	{
		____unobservedTaskException_4 = value;
		Il2CppCodeGenWriteBarrier((&____unobservedTaskException_4), value);
	}

	inline static int32_t get_offset_of__unobservedTaskExceptionLockObject_5() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ____unobservedTaskExceptionLockObject_5)); }
	inline RuntimeObject * get__unobservedTaskExceptionLockObject_5() const { return ____unobservedTaskExceptionLockObject_5; }
	inline RuntimeObject ** get_address_of__unobservedTaskExceptionLockObject_5() { return &____unobservedTaskExceptionLockObject_5; }
	inline void set__unobservedTaskExceptionLockObject_5(RuntimeObject * value)
	{
		____unobservedTaskExceptionLockObject_5 = value;
		Il2CppCodeGenWriteBarrier((&____unobservedTaskExceptionLockObject_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKSCHEDULER_T966F2798F198FA90A0DA8EFC92BAC08297793114_H
#ifndef CASTHELPER_1_T72B003D3B45B7A5BF4E96CDF11BC8BF1CB8467BF_H
#define CASTHELPER_1_T72B003D3B45B7A5BF4E96CDF11BC8BF1CB8467BF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CastHelper`1<System.Object>
struct  CastHelper_1_t72B003D3B45B7A5BF4E96CDF11BC8BF1CB8467BF 
{
public:
	// T UnityEngine.CastHelper`1::t
	RuntimeObject * ___t_0;
	// System.IntPtr UnityEngine.CastHelper`1::onePointerFurtherThanT
	intptr_t ___onePointerFurtherThanT_1;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(CastHelper_1_t72B003D3B45B7A5BF4E96CDF11BC8BF1CB8467BF, ___t_0)); }
	inline RuntimeObject * get_t_0() const { return ___t_0; }
	inline RuntimeObject ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(RuntimeObject * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_0), value);
	}

	inline static int32_t get_offset_of_onePointerFurtherThanT_1() { return static_cast<int32_t>(offsetof(CastHelper_1_t72B003D3B45B7A5BF4E96CDF11BC8BF1CB8467BF, ___onePointerFurtherThanT_1)); }
	inline intptr_t get_onePointerFurtherThanT_1() const { return ___onePointerFurtherThanT_1; }
	inline intptr_t* get_address_of_onePointerFurtherThanT_1() { return &___onePointerFurtherThanT_1; }
	inline void set_onePointerFurtherThanT_1(intptr_t value)
	{
		___onePointerFurtherThanT_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTHELPER_1_T72B003D3B45B7A5BF4E96CDF11BC8BF1CB8467BF_H
#ifndef CACHEDINVOKABLECALL_1_TD9D6B42DED8777941C4EE375EDB67DF2B8F445D7_H
#define CACHEDINVOKABLECALL_1_TD9D6B42DED8777941C4EE375EDB67DF2B8F445D7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct  CachedInvokableCall_1_tD9D6B42DED8777941C4EE375EDB67DF2B8F445D7  : public InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	bool ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_tD9D6B42DED8777941C4EE375EDB67DF2B8F445D7, ___m_Arg1_1)); }
	inline bool get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline bool* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(bool value)
	{
		___m_Arg1_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_TD9D6B42DED8777941C4EE375EDB67DF2B8F445D7_H
#ifndef CACHEDINVOKABLECALL_1_T6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6_H
#define CACHEDINVOKABLECALL_1_T6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct  CachedInvokableCall_1_t6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6  : public InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	int32_t ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6, ___m_Arg1_1)); }
	inline int32_t get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline int32_t* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(int32_t value)
	{
		___m_Arg1_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_T6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6_H
#ifndef CACHEDINVOKABLECALL_1_TF7F1670398EB759A3D4AFEB35F47850DCD7D00AD_H
#define CACHEDINVOKABLECALL_1_TF7F1670398EB759A3D4AFEB35F47850DCD7D00AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct  CachedInvokableCall_1_tF7F1670398EB759A3D4AFEB35F47850DCD7D00AD  : public InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	RuntimeObject * ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_tF7F1670398EB759A3D4AFEB35F47850DCD7D00AD, ___m_Arg1_1)); }
	inline RuntimeObject * get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline RuntimeObject ** get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(RuntimeObject * value)
	{
		___m_Arg1_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arg1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_TF7F1670398EB759A3D4AFEB35F47850DCD7D00AD_H
#ifndef CACHEDINVOKABLECALL_1_T853CA34F3C49BD37B91F7733304984E8B1FDEF0A_H
#define CACHEDINVOKABLECALL_1_T853CA34F3C49BD37B91F7733304984E8B1FDEF0A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct  CachedInvokableCall_1_t853CA34F3C49BD37B91F7733304984E8B1FDEF0A  : public InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	float ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t853CA34F3C49BD37B91F7733304984E8B1FDEF0A, ___m_Arg1_1)); }
	inline float get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline float* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(float value)
	{
		___m_Arg1_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_T853CA34F3C49BD37B91F7733304984E8B1FDEF0A_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#define ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T94D19DF918A54511AEDF4784C9A08741BAD1DEDA_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T94D19DF918A54511AEDF4784C9A08741BAD1DEDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_actualValue_19), value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((&____rangeMessage_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T94D19DF918A54511AEDF4784C9A08741BAD1DEDA_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef TASKFACTORY_1_TA50D9207CAE2C505277DD5F03CBE64700177257C_H
#define TASKFACTORY_1_TA50D9207CAE2C505277DD5F03CBE64700177257C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskFactory`1<System.Object>
struct  TaskFactory_1_tA50D9207CAE2C505277DD5F03CBE64700177257C  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory`1::m_defaultCancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1::m_defaultScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory`1::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory`1::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_1_tA50D9207CAE2C505277DD5F03CBE64700177257C, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___m_defaultCancellationToken_0 = value;
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_1_tA50D9207CAE2C505277DD5F03CBE64700177257C, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultScheduler_1), value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_1_tA50D9207CAE2C505277DD5F03CBE64700177257C, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_1_tA50D9207CAE2C505277DD5F03CBE64700177257C, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKFACTORY_1_TA50D9207CAE2C505277DD5F03CBE64700177257C_H
#ifndef TASKFACTORY_1_T3C0D0DC20C0FC00DE4F8740B351BE642467AB03D_H
#define TASKFACTORY_1_T3C0D0DC20C0FC00DE4F8740B351BE642467AB03D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct  TaskFactory_1_t3C0D0DC20C0FC00DE4F8740B351BE642467AB03D  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory`1::m_defaultCancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1::m_defaultScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory`1::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory`1::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_1_t3C0D0DC20C0FC00DE4F8740B351BE642467AB03D, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___m_defaultCancellationToken_0 = value;
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_1_t3C0D0DC20C0FC00DE4F8740B351BE642467AB03D, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultScheduler_1), value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_1_t3C0D0DC20C0FC00DE4F8740B351BE642467AB03D, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_1_t3C0D0DC20C0FC00DE4F8740B351BE642467AB03D, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKFACTORY_1_T3C0D0DC20C0FC00DE4F8740B351BE642467AB03D_H
#ifndef TASK_1_TA56001ED5270173CA1432EDFCD84EABB1024BC09_H
#define TASK_1_TA56001ED5270173CA1432EDFCD84EABB1024BC09_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.Object>
struct  Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09, ___m_result_22)); }
	inline RuntimeObject * get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_result_22), value);
	}
};

struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tA50D9207CAE2C505277DD5F03CBE64700177257C * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tDAE4310E42C13AE378CDF0371BD31D6BF4E61EBD * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tA50D9207CAE2C505277DD5F03CBE64700177257C * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tA50D9207CAE2C505277DD5F03CBE64700177257C ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tA50D9207CAE2C505277DD5F03CBE64700177257C * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_23), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tDAE4310E42C13AE378CDF0371BD31D6BF4E61EBD * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tDAE4310E42C13AE378CDF0371BD31D6BF4E61EBD ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tDAE4310E42C13AE378CDF0371BD31D6BF4E61EBD * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_TA56001ED5270173CA1432EDFCD84EABB1024BC09_H
#ifndef TASK_1_T6E4E91059C08F359F21A42B8BFA51E8BBFA47138_H
#define TASK_1_T6E4E91059C08F359F21A42B8BFA51E8BBFA47138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct  Task_1_t6E4E91059C08F359F21A42B8BFA51E8BBFA47138  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t6E4E91059C08F359F21A42B8BFA51E8BBFA47138, ___m_result_22)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_result_22() const { return ___m_result_22; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_result_22), value);
	}
};

struct Task_1_t6E4E91059C08F359F21A42B8BFA51E8BBFA47138_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t58FE324C5DC18B5ED9A0E49CA8543DEEA65B4462 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t9183BE7C6FB5EAED091785FC3E1D3D41DB3497F7 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t6E4E91059C08F359F21A42B8BFA51E8BBFA47138_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t58FE324C5DC18B5ED9A0E49CA8543DEEA65B4462 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t58FE324C5DC18B5ED9A0E49CA8543DEEA65B4462 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t58FE324C5DC18B5ED9A0E49CA8543DEEA65B4462 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_23), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t6E4E91059C08F359F21A42B8BFA51E8BBFA47138_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t9183BE7C6FB5EAED091785FC3E1D3D41DB3497F7 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t9183BE7C6FB5EAED091785FC3E1D3D41DB3497F7 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t9183BE7C6FB5EAED091785FC3E1D3D41DB3497F7 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T6E4E91059C08F359F21A42B8BFA51E8BBFA47138_H
#ifndef TASK_1_T1359D75350E9D976BFA28AD96E417450DE277673_H
#define TASK_1_T1359D75350E9D976BFA28AD96E417450DE277673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct  Task_1_t1359D75350E9D976BFA28AD96E417450DE277673  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673, ___m_result_22)); }
	inline VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  get_m_result_22() const { return ___m_result_22; }
	inline VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40 * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t1359D75350E9D976BFA28AD96E417450DE277673_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t3C0D0DC20C0FC00DE4F8740B351BE642467AB03D * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t9FE43757FE22F96D0EA4E7945B6D146812F2671F * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t3C0D0DC20C0FC00DE4F8740B351BE642467AB03D * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t3C0D0DC20C0FC00DE4F8740B351BE642467AB03D ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t3C0D0DC20C0FC00DE4F8740B351BE642467AB03D * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_23), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t9FE43757FE22F96D0EA4E7945B6D146812F2671F * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t9FE43757FE22F96D0EA4E7945B6D146812F2671F ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t9FE43757FE22F96D0EA4E7945B6D146812F2671F * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T1359D75350E9D976BFA28AD96E417450DE277673_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef FUNC_1_T59BE545225A69AFD7B2056D169D0083051F6D386_H
#define FUNC_1_T59BE545225A69AFD7B2056D169D0083051F6D386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Object>
struct  Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T59BE545225A69AFD7B2056D169D0083051F6D386_H
#ifndef FUNC_1_TD7987BBF779AE4E497F3E221E64EB79BCA375FE9_H
#define FUNC_1_TD7987BBF779AE4E497F3E221E64EB79BCA375FE9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Threading.Tasks.VoidTaskResult>
struct  Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_TD7987BBF779AE4E497F3E221E64EB79BCA375FE9_H
#ifndef FUNC_2_TE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4_H
#define FUNC_2_TE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Object,System.Object>
struct  Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_TE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4_H
#ifndef FUNC_2_T2055ABF714892AC88A9515BF45D469142AE0BA83_H
#define FUNC_2_T2055ABF714892AC88A9515BF45D469142AE0BA83_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Object,System.Threading.Tasks.VoidTaskResult>
struct  Func_2_t2055ABF714892AC88A9515BF45D469142AE0BA83  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2055ABF714892AC88A9515BF45D469142AE0BA83_H
#ifndef FUNC_2_TDAE4310E42C13AE378CDF0371BD31D6BF4E61EBD_H
#define FUNC_2_TDAE4310E42C13AE378CDF0371BD31D6BF4E61EBD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct  Func_2_tDAE4310E42C13AE378CDF0371BD31D6BF4E61EBD  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_TDAE4310E42C13AE378CDF0371BD31D6BF4E61EBD_H
#ifndef FUNC_2_T9FE43757FE22F96D0EA4E7945B6D146812F2671F_H
#define FUNC_2_T9FE43757FE22F96D0EA4E7945B6D146812F2671F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>>
struct  Func_2_t9FE43757FE22F96D0EA4E7945B6D146812F2671F  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T9FE43757FE22F96D0EA4E7945B6D146812F2671F_H
#ifndef UNITYACTION_1_TB994D127B02789CE2010397AEF756615E5F84FDC_H
#define UNITYACTION_1_TB994D127B02789CE2010397AEF756615E5F84FDC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct  UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_TB994D127B02789CE2010397AEF756615E5F84FDC_H
#ifndef UNITYACTION_1_T2291ED59024631BF653D2880E0EE63EC7F27B58F_H
#define UNITYACTION_1_T2291ED59024631BF653D2880E0EE63EC7F27B58F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Int32>
struct  UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T2291ED59024631BF653D2880E0EE63EC7F27B58F_H
#ifndef UNITYACTION_1_T330F97880F37E23D6D0C6618DD77F28AC9EF8FA9_H
#define UNITYACTION_1_T330F97880F37E23D6D0C6618DD77F28AC9EF8FA9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T330F97880F37E23D6D0C6618DD77F28AC9EF8FA9_H
#ifndef UNITYACTION_1_T0064196FB7635B812E65BA9FD08D39F68C75DCD9_H
#define UNITYACTION_1_T0064196FB7635B812E65BA9FD08D39F68C75DCD9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Single>
struct  UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T0064196FB7635B812E65BA9FD08D39F68C75DCD9_H
#ifndef UNITYACTION_1_T95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384_H
#define UNITYACTION_1_T95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct  UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384_H
#ifndef UNITYACTION_2_T585826A49A16AB1506410452D61899BB8A3242F2_H
#define UNITYACTION_2_T585826A49A16AB1506410452D61899BB8A3242F2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct  UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T585826A49A16AB1506410452D61899BB8A3242F2_H
#ifndef UNITYACTION_2_T77680359D738D69E578F3A74D50CD3FA8D775A60_H
#define UNITYACTION_2_T77680359D738D69E578F3A74D50CD3FA8D775A60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct  UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T77680359D738D69E578F3A74D50CD3FA8D775A60_H
#ifndef UNITYACTION_2_T6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F_H
#define UNITYACTION_2_T6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct  UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F_H
#ifndef UNITYACTION_3_T1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89_H
#define UNITYACTION_3_T1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct  UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_3_T1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89_H
#ifndef UNITYACTION_4_TB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1_H
#define UNITYACTION_4_TB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_4_TB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1_H
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::.ctor(System.Threading.Tasks.Task`1<TResult>)
extern "C" IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_m965BA6A8F352B8C6133D6AAEBC60B7767AFBCCB0_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ConfiguredTaskAwaitable_1__ctor_mB82ADF237AE2CA3076F32A86D153EBD7B339E3B7_gshared (ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8 * __this, Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * p0, bool p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Threading.Tasks.Task`1<TResult>)
extern "C" IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_mEC801EB8DC0BEA0BA3D3EBB76982C94FA66621F1_gshared (TaskAwaiter_1_t2A96C6E5A8159F39BE46A120CE0712DCA38C4BCE * __this, Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ConfiguredTaskAwaitable_1__ctor_mAD28136B3EBB7A59923B02CD31DE0E0DB4B69FA7_gshared (ConfiguredTaskAwaitable_1_tBF6C7E1E5DE2AF3654C5691FB3AF9811B3D076C3 * __this, Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * p0, bool p1, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`2<System.Int32,System.Boolean>::Equals(System.ValueTuple`2<T1,T2>)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mFB1DF702E0F7701ACA642584D932529CD7B5636E_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  p0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`2<System.Int32,System.Boolean>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m4CDA97E2CE07B05ACBFEE7773F1290ADBAD5D69D_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`2<System.Int32,System.Boolean>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_mCEA5B5B92AA3543CFDC812368AA11D9D023F167A_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Int32,System.Boolean>::CompareTo(System.ValueTuple`2<T1,T2>)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_m1181B317CF2CE4BA034B5B13111D43AF11681BE7_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  p0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Int32,System.Boolean>::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_m38D278F852F918B696F44604D70FEC23FE286A72_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Int32,System.Boolean>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m9E2EC3FF01327CD456734C77156EFF94D04A0EDA_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Int32,System.Boolean>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m39C814C5764887C0F26D42D593C9D678AA9AAA34_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Int32,System.Boolean>::GetHashCodeCore(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_mC913A22788B06DF404EF3DAA4135CF5AFF7503A6_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Int32,System.Boolean>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m08BBF291B605FCA050B18EF44C0C21F39A017652_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple`2<System.Int32,System.Boolean>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_m8FD918EEFE0B893C5120E66DD569D45C6E98FC4D_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::Equals(System.ValueTuple`2<T1,T2>)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m00845AED513964CDD8E7197537A964BF771E9B7C_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  p0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m3F05460F260C95C8D053F83D32486CF09837AC0D_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4F7F0770AB8C9A15CBE5B826DED2E5A1C2D93890_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::CompareTo(System.ValueTuple`2<T1,T2>)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_m7D62DBACBCD7D6C53E8C86C1CC1863AF4C7D3253_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  p0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_mB5E4B8A3A387346D734860B30F983C53049E6623_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mE82D0EABA63B5FA33C3C81C53A410C3833C3DF99_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_mDBC9EA91689835ABBD95A1E57DC6373D343947E2_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_mAF7F89E5DC73E33AF443FF3F96962F500DA9DAA9_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m663F6586855302E7608620F1789CFC7A019439BB_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple`2<System.Object,System.Object>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_mB9C389C92D5BDE41FF6641BADDB038D1F8A3AEE6_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);

// System.Void System.Threading.Tasks.Task::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Task__ctor_m8E1D8C0B00CDBC75BE82736DC129396F79B7A84D (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::.ctor(System.Boolean,System.Threading.Tasks.TaskCreationOptions,System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR void Task__ctor_m61EE08D52F4C76A4D8E44B826F02724920D3425B (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, bool ___canceled0, int32_t ___creationOptions1, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___ct2, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::InternalCurrentIfAttached(System.Threading.Tasks.TaskCreationOptions)
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_InternalCurrentIfAttached_mA6A2C11F69612C4A960BC1FC6BD4E4D181D26A3B (int32_t ___creationOptions0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::PossiblyCaptureContext(System.Threading.StackCrawlMark&)
extern "C" IL2CPP_METHOD_ATTR void Task_PossiblyCaptureContext_m0DB8D1ADD84B044BEBC0A692E45577D2B7ADFDA8 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, int32_t* ___stackMark0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::.ctor(System.Delegate,System.Object,System.Threading.Tasks.Task,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.Tasks.TaskScheduler)
extern "C" IL2CPP_METHOD_ATTR void Task__ctor_m0769EBAC32FC56E43AA3EA4697369AD1C68508CC (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, Delegate_t * ___action0, RuntimeObject * ___state1, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___parent2, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken3, int32_t ___creationOptions4, int32_t ___internalOptions5, TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___scheduler6, const RuntimeMethod* method);
// System.String System.Environment::GetResourceString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9 (String_t* ___key0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::ScheduleAndStart(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Task_ScheduleAndStart_m7A3334C89BD4B47370D0A3CAE575EA54CCA01AEF (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, bool ___needsProtection0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_mA675F47CE1DBD1948BDC9215DCAE93F07FC32E19 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::AtomicStateUpdate(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Task_AtomicStateUpdate_m8453A8B2D404F085626BC0BCFCB2593AA373F530 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, int32_t ___newBits0, int32_t ___illegalBits1, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Exchange(System.Int32&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Interlocked_Exchange_mD5CC61AF0F002355912FAAF84F26BE93639B5FD5 (int32_t* ___location10, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task/ContingentProperties::SetCompleted()
extern "C" IL2CPP_METHOD_ATTR void ContingentProperties_SetCompleted_m3CB1941CBE9F1D241A2AFA4E3F739C98B493E6DE (ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::FinishStageThree()
extern "C" IL2CPP_METHOD_ATTR void Task_FinishStageThree_m543744E8C5DFC94B2F2898998663C85617999E32 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsWaitNotificationEnabledOrNotRanToCompletion()
extern "C" IL2CPP_METHOD_ATTR bool Task_get_IsWaitNotificationEnabledOrNotRanToCompletion_mEC26269ABD71D03847D81120160D2106C2B3D581 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::InternalWait(System.Int32,System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR bool Task_InternalWait_m7F1436A365C066C8D9BDEB6740118206B0EFAD45 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, int32_t ___millisecondsTimeout0, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken1, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::NotifyDebuggerOfWaitCompletionIfNecessary()
extern "C" IL2CPP_METHOD_ATTR bool Task_NotifyDebuggerOfWaitCompletionIfNecessary_m71ACB838EB1988C1436F99C7EB0C819D9F025E2A (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsRanToCompletion()
extern "C" IL2CPP_METHOD_ATTR bool Task_get_IsRanToCompletion_mCCFB04975336938D365F65C71C75A38CFE3721BC (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::ThrowIfExceptional(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Task_ThrowIfExceptional_m57A30F74DDD3039C2EB41FA235A897626CE23A37 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, bool ___includeTaskCanceledExceptions0, const RuntimeMethod* method);
// System.Threading.Tasks.Task/ContingentProperties System.Threading.Tasks.Task::EnsureContingentPropertiesInitialized(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * Task_EnsureContingentPropertiesInitialized_mFEF35F7CCA43B6FC6843167E62779F6C09100475 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, bool ___needsProtection0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::AddException(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Task_AddException_m07648B13C5D6B6517EEC4C84D5C022965ED1AE54 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, RuntimeObject * ___exceptionObject0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::Finish(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Task_Finish_m3CBED2C27D7A1E20A9D2A659D4DEA38FCC47DF8F (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, bool ___bUserDelegateExecuted0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::RecordInternalCancellationRequest(System.Threading.CancellationToken,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Task_RecordInternalCancellationRequest_m013F01E4EAD86112C78A242191F3A3887F0A15BB (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___tokenToRecord0, RuntimeObject * ___cancellationException1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::CancellationCleanupLogic()
extern "C" IL2CPP_METHOD_ATTR void Task_CancellationCleanupLogic_m85636A9F2412CDC73F9CFC7CEB87A3C48ECF6BB2 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::.ctor(System.Threading.Tasks.Task`1<TResult>)
inline void TaskAwaiter_1__ctor_m965BA6A8F352B8C6133D6AAEBC60B7767AFBCCB0 (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * p0, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 *, Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *, const RuntimeMethod*))TaskAwaiter_1__ctor_m965BA6A8F352B8C6133D6AAEBC60B7767AFBCCB0_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
inline void ConfiguredTaskAwaitable_1__ctor_mB82ADF237AE2CA3076F32A86D153EBD7B339E3B7 (ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8 * __this, Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * p0, bool p1, const RuntimeMethod* method)
{
	((  void (*) (ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8 *, Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *, bool, const RuntimeMethod*))ConfiguredTaskAwaitable_1__ctor_mB82ADF237AE2CA3076F32A86D153EBD7B339E3B7_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Threading.Tasks.Task`1<TResult>)
inline void TaskAwaiter_1__ctor_mEC801EB8DC0BEA0BA3D3EBB76982C94FA66621F1 (TaskAwaiter_1_t2A96C6E5A8159F39BE46A120CE0712DCA38C4BCE * __this, Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * p0, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t2A96C6E5A8159F39BE46A120CE0712DCA38C4BCE *, Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *, const RuntimeMethod*))TaskAwaiter_1__ctor_mEC801EB8DC0BEA0BA3D3EBB76982C94FA66621F1_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
inline void ConfiguredTaskAwaitable_1__ctor_mAD28136B3EBB7A59923B02CD31DE0E0DB4B69FA7 (ConfiguredTaskAwaitable_1_tBF6C7E1E5DE2AF3654C5691FB3AF9811B3D076C3 * __this, Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * p0, bool p1, const RuntimeMethod* method)
{
	((  void (*) (ConfiguredTaskAwaitable_1_tBF6C7E1E5DE2AF3654C5691FB3AF9811B3D076C3 *, Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *, bool, const RuntimeMethod*))ConfiguredTaskAwaitable_1__ctor_mAD28136B3EBB7A59923B02CD31DE0E0DB4B69FA7_gshared)(__this, p0, p1, method);
}
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String SR::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* SR_Format_mCDBB594267CC224AB2A69540BBA598151F0642C7 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Int32 System.Tuple::CombineHashCodes(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_CombineHashCodes_m45A9FAE45051A42186BE7E768E8482DFC17730E1 (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65 (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Int32 System.Tuple::CombineHashCodes(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_CombineHashCodes_m96643FBF95312DDB35FAE7A6DF72514EBAA8CF12 (int32_t ___h10, int32_t ___h21, int32_t ___h32, const RuntimeMethod* method);
// System.Int32 System.Tuple::CombineHashCodes(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_CombineHashCodes_mEAEECB23FE2646E87123BA8A9D39AE003E8540B9 (int32_t ___h10, int32_t ___h21, int32_t ___h32, int32_t ___h43, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`2<System.Int32,System.Boolean>::Equals(System.ValueTuple`2<T1,T2>)
inline bool ValueTuple_2_Equals_mFB1DF702E0F7701ACA642584D932529CD7B5636E (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  p0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *, ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 , const RuntimeMethod*))ValueTuple_2_Equals_mFB1DF702E0F7701ACA642584D932529CD7B5636E_gshared)(__this, p0, method);
}
// System.Boolean System.ValueTuple`2<System.Int32,System.Boolean>::Equals(System.Object)
inline bool ValueTuple_2_Equals_m4CDA97E2CE07B05ACBFEE7773F1290ADBAD5D69D (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_2_Equals_m4CDA97E2CE07B05ACBFEE7773F1290ADBAD5D69D_gshared)(__this, ___obj0, method);
}
// System.Boolean System.ValueTuple`2<System.Int32,System.Boolean>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
inline bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_mCEA5B5B92AA3543CFDC812368AA11D9D023F167A (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_Equals_mCEA5B5B92AA3543CFDC812368AA11D9D023F167A_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple`2<System.Int32,System.Boolean>::CompareTo(System.ValueTuple`2<T1,T2>)
inline int32_t ValueTuple_2_CompareTo_m1181B317CF2CE4BA034B5B13111D43AF11681BE7 (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *, ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 , const RuntimeMethod*))ValueTuple_2_CompareTo_m1181B317CF2CE4BA034B5B13111D43AF11681BE7_gshared)(__this, p0, method);
}
// System.Int32 System.ValueTuple`2<System.Int32,System.Boolean>::System.IComparable.CompareTo(System.Object)
inline int32_t ValueTuple_2_System_IComparable_CompareTo_m38D278F852F918B696F44604D70FEC23FE286A72 (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_2_System_IComparable_CompareTo_m38D278F852F918B696F44604D70FEC23FE286A72_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`2<System.Int32,System.Boolean>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
inline int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m9E2EC3FF01327CD456734C77156EFF94D04A0EDA (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m9E2EC3FF01327CD456734C77156EFF94D04A0EDA_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.Int32::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A (int32_t* __this, const RuntimeMethod* method);
// System.Int32 System.Boolean::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737 (bool* __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m43A0AF2B2A3E284D995D8D8FC386D13D19A3F5CC (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Int32,System.Boolean>::GetHashCode()
inline int32_t ValueTuple_2_GetHashCode_m39C814C5764887C0F26D42D593C9D678AA9AAA34 (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *, const RuntimeMethod*))ValueTuple_2_GetHashCode_m39C814C5764887C0F26D42D593C9D678AA9AAA34_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`2<System.Int32,System.Boolean>::GetHashCodeCore(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_2_GetHashCodeCore_mC913A22788B06DF404EF3DAA4135CF5AFF7503A6 (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_GetHashCodeCore_mC913A22788B06DF404EF3DAA4135CF5AFF7503A6_gshared)(__this, p0, method);
}
// System.Int32 System.ValueTuple`2<System.Int32,System.Boolean>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m08BBF291B605FCA050B18EF44C0C21F39A017652 (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m08BBF291B605FCA050B18EF44C0C21F39A017652_gshared)(__this, ___comparer0, method);
}
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301 (bool* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values0, const RuntimeMethod* method);
// System.String System.ValueTuple`2<System.Int32,System.Boolean>::ToString()
inline String_t* ValueTuple_2_ToString_m8FD918EEFE0B893C5120E66DD569D45C6E98FC4D (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *, const RuntimeMethod*))ValueTuple_2_ToString_m8FD918EEFE0B893C5120E66DD569D45C6E98FC4D_gshared)(__this, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::Equals(System.ValueTuple`2<T1,T2>)
inline bool ValueTuple_2_Equals_m00845AED513964CDD8E7197537A964BF771E9B7C (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  p0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *, ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE , const RuntimeMethod*))ValueTuple_2_Equals_m00845AED513964CDD8E7197537A964BF771E9B7C_gshared)(__this, p0, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::Equals(System.Object)
inline bool ValueTuple_2_Equals_m3F05460F260C95C8D053F83D32486CF09837AC0D (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *, RuntimeObject *, const RuntimeMethod*))ValueTuple_2_Equals_m3F05460F260C95C8D053F83D32486CF09837AC0D_gshared)(__this, ___obj0, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
inline bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4F7F0770AB8C9A15CBE5B826DED2E5A1C2D93890 (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4F7F0770AB8C9A15CBE5B826DED2E5A1C2D93890_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::CompareTo(System.ValueTuple`2<T1,T2>)
inline int32_t ValueTuple_2_CompareTo_m7D62DBACBCD7D6C53E8C86C1CC1863AF4C7D3253 (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *, ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE , const RuntimeMethod*))ValueTuple_2_CompareTo_m7D62DBACBCD7D6C53E8C86C1CC1863AF4C7D3253_gshared)(__this, p0, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
inline int32_t ValueTuple_2_System_IComparable_CompareTo_mB5E4B8A3A387346D734860B30F983C53049E6623 (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *, RuntimeObject *, const RuntimeMethod*))ValueTuple_2_System_IComparable_CompareTo_mB5E4B8A3A387346D734860B30F983C53049E6623_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
inline int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mE82D0EABA63B5FA33C3C81C53A410C3833C3DF99 (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mE82D0EABA63B5FA33C3C81C53A410C3833C3DF99_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::GetHashCode()
inline int32_t ValueTuple_2_GetHashCode_mDBC9EA91689835ABBD95A1E57DC6373D343947E2 (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *, const RuntimeMethod*))ValueTuple_2_GetHashCode_mDBC9EA91689835ABBD95A1E57DC6373D343947E2_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_2_GetHashCodeCore_mAF7F89E5DC73E33AF443FF3F96962F500DA9DAA9 (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_GetHashCodeCore_mAF7F89E5DC73E33AF443FF3F96962F500DA9DAA9_gshared)(__this, p0, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m663F6586855302E7608620F1789CFC7A019439BB (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m663F6586855302E7608620F1789CFC7A019439BB_gshared)(__this, ___comparer0, method);
}
// System.String System.ValueTuple`2<System.Object,System.Object>::ToString()
inline String_t* ValueTuple_2_ToString_mB9C389C92D5BDE41FF6641BADDB038D1F8A3AEE6 (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *, const RuntimeMethod*))ValueTuple_2_ToString_mB9C389C92D5BDE41FF6641BADDB038D1F8A3AEE6_gshared)(__this, method);
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5 (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * __this, RuntimeObject * ___target0, MethodInfo_t * ___function1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * NetFxCoreExtensions_CreateDelegate_m8FD387039F907982CB716046CB4501160B16D381 (MethodInfo_t * ___self0, Type_t * ___delegateType1, RuntimeObject * ___target2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58 (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern "C" IL2CPP_METHOD_ATTR bool BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091 (Delegate_t * ___delegate0, const RuntimeMethod* method);
// System.Object System.Delegate::get_Target()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2 (Delegate_t * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m648EA8E13DAFFCBF92AA46F62AF5124386A905A0 (Delegate_t * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595 (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern "C" IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075 (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5 (RuntimeObject * ___obj0, String_t* ___functionName1, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___argumentTypes2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
extern "C" IL2CPP_METHOD_ATTR List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Events.InvokableCall::Invoke()
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394 (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9 (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Task_1__ctor_m6DAC1732E56024E32076DEE1A3863F17635A8944_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_m6DAC1732E56024E32076DEE1A3863F17635A8944_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task__ctor_m8E1D8C0B00CDBC75BE82736DC129396F79B7A84D((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor(TResult)
extern "C" IL2CPP_METHOD_ATTR void Task_1__ctor_m853EDDB7B8743654CF53E235439CD8E404BF9DF7_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_m853EDDB7B8743654CF53E235439CD8E404BF9DF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB ));
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_0 = V_0;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task__ctor_m61EE08D52F4C76A4D8E44B826F02724920D3425B((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (bool)0, (int32_t)0, (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_0, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___result0;
		__this->set_m_result_22(L_1);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor(System.Boolean,TResult,System.Threading.Tasks.TaskCreationOptions,System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR void Task_1__ctor_m3418D05E6E80990C18478A5EC60290D71B493EB3_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, bool ___canceled0, RuntimeObject * ___result1, int32_t ___creationOptions2, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___ct3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_m3418D05E6E80990C18478A5EC60290D71B493EB3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___canceled0;
		int32_t L_1 = ___creationOptions2;
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_2 = ___ct3;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task__ctor_m61EE08D52F4C76A4D8E44B826F02724920D3425B((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (bool)L_0, (int32_t)L_1, (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_2, /*hidden argument*/NULL);
		bool L_3 = ___canceled0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_4 = ___result1;
		__this->set_m_result_22(L_4);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor(System.Func`2<System.Object,TResult>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions)
extern "C" IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Task_1__ctor_m3533BD867272C008F003BC8B763A0803A4C77C47_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ___function0, RuntimeObject * ___state1, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken2, int32_t ___creationOptions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_m3533BD867272C008F003BC8B763A0803A4C77C47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * L_0 = ___function0;
		RuntimeObject * L_1 = ___state1;
		int32_t L_2 = ___creationOptions3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_3 = Task_InternalCurrentIfAttached_mA6A2C11F69612C4A960BC1FC6BD4E4D181D26A3B((int32_t)L_2, /*hidden argument*/NULL);
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_4 = ___cancellationToken2;
		int32_t L_5 = ___creationOptions3;
		NullCheck((Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *)__this);
		((  void (*) (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *, Delegate_t *, RuntimeObject *, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB , int32_t, int32_t, TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)L_3, (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_4, (int32_t)L_5, (int32_t)0, (TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (int32_t)1;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_PossiblyCaptureContext_m0DB8D1ADD84B044BEBC0A692E45577D2B7ADFDA8((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor(System.Func`1<TResult>,System.Threading.Tasks.Task,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.Tasks.TaskScheduler,System.Threading.StackCrawlMarkU26)
extern "C" IL2CPP_METHOD_ATTR void Task_1__ctor_mD68EB9EEC6D405CDAC2E1DDE3B2E157876D931A3_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * ___valueSelector0, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___parent1, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken2, int32_t ___creationOptions3, int32_t ___internalOptions4, TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___scheduler5, int32_t* ___stackMark6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_mD68EB9EEC6D405CDAC2E1DDE3B2E157876D931A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * L_0 = ___valueSelector0;
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_1 = ___parent1;
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_2 = ___cancellationToken2;
		int32_t L_3 = ___creationOptions3;
		int32_t L_4 = ___internalOptions4;
		TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * L_5 = ___scheduler5;
		NullCheck((Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *)__this);
		((  void (*) (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *, Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 *, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB , int32_t, int32_t, TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *)__this, (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 *)L_0, (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)L_1, (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_2, (int32_t)L_3, (int32_t)L_4, (TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		int32_t* L_6 = ___stackMark6;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_PossiblyCaptureContext_m0DB8D1ADD84B044BEBC0A692E45577D2B7ADFDA8((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (int32_t*)(int32_t*)L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor(System.Func`1<TResult>,System.Threading.Tasks.Task,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.Tasks.TaskScheduler)
extern "C" IL2CPP_METHOD_ATTR void Task_1__ctor_mE073C298840D69BB66B6D85DD376692298625414_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * ___valueSelector0, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___parent1, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken2, int32_t ___creationOptions3, int32_t ___internalOptions4, TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___scheduler5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_mE073C298840D69BB66B6D85DD376692298625414_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * L_0 = ___valueSelector0;
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_1 = ___parent1;
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_2 = ___cancellationToken2;
		int32_t L_3 = ___creationOptions3;
		int32_t L_4 = ___internalOptions4;
		TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * L_5 = ___scheduler5;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task__ctor_m0769EBAC32FC56E43AA3EA4697369AD1C68508CC((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (Delegate_t *)L_0, (RuntimeObject *)NULL, (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)L_1, (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_2, (int32_t)L_3, (int32_t)L_4, (TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 *)L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___internalOptions4;
		if (!((int32_t)((int32_t)L_6&(int32_t)((int32_t)2048))))
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_7 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9((String_t*)_stringLiteralB074C920DAB17C140FA8E906179F603DBCE3EC79, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_8 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_8, (String_t*)_stringLiteral699B142A794903652E588B3D75019329F77A9209, (String_t*)L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, Task_1__ctor_mE073C298840D69BB66B6D85DD376692298625414_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor(System.Delegate,System.Object,System.Threading.Tasks.Task,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.Tasks.TaskScheduler)
extern "C" IL2CPP_METHOD_ATTR void Task_1__ctor_m294345A83D9CAC9B7198CA662BA64B776B5A8B23_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, Delegate_t * ___valueSelector0, RuntimeObject * ___state1, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___parent2, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken3, int32_t ___creationOptions4, int32_t ___internalOptions5, TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___scheduler6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_m294345A83D9CAC9B7198CA662BA64B776B5A8B23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_t * L_0 = ___valueSelector0;
		RuntimeObject * L_1 = ___state1;
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_2 = ___parent2;
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_3 = ___cancellationToken3;
		int32_t L_4 = ___creationOptions4;
		int32_t L_5 = ___internalOptions5;
		TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * L_6 = ___scheduler6;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task__ctor_m0769EBAC32FC56E43AA3EA4697369AD1C68508CC((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)L_2, (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_3, (int32_t)L_4, (int32_t)L_5, (TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 *)L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___internalOptions5;
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)2048))))
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_8 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9((String_t*)_stringLiteralB074C920DAB17C140FA8E906179F603DBCE3EC79, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_9 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_9, (String_t*)_stringLiteral699B142A794903652E588B3D75019329F77A9209, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, Task_1__ctor_m294345A83D9CAC9B7198CA662BA64B776B5A8B23_RuntimeMethod_var);
	}

IL_0030:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task`1<System.Object>::StartNew(System.Threading.Tasks.Task,System.Func`1<TResult>,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.Tasks.TaskScheduler,System.Threading.StackCrawlMarkU26)
extern "C" IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * Task_1_StartNew_m46510EA62A4E2F3AA6D8F5118AE02697E0DE59A6_gshared (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___parent0, Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * ___function1, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken2, int32_t ___creationOptions3, int32_t ___internalOptions4, TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___scheduler5, int32_t* ___stackMark6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1_StartNew_m46510EA62A4E2F3AA6D8F5118AE02697E0DE59A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * L_0 = ___function1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteralC218E39EFA2E1AAE69F39D2054528369CE1E1F46, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Task_1_StartNew_m46510EA62A4E2F3AA6D8F5118AE02697E0DE59A6_RuntimeMethod_var);
	}

IL_000e:
	{
		TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * L_2 = ___scheduler5;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, (String_t*)_stringLiteral142F817C3EC0586DE0F960C1C0483043B61A0D06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Task_1_StartNew_m46510EA62A4E2F3AA6D8F5118AE02697E0DE59A6_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___internalOptions4;
		if (!((int32_t)((int32_t)L_4&(int32_t)((int32_t)2048))))
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_5 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9((String_t*)_stringLiteralB074C920DAB17C140FA8E906179F603DBCE3EC79, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_6 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_6, (String_t*)_stringLiteral699B142A794903652E588B3D75019329F77A9209, (String_t*)L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, Task_1_StartNew_m46510EA62A4E2F3AA6D8F5118AE02697E0DE59A6_RuntimeMethod_var);
	}

IL_003c:
	{
		Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * L_7 = ___function1;
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_8 = ___parent0;
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_9 = ___cancellationToken2;
		int32_t L_10 = ___creationOptions3;
		int32_t L_11 = ___internalOptions4;
		TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * L_12 = ___scheduler5;
		int32_t* L_13 = ___stackMark6;
		Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * L_14 = (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		((  void (*) (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *, Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 *, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB , int32_t, int32_t, TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)(L_14, (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 *)L_7, (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)L_8, (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_9, (int32_t)L_10, (int32_t)((int32_t)((int32_t)L_11|(int32_t)((int32_t)8192))), (TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 *)L_12, (int32_t*)(int32_t*)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * L_15 = (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *)L_14;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)L_15);
		Task_ScheduleAndStart_m7A3334C89BD4B47370D0A3CAE575EA54CCA01AEF((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)L_15, (bool)0, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(TResult)
extern "C" IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m4FE4E07EBB0BA224341A4946FE2C4A813BD8AF64_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * V_0 = NULL;
	{
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		bool L_0 = Task_get_IsCompleted_mA675F47CE1DBD1948BDC9215DCAE93F07FC32E19((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		bool L_1 = Task_AtomicStateUpdate_m8453A8B2D404F085626BC0BCFCB2593AA373F530((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject * L_2 = ___result0;
		__this->set_m_result_22(L_2);
		int32_t* L_3 = (int32_t*)((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this)->get_address_of_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		int32_t L_4 = (int32_t)((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this)->get_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		Interlocked_Exchange_mD5CC61AF0F002355912FAAF84F26BE93639B5FD5((int32_t*)(int32_t*)L_3, (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)16777216))), /*hidden argument*/NULL);
		ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * L_5 = (ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 *)((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this)->get_m_contingentProperties_15();
		il2cpp_codegen_memory_barrier();
		V_0 = (ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 *)L_5;
		ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * L_6 = V_0;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * L_7 = V_0;
		NullCheck((ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 *)L_7);
		ContingentProperties_SetCompleted_m3CB1941CBE9F1D241A2AFA4E3F739C98B493E6DE((ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 *)L_7, /*hidden argument*/NULL);
	}

IL_004f:
	{
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_FinishStageThree_m543744E8C5DFC94B2F2898998663C85617999E32((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0057:
	{
		return (bool)0;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::DangerousSetResult(TResult)
extern "C" IL2CPP_METHOD_ATTR void Task_1_DangerousSetResult_mD57C7C219C2E3AEA026606D5656A3673DBB24C46_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	{
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_0 = (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this)->get_m_parent_8();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject * L_1 = ___result0;
		NullCheck((Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *)__this);
		((  bool (*) (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}

IL_0011:
	{
		RuntimeObject * L_2 = ___result0;
		__this->set_m_result_22(L_2);
		int32_t L_3 = (int32_t)((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this)->get_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memory_barrier();
		((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this)->set_m_stateFlags_9(((int32_t)((int32_t)L_3|(int32_t)((int32_t)16777216))));
		return;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_Result_m653E95E70604B69D29BC9679AA4588ED82AD01D7_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		bool L_0 = Task_get_IsWaitNotificationEnabledOrNotRanToCompletion_mEC26269ABD71D03847D81120160D2106C2B3D581((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_result_22();
		return L_1;
	}

IL_000f:
	{
		NullCheck((Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *)__this);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return L_2;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Object>::get_ResultOnSuccess()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_ResultOnSuccess_m3419E1D24207ACE1FF958CBC46316229F42F10E3_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_result_22();
		return L_0;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Object>::GetResultCore(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Task_1_GetResultCore_m8EBE0B8753DCE615F51B03FDC34AF2A84635DD32_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, bool ___waitCompletionNotification0, const RuntimeMethod* method)
{
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		bool L_0 = Task_get_IsCompleted_mA675F47CE1DBD1948BDC9215DCAE93F07FC32E19((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB ));
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_1 = V_0;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_InternalWait_m7F1436A365C066C8D9BDEB6740118206B0EFAD45((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (int32_t)(-1), (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_1, /*hidden argument*/NULL);
	}

IL_0019:
	{
		bool L_2 = ___waitCompletionNotification0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_NotifyDebuggerOfWaitCompletionIfNecessary_m71ACB838EB1988C1436F99C7EB0C819D9F025E2A((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		bool L_3 = Task_get_IsRanToCompletion_mCCFB04975336938D365F65C71C75A38CFE3721BC((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_ThrowIfExceptional_m57A30F74DDD3039C2EB41FA235A897626CE23A37((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0032:
	{
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_result_22();
		return L_4;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Task_1_TrySetException_m251DD9D833C7000B3F41D2F4708CA419C64FED94_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, RuntimeObject * ___exceptionObject0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_EnsureContingentPropertiesInitialized_mFEF35F7CCA43B6FC6843167E62779F6C09100475((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (bool)1, /*hidden argument*/NULL);
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		bool L_0 = Task_AtomicStateUpdate_m8453A8B2D404F085626BC0BCFCB2593AA373F530((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject * L_1 = ___exceptionObject0;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_AddException_m07648B13C5D6B6517EEC4C84D5C022965ED1AE54((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_Finish_m3CBED2C27D7A1E20A9D2A659D4DEA38FCC47DF8F((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (bool)0, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_002c:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled(System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_m1B45215C2A32476781C0D2F7C5A50ED7EC8A4B33_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___tokenToRecord0, const RuntimeMethod* method)
{
	{
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_0 = ___tokenToRecord0;
		NullCheck((Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *)__this);
		bool L_1 = ((  bool (*) (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *)__this, (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_0, (RuntimeObject *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return L_1;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled(System.Threading.CancellationToken,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_m734D6894721B115F2DB33F0343824A622226014A_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___tokenToRecord0, RuntimeObject * ___cancellationException1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		bool L_0 = Task_AtomicStateUpdate_m8453A8B2D404F085626BC0BCFCB2593AA373F530((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_1 = ___tokenToRecord0;
		RuntimeObject * L_2 = ___cancellationException1;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_RecordInternalCancellationRequest_m013F01E4EAD86112C78A242191F3A3887F0A15BB((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_1, (RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_CancellationCleanupLogic_m85636A9F2412CDC73F9CFC7CEB87A3C48ECF6BB2((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_0024:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::InnerInvoke()
extern "C" IL2CPP_METHOD_ATTR void Task_1_InnerInvoke_m555C0E2791E25E4AD24D7486CB08C1C6C7B2C95B_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, const RuntimeMethod* method)
{
	Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * V_0 = NULL;
	Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * V_1 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this)->get_m_action_5();
		V_0 = (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 *)((Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7)));
		Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * L_2 = V_0;
		NullCheck((Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		__this->set_m_result_22(L_3);
		return;
	}

IL_001c:
	{
		RuntimeObject * L_4 = (RuntimeObject *)((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this)->get_m_action_5();
		V_1 = (Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 *)((Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9)));
		Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * L_6 = V_1;
		RuntimeObject * L_7 = (RuntimeObject *)((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this)->get_m_stateObject_6();
		NullCheck((Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 *)L_6);
		RuntimeObject * L_8 = ((  RuntimeObject * (*) (Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		__this->set_m_result_22(L_8);
		return;
	}

IL_003e:
	{
		return;
	}
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
extern "C" IL2CPP_METHOD_ATTR TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977  Task_1_GetAwaiter_m9C50610C6F05C1DA9BFA67201CB570F1DE040817_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, const RuntimeMethod* method)
{
	{
		TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977  L_0;
		memset(&L_0, 0, sizeof(L_0));
		TaskAwaiter_1__ctor_m965BA6A8F352B8C6133D6AAEBC60B7767AFBCCB0((&L_0), (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return L_0;
	}
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8  Task_1_ConfigureAwait_m60DD864D9488EACBA6C087E87E448797C1C8B76B_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___continueOnCapturedContext0;
		ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8  L_1;
		memset(&L_1, 0, sizeof(L_1));
		ConfiguredTaskAwaitable_1__ctor_mB82ADF237AE2CA3076F32A86D153EBD7B339E3B7((&L_1), (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return L_1;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Task_1__cctor_m2403A9EF37EF932D4F21DF2D79590ECFEE1BC9F9_gshared (const RuntimeMethod* method)
{
	{
		TaskFactory_1_tA50D9207CAE2C505277DD5F03CBE64700177257C * L_0 = (TaskFactory_1_tA50D9207CAE2C505277DD5F03CBE64700177257C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		((  void (*) (TaskFactory_1_tA50D9207CAE2C505277DD5F03CBE64700177257C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		((Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 17)))->set_s_Factory_23(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		U3CU3Ec_t6DA6385CAAB5CFB768B2244E61BDA7A3B499F2E4 * L_1 = ((U3CU3Ec_t6DA6385CAAB5CFB768B2244E61BDA7A3B499F2E4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18)))->get_U3CU3E9_0();
		Func_2_tDAE4310E42C13AE378CDF0371BD31D6BF4E61EBD * L_2 = (Func_2_tDAE4310E42C13AE378CDF0371BD31D6BF4E61EBD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		((  void (*) (Func_2_tDAE4310E42C13AE378CDF0371BD31D6BF4E61EBD *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21)->methodPointer)(L_2, (RuntimeObject *)L_1, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		((Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 17)))->set_TaskWhenAnyCast_24(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Task_1__ctor_mB6BFCB1A119B19A4AE30679E41E1F4EC47797EB4_gshared (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_mB6BFCB1A119B19A4AE30679E41E1F4EC47797EB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task__ctor_m8E1D8C0B00CDBC75BE82736DC129396F79B7A84D((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.ctor(TResult)
extern "C" IL2CPP_METHOD_ATTR void Task_1__ctor_m67769680F7DB97B973008CAE25870C31EF32B3D6_gshared (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * __this, VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_m67769680F7DB97B973008CAE25870C31EF32B3D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB ));
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_0 = V_0;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task__ctor_m61EE08D52F4C76A4D8E44B826F02724920D3425B((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (bool)0, (int32_t)0, (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_0, /*hidden argument*/NULL);
		VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  L_1 = ___result0;
		__this->set_m_result_22(L_1);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Boolean,TResult,System.Threading.Tasks.TaskCreationOptions,System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR void Task_1__ctor_mF5DBC38A2E1E1FB34392CED5AD220E050985BEE1_gshared (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * __this, bool ___canceled0, VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  ___result1, int32_t ___creationOptions2, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___ct3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_mF5DBC38A2E1E1FB34392CED5AD220E050985BEE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___canceled0;
		int32_t L_1 = ___creationOptions2;
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_2 = ___ct3;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task__ctor_m61EE08D52F4C76A4D8E44B826F02724920D3425B((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (bool)L_0, (int32_t)L_1, (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_2, /*hidden argument*/NULL);
		bool L_3 = ___canceled0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  L_4 = ___result1;
		__this->set_m_result_22(L_4);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Func`2<System.Object,TResult>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions)
extern "C" IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Task_1__ctor_m2749D54DEB57DB6C3380667A6A89A1C42E8B8635_gshared (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * __this, Func_2_t2055ABF714892AC88A9515BF45D469142AE0BA83 * ___function0, RuntimeObject * ___state1, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken2, int32_t ___creationOptions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_m2749D54DEB57DB6C3380667A6A89A1C42E8B8635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Func_2_t2055ABF714892AC88A9515BF45D469142AE0BA83 * L_0 = ___function0;
		RuntimeObject * L_1 = ___state1;
		int32_t L_2 = ___creationOptions3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_3 = Task_InternalCurrentIfAttached_mA6A2C11F69612C4A960BC1FC6BD4E4D181D26A3B((int32_t)L_2, /*hidden argument*/NULL);
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_4 = ___cancellationToken2;
		int32_t L_5 = ___creationOptions3;
		NullCheck((Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *)__this);
		((  void (*) (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *, Delegate_t *, RuntimeObject *, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB , int32_t, int32_t, TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)L_3, (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_4, (int32_t)L_5, (int32_t)0, (TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (int32_t)1;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_PossiblyCaptureContext_m0DB8D1ADD84B044BEBC0A692E45577D2B7ADFDA8((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Func`1<TResult>,System.Threading.Tasks.Task,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.Tasks.TaskScheduler,System.Threading.StackCrawlMarkU26)
extern "C" IL2CPP_METHOD_ATTR void Task_1__ctor_m528B09E23B751134A17B56BEE3B345D54893657C_gshared (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * __this, Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9 * ___valueSelector0, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___parent1, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken2, int32_t ___creationOptions3, int32_t ___internalOptions4, TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___scheduler5, int32_t* ___stackMark6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_m528B09E23B751134A17B56BEE3B345D54893657C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9 * L_0 = ___valueSelector0;
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_1 = ___parent1;
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_2 = ___cancellationToken2;
		int32_t L_3 = ___creationOptions3;
		int32_t L_4 = ___internalOptions4;
		TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * L_5 = ___scheduler5;
		NullCheck((Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *)__this);
		((  void (*) (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *, Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9 *, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB , int32_t, int32_t, TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *)__this, (Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9 *)L_0, (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)L_1, (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_2, (int32_t)L_3, (int32_t)L_4, (TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		int32_t* L_6 = ___stackMark6;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_PossiblyCaptureContext_m0DB8D1ADD84B044BEBC0A692E45577D2B7ADFDA8((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (int32_t*)(int32_t*)L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Func`1<TResult>,System.Threading.Tasks.Task,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.Tasks.TaskScheduler)
extern "C" IL2CPP_METHOD_ATTR void Task_1__ctor_mC9E6249923CC0B54FC33C426D648D5CBEEFAB5EA_gshared (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * __this, Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9 * ___valueSelector0, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___parent1, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken2, int32_t ___creationOptions3, int32_t ___internalOptions4, TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___scheduler5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_mC9E6249923CC0B54FC33C426D648D5CBEEFAB5EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9 * L_0 = ___valueSelector0;
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_1 = ___parent1;
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_2 = ___cancellationToken2;
		int32_t L_3 = ___creationOptions3;
		int32_t L_4 = ___internalOptions4;
		TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * L_5 = ___scheduler5;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task__ctor_m0769EBAC32FC56E43AA3EA4697369AD1C68508CC((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (Delegate_t *)L_0, (RuntimeObject *)NULL, (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)L_1, (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_2, (int32_t)L_3, (int32_t)L_4, (TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 *)L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___internalOptions4;
		if (!((int32_t)((int32_t)L_6&(int32_t)((int32_t)2048))))
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_7 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9((String_t*)_stringLiteralB074C920DAB17C140FA8E906179F603DBCE3EC79, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_8 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_8, (String_t*)_stringLiteral699B142A794903652E588B3D75019329F77A9209, (String_t*)L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, Task_1__ctor_mC9E6249923CC0B54FC33C426D648D5CBEEFAB5EA_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Delegate,System.Object,System.Threading.Tasks.Task,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.Tasks.TaskScheduler)
extern "C" IL2CPP_METHOD_ATTR void Task_1__ctor_mBEFEA339A56C64CA5FFF1E01DF78A638DF46B88F_gshared (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * __this, Delegate_t * ___valueSelector0, RuntimeObject * ___state1, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___parent2, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken3, int32_t ___creationOptions4, int32_t ___internalOptions5, TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___scheduler6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_mBEFEA339A56C64CA5FFF1E01DF78A638DF46B88F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_t * L_0 = ___valueSelector0;
		RuntimeObject * L_1 = ___state1;
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_2 = ___parent2;
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_3 = ___cancellationToken3;
		int32_t L_4 = ___creationOptions4;
		int32_t L_5 = ___internalOptions5;
		TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * L_6 = ___scheduler6;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task__ctor_m0769EBAC32FC56E43AA3EA4697369AD1C68508CC((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)L_2, (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_3, (int32_t)L_4, (int32_t)L_5, (TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 *)L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___internalOptions5;
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)2048))))
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_8 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9((String_t*)_stringLiteralB074C920DAB17C140FA8E906179F603DBCE3EC79, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_9 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_9, (String_t*)_stringLiteral699B142A794903652E588B3D75019329F77A9209, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, Task_1__ctor_mBEFEA339A56C64CA5FFF1E01DF78A638DF46B88F_RuntimeMethod_var);
	}

IL_0030:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::StartNew(System.Threading.Tasks.Task,System.Func`1<TResult>,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.Tasks.TaskScheduler,System.Threading.StackCrawlMarkU26)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * Task_1_StartNew_m49456826C31982E9488BCC3E6A9E150BF86A4DE0_gshared (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___parent0, Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9 * ___function1, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken2, int32_t ___creationOptions3, int32_t ___internalOptions4, TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___scheduler5, int32_t* ___stackMark6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1_StartNew_m49456826C31982E9488BCC3E6A9E150BF86A4DE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9 * L_0 = ___function1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteralC218E39EFA2E1AAE69F39D2054528369CE1E1F46, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Task_1_StartNew_m49456826C31982E9488BCC3E6A9E150BF86A4DE0_RuntimeMethod_var);
	}

IL_000e:
	{
		TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * L_2 = ___scheduler5;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, (String_t*)_stringLiteral142F817C3EC0586DE0F960C1C0483043B61A0D06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Task_1_StartNew_m49456826C31982E9488BCC3E6A9E150BF86A4DE0_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___internalOptions4;
		if (!((int32_t)((int32_t)L_4&(int32_t)((int32_t)2048))))
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_5 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9((String_t*)_stringLiteralB074C920DAB17C140FA8E906179F603DBCE3EC79, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_6 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_6, (String_t*)_stringLiteral699B142A794903652E588B3D75019329F77A9209, (String_t*)L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, Task_1_StartNew_m49456826C31982E9488BCC3E6A9E150BF86A4DE0_RuntimeMethod_var);
	}

IL_003c:
	{
		Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9 * L_7 = ___function1;
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_8 = ___parent0;
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_9 = ___cancellationToken2;
		int32_t L_10 = ___creationOptions3;
		int32_t L_11 = ___internalOptions4;
		TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * L_12 = ___scheduler5;
		int32_t* L_13 = ___stackMark6;
		Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * L_14 = (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		((  void (*) (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *, Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9 *, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB , int32_t, int32_t, TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)(L_14, (Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9 *)L_7, (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)L_8, (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_9, (int32_t)L_10, (int32_t)((int32_t)((int32_t)L_11|(int32_t)((int32_t)8192))), (TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 *)L_12, (int32_t*)(int32_t*)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * L_15 = (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *)L_14;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)L_15);
		Task_ScheduleAndStart_m7A3334C89BD4B47370D0A3CAE575EA54CCA01AEF((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)L_15, (bool)0, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::TrySetResult(TResult)
extern "C" IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_mAD80B9B3A23B94A6798C589669A06F1D25D46543_gshared (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * __this, VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  ___result0, const RuntimeMethod* method)
{
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * V_0 = NULL;
	{
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		bool L_0 = Task_get_IsCompleted_mA675F47CE1DBD1948BDC9215DCAE93F07FC32E19((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		bool L_1 = Task_AtomicStateUpdate_m8453A8B2D404F085626BC0BCFCB2593AA373F530((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  L_2 = ___result0;
		__this->set_m_result_22(L_2);
		int32_t* L_3 = (int32_t*)((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this)->get_address_of_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		int32_t L_4 = (int32_t)((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this)->get_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		Interlocked_Exchange_mD5CC61AF0F002355912FAAF84F26BE93639B5FD5((int32_t*)(int32_t*)L_3, (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)16777216))), /*hidden argument*/NULL);
		ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * L_5 = (ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 *)((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this)->get_m_contingentProperties_15();
		il2cpp_codegen_memory_barrier();
		V_0 = (ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 *)L_5;
		ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * L_6 = V_0;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * L_7 = V_0;
		NullCheck((ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 *)L_7);
		ContingentProperties_SetCompleted_m3CB1941CBE9F1D241A2AFA4E3F739C98B493E6DE((ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 *)L_7, /*hidden argument*/NULL);
	}

IL_004f:
	{
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_FinishStageThree_m543744E8C5DFC94B2F2898998663C85617999E32((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0057:
	{
		return (bool)0;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::DangerousSetResult(TResult)
extern "C" IL2CPP_METHOD_ATTR void Task_1_DangerousSetResult_m5C58DBC051EE280AD68DB59B778C8EC46810ECF4_gshared (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * __this, VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  ___result0, const RuntimeMethod* method)
{
	{
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_0 = (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this)->get_m_parent_8();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  L_1 = ___result0;
		NullCheck((Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *)__this);
		((  bool (*) (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *, VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *)__this, (VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}

IL_0011:
	{
		VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  L_2 = ___result0;
		__this->set_m_result_22(L_2);
		int32_t L_3 = (int32_t)((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this)->get_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memory_barrier();
		((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this)->set_m_stateFlags_9(((int32_t)((int32_t)L_3|(int32_t)((int32_t)16777216))));
		return;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::get_Result()
extern "C" IL2CPP_METHOD_ATTR VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  Task_1_get_Result_m566E38318DAD419ACE27B20A522F4FD10953A59C_gshared (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		bool L_0 = Task_get_IsWaitNotificationEnabledOrNotRanToCompletion_mEC26269ABD71D03847D81120160D2106C2B3D581((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  L_1 = (VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40 )__this->get_m_result_22();
		return L_1;
	}

IL_000f:
	{
		NullCheck((Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *)__this);
		VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  L_2 = ((  VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  (*) (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return L_2;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::get_ResultOnSuccess()
extern "C" IL2CPP_METHOD_ATTR VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  Task_1_get_ResultOnSuccess_mB007DB8ACCC823AD4E13931D2D0CD6DBD46AB94F_gshared (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * __this, const RuntimeMethod* method)
{
	{
		VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  L_0 = (VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40 )__this->get_m_result_22();
		return L_0;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::GetResultCore(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  Task_1_GetResultCore_m0B7C8BF1D750B7DB47E5506FBBB0BE13DA76499C_gshared (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * __this, bool ___waitCompletionNotification0, const RuntimeMethod* method)
{
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		bool L_0 = Task_get_IsCompleted_mA675F47CE1DBD1948BDC9215DCAE93F07FC32E19((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB ));
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_1 = V_0;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_InternalWait_m7F1436A365C066C8D9BDEB6740118206B0EFAD45((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (int32_t)(-1), (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_1, /*hidden argument*/NULL);
	}

IL_0019:
	{
		bool L_2 = ___waitCompletionNotification0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_NotifyDebuggerOfWaitCompletionIfNecessary_m71ACB838EB1988C1436F99C7EB0C819D9F025E2A((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		bool L_3 = Task_get_IsRanToCompletion_mCCFB04975336938D365F65C71C75A38CFE3721BC((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_ThrowIfExceptional_m57A30F74DDD3039C2EB41FA235A897626CE23A37((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0032:
	{
		VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  L_4 = (VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40 )__this->get_m_result_22();
		return L_4;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::TrySetException(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Task_1_TrySetException_m66D51B5CBCD6591285663AA964813856568E2C4D_gshared (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * __this, RuntimeObject * ___exceptionObject0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_EnsureContingentPropertiesInitialized_mFEF35F7CCA43B6FC6843167E62779F6C09100475((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (bool)1, /*hidden argument*/NULL);
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		bool L_0 = Task_AtomicStateUpdate_m8453A8B2D404F085626BC0BCFCB2593AA373F530((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject * L_1 = ___exceptionObject0;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_AddException_m07648B13C5D6B6517EEC4C84D5C022965ED1AE54((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_Finish_m3CBED2C27D7A1E20A9D2A659D4DEA38FCC47DF8F((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (bool)0, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_002c:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::TrySetCanceled(System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_mF517585BF4AC77744F212A6F236047C47E7CB45C_gshared (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * __this, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___tokenToRecord0, const RuntimeMethod* method)
{
	{
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_0 = ___tokenToRecord0;
		NullCheck((Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *)__this);
		bool L_1 = ((  bool (*) (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *)__this, (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_0, (RuntimeObject *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return L_1;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::TrySetCanceled(System.Threading.CancellationToken,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_mE69FA929251D7FB9C7F67548C7AAD32EEE43DF57_gshared (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * __this, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___tokenToRecord0, RuntimeObject * ___cancellationException1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		bool L_0 = Task_AtomicStateUpdate_m8453A8B2D404F085626BC0BCFCB2593AA373F530((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_1 = ___tokenToRecord0;
		RuntimeObject * L_2 = ___cancellationException1;
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_RecordInternalCancellationRequest_m013F01E4EAD86112C78A242191F3A3887F0A15BB((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB )L_1, (RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this);
		Task_CancellationCleanupLogic_m85636A9F2412CDC73F9CFC7CEB87A3C48ECF6BB2((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_0024:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::InnerInvoke()
extern "C" IL2CPP_METHOD_ATTR void Task_1_InnerInvoke_m9960832102002DB69424B48041DB82995200E6F9_gshared (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * __this, const RuntimeMethod* method)
{
	Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9 * V_0 = NULL;
	Func_2_t2055ABF714892AC88A9515BF45D469142AE0BA83 * V_1 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this)->get_m_action_5();
		V_0 = (Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9 *)((Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9 *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7)));
		Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9 * L_2 = V_0;
		NullCheck((Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9 *)L_2);
		VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  L_3 = ((  VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  (*) (Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_1_tD7987BBF779AE4E497F3E221E64EB79BCA375FE9 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		__this->set_m_result_22(L_3);
		return;
	}

IL_001c:
	{
		RuntimeObject * L_4 = (RuntimeObject *)((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this)->get_m_action_5();
		V_1 = (Func_2_t2055ABF714892AC88A9515BF45D469142AE0BA83 *)((Func_2_t2055ABF714892AC88A9515BF45D469142AE0BA83 *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9)));
		Func_2_t2055ABF714892AC88A9515BF45D469142AE0BA83 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		Func_2_t2055ABF714892AC88A9515BF45D469142AE0BA83 * L_6 = V_1;
		RuntimeObject * L_7 = (RuntimeObject *)((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *)__this)->get_m_stateObject_6();
		NullCheck((Func_2_t2055ABF714892AC88A9515BF45D469142AE0BA83 *)L_6);
		VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  L_8 = ((  VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  (*) (Func_2_t2055ABF714892AC88A9515BF45D469142AE0BA83 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((Func_2_t2055ABF714892AC88A9515BF45D469142AE0BA83 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		__this->set_m_result_22(L_8);
		return;
	}

IL_003e:
	{
		return;
	}
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::GetAwaiter()
extern "C" IL2CPP_METHOD_ATTR TaskAwaiter_1_t2A96C6E5A8159F39BE46A120CE0712DCA38C4BCE  Task_1_GetAwaiter_m314DE2D2C6F766A99F00FDCC06519EE3DEBE016F_gshared (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * __this, const RuntimeMethod* method)
{
	{
		TaskAwaiter_1_t2A96C6E5A8159F39BE46A120CE0712DCA38C4BCE  L_0;
		memset(&L_0, 0, sizeof(L_0));
		TaskAwaiter_1__ctor_mEC801EB8DC0BEA0BA3D3EBB76982C94FA66621F1((&L_0), (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return L_0;
	}
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::ConfigureAwait(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_tBF6C7E1E5DE2AF3654C5691FB3AF9811B3D076C3  Task_1_ConfigureAwait_m5537A6D995169B9406820A08CDBA929B497CF6A2_gshared (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___continueOnCapturedContext0;
		ConfiguredTaskAwaitable_1_tBF6C7E1E5DE2AF3654C5691FB3AF9811B3D076C3  L_1;
		memset(&L_1, 0, sizeof(L_1));
		ConfiguredTaskAwaitable_1__ctor_mAD28136B3EBB7A59923B02CD31DE0E0DB4B69FA7((&L_1), (Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return L_1;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Task_1__cctor_m73D32CB069C9CFF2319B3FCC948024A342856943_gshared (const RuntimeMethod* method)
{
	{
		TaskFactory_1_t3C0D0DC20C0FC00DE4F8740B351BE642467AB03D * L_0 = (TaskFactory_1_t3C0D0DC20C0FC00DE4F8740B351BE642467AB03D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		((  void (*) (TaskFactory_1_t3C0D0DC20C0FC00DE4F8740B351BE642467AB03D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		((Task_1_t1359D75350E9D976BFA28AD96E417450DE277673_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 17)))->set_s_Factory_23(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		U3CU3Ec_t08F2DBEFC89AC9DC915D17B4BBD89DDA5A459893 * L_1 = ((U3CU3Ec_t08F2DBEFC89AC9DC915D17B4BBD89DDA5A459893_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18)))->get_U3CU3E9_0();
		Func_2_t9FE43757FE22F96D0EA4E7945B6D146812F2671F * L_2 = (Func_2_t9FE43757FE22F96D0EA4E7945B6D146812F2671F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		((  void (*) (Func_2_t9FE43757FE22F96D0EA4E7945B6D146812F2671F *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21)->methodPointer)(L_2, (RuntimeObject *)L_1, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		((Task_1_t1359D75350E9D976BFA28AD96E417450DE277673_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 17)))->set_TaskWhenAnyCast_24(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.ThreadPoolWorkQueue_SparseArray`1<System.Object>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SparseArray_1__ctor_m14F57DABEB0112D1C2DC00D1C734570C06C73DB5_gshared (SparseArray_1_t3343BC28ED7AB6481D2C9C24AC382CCEFD5148F1 * __this, int32_t ___initialSize0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___initialSize0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)L_0);
		il2cpp_codegen_memory_barrier();
		__this->set_m_array_0(L_1);
		return;
	}
}
// T[] System.Threading.ThreadPoolWorkQueue_SparseArray`1<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* SparseArray_1_get_Current_m6715E5ACB39FD5E197A696FF118069BAD185668D_gshared (SparseArray_1_t3343BC28ED7AB6481D2C9C24AC382CCEFD5148F1 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_array_0();
		il2cpp_codegen_memory_barrier();
		return L_0;
	}
}
// System.Int32 System.Threading.ThreadPoolWorkQueue_SparseArray`1<System.Object>::Add(T)
extern "C" IL2CPP_METHOD_ATTR int32_t SparseArray_1_Add_mF691405F72340FFB24B2B053CD36CE49E6F93D7A_gshared (SparseArray_1_t3343BC28ED7AB6481D2C9C24AC382CCEFD5148F1 * __this, RuntimeObject * ___e0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_array_0();
		il2cpp_codegen_memory_barrier();
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		V_2 = (bool)0;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_1;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5((RuntimeObject *)(RuntimeObject *)L_2, (bool*)(bool*)(&V_2), /*hidden argument*/NULL);
			V_3 = (int32_t)0;
			goto IL_0083;
		}

IL_0019:
		{
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
			int32_t L_4 = V_3;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			if (L_6)
			{
				goto IL_0039;
			}
		}

IL_0027:
		{
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = V_0;
			int32_t L_8 = V_3;
			NullCheck(L_7);
			RuntimeObject * L_9 = ___e0;
			VolatileWrite((RuntimeObject **)(RuntimeObject **)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), (RuntimeObject *)L_9);
			int32_t L_10 = V_3;
			V_4 = (int32_t)L_10;
			IL2CPP_LEAVE(0x98, FINALLY_008e);
		}

IL_0039:
		{
			int32_t L_11 = V_3;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = V_0;
			NullCheck(L_12);
			if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))), (int32_t)1))))))
			{
				goto IL_007f;
			}
		}

IL_0041:
		{
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = V_0;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			if ((!(((RuntimeObject*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_13) == ((RuntimeObject*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_14))))
			{
				goto IL_007f;
			}
		}

IL_004c:
		{
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = V_0;
			NullCheck(L_15);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))), (int32_t)2)));
			V_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_16;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = V_0;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = V_5;
			int32_t L_19 = V_3;
			Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434((RuntimeArray *)(RuntimeArray *)L_17, (RuntimeArray *)(RuntimeArray *)L_18, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = V_5;
			int32_t L_21 = V_3;
			RuntimeObject * L_22 = ___e0;
			NullCheck(L_20);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1))), (RuntimeObject *)L_22);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = V_5;
			il2cpp_codegen_memory_barrier();
			__this->set_m_array_0(L_23);
			int32_t L_24 = V_3;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
			IL2CPP_LEAVE(0x98, FINALLY_008e);
		}

IL_007f:
		{
			int32_t L_25 = V_3;
			V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		}

IL_0083:
		{
			int32_t L_26 = V_3;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = V_0;
			NullCheck(L_27);
			if ((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_27)->max_length)))))))
			{
				goto IL_0019;
			}
		}

IL_0089:
		{
			IL2CPP_LEAVE(0x0, FINALLY_008e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008e;
	}

FINALLY_008e:
	{ // begin finally (depth: 1)
		{
			bool L_28 = V_2;
			if (!L_28)
			{
				goto IL_0097;
			}
		}

IL_0091:
		{
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_29 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2((RuntimeObject *)(RuntimeObject *)L_29, /*hidden argument*/NULL);
		}

IL_0097:
		{
			IL2CPP_END_FINALLY(142)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(142)
	{
		IL2CPP_JUMP_TBL(0x98, IL_0098)
		IL2CPP_JUMP_TBL(0x0, IL_0000)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0098:
	{
		int32_t L_30 = V_4;
		return L_30;
	}
}
// System.Void System.Threading.ThreadPoolWorkQueue_SparseArray`1<System.Object>::Remove(T)
extern "C" IL2CPP_METHOD_ATTR void SparseArray_1_Remove_m68197C62F8B904A1778445F94E694E9F18C90BD7_gshared (SparseArray_1_t3343BC28ED7AB6481D2C9C24AC382CCEFD5148F1 * __this, RuntimeObject * ___e0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_array_0();
		il2cpp_codegen_memory_barrier();
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
		V_1 = (bool)0;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5((RuntimeObject *)(RuntimeObject *)L_1, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
			V_2 = (int32_t)0;
			goto IL_0054;
		}

IL_0017:
		{
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			int32_t L_3 = V_2;
			NullCheck(L_2);
			int32_t L_4 = L_3;
			RuntimeObject * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			RuntimeObject * L_6 = ___e0;
			if ((!(((RuntimeObject*)(RuntimeObject *)L_5) == ((RuntimeObject*)(RuntimeObject *)L_6))))
			{
				goto IL_0050;
			}
		}

IL_0032:
		{
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			int32_t L_8 = V_2;
			NullCheck(L_7);
			il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
			RuntimeObject * L_9 = V_3;
			VolatileWrite((RuntimeObject **)(RuntimeObject **)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), (RuntimeObject *)L_9);
			IL2CPP_LEAVE(0x6D, FINALLY_0063);
		}

IL_0050:
		{
			int32_t L_10 = V_2;
			V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		}

IL_0054:
		{
			int32_t L_11 = V_2;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			NullCheck(L_12);
			if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
			{
				goto IL_0017;
			}
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x6D, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_006c;
			}
		}

IL_0066:
		{
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2((RuntimeObject *)(RuntimeObject *)L_14, /*hidden argument*/NULL);
		}

IL_006c:
		{
			IL2CPP_END_FINALLY(99)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T1 System.Tuple`2<System.Object,System.Char>::get_Item1()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_mA483C126556F793CB20A05976E11B4A331D96AA9_gshared (Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return L_0;
	}
}
// T2 System.Tuple`2<System.Object,System.Char>::get_Item2()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Tuple_2_get_Item2_m41639BC03C1D91747BE1B3493BAC59AB4B6469AF_gshared (Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 * __this, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = (Il2CppChar)__this->get_m_Item2_1();
		return L_0;
	}
}
// System.Void System.Tuple`2<System.Object,System.Char>::.ctor(T1,T2)
extern "C" IL2CPP_METHOD_ATTR void Tuple_2__ctor_mD23D63F636C2D18C1F70831AD4BE2FAE15B772F5_gshared (Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 * __this, RuntimeObject * ___item10, Il2CppChar ___item21, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___item10;
		__this->set_m_Item1_0(L_0);
		Il2CppChar L_1 = ___item21;
		__this->set_m_Item2_1(L_1);
		return;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Char>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_2_Equals_m5489EC6EEB99D6E3669146F997E5FEEF41F2C72A_gshared (Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_Equals_m5489EC6EEB99D6E3669146F997E5FEEF41F2C72A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC * L_1 = ((ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		bool L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_tDF8DE3C01DB964F73A35127713C2F590D93C899C_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Char>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_2_System_Collections_IStructuralEquatable_Equals_mA17D63F2DD00C7883626B17244FED7986933D386_gshared (Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_Collections_IStructuralEquatable_Equals_mA17D63F2DD00C7883626B17244FED7986933D386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 *)((Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		Il2CppChar L_9 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_10 = L_9;
		RuntimeObject * L_11 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_10);
		Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 * L_12 = V_0;
		NullCheck(L_12);
		Il2CppChar L_13 = (Il2CppChar)L_12->get_m_Item2_1();
		Il2CppChar L_14 = L_13;
		RuntimeObject * L_15 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_14);
		NullCheck((RuntimeObject*)L_8);
		bool L_16 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_11, (RuntimeObject *)L_15);
		return L_16;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_2_System_IComparable_CompareTo_m7EDE6EE8084F322A95C98D624C1882AEE4DB1206_gshared (Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_IComparable_CompareTo_m7EDE6EE8084F322A95C98D624C1882AEE4DB1206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_il2cpp_TypeInfo_var);
		LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1 * L_1 = ((LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_tFB90BCCBE0F0B8DB22F725191ACB265543CC63E6_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_m6EDDC04DBC238729BC03FDF965215D0A1C4D37BC_gshared (Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_Collections_IStructuralComparable_CompareTo_m6EDDC04DBC238729BC03FDF965215D0A1C4D37BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 *)((Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject *)__this);
		Type_t * L_3 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)__this, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5 = SR_Format_mCDBB594267CC224AB2A69540BBA598151F0642C7((String_t*)_stringLiteralABFC501D210FA3194339D5355419BE3336C98217, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_6 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_6, (String_t*)L_5, (String_t*)_stringLiteralD0941E68DA8F38151FF86A61FC59F7C5CF9FCAA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, Tuple_2_System_Collections_IStructuralComparable_CompareTo_m6EDDC04DBC238729BC03FDF965215D0A1C4D37BC_RuntimeMethod_var);
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject * L_10 = (RuntimeObject *)L_9->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_7);
		int32_t L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___comparer1;
		Il2CppChar L_15 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_16);
		Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 * L_18 = V_0;
		NullCheck(L_18);
		Il2CppChar L_19 = (Il2CppChar)L_18->get_m_Item2_1();
		Il2CppChar L_20 = L_19;
		RuntimeObject * L_21 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_20);
		NullCheck((RuntimeObject*)L_14);
		int32_t L_22 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var, (RuntimeObject*)L_14, (RuntimeObject *)L_17, (RuntimeObject *)L_21);
		return L_22;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_2_GetHashCode_m602D0444139C96302CCD796893FC1AD8C0A29E2C_gshared (Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_GetHashCode_m602D0444139C96302CCD796893FC1AD8C0A29E2C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC * L_0 = ((ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_tDF8DE3C01DB964F73A35127713C2F590D93C899C_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_m15D00B3B45FFA5706EECE7B551BB6E271BD20D5A_gshared (Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_m15D00B3B45FFA5706EECE7B551BB6E271BD20D5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		Il2CppChar L_4 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_5);
		NullCheck((RuntimeObject*)L_3);
		int32_t L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_6);
		int32_t L_8 = Tuple_CombineHashCodes_m45A9FAE45051A42186BE7E768E8482DFC17730E1((int32_t)L_2, (int32_t)L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String System.Tuple`2<System.Object,System.Char>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_2_ToString_m31887EF8F6A0F74C9433F9FEEE155C3DE8DD45CB_gshared (Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_ToString_m31887EF8F6A0F74C9433F9FEEE155C3DE8DD45CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260((StringBuilder_t *)L_1, (String_t*)_stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_3 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_tF49169C678DFB8C15124E55AD72513BA3BA968AD_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_2);
		return L_3;
	}
}
// System.String System.Tuple`2<System.Object,System.Char>::System.ITupleInternal.ToString(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_2_System_ITupleInternal_ToString_mD5905DD42981D13FF686A3417B93BAF352D64B26_gshared (Tuple_2_t10AF2DAB336473A3A993F224EC2171B187E7D000 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_ITupleInternal_ToString_mD5905DD42981D13FF686A3417B93BAF352D64B26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((StringBuilder_t *)L_0);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65((StringBuilder_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = ___sb0;
		NullCheck((StringBuilder_t *)L_2);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260((StringBuilder_t *)L_2, (String_t*)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = ___sb0;
		Il2CppChar L_4 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_5);
		NullCheck((StringBuilder_t *)L_3);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65((StringBuilder_t *)L_3, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		StringBuilder_t * L_7 = ___sb0;
		NullCheck((StringBuilder_t *)L_7);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A((StringBuilder_t *)L_7, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_8 = ___sb0;
		NullCheck((RuntimeObject *)L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_8);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T1 System.Tuple`2<System.Object,System.Object>::get_Item1()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m6510C633C5CE5469F032825306A482F311F89A20_gshared (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return L_0;
	}
}
// T2 System.Tuple`2<System.Object,System.Object>::get_Item2()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item2_mF200874169D9957B0B84C426263AF8D9AC06F165_gshared (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return L_0;
	}
}
// System.Void System.Tuple`2<System.Object,System.Object>::.ctor(T1,T2)
extern "C" IL2CPP_METHOD_ATTR void Tuple_2__ctor_m8E642EC94EDC2DF04693C2996ACCD555ED327BA2_gshared (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___item10;
		__this->set_m_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_m_Item2_1(L_1);
		return;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Object>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_2_Equals_m8A8A8D99EB3E1F2AA7E2DE52E08E046B2368F89D_gshared (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_Equals_m8A8A8D99EB3E1F2AA7E2DE52E08E046B2368F89D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC * L_1 = ((ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		bool L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_tDF8DE3C01DB964F73A35127713C2F590D93C899C_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_2_System_Collections_IStructuralEquatable_Equals_m2FA914EB3559BC6801FC3BC2233B10F6E5DBE38E_gshared (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_Collections_IStructuralEquatable_Equals_m2FA914EB3559BC6801FC3BC2233B10F6E5DBE38E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 *)((Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject * L_11 = (RuntimeObject *)L_10->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_8);
		bool L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		return L_12;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_2_System_IComparable_CompareTo_mFE66A9713981581AA901E86D923FD7134B7F1BBB_gshared (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_IComparable_CompareTo_mFE66A9713981581AA901E86D923FD7134B7F1BBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_il2cpp_TypeInfo_var);
		LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1 * L_1 = ((LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_tFB90BCCBE0F0B8DB22F725191ACB265543CC63E6_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_m0AB47D85881D220770A2DD2F1454E8964F02919E_gshared (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_Collections_IStructuralComparable_CompareTo_m0AB47D85881D220770A2DD2F1454E8964F02919E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 *)((Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject *)__this);
		Type_t * L_3 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)__this, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5 = SR_Format_mCDBB594267CC224AB2A69540BBA598151F0642C7((String_t*)_stringLiteralABFC501D210FA3194339D5355419BE3336C98217, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_6 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_6, (String_t*)L_5, (String_t*)_stringLiteralD0941E68DA8F38151FF86A61FC59F7C5CF9FCAA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, Tuple_2_System_Collections_IStructuralComparable_CompareTo_m0AB47D85881D220770A2DD2F1454E8964F02919E_RuntimeMethod_var);
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject * L_10 = (RuntimeObject *)L_9->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_7);
		int32_t L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___comparer1;
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject * L_17 = (RuntimeObject *)L_16->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_14);
		int32_t L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var, (RuntimeObject*)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		return L_18;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_2_GetHashCode_m854CCCEB905FCB156F336EBDF479ADE365C0272E_gshared (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_GetHashCode_m854CCCEB905FCB156F336EBDF479ADE365C0272E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC * L_0 = ((ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_tDF8DE3C01DB964F73A35127713C2F590D93C899C_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_mAE1289785CBA73ABECFEEF8C126E6A753935A94C_gshared (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_mAE1289785CBA73ABECFEEF8C126E6A753935A94C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_3);
		int32_t L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		int32_t L_6 = Tuple_CombineHashCodes_m45A9FAE45051A42186BE7E768E8482DFC17730E1((int32_t)L_2, (int32_t)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String System.Tuple`2<System.Object,System.Object>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_2_ToString_m0C084BDD964C3A87FFB8FB3EB734D11784C59C1D_gshared (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_ToString_m0C084BDD964C3A87FFB8FB3EB734D11784C59C1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260((StringBuilder_t *)L_1, (String_t*)_stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_3 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_tF49169C678DFB8C15124E55AD72513BA3BA968AD_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_2);
		return L_3;
	}
}
// System.String System.Tuple`2<System.Object,System.Object>::System.ITupleInternal.ToString(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_2_System_ITupleInternal_ToString_mCF0149D9D45E81908EF4599A4FA6EFB9F0718C1B_gshared (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_ITupleInternal_ToString_mCF0149D9D45E81908EF4599A4FA6EFB9F0718C1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((StringBuilder_t *)L_0);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65((StringBuilder_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = ___sb0;
		NullCheck((StringBuilder_t *)L_2);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260((StringBuilder_t *)L_2, (String_t*)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = ___sb0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		NullCheck((StringBuilder_t *)L_3);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65((StringBuilder_t *)L_3, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = ___sb0;
		NullCheck((StringBuilder_t *)L_5);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A((StringBuilder_t *)L_5, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_6 = ___sb0;
		NullCheck((RuntimeObject *)L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_6);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T1 System.Tuple`3<System.Object,System.Object,System.Object>::get_Item1()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_3_get_Item1_mDB05E64387A775571A57E1A8A3B225E9A079DF8C_gshared (Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return L_0;
	}
}
// T2 System.Tuple`3<System.Object,System.Object,System.Object>::get_Item2()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_3_get_Item2_m28B3505579A6A87FAAFF970D0F19EBE95F6D9B2D_gshared (Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return L_0;
	}
}
// T3 System.Tuple`3<System.Object,System.Object,System.Object>::get_Item3()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_3_get_Item3_m9F2E5915E0F2E217F46D06D14F750008D0E31B9B_gshared (Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item3_2();
		return L_0;
	}
}
// System.Void System.Tuple`3<System.Object,System.Object,System.Object>::.ctor(T1,T2,T3)
extern "C" IL2CPP_METHOD_ATTR void Tuple_3__ctor_m7334BD1AD31582D0F7A90637AEC714072E093956_gshared (Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___item10;
		__this->set_m_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_m_Item2_1(L_1);
		RuntimeObject * L_2 = ___item32;
		__this->set_m_Item3_2(L_2);
		return;
	}
}
// System.Boolean System.Tuple`3<System.Object,System.Object,System.Object>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_3_Equals_m68A9A911CD09450DEA271118525BA7764415D6B1_gshared (Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_Equals_m68A9A911CD09450DEA271118525BA7764415D6B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC * L_1 = ((ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		bool L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_tDF8DE3C01DB964F73A35127713C2F590D93C899C_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Boolean System.Tuple`3<System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_3_System_Collections_IStructuralEquatable_Equals_m6105CDBE879D9F544868829F7421B047654FA2AF_gshared (Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_System_Collections_IStructuralEquatable_Equals_m6105CDBE879D9F544868829F7421B047654FA2AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 *)((Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject * L_11 = (RuntimeObject *)L_10->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_8);
		bool L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_13 = ___comparer1;
		RuntimeObject * L_14 = (RuntimeObject *)__this->get_m_Item3_2();
		Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * L_15 = V_0;
		NullCheck(L_15);
		RuntimeObject * L_16 = (RuntimeObject *)L_15->get_m_Item3_2();
		NullCheck((RuntimeObject*)L_13);
		bool L_17 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject *)L_14, (RuntimeObject *)L_16);
		return L_17;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_3_System_IComparable_CompareTo_m64636C837A283A95130C6E0BB403581B0DA10E31_gshared (Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_System_IComparable_CompareTo_m64636C837A283A95130C6E0BB403581B0DA10E31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_il2cpp_TypeInfo_var);
		LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1 * L_1 = ((LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_tFB90BCCBE0F0B8DB22F725191ACB265543CC63E6_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralComparable_CompareTo_mC272578AC2EACCA6A7439A948CF67173E26BAB6B_gshared (Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_System_Collections_IStructuralComparable_CompareTo_mC272578AC2EACCA6A7439A948CF67173E26BAB6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 *)((Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject *)__this);
		Type_t * L_3 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)__this, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5 = SR_Format_mCDBB594267CC224AB2A69540BBA598151F0642C7((String_t*)_stringLiteralABFC501D210FA3194339D5355419BE3336C98217, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_6 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_6, (String_t*)L_5, (String_t*)_stringLiteralD0941E68DA8F38151FF86A61FC59F7C5CF9FCAA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, Tuple_3_System_Collections_IStructuralComparable_CompareTo_mC272578AC2EACCA6A7439A948CF67173E26BAB6B_RuntimeMethod_var);
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject * L_10 = (RuntimeObject *)L_9->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_7);
		int32_t L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___comparer1;
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject * L_17 = (RuntimeObject *)L_16->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_14);
		int32_t L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var, (RuntimeObject*)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		V_1 = (int32_t)L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_0075:
	{
		RuntimeObject* L_21 = ___comparer1;
		RuntimeObject * L_22 = (RuntimeObject *)__this->get_m_Item3_2();
		Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * L_23 = V_0;
		NullCheck(L_23);
		RuntimeObject * L_24 = (RuntimeObject *)L_23->get_m_Item3_2();
		NullCheck((RuntimeObject*)L_21);
		int32_t L_25 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var, (RuntimeObject*)L_21, (RuntimeObject *)L_22, (RuntimeObject *)L_24);
		return L_25;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_3_GetHashCode_m9381A44EC7D65D6DAFD105845431DE6C1A8FCCA2_gshared (Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_GetHashCode_m9381A44EC7D65D6DAFD105845431DE6C1A8FCCA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC * L_0 = ((ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_tDF8DE3C01DB964F73A35127713C2F590D93C899C_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralEquatable_GetHashCode_m0A1022262707E6B874F1E6E840CBD5FDBC7C0B77_gshared (Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_System_Collections_IStructuralEquatable_GetHashCode_m0A1022262707E6B874F1E6E840CBD5FDBC7C0B77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_3);
		int32_t L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		RuntimeObject* L_6 = ___comparer0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_m_Item3_2();
		NullCheck((RuntimeObject*)L_6);
		int32_t L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_6, (RuntimeObject *)L_7);
		int32_t L_9 = Tuple_CombineHashCodes_m96643FBF95312DDB35FAE7A6DF72514EBAA8CF12((int32_t)L_2, (int32_t)L_5, (int32_t)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.String System.Tuple`3<System.Object,System.Object,System.Object>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_3_ToString_m6E6F703A60AD7C96598E4781ED8C09EF3F348B4D_gshared (Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_ToString_m6E6F703A60AD7C96598E4781ED8C09EF3F348B4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260((StringBuilder_t *)L_1, (String_t*)_stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_3 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_tF49169C678DFB8C15124E55AD72513BA3BA968AD_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_2);
		return L_3;
	}
}
// System.String System.Tuple`3<System.Object,System.Object,System.Object>::System.ITupleInternal.ToString(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_3_System_ITupleInternal_ToString_mC14281AA0E9F04F3ADB9D13C9527F2246F4C9DBA_gshared (Tuple_3_tCA94A9157918EBC76337751E950A3BF20BBF71F9 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_System_ITupleInternal_ToString_mC14281AA0E9F04F3ADB9D13C9527F2246F4C9DBA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((StringBuilder_t *)L_0);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65((StringBuilder_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = ___sb0;
		NullCheck((StringBuilder_t *)L_2);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260((StringBuilder_t *)L_2, (String_t*)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = ___sb0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		NullCheck((StringBuilder_t *)L_3);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65((StringBuilder_t *)L_3, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = ___sb0;
		NullCheck((StringBuilder_t *)L_5);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260((StringBuilder_t *)L_5, (String_t*)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, /*hidden argument*/NULL);
		StringBuilder_t * L_6 = ___sb0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_m_Item3_2();
		NullCheck((StringBuilder_t *)L_6);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65((StringBuilder_t *)L_6, (RuntimeObject *)L_7, /*hidden argument*/NULL);
		StringBuilder_t * L_8 = ___sb0;
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A((StringBuilder_t *)L_8, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_9 = ___sb0;
		NullCheck((RuntimeObject *)L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_9);
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T1 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item1()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item1_mB9F3262AABCA302F85A50469C7EC4E7CB4524028_gshared (Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return L_0;
	}
}
// T2 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item2()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item2_mE1BF4632C63BD8DBF8A578455582CC2F21FD4002_gshared (Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return L_0;
	}
}
// T3 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item3()
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item3_mA5222F04F99CBA901A4A5B11CCE3D5DA7E8277C3_gshared (Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item3_2();
		return L_0;
	}
}
// T4 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item4()
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item4_mBC1FC8F28A1BFFE2AB0AFD164DE6305FE98EDA69_gshared (Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item4_3();
		return L_0;
	}
}
// System.Boolean System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_4_Equals_m7B3F96F7CA90EE57BE8CC07D7109050AA0E6B93A_gshared (Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_Equals_m7B3F96F7CA90EE57BE8CC07D7109050AA0E6B93A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC * L_1 = ((ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		bool L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_tDF8DE3C01DB964F73A35127713C2F590D93C899C_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Boolean System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_4_System_Collections_IStructuralEquatable_Equals_m6CF9C225128362F8CA4CD3D74856E01E47192E30_gshared (Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_Collections_IStructuralEquatable_Equals_m6CF9C225128362F8CA4CD3D74856E01E47192E30_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 *)((Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject * L_11 = (RuntimeObject *)L_10->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_8);
		bool L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		if (!L_12)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_13 = ___comparer1;
		int32_t L_14 = (int32_t)__this->get_m_Item3_2();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), &L_15);
		Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = (int32_t)L_17->get_m_Item3_2();
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), &L_19);
		NullCheck((RuntimeObject*)L_13);
		bool L_21 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject *)L_16, (RuntimeObject *)L_20);
		if (!L_21)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_22 = ___comparer1;
		int32_t L_23 = (int32_t)__this->get_m_Item4_3();
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), &L_24);
		Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = (int32_t)L_26->get_m_Item4_3();
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), &L_28);
		NullCheck((RuntimeObject*)L_22);
		bool L_30 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_22, (RuntimeObject *)L_25, (RuntimeObject *)L_29);
		return L_30;
	}

IL_0088:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_System_IComparable_CompareTo_m41C7B9791744C922831D4DD708993977184E31F4_gshared (Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_IComparable_CompareTo_m41C7B9791744C922831D4DD708993977184E31F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_il2cpp_TypeInfo_var);
		LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1 * L_1 = ((LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_tFB90BCCBE0F0B8DB22F725191ACB265543CC63E6_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Int32 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralComparable_CompareTo_m424E09DF6E5390655D4E4893F249752846C86D1C_gshared (Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_Collections_IStructuralComparable_CompareTo_m424E09DF6E5390655D4E4893F249752846C86D1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 *)((Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject *)__this);
		Type_t * L_3 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)__this, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5 = SR_Format_mCDBB594267CC224AB2A69540BBA598151F0642C7((String_t*)_stringLiteralABFC501D210FA3194339D5355419BE3336C98217, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_6 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_6, (String_t*)L_5, (String_t*)_stringLiteralD0941E68DA8F38151FF86A61FC59F7C5CF9FCAA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, Tuple_4_System_Collections_IStructuralComparable_CompareTo_m424E09DF6E5390655D4E4893F249752846C86D1C_RuntimeMethod_var);
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject * L_10 = (RuntimeObject *)L_9->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_7);
		int32_t L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___comparer1;
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject * L_17 = (RuntimeObject *)L_16->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_14);
		int32_t L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var, (RuntimeObject*)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		V_1 = (int32_t)L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_0075:
	{
		RuntimeObject* L_21 = ___comparer1;
		int32_t L_22 = (int32_t)__this->get_m_Item3_2();
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), &L_23);
		Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = (int32_t)L_25->get_m_Item3_2();
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), &L_27);
		NullCheck((RuntimeObject*)L_21);
		int32_t L_29 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var, (RuntimeObject*)L_21, (RuntimeObject *)L_24, (RuntimeObject *)L_28);
		V_1 = (int32_t)L_29;
		int32_t L_30 = V_1;
		if (!L_30)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_31 = V_1;
		return L_31;
	}

IL_0097:
	{
		RuntimeObject* L_32 = ___comparer1;
		int32_t L_33 = (int32_t)__this->get_m_Item4_3();
		int32_t L_34 = L_33;
		RuntimeObject * L_35 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), &L_34);
		Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * L_36 = V_0;
		NullCheck(L_36);
		int32_t L_37 = (int32_t)L_36->get_m_Item4_3();
		int32_t L_38 = L_37;
		RuntimeObject * L_39 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), &L_38);
		NullCheck((RuntimeObject*)L_32);
		int32_t L_40 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var, (RuntimeObject*)L_32, (RuntimeObject *)L_35, (RuntimeObject *)L_39);
		return L_40;
	}
}
// System.Int32 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_GetHashCode_m921EB95FF812E8E39CB95BB46541009F596C7918_gshared (Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_GetHashCode_m921EB95FF812E8E39CB95BB46541009F596C7918_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC * L_0 = ((ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_tDF8DE3C01DB964F73A35127713C2F590D93C899C_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_mFE9718A63453CFBBF99090ECC6894135DDB91646_gshared (Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_mFE9718A63453CFBBF99090ECC6894135DDB91646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_3);
		int32_t L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		RuntimeObject* L_6 = ___comparer0;
		int32_t L_7 = (int32_t)__this->get_m_Item3_2();
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), &L_8);
		NullCheck((RuntimeObject*)L_6);
		int32_t L_10 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_6, (RuntimeObject *)L_9);
		RuntimeObject* L_11 = ___comparer0;
		int32_t L_12 = (int32_t)__this->get_m_Item4_3();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), &L_13);
		NullCheck((RuntimeObject*)L_11);
		int32_t L_15 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_11, (RuntimeObject *)L_14);
		int32_t L_16 = Tuple_CombineHashCodes_mEAEECB23FE2646E87123BA8A9D39AE003E8540B9((int32_t)L_2, (int32_t)L_5, (int32_t)L_10, (int32_t)L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.String System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_4_ToString_mD10589B5824EE601B09453A0625C1384F52AD791_gshared (Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_ToString_mD10589B5824EE601B09453A0625C1384F52AD791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260((StringBuilder_t *)L_1, (String_t*)_stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_3 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_tF49169C678DFB8C15124E55AD72513BA3BA968AD_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_2);
		return L_3;
	}
}
// System.String System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::System.ITupleInternal.ToString(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_4_System_ITupleInternal_ToString_m6FF9026CFBE78AE8973B1B2A9A418E8A3CB58A59_gshared (Tuple_4_tF7CBADC8FB46E4E6569992CB77252B1C464DA8B1 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_ITupleInternal_ToString_m6FF9026CFBE78AE8973B1B2A9A418E8A3CB58A59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((StringBuilder_t *)L_0);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65((StringBuilder_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = ___sb0;
		NullCheck((StringBuilder_t *)L_2);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260((StringBuilder_t *)L_2, (String_t*)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = ___sb0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		NullCheck((StringBuilder_t *)L_3);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65((StringBuilder_t *)L_3, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = ___sb0;
		NullCheck((StringBuilder_t *)L_5);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260((StringBuilder_t *)L_5, (String_t*)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, /*hidden argument*/NULL);
		StringBuilder_t * L_6 = ___sb0;
		int32_t L_7 = (int32_t)__this->get_m_Item3_2();
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), &L_8);
		NullCheck((StringBuilder_t *)L_6);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65((StringBuilder_t *)L_6, (RuntimeObject *)L_9, /*hidden argument*/NULL);
		StringBuilder_t * L_10 = ___sb0;
		NullCheck((StringBuilder_t *)L_10);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260((StringBuilder_t *)L_10, (String_t*)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, /*hidden argument*/NULL);
		StringBuilder_t * L_11 = ___sb0;
		int32_t L_12 = (int32_t)__this->get_m_Item4_3();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), &L_13);
		NullCheck((StringBuilder_t *)L_11);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65((StringBuilder_t *)L_11, (RuntimeObject *)L_14, /*hidden argument*/NULL);
		StringBuilder_t * L_15 = ___sb0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_16 = ___sb0;
		NullCheck((RuntimeObject *)L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_16);
		return L_17;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T1 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item1()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item1_m96B1347C67D707BF296C3F57E0AE21140F757454_gshared (Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return L_0;
	}
}
// T2 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item2()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item2_mEAD5ACC93AFB16D85665C9B0152D1536C9936E2D_gshared (Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return L_0;
	}
}
// T3 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item3()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item3_m25CE4A6C2A6E52027BE50AFF1BFBE29D51190D4B_gshared (Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item3_2();
		return L_0;
	}
}
// T4 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item4()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item4_mF919BB6B56FC6260F9D75CB4CCEFA0E296070D50_gshared (Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item4_3();
		return L_0;
	}
}
// System.Boolean System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_4_Equals_mC0249B793F94DFE100705A5B3915C963F9691706_gshared (Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_Equals_mC0249B793F94DFE100705A5B3915C963F9691706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC * L_1 = ((ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		bool L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_tDF8DE3C01DB964F73A35127713C2F590D93C899C_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Boolean System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR bool Tuple_4_System_Collections_IStructuralEquatable_Equals_m63C0D572F63A297DB44E1F1FA169AEADA2CB06B0_gshared (Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_Collections_IStructuralEquatable_Equals_m63C0D572F63A297DB44E1F1FA169AEADA2CB06B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF *)((Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject * L_11 = (RuntimeObject *)L_10->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_8);
		bool L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		if (!L_12)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_13 = ___comparer1;
		RuntimeObject * L_14 = (RuntimeObject *)__this->get_m_Item3_2();
		Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * L_15 = V_0;
		NullCheck(L_15);
		RuntimeObject * L_16 = (RuntimeObject *)L_15->get_m_Item3_2();
		NullCheck((RuntimeObject*)L_13);
		bool L_17 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject *)L_14, (RuntimeObject *)L_16);
		if (!L_17)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_18 = ___comparer1;
		RuntimeObject * L_19 = (RuntimeObject *)__this->get_m_Item4_3();
		Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * L_20 = V_0;
		NullCheck(L_20);
		RuntimeObject * L_21 = (RuntimeObject *)L_20->get_m_Item4_3();
		NullCheck((RuntimeObject*)L_18);
		bool L_22 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_18, (RuntimeObject *)L_19, (RuntimeObject *)L_21);
		return L_22;
	}

IL_0088:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_System_IComparable_CompareTo_m9862814A457B9F16A6E6C1A83956C5E55946324C_gshared (Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_IComparable_CompareTo_m9862814A457B9F16A6E6C1A83956C5E55946324C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_il2cpp_TypeInfo_var);
		LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1 * L_1 = ((LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_tFB90BCCBE0F0B8DB22F725191ACB265543CC63E6_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Int32 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralComparable_CompareTo_mD693226F3B3FE5CC2D114FD0DC9D4B17BF46A743_gshared (Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_Collections_IStructuralComparable_CompareTo_mD693226F3B3FE5CC2D114FD0DC9D4B17BF46A743_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF *)((Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject *)__this);
		Type_t * L_3 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)__this, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5 = SR_Format_mCDBB594267CC224AB2A69540BBA598151F0642C7((String_t*)_stringLiteralABFC501D210FA3194339D5355419BE3336C98217, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_6 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_6, (String_t*)L_5, (String_t*)_stringLiteralD0941E68DA8F38151FF86A61FC59F7C5CF9FCAA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, Tuple_4_System_Collections_IStructuralComparable_CompareTo_mD693226F3B3FE5CC2D114FD0DC9D4B17BF46A743_RuntimeMethod_var);
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject * L_10 = (RuntimeObject *)L_9->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_7);
		int32_t L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___comparer1;
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject * L_17 = (RuntimeObject *)L_16->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_14);
		int32_t L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var, (RuntimeObject*)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		V_1 = (int32_t)L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_0075:
	{
		RuntimeObject* L_21 = ___comparer1;
		RuntimeObject * L_22 = (RuntimeObject *)__this->get_m_Item3_2();
		Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * L_23 = V_0;
		NullCheck(L_23);
		RuntimeObject * L_24 = (RuntimeObject *)L_23->get_m_Item3_2();
		NullCheck((RuntimeObject*)L_21);
		int32_t L_25 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var, (RuntimeObject*)L_21, (RuntimeObject *)L_22, (RuntimeObject *)L_24);
		V_1 = (int32_t)L_25;
		int32_t L_26 = V_1;
		if (!L_26)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_27 = V_1;
		return L_27;
	}

IL_0097:
	{
		RuntimeObject* L_28 = ___comparer1;
		RuntimeObject * L_29 = (RuntimeObject *)__this->get_m_Item4_3();
		Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * L_30 = V_0;
		NullCheck(L_30);
		RuntimeObject * L_31 = (RuntimeObject *)L_30->get_m_Item4_3();
		NullCheck((RuntimeObject*)L_28);
		int32_t L_32 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var, (RuntimeObject*)L_28, (RuntimeObject *)L_29, (RuntimeObject *)L_31);
		return L_32;
	}
}
// System.Int32 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_GetHashCode_mAA9E1DB7088598BDE71317B7CEACA6841F4D16BC_gshared (Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_GetHashCode_mAA9E1DB7088598BDE71317B7CEACA6841F4D16BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC * L_0 = ((ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_tDF8DE3C01DB964F73A35127713C2F590D93C899C_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_m8197ECBBB8792160853DA07010DB8ADC3C5BEF60_gshared (Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_Collections_IStructuralEquatable_GetHashCode_m8197ECBBB8792160853DA07010DB8ADC3C5BEF60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_3);
		int32_t L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		RuntimeObject* L_6 = ___comparer0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_m_Item3_2();
		NullCheck((RuntimeObject*)L_6);
		int32_t L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_6, (RuntimeObject *)L_7);
		RuntimeObject* L_9 = ___comparer0;
		RuntimeObject * L_10 = (RuntimeObject *)__this->get_m_Item4_3();
		NullCheck((RuntimeObject*)L_9);
		int32_t L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (RuntimeObject *)L_10);
		int32_t L_12 = Tuple_CombineHashCodes_mEAEECB23FE2646E87123BA8A9D39AE003E8540B9((int32_t)L_2, (int32_t)L_5, (int32_t)L_8, (int32_t)L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_4_ToString_mC5B2A4704AE9971CC5B6ACD9956704B859C3FADA_gshared (Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_ToString_mC5B2A4704AE9971CC5B6ACD9956704B859C3FADA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260((StringBuilder_t *)L_1, (String_t*)_stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_3 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_tF49169C678DFB8C15124E55AD72513BA3BA968AD_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_2);
		return L_3;
	}
}
// System.String System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::System.ITupleInternal.ToString(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR String_t* Tuple_4_System_ITupleInternal_ToString_m0548E0D262AB3E3E44385395135288B1DE01DD2D_gshared (Tuple_4_tE9A25F2998DB840363C69F6316C427AAFB7CEFCF * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_4_System_ITupleInternal_ToString_m0548E0D262AB3E3E44385395135288B1DE01DD2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((StringBuilder_t *)L_0);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65((StringBuilder_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = ___sb0;
		NullCheck((StringBuilder_t *)L_2);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260((StringBuilder_t *)L_2, (String_t*)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = ___sb0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		NullCheck((StringBuilder_t *)L_3);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65((StringBuilder_t *)L_3, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = ___sb0;
		NullCheck((StringBuilder_t *)L_5);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260((StringBuilder_t *)L_5, (String_t*)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, /*hidden argument*/NULL);
		StringBuilder_t * L_6 = ___sb0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_m_Item3_2();
		NullCheck((StringBuilder_t *)L_6);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65((StringBuilder_t *)L_6, (RuntimeObject *)L_7, /*hidden argument*/NULL);
		StringBuilder_t * L_8 = ___sb0;
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260((StringBuilder_t *)L_8, (String_t*)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, /*hidden argument*/NULL);
		StringBuilder_t * L_9 = ___sb0;
		RuntimeObject * L_10 = (RuntimeObject *)__this->get_m_Item4_3();
		NullCheck((StringBuilder_t *)L_9);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65((StringBuilder_t *)L_9, (RuntimeObject *)L_10, /*hidden argument*/NULL);
		StringBuilder_t * L_11 = ___sb0;
		NullCheck((StringBuilder_t *)L_11);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A((StringBuilder_t *)L_11, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_12 = ___sb0;
		NullCheck((RuntimeObject *)L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_12);
		return L_13;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.ValueTuple`2<System.Int32,System.Boolean>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m4CDA97E2CE07B05ACBFEE7773F1290ADBAD5D69D_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = ValueTuple_2_Equals_mFB1DF702E0F7701ACA642584D932529CD7B5636E((ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *)(ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *)__this, (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 )((*(ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *)((ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
extern "C"  bool ValueTuple_2_Equals_m4CDA97E2CE07B05ACBFEE7773F1290ADBAD5D69D_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *>(__this + 1);
	return ValueTuple_2_Equals_m4CDA97E2CE07B05ACBFEE7773F1290ADBAD5D69D(_thisAdjusted, ___obj0, method);
}
// System.Boolean System.ValueTuple`2<System.Int32,System.Boolean>::Equals(System.ValueTuple`2<T1,T2>)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mFB1DF702E0F7701ACA642584D932529CD7B5636E_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  ___other0, const RuntimeMethod* method)
{
	{
		EqualityComparer_1_tF7174A8BEF4C636DBBD3C6BBD234B0F315F64F33 * L_0 = ((  EqualityComparer_1_tF7174A8BEF4C636DBBD3C6BBD234B0F315F64F33 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		int32_t L_1 = (int32_t)__this->get_Item1_0();
		ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  L_2 = ___other0;
		int32_t L_3 = (int32_t)L_2.get_Item1_0();
		NullCheck((EqualityComparer_1_tF7174A8BEF4C636DBBD3C6BBD234B0F315F64F33 *)L_0);
		bool L_4 = VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, (EqualityComparer_1_tF7174A8BEF4C636DBBD3C6BBD234B0F315F64F33 *)L_0, (int32_t)L_1, (int32_t)L_3);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tEF2C39D86C36E82597707B89981FFD60E94C824B * L_5 = ((  EqualityComparer_1_tEF2C39D86C36E82597707B89981FFD60E94C824B * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		bool L_6 = (bool)__this->get_Item2_1();
		ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  L_7 = ___other0;
		bool L_8 = (bool)L_7.get_Item2_1();
		NullCheck((EqualityComparer_1_tEF2C39D86C36E82597707B89981FFD60E94C824B *)L_5);
		bool L_9 = VirtFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, (EqualityComparer_1_tEF2C39D86C36E82597707B89981FFD60E94C824B *)L_5, (bool)L_6, (bool)L_8);
		return L_9;
	}

IL_002f:
	{
		return (bool)0;
	}
}
extern "C"  bool ValueTuple_2_Equals_mFB1DF702E0F7701ACA642584D932529CD7B5636E_AdjustorThunk (RuntimeObject * __this, ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  ___other0, const RuntimeMethod* method)
{
	ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *>(__this + 1);
	return ValueTuple_2_Equals_mFB1DF702E0F7701ACA642584D932529CD7B5636E(_thisAdjusted, ___other0, method);
}
// System.Boolean System.ValueTuple`2<System.Int32,System.Boolean>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_mCEA5B5B92AA3543CFDC812368AA11D9D023F167A_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_2_System_Collections_IStructuralEquatable_Equals_mCEA5B5B92AA3543CFDC812368AA11D9D023F167A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 )((*(ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *)((ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_3 = ___comparer1;
		int32_t L_4 = (int32_t)__this->get_Item1_0();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8), &L_5);
		ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  L_7 = V_0;
		int32_t L_8 = (int32_t)L_7.get_Item1_0();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8), &L_9);
		NullCheck((RuntimeObject*)L_3);
		bool L_11 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_6, (RuntimeObject *)L_10);
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		RuntimeObject* L_12 = ___comparer1;
		bool L_13 = (bool)__this->get_Item2_1();
		bool L_14 = L_13;
		RuntimeObject * L_15 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 9), &L_14);
		ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  L_16 = V_0;
		bool L_17 = (bool)L_16.get_Item2_1();
		bool L_18 = L_17;
		RuntimeObject * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 9), &L_18);
		NullCheck((RuntimeObject*)L_12);
		bool L_20 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_12, (RuntimeObject *)L_15, (RuntimeObject *)L_19);
		return L_20;
	}

IL_004f:
	{
		return (bool)0;
	}
}
extern "C"  bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_mCEA5B5B92AA3543CFDC812368AA11D9D023F167A_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *>(__this + 1);
	return ValueTuple_2_System_Collections_IStructuralEquatable_Equals_mCEA5B5B92AA3543CFDC812368AA11D9D023F167A(_thisAdjusted, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple`2<System.Int32,System.Boolean>::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_m38D278F852F918B696F44604D70FEC23FE286A72_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_2_System_IComparable_CompareTo_m38D278F852F918B696F44604D70FEC23FE286A72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  L_2 = (*(ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *)__this);
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_2);
		NullCheck((RuntimeObject *)L_3);
		Type_t * L_4 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_3, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_4);
		String_t* L_6 = SR_Format_mCDBB594267CC224AB2A69540BBA598151F0642C7((String_t*)_stringLiteralABFC501D210FA3194339D5355419BE3336C98217, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_7 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_7, (String_t*)L_6, (String_t*)_stringLiteralD0941E68DA8F38151FF86A61FC59F7C5CF9FCAA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, ValueTuple_2_System_IComparable_CompareTo_m38D278F852F918B696F44604D70FEC23FE286A72_RuntimeMethod_var);
	}

IL_0037:
	{
		RuntimeObject * L_8 = ___other0;
		int32_t L_9 = ValueTuple_2_CompareTo_m1181B317CF2CE4BA034B5B13111D43AF11681BE7((ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *)(ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *)__this, (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 )((*(ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *)((ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *)UnBox(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_9;
	}
}
extern "C"  int32_t ValueTuple_2_System_IComparable_CompareTo_m38D278F852F918B696F44604D70FEC23FE286A72_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *>(__this + 1);
	return ValueTuple_2_System_IComparable_CompareTo_m38D278F852F918B696F44604D70FEC23FE286A72(_thisAdjusted, ___other0, method);
}
// System.Int32 System.ValueTuple`2<System.Int32,System.Boolean>::CompareTo(System.ValueTuple`2<T1,T2>)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_m1181B317CF2CE4BA034B5B13111D43AF11681BE7_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Comparer_1_t0796DB4CA0FA9609FBB2A6AEBA7EDF7DD7EE23A2 * L_0 = ((  Comparer_1_t0796DB4CA0FA9609FBB2A6AEBA7EDF7DD7EE23A2 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		int32_t L_1 = (int32_t)__this->get_Item1_0();
		ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  L_2 = ___other0;
		int32_t L_3 = (int32_t)L_2.get_Item1_0();
		NullCheck((Comparer_1_t0796DB4CA0FA9609FBB2A6AEBA7EDF7DD7EE23A2 *)L_0);
		int32_t L_4 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::Compare(T,T) */, (Comparer_1_t0796DB4CA0FA9609FBB2A6AEBA7EDF7DD7EE23A2 *)L_0, (int32_t)L_1, (int32_t)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_t322447E2E777F3707F8006FD88B8393DEAC1F196 * L_7 = ((  Comparer_1_t322447E2E777F3707F8006FD88B8393DEAC1F196 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		bool L_8 = (bool)__this->get_Item2_1();
		ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  L_9 = ___other0;
		bool L_10 = (bool)L_9.get_Item2_1();
		NullCheck((Comparer_1_t322447E2E777F3707F8006FD88B8393DEAC1F196 *)L_7);
		int32_t L_11 = VirtFuncInvoker2< int32_t, bool, bool >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Boolean>::Compare(T,T) */, (Comparer_1_t322447E2E777F3707F8006FD88B8393DEAC1F196 *)L_7, (bool)L_8, (bool)L_10);
		return L_11;
	}
}
extern "C"  int32_t ValueTuple_2_CompareTo_m1181B317CF2CE4BA034B5B13111D43AF11681BE7_AdjustorThunk (RuntimeObject * __this, ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  ___other0, const RuntimeMethod* method)
{
	ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *>(__this + 1);
	return ValueTuple_2_CompareTo_m1181B317CF2CE4BA034B5B13111D43AF11681BE7(_thisAdjusted, ___other0, method);
}
// System.Int32 System.ValueTuple`2<System.Int32,System.Boolean>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m9E2EC3FF01327CD456734C77156EFF94D04A0EDA_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m9E2EC3FF01327CD456734C77156EFF94D04A0EDA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  L_2 = (*(ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *)__this);
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_2);
		NullCheck((RuntimeObject *)L_3);
		Type_t * L_4 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_3, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_4);
		String_t* L_6 = SR_Format_mCDBB594267CC224AB2A69540BBA598151F0642C7((String_t*)_stringLiteralABFC501D210FA3194339D5355419BE3336C98217, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_7 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_7, (String_t*)L_6, (String_t*)_stringLiteralD0941E68DA8F38151FF86A61FC59F7C5CF9FCAA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m9E2EC3FF01327CD456734C77156EFF94D04A0EDA_RuntimeMethod_var);
	}

IL_0037:
	{
		RuntimeObject * L_8 = ___other0;
		V_0 = (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 )((*(ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *)((ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *)UnBox(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_9 = ___comparer1;
		int32_t L_10 = (int32_t)__this->get_Item1_0();
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8), &L_11);
		ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  L_13 = V_0;
		int32_t L_14 = (int32_t)L_13.get_Item1_0();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8), &L_15);
		NullCheck((RuntimeObject*)L_9);
		int32_t L_17 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (RuntimeObject *)L_12, (RuntimeObject *)L_16);
		V_1 = (int32_t)L_17;
		int32_t L_18 = V_1;
		if (!L_18)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_19 = V_1;
		return L_19;
	}

IL_0060:
	{
		RuntimeObject* L_20 = ___comparer1;
		bool L_21 = (bool)__this->get_Item2_1();
		bool L_22 = L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 9), &L_22);
		ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264  L_24 = V_0;
		bool L_25 = (bool)L_24.get_Item2_1();
		bool L_26 = L_25;
		RuntimeObject * L_27 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 9), &L_26);
		NullCheck((RuntimeObject*)L_20);
		int32_t L_28 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var, (RuntimeObject*)L_20, (RuntimeObject *)L_23, (RuntimeObject *)L_27);
		return L_28;
	}
}
extern "C"  int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m9E2EC3FF01327CD456734C77156EFF94D04A0EDA_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *>(__this + 1);
	return ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m9E2EC3FF01327CD456734C77156EFF94D04A0EDA(_thisAdjusted, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple`2<System.Int32,System.Boolean>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m39C814C5764887C0F26D42D593C9D678AA9AAA34_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t* G_B3_0 = NULL;
	int32_t* G_B1_0 = NULL;
	int32_t* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	bool* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	bool* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	bool* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		int32_t* L_0 = (int32_t*)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		G_B3_0 = L_0;
		goto IL_002a;
		G_B1_0 = L_0;
	}
	{
		V_0 = (int32_t)(*(int32_t*)G_B1_0);
		G_B3_0 = (&V_0);
		goto IL_002a;
		G_B2_0 = (&V_0);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		int32_t L_3 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(int32_t*)G_B3_0, /*hidden argument*/NULL);
		G_B4_0 = L_3;
	}

IL_0035:
	{
		bool* L_4 = (bool*)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		G_B7_0 = L_4;
		G_B7_1 = G_B4_0;
		goto IL_005f;
		G_B5_0 = L_4;
		G_B5_1 = G_B4_0;
	}
	{
		V_1 = (bool)(*(bool*)G_B5_0);
		G_B7_0 = (&V_1);
		G_B7_1 = G_B5_1;
		goto IL_005f;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		int32_t L_7 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)G_B7_0, /*hidden argument*/NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		int32_t L_8 = ValueTuple_CombineHashCodes_m43A0AF2B2A3E284D995D8D8FC386D13D19A3F5CC((int32_t)G_B8_1, (int32_t)G_B8_0, /*hidden argument*/NULL);
		return L_8;
	}
}
extern "C"  int32_t ValueTuple_2_GetHashCode_m39C814C5764887C0F26D42D593C9D678AA9AAA34_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *>(__this + 1);
	return ValueTuple_2_GetHashCode_m39C814C5764887C0F26D42D593C9D678AA9AAA34(_thisAdjusted, method);
}
// System.Int32 System.ValueTuple`2<System.Int32,System.Boolean>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m08BBF291B605FCA050B18EF44C0C21F39A017652_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1 = ValueTuple_2_GetHashCodeCore_mC913A22788B06DF404EF3DAA4135CF5AFF7503A6((ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *)(ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_1;
	}
}
extern "C"  int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m08BBF291B605FCA050B18EF44C0C21F39A017652_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *>(__this + 1);
	return ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m08BBF291B605FCA050B18EF44C0C21F39A017652(_thisAdjusted, ___comparer0, method);
}
// System.Int32 System.ValueTuple`2<System.Int32,System.Boolean>::GetHashCodeCore(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_mC913A22788B06DF404EF3DAA4135CF5AFF7503A6_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_2_GetHashCodeCore_mC913A22788B06DF404EF3DAA4135CF5AFF7503A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1 = (int32_t)__this->get_Item1_0();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8), &L_2);
		NullCheck((RuntimeObject*)L_0);
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_3);
		RuntimeObject* L_5 = ___comparer0;
		bool L_6 = (bool)__this->get_Item2_1();
		bool L_7 = L_6;
		RuntimeObject * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 9), &L_7);
		NullCheck((RuntimeObject*)L_5);
		int32_t L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, (RuntimeObject *)L_8);
		int32_t L_10 = ValueTuple_CombineHashCodes_m43A0AF2B2A3E284D995D8D8FC386D13D19A3F5CC((int32_t)L_4, (int32_t)L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
extern "C"  int32_t ValueTuple_2_GetHashCodeCore_mC913A22788B06DF404EF3DAA4135CF5AFF7503A6_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *>(__this + 1);
	return ValueTuple_2_GetHashCodeCore_mC913A22788B06DF404EF3DAA4135CF5AFF7503A6(_thisAdjusted, ___comparer0, method);
}
// System.String System.ValueTuple`2<System.Int32,System.Boolean>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_m8FD918EEFE0B893C5120E66DD569D45C6E98FC4D_gshared (ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_2_ToString_m8FD918EEFE0B893C5120E66DD569D45C6E98FC4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B3_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B3_3 = NULL;
	int32_t* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B1_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B1_3 = NULL;
	int32_t* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B2_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B4_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B4_3 = NULL;
	bool* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B7_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B7_3 = NULL;
	bool* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B5_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B5_3 = NULL;
	bool* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B6_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B8_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B8_3 = NULL;
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)L_1;
		int32_t* L_3 = (int32_t*)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		G_B3_0 = L_3;
		G_B3_1 = 1;
		G_B3_2 = L_2;
		G_B3_3 = L_2;
		goto IL_003a;
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
	}
	{
		V_0 = (int32_t)(*(int32_t*)G_B1_0);
		G_B3_0 = (&V_0);
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_003a;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0045;
	}

IL_003a:
	{
		String_t* L_6 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(int32_t*)G_B3_0, /*hidden argument*/NULL);
		G_B4_0 = L_6;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)G_B4_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)L_7;
		bool* L_9 = (bool*)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		G_B7_0 = L_9;
		G_B7_1 = 3;
		G_B7_2 = L_8;
		G_B7_3 = L_8;
		goto IL_007a;
		G_B5_0 = L_9;
		G_B5_1 = 3;
		G_B5_2 = L_8;
		G_B5_3 = L_8;
	}
	{
		V_1 = (bool)(*(bool*)G_B5_0);
		G_B7_0 = (&V_1);
		G_B7_1 = G_B5_1;
		G_B7_2 = G_B5_2;
		G_B7_3 = G_B5_3;
		goto IL_007a;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0085;
	}

IL_007a:
	{
		String_t* L_12 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)(bool*)G_B7_0, /*hidden argument*/NULL);
		G_B8_0 = L_12;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)G_B8_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A);
		String_t* L_14 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* ValueTuple_2_ToString_m8FD918EEFE0B893C5120E66DD569D45C6E98FC4D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t446756A8057B54D18CAD5BA1D73699DA4B40A264 *>(__this + 1);
	return ValueTuple_2_ToString_m8FD918EEFE0B893C5120E66DD569D45C6E98FC4D(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m3F05460F260C95C8D053F83D32486CF09837AC0D_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = ValueTuple_2_Equals_m00845AED513964CDD8E7197537A964BF771E9B7C((ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *)(ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *)__this, (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE )((*(ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *)((ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
extern "C"  bool ValueTuple_2_Equals_m3F05460F260C95C8D053F83D32486CF09837AC0D_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * _thisAdjusted = reinterpret_cast<ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *>(__this + 1);
	return ValueTuple_2_Equals_m3F05460F260C95C8D053F83D32486CF09837AC0D(_thisAdjusted, ___obj0, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::Equals(System.ValueTuple`2<T1,T2>)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m00845AED513964CDD8E7197537A964BF771E9B7C_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  ___other0, const RuntimeMethod* method)
{
	{
		EqualityComparer_1_t54972BA287ED38B066E4BE7A3B21F49803B62EBA * L_0 = ((  EqualityComparer_1_t54972BA287ED38B066E4BE7A3B21F49803B62EBA * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((EqualityComparer_1_t54972BA287ED38B066E4BE7A3B21F49803B62EBA *)L_0);
		bool L_4 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t54972BA287ED38B066E4BE7A3B21F49803B62EBA *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t54972BA287ED38B066E4BE7A3B21F49803B62EBA * L_5 = ((  EqualityComparer_1_t54972BA287ED38B066E4BE7A3B21F49803B62EBA * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  L_7 = ___other0;
		RuntimeObject * L_8 = (RuntimeObject *)L_7.get_Item2_1();
		NullCheck((EqualityComparer_1_t54972BA287ED38B066E4BE7A3B21F49803B62EBA *)L_5);
		bool L_9 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t54972BA287ED38B066E4BE7A3B21F49803B62EBA *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_8);
		return L_9;
	}

IL_002f:
	{
		return (bool)0;
	}
}
extern "C"  bool ValueTuple_2_Equals_m00845AED513964CDD8E7197537A964BF771E9B7C_AdjustorThunk (RuntimeObject * __this, ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  ___other0, const RuntimeMethod* method)
{
	ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * _thisAdjusted = reinterpret_cast<ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *>(__this + 1);
	return ValueTuple_2_Equals_m00845AED513964CDD8E7197537A964BF771E9B7C(_thisAdjusted, ___other0, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4F7F0770AB8C9A15CBE5B826DED2E5A1C2D93890_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4F7F0770AB8C9A15CBE5B826DED2E5A1C2D93890_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE )((*(ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *)((ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5.get_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  L_10 = V_0;
		RuntimeObject * L_11 = (RuntimeObject *)L_10.get_Item2_1();
		NullCheck((RuntimeObject*)L_8);
		bool L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		return L_12;
	}

IL_004f:
	{
		return (bool)0;
	}
}
extern "C"  bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4F7F0770AB8C9A15CBE5B826DED2E5A1C2D93890_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * _thisAdjusted = reinterpret_cast<ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *>(__this + 1);
	return ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4F7F0770AB8C9A15CBE5B826DED2E5A1C2D93890(_thisAdjusted, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_mB5E4B8A3A387346D734860B30F983C53049E6623_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_2_System_IComparable_CompareTo_mB5E4B8A3A387346D734860B30F983C53049E6623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  L_2 = (*(ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *)__this);
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_2);
		NullCheck((RuntimeObject *)L_3);
		Type_t * L_4 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_3, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_4);
		String_t* L_6 = SR_Format_mCDBB594267CC224AB2A69540BBA598151F0642C7((String_t*)_stringLiteralABFC501D210FA3194339D5355419BE3336C98217, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_7 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_7, (String_t*)L_6, (String_t*)_stringLiteralD0941E68DA8F38151FF86A61FC59F7C5CF9FCAA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, ValueTuple_2_System_IComparable_CompareTo_mB5E4B8A3A387346D734860B30F983C53049E6623_RuntimeMethod_var);
	}

IL_0037:
	{
		RuntimeObject * L_8 = ___other0;
		int32_t L_9 = ValueTuple_2_CompareTo_m7D62DBACBCD7D6C53E8C86C1CC1863AF4C7D3253((ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *)(ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *)__this, (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE )((*(ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *)((ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *)UnBox(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_9;
	}
}
extern "C"  int32_t ValueTuple_2_System_IComparable_CompareTo_mB5E4B8A3A387346D734860B30F983C53049E6623_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * _thisAdjusted = reinterpret_cast<ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *>(__this + 1);
	return ValueTuple_2_System_IComparable_CompareTo_mB5E4B8A3A387346D734860B30F983C53049E6623(_thisAdjusted, ___other0, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::CompareTo(System.ValueTuple`2<T1,T2>)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_m7D62DBACBCD7D6C53E8C86C1CC1863AF4C7D3253_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Comparer_1_t1DB742817DFA148A84E0F6044361F97B935058A7 * L_0 = ((  Comparer_1_t1DB742817DFA148A84E0F6044361F97B935058A7 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((Comparer_1_t1DB742817DFA148A84E0F6044361F97B935058A7 *)L_0);
		int32_t L_4 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t1DB742817DFA148A84E0F6044361F97B935058A7 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_t1DB742817DFA148A84E0F6044361F97B935058A7 * L_7 = ((  Comparer_1_t1DB742817DFA148A84E0F6044361F97B935058A7 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  L_9 = ___other0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9.get_Item2_1();
		NullCheck((Comparer_1_t1DB742817DFA148A84E0F6044361F97B935058A7 *)L_7);
		int32_t L_11 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t1DB742817DFA148A84E0F6044361F97B935058A7 *)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		return L_11;
	}
}
extern "C"  int32_t ValueTuple_2_CompareTo_m7D62DBACBCD7D6C53E8C86C1CC1863AF4C7D3253_AdjustorThunk (RuntimeObject * __this, ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  ___other0, const RuntimeMethod* method)
{
	ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * _thisAdjusted = reinterpret_cast<ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *>(__this + 1);
	return ValueTuple_2_CompareTo_m7D62DBACBCD7D6C53E8C86C1CC1863AF4C7D3253(_thisAdjusted, ___other0, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mE82D0EABA63B5FA33C3C81C53A410C3833C3DF99_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mE82D0EABA63B5FA33C3C81C53A410C3833C3DF99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  L_2 = (*(ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *)__this);
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_2);
		NullCheck((RuntimeObject *)L_3);
		Type_t * L_4 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_3, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_4);
		String_t* L_6 = SR_Format_mCDBB594267CC224AB2A69540BBA598151F0642C7((String_t*)_stringLiteralABFC501D210FA3194339D5355419BE3336C98217, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_7 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_7, (String_t*)L_6, (String_t*)_stringLiteralD0941E68DA8F38151FF86A61FC59F7C5CF9FCAA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mE82D0EABA63B5FA33C3C81C53A410C3833C3DF99_RuntimeMethod_var);
	}

IL_0037:
	{
		RuntimeObject * L_8 = ___other0;
		V_0 = (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE )((*(ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *)((ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *)UnBox(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_9 = ___comparer1;
		RuntimeObject * L_10 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  L_11 = V_0;
		RuntimeObject * L_12 = (RuntimeObject *)L_11.get_Item1_0();
		NullCheck((RuntimeObject*)L_9);
		int32_t L_13 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (RuntimeObject *)L_10, (RuntimeObject *)L_12);
		V_1 = (int32_t)L_13;
		int32_t L_14 = V_1;
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_15 = V_1;
		return L_15;
	}

IL_0060:
	{
		RuntimeObject* L_16 = ___comparer1;
		RuntimeObject * L_17 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE  L_18 = V_0;
		RuntimeObject * L_19 = (RuntimeObject *)L_18.get_Item2_1();
		NullCheck((RuntimeObject*)L_16);
		int32_t L_20 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95_il2cpp_TypeInfo_var, (RuntimeObject*)L_16, (RuntimeObject *)L_17, (RuntimeObject *)L_19);
		return L_20;
	}
}
extern "C"  int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mE82D0EABA63B5FA33C3C81C53A410C3833C3DF99_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * _thisAdjusted = reinterpret_cast<ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *>(__this + 1);
	return ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mE82D0EABA63B5FA33C3C81C53A410C3833C3DF99(_thisAdjusted, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_mDBC9EA91689835ABBD95A1E57DC6373D343947E2_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		RuntimeObject ** L_0 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
	}
	{
		V_0 = (RuntimeObject *)(*(RuntimeObject **)G_B1_0);
		RuntimeObject * L_2 = V_0;
		G_B2_0 = (&V_0);
		if (L_2)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_3;
	}

IL_0035:
	{
		RuntimeObject ** L_4 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_5 = V_1;
		G_B5_0 = L_4;
		G_B5_1 = G_B4_0;
		if (L_5)
		{
			G_B7_0 = L_4;
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
	}
	{
		V_1 = (RuntimeObject *)(*(RuntimeObject **)G_B5_0);
		RuntimeObject * L_6 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		if (L_6)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_7;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		int32_t L_8 = ValueTuple_CombineHashCodes_m43A0AF2B2A3E284D995D8D8FC386D13D19A3F5CC((int32_t)G_B8_1, (int32_t)G_B8_0, /*hidden argument*/NULL);
		return L_8;
	}
}
extern "C"  int32_t ValueTuple_2_GetHashCode_mDBC9EA91689835ABBD95A1E57DC6373D343947E2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * _thisAdjusted = reinterpret_cast<ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *>(__this + 1);
	return ValueTuple_2_GetHashCode_mDBC9EA91689835ABBD95A1E57DC6373D343947E2(_thisAdjusted, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m663F6586855302E7608620F1789CFC7A019439BB_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1 = ValueTuple_2_GetHashCodeCore_mAF7F89E5DC73E33AF443FF3F96962F500DA9DAA9((ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *)(ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_1;
	}
}
extern "C"  int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m663F6586855302E7608620F1789CFC7A019439BB_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * _thisAdjusted = reinterpret_cast<ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *>(__this + 1);
	return ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m663F6586855302E7608620F1789CFC7A019439BB(_thisAdjusted, ___comparer0, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_mAF7F89E5DC73E33AF443FF3F96962F500DA9DAA9_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_2_GetHashCodeCore_mAF7F89E5DC73E33AF443FF3F96962F500DA9DAA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item2_1();
		NullCheck((RuntimeObject*)L_3);
		int32_t L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		int32_t L_6 = ValueTuple_CombineHashCodes_m43A0AF2B2A3E284D995D8D8FC386D13D19A3F5CC((int32_t)L_2, (int32_t)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
extern "C"  int32_t ValueTuple_2_GetHashCodeCore_mAF7F89E5DC73E33AF443FF3F96962F500DA9DAA9_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * _thisAdjusted = reinterpret_cast<ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *>(__this + 1);
	return ValueTuple_2_GetHashCodeCore_mAF7F89E5DC73E33AF443FF3F96962F500DA9DAA9(_thisAdjusted, ___comparer0, method);
}
// System.String System.ValueTuple`2<System.Object,System.Object>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_mB9C389C92D5BDE41FF6641BADDB038D1F8A3AEE6_gshared (ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_2_ToString_mB9C389C92D5BDE41FF6641BADDB038D1F8A3AEE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B3_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B3_3 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B1_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B1_3 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B2_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B4_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B4_3 = NULL;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B7_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B7_3 = NULL;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B5_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B5_3 = NULL;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B6_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B8_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B8_3 = NULL;
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)L_1;
		RuntimeObject ** L_3 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_4 = V_0;
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003a;
		}
	}
	{
		V_0 = (RuntimeObject *)(*(RuntimeObject **)G_B1_0);
		RuntimeObject * L_5 = V_0;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		if (L_5)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003a;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0045;
	}

IL_003a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_6;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)G_B4_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)L_7;
		RuntimeObject ** L_9 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_10 = V_1;
		G_B5_0 = L_9;
		G_B5_1 = 3;
		G_B5_2 = L_8;
		G_B5_3 = L_8;
		if (L_10)
		{
			G_B7_0 = L_9;
			G_B7_1 = 3;
			G_B7_2 = L_8;
			G_B7_3 = L_8;
			goto IL_007a;
		}
	}
	{
		V_1 = (RuntimeObject *)(*(RuntimeObject **)G_B5_0);
		RuntimeObject * L_11 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		if (L_11)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007a;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0085;
	}

IL_007a:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_12;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)G_B8_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A);
		String_t* L_14 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* ValueTuple_2_ToString_mB9C389C92D5BDE41FF6641BADDB038D1F8A3AEE6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE * _thisAdjusted = reinterpret_cast<ValueTuple_2_tD870A19E4522EBDF165C22F9F2B7251A228D8ACE *>(__this + 1);
	return ValueTuple_2_ToString_mB9C389C92D5BDE41FF6641BADDB038D1F8A3AEE6(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_mA3C18A22B57202EE83921ED0909FCB6CD4154409_gshared (CachedInvokableCall_1_tD9D6B42DED8777941C4EE375EDB67DF2B8F445D7 * __this, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, MethodInfo_t * ___theFunction1, bool ___argument2, const RuntimeMethod* method)
{
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this);
		((  void (*) (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		bool L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m5B12C225C3222632C784AB1B9E4D72AA44FF16D0_gshared (CachedInvokableCall_1_tD9D6B42DED8777941C4EE375EDB67DF2B8F445D7 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this);
		((  void (*) (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_mD178E9486AB5CE271209EDFFB7B585BCFC3540F3_gshared (CachedInvokableCall_1_tD9D6B42DED8777941C4EE375EDB67DF2B8F445D7 * __this, bool ___arg00, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this);
		((  void (*) (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m356112807416B358ED661EBB9CF67BCCE0B19394_gshared (CachedInvokableCall_1_t6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6 * __this, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, MethodInfo_t * ___theFunction1, int32_t ___argument2, const RuntimeMethod* method)
{
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this);
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		int32_t L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_mE6AF058DE940B099197112058811BCCDE75A9ACC_gshared (CachedInvokableCall_1_t6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this);
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m11A4EA149C8447CBE9342AE0794B7ECC733C6319_gshared (CachedInvokableCall_1_t6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this);
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_mB15077A11BD14A961B3E106B55FA77B468269505_gshared (CachedInvokableCall_1_tF7F1670398EB759A3D4AFEB35F47850DCD7D00AD * __this, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, MethodInfo_t * ___theFunction1, RuntimeObject * ___argument2, const RuntimeMethod* method)
{
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this);
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject * L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m2B24B497363472EE321923536ED3F9EC155764D7_gshared (CachedInvokableCall_1_tF7F1670398EB759A3D4AFEB35F47850DCD7D00AD * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this);
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m00E6F009BC9A2005BBF11A5E905CB25FEA4BE367_gshared (CachedInvokableCall_1_tF7F1670398EB759A3D4AFEB35F47850DCD7D00AD * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this);
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m208307DC945B843624A47886B3AB95A974528DB6_gshared (CachedInvokableCall_1_t853CA34F3C49BD37B91F7733304984E8B1FDEF0A * __this, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, MethodInfo_t * ___theFunction1, float ___argument2, const RuntimeMethod* method)
{
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this);
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		float L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m02CB2404196A61986E0CBD8DADC2A635CC4FADE1_gshared (CachedInvokableCall_1_t853CA34F3C49BD37B91F7733304984E8B1FDEF0A * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this);
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this, (float)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_mCE251DA79E23FF9DA0D0FD7FD9939488748907A5_gshared (CachedInvokableCall_1_t853CA34F3C49BD37B91F7733304984E8B1FDEF0A * __this, float ___arg00, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this);
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this, (float)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_mD592EB69D1FB0A9CF5AB24ED4C76E3BE3AD2F91E_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_mD592EB69D1FB0A9CF5AB24ED4C76E3BE3AD2F91E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t * L_6 = NetFxCoreExtensions_CreateDelegate_m8FD387039F907982CB716046CB4501160B16D381((MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		NullCheck((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this);
		((  void (*) (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m6B758D360877DD24606999DB8F603F4CA2EC6F80_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___action0, const RuntimeMethod* method)
{
	{
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, /*hidden argument*/NULL);
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = ___action0;
		NullCheck((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this);
		((  void (*) (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m4E82F43967A7055293BFFED4E5F61243811A64FD_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * V_0 = NULL;
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * V_1 = NULL;
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_0;
	}

IL_0007:
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_1 = V_0;
		V_1 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_1;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC ** L_2 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC **)__this->get_address_of_Delegate_0();
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_3 = V_1;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1((Delegate_t *)L_3, (Delegate_t *)L_4, /*hidden argument*/NULL);
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_6 = V_0;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *>((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC **)(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC **)L_2, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_6);
		V_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_7;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_8 = V_0;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_8) == ((RuntimeObject*)(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m7CDAE49CF684DAF1D43E52D254A87D0D212DD3D8_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * V_0 = NULL;
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * V_1 = NULL;
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_0;
	}

IL_0007:
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_1 = V_0;
		V_1 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_1;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC ** L_2 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC **)__this->get_address_of_Delegate_0();
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_3 = V_1;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D((Delegate_t *)L_3, (Delegate_t *)L_4, /*hidden argument*/NULL);
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_6 = V_0;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *>((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC **)(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC **)L_2, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_6);
		V_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_7;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_8 = V_0;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_8) == ((RuntimeObject*)(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_mD853B78F92A849FE113AE5A310944708C59AB2B0_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_mD853B78F92A849FE113AE5A310944708C59AB2B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_1, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_1_Invoke_mD853B78F92A849FE113AE5A310944708C59AB2B0_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_5 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		bool L_6 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_7 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_7);
		((  void (*) (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_7, (bool)((*(bool*)((bool*)UnBox(L_10, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(T1)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m604D33CCBE0C77896F73A6055B71E0621C933B2F_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, bool ___args00, const RuntimeMethod* method)
{
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_2 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		bool L_3 = ___args00;
		NullCheck((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_2);
		((  void (*) (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_2, (bool)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m1E75C7EC325D570FDA089492841E90F9268C23B9_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_3 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m648EA8E13DAFFCBF92AA46F62AF5124386A905A0((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m1BF8BFBAE0C6EF1B38DC415ABDD2BB4E583CBA6A_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m1BF8BFBAE0C6EF1B38DC415ABDD2BB4E583CBA6A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t * L_6 = NetFxCoreExtensions_CreateDelegate_m8FD387039F907982CB716046CB4501160B16D381((MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		NullCheck((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this);
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m5FFF6B89AD1D4AE06939C3B82377B4AF048C1817_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___action0, const RuntimeMethod* method)
{
	{
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___action0;
		NullCheck((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this);
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_mFE3BB48BDA767C8D30DCBBDF05E6FEA3BAEDE250_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * V_0 = NULL;
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * V_1 = NULL;
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_1 = V_0;
		V_1 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_1;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F ** L_2 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F **)__this->get_address_of_Delegate_0();
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_3 = V_1;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1((Delegate_t *)L_3, (Delegate_t *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_6 = V_0;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *>((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F **)(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F **)L_2, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_6);
		V_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_7;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_8 = V_0;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_8) == ((RuntimeObject*)(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_mF1D0E0E38759A51DECAAF3161E33308F93DED24F_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * V_0 = NULL;
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * V_1 = NULL;
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_1 = V_0;
		V_1 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_1;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F ** L_2 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F **)__this->get_address_of_Delegate_0();
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_3 = V_1;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D((Delegate_t *)L_3, (Delegate_t *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_6 = V_0;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *>((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F **)(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F **)L_2, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_6);
		V_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_7;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_8 = V_0;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_8) == ((RuntimeObject*)(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m48AB6731BEF540A6B1F23189413840859F56D212_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m48AB6731BEF540A6B1F23189413840859F56D212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_1, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_1_Invoke_m48AB6731BEF540A6B1F23189413840859F56D212_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_5 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		bool L_6 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_7 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_7);
		((  void (*) (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_7, (int32_t)((*(int32_t*)((int32_t*)UnBox(L_10, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m738E6C677B8DD40E3E708C81B8354EA85AEFFB04_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, int32_t ___args00, const RuntimeMethod* method)
{
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_2 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		int32_t L_3 = ___args00;
		NullCheck((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_2);
		((  void (*) (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m61994A78233EE8233DBAA7B6912E18829A09B150_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_3 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m648EA8E13DAFFCBF92AA46F62AF5124386A905A0((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m670F85A0ED4D975C93265F6969B9C1C06A87E8D2_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m670F85A0ED4D975C93265F6969B9C1C06A87E8D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t * L_6 = NetFxCoreExtensions_CreateDelegate_m8FD387039F907982CB716046CB4501160B16D381((MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		NullCheck((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this);
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m476D3C83264B8980782F15E2A538B679279F61A1_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___action0, const RuntimeMethod* method)
{
	{
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___action0;
		NullCheck((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this);
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m092F0A272D937E03EB590E19DC2F2B788961018F_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_0 = NULL;
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_1 = NULL;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_1 = V_0;
		V_1 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** L_2 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_3 = V_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1((Delegate_t *)L_3, (Delegate_t *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = V_0;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *>((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)L_2, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6);
		V_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_7;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_8 = V_0;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8) == ((RuntimeObject*)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m2ABA630C73B024EB3A47100C48B91D1BE75C117C_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_0 = NULL;
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_1 = NULL;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_1 = V_0;
		V_1 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** L_2 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_3 = V_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D((Delegate_t *)L_3, (Delegate_t *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = V_0;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *>((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)L_2, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6);
		V_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_7;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_8 = V_0;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8) == ((RuntimeObject*)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_1, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_5 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		bool L_6 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_7 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_7);
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_7, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_10, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_mD81223A0EAE1E7988803B8F92DB9090ECFA259FE_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, RuntimeObject * ___args00, const RuntimeMethod* method)
{
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		RuntimeObject * L_3 = ___args00;
		NullCheck((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_2);
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_2, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_mB3AD5A37531368D7FC5F37AD22993EE25951B71F_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_3 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m648EA8E13DAFFCBF92AA46F62AF5124386A905A0((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_mD2F6B2A04293002F65F10FC1E15CA20CE07D39A6_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_mD2F6B2A04293002F65F10FC1E15CA20CE07D39A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t * L_6 = NetFxCoreExtensions_CreateDelegate_m8FD387039F907982CB716046CB4501160B16D381((MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		NullCheck((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this);
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m67D765DB693A73CCBB66BD79C6A05E92B006B19E_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___action0, const RuntimeMethod* method)
{
	{
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = ___action0;
		NullCheck((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this);
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_mFE30AB74153DFEDBDAAC58B591F3E428C728AE0A_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_0 = NULL;
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_1 = NULL;
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_1 = V_0;
		V_1 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 ** L_2 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_3 = V_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1((Delegate_t *)L_3, (Delegate_t *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_6 = V_0;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *>((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)L_2, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_6);
		V_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_7;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_8 = V_0;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_8) == ((RuntimeObject*)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_mC3043D0ED54DD94A81FDC076B97C12CC0D9A16F5_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_0 = NULL;
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_1 = NULL;
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_1 = V_0;
		V_1 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 ** L_2 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_3 = V_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D((Delegate_t *)L_3, (Delegate_t *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_6 = V_0;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *>((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)L_2, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_6);
		V_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_7;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_8 = V_0;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_8) == ((RuntimeObject*)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_1, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_5 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		bool L_6 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_7 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_7);
		((  void (*) (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_7, (float)((*(float*)((float*)UnBox(L_10, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(T1)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m02605F267CE1A72199776BF4E08D4C81A08DF499_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, float ___args00, const RuntimeMethod* method)
{
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_2 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		float L_3 = ___args00;
		NullCheck((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_2);
		((  void (*) (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_2, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m5F8CC01C8996F78D450562A0A4B128DA2D4E3A0A_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_3 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m648EA8E13DAFFCBF92AA46F62AF5124386A905A0((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_2__ctor_mE80CFA8D8605680746EBD7DC371B30DD42759D38_gshared (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_2__ctor_mE80CFA8D8605680746EBD7DC371B30DD42759D38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t * L_6 = NetFxCoreExtensions_CreateDelegate_m8FD387039F907982CB716046CB4501160B16D381((MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_gshared (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_1, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = ___args0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		RuntimeObject * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_8 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		bool L_9 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_10 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = ___args0;
		NullCheck(L_11);
		int32_t L_12 = 0;
		RuntimeObject * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = ___args0;
		NullCheck(L_14);
		int32_t L_15 = 1;
		RuntimeObject * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck((UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_10);
		((  void (*) (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_10, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_16, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0050:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_2_Find_m26B7D50B1D4203B1E9539D5BE727050009CDBEA5_gshared (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_0 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_3 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m648EA8E13DAFFCBF92AA46F62AF5124386A905A0((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_3__ctor_mA26C0B9D52E628D915E0C705A735F226BBA9B3EE_gshared (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_3__ctor_mA26C0B9D52E628D915E0C705A735F226BBA9B3EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t * L_6 = NetFxCoreExtensions_CreateDelegate_m8FD387039F907982CB716046CB4501160B16D381((MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_gshared (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_1, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = ___args0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		RuntimeObject * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9 = 2;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_11 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		bool L_12 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0060;
		}
	}
	{
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_13 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = ___args0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		RuntimeObject * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = ___args0;
		NullCheck(L_17);
		int32_t L_18 = 1;
		RuntimeObject * L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = ___args0;
		NullCheck(L_20);
		int32_t L_21 = 2;
		RuntimeObject * L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck((UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)L_13);
		((  void (*) (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)L_13, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_16, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_19, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0060:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_3_Find_mC8983BEEB7D91A851B167DA159F31647EF0FD7CE_gshared (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_0 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_3 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m648EA8E13DAFFCBF92AA46F62AF5124386A905A0((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_4__ctor_mDF3741C3CF51E23313E2DF7062488C430F25EEF0_gshared (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_4__ctor_mDF3741C3CF51E23313E2DF7062488C430F25EEF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t * L_6 = NetFxCoreExtensions_CreateDelegate_m8FD387039F907982CB716046CB4501160B16D381((MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_gshared (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)4)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_1, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = ___args0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		RuntimeObject * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9 = 2;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = ___args0;
		NullCheck(L_11);
		int32_t L_12 = 3;
		RuntimeObject * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_14 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		bool L_15 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0070;
		}
	}
	{
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_16 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = ___args0;
		NullCheck(L_17);
		int32_t L_18 = 0;
		RuntimeObject * L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = ___args0;
		NullCheck(L_20);
		int32_t L_21 = 1;
		RuntimeObject * L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = ___args0;
		NullCheck(L_23);
		int32_t L_24 = 2;
		RuntimeObject * L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = ___args0;
		NullCheck(L_26);
		int32_t L_27 = 3;
		RuntimeObject * L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck((UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)L_16);
		((  void (*) (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)L_16, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_19, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_25, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_28, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0070:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_4_Find_m31A9DD32912CC3F597F67C5B123F65D8D83BCB55_gshared (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_0 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_3 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m648EA8E13DAFFCBF92AA46F62AF5124386A905A0((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m2E86E0D0DEBECD002A246E5E15032AD5C31D573B_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m6BDDE2C02C9B1B969AF9C8E3283A99EDF725308E_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, bool ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
							else
								GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
							else
								VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
						else
							GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
						else
							VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m4B1EE21C25114A9D9BAFC50E3F2D67E5F665F5AC_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, bool ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m4B1EE21C25114A9D9BAFC50E3F2D67E5F665F5AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m03E7697F347F98D3FD8952EC0CE1A714D1FA20BB_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mFA3B154991DCD05A05EEF0F8A4ADD01D48BF5F74_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m57B06346DBA8E9878C2A3589AB5F4AACDF0BD1BD_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
							else
								GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
							else
								VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
						else
							GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
						else
							VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m383296E02ACDA4892A49F2B148201A5A37D9F57F_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, int32_t ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m383296E02ACDA4892A49F2B148201A5A37D9F57F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_mC40753D8C3D37080677F4956B214A840380FF011_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF6AE3BA9395C61DE1466BE7BB863A77F3584EEC3_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m2C1F34094D739A035851500EBC9355B92734EAC8_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
			else if (___parameterCount != 1)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___arg00);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___arg00);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
							else
								GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
							else
								VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___arg00);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___arg00);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
						else
							GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
						else
							VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m0E6F26B70A39427E3FF824D0C1A2B4A05DC93781_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject * ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg00;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m8A8457E16443B452AC53C84F32402BAC6B93E6FF_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mFC7714F2FF67E4A6A886734EF21DB0CEC8D92083_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m23BC5C707027B6C49AE29FB21A4F9F9F0CA72648_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, float ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
							else
								GenericVirtActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
							else
								VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
						else
							GenericVirtActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
						else
							VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mC8A9A9332EEEA81428669FAD060934954B73DDCB_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, float ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_mC8A9A9332EEEA81428669FAD060934954B73DDCB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m03AE0A9995BF8D246D2317542428D220C55160B9_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m35B0A0067C115007E10FBD8E008AE5A04F766BC7_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m28278C6E83173B3BC3CBC240F14DD94D721E78C2_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00);
							else
								GenericVirtActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
							else
								VirtActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00);
						else
							GenericVirtActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
						else
							VirtActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m5DEFA82EDDF619690E524720C4128D58F303EBCB_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m5DEFA82EDDF619690E524720C4128D58F303EBCB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m1B23318369E0A45239A06ACB2AEF27BB6AF8B3A2_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2__ctor_mF4DB369856F884CA526A897CB6E86FE396844206_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m06DA8061B2E6984DD80B43D6080FC181B3231267_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
			else if (___parameterCount != 2)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
							else
								GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11);
							else
								VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
							else
								GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
							else
								VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
						else
							GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11);
						else
							VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
						else
							GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
						else
							VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_mCF4D420D2E1AE5C6A9CBDA25C21702141DF45B40_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m4C1A8B33A480934E69D745B3A99F88E761BF16E2_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m09EBA3BBF14887A401E08C9C0360EF0BD037C918_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_mADF341B796508D58BEDF95CC8C087F2827F5105D_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
							else
								GenericVirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
							else
								VirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
						else
							GenericVirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
						else
							VirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m5F2C976EFE2F0144C74BB2FE1E3E2247617C81E0_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, int32_t ___arg11, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_m5F2C976EFE2F0144C74BB2FE1E3E2247617C81E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m4D471FEA8177D598ED108C5B2A9A35687D439D09_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2__ctor_mDC07A3AA1306CA33C495D2954233DBB9B3BB6A04_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m4E5A5335E63C942B335D047296080EB8DA73FB99_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
							else
								GenericVirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
							else
								VirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
						else
							GenericVirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
						else
							VirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_mC72F0DCBBB077E215EC9ADA58D300288CC39E069_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg11, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_mC72F0DCBBB077E215EC9ADA58D300288CC39E069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_mAF3A961DD4A745EB47F2C7056216F11449C74F82_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_3__ctor_mD65DD6F2A7160759B11B9E9402E42889B0308B7C_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_3_Invoke_m4CC353FB62BF2996DDB0BDE4B517D4CBAB1388B2_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
				}
			}
			else if (___parameterCount != 3)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
							else
								GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22);
							else
								VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
							else
								GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
							else
								VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
						else
							GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22);
						else
							VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
						else
							GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
						else
							VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_3_BeginInvoke_mF0A7FADCA696D28F879DBE8BB21E0107020310CB_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_3_EndInvoke_m40F664442966F777B243BE41660DF4D97FCF9A24_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_4__ctor_mD03F869374C55A6F3391C0F2E80DF4DEE5EA1C8A_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_4_Invoke_m91D7864FF201914C04AEC6B34DD6E7C62C367FF8_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 4)
				{
					// open
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
			}
			else if (___parameterCount != 4)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
							else
								GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
							else
								VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
							else
								GenericVirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
							else
								VirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
						else
							GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
						else
							VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
						else
							GenericVirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
						else
							VirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_4_BeginInvoke_mCED3B2E5714E6AB57D5B05030DBE0851E6970061_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	__d_args[3] = ___arg33;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_4_EndInvoke_mAA51C4DFA09F01F0AF79FD6A3419925FEE1015EB_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m1EF01690E1F8F81E7C190F8D9610573D5E59490C_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m61C019869D6764D437BD531635FDF61B68471967_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m16C5BBB88B05379272D04EB85D66E67C83E8BDBF_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_2 = ___call0;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m648EA8E13DAFFCBF92AA46F62AF5124386A905A0((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2EB10E941A967C89B4297A9278FBA88053A2D828_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m2EB10E941A967C89B4297A9278FBA88053A2D828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m0E8B5D5884056FA9248EB6AF8D3243F903735B92_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_2 = (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m8187D8D7A87F912D707BCB8913E01970F7D8F453_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___action0;
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_1 = (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_5 = V_2;
		int32_t L_6 = ___arg00;
		NullCheck((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)L_5);
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1) */, (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)L_5, (int32_t)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_9 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_9, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_14 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_14;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		int32_t L_18 = ___arg00;
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_21 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_25 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25);
		int32_t L_26 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m9E1606EB0E08E6B0ECACA780B7AD424D113C8334_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_mD5524309E29952671D52EA873E3A0C63EF9C4455_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = ___call0;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m648EA8E13DAFFCBF92AA46F62AF5124386A905A0((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_mDD1047ED8F4A1CABD0ACBC76D73B344DCDAC3126_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_mDD1047ED8F4A1CABD0ACBC76D73B344DCDAC3126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m959B9FFD3D5FEE00DC93EDA9BE5924BDA8217541_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_2 = (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m1EE511D98201F0DE08C472BFB04DAC8E846243BE_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___action0;
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_1 = (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_5 = V_2;
		RuntimeObject * L_6 = ___arg00;
		NullCheck((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)L_5);
		VirtActionInvoker1< RuntimeObject * >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1) */, (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)L_5, (RuntimeObject *)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_9 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_9, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_14 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_14;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		RuntimeObject * L_18 = ___arg00;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_19 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_19);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_19, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_20);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_21 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_22 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_23 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_23);
		int32_t L_24 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_23, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m146206128006F3071AEC91A73E3DDFDC34A53F2D_gshared (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_gshared (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		MethodInfo_t * L_9 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_9;
		goto IL_002e;
	}

IL_002e:
	{
		MethodInfo_t * L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_2_GetDelegate_m4005C11561312B45709572CA1BB4D0EA630D0534_gshared (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * L_2 = (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_mF7A53B951222BC66BE6F471036270FC66C36FAA2_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_003b;
	}

IL_003b:
	{
		MethodInfo_t * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_3_GetDelegate_mDD941B02CC78310DE703586880CD8C926CF5EC2C_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * L_2 = (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_4__ctor_m04FBFD537FBAF349F05C24B6EB9360FF08685819_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)4);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_12 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_14 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (Type_t *)L_14);
		MethodInfo_t * L_15 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_12, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_15;
		goto IL_0048;
	}

IL_0048:
	{
		MethodInfo_t * L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_4_GetDelegate_mAD2A7239ECF210269A5974AE66F1CFDB13977F54_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * L_2 = (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

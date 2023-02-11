#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
178,
183,
184,
185,
186,
187,
188,
189,
191,
192,
252,
253,
255,
284,
285,
286,
306,
307,
308,
309,
310,
383,
384,
385,
388,
423,
424,
426,
428,
430,
432,
437,
445,
446,
447,
448,
449,
450,
451,
452,
453,
454,
584,
585,
592,
595,
597,
602,
603,
605,
606,
610,
611,
612,
613,
615,
616,
617,
620,
621,
624,
625,
626,
694,
695,
697,
705,
706,
707,
708,
709,
713,
714,
715,
716,
717,
718,
720,
721,
722,
724,
725,
726,
728,
931,
1105,
1106,
5277,
5278,
5280,
5281,
5282,
5283,
5284,
5286,
5288,
5290,
5291,
5292,
5299,
5301,
5305,
5306,
5308,
5310,
5312,
5323,
5332,
5333,
5335,
5336,
5337,
5338,
5339,
5341,
5343,
6270,
6274,
6276,
6277,
6278,
6279,
6318,
6319,
6320,
6321,
6340,
6341,
6342,
6343,
6376,
6426,
6429,
6438,
6439,
6440,
6696,
6698,
6699,
6728,
6729,
6730,
6745,
6751,
6758,
6768,
6771,
6842,
6851,
6852,
6853,
6854,
6855,
6856,
6863,
6876,
6896,
6897,
6905,
6907,
6914,
6915,
6918,
6920,
6925,
6931,
6932,
6939,
6941,
6951,
6954,
6955,
6956,
6966,
6977,
6983,
6984,
6985,
6987,
6988,
6998,
7016,
7032,
7033,
7052,
7082,
7083,
7443,
7444,
7582,
7819,
7820,
7827,
7828,
7829,
7834,
7896,
8054,
8055,
9195,
9214,
9221,
9222,
9224,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyExtensions_ApplyUpdate (int,int,int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 178,
ves_icall_System_Array_InternalCreate,
// token 183,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 184,
ves_icall_System_Array_CanChangePrimitive,
// token 185,
ves_icall_System_Array_FastCopy_raw,
// token 186,
ves_icall_System_Array_GetLength_raw,
// token 187,
ves_icall_System_Array_GetLowerBound_raw,
// token 188,
ves_icall_System_Array_GetGenericValue_icall,
// token 189,
ves_icall_System_Array_GetValueImpl_raw,
// token 191,
ves_icall_System_Array_SetValueImpl_raw,
// token 192,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 252,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 253,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 255,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 284,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 285,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 286,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 306,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 307,
ves_icall_System_Enum_ToObject_raw,
// token 308,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 309,
ves_icall_System_Enum_get_underlying_type_raw,
// token 310,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 383,
ves_icall_System_Environment_get_ProcessorCount,
// token 384,
ves_icall_System_Environment_get_TickCount,
// token 385,
ves_icall_System_Environment_get_TickCount64,
// token 388,
ves_icall_System_Environment_FailFast_raw,
// token 423,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 424,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 426,
ves_icall_System_GC_SuppressFinalize_raw,
// token 428,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 430,
ves_icall_System_GC_GetGCMemoryInfo,
// token 432,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 437,
ves_icall_System_Object_MemberwiseClone_raw,
// token 445,
ves_icall_System_Math_Abs_double,
// token 446,
ves_icall_System_Math_Ceiling,
// token 447,
ves_icall_System_Math_Cos,
// token 448,
ves_icall_System_Math_Floor,
// token 449,
ves_icall_System_Math_Log10,
// token 450,
ves_icall_System_Math_Pow,
// token 451,
ves_icall_System_Math_Sin,
// token 452,
ves_icall_System_Math_Sqrt,
// token 453,
ves_icall_System_Math_Tan,
// token 454,
ves_icall_System_Math_ModF,
// token 584,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 585,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 592,
ves_icall_RuntimeType_make_array_type_raw,
// token 595,
ves_icall_RuntimeType_make_byref_type_raw,
// token 597,
ves_icall_RuntimeType_MakePointerType_raw,
// token 602,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 603,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 605,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 606,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 610,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 611,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 612,
ves_icall_System_RuntimeType_getFullName_raw,
// token 613,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 615,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 616,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 617,
ves_icall_RuntimeType_GetFields_native_raw,
// token 620,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 621,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 624,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 625,
ves_icall_RuntimeType_get_Name_raw,
// token 626,
ves_icall_RuntimeType_get_Namespace_raw,
// token 694,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 695,
ves_icall_reflection_get_token_raw,
// token 697,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 705,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 706,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 707,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 708,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 709,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 713,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 714,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 715,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 716,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 717,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 718,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 720,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 721,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 722,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 724,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 725,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 726,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 728,
ves_icall_System_String_FastAllocateString_raw,
// token 931,
ves_icall_System_Type_internal_from_handle_raw,
// token 1105,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1106,
ves_icall_System_ValueType_Equals_raw,
// token 5277,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5278,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5280,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5281,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5282,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5283,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5284,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5286,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5288,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5290,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 5291,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5292,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 5299,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5301,
mono_monitor_exit_icall_raw,
// token 5305,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5306,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5308,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5310,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5312,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5323,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5332,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5333,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5335,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5336,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5337,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5338,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5339,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5341,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5343,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6270,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6274,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6276,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6277,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6278,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6279,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6318,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6319,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6320,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6321,
ves_icall_System_GCHandle_InternalSet_raw,
// token 6340,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 6341,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6342,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6343,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 6376,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6426,
mono_object_hash_icall_raw,
// token 6429,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 6438,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6439,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6440,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6696,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6698,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6699,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6728,
mono_digest_get_public_token,
// token 6729,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6730,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 6745,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6751,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6758,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6768,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6771,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 6842,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 6851,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 6852,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 6853,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 6854,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 6855,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 6856,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 6863,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 6876,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 6896,
ves_icall_reflection_get_token_raw,
// token 6897,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 6905,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 6907,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 6914,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 6915,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 6918,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 6920,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 6925,
ves_icall_reflection_get_token_raw,
// token 6931,
ves_icall_get_method_info_raw,
// token 6932,
ves_icall_get_method_attributes,
// token 6939,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 6941,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 6951,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 6954,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 6955,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 6956,
ves_icall_reflection_get_token_raw,
// token 6966,
ves_icall_InternalInvoke_raw,
// token 6977,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 6983,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 6984,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 6985,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 6987,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 6988,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 6998,
ves_icall_InternalInvoke_raw,
// token 7016,
ves_icall_reflection_get_token_raw,
// token 7032,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 7033,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 7052,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 7082,
ves_icall_reflection_get_token_raw,
// token 7083,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7443,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 7444,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 7582,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 7819,
ves_icall_ModuleBuilder_basic_init_raw,
// token 7820,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 7827,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 7828,
ves_icall_ModuleBuilder_getToken_raw,
// token 7829,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 7834,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 7896,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 8054,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 8055,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9195,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 9214,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 9221,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 9222,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 9224,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
0,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
};

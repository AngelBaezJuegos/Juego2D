void RegisterAllStrippedInternalCalls()
{
	//Start Registrations for type : Unity.Burst.LowLevel.BurstCompilerService

		//System.Void Unity.Burst.LowLevel.BurstCompilerService::Log(System.Void*,Unity.Burst.LowLevel.BurstCompilerService/BurstLogType,System.Byte*,System.Byte*,System.Int32)
		void Register_Unity_Burst_LowLevel_BurstCompilerService_Log();
		Register_Unity_Burst_LowLevel_BurstCompilerService_Log();

		//System.Void Unity.Burst.LowLevel.BurstCompilerService::ReloadAssemblySearchPathsForBurstInternal()
		void Register_Unity_Burst_LowLevel_BurstCompilerService_ReloadAssemblySearchPathsForBurstInternal();
		Register_Unity_Burst_LowLevel_BurstCompilerService_ReloadAssemblySearchPathsForBurstInternal();

		//System.Void Unity.Burst.LowLevel.BurstCompilerService::RuntimeLog(System.Void*,Unity.Burst.LowLevel.BurstCompilerService/BurstLogType,System.Byte*,System.Byte*,System.Int32)
		void Register_Unity_Burst_LowLevel_BurstCompilerService_RuntimeLog();
		Register_Unity_Burst_LowLevel_BurstCompilerService_RuntimeLog();

		//System.Void* Unity.Burst.LowLevel.BurstCompilerService::GetOrCreateSharedMemory(System.Int64,System.Int64,System.UInt32,System.UInt32)
		void Register_Unity_Burst_LowLevel_BurstCompilerService_GetOrCreateSharedMemory();
		Register_Unity_Burst_LowLevel_BurstCompilerService_GetOrCreateSharedMemory();

	//End Registrations for type : Unity.Burst.LowLevel.BurstCompilerService

	//Start Registrations for type : Unity.Collections.LowLevel.Unsafe.UnsafeUtility

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::FreeTracked(System.Void*,Unity.Collections.Allocator)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_FreeTracked();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_FreeTracked();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpy();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpy();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemSet(System.Void*,System.Byte,System.Int64)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemSet();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemSet();

		//System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MallocTracked(System.Int64,System.Int32,Unity.Collections.Allocator,System.Int32,System.IntPtr)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MallocTracked();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MallocTracked();

	//End Registrations for type : Unity.Collections.LowLevel.Unsafe.UnsafeUtility

	//Start Registrations for type : Unity.Jobs.JobHandle

		//System.Void Unity.Jobs.JobHandle::ScheduleBatchedJobs()
		void Register_Unity_Jobs_JobHandle_ScheduleBatchedJobs();
		Register_Unity_Jobs_JobHandle_ScheduleBatchedJobs();

	//End Registrations for type : Unity.Jobs.JobHandle

	//Start Registrations for type : Unity.Jobs.LowLevel.Unsafe.JobsUtility

		//System.Boolean Unity.Jobs.LowLevel.Unsafe.JobsUtility::get_IsExecutingJob()
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_get_IsExecutingJob();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_get_IsExecutingJob();

		//System.Int32 Unity.Jobs.LowLevel.Unsafe.JobsUtility::get_ThreadIndex()
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_get_ThreadIndex();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_get_ThreadIndex();

		//System.Int32 Unity.Jobs.LowLevel.Unsafe.JobsUtility::get_ThreadIndexCount()
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_get_ThreadIndexCount();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_get_ThreadIndexCount();

		//System.IntPtr Unity.Jobs.LowLevel.Unsafe.JobsUtility::CreateJobReflectionData(System.Type,System.Type,System.Object,System.Object,System.Object)
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_CreateJobReflectionData();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_CreateJobReflectionData();

	//End Registrations for type : Unity.Jobs.LowLevel.Unsafe.JobsUtility

	//Start Registrations for type : Unity.Loading.LowLevel.LoadingResponseQueue

		//System.Int32 Unity.Loading.LowLevel.LoadingResponseQueue::ResponseQueue_ConsumeResults_Injected(Unity.Loading.LowLevel.LoadingResponseQueue&,Unity.Loading.LowLevel.AsyncResult*,System.Int32)
		void Register_Unity_Loading_LowLevel_LoadingResponseQueue_ResponseQueue_ConsumeResults_Injected();
		Register_Unity_Loading_LowLevel_LoadingResponseQueue_ResponseQueue_ConsumeResults_Injected();

		//System.Void Unity.Loading.LowLevel.LoadingResponseQueue::ResponseQueue_Create_Injected(Unity.Loading.LowLevel.LoadingResponseQueue&)
		void Register_Unity_Loading_LowLevel_LoadingResponseQueue_ResponseQueue_Create_Injected();
		Register_Unity_Loading_LowLevel_LoadingResponseQueue_ResponseQueue_Create_Injected();

		//System.Void Unity.Loading.LowLevel.LoadingResponseQueue::ResponseQueue_Release_Injected(Unity.Loading.LowLevel.LoadingResponseQueue&)
		void Register_Unity_Loading_LowLevel_LoadingResponseQueue_ResponseQueue_Release_Injected();
		Register_Unity_Loading_LowLevel_LoadingResponseQueue_ResponseQueue_Release_Injected();

	//End Registrations for type : Unity.Loading.LowLevel.LoadingResponseQueue

	//Start Registrations for type : Unity.Loading.LowLevel.NativeLoadingSystem

		//System.Void Unity.Loading.LowLevel.NativeLoadingSystem::ReleaseAsync_Injected(Unity.Loading.LowLevel.ResourceHandle*,System.Int32,Unity.Loading.LowLevel.LoadingResponseQueue&)
		void Register_Unity_Loading_LowLevel_NativeLoadingSystem_ReleaseAsync_Injected();
		Register_Unity_Loading_LowLevel_NativeLoadingSystem_ReleaseAsync_Injected();

		//System.Void Unity.Loading.LowLevel.NativeLoadingSystem::WaitForReleaseCompletion(Unity.Loading.LowLevel.ResourceHandle*,System.Int32)
		void Register_Unity_Loading_LowLevel_NativeLoadingSystem_WaitForReleaseCompletion();
		Register_Unity_Loading_LowLevel_NativeLoadingSystem_WaitForReleaseCompletion();

	//End Registrations for type : Unity.Loading.LowLevel.NativeLoadingSystem

	//Start Registrations for type : Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility

		//System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker_Injected(UnityEngine.Bindings.ManagedSpanWrapper&,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
		void Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_CreateMarker_Injected();
		Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_CreateMarker_Injected();

		//System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker__Unmanaged(System.Byte*,System.Int32,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
		void Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_CreateMarker__Unmanaged();
		Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_CreateMarker__Unmanaged();

		//System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::GetOrCreateMemLabel__Unmanaged(System.Byte*,System.Int32,System.Byte*,System.Int32)
		void Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_GetOrCreateMemLabel__Unmanaged();
		Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_GetOrCreateMemLabel__Unmanaged();

		//System.UInt16 Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateCategory__Unmanaged(System.Byte*,System.Int32,Unity.Profiling.ProfilerCategoryColor)
		void Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_CreateCategory__Unmanaged();
		Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_CreateCategory__Unmanaged();

		//System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
		void Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_BeginSample();
		Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_BeginSample();

		//System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
		void Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_EndSample();
		Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_EndSample();

		//System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::SetMarkerMetadata__Unmanaged(System.IntPtr,System.Int32,System.Byte*,System.Int32,System.Byte,System.Byte)
		void Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_SetMarkerMetadata__Unmanaged();
		Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_SetMarkerMetadata__Unmanaged();

		//System.Void* Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateCounterValue__Unmanaged(System.IntPtr&,System.Byte*,System.Int32,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Byte,System.Byte,System.Int32,Unity.Profiling.ProfilerCounterOptions)
		void Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_CreateCounterValue__Unmanaged();
		Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_CreateCounterValue__Unmanaged();

	//End Registrations for type : Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility

	//Start Registrations for type : UnityEngine.AnimationCurve

		//System.Boolean UnityEngine.AnimationCurve::Internal_Equals_Injected(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AnimationCurve_Internal_Equals_Injected();
		Register_UnityEngine_AnimationCurve_Internal_Equals_Injected();

		//System.Int32 UnityEngine.AnimationCurve::GetHashCode_Injected(System.IntPtr)
		void Register_UnityEngine_AnimationCurve_GetHashCode_Injected();
		Register_UnityEngine_AnimationCurve_GetHashCode_Injected();

		//System.IntPtr UnityEngine.AnimationCurve::Internal_Create_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_AnimationCurve_Internal_Create_Injected();
		Register_UnityEngine_AnimationCurve_Internal_Create_Injected();

		//System.Void UnityEngine.AnimationCurve::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_AnimationCurve_Internal_Destroy();
		Register_UnityEngine_AnimationCurve_Internal_Destroy();

	//End Registrations for type : UnityEngine.AnimationCurve

	//Start Registrations for type : UnityEngine.Application

		//System.Void UnityEngine.Application::get_absoluteURL_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Application_get_absoluteURL_Injected();
		Register_UnityEngine_Application_get_absoluteURL_Injected();

		//System.Void UnityEngine.Application::get_streamingAssetsPath_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Application_get_streamingAssetsPath_Injected();
		Register_UnityEngine_Application_get_streamingAssetsPath_Injected();

		//System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
		void Register_UnityEngine_Application_set_runInBackground();
		Register_UnityEngine_Application_set_runInBackground();

	//End Registrations for type : UnityEngine.Application

	//Start Registrations for type : UnityEngine.AsyncOperation

		//System.Void UnityEngine.AsyncOperation::InternalDestroy(System.IntPtr)
		void Register_UnityEngine_AsyncOperation_InternalDestroy();
		Register_UnityEngine_AsyncOperation_InternalDestroy();

		//System.Void UnityEngine.AsyncOperation::InternalSetManagedObject(System.IntPtr,UnityEngine.AsyncOperation)
		void Register_UnityEngine_AsyncOperation_InternalSetManagedObject();
		Register_UnityEngine_AsyncOperation_InternalSetManagedObject();

	//End Registrations for type : UnityEngine.AsyncOperation

	//Start Registrations for type : UnityEngine.Audio.SampleProviderBindings

		//System.Void* UnityEngine.Audio.SampleProviderBindings::CreateGeneratorHeader_Injected(System.IntPtr,System.Void*,UnityEngine.AudioConfiguration*)
		void Register_UnityEngine_Audio_SampleProviderBindings_CreateGeneratorHeader_Injected();
		Register_UnityEngine_Audio_SampleProviderBindings_CreateGeneratorHeader_Injected();

	//End Registrations for type : UnityEngine.Audio.SampleProviderBindings

	//Start Registrations for type : UnityEngine.Audio.ScriptableProcessorBindings

		//System.Boolean UnityEngine.Audio.ScriptableProcessorBindings::CheckProcessorExistsInternal_Injected(UnityEngine.Audio.DualThreadHandle&,System.Void*)
		void Register_UnityEngine_Audio_ScriptableProcessorBindings_CheckProcessorExistsInternal_Injected();
		Register_UnityEngine_Audio_ScriptableProcessorBindings_CheckProcessorExistsInternal_Injected();

	//End Registrations for type : UnityEngine.Audio.ScriptableProcessorBindings

	//Start Registrations for type : UnityEngine.AudioClip

		//System.Boolean UnityEngine.AudioClip::IsLegacyFormat_Injected(System.IntPtr)
		void Register_UnityEngine_AudioClip_IsLegacyFormat_Injected();
		Register_UnityEngine_AudioClip_IsLegacyFormat_Injected();

		//System.Boolean UnityEngine.AudioClip::SetData_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32)
		void Register_UnityEngine_AudioClip_SetData_Injected();
		Register_UnityEngine_AudioClip_SetData_Injected();

		//System.Int32 UnityEngine.AudioClip::get_channels_Injected(System.IntPtr)
		void Register_UnityEngine_AudioClip_get_channels_Injected();
		Register_UnityEngine_AudioClip_get_channels_Injected();

		//System.Int32 UnityEngine.AudioClip::get_frequency_Injected(System.IntPtr)
		void Register_UnityEngine_AudioClip_get_frequency_Injected();
		Register_UnityEngine_AudioClip_get_frequency_Injected();

		//System.Int32 UnityEngine.AudioClip::get_samples_Injected(System.IntPtr)
		void Register_UnityEngine_AudioClip_get_samples_Injected();
		Register_UnityEngine_AudioClip_get_samples_Injected();

		//System.IntPtr UnityEngine.AudioClip::Construct_Internal_Injected()
		void Register_UnityEngine_AudioClip_Construct_Internal_Injected();
		Register_UnityEngine_AudioClip_Construct_Internal_Injected();

		//System.Void UnityEngine.AudioClip::CreateUserSound_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32,System.Int32,System.Int32,System.Boolean)
		void Register_UnityEngine_AudioClip_CreateUserSound_Injected();
		Register_UnityEngine_AudioClip_CreateUserSound_Injected();

		//System.Void UnityEngine.AudioClip::GetName_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_AudioClip_GetName_Injected();
		Register_UnityEngine_AudioClip_GetName_Injected();

	//End Registrations for type : UnityEngine.AudioClip

	//Start Registrations for type : UnityEngine.AudioSource

		//System.Void UnityEngine.AudioSource::PlayHelper_Injected(System.IntPtr,System.UInt64)
		void Register_UnityEngine_AudioSource_PlayHelper_Injected();
		Register_UnityEngine_AudioSource_PlayHelper_Injected();

		//System.Void UnityEngine.AudioSource::PlayOneShotHelper_Injected(System.IntPtr,System.IntPtr,System.Single)
		void Register_UnityEngine_AudioSource_PlayOneShotHelper_Injected();
		Register_UnityEngine_AudioSource_PlayOneShotHelper_Injected();

		//System.Void UnityEngine.AudioSource::Stop_Injected(System.IntPtr,System.Boolean)
		void Register_UnityEngine_AudioSource_Stop_Injected();
		Register_UnityEngine_AudioSource_Stop_Injected();

		//System.Void UnityEngine.AudioSource::set_generatorObject_Injected(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AudioSource_set_generatorObject_Injected();
		Register_UnityEngine_AudioSource_set_generatorObject_Injected();

		//System.Void UnityEngine.AudioSource::set_loop_Injected(System.IntPtr,System.Boolean)
		void Register_UnityEngine_AudioSource_set_loop_Injected();
		Register_UnityEngine_AudioSource_set_loop_Injected();

		//System.Void UnityEngine.AudioSource::set_mute_Injected(System.IntPtr,System.Boolean)
		void Register_UnityEngine_AudioSource_set_mute_Injected();
		Register_UnityEngine_AudioSource_set_mute_Injected();

		//System.Void UnityEngine.AudioSource::set_playOnAwake_Injected(System.IntPtr,System.Boolean)
		void Register_UnityEngine_AudioSource_set_playOnAwake_Injected();
		Register_UnityEngine_AudioSource_set_playOnAwake_Injected();

		//System.Void UnityEngine.AudioSource::set_volume_Injected(System.IntPtr,System.Single)
		void Register_UnityEngine_AudioSource_set_volume_Injected();
		Register_UnityEngine_AudioSource_set_volume_Injected();

	//End Registrations for type : UnityEngine.AudioSource

	//Start Registrations for type : UnityEngine.Awaitable

		//System.Int32 UnityEngine.Awaitable::IsNativeAwaitableCompleted(System.IntPtr)
		void Register_UnityEngine_Awaitable_IsNativeAwaitableCompleted();
		Register_UnityEngine_Awaitable_IsNativeAwaitableCompleted();

		//System.Void UnityEngine.Awaitable::ReleaseNativeAwaitable(System.IntPtr)
		void Register_UnityEngine_Awaitable_ReleaseNativeAwaitable();
		Register_UnityEngine_Awaitable_ReleaseNativeAwaitable();

	//End Registrations for type : UnityEngine.Awaitable

	//Start Registrations for type : UnityEngine.Bindings.BindingsAllocator

		//System.Void UnityEngine.Bindings.BindingsAllocator::Free(System.Void*)
		void Register_UnityEngine_Bindings_BindingsAllocator_Free();
		Register_UnityEngine_Bindings_BindingsAllocator_Free();

		//System.Void UnityEngine.Bindings.BindingsAllocator::FreeNativeOwnedMemory(System.Void*)
		void Register_UnityEngine_Bindings_BindingsAllocator_FreeNativeOwnedMemory();
		Register_UnityEngine_Bindings_BindingsAllocator_FreeNativeOwnedMemory();

	//End Registrations for type : UnityEngine.Bindings.BindingsAllocator

	//Start Registrations for type : UnityEngine.Camera

		//System.Int32 UnityEngine.Camera::GetAllCamerasCount()
		void Register_UnityEngine_Camera_GetAllCamerasCount();
		Register_UnityEngine_Camera_GetAllCamerasCount();

		//System.Int32 UnityEngine.Camera::GetAllCamerasImpl_Injected(UnityEngine.Camera[])
		void Register_UnityEngine_Camera_GetAllCamerasImpl_Injected();
		Register_UnityEngine_Camera_GetAllCamerasImpl_Injected();

		//System.Int32 UnityEngine.Camera::get_cullingMask_Injected(System.IntPtr)
		void Register_UnityEngine_Camera_get_cullingMask_Injected();
		Register_UnityEngine_Camera_get_cullingMask_Injected();

		//System.Int32 UnityEngine.Camera::get_eventMask_Injected(System.IntPtr)
		void Register_UnityEngine_Camera_get_eventMask_Injected();
		Register_UnityEngine_Camera_get_eventMask_Injected();

		//System.Int32 UnityEngine.Camera::get_targetDisplay_Injected(System.IntPtr)
		void Register_UnityEngine_Camera_get_targetDisplay_Injected();
		Register_UnityEngine_Camera_get_targetDisplay_Injected();

		//System.IntPtr UnityEngine.Camera::get_main_Injected()
		void Register_UnityEngine_Camera_get_main_Injected();
		Register_UnityEngine_Camera_get_main_Injected();

		//System.IntPtr UnityEngine.Camera::get_targetTexture_Injected(System.IntPtr)
		void Register_UnityEngine_Camera_get_targetTexture_Injected();
		Register_UnityEngine_Camera_get_targetTexture_Injected();

		//System.Single UnityEngine.Camera::get_farClipPlane_Injected(System.IntPtr)
		void Register_UnityEngine_Camera_get_farClipPlane_Injected();
		Register_UnityEngine_Camera_get_farClipPlane_Injected();

		//System.Single UnityEngine.Camera::get_nearClipPlane_Injected(System.IntPtr)
		void Register_UnityEngine_Camera_get_nearClipPlane_Injected();
		Register_UnityEngine_Camera_get_nearClipPlane_Injected();

		//System.Void UnityEngine.Camera::ScreenPointToRay_Injected(System.IntPtr,UnityEngine.Vector2&,UnityEngine.Camera/MonoOrStereoscopicEye,UnityEngine.Ray&)
		void Register_UnityEngine_Camera_ScreenPointToRay_Injected();
		Register_UnityEngine_Camera_ScreenPointToRay_Injected();

		//System.Void UnityEngine.Camera::get_pixelRect_Injected(System.IntPtr,UnityEngine.Rect&)
		void Register_UnityEngine_Camera_get_pixelRect_Injected();
		Register_UnityEngine_Camera_get_pixelRect_Injected();

		//System.Void UnityEngine.Camera::set_backgroundColor_Injected(System.IntPtr,UnityEngine.Color&)
		void Register_UnityEngine_Camera_set_backgroundColor_Injected();
		Register_UnityEngine_Camera_set_backgroundColor_Injected();

		//System.Void UnityEngine.Camera::set_clearFlags_Injected(System.IntPtr,UnityEngine.CameraClearFlags)
		void Register_UnityEngine_Camera_set_clearFlags_Injected();
		Register_UnityEngine_Camera_set_clearFlags_Injected();

		//System.Void UnityEngine.Camera::set_orthographic_Injected(System.IntPtr,System.Boolean)
		void Register_UnityEngine_Camera_set_orthographic_Injected();
		Register_UnityEngine_Camera_set_orthographic_Injected();

		//UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags_Injected(System.IntPtr)
		void Register_UnityEngine_Camera_get_clearFlags_Injected();
		Register_UnityEngine_Camera_get_clearFlags_Injected();

	//End Registrations for type : UnityEngine.Camera

	//Start Registrations for type : UnityEngine.CameraRaycastHelper

		//System.IntPtr UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(System.IntPtr,UnityEngine.Ray&,System.Single,System.Int32)
		void Register_UnityEngine_CameraRaycastHelper_RaycastTry2D_Injected();
		Register_UnityEngine_CameraRaycastHelper_RaycastTry2D_Injected();

		//System.IntPtr UnityEngine.CameraRaycastHelper::RaycastTry_Injected(System.IntPtr,UnityEngine.Ray&,System.Single,System.Int32)
		void Register_UnityEngine_CameraRaycastHelper_RaycastTry_Injected();
		Register_UnityEngine_CameraRaycastHelper_RaycastTry_Injected();

	//End Registrations for type : UnityEngine.CameraRaycastHelper

	//Start Registrations for type : UnityEngine.ColorUtility

		//System.Boolean UnityEngine.ColorUtility::DoTryParseHtmlColor_Injected(UnityEngine.Bindings.ManagedSpanWrapper&,UnityEngine.Color32&)
		void Register_UnityEngine_ColorUtility_DoTryParseHtmlColor_Injected();
		Register_UnityEngine_ColorUtility_DoTryParseHtmlColor_Injected();

	//End Registrations for type : UnityEngine.ColorUtility

	//Start Registrations for type : UnityEngine.Component

		//System.IntPtr UnityEngine.Component::get_gameObject_Injected(System.IntPtr)
		void Register_UnityEngine_Component_get_gameObject_Injected();
		Register_UnityEngine_Component_get_gameObject_Injected();

		//System.IntPtr UnityEngine.Component::get_transform_Injected(System.IntPtr)
		void Register_UnityEngine_Component_get_transform_Injected();
		Register_UnityEngine_Component_get_transform_Injected();

	//End Registrations for type : UnityEngine.Component

	//Start Registrations for type : UnityEngine.ComputeShader

		//System.Int32 UnityEngine.ComputeShader::FindKernel_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_ComputeShader_FindKernel_Injected();
		Register_UnityEngine_ComputeShader_FindKernel_Injected();

	//End Registrations for type : UnityEngine.ComputeShader

	//Start Registrations for type : UnityEngine.Coroutine

		//System.Void UnityEngine.Coroutine::ReleaseCoroutine(System.IntPtr)
		void Register_UnityEngine_Coroutine_ReleaseCoroutine();
		Register_UnityEngine_Coroutine_ReleaseCoroutine();

	//End Registrations for type : UnityEngine.Coroutine

	//Start Registrations for type : UnityEngine.Cubemap

		//System.Boolean UnityEngine.Cubemap::Internal_CreateImpl(UnityEngine.Cubemap,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.TextureColorSpace,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
		void Register_UnityEngine_Cubemap_Internal_CreateImpl();
		Register_UnityEngine_Cubemap_Internal_CreateImpl();

		//System.Boolean UnityEngine.Cubemap::get_isReadable_Injected(System.IntPtr)
		void Register_UnityEngine_Cubemap_get_isReadable_Injected();
		Register_UnityEngine_Cubemap_get_isReadable_Injected();

	//End Registrations for type : UnityEngine.Cubemap

	//Start Registrations for type : UnityEngine.CubemapArray

		//System.Boolean UnityEngine.CubemapArray::Internal_CreateImpl(UnityEngine.CubemapArray,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.TextureColorSpace,UnityEngine.Experimental.Rendering.TextureCreationFlags)
		void Register_UnityEngine_CubemapArray_Internal_CreateImpl();
		Register_UnityEngine_CubemapArray_Internal_CreateImpl();

		//System.Boolean UnityEngine.CubemapArray::get_isReadable_Injected(System.IntPtr)
		void Register_UnityEngine_CubemapArray_get_isReadable_Injected();
		Register_UnityEngine_CubemapArray_get_isReadable_Injected();

	//End Registrations for type : UnityEngine.CubemapArray

	//Start Registrations for type : UnityEngine.Debug

		//System.Int32 UnityEngine.Debug::ExtractStackTraceNoAlloc_Injected(System.Byte*,System.Int32,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Debug_ExtractStackTraceNoAlloc_Injected();
		Register_UnityEngine_Debug_ExtractStackTraceNoAlloc_Injected();

	//End Registrations for type : UnityEngine.Debug

	//Start Registrations for type : UnityEngine.DebugLogHandler

		//System.Void UnityEngine.DebugLogHandler::Internal_LogException_Injected(System.Exception,System.IntPtr)
		void Register_UnityEngine_DebugLogHandler_Internal_LogException_Injected();
		Register_UnityEngine_DebugLogHandler_Internal_LogException_Injected();

		//System.Void UnityEngine.DebugLogHandler::Internal_Log_Injected(UnityEngine.LogType,UnityEngine.LogOption,UnityEngine.Bindings.ManagedSpanWrapper&,System.IntPtr)
		void Register_UnityEngine_DebugLogHandler_Internal_Log_Injected();
		Register_UnityEngine_DebugLogHandler_Internal_Log_Injected();

	//End Registrations for type : UnityEngine.DebugLogHandler

	//Start Registrations for type : UnityEngine.DictionarySerialization

		//System.Void UnityEngine.DictionarySerialization::Internal_FormatDictionaryFieldUniqueIdentifierForActiveContext_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_DictionarySerialization_Internal_FormatDictionaryFieldUniqueIdentifierForActiveContext_Injected();
		Register_UnityEngine_DictionarySerialization_Internal_FormatDictionaryFieldUniqueIdentifierForActiveContext_Injected();

	//End Registrations for type : UnityEngine.DictionarySerialization

	//Start Registrations for type : UnityEngine.Display

		//System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_RelativeMouseAtImpl();
		Register_UnityEngine_Display_RelativeMouseAtImpl();

		//System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_GetSystemExtImpl();
		Register_UnityEngine_Display_GetSystemExtImpl();

	//End Registrations for type : UnityEngine.Display

	//Start Registrations for type : UnityEngine.Event

		//System.Char UnityEngine.Event::get_character_Injected(System.IntPtr)
		void Register_UnityEngine_Event_get_character_Injected();
		Register_UnityEngine_Event_get_character_Injected();

		//System.Int32 UnityEngine.Event::get_button_Injected(System.IntPtr)
		void Register_UnityEngine_Event_get_button_Injected();
		Register_UnityEngine_Event_get_button_Injected();

		//System.IntPtr UnityEngine.Event::Internal_Create(System.Int32)
		void Register_UnityEngine_Event_Internal_Create();
		Register_UnityEngine_Event_Internal_Create();

		//System.Void UnityEngine.Event::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_Event_Internal_Destroy();
		Register_UnityEngine_Event_Internal_Destroy();

		//System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
		void Register_UnityEngine_Event_Internal_SetNativeEvent();
		Register_UnityEngine_Event_Internal_SetNativeEvent();

		//System.Void UnityEngine.Event::get_commandName_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Event_get_commandName_Injected();
		Register_UnityEngine_Event_get_commandName_Injected();

		//System.Void UnityEngine.Event::get_delta_Injected(System.IntPtr,UnityEngine.Vector2&)
		void Register_UnityEngine_Event_get_delta_Injected();
		Register_UnityEngine_Event_get_delta_Injected();

		//System.Void UnityEngine.Event::get_mousePosition_Injected(System.IntPtr,UnityEngine.Vector2&)
		void Register_UnityEngine_Event_get_mousePosition_Injected();
		Register_UnityEngine_Event_get_mousePosition_Injected();

		//System.Void UnityEngine.Event::set_displayIndex_Injected(System.IntPtr,System.Int32)
		void Register_UnityEngine_Event_set_displayIndex_Injected();
		Register_UnityEngine_Event_set_displayIndex_Injected();

		//UnityEngine.EventModifiers UnityEngine.Event::get_modifiers_Injected(System.IntPtr)
		void Register_UnityEngine_Event_get_modifiers_Injected();
		Register_UnityEngine_Event_get_modifiers_Injected();

		//UnityEngine.EventType UnityEngine.Event::get_type_Injected(System.IntPtr)
		void Register_UnityEngine_Event_get_type_Injected();
		Register_UnityEngine_Event_get_type_Injected();

		//UnityEngine.KeyCode UnityEngine.Event::get_Internal_keyCode_Injected(System.IntPtr)
		void Register_UnityEngine_Event_get_Internal_keyCode_Injected();
		Register_UnityEngine_Event_get_Internal_keyCode_Injected();

	//End Registrations for type : UnityEngine.Event

	//Start Registrations for type : UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

		//System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()
		void Register_UnityEngine_Experimental_Rendering_BuiltinRuntimeReflectionSystem_BuiltinUpdate();
		Register_UnityEngine_Experimental_Rendering_BuiltinRuntimeReflectionSystem_BuiltinUpdate();

	//End Registrations for type : UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

	//Start Registrations for type : UnityEngine.Experimental.Rendering.GraphicsFormatUtility

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_CanDecompressFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_CanDecompressFormat();

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCompressedFormat_Native_TextureFormat(UnityEngine.TextureFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsCompressedFormat_Native_TextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsCompressedFormat_Native_TextureFormat();

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCrunchFormat(UnityEngine.TextureFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsCrunchFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsCrunchFormat();

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsPVRTCFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsPVRTCFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsPVRTCFormat();

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsSRGBFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsSRGBFormat();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat();

	//End Registrations for type : UnityEngine.Experimental.Rendering.GraphicsFormatUtility

	//Start Registrations for type : UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings

		//System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance()
		void Register_UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance();
		Register_UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance();

	//End Registrations for type : UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings

	//Start Registrations for type : UnityEngine.Font

		//System.Boolean UnityEngine.Font::get_includeFontData_Injected(System.IntPtr)
		void Register_UnityEngine_Font_get_includeFontData_Injected();
		Register_UnityEngine_Font_get_includeFontData_Injected();

		//System.Int32 UnityEngine.Font::get_fontSize_Injected(System.IntPtr)
		void Register_UnityEngine_Font_get_fontSize_Injected();
		Register_UnityEngine_Font_get_fontSize_Injected();

		//System.IntPtr UnityEngine.Font::GetDefault_Injected()
		void Register_UnityEngine_Font_GetDefault_Injected();
		Register_UnityEngine_Font_GetDefault_Injected();

		//System.String[] UnityEngine.Font::GetOSFallbacks()
		void Register_UnityEngine_Font_GetOSFallbacks();
		Register_UnityEngine_Font_GetOSFallbacks();

		//System.Void UnityEngine.Font::Internal_CreateFont_Injected(UnityEngine.Font,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Font_Internal_CreateFont_Injected();
		Register_UnityEngine_Font_Internal_CreateFont_Injected();

	//End Registrations for type : UnityEngine.Font

	//Start Registrations for type : UnityEngine.GameObject

		//System.IntPtr UnityEngine.GameObject::Internal_AddComponentWithType_Injected(System.IntPtr,System.Type)
		void Register_UnityEngine_GameObject_Internal_AddComponentWithType_Injected();
		Register_UnityEngine_GameObject_Internal_AddComponentWithType_Injected();

		//System.Void UnityEngine.GameObject::Internal_CreateGameObject_Injected(UnityEngine.GameObject,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_GameObject_Internal_CreateGameObject_Injected();
		Register_UnityEngine_GameObject_Internal_CreateGameObject_Injected();

		//System.Void UnityEngine.GameObject::SendMessage_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,System.Object,UnityEngine.SendMessageOptions)
		void Register_UnityEngine_GameObject_SendMessage_Injected();
		Register_UnityEngine_GameObject_SendMessage_Injected();

		//System.Void UnityEngine.GameObject::set_tag_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_GameObject_set_tag_Injected();
		Register_UnityEngine_GameObject_set_tag_Injected();

	//End Registrations for type : UnityEngine.GameObject

	//Start Registrations for type : UnityEngine.Gradient

		//System.Boolean UnityEngine.Gradient::Internal_Equals_Injected(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_Gradient_Internal_Equals_Injected();
		Register_UnityEngine_Gradient_Internal_Equals_Injected();

		//System.IntPtr UnityEngine.Gradient::Init()
		void Register_UnityEngine_Gradient_Init();
		Register_UnityEngine_Gradient_Init();

		//System.Void UnityEngine.Gradient::Cleanup_Injected(System.IntPtr)
		void Register_UnityEngine_Gradient_Cleanup_Injected();
		Register_UnityEngine_Gradient_Cleanup_Injected();

	//End Registrations for type : UnityEngine.Gradient

	//Start Registrations for type : UnityEngine.Graphics

		//System.Int32 UnityEngine.Graphics::Internal_GetMaxDrawMeshInstanceCount()
		void Register_UnityEngine_Graphics_Internal_GetMaxDrawMeshInstanceCount();
		Register_UnityEngine_Graphics_Internal_GetMaxDrawMeshInstanceCount();

		//System.Void UnityEngine.Graphics::Internal_DrawTexture(UnityEngine.Internal_DrawTextureArguments&)
		void Register_UnityEngine_Graphics_Internal_DrawTexture();
		Register_UnityEngine_Graphics_Internal_DrawTexture();

	//End Registrations for type : UnityEngine.Graphics

	//Start Registrations for type : UnityEngine.GUI

		//System.IntPtr UnityEngine.GUI::get_blendMaterial_Injected()
		void Register_UnityEngine_GUI_get_blendMaterial_Injected();
		Register_UnityEngine_GUI_get_blendMaterial_Injected();

		//System.IntPtr UnityEngine.GUI::get_blitMaterial_Injected()
		void Register_UnityEngine_GUI_get_blitMaterial_Injected();
		Register_UnityEngine_GUI_get_blitMaterial_Injected();

		//System.IntPtr UnityEngine.GUI::get_roundedRectMaterial_Injected()
		void Register_UnityEngine_GUI_get_roundedRectMaterial_Injected();
		Register_UnityEngine_GUI_get_roundedRectMaterial_Injected();

		//System.IntPtr UnityEngine.GUI::get_roundedRectWithColorPerBorderMaterial_Injected()
		void Register_UnityEngine_GUI_get_roundedRectWithColorPerBorderMaterial_Injected();
		Register_UnityEngine_GUI_get_roundedRectWithColorPerBorderMaterial_Injected();

		//System.Void UnityEngine.GUI::get_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_GUI_get_color_Injected();
		Register_UnityEngine_GUI_get_color_Injected();

		//System.Void UnityEngine.GUI::set_changed(System.Boolean)
		void Register_UnityEngine_GUI_set_changed();
		Register_UnityEngine_GUI_set_changed();

		//System.Void UnityEngine.GUI::set_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_GUI_set_color_Injected();
		Register_UnityEngine_GUI_set_color_Injected();

		//System.Void UnityEngine.GUI::set_contentColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_GUI_set_contentColor_Injected();
		Register_UnityEngine_GUI_set_contentColor_Injected();

	//End Registrations for type : UnityEngine.GUI

	//Start Registrations for type : UnityEngine.GUIClip

		//System.Void UnityEngine.GUIClip::GetMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_GUIClip_GetMatrix_Injected();
		Register_UnityEngine_GUIClip_GetMatrix_Injected();

		//System.Void UnityEngine.GUIClip::Internal_Pop()
		void Register_UnityEngine_GUIClip_Internal_Pop();
		Register_UnityEngine_GUIClip_Internal_Pop();

		//System.Void UnityEngine.GUIClip::Internal_Push_Injected(UnityEngine.Rect&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Boolean)
		void Register_UnityEngine_GUIClip_Internal_Push_Injected();
		Register_UnityEngine_GUIClip_Internal_Push_Injected();

		//System.Void UnityEngine.GUIClip::SetMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_GUIClip_SetMatrix_Injected();
		Register_UnityEngine_GUIClip_SetMatrix_Injected();

		//System.Void UnityEngine.GUIClip::get_visibleRect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_GUIClip_get_visibleRect_Injected();
		Register_UnityEngine_GUIClip_get_visibleRect_Injected();

	//End Registrations for type : UnityEngine.GUIClip

	//Start Registrations for type : UnityEngine.GUID

		//System.Void UnityEngine.GUID::GUIDToHexInternal_Injected(UnityEngine.GUID&,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_GUID_GUIDToHexInternal_Injected();
		Register_UnityEngine_GUID_GUIDToHexInternal_Injected();

	//End Registrations for type : UnityEngine.GUID

	//Start Registrations for type : UnityEngine.GUILayoutUtility

		//System.Void UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)
		void Register_UnityEngine_GUILayoutUtility_Internal_GetWindowRect_Injected();
		Register_UnityEngine_GUILayoutUtility_Internal_GetWindowRect_Injected();

		//System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)
		void Register_UnityEngine_GUILayoutUtility_Internal_MoveWindow_Injected();
		Register_UnityEngine_GUILayoutUtility_Internal_MoveWindow_Injected();

	//End Registrations for type : UnityEngine.GUILayoutUtility

	//Start Registrations for type : UnityEngine.GUIStyle

		//System.Boolean UnityEngine.GUIStyle::IsTooltipActive_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_GUIStyle_IsTooltipActive_Injected();
		Register_UnityEngine_GUIStyle_IsTooltipActive_Injected();

		//System.Boolean UnityEngine.GUIStyle::get_richText_Injected(System.IntPtr)
		void Register_UnityEngine_GUIStyle_get_richText_Injected();
		Register_UnityEngine_GUIStyle_get_richText_Injected();

		//System.Boolean UnityEngine.GUIStyle::get_stretchHeight_Injected(System.IntPtr)
		void Register_UnityEngine_GUIStyle_get_stretchHeight_Injected();
		Register_UnityEngine_GUIStyle_get_stretchHeight_Injected();

		//System.Boolean UnityEngine.GUIStyle::get_stretchWidth_Injected(System.IntPtr)
		void Register_UnityEngine_GUIStyle_get_stretchWidth_Injected();
		Register_UnityEngine_GUIStyle_get_stretchWidth_Injected();

		//System.Boolean UnityEngine.GUIStyle::get_wordWrap_Injected(System.IntPtr)
		void Register_UnityEngine_GUIStyle_get_wordWrap_Injected();
		Register_UnityEngine_GUIStyle_get_wordWrap_Injected();

		//System.Int32 UnityEngine.GUIStyle::get_fontSize_Injected(System.IntPtr)
		void Register_UnityEngine_GUIStyle_get_fontSize_Injected();
		Register_UnityEngine_GUIStyle_get_fontSize_Injected();

		//System.IntPtr UnityEngine.GUIStyle::GetDefaultFont_Injected()
		void Register_UnityEngine_GUIStyle_GetDefaultFont_Injected();
		Register_UnityEngine_GUIStyle_GetDefaultFont_Injected();

		//System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr_Injected(System.IntPtr,System.Int32)
		void Register_UnityEngine_GUIStyle_GetRectOffsetPtr_Injected();
		Register_UnityEngine_GUIStyle_GetRectOffsetPtr_Injected();

		//System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr_Injected(System.IntPtr,System.Int32)
		void Register_UnityEngine_GUIStyle_GetStyleStatePtr_Injected();
		Register_UnityEngine_GUIStyle_GetStyleStatePtr_Injected();

		//System.IntPtr UnityEngine.GUIStyle::Internal_Copy_Injected(UnityEngine.GUIStyle,System.IntPtr)
		void Register_UnityEngine_GUIStyle_Internal_Copy_Injected();
		Register_UnityEngine_GUIStyle_Internal_Copy_Injected();

		//System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
		void Register_UnityEngine_GUIStyle_Internal_Create();
		Register_UnityEngine_GUIStyle_Internal_Create();

		//System.IntPtr UnityEngine.GUIStyle::get_font_Injected(System.IntPtr)
		void Register_UnityEngine_GUIStyle_get_font_Injected();
		Register_UnityEngine_GUIStyle_get_font_Injected();

		//System.Single UnityEngine.GUIStyle::get_fixedHeight_Injected(System.IntPtr)
		void Register_UnityEngine_GUIStyle_get_fixedHeight_Injected();
		Register_UnityEngine_GUIStyle_get_fixedHeight_Injected();

		//System.Single UnityEngine.GUIStyle::get_fixedWidth_Injected(System.IntPtr)
		void Register_UnityEngine_GUIStyle_get_fixedWidth_Injected();
		Register_UnityEngine_GUIStyle_get_fixedWidth_Injected();

		//System.Void UnityEngine.GUIStyle::AssignRectOffset_Injected(System.IntPtr,System.Int32,System.IntPtr)
		void Register_UnityEngine_GUIStyle_AssignRectOffset_Injected();
		Register_UnityEngine_GUIStyle_AssignRectOffset_Injected();

		//System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_GUIStyle_Internal_Destroy();
		Register_UnityEngine_GUIStyle_Internal_Destroy();

		//System.Void UnityEngine.GUIStyle::Internal_DestroyTextGenerator(System.Int32)
		void Register_UnityEngine_GUIStyle_Internal_DestroyTextGenerator();
		Register_UnityEngine_GUIStyle_Internal_DestroyTextGenerator();

		//System.Void UnityEngine.GUIStyle::Internal_Draw2_Injected(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
		void Register_UnityEngine_GUIStyle_Internal_Draw2_Injected();
		Register_UnityEngine_GUIStyle_Internal_Draw2_Injected();

		//System.Void UnityEngine.GUIStyle::Internal_Draw_Injected(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
		void Register_UnityEngine_GUIStyle_Internal_Draw_Injected();
		Register_UnityEngine_GUIStyle_Internal_Draw_Injected();

		//System.Void UnityEngine.GUIStyle::Internal_GetTextRectOffset_Injected(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&,UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_Internal_GetTextRectOffset_Injected();
		Register_UnityEngine_GUIStyle_Internal_GetTextRectOffset_Injected();

		//System.Void UnityEngine.GUIStyle::SetDefaultFont_Injected(System.IntPtr)
		void Register_UnityEngine_GUIStyle_SetDefaultFont_Injected();
		Register_UnityEngine_GUIStyle_SetDefaultFont_Injected();

		//System.Void UnityEngine.GUIStyle::SetMouseTooltip_Injected(UnityEngine.Bindings.ManagedSpanWrapper&,UnityEngine.Rect&)
		void Register_UnityEngine_GUIStyle_SetMouseTooltip_Injected();
		Register_UnityEngine_GUIStyle_SetMouseTooltip_Injected();

		//System.Void UnityEngine.GUIStyle::get_Internal_clipOffset_Injected(System.IntPtr,UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_get_Internal_clipOffset_Injected();
		Register_UnityEngine_GUIStyle_get_Internal_clipOffset_Injected();

		//System.Void UnityEngine.GUIStyle::get_rawName_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_GUIStyle_get_rawName_Injected();
		Register_UnityEngine_GUIStyle_get_rawName_Injected();

		//System.Void UnityEngine.GUIStyle::set_alignment_Injected(System.IntPtr,UnityEngine.TextAnchor)
		void Register_UnityEngine_GUIStyle_set_alignment_Injected();
		Register_UnityEngine_GUIStyle_set_alignment_Injected();

		//System.Void UnityEngine.GUIStyle::set_clipping_Injected(System.IntPtr,UnityEngine.TextClipping)
		void Register_UnityEngine_GUIStyle_set_clipping_Injected();
		Register_UnityEngine_GUIStyle_set_clipping_Injected();

		//System.Void UnityEngine.GUIStyle::set_fontSize_Injected(System.IntPtr,System.Int32)
		void Register_UnityEngine_GUIStyle_set_fontSize_Injected();
		Register_UnityEngine_GUIStyle_set_fontSize_Injected();

		//System.Void UnityEngine.GUIStyle::set_fontStyle_Injected(System.IntPtr,UnityEngine.FontStyle)
		void Register_UnityEngine_GUIStyle_set_fontStyle_Injected();
		Register_UnityEngine_GUIStyle_set_fontStyle_Injected();

		//System.Void UnityEngine.GUIStyle::set_rawName_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_GUIStyle_set_rawName_Injected();
		Register_UnityEngine_GUIStyle_set_rawName_Injected();

		//System.Void UnityEngine.GUIStyle::set_stretchHeight_Injected(System.IntPtr,System.Boolean)
		void Register_UnityEngine_GUIStyle_set_stretchHeight_Injected();
		Register_UnityEngine_GUIStyle_set_stretchHeight_Injected();

		//System.Void UnityEngine.GUIStyle::set_wordWrap_Injected(System.IntPtr,System.Boolean)
		void Register_UnityEngine_GUIStyle_set_wordWrap_Injected();
		Register_UnityEngine_GUIStyle_set_wordWrap_Injected();

		//UnityEngine.FontStyle UnityEngine.GUIStyle::get_fontStyle_Injected(System.IntPtr)
		void Register_UnityEngine_GUIStyle_get_fontStyle_Injected();
		Register_UnityEngine_GUIStyle_get_fontStyle_Injected();

		//UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition_Injected(System.IntPtr)
		void Register_UnityEngine_GUIStyle_get_imagePosition_Injected();
		Register_UnityEngine_GUIStyle_get_imagePosition_Injected();

		//UnityEngine.TextAnchor UnityEngine.GUIStyle::get_alignment_Injected(System.IntPtr)
		void Register_UnityEngine_GUIStyle_get_alignment_Injected();
		Register_UnityEngine_GUIStyle_get_alignment_Injected();

		//UnityEngine.TextClipping UnityEngine.GUIStyle::get_clipping_Injected(System.IntPtr)
		void Register_UnityEngine_GUIStyle_get_clipping_Injected();
		Register_UnityEngine_GUIStyle_get_clipping_Injected();

	//End Registrations for type : UnityEngine.GUIStyle

	//Start Registrations for type : UnityEngine.GUIStyleState

		//System.IntPtr UnityEngine.GUIStyleState::Init()
		void Register_UnityEngine_GUIStyleState_Init();
		Register_UnityEngine_GUIStyleState_Init();

		//System.Void UnityEngine.GUIStyleState::Cleanup_Injected(System.IntPtr)
		void Register_UnityEngine_GUIStyleState_Cleanup_Injected();
		Register_UnityEngine_GUIStyleState_Cleanup_Injected();

		//System.Void UnityEngine.GUIStyleState::set_textColor_Injected(System.IntPtr,UnityEngine.Color&)
		void Register_UnityEngine_GUIStyleState_set_textColor_Injected();
		Register_UnityEngine_GUIStyleState_set_textColor_Injected();

	//End Registrations for type : UnityEngine.GUIStyleState

	//Start Registrations for type : UnityEngine.GUIUtility

		//System.Int32 UnityEngine.GUIUtility::Internal_GetControlID_Injected(System.Int32,UnityEngine.FocusType,UnityEngine.Rect&)
		void Register_UnityEngine_GUIUtility_Internal_GetControlID_Injected();
		Register_UnityEngine_GUIUtility_Internal_GetControlID_Injected();

		//System.Int32 UnityEngine.GUIUtility::get_guiDepth()
		void Register_UnityEngine_GUIUtility_get_guiDepth();
		Register_UnityEngine_GUIUtility_get_guiDepth();

		//System.Object UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
		void Register_UnityEngine_GUIUtility_Internal_GetDefaultSkin();
		Register_UnityEngine_GUIUtility_Internal_GetDefaultSkin();

		//System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
		void Register_UnityEngine_GUIUtility_get_pixelsPerPoint();
		Register_UnityEngine_GUIUtility_get_pixelsPerPoint();

		//System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
		void Register_UnityEngine_GUIUtility_Internal_ExitGUI();
		Register_UnityEngine_GUIUtility_Internal_ExitGUI();

		//System.Void UnityEngine.GUIUtility::set_mouseUsed(System.Boolean)
		void Register_UnityEngine_GUIUtility_set_mouseUsed();
		Register_UnityEngine_GUIUtility_set_mouseUsed();

	//End Registrations for type : UnityEngine.GUIUtility

	//Start Registrations for type : UnityEngine.Hash128

		//System.Void UnityEngine.Hash128::Hash128ToStringImpl_Injected(UnityEngine.Hash128&,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Hash128_Hash128ToStringImpl_Injected();
		Register_UnityEngine_Hash128_Hash128ToStringImpl_Injected();

	//End Registrations for type : UnityEngine.Hash128

	//Start Registrations for type : UnityEngine.Light

		//System.Boolean UnityEngine.Light::get_useColorTemperature_Injected(System.IntPtr)
		void Register_UnityEngine_Light_get_useColorTemperature_Injected();
		Register_UnityEngine_Light_get_useColorTemperature_Injected();

		//System.IntPtr UnityEngine.Light::get_cookie_Injected(System.IntPtr)
		void Register_UnityEngine_Light_get_cookie_Injected();
		Register_UnityEngine_Light_get_cookie_Injected();

		//System.Single UnityEngine.Light::get_bounceIntensity_Injected(System.IntPtr)
		void Register_UnityEngine_Light_get_bounceIntensity_Injected();
		Register_UnityEngine_Light_get_bounceIntensity_Injected();

		//System.Single UnityEngine.Light::get_colorTemperature_Injected(System.IntPtr)
		void Register_UnityEngine_Light_get_colorTemperature_Injected();
		Register_UnityEngine_Light_get_colorTemperature_Injected();

		//System.Single UnityEngine.Light::get_dilatedRange_Injected(System.IntPtr)
		void Register_UnityEngine_Light_get_dilatedRange_Injected();
		Register_UnityEngine_Light_get_dilatedRange_Injected();

		//System.Single UnityEngine.Light::get_intensity_Injected(System.IntPtr)
		void Register_UnityEngine_Light_get_intensity_Injected();
		Register_UnityEngine_Light_get_intensity_Injected();

		//System.Single UnityEngine.Light::get_range_Injected(System.IntPtr)
		void Register_UnityEngine_Light_get_range_Injected();
		Register_UnityEngine_Light_get_range_Injected();

		//System.Single UnityEngine.Light::get_spotAngle_Injected(System.IntPtr)
		void Register_UnityEngine_Light_get_spotAngle_Injected();
		Register_UnityEngine_Light_get_spotAngle_Injected();

		//System.Void UnityEngine.Light::get_bakingOutput_Injected(System.IntPtr,UnityEngine.LightBakingOutput&)
		void Register_UnityEngine_Light_get_bakingOutput_Injected();
		Register_UnityEngine_Light_get_bakingOutput_Injected();

		//System.Void UnityEngine.Light::get_color_Injected(System.IntPtr,UnityEngine.Color&)
		void Register_UnityEngine_Light_get_color_Injected();
		Register_UnityEngine_Light_get_color_Injected();

		//System.Void UnityEngine.Light::get_cookieSize2D_Injected(System.IntPtr,UnityEngine.Vector2&)
		void Register_UnityEngine_Light_get_cookieSize2D_Injected();
		Register_UnityEngine_Light_get_cookieSize2D_Injected();

		//UnityEngine.LightShadows UnityEngine.Light::get_shadows_Injected(System.IntPtr)
		void Register_UnityEngine_Light_get_shadows_Injected();
		Register_UnityEngine_Light_get_shadows_Injected();

		//UnityEngine.LightType UnityEngine.Light::get_type_Injected(System.IntPtr)
		void Register_UnityEngine_Light_get_type_Injected();
		Register_UnityEngine_Light_get_type_Injected();

	//End Registrations for type : UnityEngine.Light

	//Start Registrations for type : UnityEngine.ManagedVFSNative

		//System.Void UnityEngine.ManagedVFSNative::CompleteReadAsync_Injected(UnityEngine.ManagedReadAsyncCommand&,System.Int64,System.Boolean)
		void Register_UnityEngine_ManagedVFSNative_CompleteReadAsync_Injected();
		Register_UnityEngine_ManagedVFSNative_CompleteReadAsync_Injected();

	//End Registrations for type : UnityEngine.ManagedVFSNative

	//Start Registrations for type : UnityEngine.Material

		//System.Boolean UnityEngine.Material::HasFloatImpl_Injected(System.IntPtr,System.Int32)
		void Register_UnityEngine_Material_HasFloatImpl_Injected();
		Register_UnityEngine_Material_HasFloatImpl_Injected();

		//System.Boolean UnityEngine.Material::HasProperty_Injected(System.IntPtr,System.Int32)
		void Register_UnityEngine_Material_HasProperty_Injected();
		Register_UnityEngine_Material_HasProperty_Injected();

		//System.Int32 UnityEngine.Material::ComputeCRC_Injected(System.IntPtr)
		void Register_UnityEngine_Material_ComputeCRC_Injected();
		Register_UnityEngine_Material_ComputeCRC_Injected();

		//System.IntPtr UnityEngine.Material::GetTextureImpl_Injected(System.IntPtr,System.Int32)
		void Register_UnityEngine_Material_GetTextureImpl_Injected();
		Register_UnityEngine_Material_GetTextureImpl_Injected();

		//System.IntPtr UnityEngine.Material::get_shader_Injected(System.IntPtr)
		void Register_UnityEngine_Material_get_shader_Injected();
		Register_UnityEngine_Material_get_shader_Injected();

		//System.Single UnityEngine.Material::GetFloatImpl_Injected(System.IntPtr,System.Int32)
		void Register_UnityEngine_Material_GetFloatImpl_Injected();
		Register_UnityEngine_Material_GetFloatImpl_Injected();

		//System.String[] UnityEngine.Material::GetShaderKeywords_Injected(System.IntPtr)
		void Register_UnityEngine_Material_GetShaderKeywords_Injected();
		Register_UnityEngine_Material_GetShaderKeywords_Injected();

		//System.Void UnityEngine.Material::CopyPropertiesFromMaterial_Injected(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_Material_CopyPropertiesFromMaterial_Injected();
		Register_UnityEngine_Material_CopyPropertiesFromMaterial_Injected();

		//System.Void UnityEngine.Material::CreateWithMaterial_Injected(UnityEngine.Material,System.IntPtr)
		void Register_UnityEngine_Material_CreateWithMaterial_Injected();
		Register_UnityEngine_Material_CreateWithMaterial_Injected();

		//System.Void UnityEngine.Material::CreateWithShader_Injected(UnityEngine.Material,System.IntPtr)
		void Register_UnityEngine_Material_CreateWithShader_Injected();
		Register_UnityEngine_Material_CreateWithShader_Injected();

		//System.Void UnityEngine.Material::SetFloatImpl_Injected(System.IntPtr,System.Int32,System.Single)
		void Register_UnityEngine_Material_SetFloatImpl_Injected();
		Register_UnityEngine_Material_SetFloatImpl_Injected();

		//System.Void UnityEngine.Material::SetShaderKeywords_Injected(System.IntPtr,System.String[])
		void Register_UnityEngine_Material_SetShaderKeywords_Injected();
		Register_UnityEngine_Material_SetShaderKeywords_Injected();

		//System.Void UnityEngine.Material::SetTextureImpl_Injected(System.IntPtr,System.Int32,System.IntPtr)
		void Register_UnityEngine_Material_SetTextureImpl_Injected();
		Register_UnityEngine_Material_SetTextureImpl_Injected();

		//System.Void UnityEngine.Material::set_shader_Injected(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_Material_set_shader_Injected();
		Register_UnityEngine_Material_set_shader_Injected();

	//End Registrations for type : UnityEngine.Material

	//Start Registrations for type : UnityEngine.Mathf

		//System.Single UnityEngine.Mathf::GammaToLinearSpace(System.Single)
		void Register_UnityEngine_Mathf_GammaToLinearSpace();
		Register_UnityEngine_Mathf_GammaToLinearSpace();

		//System.Void UnityEngine.Mathf::CorrelatedColorTemperatureToRGB_Injected(System.Single,UnityEngine.Color&)
		void Register_UnityEngine_Mathf_CorrelatedColorTemperatureToRGB_Injected();
		Register_UnityEngine_Mathf_CorrelatedColorTemperatureToRGB_Injected();

	//End Registrations for type : UnityEngine.Mathf

	//Start Registrations for type : UnityEngine.Matrix4x4

		//System.Void UnityEngine.Matrix4x4::Internal_TRS_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_Internal_TRS_Injected();
		Register_UnityEngine_Matrix4x4_Internal_TRS_Injected();

	//End Registrations for type : UnityEngine.Matrix4x4

	//Start Registrations for type : UnityEngine.Mesh

		//System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
		void Register_UnityEngine_Mesh_Internal_Create();
		Register_UnityEngine_Mesh_Internal_Create();

	//End Registrations for type : UnityEngine.Mesh

	//Start Registrations for type : UnityEngine.MonoBehaviour

		//System.Boolean UnityEngine.MonoBehaviour::Internal_IsInvokingAll_Injected(System.IntPtr)
		void Register_UnityEngine_MonoBehaviour_Internal_IsInvokingAll_Injected();
		Register_UnityEngine_MonoBehaviour_Internal_IsInvokingAll_Injected();

		//System.Boolean UnityEngine.MonoBehaviour::IsInvoking_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_MonoBehaviour_IsInvoking_Injected();
		Register_UnityEngine_MonoBehaviour_IsInvoking_Injected();

		//System.Boolean UnityEngine.MonoBehaviour::IsObjectMonoBehaviour_Injected(System.IntPtr)
		void Register_UnityEngine_MonoBehaviour_IsObjectMonoBehaviour_Injected();
		Register_UnityEngine_MonoBehaviour_IsObjectMonoBehaviour_Injected();

		//System.Boolean UnityEngine.MonoBehaviour::get_didAwake_Injected(System.IntPtr)
		void Register_UnityEngine_MonoBehaviour_get_didAwake_Injected();
		Register_UnityEngine_MonoBehaviour_get_didAwake_Injected();

		//System.Boolean UnityEngine.MonoBehaviour::get_didStart_Injected(System.IntPtr)
		void Register_UnityEngine_MonoBehaviour_get_didStart_Injected();
		Register_UnityEngine_MonoBehaviour_get_didStart_Injected();

		//System.Boolean UnityEngine.MonoBehaviour::get_useGUILayout_Injected(System.IntPtr)
		void Register_UnityEngine_MonoBehaviour_get_useGUILayout_Injected();
		Register_UnityEngine_MonoBehaviour_get_useGUILayout_Injected();

		//System.Void UnityEngine.MonoBehaviour::CancelInvoke_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_MonoBehaviour_CancelInvoke_Injected();
		Register_UnityEngine_MonoBehaviour_CancelInvoke_Injected();

		//System.Void UnityEngine.MonoBehaviour::GetScriptClassName_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_MonoBehaviour_GetScriptClassName_Injected();
		Register_UnityEngine_MonoBehaviour_GetScriptClassName_Injected();

		//System.Void UnityEngine.MonoBehaviour::Internal_CancelInvokeAll_Injected(System.IntPtr)
		void Register_UnityEngine_MonoBehaviour_Internal_CancelInvokeAll_Injected();
		Register_UnityEngine_MonoBehaviour_Internal_CancelInvokeAll_Injected();

		//System.Void UnityEngine.MonoBehaviour::InvokeDelayed_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,System.Single,System.Single)
		void Register_UnityEngine_MonoBehaviour_InvokeDelayed_Injected();
		Register_UnityEngine_MonoBehaviour_InvokeDelayed_Injected();

		//System.Void UnityEngine.MonoBehaviour::OnCancellationTokenCreated_Injected(System.IntPtr)
		void Register_UnityEngine_MonoBehaviour_OnCancellationTokenCreated_Injected();
		Register_UnityEngine_MonoBehaviour_OnCancellationTokenCreated_Injected();

		//System.Void UnityEngine.MonoBehaviour::StopAllCoroutines_Injected(System.IntPtr)
		void Register_UnityEngine_MonoBehaviour_StopAllCoroutines_Injected();
		Register_UnityEngine_MonoBehaviour_StopAllCoroutines_Injected();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutineFromEnumeratorManaged_Injected(System.IntPtr,System.Collections.IEnumerator)
		void Register_UnityEngine_MonoBehaviour_StopCoroutineFromEnumeratorManaged_Injected();
		Register_UnityEngine_MonoBehaviour_StopCoroutineFromEnumeratorManaged_Injected();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutineManaged_Injected(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_MonoBehaviour_StopCoroutineManaged_Injected();
		Register_UnityEngine_MonoBehaviour_StopCoroutineManaged_Injected();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutine_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_MonoBehaviour_StopCoroutine_Injected();
		Register_UnityEngine_MonoBehaviour_StopCoroutine_Injected();

		//System.Void UnityEngine.MonoBehaviour::set_useGUILayout_Injected(System.IntPtr,System.Boolean)
		void Register_UnityEngine_MonoBehaviour_set_useGUILayout_Injected();
		Register_UnityEngine_MonoBehaviour_set_useGUILayout_Injected();

		//UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutineManaged2_Injected(System.IntPtr,System.Collections.IEnumerator)
		void Register_UnityEngine_MonoBehaviour_StartCoroutineManaged2_Injected();
		Register_UnityEngine_MonoBehaviour_StartCoroutineManaged2_Injected();

		//UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutineManaged_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,System.Object)
		void Register_UnityEngine_MonoBehaviour_StartCoroutineManaged_Injected();
		Register_UnityEngine_MonoBehaviour_StartCoroutineManaged_Injected();

	//End Registrations for type : UnityEngine.MonoBehaviour

	//Start Registrations for type : UnityEngine.Networking.CertificateHandler

		//System.Void UnityEngine.Networking.CertificateHandler::ReleaseFromScripting_Injected(System.IntPtr)
		void Register_UnityEngine_Networking_CertificateHandler_ReleaseFromScripting_Injected();
		Register_UnityEngine_Networking_CertificateHandler_ReleaseFromScripting_Injected();

	//End Registrations for type : UnityEngine.Networking.CertificateHandler

	//Start Registrations for type : UnityEngine.Networking.DownloadHandler

		//System.Void UnityEngine.Networking.DownloadHandler::ReleaseFromScripting_Injected(System.IntPtr)
		void Register_UnityEngine_Networking_DownloadHandler_ReleaseFromScripting_Injected();
		Register_UnityEngine_Networking_DownloadHandler_ReleaseFromScripting_Injected();

	//End Registrations for type : UnityEngine.Networking.DownloadHandler

	//Start Registrations for type : UnityEngine.Networking.DownloadHandlerTexture

		//System.IntPtr UnityEngine.Networking.DownloadHandlerTexture::Create_Injected(UnityEngine.Networking.DownloadHandlerTexture,UnityEngine.Networking.DownloadedTextureParams&)
		void Register_UnityEngine_Networking_DownloadHandlerTexture_Create_Injected();
		Register_UnityEngine_Networking_DownloadHandlerTexture_Create_Injected();

		//System.IntPtr UnityEngine.Networking.DownloadHandlerTexture::InternalGetTextureNative_Injected(System.IntPtr)
		void Register_UnityEngine_Networking_DownloadHandlerTexture_InternalGetTextureNative_Injected();
		Register_UnityEngine_Networking_DownloadHandlerTexture_InternalGetTextureNative_Injected();

	//End Registrations for type : UnityEngine.Networking.DownloadHandlerTexture

	//Start Registrations for type : UnityEngine.Networking.UnityWebRequest

		//System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable_Injected(System.IntPtr)
		void Register_UnityEngine_Networking_UnityWebRequest_get_isModifiable_Injected();
		Register_UnityEngine_Networking_UnityWebRequest_get_isModifiable_Injected();

		//System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode_Injected(System.IntPtr)
		void Register_UnityEngine_Networking_UnityWebRequest_get_responseCode_Injected();
		Register_UnityEngine_Networking_UnityWebRequest_get_responseCode_Injected();

		//System.IntPtr UnityEngine.Networking.UnityWebRequest::BeginWebRequest_Injected(System.IntPtr)
		void Register_UnityEngine_Networking_UnityWebRequest_BeginWebRequest_Injected();
		Register_UnityEngine_Networking_UnityWebRequest_BeginWebRequest_Injected();

		//System.IntPtr UnityEngine.Networking.UnityWebRequest::Create()
		void Register_UnityEngine_Networking_UnityWebRequest_Create();
		Register_UnityEngine_Networking_UnityWebRequest_Create();

		//System.Void UnityEngine.Networking.UnityWebRequest::Abort_Injected(System.IntPtr)
		void Register_UnityEngine_Networking_UnityWebRequest_Abort_Injected();
		Register_UnityEngine_Networking_UnityWebRequest_Abort_Injected();

		//System.Void UnityEngine.Networking.UnityWebRequest::GetHTTPStatusString_Injected(System.Int64,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Networking_UnityWebRequest_GetHTTPStatusString_Injected();
		Register_UnityEngine_Networking_UnityWebRequest_GetHTTPStatusString_Injected();

		//System.Void UnityEngine.Networking.UnityWebRequest::GetWebErrorString_Injected(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Networking_UnityWebRequest_GetWebErrorString_Injected();
		Register_UnityEngine_Networking_UnityWebRequest_GetWebErrorString_Injected();

		//System.Void UnityEngine.Networking.UnityWebRequest::Release_Injected(System.IntPtr)
		void Register_UnityEngine_Networking_UnityWebRequest_Release_Injected();
		Register_UnityEngine_Networking_UnityWebRequest_Release_Injected();

		//UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result_Injected(System.IntPtr)
		void Register_UnityEngine_Networking_UnityWebRequest_get_result_Injected();
		Register_UnityEngine_Networking_UnityWebRequest_get_result_Injected();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::GetError_Injected(System.IntPtr)
		void Register_UnityEngine_Networking_UnityWebRequest_GetError_Injected();
		Register_UnityEngine_Networking_UnityWebRequest_GetError_Injected();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCustomMethod_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Networking_UnityWebRequest_SetCustomMethod_Injected();
		Register_UnityEngine_Networking_UnityWebRequest_SetCustomMethod_Injected();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetDownloadHandler_Injected(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_Networking_UnityWebRequest_SetDownloadHandler_Injected();
		Register_UnityEngine_Networking_UnityWebRequest_SetDownloadHandler_Injected();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetMethod_Injected(System.IntPtr,UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
		void Register_UnityEngine_Networking_UnityWebRequest_SetMethod_Injected();
		Register_UnityEngine_Networking_UnityWebRequest_SetMethod_Injected();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUploadHandler_Injected(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_Networking_UnityWebRequest_SetUploadHandler_Injected();
		Register_UnityEngine_Networking_UnityWebRequest_SetUploadHandler_Injected();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUrl_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Networking_UnityWebRequest_SetUrl_Injected();
		Register_UnityEngine_Networking_UnityWebRequest_SetUrl_Injected();

	//End Registrations for type : UnityEngine.Networking.UnityWebRequest

	//Start Registrations for type : UnityEngine.Networking.UploadHandler

		//System.Void UnityEngine.Networking.UploadHandler::ReleaseFromScripting_Injected(System.IntPtr)
		void Register_UnityEngine_Networking_UploadHandler_ReleaseFromScripting_Injected();
		Register_UnityEngine_Networking_UploadHandler_ReleaseFromScripting_Injected();

	//End Registrations for type : UnityEngine.Networking.UploadHandler

	//Start Registrations for type : UnityEngine.Object

		//System.Int32 UnityEngine.Object::GetOffsetOfInstanceIDInCPlusPlusObject()
		void Register_UnityEngine_Object_GetOffsetOfInstanceIDInCPlusPlusObject();
		Register_UnityEngine_Object_GetOffsetOfInstanceIDInCPlusPlusObject();

		//System.Void UnityEngine.Object::Destroy_Injected(System.IntPtr,System.Single)
		void Register_UnityEngine_Object_Destroy_Injected();
		Register_UnityEngine_Object_Destroy_Injected();

		//System.Void UnityEngine.Object::GetName_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Object_GetName_Injected();
		Register_UnityEngine_Object_GetName_Injected();

		//System.Void UnityEngine.Object::ToString_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Object_ToString_Injected();
		Register_UnityEngine_Object_ToString_Injected();

		//System.Void UnityEngine.Object::set_hideFlags_Injected(System.IntPtr,UnityEngine.HideFlags)
		void Register_UnityEngine_Object_set_hideFlags_Injected();
		Register_UnityEngine_Object_set_hideFlags_Injected();

		//UnityEngine.HideFlags UnityEngine.Object::get_hideFlags_Injected(System.IntPtr)
		void Register_UnityEngine_Object_get_hideFlags_Injected();
		Register_UnityEngine_Object_get_hideFlags_Injected();

		//UnityEngine.Object UnityEngine.Object::FindObjectFromInstanceIDThreadSafe_Injected(UnityEngine.EntityId&)
		void Register_UnityEngine_Object_FindObjectFromInstanceIDThreadSafe_Injected();
		Register_UnityEngine_Object_FindObjectFromInstanceIDThreadSafe_Injected();

	//End Registrations for type : UnityEngine.Object

	//Start Registrations for type : UnityEngine.Physics

		//System.Boolean UnityEngine.Physics::get_invokeCollisionCallbacks()
		void Register_UnityEngine_Physics_get_invokeCollisionCallbacks();
		Register_UnityEngine_Physics_get_invokeCollisionCallbacks();

		//System.Boolean UnityEngine.Physics::get_reuseCollisionCallbacks()
		void Register_UnityEngine_Physics_get_reuseCollisionCallbacks();
		Register_UnityEngine_Physics_get_reuseCollisionCallbacks();

		//System.IntPtr UnityEngine.Physics::GetBodyByInstanceID_Injected(UnityEngine.EntityId&)
		void Register_UnityEngine_Physics_GetBodyByInstanceID_Injected();
		Register_UnityEngine_Physics_GetBodyByInstanceID_Injected();

		//System.IntPtr UnityEngine.Physics::GetColliderByInstanceID_Injected(UnityEngine.EntityId&)
		void Register_UnityEngine_Physics_GetColliderByInstanceID_Injected();
		Register_UnityEngine_Physics_GetColliderByInstanceID_Injected();

		//System.Void UnityEngine.Physics::Internal_RaycastAll_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction,UnityEngine.Bindings.BlittableArrayWrapper&)
		void Register_UnityEngine_Physics_Internal_RaycastAll_Injected();
		Register_UnityEngine_Physics_Internal_RaycastAll_Injected();

		//System.Void UnityEngine.Physics::SendOnCollisionEnter_Injected(System.IntPtr,UnityEngine.Collision)
		void Register_UnityEngine_Physics_SendOnCollisionEnter_Injected();
		Register_UnityEngine_Physics_SendOnCollisionEnter_Injected();

		//System.Void UnityEngine.Physics::SendOnCollisionExit_Injected(System.IntPtr,UnityEngine.Collision)
		void Register_UnityEngine_Physics_SendOnCollisionExit_Injected();
		Register_UnityEngine_Physics_SendOnCollisionExit_Injected();

		//System.Void UnityEngine.Physics::SendOnCollisionStay_Injected(System.IntPtr,UnityEngine.Collision)
		void Register_UnityEngine_Physics_SendOnCollisionStay_Injected();
		Register_UnityEngine_Physics_SendOnCollisionStay_Injected();

	//End Registrations for type : UnityEngine.Physics

	//Start Registrations for type : UnityEngine.PhysicsScene

		//System.Boolean UnityEngine.PhysicsScene::Internal_Raycast_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,UnityEngine.RaycastHit&,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_Raycast_Injected();
		Register_UnityEngine_PhysicsScene_Internal_Raycast_Injected();

		//System.Int32 UnityEngine.PhysicsScene::Internal_RaycastNonAlloc_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,UnityEngine.Bindings.ManagedSpanWrapper&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_RaycastNonAlloc_Injected();
		Register_UnityEngine_PhysicsScene_Internal_RaycastNonAlloc_Injected();

	//End Registrations for type : UnityEngine.PhysicsScene

	//Start Registrations for type : UnityEngine.PlayerConnectionInternal

		//System.Boolean UnityEngine.PlayerConnectionInternal::IsConnected()
		void Register_UnityEngine_PlayerConnectionInternal_IsConnected();
		Register_UnityEngine_PlayerConnectionInternal_IsConnected();

		//System.Boolean UnityEngine.PlayerConnectionInternal::TrySendMessage_Injected(UnityEngine.Bindings.ManagedSpanWrapper&,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32)
		void Register_UnityEngine_PlayerConnectionInternal_TrySendMessage_Injected();
		Register_UnityEngine_PlayerConnectionInternal_TrySendMessage_Injected();

		//System.Void UnityEngine.PlayerConnectionInternal::DisconnectAll()
		void Register_UnityEngine_PlayerConnectionInternal_DisconnectAll();
		Register_UnityEngine_PlayerConnectionInternal_DisconnectAll();

		//System.Void UnityEngine.PlayerConnectionInternal::Initialize()
		void Register_UnityEngine_PlayerConnectionInternal_Initialize();
		Register_UnityEngine_PlayerConnectionInternal_Initialize();

		//System.Void UnityEngine.PlayerConnectionInternal::PollInternal()
		void Register_UnityEngine_PlayerConnectionInternal_PollInternal();
		Register_UnityEngine_PlayerConnectionInternal_PollInternal();

		//System.Void UnityEngine.PlayerConnectionInternal::RegisterInternal_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_PlayerConnectionInternal_RegisterInternal_Injected();
		Register_UnityEngine_PlayerConnectionInternal_RegisterInternal_Injected();

		//System.Void UnityEngine.PlayerConnectionInternal::SendMessage_Injected(UnityEngine.Bindings.ManagedSpanWrapper&,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32)
		void Register_UnityEngine_PlayerConnectionInternal_SendMessage_Injected();
		Register_UnityEngine_PlayerConnectionInternal_SendMessage_Injected();

		//System.Void UnityEngine.PlayerConnectionInternal::UnregisterInternal_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_PlayerConnectionInternal_UnregisterInternal_Injected();
		Register_UnityEngine_PlayerConnectionInternal_UnregisterInternal_Injected();

	//End Registrations for type : UnityEngine.PlayerConnectionInternal

	//Start Registrations for type : UnityEngine.QualitySettings

		//System.Int32 UnityEngine.QualitySettings::get_count()
		void Register_UnityEngine_QualitySettings_get_count();
		Register_UnityEngine_QualitySettings_get_count();

		//UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
		void Register_UnityEngine_QualitySettings_get_activeColorSpace();
		Register_UnityEngine_QualitySettings_get_activeColorSpace();

	//End Registrations for type : UnityEngine.QualitySettings

	//Start Registrations for type : UnityEngine.Quaternion

		//System.Void UnityEngine.Quaternion::Internal_FromEulerRad_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Internal_FromEulerRad_Injected();
		Register_UnityEngine_Quaternion_Internal_FromEulerRad_Injected();

	//End Registrations for type : UnityEngine.Quaternion

	//Start Registrations for type : UnityEngine.Random

		//System.Single UnityEngine.Random::get_value()
		void Register_UnityEngine_Random_get_value();
		Register_UnityEngine_Random_get_value();

	//End Registrations for type : UnityEngine.Random

	//Start Registrations for type : UnityEngine.RectOffset

		//System.Int32 UnityEngine.RectOffset::get_bottom_Injected(System.IntPtr)
		void Register_UnityEngine_RectOffset_get_bottom_Injected();
		Register_UnityEngine_RectOffset_get_bottom_Injected();

		//System.Int32 UnityEngine.RectOffset::get_horizontal_Injected(System.IntPtr)
		void Register_UnityEngine_RectOffset_get_horizontal_Injected();
		Register_UnityEngine_RectOffset_get_horizontal_Injected();

		//System.Int32 UnityEngine.RectOffset::get_left_Injected(System.IntPtr)
		void Register_UnityEngine_RectOffset_get_left_Injected();
		Register_UnityEngine_RectOffset_get_left_Injected();

		//System.Int32 UnityEngine.RectOffset::get_right_Injected(System.IntPtr)
		void Register_UnityEngine_RectOffset_get_right_Injected();
		Register_UnityEngine_RectOffset_get_right_Injected();

		//System.Int32 UnityEngine.RectOffset::get_top_Injected(System.IntPtr)
		void Register_UnityEngine_RectOffset_get_top_Injected();
		Register_UnityEngine_RectOffset_get_top_Injected();

		//System.Int32 UnityEngine.RectOffset::get_vertical_Injected(System.IntPtr)
		void Register_UnityEngine_RectOffset_get_vertical_Injected();
		Register_UnityEngine_RectOffset_get_vertical_Injected();

		//System.IntPtr UnityEngine.RectOffset::InternalCreate()
		void Register_UnityEngine_RectOffset_InternalCreate();
		Register_UnityEngine_RectOffset_InternalCreate();

		//System.Void UnityEngine.RectOffset::InternalDestroy(System.IntPtr)
		void Register_UnityEngine_RectOffset_InternalDestroy();
		Register_UnityEngine_RectOffset_InternalDestroy();

		//System.Void UnityEngine.RectOffset::Remove_Injected(System.IntPtr,UnityEngine.Rect&,UnityEngine.Rect&)
		void Register_UnityEngine_RectOffset_Remove_Injected();
		Register_UnityEngine_RectOffset_Remove_Injected();

		//System.Void UnityEngine.RectOffset::set_bottom_Injected(System.IntPtr,System.Int32)
		void Register_UnityEngine_RectOffset_set_bottom_Injected();
		Register_UnityEngine_RectOffset_set_bottom_Injected();

		//System.Void UnityEngine.RectOffset::set_left_Injected(System.IntPtr,System.Int32)
		void Register_UnityEngine_RectOffset_set_left_Injected();
		Register_UnityEngine_RectOffset_set_left_Injected();

		//System.Void UnityEngine.RectOffset::set_right_Injected(System.IntPtr,System.Int32)
		void Register_UnityEngine_RectOffset_set_right_Injected();
		Register_UnityEngine_RectOffset_set_right_Injected();

		//System.Void UnityEngine.RectOffset::set_top_Injected(System.IntPtr,System.Int32)
		void Register_UnityEngine_RectOffset_set_top_Injected();
		Register_UnityEngine_RectOffset_set_top_Injected();

	//End Registrations for type : UnityEngine.RectOffset

	//Start Registrations for type : UnityEngine.Rendering.GraphicsSettings

		//System.Boolean UnityEngine.Rendering.GraphicsSettings::get_lightsUseLinearIntensity()
		void Register_UnityEngine_Rendering_GraphicsSettings_get_lightsUseLinearIntensity();
		Register_UnityEngine_Rendering_GraphicsSettings_get_lightsUseLinearIntensity();

		//System.IntPtr UnityEngine.Rendering.GraphicsSettings::Internal_GetSettingsForRenderPipeline_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Rendering_GraphicsSettings_Internal_GetSettingsForRenderPipeline_Injected();
		Register_UnityEngine_Rendering_GraphicsSettings_Internal_GetSettingsForRenderPipeline_Injected();

		//System.IntPtr UnityEngine.Rendering.GraphicsSettings::get_INTERNAL_currentRenderPipeline_Injected()
		void Register_UnityEngine_Rendering_GraphicsSettings_get_INTERNAL_currentRenderPipeline_Injected();
		Register_UnityEngine_Rendering_GraphicsSettings_get_INTERNAL_currentRenderPipeline_Injected();

	//End Registrations for type : UnityEngine.Rendering.GraphicsSettings

	//Start Registrations for type : UnityEngine.Rendering.ScriptableRenderContext

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal(System.Collections.Generic.List`1<UnityEngine.Camera>)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_GetCameras_Internal();
		Register_UnityEngine_Rendering_ScriptableRenderContext_GetCameras_Internal();

	//End Registrations for type : UnityEngine.Rendering.ScriptableRenderContext

	//Start Registrations for type : UnityEngine.RenderTexture

		//System.Int32 UnityEngine.RenderTexture::get_height_Injected(System.IntPtr)
		void Register_UnityEngine_RenderTexture_get_height_Injected();
		Register_UnityEngine_RenderTexture_get_height_Injected();

		//System.Int32 UnityEngine.RenderTexture::get_width_Injected(System.IntPtr)
		void Register_UnityEngine_RenderTexture_get_width_Injected();
		Register_UnityEngine_RenderTexture_get_width_Injected();

	//End Registrations for type : UnityEngine.RenderTexture

	//Start Registrations for type : UnityEngine.ResourcesAPIInternal

		//System.IntPtr UnityEngine.ResourcesAPIInternal::FindShaderByName_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_ResourcesAPIInternal_FindShaderByName_Injected();
		Register_UnityEngine_ResourcesAPIInternal_FindShaderByName_Injected();

		//System.IntPtr UnityEngine.ResourcesAPIInternal::Load_Injected(UnityEngine.Bindings.ManagedSpanWrapper&,System.Type)
		void Register_UnityEngine_ResourcesAPIInternal_Load_Injected();
		Register_UnityEngine_ResourcesAPIInternal_Load_Injected();

		//UnityEngine.Object[] UnityEngine.ResourcesAPIInternal::FindObjectsOfTypeAll(System.Type)
		void Register_UnityEngine_ResourcesAPIInternal_FindObjectsOfTypeAll();
		Register_UnityEngine_ResourcesAPIInternal_FindObjectsOfTypeAll();

	//End Registrations for type : UnityEngine.ResourcesAPIInternal

	//Start Registrations for type : UnityEngine.Screen

		//System.Int32 UnityEngine.Screen::get_height()
		void Register_UnityEngine_Screen_get_height();
		Register_UnityEngine_Screen_get_height();

		//System.Int32 UnityEngine.Screen::get_width()
		void Register_UnityEngine_Screen_get_width();
		Register_UnityEngine_Screen_get_width();

	//End Registrations for type : UnityEngine.Screen

	//Start Registrations for type : UnityEngine.ScriptableObject

		//System.IntPtr UnityEngine.ScriptableObject::CreateScriptableObjectInstanceFromType_Injected(System.Type,System.Boolean)
		void Register_UnityEngine_ScriptableObject_CreateScriptableObjectInstanceFromType_Injected();
		Register_UnityEngine_ScriptableObject_CreateScriptableObjectInstanceFromType_Injected();

		//System.Void UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)
		void Register_UnityEngine_ScriptableObject_CreateScriptableObject();
		Register_UnityEngine_ScriptableObject_CreateScriptableObject();

	//End Registrations for type : UnityEngine.ScriptableObject

	//Start Registrations for type : UnityEngine.Serialization.SerializationBackendManagedCommands

		//System.Boolean UnityEngine.Serialization.SerializationBackendManagedCommands::PushDictionaryFUIDFrame(System.IntPtr)
		void Register_UnityEngine_Serialization_SerializationBackendManagedCommands_PushDictionaryFUIDFrame();
		Register_UnityEngine_Serialization_SerializationBackendManagedCommands_PushDictionaryFUIDFrame();

		//System.IntPtr UnityEngine.Serialization.SerializationBackendManagedCommands::GetReadEntityIdFromBufferFunctionPointer()
		void Register_UnityEngine_Serialization_SerializationBackendManagedCommands_GetReadEntityIdFromBufferFunctionPointer();
		Register_UnityEngine_Serialization_SerializationBackendManagedCommands_GetReadEntityIdFromBufferFunctionPointer();

		//System.IntPtr UnityEngine.Serialization.SerializationBackendManagedCommands::GetWriteEntityIdToBufferFunctionPointer()
		void Register_UnityEngine_Serialization_SerializationBackendManagedCommands_GetWriteEntityIdToBufferFunctionPointer();
		Register_UnityEngine_Serialization_SerializationBackendManagedCommands_GetWriteEntityIdToBufferFunctionPointer();

		//System.Object UnityEngine.Serialization.SerializationBackendManagedCommands::GetDictionaryEntriesForGather(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
		void Register_UnityEngine_Serialization_SerializationBackendManagedCommands_GetDictionaryEntriesForGather();
		Register_UnityEngine_Serialization_SerializationBackendManagedCommands_GetDictionaryEntriesForGather();

		//System.Object UnityEngine.Serialization.SerializationBackendManagedCommands::ReadUnityObjectFromBuffer(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
		void Register_UnityEngine_Serialization_SerializationBackendManagedCommands_ReadUnityObjectFromBuffer();
		Register_UnityEngine_Serialization_SerializationBackendManagedCommands_ReadUnityObjectFromBuffer();

		//System.Void UnityEngine.Serialization.SerializationBackendManagedCommands::FormatDictionaryFieldUniqueIdentifier_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Serialization_SerializationBackendManagedCommands_FormatDictionaryFieldUniqueIdentifier_Injected();
		Register_UnityEngine_Serialization_SerializationBackendManagedCommands_FormatDictionaryFieldUniqueIdentifier_Injected();

		//System.Void UnityEngine.Serialization.SerializationBackendManagedCommands::PopDictionaryFUIDFrame()
		void Register_UnityEngine_Serialization_SerializationBackendManagedCommands_PopDictionaryFUIDFrame();
		Register_UnityEngine_Serialization_SerializationBackendManagedCommands_PopDictionaryFUIDFrame();

		//System.Void UnityEngine.Serialization.SerializationBackendManagedCommands::ReadManagedReferenceFromBuffer(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr)
		void Register_UnityEngine_Serialization_SerializationBackendManagedCommands_ReadManagedReferenceFromBuffer();
		Register_UnityEngine_Serialization_SerializationBackendManagedCommands_ReadManagedReferenceFromBuffer();

		//System.Void UnityEngine.Serialization.SerializationBackendManagedCommands::WriteManagedReferenceToBuffer(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_Serialization_SerializationBackendManagedCommands_WriteManagedReferenceToBuffer();
		Register_UnityEngine_Serialization_SerializationBackendManagedCommands_WriteManagedReferenceToBuffer();

		//System.Void UnityEngine.Serialization.SerializationBackendManagedCommands::WriteUnityObjectToBuffer(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
		void Register_UnityEngine_Serialization_SerializationBackendManagedCommands_WriteUnityObjectToBuffer();
		Register_UnityEngine_Serialization_SerializationBackendManagedCommands_WriteUnityObjectToBuffer();

	//End Registrations for type : UnityEngine.Serialization.SerializationBackendManagedCommands

	//Start Registrations for type : UnityEngine.Shader

		//System.Int32 UnityEngine.Shader::PropertyToID_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Shader_PropertyToID_Injected();
		Register_UnityEngine_Shader_PropertyToID_Injected();

		//System.Int32 UnityEngine.Shader::TagToID_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Shader_TagToID_Injected();
		Register_UnityEngine_Shader_TagToID_Injected();

		//System.Void UnityEngine.Shader::get_globalRenderPipeline_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Shader_get_globalRenderPipeline_Injected();
		Register_UnityEngine_Shader_get_globalRenderPipeline_Injected();

		//System.Void UnityEngine.Shader::set_globalRenderPipeline_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Shader_set_globalRenderPipeline_Injected();
		Register_UnityEngine_Shader_set_globalRenderPipeline_Injected();

	//End Registrations for type : UnityEngine.Shader

	//Start Registrations for type : UnityEngine.SystemInfo

		//System.Boolean UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.GraphicsFormatUsage)
		void Register_UnityEngine_SystemInfo_IsFormatSupported();
		Register_UnityEngine_SystemInfo_IsFormatSupported();

		//System.Boolean UnityEngine.SystemInfo::SupportsTextureFormatNative(UnityEngine.TextureFormat)
		void Register_UnityEngine_SystemInfo_SupportsTextureFormatNative();
		Register_UnityEngine_SystemInfo_SupportsTextureFormatNative();

	//End Registrations for type : UnityEngine.SystemInfo

	//Start Registrations for type : UnityEngine.TextAsset

		//System.Byte[] UnityEngine.TextAsset::get_bytes_Injected(System.IntPtr)
		void Register_UnityEngine_TextAsset_get_bytes_Injected();
		Register_UnityEngine_TextAsset_get_bytes_Injected();

		//System.Void UnityEngine.TextAsset::Internal_CreateInstance_Injected(UnityEngine.TextAsset,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_TextAsset_Internal_CreateInstance_Injected();
		Register_UnityEngine_TextAsset_Internal_CreateInstance_Injected();

	//End Registrations for type : UnityEngine.TextAsset

	//Start Registrations for type : UnityEngine.TextCore.LowLevel.FontEngine

		//System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::IsColorFontFace_FontFaceHandle_Internal(UnityEngine.TextCore.LowLevel.FontFaceHandle&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_IsColorFontFace_FontFaceHandle_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_IsColorFontFace_FontFaceHandle_Internal();

		//System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryAddGlyphToTexture_FontFaceHandle_Internal_Injected(UnityEngine.TextCore.LowLevel.FontFaceHandle&,System.UInt32,System.Int32,UnityEngine.TextCore.LowLevel.GlyphPackingMode,UnityEngine.Bindings.BlittableArrayWrapper&,System.Int32&,UnityEngine.Bindings.BlittableArrayWrapper&,System.Int32&,UnityEngine.TextCore.LowLevel.GlyphRenderMode,System.IntPtr,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_TryAddGlyphToTexture_FontFaceHandle_Internal_Injected();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_TryAddGlyphToTexture_FontFaceHandle_Internal_Injected();

		//System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryAddGlyphsToTexture_FontFaceHandle_Internal_Injected(UnityEngine.TextCore.LowLevel.FontFaceHandle&,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32,UnityEngine.TextCore.LowLevel.GlyphPackingMode,UnityEngine.Bindings.BlittableArrayWrapper&,System.Int32&,UnityEngine.Bindings.BlittableArrayWrapper&,System.Int32&,UnityEngine.TextCore.LowLevel.GlyphRenderMode,System.IntPtr,UnityEngine.Bindings.BlittableArrayWrapper&,System.Int32&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_TryAddGlyphsToTexture_FontFaceHandle_Internal_Injected();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_TryAddGlyphsToTexture_FontFaceHandle_Internal_Injected();

		//System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryGetGlyphWithUnicodeValue_FontFaceHandle_Internal(UnityEngine.TextCore.LowLevel.FontFaceHandle&,System.UInt32,UnityEngine.TextCore.LowLevel.GlyphLoadFlags,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_TryGetGlyphWithUnicodeValue_FontFaceHandle_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_TryGetGlyphWithUnicodeValue_FontFaceHandle_Internal();

		//System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryGetSystemFontReference_Internal_Injected(UnityEngine.Bindings.ManagedSpanWrapper&,UnityEngine.Bindings.ManagedSpanWrapper&,UnityEngine.TextCore.LowLevel.FontReference&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_TryGetSystemFontReference_Internal_Injected();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_TryGetSystemFontReference_Internal_Injected();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::GetFaceInfo_FontFaceHandle_Internal(UnityEngine.TextCore.LowLevel.FontFaceHandle&,UnityEngine.TextCore.FaceInfo&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_GetFaceInfo_FontFaceHandle_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_GetFaceInfo_FontFaceHandle_Internal();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::GetLigatureSubstitutionRecordsFromMarshallingArray(UnityEngine.TextCore.LowLevel.LigatureSubstitutionRecord[])
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_GetLigatureSubstitutionRecordsFromMarshallingArray();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_GetLigatureSubstitutionRecordsFromMarshallingArray();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::GetMarkToBaseAdjustmentRecordsFromMarshallingArray_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_GetMarkToBaseAdjustmentRecordsFromMarshallingArray_Injected();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_GetMarkToBaseAdjustmentRecordsFromMarshallingArray_Injected();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::GetMarkToMarkAdjustmentRecordsFromMarshallingArray_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_GetMarkToMarkAdjustmentRecordsFromMarshallingArray_Injected();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_GetMarkToMarkAdjustmentRecordsFromMarshallingArray_Injected();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::GetPairAdjustmentRecordsFromMarshallingArray_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_GetPairAdjustmentRecordsFromMarshallingArray_Injected();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_GetPairAdjustmentRecordsFromMarshallingArray_Injected();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace_With_Size_And_FaceIndex_FontFaceHandle_Internal_Injected(UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32,System.Int32,UnityEngine.TextCore.LowLevel.FontFaceHandle&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_LoadFontFace_With_Size_And_FaceIndex_FontFaceHandle_Internal_Injected();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_LoadFontFace_With_Size_And_FaceIndex_FontFaceHandle_Internal_Injected();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace_With_Size_and_FaceIndex_FromFont_FontFaceHandle_Internal_Injected(System.IntPtr,System.Int32,System.Int32,UnityEngine.TextCore.LowLevel.FontFaceHandle&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_LoadFontFace_With_Size_and_FaceIndex_FromFont_FontFaceHandle_Internal_Injected();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_LoadFontFace_With_Size_and_FaceIndex_FromFont_FontFaceHandle_Internal_Injected();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace_With_Size_by_FamilyName_and_StyleName_FontFaceHandle_Internal_Injected(UnityEngine.Bindings.ManagedSpanWrapper&,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32,UnityEngine.TextCore.LowLevel.FontFaceHandle&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_LoadFontFace_With_Size_by_FamilyName_and_StyleName_FontFaceHandle_Internal_Injected();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_LoadFontFace_With_Size_by_FamilyName_and_StyleName_FontFaceHandle_Internal_Injected();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::PopulateLigatureSubstitutionRecordMarshallingArray_FontFaceHandle_Injected(UnityEngine.TextCore.LowLevel.FontFaceHandle&,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_PopulateLigatureSubstitutionRecordMarshallingArray_FontFaceHandle_Injected();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_PopulateLigatureSubstitutionRecordMarshallingArray_FontFaceHandle_Injected();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::PopulateMarkToBaseAdjustmentRecordMarshallingArray_FontFaceHandle_Injected(UnityEngine.TextCore.LowLevel.FontFaceHandle&,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_PopulateMarkToBaseAdjustmentRecordMarshallingArray_FontFaceHandle_Injected();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_PopulateMarkToBaseAdjustmentRecordMarshallingArray_FontFaceHandle_Injected();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::PopulateMarkToMarkAdjustmentRecordMarshallingArray_FontFaceHandle_Injected(UnityEngine.TextCore.LowLevel.FontFaceHandle&,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_PopulateMarkToMarkAdjustmentRecordMarshallingArray_FontFaceHandle_Injected();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_PopulateMarkToMarkAdjustmentRecordMarshallingArray_FontFaceHandle_Injected();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::PopulatePairAdjustmentRecordMarshallingArray_FontFaceHandle_Injected(UnityEngine.TextCore.LowLevel.FontFaceHandle&,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_PopulatePairAdjustmentRecordMarshallingArray_FontFaceHandle_Injected();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_PopulatePairAdjustmentRecordMarshallingArray_FontFaceHandle_Injected();

		//System.UInt32 UnityEngine.TextCore.LowLevel.FontEngine::GetGlyphIndex_FontFaceHandle_Internal(UnityEngine.TextCore.LowLevel.FontFaceHandle&,System.UInt32)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_GetGlyphIndex_FontFaceHandle_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_GetGlyphIndex_FontFaceHandle_Internal();

		//System.UInt32 UnityEngine.TextCore.LowLevel.FontEngine::GetVariantGlyphIndex_FontFaceHandle_Internal(UnityEngine.TextCore.LowLevel.FontFaceHandle&,System.UInt32,System.UInt32)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_GetVariantGlyphIndex_FontFaceHandle_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_GetVariantGlyphIndex_FontFaceHandle_Internal();

		//System.Void UnityEngine.TextCore.LowLevel.FontEngine::GetAllMarkToBaseAdjustmentRecords_FontFaceHandle_Internal_Injected(UnityEngine.TextCore.LowLevel.FontFaceHandle&,UnityEngine.Bindings.BlittableArrayWrapper&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_GetAllMarkToBaseAdjustmentRecords_FontFaceHandle_Internal_Injected();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_GetAllMarkToBaseAdjustmentRecords_FontFaceHandle_Internal_Injected();

		//System.Void UnityEngine.TextCore.LowLevel.FontEngine::GetAllMarkToMarkAdjustmentRecords_FontFaceHandle_Internal_Injected(UnityEngine.TextCore.LowLevel.FontFaceHandle&,UnityEngine.Bindings.BlittableArrayWrapper&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_GetAllMarkToMarkAdjustmentRecords_FontFaceHandle_Internal_Injected();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_GetAllMarkToMarkAdjustmentRecords_FontFaceHandle_Internal_Injected();

		//System.Void UnityEngine.TextCore.LowLevel.FontEngine::GetAllPairAdjustmentRecords_FontFaceHandle_Internal_Injected(UnityEngine.TextCore.LowLevel.FontFaceHandle&,UnityEngine.Bindings.BlittableArrayWrapper&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_GetAllPairAdjustmentRecords_FontFaceHandle_Internal_Injected();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_GetAllPairAdjustmentRecords_FontFaceHandle_Internal_Injected();

		//System.Void UnityEngine.TextCore.LowLevel.FontEngine::ResetAtlasTexture_Injected(System.IntPtr)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_ResetAtlasTexture_Injected();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_ResetAtlasTexture_Injected();

		//System.Void UnityEngine.TextCore.LowLevel.FontEngine::SetTextureUploadMode(System.Boolean)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_SetTextureUploadMode();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_SetTextureUploadMode();

		//UnityEngine.TextCore.LowLevel.LigatureSubstitutionRecord[] UnityEngine.TextCore.LowLevel.FontEngine::GetAllLigatureSubstitutionRecords_FontFaceHandle_Internal(UnityEngine.TextCore.LowLevel.FontFaceHandle&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_GetAllLigatureSubstitutionRecords_FontFaceHandle_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_GetAllLigatureSubstitutionRecords_FontFaceHandle_Internal();

	//End Registrations for type : UnityEngine.TextCore.LowLevel.FontEngine

	//Start Registrations for type : UnityEngine.TextCore.NativeRichTextParser

		//UnityEngine.TextCore.RichTextLinkInfo[] UnityEngine.TextCore.NativeRichTextParser::GetAllLinks(System.IntPtr)
		void Register_UnityEngine_TextCore_NativeRichTextParser_GetAllLinks();
		Register_UnityEngine_TextCore_NativeRichTextParser_GetAllLinks();

	//End Registrations for type : UnityEngine.TextCore.NativeRichTextParser

	//Start Registrations for type : UnityEngine.TextCore.Text.FontAsset

		//System.Boolean UnityEngine.TextCore.Text.FontAsset::TryGetGlyphIndex(System.IntPtr,System.UInt32,System.UInt32&)
		void Register_UnityEngine_TextCore_Text_FontAsset_TryGetGlyphIndex();
		Register_UnityEngine_TextCore_Text_FontAsset_TryGetGlyphIndex();

		//System.Boolean UnityEngine.TextCore.Text.FontAsset::TryGetGlyphMetrics(System.IntPtr,System.UInt32,UnityEngine.TextCore.GlyphMetrics&)
		void Register_UnityEngine_TextCore_Text_FontAsset_TryGetGlyphMetrics();
		Register_UnityEngine_TextCore_Text_FontAsset_TryGetGlyphMetrics();

		//System.IntPtr UnityEngine.TextCore.Text.FontAsset::Create_Injected(UnityEngine.TextCore.FaceInfo&,System.IntPtr,System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,UnityEngine.EntityId&,UnityEngine.Bindings.ManagedSpanWrapper&,UnityEngine.Bindings.ManagedSpanWrapper&,UnityEngine.Bindings.ManagedSpanWrapper&,UnityEngine.TextCore.LowLevel.GlyphRenderMode,System.Byte,System.Single,System.Int32,System.IntPtr)
		void Register_UnityEngine_TextCore_Text_FontAsset_Create_Injected();
		Register_UnityEngine_TextCore_Text_FontAsset_Create_Injected();

		//System.Void UnityEngine.TextCore.Text.FontAsset::CreateHbFaceIfNeeded()
		void Register_UnityEngine_TextCore_Text_FontAsset_CreateHbFaceIfNeeded();
		Register_UnityEngine_TextCore_Text_FontAsset_CreateHbFaceIfNeeded();

		//System.Void UnityEngine.TextCore.Text.FontAsset::Destroy(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_TextCore_Text_FontAsset_Destroy();
		Register_UnityEngine_TextCore_Text_FontAsset_Destroy();

		//System.Void UnityEngine.TextCore.Text.FontAsset::UpdateBoldSpacing(System.IntPtr,System.Int32)
		void Register_UnityEngine_TextCore_Text_FontAsset_UpdateBoldSpacing();
		Register_UnityEngine_TextCore_Text_FontAsset_UpdateBoldSpacing();

		//System.Void UnityEngine.TextCore.Text.FontAsset::UpdateBoldWeight(System.IntPtr,System.Single)
		void Register_UnityEngine_TextCore_Text_FontAsset_UpdateBoldWeight();
		Register_UnityEngine_TextCore_Text_FontAsset_UpdateBoldWeight();

		//System.Void UnityEngine.TextCore.Text.FontAsset::UpdateFaceInfo_Injected(System.IntPtr,UnityEngine.TextCore.FaceInfo&)
		void Register_UnityEngine_TextCore_Text_FontAsset_UpdateFaceInfo_Injected();
		Register_UnityEngine_TextCore_Text_FontAsset_UpdateFaceInfo_Injected();

		//System.Void UnityEngine.TextCore.Text.FontAsset::UpdateFallbacks_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_TextCore_Text_FontAsset_UpdateFallbacks_Injected();
		Register_UnityEngine_TextCore_Text_FontAsset_UpdateFallbacks_Injected();

		//System.Void UnityEngine.TextCore.Text.FontAsset::UpdateItalicAngle(System.IntPtr,System.Byte)
		void Register_UnityEngine_TextCore_Text_FontAsset_UpdateItalicAngle();
		Register_UnityEngine_TextCore_Text_FontAsset_UpdateItalicAngle();

		//System.Void UnityEngine.TextCore.Text.FontAsset::UpdateRenderMode(System.IntPtr,UnityEngine.TextCore.LowLevel.GlyphRenderMode)
		void Register_UnityEngine_TextCore_Text_FontAsset_UpdateRenderMode();
		Register_UnityEngine_TextCore_Text_FontAsset_UpdateRenderMode();

		//System.Void UnityEngine.TextCore.Text.FontAsset::UpdateSourceFontFile_Injected(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_TextCore_Text_FontAsset_UpdateSourceFontFile_Injected();
		Register_UnityEngine_TextCore_Text_FontAsset_UpdateSourceFontFile_Injected();

		//System.Void UnityEngine.TextCore.Text.FontAsset::UpdateWeightFallbacks_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_TextCore_Text_FontAsset_UpdateWeightFallbacks_Injected();
		Register_UnityEngine_TextCore_Text_FontAsset_UpdateWeightFallbacks_Injected();

	//End Registrations for type : UnityEngine.TextCore.Text.FontAsset

	//Start Registrations for type : UnityEngine.TextCore.Text.TextColorGradient

		//System.IntPtr UnityEngine.TextCore.Text.TextColorGradient::CreateNative_Injected(UnityEngine.Color32&,UnityEngine.Color32&,UnityEngine.Color32&,UnityEngine.Color32&,System.IntPtr)
		void Register_UnityEngine_TextCore_Text_TextColorGradient_CreateNative_Injected();
		Register_UnityEngine_TextCore_Text_TextColorGradient_CreateNative_Injected();

		//System.Void UnityEngine.TextCore.Text.TextColorGradient::DestroyNative(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_TextCore_Text_TextColorGradient_DestroyNative();
		Register_UnityEngine_TextCore_Text_TextColorGradient_DestroyNative();

		//System.Void UnityEngine.TextCore.Text.TextColorGradient::UpdateNative_Injected(System.IntPtr,UnityEngine.Color32&,UnityEngine.Color32&,UnityEngine.Color32&,UnityEngine.Color32&)
		void Register_UnityEngine_TextCore_Text_TextColorGradient_UpdateNative_Injected();
		Register_UnityEngine_TextCore_Text_TextColorGradient_UpdateNative_Injected();

	//End Registrations for type : UnityEngine.TextCore.Text.TextColorGradient

	//Start Registrations for type : UnityEngine.TextCore.Text.TextEditingService

		//System.Boolean UnityEngine.TextCore.Text.TextEditingService::SetText_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_TextCore_Text_TextEditingService_SetText_Injected();
		Register_UnityEngine_TextCore_Text_TextEditingService_SetText_Injected();

		//System.Void UnityEngine.TextCore.Text.TextEditingService::GetText_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_TextCore_Text_TextEditingService_GetText_Injected();
		Register_UnityEngine_TextCore_Text_TextEditingService_GetText_Injected();

	//End Registrations for type : UnityEngine.TextCore.Text.TextEditingService

	//Start Registrations for type : UnityEngine.TextCore.Text.TextGenerationInfo

		//System.IntPtr UnityEngine.TextCore.Text.TextGenerationInfo::Create(System.Boolean)
		void Register_UnityEngine_TextCore_Text_TextGenerationInfo_Create();
		Register_UnityEngine_TextCore_Text_TextGenerationInfo_Create();

		//System.Void UnityEngine.TextCore.Text.TextGenerationInfo::Destroy(System.IntPtr)
		void Register_UnityEngine_TextCore_Text_TextGenerationInfo_Destroy();
		Register_UnityEngine_TextCore_Text_TextGenerationInfo_Destroy();

	//End Registrations for type : UnityEngine.TextCore.Text.TextGenerationInfo

	//Start Registrations for type : UnityEngine.TextCore.Text.TextLib

		//System.IntPtr UnityEngine.TextCore.Text.TextLib::GetInstance_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_TextCore_Text_TextLib_GetInstance_Injected();
		Register_UnityEngine_TextCore_Text_TextLib_GetInstance_Injected();

		//System.Void UnityEngine.TextCore.Text.TextLib::GenerateTextInternal_Injected(System.IntPtr,UnityEngine.TextCore.NativeTextGenerationSettings&,System.IntPtr,System.Boolean&,UnityEngine.TextCore.Text.NativeTextInfo&)
		void Register_UnityEngine_TextCore_Text_TextLib_GenerateTextInternal_Injected();
		Register_UnityEngine_TextCore_Text_TextLib_GenerateTextInternal_Injected();

	//End Registrations for type : UnityEngine.TextCore.Text.TextLib

	//Start Registrations for type : UnityEngine.TextCore.Text.TextSelectionService

		//System.Boolean UnityEngine.TextCore.Text.TextSelectionService::GetRevealCursor(System.IntPtr)
		void Register_UnityEngine_TextCore_Text_TextSelectionService_GetRevealCursor();
		Register_UnityEngine_TextCore_Text_TextSelectionService_GetRevealCursor();

		//System.Boolean UnityEngine.TextCore.Text.TextSelectionService::SetCursorIndex(System.IntPtr,System.Int32)
		void Register_UnityEngine_TextCore_Text_TextSelectionService_SetCursorIndex();
		Register_UnityEngine_TextCore_Text_TextSelectionService_SetCursorIndex();

		//System.Boolean UnityEngine.TextCore.Text.TextSelectionService::SetRevealCursor(System.IntPtr,System.Boolean)
		void Register_UnityEngine_TextCore_Text_TextSelectionService_SetRevealCursor();
		Register_UnityEngine_TextCore_Text_TextSelectionService_SetRevealCursor();

		//System.Boolean UnityEngine.TextCore.Text.TextSelectionService::SetSelectIndex(System.IntPtr,System.Int32)
		void Register_UnityEngine_TextCore_Text_TextSelectionService_SetSelectIndex();
		Register_UnityEngine_TextCore_Text_TextSelectionService_SetSelectIndex();

		//System.Int32 UnityEngine.TextCore.Text.TextSelectionService::GetCursorIndexNoValidation(System.IntPtr)
		void Register_UnityEngine_TextCore_Text_TextSelectionService_GetCursorIndexNoValidation();
		Register_UnityEngine_TextCore_Text_TextSelectionService_GetCursorIndexNoValidation();

		//System.Int32 UnityEngine.TextCore.Text.TextSelectionService::GetSelectIndexNoValidation(System.IntPtr)
		void Register_UnityEngine_TextCore_Text_TextSelectionService_GetSelectIndexNoValidation();
		Register_UnityEngine_TextCore_Text_TextSelectionService_GetSelectIndexNoValidation();

		//System.Void UnityEngine.TextCore.Text.TextSelectionService::GetCursorPositionFromLogicalIndex_Injected(System.IntPtr,System.Int32,UnityEngine.Vector2&)
		void Register_UnityEngine_TextCore_Text_TextSelectionService_GetCursorPositionFromLogicalIndex_Injected();
		Register_UnityEngine_TextCore_Text_TextSelectionService_GetCursorPositionFromLogicalIndex_Injected();

	//End Registrations for type : UnityEngine.TextCore.Text.TextSelectionService

	//Start Registrations for type : UnityEngine.TextCore.Text.TextSettings

		//System.IntPtr UnityEngine.TextCore.Text.TextSettings::CreateNativeObject_Injected(UnityEngine.Bindings.ManagedSpanWrapper&,System.IntPtr,UnityEngine.EntityId&)
		void Register_UnityEngine_TextCore_Text_TextSettings_CreateNativeObject_Injected();
		Register_UnityEngine_TextCore_Text_TextSettings_CreateNativeObject_Injected();

		//System.Void UnityEngine.TextCore.Text.TextSettings::DestroyNativeObject(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_TextCore_Text_TextSettings_DestroyNativeObject();
		Register_UnityEngine_TextCore_Text_TextSettings_DestroyNativeObject();

		//System.Void UnityEngine.TextCore.Text.TextSettings::UpdateFallbacks_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_TextCore_Text_TextSettings_UpdateFallbacks_Injected();
		Register_UnityEngine_TextCore_Text_TextSettings_UpdateFallbacks_Injected();

	//End Registrations for type : UnityEngine.TextCore.Text.TextSettings

	//Start Registrations for type : UnityEngine.Texture

		//System.Boolean UnityEngine.Texture::get_isReadable_Injected(System.IntPtr)
		void Register_UnityEngine_Texture_get_isReadable_Injected();
		Register_UnityEngine_Texture_get_isReadable_Injected();

		//System.Int32 UnityEngine.Texture::GetDataHeight_Injected(System.IntPtr)
		void Register_UnityEngine_Texture_GetDataHeight_Injected();
		Register_UnityEngine_Texture_GetDataHeight_Injected();

		//System.Int32 UnityEngine.Texture::GetDataWidth_Injected(System.IntPtr)
		void Register_UnityEngine_Texture_GetDataWidth_Injected();
		Register_UnityEngine_Texture_GetDataWidth_Injected();

		//System.Void UnityEngine.Texture::set_filterMode_Injected(System.IntPtr,UnityEngine.FilterMode)
		void Register_UnityEngine_Texture_set_filterMode_Injected();
		Register_UnityEngine_Texture_set_filterMode_Injected();

		//System.Void UnityEngine.Texture::set_wrapMode_Injected(System.IntPtr,UnityEngine.TextureWrapMode)
		void Register_UnityEngine_Texture_set_wrapMode_Injected();
		Register_UnityEngine_Texture_set_wrapMode_Injected();

	//End Registrations for type : UnityEngine.Texture

	//Start Registrations for type : UnityEngine.Texture2D

		//System.Boolean UnityEngine.Texture2D::Internal_CreateImpl_Injected(UnityEngine.Texture2D,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.TextureColorSpace,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr,System.Boolean,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Texture2D_Internal_CreateImpl_Injected();
		Register_UnityEngine_Texture2D_Internal_CreateImpl_Injected();

		//System.Boolean UnityEngine.Texture2D::ReinitializeImpl_Injected(System.IntPtr,System.Int32,System.Int32)
		void Register_UnityEngine_Texture2D_ReinitializeImpl_Injected();
		Register_UnityEngine_Texture2D_ReinitializeImpl_Injected();

		//System.Boolean UnityEngine.Texture2D::ReinitializeWithTextureFormatImpl_Injected(System.IntPtr,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
		void Register_UnityEngine_Texture2D_ReinitializeWithTextureFormatImpl_Injected();
		Register_UnityEngine_Texture2D_ReinitializeWithTextureFormatImpl_Injected();

		//System.Boolean UnityEngine.Texture2D::get_isReadable_Injected(System.IntPtr)
		void Register_UnityEngine_Texture2D_get_isReadable_Injected();
		Register_UnityEngine_Texture2D_get_isReadable_Injected();

		//System.Void UnityEngine.Texture2D::ApplyImpl_Injected(System.IntPtr,System.Boolean,System.Boolean)
		void Register_UnityEngine_Texture2D_ApplyImpl_Injected();
		Register_UnityEngine_Texture2D_ApplyImpl_Injected();

		//System.Void UnityEngine.Texture2D::SetPixelImpl_Injected(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Texture2D_SetPixelImpl_Injected();
		Register_UnityEngine_Texture2D_SetPixelImpl_Injected();

	//End Registrations for type : UnityEngine.Texture2D

	//Start Registrations for type : UnityEngine.Texture2DArray

		//System.Boolean UnityEngine.Texture2DArray::Internal_CreateImpl_Injected(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.TextureColorSpace,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.Boolean,UnityEngine.Bindings.ManagedSpanWrapper&)
		void Register_UnityEngine_Texture2DArray_Internal_CreateImpl_Injected();
		Register_UnityEngine_Texture2DArray_Internal_CreateImpl_Injected();

		//System.Boolean UnityEngine.Texture2DArray::get_isReadable_Injected(System.IntPtr)
		void Register_UnityEngine_Texture2DArray_get_isReadable_Injected();
		Register_UnityEngine_Texture2DArray_get_isReadable_Injected();

	//End Registrations for type : UnityEngine.Texture2DArray

	//Start Registrations for type : UnityEngine.Texture3D

		//System.Boolean UnityEngine.Texture3D::Internal_CreateImpl(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.TextureColorSpace,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
		void Register_UnityEngine_Texture3D_Internal_CreateImpl();
		Register_UnityEngine_Texture3D_Internal_CreateImpl();

		//System.Boolean UnityEngine.Texture3D::get_isReadable_Injected(System.IntPtr)
		void Register_UnityEngine_Texture3D_get_isReadable_Injected();
		Register_UnityEngine_Texture3D_get_isReadable_Injected();

	//End Registrations for type : UnityEngine.Texture3D

	//Start Registrations for type : UnityEngine.Time

		//System.Int32 UnityEngine.Time::get_frameCount()
		void Register_UnityEngine_Time_get_frameCount();
		Register_UnityEngine_Time_get_frameCount();

		//System.Single UnityEngine.Time::get_realtimeSinceStartup()
		void Register_UnityEngine_Time_get_realtimeSinceStartup();
		Register_UnityEngine_Time_get_realtimeSinceStartup();

		//System.Single UnityEngine.Time::get_unscaledDeltaTime()
		void Register_UnityEngine_Time_get_unscaledDeltaTime();
		Register_UnityEngine_Time_get_unscaledDeltaTime();

	//End Registrations for type : UnityEngine.Time

	//Start Registrations for type : UnityEngine.Transform

		//System.Int32 UnityEngine.Transform::get_childCount_Injected(System.IntPtr)
		void Register_UnityEngine_Transform_get_childCount_Injected();
		Register_UnityEngine_Transform_get_childCount_Injected();

		//System.IntPtr UnityEngine.Transform::GetChild_Injected(System.IntPtr,System.Int32)
		void Register_UnityEngine_Transform_GetChild_Injected();
		Register_UnityEngine_Transform_GetChild_Injected();

		//System.Void UnityEngine.Transform::get_position_Injected(System.IntPtr,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_position_Injected();
		Register_UnityEngine_Transform_get_position_Injected();

		//System.Void UnityEngine.Transform::get_rotation_Injected(System.IntPtr,UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_get_rotation_Injected();
		Register_UnityEngine_Transform_get_rotation_Injected();

	//End Registrations for type : UnityEngine.Transform

	//Start Registrations for type : UnityEngine.U2D.SpriteAtlasManager

		//System.Void UnityEngine.U2D.SpriteAtlasManager::Register_Injected(System.IntPtr)
		void Register_UnityEngine_U2D_SpriteAtlasManager_Register_Injected();
		Register_UnityEngine_U2D_SpriteAtlasManager_Register_Injected();

	//End Registrations for type : UnityEngine.U2D.SpriteAtlasManager

}

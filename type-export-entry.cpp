#define EXPORTING_TYPES
#define RESOLVE_STATIC_VARIABLE(x) x

namespace std {
	typedef size_t align_val_t;
}

#include "miller-api/miller-api/miller-api.h"

// template class csl::fnd::Delegate<void ()>;
// template class csl::fnd::Delegate<void (hh::ui::UIListViewElement*, bool)>;
// template class csl::fnd::Delegate<void (hh::ui::UIListViewElement*, hh::ui::ListViewEventArg&)>;
// template class csl::fnd::Delegate<void (hh::ui::GOCSprite*)>;
// template class csl::fnd::Delegate<void (hh::ui::GOCUIComposition*)>;
// template class hh::game::InputComponent::InputMonitor<uint16_t>;
// template class hh::game::InputComponent::InputMonitor<uint32_t>;
// template class hh::game::InputComponent::InputMonitor<csl::math::Vector4>;
template class csl::ut::InplaceMoveArray<const char*, 32>;
// template class csl::ut::Pair<SurfRide::ReferenceCast*, hh::ui::UIListViewElement::Cursor*>;
// template class hh::fnd::Reference<hh::ui::UIListViewElement::Cursor>;
// template class hh::fnd::Reference<hh::ui::UIElement>;
// template class hh::fnd::Reference<hh::ui::UIElementBase>;
// template class hh::fnd::ResReflectionT<app::player::GOCPlayerParameter::CharacterParameters>;
// template class hh::fnd::ResReflectionT<heur::rfl::PlayerCameraSetParameters>;
// template class hh::needle::ImplDX11::NeedleResourceContainer<hh::needle::Texture, hh::needle::ImplDX11::TextureDX11Impl<hh::needle::ImplDX11::SBufferTexture2D, hh::needle::ImplDX11::SViewTexture2D, NEEDLE_RESOURCE_DX11_TEXTURE_VIEW>, NEEDLE_RESOURCE_CONTAINER, hh::needle::ImplDX11::SQueryTypeOwn, hh::needle::ImplDX11::SDupTypeSupport>;
// template class hh::needle::ImplDX11::NeedleResourceContainer<hh::needle::RenderTarget, hh::needle::ImplDX11::TextureDX11Impl<hh::needle::ImplDX11::SBufferTexture2D, hh::needle::ImplDX11::SViewRenderTarget, NEEDLE_RESOURCE_DX11_RENDER_TARGET_VIEW>, NEEDLE_RESOURCE_CONTAINER, hh::needle::ImplDX11::SQueryTypeOwn, hh::needle::ImplDX11::SDupTypeNotSupport>;
// template class hh::needle::ImplDX11::NeedleResourceContainer<hh::needle::UnorderedAccessView, hh::needle::ImplDX11::TextureDX11Impl<hh::needle::ImplDX11::SBufferTexture2D, hh::needle::ImplDX11::SViewUnorderedAccess, NEEDLE_RESOURCE_DX11_UNORDERED_ACCESS_VIEW>, NEEDLE_RESOURCE_CONTAINER, hh::needle::ImplDX11::SQueryTypeOwn, hh::needle::ImplDX11::SDupTypeNotSupport>;
// template class hh::needle::ImplDX11::NeedleResourceContainer<hh::needle::DepthStencil, hh::needle::ImplDX11::TextureDX11Impl<hh::needle::ImplDX11::SBufferTexture2D, hh::needle::ImplDX11::SViewDepthStencil, NEEDLE_RESOURCE_DX11_DEPTH_STENCIL_VIEW>, NEEDLE_RESOURCE_CONTAINER, hh::needle::ImplDX11::SQueryTypeOwn, hh::needle::ImplDX11::SDupTypeNotSupport>;
// template class hh::needle::ImplDX11::NeedleResourceContainer<hh::needle::VertexShader, hh::needle::ImplDX11::SShaderContext2, NEEDLE_RESOURCE_DX11_VERTEX_SHADER_OBJECT, hh::needle::ImplDX11::SQueryTypeSelf, hh::needle::ImplDX11::SDupTypeNotSupport>;
// template class hh::needle::ImplDX11::NeedleResourceContainer<hh::needle::PixelShader, hh::needle::ImplDX11::SShaderContext2, NEEDLE_RESOURCE_DX11_PIXEL_SHADER_OBJECT, hh::needle::ImplDX11::SQueryTypeSelf, hh::needle::ImplDX11::SDupTypeNotSupport>;
// template class hh::needle::ImplDX11::NeedleResourceContainer<hh::needle::ComputeShader, hh::needle::ImplDX11::SShaderContext2, NEEDLE_RESOURCE_DX11_COMPUTE_SHADER_OBJECT, hh::needle::ImplDX11::SQueryTypeSelf, hh::needle::ImplDX11::SDupTypeNotSupport>;
// template class hh::needle::ImplDX11::NeedleResourceContainer<hh::needle::Buffer, hh::needle::ImplDX11::BufferDX11Impl<hh::needle::ImplDX11::SBufferObject, NEEDLE_RESOURCE_DX11_CONSTANT_BUFFER_OBJECT>, NEEDLE_RESOURCE_CONTAINER, hh::needle::ImplDX11::SQueryTypeOwn, hh::needle::ImplDX11::SDupTypeNotSupport>;
// template class hh::needle::ImplDX11::NeedleResourceContainer<hh::needle::Buffer, hh::needle::ImplDX11::BufferDX11Impl<hh::needle::ImplDX11::SBufferObject, NEEDLE_RESOURCE_DX11_VERTEX_BUFFER_OBJECT>, NEEDLE_RESOURCE_CONTAINER, hh::needle::ImplDX11::SQueryTypeOwn, hh::needle::ImplDX11::SDupTypeNotSupport>;
template class csl::ut::MoveArray<const hh::fnd::ResourceTypeInfo*>;
template class csl::ut::Pair<hh::fnd::HFrame*, bool>;
template class csl::ut::InplaceMoveArray<csl::ut::Pair<hh::fnd::HFrame*, bool>, 10>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxBloomParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxDOFParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxColorContrastParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxToneMapParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxCameraControlParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxShadowMapParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxShadowHeightMapParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxVolumetricShadowParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxScreenBlurParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxSSAOParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxSHLightFieldParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxLightScatteringParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxRLRParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxSSGIParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxPlanarReflectionParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxOcclusionCapsuleParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxGodrayParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxScreenSpaceGodrayParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxHeatHazeParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxSceneEnvironmentParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxRenderOption>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxSGGIParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxTAAParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxEffectParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxAtmosphereParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxDensityParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxWindComputeParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxGpuEnvironmentParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxInteractiveWaveParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxChromaticAberrationParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxVignetteParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxTerrainMaterialBlendingParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxWeatherParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxColorAccessibilityFilterParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxCyberNoiseEffectParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxCyberSpaceStartNoiseParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxCyberNPCSSEffectRenderParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::gfx::FxDentParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxFieldScanEffectRenderParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxSeparableSSSParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::gfx::FxRenderTargetSetting>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxAntiAliasing>;
// template class app::gfx::FxParamManager::Interpolator<hh::gfx::StageCommonAtmosphereParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxLODParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxDetailParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::needle::FxDynamicResolutionParameter>;
// template class app::gfx::FxParamManager::Interpolator<hh::gfx::StageCommonTimeProgressParameter>;
template class csl::ut::PointerMap<hh::game::GameObjectClass*, csl::ut::MoveArray<hh::game::GameObject*>*>;
template class csl::ut::StringMap<hh::game::ObjectWorldChunkLayer*>;
template class csl::ut::HashMap<const char*, hh::game::ObjectWorldChunkLayer*, csl::ut::StringMapOperation>;
template class csl::ut::InplaceMoveArray<hh::game::GOComponentConfiguration, 5>;
template class hh::fnd::Handle<hh::game::GameObject>;
template class hh::fnd::Handle<hh::physics::GOCCollider>;
template class csl::ut::InplaceMoveArray<hh::anim::BlendNodeBase*, 2>;
// template class hh::fnd::Reference<app::level::StageData>;
// template class hh::fnd::Reference<app::game::GameModeResourceModule>;
// template class hh::fnd::Reference<app::save::UserElement>;
template class hh::needle::MaterialParamData<float>;
template class hh::needle::MaterialParamData<int>;
template class hh::needle::MaterialParamData<bool>;
// template class app::player::StatePluginManager<app::player::PlayerHsmContext>;
template class csl::ut::MoveArray<csl::ut::MoveArray<void*>>;
template class csl::fnd::Delegate<void (uint64_t, const float&)>;
// template class csl::ut::MoveArray<app_cmn::camera::CameraFrame::BlendNode*>;
template class csl::ut::MoveArray<hh::needle::intrusive_ptr<hh::needle::SceneContextManager>>;
template class csl::ut::MoveArray32<hh::ut::BvWorldHandle>;
template class csl::ut::MoveArray<hh::ut::KdTreeBuilder::InternalObject>;
template class hh::fnd::InplaceTempUri<>;
template class hh::ut::TempString<>;
template class csl::ut::StringMap<hh::anim::EventData*>;
template class csl::ut::MoveArray<csl::ut::StringMap<hh::anim::EventData*>>;
template class csl::ut::InplaceMoveArray<hh::anim::AsmResourceManager::ClipBindInfo, 5>;
template class csl::ut::InplaceBitArray<4>;

template class hh::fnd::HandleManager<hh::fnd::Messenger>;
template class hh::fnd::Handle<hh::fnd::Messenger>;

template class hh::fnd::HandleManager<hh::game::GOComponent>;
template class hh::fnd::Handle<hh::game::GOComponent>;

template class hh::needle::NeedleResContainer::NeedleResourceHolder<hh::needle::RenderTarget>;
template class hh::needle::NeedleResContainer::NeedleResourceHolder<hh::needle::DepthStencil>;
template class hh::needle::NeedleResContainer::NeedleResourceHolder<hh::needle::Texture>;
template class hh::needle::NeedleResContainer::NeedleResourceHolder<hh::needle::VertexShader>;
template class hh::needle::NeedleResContainer::NeedleResourceHolder<hh::needle::PixelShader>;

// template class hh::needle::NeedleType<hh::needle::FxBloomParameter>;
// template class hh::needle::NeedleType<hh::needle::FxDOFParameter>;
// template class hh::needle::NeedleType<hh::needle::FxColorContrastParameter>;
// template class hh::needle::NeedleType<hh::needle::FxToneMapParameter>;
// template class hh::needle::NeedleType<hh::needle::FxCameraControlParameter>;
// template class hh::needle::NeedleType<hh::needle::FxShadowMapParameter>;
// template class hh::needle::NeedleType<hh::needle::FxShadowHeightMapParameter>;
// template class hh::needle::NeedleType<hh::needle::FxVolumetricShadowParameter>;
// template class hh::needle::NeedleType<hh::needle::FxScreenBlurParameter>;
// template class hh::needle::NeedleType<hh::needle::FxSSAOParameter>;
// template class hh::needle::NeedleType<hh::needle::FxSHLightFieldParameter>;
// template class hh::needle::NeedleType<hh::needle::FxLightScatteringParameter>;
// template class hh::needle::NeedleType<hh::needle::FxRLRParameter>;
// template class hh::needle::NeedleType<hh::needle::FxSSGIParameter>;
// template class hh::needle::NeedleType<hh::needle::FxPlanarReflectionParameter>;
// template class hh::needle::NeedleType<hh::needle::FxOcclusionCapsuleParameter>;
// template class hh::needle::NeedleType<hh::needle::FxGodrayParameter>;
// template class hh::needle::NeedleType<hh::needle::FxScreenSpaceGodrayParameter>;
// template class hh::needle::NeedleType<hh::needle::FxHeatHazeParameter>;
// template class hh::needle::NeedleType<hh::needle::FxSceneEnvironmentParameter>;
// template class hh::needle::NeedleType<hh::needle::FxRenderOption>;
// template class hh::needle::NeedleType<hh::needle::FxSGGIParameter>;
// template class hh::needle::NeedleType<hh::needle::FxTAAParameter>;
// template class hh::needle::NeedleType<hh::needle::FxEffectParameter>;
// template class hh::needle::NeedleType<hh::needle::FxAtmosphereParameter>;
// template class hh::needle::NeedleType<hh::needle::FxDensityParameter>;
// template class hh::needle::NeedleType<hh::needle::FxWindComputeParameter>;
// template class hh::needle::NeedleType<hh::needle::FxGpuEnvironmentParameter>;
// template class hh::needle::NeedleType<hh::needle::FxInteractiveWaveParameter>;
// template class hh::needle::NeedleType<hh::needle::FxChromaticAberrationParameter>;
// template class hh::needle::NeedleType<hh::needle::FxVignetteParameter>;
// template class hh::needle::NeedleType<hh::needle::FxTerrainMaterialBlendingParameter>;
// template class hh::needle::NeedleType<hh::needle::FxWeatherParameter>;
// template class hh::needle::NeedleType<hh::needle::FxColorAccessibilityFilterParameter>;
// template class hh::needle::NeedleType<hh::needle::FxCyberNoiseEffectParameter>;
// template class hh::needle::NeedleType<hh::needle::FxCyberSpaceStartNoiseParameter>;
// template class hh::needle::NeedleType<hh::needle::FxCyberNPCSSEffectRenderParameter>;
// template class hh::needle::NeedleType<hh::gfx::FxDentParameter>;
// template class hh::needle::NeedleType<hh::needle::FxFieldScanEffectRenderParameter>;
// template class hh::needle::NeedleType<hh::needle::FxSeparableSSSParameter>;
// template class hh::needle::NeedleType<hh::needle::FxAntiAliasing>;
// template class hh::needle::NeedleType<hh::needle::FxLODParameter>;
// template class hh::needle::NeedleType<hh::needle::FxDetailParameter>;
// template class hh::needle::NeedleType<hh::needle::FxDynamicResolutionParameter>;
// template class hh::needle::NeedleType<hh::needle::FxTerrainParameter>;
// template class hh::needle::NeedleType<hh::needle::FxModelParameter>;

// // these are not in fxparammanager
// template class hh::needle::NeedleType<hh::needle::SmoothnessParameter>;
// template class hh::needle::NeedleType<hh::needle::FxPlanarProjectionShadowParameter>;
// template class hh::needle::NeedleType<hh::needle::FxDirectionalRadialBlurParameter>;
// template class hh::needle::NeedleType<hh::needle::PickColorParameter>;
// template class hh::needle::NeedleType<hh::needle::DebugVisualizeParameter>;
// template class hh::needle::NeedleType<hh::needle::FxSMAAParameter>;
// template class hh::needle::NeedleType<hh::needle::FxFXAAParameter>;





// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxBloomParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxDOFParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxColorContrastParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxToneMapParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxCameraControlParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxShadowMapParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxShadowHeightMapParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxVolumetricShadowParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxScreenBlurParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxSSAOParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxSHLightFieldParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxLightScatteringParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxRLRParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxSSGIParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxPlanarReflectionParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxOcclusionCapsuleParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxGodrayParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxScreenSpaceGodrayParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxHeatHazeParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxSceneEnvironmentParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxRenderOption>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxSGGIParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxTAAParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxEffectParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxAtmosphereParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxDensityParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxWindComputeParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxGpuEnvironmentParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxInteractiveWaveParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxChromaticAberrationParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxVignetteParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxTerrainMaterialBlendingParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxWeatherParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxColorAccessibilityFilterParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxCyberNoiseEffectParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxCyberSpaceStartNoiseParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxCyberNPCSSEffectRenderParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::gfx::FxDentParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxFieldScanEffectRenderParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxSeparableSSSParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxAntiAliasing>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxLODParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxDetailParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxDynamicResolutionParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxTerrainParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxModelParameter>;

// // these are not in fxparammanager
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::SmoothnessParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxPlanarProjectionShadowParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxDirectionalRadialBlurParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::PickColorParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::DebugVisualizeParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxSMAAParameter>;
// template class hh::needle::SceneParamContainer::ParamHolder<hh::needle::FxFXAAParameter>;

template class hh::needle::InstanceParameterContainerData::ArrayParamData<hh::needle::uint_vector4>;
template class hh::needle::InstanceParameterContainerData::ArrayParamData<hh::needle::float_vector4>;
template class csl::ut::MoveArray<hh::needle::uint_vector4>;
template class csl::ut::MoveArray<hh::needle::float_vector4>;

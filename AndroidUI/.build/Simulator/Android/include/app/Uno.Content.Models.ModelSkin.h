// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_SKIN_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_SKIN_H__

#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Models_SkinBone; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Models_SkinDrawable; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct SkinBone; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct SkinDrawable; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelSkin;

struct ModelSkin__uType : ::uClassType
{
};

ModelSkin__uType* ModelSkin__typeof();

void ModelSkin___ObjInit(ModelSkin* __this, ::app::Uno::Float4x4 bindPose, ::app::Uno::Float4x4 skeletonRoot, ::uArray* bones, ::uArray* drawables);
::app::Uno::Float4x4 ModelSkin__get_BindPose(ModelSkin* __this);
::uObject* ModelSkin__get_Bones(ModelSkin* __this);
::uObject* ModelSkin__get_Drawables(ModelSkin* __this);
::app::Uno::Float4x4 ModelSkin__get_SkeletonRoot(ModelSkin* __this);
ModelSkin* ModelSkin__New_1(::uStatic* __this, ::app::Uno::Float4x4 bindPose, ::app::Uno::Float4x4 skeletonRoot, ::uArray* bones, ::uArray* drawables);

struct ModelSkin : ::uObject
{
    ::app::Uno::Float4x4 _bindPose;
    ::app::Uno::Float4x4 _skeletonRoot;
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Models_SkinBone*> _bones;
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Models_SkinDrawable*> _drawables;

    void _ObjInit(::app::Uno::Float4x4 bindPose, ::app::Uno::Float4x4 skeletonRoot, ::uArray* bones, ::uArray* drawables) { ModelSkin___ObjInit(this, bindPose, skeletonRoot, bones, drawables); }
    ::app::Uno::Float4x4 BindPose() { return ModelSkin__get_BindPose(this); }
    ::uObject* Bones() { return ModelSkin__get_Bones(this); }
    ::uObject* Drawables() { return ModelSkin__get_Drawables(this); }
    ::app::Uno::Float4x4 SkeletonRoot() { return ModelSkin__get_SkeletonRoot(this); }
};

}}}}


#endif

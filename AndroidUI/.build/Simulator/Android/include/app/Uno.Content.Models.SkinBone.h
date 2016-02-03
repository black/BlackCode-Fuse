// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_SKIN_BONE_H__
#define __APP_UNO_CONTENT_MODELS_SKIN_BONE_H__

#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelNode; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct SkinBone;

struct SkinBone__uType : ::uClassType
{
};

SkinBone__uType* SkinBone__typeof();

void SkinBone___ObjInit(SkinBone* __this, ::app::Uno::Content::Models::ModelNode* node, ::app::Uno::Float4x4 bindPoseInverse);
::app::Uno::Float4x4 SkinBone__get_BindPoseInverse(SkinBone* __this);
::app::Uno::Content::Models::ModelNode* SkinBone__get_Node(SkinBone* __this);
SkinBone* SkinBone__New_1(::uStatic* __this, ::app::Uno::Content::Models::ModelNode* node, ::app::Uno::Float4x4 bindPoseInverse);

struct SkinBone : ::uObject
{
    ::uStrong< ::app::Uno::Content::Models::ModelNode*> _node;
    ::app::Uno::Float4x4 _bindPoseInverse;

    void _ObjInit(::app::Uno::Content::Models::ModelNode* node, ::app::Uno::Float4x4 bindPoseInverse) { SkinBone___ObjInit(this, node, bindPoseInverse); }
    ::app::Uno::Float4x4 BindPoseInverse() { return SkinBone__get_BindPoseInverse(this); }
    ::app::Uno::Content::Models::ModelNode* Node() { return SkinBone__get_Node(this); }
};

}}}}


#endif

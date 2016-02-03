// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_PSG_READER_INTERNAL_NODE_READER_INTERNAL_H__
#define __APP_UNO_CONTENT_MODELS_PSG_READER_INTERNAL_NODE_READER_INTERNAL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Content_Models_ModelParameter; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Models_ModelDrawable; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Models_ModelNode; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Models_ModelParameter_float4x4_; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Models_ModelSkin; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelNode; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelSkin; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct PsgReaderInternal; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct SkinBone; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct SkinDrawable; } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct BufferReader; } } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct PsgReaderInternal_NodeReaderInternal;

struct PsgReaderInternal_NodeReaderInternal__uType : ::uClassType
{
};

PsgReaderInternal_NodeReaderInternal__uType* PsgReaderInternal_NodeReaderInternal__typeof();

void PsgReaderInternal_NodeReaderInternal___ObjInit(PsgReaderInternal_NodeReaderInternal* __this, ::app::Uno::Content::Models::PsgReaderInternal* model);
PsgReaderInternal_NodeReaderInternal* PsgReaderInternal_NodeReaderInternal__New_1(::uStatic* __this, ::app::Uno::Content::Models::PsgReaderInternal* model);
void PsgReaderInternal_NodeReaderInternal__ReadDrawableList(PsgReaderInternal_NodeReaderInternal* __this);
void PsgReaderInternal_NodeReaderInternal__ReadMeshParameterList(PsgReaderInternal_NodeReaderInternal* __this);
::app::Uno::Content::Models::ModelNode* PsgReaderInternal_NodeReaderInternal__ReadNode(PsgReaderInternal_NodeReaderInternal* __this);
void PsgReaderInternal_NodeReaderInternal__ReadNodeBlocks(PsgReaderInternal_NodeReaderInternal* __this);
void PsgReaderInternal_NodeReaderInternal__ReadNodeList(PsgReaderInternal_NodeReaderInternal* __this);
::app::Uno::Content::Models::ModelSkin* PsgReaderInternal_NodeReaderInternal__ReadSkin(PsgReaderInternal_NodeReaderInternal* __this);
::app::Uno::Content::Models::SkinBone* PsgReaderInternal_NodeReaderInternal__ReadSkinBone(PsgReaderInternal_NodeReaderInternal* __this);
::app::Uno::Content::Models::SkinDrawable* PsgReaderInternal_NodeReaderInternal__ReadSkinDrawable(PsgReaderInternal_NodeReaderInternal* __this, ::uArray* bones);
void PsgReaderInternal_NodeReaderInternal__ReadSkinList(PsgReaderInternal_NodeReaderInternal* __this);
void PsgReaderInternal_NodeReaderInternal__ReadTransforms(PsgReaderInternal_NodeReaderInternal* __this);

struct PsgReaderInternal_NodeReaderInternal : ::uObject
{
    ::uStrong< ::app::Uno::Runtime::Implementation::Internal::BufferReader*> r;
    ::uStrong< ::app::Uno::Content::Models::PsgReaderInternal*> _model;
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4_*> _transforms;
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter*> _parameters;
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable*> _drawables;
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin*> _skins;
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Models_ModelNode*> _children;

    void _ObjInit(::app::Uno::Content::Models::PsgReaderInternal* model) { PsgReaderInternal_NodeReaderInternal___ObjInit(this, model); }
    void ReadDrawableList() { PsgReaderInternal_NodeReaderInternal__ReadDrawableList(this); }
    void ReadMeshParameterList() { PsgReaderInternal_NodeReaderInternal__ReadMeshParameterList(this); }
    ::app::Uno::Content::Models::ModelNode* ReadNode() { return PsgReaderInternal_NodeReaderInternal__ReadNode(this); }
    void ReadNodeBlocks() { PsgReaderInternal_NodeReaderInternal__ReadNodeBlocks(this); }
    void ReadNodeList() { PsgReaderInternal_NodeReaderInternal__ReadNodeList(this); }
    ::app::Uno::Content::Models::ModelSkin* ReadSkin() { return PsgReaderInternal_NodeReaderInternal__ReadSkin(this); }
    ::app::Uno::Content::Models::SkinBone* ReadSkinBone() { return PsgReaderInternal_NodeReaderInternal__ReadSkinBone(this); }
    ::app::Uno::Content::Models::SkinDrawable* ReadSkinDrawable(::uArray* bones) { return PsgReaderInternal_NodeReaderInternal__ReadSkinDrawable(this, bones); }
    void ReadSkinList() { PsgReaderInternal_NodeReaderInternal__ReadSkinList(this); }
    void ReadTransforms() { PsgReaderInternal_NodeReaderInternal__ReadTransforms(this); }
};

}}}}


#endif

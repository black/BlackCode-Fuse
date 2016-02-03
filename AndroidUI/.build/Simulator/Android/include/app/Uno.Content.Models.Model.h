// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelDrawable; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelNode; } } } }
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct Model;

struct Model__uType : ::uClassType
{
};

Model__uType* Model__typeof();

void Model___ObjInit(Model* __this, ::uString* name, ::uArray* drawables, ::app::Uno::Content::Models::ModelNode* root);
Model* Model__CreateFromPsg(::uStatic* __this, ::app::Uno::Buffer* psg);
int Model__get_DrawableCount(Model* __this);
::uString* Model__get_Name(Model* __this);
::app::Uno::Content::Models::ModelNode* Model__get_Root(Model* __this);
::app::Uno::Content::Models::ModelDrawable* Model__GetDrawable(Model* __this, int index);
Model* Model__New_1(::uStatic* __this, ::uString* name, ::uArray* drawables, ::app::Uno::Content::Models::ModelNode* root);

struct Model : ::uObject
{
    ::uStrong< ::uString*> _name;
    ::uStrong< ::app::Uno::Content::Models::ModelNode*> _root;
    ::uStrong< ::uArray*> _drawables;

    void _ObjInit(::uString* name, ::uArray* drawables, ::app::Uno::Content::Models::ModelNode* root) { Model___ObjInit(this, name, drawables, root); }
    int DrawableCount() { return Model__get_DrawableCount(this); }
    ::uString* Name() { return Model__get_Name(this); }
    ::app::Uno::Content::Models::ModelNode* Root() { return Model__get_Root(this); }
    ::app::Uno::Content::Models::ModelDrawable* GetDrawable(int index) { return Model__GetDrawable(this, index); }
};

}}}}


#endif

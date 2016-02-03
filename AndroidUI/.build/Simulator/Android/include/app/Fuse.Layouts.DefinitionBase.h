// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAYOUTS_DEFINITION_BASE_H__
#define __APP_FUSE_LAYOUTS_DEFINITION_BASE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Layouts { struct DefinitionBase_ParseDataItem; } } }

namespace app {
namespace Fuse {
namespace Layouts {

struct DefinitionBase;

struct DefinitionBase__uType : ::uClassType
{
};

DefinitionBase__uType* DefinitionBase__typeof();

void DefinitionBase___ObjInit(DefinitionBase* __this);
void DefinitionBase__add_Changed(DefinitionBase* __this, ::uDelegate* value);
float DefinitionBase__get_ActualOffset(DefinitionBase* __this);
bool DefinitionBase__get_Implicit(DefinitionBase* __this);
void DefinitionBase__OnChanged(DefinitionBase* __this);
::uObject* DefinitionBase__ParseData(::uStatic* __this, ::uString* data);
::app::Fuse::Layouts::DefinitionBase_ParseDataItem DefinitionBase__ParseDataSingle(::uStatic* __this, ::uString* data);
void DefinitionBase__remove_Changed(DefinitionBase* __this, ::uDelegate* value);
void DefinitionBase__set_ActualOffset(DefinitionBase* __this, float value);
void DefinitionBase__set_Implicit(DefinitionBase* __this, bool value);

struct DefinitionBase : ::uObject
{
    float _actualOffset;
    ::uStrong< ::uDelegate*> Changed;
    bool _Implicit;

    void _ObjInit() { DefinitionBase___ObjInit(this); }
    void add_Changed(::uDelegate* value) { DefinitionBase__add_Changed(this, value); }
    float ActualOffset() { return DefinitionBase__get_ActualOffset(this); }
    bool Implicit() { return DefinitionBase__get_Implicit(this); }
    void OnChanged() { DefinitionBase__OnChanged(this); }
    void remove_Changed(::uDelegate* value) { DefinitionBase__remove_Changed(this, value); }
    void ActualOffset(float value) { DefinitionBase__set_ActualOffset(this, value); }
    void Implicit(bool value) { DefinitionBase__set_Implicit(this, value); }
};

}}}


#endif

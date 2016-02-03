// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_ARRAY_H__
#define __APP_FUSE_SCRIPTING_ARRAY_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Scripting {

struct Array;

struct Array__uType : ::uClassType
{
    bool(*__fp_Equals_2)(Array*, Array*);
    ::uObject*(*__fp_get_Item)(Array*, int);
    int(*__fp_get_Length)(Array*);
    void(*__fp_set_Item)(Array*, int, ::uObject*);
};

Array__uType* Array__typeof();

void Array___ObjInit(Array* __this);
bool Array__Equals(Array* __this, ::uObject* o);

struct Array : ::uObject
{
    void _ObjInit() { Array___ObjInit(this); }
    bool Equals_2(Array* a) { return (((Array__uType*)this->__obj_type)->__fp_Equals_2)(this, a); }
    ::uObject* Item(int index) { return (((Array__uType*)this->__obj_type)->__fp_get_Item)(this, index); }
    int Length() { return (((Array__uType*)this->__obj_type)->__fp_get_Length)(this); }
    void Item(int index, ::uObject* value) { (((Array__uType*)this->__obj_type)->__fp_set_Item)(this, index, value); }
};

}}}


#endif

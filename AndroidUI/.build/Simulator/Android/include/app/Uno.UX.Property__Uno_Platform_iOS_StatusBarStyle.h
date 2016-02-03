// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__
#define __APP_UNO_U_X_PROPERTY__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__Uno_Platform_iOS_StatusBarStyle;

struct Property__Uno_Platform_iOS_StatusBarStyle__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__Uno_Platform_iOS_StatusBarStyle*, ::uDelegate*);
    int(*__fp_OnGet)(Property__Uno_Platform_iOS_StatusBarStyle*);
    void(*__fp_OnRemoveListener)(Property__Uno_Platform_iOS_StatusBarStyle*, ::uDelegate*);
    void(*__fp_OnSet)(Property__Uno_Platform_iOS_StatusBarStyle*, int, ::uObject*);
};

Property__Uno_Platform_iOS_StatusBarStyle__uType* Property__Uno_Platform_iOS_StatusBarStyle__typeof();

void Property__Uno_Platform_iOS_StatusBarStyle___ObjInit(Property__Uno_Platform_iOS_StatusBarStyle* __this);
void Property__Uno_Platform_iOS_StatusBarStyle__add_ValueChanged(Property__Uno_Platform_iOS_StatusBarStyle* __this, ::uDelegate* value);
int Property__Uno_Platform_iOS_StatusBarStyle__Get(Property__Uno_Platform_iOS_StatusBarStyle* __this);
int Property__Uno_Platform_iOS_StatusBarStyle__GetRestState(Property__Uno_Platform_iOS_StatusBarStyle* __this);
void Property__Uno_Platform_iOS_StatusBarStyle__OnAddListener(Property__Uno_Platform_iOS_StatusBarStyle* __this, ::uDelegate* listener);
int Property__Uno_Platform_iOS_StatusBarStyle__OnGet(Property__Uno_Platform_iOS_StatusBarStyle* __this);
void Property__Uno_Platform_iOS_StatusBarStyle__OnRemoveListener(Property__Uno_Platform_iOS_StatusBarStyle* __this, ::uDelegate* listener);
void Property__Uno_Platform_iOS_StatusBarStyle__OnSet(Property__Uno_Platform_iOS_StatusBarStyle* __this, int value, ::uObject* origin);
void Property__Uno_Platform_iOS_StatusBarStyle__remove_ValueChanged(Property__Uno_Platform_iOS_StatusBarStyle* __this, ::uDelegate* value);
void Property__Uno_Platform_iOS_StatusBarStyle__RetainRestState(Property__Uno_Platform_iOS_StatusBarStyle* __this);
void Property__Uno_Platform_iOS_StatusBarStyle__Set(Property__Uno_Platform_iOS_StatusBarStyle* __this, int value, ::uObject* origin);
void Property__Uno_Platform_iOS_StatusBarStyle__SetRestState(Property__Uno_Platform_iOS_StatusBarStyle* __this, int value, ::uObject* origin);

struct Property__Uno_Platform_iOS_StatusBarStyle : ::uObject
{
    bool _hasRestState;
    int _restState;

    void _ObjInit() { Property__Uno_Platform_iOS_StatusBarStyle___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__Uno_Platform_iOS_StatusBarStyle__add_ValueChanged(this, value); }
    int Get() { return Property__Uno_Platform_iOS_StatusBarStyle__Get(this); }
    int GetRestState() { return Property__Uno_Platform_iOS_StatusBarStyle__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__Uno_Platform_iOS_StatusBarStyle__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    int OnGet() { return (((Property__Uno_Platform_iOS_StatusBarStyle__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__Uno_Platform_iOS_StatusBarStyle__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(int value, ::uObject* origin) { (((Property__Uno_Platform_iOS_StatusBarStyle__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__Uno_Platform_iOS_StatusBarStyle__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__Uno_Platform_iOS_StatusBarStyle__RetainRestState(this); }
    void Set(int value, ::uObject* origin) { Property__Uno_Platform_iOS_StatusBarStyle__Set(this, value, origin); }
    void SetRestState(int value, ::uObject* origin) { Property__Uno_Platform_iOS_StatusBarStyle__SetRestState(this, value, origin); }
};

}}}


#endif

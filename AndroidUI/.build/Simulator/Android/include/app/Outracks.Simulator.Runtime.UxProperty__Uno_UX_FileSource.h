// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__UNO_U_X_FILE_SOURCE_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__UNO_U_X_FILE_SOURCE_H__

#include <app/Uno.UX.Property__Uno_UX_FileSource.h>
#include <Uno.h>
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Uno_UX_FileSource;

struct UxProperty__Uno_UX_FileSource__uType : ::app::Uno::UX::Property__Uno_UX_FileSource__uType
{
};

UxProperty__Uno_UX_FileSource__uType* UxProperty__Uno_UX_FileSource__typeof();

void UxProperty__Uno_UX_FileSource___ObjInit_1(UxProperty__Uno_UX_FileSource* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Uno_UX_FileSource* UxProperty__Uno_UX_FileSource__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Uno_UX_FileSource__OnAddListener(UxProperty__Uno_UX_FileSource* __this, ::uDelegate* listener);
::app::Uno::UX::FileSource* UxProperty__Uno_UX_FileSource__OnGet(UxProperty__Uno_UX_FileSource* __this);
void UxProperty__Uno_UX_FileSource__OnRemoveListener(UxProperty__Uno_UX_FileSource* __this, ::uDelegate* listener);
void UxProperty__Uno_UX_FileSource__OnSet(UxProperty__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value, ::uObject* origin);

struct UxProperty__Uno_UX_FileSource : ::app::Uno::UX::Property__Uno_UX_FileSource
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Uno_UX_FileSource___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif

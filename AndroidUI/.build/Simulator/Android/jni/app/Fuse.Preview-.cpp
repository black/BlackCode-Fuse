#include <app/Fuse.Preview.ISelection.h>
#include <app/Fuse.Preview.SelectionManager.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler__Uno_EventArgs.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Preview {

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ISelection__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Preview.ISelection");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uObject*> SelectionManager___Selection;
::uStaticStrong< ::uDelegate*> SelectionManager__SelectionChanged;

SelectionManager__uType* SelectionManager__typeof()
{
    static ::uStaticStrong<SelectionManager__uType*> type;
    if (type != NULL) return type;

    type = (SelectionManager__uType*)::uAllocClassType(sizeof(SelectionManager__uType), "Fuse.Preview.SelectionManager");

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_SelectionChanged", SelectionManager__add_SelectionChanged, 0, true, ::app::Uno::EventHandler__Uno_EventArgs__typeof()),
        ::uNewFunction("get_Selection", SelectionManager__get_Selection, 0, true, ::app::Fuse::Preview::ISelection__typeof()),
        ::uNewFunction("IsSelected", SelectionManager__IsSelected, 0, true, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("remove_SelectionChanged", SelectionManager__remove_SelectionChanged, 0, true, ::app::Uno::EventHandler__Uno_EventArgs__typeof()),
        ::uNewFunctionVoid("set_Selection", SelectionManager__set_Selection, 0, true, ::app::Fuse::Preview::ISelection__typeof()),
        ::uNewFunctionVoid("SetSelection", SelectionManager__SetSelection, 0, true, ::app::Fuse::Preview::ISelection__typeof()));

    ::uRegisterType(type);
    return type;
}

void SelectionManager__add_SelectionChanged(::uStatic* __this, ::uDelegate* value)
{
    SelectionManager__SelectionChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)SelectionManager__SelectionChanged, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_EventArgs__typeof());
}

::uObject* SelectionManager__get_Selection(::uStatic* __this)
{
    return SelectionManager___Selection;
}

bool SelectionManager__IsSelected(::uStatic* __this, ::uObject* obj)
{
    if (SelectionManager__get_Selection(NULL) != NULL)
    {
        return ::app::Fuse::Preview::ISelection::IsSelected(::uPtr< ::uObject*>(SelectionManager__get_Selection(NULL)), obj);
    }

    return false;
}

void SelectionManager__remove_SelectionChanged(::uStatic* __this, ::uDelegate* value)
{
    SelectionManager__SelectionChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)SelectionManager__SelectionChanged, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_EventArgs__typeof());
}

void SelectionManager__set_Selection(::uStatic* __this, ::uObject* value)
{
    SelectionManager___Selection = value;
}

void SelectionManager__SetSelection(::uStatic* __this, ::uObject* selection)
{
    SelectionManager__set_Selection(NULL, selection);
    ::uDelegate* handler = SelectionManager__SelectionChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>(NULL, ::app::Uno::EventArgs__Empty);
    }
}

}}}

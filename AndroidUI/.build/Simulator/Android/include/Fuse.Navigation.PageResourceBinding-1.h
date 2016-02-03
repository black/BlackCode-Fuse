// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Navigation.IPageResourceBinding.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigatedArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct PageResourceBinding;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class PageResourceBinding<T> :1009
// {
struct PageResourceBinding_type : ::g::Fuse::Behavior_type
{
    ::g::Fuse::Navigation::IPageResourceBinding interface0;
};

PageResourceBinding_type* PageResourceBinding_typeof();
void PageResourceBinding__ctor_1_fn(PageResourceBinding* __this, ::g::Uno::UX::Property* target, uString* key);
void PageResourceBinding__Acceptor_fn(PageResourceBinding* __this, uObject* obj, bool* __retval);
void PageResourceBinding__get_AllowNull_fn(PageResourceBinding* __this, bool* __retval);
void PageResourceBinding__set_AllowNull_fn(PageResourceBinding* __this, bool* value);
void PageResourceBinding__get_Default_fn(PageResourceBinding* __this, uTRef __retval);
void PageResourceBinding__set_Default_fn(PageResourceBinding* __this, void* value);
void PageResourceBinding__Fuse_Navigation_IPageResourceBinding_UpdateSource_fn(PageResourceBinding* __this);
void PageResourceBinding__GotoPage_fn(PageResourceBinding* __this, ::g::Fuse::Node* page);
void PageResourceBinding__get_Key_fn(PageResourceBinding* __this, uString** __retval);
void PageResourceBinding__set_Key_fn(PageResourceBinding* __this, uString* value);
void PageResourceBinding__get_LocalObject_fn(PageResourceBinding* __this, uObject** __retval);
void PageResourceBinding__New1_fn(uType* __type, ::g::Uno::UX::Property* target, uString* key, PageResourceBinding** __retval);
void PageResourceBinding__OnChanged_fn(PageResourceBinding* __this);
void PageResourceBinding__OnNavigated_fn(PageResourceBinding* __this, uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args);
void PageResourceBinding__OnRooted_fn(PageResourceBinding* __this, ::g::Fuse::Node* parentNode);
void PageResourceBinding__OnUnrooted_fn(PageResourceBinding* __this, ::g::Fuse::Node* parentNode);
void PageResourceBinding__ReleaseCurrent_fn(PageResourceBinding* __this);
void PageResourceBinding__get_Target_fn(PageResourceBinding* __this, ::g::Uno::UX::Property** __retval);
void PageResourceBinding__set_Target_fn(PageResourceBinding* __this, ::g::Uno::UX::Property* value);
void PageResourceBinding__UpdateSource_fn(PageResourceBinding* __this);

struct PageResourceBinding : ::g::Fuse::Behavior
{
    bool _allowNull;
    uStrong< ::g::Fuse::Node*> _currentPage;
    uTField _default() { return __type->Field(this, 5); }
    bool _hasDefault;
    uStrong<uObject*> _nav;
    uStrong<uString*> _Key;
    uStrong< ::g::Uno::UX::Property*> _Target;

    void ctor_1(::g::Uno::UX::Property* target, uString* key);
    bool Acceptor(uObject* obj);
    bool AllowNull();
    void AllowNull(bool value);
    template<class T>
    T Default() { T __retval; return PageResourceBinding__get_Default_fn(this, &__retval), __retval; }
    template<class T>
    void Default(T value) { PageResourceBinding__set_Default_fn(this, uConstrain(__type->T(0), value)); }
    void GotoPage(::g::Fuse::Node* page);
    uString* Key();
    void Key(uString* value);
    uObject* LocalObject();
    void OnChanged();
    void OnNavigated(uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args);
    void ReleaseCurrent();
    ::g::Uno::UX::Property* Target();
    void Target(::g::Uno::UX::Property* value);
    void UpdateSource();
    static PageResourceBinding* New1(uType* __type, ::g::Uno::UX::Property* target, uString* key);
};
// }

}}} // ::g::Fuse::Navigation

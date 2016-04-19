// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Node.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IAddRemove-1.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Fuse{namespace Internal{struct ImageContainer;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSourceErrorArgs;}}}
namespace g{namespace Fuse{namespace Resources{struct MemoryPolicy;}}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Image :1031
// {
::g::Fuse::Controls::Panel_type* Image_typeof();
void Image__ctor_4_fn(Image* __this);
void Image__get_Color_fn(Image* __this, ::g::Uno::Float4* __retval);
void Image__set_Color_fn(Image* __this, ::g::Uno::Float4* value);
void Image__get_Container_fn(Image* __this, ::g::Fuse::Internal::ImageContainer** __retval);
void Image__get_ContentAlignment_fn(Image* __this, int* __retval);
void Image__set_ContentAlignment_fn(Image* __this, int* value);
void Image__get_Density_fn(Image* __this, float* __retval);
void Image__set_Density_fn(Image* __this, float* value);
void Image__get_File_fn(Image* __this, ::g::Uno::UX::FileSource** __retval);
void Image__set_File_fn(Image* __this, ::g::Uno::UX::FileSource* value);
void Image__GetContentAlignment_fn(Image* img, int* __retval);
void Image__GetMemoryPolicy_fn(Image* img, ::g::Fuse::Resources::MemoryPolicy** __retval);
void Image__GetStretchDirection_fn(Image* img, int* __retval);
void Image__GetStretchMode_fn(Image* img, int* __retval);
void Image__GetStretchSizing_fn(Image* img, int* __retval);
void Image__New2_fn(Image** __retval);
void Image__OnContainerParamChanged_fn(Image* __this, uObject* s, uObject* a);
void Image__OnContainerSourceChanged_fn(Image* __this, uObject* s, uObject* a);
void Image__OnContainerSourceError_fn(Image* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args);
void Image__OnIsVisibleChanged1_fn(Image* __this, uObject* s, uObject* a);
void Image__OnParamChanged_fn(Image* __this);
void Image__OnRooted_fn(Image* __this);
void Image__OnSourceChanged_fn(Image* __this);
void Image__OnUnrooted_fn(Image* __this);
void Image__add_ParamChanged_fn(Image* __this, uDelegate* value);
void Image__remove_ParamChanged_fn(Image* __this, uDelegate* value);
void Image__get_ResampleMode_fn(Image* __this, int* __retval);
void Image__set_ResampleMode_fn(Image* __this, int* value);
void Image__get_Scale9Margin_fn(Image* __this, ::g::Uno::Float4* __retval);
void Image__set_Scale9Margin_fn(Image* __this, ::g::Uno::Float4* value);
void Image__SetContentAlignment_fn(Image* img, int* v);
void Image__SetMemoryPolicy_fn(Image* img, ::g::Fuse::Resources::MemoryPolicy* v);
void Image__SetStretchDirection_fn(Image* img, int* v);
void Image__SetStretchMode_fn(Image* img, int* v);
void Image__SetStretchSizing_fn(Image* img, int* v);
void Image__get_Source_fn(Image* __this, ::g::Fuse::Resources::ImageSource** __retval);
void Image__set_Source_fn(Image* __this, ::g::Fuse::Resources::ImageSource* value);
void Image__add_SourceChanged_fn(Image* __this, uDelegate* value);
void Image__remove_SourceChanged_fn(Image* __this, uDelegate* value);
void Image__get_StretchDirection_fn(Image* __this, int* __retval);
void Image__set_StretchDirection_fn(Image* __this, int* value);
void Image__get_StretchMode_fn(Image* __this, int* __retval);
void Image__set_StretchMode_fn(Image* __this, int* value);
void Image__get_StretchSizing_fn(Image* __this, int* __retval);
void Image__set_StretchSizing_fn(Image* __this, int* value);
void Image__UpdateParam_fn(Image* img);

struct Image : ::g::Fuse::Controls::Panel
{
    ::g::Uno::Float4 _color;
    uStrong< ::g::Fuse::Internal::ImageContainer*> _container;
    bool _hasScale9Margin;
    uStrong< ::g::Fuse::Resources::ImageSourceErrorArgs*> _lastError;
    ::g::Uno::Float4 _scale9Margin;
    static uSStrong< ::g::Fuse::StyleProperty1*> ContentAlignmentProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& ContentAlignmentProperty() { return Image_typeof()->Init(), ContentAlignmentProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> MemoryPolicyProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& MemoryPolicyProperty() { return Image_typeof()->Init(), MemoryPolicyProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> StretchDirectionProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& StretchDirectionProperty() { return Image_typeof()->Init(), StretchDirectionProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> StretchModeProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& StretchModeProperty() { return Image_typeof()->Init(), StretchModeProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> StretchSizingProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& StretchSizingProperty() { return Image_typeof()->Init(), StretchSizingProperty_; }
    uStrong<uDelegate*> ParamChanged1;
    uStrong<uDelegate*> SourceChanged1;

    void ctor_4();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    ::g::Fuse::Internal::ImageContainer* Container();
    int ContentAlignment();
    void ContentAlignment(int value);
    float Density();
    void Density(float value);
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    void OnContainerParamChanged(uObject* s, uObject* a);
    void OnContainerSourceChanged(uObject* s, uObject* a);
    void OnContainerSourceError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args);
    void OnIsVisibleChanged1(uObject* s, uObject* a);
    void OnParamChanged();
    void OnSourceChanged();
    void add_ParamChanged(uDelegate* value);
    void remove_ParamChanged(uDelegate* value);
    int ResampleMode();
    void ResampleMode(int value);
    ::g::Uno::Float4 Scale9Margin();
    void Scale9Margin(::g::Uno::Float4 value);
    ::g::Fuse::Resources::ImageSource* Source();
    void Source(::g::Fuse::Resources::ImageSource* value);
    void add_SourceChanged(uDelegate* value);
    void remove_SourceChanged(uDelegate* value);
    int StretchDirection();
    void StretchDirection(int value);
    int StretchMode();
    void StretchMode(int value);
    int StretchSizing();
    void StretchSizing(int value);
    static int GetContentAlignment(Image* img);
    static ::g::Fuse::Resources::MemoryPolicy* GetMemoryPolicy(Image* img);
    static int GetStretchDirection(Image* img);
    static int GetStretchMode(Image* img);
    static int GetStretchSizing(Image* img);
    static Image* New2();
    static void SetContentAlignment(Image* img, int v);
    static void SetMemoryPolicy(Image* img, ::g::Fuse::Resources::MemoryPolicy* v);
    static void SetStretchDirection(Image* img, int v);
    static void SetStretchMode(Image* img, int v);
    static void SetStretchSizing(Image* img, int v);
    static void UpdateParam(Image* img);
};
// }

}}} // ::g::Fuse::Controls

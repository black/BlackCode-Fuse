// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_TEXTURE_VIEW_H__
#define __APP_FUSE_ANDROID_TEXTURE_VIEW_H__

#include <app/Fuse.Android.GraphicsView.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Fuse {
namespace Android {

struct TextureView;

struct TextureView__uType : ::app::Fuse::Android::GraphicsView__uType
{
};

TextureView__uType* TextureView__typeof();

void TextureView___ObjInit_4(TextureView* __this);
::app::Android::android::view::View* TextureView__CreateGraphicsView(TextureView* __this);
TextureView* TextureView__New_1(::uStatic* __this);

struct TextureView : ::app::Fuse::Android::GraphicsView
{
    void _ObjInit_4() { TextureView___ObjInit_4(this); }
};

}}}


#endif

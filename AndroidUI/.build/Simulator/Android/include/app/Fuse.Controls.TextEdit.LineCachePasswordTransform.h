// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TEXT_EDIT_LINE_CACHE_PASSWORD_TRANSFORM_H__
#define __APP_FUSE_CONTROLS_TEXT_EDIT_LINE_CACHE_PASSWORD_TRANSFORM_H__

#include <app/Fuse.Controls.TextEdit.LineCacheTransform.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace TextEdit {

struct LineCachePasswordTransform;

struct LineCachePasswordTransform__uType : ::uClassType
{
    ::app::Fuse::Controls::TextEdit::LineCacheTransform __interface_0;
};

LineCachePasswordTransform__uType* LineCachePasswordTransform__typeof();

void LineCachePasswordTransform___ObjInit(LineCachePasswordTransform* __this);
LineCachePasswordTransform* LineCachePasswordTransform__New_1(::uStatic* __this);
bool LineCachePasswordTransform__SetReveal(LineCachePasswordTransform* __this, int r);
::uString* LineCachePasswordTransform__Transform(LineCachePasswordTransform* __this, ::uString* text);

struct LineCachePasswordTransform : ::uObject
{
    int _reveal;

    void _ObjInit() { LineCachePasswordTransform___ObjInit(this); }
    bool SetReveal(int r) { return LineCachePasswordTransform__SetReveal(this, r); }
    ::uString* Transform(::uString* text) { return LineCachePasswordTransform__Transform(this, text); }
};

}}}}


#endif

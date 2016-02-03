// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Images\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_IMAGES_BITMAP_H__
#define __APP_UNO_CONTENT_IMAGES_BITMAP_H__

#include <app/Uno.Int2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Uno {
namespace Content {
namespace Images {

struct Bitmap;

struct Bitmap__uType : ::uClassType
{
};

Bitmap__uType* Bitmap__typeof();

void Bitmap___ObjInit(Bitmap* __this, ::app::Uno::Int2 size, int format, ::app::Uno::Buffer* optionalBuffer);
::app::Uno::Buffer* Bitmap__get_Buffer(Bitmap* __this);
int Bitmap__get_Format(Bitmap* __this);
::app::Uno::Int2 Bitmap__get_Size(Bitmap* __this);
Bitmap* Bitmap__New_1(::uStatic* __this, ::app::Uno::Int2 size, int format, ::app::Uno::Buffer* optionalBuffer);
void Bitmap__set_Buffer(Bitmap* __this, ::app::Uno::Buffer* value);
void Bitmap__set_Format(Bitmap* __this, int value);
void Bitmap__set_Size(Bitmap* __this, ::app::Uno::Int2 value);

struct Bitmap : ::uObject
{
    ::app::Uno::Int2 _Size;
    int _Format;
    ::uStrong< ::app::Uno::Buffer*> _Buffer;

    void _ObjInit(::app::Uno::Int2 size, int format, ::app::Uno::Buffer* optionalBuffer) { Bitmap___ObjInit(this, size, format, optionalBuffer); }
    ::app::Uno::Buffer* Buffer() { return Bitmap__get_Buffer(this); }
    int Format() { return Bitmap__get_Format(this); }
    ::app::Uno::Int2 Size() { return Bitmap__get_Size(this); }
    void Buffer(::app::Uno::Buffer* value) { Bitmap__set_Buffer(this, value); }
    void Format(int value) { Bitmap__set_Format(this, value); }
    void Size(::app::Uno::Int2 value) { Bitmap__set_Size(this, value); }
};

}}}}


#endif

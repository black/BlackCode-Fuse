#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Content.Images.Bitmap.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Graphics.Format.h>
#include <app/Uno.Graphics.FormatHelpers.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Content {
namespace Images {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Images\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Bitmap__uType* Bitmap__typeof()
{
    static ::uStaticStrong<Bitmap__uType*> type;
    if (type != NULL) return type;

    type = (Bitmap__uType*)::uAllocClassType(sizeof(Bitmap__uType), "Uno.Content.Images.Bitmap", false, 0, 1, 0);

    type->SetStrongRefs(
        "_Buffer", offsetof(Bitmap, _Buffer));

    type->SetFunctions(7,
        ::uNewFunction("get_Buffer", Bitmap__get_Buffer, 0, false, ::app::Uno::Buffer__typeof()),
        ::uNewFunction("get_Format", Bitmap__get_Format, 0, false, ::app::Uno::Graphics::Format__typeof()),
        ::uNewFunction("get_Size", Bitmap__get_Size, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunction(".ctor", Bitmap__New_1, 0, true, Bitmap__typeof(), ::app::Uno::Int2__typeof(), ::app::Uno::Graphics::Format__typeof(), ::app::Uno::Buffer__typeof()),
        ::uNewFunctionVoid("set_Buffer", Bitmap__set_Buffer, 0, false, ::app::Uno::Buffer__typeof()),
        ::uNewFunctionVoid("set_Format", Bitmap__set_Format, 0, false, ::app::Uno::Graphics::Format__typeof()),
        ::uNewFunctionVoid("set_Size", Bitmap__set_Size, 0, false, ::app::Uno::Int2__typeof()));

    ::uRegisterType(type);
    return type;
}

void Bitmap___ObjInit(Bitmap* __this, ::app::Uno::Int2 size, int format, ::app::Uno::Buffer* optionalBuffer)
{
    __this->Size(size);
    __this->Format(format);
    int bpp = ::app::Uno::Graphics::FormatHelpers__GetStrideInBytes(NULL, __this->Format());
    int byteCount = (__this->Size().X * __this->Size().Y) * bpp;

    if (byteCount < 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("size: Cannot be negative")));
    }

    if (optionalBuffer != NULL)
    {
        if (::uPtr< ::app::Uno::Buffer*>(optionalBuffer)->SizeInBytes() != byteCount)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("optionalBuffer: Invalid buffer size")));
        }

        __this->Buffer(optionalBuffer);
    }
    else
    {
        __this->Buffer(::app::Uno::Buffer__New_3(NULL, byteCount));
    }
}

::app::Uno::Buffer* Bitmap__get_Buffer(Bitmap* __this)
{
    return __this->_Buffer;
}

int Bitmap__get_Format(Bitmap* __this)
{
    return __this->_Format;
}

::app::Uno::Int2 Bitmap__get_Size(Bitmap* __this)
{
    return __this->_Size;
}

Bitmap* Bitmap__New_1(::uStatic* __this, ::app::Uno::Int2 size, int format, ::app::Uno::Buffer* optionalBuffer)
{
    Bitmap* inst = (Bitmap*)::uAllocObject(sizeof(Bitmap), Bitmap__typeof());
    inst->_ObjInit(size, format, optionalBuffer);
    return inst;
}

void Bitmap__set_Buffer(Bitmap* __this, ::app::Uno::Buffer* value)
{
    __this->_Buffer = value;
}

void Bitmap__set_Format(Bitmap* __this, int value)
{
    __this->_Format = value;
}

void Bitmap__set_Size(Bitmap* __this, ::app::Uno::Int2 value)
{
    __this->_Size = value;
}

}}}}

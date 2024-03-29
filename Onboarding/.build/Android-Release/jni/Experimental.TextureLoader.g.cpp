// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.TextureLoader.Callback.h>
#include <Experimental.TextureLoader.InvalidContentTypeException.h>
#include <Experimental.TextureLoader.TextureLoader.h>
#include <Experimental.TextureLoader.TextureLoaderImpl.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Char.h>
#include <Uno.Exception.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno/XliInterop.h>
#include <Xli/Buffer.h>
#include <Xli/BufferStream.h>
#include <Xli/Managed.h>
#include <XliGL.h>
#include <XliImage.h>
static uString* STRINGS[5];
static uType* TYPES[2];

namespace g{
namespace Experimental{
namespace TextureLoader{

// C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.20.1\$.uno(11)
// -----------------------------------------------------------------------

// internal sealed class Callback :11
// {
uType* Callback_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Callback);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Experimental.TextureLoader.Callback", options);
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof());
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof()), offsetof(::g::Experimental::TextureLoader::Callback, _action), 0);
    return type;
}

// public Callback(Uno.Action<texture2D> action) :16
void Callback__ctor__fn(Callback* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public void Execute(texture2D arg) :21
void Callback__Execute_fn(Callback* __this, ::g::Uno::Graphics::Texture2D* arg)
{
    __this->Execute(arg);
}

// public Callback New(Uno.Action<texture2D> action) :16
void Callback__New1_fn(uDelegate* action, Callback** __retval)
{
    *__retval = Callback::New1(action);
}

// public Callback(Uno.Action<texture2D> action) [instance] :16
void Callback::ctor_(uDelegate* action)
{
    _action = action;
}

// public void Execute(texture2D arg) [instance] :21
void Callback::Execute(::g::Uno::Graphics::Texture2D* arg)
{
    uPtr(_action)->InvokeVoid(arg);
}

// public Callback New(Uno.Action<texture2D> action) [static] :16
Callback* Callback::New1(uDelegate* action)
{
    Callback* obj1 = (Callback*)uNew(Callback_typeof());
    obj1->ctor_(action);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.20.1\$.uno(27)
// -----------------------------------------------------------------------

// public sealed class InvalidContentTypeException :27
// {
uType* InvalidContentTypeException_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(InvalidContentTypeException);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Experimental.TextureLoader.InvalidContentTypeException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->SetFields(3);
    return type;
}

// public InvalidContentTypeException(string reason) :29
void InvalidContentTypeException__ctor_3_fn(InvalidContentTypeException* __this, uString* reason)
{
    __this->ctor_3(reason);
}

// public InvalidContentTypeException New(string reason) :29
void InvalidContentTypeException__New4_fn(uString* reason, InvalidContentTypeException** __retval)
{
    *__retval = InvalidContentTypeException::New4(reason);
}

// public InvalidContentTypeException(string reason) [instance] :29
void InvalidContentTypeException::ctor_3(uString* reason)
{
    ctor_1(reason);
}

// public InvalidContentTypeException New(string reason) [static] :29
InvalidContentTypeException* InvalidContentTypeException::New4(uString* reason)
{
    InvalidContentTypeException* obj1 = (InvalidContentTypeException*)uNew(InvalidContentTypeException_typeof());
    obj1->ctor_3(reason);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.20.1\$.uno(32)
// -----------------------------------------------------------------------

// public static class TextureLoader :32
// {
uClassType* TextureLoader_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Experimental.TextureLoader.TextureLoader", options);
    ::STRINGS[0] = uString::Const("image/jpeg");
    ::STRINGS[1] = uString::Const("image/png");
    ::STRINGS[2] = uString::Const(".png");
    ::STRINGS[3] = uString::Const(".jpg");
    ::STRINGS[4] = uString::Const(".jpeg");
    ::TYPES[1] = ::g::Uno::String_typeof();
    return type;
}

// public static void ByteArrayToTexture2DContentType(Uno.Buffer arr, string contentType, Uno.Action<texture2D> callback) :100
void TextureLoader__ByteArrayToTexture2DContentType_fn(::g::Uno::Buffer* arr, uString* contentType, uDelegate* callback)
{
    TextureLoader::ByteArrayToTexture2DContentType(arr, contentType, callback);
}

// public static void ByteArrayToTexture2DFilename(Uno.Buffer arr, string filename, Uno.Action<texture2D> callback) :74
void TextureLoader__ByteArrayToTexture2DFilename_fn(::g::Uno::Buffer* arr, uString* filename, uDelegate* callback)
{
    TextureLoader::ByteArrayToTexture2DFilename(arr, filename, callback);
}

// private static bool EndsWith(string str, string suffix) :85
void TextureLoader__EndsWith_fn(uString* str, uString* suffix, bool* __retval)
{
    *__retval = TextureLoader::EndsWith(str, suffix);
}

// public static void JpegByteArrayToTexture2D(Uno.Buffer arr, Uno.Action<texture2D> callback) :34
void TextureLoader__JpegByteArrayToTexture2D_fn(::g::Uno::Buffer* arr, uDelegate* callback)
{
    TextureLoader::JpegByteArrayToTexture2D(arr, callback);
}

// public static void PngByteArrayToTexture2D(Uno.Buffer arr, Uno.Action<texture2D> callback) :54
void TextureLoader__PngByteArrayToTexture2D_fn(::g::Uno::Buffer* arr, uDelegate* callback)
{
    TextureLoader::PngByteArrayToTexture2D(arr, callback);
}

// public static void ByteArrayToTexture2DContentType(Uno.Buffer arr, string contentType, Uno.Action<texture2D> callback) [static] :100
void TextureLoader::ByteArrayToTexture2DContentType(::g::Uno::Buffer* arr, uString* contentType, uDelegate* callback)
{
    if (::g::Uno::String::IndexOf1(uPtr(contentType), ::STRINGS[0/*"image/jpeg"*/], 0) != -1)
        TextureLoader::JpegByteArrayToTexture2D(arr, callback);
    else if (::g::Uno::String::IndexOf1(uPtr(contentType), ::STRINGS[1/*"image/png"*/], 0) != -1)
        TextureLoader::PngByteArrayToTexture2D(arr, callback);
    else
        U_THROW(::g::Experimental::TextureLoader::InvalidContentTypeException::New4(contentType));
}

// public static void ByteArrayToTexture2DFilename(Uno.Buffer arr, string filename, Uno.Action<texture2D> callback) [static] :74
void TextureLoader::ByteArrayToTexture2DFilename(::g::Uno::Buffer* arr, uString* filename, uDelegate* callback)
{
    filename = ::g::Uno::String::ToLower(uPtr(filename));

    if (TextureLoader::EndsWith(filename, ::STRINGS[2/*".png"*/]))
        TextureLoader::PngByteArrayToTexture2D(arr, callback);
    else if (TextureLoader::EndsWith(filename, ::STRINGS[3/*".jpg"*/]) || TextureLoader::EndsWith(filename, ::STRINGS[4/*".jpeg"*/]))
        TextureLoader::JpegByteArrayToTexture2D(arr, callback);
    else
        U_THROW(::g::Experimental::TextureLoader::InvalidContentTypeException::New4(filename));
}

// private static bool EndsWith(string str, string suffix) [static] :85
bool TextureLoader::EndsWith(uString* str, uString* suffix)
{
    int strAt = uPtr(str)->Length() - 1;
    int suffixAt = uPtr(suffix)->Length() - 1;

    while ((strAt >= 0) && (suffixAt >= 0))
    {
        if (uPtr(str)->Item(strAt) != uPtr(suffix)->Item(suffixAt))
            return false;

        strAt--;
        suffixAt--;
    }

    return suffixAt < 0;
}

// public static void JpegByteArrayToTexture2D(Uno.Buffer arr, Uno.Action<texture2D> callback) [static] :34
void TextureLoader::JpegByteArrayToTexture2D(::g::Uno::Buffer* arr, uDelegate* callback)
{
    try
    {
        ::g::Experimental::TextureLoader::TextureLoaderImpl::JpegByteArrayToTexture2D(arr, ::g::Experimental::TextureLoader::Callback::New1(callback));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* jpegException = __t.Exception;

        try
        {
            ::g::Experimental::TextureLoader::TextureLoaderImpl::PngByteArrayToTexture2D(arr, ::g::Experimental::TextureLoader::Callback::New1(callback));
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* pngException = __t.Exception;
            U_THROW(jpegException);
        }
    }
}

// public static void PngByteArrayToTexture2D(Uno.Buffer arr, Uno.Action<texture2D> callback) [static] :54
void TextureLoader::PngByteArrayToTexture2D(::g::Uno::Buffer* arr, uDelegate* callback)
{
    try
    {
        ::g::Experimental::TextureLoader::TextureLoaderImpl::PngByteArrayToTexture2D(arr, ::g::Experimental::TextureLoader::Callback::New1(callback));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* pngException = __t.Exception;

        try
        {
            ::g::Experimental::TextureLoader::TextureLoaderImpl::JpegByteArrayToTexture2D(arr, ::g::Experimental::TextureLoader::Callback::New1(callback));
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* jpegException = __t.Exception;
            U_THROW(pngException);
        }
    }
}
// }

// C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.20.1\$.uno(119)
// ------------------------------------------------------------------------

// internal static class TextureLoaderImpl :119
// {
uClassType* TextureLoaderImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Experimental.TextureLoader.TextureLoaderImpl", options);
    return type;
}

// public static void JpegByteArrayToTexture2D(Uno.Buffer arr, Experimental.TextureLoader.Callback callback) :122
void TextureLoaderImpl__JpegByteArrayToTexture2D_fn(::g::Uno::Buffer* arr_, ::g::Experimental::TextureLoader::Callback* callback_)
{
    TextureLoaderImpl::JpegByteArrayToTexture2D(arr_, callback_);
}

// public static void PngByteArrayToTexture2D(Uno.Buffer arr, Experimental.TextureLoader.Callback callback) :131
void TextureLoaderImpl__PngByteArrayToTexture2D_fn(::g::Uno::Buffer* arr_, ::g::Experimental::TextureLoader::Callback* callback_)
{
    TextureLoaderImpl::PngByteArrayToTexture2D(arr_, callback_);
}

// public static void JpegByteArrayToTexture2D(Uno.Buffer arr, Experimental.TextureLoader.Callback callback) [static] :122
void TextureLoaderImpl::JpegByteArrayToTexture2D(::g::Uno::Buffer* arr_, ::g::Experimental::TextureLoader::Callback* callback_)
{
    try
    {
        Xli::Managed<Xli::BufferPtr> bp = new Xli::BufferPtr(U_BUFFER_PTR(arr_), U_BUFFER_SIZE(arr_), false);
        Xli::Managed<Xli::BufferStream> bs = new Xli::BufferStream(bp, true, false);
        Xli::Managed<Xli::ImageReader> ir = Xli::Jpeg::CreateReader(bs);
        Xli::Managed<Xli::Bitmap> bmp = ir->ReadBitmap();
        Xli::Managed<Xli::Texture> tex = Xli::Texture::Create(bmp);
        uGLTextureInfo info;
        GLuint handle = uCreateGLTexture(tex, false, &info);
    
        callback_->Execute(::g::Uno::Graphics::Texture2D::New2(handle, ::g::Uno::Int2__New2(info.Width, info.Height), info.MipCount, 0));
    }
    catch (const Xli::Exception &e)
    {
        throw uThrowable(::g::Uno::Exception::New2(::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public static void PngByteArrayToTexture2D(Uno.Buffer arr, Experimental.TextureLoader.Callback callback) [static] :131
void TextureLoaderImpl::PngByteArrayToTexture2D(::g::Uno::Buffer* arr_, ::g::Experimental::TextureLoader::Callback* callback_)
{
    try
    {
        Xli::Managed<Xli::BufferPtr> bp = new Xli::BufferPtr(U_BUFFER_PTR(arr_), U_BUFFER_SIZE(arr_), false);
        Xli::Managed<Xli::BufferStream> bs = new Xli::BufferStream(bp, true, false);
        Xli::Managed<Xli::ImageReader> ir = Xli::Png::CreateReader(bs);
        Xli::Managed<Xli::Bitmap> bmp = ir->ReadBitmap();
        Xli::Managed<Xli::Texture> tex = Xli::Texture::Create(bmp);
        uGLTextureInfo info;
        GLuint handle = uCreateGLTexture(tex, false, &info);
    
        callback_->Execute(::g::Uno::Graphics::Texture2D::New2(handle, ::g::Uno::Int2__New2(info.Width, info.Height), info.MipCount, 0));
    }
    catch (const Xli::Exception &e)
    {
        throw uThrowable(::g::Uno::Exception::New2(::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}
// }

}}} // ::g::Experimental::TextureLoader

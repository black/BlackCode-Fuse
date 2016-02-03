#include <app/Experimental.TextureLoader.Callback.h>
#include <app/Experimental.TextureLoader.InvalidContentTypeException.h>
#include <app/Experimental.TextureLoader.TextureLoader.h>
#include <app/Experimental.TextureLoader.TextureLoaderImpl.h>
#include <app/Uno.Action__texture2D.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Char.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <Uno/XliInterop.h>
#include <Xli.h>
#include <XliGL.h>
#include <XliImage.h>

namespace app {
namespace Experimental {
namespace TextureLoader {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Callback__uType* Callback__typeof()
{
    static ::uStaticStrong<Callback__uType*> type;
    if (type != NULL) return type;

    type = (Callback__uType*)::uAllocClassType(sizeof(Callback__uType), "Experimental.TextureLoader.Callback", false, 0, 1, 0);

    type->SetStrongRefs(
        "_action", offsetof(Callback, _action));

    type->SetFields(1,
        ::uNewField("_action", NULL, offsetof(Callback, _action), ::app::Uno::Action__texture2D__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Execute", Callback__Execute, 0, false, ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewFunction("get_Action", Callback__get_Action, 0, false, ::app::Uno::Action__texture2D__typeof()),
        ::uNewFunction(".ctor", Callback__New_1, 0, true, Callback__typeof(), ::app::Uno::Action__texture2D__typeof()));

    ::uRegisterType(type);
    return type;
}

void Callback___ObjInit(Callback* __this, ::uDelegate* action)
{
    __this->_action = action;
}

void Callback__Execute(Callback* __this, ::app::Uno::Graphics::Texture2D* arg)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Uno::Graphics::Texture2D*>(arg);
}

::uDelegate* Callback__get_Action(Callback* __this)
{
    return __this->_action;
}

Callback* Callback__New_1(::uStatic* __this, ::uDelegate* action)
{
    Callback* inst = (Callback*)::uAllocObject(sizeof(Callback), Callback__typeof());
    inst->_ObjInit(action);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

InvalidContentTypeException__uType* InvalidContentTypeException__typeof()
{
    static ::uStaticStrong<InvalidContentTypeException__uType*> type;
    if (type != NULL) return type;

    type = (InvalidContentTypeException__uType*)::uAllocClassType(sizeof(InvalidContentTypeException__uType), "Experimental.TextureLoader.InvalidContentTypeException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", InvalidContentTypeException__New_3, 0, true, InvalidContentTypeException__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void InvalidContentTypeException___ObjInit_2(InvalidContentTypeException* __this, ::uString* reason)
{
    ::app::Uno::Exception___ObjInit_1(__this, reason);
}

InvalidContentTypeException* InvalidContentTypeException__New_3(::uStatic* __this, ::uString* reason)
{
    InvalidContentTypeException* inst = (InvalidContentTypeException*)::uAllocObject(sizeof(InvalidContentTypeException), InvalidContentTypeException__typeof());
    inst->_ObjInit_2(reason);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextureLoader__uType* TextureLoader__typeof()
{
    static ::uStaticStrong<TextureLoader__uType*> type;
    if (type != NULL) return type;

    type = (TextureLoader__uType*)::uAllocClassType(sizeof(TextureLoader__uType), "Experimental.TextureLoader.TextureLoader");

    type->SetFunctions(5,
        ::uNewFunctionVoid("ByteArrayToTexture2DContentType", TextureLoader__ByteArrayToTexture2DContentType, 0, true, ::app::Uno::Buffer__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Action__texture2D__typeof()),
        ::uNewFunctionVoid("ByteArrayToTexture2DFilename", TextureLoader__ByteArrayToTexture2DFilename, 0, true, ::app::Uno::Buffer__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Action__texture2D__typeof()),
        ::uNewFunction("EndsWith", TextureLoader__EndsWith, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("JpegByteArrayToTexture2D", TextureLoader__JpegByteArrayToTexture2D, 0, true, ::app::Uno::Buffer__typeof(), ::app::Uno::Action__texture2D__typeof()),
        ::uNewFunctionVoid("PngByteArrayToTexture2D", TextureLoader__PngByteArrayToTexture2D, 0, true, ::app::Uno::Buffer__typeof(), ::app::Uno::Action__texture2D__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextureLoader__ByteArrayToTexture2DContentType(::uStatic* __this, ::app::Uno::Buffer* arr, ::uString* contentType, ::uDelegate* callback)
{
    if (::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(contentType), ::uGetConstString("image/jpeg"), 0) != -1)
    {
        TextureLoader__JpegByteArrayToTexture2D(NULL, arr, callback);
    }
    else if (::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(contentType), ::uGetConstString("image/png"), 0) != -1)
    {
        TextureLoader__PngByteArrayToTexture2D(NULL, arr, callback);
    }
    else
    {
        U_THROW(::app::Experimental::TextureLoader::InvalidContentTypeException__New_3(NULL, contentType));
    }
}

void TextureLoader__ByteArrayToTexture2DFilename(::uStatic* __this, ::app::Uno::Buffer* arr, ::uString* filename, ::uDelegate* callback)
{
    filename = ::app::Uno::String::ToLower(::uPtr< ::uString*>(filename));

    if (TextureLoader__EndsWith(NULL, filename, ::uGetConstString(".png")))
    {
        TextureLoader__PngByteArrayToTexture2D(NULL, arr, callback);
    }
    else if (TextureLoader__EndsWith(NULL, filename, ::uGetConstString(".jpg")) || TextureLoader__EndsWith(NULL, filename, ::uGetConstString(".jpeg")))
    {
        TextureLoader__JpegByteArrayToTexture2D(NULL, arr, callback);
    }
    else
    {
        U_THROW(::app::Experimental::TextureLoader::InvalidContentTypeException__New_3(NULL, filename));
    }
}

bool TextureLoader__EndsWith(::uStatic* __this, ::uString* str, ::uString* suffix)
{
    int strAt = ::uPtr< ::uString*>(str)->Length() - 1;
    int suffixAt = ::uPtr< ::uString*>(suffix)->Length() - 1;

    while ((strAt >= 0) && (suffixAt >= 0))
    {
        if (::uPtr< ::uString*>(str)->Item(strAt) != ::uPtr< ::uString*>(suffix)->Item(suffixAt))
        {
            return false;
        }

        strAt--;
        suffixAt--;
    }

    return suffixAt < 0;
}

void TextureLoader__JpegByteArrayToTexture2D(::uStatic* __this, ::app::Uno::Buffer* arr, ::uDelegate* callback)
{
    ::app::Experimental::TextureLoader::TextureLoaderImpl__JpegByteArrayToTexture2D(NULL, arr, ::app::Experimental::TextureLoader::Callback__New_1(NULL, callback));
}

void TextureLoader__PngByteArrayToTexture2D(::uStatic* __this, ::app::Uno::Buffer* arr, ::uDelegate* callback)
{
    ::app::Experimental::TextureLoader::TextureLoaderImpl__PngByteArrayToTexture2D(NULL, arr, ::app::Experimental::TextureLoader::Callback__New_1(NULL, callback));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextureLoaderImpl__uType* TextureLoaderImpl__typeof()
{
    static ::uStaticStrong<TextureLoaderImpl__uType*> type;
    if (type != NULL) return type;

    type = (TextureLoaderImpl__uType*)::uAllocClassType(sizeof(TextureLoaderImpl__uType), "Experimental.TextureLoader.TextureLoaderImpl");

    type->SetFunctions(2,
        ::uNewFunctionVoid("JpegByteArrayToTexture2D", TextureLoaderImpl__JpegByteArrayToTexture2D, 0, true, ::app::Uno::Buffer__typeof(), ::app::Experimental::TextureLoader::Callback__typeof()),
        ::uNewFunctionVoid("PngByteArrayToTexture2D", TextureLoaderImpl__PngByteArrayToTexture2D, 0, true, ::app::Uno::Buffer__typeof(), ::app::Experimental::TextureLoader::Callback__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextureLoaderImpl__JpegByteArrayToTexture2D(::uStatic* __this, ::app::Uno::Buffer* arr_, ::app::Experimental::TextureLoader::Callback* callback_)
{
    try
    {
        Xli::Managed<Xli::BufferPtr> bp = new Xli::BufferPtr(U_BUFFER_PTR(arr_), U_BUFFER_SIZE(arr_), false);
        Xli::Managed<Xli::BufferStream> bs = new Xli::BufferStream(bp, true, false);
        Xli::Managed<Xli::ImageReader> ir = Xli::Jpeg::CreateReader(bs);
        Xli::Managed<Xli::Bitmap> bmp = ir->ReadBitmap();
        Xli::Managed<Xli::Texture> tex = Xli::Texture::Create(bmp);
        uGLTextureInfo info;
        GLuint handle = uCreateGLTexture(tex, true, &info);
    
        callback_->Execute(::app::Uno::Graphics::Texture2D__New_1(NULL, handle, ::app::Uno::Int2__New_2(NULL, info.Width, info.Height), info.MipCount, 0));
    }
    catch (const Xli::Exception &e)
    {
        try
        {
            ::app::Experimental::TextureLoader::TextureLoaderImpl__PngByteArrayToTexture2D(NULL, arr_, callback_);
        }
        catch (const uThrowable &t)
        {
            throw uThrowable(::app::Uno::Exception__New_2(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
        }
    }
}

void TextureLoaderImpl__PngByteArrayToTexture2D(::uStatic* __this, ::app::Uno::Buffer* arr_, ::app::Experimental::TextureLoader::Callback* callback_)
{
    try
    {
        Xli::Managed<Xli::BufferPtr> bp = new Xli::BufferPtr(U_BUFFER_PTR(arr_), U_BUFFER_SIZE(arr_), false);
        Xli::Managed<Xli::BufferStream> bs = new Xli::BufferStream(bp, true, false);
        Xli::Managed<Xli::ImageReader> ir = Xli::Png::CreateReader(bs);
        Xli::Managed<Xli::Bitmap> bmp = ir->ReadBitmap();
        Xli::Managed<Xli::Texture> tex = Xli::Texture::Create(bmp);
        uGLTextureInfo info;
        GLuint handle = uCreateGLTexture(tex, true, &info);
    
        callback_->Execute(::app::Uno::Graphics::Texture2D__New_1(NULL, handle, ::app::Uno::Int2__New_2(NULL, info.Width, info.Height), info.MipCount, 0));
    }
    catch (const Xli::Exception &e)
    {
        try
        {
            ::app::Experimental::TextureLoader::TextureLoaderImpl__JpegByteArrayToTexture2D(NULL, arr_, callback_);
        }
        catch (const uThrowable &t)
        {
            throw uThrowable(::app::Uno::Exception__New_2(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
        }
    }
}

}}}

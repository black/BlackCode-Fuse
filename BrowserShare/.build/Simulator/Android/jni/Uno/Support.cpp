// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Targets\CPlusPlus\Source\Uno\Support.cpp'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Byte.h>
#include <Uno.Buffer.h>
#include <Uno/Support.h>
#include <Xli/Buffer.h>
#include <Xli/Mutex.h>
#include <Xli/Path.h>
#include <Xli/Unicode.h>
#include <XliImage.h>
#include <XliGL.h>

static Xli::MutexHandle _Critical;

void uInitSupport()
{
    _Critical = Xli::CreateMutex();
}

void uFreeSupport()
{
    Xli::DeleteMutex(_Critical);
}

bool uEnterCriticalIfNull(void* addr)
{
    if (*(void**)addr)
        return false;

    Xli::LockMutex(_Critical);

    if (!*(void**)addr)
        return true;

    Xli::UnlockMutex(_Critical);
    return false;
}

void uEnterCritical()
{
    Xli::LockMutex(_Critical);
}

void uExitCritical()
{
    Xli::UnlockMutex(_Critical);
}

Xli::String uStringToXliString(uString* ustr)
{
    return ustr ? Xli::Unicode::Utf16To8(ustr->Ptr(), ustr->Length()) : "";
}

uString* uStringFromXliString(const Xli::String& str)
{
    return uString::Utf8(str.Ptr(), str.Length());
}

::g::Uno::Int2 uInt2FromXliVector2i(const Xli::Vector2i& vec)
{
    return *(::g::Uno::Int2*)&vec;
}

Xli::Vector2i uInt2ToXliVector2i(const ::g::Uno::Int2& vec)
{
    return *(Xli::Vector2i*)&vec;
}

::g::Uno::Float2 uFloat2FromXliVector2(const Xli::Vector2& vec)
{
    return *(::g::Uno::Float2*)&vec;
}

Xli::Vector2 uFloat2ToXliVector2(const ::g::Uno::Float2& vec)
{
    return *(Xli::Vector2*)&vec;
}

::g::Uno::Buffer* uBufferFromXliDataAccessor(const Xli::DataAccessor* data)
{
    if (!data)
    {
        uThrowable::ThrowNullReference(XLI_FUNCTION, XLI_LINE);
        return NULL;
    }

    uArray* arr = uArray::New(::g::Uno::Byte_typeof()->Array(), data->GetSizeInBytes(), data->GetPtr());
    return ::g::Uno::Buffer::New2(arr, 0, arr->Length(), true);
}

Xli::Texture* uLoadXliTexture(const Xli::String& filename, Xli::Stream* stream)
{
    Xli::String fnUpper = filename.ToUpper();
    Xli::Managed<Xli::ImageReader> ir;

    if (fnUpper.EndsWith(".PNG"))
        ir = Xli::Png::CreateReader(stream);
    else if (fnUpper.EndsWith(".JPG") || fnUpper.EndsWith(".JPEG"))
        ir = Xli::Jpeg::CreateReader(stream);
    else
        XLI_THROW("Unsupported texture extension '" + Xli::Path::GetExtension(filename) + "'");

    Xli::Managed<Xli::Bitmap> bmp = ir->ReadBitmap();
    return Xli::Texture::Create(bmp);
}

static bool TryGetGLFormat(Xli::Format format, GLenum& glFormat, GLenum& glType)
{
    switch (format)
    {
    case Xli::FormatRGBA_8_8_8_8_UInt_Normalize:
        glFormat = GL_RGBA;
        glType = GL_UNSIGNED_BYTE;
        return true;

    case Xli::FormatRGB_8_8_8_UInt_Normalize:
        glFormat = GL_RGB;
        glType = GL_UNSIGNED_BYTE;
        return true;

    case Xli::FormatR_8_UInt_Normalize:
    case Xli::FormatL_8_UInt_Normalize:
        glFormat = GL_LUMINANCE;
        glType = GL_UNSIGNED_BYTE;
        return true;

    case Xli::FormatRG_8_8_UInt_Normalize:
    case Xli::FormatLA_8_8_UInt_Normalize:
        glFormat = GL_LUMINANCE_ALPHA;
        glType = GL_UNSIGNED_BYTE;
        return true;

    default:
        return false;
    }
}

unsigned int uCreateGLTexture(Xli::Texture* texData, bool generateMips, uGLTextureInfo* outInfo)
{
    GLuint texHandle;
    glGenTextures(1, &texHandle);

    int width = texData->Faces[0].MipLevels[0]->GetWidth();
    int height = texData->Faces[0].MipLevels[0]->GetHeight();
    int mipCount = texData->Faces[0].MipLevels.Length();
    int depth = 1;

    GLenum texTarget =
        texData->Type == Xli::TextureTypeCube ?
            GL_TEXTURE_CUBE_MAP :
            GL_TEXTURE_2D;

    glBindTexture(texTarget, texHandle);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glPixelStorei(GL_PACK_ALIGNMENT, 1);

    bool compressed = false;

    for (int i = 0; i < texData->Faces.Length(); i++)
    {
        GLenum texFace =
            texTarget == GL_TEXTURE_CUBE_MAP ?
                GL_TEXTURE_CUBE_MAP_POSITIVE_X + i :
                GL_TEXTURE_2D;

        for (int j = 0; j < texData->Faces[i].MipLevels.Length(); j++)
        {
            Xli::Image* mip = texData->Faces[i].MipLevels[j];

            switch (mip->GetFormat())
            {
#ifdef GL_ETC1_RGB8_OES

            case Xli::FormatCompressedRGB_ETC1:
                glCompressedTexImage2D(texFace, j, GL_ETC1_RGB8_OES, mip->GetWidth(), mip->GetHeight(), 0, mip->GetSizeInBytes(), mip->GetPtr());
                compressed = true;
                break;

#endif
#ifdef GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG

            case Xli::FormatCompressedRGB_PVRTC_4BPP:
                glCompressedTexImage2D(texFace, j, GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG, mip->GetWidth(), mip->GetHeight(), 0, mip->GetSizeInBytes(), mip->GetPtr());
                compressed = true;
                break;

#endif
#ifdef GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG

            case Xli::FormatCompressedRGB_PVRTC_2BPP:
                glCompressedTexImage2D(texFace, j, GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG, mip->GetWidth(), mip->GetHeight(), 0, mip->GetSizeInBytes(), mip->GetPtr());
                compressed = true;
                break;

#endif
#ifdef GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG

            case Xli::FormatCompressedRGBA_PVRTC_4BPP:
                glCompressedTexImage2D(texFace, j, GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG, mip->GetWidth(), mip->GetHeight(), 0, mip->GetSizeInBytes(), mip->GetPtr());
                compressed = true;
                break;

#endif
#ifdef GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG

            case Xli::FormatCompressedRGBA_PVRTC_2BPP:
                glCompressedTexImage2D(texFace, j, GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG, mip->GetWidth(), mip->GetHeight(), 0, mip->GetSizeInBytes(), mip->GetPtr());
                compressed = true;
                break;

#endif

            default:
                {
                    Xli::Managed<Xli::Bitmap> bmp = mip->ToBitmap();

                    GLenum glFormat, glType;
                    if (!TryGetGLFormat(bmp->GetFormat(), glFormat, glType))
                        XLI_THROW("Unsupported texture format: " + Xli::FormatInfo::ToString(bmp->GetFormat()));

                    glTexImage2D(texFace, j, glFormat, bmp->GetWidth(), bmp->GetHeight(), 0, glFormat, glType, bmp->GetPtr());
                }

                break;

            // Silence 'switch has default but no cases' warning
            case Xli::FormatUnspecified:
                break;
            }
        }
    }

    if (generateMips && !compressed)
    {
        glGenerateMipmap(texTarget);
        GLenum err = glGetError();

        if (err == GL_NO_ERROR)
        {
            int w = width, h = height;

            while (w > 1 || h > 1)
            {
                w /= 2;
                h /= 2;
                mipCount++;
            }
        }
    }

    if (outInfo)
    {
        outInfo->GLTarget = texTarget;
        outInfo->Width = width;
        outInfo->Height = height;
        outInfo->Depth = depth;
        outInfo->MipCount = mipCount;
    }

    //XLI_GL_CHECK_ERROR;
    return texHandle;
}

void uReverseBytes(uint8_t* ptr, size_t size)
{
    uint8_t tmp;

    switch (size)
    {
    case 2:
        tmp = ptr[0];
        ptr[0] = ptr[1];
        ptr[1] = tmp;
        break;
    case 4:
        tmp = ptr[0];
        ptr[0] = ptr[3];
        ptr[3] = tmp;
        tmp = ptr[1];
        ptr[1] = ptr[2];
        ptr[2] = tmp;
        break;
    case 8:
        tmp = ptr[0];
        ptr[0] = ptr[7];
        ptr[7] = tmp;
        tmp = ptr[1];
        ptr[1] = ptr[6];
        ptr[6] = tmp;
        tmp = ptr[2];
        ptr[2] = ptr[5];
        ptr[5] = tmp;
        tmp = ptr[3];
        ptr[3] = ptr[4];
        ptr[4] = tmp;
        break;
    default:
        U_FATAL();
    }
}

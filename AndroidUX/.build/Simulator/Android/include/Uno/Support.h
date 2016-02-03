// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Targets\CPlusPlus\Source\Uno\Support.h'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Xli/String.h>
#include <Xli/Vector2.h>
#include <Uno.Int2.h>
#include <Uno.Float2.h>
namespace g{namespace Uno{struct Buffer;}}

namespace Xli { class DataAccessor; }
namespace Xli { class Texture; }
namespace Xli { class Stream; }
struct uString;

/**
    \addtogroup ThreadUtils
    @{
*/
void uEnterCritical();
bool uEnterCriticalIfNull(void* addr);
void uExitCritical();
/** @} */

/**
    \addtogroup XliUtils
    @{
*/
Xli::String uStringToXliString(uString* ustr);
uString* uStringFromXliString(const Xli::String& str);

::g::Uno::Int2 uInt2FromXliVector2i(const Xli::Vector2i& vec);
Xli::Vector2i uInt2ToXliVector2i(const ::g::Uno::Int2& vec);

::g::Uno::Float2 uFloat2FromXliVector2(const Xli::Vector2& vec);
Xli::Vector2 uFloat2ToXliVector2(const ::g::Uno::Float2& vec);

::g::Uno::Buffer* uBufferFromXliDataAccessor(const Xli::DataAccessor* data);
/** @} */

/**
    \addtogroup TextureUtils
    @{
*/
struct uGLTextureInfo
{
    unsigned int GLTarget;
    int Width;
    int Height;
    int Depth;
    int MipCount;
};

Xli::Texture* uLoadXliTexture(const Xli::String& filename, Xli::Stream* stream);
unsigned int uCreateGLTexture(Xli::Texture* texData, bool generateMipmap = true, uGLTextureInfo* outInfo = 0);
/** @} */

/**
    \addtogroup BufferUtils
    @{
*/
#define U_BUFFER_PTR(buffer) ((uint8_t*)(buffer)->_data->_ptr + (buffer)->_offset)
#define U_BUFFER_SIZE(buffer) (buffer)->_sizeInBytes

void uReverseBytes(uint8_t* ptr, size_t size);

template<class T>
void uReverseBytes(T& ref) {
    uReverseBytes((uint8_t*)&ref, sizeof(T));
}
template<class T>
T uLoadBytes(uint8_t* ptr, bool littleEndian) {
    T result;
    memcpy(&result, ptr, sizeof(T));

    if (!littleEndian)
        uReverseBytes(result);

    return result;
}
template<class T>
void uStoreBytes(uint8_t* ptr, T value, bool littleEndian) {
    if (!littleEndian)
        uReverseBytes(value);

    memcpy(ptr, &value, sizeof(T));
}
/** @} */

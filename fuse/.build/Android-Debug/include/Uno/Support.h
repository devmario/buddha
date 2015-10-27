// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Source/Uno/Support.h'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __UNO_SUPPORT_H__
#define __UNO_SUPPORT_H__

#include <app/Uno.Int2.h>
#include <app/Uno.Float2.h>
namespace app { namespace Uno { struct Buffer; } }
#include <Xli/String.h>
#include <Xli/Vector2.h>

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

::app::Uno::Int2 uInt2FromXliVector2i(const Xli::Vector2i& vec);
Xli::Vector2i uInt2ToXliVector2i(const ::app::Uno::Int2& vec);

::app::Uno::Float2 uFloat2FromXliVector2(const Xli::Vector2& vec);
Xli::Vector2 uFloat2ToXliVector2(const ::app::Uno::Float2& vec);

::app::Uno::Buffer* uBufferFromXliDataAccessor(const Xli::DataAccessor* data);
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
#define U_BUFFER_PTR(buffer) ((::uByte*)(buffer)->_data->_ptr + (buffer)->_offset)
#define U_BUFFER_SIZE(buffer) (buffer)->_sizeInBytes

void uReverseBytes(uByte* ptr, size_t size);

template <typename T>
void uReverseBytes(T& ref)
{
    uReverseBytes((uByte*)&ref, sizeof(T));
}

template <typename T>
T uReadBytes(uByte* ptr, bool littleEndian)
{
    T result;
    memcpy(&result, ptr, sizeof(T));

    if (!littleEndian)
        ::uReverseBytes(result);

    return result;
}

template <typename T>
void uWriteBytes(uByte* ptr, T value, bool littleEndian)
{
    if (!littleEndian)
        ::uReverseBytes(value);

    memcpy(ptr, &value, sizeof(T));
}
/** @} */

#endif

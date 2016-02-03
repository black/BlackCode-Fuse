// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_INTERNAL_MULTI_BUFFER_SETTER_H__
#define __APP_FUSE_DRAWING_INTERNAL_MULTI_BUFFER_SETTER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Internal { struct MultiBuffer; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Internal { struct MultiBuffer_Field; } } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Internal {

struct MultiBuffer_Setter;

struct MultiBuffer_Setter__uType : ::uClassType
{
};

MultiBuffer_Setter__uType* MultiBuffer_Setter__typeof();

void MultiBuffer_Setter___ObjInit(MultiBuffer_Setter* __this, ::app::Fuse::Drawing::Internal::MultiBuffer* owner, int index);
MultiBuffer_Setter* MultiBuffer_Setter__New_1(::uStatic* __this, ::app::Fuse::Drawing::Internal::MultiBuffer* owner, int index);
MultiBuffer_Setter* MultiBuffer_Setter__SetFloat(MultiBuffer_Setter* __this, ::app::Fuse::Drawing::Internal::MultiBuffer_Field* f, float v);
MultiBuffer_Setter* MultiBuffer_Setter__SetFloat2(MultiBuffer_Setter* __this, ::app::Fuse::Drawing::Internal::MultiBuffer_Field* f, ::app::Uno::Float2 v);
MultiBuffer_Setter* MultiBuffer_Setter__SetFloat3(MultiBuffer_Setter* __this, ::app::Fuse::Drawing::Internal::MultiBuffer_Field* f, ::app::Uno::Float3 v);

struct MultiBuffer_Setter : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Internal::MultiBuffer*> owner;
    int index;
    int baseP;

    void _ObjInit(::app::Fuse::Drawing::Internal::MultiBuffer* owner, int index) { MultiBuffer_Setter___ObjInit(this, owner, index); }
    MultiBuffer_Setter* SetFloat(::app::Fuse::Drawing::Internal::MultiBuffer_Field* f, float v) { return MultiBuffer_Setter__SetFloat(this, f, v); }
    MultiBuffer_Setter* SetFloat2(::app::Fuse::Drawing::Internal::MultiBuffer_Field* f, ::app::Uno::Float2 v);
    MultiBuffer_Setter* SetFloat3(::app::Fuse::Drawing::Internal::MultiBuffer_Field* f, ::app::Uno::Float3 v);
};

}}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Internal {

inline MultiBuffer_Setter* MultiBuffer_Setter::SetFloat2(::app::Fuse::Drawing::Internal::MultiBuffer_Field* f, ::app::Uno::Float2 v) { return MultiBuffer_Setter__SetFloat2(this, f, v); }
inline MultiBuffer_Setter* MultiBuffer_Setter::SetFloat3(::app::Fuse::Drawing::Internal::MultiBuffer_Field* f, ::app::Uno::Float3 v) { return MultiBuffer_Setter__SetFloat3(this, f, v); }

}}}}


#endif

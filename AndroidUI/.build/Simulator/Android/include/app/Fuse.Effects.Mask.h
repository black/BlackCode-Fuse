// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_EFFECTS_MASK_H__
#define __APP_FUSE_EFFECTS_MASK_H__

#include <app/Fuse.Effects.BasicEffect.h>
#include <app/Fuse.Internal.IImageContainerOwner.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct ImageContainer; } } }
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Effects {

struct Mask;

struct Mask__uType : ::app::Fuse::Effects::BasicEffect__uType
{
    ::app::Fuse::Internal::IImageContainerOwner __interface_0;
};

Mask__uType* Mask__typeof();

void Mask___ObjInit_2(Mask* __this);
void Mask__free_DrawCalls(Mask* __this);
void Mask__Fuse_Internal_IImageContainerOwner_OnParamChanged(Mask* __this);
void Mask__Fuse_Internal_IImageContainerOwner_OnSizingChanged(Mask* __this);
void Mask__Fuse_Internal_IImageContainerOwner_OnSourceChanged(Mask* __this);
::app::Uno::UX::FileSource* Mask__get_File(Mask* __this);
int Mask__get_Mode(Mask* __this);
::app::Fuse::Resources::ImageSource* Mask__get_Source(Mask* __this);
void Mask__init_DrawCalls(Mask* __this);
::app::Uno::Rect Mask__ModifyRenderBounds(Mask* __this, ::app::Uno::Rect inBounds);
Mask* Mask__New_1(::uStatic* __this);
void Mask__OnRender(Mask* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect elementRect);
void Mask__set_File(Mask* __this, ::app::Uno::UX::FileSource* value);
void Mask__set_Mode(Mask* __this, int value);
void Mask__set_Source(Mask* __this, ::app::Fuse::Resources::ImageSource* value);

struct Mask : ::app::Fuse::Effects::BasicEffect
{
    ::uStrong< ::app::Fuse::Internal::ImageContainer*> _container;
    int _mode;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> OnRender_VertexData_21360147_7_2_1;
    ::app::Uno::Float4x4 OnRender_LocalTransform_21360147_4_8_2;
    ::app::Uno::Float4x4 OnRender_LocalTransform_21360147_4_8_3;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> OnRender_VertexData_193b0147_7_2_1;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> OnRender_VertexData_312c0147_7_2_1;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_21360147;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_193b0147;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_312c0147;

    void _ObjInit_2() { Mask___ObjInit_2(this); }
    void free_DrawCalls() { Mask__free_DrawCalls(this); }
    ::app::Uno::UX::FileSource* File() { return Mask__get_File(this); }
    int Mode() { return Mask__get_Mode(this); }
    ::app::Fuse::Resources::ImageSource* Source() { return Mask__get_Source(this); }
    void init_DrawCalls() { Mask__init_DrawCalls(this); }
    void File(::app::Uno::UX::FileSource* value) { Mask__set_File(this, value); }
    void Mode(int value) { Mask__set_Mode(this, value); }
    void Source(::app::Fuse::Resources::ImageSource* value) { Mask__set_Source(this, value); }
};

}}}


#endif

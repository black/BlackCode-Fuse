// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__UNO_U_X_FILE_SOURCE_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__UNO_U_X_FILE_SOURCE_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__Uno_UX_FileSource; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }
namespace app { namespace Uno { namespace UX { struct Property__Uno_UX_FileSource; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__Uno_UX_FileSource;

struct Change__Uno_UX_FileSource__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__Uno_UX_FileSource__uType* Change__Uno_UX_FileSource__typeof();

void Change__Uno_UX_FileSource___ObjInit_2(Change__Uno_UX_FileSource* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* target);
::app::Fuse::Animations::AnimatorState* Change__Uno_UX_FileSource__CreateState(Change__Uno_UX_FileSource* __this, ::app::Fuse::Animations::CreateStateParams* p);
float Change__Uno_UX_FileSource__get_DegreesX(Change__Uno_UX_FileSource* __this);
::app::Uno::Float2 Change__Uno_UX_FileSource__get_DegreesXY(Change__Uno_UX_FileSource* __this);
float Change__Uno_UX_FileSource__get_DegreesY(Change__Uno_UX_FileSource* __this);
float Change__Uno_UX_FileSource__get_DegreesZ(Change__Uno_UX_FileSource* __this);
bool Change__Uno_UX_FileSource__get_IsContinuous(Change__Uno_UX_FileSource* __this);
::app::Uno::UX::Property__Uno_UX_FileSource* Change__Uno_UX_FileSource__get_Target(Change__Uno_UX_FileSource* __this);
::app::Uno::UX::FileSource* Change__Uno_UX_FileSource__get_Value(Change__Uno_UX_FileSource* __this);
float Change__Uno_UX_FileSource__get_X(Change__Uno_UX_FileSource* __this);
::app::Uno::Float2 Change__Uno_UX_FileSource__get_XY(Change__Uno_UX_FileSource* __this);
float Change__Uno_UX_FileSource__get_Y(Change__Uno_UX_FileSource* __this);
float Change__Uno_UX_FileSource__get_Z(Change__Uno_UX_FileSource* __this);
Change__Uno_UX_FileSource* Change__Uno_UX_FileSource__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* target);
void Change__Uno_UX_FileSource__set_DegreesX(Change__Uno_UX_FileSource* __this, float value);
void Change__Uno_UX_FileSource__set_DegreesXY(Change__Uno_UX_FileSource* __this, ::app::Uno::Float2 value);
void Change__Uno_UX_FileSource__set_DegreesY(Change__Uno_UX_FileSource* __this, float value);
void Change__Uno_UX_FileSource__set_DegreesZ(Change__Uno_UX_FileSource* __this, float value);
void Change__Uno_UX_FileSource__set_Target(Change__Uno_UX_FileSource* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* value);
void Change__Uno_UX_FileSource__set_Value(Change__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value);
void Change__Uno_UX_FileSource__set_X(Change__Uno_UX_FileSource* __this, float value);
void Change__Uno_UX_FileSource__set_XY(Change__Uno_UX_FileSource* __this, ::app::Uno::Float2 value);
void Change__Uno_UX_FileSource__set_Y(Change__Uno_UX_FileSource* __this, float value);
void Change__Uno_UX_FileSource__set_Z(Change__Uno_UX_FileSource* __this, float value);

struct Change__Uno_UX_FileSource : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__Uno_UX_FileSource*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__Uno_UX_FileSource*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__Uno_UX_FileSource* target) { Change__Uno_UX_FileSource___ObjInit_2(this, target); }
    float DegreesX() { return Change__Uno_UX_FileSource__get_DegreesX(this); }
    ::app::Uno::Float2 DegreesXY();
    float DegreesY() { return Change__Uno_UX_FileSource__get_DegreesY(this); }
    float DegreesZ() { return Change__Uno_UX_FileSource__get_DegreesZ(this); }
    bool IsContinuous() { return Change__Uno_UX_FileSource__get_IsContinuous(this); }
    ::app::Uno::UX::Property__Uno_UX_FileSource* Target() { return Change__Uno_UX_FileSource__get_Target(this); }
    ::app::Uno::UX::FileSource* Value() { return Change__Uno_UX_FileSource__get_Value(this); }
    float X() { return Change__Uno_UX_FileSource__get_X(this); }
    ::app::Uno::Float2 XY();
    float Y() { return Change__Uno_UX_FileSource__get_Y(this); }
    float Z() { return Change__Uno_UX_FileSource__get_Z(this); }
    void DegreesX(float value) { Change__Uno_UX_FileSource__set_DegreesX(this, value); }
    void DegreesXY(::app::Uno::Float2 value);
    void DegreesY(float value) { Change__Uno_UX_FileSource__set_DegreesY(this, value); }
    void DegreesZ(float value) { Change__Uno_UX_FileSource__set_DegreesZ(this, value); }
    void Target(::app::Uno::UX::Property__Uno_UX_FileSource* value) { Change__Uno_UX_FileSource__set_Target(this, value); }
    void Value(::app::Uno::UX::FileSource* value) { Change__Uno_UX_FileSource__set_Value(this, value); }
    void X(float value) { Change__Uno_UX_FileSource__set_X(this, value); }
    void XY(::app::Uno::Float2 value);
    void Y(float value) { Change__Uno_UX_FileSource__set_Y(this, value); }
    void Z(float value) { Change__Uno_UX_FileSource__set_Z(this, value); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Change__Uno_UX_FileSource::DegreesXY() { return Change__Uno_UX_FileSource__get_DegreesXY(this); }
inline ::app::Uno::Float2 Change__Uno_UX_FileSource::XY() { return Change__Uno_UX_FileSource__get_XY(this); }
inline void Change__Uno_UX_FileSource::DegreesXY(::app::Uno::Float2 value) { Change__Uno_UX_FileSource__set_DegreesXY(this, value); }
inline void Change__Uno_UX_FileSource::XY(::app::Uno::Float2 value) { Change__Uno_UX_FileSource__set_XY(this, value); }

}}}


#endif

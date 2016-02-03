// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\Processing\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_PROCESSING_STROKE_H__
#define __APP_FUSE_ENTITIES_PROCESSING_STROKE_H__

#include <app/Fuse.IOutput__Fuse_Drawing_Polygon.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Polygon; } } }

namespace app {
namespace Fuse {
namespace Entities {
namespace Processing {

struct Stroke;

struct Stroke__uType : ::uClassType
{
    ::app::Fuse::IOutput__Fuse_Drawing_Polygon __interface_0;
};

Stroke__uType* Stroke__typeof();

void Stroke___ObjInit(Stroke* __this);
void Stroke__add_OutputChanged(Stroke* __this, ::uDelegate* value);
int Stroke__get_EndCap(Stroke* __this);
float Stroke__get_Offset(Stroke* __this);
::app::Fuse::Drawing::Polygon* Stroke__get_Output(Stroke* __this);
::uObject* Stroke__get_Source(Stroke* __this);
int Stroke__get_StartCap(Stroke* __this);
float Stroke__get_Width(Stroke* __this);
void Stroke__Invalidate(Stroke* __this);
Stroke* Stroke__New_1(::uStatic* __this);
void Stroke__remove_OutputChanged(Stroke* __this, ::uDelegate* value);
void Stroke__set_EndCap(Stroke* __this, int value);
void Stroke__set_Offset(Stroke* __this, float value);
void Stroke__set_Source(Stroke* __this, ::uObject* value);
void Stroke__set_StartCap(Stroke* __this, int value);
void Stroke__set_Width(Stroke* __this, float value);

struct Stroke : ::uObject
{
    float _width;
    float _offset;
    int _startCap;
    int _endCap;
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::app::Fuse::Drawing::Polygon*> _output;
    ::uStrong< ::uDelegate*> OutputChanged;

    void _ObjInit() { Stroke___ObjInit(this); }
    void add_OutputChanged(::uDelegate* value) { Stroke__add_OutputChanged(this, value); }
    int EndCap() { return Stroke__get_EndCap(this); }
    float Offset() { return Stroke__get_Offset(this); }
    ::app::Fuse::Drawing::Polygon* Output() { return Stroke__get_Output(this); }
    ::uObject* Source() { return Stroke__get_Source(this); }
    int StartCap() { return Stroke__get_StartCap(this); }
    float Width() { return Stroke__get_Width(this); }
    void Invalidate() { Stroke__Invalidate(this); }
    void remove_OutputChanged(::uDelegate* value) { Stroke__remove_OutputChanged(this, value); }
    void EndCap(int value) { Stroke__set_EndCap(this, value); }
    void Offset(float value) { Stroke__set_Offset(this, value); }
    void Source(::uObject* value) { Stroke__set_Source(this, value); }
    void StartCap(int value) { Stroke__set_StartCap(this, value); }
    void Width(float value) { Stroke__set_Width(this, value); }
};

}}}}


#endif

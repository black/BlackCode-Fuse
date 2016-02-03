// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\Processing\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_PROCESSING_EXTRUDE_H__
#define __APP_FUSE_ENTITIES_PROCESSING_EXTRUDE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Mesh; } } }

namespace app {
namespace Fuse {
namespace Entities {
namespace Processing {

struct Extrude;

struct Extrude__uType : ::uClassType
{
};

Extrude__uType* Extrude__typeof();

void Extrude___ObjInit(Extrude* __this);
void Extrude__add_OutputChanged(Extrude* __this, ::uDelegate* value);
float Extrude__get_Depth(Extrude* __this);
::app::Fuse::Entities::Mesh* Extrude__get_Output(Extrude* __this);
float Extrude__get_SmoothingThreshold(Extrude* __this);
::uObject* Extrude__get_Source(Extrude* __this);
void Extrude__Invalidate(Extrude* __this);
Extrude* Extrude__New_1(::uStatic* __this);
void Extrude__remove_OutputChanged(Extrude* __this, ::uDelegate* value);
void Extrude__set_Depth(Extrude* __this, float value);
void Extrude__set_SmoothingThreshold(Extrude* __this, float value);
void Extrude__set_Source(Extrude* __this, ::uObject* value);

struct Extrude : ::uObject
{
    float _smoothingThreshold;
    float _depth;
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::app::Fuse::Entities::Mesh*> _output;
    ::uStrong< ::uDelegate*> OutputChanged;

    void _ObjInit() { Extrude___ObjInit(this); }
    void add_OutputChanged(::uDelegate* value) { Extrude__add_OutputChanged(this, value); }
    float Depth() { return Extrude__get_Depth(this); }
    ::app::Fuse::Entities::Mesh* Output() { return Extrude__get_Output(this); }
    float SmoothingThreshold() { return Extrude__get_SmoothingThreshold(this); }
    ::uObject* Source() { return Extrude__get_Source(this); }
    void Invalidate() { Extrude__Invalidate(this); }
    void remove_OutputChanged(::uDelegate* value) { Extrude__remove_OutputChanged(this, value); }
    void Depth(float value) { Extrude__set_Depth(this, value); }
    void SmoothingThreshold(float value) { Extrude__set_SmoothingThreshold(this, value); }
    void Source(::uObject* value) { Extrude__set_Source(this, value); }
};

}}}}


#endif

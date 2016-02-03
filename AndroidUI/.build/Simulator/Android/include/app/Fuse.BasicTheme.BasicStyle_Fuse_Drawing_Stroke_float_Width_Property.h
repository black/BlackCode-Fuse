// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_STYLE_FUSE_DRAWING_STROKE_FLOAT_WIDTH_PROPERTY_H__
#define __APP_FUSE_BASIC_THEME_BASIC_STYLE_FUSE_DRAWING_STROKE_FLOAT_WIDTH_PROPERTY_H__

#include <app/Uno.UX.Property__float.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicStyle_Fuse_Drawing_Stroke_float_Width_Property;

struct BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__uType : ::app::Uno::UX::Property__float__uType
{
};

BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__uType* BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__typeof();

void BasicStyle_Fuse_Drawing_Stroke_float_Width_Property___ObjInit_1(BasicStyle_Fuse_Drawing_Stroke_float_Width_Property* __this, ::app::Fuse::Drawing::Stroke* obj);
BasicStyle_Fuse_Drawing_Stroke_float_Width_Property* BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__New_1(::uStatic* __this, ::app::Fuse::Drawing::Stroke* obj);
float BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__OnGet(BasicStyle_Fuse_Drawing_Stroke_float_Width_Property* __this);
void BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__OnSet(BasicStyle_Fuse_Drawing_Stroke_float_Width_Property* __this, float v, ::uObject* origin);

struct BasicStyle_Fuse_Drawing_Stroke_float_Width_Property : ::app::Uno::UX::Property__float
{
    ::uStrong< ::app::Fuse::Drawing::Stroke*> _obj;

    void _ObjInit_1(::app::Fuse::Drawing::Stroke* obj) { BasicStyle_Fuse_Drawing_Stroke_float_Width_Property___ObjInit_1(this, obj); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Cache;}}}
namespace g{namespace Fuse{namespace Drawing{struct Contour;}}}
namespace g{namespace Fuse{namespace Drawing{struct Polygon;}}}
namespace g{namespace Fuse{namespace Drawing{struct PolygonDrawable;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public partial sealed class Polygon :158
// {
uType* Polygon_typeof();
void Polygon__ctor_1_fn(Polygon* __this, uObject* contours);
void Polygon__ctor_3_fn(Polygon* __this, uDelegate* windingRule, uObject* contours);
void Polygon__get_Contours_fn(Polygon* __this, uObject** __retval);
void Polygon__GetBoundaryContours_fn(Polygon* __this, uObject** __retval);
void Polygon__GetTriangleVertices_fn(Polygon* __this, uArray** __retval);
void Polygon__get_IsDegenerate_fn(Polygon* __this, bool* __retval);
void Polygon__New2_fn(uObject* contours, Polygon** __retval);
void Polygon__New4_fn(uDelegate* windingRule, uObject* contours, Polygon** __retval);
void Polygon__Stroke_fn(Polygon* __this, float* Width, float* Offset, int* StartCap, int* EndCap, Polygon** __retval);
void Polygon__Triangulate_fn(Polygon* __this, uObject** __retval);

struct Polygon : uObject
{
    uStrong<uArray*> _boundaryContours;
    uStrong< ::g::Fuse::Drawing::Cache*> _contours;
    uStrong<uDelegate*> _windingRule;

    void ctor_1(uObject* contours);
    void ctor_3(uDelegate* windingRule, uObject* contours);
    uObject* Contours();
    uObject* GetBoundaryContours();
    uArray* GetTriangleVertices();
    bool IsDegenerate();
    Polygon* Stroke(float Width, float Offset, int StartCap, int EndCap);
    uObject* Triangulate();
    static Polygon* New2(uObject* contours);
    static Polygon* New4(uDelegate* windingRule, uObject* contours);
};
// }

}}} // ::g::Fuse::Drawing

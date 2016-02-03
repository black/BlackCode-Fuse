// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_PATH_GEOMETRY_PARSER_H__
#define __APP_FUSE_DRAWING_PATH_GEOMETRY_PARSER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }
namespace app { namespace Fuse { namespace Drawing { struct Token; } } }

namespace app {
namespace Fuse {
namespace Drawing {

struct PathGeometryParser;

struct PathGeometryParser__uType : ::uClassType
{
};

PathGeometryParser__uType* PathGeometryParser__typeof();

void PathGeometryParser___ObjInit(PathGeometryParser* __this, ::uString* data);
void PathGeometryParser__ClosePath(PathGeometryParser* __this);
void PathGeometryParser__CurveTo(PathGeometryParser* __this, float offsetX, float offsetY);
::app::Fuse::Drawing::PathGeometry* PathGeometryParser__Deserialize(::uStatic* __this, ::uString* data);
void PathGeometryParser__Execute(PathGeometryParser* __this, ::uChar c);
void PathGeometryParser__HLineTo(PathGeometryParser* __this, float offsetX, float offsetY);
void PathGeometryParser__LineTo(PathGeometryParser* __this, float offsetX, float offsetY);
void PathGeometryParser__MoveTo(PathGeometryParser* __this, float offsetX, float offsetY);
PathGeometryParser* PathGeometryParser__New_1(::uStatic* __this, ::uString* data);
float PathGeometryParser__ReadFloat(PathGeometryParser* __this);
void PathGeometryParser__SmoothCurveTo(PathGeometryParser* __this, float offsetX, float offsetY);
void PathGeometryParser__StartNewToken(PathGeometryParser* __this, int prevLastChar, int nextFirstChar, bool hasAction);
void PathGeometryParser__VLineTo(PathGeometryParser* __this, float offsetX, float offsetY);

struct PathGeometryParser : ::uObject
{
    ::uStrong< ::uString*> _data;
    ::uStrong< ::app::Fuse::Drawing::Token*> _headToken;
    ::uStrong< ::app::Fuse::Drawing::Token*> _prevToken;
    ::uStrong< ::app::Fuse::Drawing::Token*> _token;
    ::uStrong< ::app::Fuse::Drawing::PathGeometry*> _head;
    float _x;
    float _y;

    void _ObjInit(::uString* data) { PathGeometryParser___ObjInit(this, data); }
    void ClosePath() { PathGeometryParser__ClosePath(this); }
    void CurveTo(float offsetX, float offsetY) { PathGeometryParser__CurveTo(this, offsetX, offsetY); }
    void Execute(::uChar c) { PathGeometryParser__Execute(this, c); }
    void HLineTo(float offsetX, float offsetY) { PathGeometryParser__HLineTo(this, offsetX, offsetY); }
    void LineTo(float offsetX, float offsetY) { PathGeometryParser__LineTo(this, offsetX, offsetY); }
    void MoveTo(float offsetX, float offsetY) { PathGeometryParser__MoveTo(this, offsetX, offsetY); }
    float ReadFloat() { return PathGeometryParser__ReadFloat(this); }
    void SmoothCurveTo(float offsetX, float offsetY) { PathGeometryParser__SmoothCurveTo(this, offsetX, offsetY); }
    void StartNewToken(int prevLastChar, int nextFirstChar, bool hasAction) { PathGeometryParser__StartNewToken(this, prevLastChar, nextFirstChar, hasAction); }
    void VLineTo(float offsetX, float offsetY) { PathGeometryParser__VLineTo(this, offsetX, offsetY); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TEXT_EDIT_LINE_CACHE_LINE_H__
#define __APP_FUSE_CONTROLS_TEXT_EDIT_LINE_CACHE_LINE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WordWrapInfo; } } } }
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WrappedLine; } } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace TextEdit {

struct LineCacheLine;

struct LineCacheLine__uType : ::uClassType
{
};

LineCacheLine__uType* LineCacheLine__typeof();

void LineCacheLine___ObjInit(LineCacheLine* __this, ::uString* text, ::uObject* transform);
int LineCacheLine__Backspace(LineCacheLine* __this, int p);
int LineCacheLine__BoundsToPos(LineCacheLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Uno::Float2 p);
::app::Fuse::Controls::Internal::WrappedLine* LineCacheLine__BoundsToWrappedLine(LineCacheLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::app::Uno::Float2 p);
void LineCacheLine__Delete(LineCacheLine* __this, int p);
int LineCacheLine__End(LineCacheLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p);
::uString* LineCacheLine__get_Text(LineCacheLine* __this);
::uObject* LineCacheLine__get_Transform(LineCacheLine* __this);
::uString* LineCacheLine__get_VisualText(LineCacheLine* __this);
float LineCacheLine__GetTotalHeight(LineCacheLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo);
::uArray* LineCacheLine__GetWrappedLines(LineCacheLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo);
int LineCacheLine__Home(LineCacheLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p);
void LineCacheLine__InsertChar(LineCacheLine* __this, int p, ::uChar c);
void LineCacheLine__Invalidate(LineCacheLine* __this);
LineCacheLine* LineCacheLine__New_1(::uStatic* __this, ::uString* text, ::uObject* transform);
::app::Uno::Float2 LineCacheLine__PosToBounds(LineCacheLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, int p);
::app::Fuse::Controls::Internal::WrappedLine* LineCacheLine__PosToWrappedLine(LineCacheLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p);
void LineCacheLine__set_Text(LineCacheLine* __this, ::uString* value);
void LineCacheLine__set_Transform(LineCacheLine* __this, ::uObject* value);

struct LineCacheLine : ::uObject
{
    ::uStrong< ::uString*> _text;
    ::uStrong< ::uObject*> _transform;
    ::uStrong< ::uArray*> _wrappedLinesCache;
    ::uStrong< ::app::Fuse::Controls::Internal::WordWrapInfo*> _wordWrapInfoCache;

    void _ObjInit(::uString* text, ::uObject* transform) { LineCacheLine___ObjInit(this, text, transform); }
    int Backspace(int p) { return LineCacheLine__Backspace(this, p); }
    int BoundsToPos(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Uno::Float2 p);
    ::app::Fuse::Controls::Internal::WrappedLine* BoundsToWrappedLine(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::app::Uno::Float2 p);
    void Delete(int p) { LineCacheLine__Delete(this, p); }
    int End(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p) { return LineCacheLine__End(this, wrapInfo, p); }
    ::uString* Text() { return LineCacheLine__get_Text(this); }
    ::uObject* Transform() { return LineCacheLine__get_Transform(this); }
    ::uString* VisualText() { return LineCacheLine__get_VisualText(this); }
    float GetTotalHeight(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo) { return LineCacheLine__GetTotalHeight(this, wrapInfo); }
    ::uArray* GetWrappedLines(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo) { return LineCacheLine__GetWrappedLines(this, wrapInfo); }
    int Home(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p) { return LineCacheLine__Home(this, wrapInfo, p); }
    void InsertChar(int p, ::uChar c) { LineCacheLine__InsertChar(this, p, c); }
    void Invalidate() { LineCacheLine__Invalidate(this); }
    ::app::Uno::Float2 PosToBounds(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, int p);
    ::app::Fuse::Controls::Internal::WrappedLine* PosToWrappedLine(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p) { return LineCacheLine__PosToWrappedLine(this, wrapInfo, p); }
    void Text(::uString* value) { LineCacheLine__set_Text(this, value); }
    void Transform(::uObject* value) { LineCacheLine__set_Transform(this, value); }
};

}}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace TextEdit {

inline int LineCacheLine::BoundsToPos(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Uno::Float2 p) { return LineCacheLine__BoundsToPos(this, wrapInfo, textAlignment, boundsWidth, p); }
inline ::app::Fuse::Controls::Internal::WrappedLine* LineCacheLine::BoundsToWrappedLine(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::app::Uno::Float2 p) { return LineCacheLine__BoundsToWrappedLine(this, wrapInfo, p); }
inline ::app::Uno::Float2 LineCacheLine::PosToBounds(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, int p) { return LineCacheLine__PosToBounds(this, wrapInfo, textAlignment, boundsWidth, p); }

}}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TOKEN_H__
#define __APP_FUSE_DRAWING_TOKEN_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {

struct Token;

struct Token__uType : ::uClassType
{
};

Token__uType* Token__typeof();

void Token___ObjInit(Token* __this, int first, bool hasAction);
Token* Token__New_1(::uStatic* __this, int first, bool hasAction);

struct Token : ::uObject
{
    int First;
    int Last;
    ::uStrong< Token*> Next;
    bool HasAction;

    void _ObjInit(int first, bool hasAction) { Token___ObjInit(this, first, hasAction); }
};

}}}


#endif

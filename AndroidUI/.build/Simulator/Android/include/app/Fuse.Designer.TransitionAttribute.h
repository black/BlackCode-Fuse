// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DESIGNER_TRANSITION_ATTRIBUTE_H__
#define __APP_FUSE_DESIGNER_TRANSITION_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Designer {

struct TransitionAttribute;

struct TransitionAttribute__uType : ::app::Uno::Attribute__uType
{
};

TransitionAttribute__uType* TransitionAttribute__typeof();

void TransitionAttribute___ObjInit_1(TransitionAttribute* __this, ::uString* incomingType, ::uString* targetType, ::uString* targetProperty);
TransitionAttribute* TransitionAttribute__New_1(::uStatic* __this, ::uString* incomingType, ::uString* targetType, ::uString* targetProperty);

struct TransitionAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> IncomingType;
    ::uStrong< ::uString*> TargetType;
    ::uStrong< ::uString*> TargetProperty;

    void _ObjInit_1(::uString* incomingType, ::uString* targetType, ::uString* targetProperty) { TransitionAttribute___ObjInit_1(this, incomingType, targetType, targetProperty); }
};

}}}


#endif

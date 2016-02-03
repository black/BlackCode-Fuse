// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NODE_HIT_TEST_RECORD_H__
#define __APP_FUSE_NODE_HIT_TEST_RECORD_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct HitTestResult; } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {

struct Node_HitTestRecord;

struct Node_HitTestRecord__uType : ::uClassType
{
};

Node_HitTestRecord__uType* Node_HitTestRecord__typeof();

void Node_HitTestRecord___ObjInit(Node_HitTestRecord* __this);
void Node_HitTestRecord__HitTestCallback(Node_HitTestRecord* __this, ::app::Fuse::HitTestResult* result);
Node_HitTestRecord* Node_HitTestRecord__New_1(::uStatic* __this);

struct Node_HitTestRecord : ::uObject
{
    ::uStrong< ::app::Fuse::Node*> Node;

    void _ObjInit() { Node_HitTestRecord___ObjInit(this); }
    void HitTestCallback(::app::Fuse::HitTestResult* result) { Node_HitTestRecord__HitTestCallback(this, result); }
};

}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_SELECTION_QUERY_H__
#define __APP_FUSE_INPUT_SELECTION_QUERY_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct HitTestResult; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Input {

struct SelectionQuery;

struct SelectionQuery__uType : ::uClassType
{
};

SelectionQuery__uType* SelectionQuery__typeof();

void SelectionQuery___ObjInit(SelectionQuery* __this);
SelectionQuery* SelectionQuery__New_1(::uStatic* __this);
void SelectionQuery__Select(SelectionQuery* __this, ::app::Fuse::HitTestResult* result);
::app::Fuse::HitTestResult* SelectionQuery__Select_1(SelectionQuery* __this, ::app::Fuse::Node* root, ::app::Uno::Float2 point);

struct SelectionQuery : ::uObject
{
    ::uStrong< ::app::Fuse::HitTestResult*> _result;
    int count;

    void _ObjInit() { SelectionQuery___ObjInit(this); }
    void Select(::app::Fuse::HitTestResult* result) { SelectionQuery__Select(this, result); }
    ::app::Fuse::HitTestResult* Select_1(::app::Fuse::Node* root, ::app::Uno::Float2 point);
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Input {

inline ::app::Fuse::HitTestResult* SelectionQuery::Select_1(::app::Fuse::Node* root, ::app::Uno::Float2 point) { return SelectionQuery__Select_1(this, root, point); }

}}}


#endif

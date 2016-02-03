// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\WebView\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct HTML;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class HTML :36
// {
uType* HTML_typeof();
void HTML__ctor__fn(HTML* __this);
void HTML__New1_fn(HTML** __retval);
void HTML__get_Source_fn(HTML* __this, uString** __retval);
void HTML__set_Source_fn(HTML* __this, uString* value);

struct HTML : uObject
{
    uStrong<uObject*> WebView;

    void ctor_();
    uString* Source();
    void Source(uString* value);
    static HTML* New1();
};
// }

}}} // ::g::Fuse::Controls

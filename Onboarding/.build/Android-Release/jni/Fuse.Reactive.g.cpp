// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Reactive.JSFileSource.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Stream.h>
#include <Uno.String.h>

namespace g{
namespace Fuse{
namespace Reactive{

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno(1887)
// ------------------------------------------------------------

// internal sealed class JSFileSource :1887
// {
::g::Uno::UX::FileSource_type* JSFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(JSFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Fuse.Reactive.JSFileSource", options);
    type->SetBase(::g::Uno::UX::FileSource_typeof());
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))JSFileSource__OpenRead_fn;
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::JSFileSource, _path), 0);
    return type;
}

// public override sealed Uno.IO.Stream OpenRead() :1896
void JSFileSource__OpenRead_fn(JSFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    return *__retval = ::g::Uno::IO::File::OpenRead(__this->_path), void();
}
// }

}}} // ::g::Fuse::Reactive

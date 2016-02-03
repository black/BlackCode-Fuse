// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Stage;}}
namespace g{namespace Fuse{struct UpdateListener;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{

// internal sealed class Stage :6604
// {
uType* Stage_typeof();
void Stage__ctor__fn(Stage* __this, int* _updateStage);
void Stage__Insert_fn(Stage* __this, ::g::Uno::Collections::List* list, ::g::Fuse::UpdateListener* us);
void Stage__New1_fn(int* _updateStage, Stage** __retval);

struct Stage : uObject
{
    bool HasListenersRemoved;
    uStrong< ::g::Uno::Collections::List*> Listeners;
    uStrong< ::g::Uno::Collections::List*> Onces;
    uStrong< ::g::Uno::Collections::List*> OncesPending;
    int UpdateStage;

    void ctor_(int _updateStage);
    void Insert(::g::Uno::Collections::List* list, ::g::Fuse::UpdateListener* us);
    static Stage* New1(int _updateStage);
};
// }

}} // ::g::Fuse

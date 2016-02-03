#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.AnimatorState.h>
#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.IMixer.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Transform.h>
#include <app/Fuse.Animations.MixOp.h>
#include <app/Fuse.Animations.TrackAnimator.h>
#include <app/Fuse.Animations.TransformAnimator__Fuse_Rotation.h>
#include <app/Fuse.Animations.TransformAnimator__Fuse_Scaling.h>
#include <app/Fuse.Animations.TransformAnimator__Fuse_Shear.h>
#include <app/Fuse.Animations.TransformAnimator__Fuse_Translation.h>
#include <app/Fuse.Animations.TransformAnimatorState__Fuse_Rotation.h>
#include <app/Fuse.Animations.TransformAnimatorState__Fuse_Scaling.h>
#include <app/Fuse.Animations.TransformAnimatorState__Fuse_Shear.h>
#include <app/Fuse.Animations.TransformAnimatorState__Fuse_Translation.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Rotation.h>
#include <app/Fuse.Scaling.h>
#include <app/Fuse.Shear.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Translation.h>
#include <app/Uno.Action__Fuse_Transform.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Animations {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TransformAnimatorState__Fuse_Rotation__uType* TransformAnimatorState__Fuse_Rotation__typeof()
{
    static ::uStaticStrong<TransformAnimatorState__Fuse_Rotation__uType*> type;
    if (type != NULL) return type;

    type = (TransformAnimatorState__Fuse_Rotation__uType*)::uAllocClassType(sizeof(TransformAnimatorState__Fuse_Rotation__uType), "Fuse.Animations.TransformAnimatorState<Fuse.Rotation>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))TransformAnimatorState__Fuse_Rotation__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))TransformAnimatorState__Fuse_Rotation__SeekValue;

    type->SetStrongRefs(
        "_matAct", offsetof(TransformAnimatorState__Fuse_Rotation, _matAct),
        "Animator", offsetof(TransformAnimatorState__Fuse_Rotation, Animator_1),
        "mixHandle", offsetof(TransformAnimatorState__Fuse_Rotation, mixHandle),
        "transform", offsetof(TransformAnimatorState__Fuse_Rotation, transform));

    return type;
}

void TransformAnimatorState__Fuse_Rotation___ObjInit_2(TransformAnimatorState__Fuse_Rotation* __this, ::app::Fuse::Animations::TransformAnimator__Fuse_Rotation* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    __this->transform = ::app::Fuse::Rotation__New_1(NULL);
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Rotation*>(animator)->Target());
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::RegisterTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Rotation*>(__this->Animator_1)->Mixer), __this->Node, ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Rotation*>(__this->Animator_1)->MixOp(), ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Rotation*>(__this->Animator_1)->Priority());
    __this->_matAct = ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Transform__typeof(), (const void*)TransformAnimatorState__Fuse_Rotation__OnMatrixChanged, __this);
    ::uPtr< ::app::Fuse::Transform*>(::uAs< ::app::Fuse::Transform*>(__this->transform, ::app::Fuse::Transform__typeof()))->add_MatrixChanged(__this->_matAct);
}

void TransformAnimatorState__Fuse_Rotation__Disable(TransformAnimatorState__Fuse_Rotation* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
    ::uPtr< ::app::Fuse::Transform*>(::uAs< ::app::Fuse::Transform*>(__this->transform, ::app::Fuse::Transform__typeof()))->remove_MatrixChanged(__this->_matAct);
    __this->_matAct = NULL;
    __this->transform = NULL;
}

TransformAnimatorState__Fuse_Rotation* TransformAnimatorState__Fuse_Rotation__New_1(::uStatic* __this, ::app::Fuse::Animations::TransformAnimator__Fuse_Rotation* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    TransformAnimatorState__Fuse_Rotation* inst = (TransformAnimatorState__Fuse_Rotation*)::uAllocObject(sizeof(TransformAnimatorState__Fuse_Rotation), TransformAnimatorState__Fuse_Rotation__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void TransformAnimatorState__Fuse_Rotation__OnMatrixChanged(TransformAnimatorState__Fuse_Rotation* __this, ::app::Fuse::Transform* ignore)
{
    if ((!__this->_inSeek && (__this->mixHandle != NULL)) && (__this->transform != NULL))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Set(::uPtr< ::uObject*>(__this->mixHandle), (::app::Fuse::Transform*)__this->transform, __this->_lastStrength);
    }
}

void TransformAnimatorState__Fuse_Rotation__SeekValue(TransformAnimatorState__Fuse_Rotation* __this, ::app::Uno::Float4 value, float strength)
{
    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 3045);
        return;
    }

    __this->_inSeek = true;
    ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Rotation*>(__this->Animator_1)->Update(__this->Node, __this->transform, value);
    __this->_lastStrength = strength;
    ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Set(::uPtr< ::uObject*>(__this->mixHandle), (::app::Fuse::Transform*)__this->transform, __this->_lastStrength);
    __this->_inSeek = false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TransformAnimatorState__Fuse_Scaling__uType* TransformAnimatorState__Fuse_Scaling__typeof()
{
    static ::uStaticStrong<TransformAnimatorState__Fuse_Scaling__uType*> type;
    if (type != NULL) return type;

    type = (TransformAnimatorState__Fuse_Scaling__uType*)::uAllocClassType(sizeof(TransformAnimatorState__Fuse_Scaling__uType), "Fuse.Animations.TransformAnimatorState<Fuse.Scaling>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))TransformAnimatorState__Fuse_Scaling__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))TransformAnimatorState__Fuse_Scaling__SeekValue;

    type->SetStrongRefs(
        "_matAct", offsetof(TransformAnimatorState__Fuse_Scaling, _matAct),
        "Animator", offsetof(TransformAnimatorState__Fuse_Scaling, Animator_1),
        "mixHandle", offsetof(TransformAnimatorState__Fuse_Scaling, mixHandle),
        "transform", offsetof(TransformAnimatorState__Fuse_Scaling, transform));

    return type;
}

void TransformAnimatorState__Fuse_Scaling___ObjInit_2(TransformAnimatorState__Fuse_Scaling* __this, ::app::Fuse::Animations::TransformAnimator__Fuse_Scaling* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    __this->transform = ::app::Fuse::Scaling__New_1(NULL);
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Scaling*>(animator)->Target());
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::RegisterTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Scaling*>(__this->Animator_1)->Mixer), __this->Node, ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Scaling*>(__this->Animator_1)->MixOp(), ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Scaling*>(__this->Animator_1)->Priority());
    __this->_matAct = ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Transform__typeof(), (const void*)TransformAnimatorState__Fuse_Scaling__OnMatrixChanged, __this);
    ::uPtr< ::app::Fuse::Transform*>(::uAs< ::app::Fuse::Transform*>(__this->transform, ::app::Fuse::Transform__typeof()))->add_MatrixChanged(__this->_matAct);
}

void TransformAnimatorState__Fuse_Scaling__Disable(TransformAnimatorState__Fuse_Scaling* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
    ::uPtr< ::app::Fuse::Transform*>(::uAs< ::app::Fuse::Transform*>(__this->transform, ::app::Fuse::Transform__typeof()))->remove_MatrixChanged(__this->_matAct);
    __this->_matAct = NULL;
    __this->transform = NULL;
}

TransformAnimatorState__Fuse_Scaling* TransformAnimatorState__Fuse_Scaling__New_1(::uStatic* __this, ::app::Fuse::Animations::TransformAnimator__Fuse_Scaling* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    TransformAnimatorState__Fuse_Scaling* inst = (TransformAnimatorState__Fuse_Scaling*)::uAllocObject(sizeof(TransformAnimatorState__Fuse_Scaling), TransformAnimatorState__Fuse_Scaling__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void TransformAnimatorState__Fuse_Scaling__OnMatrixChanged(TransformAnimatorState__Fuse_Scaling* __this, ::app::Fuse::Transform* ignore)
{
    if ((!__this->_inSeek && (__this->mixHandle != NULL)) && (__this->transform != NULL))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Set(::uPtr< ::uObject*>(__this->mixHandle), (::app::Fuse::Transform*)__this->transform, __this->_lastStrength);
    }
}

void TransformAnimatorState__Fuse_Scaling__SeekValue(TransformAnimatorState__Fuse_Scaling* __this, ::app::Uno::Float4 value, float strength)
{
    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 3045);
        return;
    }

    __this->_inSeek = true;
    ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Scaling*>(__this->Animator_1)->Update(__this->Node, __this->transform, value);
    __this->_lastStrength = strength;
    ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Set(::uPtr< ::uObject*>(__this->mixHandle), (::app::Fuse::Transform*)__this->transform, __this->_lastStrength);
    __this->_inSeek = false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TransformAnimatorState__Fuse_Shear__uType* TransformAnimatorState__Fuse_Shear__typeof()
{
    static ::uStaticStrong<TransformAnimatorState__Fuse_Shear__uType*> type;
    if (type != NULL) return type;

    type = (TransformAnimatorState__Fuse_Shear__uType*)::uAllocClassType(sizeof(TransformAnimatorState__Fuse_Shear__uType), "Fuse.Animations.TransformAnimatorState<Fuse.Shear>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))TransformAnimatorState__Fuse_Shear__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))TransformAnimatorState__Fuse_Shear__SeekValue;

    type->SetStrongRefs(
        "_matAct", offsetof(TransformAnimatorState__Fuse_Shear, _matAct),
        "Animator", offsetof(TransformAnimatorState__Fuse_Shear, Animator_1),
        "mixHandle", offsetof(TransformAnimatorState__Fuse_Shear, mixHandle),
        "transform", offsetof(TransformAnimatorState__Fuse_Shear, transform));

    return type;
}

void TransformAnimatorState__Fuse_Shear___ObjInit_2(TransformAnimatorState__Fuse_Shear* __this, ::app::Fuse::Animations::TransformAnimator__Fuse_Shear* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    __this->transform = ::app::Fuse::Shear__New_1(NULL);
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Shear*>(animator)->Target());
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::RegisterTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Shear*>(__this->Animator_1)->Mixer), __this->Node, ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Shear*>(__this->Animator_1)->MixOp(), ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Shear*>(__this->Animator_1)->Priority());
    __this->_matAct = ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Transform__typeof(), (const void*)TransformAnimatorState__Fuse_Shear__OnMatrixChanged, __this);
    ::uPtr< ::app::Fuse::Transform*>(::uAs< ::app::Fuse::Transform*>(__this->transform, ::app::Fuse::Transform__typeof()))->add_MatrixChanged(__this->_matAct);
}

void TransformAnimatorState__Fuse_Shear__Disable(TransformAnimatorState__Fuse_Shear* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
    ::uPtr< ::app::Fuse::Transform*>(::uAs< ::app::Fuse::Transform*>(__this->transform, ::app::Fuse::Transform__typeof()))->remove_MatrixChanged(__this->_matAct);
    __this->_matAct = NULL;
    __this->transform = NULL;
}

TransformAnimatorState__Fuse_Shear* TransformAnimatorState__Fuse_Shear__New_1(::uStatic* __this, ::app::Fuse::Animations::TransformAnimator__Fuse_Shear* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    TransformAnimatorState__Fuse_Shear* inst = (TransformAnimatorState__Fuse_Shear*)::uAllocObject(sizeof(TransformAnimatorState__Fuse_Shear), TransformAnimatorState__Fuse_Shear__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void TransformAnimatorState__Fuse_Shear__OnMatrixChanged(TransformAnimatorState__Fuse_Shear* __this, ::app::Fuse::Transform* ignore)
{
    if ((!__this->_inSeek && (__this->mixHandle != NULL)) && (__this->transform != NULL))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Set(::uPtr< ::uObject*>(__this->mixHandle), (::app::Fuse::Transform*)__this->transform, __this->_lastStrength);
    }
}

void TransformAnimatorState__Fuse_Shear__SeekValue(TransformAnimatorState__Fuse_Shear* __this, ::app::Uno::Float4 value, float strength)
{
    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 3045);
        return;
    }

    __this->_inSeek = true;
    ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Shear*>(__this->Animator_1)->Update(__this->Node, __this->transform, value);
    __this->_lastStrength = strength;
    ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Set(::uPtr< ::uObject*>(__this->mixHandle), (::app::Fuse::Transform*)__this->transform, __this->_lastStrength);
    __this->_inSeek = false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TransformAnimatorState__Fuse_Translation__uType* TransformAnimatorState__Fuse_Translation__typeof()
{
    static ::uStaticStrong<TransformAnimatorState__Fuse_Translation__uType*> type;
    if (type != NULL) return type;

    type = (TransformAnimatorState__Fuse_Translation__uType*)::uAllocClassType(sizeof(TransformAnimatorState__Fuse_Translation__uType), "Fuse.Animations.TransformAnimatorState<Fuse.Translation>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))TransformAnimatorState__Fuse_Translation__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))TransformAnimatorState__Fuse_Translation__SeekValue;

    type->SetStrongRefs(
        "_matAct", offsetof(TransformAnimatorState__Fuse_Translation, _matAct),
        "Animator", offsetof(TransformAnimatorState__Fuse_Translation, Animator_1),
        "mixHandle", offsetof(TransformAnimatorState__Fuse_Translation, mixHandle),
        "transform", offsetof(TransformAnimatorState__Fuse_Translation, transform));

    return type;
}

void TransformAnimatorState__Fuse_Translation___ObjInit_2(TransformAnimatorState__Fuse_Translation* __this, ::app::Fuse::Animations::TransformAnimator__Fuse_Translation* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    __this->transform = ::app::Fuse::Translation__New_1(NULL);
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Translation*>(animator)->Target());
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::RegisterTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Translation*>(__this->Animator_1)->Mixer), __this->Node, ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Translation*>(__this->Animator_1)->MixOp(), ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Translation*>(__this->Animator_1)->Priority());
    __this->_matAct = ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Transform__typeof(), (const void*)TransformAnimatorState__Fuse_Translation__OnMatrixChanged, __this);
    ::uPtr< ::app::Fuse::Transform*>(::uAs< ::app::Fuse::Transform*>(__this->transform, ::app::Fuse::Transform__typeof()))->add_MatrixChanged(__this->_matAct);
}

void TransformAnimatorState__Fuse_Translation__Disable(TransformAnimatorState__Fuse_Translation* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
    ::uPtr< ::app::Fuse::Transform*>(::uAs< ::app::Fuse::Transform*>(__this->transform, ::app::Fuse::Transform__typeof()))->remove_MatrixChanged(__this->_matAct);
    __this->_matAct = NULL;
    __this->transform = NULL;
}

TransformAnimatorState__Fuse_Translation* TransformAnimatorState__Fuse_Translation__New_1(::uStatic* __this, ::app::Fuse::Animations::TransformAnimator__Fuse_Translation* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    TransformAnimatorState__Fuse_Translation* inst = (TransformAnimatorState__Fuse_Translation*)::uAllocObject(sizeof(TransformAnimatorState__Fuse_Translation), TransformAnimatorState__Fuse_Translation__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void TransformAnimatorState__Fuse_Translation__OnMatrixChanged(TransformAnimatorState__Fuse_Translation* __this, ::app::Fuse::Transform* ignore)
{
    if ((!__this->_inSeek && (__this->mixHandle != NULL)) && (__this->transform != NULL))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Set(::uPtr< ::uObject*>(__this->mixHandle), (::app::Fuse::Transform*)__this->transform, __this->_lastStrength);
    }
}

void TransformAnimatorState__Fuse_Translation__SeekValue(TransformAnimatorState__Fuse_Translation* __this, ::app::Uno::Float4 value, float strength)
{
    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 3045);
        return;
    }

    __this->_inSeek = true;
    ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Translation*>(__this->Animator_1)->Update(__this->Node, __this->transform, value);
    __this->_lastStrength = strength;
    ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Set(::uPtr< ::uObject*>(__this->mixHandle), (::app::Fuse::Transform*)__this->transform, __this->_lastStrength);
    __this->_inSeek = false;
}

}}}

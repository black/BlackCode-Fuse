// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRANSFORM_H__
#define __APP_FUSE_TRANSFORM_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct FastMatrix; } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {

struct Transform;

struct Transform__uType : ::uClassType
{
    void(*__fp_AppendTo)(Transform*, ::app::Fuse::FastMatrix*, float);
    bool(*__fp_get_IsFlat)(Transform*);
    void(*__fp_OnAdded)(Transform*, ::app::Fuse::Node*);
    void(*__fp_OnRemoved)(Transform*, ::app::Fuse::Node*);
    void(*__fp_PrependTo)(Transform*, ::app::Fuse::FastMatrix*);
};

Transform__uType* Transform__typeof();

void Transform___ObjInit(Transform* __this);
void Transform__add_MatrixChanged(Transform* __this, ::uDelegate* value);
void Transform__Added(Transform* __this, ::app::Fuse::Node* n);
void Transform__OnAdded(Transform* __this, ::app::Fuse::Node* n);
void Transform__OnMatrixChanged(Transform* __this);
void Transform__OnRemoved(Transform* __this, ::app::Fuse::Node* n);
void Transform__remove_MatrixChanged(Transform* __this, ::uDelegate* value);
void Transform__Removed(Transform* __this, ::app::Fuse::Node* n);

struct Transform : ::uObject
{
    bool AddedByStyle;
    ::uStrong< ::uDelegate*> MatrixChanged;

    void _ObjInit() { Transform___ObjInit(this); }
    void add_MatrixChanged(::uDelegate* value) { Transform__add_MatrixChanged(this, value); }
    void Added(::app::Fuse::Node* n) { Transform__Added(this, n); }
    void AppendTo(::app::Fuse::FastMatrix* matrix, float weight) { (((Transform__uType*)this->__obj_type)->__fp_AppendTo)(this, matrix, weight); }
    bool IsFlat() { return (((Transform__uType*)this->__obj_type)->__fp_get_IsFlat)(this); }
    void OnAdded(::app::Fuse::Node* n) { (((Transform__uType*)this->__obj_type)->__fp_OnAdded)(this, n); }
    void OnMatrixChanged() { Transform__OnMatrixChanged(this); }
    void OnRemoved(::app::Fuse::Node* n) { (((Transform__uType*)this->__obj_type)->__fp_OnRemoved)(this, n); }
    void PrependTo(::app::Fuse::FastMatrix* matrix) { (((Transform__uType*)this->__obj_type)->__fp_PrependTo)(this, matrix); }
    void remove_MatrixChanged(::uDelegate* value) { Transform__remove_MatrixChanged(this, value); }
    void Removed(::app::Fuse::Node* n) { Transform__Removed(this, n); }
};

}}


#endif

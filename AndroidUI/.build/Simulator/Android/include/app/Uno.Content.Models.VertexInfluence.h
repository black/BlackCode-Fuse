// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_VERTEX_INFLUENCE_H__
#define __APP_UNO_CONTENT_MODELS_VERTEX_INFLUENCE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct VertexInfluence;

struct VertexInfluence__uType : ::uClassType
{
};

VertexInfluence__uType* VertexInfluence__typeof();

void VertexInfluence___ObjInit(VertexInfluence* __this, ::uArray* indices, ::uArray* weights);
int VertexInfluence__get_InfluenceCount(VertexInfluence* __this);
int VertexInfluence__GetBoneIndex(VertexInfluence* __this, int i);
float VertexInfluence__GetBoneWeight(VertexInfluence* __this, int i);
VertexInfluence* VertexInfluence__New_1(::uStatic* __this, ::uArray* indices, ::uArray* weights);

struct VertexInfluence : ::uObject
{
    ::uStrong< ::uArray*> _boneIndices;
    ::uStrong< ::uArray*> _boneWeights;

    void _ObjInit(::uArray* indices, ::uArray* weights) { VertexInfluence___ObjInit(this, indices, weights); }
    int InfluenceCount() { return VertexInfluence__get_InfluenceCount(this); }
    int GetBoneIndex(int i) { return VertexInfluence__GetBoneIndex(this, i); }
    float GetBoneWeight(int i) { return VertexInfluence__GetBoneWeight(this, i); }
};

}}}}


#endif

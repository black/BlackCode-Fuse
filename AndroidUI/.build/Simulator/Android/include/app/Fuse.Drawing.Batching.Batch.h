// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_BATCHING_BATCH_H__
#define __APP_FUSE_DRAWING_BATCHING_BATCH_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct BatchIndexBuffer; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct BatchVertexBuffer; } } } }
namespace app { namespace Uno { namespace Graphics { struct IndexBuffer; } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Batching {

struct Batch;

struct Batch__uType : ::uClassType
{
};

Batch__uType* Batch__typeof();

void Batch___ObjInit(Batch* __this, int maxVertices, int maxIndices, bool staticBatch);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Attrib0Buffer(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Attrib1Buffer(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Attrib2Buffer(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Attrib3Buffer(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Attrib4Buffer(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Attrib5Buffer(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Attrib6Buffer(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Attrib7Buffer(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Binormals(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_BoneIndexBuffer(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_BoneWeightBuffer(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Colors(Batch* __this);
::app::Uno::Graphics::IndexBuffer* Batch__get_IndexBuffer(Batch* __this);
int Batch__get_IndexType(Batch* __this);
::app::Fuse::Drawing::Batching::BatchIndexBuffer* Batch__get_Indices(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_InstanceIndices(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Normals(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Positions(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Tangents(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord0s(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord1s(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord2s(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord3s(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord4s(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord5s(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord6s(Batch* __this);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord7s(Batch* __this);
int Batch__get_VertexCount(Batch* __this);
Batch* Batch__New_1(::uStatic* __this, int maxVertices, int maxIndices, bool staticBatch);
void Batch__set_Attrib0Buffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_Attrib1Buffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_Attrib2Buffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_Attrib3Buffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_Attrib4Buffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_Attrib5Buffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_Attrib6Buffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_Attrib7Buffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_Binormals(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_BoneIndexBuffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_BoneWeightBuffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_Colors(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_Indices(Batch* __this, ::app::Fuse::Drawing::Batching::BatchIndexBuffer* value);
void Batch__set_InstanceIndices(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_Normals(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_Positions(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_Tangents(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_TexCoord0s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_TexCoord1s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_TexCoord2s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_TexCoord3s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_TexCoord4s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_TexCoord5s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_TexCoord6s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_TexCoord7s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__set_VertexCount(Batch* __this, int value);

struct Batch : ::uObject
{
    int maxVertices;
    int maxIndices;
    bool staticBatch;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> positions;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord0s;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord1s;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord2s;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord3s;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord4s;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord5s;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord6s;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord7s;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> normals;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> binormals;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> tangents;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> colors;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> instanceIndex;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> boneIndices;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> boneWeights;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> attrib0;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> attrib1;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> attrib2;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> attrib3;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> attrib4;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> attrib5;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> attrib6;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> attrib7;
    bool hasExplicitVertexCount;
    int explicitVertexCount;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchIndexBuffer*> indexBuffer;

    void _ObjInit(int maxVertices, int maxIndices, bool staticBatch) { Batch___ObjInit(this, maxVertices, maxIndices, staticBatch); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* Attrib0Buffer() { return Batch__get_Attrib0Buffer(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* Attrib1Buffer() { return Batch__get_Attrib1Buffer(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* Attrib2Buffer() { return Batch__get_Attrib2Buffer(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* Attrib3Buffer() { return Batch__get_Attrib3Buffer(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* Attrib4Buffer() { return Batch__get_Attrib4Buffer(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* Attrib5Buffer() { return Batch__get_Attrib5Buffer(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* Attrib6Buffer() { return Batch__get_Attrib6Buffer(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* Attrib7Buffer() { return Batch__get_Attrib7Buffer(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* Binormals() { return Batch__get_Binormals(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* BoneIndexBuffer() { return Batch__get_BoneIndexBuffer(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* BoneWeightBuffer() { return Batch__get_BoneWeightBuffer(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* Colors() { return Batch__get_Colors(this); }
    ::app::Uno::Graphics::IndexBuffer* IndexBuffer() { return Batch__get_IndexBuffer(this); }
    int IndexType() { return Batch__get_IndexType(this); }
    ::app::Fuse::Drawing::Batching::BatchIndexBuffer* Indices() { return Batch__get_Indices(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* InstanceIndices() { return Batch__get_InstanceIndices(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* Normals() { return Batch__get_Normals(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* Positions() { return Batch__get_Positions(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* Tangents() { return Batch__get_Tangents(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord0s() { return Batch__get_TexCoord0s(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord1s() { return Batch__get_TexCoord1s(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord2s() { return Batch__get_TexCoord2s(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord3s() { return Batch__get_TexCoord3s(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord4s() { return Batch__get_TexCoord4s(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord5s() { return Batch__get_TexCoord5s(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord6s() { return Batch__get_TexCoord6s(this); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord7s() { return Batch__get_TexCoord7s(this); }
    int VertexCount() { return Batch__get_VertexCount(this); }
    void Attrib0Buffer(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_Attrib0Buffer(this, value); }
    void Attrib1Buffer(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_Attrib1Buffer(this, value); }
    void Attrib2Buffer(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_Attrib2Buffer(this, value); }
    void Attrib3Buffer(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_Attrib3Buffer(this, value); }
    void Attrib4Buffer(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_Attrib4Buffer(this, value); }
    void Attrib5Buffer(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_Attrib5Buffer(this, value); }
    void Attrib6Buffer(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_Attrib6Buffer(this, value); }
    void Attrib7Buffer(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_Attrib7Buffer(this, value); }
    void Binormals(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_Binormals(this, value); }
    void BoneIndexBuffer(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_BoneIndexBuffer(this, value); }
    void BoneWeightBuffer(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_BoneWeightBuffer(this, value); }
    void Colors(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_Colors(this, value); }
    void Indices(::app::Fuse::Drawing::Batching::BatchIndexBuffer* value) { Batch__set_Indices(this, value); }
    void InstanceIndices(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_InstanceIndices(this, value); }
    void Normals(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_Normals(this, value); }
    void Positions(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_Positions(this, value); }
    void Tangents(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_Tangents(this, value); }
    void TexCoord0s(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_TexCoord0s(this, value); }
    void TexCoord1s(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_TexCoord1s(this, value); }
    void TexCoord2s(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_TexCoord2s(this, value); }
    void TexCoord3s(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_TexCoord3s(this, value); }
    void TexCoord4s(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_TexCoord4s(this, value); }
    void TexCoord5s(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_TexCoord5s(this, value); }
    void TexCoord6s(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_TexCoord6s(this, value); }
    void TexCoord7s(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_TexCoord7s(this, value); }
    void VertexCount(int value) { Batch__set_VertexCount(this, value); }
};

}}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_PSG_READER_INTERNAL_H__
#define __APP_UNO_CONTENT_MODELS_PSG_READER_INTERNAL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Models_ModelDrawable; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct Model; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelMaterial; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelMesh; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelNode; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameter; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameter__float; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameter__float2; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameter__float3; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameter__float4; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameter__float4x4; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameterAnimation__float; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameterAnimation__float2; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameterAnimation__float3; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameterAnimation__float4; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameterAnimation__float4x4; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameterList__float; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameterList__float2; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameterList__float3; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameterList__float4; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameterList__float4x4; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameterList__string; } } } }
namespace app { namespace Uno { namespace Content { namespace Splines { struct FullsampledSpline__float; } } } }
namespace app { namespace Uno { namespace Content { namespace Splines { struct FullsampledSpline__float2; } } } }
namespace app { namespace Uno { namespace Content { namespace Splines { struct FullsampledSpline__float3; } } } }
namespace app { namespace Uno { namespace Content { namespace Splines { struct FullsampledSpline__float4; } } } }
namespace app { namespace Uno { namespace Content { namespace Splines { struct FullsampledSpline__float4x4; } } } }
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float__float; } } } }
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float2__float2; } } } }
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float3__float3; } } } }
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float4__float4; } } } }
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float4x4__float4x4; } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct BufferReader; } } } } }
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct PsgReaderInternal;

struct PsgReaderInternal__uType : ::uClassType
{
};

PsgReaderInternal__uType* PsgReaderInternal__typeof();

void PsgReaderInternal___ObjInit(PsgReaderInternal* __this, ::app::Uno::Buffer* buffer);
PsgReaderInternal* PsgReaderInternal__New_1(::uStatic* __this, ::app::Uno::Buffer* buffer);
::uArray* PsgReaderInternal__ReadAnimationKeys__float(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readValue);
::uArray* PsgReaderInternal__ReadAnimationKeys__float2(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readValue);
::uArray* PsgReaderInternal__ReadAnimationKeys__float3(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readValue);
::uArray* PsgReaderInternal__ReadAnimationKeys__float4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readValue);
::uArray* PsgReaderInternal__ReadAnimationKeys__float4x4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readValue);
::uObject* PsgReaderInternal__ReadAnimationLinearSpline(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readKey);
::app::Uno::Content::Splines::FullsampledSpline__float* PsgReaderInternal__ReadAnimationSampledSpline__float(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readKey);
::app::Uno::Content::Splines::FullsampledSpline__float2* PsgReaderInternal__ReadAnimationSampledSpline__float2(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readKey);
::app::Uno::Content::Splines::FullsampledSpline__float3* PsgReaderInternal__ReadAnimationSampledSpline__float3(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readKey);
::app::Uno::Content::Splines::FullsampledSpline__float4* PsgReaderInternal__ReadAnimationSampledSpline__float4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readKey);
::app::Uno::Content::Splines::FullsampledSpline__float4x4* PsgReaderInternal__ReadAnimationSampledSpline__float4x4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readKey);
void PsgReaderInternal__ReadBlocks(PsgReaderInternal* __this);
void PsgReaderInternal__ReadBufferList(PsgReaderInternal* __this);
void PsgReaderInternal__ReadHeader(PsgReaderInternal* __this);
::app::Uno::Content::Models::ModelMaterial* PsgReaderInternal__ReadMaterial(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, ::uArray* parameters);
void PsgReaderInternal__ReadMaterialList(PsgReaderInternal* __this);
::app::Uno::Content::Models::ModelMesh* PsgReaderInternal__ReadMesh(PsgReaderInternal* __this);
void PsgReaderInternal__ReadMeshList(PsgReaderInternal* __this);
::app::Uno::Content::Models::Model* PsgReaderInternal__ReadModel(PsgReaderInternal* __this);
void PsgReaderInternal__ReadNodes(PsgReaderInternal* __this);
::app::Uno::Content::Models::ModelParameter* PsgReaderInternal__ReadParameter(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, ::uArray* parameters);
::app::Uno::Content::Models::ModelParameter__float* PsgReaderInternal__ReadParameter__float(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int valueType, int valueStride, ::uDelegate* readValue);
::app::Uno::Content::Models::ModelParameter__float2* PsgReaderInternal__ReadParameter__float2(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int valueType, int valueStride, ::uDelegate* readValue);
::app::Uno::Content::Models::ModelParameter__float3* PsgReaderInternal__ReadParameter__float3(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int valueType, int valueStride, ::uDelegate* readValue);
::app::Uno::Content::Models::ModelParameter__float4* PsgReaderInternal__ReadParameter__float4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int valueType, int valueStride, ::uDelegate* readValue);
::app::Uno::Content::Models::ModelParameter__float4x4* PsgReaderInternal__ReadParameter__float4x4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int valueType, int valueStride, ::uDelegate* readValue);
::app::Uno::Content::Models::ModelParameterAnimation__float* PsgReaderInternal__ReadParameterAnimation__float(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyType, int keyStride, ::uDelegate* readKey);
::app::Uno::Content::Models::ModelParameterAnimation__float2* PsgReaderInternal__ReadParameterAnimation__float2(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyType, int keyStride, ::uDelegate* readKey);
::app::Uno::Content::Models::ModelParameterAnimation__float3* PsgReaderInternal__ReadParameterAnimation__float3(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyType, int keyStride, ::uDelegate* readKey);
::app::Uno::Content::Models::ModelParameterAnimation__float4* PsgReaderInternal__ReadParameterAnimation__float4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyType, int keyStride, ::uDelegate* readKey);
::app::Uno::Content::Models::ModelParameterAnimation__float4x4* PsgReaderInternal__ReadParameterAnimation__float4x4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyType, int keyStride, ::uDelegate* readKey);
void PsgReaderInternal__ReadParameterList(PsgReaderInternal* __this);
::app::Uno::Content::Models::ModelParameterList__float* PsgReaderInternal__ReadParameterList__float(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, ::uArray* parameters, int itemType);
::app::Uno::Content::Models::ModelParameterList__float2* PsgReaderInternal__ReadParameterList__float2(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, ::uArray* parameters, int itemType);
::app::Uno::Content::Models::ModelParameterList__float3* PsgReaderInternal__ReadParameterList__float3(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, ::uArray* parameters, int itemType);
::app::Uno::Content::Models::ModelParameterList__float4* PsgReaderInternal__ReadParameterList__float4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, ::uArray* parameters, int itemType);
::app::Uno::Content::Models::ModelParameterList__float4x4* PsgReaderInternal__ReadParameterList__float4x4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, ::uArray* parameters, int itemType);
::app::Uno::Content::Models::ModelParameterList__string* PsgReaderInternal__ReadParameterList__string(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, ::uArray* parameters, int itemType);

struct PsgReaderInternal : ::uObject
{
    ::uStrong< ::app::Uno::Buffer*> _buffer;
    ::uStrong< ::app::Uno::Runtime::Implementation::Internal::BufferReader*> r;
    ::uStrong< ::uString*> _name;
    ::uStrong< ::uArray*> _bufferOffsets;
    ::uStrong< ::uArray*> _meshes;
    ::uStrong< ::uArray*> _parameters;
    ::uStrong< ::uArray*> _materials;
    ::uStrong< ::uArray*> _nodes;
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable*> _drawables;
    int _rootNodeIndex;

    void _ObjInit(::app::Uno::Buffer* buffer) { PsgReaderInternal___ObjInit(this, buffer); }
    void ReadBlocks() { PsgReaderInternal__ReadBlocks(this); }
    void ReadBufferList() { PsgReaderInternal__ReadBufferList(this); }
    void ReadHeader() { PsgReaderInternal__ReadHeader(this); }
    void ReadMaterialList() { PsgReaderInternal__ReadMaterialList(this); }
    ::app::Uno::Content::Models::ModelMesh* ReadMesh() { return PsgReaderInternal__ReadMesh(this); }
    void ReadMeshList() { PsgReaderInternal__ReadMeshList(this); }
    ::app::Uno::Content::Models::Model* ReadModel() { return PsgReaderInternal__ReadModel(this); }
    void ReadNodes() { PsgReaderInternal__ReadNodes(this); }
    void ReadParameterList() { PsgReaderInternal__ReadParameterList(this); }
};

}}}}


#endif

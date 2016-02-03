// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_DEFAULT_MATERIAL_H__
#define __APP_FUSE_ENTITIES_DEFAULT_MATERIAL_H__

#include <app/Fuse.Entities.Material.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct DefaultMaterial;

struct DefaultMaterial__uType : ::app::Fuse::Entities::Material__uType
{
};

DefaultMaterial__uType* DefaultMaterial__typeof();

void DefaultMaterial___ObjInit_1(DefaultMaterial* __this);
::app::Uno::Float3 DefaultMaterial__get_DiffuseColor(DefaultMaterial* __this);
::app::Uno::Graphics::Texture2D* DefaultMaterial__get_DiffuseMap(DefaultMaterial* __this);
::app::Uno::Float3 DefaultMaterial__get_EmissiveColor(DefaultMaterial* __this);
::app::Uno::Graphics::Texture2D* DefaultMaterial__get_EmissiveMap(DefaultMaterial* __this);
bool DefaultMaterial__get_IsEmissive(DefaultMaterial* __this);
::app::Uno::Graphics::Texture2D* DefaultMaterial__get_NormalMap(DefaultMaterial* __this);
::app::Uno::Float2 DefaultMaterial__get_Offset(DefaultMaterial* __this);
float DefaultMaterial__get_Shininess(DefaultMaterial* __this);
::app::Uno::Float3 DefaultMaterial__get_SpecularColor(DefaultMaterial* __this);
::app::Uno::Graphics::Texture2D* DefaultMaterial__get_SpecularMap(DefaultMaterial* __this);
::app::Uno::Float2 DefaultMaterial__get_Tiling(DefaultMaterial* __this);
DefaultMaterial* DefaultMaterial__New_1(::uStatic* __this);
void DefaultMaterial__set_DiffuseColor(DefaultMaterial* __this, ::app::Uno::Float3 value);
void DefaultMaterial__set_DiffuseMap(DefaultMaterial* __this, ::app::Uno::Graphics::Texture2D* value);
void DefaultMaterial__set_EmissiveColor(DefaultMaterial* __this, ::app::Uno::Float3 value);
void DefaultMaterial__set_EmissiveMap(DefaultMaterial* __this, ::app::Uno::Graphics::Texture2D* value);
void DefaultMaterial__set_IsEmissive(DefaultMaterial* __this, bool value);
void DefaultMaterial__set_NormalMap(DefaultMaterial* __this, ::app::Uno::Graphics::Texture2D* value);
void DefaultMaterial__set_Offset(DefaultMaterial* __this, ::app::Uno::Float2 value);
void DefaultMaterial__set_Shininess(DefaultMaterial* __this, float value);
void DefaultMaterial__set_SpecularColor(DefaultMaterial* __this, ::app::Uno::Float3 value);
void DefaultMaterial__set_SpecularMap(DefaultMaterial* __this, ::app::Uno::Graphics::Texture2D* value);
void DefaultMaterial__set_Tiling(DefaultMaterial* __this, ::app::Uno::Float2 value);

struct DefaultMaterial : ::app::Fuse::Entities::Material
{
    ::app::Uno::Float3 _DiffuseColor;
    ::app::Uno::Float3 _SpecularColor;
    float _Shininess;
    ::app::Uno::Float2 _Tiling;
    ::app::Uno::Float2 _Offset;
    bool _IsEmissive;
    ::app::Uno::Float3 _EmissiveColor;
    ::uStrong< ::app::Uno::Graphics::Texture2D*> _DiffuseMap;
    ::uStrong< ::app::Uno::Graphics::Texture2D*> _NormalMap;
    ::uStrong< ::app::Uno::Graphics::Texture2D*> _SpecularMap;
    ::uStrong< ::app::Uno::Graphics::Texture2D*> _EmissiveMap;

    void _ObjInit_1() { DefaultMaterial___ObjInit_1(this); }
    ::app::Uno::Float3 DiffuseColor() { return DefaultMaterial__get_DiffuseColor(this); }
    ::app::Uno::Graphics::Texture2D* DiffuseMap() { return DefaultMaterial__get_DiffuseMap(this); }
    ::app::Uno::Float3 EmissiveColor() { return DefaultMaterial__get_EmissiveColor(this); }
    ::app::Uno::Graphics::Texture2D* EmissiveMap() { return DefaultMaterial__get_EmissiveMap(this); }
    bool IsEmissive() { return DefaultMaterial__get_IsEmissive(this); }
    ::app::Uno::Graphics::Texture2D* NormalMap() { return DefaultMaterial__get_NormalMap(this); }
    ::app::Uno::Float2 Offset() { return DefaultMaterial__get_Offset(this); }
    float Shininess() { return DefaultMaterial__get_Shininess(this); }
    ::app::Uno::Float3 SpecularColor() { return DefaultMaterial__get_SpecularColor(this); }
    ::app::Uno::Graphics::Texture2D* SpecularMap() { return DefaultMaterial__get_SpecularMap(this); }
    ::app::Uno::Float2 Tiling() { return DefaultMaterial__get_Tiling(this); }
    void DiffuseColor(::app::Uno::Float3 value) { DefaultMaterial__set_DiffuseColor(this, value); }
    void DiffuseMap(::app::Uno::Graphics::Texture2D* value) { DefaultMaterial__set_DiffuseMap(this, value); }
    void EmissiveColor(::app::Uno::Float3 value) { DefaultMaterial__set_EmissiveColor(this, value); }
    void EmissiveMap(::app::Uno::Graphics::Texture2D* value) { DefaultMaterial__set_EmissiveMap(this, value); }
    void IsEmissive(bool value) { DefaultMaterial__set_IsEmissive(this, value); }
    void NormalMap(::app::Uno::Graphics::Texture2D* value) { DefaultMaterial__set_NormalMap(this, value); }
    void Offset(::app::Uno::Float2 value) { DefaultMaterial__set_Offset(this, value); }
    void Shininess(float value) { DefaultMaterial__set_Shininess(this, value); }
    void SpecularColor(::app::Uno::Float3 value) { DefaultMaterial__set_SpecularColor(this, value); }
    void SpecularMap(::app::Uno::Graphics::Texture2D* value) { DefaultMaterial__set_SpecularMap(this, value); }
    void Tiling(::app::Uno::Float2 value) { DefaultMaterial__set_Tiling(this, value); }
};

}}}


#endif

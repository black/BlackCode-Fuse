// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_LIGHT_H__
#define __APP_FUSE_ENTITIES_LIGHT_H__

#include <app/Fuse.Entities.Component.h>
#include <app/Uno.Float3.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct Light;

struct Light__uType : ::app::Fuse::Entities::Component__uType
{
    void(*__fp_Accept)(Light*, ::uObject*);
};

Light__uType* Light__typeof();

void Light___ObjInit_1(Light* __this);
void Light__Accept(Light* __this, ::uObject* visitor);
bool Light__get_CastShadow(Light* __this);
::app::Uno::Float3 Light__get_Color(Light* __this);
float Light__get_Multiplier(Light* __this);
float Light__get_Range(Light* __this);
float Light__get_ShadowMapDepthBias(Light* __this);
float Light__get_ShadowMapNearPlane(Light* __this);
int Light__get_ShadowMapResolution(Light* __this);
bool Light__get_ShowDesignerSprite(Light* __this);
void Light__OnAdded(Light* __this, ::app::Fuse::Entities::Entity* e);
void Light__OnRemoved(Light* __this, ::app::Fuse::Entities::Entity* e);
void Light__set_CastShadow(Light* __this, bool value);
void Light__set_Color(Light* __this, ::app::Uno::Float3 value);
void Light__set_Multiplier(Light* __this, float value);
void Light__set_Range(Light* __this, float value);
void Light__set_ShadowMapDepthBias(Light* __this, float value);
void Light__set_ShadowMapNearPlane(Light* __this, float value);
void Light__set_ShadowMapResolution(Light* __this, int value);
void Light__set_ShowDesignerSprite(Light* __this, bool value);

struct Light : ::app::Fuse::Entities::Component
{
    bool showSprite;
    float _Range;
    ::app::Uno::Float3 _Color;
    float _Multiplier;
    bool _CastShadow;
    float _ShadowMapNearPlane;
    int _ShadowMapResolution;
    float _ShadowMapDepthBias;

    void _ObjInit_1() { Light___ObjInit_1(this); }
    void Accept(::uObject* visitor) { (((Light__uType*)this->__obj_type)->__fp_Accept)(this, visitor); }
    bool CastShadow() { return Light__get_CastShadow(this); }
    ::app::Uno::Float3 Color() { return Light__get_Color(this); }
    float Multiplier() { return Light__get_Multiplier(this); }
    float Range() { return Light__get_Range(this); }
    float ShadowMapDepthBias() { return Light__get_ShadowMapDepthBias(this); }
    float ShadowMapNearPlane() { return Light__get_ShadowMapNearPlane(this); }
    int ShadowMapResolution() { return Light__get_ShadowMapResolution(this); }
    bool ShowDesignerSprite() { return Light__get_ShowDesignerSprite(this); }
    void CastShadow(bool value) { Light__set_CastShadow(this, value); }
    void Color(::app::Uno::Float3 value) { Light__set_Color(this, value); }
    void Multiplier(float value) { Light__set_Multiplier(this, value); }
    void Range(float value) { Light__set_Range(this, value); }
    void ShadowMapDepthBias(float value) { Light__set_ShadowMapDepthBias(this, value); }
    void ShadowMapNearPlane(float value) { Light__set_ShadowMapNearPlane(this, value); }
    void ShadowMapResolution(int value) { Light__set_ShadowMapResolution(this, value); }
    void ShowDesignerSprite(bool value) { Light__set_ShowDesignerSprite(this, value); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_STYLE_H__
#define __APP_FUSE_BASIC_THEME_BASIC_STYLE_H__

#include <app/Fuse.Style.h>
#include <app/Uno.UX.ITemplate.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Font; } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicStyle;

extern ::uStaticStrong< ::uArray*> BasicStyle__Amber;
extern ::uStaticStrong< ::uArray*> BasicStyle__Blue;
extern ::uStaticStrong< ::uArray*> BasicStyle__BlueGrey;
extern ::uStaticStrong< ::uArray*> BasicStyle__Brown;
extern ::uStaticStrong< ::uArray*> BasicStyle__ColorCodes;
extern ::uStaticStrong< ::uArray*> BasicStyle__Cyan;
extern ::uStaticStrong< ::uArray*> BasicStyle__DeepOrange;
extern ::uStaticStrong< ::uArray*> BasicStyle__DeepPurple;
extern ::uStaticStrong< ::uArray*> BasicStyle__Green;
extern ::uStaticStrong< ::uArray*> BasicStyle__Grey;
extern ::uStaticStrong< ::uArray*> BasicStyle__Indigo;
extern ::uStaticStrong< ::uArray*> BasicStyle__LightBlue;
extern ::uStaticStrong< ::uArray*> BasicStyle__LightGreen;
extern ::uStaticStrong< ::uArray*> BasicStyle__Lime;
extern ::uStaticStrong< ::uArray*> BasicStyle__Orange;
extern ::uStaticStrong< ::uArray*> BasicStyle__Pink;
extern ::uStaticStrong< ::uArray*> BasicStyle__Purple;
extern ::uStaticStrong< ::uArray*> BasicStyle__Red;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoBlack;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoBlackItalic;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoBold;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoBoldItalic;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoCondensedBold;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoCondensedBoldItalic;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoCondensedItalic;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoCondensedLight;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoCondensedLightItalic;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoCondensedRegular;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoItalic;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoLight;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoLightItalic;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoMedium;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoMediumItalic;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoRegular;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoThin;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoThinItalic;
extern ::uStaticStrong< ::uArray*> BasicStyle__Teal;
extern ::uStaticStrong< ::uArray*> BasicStyle__Yellow;

struct BasicStyle__uType : ::app::Fuse::Style__uType
{
};

BasicStyle__uType* BasicStyle__typeof();

void BasicStyle___ObjInit_1(BasicStyle* __this);
void BasicStyle___TypeInit(::uStatic* __this);
int BasicStyle__get_ColorScheme(BasicStyle* __this);
void BasicStyle__InitializeUX(BasicStyle* __this);
BasicStyle* BasicStyle__New_2(::uStatic* __this);
void BasicStyle__set_ColorScheme(BasicStyle* __this, int value);
void BasicStyle__SetColorScheme(BasicStyle* __this);
void BasicStyle__UpdateColorCodes(BasicStyle* __this, ::uArray* hexValues);

struct BasicStyle : ::app::Fuse::Style
{
    int _colorScheme;

    void _ObjInit_1() { BasicStyle___ObjInit_1(this); }
    int ColorScheme() { return BasicStyle__get_ColorScheme(this); }
    void InitializeUX() { BasicStyle__InitializeUX(this); }
    void ColorScheme(int value) { BasicStyle__set_ColorScheme(this, value); }
    void SetColorScheme() { BasicStyle__SetColorScheme(this); }
    void UpdateColorCodes(::uArray* hexValues) { BasicStyle__UpdateColorCodes(this, hexValues); }
};

}}}


#endif

// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Fuse_Android_bundle.h>
#include <_root.Fuse_BasicTheme_bundle.h>
#include <_root.Fuse_Controls_bundle.h>
#include <_root.Fuse_Drawing_bundle.h>
#include <_root.Fuse_Drawing_Polygons_bundle.h>
#include <_root.Fuse_Drawing_Primitives_bundle.h>
#include <_root.Fuse_Effects_bundle.h>
#include <_root.Fuse_Elements_bundle.h>
#include <_root.Fuse_Entities_bundle.h>
#include <_root.Fuse_Themes_bundle.h>
#include <_root.Fuse_Video_bundle.h>
#include <_root.FuseCore_bundle.h>
#include <_root.UnoCore_bundle.h>
#include <Uno.BundleFile.h>
#include <Uno.Int.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
static uString* STRINGS[175];
static uType* TYPES[1];

namespace g{

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\.upk\meta
// ---------------------------------------------------------

// public static generated class Fuse_Android_bundle :0
// {
// static Fuse_Android_bundle() :0
static void Fuse_Android_bundle__cctor__fn(uType* __type)
{
    Fuse_Android_bundle::Blitter8e9d75eb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[0/*"uniform vec...*/], ::STRINGS[1/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"f"*/]));
}

uClassType* Fuse_Android_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Android_bundle", options);
    type->fp_cctor_ = Fuse_Android_bundle__cctor__fn;
    ::STRINGS[0] = uString::Const("uniform vec2 c,b;uniform mat4 d;attribute vec2 a;varying vec2 e;vec4 g(vec2 h,mat4 i){return vec4(((h.x*i[0].x)+(h.y*i[1].x))+i[3].x,((h.x*i[0].y)+(h.y*i[1].y))+i[3].y,((h.x*i[0].z)+(h.y*i[1].z))+i[3].z,((h.x*i[0].w)+(h.y*i[1].w))+i[3].w);}void main(){e=a;gl_Position=g(c+(a*b),d);}");
    ::STRINGS[1] = uString::Const("uniform sampler2D f;varying vec2 e;void main(){gl_FragColor=texture2D(f,e);}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Android_bundle::Blitter8e9d75eb_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Android_bundle::Blitter8e9d75eb_;
// }

// C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.19.3\.upk\meta
// ------------------------------------------------------------

// public static generated class Fuse_BasicTheme_bundle :0
// {
// static Fuse_BasicTheme_bundle() :0
static void Fuse_BasicTheme_bundle__cctor__fn(uType* __type)
{
    Fuse_BasicTheme_bundle::Roboto_Blackf5d7198c_ = ::g::Uno::BundleFile::New1(::STRINGS[7/*"roboto-blac...*/]);
    Fuse_BasicTheme_bundle::Roboto_BlackItalicc5a41370_ = ::g::Uno::BundleFile::New1(::STRINGS[8/*"roboto-blac...*/]);
    Fuse_BasicTheme_bundle::Roboto_Bold7755803f_ = ::g::Uno::BundleFile::New1(::STRINGS[9/*"roboto-bold...*/]);
    Fuse_BasicTheme_bundle::Roboto_BoldItalic04d79bfd_ = ::g::Uno::BundleFile::New1(::STRINGS[10/*"roboto-bold...*/]);
    Fuse_BasicTheme_bundle::Roboto_Italic39cc53a1_ = ::g::Uno::BundleFile::New1(::STRINGS[11/*"roboto-ital...*/]);
    Fuse_BasicTheme_bundle::Roboto_Light6eba8813_ = ::g::Uno::BundleFile::New1(::STRINGS[12/*"roboto-ligh...*/]);
    Fuse_BasicTheme_bundle::Roboto_LightItalic33f1b993_ = ::g::Uno::BundleFile::New1(::STRINGS[13/*"roboto-ligh...*/]);
    Fuse_BasicTheme_bundle::Roboto_Mediume4e88fae_ = ::g::Uno::BundleFile::New1(::STRINGS[14/*"roboto-medi...*/]);
    Fuse_BasicTheme_bundle::Roboto_MediumItalic4a35f4dc_ = ::g::Uno::BundleFile::New1(::STRINGS[15/*"roboto-medi...*/]);
    Fuse_BasicTheme_bundle::Roboto_Regularc35195f4_ = ::g::Uno::BundleFile::New1(::STRINGS[16/*"roboto-regu...*/]);
    Fuse_BasicTheme_bundle::Roboto_Thin6a587ab8_ = ::g::Uno::BundleFile::New1(::STRINGS[17/*"roboto-thin...*/]);
    Fuse_BasicTheme_bundle::Roboto_ThinItalice8b656e6_ = ::g::Uno::BundleFile::New1(::STRINGS[18/*"roboto-thin...*/]);
    Fuse_BasicTheme_bundle::RobotoCondensed_Boldb51af5b9_ = ::g::Uno::BundleFile::New1(::STRINGS[19/*"robotoconde...*/]);
    Fuse_BasicTheme_bundle::RobotoCondensed_BoldItalic300c0ef3_ = ::g::Uno::BundleFile::New1(::STRINGS[20/*"robotoconde...*/]);
    Fuse_BasicTheme_bundle::RobotoCondensed_Italic3437663c_ = ::g::Uno::BundleFile::New1(::STRINGS[21/*"robotoconde...*/]);
    Fuse_BasicTheme_bundle::RobotoCondensed_Lightbfb1e7a3_ = ::g::Uno::BundleFile::New1(::STRINGS[22/*"robotoconde...*/]);
    Fuse_BasicTheme_bundle::RobotoCondensed_LightItalic7329a69e_ = ::g::Uno::BundleFile::New1(::STRINGS[23/*"robotoconde...*/]);
    Fuse_BasicTheme_bundle::RobotoCondensed_Regular85d27024_ = ::g::Uno::BundleFile::New1(::STRINGS[24/*"robotoconde...*/]);
}

uClassType* Fuse_BasicTheme_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_BasicTheme_bundle", options);
    type->fp_cctor_ = Fuse_BasicTheme_bundle__cctor__fn;
    ::STRINGS[7] = uString::Const("roboto-black-308a83bd.ttf");
    ::STRINGS[8] = uString::Const("roboto-blackitalic-1f266c82.ttf");
    ::STRINGS[9] = uString::Const("roboto-bold-97383331.ttf");
    ::STRINGS[10] = uString::Const("roboto-bolditalic-0917b4ee.ttf");
    ::STRINGS[11] = uString::Const("roboto-italic-2ed35a65.ttf");
    ::STRINGS[12] = uString::Const("roboto-light-382c15af.ttf");
    ::STRINGS[13] = uString::Const("roboto-lightitalic-2626664c.ttf");
    ::STRINGS[14] = uString::Const("roboto-medium-ff03d88f.ttf");
    ::STRINGS[15] = uString::Const("roboto-mediumitalic-aa6954b2.ttf");
    ::STRINGS[16] = uString::Const("roboto-regular-3d22e02e.ttf");
    ::STRINGS[17] = uString::Const("roboto-thin-3f043411.ttf");
    ::STRINGS[18] = uString::Const("roboto-thinitalic-6620c16f.ttf");
    ::STRINGS[19] = uString::Const("robotocondensed-bol-d6808a45.ttf");
    ::STRINGS[20] = uString::Const("robotocondensed-bol-5d2a8a5a.ttf");
    ::STRINGS[21] = uString::Const("robotocondensed-ita-e199a345.ttf");
    ::STRINGS[22] = uString::Const("robotocondensed-lig-7bf503de.ttf");
    ::STRINGS[23] = uString::Const("robotocondensed-lig-6147e747.ttf");
    ::STRINGS[24] = uString::Const("robotocondensed-reg-f1b70989.ttf");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_Blackf5d7198c_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_BlackItalicc5a41370_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_Bold7755803f_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_BoldItalic04d79bfd_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_Italic39cc53a1_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_Light6eba8813_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_LightItalic33f1b993_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_Mediume4e88fae_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_MediumItalic4a35f4dc_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_Regularc35195f4_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_Thin6a587ab8_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_ThinItalice8b656e6_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::RobotoCondensed_Boldb51af5b9_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::RobotoCondensed_BoldItalic300c0ef3_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::RobotoCondensed_Italic3437663c_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::RobotoCondensed_Lightbfb1e7a3_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::RobotoCondensed_LightItalic7329a69e_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::RobotoCondensed_Regular85d27024_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_Blackf5d7198c_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_BlackItalicc5a41370_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_Bold7755803f_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_BoldItalic04d79bfd_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_Italic39cc53a1_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_Light6eba8813_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_LightItalic33f1b993_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_Mediume4e88fae_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_MediumItalic4a35f4dc_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_Regularc35195f4_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_Thin6a587ab8_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_ThinItalice8b656e6_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::RobotoCondensed_Boldb51af5b9_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::RobotoCondensed_BoldItalic300c0ef3_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::RobotoCondensed_Italic3437663c_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::RobotoCondensed_Lightbfb1e7a3_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::RobotoCondensed_LightItalic7329a69e_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::RobotoCondensed_Regular85d27024_;
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\.upk\meta
// ----------------------------------------------------------

// public static generated class Fuse_Controls_bundle :0
// {
// static Fuse_Controls_bundle() :0
static void Fuse_Controls_bundle__cctor__fn(uType* __type)
{
    Fuse_Controls_bundle::ImageElementDraw08020a1a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[25/*"uniform mat...*/], ::STRINGS[26/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[28/*"h"*/]));
    Fuse_Controls_bundle::SolidRectangle5950675f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[29/*"uniform mat...*/], ::STRINGS[30/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[36/*"n"*/]));
    Fuse_Controls_bundle::SolidRectangle5951675f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[37/*"uniform mat...*/], ::STRINGS[38/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[35/*"l"*/]));
    Fuse_Controls_bundle::Viewport2da28930_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[39/*"uniform mat...*/], ::STRINGS[40/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[27/*"e"*/]));
}

uClassType* Fuse_Controls_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Controls_bundle", options);
    type->fp_cctor_ = Fuse_Controls_bundle__cctor__fn;
    ::STRINGS[25] = uString::Const("uniform mat4 f,b;uniform vec2 c,d;attribute vec2 a;varying vec2 g;void main(){g=(a*c)+d;gl_Position=b*(f*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[26] = uString::Const("uniform vec4 e;uniform sampler2D h;varying vec2 g;void main(){gl_FragColor=texture2D(h,g)*e;}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[28] = uString::Const("h");
    ::STRINGS[29] = uString::Const("uniform mat4 l,c;uniform vec2 d,e,f,g,h;attribute vec2 a;varying vec2 m;void main(){m=((((d*(false?vec2(a.x,float(1)-a.y):a))-e)/f)*g)+h;gl_Position=c*(l*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[30] = uString::Const("uniform vec4 i;uniform float j,k;uniform sampler2D n;varying vec2 m;void main(){vec4 o=(b?vec4(float(0)):texture2D(n,m))*i;gl_FragColor=vec4((o.xyz*o.w)*j,o.w*j)*k;}");
    ::STRINGS[31] = uString::Const("g");
    ::STRINGS[32] = uString::Const("i");
    ::STRINGS[33] = uString::Const("j");
    ::STRINGS[34] = uString::Const("k");
    ::STRINGS[35] = uString::Const("l");
    ::STRINGS[36] = uString::Const("n");
    ::STRINGS[37] = uString::Const("uniform mat4 h,b;uniform vec2 c,d,e,i;uniform float j;attribute vec2 a;varying float k;float m(vec2 n,vec2 o,float p){vec2 q=(n*c)-d;float r=dot(q,o)/p;return (r-e.x)/e.y;}void main(){k=m(false?vec2(a.x,float(1)-a.y):a,i,j);gl_Position=b*(h*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[38] = uString::Const("uniform float f,g;uniform sampler2D l;varying float k;void main(){vec4 n=texture2D(l,vec2(k,.5));gl_FragColor=vec4((n.xyz*n.w)*f,n.w*f)*g;}");
    ::STRINGS[39] = uString::Const("uniform mat4 c,b;attribute vec2 a;varying vec2 d;void main(){d=false?vec2(a.x,float(1)-a.y):a;gl_Position=b*(c*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[40] = uString::Const("uniform sampler2D e;varying vec2 d;void main(){gl_FragColor=texture2D(e,d);}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Controls_bundle::ImageElementDraw08020a1a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Controls_bundle::SolidRectangle5950675f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Controls_bundle::SolidRectangle5951675f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Controls_bundle::Viewport2da28930_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Controls_bundle::ImageElementDraw08020a1a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Controls_bundle::SolidRectangle5950675f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Controls_bundle::SolidRectangle5951675f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Controls_bundle::Viewport2da28930_;
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\.upk\meta
// ---------------------------------------------------------

// public static generated class Fuse_Drawing_bundle :0
// {
// static Fuse_Drawing_bundle() :0
static void Fuse_Drawing_bundle__cctor__fn(uType* __type)
{
    Fuse_Drawing_bundle::LinearGradientDrawableccd93376_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[41/*"attribute v...*/], ::STRINGS[42/*"uniform flo...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/]));
}

uClassType* Fuse_Drawing_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Drawing_bundle", options);
    type->fp_cctor_ = Fuse_Drawing_bundle__cctor__fn;
    ::STRINGS[41] = uString::Const("attribute vec2 a;varying vec2 g;void main(){g=a;gl_Position=vec4((a.x*float(2))-float(1),(-a.y*float(2))+float(1),float(0),float(1));}");
    ::STRINGS[42] = uString::Const("uniform float d[b],e;uniform vec4 f[c];varying vec2 g;vec4 h(vec2 i){float j=d[0]+(e*i.x);vec4 k=f[0];for(int l=0;l<(b-1);l++){float m=d[l];float n=d[l+1];vec4 o=f[l+1];k=mix(k,o,smoothstep(m,n,j));}return k;}void main(){gl_FragColor=h(g);}");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_bundle::LinearGradientDrawableccd93376_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_bundle::LinearGradientDrawableccd93376_;
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\.upk\meta
// ------------------------------------------------------------------

// public static generated class Fuse_Drawing_Polygons_bundle :0
// {
// static Fuse_Drawing_Polygons_bundle() :0
static void Fuse_Drawing_Polygons_bundle__cctor__fn(uType* __type)
{
    Fuse_Drawing_Polygons_bundle::Border102c669d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[43/*"uniform mat...*/], ::STRINGS[44/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[45/*"m"*/]));
    Fuse_Drawing_Polygons_bundle::Border102d669d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[46/*"uniform mat...*/], ::STRINGS[47/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[34/*"k"*/]));
    Fuse_Drawing_Polygons_bundle::Border102f669d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[48/*"uniform mat...*/], ::STRINGS[49/*"varying vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    Fuse_Drawing_Polygons_bundle::Border1032669d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[50/*"uniform mat...*/], ::STRINGS[51/*"varying vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/]));
    Fuse_Drawing_Polygons_bundle::PolygonDrawable91a038cd_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[52/*"uniform mat...*/], ::STRINGS[53/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[35/*"l"*/]));
    Fuse_Drawing_Polygons_bundle::PolygonDrawablea9a9dafc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[54/*"uniform mat...*/], ::STRINGS[55/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/]));
    Fuse_Drawing_Polygons_bundle::PolygonDrawableeef8c432_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[56/*"uniform mat...*/], ::STRINGS[57/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[33/*"j"*/]));
}

uClassType* Fuse_Drawing_Polygons_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Drawing_Polygons_bundle", options);
    type->fp_cctor_ = Fuse_Drawing_Polygons_bundle__cctor__fn;
    ::STRINGS[43] = uString::Const("uniform mat4 c;uniform vec2 d,e,f,g,h;attribute vec4 a;varying vec4 k;varying vec2 l;vec4 n(vec2 o,mat4 p){return vec4(((o.x*p[0].x)+(o.y*p[1].x))+p[3].x,((o.x*p[0].y)+(o.y*p[1].y))+p[3].y,((o.x*p[0].z)+(o.y*p[1].z))+p[3].z,((o.x*p[0].w)+(o.y*p[1].w))+p[3].w);}void main(){k=vec4(float(1),float(1),float(1),a.zw.x);l=((((d*(a.xy/d))-e)/f)*g)+h;gl_Position=n(a.xy,c);}");
    ::STRINGS[44] = uString::Const("uniform vec4 i;uniform float j;uniform sampler2D m;varying vec4 k;varying vec2 l;void main(){vec4 o=((b?vec4(float(0)):texture2D(m,l))*i)*k;gl_FragColor=vec4((o.xyz*o.w)*j,o.w*j);}");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[31] = uString::Const("g");
    ::STRINGS[28] = uString::Const("h");
    ::STRINGS[32] = uString::Const("i");
    ::STRINGS[33] = uString::Const("j");
    ::STRINGS[45] = uString::Const("m");
    ::STRINGS[46] = uString::Const("uniform mat4 b;uniform vec2 c,d,e,g;uniform float h;attribute vec4 a;varying vec4 i;varying float j;vec4 l(vec2 n,mat4 o){return vec4(((n.x*o[0].x)+(n.y*o[1].x))+o[3].x,((n.x*o[0].y)+(n.y*o[1].y))+o[3].y,((n.x*o[0].z)+(n.y*o[1].z))+o[3].z,((n.x*o[0].w)+(n.y*o[1].w))+o[3].w);}float m(vec2 n,vec2 o,float p){vec2 q=(n*c)-d;float r=dot(q,o)/p;return (r-e.x)/e.y;}void main(){i=vec4(float(1),float(1),float(1),a.zw.x);j=m(a.xy/c,g,h);gl_Position=l(a.xy,b);}");
    ::STRINGS[47] = uString::Const("uniform float f;uniform sampler2D k;varying vec4 i;varying float j;void main(){vec4 n=texture2D(k,vec2(j,.5))*i;gl_FragColor=vec4((n.xyz*n.w)*f,n.w*f);}");
    ::STRINGS[34] = uString::Const("k");
    ::STRINGS[48] = uString::Const("uniform mat4 b;uniform vec4 c;uniform float d;attribute vec4 a;varying vec4 e;vec4 f(vec2 g,mat4 h){return vec4(((g.x*h[0].x)+(g.y*h[1].x))+h[3].x,((g.x*h[0].y)+(g.y*h[1].y))+h[3].y,((g.x*h[0].z)+(g.y*h[1].z))+h[3].z,((g.x*h[0].w)+(g.y*h[1].w))+h[3].w);}void main(){vec4 g=c*vec4(float(1),float(1),float(1),a.zw.x);e=vec4((g.xyz*g.w)*d,g.w*d);gl_Position=f(a.xy,b);}");
    ::STRINGS[49] = uString::Const("varying vec4 e;void main(){gl_FragColor=e;}");
    ::STRINGS[50] = uString::Const("uniform mat4 b;uniform vec4 c;attribute vec4 a;varying vec4 d;vec4 e(vec2 f,mat4 g){return vec4(((f.x*g[0].x)+(f.y*g[1].x))+g[3].x,((f.x*g[0].y)+(f.y*g[1].y))+g[3].y,((f.x*g[0].z)+(f.y*g[1].z))+g[3].z,((f.x*g[0].w)+(f.y*g[1].w))+g[3].w);}void main(){vec4 f=c*vec4(float(1),float(1),float(1),a.zw.x);d=vec4((f.xyz*f.w)*1.,f.w);gl_Position=e(a.xy,b);}");
    ::STRINGS[51] = uString::Const("varying vec4 d;void main(){gl_FragColor=d;}");
    ::STRINGS[52] = uString::Const("uniform mat4 c;uniform vec2 d,e,f,g,h;attribute vec2 a;varying vec2 k;vec4 m(vec2 n,mat4 o){return vec4(((n.x*o[0].x)+(n.y*o[1].x))+o[3].x,((n.x*o[0].y)+(n.y*o[1].y))+o[3].y,((n.x*o[0].z)+(n.y*o[1].z))+o[3].z,((n.x*o[0].w)+(n.y*o[1].w))+o[3].w);}void main(){k=((((d*(a/d))-e)/f)*g)+h;gl_Position=m(a,c);}");
    ::STRINGS[53] = uString::Const("uniform vec4 i;uniform float j;uniform sampler2D l;varying vec2 k;void main(){vec4 n=(b?vec4(float(0)):texture2D(l,k))*i;gl_FragColor=vec4((n.xyz*n.w)*j,n.w*j);}");
    ::STRINGS[35] = uString::Const("l");
    ::STRINGS[54] = uString::Const("uniform mat4 b;attribute vec2 a;vec4 d(vec2 e,mat4 f){return vec4(((e.x*f[0].x)+(e.y*f[1].x))+f[3].x,((e.x*f[0].y)+(e.y*f[1].y))+f[3].y,((e.x*f[0].z)+(e.y*f[1].z))+f[3].z,((e.x*f[0].w)+(e.y*f[1].w))+f[3].w);}void main(){gl_Position=d(a,b);}");
    ::STRINGS[55] = uString::Const("uniform vec4 c;void main(){gl_FragColor=c;}");
    ::STRINGS[56] = uString::Const("uniform mat4 b;uniform vec2 c,d,e,g;uniform float h;attribute vec2 a;varying float i;vec4 k(vec2 m,mat4 n){return vec4(((m.x*n[0].x)+(m.y*n[1].x))+n[3].x,((m.x*n[0].y)+(m.y*n[1].y))+n[3].y,((m.x*n[0].z)+(m.y*n[1].z))+n[3].z,((m.x*n[0].w)+(m.y*n[1].w))+n[3].w);}float l(vec2 m,vec2 n,float o){vec2 p=(m*c)-d;float q=dot(p,n)/o;return (q-e.x)/e.y;}void main(){i=l(a/c,g,h);gl_Position=k(a,b);}");
    ::STRINGS[57] = uString::Const("uniform float f;uniform sampler2D j;varying float i;void main(){vec4 m=texture2D(j,vec2(i,.5));gl_FragColor=vec4((m.xyz*m.w)*f,m.w*f);}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Polygons_bundle::Border102c669d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Polygons_bundle::Border102d669d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Polygons_bundle::Border102f669d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Polygons_bundle::Border1032669d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Polygons_bundle::PolygonDrawable91a038cd_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Polygons_bundle::PolygonDrawablea9a9dafc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Polygons_bundle::PolygonDrawableeef8c432_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Polygons_bundle::Border102c669d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Polygons_bundle::Border102d669d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Polygons_bundle::Border102f669d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Polygons_bundle::Border1032669d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Polygons_bundle::PolygonDrawable91a038cd_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Polygons_bundle::PolygonDrawablea9a9dafc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Polygons_bundle::PolygonDrawableeef8c432_;
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.19.3\.upk\meta
// --------------------------------------------------------------------

// public static generated class Fuse_Drawing_Primitives_bundle :0
// {
// static Fuse_Drawing_Primitives_bundle() :0
static void Fuse_Drawing_Primitives_bundle__cctor__fn(uType* __type)
{
    Fuse_Drawing_Primitives_bundle::Circle08de7d46_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[58/*"uniform vec...*/], ::STRINGS[59/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[60/*"p"*/]));
    Fuse_Drawing_Primitives_bundle::Circle0dcbf8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[61/*"uniform vec...*/], ::STRINGS[62/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/]));
    Fuse_Drawing_Primitives_bundle::Circle205f8541_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[64/*"uniform vec...*/], ::STRINGS[65/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/]));
    Fuse_Drawing_Primitives_bundle::Circle3e0df8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[66/*"uniform vec...*/], ::STRINGS[67/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/], ::STRINGS[60/*"p"*/], ::STRINGS[68/*"q"*/], ::STRINGS[69/*"t"*/]));
    Fuse_Drawing_Primitives_bundle::Circle54d7f8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[70/*"uniform vec...*/], ::STRINGS[71/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 21, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/], ::STRINGS[60/*"p"*/], ::STRINGS[68/*"q"*/], ::STRINGS[72/*"r"*/], ::STRINGS[73/*"s"*/], ::STRINGS[69/*"t"*/], ::STRINGS[74/*"w"*/]));
    Fuse_Drawing_Primitives_bundle::Circle5628667c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[75/*"uniform vec...*/], ::STRINGS[76/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/]));
    Fuse_Drawing_Primitives_bundle::Circle65ae6e77_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[77/*"uniform vec...*/], ::STRINGS[78/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/]));
    Fuse_Drawing_Primitives_bundle::Circle663708ab_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[79/*"uniform vec...*/], ::STRINGS[80/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/], ::STRINGS[60/*"p"*/], ::STRINGS[73/*"s"*/]));
    Fuse_Drawing_Primitives_bundle::Circle6b9cf8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[61/*"uniform vec...*/], ::STRINGS[81/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/]));
    Fuse_Drawing_Primitives_bundle::Circle85b410a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[82/*"uniform vec...*/], ::STRINGS[83/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/], ::STRINGS[72/*"r"*/]));
    Fuse_Drawing_Primitives_bundle::Circle940fd686_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[84/*"uniform vec...*/], ::STRINGS[85/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/], ::STRINGS[72/*"r"*/]));
    Fuse_Drawing_Primitives_bundle::Circle940fd687_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[86/*"uniform vec...*/], ::STRINGS[87/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/], ::STRINGS[60/*"p"*/], ::STRINGS[68/*"q"*/], ::STRINGS[72/*"r"*/], ::STRINGS[88/*"u"*/]));
    Fuse_Drawing_Primitives_bundle::Circle9aeeb57e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[89/*"uniform vec...*/], ::STRINGS[90/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/], ::STRINGS[60/*"p"*/], ::STRINGS[68/*"q"*/], ::STRINGS[72/*"r"*/], ::STRINGS[88/*"u"*/]));
    Fuse_Drawing_Primitives_bundle::Circleb380f1e1_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[75/*"uniform vec...*/], ::STRINGS[91/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/]));
    Fuse_Drawing_Primitives_bundle::Circlec306f9dc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[77/*"uniform vec...*/], ::STRINGS[92/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/]));
    Fuse_Drawing_Primitives_bundle::Circlec38f9410_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[79/*"uniform vec...*/], ::STRINGS[93/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/], ::STRINGS[60/*"p"*/], ::STRINGS[73/*"s"*/]));
    Fuse_Drawing_Primitives_bundle::Circlec977f8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[86/*"uniform vec...*/], ::STRINGS[94/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/], ::STRINGS[60/*"p"*/], ::STRINGS[68/*"q"*/], ::STRINGS[72/*"r"*/], ::STRINGS[88/*"u"*/]));
    Fuse_Drawing_Primitives_bundle::Circlee03cf8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[70/*"uniform vec...*/], ::STRINGS[95/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 21, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/], ::STRINGS[60/*"p"*/], ::STRINGS[68/*"q"*/], ::STRINGS[72/*"r"*/], ::STRINGS[73/*"s"*/], ::STRINGS[69/*"t"*/], ::STRINGS[74/*"w"*/]));
    Fuse_Drawing_Primitives_bundle::Circleecb159f0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[96/*"uniform vec...*/], ::STRINGS[97/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/]));
    Fuse_Drawing_Primitives_bundle::Circleecb259f0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[96/*"uniform vec...*/], ::STRINGS[98/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/]));
    Fuse_Drawing_Primitives_bundle::Circleecb759f0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[99/*"uniform vec...*/], ::STRINGS[100/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/]));
    Fuse_Drawing_Primitives_bundle::Circlef701f8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[75/*"uniform vec...*/], ::STRINGS[101/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/]));
    Fuse_Drawing_Primitives_bundle::Circlef84740e3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[89/*"uniform vec...*/], ::STRINGS[102/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/], ::STRINGS[60/*"p"*/], ::STRINGS[68/*"q"*/], ::STRINGS[72/*"r"*/], ::STRINGS[88/*"u"*/]));
    Fuse_Drawing_Primitives_bundle::Circlef8cfdb17_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[103/*"uniform vec...*/], ::STRINGS[104/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/]));
    Fuse_Drawing_Primitives_bundle::Rectangle03d615cb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[105/*"uniform flo...*/], ::STRINGS[106/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/]));
    Fuse_Drawing_Primitives_bundle::Rectangle311b5cce_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[107/*"uniform flo...*/], ::STRINGS[108/*"uniform vec...*/], 2, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/], ::STRINGS[60/*"p"*/], ::STRINGS[68/*"q"*/], ::STRINGS[109/*"v"*/]));
    Fuse_Drawing_Primitives_bundle::Rectangle4924ff01_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[110/*"uniform flo...*/], ::STRINGS[111/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/], ::STRINGS[60/*"p"*/], ::STRINGS[68/*"q"*/], ::STRINGS[109/*"v"*/]));
    Fuse_Drawing_Primitives_bundle::Rectangle766a4604_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[112/*"uniform flo...*/], ::STRINGS[113/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/]));
    Fuse_Drawing_Primitives_bundle::Rectangle8e73e833_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[114/*"uniform flo...*/], ::STRINGS[115/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/]));
    Fuse_Drawing_Primitives_bundle::Rectanglea67d8a66_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[116/*"uniform flo...*/], ::STRINGS[117/*"uniform vec...*/], 2, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/], ::STRINGS[60/*"p"*/], ::STRINGS[68/*"q"*/], ::STRINGS[72/*"r"*/], ::STRINGS[73/*"s"*/], ::STRINGS[118/*"x"*/]));
    Fuse_Drawing_Primitives_bundle::Rectangled3c2d169_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[119/*"uniform flo...*/], ::STRINGS[120/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/], ::STRINGS[69/*"t"*/]));
    Fuse_Drawing_Primitives_bundle::Rectangleebcc739c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[121/*"uniform flo...*/], ::STRINGS[122/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/]));
}

uClassType* Fuse_Drawing_Primitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 32;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Drawing_Primitives_bundle", options);
    type->fp_cctor_ = Fuse_Drawing_Primitives_bundle__cctor__fn;
    ::STRINGS[58] = uString::Const("uniform vec2 b,c,e,f,g,l;uniform mat4 d;uniform float m;attribute vec2 a;varying float n;varying vec2 o;vec4 q(vec2 s,mat4 t){return vec4(((s.x*t[0].x)+(s.y*t[1].x))+t[3].x,((s.x*t[0].y)+(s.y*t[1].y))+t[3].y,((s.x*t[0].z)+(s.y*t[1].z))+t[3].z,((s.x*t[0].w)+(s.y*t[1].w))+t[3].w);}float r(vec2 s,vec2 t,float u){vec2 v=(s*e)-f;float w=dot(v,t)/u;return (w-g.x)/g.y;}void main(){vec2 s=a*b;vec2 t=s+c;n=r(t/e,l,m);o=s;gl_Position=q(t,d);}");
    ::STRINGS[59] = uString::Const("uniform float h,i,j,k;uniform sampler2D p;varying float n;varying vec2 o;void main(){vec4 s=texture2D(p,vec2(n,.5));vec4 t=vec4(s.xyz,s.w*(clamp(.5-(((length(o)-h)*i)*j),float(0),float(1))*float(1)));gl_FragColor=vec4((t.xyz*t.w)*k,t.w*k);}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[31] = uString::Const("g");
    ::STRINGS[28] = uString::Const("h");
    ::STRINGS[32] = uString::Const("i");
    ::STRINGS[33] = uString::Const("j");
    ::STRINGS[34] = uString::Const("k");
    ::STRINGS[35] = uString::Const("l");
    ::STRINGS[45] = uString::Const("m");
    ::STRINGS[60] = uString::Const("p");
    ::STRINGS[61] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 p;vec4 q(vec2 r,mat4 s){return vec4(((r.x*s[0].x)+(r.y*s[1].x))+s[3].x,((r.x*s[0].y)+(r.y*s[1].y))+s[3].y,((r.x*s[0].z)+(r.y*s[1].z))+s[3].z,((r.x*s[0].w)+(r.y*s[1].w))+s[3].w);}void main(){vec2 r=a*b;p=r;gl_Position=q(r+c,d);}");
    ::STRINGS[62] = uString::Const("uniform float e,f,g,h,i,j,l;uniform vec2 m,n,o;uniform vec3 k;varying vec2 p;void main(){vec4 r=vec4(k,j*(clamp(.5-(((abs((length(p)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((min(dot(p,m),min(dot(p,n),dot(p,o)))*h)*i),float(0),float(1))));gl_FragColor=vec4((r.xyz*r.w)*l,r.w*l);}");
    ::STRINGS[36] = uString::Const("n");
    ::STRINGS[63] = uString::Const("o");
    ::STRINGS[64] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 k;vec4 l(vec2 m,mat4 n){return vec4(((m.x*n[0].x)+(m.y*n[1].x))+n[3].x,((m.x*n[0].y)+(m.y*n[1].y))+n[3].y,((m.x*n[0].z)+(m.y*n[1].z))+n[3].z,((m.x*n[0].w)+(m.y*n[1].w))+n[3].w);}void main(){vec2 m=a*b;k=m;gl_Position=l(m+c,d);}");
    ::STRINGS[65] = uString::Const("uniform float e,f,g,h,j;uniform vec3 i;varying vec2 k;void main(){vec4 m=vec4(i,h*(clamp(.5-(((length(k)-e)*f)*g),float(0),float(1))*float(1)));gl_FragColor=vec4((m.xyz*m.w)*j,m.w*j);}");
    ::STRINGS[66] = uString::Const("uniform vec2 c,d,f,g,h,i,j;uniform mat4 e;attribute vec2 a;varying vec2 r,s;vec4 u(vec2 v,mat4 w){return vec4(((v.x*w[0].x)+(v.y*w[1].x))+w[3].x,((v.x*w[0].y)+(v.y*w[1].y))+w[3].y,((v.x*w[0].z)+(v.y*w[1].z))+w[3].z,((v.x*w[0].w)+(v.y*w[1].w))+w[3].w);}void main(){vec2 v=a*c;vec2 w=v+d;r=((((f*(w/f))-g)/h)*i)+j;s=v;gl_Position=u(w,e);}");
    ::STRINGS[67] = uString::Const("uniform vec4 k;uniform float l,m,n,o,p,q;uniform sampler2D t;varying vec2 r,s;void main(){vec4 v=(b?vec4(float(0)):texture2D(t,r))*k;vec4 w=vec4(v.xyz,v.w*(clamp(.5-(((abs((length(s)-l)-m)-n)*o)*p),float(0),float(1))*float(1)));gl_FragColor=vec4((w.xyz*w.w)*q,w.w*q);}");
    ::STRINGS[68] = uString::Const("q");
    ::STRINGS[69] = uString::Const("t");
    ::STRINGS[70] = uString::Const("uniform vec2 c,d,f,g,h,i,j;uniform mat4 e;attribute vec2 a;varying vec2 u,v;vec4 x(vec2 y,mat4 z){return vec4(((y.x*z[0].x)+(y.y*z[1].x))+z[3].x,((y.x*z[0].y)+(y.y*z[1].y))+z[3].y,((y.x*z[0].z)+(y.y*z[1].z))+z[3].z,((y.x*z[0].w)+(y.y*z[1].w))+z[3].w);}void main(){vec2 y=a*c;vec2 z=y+d;u=((((f*(z/f))-g)/h)*i)+j;v=y;gl_Position=x(z,e);}");
    ::STRINGS[71] = uString::Const("uniform vec4 k;uniform float l,m,n,o,p,q;uniform vec2 r,s,t;uniform sampler2D w;varying vec2 u,v;void main(){vec4 y=(b?vec4(float(0)):texture2D(w,u))*k;vec4 z=vec4(y.xyz,y.w*(clamp(.5-(((abs((length(v)-l)-m)-n)*o)*p),float(0),float(1))*clamp(.5-((min(dot(v,r),min(dot(v,s),dot(v,t)))*o)*p),float(0),float(1))));gl_FragColor=vec4((z.xyz*z.w)*q,z.w*q);}");
    ::STRINGS[72] = uString::Const("r");
    ::STRINGS[73] = uString::Const("s");
    ::STRINGS[74] = uString::Const("w");
    ::STRINGS[75] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 m;vec4 n(vec2 o,mat4 p){return vec4(((o.x*p[0].x)+(o.y*p[1].x))+p[3].x,((o.x*p[0].y)+(o.y*p[1].y))+p[3].y,((o.x*p[0].z)+(o.y*p[1].z))+p[3].z,((o.x*p[0].w)+(o.y*p[1].w))+p[3].w);}void main(){vec2 o=a*b;m=o;gl_Position=n(o+c,d);}");
    ::STRINGS[76] = uString::Const("uniform float e,f,g,h;uniform vec2 j,k,l;uniform vec3 i;varying vec2 m;void main(){vec4 o=vec4(i,h*(clamp(.5-(((length(m)-e)*f)*g),float(0),float(1))*clamp(.5-((max(dot(m,j),max(dot(m,k),dot(m,l)))*f)*g),float(0),float(1))));gl_FragColor=vec4((o.xyz*o.w)*1.,o.w);}");
    ::STRINGS[77] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 n;vec4 o(vec2 p,mat4 q){return vec4(((p.x*q[0].x)+(p.y*q[1].x))+q[3].x,((p.x*q[0].y)+(p.y*q[1].y))+q[3].y,((p.x*q[0].z)+(p.y*q[1].z))+q[3].z,((p.x*q[0].w)+(p.y*q[1].w))+q[3].w);}void main(){vec2 p=a*b;n=p;gl_Position=o(p+c,d);}");
    ::STRINGS[78] = uString::Const("uniform float e,f,g,h,j;uniform vec2 k,l,m;uniform vec3 i;varying vec2 n;void main(){vec4 p=vec4(i,h*(clamp(.5-(((length(n)-e)*f)*g),float(0),float(1))*clamp(.5-((min(dot(n,k),min(dot(n,l),dot(n,m)))*f)*g),float(0),float(1))));gl_FragColor=vec4((p.xyz*p.w)*j,p.w*j);}");
    ::STRINGS[79] = uString::Const("uniform vec2 b,c,e,f,g,l;uniform mat4 d;uniform float m;attribute vec2 a;varying float q;varying vec2 r;vec4 t(vec2 v,mat4 w){return vec4(((v.x*w[0].x)+(v.y*w[1].x))+w[3].x,((v.x*w[0].y)+(v.y*w[1].y))+w[3].y,((v.x*w[0].z)+(v.y*w[1].z))+w[3].z,((v.x*w[0].w)+(v.y*w[1].w))+w[3].w);}float u(vec2 v,vec2 w,float x){vec2 y=(v*e)-f;float z=dot(y,w)/x;return (z-g.x)/g.y;}void main(){vec2 v=a*b;vec2 w=v+c;q=u(w/e,l,m);r=v;gl_Position=t(w,d);}");
    ::STRINGS[80] = uString::Const("uniform float h,i,j,k;uniform vec2 n,o,p;uniform sampler2D s;varying float q;varying vec2 r;void main(){vec4 v=texture2D(s,vec2(q,.5));vec4 w=vec4(v.xyz,v.w*(clamp(.5-(((length(r)-h)*i)*j),float(0),float(1))*clamp(.5-((max(dot(r,n),max(dot(r,o),dot(r,p)))*i)*j),float(0),float(1))));gl_FragColor=vec4((w.xyz*w.w)*k,w.w*k);}");
    ::STRINGS[81] = uString::Const("uniform float e,f,g,h,i,j,l;uniform vec2 m,n,o;uniform vec3 k;varying vec2 p;void main(){vec4 r=vec4(k,j*(clamp(.5-(((abs((length(p)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((max(dot(p,m),max(dot(p,n),dot(p,o)))*h)*i),float(0),float(1))));gl_FragColor=vec4((r.xyz*r.w)*l,r.w*l);}");
    ::STRINGS[82] = uString::Const("uniform vec2 c,d,f,g,h,i,j;uniform mat4 e;attribute vec2 a;varying vec2 p,q;vec4 s(vec2 t,mat4 u){return vec4(((t.x*u[0].x)+(t.y*u[1].x))+u[3].x,((t.x*u[0].y)+(t.y*u[1].y))+u[3].y,((t.x*u[0].z)+(t.y*u[1].z))+u[3].z,((t.x*u[0].w)+(t.y*u[1].w))+u[3].w);}void main(){vec2 t=a*c;vec2 u=t+d;p=((((f*(u/f))-g)/h)*i)+j;q=t;gl_Position=s(u,e);}");
    ::STRINGS[83] = uString::Const("uniform vec4 k;uniform float l,m,n,o;uniform sampler2D r;varying vec2 p,q;void main(){vec4 t=(b?vec4(float(0)):texture2D(r,p))*k;vec4 u=vec4(t.xyz,t.w*(clamp(.5-(((length(q)-l)*m)*n),float(0),float(1))*float(1)));gl_FragColor=vec4((u.xyz*u.w)*o,u.w*o);}");
    ::STRINGS[84] = uString::Const("uniform vec2 b,c,e,f,g,n;uniform mat4 d;uniform float o;attribute vec2 a;varying float p;varying vec2 q;vec4 s(vec2 u,mat4 v){return vec4(((u.x*v[0].x)+(u.y*v[1].x))+v[3].x,((u.x*v[0].y)+(u.y*v[1].y))+v[3].y,((u.x*v[0].z)+(u.y*v[1].z))+v[3].z,((u.x*v[0].w)+(u.y*v[1].w))+v[3].w);}float t(vec2 u,vec2 v,float w){vec2 x=(u*e)-f;float y=dot(x,v)/w;return (y-g.x)/g.y;}void main(){vec2 u=a*b;vec2 v=u+c;p=t(v/e,n,o);q=u;gl_Position=s(v,d);}");
    ::STRINGS[85] = uString::Const("uniform float h,i,j,k,l,m;uniform sampler2D r;varying float p;varying vec2 q;void main(){vec4 u=texture2D(r,vec2(p,.5));vec4 v=vec4(u.xyz,u.w*(clamp(.5-(((abs((length(q)-h)-i)-j)*k)*l),float(0),float(1))*float(1)));gl_FragColor=vec4((v.xyz*v.w)*m,v.w*m);}");
    ::STRINGS[86] = uString::Const("uniform vec2 b,c,e,f,g,n;uniform mat4 d;uniform float o;attribute vec2 a;varying float s;varying vec2 t;vec4 v(vec2 x,mat4 y){return vec4(((x.x*y[0].x)+(x.y*y[1].x))+y[3].x,((x.x*y[0].y)+(x.y*y[1].y))+y[3].y,((x.x*y[0].z)+(x.y*y[1].z))+y[3].z,((x.x*y[0].w)+(x.y*y[1].w))+y[3].w);}float w(vec2 x,vec2 y,float z){vec2 A=(x*e)-f;float B=dot(A,y)/z;return (B-g.x)/g.y;}void main(){vec2 x=a*b;vec2 y=x+c;s=w(y/e,n,o);t=x;gl_Position=v(y,d);}");
    ::STRINGS[87] = uString::Const("uniform float h,i,j,k,l,m;uniform vec2 p,q,r;uniform sampler2D u;varying float s;varying vec2 t;void main(){vec4 x=texture2D(u,vec2(s,.5));vec4 y=vec4(x.xyz,x.w*(clamp(.5-(((abs((length(t)-h)-i)-j)*k)*l),float(0),float(1))*clamp(.5-((max(dot(t,p),max(dot(t,q),dot(t,r)))*k)*l),float(0),float(1))));gl_FragColor=vec4((y.xyz*y.w)*m,y.w*m);}");
    ::STRINGS[88] = uString::Const("u");
    ::STRINGS[89] = uString::Const("uniform vec2 c,d,f,g,h,i,j;uniform mat4 e;attribute vec2 a;varying vec2 s,t;vec4 v(vec2 w,mat4 x){return vec4(((w.x*x[0].x)+(w.y*x[1].x))+x[3].x,((w.x*x[0].y)+(w.y*x[1].y))+x[3].y,((w.x*x[0].z)+(w.y*x[1].z))+x[3].z,((w.x*x[0].w)+(w.y*x[1].w))+x[3].w);}void main(){vec2 w=a*c;vec2 x=w+d;s=((((f*(x/f))-g)/h)*i)+j;t=w;gl_Position=v(x,e);}");
    ::STRINGS[90] = uString::Const("uniform vec4 k;uniform float l,m,n,o;uniform vec2 p,q,r;uniform sampler2D u;varying vec2 s,t;void main(){vec4 w=(b?vec4(float(0)):texture2D(u,s))*k;vec4 x=vec4(w.xyz,w.w*(clamp(.5-(((length(t)-l)*m)*n),float(0),float(1))*clamp(.5-((min(dot(t,p),min(dot(t,q),dot(t,r)))*m)*n),float(0),float(1))));gl_FragColor=vec4((x.xyz*x.w)*o,x.w*o);}");
    ::STRINGS[91] = uString::Const("uniform float e,f,g,h;uniform vec2 j,k,l;uniform vec3 i;varying vec2 m;void main(){vec4 o=vec4(i,h*(clamp(.5-(((length(m)-e)*f)*g),float(0),float(1))*clamp(.5-((min(dot(m,j),min(dot(m,k),dot(m,l)))*f)*g),float(0),float(1))));gl_FragColor=vec4((o.xyz*o.w)*1.,o.w);}");
    ::STRINGS[92] = uString::Const("uniform float e,f,g,h,j;uniform vec2 k,l,m;uniform vec3 i;varying vec2 n;void main(){vec4 p=vec4(i,h*(clamp(.5-(((length(n)-e)*f)*g),float(0),float(1))*clamp(.5-((max(dot(n,k),max(dot(n,l),dot(n,m)))*f)*g),float(0),float(1))));gl_FragColor=vec4((p.xyz*p.w)*j,p.w*j);}");
    ::STRINGS[93] = uString::Const("uniform float h,i,j,k;uniform vec2 n,o,p;uniform sampler2D s;varying float q;varying vec2 r;void main(){vec4 v=texture2D(s,vec2(q,.5));vec4 w=vec4(v.xyz,v.w*(clamp(.5-(((length(r)-h)*i)*j),float(0),float(1))*clamp(.5-((min(dot(r,n),min(dot(r,o),dot(r,p)))*i)*j),float(0),float(1))));gl_FragColor=vec4((w.xyz*w.w)*k,w.w*k);}");
    ::STRINGS[94] = uString::Const("uniform float h,i,j,k,l,m;uniform vec2 p,q,r;uniform sampler2D u;varying float s;varying vec2 t;void main(){vec4 x=texture2D(u,vec2(s,.5));vec4 y=vec4(x.xyz,x.w*(clamp(.5-(((abs((length(t)-h)-i)-j)*k)*l),float(0),float(1))*clamp(.5-((min(dot(t,p),min(dot(t,q),dot(t,r)))*k)*l),float(0),float(1))));gl_FragColor=vec4((y.xyz*y.w)*m,y.w*m);}");
    ::STRINGS[95] = uString::Const("uniform vec4 k;uniform float l,m,n,o,p,q;uniform vec2 r,s,t;uniform sampler2D w;varying vec2 u,v;void main(){vec4 y=(b?vec4(float(0)):texture2D(w,u))*k;vec4 z=vec4(y.xyz,y.w*(clamp(.5-(((abs((length(v)-l)-m)-n)*o)*p),float(0),float(1))*clamp(.5-((max(dot(v,r),max(dot(v,s),dot(v,t)))*o)*p),float(0),float(1))));gl_FragColor=vec4((z.xyz*z.w)*q,z.w*q);}");
    ::STRINGS[96] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 o;vec4 p(vec2 q,mat4 r){return vec4(((q.x*r[0].x)+(q.y*r[1].x))+r[3].x,((q.x*r[0].y)+(q.y*r[1].y))+r[3].y,((q.x*r[0].z)+(q.y*r[1].z))+r[3].z,((q.x*r[0].w)+(q.y*r[1].w))+r[3].w);}void main(){vec2 q=a*b;o=q;gl_Position=p(q+c,d);}");
    ::STRINGS[97] = uString::Const("uniform float e,f,g,h,i,j;uniform vec2 l,m,n;uniform vec3 k;varying vec2 o;void main(){vec4 q=vec4(k,j*(clamp(.5-(((abs((length(o)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((min(dot(o,l),min(dot(o,m),dot(o,n)))*h)*i),float(0),float(1))));gl_FragColor=vec4((q.xyz*q.w)*1.,q.w);}");
    ::STRINGS[98] = uString::Const("uniform float e,f,g,h,i,j;uniform vec2 l,m,n;uniform vec3 k;varying vec2 o;void main(){vec4 q=vec4(k,j*(clamp(.5-(((abs((length(o)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((max(dot(o,l),max(dot(o,m),dot(o,n)))*h)*i),float(0),float(1))));gl_FragColor=vec4((q.xyz*q.w)*1.,q.w);}");
    ::STRINGS[99] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 l;vec4 m(vec2 n,mat4 o){return vec4(((n.x*o[0].x)+(n.y*o[1].x))+o[3].x,((n.x*o[0].y)+(n.y*o[1].y))+o[3].y,((n.x*o[0].z)+(n.y*o[1].z))+o[3].z,((n.x*o[0].w)+(n.y*o[1].w))+o[3].w);}void main(){vec2 n=a*b;l=n;gl_Position=m(n+c,d);}");
    ::STRINGS[100] = uString::Const("uniform float e,f,g,h,i,j;uniform vec3 k;varying vec2 l;void main(){vec4 n=vec4(k,j*(clamp(.5-(((abs((length(l)-e)-f)-g)*h)*i),float(0),float(1))*float(1)));gl_FragColor=vec4((n.xyz*n.w)*1.,n.w);}");
    ::STRINGS[101] = uString::Const("uniform float e,f,g,h,i,j,l;uniform vec3 k;varying vec2 m;void main(){vec4 o=vec4(k,j*(clamp(.5-(((abs((length(m)-e)-f)-g)*h)*i),float(0),float(1))*float(1)));gl_FragColor=vec4((o.xyz*o.w)*l,o.w*l);}");
    ::STRINGS[102] = uString::Const("uniform vec4 k;uniform float l,m,n,o;uniform vec2 p,q,r;uniform sampler2D u;varying vec2 s,t;void main(){vec4 w=(b?vec4(float(0)):texture2D(u,s))*k;vec4 x=vec4(w.xyz,w.w*(clamp(.5-(((length(t)-l)*m)*n),float(0),float(1))*clamp(.5-((max(dot(t,p),max(dot(t,q),dot(t,r)))*m)*n),float(0),float(1))));gl_FragColor=vec4((x.xyz*x.w)*o,x.w*o);}");
    ::STRINGS[103] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 j;vec4 k(vec2 l,mat4 m){return vec4(((l.x*m[0].x)+(l.y*m[1].x))+m[3].x,((l.x*m[0].y)+(l.y*m[1].y))+m[3].y,((l.x*m[0].z)+(l.y*m[1].z))+m[3].z,((l.x*m[0].w)+(l.y*m[1].w))+m[3].w);}void main(){vec2 l=a*b;j=l;gl_Position=k(l+c,d);}");
    ::STRINGS[104] = uString::Const("uniform float e,f,g,h;uniform vec3 i;varying vec2 j;void main(){vec4 l=vec4(i,h*(clamp(.5-(((length(j)-e)*f)*g),float(0),float(1))*float(1)));gl_FragColor=vec4((l.xyz*l.w)*1.,l.w);}");
    ::STRINGS[105] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float o;varying vec2 p,q;vec4 r(vec2 s,mat4 t){return vec4(((s.x*t[0].x)+(s.y*t[1].x))+t[3].x,((s.x*t[0].y)+(s.y*t[1].y))+t[3].y,((s.x*t[0].z)+(s.y*t[1].z))+t[3].z,((s.x*t[0].w)+(s.y*t[1].w))+t[3].w);}void main(){vec2 s=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;o=e[int(c)];p=s;q=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=r(s,g);}");
    ::STRINGS[106] = uString::Const("uniform float h,i,j,k,l,n;uniform vec3 m;varying float o;varying vec2 p,q;void main(){vec4 s=vec4(m,l*clamp(.5-(((abs((distance(p,q)-o)-h)-i)*j)*k),float(0),float(1)));gl_FragColor=vec4((s.xyz*s.w)*n,s.w*n);}");
    ::STRINGS[107] = uString::Const("uniform float f[d];uniform vec2 g,i,j,k,l,m;uniform mat4 h;attribute vec4 a,b;attribute float c;varying float r;varying vec2 s,t,u;vec4 w(vec2 x,mat4 y){return vec4(((x.x*y[0].x)+(x.y*y[1].x))+y[3].x,((x.x*y[0].y)+(x.y*y[1].y))+y[3].y,((x.x*y[0].z)+(x.y*y[1].z))+y[3].z,((x.x*y[0].w)+(x.y*y[1].w))+y[3].w);}void main(){vec2 x=vec2((sign(a.x)*f[int(abs(a.x))])+(sign(a.y)*f[int(abs(a.y))]),(sign(a.z)*f[int(abs(a.z))])+(sign(a.w)*f[int(abs(a.w))]))+g;r=f[int(c)];s=((((i*(x/i))-j)/k)*l)+m;t=x;u=vec2((sign(b.x)*f[int(abs(b.x))])+(sign(b.y)*f[int(abs(b.y))]),(sign(b.z)*f[int(abs(b.z))])+(sign(b.w)*f[int(abs(b.w))]))+g;gl_Position=w(x,h);}");
    ::STRINGS[108] = uString::Const("uniform vec4 n;uniform float o,p,q;uniform sampler2D v;varying float r;varying vec2 s,t,u;void main(){vec4 x=(e?vec4(float(0)):texture2D(v,s))*n;vec4 y=vec4(x.xyz,x.w*clamp(.5-(((distance(t,u)-r)*o)*p),float(0),float(1)));gl_FragColor=vec4((y.xyz*y.w)*q,y.w*q);}");
    ::STRINGS[109] = uString::Const("v");
    ::STRINGS[110] = uString::Const("uniform float e[d],q;uniform vec2 f,h,i,j,p;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float r,s;varying vec2 t,u;vec4 w(vec2 y,mat4 z){return vec4(((y.x*z[0].x)+(y.y*z[1].x))+z[3].x,((y.x*z[0].y)+(y.y*z[1].y))+z[3].y,((y.x*z[0].z)+(y.y*z[1].z))+z[3].z,((y.x*z[0].w)+(y.y*z[1].w))+z[3].w);}float x(vec2 y,vec2 z,float A){vec2 B=(y*h)-i;float C=dot(B,z)/A;return (C-j.x)/j.y;}void main(){vec2 y=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;r=e[int(c)];s=x(y/h,p,q);t=y;u=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=w(y,g);}");
    ::STRINGS[111] = uString::Const("uniform float k,l,m,n,o;uniform sampler2D v;varying float r,s;varying vec2 t,u;void main(){vec4 y=texture2D(v,vec2(s,.5));vec4 z=vec4(y.xyz,y.w*clamp(.5-(((abs((distance(t,u)-r)-k)-l)*m)*n),float(0),float(1)));gl_FragColor=vec4((z.xyz*z.w)*o,z.w*o);}");
    ::STRINGS[112] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float l;varying vec2 m,n;vec4 o(vec2 p,mat4 q){return vec4(((p.x*q[0].x)+(p.y*q[1].x))+q[3].x,((p.x*q[0].y)+(p.y*q[1].y))+q[3].y,((p.x*q[0].z)+(p.y*q[1].z))+q[3].z,((p.x*q[0].w)+(p.y*q[1].w))+q[3].w);}void main(){vec2 p=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;l=e[int(c)];m=p;n=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=o(p,g);}");
    ::STRINGS[113] = uString::Const("uniform float h,i,j;uniform vec3 k;varying float l;varying vec2 m,n;void main(){vec4 p=vec4(k,j*clamp(.5-(((distance(m,n)-l)*h)*i),float(0),float(1)));gl_FragColor=vec4((p.xyz*p.w)*1.,p.w);}");
    ::STRINGS[114] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float m;varying vec2 n,o;vec4 p(vec2 q,mat4 r){return vec4(((q.x*r[0].x)+(q.y*r[1].x))+r[3].x,((q.x*r[0].y)+(q.y*r[1].y))+r[3].y,((q.x*r[0].z)+(q.y*r[1].z))+r[3].z,((q.x*r[0].w)+(q.y*r[1].w))+r[3].w);}void main(){vec2 q=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;m=e[int(c)];n=q;o=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=p(q,g);}");
    ::STRINGS[115] = uString::Const("uniform float h,i,j,l;uniform vec3 k;varying float m;varying vec2 n,o;void main(){vec4 q=vec4(k,j*clamp(.5-(((distance(n,o)-m)*h)*i),float(0),float(1)));gl_FragColor=vec4((q.xyz*q.w)*l,q.w*l);}");
    ::STRINGS[116] = uString::Const("uniform float f[d];uniform vec2 g,i,j,k,l,m;uniform mat4 h;attribute vec4 a,b;attribute float c;varying float t;varying vec2 u,v,w;vec4 y(vec2 z,mat4 A){return vec4(((z.x*A[0].x)+(z.y*A[1].x))+A[3].x,((z.x*A[0].y)+(z.y*A[1].y))+A[3].y,((z.x*A[0].z)+(z.y*A[1].z))+A[3].z,((z.x*A[0].w)+(z.y*A[1].w))+A[3].w);}void main(){vec2 z=vec2((sign(a.x)*f[int(abs(a.x))])+(sign(a.y)*f[int(abs(a.y))]),(sign(a.z)*f[int(abs(a.z))])+(sign(a.w)*f[int(abs(a.w))]))+g;t=f[int(c)];u=((((i*(z/i))-j)/k)*l)+m;v=z;w=vec2((sign(b.x)*f[int(abs(b.x))])+(sign(b.y)*f[int(abs(b.y))]),(sign(b.z)*f[int(abs(b.z))])+(sign(b.w)*f[int(abs(b.w))]))+g;gl_Position=y(z,h);}");
    ::STRINGS[117] = uString::Const("uniform vec4 n;uniform float o,p,q,r,s;uniform sampler2D x;varying float t;varying vec2 u,v,w;void main(){vec4 z=(e?vec4(float(0)):texture2D(x,u))*n;vec4 A=vec4(z.xyz,z.w*clamp(.5-(((abs((distance(v,w)-t)-o)-p)*q)*r),float(0),float(1)));gl_FragColor=vec4((A.xyz*A.w)*s,A.w*s);}");
    ::STRINGS[118] = uString::Const("x");
    ::STRINGS[119] = uString::Const("uniform float e[d],o;uniform vec2 f,h,i,j,n;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float p,q;varying vec2 r,s;vec4 u(vec2 w,mat4 x){return vec4(((w.x*x[0].x)+(w.y*x[1].x))+x[3].x,((w.x*x[0].y)+(w.y*x[1].y))+x[3].y,((w.x*x[0].z)+(w.y*x[1].z))+x[3].z,((w.x*x[0].w)+(w.y*x[1].w))+x[3].w);}float v(vec2 w,vec2 x,float y){vec2 z=(w*h)-i;float A=dot(z,x)/y;return (A-j.x)/j.y;}void main(){vec2 w=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;p=e[int(c)];q=v(w/h,n,o);r=w;s=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=u(w,g);}");
    ::STRINGS[120] = uString::Const("uniform float k,l,m;uniform sampler2D t;varying float p,q;varying vec2 r,s;void main(){vec4 w=texture2D(t,vec2(q,.5));vec4 x=vec4(w.xyz,w.w*clamp(.5-(((distance(r,s)-p)*k)*l),float(0),float(1)));gl_FragColor=vec4((x.xyz*x.w)*m,x.w*m);}");
    ::STRINGS[121] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float n;varying vec2 o,p;vec4 q(vec2 r,mat4 s){return vec4(((r.x*s[0].x)+(r.y*s[1].x))+s[3].x,((r.x*s[0].y)+(r.y*s[1].y))+s[3].y,((r.x*s[0].z)+(r.y*s[1].z))+s[3].z,((r.x*s[0].w)+(r.y*s[1].w))+s[3].w);}void main(){vec2 r=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;n=e[int(c)];o=r;p=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=q(r,g);}");
    ::STRINGS[122] = uString::Const("uniform float h,i,j,k,l;uniform vec3 m;varying float n;varying vec2 o,p;void main(){vec4 r=vec4(m,l*clamp(.5-(((abs((distance(o,p)-n)-h)-i)*j)*k),float(0),float(1)));gl_FragColor=vec4((r.xyz*r.w)*1.,r.w);}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle08de7d46_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle0dcbf8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle205f8541_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle3e0df8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle54d7f8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle5628667c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle65ae6e77_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle663708ab_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle6b9cf8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle85b410a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle940fd686_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle940fd687_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle9aeeb57e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circleb380f1e1_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circlec306f9dc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circlec38f9410_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circlec977f8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circlee03cf8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circleecb159f0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circleecb259f0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circleecb759f0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circlef701f8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circlef84740e3_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circlef8cfdb17_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Rectangle03d615cb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Rectangle311b5cce_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Rectangle4924ff01_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Rectangle766a4604_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Rectangle8e73e833_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Rectanglea67d8a66_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Rectangled3c2d169_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Rectangleebcc739c_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle08de7d46_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle0dcbf8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle205f8541_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle3e0df8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle54d7f8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle5628667c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle65ae6e77_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle663708ab_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle6b9cf8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle85b410a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle940fd686_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle940fd687_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle9aeeb57e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circleb380f1e1_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circlec306f9dc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circlec38f9410_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circlec977f8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circlee03cf8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circleecb159f0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circleecb259f0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circleecb759f0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circlef701f8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circlef84740e3_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circlef8cfdb17_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Rectangle03d615cb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Rectangle311b5cce_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Rectangle4924ff01_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Rectangle766a4604_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Rectangle8e73e833_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Rectanglea67d8a66_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Rectangled3c2d169_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Rectangleebcc739c_;
// }

// C:\ProgramData\Uno\Packages\Fuse.Effects\0.19.3\.upk\meta
// ---------------------------------------------------------

// public static generated class Fuse_Effects_bundle :0
// {
// static Fuse_Effects_bundle() :0
static void Fuse_Effects_bundle__cctor__fn(uType* __type)
{
    Fuse_Effects_bundle::Blitterec98f148_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[123/*"uniform mat...*/], ::STRINGS[124/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[28/*"h"*/]));
    Fuse_Effects_bundle::Blur289a5370_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[125/*"uniform mat...*/], ::STRINGS[126/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[27/*"e"*/]));
    Fuse_Effects_bundle::Desaturate1f514108_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[127/*"uniform mat...*/], ::STRINGS[128/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"f"*/]));
    Fuse_Effects_bundle::EffectHelpers0ae20243_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[129/*"uniform vec...*/], ::STRINGS[130/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[45/*"m"*/]));
    Fuse_Effects_bundle::EffectHelpersa4726cf5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[131/*"attribute v...*/], ::STRINGS[132/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[28/*"h"*/]));
    Fuse_Effects_bundle::EffectHelpersf4e3f746_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[133/*"uniform vec...*/], ::STRINGS[134/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[69/*"t"*/]));
    Fuse_Effects_bundle::Halftone1ff68c3c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[135/*"uniform mat...*/], ::STRINGS[136/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[68/*"q"*/]));
    Fuse_Effects_bundle::Mask85b813a2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[137/*"uniform mat...*/], ::STRINGS[138/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/]));
    Fuse_Effects_bundle::Maske38913a2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[137/*"uniform mat...*/], ::STRINGS[139/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/]));
    Fuse_Effects_bundle::Maskfa5313a2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[137/*"uniform mat...*/], ::STRINGS[140/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/]));
}

uClassType* Fuse_Effects_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Effects_bundle", options);
    type->fp_cctor_ = Fuse_Effects_bundle__cctor__fn;
    ::STRINGS[123] = uString::Const("uniform mat4 f,b;attribute vec2 a;varying vec2 g;void main(){g=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(f*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[124] = uString::Const("uniform vec3 e;uniform float c,d;uniform sampler2D h;varying vec2 g;void main(){gl_FragColor=vec4(e,clamp(texture2D(h,g).w*c,float(0),float(1))*d);}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[28] = uString::Const("h");
    ::STRINGS[125] = uString::Const("uniform mat4 c,b;attribute vec2 a;varying vec2 d;void main(){d=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(c*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[126] = uString::Const("uniform sampler2D e;varying vec2 d;void main(){vec4 f=texture2D(e,d);gl_FragColor=vec4(f.xyz/f.w,f.w);}");
    ::STRINGS[127] = uString::Const("uniform mat4 d,b;attribute vec2 a;varying vec2 e;void main(){e=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(d*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[128] = uString::Const("uniform float c;uniform sampler2D f;varying vec2 e;void main(){vec4 g=texture2D(f,e);vec4 h=vec4(g.xyz/g.w,g.w);gl_FragColor=vec4(mix(h.xyz,vec3(sqrt(dot(h.xyz*h.xyz,vec3(.299,.587,.114)))),c),h.w);}");
    ::STRINGS[129] = uString::Const("uniform vec2 c,e,f,g;attribute vec2 a;varying vec2 h,i,j,k,l;void main(){vec3 n=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));vec2 o=(n.xy*.5)+.5;h=o;i=o+c;j=o+e;k=o+f;l=o+g;gl_Position=vec4(n,float(1));}");
    ::STRINGS[130] = uString::Const("uniform float b,d;uniform sampler2D m;varying vec2 h,i,j,k,l;void main(){gl_FragColor=((((texture2D(m,h)*b)+(texture2D(m,i)*d))+(texture2D(m,j)*d))+(texture2D(m,k)*d))+(texture2D(m,l)*d);}");
    ::STRINGS[31] = uString::Const("g");
    ::STRINGS[45] = uString::Const("m");
    ::STRINGS[131] = uString::Const("attribute vec2 a;varying vec2 g;void main(){vec3 j=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));g=(j.xy*.5)+.5;gl_Position=vec4(j,float(1));}");
    ::STRINGS[132] = uString::Const("uniform float e[b];uniform vec2 f[d];uniform sampler2D h;varying vec2 g;vec4 i(vec2 j){vec4 k=texture2D(h,j)*e[0];for(int l=0;l<c;++l){k=k+(texture2D(h,j+f[l])*e[1+l]);k=k+(texture2D(h,j-f[l])*e[1+l]);}return k;}void main(){gl_FragColor=i(g);}");
    ::STRINGS[133] = uString::Const("uniform vec2 c,e,f,h,i,j;attribute vec2 a;varying vec2 k,l,m,n,o,p,q,r,s;void main(){vec3 u=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));vec2 v=(u.xy*.5)+.5;k=v;l=v+c;m=v-c;n=v+e;o=v-e;p=v+f;q=v+h;r=v+i;s=v+j;gl_Position=vec4(u,float(1));}");
    ::STRINGS[134] = uString::Const("uniform float b,d,g;uniform sampler2D t;varying vec2 k,l,m,n,o,p,q,r,s;void main(){gl_FragColor=((((((((texture2D(t,k)*b)+(texture2D(t,l)*d))+(texture2D(t,m)*d))+(texture2D(t,n)*d))+(texture2D(t,o)*d))+(texture2D(t,p)*g))+(texture2D(t,q)*g))+(texture2D(t,r)*g))+(texture2D(t,s)*g);}");
    ::STRINGS[32] = uString::Const("i");
    ::STRINGS[33] = uString::Const("j");
    ::STRINGS[69] = uString::Const("t");
    ::STRINGS[135] = uString::Const("uniform mat4 m,b;uniform vec2 g,h;uniform mat2 i;attribute vec2 a;varying vec2 n,o,p;void main(){vec2 r=true?vec2(a.x,float(1)-a.y):a;vec2 s=(r*g)+h;n=r;o=i*s;p=s;gl_Position=b*(m*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[136] = uString::Const("uniform float c,d,e,f,k,l;uniform mat2 j;uniform sampler2D q;varying vec2 n,o,p;void main(){vec4 r=texture2D(q,n);gl_FragColor=mix(mix(vec4(float(1),float(1),float(1),r.w),r,c),mix(vec4(float(0),float(0),float(0),r.w),r,d),clamp(.5-((((((float(1)-sqrt((float(1)-dot(r.xyz*r.xyz,vec3(.299,.587,.114)))/3.14159274))*e)*f)-length(p-(j*((floor(o/e)+.5)*e))))*k)*l),float(0),float(1)));}");
    ::STRINGS[34] = uString::Const("k");
    ::STRINGS[35] = uString::Const("l");
    ::STRINGS[68] = uString::Const("q");
    ::STRINGS[137] = uString::Const("uniform mat4 c,b;attribute vec2 a;varying vec2 d,e;void main(){vec2 h=true?vec2(a.x,float(1)-a.y):a;d=h;e=vec2(h.x,float(1)-h.y);gl_Position=b*(c*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[138] = uString::Const("uniform sampler2D f,g;varying vec2 d,e;void main(){vec4 h=texture2D(f,d);vec4 i=vec4(h.xyz/h.w,h.w);gl_FragColor=vec4(i.xyz,i.w*texture2D(g,e).x);}");
    ::STRINGS[139] = uString::Const("uniform sampler2D f,g;varying vec2 d,e;void main(){vec4 h=texture2D(f,d);vec4 i=vec4(h.xyz/h.w,h.w);vec4 j=texture2D(g,e);gl_FragColor=vec4(i.xyz*j.xyz,i.w*j.w);}");
    ::STRINGS[140] = uString::Const("uniform sampler2D f,g;varying vec2 d,e;void main(){vec4 h=texture2D(f,d);vec4 i=vec4(h.xyz/h.w,h.w);gl_FragColor=vec4(i.xyz,i.w*texture2D(g,e).w);}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::Blitterec98f148_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::Blur289a5370_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::Desaturate1f514108_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::EffectHelpers0ae20243_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::EffectHelpersa4726cf5_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::EffectHelpersf4e3f746_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::Halftone1ff68c3c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::Mask85b813a2_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::Maske38913a2_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::Maskfa5313a2_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::Blitterec98f148_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::Blur289a5370_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::Desaturate1f514108_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::EffectHelpers0ae20243_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::EffectHelpersa4726cf5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::EffectHelpersf4e3f746_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::Halftone1ff68c3c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::Mask85b813a2_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::Maske38913a2_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::Maskfa5313a2_;
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\.upk\meta
// ----------------------------------------------------------

// public static generated class Fuse_Elements_bundle :0
// {
// static Fuse_Elements_bundle() :0
static void Fuse_Elements_bundle__cctor__fn(uType* __type)
{
    Fuse_Elements_bundle::CacheHelper6627cb47_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[141/*"uniform vec...*/], ::STRINGS[142/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[31/*"g"*/]));
    Fuse_Elements_bundle::ElementBatch2ee7bdf7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[143/*"uniform mat...*/], ::STRINGS[144/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/]));
    Fuse_Elements_bundle::ElementDraw14d18f42_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[145/*"uniform mat...*/], ::STRINGS[55/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    Fuse_Elements_bundle::Scale9Rectangle6cfacf09_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[146/*"uniform flo...*/], ::STRINGS[147/*"uniform vec...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/], ::STRINGS[60/*"p"*/], ::STRINGS[72/*"r"*/]));
}

uClassType* Fuse_Elements_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Elements_bundle", options);
    type->fp_cctor_ = Fuse_Elements_bundle__cctor__fn;
    ::STRINGS[141] = uString::Const("uniform vec2 b;uniform mat4 c,d;attribute vec2 a;varying vec2 f;void main(){f=vec2(a.x,1.-a.y);gl_Position=d*(c*vec4(a*b,float(0),float(1)));}");
    ::STRINGS[142] = uString::Const("uniform float e;uniform sampler2D g;varying vec2 f;void main(){vec4 h=texture2D(g,f);gl_FragColor=vec4(h.xyz*e,h.w*e);}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[31] = uString::Const("g");
    ::STRINGS[143] = uString::Const("uniform mat4 c;attribute vec3 a;attribute vec2 b;varying float d;varying vec2 e;void main(){d=a.z;e=vec2(b.x,1.-b.y);gl_Position=(a.z>float(0))?(c*vec4(a.xy,float(0),float(1))):vec4(float(0),float(0),float(0),float(-1));}");
    ::STRINGS[144] = uString::Const("uniform sampler2D f;varying float d;varying vec2 e;void main(){gl_FragColor=texture2D(f,e)*d;}");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[145] = uString::Const("uniform mat4 d,b;attribute vec2 a;void main(){gl_Position=b*(d*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[55] = uString::Const("uniform vec4 c;void main(){gl_FragColor=c;}");
    ::STRINGS[146] = uString::Const("uniform float c,d,e,f,g,h,k,l,m,n;uniform mat4 i,j;uniform vec2 o;attribute vec3 a,b;varying vec2 q;void main(){q=vec2(((a.x*c)+(a.y*k))+(a.z*l),((b.x*f)+(b.y*m))+(b.z*n))/o;gl_Position=j*(i*vec4(vec2(((a.x*c)+(a.y*d))+(a.z*e),((b.x*f)+(b.y*g))+(b.z*h)),float(0),float(1)));}");
    ::STRINGS[147] = uString::Const("uniform vec4 p;uniform sampler2D r;varying vec2 q;void main(){gl_FragColor=texture2D(r,q)*p;}");
    ::STRINGS[28] = uString::Const("h");
    ::STRINGS[32] = uString::Const("i");
    ::STRINGS[33] = uString::Const("j");
    ::STRINGS[34] = uString::Const("k");
    ::STRINGS[35] = uString::Const("l");
    ::STRINGS[45] = uString::Const("m");
    ::STRINGS[36] = uString::Const("n");
    ::STRINGS[63] = uString::Const("o");
    ::STRINGS[60] = uString::Const("p");
    ::STRINGS[72] = uString::Const("r");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Elements_bundle::CacheHelper6627cb47_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Elements_bundle::ElementBatch2ee7bdf7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Elements_bundle::ElementDraw14d18f42_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Elements_bundle::Scale9Rectangle6cfacf09_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Elements_bundle::CacheHelper6627cb47_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Elements_bundle::ElementBatch2ee7bdf7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Elements_bundle::ElementDraw14d18f42_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Elements_bundle::Scale9Rectangle6cfacf09_;
// }

// C:\ProgramData\Uno\Packages\Fuse.Entities\0.19.3\.upk\meta
// ----------------------------------------------------------

// public static generated class Fuse_Entities_bundle :0
// {
// static Fuse_Entities_bundle() :0
static void Fuse_Entities_bundle__cctor__fn(uType* __type)
{
    Fuse_Entities_bundle::Blitterf64cd8cd_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[148/*"attribute v...*/], ::STRINGS[149/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/]));
    Fuse_Entities_bundle::Blur6e490521_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[150/*"uniform vec...*/], ::STRINGS[151/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[28/*"h"*/]));
    Fuse_Entities_bundle::FindEdges5437027c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[152/*"uniform vec...*/], ::STRINGS[153/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[36/*"n"*/]));
    Fuse_Entities_bundle::MeshBatchingEngine54fb35e2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[154/*"uniform mat...*/], ::STRINGS[155/*"uniform vec...*/], 3, 4, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/], ::STRINGS[60/*"p"*/], ::STRINGS[109/*"v"*/], ::STRINGS[74/*"w"*/], ::STRINGS[118/*"x"*/]));
    Fuse_Entities_bundle::MeshBatchingEnginee840d347_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[156/*"uniform mat...*/], ::STRINGS[157/*"uniform vec...*/], 3, 5, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/], ::STRINGS[60/*"p"*/], ::STRINGS[68/*"q"*/], ::STRINGS[74/*"w"*/], ::STRINGS[118/*"x"*/], ::STRINGS[158/*"y"*/]));
    Fuse_Entities_bundle::MeshRenderer47c4cfe0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[159/*"uniform mat...*/], ::STRINGS[160/*"void main()...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/]));
    Fuse_Entities_bundle::MeshRendererb55bfadc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[161/*"uniform mat...*/], ::STRINGS[162/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/]));
    Fuse_Entities_bundle::RenderToTexturea069a95b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[163/*"attribute v...*/], ::STRINGS[149/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/]));
}

uClassType* Fuse_Entities_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Entities_bundle", options);
    type->fp_cctor_ = Fuse_Entities_bundle__cctor__fn;
    ::STRINGS[148] = uString::Const("attribute vec2 a;varying vec2 b;void main(){vec3 d=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));b=(d.xy*.5)+.5;gl_Position=vec4(d,float(1));}");
    ::STRINGS[149] = uString::Const("uniform sampler2D c;varying vec2 b;void main(){gl_FragColor=texture2D(c,b);}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[150] = uString::Const("uniform vec2 b,c;attribute vec2 a;varying vec2 d,e,f,g;void main(){vec3 i=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));vec2 j=(i.xy*.5)+.5;d=j+b;e=j-b;f=j+c;g=j-c;gl_Position=vec4(i,float(1));}");
    ::STRINGS[151] = uString::Const("uniform sampler2D h;varying vec2 d,e,f,g;void main(){gl_FragColor=(((texture2D(h,d)+texture2D(h,e))+texture2D(h,f))+texture2D(h,g))*.25;}");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[28] = uString::Const("h");
    ::STRINGS[152] = uString::Const("uniform vec2 b,c,d,e;attribute vec2 a;varying vec2 i,j,k,l,m;void main(){vec2 o=vec2(a.x,1.-a.y);vec2 p=vec2(o.x,1.-o.y);i=p+b;j=p+c;k=p+d;l=p+e;m=p;gl_Position=vec4(vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0)),float(1));}");
    ::STRINGS[153] = uString::Const("uniform float f;uniform vec4 g,h;uniform sampler2D n;varying vec2 i,j,k,l,m;void main(){vec3 o=texture2D(n,m).xyz;float p=min(1.,(((length(texture2D(n,i).xyz-o)+length(texture2D(n,j).xyz-o))+length(texture2D(n,k).xyz-o))+length(texture2D(n,l).xyz-o))*f);gl_FragColor=(g*(1.-p))+(h*p);}");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[31] = uString::Const("g");
    ::STRINGS[36] = uString::Const("n");
    ::STRINGS[154] = uString::Const("uniform mat4 o,l,p;uniform vec2 h,i;attribute vec3 a,d;attribute vec2 b;attribute vec4 c;varying vec3 q,r,s,u;varying vec2 t;void main(){q=mat3(p[0].xyz,p[1].xyz,p[2].xyz)*c.xyz;r=mat3(p[0].xyz,p[1].xyz,p[2].xyz)*(cross(c.xyz,d)*c.w);s=mat3(p[0].xyz,p[1].xyz,p[2].xyz)*d;t=(b*h)+i;u=(l*vec4(a,1.)).xyz;gl_Position=o*vec4(a,1.);}");
    ::STRINGS[155] = uString::Const("uniform vec3 j,k,m;uniform float n;uniform sampler2D v,w,x;varying vec3 q,r,s,u;varying vec2 t;void main(){vec3 y=j*(e?texture2D(v,t):vec4(float(1))).xyz;vec3 z=mat3(normalize(q),normalize(r),normalize(s))*(f?normalize((texture2D(w,t).xyz*2.)-1.):vec3(float(0),float(0),float(1)));vec3 A=normalize(vec3(float(100),float(0),float(100)));gl_FragColor=vec4(((y*vec3(.5))+((y*max(.0,dot(normalize(z),A)))*vec3(float(1))))+(((k*(g?texture2D(x,t):vec4(float(1))).xyz)*pow(max(.0,dot(normalize(reflect(u-m,z)),A)),n))*vec3(float(1))),1.);}");
    ::STRINGS[32] = uString::Const("i");
    ::STRINGS[33] = uString::Const("j");
    ::STRINGS[34] = uString::Const("k");
    ::STRINGS[35] = uString::Const("l");
    ::STRINGS[45] = uString::Const("m");
    ::STRINGS[63] = uString::Const("o");
    ::STRINGS[60] = uString::Const("p");
    ::STRINGS[109] = uString::Const("v");
    ::STRINGS[74] = uString::Const("w");
    ::STRINGS[118] = uString::Const("x");
    ::STRINGS[156] = uString::Const("uniform mat4 i[16],q,m[16];uniform vec2 j,k;attribute vec3 a,e;attribute float b;attribute vec2 c;attribute vec4 d;varying vec3 r,s,t,v;varying vec2 u;mat3 z(mat3 A){return mat3(A[0].x,A[1].x,A[2].x,A[0].y,A[1].y,A[2].y,A[0].z,A[1].z,A[2].z);}void main(){mat3 A=z(mat3(m[int(b)][0].xyz,m[int(b)][1].xyz,m[int(b)][2].xyz));r=A*d.xyz;s=A*(cross(d.xyz,e)*d.w);t=A*e;u=(c*j)+k;v=(i[int(b)]*vec4(a,1.)).xyz;gl_Position=(q*i[int(b)])*vec4(a,1.);}");
    ::STRINGS[157] = uString::Const("uniform vec3 l,n,o;uniform float p;uniform sampler2D w,x,y;varying vec3 r,s,t,v;varying vec2 u;void main(){vec3 A=l*(f?texture2D(w,u):vec4(float(1))).xyz;vec3 B=mat3(normalize(r),normalize(s),normalize(t))*(g?normalize((texture2D(x,u).xyz*2.)-1.):vec3(float(0),float(0),float(1)));vec3 C=normalize(vec3(float(100),float(0),float(100)));gl_FragColor=vec4(((A*vec3(.5))+((A*max(.0,dot(normalize(B),C)))*vec3(float(1))))+(((n*(h?texture2D(y,u):vec4(float(1))).xyz)*pow(max(.0,dot(normalize(reflect(v-o,B)),C)),p))*vec3(float(1))),1.);}");
    ::STRINGS[68] = uString::Const("q");
    ::STRINGS[158] = uString::Const("y");
    ::STRINGS[159] = uString::Const("uniform mat4 b;attribute vec3 a;void main(){gl_Position=b*vec4(a,1.);}");
    ::STRINGS[160] = uString::Const("void main(){gl_FragColor=vec4(.8,.85,1.,1.);}");
    ::STRINGS[161] = uString::Const("uniform mat4 c;attribute vec3 a;void main(){gl_Position=c*vec4(a,1.);}");
    ::STRINGS[162] = uString::Const("uniform vec4 b;void main(){gl_FragColor=b;}");
    ::STRINGS[163] = uString::Const("attribute vec2 a;varying vec2 b;void main(){vec3 d=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));b=(d.xy*vec2(.5,-0.5))+.5;gl_Position=vec4(d,float(1));}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Entities_bundle::Blitterf64cd8cd_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Entities_bundle::Blur6e490521_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Entities_bundle::FindEdges5437027c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Entities_bundle::MeshBatchingEngine54fb35e2_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Entities_bundle::MeshBatchingEnginee840d347_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Entities_bundle::MeshRenderer47c4cfe0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Entities_bundle::MeshRendererb55bfadc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Entities_bundle::RenderToTexturea069a95b_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Entities_bundle::Blitterf64cd8cd_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Entities_bundle::Blur6e490521_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Entities_bundle::FindEdges5437027c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Entities_bundle::MeshBatchingEngine54fb35e2_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Entities_bundle::MeshBatchingEnginee840d347_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Entities_bundle::MeshRenderer47c4cfe0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Entities_bundle::MeshRendererb55bfadc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Entities_bundle::RenderToTexturea069a95b_;
// }

// C:\ProgramData\Uno\Packages\Fuse.Themes\0.19.3\.upk\meta
// --------------------------------------------------------

// public static generated class Fuse_Themes_bundle :0
// {
// static Fuse_Themes_bundle() :0
static void Fuse_Themes_bundle__cctor__fn(uType* __type)
{
    Fuse_Themes_bundle::Roboto_Regularf1c3c1ef_ = ::g::Uno::BundleFile::New1(::STRINGS[16/*"roboto-regu...*/]);
}

uClassType* Fuse_Themes_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Themes_bundle", options);
    type->fp_cctor_ = Fuse_Themes_bundle__cctor__fn;
    ::STRINGS[16] = uString::Const("roboto-regular-3d22e02e.ttf");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_Themes_bundle::Roboto_Regularf1c3c1ef_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::BundleFile*> Fuse_Themes_bundle::Roboto_Regularf1c3c1ef_;
// }

// C:\ProgramData\Uno\Packages\Fuse.Video\0.19.3\.upk\meta
// -------------------------------------------------------

// public static generated class Fuse_Video_bundle :0
// {
// static Fuse_Video_bundle() :0
static void Fuse_Video_bundle__cctor__fn(uType* __type)
{
    Fuse_Video_bundle::Scale9Rectangleaf9f430d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[164/*"uniform flo...*/], ::STRINGS[165/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[45/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[63/*"o"*/], ::STRINGS[68/*"q"*/]));
    Fuse_Video_bundle::VideoDrawElementc2e30808_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[166/*"uniform mat...*/], ::STRINGS[167/*"uniform sam...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[28/*"h"*/]));
}

uClassType* Fuse_Video_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Video_bundle", options);
    type->fp_cctor_ = Fuse_Video_bundle__cctor__fn;
    ::STRINGS[164] = uString::Const("uniform float c,d,e,f,g,h,k,l,m,n;uniform mat4 i,j;uniform vec2 o;attribute vec3 a,b;varying vec2 p;void main(){p=vec2(((a.x*c)+(a.y*k))+(a.z*l),((b.x*f)+(b.y*m))+(b.z*n))/o;gl_Position=j*(i*vec4(vec2(((a.x*c)+(a.y*d))+(a.z*e),((b.x*f)+(b.y*g))+(b.z*h)),float(0),float(1)));}");
    ::STRINGS[165] = uString::Const("uniform samplerExternalOES q;varying vec2 p;void main(){gl_FragColor=vec4(texture2D(q,p).xyz,1.);}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[31] = uString::Const("g");
    ::STRINGS[28] = uString::Const("h");
    ::STRINGS[32] = uString::Const("i");
    ::STRINGS[33] = uString::Const("j");
    ::STRINGS[34] = uString::Const("k");
    ::STRINGS[35] = uString::Const("l");
    ::STRINGS[45] = uString::Const("m");
    ::STRINGS[36] = uString::Const("n");
    ::STRINGS[63] = uString::Const("o");
    ::STRINGS[68] = uString::Const("q");
    ::STRINGS[166] = uString::Const("uniform mat4 f,c;uniform vec2 d,e;attribute vec2 a;varying vec2 g;void main(){vec2 i=(a*d)+e;g=b?vec2(i.x,1.-i.y):vec2(i.x,i.y);gl_Position=c*(f*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[167] = uString::Const("uniform samplerExternalOES h;varying vec2 g;void main(){gl_FragColor=vec4(texture2D(h,g).xyz,1.);}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Video_bundle::Scale9Rectangleaf9f430d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Video_bundle::VideoDrawElementc2e30808_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Video_bundle::Scale9Rectangleaf9f430d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Video_bundle::VideoDrawElementc2e30808_;
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\.upk\meta
// -----------------------------------------------------

// public static generated class FuseCore_bundle :0
// {
// static FuseCore_bundle() :0
static void FuseCore_bundle__cctor__fn(uType* __type)
{
    FuseCore_bundle::DrawHelpers53a11bf4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[168/*"uniform vec...*/], ::STRINGS[169/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/]));
    FuseCore_bundle::OpenSans_Light2d3bea71_ = ::g::Uno::BundleFile::New1(::STRINGS[170/*"opensans-li...*/]);
}

uClassType* FuseCore_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseCore_bundle", options);
    type->fp_cctor_ = FuseCore_bundle__cctor__fn;
    ::STRINGS[168] = uString::Const("uniform vec2 c,b;uniform mat4 d;attribute vec2 a;void main(){gl_Position=d*vec4(c+(a*b),float(0),float(1));}");
    ::STRINGS[169] = uString::Const("uniform vec4 e;void main(){gl_FragColor=e;}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[170] = uString::Const("opensans-light-1d1a1a95.ttf");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseCore_bundle::DrawHelpers53a11bf4_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseCore_bundle::OpenSans_Light2d3bea71_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseCore_bundle::DrawHelpers53a11bf4_;
uSStrong< ::g::Uno::BundleFile*> FuseCore_bundle::OpenSans_Light2d3bea71_;
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\.upk\meta
// ----------------------------------------------------

// public static generated class UnoCore_bundle :0
// {
// static UnoCore_bundle() :0
static void UnoCore_bundle__cctor__fn(uType* __type)
{
    UnoCore_bundle::SdfFontShadere233cf94_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[171/*"uniform mat...*/], ::STRINGS[172/*"uniform flo...*/], 0, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[32/*"i"*/]));
    UnoCore_bundle::SpriteFontShaderf6f3aa43_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[173/*"uniform mat...*/], ::STRINGS[174/*"uniform sam...*/], 0, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[31/*"g"*/]));
}

uClassType* UnoCore_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("UnoCore_bundle", options);
    type->fp_cctor_ = UnoCore_bundle__cctor__fn;
    ::STRINGS[171] = uString::Const("uniform mat4 d;attribute vec2 a,b;attribute vec4 c;varying vec2 g;varying vec4 h;void main(){g=b;h=c;gl_Position=d*vec4(a,float(0),float(1));}");
    ::STRINGS[172] = uString::Const("uniform float e,f;uniform sampler2D i;varying vec2 g;varying vec4 h;void main(){float j=smoothstep(e,f,texture2D(i,g).x);if (j<.15) discard;gl_FragColor=h*vec4(float(1),float(1),float(1),j);}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[32] = uString::Const("i");
    ::STRINGS[173] = uString::Const("uniform mat4 d;attribute vec2 a,c;attribute vec4 b;varying vec2 e;varying vec4 f;void main(){e=c;f=b;gl_Position=d*vec4(a,float(0),float(1));}");
    ::STRINGS[174] = uString::Const("uniform sampler2D g;varying vec2 e;varying vec4 f;void main(){gl_FragColor=f*vec4(float(1),float(1),float(1),texture2D(g,e).x);}");
    ::STRINGS[31] = uString::Const("g");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::UnoCore_bundle::SdfFontShadere233cf94_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::UnoCore_bundle::SpriteFontShaderf6f3aa43_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> UnoCore_bundle::SdfFontShadere233cf94_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> UnoCore_bundle::SpriteFontShaderf6f3aa43_;
// }

} // ::g

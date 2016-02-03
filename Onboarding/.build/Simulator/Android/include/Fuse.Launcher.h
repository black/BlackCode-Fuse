// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Launcher\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Launcher;}}
namespace g{namespace Uno{namespace Net{namespace Http{struct Uri;}}}}

namespace g{
namespace Fuse{

// public static class Launcher :20
// {
uClassType* Launcher_typeof();
void Launcher___launchMaps_fn(uString* uri);
void Launcher__LaunchCall_fn(uString* callString);
void Launcher__LaunchEmail_fn(uString* to, uString* carbonCopy, uString* blindCarbonCopy, uString* subject, uString* message);
void Launcher__LaunchMaps_fn(double* latitude, double* longitude);
void Launcher__LaunchMaps1_fn(double* latitude, double* longitude, uString* query);
void Launcher__LaunchMaps2_fn(uString* query);
void Launcher__LaunchUri_fn(::g::Uno::Net::Http::Uri* uri);

struct Launcher : uObject
{
    static void _launchMaps(uString* uri);
    static void LaunchCall(uString* callString);
    static void LaunchEmail(uString* to, uString* carbonCopy, uString* blindCarbonCopy, uString* subject, uString* message);
    static void LaunchMaps(double latitude, double longitude);
    static void LaunchMaps1(double latitude, double longitude, uString* query);
    static void LaunchMaps2(uString* query);
    static void LaunchUri(::g::Uno::Net::Http::Uri* uri);
};
// }

}} // ::g::Fuse

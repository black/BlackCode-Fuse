// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace GeoLocation{struct GeoCoordinates;}}}

namespace g{
namespace Fuse{
namespace GeoLocation{

// public sealed class GeoCoordinates :7
// {
uType* GeoCoordinates_typeof();
void GeoCoordinates__ctor__fn(GeoCoordinates* __this, double* latitude, double* longitude);
void GeoCoordinates__get_Latitude_fn(GeoCoordinates* __this, double* __retval);
void GeoCoordinates__get_Longitude_fn(GeoCoordinates* __this, double* __retval);
void GeoCoordinates__New1_fn(double* latitude, double* longitude, GeoCoordinates** __retval);
void GeoCoordinates__ToString_fn(GeoCoordinates* __this, uString** __retval);

struct GeoCoordinates : uObject
{
    double _lat;
    double _long;

    void ctor_(double latitude, double longitude);
    double Latitude();
    double Longitude();
    static GeoCoordinates* New1(double latitude, double longitude);
};
// }

}}} // ::g::Fuse::GeoLocation

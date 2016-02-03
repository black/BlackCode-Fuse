// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_LIST_EXTENSIONS_H__
#define __APP_UNO_COLLECTIONS_I_LIST_EXTENSIONS_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }
namespace app { namespace Fuse { namespace Layouts { struct Column; } } }
namespace app { namespace Fuse { namespace Layouts { struct Row; } } }
namespace app { namespace Fuse { struct RenderTargetEntry; } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlNodeHandle; } } } }
namespace app { namespace Uno { struct Int4; } }

namespace app {
namespace Uno {
namespace Collections {

struct IListExtensions__uType : ::uClassType
{
};

IListExtensions__uType* IListExtensions__typeof();

void IListExtensions__AddRange__Fuse_Behavior(::uStatic* __this, ::uObject* self, ::uObject* collection);
void IListExtensions__AddRange__Uno_UX_Resource(::uStatic* __this, ::uObject* self, ::uObject* collection);
::app::Fuse::Entities::Entity* IListExtensions__Last__Fuse_Entities_Entity(::uStatic* __this, ::uObject* self);
::app::Uno::Data::Xml::XmlNodeHandle* IListExtensions__Last__Uno_Data_Xml_XmlNodeHandle(::uStatic* __this, ::uObject* self);
::app::Fuse::Entities::Entity* IListExtensions__RemoveLast__Fuse_Entities_Entity(::uStatic* __this, ::uObject* self);
::uObject* IListExtensions__RemoveLast__Fuse_IViewport(::uStatic* __this, ::uObject* self);
::app::Fuse::Layouts::Column* IListExtensions__RemoveLast__Fuse_Layouts_Column(::uStatic* __this, ::uObject* self);
::app::Fuse::Layouts::Row* IListExtensions__RemoveLast__Fuse_Layouts_Row(::uStatic* __this, ::uObject* self);
::app::Fuse::RenderTargetEntry* IListExtensions__RemoveLast__Fuse_RenderTargetEntry(::uStatic* __this, ::uObject* self);
::app::Uno::Int4 IListExtensions__RemoveLast__int4(::uStatic* __this, ::uObject* self);
int IListExtensions__RemoveLast__Uno_Graphics_PolygonFace(::uStatic* __this, ::uObject* self);

}}}


#endif

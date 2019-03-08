// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/NS.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.Element.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct NS_FuseElementsElement_ElementLayoutMaster_Property;}

namespace g{

// internal sealed class NS_FuseElementsElement_ElementLayoutMaster_Property :78
// {
::g::Uno::UX::Property1_type* NS_FuseElementsElement_ElementLayoutMaster_Property_typeof();
void NS_FuseElementsElement_ElementLayoutMaster_Property__ctor_3_fn(NS_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void NS_FuseElementsElement_ElementLayoutMaster_Property__Get1_fn(NS_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Elements::Element** __retval);
void NS_FuseElementsElement_ElementLayoutMaster_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, NS_FuseElementsElement_ElementLayoutMaster_Property** __retval);
void NS_FuseElementsElement_ElementLayoutMaster_Property__get_Object_fn(NS_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void NS_FuseElementsElement_ElementLayoutMaster_Property__Set1_fn(NS_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Elements::Element* v, uObject* origin);

struct NS_FuseElementsElement_ElementLayoutMaster_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static NS_FuseElementsElement_ElementLayoutMaster_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g

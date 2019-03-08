// This file was generated based on /Users/yeom/Documents/NS/build/iOS/Preview/cache/ux15/NS.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct NS_FuseElementsElement_Width_Property;}

namespace g{

// internal sealed class NS_FuseElementsElement_Width_Property :111
// {
::g::Uno::UX::Property1_type* NS_FuseElementsElement_Width_Property_typeof();
void NS_FuseElementsElement_Width_Property__ctor_3_fn(NS_FuseElementsElement_Width_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void NS_FuseElementsElement_Width_Property__Get1_fn(NS_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* __retval);
void NS_FuseElementsElement_Width_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, NS_FuseElementsElement_Width_Property** __retval);
void NS_FuseElementsElement_Width_Property__get_Object_fn(NS_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void NS_FuseElementsElement_Width_Property__Set1_fn(NS_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* v, uObject* origin);

struct NS_FuseElementsElement_Width_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static NS_FuseElementsElement_Width_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g

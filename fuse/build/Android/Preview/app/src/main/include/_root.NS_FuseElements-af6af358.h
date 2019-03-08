// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/NS.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.Visibility.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct NS_FuseElementsElement_Visibility_Property;}

namespace g{

// internal sealed class NS_FuseElementsElement_Visibility_Property :94
// {
::g::Uno::UX::Property1_type* NS_FuseElementsElement_Visibility_Property_typeof();
void NS_FuseElementsElement_Visibility_Property__ctor_3_fn(NS_FuseElementsElement_Visibility_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void NS_FuseElementsElement_Visibility_Property__Get1_fn(NS_FuseElementsElement_Visibility_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* __retval);
void NS_FuseElementsElement_Visibility_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, NS_FuseElementsElement_Visibility_Property** __retval);
void NS_FuseElementsElement_Visibility_Property__get_Object_fn(NS_FuseElementsElement_Visibility_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void NS_FuseElementsElement_Visibility_Property__Set1_fn(NS_FuseElementsElement_Visibility_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* v, uObject* origin);
void NS_FuseElementsElement_Visibility_Property__get_SupportsOriginSetter_fn(NS_FuseElementsElement_Visibility_Property* __this, bool* __retval);

struct NS_FuseElementsElement_Visibility_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static NS_FuseElementsElement_Visibility_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g

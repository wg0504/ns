// This file was generated based on /Users/yeom/Documents/NS/build/iOS/Preview/cache/ux15/NS.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.Element.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Animations{struct Change;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct NS_FuseAnimationsChangeFuseElementsElement_Value_Property;}

namespace g{

// internal sealed class NS_FuseAnimationsChangeFuseElementsElement_Value_Property :86
// {
::g::Uno::UX::Property1_type* NS_FuseAnimationsChangeFuseElementsElement_Value_Property_typeof();
void NS_FuseAnimationsChangeFuseElementsElement_Value_Property__ctor_3_fn(NS_FuseAnimationsChangeFuseElementsElement_Value_Property* __this, ::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector* name);
void NS_FuseAnimationsChangeFuseElementsElement_Value_Property__Get1_fn(NS_FuseAnimationsChangeFuseElementsElement_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Elements::Element** __retval);
void NS_FuseAnimationsChangeFuseElementsElement_Value_Property__New1_fn(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector* name, NS_FuseAnimationsChangeFuseElementsElement_Value_Property** __retval);
void NS_FuseAnimationsChangeFuseElementsElement_Value_Property__get_Object_fn(NS_FuseAnimationsChangeFuseElementsElement_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void NS_FuseAnimationsChangeFuseElementsElement_Value_Property__Set1_fn(NS_FuseAnimationsChangeFuseElementsElement_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Elements::Element* v, uObject* origin);

struct NS_FuseAnimationsChangeFuseElementsElement_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Animations::Change*> _obj;

    void ctor_3(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector name);
    static NS_FuseAnimationsChangeFuseElementsElement_Value_Property* New1(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g

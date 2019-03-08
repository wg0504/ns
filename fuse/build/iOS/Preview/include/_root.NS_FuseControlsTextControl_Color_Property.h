// This file was generated based on /Users/yeom/Documents/NS/build/iOS/Preview/cache/ux15/NS.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct NS_FuseControlsTextControl_Color_Property;}

namespace g{

// internal sealed class NS_FuseControlsTextControl_Color_Property :69
// {
::g::Uno::UX::Property1_type* NS_FuseControlsTextControl_Color_Property_typeof();
void NS_FuseControlsTextControl_Color_Property__ctor_3_fn(NS_FuseControlsTextControl_Color_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name);
void NS_FuseControlsTextControl_Color_Property__Get1_fn(NS_FuseControlsTextControl_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void NS_FuseControlsTextControl_Color_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, NS_FuseControlsTextControl_Color_Property** __retval);
void NS_FuseControlsTextControl_Color_Property__get_Object_fn(NS_FuseControlsTextControl_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void NS_FuseControlsTextControl_Color_Property__Set1_fn(NS_FuseControlsTextControl_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);
void NS_FuseControlsTextControl_Color_Property__get_SupportsOriginSetter_fn(NS_FuseControlsTextControl_Color_Property* __this, bool* __retval);

struct NS_FuseControlsTextControl_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
    static NS_FuseControlsTextControl_Color_Property* New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g

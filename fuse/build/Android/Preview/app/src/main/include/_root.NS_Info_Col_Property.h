// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/NS.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Info;}
namespace g{struct NS_Info_Col_Property;}

namespace g{

// internal sealed class NS_Info_Col_Property :135
// {
::g::Uno::UX::Property1_type* NS_Info_Col_Property_typeof();
void NS_Info_Col_Property__ctor_3_fn(NS_Info_Col_Property* __this, ::g::Info* obj, ::g::Uno::UX::Selector* name);
void NS_Info_Col_Property__Get1_fn(NS_Info_Col_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void NS_Info_Col_Property__New1_fn(::g::Info* obj, ::g::Uno::UX::Selector* name, NS_Info_Col_Property** __retval);
void NS_Info_Col_Property__get_Object_fn(NS_Info_Col_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void NS_Info_Col_Property__Set1_fn(NS_Info_Col_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void NS_Info_Col_Property__get_SupportsOriginSetter_fn(NS_Info_Col_Property* __this, bool* __retval);

struct NS_Info_Col_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Info*> _obj;

    void ctor_3(::g::Info* obj, ::g::Uno::UX::Selector name);
    static NS_Info_Col_Property* New1(::g::Info* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g

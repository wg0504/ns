// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/NS.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct NS_accessor_Info_Name;}

namespace g{

// internal sealed class NS_accessor_Info_Name :31
// {
::g::Uno::UX::PropertyAccessor_type* NS_accessor_Info_Name_typeof();
void NS_accessor_Info_Name__ctor_1_fn(NS_accessor_Info_Name* __this);
void NS_accessor_Info_Name__GetAsObject_fn(NS_accessor_Info_Name* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void NS_accessor_Info_Name__get_Name_fn(NS_accessor_Info_Name* __this, ::g::Uno::UX::Selector* __retval);
void NS_accessor_Info_Name__New1_fn(NS_accessor_Info_Name** __retval);
void NS_accessor_Info_Name__get_PropertyType_fn(NS_accessor_Info_Name* __this, uType** __retval);
void NS_accessor_Info_Name__SetAsObject_fn(NS_accessor_Info_Name* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void NS_accessor_Info_Name__get_SupportsOriginSetter_fn(NS_accessor_Info_Name* __this, bool* __retval);

struct NS_accessor_Info_Name : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return NS_accessor_Info_Name_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return NS_accessor_Info_Name_typeof()->Init(), _name_; }

    void ctor_1();
    static NS_accessor_Info_Name* New1();
};
// }

} // ::g

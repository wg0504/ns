// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/NS.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct NS_accessor_ChartPage_Title;}

namespace g{

// internal sealed class NS_accessor_ChartPage_Title :11
// {
::g::Uno::UX::PropertyAccessor_type* NS_accessor_ChartPage_Title_typeof();
void NS_accessor_ChartPage_Title__ctor_1_fn(NS_accessor_ChartPage_Title* __this);
void NS_accessor_ChartPage_Title__GetAsObject_fn(NS_accessor_ChartPage_Title* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void NS_accessor_ChartPage_Title__get_Name_fn(NS_accessor_ChartPage_Title* __this, ::g::Uno::UX::Selector* __retval);
void NS_accessor_ChartPage_Title__New1_fn(NS_accessor_ChartPage_Title** __retval);
void NS_accessor_ChartPage_Title__get_PropertyType_fn(NS_accessor_ChartPage_Title* __this, uType** __retval);
void NS_accessor_ChartPage_Title__SetAsObject_fn(NS_accessor_ChartPage_Title* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void NS_accessor_ChartPage_Title__get_SupportsOriginSetter_fn(NS_accessor_ChartPage_Title* __this, bool* __retval);

struct NS_accessor_ChartPage_Title : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return NS_accessor_ChartPage_Title_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return NS_accessor_ChartPage_Title_typeof()->Init(), _name_; }

    void ctor_1();
    static NS_accessor_ChartPage_Title* New1();
};
// }

} // ::g

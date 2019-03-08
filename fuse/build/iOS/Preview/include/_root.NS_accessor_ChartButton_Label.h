// This file was generated based on /Users/yeom/Documents/NS/build/iOS/Preview/cache/ux15/NS.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct NS_accessor_ChartButton_Label;}

namespace g{

// internal sealed class NS_accessor_ChartButton_Label :1
// {
::g::Uno::UX::PropertyAccessor_type* NS_accessor_ChartButton_Label_typeof();
void NS_accessor_ChartButton_Label__ctor_1_fn(NS_accessor_ChartButton_Label* __this);
void NS_accessor_ChartButton_Label__GetAsObject_fn(NS_accessor_ChartButton_Label* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void NS_accessor_ChartButton_Label__get_Name_fn(NS_accessor_ChartButton_Label* __this, ::g::Uno::UX::Selector* __retval);
void NS_accessor_ChartButton_Label__New1_fn(NS_accessor_ChartButton_Label** __retval);
void NS_accessor_ChartButton_Label__get_PropertyType_fn(NS_accessor_ChartButton_Label* __this, uType** __retval);
void NS_accessor_ChartButton_Label__SetAsObject_fn(NS_accessor_ChartButton_Label* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void NS_accessor_ChartButton_Label__get_SupportsOriginSetter_fn(NS_accessor_ChartButton_Label* __this, bool* __retval);

struct NS_accessor_ChartButton_Label : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return NS_accessor_ChartButton_Label_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return NS_accessor_ChartButton_Label_typeof()->Init(), _name_; }

    void ctor_1();
    static NS_accessor_ChartButton_Label* New1();
};
// }

} // ::g

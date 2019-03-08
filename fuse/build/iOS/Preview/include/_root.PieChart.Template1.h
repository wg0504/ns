// This file was generated based on /Users/yeom/Documents/NS/build/iOS/Preview/cache/ux15/PieChart.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct PieChart;}
namespace g{struct PieChart__Template1;}

namespace g{

// public partial sealed class PieChart.Template1 :62
// {
::g::Uno::UX::Template_type* PieChart__Template1_typeof();
void PieChart__Template1__ctor_1_fn(PieChart__Template1* __this, ::g::PieChart* parent, ::g::PieChart* parentInstance);
void PieChart__Template1__New1_fn(PieChart__Template1* __this, uObject** __retval);
void PieChart__Template1__New2_fn(::g::PieChart* parent, ::g::PieChart* parentInstance, PieChart__Template1** __retval);

struct PieChart__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::PieChart*> __parent1;
    uWeak< ::g::PieChart*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> __self_Color_inst1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return PieChart__Template1_typeof()->Init(), __selector0_; }

    void ctor_1(::g::PieChart* parent, ::g::PieChart* parentInstance);
    static PieChart__Template1* New2(::g::PieChart* parent, ::g::PieChart* parentInstance);
};
// }

} // ::g

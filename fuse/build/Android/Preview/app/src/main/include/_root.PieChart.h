// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/PieChart.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Animations{struct AttractorConfig;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct PieChart;}

namespace g{

// public partial sealed class PieChart :2
// {
::g::Fuse::Controls::Panel_type* PieChart_typeof();
void PieChart__ctor_8_fn(PieChart* __this);
void PieChart__InitializeUX_fn(PieChart* __this);
void PieChart__New5_fn(PieChart** __retval);

struct PieChart : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Uno::UX::Property1*> temp_Data_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Items_inst;
    static uSStrong< ::g::Fuse::Animations::AttractorConfig*> pieAttract_;
    static uSStrong< ::g::Fuse::Animations::AttractorConfig*>& pieAttract() { return PieChart_typeof()->Init(), pieAttract_; }
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return PieChart_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return PieChart_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return PieChart_typeof()->Init(), __selector1_; }

    void ctor_8();
    void InitializeUX();
    static PieChart* New5();
};
// }

} // ::g

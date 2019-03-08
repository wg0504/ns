// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/ChartPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Container.h>
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
namespace g{namespace Fuse{namespace Controls{struct DockPanel;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ChartPage;}

namespace g{

// public partial sealed class ChartPage :2
// {
::g::Fuse::Controls::Panel_type* ChartPage_typeof();
void ChartPage__ctor_8_fn(ChartPage* __this);
void ChartPage__get_File_fn(ChartPage* __this, uString** __retval);
void ChartPage__set_File_fn(ChartPage* __this, uString* value);
void ChartPage__InitializeUX_fn(ChartPage* __this);
void ChartPage__New5_fn(ChartPage** __retval);
void ChartPage__SetFile_fn(ChartPage* __this, uString* value, uObject* origin);
void ChartPage__SetTitle_fn(ChartPage* __this, uString* value, uObject* origin);
void ChartPage__get_Title_fn(ChartPage* __this, uString** __retval);
void ChartPage__set_Title_fn(ChartPage* __this, uString* value);

struct ChartPage : ::g::Fuse::Controls::Container
{
    uStrong<uString*> _field_Title;
    uStrong<uString*> _field_File;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> fileText_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> chart_Element_LayoutMaster_inst;
    uStrong< ::g::Uno::UX::Property1*> fileText_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Fuse::Controls::DockPanel*> chart;
    uStrong< ::g::Fuse::Controls::Text*> fileText;
    uStrong< ::g::Fuse::Controls::Panel*> inner;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> showFull;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ChartPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ChartPage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ChartPage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return ChartPage_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return ChartPage_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return ChartPage_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return ChartPage_typeof()->Init(), __selector6_; }

    void ctor_8();
    uString* File();
    void File(uString* value);
    void InitializeUX();
    void SetFile(uString* value, uObject* origin);
    void SetTitle(uString* value, uObject* origin);
    uString* Title();
    void Title(uString* value);
    static ChartPage* New5();
};
// }

} // ::g

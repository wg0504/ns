// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/ChartButton.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Drawing.IDrawObj-d34d045e.h>
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
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ChartButton;}

namespace g{

// public partial sealed class ChartButton :2
// {
::g::Fuse::Controls::Shape_type* ChartButton_typeof();
void ChartButton__ctor_8_fn(ChartButton* __this);
void ChartButton__InitializeUX_fn(ChartButton* __this);
void ChartButton__get_Label_fn(ChartButton* __this, uString** __retval);
void ChartButton__set_Label_fn(ChartButton* __this, uString* value);
void ChartButton__New4_fn(ChartButton** __retval);
void ChartButton__SetLabel_fn(ChartButton* __this, uString* value, uObject* origin);

struct ChartButton : ::g::Fuse::Controls::Rectangle
{
    uStrong<uString*> _field_Label;
    uStrong< ::g::Uno::UX::Property1*> label_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> label_Color_inst;
    uStrong< ::g::Fuse::Controls::Text*> label;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ChartButton_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ChartButton_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ChartButton_typeof()->Init(), __selector2_; }

    void ctor_8();
    void InitializeUX();
    uString* Label();
    void Label(uString* value);
    void SetLabel(uString* value, uObject* origin);
    static ChartButton* New4();
};
// }

} // ::g

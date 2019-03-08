// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/Info.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
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
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Info;}

namespace g{

// public partial sealed class Info :2
// {
::g::Fuse::Controls::Panel_type* Info_typeof();
void Info__ctor_7_fn(Info* __this);
void Info__get_Col_fn(Info* __this, uString** __retval);
void Info__set_Col_fn(Info* __this, uString* value);
void Info__InitializeUX_fn(Info* __this);
void Info__get_Name1_fn(Info* __this, uString** __retval);
void Info__set_Name1_fn(Info* __this, uString* value);
void Info__New4_fn(Info** __retval);
void Info__SetCol_fn(Info* __this, uString* value, uObject* origin);
void Info__SetName_fn(Info* __this, uString* value, uObject* origin);

struct Info : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _field_Col;
    uStrong<uString*> _field_Name;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Color_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Info_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Info_typeof()->Init(), __selector1_; }

    void ctor_7();
    uString* Col();
    void Col(uString* value);
    void InitializeUX();
    uString* Name1();
    void Name1(uString* value);
    void SetCol(uString* value, uObject* origin);
    void SetName(uString* value, uObject* origin);
    static Info* New4();
};
// }

} // ::g

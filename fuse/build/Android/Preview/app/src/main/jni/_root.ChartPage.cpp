// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/ChartPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ChartPage.h>
#include <_root.NS_accessor_Cha-218a39f1.h>
#include <_root.NS_accessor_Cha-9a5a6c1f.h>
#include <_root.NS_FuseAnimatio-da9c2df1.h>
#include <_root.NS_FuseControls-b547a380.h>
#include <_root.NS_FuseElements-2a2016a8.h>
#include <_root.NS_FuseElements-af6af358.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Element-bd497d56.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Reactive.Resource.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions-39642be7.h>
#include <Fuse.Triggers.Actions-b5190bae.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[11];
static uType* TYPES[6];

namespace g{

// public partial sealed class ChartPage :2
// {
// static ChartPage() :43
static void ChartPage__cctor_4_fn(uType* __type)
{
    ChartPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Value"*/]);
    ChartPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Element.Lay...*/]);
    ChartPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Visibility"*/]);
    ChartPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"chart"*/]);
    ChartPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"fileText"*/]);
    ChartPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"inner"*/]);
    ChartPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"showFull"*/]);
}

static void ChartPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Element.LayoutMaster");
    ::STRINGS[2] = uString::Const("Visibility");
    ::STRINGS[3] = uString::Const("chart");
    ::STRINGS[4] = uString::Const("fileText");
    ::STRINGS[5] = uString::Const("inner");
    ::STRINGS[6] = uString::Const("showFull");
    ::STRINGS[7] = uString::Const("fullScreen");
    ::STRINGS[8] = uString::Const("ChartPage.ux");
    ::STRINGS[9] = uString::Const("File");
    ::STRINGS[10] = uString::Const("Title");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::Triggers::LayoutTransition_typeof(),
        ::g::NS_accessor_ChartPage_File_typeof(),
        ::g::NS_accessor_ChartPage_Title_typeof(),
        ::g::Fuse::Elements::TransformOrigins_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(122,
        ::g::Uno::String_typeof(), offsetof(ChartPage, _field_Title), 0,
        ::g::Uno::String_typeof(), offsetof(ChartPage, _field_File), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ChartPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ChartPage, fileText_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(ChartPage, chart_Element_LayoutMaster_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(ChartPage, fileText_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(ChartPage, temp1_Value_inst), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(ChartPage, chart), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(ChartPage, fileText), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(ChartPage, inner), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(ChartPage, showFull), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ChartPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ChartPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ChartPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ChartPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ChartPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ChartPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ChartPage::__selector6_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("get_File", NULL, (void*)ChartPage__get_File_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_File", NULL, (void*)ChartPage__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)ChartPage__New5_fn, 0, true, type, 0),
        new uFunction("SetFile", NULL, (void*)ChartPage__SetFile_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetTitle", NULL, (void*)ChartPage__SetTitle_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Title", NULL, (void*)ChartPage__get_Title_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Title", NULL, (void*)ChartPage__set_Title_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Controls::Panel_type* ChartPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Container_typeof();
    options.FieldCount = 140;
    options.InterfaceCount = 19;
    options.DependencyCount = 5;
    options.ObjectSize = sizeof(ChartPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("ChartPage", options);
    type->fp_build_ = ChartPage_build;
    type->fp_ctor_ = (void*)ChartPage__New5_fn;
    type->fp_cctor_ = ChartPage__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public ChartPage() :47
void ChartPage__ctor_8_fn(ChartPage* __this)
{
    __this->ctor_8();
}

// public string get_File() :23
void ChartPage__get_File_fn(ChartPage* __this, uString** __retval)
{
    *__retval = __this->File();
}

// public void set_File(string value) :24
void ChartPage__set_File_fn(ChartPage* __this, uString* value)
{
    __this->File(value);
}

// private void InitializeUX() :51
void ChartPage__InitializeUX_fn(ChartPage* __this)
{
    __this->InitializeUX();
}

// public ChartPage New() :47
void ChartPage__New5_fn(ChartPage** __retval)
{
    *__retval = ChartPage::New5();
}

// public void SetFile(string value, Uno.UX.IPropertyListener origin) :26
void ChartPage__SetFile_fn(ChartPage* __this, uString* value, uObject* origin)
{
    __this->SetFile(value, origin);
}

// public void SetTitle(string value, Uno.UX.IPropertyListener origin) :11
void ChartPage__SetTitle_fn(ChartPage* __this, uString* value, uObject* origin)
{
    __this->SetTitle(value, origin);
}

// public string get_Title() :8
void ChartPage__get_Title_fn(ChartPage* __this, uString** __retval)
{
    *__retval = __this->Title();
}

// public void set_Title(string value) :9
void ChartPage__set_Title_fn(ChartPage* __this, uString* value)
{
    __this->Title(value);
}

::g::Uno::UX::Selector ChartPage::__selector0_;
::g::Uno::UX::Selector ChartPage::__selector1_;
::g::Uno::UX::Selector ChartPage::__selector2_;
::g::Uno::UX::Selector ChartPage::__selector3_;
::g::Uno::UX::Selector ChartPage::__selector4_;
::g::Uno::UX::Selector ChartPage::__selector5_;
::g::Uno::UX::Selector ChartPage::__selector6_;

// public ChartPage() [instance] :47
void ChartPage::ctor_8()
{
    uStackFrame __("ChartPage", ".ctor()");
    ctor_7();
    InitializeUX();
}

// public string get_File() [instance] :23
uString* ChartPage::File()
{
    return _field_File;
}

// public void set_File(string value) [instance] :24
void ChartPage::File(uString* value)
{
    uStackFrame __("ChartPage", "set_File(string)");
    SetFile(value, NULL);
}

// private void InitializeUX() [instance] :51
void ChartPage::InitializeUX()
{
    uStackFrame __("ChartPage", "InitializeUX()");
    ::g::Fuse::Reactive::Constant* temp2 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::NS_FuseControlsTextControl_Value_Property::New1(temp, ChartPage::__selector0_);
    ::g::Fuse::Reactive::Property* temp3 = ::g::Fuse::Reactive::Property::New1(temp2, ::g::NS_accessor_ChartPage_Title::Singleton());
    ::g::Fuse::Reactive::Constant* temp4 = ::g::Fuse::Reactive::Constant::New1(this);
    fileText = ::g::Fuse::Controls::Text::New3();
    fileText_Value_inst = ::g::NS_FuseControlsTextControl_Value_Property::New1(fileText, ChartPage::__selector0_);
    ::g::Fuse::Reactive::Property* temp5 = ::g::Fuse::Reactive::Property::New1(temp4, ::g::NS_accessor_ChartPage_File::Singleton());
    chart = ::g::Fuse::Controls::DockPanel::New4();
    chart_Element_LayoutMaster_inst = ::g::NS_FuseElementsElement_ElementLayoutMaster_Property::New1(chart, ChartPage::__selector1_);
    fileText_Visibility_inst = ::g::NS_FuseElementsElement_Visibility_Property::New1(fileText, ChartPage::__selector2_);
    ::g::Fuse::Animations::Change* temp1 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<Fuse.Elements.Element>*/], chart_Element_LayoutMaster_inst);
    temp1_Value_inst = ::g::NS_FuseAnimationsChangeFuseElementsElement_Value_Property::New1(temp1, ChartPage::__selector0_);
    ::g::Fuse::Reactive::Resource* temp6 = ::g::Fuse::Reactive::Resource::New1(::STRINGS[7/*"fullScreen"*/]);
    ::g::Fuse::Controls::Panel* temp7 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp8 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp9 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp10 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp3, 3);
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(fileText_Value_inst, (uObject*)temp5, 3);
    ::g::Fuse::Gestures::Clicked* temp13 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp14 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    inner = ::g::Fuse::Controls::Panel::New3();
    showFull = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Triggers::Actions::BringToFront* temp15 = ::g::Fuse::Triggers::Actions::BringToFront::New2();
    ::g::Fuse::Animations::Change* temp16 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], fileText_Visibility_inst);
    ::g::Fuse::Reactive::DataBinding* temp17 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp6, 3);
    ::g::Fuse::Triggers::LayoutAnimation* temp18 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp19 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Scale* temp20 = ::g::Fuse::Animations::Scale::New2();
    SourceLineNumber(1);
    SourceFileName(::STRINGS[8/*"ChartPage.ux"*/]);
    temp7->Aspect(1.3f);
    temp7->BoxSizing(4);
    temp7->SourceLineNumber(16);
    temp7->SourceFileName(::STRINGS[8/*"ChartPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), chart);
    uPtr(chart)->Name(ChartPage::__selector3_);
    uPtr(chart)->SourceLineNumber(17);
    uPtr(chart)->SourceFileName(::STRINGS[8/*"ChartPage.ux"*/]);
    uPtr(chart)->TransformOrigin(::g::Fuse::Elements::TransformOrigins::TopLeft());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(chart)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(chart)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(chart)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), inner);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(chart)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), showFull);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(chart)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    temp8->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp8->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp8->Layer(1);
    temp8->SourceLineNumber(18);
    temp8->SourceFileName(::STRINGS[8/*"ChartPage.ux"*/]);
    temp9->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp9->Padding(::g::Uno::Float4__New2(2.0f, 5.0f, 2.0f, 5.0f));
    temp9->SourceLineNumber(20);
    temp9->SourceFileName(::STRINGS[8/*"ChartPage.ux"*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp9, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), fileText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp10->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp10->Color(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    temp10->Layer(1);
    temp10->SourceLineNumber(21);
    temp10->SourceFileName(::STRINGS[8/*"ChartPage.ux"*/]);
    temp->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->Alignment(1);
    temp->SourceLineNumber(22);
    temp->SourceFileName(::STRINGS[8/*"ChartPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    temp3->SourceLineNumber(22);
    temp3->SourceFileName(::STRINGS[8/*"ChartPage.ux"*/]);
    temp2->SourceLineNumber(22);
    temp2->SourceFileName(::STRINGS[8/*"ChartPage.ux"*/]);
    uPtr(fileText)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(fileText)->Alignment(3);
    uPtr(fileText)->Visibility(2);
    uPtr(fileText)->Name(ChartPage::__selector4_);
    uPtr(fileText)->SourceLineNumber(23);
    uPtr(fileText)->SourceFileName(::STRINGS[8/*"ChartPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(fileText)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    temp5->SourceLineNumber(23);
    temp5->SourceFileName(::STRINGS[8/*"ChartPage.ux"*/]);
    temp4->SourceLineNumber(23);
    temp4->SourceFileName(::STRINGS[8/*"ChartPage.ux"*/]);
    temp13->SourceLineNumber(25);
    temp13->SourceFileName(::STRINGS[8/*"ChartPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp14);
    temp14->SourceLineNumber(26);
    temp14->SourceFileName(::STRINGS[8/*"ChartPage.ux"*/]);
    temp14->Target((uObject*)showFull);
    uPtr(inner)->Name(ChartPage::__selector5_);
    uPtr(inner)->SourceLineNumber(30);
    uPtr(inner)->SourceFileName(::STRINGS[8/*"ChartPage.ux"*/]);
    uPtr(showFull)->Name(ChartPage::__selector6_);
    uPtr(showFull)->SourceLineNumber(32);
    uPtr(showFull)->SourceFileName(::STRINGS[8/*"ChartPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showFull)->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showFull)->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showFull)->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showFull)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    temp6->SourceLineNumber(33);
    temp6->SourceFileName(::STRINGS[8/*"ChartPage.ux"*/]);
    temp15->SourceLineNumber(34);
    temp15->SourceFileName(::STRINGS[8/*"ChartPage.ux"*/]);
    temp15->Target(this);
    ::g::Fuse::Animations::Change__set_Value_fn(temp16, uCRef<int32_t>(0));
    temp18->SourceLineNumber(38);
    temp18->SourceFileName(::STRINGS[8/*"ChartPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp20);
    temp19->Vector(::g::Uno::Float3__New2(1.0f, 1.0f, 1.0f));
    temp19->Duration(0.25);
    temp19->RelativeTo(::g::Fuse::Triggers::LayoutTransition::PositionChange());
    temp19->Easing(::g::Fuse::Animations::Easing::SinusoidalInOut());
    temp20->Factor(1.0f);
    temp20->Duration(0.25);
    temp20->RelativeTo(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange());
    temp20->Easing(::g::Fuse::Animations::Easing::SinusoidalInOut());
    Subtree(inner);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
}

// public void SetFile(string value, Uno.UX.IPropertyListener origin) [instance] :26
void ChartPage::SetFile(uString* value, uObject* origin)
{
    uStackFrame __("ChartPage", "SetFile(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_File))
    {
        _field_File = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[9/*"File"*/]), origin);
    }
}

// public void SetTitle(string value, Uno.UX.IPropertyListener origin) [instance] :11
void ChartPage::SetTitle(uString* value, uObject* origin)
{
    uStackFrame __("ChartPage", "SetTitle(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Title))
    {
        _field_Title = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[10/*"Title"*/]), origin);
    }
}

// public string get_Title() [instance] :8
uString* ChartPage::Title()
{
    return _field_Title;
}

// public void set_Title(string value) [instance] :9
void ChartPage::Title(uString* value)
{
    uStackFrame __("ChartPage", "set_Title(string)");
    SetTitle(value, NULL);
}

// public ChartPage New() [static] :47
ChartPage* ChartPage::New5()
{
    ChartPage* obj1 = (ChartPage*)uNew(ChartPage_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g

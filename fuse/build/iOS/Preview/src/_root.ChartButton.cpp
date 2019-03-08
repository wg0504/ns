// This file was generated based on /Users/yeom/Documents/NS/build/iOS/Preview/cache/ux15/ChartButton.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ChartButton.h>
#include <_root.NS_accessor_ChartButton_Label.h>
#include <_root.NS_FuseControlsShape_Color_Property.h>
#include <_root.NS_FuseControlsTextControl_Color_Property.h>
#include <_root.NS_FuseControlsTextControl_Value_Property.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileDisabled.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[5];
static uType* TYPES[4];

namespace g{

// public partial sealed class ChartButton :2
// {
// static ChartButton() :23
static void ChartButton__cctor_5_fn(uType* __type)
{
    ChartButton::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Value"*/]);
    ChartButton::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Color"*/]);
    ChartButton::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"label"*/]);
}

static void ChartButton_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Color");
    ::STRINGS[2] = uString::Const("label");
    ::STRINGS[3] = uString::Const("ChartPage.ux");
    ::STRINGS[4] = uString::Const("Label");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::NS_accessor_ChartButton_Label_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface4),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Shape_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface10),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Shape_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface18),
        ::g::Fuse::Drawing::IDrawObjectWatcherFeedback_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface19));
    type->SetFields(122,
        ::g::Uno::String_typeof(), offsetof(ChartButton, _field_Label), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ChartButton, label_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(ChartButton, this_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(ChartButton, label_Color_inst), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(ChartButton, label), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ChartButton::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ChartButton::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ChartButton::__selector2_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Label", NULL, (void*)ChartButton__get_Label_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Label", NULL, (void*)ChartButton__set_Label_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)ChartButton__New4_fn, 0, true, type, 0),
        new uFunction("SetLabel", NULL, (void*)ChartButton__SetLabel_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()));
}

::g::Fuse::Controls::Shape_type* ChartButton_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Rectangle_typeof();
    options.FieldCount = 130;
    options.InterfaceCount = 20;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ChartButton);
    options.TypeSize = sizeof(::g::Fuse::Controls::Shape_type);
    type = (::g::Fuse::Controls::Shape_type*)uClassType::New("ChartButton", options);
    type->fp_build_ = ChartButton_build;
    type->fp_ctor_ = (void*)ChartButton__New4_fn;
    type->fp_cctor_ = ChartButton__cctor_5_fn;
    type->interface19.fp_Changed = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackChanged_fn;
    type->interface19.fp_Prepare = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackPrepare_fn;
    type->interface19.fp_Unprepare = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackUnprepare_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Shape__OnPropertyChanged2_fn;
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

// public ChartButton() :27
void ChartButton__ctor_8_fn(ChartButton* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :31
void ChartButton__InitializeUX_fn(ChartButton* __this)
{
    __this->InitializeUX();
}

// public string get_Label() :8
void ChartButton__get_Label_fn(ChartButton* __this, uString** __retval)
{
    *__retval = __this->Label();
}

// public void set_Label(string value) :9
void ChartButton__set_Label_fn(ChartButton* __this, uString* value)
{
    __this->Label(value);
}

// public ChartButton New() :27
void ChartButton__New4_fn(ChartButton** __retval)
{
    *__retval = ChartButton::New4();
}

// public void SetLabel(string value, Uno.UX.IPropertyListener origin) :11
void ChartButton__SetLabel_fn(ChartButton* __this, uString* value, uObject* origin)
{
    __this->SetLabel(value, origin);
}

::g::Uno::UX::Selector ChartButton::__selector0_;
::g::Uno::UX::Selector ChartButton::__selector1_;
::g::Uno::UX::Selector ChartButton::__selector2_;

// public ChartButton() [instance] :27
void ChartButton::ctor_8()
{
    uStackFrame __("ChartButton", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :31
void ChartButton::InitializeUX()
{
    uStackFrame __("ChartButton", "InitializeUX()");
    ::g::Fuse::Reactive::Constant* temp = ::g::Fuse::Reactive::Constant::New1(this);
    label = ::g::Fuse::Controls::Text::New3();
    label_Value_inst = ::g::NS_FuseControlsTextControl_Value_Property::New1(label, ChartButton::__selector0_);
    ::g::Fuse::Reactive::Property* temp1 = ::g::Fuse::Reactive::Property::New1(temp, ::g::NS_accessor_ChartButton_Label::Singleton());
    this_Color_inst = ::g::NS_FuseControlsShape_Color_Property::New1(this, ChartButton::__selector1_);
    label_Color_inst = ::g::NS_FuseControlsTextControl_Color_Property::New1(label, ChartButton::__selector1_);
    ::g::Fuse::Reactive::DataBinding* temp2 = ::g::Fuse::Reactive::DataBinding::New1(label_Value_inst, (uObject*)temp1, 3);
    ::g::Fuse::Triggers::WhileDisabled* temp3 = ::g::Fuse::Triggers::WhileDisabled::New2();
    ::g::Fuse::Animations::Change* temp4 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], this_Color_inst);
    ::g::Fuse::Animations::Change* temp5 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], label_Color_inst);
    CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    Color(::g::Uno::Float4__New2(0.6666667f, 0.8666667f, 1.0f, 0.5333334f));
    Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    SourceLineNumber(5);
    SourceFileName(::STRINGS[3/*"ChartPage.ux"*/]);
    uPtr(label)->FontSize(23.0f);
    uPtr(label)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(label)->Name(ChartButton::__selector2_);
    uPtr(label)->SourceLineNumber(7);
    uPtr(label)->SourceFileName(::STRINGS[3/*"ChartPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(label)->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    temp1->SourceLineNumber(7);
    temp1->SourceFileName(::STRINGS[3/*"ChartPage.ux"*/]);
    temp->SourceLineNumber(7);
    temp->SourceFileName(::STRINGS[3/*"ChartPage.ux"*/]);
    temp3->SourceLineNumber(9);
    temp3->SourceFileName(::STRINGS[3/*"ChartPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp5);
    ::g::Fuse::Animations::Change__set_Value_fn(temp4, uCRef(::g::Uno::Float4__New2(0.8666667f, 0.9333333f, 1.0f, 1.0f)));
    temp4->Duration(0.1);
    ::g::Fuse::Animations::Change__set_Value_fn(temp5, uCRef(::g::Uno::Float4__New2(0.5333334f, 0.5333334f, 0.5333334f, 1.0f)));
    temp5->Duration(0.1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), label);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
}

// public string get_Label() [instance] :8
uString* ChartButton::Label()
{
    return _field_Label;
}

// public void set_Label(string value) [instance] :9
void ChartButton::Label(uString* value)
{
    uStackFrame __("ChartButton", "set_Label(string)");
    SetLabel(value, NULL);
}

// public void SetLabel(string value, Uno.UX.IPropertyListener origin) [instance] :11
void ChartButton::SetLabel(uString* value, uObject* origin)
{
    uStackFrame __("ChartButton", "SetLabel(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Label))
    {
        _field_Label = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"Label"*/]), origin);
    }
}

// public ChartButton New() [static] :27
ChartButton* ChartButton::New4()
{
    ChartButton* obj1 = (ChartButton*)uNew(ChartButton_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g

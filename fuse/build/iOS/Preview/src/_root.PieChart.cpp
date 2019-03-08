// This file was generated based on /Users/yeom/Documents/NS/build/iOS/Preview/cache/ux15/PieChart.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.NS_FuseChartingDataSeries_Data_Property.h>
#include <_root.NS_FuseReactiveEach_Items_Property.h>
#include <_root.PieChart.h>
#include <_root.PieChart.Template.h>
#include <_root.PieChart.Template1.h>
#include <_root.PieChart.Template2.h>
#include <Fuse.Animations.AttractorConfig.h>
#include <Fuse.Charting.DataSeries.h>
#include <Fuse.Charting.Plot.h>
#include <Fuse.Charting.PlotData.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.VectorLayer.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.BoxSizingMode.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.IArray.h>
#include <Fuse.Motion.DestinationMotionConfig.h>
#include <Fuse.Motion.MotionDestinationType.h>
#include <Fuse.Motion.MotionUnit.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class PieChart :2
// {
// static PieChart() :146
static void PieChart__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Resource_typeof()->Init();
    PieChart::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 0);
    PieChart::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Data"));
    PieChart::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Items"));
    PieChart::pieAttract_ = ::g::Fuse::Animations::AttractorConfig::New2();
    uPtr(PieChart::pieAttract_)->Type(1);
    uPtr(PieChart::pieAttract_)->Unit(1);
    ::g::Uno::UX::Resource::SetGlobalKey(PieChart::pieAttract_, uString::Const("pieAttract"));
}

static void PieChart_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(126,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::IArray_typeof(), NULL), offsetof(PieChart, temp_Data_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(PieChart, temp1_Items_inst), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(PieChart, __g_nametable1), 0,
        ::g::Fuse::Animations::AttractorConfig_typeof(), (uintptr_t)&PieChart::pieAttract_, uFieldFlagsStatic,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&PieChart::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PieChart::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PieChart::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("pieAttract", 129));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PieChart__New5_fn, 0, true, type, 0));
}

::g::Fuse::Controls::Panel_type* PieChart_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 133;
    options.InterfaceCount = 19;
    options.ObjectSize = sizeof(PieChart);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("PieChart", options);
    type->fp_build_ = PieChart_build;
    type->fp_ctor_ = (void*)PieChart__New5_fn;
    type->fp_cctor_ = PieChart__cctor_4_fn;
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

// public PieChart() :154
void PieChart__ctor_8_fn(PieChart* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :158
void PieChart__InitializeUX_fn(PieChart* __this)
{
    __this->InitializeUX();
}

// public PieChart New() :154
void PieChart__New5_fn(PieChart** __retval)
{
    *__retval = PieChart::New5();
}

uSStrong< ::g::Fuse::Animations::AttractorConfig*> PieChart::pieAttract_;
uSStrong<uArray*> PieChart::__g_static_nametable1_;
::g::Uno::UX::Selector PieChart::__selector0_;
::g::Uno::UX::Selector PieChart::__selector1_;

// public PieChart() [instance] :154
void PieChart::ctor_8()
{
    uStackFrame __("PieChart", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :158
void PieChart::InitializeUX()
{
    uStackFrame __("PieChart", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, PieChart::__g_static_nametable1_);
    ::g::Fuse::Charting::DataSeries* temp = ::g::Fuse::Charting::DataSeries::New2();
    temp_Data_inst = ::g::NS_FuseChartingDataSeries_Data_Property::New1(temp, PieChart::__selector0_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(uString::Const("data1"));
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    temp1_Items_inst = ::g::NS_FuseReactiveEach_Items_Property::New1(temp1, PieChart::__selector1_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(uString::Const("data1"));
    ::g::Fuse::Reactive::JavaScript* temp4 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::ScrollView* temp5 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp6 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Charting::Plot* temp7 = ::g::Fuse::Charting::Plot::New4();
    ::g::Fuse::Controls::Panel* temp8 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::VectorLayer* temp9 = ::g::Fuse::Controls::VectorLayer::New3();
    ::g::Fuse::Charting::PlotData* temp10 = ::g::Fuse::Charting::PlotData::New4();
    PieChart__Template* temp11 = PieChart__Template::New2(this, this);
    PieChart__Template1* temp12 = PieChart__Template1::New2(this, this);
    ::g::Fuse::Controls::Circle* temp13 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Reactive::DataBinding* temp14 = ::g::Fuse::Reactive::DataBinding::New1(temp_Data_inst, (uObject*)temp2, 3);
    PieChart__Template2* temp15 = PieChart__Template2::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp16 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp3, 3);
    SourceLineNumber(2);
    SourceFileName(uString::Const("PieChart.ux"));
    temp4->Code(uString::Const("\n"
        "\t\tvar Observable = require(\"FuseJS/Observable\")\n"
        "\t\tfunction Item( y, z, label, color ) {\n"
        "\t\t\tthis.y = y\n"
        "\t\t\tthis.z = z\n"
        "\t\t\tthis.label = label\n"
        "\t\t\tthis.color = color\n"
        "\t\t\tthis.start = 0;\n"
        "\t\t\tthis.end = 0;\n"
        "\t\t}\n"
        "\t\t\n"
        "\t\tvar names = [ \"Vebj\303\270rn\", \"Annbj\303\270rg\",  \"\303\230ystein\", \"\303\205slaug\",  \"Tormod\", \"Borghild\" ]\n"
        "\t\tvar colors = [ \"#DEF\", \"#DFE\", \"#FDE\", \"#EDF\", \"#EFD\", \"#FED\" ]\n"
        "\t\texports.data1 = Observable()\n"
        "\t\tvar sum = 0;\n"
        "\t\tfunction create() {\n"
        "\t\t\tvar list = []\n"
        "\t\t\tfor (var i=0; i < names.length; ++i ) {\n"
        "\t\t\t\tvar random = Math.random();\n"
        "\t\t\t\tvar c = random * 100 + 10\n"
        "\t\t\t\tsum = sum + c;\n"
        "\t\t\t\tlist.push( new Item( c, Math.random(), names[i], colors[i] ) )\n"
        "\t\t\t}\n"
        "\t\t\treturn list\n"
        "\t\t}\n"
        "\n"
        "\t\tfunction getAngle(){\n"
        "\t\t\texports.data1.forEach( function(Item,idx){\n"
        "\t\t\t\tconsole.log(Item.y,idx);\n"
        "\t\t\t})\n"
        "\t\t}\n"
        "\t\n"
        "\n"
        "\t\texports.random = function() {\n"
        "\t\t\texports.data1.replaceAll( create() )\n"
        "\t\t\tsum = 0;\n"
        "\t\t}\n"
        "\t\texports.getAngle = function(){\n"
        "\t\t\tgetAngle();\n"
        "\t\t}\n"
        "\t\t\n"
        "\t\texports.random()\n"
        "\t\texports.getAngle()\n"
        "\t"));
    temp4->LineNumber(3);
    temp4->FileName(uString::Const("PieChart.ux"));
    temp4->SourceLineNumber(3);
    temp4->SourceFileName(uString::Const("PieChart.ux"));
    temp5->SourceLineNumber(47);
    temp5->SourceFileName(uString::Const("PieChart.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    temp6->SourceLineNumber(48);
    temp6->SourceFileName(uString::Const("PieChart.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    temp7->Height(::g::Uno::UX::Size__New1(50.0f, 4));
    temp7->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp7->SourceLineNumber(51);
    temp7->SourceFileName(uString::Const("PieChart.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Series()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Charting::DataSeries_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp14);
    temp2->SourceLineNumber(52);
    temp2->SourceFileName(uString::Const("PieChart.ux"));
    temp8->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp8->BoxSizing(4);
    temp8->SourceLineNumber(53);
    temp8->SourceFileName(uString::Const("PieChart.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    temp9->HitTestMode(0);
    temp9->SourceLineNumber(60);
    temp9->SourceFileName(uString::Const("PieChart.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    temp10->SourceLineNumber(61);
    temp10->SourceFileName(uString::Const("PieChart.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp12);
    temp13->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp13->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    temp13->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp13->Alignment(10);
    temp13->ZOffset(3.0f);
    temp13->SourceLineNumber(71);
    temp13->SourceFileName(uString::Const("PieChart.ux"));
    temp1->SourceLineNumber(73);
    temp1->SourceFileName(uString::Const("PieChart.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp16);
    temp3->SourceLineNumber(73);
    temp3->SourceFileName(uString::Const("PieChart.ux"));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
}

// public PieChart New() [static] :154
PieChart* PieChart::New5()
{
    PieChart* obj1 = (PieChart*)uNew(PieChart_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g

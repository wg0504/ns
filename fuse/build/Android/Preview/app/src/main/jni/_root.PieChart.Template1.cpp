// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/PieChart.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.NS_FuseControls-3ce38cf9.h>
#include <_root.PieChart.h>
#include <_root.PieChart.Template1.h>
#include <Fuse.Animations.Attra-1414c3f0.h>
#include <Fuse.Binding.h>
#include <Fuse.Charting.PlotExpression.h>
#include <Fuse.Charting.PlotWedge.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Member.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[4];
static uType* TYPES[1];

namespace g{

// public partial sealed class PieChart.Template1 :62
// {
// static Template1() :72
static void PieChart__Template1__cctor__fn(uType* __type)
{
    PieChart__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Color"*/]);
}

static void PieChart__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Color");
    ::STRINGS[1] = uString::Const("data.object");
    ::STRINGS[2] = uString::Const("color");
    ::STRINGS[3] = uString::Const("PieChart.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::PieChart_typeof());
    type->SetFields(2,
        ::g::PieChart_typeof(), offsetof(PieChart__Template1, __parent1), uFieldFlagsWeak,
        ::g::PieChart_typeof(), offsetof(PieChart__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(PieChart__Template1, __self_Color_inst1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PieChart__Template1::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PieChart__Template1__New2_fn, 0, true, type, 2, ::g::PieChart_typeof(), ::g::PieChart_typeof()));
}

::g::Uno::UX::Template_type* PieChart__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(PieChart__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("PieChart.Template1", options);
    type->fp_build_ = PieChart__Template1_build;
    type->fp_cctor_ = PieChart__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))PieChart__Template1__New1_fn;
    return type;
}

// public Template1(PieChart parent, PieChart parentInstance) :66
void PieChart__Template1__ctor_1_fn(PieChart__Template1* __this, ::g::PieChart* parent, ::g::PieChart* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :75
void PieChart__Template1__New1_fn(PieChart__Template1* __this, uObject** __retval)
{
    uStackFrame __("PieChart.Template1", "New()");
    ::g::Fuse::Charting::PlotWedge* __self1 = ::g::Fuse::Charting::PlotWedge::New4();
    ::g::Fuse::Charting::PlotExpression* temp = ::g::Fuse::Charting::PlotExpression::New1(::STRINGS[1/*"data.object"*/]);
    __this->__self_Color_inst1 = ::g::NS_FuseControlsShape_Color_Property::New1(__self1, PieChart__Template1::__selector0_);
    ::g::Fuse::Reactive::Member* temp1 = ::g::Fuse::Reactive::Member::New1(temp, ::STRINGS[2/*"color"*/]);
    ::g::Fuse::Reactive::DataBinding* temp2 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Color_inst1, (uObject*)temp1, 3);
    __self1->StrokeColor(::g::Uno::Float4__New2(0.0f, 1.0f, 0.0f, 0.0f));
    __self1->StrokeWidth(1.0f);
    __self1->SourceLineNumber(67);
    __self1->SourceFileName(::STRINGS[3/*"PieChart.ux"*/]);
    temp->SourceLineNumber(67);
    temp->SourceFileName(::STRINGS[3/*"PieChart.ux"*/]);
    temp1->SourceLineNumber(67);
    temp1->SourceFileName(::STRINGS[3/*"PieChart.ux"*/]);
    __self1->Attractor(::g::PieChart::pieAttract());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    return *__retval = __self1, void();
}

// public Template1 New(PieChart parent, PieChart parentInstance) :66
void PieChart__Template1__New2_fn(::g::PieChart* parent, ::g::PieChart* parentInstance, PieChart__Template1** __retval)
{
    *__retval = PieChart__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector PieChart__Template1::__selector0_;

// public Template1(PieChart parent, PieChart parentInstance) [instance] :66
void PieChart__Template1::ctor_1(::g::PieChart* parent, ::g::PieChart* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(PieChart parent, PieChart parentInstance) [static] :66
PieChart__Template1* PieChart__Template1::New2(::g::PieChart* parent, ::g::PieChart* parentInstance)
{
    PieChart__Template1* obj1 = (PieChart__Template1*)uNew(PieChart__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g

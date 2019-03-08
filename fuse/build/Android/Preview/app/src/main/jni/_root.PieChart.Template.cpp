// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/PieChart.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.NS_FuseElements-1c155080.h>
#include <_root.NS_FuseElements-59de043f.h>
#include <_root.PieChart.h>
#include <_root.PieChart.Template.h>
#include <Fuse.Animations.Attra-1414c3f0.h>
#include <Fuse.Animations.Attract.h>
#include <Fuse.Binding.h>
#include <Fuse.Charting.PlotExpression.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Multiply.h>
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
#include <Uno.UX.Unit.h>
static uString* STRINGS[4];
static uType* TYPES[1];

namespace g{

// public partial sealed class PieChart.Template :5
// {
// static Template() :16
static void PieChart__Template__cctor__fn(uType* __type)
{
    PieChart__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Width"*/]);
    PieChart__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Height"*/]);
}

static void PieChart__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Width");
    ::STRINGS[1] = uString::Const("Height");
    ::STRINGS[2] = uString::Const("data.source.z");
    ::STRINGS[3] = uString::Const("PieChart.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::PieChart_typeof());
    type->SetFields(2,
        ::g::PieChart_typeof(), offsetof(PieChart__Template, __parent1), uFieldFlagsWeak,
        ::g::PieChart_typeof(), offsetof(PieChart__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(PieChart__Template, __self_Width_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(PieChart__Template, __self_Height_inst1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PieChart__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PieChart__Template::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PieChart__Template__New2_fn, 0, true, type, 2, ::g::PieChart_typeof(), ::g::PieChart_typeof()));
}

::g::Uno::UX::Template_type* PieChart__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(PieChart__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("PieChart.Template", options);
    type->fp_build_ = PieChart__Template_build;
    type->fp_cctor_ = PieChart__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))PieChart__Template__New1_fn;
    return type;
}

// public Template(PieChart parent, PieChart parentInstance) :9
void PieChart__Template__ctor_1_fn(PieChart__Template* __this, ::g::PieChart* parent, ::g::PieChart* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :19
void PieChart__Template__New1_fn(PieChart__Template* __this, uObject** __retval)
{
    uStackFrame __("PieChart.Template", "New()");
    ::g::Fuse::Controls::Panel* __self1 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Charting::PlotExpression* temp = ::g::Fuse::Charting::PlotExpression::New1(::STRINGS[2/*"data.source.z"*/]);
    ::g::Fuse::Animations::Attract* temp1 = ::g::Fuse::Animations::Attract::New1(temp, ::g::PieChart::pieAttract());
    ::g::Uno::UX::Size temp2 = ::g::Uno::UX::Size__New1(100.0f, 4);
    ::g::Fuse::Reactive::Constant* temp3 = ::g::Fuse::Reactive::Constant::New1(uBox(::g::Uno::UX::Size_typeof(), temp2));
    __this->__self_Width_inst1 = ::g::NS_FuseElementsElement_Width_Property::New1(__self1, PieChart__Template::__selector0_);
    ::g::Fuse::Reactive::Multiply* temp4 = ::g::Fuse::Reactive::Multiply::New1(temp1, temp3);
    ::g::Fuse::Charting::PlotExpression* temp5 = ::g::Fuse::Charting::PlotExpression::New1(::STRINGS[2/*"data.source.z"*/]);
    ::g::Fuse::Animations::Attract* temp6 = ::g::Fuse::Animations::Attract::New1(temp5, ::g::PieChart::pieAttract());
    ::g::Uno::UX::Size temp7 = ::g::Uno::UX::Size__New1(100.0f, 4);
    ::g::Fuse::Reactive::Constant* temp8 = ::g::Fuse::Reactive::Constant::New1(uBox(::g::Uno::UX::Size_typeof(), temp7));
    __this->__self_Height_inst1 = ::g::NS_FuseElementsElement_Height_Property::New1(__self1, PieChart__Template::__selector1_);
    ::g::Fuse::Reactive::Multiply* temp9 = ::g::Fuse::Reactive::Multiply::New1(temp6, temp8);
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Width_inst1, (uObject*)temp4, 3);
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Height_inst1, (uObject*)temp9, 3);
    __self1->SourceLineNumber(63);
    __self1->SourceFileName(::STRINGS[3/*"PieChart.ux"*/]);
    temp4->SourceLineNumber(63);
    temp4->SourceFileName(::STRINGS[3/*"PieChart.ux"*/]);
    temp1->SourceLineNumber(63);
    temp1->SourceFileName(::STRINGS[3/*"PieChart.ux"*/]);
    temp->SourceLineNumber(63);
    temp->SourceFileName(::STRINGS[3/*"PieChart.ux"*/]);
    temp3->SourceLineNumber(63);
    temp3->SourceFileName(::STRINGS[3/*"PieChart.ux"*/]);
    temp9->SourceLineNumber(63);
    temp9->SourceFileName(::STRINGS[3/*"PieChart.ux"*/]);
    temp6->SourceLineNumber(63);
    temp6->SourceFileName(::STRINGS[3/*"PieChart.ux"*/]);
    temp5->SourceLineNumber(63);
    temp5->SourceFileName(::STRINGS[3/*"PieChart.ux"*/]);
    temp8->SourceLineNumber(63);
    temp8->SourceFileName(::STRINGS[3/*"PieChart.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    return *__retval = __self1, void();
}

// public Template New(PieChart parent, PieChart parentInstance) :9
void PieChart__Template__New2_fn(::g::PieChart* parent, ::g::PieChart* parentInstance, PieChart__Template** __retval)
{
    *__retval = PieChart__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector PieChart__Template::__selector0_;
::g::Uno::UX::Selector PieChart__Template::__selector1_;

// public Template(PieChart parent, PieChart parentInstance) [instance] :9
void PieChart__Template::ctor_1(::g::PieChart* parent, ::g::PieChart* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(PieChart parent, PieChart parentInstance) [static] :9
PieChart__Template* PieChart__Template::New2(::g::PieChart* parent, ::g::PieChart* parentInstance)
{
    PieChart__Template* obj1 = (PieChart__Template*)uNew(PieChart__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g

// This file was generated based on /Users/yeom/Documents/NS/build/iOS/Preview/cache/ux15/PieChart.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Info.h>
#include <_root.NS_Info_Col_Property.h>
#include <_root.NS_Info_Name_Property.h>
#include <_root.PieChart.h>
#include <_root.PieChart.Template2.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Visual.h>
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
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[5];
static uType* TYPES[2];

namespace g{

// public partial sealed class PieChart.Template2 :97
// {
// static Template2() :109
static void PieChart__Template2__cctor__fn(uType* __type)
{
    PieChart__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Col"*/]);
    PieChart__Template2::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Name"*/]);
}

static void PieChart__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Col");
    ::STRINGS[1] = uString::Const("Name");
    ::STRINGS[2] = uString::Const("color");
    ::STRINGS[3] = uString::Const("label");
    ::STRINGS[4] = uString::Const("PieChart.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::PieChart_typeof(), offsetof(PieChart__Template2, __parent1), uFieldFlagsWeak,
        ::g::PieChart_typeof(), offsetof(PieChart__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(PieChart__Template2, label_Col_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(PieChart__Template2, label_Name_inst), 0,
        ::g::Info_typeof(), offsetof(PieChart__Template2, label), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PieChart__Template2::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PieChart__Template2::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PieChart__Template2__New2_fn, 0, true, type, 2, ::g::PieChart_typeof(), ::g::PieChart_typeof()));
}

::g::Uno::UX::Template_type* PieChart__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PieChart__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("PieChart.Template2", options);
    type->fp_build_ = PieChart__Template2_build;
    type->fp_cctor_ = PieChart__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))PieChart__Template2__New1_fn;
    return type;
}

// public Template2(PieChart parent, PieChart parentInstance) :101
void PieChart__Template2__ctor_1_fn(PieChart__Template2* __this, ::g::PieChart* parent, ::g::PieChart* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :112
void PieChart__Template2__New1_fn(PieChart__Template2* __this, uObject** __retval)
{
    uStackFrame __("PieChart.Template2", "New()");
    ::g::Fuse::Controls::StackPanel* __self1 = ::g::Fuse::Controls::StackPanel::New4();
    __this->label = ::g::Info::New4();
    __this->label_Col_inst = ::g::NS_Info_Col_Property::New1(__this->label, PieChart__Template2::__selector0_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"color"*/]);
    __this->label_Name_inst = ::g::NS_Info_Name_Property::New1(__this->label, PieChart__Template2::__selector1_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"label"*/]);
    ::g::Fuse::Reactive::DataBinding* temp2 = ::g::Fuse::Reactive::DataBinding::New1(__this->label_Col_inst, (uObject*)temp, 3);
    ::g::Fuse::Reactive::DataBinding* temp3 = ::g::Fuse::Reactive::DataBinding::New1(__this->label_Name_inst, (uObject*)temp1, 3);
    __self1->SourceLineNumber(74);
    __self1->SourceFileName(::STRINGS[4/*"PieChart.ux"*/]);
    uPtr(__this->label)->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    uPtr(__this->label)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(__this->label)->SourceLineNumber(75);
    uPtr(__this->label)->SourceFileName(::STRINGS[4/*"PieChart.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->label)->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->label)->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    temp->SourceLineNumber(75);
    temp->SourceFileName(::STRINGS[4/*"PieChart.ux"*/]);
    temp1->SourceLineNumber(75);
    temp1->SourceFileName(::STRINGS[4/*"PieChart.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->label);
    return *__retval = __self1, void();
}

// public Template2 New(PieChart parent, PieChart parentInstance) :101
void PieChart__Template2__New2_fn(::g::PieChart* parent, ::g::PieChart* parentInstance, PieChart__Template2** __retval)
{
    *__retval = PieChart__Template2::New2(parent, parentInstance);
}

::g::Uno::UX::Selector PieChart__Template2::__selector0_;
::g::Uno::UX::Selector PieChart__Template2::__selector1_;

// public Template2(PieChart parent, PieChart parentInstance) [instance] :101
void PieChart__Template2::ctor_1(::g::PieChart* parent, ::g::PieChart* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(PieChart parent, PieChart parentInstance) [static] :101
PieChart__Template2* PieChart__Template2::New2(::g::PieChart* parent, ::g::PieChart* parentInstance)
{
    PieChart__Template2* obj1 = (PieChart__Template2*)uNew(PieChart__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g

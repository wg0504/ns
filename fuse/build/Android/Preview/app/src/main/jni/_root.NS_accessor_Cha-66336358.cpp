// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/NS.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ChartButton.h>
#include <_root.NS_accessor_Cha-66336358.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class NS_accessor_ChartButton_Label :1
// {
// static generated NS_accessor_ChartButton_Label() :1
static void NS_accessor_ChartButton_Label__cctor__fn(uType* __type)
{
    NS_accessor_ChartButton_Label::Singleton_ = NS_accessor_ChartButton_Label::New1();
    NS_accessor_ChartButton_Label::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Label"*/]);
}

static void NS_accessor_ChartButton_Label_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Label");
    ::TYPES[0] = ::g::ChartButton_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&NS_accessor_ChartButton_Label::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&NS_accessor_ChartButton_Label::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* NS_accessor_ChartButton_Label_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NS_accessor_ChartButton_Label);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("NS_accessor_ChartButton_Label", options);
    type->fp_build_ = NS_accessor_ChartButton_Label_build;
    type->fp_ctor_ = (void*)NS_accessor_ChartButton_Label__New1_fn;
    type->fp_cctor_ = NS_accessor_ChartButton_Label__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))NS_accessor_ChartButton_Label__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))NS_accessor_ChartButton_Label__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))NS_accessor_ChartButton_Label__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))NS_accessor_ChartButton_Label__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))NS_accessor_ChartButton_Label__get_SupportsOriginSetter_fn;
    return type;
}

// public generated NS_accessor_ChartButton_Label() :1
void NS_accessor_ChartButton_Label__ctor_1_fn(NS_accessor_ChartButton_Label* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :7
void NS_accessor_ChartButton_Label__GetAsObject_fn(NS_accessor_ChartButton_Label* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("NS_accessor_ChartButton_Label", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::ChartButton*>(obj, ::TYPES[0/*ChartButton*/]))->Label(), void();
}

// public override sealed Uno.UX.Selector get_Name() :4
void NS_accessor_ChartButton_Label__get_Name_fn(NS_accessor_ChartButton_Label* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = NS_accessor_ChartButton_Label::_name_, void();
}

// public generated NS_accessor_ChartButton_Label New() :1
void NS_accessor_ChartButton_Label__New1_fn(NS_accessor_ChartButton_Label** __retval)
{
    *__retval = NS_accessor_ChartButton_Label::New1();
}

// public override sealed Uno.Type get_PropertyType() :6
void NS_accessor_ChartButton_Label__get_PropertyType_fn(NS_accessor_ChartButton_Label* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :8
void NS_accessor_ChartButton_Label__SetAsObject_fn(NS_accessor_ChartButton_Label* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("NS_accessor_ChartButton_Label", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::ChartButton*>(obj, ::TYPES[0/*ChartButton*/]))->SetLabel(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :9
void NS_accessor_ChartButton_Label__get_SupportsOriginSetter_fn(NS_accessor_ChartButton_Label* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> NS_accessor_ChartButton_Label::Singleton_;
::g::Uno::UX::Selector NS_accessor_ChartButton_Label::_name_;

// public generated NS_accessor_ChartButton_Label() [instance] :1
void NS_accessor_ChartButton_Label::ctor_1()
{
    ctor_();
}

// public generated NS_accessor_ChartButton_Label New() [static] :1
NS_accessor_ChartButton_Label* NS_accessor_ChartButton_Label::New1()
{
    NS_accessor_ChartButton_Label* obj1 = (NS_accessor_ChartButton_Label*)uNew(NS_accessor_ChartButton_Label_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g

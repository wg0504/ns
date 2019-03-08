// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/NS.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Info.h>
#include <_root.NS_accessor_Info_Col.h>
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

// internal sealed class NS_accessor_Info_Col :41
// {
// static generated NS_accessor_Info_Col() :41
static void NS_accessor_Info_Col__cctor__fn(uType* __type)
{
    NS_accessor_Info_Col::Singleton_ = NS_accessor_Info_Col::New1();
    NS_accessor_Info_Col::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Col"*/]);
}

static void NS_accessor_Info_Col_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Col");
    ::TYPES[0] = ::g::Info_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&NS_accessor_Info_Col::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&NS_accessor_Info_Col::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* NS_accessor_Info_Col_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NS_accessor_Info_Col);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("NS_accessor_Info_Col", options);
    type->fp_build_ = NS_accessor_Info_Col_build;
    type->fp_ctor_ = (void*)NS_accessor_Info_Col__New1_fn;
    type->fp_cctor_ = NS_accessor_Info_Col__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))NS_accessor_Info_Col__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))NS_accessor_Info_Col__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))NS_accessor_Info_Col__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))NS_accessor_Info_Col__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))NS_accessor_Info_Col__get_SupportsOriginSetter_fn;
    return type;
}

// public generated NS_accessor_Info_Col() :41
void NS_accessor_Info_Col__ctor_1_fn(NS_accessor_Info_Col* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :47
void NS_accessor_Info_Col__GetAsObject_fn(NS_accessor_Info_Col* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("NS_accessor_Info_Col", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Info*>(obj, ::TYPES[0/*Info*/]))->Col(), void();
}

// public override sealed Uno.UX.Selector get_Name() :44
void NS_accessor_Info_Col__get_Name_fn(NS_accessor_Info_Col* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = NS_accessor_Info_Col::_name_, void();
}

// public generated NS_accessor_Info_Col New() :41
void NS_accessor_Info_Col__New1_fn(NS_accessor_Info_Col** __retval)
{
    *__retval = NS_accessor_Info_Col::New1();
}

// public override sealed Uno.Type get_PropertyType() :46
void NS_accessor_Info_Col__get_PropertyType_fn(NS_accessor_Info_Col* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :48
void NS_accessor_Info_Col__SetAsObject_fn(NS_accessor_Info_Col* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("NS_accessor_Info_Col", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Info*>(obj, ::TYPES[0/*Info*/]))->SetCol(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :49
void NS_accessor_Info_Col__get_SupportsOriginSetter_fn(NS_accessor_Info_Col* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> NS_accessor_Info_Col::Singleton_;
::g::Uno::UX::Selector NS_accessor_Info_Col::_name_;

// public generated NS_accessor_Info_Col() [instance] :41
void NS_accessor_Info_Col::ctor_1()
{
    ctor_();
}

// public generated NS_accessor_Info_Col New() [static] :41
NS_accessor_Info_Col* NS_accessor_Info_Col::New1()
{
    NS_accessor_Info_Col* obj1 = (NS_accessor_Info_Col*)uNew(NS_accessor_Info_Col_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g

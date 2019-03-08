// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/NS.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Info.h>
#include <_root.NS_accessor_Info_Name.h>
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

// internal sealed class NS_accessor_Info_Name :31
// {
// static generated NS_accessor_Info_Name() :31
static void NS_accessor_Info_Name__cctor__fn(uType* __type)
{
    NS_accessor_Info_Name::Singleton_ = NS_accessor_Info_Name::New1();
    NS_accessor_Info_Name::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Name"*/]);
}

static void NS_accessor_Info_Name_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Name");
    ::TYPES[0] = ::g::Info_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&NS_accessor_Info_Name::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&NS_accessor_Info_Name::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* NS_accessor_Info_Name_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NS_accessor_Info_Name);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("NS_accessor_Info_Name", options);
    type->fp_build_ = NS_accessor_Info_Name_build;
    type->fp_ctor_ = (void*)NS_accessor_Info_Name__New1_fn;
    type->fp_cctor_ = NS_accessor_Info_Name__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))NS_accessor_Info_Name__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))NS_accessor_Info_Name__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))NS_accessor_Info_Name__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))NS_accessor_Info_Name__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))NS_accessor_Info_Name__get_SupportsOriginSetter_fn;
    return type;
}

// public generated NS_accessor_Info_Name() :31
void NS_accessor_Info_Name__ctor_1_fn(NS_accessor_Info_Name* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :37
void NS_accessor_Info_Name__GetAsObject_fn(NS_accessor_Info_Name* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("NS_accessor_Info_Name", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Info*>(obj, ::TYPES[0/*Info*/]))->Name1(), void();
}

// public override sealed Uno.UX.Selector get_Name() :34
void NS_accessor_Info_Name__get_Name_fn(NS_accessor_Info_Name* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = NS_accessor_Info_Name::_name_, void();
}

// public generated NS_accessor_Info_Name New() :31
void NS_accessor_Info_Name__New1_fn(NS_accessor_Info_Name** __retval)
{
    *__retval = NS_accessor_Info_Name::New1();
}

// public override sealed Uno.Type get_PropertyType() :36
void NS_accessor_Info_Name__get_PropertyType_fn(NS_accessor_Info_Name* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :38
void NS_accessor_Info_Name__SetAsObject_fn(NS_accessor_Info_Name* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("NS_accessor_Info_Name", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Info*>(obj, ::TYPES[0/*Info*/]))->SetName(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :39
void NS_accessor_Info_Name__get_SupportsOriginSetter_fn(NS_accessor_Info_Name* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> NS_accessor_Info_Name::Singleton_;
::g::Uno::UX::Selector NS_accessor_Info_Name::_name_;

// public generated NS_accessor_Info_Name() [instance] :31
void NS_accessor_Info_Name::ctor_1()
{
    ctor_();
}

// public generated NS_accessor_Info_Name New() [static] :31
NS_accessor_Info_Name* NS_accessor_Info_Name::New1()
{
    NS_accessor_Info_Name* obj1 = (NS_accessor_Info_Name*)uNew(NS_accessor_Info_Name_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g

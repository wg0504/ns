// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/NS.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ChartPage.h>
#include <_root.NS_accessor_Cha-218a39f1.h>
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

// internal sealed class NS_accessor_ChartPage_File :21
// {
// static generated NS_accessor_ChartPage_File() :21
static void NS_accessor_ChartPage_File__cctor__fn(uType* __type)
{
    NS_accessor_ChartPage_File::Singleton_ = NS_accessor_ChartPage_File::New1();
    NS_accessor_ChartPage_File::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"File"*/]);
}

static void NS_accessor_ChartPage_File_build(uType* type)
{
    ::STRINGS[0] = uString::Const("File");
    ::TYPES[0] = ::g::ChartPage_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&NS_accessor_ChartPage_File::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&NS_accessor_ChartPage_File::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* NS_accessor_ChartPage_File_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NS_accessor_ChartPage_File);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("NS_accessor_ChartPage_File", options);
    type->fp_build_ = NS_accessor_ChartPage_File_build;
    type->fp_ctor_ = (void*)NS_accessor_ChartPage_File__New1_fn;
    type->fp_cctor_ = NS_accessor_ChartPage_File__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))NS_accessor_ChartPage_File__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))NS_accessor_ChartPage_File__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))NS_accessor_ChartPage_File__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))NS_accessor_ChartPage_File__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))NS_accessor_ChartPage_File__get_SupportsOriginSetter_fn;
    return type;
}

// public generated NS_accessor_ChartPage_File() :21
void NS_accessor_ChartPage_File__ctor_1_fn(NS_accessor_ChartPage_File* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :27
void NS_accessor_ChartPage_File__GetAsObject_fn(NS_accessor_ChartPage_File* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("NS_accessor_ChartPage_File", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::ChartPage*>(obj, ::TYPES[0/*ChartPage*/]))->File(), void();
}

// public override sealed Uno.UX.Selector get_Name() :24
void NS_accessor_ChartPage_File__get_Name_fn(NS_accessor_ChartPage_File* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = NS_accessor_ChartPage_File::_name_, void();
}

// public generated NS_accessor_ChartPage_File New() :21
void NS_accessor_ChartPage_File__New1_fn(NS_accessor_ChartPage_File** __retval)
{
    *__retval = NS_accessor_ChartPage_File::New1();
}

// public override sealed Uno.Type get_PropertyType() :26
void NS_accessor_ChartPage_File__get_PropertyType_fn(NS_accessor_ChartPage_File* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :28
void NS_accessor_ChartPage_File__SetAsObject_fn(NS_accessor_ChartPage_File* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("NS_accessor_ChartPage_File", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::ChartPage*>(obj, ::TYPES[0/*ChartPage*/]))->SetFile(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :29
void NS_accessor_ChartPage_File__get_SupportsOriginSetter_fn(NS_accessor_ChartPage_File* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> NS_accessor_ChartPage_File::Singleton_;
::g::Uno::UX::Selector NS_accessor_ChartPage_File::_name_;

// public generated NS_accessor_ChartPage_File() [instance] :21
void NS_accessor_ChartPage_File::ctor_1()
{
    ctor_();
}

// public generated NS_accessor_ChartPage_File New() [static] :21
NS_accessor_ChartPage_File* NS_accessor_ChartPage_File::New1()
{
    NS_accessor_ChartPage_File* obj1 = (NS_accessor_ChartPage_File*)uNew(NS_accessor_ChartPage_File_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g

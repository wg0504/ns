// This file was generated based on /Users/yeom/Documents/NS/build/iOS/Preview/cache/ux15/NS.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Info.h>
#include <_root.NS_Info_Name_Property.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class NS_Info_Name_Property :144
// {
static void NS_Info_Name_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Info_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Info*/], offsetof(NS_Info_Name_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* NS_Info_Name_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NS_Info_Name_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("NS_Info_Name_Property", options);
    type->fp_build_ = NS_Info_Name_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))NS_Info_Name_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))NS_Info_Name_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))NS_Info_Name_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))NS_Info_Name_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public NS_Info_Name_Property(Info obj, Uno.UX.Selector name) :147
void NS_Info_Name_Property__ctor_3_fn(NS_Info_Name_Property* __this, ::g::Info* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :149
void NS_Info_Name_Property__Get1_fn(NS_Info_Name_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("NS_Info_Name_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Info*>(obj, ::TYPES[0/*Info*/]))->Name1(), void();
}

// public NS_Info_Name_Property New(Info obj, Uno.UX.Selector name) :147
void NS_Info_Name_Property__New1_fn(::g::Info* obj, ::g::Uno::UX::Selector* name, NS_Info_Name_Property** __retval)
{
    *__retval = NS_Info_Name_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :148
void NS_Info_Name_Property__get_Object_fn(NS_Info_Name_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :150
void NS_Info_Name_Property__Set1_fn(NS_Info_Name_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("NS_Info_Name_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Info*>(obj, ::TYPES[0/*Info*/]))->SetName(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :151
void NS_Info_Name_Property__get_SupportsOriginSetter_fn(NS_Info_Name_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public NS_Info_Name_Property(Info obj, Uno.UX.Selector name) [instance] :147
void NS_Info_Name_Property::ctor_3(::g::Info* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public NS_Info_Name_Property New(Info obj, Uno.UX.Selector name) [static] :147
NS_Info_Name_Property* NS_Info_Name_Property::New1(::g::Info* obj, ::g::Uno::UX::Selector name)
{
    NS_Info_Name_Property* obj1 = (NS_Info_Name_Property*)uNew(NS_Info_Name_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g

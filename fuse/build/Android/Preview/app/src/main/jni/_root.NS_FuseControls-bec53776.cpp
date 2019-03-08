// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/NS.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.NS_FuseControls-bec53776.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class NS_FuseControlsTextControl_Color_Property :69
// {
static void NS_FuseControlsTextControl_Color_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.TextControl*/], offsetof(NS_FuseControlsTextControl_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* NS_FuseControlsTextControl_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NS_FuseControlsTextControl_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("NS_FuseControlsTextControl_Color_Property", options);
    type->fp_build_ = NS_FuseControlsTextControl_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))NS_FuseControlsTextControl_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))NS_FuseControlsTextControl_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))NS_FuseControlsTextControl_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))NS_FuseControlsTextControl_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public NS_FuseControlsTextControl_Color_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :72
void NS_FuseControlsTextControl_Color_Property__ctor_3_fn(NS_FuseControlsTextControl_Color_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :74
void NS_FuseControlsTextControl_Color_Property__Get1_fn(NS_FuseControlsTextControl_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("NS_FuseControlsTextControl_Color_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[0/*Fuse.Controls.TextControl*/]))->Color(), void();
}

// public NS_FuseControlsTextControl_Color_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :72
void NS_FuseControlsTextControl_Color_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, NS_FuseControlsTextControl_Color_Property** __retval)
{
    *__retval = NS_FuseControlsTextControl_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :73
void NS_FuseControlsTextControl_Color_Property__get_Object_fn(NS_FuseControlsTextControl_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :75
void NS_FuseControlsTextControl_Color_Property__Set1_fn(NS_FuseControlsTextControl_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("NS_FuseControlsTextControl_Color_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[0/*Fuse.Controls.TextControl*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :76
void NS_FuseControlsTextControl_Color_Property__get_SupportsOriginSetter_fn(NS_FuseControlsTextControl_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public NS_FuseControlsTextControl_Color_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :72
void NS_FuseControlsTextControl_Color_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public NS_FuseControlsTextControl_Color_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :72
NS_FuseControlsTextControl_Color_Property* NS_FuseControlsTextControl_Color_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    NS_FuseControlsTextControl_Color_Property* obj1 = (NS_FuseControlsTextControl_Color_Property*)uNew(NS_FuseControlsTextControl_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g

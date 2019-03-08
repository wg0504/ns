// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/NS.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.NS_FuseElements-59de043f.h>
#include <Fuse.Elements.Element.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class NS_FuseElementsElement_Height_Property :119
// {
static void NS_FuseElementsElement_Height_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(NS_FuseElementsElement_Height_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* NS_FuseElementsElement_Height_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NS_FuseElementsElement_Height_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("NS_FuseElementsElement_Height_Property", options);
    type->fp_build_ = NS_FuseElementsElement_Height_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))NS_FuseElementsElement_Height_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))NS_FuseElementsElement_Height_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))NS_FuseElementsElement_Height_Property__Set1_fn;
    return type;
}

// public NS_FuseElementsElement_Height_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :122
void NS_FuseElementsElement_Height_Property__ctor_3_fn(NS_FuseElementsElement_Height_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Uno.UX.Size Get(Uno.UX.PropertyObject obj) :124
void NS_FuseElementsElement_Height_Property__Get1_fn(NS_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* __retval)
{
    uStackFrame __("NS_FuseElementsElement_Height_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]))->Height(), void();
}

// public NS_FuseElementsElement_Height_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :122
void NS_FuseElementsElement_Height_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, NS_FuseElementsElement_Height_Property** __retval)
{
    *__retval = NS_FuseElementsElement_Height_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :123
void NS_FuseElementsElement_Height_Property__get_Object_fn(NS_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Uno.UX.Size v, Uno.UX.IPropertyListener origin) :125
void NS_FuseElementsElement_Height_Property__Set1_fn(NS_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* v, uObject* origin)
{
    uStackFrame __("NS_FuseElementsElement_Height_Property", "Set(Uno.UX.PropertyObject,Uno.UX.Size,Uno.UX.IPropertyListener)");
    ::g::Uno::UX::Size v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]))->Height(v_);
}

// public NS_FuseElementsElement_Height_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :122
void NS_FuseElementsElement_Height_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public NS_FuseElementsElement_Height_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :122
NS_FuseElementsElement_Height_Property* NS_FuseElementsElement_Height_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    NS_FuseElementsElement_Height_Property* obj1 = (NS_FuseElementsElement_Height_Property*)uNew(NS_FuseElementsElement_Height_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g

// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/NS.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.NS_FuseCharting-b0727e0e.h>
#include <Fuse.Charting.DataSeries.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class NS_FuseChartingDataSeries_Data_Property :103
// {
static void NS_FuseChartingDataSeries_Data_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Charting::DataSeries_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::IArray_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Charting.DataSeries*/], offsetof(NS_FuseChartingDataSeries_Data_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* NS_FuseChartingDataSeries_Data_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NS_FuseChartingDataSeries_Data_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("NS_FuseChartingDataSeries_Data_Property", options);
    type->fp_build_ = NS_FuseChartingDataSeries_Data_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))NS_FuseChartingDataSeries_Data_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))NS_FuseChartingDataSeries_Data_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))NS_FuseChartingDataSeries_Data_Property__Set1_fn;
    return type;
}

// public NS_FuseChartingDataSeries_Data_Property(Fuse.Charting.DataSeries obj, Uno.UX.Selector name) :106
void NS_FuseChartingDataSeries_Data_Property__ctor_3_fn(NS_FuseChartingDataSeries_Data_Property* __this, ::g::Fuse::Charting::DataSeries* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.IArray Get(Uno.UX.PropertyObject obj) :108
void NS_FuseChartingDataSeries_Data_Property__Get1_fn(NS_FuseChartingDataSeries_Data_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("NS_FuseChartingDataSeries_Data_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Charting::DataSeries*>(obj, ::TYPES[0/*Fuse.Charting.DataSeries*/]))->Data(), void();
}

// public NS_FuseChartingDataSeries_Data_Property New(Fuse.Charting.DataSeries obj, Uno.UX.Selector name) :106
void NS_FuseChartingDataSeries_Data_Property__New1_fn(::g::Fuse::Charting::DataSeries* obj, ::g::Uno::UX::Selector* name, NS_FuseChartingDataSeries_Data_Property** __retval)
{
    *__retval = NS_FuseChartingDataSeries_Data_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :107
void NS_FuseChartingDataSeries_Data_Property__get_Object_fn(NS_FuseChartingDataSeries_Data_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.IArray v, Uno.UX.IPropertyListener origin) :109
void NS_FuseChartingDataSeries_Data_Property__Set1_fn(NS_FuseChartingDataSeries_Data_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("NS_FuseChartingDataSeries_Data_Property", "Set(Uno.UX.PropertyObject,Fuse.IArray,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Charting::DataSeries*>(obj, ::TYPES[0/*Fuse.Charting.DataSeries*/]))->Data(v);
}

// public NS_FuseChartingDataSeries_Data_Property(Fuse.Charting.DataSeries obj, Uno.UX.Selector name) [instance] :106
void NS_FuseChartingDataSeries_Data_Property::ctor_3(::g::Fuse::Charting::DataSeries* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public NS_FuseChartingDataSeries_Data_Property New(Fuse.Charting.DataSeries obj, Uno.UX.Selector name) [static] :106
NS_FuseChartingDataSeries_Data_Property* NS_FuseChartingDataSeries_Data_Property::New1(::g::Fuse::Charting::DataSeries* obj, ::g::Uno::UX::Selector name)
{
    NS_FuseChartingDataSeries_Data_Property* obj1 = (NS_FuseChartingDataSeries_Data_Property*)uNew(NS_FuseChartingDataSeries_Data_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g

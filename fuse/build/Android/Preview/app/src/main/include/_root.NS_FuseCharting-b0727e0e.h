// This file was generated based on /Users/yeom/Documents/NS/build/Android/Preview/cache/ux15/NS.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Charting{struct DataSeries;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct NS_FuseChartingDataSeries_Data_Property;}

namespace g{

// internal sealed class NS_FuseChartingDataSeries_Data_Property :103
// {
::g::Uno::UX::Property1_type* NS_FuseChartingDataSeries_Data_Property_typeof();
void NS_FuseChartingDataSeries_Data_Property__ctor_3_fn(NS_FuseChartingDataSeries_Data_Property* __this, ::g::Fuse::Charting::DataSeries* obj, ::g::Uno::UX::Selector* name);
void NS_FuseChartingDataSeries_Data_Property__Get1_fn(NS_FuseChartingDataSeries_Data_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void NS_FuseChartingDataSeries_Data_Property__New1_fn(::g::Fuse::Charting::DataSeries* obj, ::g::Uno::UX::Selector* name, NS_FuseChartingDataSeries_Data_Property** __retval);
void NS_FuseChartingDataSeries_Data_Property__get_Object_fn(NS_FuseChartingDataSeries_Data_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void NS_FuseChartingDataSeries_Data_Property__Set1_fn(NS_FuseChartingDataSeries_Data_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);

struct NS_FuseChartingDataSeries_Data_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Charting::DataSeries*> _obj;

    void ctor_3(::g::Fuse::Charting::DataSeries* obj, ::g::Uno::UX::Selector name);
    static NS_FuseChartingDataSeries_Data_Property* New1(::g::Fuse::Charting::DataSeries* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g

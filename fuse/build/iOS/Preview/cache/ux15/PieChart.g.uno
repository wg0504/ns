[Uno.Compiler.UxGenerated]
public partial class PieChart: Fuse.Controls.Page
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly PieChart __parent;
        [Uno.WeakReference] internal readonly PieChart __parentInstance;
        public Template(PieChart parent, PieChart parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<Uno.UX.Size> __self_Width_inst;
        global::Uno.UX.Property<Uno.UX.Size> __self_Height_inst;
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Panel();
            var temp = new global::Fuse.Charting.PlotExpression("data.source.z");
            var temp1 = new global::Fuse.Animations.Attract(temp, global::PieChart.pieAttract);
            var temp2 = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            var temp3 = new global::Fuse.Reactive.Constant(temp2);
            __self_Width_inst = new NS_FuseElementsElement_Width_Property(__self, __selector0);
            var temp4 = new global::Fuse.Reactive.Multiply(temp1, temp3);
            var temp5 = new global::Fuse.Charting.PlotExpression("data.source.z");
            var temp6 = new global::Fuse.Animations.Attract(temp5, global::PieChart.pieAttract);
            var temp7 = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            var temp8 = new global::Fuse.Reactive.Constant(temp7);
            __self_Height_inst = new NS_FuseElementsElement_Height_Property(__self, __selector1);
            var temp9 = new global::Fuse.Reactive.Multiply(temp6, temp8);
            var temp10 = new global::Fuse.Reactive.DataBinding(__self_Width_inst, temp4, Fuse.Reactive.BindingMode.Default);
            var temp11 = new global::Fuse.Reactive.DataBinding(__self_Height_inst, temp9, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 63;
            __self.SourceFileName = "PieChart.ux";
            temp4.SourceLineNumber = 63;
            temp4.SourceFileName = "PieChart.ux";
            temp1.SourceLineNumber = 63;
            temp1.SourceFileName = "PieChart.ux";
            temp.SourceLineNumber = 63;
            temp.SourceFileName = "PieChart.ux";
            temp3.SourceLineNumber = 63;
            temp3.SourceFileName = "PieChart.ux";
            temp9.SourceLineNumber = 63;
            temp9.SourceFileName = "PieChart.ux";
            temp6.SourceLineNumber = 63;
            temp6.SourceFileName = "PieChart.ux";
            temp5.SourceLineNumber = 63;
            temp5.SourceFileName = "PieChart.ux";
            temp8.SourceLineNumber = 63;
            temp8.SourceFileName = "PieChart.ux";
            __self.Bindings.Add(temp10);
            __self.Bindings.Add(temp11);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Width";
        static global::Uno.UX.Selector __selector1 = "Height";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly PieChart __parent;
        [Uno.WeakReference] internal readonly PieChart __parentInstance;
        public Template1(PieChart parent, PieChart parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<float4> __self_Color_inst;
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Charting.PlotWedge();
            var temp = new global::Fuse.Charting.PlotExpression("data.object");
            __self_Color_inst = new NS_FuseControlsShape_Color_Property(__self, __selector0);
            var temp1 = new global::Fuse.Reactive.Member(temp, "color");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_Color_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.StrokeColor = float4(0f, 1f, 0f, 0f);
            __self.StrokeWidth = 1f;
            __self.SourceLineNumber = 67;
            __self.SourceFileName = "PieChart.ux";
            temp.SourceLineNumber = 67;
            temp.SourceFileName = "PieChart.ux";
            temp1.SourceLineNumber = 67;
            temp1.SourceFileName = "PieChart.ux";
            __self.Attractor = global::PieChart.pieAttract;
            __self.Bindings.Add(temp2);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Color";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly PieChart __parent;
        [Uno.WeakReference] internal readonly PieChart __parentInstance;
        public Template2(PieChart parent, PieChart parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> label_Col_inst;
        global::Uno.UX.Property<string> label_Name_inst;
        internal global::Info label;
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.StackPanel();
            label = new global::Info();
            label_Col_inst = new NS_Info_Col_Property(label, __selector0);
            var temp = new global::Fuse.Reactive.Data("color");
            label_Name_inst = new NS_Info_Name_Property(label, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("label");
            var temp2 = new global::Fuse.Reactive.DataBinding(label_Col_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(label_Name_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 74;
            __self.SourceFileName = "PieChart.ux";
            label.Width = new Uno.UX.Size(60f, Uno.UX.Unit.Percent);
            label.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            label.SourceLineNumber = 75;
            label.SourceFileName = "PieChart.ux";
            label.Bindings.Add(temp2);
            label.Bindings.Add(temp3);
            temp.SourceLineNumber = 75;
            temp.SourceFileName = "PieChart.ux";
            temp1.SourceLineNumber = 75;
            temp1.SourceFileName = "PieChart.ux";
            __self.Children.Add(label);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Col";
        static global::Uno.UX.Selector __selector1 = "Name";
    }
    global::Uno.UX.Property<Fuse.IArray> temp_Data_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    [global::Uno.UX.UXGlobalResource("pieAttract")] public static readonly Fuse.Animations.AttractorConfig pieAttract;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static PieChart()
    {
        pieAttract = new global::Fuse.Animations.AttractorConfig();
        pieAttract.Type = Fuse.Motion.MotionDestinationType.Elastic;
        pieAttract.Unit = Fuse.Motion.MotionUnit.Normalized;
        global::Uno.UX.Resource.SetGlobalKey(pieAttract, "pieAttract");
    }
    [global::Uno.UX.UXConstructor]
    public PieChart()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Charting.DataSeries();
        temp_Data_inst = new NS_FuseChartingDataSeries_Data_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Data("data1");
        var temp1 = new global::Fuse.Reactive.Each();
        temp1_Items_inst = new NS_FuseReactiveEach_Items_Property(temp1, __selector1);
        var temp3 = new global::Fuse.Reactive.Data("data1");
        var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp5 = new global::Fuse.Controls.ScrollView();
        var temp6 = new global::Fuse.Controls.StackPanel();
        var temp7 = new global::Fuse.Charting.Plot();
        var temp8 = new global::Fuse.Controls.Panel();
        var temp9 = new global::Fuse.Controls.VectorLayer();
        var temp10 = new global::Fuse.Charting.PlotData();
        var temp11 = new Template(this, this);
        var temp12 = new Template1(this, this);
        var temp13 = new global::Fuse.Controls.Circle();
        var temp14 = new global::Fuse.Reactive.DataBinding(temp_Data_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp15 = new Template2(this, this);
        var temp16 = new global::Fuse.Reactive.DataBinding(temp1_Items_inst, temp3, Fuse.Reactive.BindingMode.Default);
        this.SourceLineNumber = 2;
        this.SourceFileName = "PieChart.ux";
        temp4.Code = "\n\t\tvar Observable = require(\"FuseJS/Observable\")\n\t\tfunction Item( y, z, label, color ) {\n\t\t\tthis.y = y\n\t\t\tthis.z = z\n\t\t\tthis.label = label\n\t\t\tthis.color = color\n\t\t\tthis.start = 0;\n\t\t\tthis.end = 0;\n\t\t}\n\t\t\n\t\tvar names = [ \"Vebjørn\", \"Annbjørg\",  \"Øystein\", \"Åslaug\",  \"Tormod\", \"Borghild\" ]\n\t\tvar colors = [ \"#DEF\", \"#DFE\", \"#FDE\", \"#EDF\", \"#EFD\", \"#FED\" ]\n\t\texports.data1 = Observable()\n\t\tvar sum = 0;\n\t\tfunction create() {\n\t\t\tvar list = []\n\t\t\tfor (var i=0; i < names.length; ++i ) {\n\t\t\t\tvar random = Math.random();\n\t\t\t\tvar c = random * 100 + 10\n\t\t\t\tsum = sum + c;\n\t\t\t\tlist.push( new Item( c, Math.random(), names[i], colors[i] ) )\n\t\t\t}\n\t\t\treturn list\n\t\t}\n\n\t\tfunction getAngle(){\n\t\t\texports.data1.forEach( function(Item,idx){\n\t\t\t\tconsole.log(Item.y,idx);\n\t\t\t})\n\t\t}\n\t\n\n\t\texports.random = function() {\n\t\t\texports.data1.replaceAll( create() )\n\t\t\tsum = 0;\n\t\t}\n\t\texports.getAngle = function(){\n\t\t\tgetAngle();\n\t\t}\n\t\t\n\t\texports.random()\n\t\texports.getAngle()\n\t";
        temp4.LineNumber = 3;
        temp4.FileName = "PieChart.ux";
        temp4.SourceLineNumber = 3;
        temp4.SourceFileName = "PieChart.ux";
        temp5.SourceLineNumber = 47;
        temp5.SourceFileName = "PieChart.ux";
        temp5.Children.Add(temp6);
        temp6.SourceLineNumber = 48;
        temp6.SourceFileName = "PieChart.ux";
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp1);
        temp7.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Percent);
        temp7.Margin = float4(20f, 20f, 20f, 20f);
        temp7.SourceLineNumber = 51;
        temp7.SourceFileName = "PieChart.ux";
        temp7.Series.Add(temp);
        temp7.Children.Add(temp8);
        temp7.Children.Add(temp13);
        temp7.Bindings.Add(temp14);
        temp2.SourceLineNumber = 52;
        temp2.SourceFileName = "PieChart.ux";
        temp8.Margin = float4(0f, 0f, 0f, 0f);
        temp8.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        temp8.SourceLineNumber = 53;
        temp8.SourceFileName = "PieChart.ux";
        temp8.Children.Add(temp9);
        temp9.HitTestMode = Fuse.Elements.HitTestMode.None;
        temp9.SourceLineNumber = 60;
        temp9.SourceFileName = "PieChart.ux";
        temp9.Children.Add(temp10);
        temp10.SourceLineNumber = 61;
        temp10.SourceFileName = "PieChart.ux";
        temp10.Templates.Add(temp11);
        temp10.Templates.Add(temp12);
        temp13.Color = float4(1f, 1f, 1f, 1f);
        temp13.Width = new Uno.UX.Size(60f, Uno.UX.Unit.Percent);
        temp13.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp13.Alignment = Fuse.Elements.Alignment.Center;
        temp13.ZOffset = 3f;
        temp13.SourceLineNumber = 71;
        temp13.SourceFileName = "PieChart.ux";
        temp1.SourceLineNumber = 73;
        temp1.SourceFileName = "PieChart.ux";
        temp1.Templates.Add(temp15);
        temp1.Bindings.Add(temp16);
        temp3.SourceLineNumber = 73;
        temp3.SourceFileName = "PieChart.ux";
        __g_nametable.This = this;
        this.Children.Add(temp4);
        this.Children.Add(temp5);
    }
    static global::Uno.UX.Selector __selector0 = "Data";
    static global::Uno.UX.Selector __selector1 = "Items";
}

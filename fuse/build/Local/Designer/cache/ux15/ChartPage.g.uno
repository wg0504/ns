[Uno.Compiler.UxGenerated]
public partial class ChartPage: Fuse.Controls.Container
{
    string _field_Title;
    [global::Uno.UX.UXOriginSetter("SetTitle")]
    public string Title
    {
        get { return _field_Title; }
        set { SetTitle(value, null); }
    }
    public void SetTitle(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Title)
        {
            _field_Title = value;
            OnPropertyChanged("Title", origin);
        }
    }
    string _field_File;
    [global::Uno.UX.UXOriginSetter("SetFile")]
    public string File
    {
        get { return _field_File; }
        set { SetFile(value, null); }
    }
    public void SetFile(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_File)
        {
            _field_File = value;
            OnPropertyChanged("File", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> fileText_Value_inst;
    global::Uno.UX.Property<Fuse.Elements.Element> chart_Element_LayoutMaster_inst;
    global::Uno.UX.Property<Fuse.Elements.Visibility> fileText_Visibility_inst;
    global::Uno.UX.Property<Fuse.Elements.Element> temp1_Value_inst;
    internal global::Fuse.Controls.DockPanel chart;
    internal global::Fuse.Controls.Text fileText;
    internal global::Fuse.Controls.Panel inner;
    internal global::Fuse.Triggers.WhileTrue showFull;
    static ChartPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ChartPage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp2 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new NS_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Property(temp2, NS_accessor_ChartPage_Title.Singleton);
        var temp4 = new global::Fuse.Reactive.Constant(this);
        fileText = new global::Fuse.Controls.Text();
        fileText_Value_inst = new NS_FuseControlsTextControl_Value_Property(fileText, __selector0);
        var temp5 = new global::Fuse.Reactive.Property(temp4, NS_accessor_ChartPage_File.Singleton);
        chart = new global::Fuse.Controls.DockPanel();
        chart_Element_LayoutMaster_inst = new NS_FuseElementsElement_ElementLayoutMaster_Property(chart, __selector1);
        fileText_Visibility_inst = new NS_FuseElementsElement_Visibility_Property(fileText, __selector2);
        var temp1 = new global::Fuse.Animations.Change<Fuse.Elements.Element>(chart_Element_LayoutMaster_inst);
        temp1_Value_inst = new NS_FuseAnimationsChangeFuseElementsElement_Value_Property(temp1, __selector0);
        var temp6 = new global::Fuse.Reactive.Resource("fullScreen");
        var temp7 = new global::Fuse.Controls.Panel();
        var temp8 = new global::Fuse.Controls.Rectangle();
        var temp9 = new global::Fuse.Controls.Panel();
        var temp10 = new global::Fuse.Controls.Rectangle();
        var temp11 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp12 = new global::Fuse.Reactive.DataBinding(fileText_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp13 = new global::Fuse.Gestures.Clicked();
        var temp14 = new global::Fuse.Triggers.Actions.Toggle();
        inner = new global::Fuse.Controls.Panel();
        showFull = new global::Fuse.Triggers.WhileTrue();
        var temp15 = new global::Fuse.Triggers.Actions.BringToFront();
        var temp16 = new global::Fuse.Animations.Change<Fuse.Elements.Visibility>(fileText_Visibility_inst);
        var temp17 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var temp18 = new global::Fuse.Triggers.LayoutAnimation();
        var temp19 = new global::Fuse.Animations.Move();
        var temp20 = new global::Fuse.Animations.Scale();
        this.SourceLineNumber = 1;
        this.SourceFileName = "ChartPage.ux";
        temp7.Aspect = 1.3f;
        temp7.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        temp7.SourceLineNumber = 16;
        temp7.SourceFileName = "ChartPage.ux";
        temp7.Children.Add(chart);
        chart.Name = __selector3;
        chart.SourceLineNumber = 17;
        chart.SourceFileName = "ChartPage.ux";
        chart.TransformOrigin = Fuse.Elements.TransformOrigins.TopLeft;
        chart.Children.Add(temp8);
        chart.Children.Add(temp9);
        chart.Children.Add(inner);
        chart.Children.Add(showFull);
        chart.Children.Add(temp18);
        temp8.CornerRadius = float4(5f, 5f, 5f, 5f);
        temp8.Color = float4(1f, 1f, 1f, 1f);
        temp8.Layer = Fuse.Layer.Background;
        temp8.SourceLineNumber = 18;
        temp8.SourceFileName = "ChartPage.ux";
        temp9.Margin = float4(0f, 0f, 0f, 5f);
        temp9.Padding = float4(2f, 5f, 2f, 5f);
        temp9.SourceLineNumber = 20;
        temp9.SourceFileName = "ChartPage.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp9, Fuse.Layouts.Dock.Top);
        temp9.Children.Add(temp10);
        temp9.Children.Add(temp);
        temp9.Children.Add(fileText);
        temp9.Children.Add(temp13);
        temp10.CornerRadius = float4(5f, 5f, 0f, 0f);
        temp10.Color = float4(0.7333333f, 0.7333333f, 0.7333333f, 1f);
        temp10.Layer = Fuse.Layer.Background;
        temp10.SourceLineNumber = 21;
        temp10.SourceFileName = "ChartPage.ux";
        temp.Color = float4(0f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Left;
        temp.SourceLineNumber = 22;
        temp.SourceFileName = "ChartPage.ux";
        temp.Bindings.Add(temp11);
        temp3.SourceLineNumber = 22;
        temp3.SourceFileName = "ChartPage.ux";
        temp2.SourceLineNumber = 22;
        temp2.SourceFileName = "ChartPage.ux";
        fileText.Color = float4(0f, 0f, 0f, 1f);
        fileText.Alignment = Fuse.Elements.Alignment.Right;
        fileText.Visibility = Fuse.Elements.Visibility.Hidden;
        fileText.Name = __selector4;
        fileText.SourceLineNumber = 23;
        fileText.SourceFileName = "ChartPage.ux";
        fileText.Bindings.Add(temp12);
        temp5.SourceLineNumber = 23;
        temp5.SourceFileName = "ChartPage.ux";
        temp4.SourceLineNumber = 23;
        temp4.SourceFileName = "ChartPage.ux";
        temp13.SourceLineNumber = 25;
        temp13.SourceFileName = "ChartPage.ux";
        temp13.Actions.Add(temp14);
        temp14.SourceLineNumber = 26;
        temp14.SourceFileName = "ChartPage.ux";
        temp14.Target = showFull;
        inner.Name = __selector5;
        inner.SourceLineNumber = 30;
        inner.SourceFileName = "ChartPage.ux";
        showFull.Name = __selector6;
        showFull.SourceLineNumber = 32;
        showFull.SourceFileName = "ChartPage.ux";
        showFull.Animators.Add(temp1);
        showFull.Animators.Add(temp16);
        showFull.Actions.Add(temp15);
        showFull.Bindings.Add(temp17);
        temp6.SourceLineNumber = 33;
        temp6.SourceFileName = "ChartPage.ux";
        temp15.SourceLineNumber = 34;
        temp15.SourceFileName = "ChartPage.ux";
        temp15.Target = this;
        temp16.Value = Fuse.Elements.Visibility.Visible;
        temp18.SourceLineNumber = 38;
        temp18.SourceFileName = "ChartPage.ux";
        temp18.Animators.Add(temp19);
        temp18.Animators.Add(temp20);
        temp19.Vector = float3(1f, 1f, 1f);
        temp19.Duration = 0.25;
        temp19.RelativeTo = Fuse.Triggers.LayoutTransition.PositionChange;
        temp19.Easing = Fuse.Animations.Easing.SinusoidalInOut;
        temp20.Factor = 1f;
        temp20.Duration = 0.25;
        temp20.RelativeTo = Fuse.Triggers.LayoutTransition.ScalingSizeChange;
        temp20.Easing = Fuse.Animations.Easing.SinusoidalInOut;
        this.Subtree = inner;
        this.Children.Add(temp7);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Element.LayoutMaster";
    static global::Uno.UX.Selector __selector2 = "Visibility";
    static global::Uno.UX.Selector __selector3 = "chart";
    static global::Uno.UX.Selector __selector4 = "fileText";
    static global::Uno.UX.Selector __selector5 = "inner";
    static global::Uno.UX.Selector __selector6 = "showFull";
}

[Uno.Compiler.UxGenerated]
public partial class ChartButton: Fuse.Controls.Rectangle
{
    string _field_Label;
    [global::Uno.UX.UXOriginSetter("SetLabel")]
    public string Label
    {
        get { return _field_Label; }
        set { SetLabel(value, null); }
    }
    public void SetLabel(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Label)
        {
            _field_Label = value;
            OnPropertyChanged("Label", origin);
        }
    }
    global::Uno.UX.Property<string> label_Value_inst;
    global::Uno.UX.Property<float4> this_Color_inst;
    global::Uno.UX.Property<float4> label_Color_inst;
    internal global::Fuse.Controls.Text label;
    static ChartButton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ChartButton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Reactive.Constant(this);
        label = new global::Fuse.Controls.Text();
        label_Value_inst = new NS_FuseControlsTextControl_Value_Property(label, __selector0);
        var temp1 = new global::Fuse.Reactive.Property(temp, NS_accessor_ChartButton_Label.Singleton);
        this_Color_inst = new NS_FuseControlsShape_Color_Property(this, __selector1);
        label_Color_inst = new NS_FuseControlsTextControl_Color_Property(label, __selector1);
        var temp2 = new global::Fuse.Reactive.DataBinding(label_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
        var temp3 = new global::Fuse.Triggers.WhileDisabled();
        var temp4 = new global::Fuse.Animations.Change<float4>(this_Color_inst);
        var temp5 = new global::Fuse.Animations.Change<float4>(label_Color_inst);
        this.CornerRadius = float4(5f, 5f, 5f, 5f);
        this.Color = float4(0.6666667f, 0.8666667f, 1f, 0.5333334f);
        this.Padding = float4(5f, 5f, 5f, 5f);
        this.SourceLineNumber = 5;
        this.SourceFileName = "ChartPage.ux";
        label.FontSize = 23f;
        label.Color = float4(0f, 0f, 0f, 1f);
        label.Name = __selector2;
        label.SourceLineNumber = 7;
        label.SourceFileName = "ChartPage.ux";
        label.Bindings.Add(temp2);
        temp1.SourceLineNumber = 7;
        temp1.SourceFileName = "ChartPage.ux";
        temp.SourceLineNumber = 7;
        temp.SourceFileName = "ChartPage.ux";
        temp3.SourceLineNumber = 9;
        temp3.SourceFileName = "ChartPage.ux";
        temp3.Animators.Add(temp4);
        temp3.Animators.Add(temp5);
        temp4.Value = float4(0.8666667f, 0.9333333f, 1f, 1f);
        temp4.Duration = 0.1;
        temp5.Value = float4(0.5333334f, 0.5333334f, 0.5333334f, 1f);
        temp5.Duration = 0.1;
        this.Children.Add(label);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "label";
}

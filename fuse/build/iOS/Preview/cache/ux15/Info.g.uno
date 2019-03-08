[Uno.Compiler.UxGenerated]
public partial class Info: Fuse.Controls.Panel
{
    string _field_Col;
    [global::Uno.UX.UXOriginSetter("SetCol")]
    public string Col
    {
        get { return _field_Col; }
        set { SetCol(value, null); }
    }
    public void SetCol(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Col)
        {
            _field_Col = value;
            OnPropertyChanged("Col", origin);
        }
    }
    string _field_Name;
    [global::Uno.UX.UXOriginSetter("SetName")]
    public string Name
    {
        get { return _field_Name; }
        set { SetName(value, null); }
    }
    public void SetName(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Name)
        {
            _field_Name = value;
            OnPropertyChanged("Name", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> temp1_Color_inst;
    static Info()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Info()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp2 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new NS_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Property(temp2, NS_accessor_Info_Name.Singleton);
        var temp4 = new global::Fuse.Reactive.Constant(this);
        var temp1 = new global::Fuse.Controls.Circle();
        temp1_Color_inst = new NS_FuseControlsShape_Color_Property(temp1, __selector1);
        var temp5 = new global::Fuse.Reactive.Property(temp4, NS_accessor_Info_Col.Singleton);
        var temp6 = new global::Fuse.Controls.Grid();
        var temp7 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp8 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp5, Fuse.Reactive.BindingMode.Default);
        this.Margin = float4(10f, 5f, 0f, 5f);
        this.SourceLineNumber = 47;
        this.SourceFileName = "ChartPage.ux";
        temp6.RowCount = 1;
        temp6.Columns = "3*,7*";
        temp6.ColumnCount = 2;
        temp6.SourceLineNumber = 50;
        temp6.SourceFileName = "ChartPage.ux";
        temp6.Children.Add(temp);
        temp6.Children.Add(temp1);
        temp.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Margin = float4(0f, 0f, 0f, 0f);
        temp.SourceLineNumber = 51;
        temp.SourceFileName = "ChartPage.ux";
        global::Fuse.Controls.Grid.SetColumn(temp, 1);
        temp.Bindings.Add(temp7);
        temp3.SourceLineNumber = 51;
        temp3.SourceFileName = "ChartPage.ux";
        temp2.SourceLineNumber = 51;
        temp2.SourceFileName = "ChartPage.ux";
        temp1.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp1.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp1.SourceLineNumber = 52;
        temp1.SourceFileName = "ChartPage.ux";
        global::Fuse.Controls.Grid.SetColumn(temp1, 0);
        temp1.Bindings.Add(temp8);
        temp5.SourceLineNumber = 52;
        temp5.SourceFileName = "ChartPage.ux";
        temp4.SourceLineNumber = 52;
        temp4.SourceFileName = "ChartPage.ux";
        this.Children.Add(temp6);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Color";
}

public partial class MainView: Fuse.App
{
    static MainView()
    {
    }
    public MainView()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        var temp = new Fuse.Controls.DockPanel();
        var temp1 = new Fuse.Controls.Rectangle();
        var temp2 = new Fuse.Controls.Rectangle();
        var temp3 = new Fuse.Controls.StackPanel();
        var temp4 = new Fuse.Controls.Rectangle();
        var temp5 = new Fuse.Controls.Rectangle();
        var temp6 = new Fuse.Drawing.Stroke();
        var temp7 = new Fuse.Drawing.StaticSolidColor(float4(0.6666667f, 0.6666667f, 0.6666667f, 1f));
        var temp8 = new Fuse.Controls.Text();
        var temp9 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp10 = new Fuse.Drawing.StaticSolidColor(float4(0.9333333f, 0.9333333f, 0.9333333f, 1f));
        var temp11 = new Fuse.Controls.StackPanel();
        var temp12 = new Fuse.Controls.Text();
        var temp13 = new Fuse.Controls.Text();
        var temp14 = new Fuse.Controls.Image();
        var temp15 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp16 = new Fuse.Drawing.StaticSolidColor(float4(0.9058824f, 0.2980392f, 0.2352941f, 1f));
        var temp17 = new Fuse.Controls.Rectangle();
        var temp18 = new Fuse.Drawing.StaticSolidColor(float4(0.172549f, 0.2431373f, 0.3137255f, 1f));
        this.Background = float4(0.4666667f, 0.4666667f, 0.4666667f, 1f);
        temp.Children.Add(temp1);
        temp.Children.Add(temp17);
        Fuse.Elements.Element.WidthProperty.Set(temp1, 100f, global::Fuse.Elements.SizeUnit.Percent);
        temp1.Height = 390f;
        global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Top);
        temp1.Fill = temp16;
        temp1.Children.Add(temp2);
        temp2.CornerRadius = float4(5f, 5f, 0f, 0f);
        Fuse.Elements.Element.WidthProperty.Set(temp2, 100f, global::Fuse.Elements.SizeUnit.Percent);
        temp2.Height = 200f;
        temp2.Alignment = Fuse.Elements.Alignment.Bottom;
        temp2.Margin = float4(32f, 32f, 32f, 0f);
        temp2.Fill = temp15;
        temp2.Children.Add(temp3);
        temp3.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp11);
        temp4.CornerRadius = float4(5f, 5f, 0f, 0f);
        Fuse.Elements.Element.WidthProperty.Set(temp4, 100f, global::Fuse.Elements.SizeUnit.Percent);
        temp4.Height = 56f;
        temp4.Alignment = Fuse.Elements.Alignment.Top;
        temp4.Fill = temp10;
        temp4.Children.Add(temp5);
        temp5.CornerRadius = float4(3f, 3f, 3f, 3f);
        Fuse.Elements.Element.WidthProperty.Set(temp5, 100f, global::Fuse.Elements.SizeUnit.Percent);
        temp5.Height = 40f;
        temp5.Alignment = Fuse.Elements.Alignment.Top;
        temp5.Margin = float4(8f, 8f, 64f, 8f);
        temp5.Fill = temp9;
        temp5.Strokes.Add(temp6);
        temp5.Children.Add(temp8);
        temp6.Width = 1f;
        temp6.Brush = temp7;
        temp8.Value = "www.medium.com";
        temp8.TextColor = float4(0f, 0f, 0f, 0.5019608f);
        temp8.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp8.Margin = float4(8f, 0f, 0f, 0f);
        temp11.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp11.Margin = float4(8f, 8f, 8f, 8f);
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp13);
        temp11.Children.Add(temp14);
        temp12.Value = "Technology Trends in 2015";
        temp12.TextWrapping = Fuse.Elements.TextWrapping.Wrap;
        temp12.FontSize = 21f;
        temp12.TextColor = float4(0f, 0f, 0f, 1f);
        temp13.Value = "by Mark";
        temp13.FontSize = 16f;
        temp13.TextColor = float4(1f, 0f, 0f, 1f);
        Fuse.Elements.Element.WidthProperty.Set(temp17, 100f, global::Fuse.Elements.SizeUnit.Percent);
        temp17.Height = 250f;
        global::Fuse.Controls.DockPanel.SetDock(temp17, Fuse.Layouts.Dock.Bottom);
        temp17.Fill = temp18;
        this.RootNode = temp;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
    }
}

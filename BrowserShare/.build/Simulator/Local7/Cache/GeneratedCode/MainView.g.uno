public partial class MainView: Fuse.App
{
    public sealed class Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property: Uno.UX.Property<Fuse.Elements.Visibility>
    {
        Fuse.Elements.Element _obj;
        public Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property(Fuse.Elements.Element obj) { _obj = obj; }
        protected override Fuse.Elements.Visibility OnGet() { return _obj.Visibility; }
        protected override void OnSet(Fuse.Elements.Visibility v, object origin) { _obj.Visibility = v; }
    }
    MainView.Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property Menu_Visibility_inst;
    internal Fuse.Controls.Rectangle Menu;
    static MainView()
    {
    }
    public MainView()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        Menu = new Fuse.Controls.Rectangle();
        Menu_Visibility_inst = new MainView.Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property(Menu);
        var temp = new Fuse.Controls.DockPanel();
        var temp1 = new Fuse.Controls.Rectangle();
        var temp2 = new Fuse.Controls.Rectangle();
        var temp3 = new Fuse.Controls.StackPanel();
        var temp4 = new Fuse.Controls.Panel();
        var temp5 = new Fuse.Effects.DropShadow();
        var temp6 = new Fuse.Controls.StackPanel();
        var temp7 = new Fuse.Controls.Text();
        var temp8 = new Fuse.Controls.Text();
        var temp9 = new Fuse.Controls.Text();
        var temp10 = new Fuse.Controls.Text();
        var temp11 = new Fuse.Controls.Text();
        var temp12 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp13 = new Fuse.Controls.Rectangle();
        var temp14 = new Fuse.Controls.Rectangle();
        var temp15 = new Fuse.Drawing.Stroke();
        var temp16 = new Fuse.Drawing.StaticSolidColor(float4(0.6666667f, 0.6666667f, 0.6666667f, 1f));
        var temp17 = new Fuse.Controls.Text();
        var temp18 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp19 = new Fuse.Controls.Rectangle();
        var temp20 = new Fuse.Drawing.Stroke();
        var temp21 = new Fuse.Drawing.StaticSolidColor(float4(0.6666667f, 0.6666667f, 0.6666667f, 1f));
        var temp22 = new Fuse.Controls.Text();
        var temp23 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp24 = new Fuse.Controls.Image();
        var temp25 = new Fuse.Gestures.Clicked();
        var temp26 = new Fuse.Animations.Change<Fuse.Elements.Visibility>(Menu_Visibility_inst);
        var temp27 = new Fuse.Drawing.StaticSolidColor(float4(0.9333333f, 0.9333333f, 0.9333333f, 1f));
        var temp28 = new Fuse.Controls.StackPanel();
        var temp29 = new Fuse.Controls.Text();
        var temp30 = new Fuse.Controls.Text();
        var temp31 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp32 = new Fuse.Drawing.StaticSolidColor(float4(0.9058824f, 0.2980392f, 0.2352941f, 1f));
        var temp33 = new Fuse.Controls.Rectangle();
        var temp34 = new Fuse.Drawing.StaticSolidColor(float4(0.1843137f, 0.2039216f, 0.2313726f, 1f));
        this.Background = float4(0.4666667f, 0.4666667f, 0.4666667f, 1f);
        temp.Children.Add(temp1);
        temp.Children.Add(temp33);
        Fuse.Elements.Element.WidthProperty.Set(temp1, 100f, global::Fuse.Elements.SizeUnit.Percent);
        temp1.Height = 390f;
        global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Top);
        temp1.Fill = temp32;
        temp1.Children.Add(temp2);
        temp2.CornerRadius = float4(5f, 5f, 0f, 0f);
        Fuse.Elements.Element.WidthProperty.Set(temp2, 100f, global::Fuse.Elements.SizeUnit.Percent);
        temp2.Height = 200f;
        temp2.Alignment = Fuse.Elements.Alignment.Bottom;
        temp2.Margin = float4(32f, 32f, 32f, 0f);
        temp2.Fill = temp31;
        temp2.Children.Add(temp3);
        temp3.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp3.Children.Add(temp4);
        temp4.Children.Add(Menu);
        temp4.Children.Add(temp13);
        temp4.Children.Add(temp28);
        Menu.CornerRadius = float4(3f, 3f, 3f, 3f);
        Fuse.Elements.Element.WidthProperty.Set(Menu, 40f, global::Fuse.Elements.SizeUnit.Percent);
        Menu.Height = 140f;
        Menu.Alignment = Fuse.Elements.Alignment.TopRight;
        Menu.Visibility = Fuse.Elements.Visibility.Collapsed;
        Menu.Margin = float4(8f, 8f, 40f, 8f);
        Menu.Name = "Menu";
        Menu.Fill = temp12;
        Menu.Children.Add(temp6);
        Menu.Effects.Add(temp5);
        temp5.Size = 4f;
        temp5.Angle = 90f;
        temp5.Distance = 2f;
        temp5.Spread = 0.05f;
        temp6.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp6.ItemSpacing = 8f;
        temp6.Padding = float4(8f, 8f, 8f, 8f);
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp8);
        temp6.Children.Add(temp9);
        temp6.Children.Add(temp10);
        temp6.Children.Add(temp11);
        temp7.Value = "New Tab";
        temp7.FontSize = 14f;
        temp7.TextColor = float4(0f, 0f, 0f, 0.5019608f);
        temp8.Value = "Bookmarks";
        temp8.FontSize = 14f;
        temp8.TextColor = float4(0f, 0f, 0f, 0.5019608f);
        temp9.Value = "History";
        temp9.FontSize = 14f;
        temp9.TextColor = float4(0f, 0f, 0f, 0.5019608f);
        temp10.Value = "Share";
        temp10.FontSize = 14f;
        temp10.TextColor = float4(1f, 0f, 0f, 1f);
        temp11.Value = "Print";
        temp11.FontSize = 14f;
        temp11.TextColor = float4(0f, 0f, 0f, 0.5019608f);
        temp13.CornerRadius = float4(5f, 5f, 0f, 0f);
        Fuse.Elements.Element.WidthProperty.Set(temp13, 100f, global::Fuse.Elements.SizeUnit.Percent);
        temp13.Height = 56f;
        temp13.Alignment = Fuse.Elements.Alignment.Top;
        temp13.Fill = temp27;
        temp13.Children.Add(temp14);
        temp13.Children.Add(temp19);
        temp13.Children.Add(temp24);
        temp14.CornerRadius = float4(3f, 3f, 3f, 3f);
        Fuse.Elements.Element.WidthProperty.Set(temp14, 100f, global::Fuse.Elements.SizeUnit.Percent);
        temp14.Height = 40f;
        temp14.Alignment = Fuse.Elements.Alignment.Top;
        temp14.Margin = float4(8f, 8f, 72f, 8f);
        temp14.Fill = temp18;
        temp14.Strokes.Add(temp15);
        temp14.Children.Add(temp17);
        temp15.Width = 1f;
        temp15.Brush = temp16;
        temp17.Value = "www.medium.com";
        temp17.TextColor = float4(0f, 0f, 0f, 0.5019608f);
        temp17.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp17.Margin = float4(8f, 0f, 0f, 0f);
        temp19.CornerRadius = float4(2f, 2f, 2f, 2f);
        temp19.Width = 24f;
        temp19.Height = 24f;
        temp19.Alignment = Fuse.Elements.Alignment.TopRight;
        temp19.Margin = float4(16f, 16f, 40f, 8f);
        temp19.Fill = temp23;
        temp19.Strokes.Add(temp20);
        temp19.Children.Add(temp22);
        temp20.Width = 1f;
        temp20.Brush = temp21;
        temp22.Value = "4";
        temp22.FontSize = 12f;
        temp22.TextColor = float4(0f, 0f, 0f, 1f);
        temp22.Margin = float4(8f, 6f, 8f, 6f);
        temp24.Width = 24f;
        temp24.Height = 24f;
        temp24.Alignment = Fuse.Elements.Alignment.TopRight;
        temp24.Margin = float4(16f, 16f, 16f, 16f);
        temp24.Opacity = 0.54f;
        temp24.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../../Assets/1.png"));
        temp24.Behaviors.Add(temp25);
        temp25.Animators.Add(temp26);
        temp26.Value = Fuse.Elements.Visibility.Visible;
        temp28.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp28.Margin = float4(8f, 72f, 64f, 8f);
        temp28.Children.Add(temp29);
        temp28.Children.Add(temp30);
        temp29.Value = "Technology Trends in 2015";
        temp29.TextWrapping = Fuse.Elements.TextWrapping.Wrap;
        temp29.FontSize = 21f;
        temp29.TextColor = float4(0f, 0f, 0f, 1f);
        temp30.Value = "by Mark";
        temp30.FontSize = 16f;
        temp30.TextColor = float4(1f, 0f, 0f, 1f);
        Fuse.Elements.Element.WidthProperty.Set(temp33, 100f, global::Fuse.Elements.SizeUnit.Percent);
        temp33.Height = 250f;
        global::Fuse.Controls.DockPanel.SetDock(temp33, Fuse.Layouts.Dock.Bottom);
        temp33.Fill = temp34;
        this.RootNode = temp;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
    }
}

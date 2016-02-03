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
        var temp5 = new Fuse.Triggers.WhileTrue();
        var temp6 = new Fuse.Animations.Move();
        var temp7 = new Fuse.Animations.Change<Fuse.Elements.Visibility>(Menu_Visibility_inst);
        var temp8 = new Fuse.Effects.DropShadow();
        var temp9 = new Fuse.Controls.StackPanel();
        var temp10 = new Fuse.Controls.Text();
        var temp11 = new Fuse.Controls.Text();
        var temp12 = new Fuse.Controls.Text();
        var temp13 = new Fuse.Controls.Text();
        var temp14 = new Fuse.Controls.Text();
        var temp15 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp16 = new Fuse.Controls.Rectangle();
        var temp17 = new Fuse.Controls.Rectangle();
        var temp18 = new Fuse.Drawing.Stroke();
        var temp19 = new Fuse.Drawing.StaticSolidColor(float4(0.6666667f, 0.6666667f, 0.6666667f, 1f));
        var temp20 = new Fuse.Controls.Text();
        var temp21 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp22 = new Fuse.Controls.Rectangle();
        var temp23 = new Fuse.Drawing.Stroke();
        var temp24 = new Fuse.Drawing.StaticSolidColor(float4(0.6666667f, 0.6666667f, 0.6666667f, 1f));
        var temp25 = new Fuse.Controls.Text();
        var temp26 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp27 = new Fuse.Controls.Image();
        var temp28 = new Fuse.Drawing.StaticSolidColor(float4(0.9333333f, 0.9333333f, 0.9333333f, 1f));
        var temp29 = new Fuse.Controls.StackPanel();
        var temp30 = new Fuse.Controls.Text();
        var temp31 = new Fuse.Controls.Text();
        var temp32 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp33 = new Fuse.Drawing.StaticSolidColor(float4(0.9058824f, 0.2980392f, 0.2352941f, 1f));
        var temp34 = new Fuse.Controls.Rectangle();
        var temp35 = new Fuse.Drawing.StaticSolidColor(float4(0.1843137f, 0.2039216f, 0.2313726f, 1f));
        this.Background = float4(0.4666667f, 0.4666667f, 0.4666667f, 1f);
        temp.Children.Add(temp1);
        temp.Children.Add(temp34);
        Fuse.Elements.Element.WidthProperty.Set(temp1, 100f, global::Fuse.Elements.SizeUnit.Percent);
        temp1.Height = 390f;
        global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Top);
        temp1.Fill = temp33;
        temp1.Children.Add(temp2);
        temp2.CornerRadius = float4(5f, 5f, 0f, 0f);
        Fuse.Elements.Element.WidthProperty.Set(temp2, 100f, global::Fuse.Elements.SizeUnit.Percent);
        temp2.Height = 200f;
        temp2.Alignment = Fuse.Elements.Alignment.Bottom;
        temp2.Margin = float4(32f, 32f, 32f, 0f);
        temp2.Fill = temp32;
        temp2.Children.Add(temp3);
        temp3.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp3.Children.Add(temp4);
        temp4.Children.Add(Menu);
        temp4.Children.Add(temp16);
        temp4.Children.Add(temp29);
        Menu.CornerRadius = float4(3f, 3f, 3f, 3f);
        Fuse.Elements.Element.WidthProperty.Set(Menu, 40f, global::Fuse.Elements.SizeUnit.Percent);
        Menu.Height = 140f;
        Menu.Alignment = Fuse.Elements.Alignment.TopRight;
        Menu.Margin = float4(8f, 8f, 40f, 8f);
        Menu.Name = "Menu";
        Menu.Fill = temp15;
        Menu.Children.Add(temp9);
        Menu.Effects.Add(temp8);
        Menu.Behaviors.Add(temp5);
        temp5.Animators.Add(temp6);
        temp5.Animators.Add(temp7);
        temp6.X = 10f;
        temp6.Duration = 2;
        temp7.Value = Fuse.Elements.Visibility.Visible;
        temp7.Delay = 2;
        temp8.Size = 4f;
        temp8.Angle = 90f;
        temp8.Distance = 2f;
        temp8.Spread = 0.05f;
        temp9.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp9.ItemSpacing = 8f;
        temp9.Padding = float4(8f, 8f, 8f, 8f);
        temp9.Children.Add(temp10);
        temp9.Children.Add(temp11);
        temp9.Children.Add(temp12);
        temp9.Children.Add(temp13);
        temp9.Children.Add(temp14);
        temp10.Value = "New Tab";
        temp10.FontSize = 14f;
        temp10.TextColor = float4(0f, 0f, 0f, 0.5019608f);
        temp11.Value = "Bookmarks";
        temp11.FontSize = 14f;
        temp11.TextColor = float4(0f, 0f, 0f, 0.5019608f);
        temp12.Value = "History";
        temp12.FontSize = 14f;
        temp12.TextColor = float4(0f, 0f, 0f, 0.5019608f);
        temp13.Value = "Share";
        temp13.FontSize = 14f;
        temp13.TextColor = float4(1f, 0f, 0f, 1f);
        temp14.Value = "Print";
        temp14.FontSize = 14f;
        temp14.TextColor = float4(0f, 0f, 0f, 0.5019608f);
        temp16.CornerRadius = float4(5f, 5f, 0f, 0f);
        Fuse.Elements.Element.WidthProperty.Set(temp16, 100f, global::Fuse.Elements.SizeUnit.Percent);
        temp16.Height = 56f;
        temp16.Alignment = Fuse.Elements.Alignment.Top;
        temp16.Fill = temp28;
        temp16.Children.Add(temp17);
        temp16.Children.Add(temp22);
        temp16.Children.Add(temp27);
        temp17.CornerRadius = float4(3f, 3f, 3f, 3f);
        Fuse.Elements.Element.WidthProperty.Set(temp17, 100f, global::Fuse.Elements.SizeUnit.Percent);
        temp17.Height = 40f;
        temp17.Alignment = Fuse.Elements.Alignment.Top;
        temp17.Margin = float4(8f, 8f, 72f, 8f);
        temp17.Fill = temp21;
        temp17.Strokes.Add(temp18);
        temp17.Children.Add(temp20);
        temp18.Width = 1f;
        temp18.Brush = temp19;
        temp20.Value = "www.medium.com";
        temp20.TextColor = float4(0f, 0f, 0f, 0.5019608f);
        temp20.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp20.Margin = float4(8f, 0f, 0f, 0f);
        temp22.CornerRadius = float4(2f, 2f, 2f, 2f);
        temp22.Width = 24f;
        temp22.Height = 24f;
        temp22.Alignment = Fuse.Elements.Alignment.TopRight;
        temp22.Margin = float4(16f, 16f, 40f, 8f);
        temp22.Fill = temp26;
        temp22.Strokes.Add(temp23);
        temp22.Children.Add(temp25);
        temp23.Width = 1f;
        temp23.Brush = temp24;
        temp25.Value = "4";
        temp25.FontSize = 12f;
        temp25.TextColor = float4(0f, 0f, 0f, 1f);
        temp25.Margin = float4(8f, 6f, 8f, 6f);
        temp27.Width = 40f;
        Fuse.Elements.Element.HeightProperty.Set(temp27, 100f, global::Fuse.Elements.SizeUnit.Percent);
        temp27.Alignment = Fuse.Elements.Alignment.TopRight;
        temp27.Padding = float4(8f, 16f, 8f, 16f);
        temp27.Opacity = 0.54f;
        temp27.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../../Assets/1.png"));
        temp29.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp29.Margin = float4(8f, 72f, 64f, 8f);
        temp29.Children.Add(temp30);
        temp29.Children.Add(temp31);
        temp30.Value = "Technology Trends in 2015";
        temp30.TextWrapping = Fuse.Elements.TextWrapping.Wrap;
        temp30.FontSize = 21f;
        temp30.TextColor = float4(0f, 0f, 0f, 1f);
        temp31.Value = "by Mark";
        temp31.FontSize = 16f;
        temp31.TextColor = float4(1f, 0f, 0f, 1f);
        Fuse.Elements.Element.WidthProperty.Set(temp34, 100f, global::Fuse.Elements.SizeUnit.Percent);
        temp34.Height = 250f;
        global::Fuse.Controls.DockPanel.SetDock(temp34, Fuse.Layouts.Dock.Bottom);
        temp34.Fill = temp35;
        this.RootNode = temp;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
    }
}

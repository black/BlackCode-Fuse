public partial class MainView: Fuse.App
{
    public sealed class Fuse_Drawing_SolidColor_float4_Color_Property: Uno.UX.Property<float4>
    {
        Fuse.Drawing.SolidColor _obj;
        public Fuse_Drawing_SolidColor_float4_Color_Property(Fuse.Drawing.SolidColor obj) { _obj = obj; }
        protected override float4 OnGet() { return _obj.Color; }
        protected override void OnSet(float4 v, object origin) { _obj.Color = v; }
    }
    public sealed class Fuse_Triggers_WhileBool_bool_Value_Property: Uno.UX.Property<bool>
    {
        Fuse.Triggers.WhileBool _obj;
        public Fuse_Triggers_WhileBool_bool_Value_Property(Fuse.Triggers.WhileBool obj) { _obj = obj; }
        protected override bool OnGet() { return _obj.Value; }
        protected override void OnSet(bool v, object origin) { _obj.Value = v; }
    }
    public sealed class Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property: Uno.UX.Property<Uno.Platform.iOS.StatusBarStyle>
    {
        Fuse.iOS.StatusBarConfig _obj;
        public Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property(Fuse.iOS.StatusBarConfig obj) { _obj = obj; }
        protected override Uno.Platform.iOS.StatusBarStyle OnGet() { return _obj.Style; }
        protected override void OnSet(Uno.Platform.iOS.StatusBarStyle v, object origin) { _obj.Style = v; }
    }
    public sealed class Fuse_Effects_Blur_float_Radius_Property: Uno.UX.Property<float>
    {
        Fuse.Effects.Blur _obj;
        public Fuse_Effects_Blur_float_Radius_Property(Fuse.Effects.Blur obj) { _obj = obj; }
        protected override float OnGet() { return _obj.Radius; }
        protected override void OnSet(float v, object origin) { _obj.Radius = v; }
    }
    public partial class Template: Uno.UX.Template<Fuse.Controls.Text>
    {
        internal readonly MainView __parent;
        public Template(MainView parent)
        {
            __parent = parent;
        }
        static Template()
        {
        }
        protected override void OnApply(Fuse.Controls.Text self)
        {
            Fuse.Controls.TextControl.TextWrappingProperty.SetStyle(self, Fuse.Elements.TextWrapping.Wrap);
            Fuse.Controls.TextControl.FontSizeProperty.SetStyle(self, 16f);
            Fuse.Controls.TextControl.TextAlignmentProperty.SetStyle(self, Fuse.Elements.TextAlignment.Center);
            Fuse.Controls.TextControl.TextColorProperty.SetStyle(self, float4(1f, 1f, 1f, 1f));
            Fuse.Elements.Element.YProperty.SetStyle(self, 100f);
        }
    }
    public partial class Template1: Uno.UX.Template<Fuse.Controls.Image>
    {
        internal readonly MainView __parent;
        public Template1(MainView parent)
        {
            __parent = parent;
        }
        static Template1()
        {
        }
        protected override void OnApply(Fuse.Controls.Image self)
        {
            Fuse.Controls.Image.StretchModeProperty.SetStyle(self, Fuse.Elements.StretchMode.UniformToFill);
        }
    }
    public partial class Template2: Uno.UX.Template<Fuse.Controls.Page>
    {
        internal readonly MainView __parent;
        public Template2(MainView parent)
        {
            __parent = parent;
        }
        static Template2()
        {
        }
        protected override void OnApply(Fuse.Controls.Page self)
        {
            var temp = new Fuse.Navigation.EnteringAnimation();
            var temp1 = new Fuse.Animations.Move();
            var temp2 = new Fuse.Navigation.ExitingAnimation();
            var temp3 = new Fuse.Animations.Move();
            temp.Animators.Add(temp1);
            temp1.X = -1f;
            temp1.RelativeTo = Fuse.TranslationModes.ParentSize;
            temp2.Animators.Add(temp3);
            temp3.X = 1f;
            temp3.RelativeTo = Fuse.TranslationModes.ParentSize;
            self.AddStyleBehavior(temp);
            self.AddStyleBehavior(temp2);
        }
    }
    public partial class Factory: Uno.UX.IFactory
    {
        internal readonly MainView __parent;
        public Factory(MainView parent)
        {
            __parent = parent;
        }
        MainView.Fuse_Drawing_SolidColor_float4_Color_Property color_Color_inst;
        internal Fuse.Drawing.SolidColor color;
        static Factory()
        {
        }
        public object New()
        {
            var self = new Fuse.Controls.Circle();
            var color = new Fuse.Drawing.SolidColor();
            color_Color_inst = new MainView.Fuse_Drawing_SolidColor_float4_Color_Property(color);
            var temp = new Fuse.Navigation.ActivatingAnimation();
            var temp1 = new Fuse.Animations.Change<float4>(color_Color_inst);
            self.Width = 10f;
            self.Height = 10f;
            self.Margin = float4(6f, 6f, 6f, 6f);
            color.Color = float4(0.6f, 0.6f, 0.6f, 1f);
            temp.Animators.Add(temp1);
            temp1.Value = float4(1f, 1f, 1f, 1f);
            self.Fills.Add(color);
            self.Behaviors.Add(temp);
            return self;
        }
    }
    MainView.Fuse_Triggers_WhileBool_bool_Value_Property canSwipe_Value_inst;
    MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property statusBarConfig_Style_inst;
    MainView.Fuse_Effects_Blur_float_Radius_Property blur_Radius_inst;
    internal Fuse.iOS.StatusBarConfig statusBarConfig;
    internal Fuse.Navigation.LinearNavigation navigation;
    internal Fuse.Triggers.WhileTrue canSwipe;
    internal Fuse.Navigation.SwipeNavigate swipeNavigate;
    internal Fuse.Controls.Page page2;
    internal Fuse.Controls.Page page3;
    internal Fuse.Effects.Blur blur;
    static MainView()
    {
    }
    public MainView()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        navigation = new Fuse.Navigation.LinearNavigation();
        canSwipe = new Fuse.Triggers.WhileTrue();
        canSwipe_Value_inst = new MainView.Fuse_Triggers_WhileBool_bool_Value_Property(canSwipe);
        statusBarConfig = new Fuse.iOS.StatusBarConfig();
        statusBarConfig_Style_inst = new MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property(statusBarConfig);
        blur = new Fuse.Effects.Blur();
        blur_Radius_inst = new MainView.Fuse_Effects_Blur_float_Radius_Property(blur);
        var temp = new Fuse.Controls.DockPanel();
        var temp1 = new Fuse.Controls.Panel();
        var temp2 = new Fuse.Style();
        var temp3 = new Template(this) { Cascade = true, AffectSubtypes = true };
        var temp4 = new Template1(this) { Cascade = true, AffectSubtypes = true };
        var temp5 = new Template2(this) { Cascade = true, AffectSubtypes = true };
        var temp6 = new Fuse.Controls.PageIndicator(navigation);
        var temp7 = new Factory(this);
        var temp8 = new Fuse.Controls.Panel();
        swipeNavigate = new Fuse.Navigation.SwipeNavigate();
        var temp9 = new Fuse.Controls.Page();
        var temp10 = new Fuse.Controls.Text();
        var temp11 = new Fuse.Controls.Button();
        var temp12 = new Fuse.Gestures.Clicked();
        var temp13 = new Fuse.Vibration.Vibrate();
        var temp14 = new Fuse.Controls.Image();
        page2 = new Fuse.Controls.Page();
        var temp15 = new Fuse.Controls.Text();
        var temp16 = new Fuse.Controls.Switch();
        var temp17 = new Fuse.Triggers.WhileTrue();
        var temp18 = new Fuse.Animations.Change<bool>(canSwipe_Value_inst);
        var temp19 = new Fuse.Controls.Image();
        var temp20 = new Fuse.Navigation.WhileActive();
        var temp21 = new Fuse.Animations.Change<Uno.Platform.iOS.StatusBarStyle>(statusBarConfig_Style_inst);
        page3 = new Fuse.Controls.Page();
        var temp22 = new Fuse.Controls.Text();
        var temp23 = new Fuse.Controls.Slider();
        var temp24 = new Fuse.Triggers.ProgressAnimation();
        var temp25 = new Fuse.Animations.Change<float>(blur_Radius_inst);
        var temp26 = new Fuse.Controls.GraphicsView();
        var temp27 = new Fuse.Controls.Image();
        var temp28 = new Fuse.Controls.BottomBarBackground();
        this.Background = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp.Children.Add(temp1);
        temp.Children.Add(temp28);
        temp.Behaviors.Add(statusBarConfig);
        statusBarConfig.IsVisible = true;
        statusBarConfig.Style = Uno.Platform.iOS.StatusBarStyle.Light;
        temp1.Children.Add(temp6);
        temp1.Children.Add(temp8);
        temp1.Styles.Add(temp2);
        temp2.Templates.Add(temp3);
        temp2.Templates.Add(temp4);
        temp2.Templates.Add(temp5);
        temp6.Alignment = Fuse.Elements.Alignment.BottomCenter;
        temp6.Margin = float4(30f, 30f, 30f, 30f);
        temp6.DotFactory = temp7;
        temp8.Children.Add(temp9);
        temp8.Children.Add(page2);
        temp8.Children.Add(page3);
        temp8.Behaviors.Add(navigation);
        temp8.Behaviors.Add(canSwipe);
        navigation.Easing = Fuse.Animations.Easing.CircularOut;
        canSwipe.Value = true;
        canSwipe.Behaviors.Add(swipeNavigate);
        swipeNavigate.SwipeEnds = Fuse.Navigation.SwipeEnds.Closed;
        swipeNavigate.SwipeDirection = Fuse.Navigation.SwipeDirection.Left;
        temp9.Children.Add(temp10);
        temp9.Children.Add(temp11);
        temp9.Children.Add(temp14);
        temp10.Value = "This button triggers the phone's vibrate function";
        Fuse.Elements.Element.WidthProperty.Set(temp10, 60f, global::Fuse.Elements.SizeUnit.Percent);
        temp11.Text = "Vibrate";
        temp11.Height = 45f;
        temp11.Alignment = Fuse.Elements.Alignment.Bottom;
        temp11.Margin = float4(20f, 80f, 20f, 80f);
        temp11.Behaviors.Add(temp12);
        temp12.Actions.Add(temp13);
        temp13.Duration = 0.2;
        temp14.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../../Assets/background1.png"));
        page2.Name = "page2";
        page2.Children.Add(temp15);
        page2.Children.Add(temp16);
        page2.Children.Add(temp19);
        page2.Behaviors.Add(temp20);
        temp15.Value = "This toggle switch disables your ability to swipe between pages";
        Fuse.Elements.Element.WidthProperty.Set(temp15, 70f, global::Fuse.Elements.SizeUnit.Percent);
        temp16.Alignment = Fuse.Elements.Alignment.BottomCenter;
        temp16.Margin = float4(0f, 80f, 0f, 80f);
        temp16.Behaviors.Add(temp17);
        temp17.Animators.Add(temp18);
        temp18.Value = false;
        temp19.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../../Assets/background2.png"));
        temp20.Threshold = 0.5f;
        temp20.Animators.Add(temp21);
        temp21.Value = Uno.Platform.iOS.StatusBarStyle.Dark;
        page3.Name = "page3";
        page3.Children.Add(temp22);
        page3.Children.Add(temp23);
        page3.Children.Add(temp26);
        temp22.Value = "This slider blurs the background image";
        Fuse.Elements.Element.WidthProperty.Set(temp22, 70f, global::Fuse.Elements.SizeUnit.Percent);
        Fuse.Elements.Element.WidthProperty.Set(temp23, 50f, global::Fuse.Elements.SizeUnit.Percent);
        temp23.Alignment = Fuse.Elements.Alignment.Bottom;
        temp23.Margin = float4(0f, 80f, 0f, 80f);
        temp23.Behaviors.Add(temp24);
        temp24.Animators.Add(temp25);
        temp25.Value = 5f;
        temp26.Content = temp27;
        temp27.Margin = float4(-10f, -10f, -10f, -10f);
        temp27.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../../Assets/background3.png"));
        temp27.Effects.Add(blur);
        blur.Radius = 0f;
        global::Fuse.Controls.DockPanel.SetDock(temp28, Fuse.Layouts.Dock.Bottom);
        this.RootNode = temp;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
    }
}

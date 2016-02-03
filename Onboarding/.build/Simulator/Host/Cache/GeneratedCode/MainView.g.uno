public partial class MainView: Fuse.App
{
    public sealed class Fuse_Triggers_Timeline_double_TargetProgress_Property: Uno.UX.Property<double>
    {
        Fuse.Triggers.Timeline _obj;
        public Fuse_Triggers_Timeline_double_TargetProgress_Property(Fuse.Triggers.Timeline obj) { _obj = obj; }
        protected override double OnGet() { return _obj.TargetProgress; }
        protected override void OnSet(double v, object origin) { _obj.TargetProgress = v; }
    }
    public sealed class Fuse_Elements_Element_float_Opacity_Property: Uno.UX.Property<float>
    {
        Fuse.Elements.Element _obj;
        public Fuse_Elements_Element_float_Opacity_Property(Fuse.Elements.Element obj) { _obj = obj; }
        protected override float OnGet() { return _obj.Opacity; }
        protected override void OnSet(float v, object origin) { _obj.Opacity = v; }
    }
    MainView.Fuse_Triggers_Timeline_double_TargetProgress_Property timeline_TargetProgress_inst;
    MainView.Fuse_Elements_Element_float_Opacity_Property logo_Opacity_inst;
    internal Fuse.Controls.Image logo;
    internal Fuse.Triggers.Timeline timeline;
    static MainView()
    {
    }
    public MainView()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        timeline = new Fuse.Triggers.Timeline();
        timeline_TargetProgress_inst = new MainView.Fuse_Triggers_Timeline_double_TargetProgress_Property(timeline);
        logo = new Fuse.Controls.Image();
        logo_Opacity_inst = new MainView.Fuse_Elements_Element_float_Opacity_Property(logo);
        var temp = new Fuse.Controls.PageControl();
        var temp1 = new Fuse.Controls.Page();
        var temp2 = new Fuse.Controls.Text();
        var temp3 = new Fuse.Drawing.StaticSolidColor(float4(0.9254902f, 0.2862745f, 0.7294118f, 1f));
        var temp4 = new Fuse.Controls.Page();
        var temp5 = new Fuse.Navigation.WhileActive();
        var temp6 = new Fuse.Animations.Change<double>(timeline_TargetProgress_inst);
        var temp7 = new Fuse.Animations.Change<float>(logo_Opacity_inst);
        var temp8 = new Fuse.Animations.Move();
        var temp9 = new Fuse.Drawing.StaticSolidColor(float4(0.5137255f, 0.5137255f, 0.5137255f, 1f));
        this.Background = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp.Children.Add(temp1);
        temp.Children.Add(temp4);
        temp1.Background = temp3;
        temp1.Children.Add(temp2);
        temp2.Value = "SWIPE LEFT";
        temp2.FontSize = 24f;
        temp2.TextColor = float4(1f, 1f, 1f, 1f);
        temp2.Alignment = Fuse.Elements.Alignment.Center;
        temp4.Background = temp9;
        temp4.Children.Add(logo);
        temp4.Behaviors.Add(temp5);
        temp4.Behaviors.Add(timeline);
        logo.Width = 100f;
        logo.Height = 100f;
        logo.Name = "logo";
        logo.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../../image/logo.png"));
        temp5.Animators.Add(temp6);
        temp6.Value = 1;
        timeline.Animators.Add(temp7);
        timeline.Animators.Add(temp8);
        temp7.Value = 0.5f;
        temp7.Easing = Fuse.Animations.Easing.BackIn;
        temp7.Duration = 1;
        temp8.Y = -1f;
        temp8.Easing = Fuse.Animations.Easing.BackOut;
        temp8.Duration = 1;
        temp8.Delay = 1;
        temp8.RelativeTo = Fuse.TranslationModes.Size;
        temp8.Target = logo;
        this.RootNode = temp;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
    }
}

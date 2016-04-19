public partial class MainView: Fuse.App
{
    Onboarding_FuseTriggersTimeline_double_TargetProgress_Property timeline_TargetProgress_inst;
    Onboarding_FuseElementsElement_float_Opacity_Property logo_Opacity_inst;
    internal Fuse.Controls.Page Slide;
    internal Fuse.Controls.Image logo;
    internal Fuse.Triggers.Timeline timeline;
    static MainView()
    {
    }
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        timeline = new Fuse.Triggers.Timeline();
        timeline_TargetProgress_inst = new Onboarding_FuseTriggersTimeline_double_TargetProgress_Property(timeline);
        logo = new Fuse.Controls.Image();
        logo_Opacity_inst = new Onboarding_FuseElementsElement_float_Opacity_Property(logo);
        var temp = new Fuse.Controls.PageControl();
        var temp1 = new Fuse.Controls.Page();
        var temp2 = new Fuse.Controls.DockPanel();
        var temp3 = new Fuse.Controls.StackPanel();
        var temp4 = new Fuse.Controls.Image();
        var temp5 = new Fuse.Controls.Text();
        var temp6 = new Fuse.Controls.Text();
        var temp7 = new Fuse.Controls.Rectangle();
        var temp8 = new Fuse.Controls.Text();
        var temp9 = new Fuse.Gestures.WhilePressed();
        var temp10 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp11 = new Fuse.Drawing.StaticSolidColor(float4(0.9058824f, 0.2980392f, 0.2352941f, 1f));
        Slide = new Fuse.Controls.Page();
        var temp12 = new Fuse.Navigation.WhileActive();
        var temp13 = new Fuse.Animations.Change<double>(timeline_TargetProgress_inst);
        var temp14 = new Fuse.Animations.Change<float>(logo_Opacity_inst);
        var temp15 = new Fuse.Animations.Move();
        var temp16 = new Fuse.Drawing.StaticSolidColor(float4(0.5137255f, 0.5137255f, 0.5137255f, 1f));
        this.Background = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp.Children.Add(temp1);
        temp.Children.Add(Slide);
        temp1.Background = temp11;
        temp1.Children.Add(temp2);
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp7);
        temp3.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp3.Padding = float4(0f, 150f, 0f, 0f);
        global::Fuse.Controls.DockPanel.SetDock(temp3, Fuse.Layouts.Dock.Top);
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp5);
        temp3.Children.Add(temp6);
        temp4.Width = 100f;
        temp4.Height = 100f;
        temp4.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../image/logo.png"));
        temp5.Value = "Cubeit";
        temp5.FontSize = 32f;
        temp5.TextColor = float4(1f, 1f, 1f, 1f);
        temp5.Alignment = Fuse.Elements.Alignment.Center;
        temp5.Margin = float4(0f, 20f, 0f, 0f);
        temp6.Value = "Collect and Share";
        temp6.FontSize = 20f;
        temp6.TextColor = float4(1f, 1f, 1f, 1f);
        temp6.Alignment = Fuse.Elements.Alignment.Center;
        temp6.Margin = float4(0f, 8f, 0f, 0f);
        temp7.CornerRadius = float4(5f, 5f, 5f, 5f);
        temp7.Width = 200f;
        temp7.Height = 48f;
        temp7.Margin = float4(0f, 40f, 0f, 150f);
        global::Fuse.Controls.DockPanel.SetDock(temp7, Fuse.Layouts.Dock.Bottom);
        temp7.Fill = temp10;
        temp7.Children.Add(temp8);
        temp7.Behaviors.Add(temp9);
        temp8.Value = "LOGIN";
        temp8.FontSize = 16f;
        temp8.TextColor = float4(0.9058824f, 0.2980392f, 0.2352941f, 1f);
        temp8.Alignment = Fuse.Elements.Alignment.Center;
        Slide.Name = "Slide";
        Slide.Background = temp16;
        Slide.Children.Add(logo);
        Slide.Behaviors.Add(temp12);
        Slide.Behaviors.Add(timeline);
        logo.Width = 100f;
        logo.Height = 100f;
        logo.Name = "logo";
        logo.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../image/logo.png"));
        temp12.Animators.Add(temp13);
        temp13.Value = 1;
        timeline.Animators.Add(temp14);
        timeline.Animators.Add(temp15);
        temp14.Value = 0.5f;
        temp14.Easing = Fuse.Animations.Easing.BackIn;
        temp14.Duration = 1;
        temp15.Y = -1f;
        temp15.Easing = Fuse.Animations.Easing.BackOut;
        temp15.Duration = 1;
        temp15.Delay = 1;
        temp15.RelativeTo = Fuse.TranslationModes.Size;
        temp15.Target = logo;
        this.RootNode = temp;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
    }
}

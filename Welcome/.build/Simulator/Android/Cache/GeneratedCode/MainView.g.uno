public partial class Icon: Fuse.Controls.Panel
{
    MainView.Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property temp_Source_inst;
    static Icon()
    {
    }
    public Icon()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        var temp = new Fuse.Controls.Image();
        temp_Source_inst = new MainView.Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property(temp);
        var temp1 = new Fuse.Resources.ResourceBinding<Fuse.Resources.ImageSource>(temp_Source_inst, "iconFile");
        var temp2 = new Fuse.Controls.Circle();
        var temp3 = new Fuse.Drawing.Stroke();
        var temp4 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp5 = new Fuse.Drawing.StaticSolidColor(float4(0.3882353f, 0.2039216f, 0.6431373f, 1f));
        this.Width = 80f;
        this.Height = 80f;
        Fuse.Elements.Element.WidthProperty.Set(temp, 60f, global::Fuse.Elements.SizeUnit.Percent);
        Fuse.Elements.Element.HeightProperty.Set(temp, 60f, global::Fuse.Elements.SizeUnit.Percent);
        temp.Behaviors.Add(temp1);
        temp2.Fill = temp5;
        temp2.Strokes.Add(temp3);
        temp3.Width = 3f;
        temp3.Brush = temp4;
        this.Children.Add(temp);
        this.Children.Add(temp2);
    }
}
public partial class Payment: Icon
{
    static Payment()
    {
    }
    public Payment()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        var temp = new Fuse.Resources.FileImageSource();
        var temp1 = new Uno.UX.Resource("iconFile", temp);
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../../Icons/payment.png"));
        this.Resources.Add(temp1);
    }
}
public partial class Notes: Icon
{
    static Notes()
    {
    }
    public Notes()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        var temp = new Fuse.Resources.FileImageSource();
        var temp1 = new Uno.UX.Resource("iconFile", temp);
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../../Icons/notes.png"));
        this.Resources.Add(temp1);
    }
}
public partial class Camera: Icon
{
    static Camera()
    {
    }
    public Camera()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        var temp = new Fuse.Resources.FileImageSource();
        var temp1 = new Uno.UX.Resource("iconFile", temp);
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../../Icons/camera.png"));
        this.Resources.Add(temp1);
    }
}
public partial class T: Fuse.Controls.Text
{
    static T()
    {
    }
    public T()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        this.FontSize = 18f;
        this.TextColor = float4(1f, 1f, 1f, 0.5333334f);
        this.Alignment = Fuse.Elements.Alignment.Center;
        this.Margin = float4(0f, 5f, 0f, 5f);
        this.Opacity = 0f;
    }
}
public partial class MainView: Fuse.App
{
    public sealed class Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property: Uno.UX.Property<Fuse.Resources.ImageSource>
    {
        Fuse.Controls.Image _obj;
        public Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property(Fuse.Controls.Image obj) { _obj = obj; }
        protected override Fuse.Resources.ImageSource OnGet() { return _obj.Source; }
        protected override void OnSet(Fuse.Resources.ImageSource v, object origin) { _obj.Source = v; }
    }
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
    public sealed class Fuse_Translation_float_X_Property: Uno.UX.Property<float>
    {
        Fuse.Translation _obj;
        public Fuse_Translation_float_X_Property(Fuse.Translation obj) { _obj = obj; }
        protected override float OnGet() { return _obj.X; }
        protected override void OnSet(float v, object origin) { _obj.X = v; }
    }
    public sealed class Fuse_Rotation_float_Degrees_Property: Uno.UX.Property<float>
    {
        Fuse.Rotation _obj;
        public Fuse_Rotation_float_Degrees_Property(Fuse.Rotation obj) { _obj = obj; }
        protected override float OnGet() { return _obj.Degrees; }
        protected override void OnSet(float v, object origin) { _obj.Degrees = v; }
    }
    public sealed class Fuse_Scaling_float_Factor_Property: Uno.UX.Property<float>
    {
        Fuse.Scaling _obj;
        public Fuse_Scaling_float_Factor_Property(Fuse.Scaling obj) { _obj = obj; }
        protected override float OnGet() { return _obj.Factor; }
        protected override void OnSet(float v, object origin) { _obj.Factor = v; }
    }
    MainView.Fuse_Triggers_Timeline_double_TargetProgress_Property timeline_TargetProgress_inst;
    MainView.Fuse_Elements_Element_float_Opacity_Property camera_Opacity_inst;
    MainView.Fuse_Elements_Element_float_Opacity_Property text1_Opacity_inst;
    MainView.Fuse_Translation_float_X_Property paymentTrans_X_inst;
    MainView.Fuse_Translation_float_X_Property notesTrans_X_inst;
    MainView.Fuse_Elements_Element_float_Opacity_Property payment_Opacity_inst;
    MainView.Fuse_Elements_Element_float_Opacity_Property notes_Opacity_inst;
    MainView.Fuse_Rotation_float_Degrees_Property paymentRot_Degrees_inst;
    MainView.Fuse_Rotation_float_Degrees_Property notesRot_Degrees_inst;
    MainView.Fuse_Elements_Element_float_Opacity_Property text2_Opacity_inst;
    MainView.Fuse_Elements_Element_float_Opacity_Property arrow1_Opacity_inst;
    MainView.Fuse_Elements_Element_float_Opacity_Property text3_Opacity_inst;
    MainView.Fuse_Elements_Element_float_Opacity_Property Send_Opacity_inst;
    MainView.Fuse_Elements_Element_float_Opacity_Property arrow2_Opacity_inst;
    MainView.Fuse_Scaling_float_Factor_Property sendScaling_Factor_inst;
    MainView.Fuse_Elements_Element_float_Opacity_Property text4_Opacity_inst;
    internal Fuse.Controls.Panel panel2;
    internal Camera camera;
    internal Fuse.Controls.Image arrow1;
    internal Payment payment;
    internal Fuse.Translation paymentTrans;
    internal Fuse.Rotation paymentRot;
    internal Notes notes;
    internal Fuse.Translation notesTrans;
    internal Fuse.Rotation notesRot;
    internal Fuse.Controls.Image arrow2;
    internal Fuse.Controls.Panel Send;
    internal Fuse.Controls.Panel sendImage;
    internal Fuse.Scaling sendScaling;
    internal T text1;
    internal T text2;
    internal T text3;
    internal T text4;
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
        camera = new Camera();
        camera_Opacity_inst = new MainView.Fuse_Elements_Element_float_Opacity_Property(camera);
        text1 = new T();
        text1_Opacity_inst = new MainView.Fuse_Elements_Element_float_Opacity_Property(text1);
        paymentTrans = new Fuse.Translation();
        paymentTrans_X_inst = new MainView.Fuse_Translation_float_X_Property(paymentTrans);
        notesTrans = new Fuse.Translation();
        notesTrans_X_inst = new MainView.Fuse_Translation_float_X_Property(notesTrans);
        payment = new Payment();
        payment_Opacity_inst = new MainView.Fuse_Elements_Element_float_Opacity_Property(payment);
        notes = new Notes();
        notes_Opacity_inst = new MainView.Fuse_Elements_Element_float_Opacity_Property(notes);
        paymentRot = new Fuse.Rotation();
        paymentRot_Degrees_inst = new MainView.Fuse_Rotation_float_Degrees_Property(paymentRot);
        notesRot = new Fuse.Rotation();
        notesRot_Degrees_inst = new MainView.Fuse_Rotation_float_Degrees_Property(notesRot);
        text2 = new T();
        text2_Opacity_inst = new MainView.Fuse_Elements_Element_float_Opacity_Property(text2);
        arrow1 = new Fuse.Controls.Image();
        arrow1_Opacity_inst = new MainView.Fuse_Elements_Element_float_Opacity_Property(arrow1);
        text3 = new T();
        text3_Opacity_inst = new MainView.Fuse_Elements_Element_float_Opacity_Property(text3);
        Send = new Fuse.Controls.Panel();
        Send_Opacity_inst = new MainView.Fuse_Elements_Element_float_Opacity_Property(Send);
        arrow2 = new Fuse.Controls.Image();
        arrow2_Opacity_inst = new MainView.Fuse_Elements_Element_float_Opacity_Property(arrow2);
        sendScaling = new Fuse.Scaling();
        sendScaling_Factor_inst = new MainView.Fuse_Scaling_float_Factor_Property(sendScaling);
        text4 = new T();
        text4_Opacity_inst = new MainView.Fuse_Elements_Element_float_Opacity_Property(text4);
        var temp = new Fuse.Controls.PageControl();
        var temp1 = new Fuse.iOS.StatusBarConfig();
        var temp2 = new Fuse.Controls.Page();
        var temp3 = new Fuse.Controls.Text();
        var temp4 = new Fuse.Drawing.StaticSolidColor(float4(0.9254902f, 0.2862745f, 0.5411765f, 1f));
        var temp5 = new Fuse.Controls.Page();
        var temp6 = new Fuse.Controls.Panel();
        var temp7 = new Fuse.Controls.Viewbox();
        var temp8 = new Fuse.Controls.Panel();
        var temp9 = new Fuse.Controls.Panel();
        panel2 = new Fuse.Controls.Panel();
        sendImage = new Fuse.Controls.Panel();
        var temp10 = new Fuse.Controls.Image();
        var temp11 = new Fuse.Controls.Image();
        var temp12 = new Fuse.Translation();
        var temp13 = new Fuse.Rotation();
        var temp14 = new Fuse.Controls.Circle();
        var temp15 = new Fuse.Drawing.Stroke();
        var temp16 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp17 = new Fuse.Drawing.StaticSolidColor(float4(0.3882353f, 0.2039216f, 0.6431373f, 1f));
        var temp18 = new Fuse.Controls.Panel();
        var temp19 = new Fuse.Controls.StackPanel();
        var temp20 = new Fuse.Navigation.WhileActive();
        var temp21 = new Fuse.Animations.Change<double>(timeline_TargetProgress_inst);
        var temp22 = new Fuse.Animations.Change<float>(camera_Opacity_inst);
        var temp23 = new Fuse.Animations.Change<float>(text1_Opacity_inst);
        var temp24 = new Fuse.Animations.Move();
        var temp25 = new Fuse.Animations.Change<float>(paymentTrans_X_inst);
        var temp26 = new Fuse.Animations.Change<float>(notesTrans_X_inst);
        var temp27 = new Fuse.Animations.Change<float>(payment_Opacity_inst);
        var temp28 = new Fuse.Animations.Change<float>(notes_Opacity_inst);
        var temp29 = new Fuse.Animations.Change<float>(paymentRot_Degrees_inst);
        var temp30 = new Fuse.Animations.Change<float>(notesRot_Degrees_inst);
        var temp31 = new Fuse.Animations.Change<float>(text2_Opacity_inst);
        var temp32 = new Fuse.Animations.Change<float>(arrow1_Opacity_inst);
        var temp33 = new Fuse.Animations.Change<float>(text3_Opacity_inst);
        var temp34 = new Fuse.Animations.Move();
        var temp35 = new Fuse.Animations.Change<float>(Send_Opacity_inst);
        var temp36 = new Fuse.Animations.Change<float>(text3_Opacity_inst);
        var temp37 = new Fuse.Animations.Change<float>(arrow2_Opacity_inst);
        var temp38 = new Fuse.Animations.Move();
        var temp39 = new Fuse.Animations.Change<float>(sendScaling_Factor_inst);
        var temp40 = new Fuse.Animations.Change<float>(text4_Opacity_inst);
        var temp41 = new Fuse.Drawing.StaticSolidColor(float4(0.3882353f, 0.2039216f, 0.6431373f, 1f));
        temp.Children.Add(temp2);
        temp.Children.Add(temp5);
        temp.Behaviors.Add(temp1);
        temp1.Style = Uno.Platform.iOS.StatusBarStyle.Light;
        temp2.Background = temp4;
        temp2.Children.Add(temp3);
        temp3.Value = "Swipe left";
        temp3.FontSize = 20f;
        temp3.TextColor = float4(1f, 1f, 1f, 1f);
        temp3.Alignment = Fuse.Elements.Alignment.Center;
        temp5.Children.Add(temp6);
        temp6.Background = temp41;
        temp6.Children.Add(temp7);
        temp7.Alignment = Fuse.Elements.Alignment.Center;
        temp7.Content = temp8;
        temp8.Width = 500f;
        temp8.Height = 800f;
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp18);
        temp8.Behaviors.Add(temp20);
        temp8.Behaviors.Add(timeline);
        Fuse.Elements.Element.HeightProperty.Set(temp9, 80f, global::Fuse.Elements.SizeUnit.Percent);
        temp9.Alignment = Fuse.Elements.Alignment.Bottom;
        temp9.Children.Add(panel2);
        temp9.Children.Add(Send);
        panel2.Name = "panel2";
        panel2.Children.Add(camera);
        panel2.Children.Add(payment);
        panel2.Children.Add(notes);
        panel2.Children.Add(arrow2);
        camera.Opacity = 0f;
        camera.Name = "camera";
        camera.Children.Add(arrow1);
        arrow1.Width = 50f;
        arrow1.Height = 50f;
        arrow1.Offset = float2(0f, 80f);
        arrow1.Opacity = 0f;
        arrow1.Name = "arrow1";
        arrow1.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../../Icons/Arrow.png"));
        payment.Opacity = 0f;
        payment.Name = "payment";
        payment.Transforms.Add(paymentTrans);
        payment.Transforms.Add(paymentRot);
        paymentRot.Degrees = 45f;
        notes.Opacity = 0f;
        notes.Name = "notes";
        notes.Transforms.Add(notesTrans);
        notes.Transforms.Add(notesRot);
        notesRot.Degrees = -45f;
        arrow2.Width = 50f;
        arrow2.Height = 50f;
        arrow2.Offset = float2(0f, 80f);
        arrow2.Opacity = 0f;
        arrow2.Name = "arrow2";
        arrow2.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../../Icons/Arrow.png"));
        Send.Width = 80f;
        Send.Height = 80f;
        Send.Opacity = 0f;
        Send.Name = "Send";
        Send.Children.Add(sendImage);
        Send.Children.Add(temp14);
        sendImage.Name = "sendImage";
        sendImage.Children.Add(temp10);
        sendImage.Children.Add(temp11);
        sendImage.Transforms.Add(sendScaling);
        sendImage.Transforms.Add(temp12);
        sendImage.Transforms.Add(temp13);
        Fuse.Elements.Element.WidthProperty.Set(temp10, 60f, global::Fuse.Elements.SizeUnit.Percent);
        Fuse.Elements.Element.HeightProperty.Set(temp10, 60f, global::Fuse.Elements.SizeUnit.Percent);
        temp10.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../../Icons/send.png"));
        temp11.Color = float4(0.3882353f, 0.2039216f, 0.6431373f, 1f);
        Fuse.Elements.Element.WidthProperty.Set(temp11, 90f, global::Fuse.Elements.SizeUnit.Percent);
        Fuse.Elements.Element.HeightProperty.Set(temp11, 90f, global::Fuse.Elements.SizeUnit.Percent);
        temp11.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../../Icons/send.png"));
        sendScaling.Factor = 0.7f;
        temp12.X = 5f;
        temp13.Degrees = -45f;
        temp14.Fill = temp17;
        temp14.Strokes.Add(temp15);
        temp15.Width = 3f;
        temp15.Brush = temp16;
        Fuse.Elements.Element.HeightProperty.Set(temp18, 90f, global::Fuse.Elements.SizeUnit.Percent);
        temp18.Alignment = Fuse.Elements.Alignment.Top;
        temp18.Children.Add(temp19);
        temp19.Alignment = Fuse.Elements.Alignment.BottomCenter;
        temp19.Children.Add(text1);
        temp19.Children.Add(text2);
        temp19.Children.Add(text3);
        temp19.Children.Add(text4);
        text1.Value = "Take a photo.";
        text1.Name = "text1";
        text2.Value = "Add price and a license.";
        text2.Name = "text2";
        text3.Value = "Share.";
        text3.Name = "text3";
        text4.Value = "Done!";
        text4.TextColor = float4(1f, 1f, 1f, 1f);
        text4.Margin = float4(0f, 15f, 0f, 15f);
        text4.Name = "text4";
        temp20.Animators.Add(temp21);
        temp21.Value = 1;
        timeline.Animators.Add(temp22);
        timeline.Animators.Add(temp23);
        timeline.Animators.Add(temp24);
        timeline.Animators.Add(temp25);
        timeline.Animators.Add(temp26);
        timeline.Animators.Add(temp27);
        timeline.Animators.Add(temp28);
        timeline.Animators.Add(temp29);
        timeline.Animators.Add(temp30);
        timeline.Animators.Add(temp31);
        timeline.Animators.Add(temp32);
        timeline.Animators.Add(temp33);
        timeline.Animators.Add(temp34);
        timeline.Animators.Add(temp35);
        timeline.Animators.Add(temp36);
        timeline.Animators.Add(temp37);
        timeline.Animators.Add(temp38);
        timeline.Animators.Add(temp39);
        timeline.Animators.Add(temp40);
        temp22.Value = 1f;
        temp22.Duration = 1;
        temp23.Value = 1f;
        temp23.Duration = 1;
        temp24.Y = -2f;
        temp24.Easing = Fuse.Animations.Easing.BackOut;
        temp24.Duration = 1;
        temp24.Delay = 1;
        temp24.RelativeTo = Fuse.TranslationModes.Size;
        temp24.Target = camera;
        temp25.Value = -30f;
        temp25.Easing = Fuse.Animations.Easing.BackOut;
        temp25.Duration = 1;
        temp25.Delay = 1;
        temp26.Value = 30f;
        temp26.Easing = Fuse.Animations.Easing.BackOut;
        temp26.Duration = 1;
        temp26.Delay = 1;
        temp27.Value = 1f;
        temp27.Easing = Fuse.Animations.Easing.BackOut;
        temp27.Duration = 1;
        temp27.Delay = 1;
        temp28.Value = 1f;
        temp28.Easing = Fuse.Animations.Easing.BackOut;
        temp28.Duration = 1;
        temp28.Delay = 1;
        temp29.Value = 0f;
        temp29.Easing = Fuse.Animations.Easing.BackOut;
        temp29.Duration = 1;
        temp29.Delay = 1;
        temp30.Value = 0f;
        temp30.Easing = Fuse.Animations.Easing.BackOut;
        temp30.Duration = 1;
        temp30.Delay = 1;
        temp31.Value = 1f;
        temp31.Duration = 1;
        temp31.Delay = 1;
        temp32.Value = 1f;
        temp32.Duration = 0.6;
        temp32.Delay = 1.5;
        temp33.Value = 1f;
        temp33.Duration = 1;
        temp33.Delay = 2;
        temp34.Y = -0.25f;
        temp34.Easing = Fuse.Animations.Easing.BackOut;
        temp34.Duration = 1;
        temp34.Delay = 3;
        temp34.RelativeTo = Fuse.TranslationModes.Size;
        temp34.Target = panel2;
        temp35.Value = 1f;
        temp35.Duration = 1;
        temp35.Delay = 3;
        temp36.Value = 1f;
        temp36.Duration = 1;
        temp36.Delay = 3;
        temp37.Value = 1f;
        temp37.Duration = 0.6;
        temp37.Delay = 3.5;
        temp38.X = 25f;
        temp38.Easing = Fuse.Animations.Easing.BackOut;
        temp38.Duration = 0.8;
        temp38.Delay = 3.5;
        temp38.Target = sendImage;
        temp39.Value = 1f;
        temp39.Easing = Fuse.Animations.Easing.BackOut;
        temp39.Duration = 0.8;
        temp39.Delay = 3.5;
        temp40.Value = 1f;
        temp40.Duration = 1;
        temp40.Delay = 4.7;
        this.RootNode = temp;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
    }
}

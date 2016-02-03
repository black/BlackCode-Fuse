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
        var temp1 = new Fuse.Controls.Panel();
        var temp2 = new Fuse.Triggers.AddingAnimation();
        var temp3 = new Fuse.Animations.Change<Fuse.Elements.Visibility>(Menu_Visibility_inst);
        var temp4 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0f, 0f, 1f));
        temp.Children.Add(temp1);
        temp1.Children.Add(Menu);
        Menu.Width = 100f;
        Menu.Height = 100f;
        Menu.Name = "Menu";
        Menu.Fill = temp4;
        Menu.Behaviors.Add(temp2);
        temp2.Animators.Add(temp3);
        temp3.Value = Fuse.Elements.Visibility.Visible;
        this.RootNode = temp;
    }
}

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
        var temp1 = new Fuse.Controls.Panel();
        var temp2 = new Fuse.Controls.BottomBarBackground();
        temp.Children.Add(temp1);
        temp.Children.Add(temp2);
        global::Fuse.Controls.DockPanel.SetDock(temp2, Fuse.Layouts.Dock.Bottom);
        this.RootNode = temp;
    }
}

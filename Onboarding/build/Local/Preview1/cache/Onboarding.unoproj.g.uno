sealed class Onboarding_FuseTriggersTimeline_double_TargetProgress_Property: Uno.UX.Property<double>
{
    Fuse.Triggers.Timeline _obj;
    public Onboarding_FuseTriggersTimeline_double_TargetProgress_Property(Fuse.Triggers.Timeline obj) { _obj = obj;  }
    protected override double OnGet() { return _obj.TargetProgress; }
    protected override void OnSet(double v, object origin) { _obj.TargetProgress = v; }
}
sealed class Onboarding_FuseElementsElement_float_Opacity_Property: Uno.UX.Property<float>
{
    Fuse.Elements.Element _obj;
    public Onboarding_FuseElementsElement_float_Opacity_Property(Fuse.Elements.Element obj) { _obj = obj;  }
    protected override float OnGet() { return _obj.Opacity; }
    protected override void OnSet(float v, object origin) { _obj.Opacity = v; }
}

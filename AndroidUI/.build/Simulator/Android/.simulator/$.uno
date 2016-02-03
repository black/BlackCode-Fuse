/* I'm a generated file. Please do not edit me. */
using Uno;
using Uno.Collections;
using Uno.UX;
using Uno.IO;
using Outracks.Simulator;
using Outracks.Simulator.Bytecode;
namespace Outracks.Simulator.Runtime
{
public class UxFactory 
: IFactory
{
readonly Func<object> _create;public UxFactory(Func<object> create)
{

							_create = create;
						
}
public object New()
{

							return _create();
						
}
}
}
#pragma next
using Uno;
using Uno.Collections;
using Uno.UX;
using Uno.IO;
using Outracks.Simulator;
using Outracks.Simulator.Bytecode;
namespace Outracks.Simulator.Runtime
{
public class UxProperty<T> 
: Property<T>
{

						readonly Action<object, object> _setter;
						readonly Func<object> _getter;
						readonly Action<object> _adder;
						readonly Action<object> _remover;public UxProperty(Action<object, object> setter, Func<object> getter, Action<object> adder, Action<object> remover)
{

							_setter = setter;
							_getter = getter;
							_adder = adder;
							_remover = remover;
						
}
protected override void OnSet(T value, object origin)
{

							_setter(value, origin);
						
}
protected override T OnGet()
{

							return (T)_getter();
						
}
protected override void OnAddListener(ValueChangedHandler<T> listener)
{

						if (_adder == null) return;
						_adder(listener);
					
}
protected override void OnRemoveListener(ValueChangedHandler<T> listener)
{

						if (_remover == null) return;
						_remover(listener);
					
}
}
}
#pragma next
using Uno;
using Uno.Collections;
using Uno.UX;
using Uno.IO;
using Outracks.Simulator;
using Outracks.Simulator.Bytecode;
namespace Outracks.Simulator.Runtime
{
public class UxTemplate 
: ITemplate
{

						readonly Func<object, object> _matches;
						readonly Func<object, object> _apply;public UxTemplate(Func<object, object> matches, Func<object, object> applyMethod)
{

							_matches = matches;
							_apply = applyMethod;
						
}
public bool Apply(object obj)
{

							if (!(bool)_matches(obj))
								return true;

							return (bool)_apply(obj);
						
}
}
}
#pragma next
using Uno;
using Uno.Collections;
using Uno.UX;
using Uno.IO;
using Outracks.Simulator;
using Outracks.Simulator.Bytecode;
namespace Outracks.Simulator
{
public class ByteFileSource 
: Uno.UX.FileSource
{
byte[] _bytes;public void Update(byte[] newBytes)
{

									_bytes = newBytes;
									OnDataChanged();
								
}
public ByteFileSource(string path, byte[] bytes)
: base(path)
{
_bytes = bytes;
}
public override Stream OpenRead()
{
return new ArrayStream(_bytes);
}
public override byte[] ReadAllBytes()
{
return _bytes;
}
}
}
#pragma next
using Uno;
using Uno.Collections;
using Uno.UX;
using Uno.IO;
using Outracks.Simulator;
using Outracks.Simulator.Bytecode;
namespace Outracks.Simulator
{
public class FileCache 
{
static readonly Dictionary<string, Outracks.Simulator.ByteFileSource> _cache = new Dictionary<string, Outracks.Simulator.ByteFileSource>();public static void Update(string path, byte[] bytes)
{

									Outracks.Simulator.ByteFileSource fs = null;
									if (_cache.TryGetValue(path, out fs))
										fs.Update(bytes);
									else
										_cache[path] = new Outracks.Simulator.ByteFileSource(path, bytes);
								
}
public static Outracks.Simulator.ByteFileSource GetFileSource(string path)
{
return _cache[path];
}
}
}
#pragma next
using Uno;
using Uno.Collections;
using Uno.UX;
using Uno.IO;
using Outracks.Simulator;
using Outracks.Simulator.Bytecode;
namespace Outracks.Simulator
{
public class Selection 
: Fuse.Preview.ISelection
{

					readonly string _tagHash;
					readonly string _property;

					public Selection(string tagHash, string property)
					{
						_tagHash = tagHash;
						_property = property;
					}
					
					public void Each(Action<object> action)
					{
						foreach (var obj in Items)
						{
							try 
							{
								action(obj);
							}
							catch (Exception e)
							{
								debug_log e.ToString();
							}
						}
					}

					public IEnumerable<object> Items
					{
						get { return Outracks.Simulator.Runtime.ObjectTagRegistry.GetObjectsWithTag(_tagHash); }
					}
					
					public bool IsPropertySelected(object obj, string property)
					{
						return IsSelected(obj) && property == _property;
					}

					public bool IsSelected(object obj)
					{
						return Outracks.Simulator.Runtime.ObjectTagRegistry.GetTagHash(obj) == _tagHash;
					}
				}
}
#pragma next
using Uno;
using Uno.Collections;
using Uno.UX;
using Uno.IO;
using Outracks.Simulator;
using Outracks.Simulator.Bytecode;
namespace Outracks.Simulator.Runtime
{
public class ObjectTagRegistry 
{
static readonly WeakDictionary<object, string> Objects = new WeakDictionary<object, string>();public static void Clear()
{

								Objects.Clear();
							
}
public static object RegisterObjectTag(object obj, string tagHash)
{

								Objects[obj] = tagHash;
								return obj;
							
}
public static void GetObjectsWithTag(string tag, Action<object> action)
{

								foreach (var obj in GetObjectsWithTag(tag))
								{
									try
									{
										action(obj);
									}
									catch (Exception e)
									{
										debug_log e.ToString();
									}
								}
							
}
public static object GetFirstObjectWithTag(string tag)
{

								foreach (var obj in GetObjectsWithTag(tag))
								{
									try
									{
										return obj;
									}
									catch (Exception e)
									{
										debug_log e.ToString();
									}
								}
								return null;
							
}
public static IEnumerable<object> GetObjectsWithTag(string tag)
{

								var list = new List<object>();
								foreach (var kv in Objects.AsEnumerable())
								{
									object obj = null;
									if (kv.Value == tag && kv.Key.TryGetTarget(out obj))
										list.Add(obj);
								}
								return list;
							
}
public static string GetTagHash(object obj)
{

								string tagHash = null;
								Objects.TryGetValue(obj, out tagHash);
								return tagHash;
							
}
}
}
#pragma next
using Uno;
using Uno.Collections;
using Uno.UX;
using Uno.IO;
using Outracks.Simulator;
using Outracks.Simulator.Bytecode;
namespace Outracks.Simulator.Runtime
{
public class SimulatedObjectTypeRegistry 
{
static readonly WeakDictionary<object, TypeName> SimulatedObjectTypes = new WeakDictionary<object, TypeName>();static readonly Dictionary<TypeName, TypeName> BaseTypes = new Dictionary<TypeName, TypeName>();public static void RegisterSimulatedType(string typeName, string baseTypeName)
{

							BaseTypes.Add(TypeName.Parse(typeName), TypeName.Parse(baseTypeName));
						
}
public static bool IsSimulatedType(object obj, string typeNameString)
{

							var typeToBe = TypeName.Parse(typeNameString);

							TypeName type = null;
							if (!TryGetSimulatedType(obj, out type))
								return false;

							if (type == typeToBe)
								return true;
						
							TypeName baseType = null;
							while (BaseTypes.TryGetValue(type, out baseType))
							{
								if (type == typeToBe)
									return true;

								type = baseType;
							}

							return false;
						
}
public static void RegisterSimulatedObject(object obj, string typeName)
{

							SimulatedObjectTypes[obj] = TypeName.Parse(typeName);
						
}
static bool TryGetSimulatedType(object obj, out TypeName type)
{

							return SimulatedObjectTypes.TryGetValue(obj, out type);
						
}
}
}
#pragma next
namespace Outracks.Simulator
{
public class GeneratedApplication 
: Outracks.Simulator.Application
{
public GeneratedApplication()
: base(new [] {new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("127.0.0.1"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("192.168.1.37"), 12124)}, "C:\\Users\\Kuro\\Documents\\Fuse\\Android UI\\Android UI.unoproj")
{
Reflection = new Outracks.Simulator.Reflection.Native.NativeReflection(new Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>() {
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<bool>"), typeof( Outracks.Simulator.Runtime.UxProperty<bool>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<char>"), typeof( Outracks.Simulator.Runtime.UxProperty<char>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<double>"), typeof( Outracks.Simulator.Runtime.UxProperty<double>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<float2>"), typeof( Outracks.Simulator.Runtime.UxProperty<float2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<float3>"), typeof( Outracks.Simulator.Runtime.UxProperty<float3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<float4>"), typeof( Outracks.Simulator.Runtime.UxProperty<float4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<float>"), typeof( Outracks.Simulator.Runtime.UxProperty<float>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Uno.UX.FileSource>"), typeof( Outracks.Simulator.Runtime.UxProperty<Uno.UX.FileSource>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Animations.AnimationVariant>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Animations.AnimationVariant>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Animations.Easing>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Animations.Easing>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Animations.KeyframeInterpolation>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Animations.KeyframeInterpolation>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Animations.MixOp>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Animations.MixOp>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.BlendMode>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.BlendMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.DynamicBrush>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.DynamicBrush>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.GradientStop>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.GradientStop>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.LinearGradient>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.LinearGradient>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.SolidColor>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.SolidColor>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.StaticBrush>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.StaticBrush>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.Alignment>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.Alignment>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.CachingMode>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.CachingMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.Element>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.Element>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.HitTestMode>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.HitTestMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.SizeUnit>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.SizeUnit>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.StretchDirection>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.StretchDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.StretchMode>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.StretchMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.StretchSizing>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.StretchSizing>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.TextAlignment>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.TextAlignment>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.TextWrapping>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.TextWrapping>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.Visibility>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.Visibility>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Gestures.Edge>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Gestures.Edge>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Gestures.ScrollDirections>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Gestures.ScrollDirections>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Layouts.Dock>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Layouts.Dock>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Layouts.FlowDirection>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Layouts.FlowDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Layouts.Metric>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Layouts.Metric>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Layouts.Orientation>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Layouts.Orientation>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Navigation.NavigationDirection>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Navigation.NavigationDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Navigation.NavigationEdge>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Navigation.NavigationEdge>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Navigation.NavigationGotoMode>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Navigation.NavigationGotoMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Navigation.SnapTo>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Navigation.SnapTo>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Navigation.SwipeDirection>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Navigation.SwipeDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Navigation.SwipeEnds>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Navigation.SwipeEnds>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Triggers.Actions.TriggerDirection>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Triggers.Actions.TriggerDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Triggers.StateTransition>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Triggers.StateTransition>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Triggers.TriggerBypassMode>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Triggers.TriggerBypassMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Triggers.State>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Triggers.State>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.Brush>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.Brush>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<int2>"), typeof( Outracks.Simulator.Runtime.UxProperty<int2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<int3>"), typeof( Outracks.Simulator.Runtime.UxProperty<int3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<int4>"), typeof( Outracks.Simulator.Runtime.UxProperty<int4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<int>"), typeof( Outracks.Simulator.Runtime.UxProperty<int>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<long>"), typeof( Outracks.Simulator.Runtime.UxProperty<long>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<object>"), typeof( Outracks.Simulator.Runtime.UxProperty<object>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<short>"), typeof( Outracks.Simulator.Runtime.UxProperty<short>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<string>"), typeof( Outracks.Simulator.Runtime.UxProperty<string>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Uno.Bool>"), typeof( Outracks.Simulator.Runtime.UxProperty<Uno.Bool>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Uno.Char>"), typeof( Outracks.Simulator.Runtime.UxProperty<Uno.Char>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Uno.Double>"), typeof( Outracks.Simulator.Runtime.UxProperty<Uno.Double>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Uno.EventArgs>"), typeof( Outracks.Simulator.Runtime.UxProperty<Uno.EventArgs>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Uno.Float2>"), typeof( Outracks.Simulator.Runtime.UxProperty<Uno.Float2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Uno.Float3>"), typeof( Outracks.Simulator.Runtime.UxProperty<Uno.Float3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Uno.Float4>"), typeof( Outracks.Simulator.Runtime.UxProperty<Uno.Float4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Uno.Float>"), typeof( Outracks.Simulator.Runtime.UxProperty<Uno.Float>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Uno.Int2>"), typeof( Outracks.Simulator.Runtime.UxProperty<Uno.Int2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Uno.Int3>"), typeof( Outracks.Simulator.Runtime.UxProperty<Uno.Int3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Uno.Int4>"), typeof( Outracks.Simulator.Runtime.UxProperty<Uno.Int4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Uno.Int>"), typeof( Outracks.Simulator.Runtime.UxProperty<Uno.Int>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Uno.Long>"), typeof( Outracks.Simulator.Runtime.UxProperty<Uno.Long>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Uno.Object>"), typeof( Outracks.Simulator.Runtime.UxProperty<Uno.Object>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Uno.Short>"), typeof( Outracks.Simulator.Runtime.UxProperty<Uno.Short>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Uno.String>"), typeof( Outracks.Simulator.Runtime.UxProperty<Uno.String>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Node>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Node>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Resources.ImageSource>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Resources.ImageSource>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Fuse.Font>"), typeof( Outracks.Simulator.Runtime.UxProperty<Fuse.Font>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Outracks.Simulator.Runtime.UxProperty<Uno.Platform.iOS.StatusBarStyle>"), typeof( Outracks.Simulator.Runtime.UxProperty<Uno.Platform.iOS.StatusBarStyle>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<bool>"), typeof( Fuse.Animations.Change<bool>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<char>"), typeof( Fuse.Animations.Change<char>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<double>"), typeof( Fuse.Animations.Change<double>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<float2>"), typeof( Fuse.Animations.Change<float2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<float3>"), typeof( Fuse.Animations.Change<float3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<float4>"), typeof( Fuse.Animations.Change<float4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<float>"), typeof( Fuse.Animations.Change<float>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Uno.UX.FileSource>"), typeof( Fuse.Animations.Change<Uno.UX.FileSource>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Animations.AnimationVariant>"), typeof( Fuse.Animations.Change<Fuse.Animations.AnimationVariant>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Animations.Easing>"), typeof( Fuse.Animations.Change<Fuse.Animations.Easing>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Animations.KeyframeInterpolation>"), typeof( Fuse.Animations.Change<Fuse.Animations.KeyframeInterpolation>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Animations.MixOp>"), typeof( Fuse.Animations.Change<Fuse.Animations.MixOp>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Drawing.BlendMode>"), typeof( Fuse.Animations.Change<Fuse.Drawing.BlendMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Drawing.DynamicBrush>"), typeof( Fuse.Animations.Change<Fuse.Drawing.DynamicBrush>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Drawing.GradientStop>"), typeof( Fuse.Animations.Change<Fuse.Drawing.GradientStop>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Drawing.LinearGradient>"), typeof( Fuse.Animations.Change<Fuse.Drawing.LinearGradient>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Drawing.SolidColor>"), typeof( Fuse.Animations.Change<Fuse.Drawing.SolidColor>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Drawing.StaticBrush>"), typeof( Fuse.Animations.Change<Fuse.Drawing.StaticBrush>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Elements.Alignment>"), typeof( Fuse.Animations.Change<Fuse.Elements.Alignment>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Elements.CachingMode>"), typeof( Fuse.Animations.Change<Fuse.Elements.CachingMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Elements.Element>"), typeof( Fuse.Animations.Change<Fuse.Elements.Element>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Elements.HitTestMode>"), typeof( Fuse.Animations.Change<Fuse.Elements.HitTestMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Elements.SizeUnit>"), typeof( Fuse.Animations.Change<Fuse.Elements.SizeUnit>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Elements.StretchDirection>"), typeof( Fuse.Animations.Change<Fuse.Elements.StretchDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Elements.StretchMode>"), typeof( Fuse.Animations.Change<Fuse.Elements.StretchMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Elements.StretchSizing>"), typeof( Fuse.Animations.Change<Fuse.Elements.StretchSizing>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Elements.TextAlignment>"), typeof( Fuse.Animations.Change<Fuse.Elements.TextAlignment>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Elements.TextWrapping>"), typeof( Fuse.Animations.Change<Fuse.Elements.TextWrapping>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Elements.Visibility>"), typeof( Fuse.Animations.Change<Fuse.Elements.Visibility>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Gestures.Edge>"), typeof( Fuse.Animations.Change<Fuse.Gestures.Edge>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Gestures.ScrollDirections>"), typeof( Fuse.Animations.Change<Fuse.Gestures.ScrollDirections>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Layouts.Dock>"), typeof( Fuse.Animations.Change<Fuse.Layouts.Dock>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Layouts.FlowDirection>"), typeof( Fuse.Animations.Change<Fuse.Layouts.FlowDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Layouts.Metric>"), typeof( Fuse.Animations.Change<Fuse.Layouts.Metric>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Layouts.Orientation>"), typeof( Fuse.Animations.Change<Fuse.Layouts.Orientation>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Navigation.NavigationDirection>"), typeof( Fuse.Animations.Change<Fuse.Navigation.NavigationDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Navigation.NavigationEdge>"), typeof( Fuse.Animations.Change<Fuse.Navigation.NavigationEdge>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Navigation.NavigationGotoMode>"), typeof( Fuse.Animations.Change<Fuse.Navigation.NavigationGotoMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Navigation.SnapTo>"), typeof( Fuse.Animations.Change<Fuse.Navigation.SnapTo>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Navigation.SwipeDirection>"), typeof( Fuse.Animations.Change<Fuse.Navigation.SwipeDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Navigation.SwipeEnds>"), typeof( Fuse.Animations.Change<Fuse.Navigation.SwipeEnds>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Triggers.Actions.TriggerDirection>"), typeof( Fuse.Animations.Change<Fuse.Triggers.Actions.TriggerDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Triggers.StateTransition>"), typeof( Fuse.Animations.Change<Fuse.Triggers.StateTransition>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Triggers.TriggerBypassMode>"), typeof( Fuse.Animations.Change<Fuse.Triggers.TriggerBypassMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Triggers.State>"), typeof( Fuse.Animations.Change<Fuse.Triggers.State>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Drawing.Brush>"), typeof( Fuse.Animations.Change<Fuse.Drawing.Brush>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<int2>"), typeof( Fuse.Animations.Change<int2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<int3>"), typeof( Fuse.Animations.Change<int3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<int4>"), typeof( Fuse.Animations.Change<int4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<int>"), typeof( Fuse.Animations.Change<int>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<long>"), typeof( Fuse.Animations.Change<long>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<object>"), typeof( Fuse.Animations.Change<object>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<short>"), typeof( Fuse.Animations.Change<short>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<string>"), typeof( Fuse.Animations.Change<string>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Uno.Bool>"), typeof( Fuse.Animations.Change<Uno.Bool>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Uno.Char>"), typeof( Fuse.Animations.Change<Uno.Char>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Uno.Double>"), typeof( Fuse.Animations.Change<Uno.Double>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Uno.EventArgs>"), typeof( Fuse.Animations.Change<Uno.EventArgs>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Uno.Float2>"), typeof( Fuse.Animations.Change<Uno.Float2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Uno.Float3>"), typeof( Fuse.Animations.Change<Uno.Float3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Uno.Float4>"), typeof( Fuse.Animations.Change<Uno.Float4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Uno.Float>"), typeof( Fuse.Animations.Change<Uno.Float>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Uno.Int2>"), typeof( Fuse.Animations.Change<Uno.Int2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Uno.Int3>"), typeof( Fuse.Animations.Change<Uno.Int3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Uno.Int4>"), typeof( Fuse.Animations.Change<Uno.Int4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Uno.Int>"), typeof( Fuse.Animations.Change<Uno.Int>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Uno.Long>"), typeof( Fuse.Animations.Change<Uno.Long>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Uno.Object>"), typeof( Fuse.Animations.Change<Uno.Object>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Uno.Short>"), typeof( Fuse.Animations.Change<Uno.Short>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Uno.String>"), typeof( Fuse.Animations.Change<Uno.String>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Node>"), typeof( Fuse.Animations.Change<Fuse.Node>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Resources.ImageSource>"), typeof( Fuse.Animations.Change<Fuse.Resources.ImageSource>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Fuse.Font>"), typeof( Fuse.Animations.Change<Fuse.Font>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Animations.Change<Uno.Platform.iOS.StatusBarStyle>"), typeof( Fuse.Animations.Change<Uno.Platform.iOS.StatusBarStyle>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<bool>"), typeof( Fuse.Triggers.Actions.Set<bool>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<char>"), typeof( Fuse.Triggers.Actions.Set<char>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<double>"), typeof( Fuse.Triggers.Actions.Set<double>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<float2>"), typeof( Fuse.Triggers.Actions.Set<float2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<float3>"), typeof( Fuse.Triggers.Actions.Set<float3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<float4>"), typeof( Fuse.Triggers.Actions.Set<float4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<float>"), typeof( Fuse.Triggers.Actions.Set<float>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Uno.UX.FileSource>"), typeof( Fuse.Triggers.Actions.Set<Uno.UX.FileSource>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Animations.AnimationVariant>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Animations.AnimationVariant>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Animations.Easing>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Animations.Easing>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Animations.KeyframeInterpolation>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Animations.KeyframeInterpolation>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Animations.MixOp>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Animations.MixOp>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Drawing.BlendMode>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Drawing.BlendMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Drawing.DynamicBrush>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Drawing.DynamicBrush>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Drawing.GradientStop>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Drawing.GradientStop>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Drawing.LinearGradient>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Drawing.LinearGradient>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Drawing.SolidColor>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Drawing.SolidColor>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Drawing.StaticBrush>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Drawing.StaticBrush>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Elements.Alignment>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Elements.Alignment>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Elements.CachingMode>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Elements.CachingMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Elements.Element>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Elements.Element>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Elements.HitTestMode>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Elements.HitTestMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Elements.SizeUnit>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Elements.SizeUnit>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Elements.StretchDirection>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Elements.StretchDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Elements.StretchMode>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Elements.StretchMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Elements.StretchSizing>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Elements.StretchSizing>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Elements.TextAlignment>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Elements.TextAlignment>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Elements.TextWrapping>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Elements.TextWrapping>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Gestures.Edge>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Gestures.Edge>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Gestures.ScrollDirections>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Gestures.ScrollDirections>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Layouts.Dock>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Layouts.Dock>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Layouts.FlowDirection>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Layouts.FlowDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Layouts.Metric>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Layouts.Metric>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Layouts.Orientation>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Layouts.Orientation>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Navigation.NavigationDirection>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Navigation.NavigationDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Navigation.NavigationEdge>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Navigation.NavigationEdge>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Navigation.NavigationGotoMode>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Navigation.NavigationGotoMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Navigation.SnapTo>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Navigation.SnapTo>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Navigation.SwipeDirection>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Navigation.SwipeDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Navigation.SwipeEnds>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Navigation.SwipeEnds>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Triggers.Actions.TriggerDirection>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Triggers.Actions.TriggerDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Triggers.StateTransition>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Triggers.StateTransition>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Triggers.TriggerBypassMode>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Triggers.TriggerBypassMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Triggers.State>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Triggers.State>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Drawing.Brush>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Drawing.Brush>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<int2>"), typeof( Fuse.Triggers.Actions.Set<int2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<int3>"), typeof( Fuse.Triggers.Actions.Set<int3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<int4>"), typeof( Fuse.Triggers.Actions.Set<int4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<int>"), typeof( Fuse.Triggers.Actions.Set<int>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<long>"), typeof( Fuse.Triggers.Actions.Set<long>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<object>"), typeof( Fuse.Triggers.Actions.Set<object>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<short>"), typeof( Fuse.Triggers.Actions.Set<short>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<string>"), typeof( Fuse.Triggers.Actions.Set<string>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Uno.Bool>"), typeof( Fuse.Triggers.Actions.Set<Uno.Bool>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Uno.Char>"), typeof( Fuse.Triggers.Actions.Set<Uno.Char>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Uno.Double>"), typeof( Fuse.Triggers.Actions.Set<Uno.Double>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Uno.EventArgs>"), typeof( Fuse.Triggers.Actions.Set<Uno.EventArgs>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Uno.Float2>"), typeof( Fuse.Triggers.Actions.Set<Uno.Float2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Uno.Float3>"), typeof( Fuse.Triggers.Actions.Set<Uno.Float3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Uno.Float4>"), typeof( Fuse.Triggers.Actions.Set<Uno.Float4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Uno.Float>"), typeof( Fuse.Triggers.Actions.Set<Uno.Float>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Uno.Int2>"), typeof( Fuse.Triggers.Actions.Set<Uno.Int2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Uno.Int3>"), typeof( Fuse.Triggers.Actions.Set<Uno.Int3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Uno.Int4>"), typeof( Fuse.Triggers.Actions.Set<Uno.Int4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Uno.Int>"), typeof( Fuse.Triggers.Actions.Set<Uno.Int>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Uno.Long>"), typeof( Fuse.Triggers.Actions.Set<Uno.Long>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Uno.Object>"), typeof( Fuse.Triggers.Actions.Set<Uno.Object>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Uno.Short>"), typeof( Fuse.Triggers.Actions.Set<Uno.Short>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Uno.String>"), typeof( Fuse.Triggers.Actions.Set<Uno.String>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Node>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Node>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Resources.ImageSource>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Resources.ImageSource>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Fuse.Font>"), typeof( Fuse.Triggers.Actions.Set<Fuse.Font>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Triggers.Actions.Set<Uno.Platform.iOS.StatusBarStyle>"), typeof( Fuse.Triggers.Actions.Set<Uno.Platform.iOS.StatusBarStyle>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<bool>"), typeof( Fuse.Reactive.DataBinding<bool>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<char>"), typeof( Fuse.Reactive.DataBinding<char>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<double>"), typeof( Fuse.Reactive.DataBinding<double>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<float2>"), typeof( Fuse.Reactive.DataBinding<float2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<float3>"), typeof( Fuse.Reactive.DataBinding<float3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<float4>"), typeof( Fuse.Reactive.DataBinding<float4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<float>"), typeof( Fuse.Reactive.DataBinding<float>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Uno.UX.FileSource>"), typeof( Fuse.Reactive.DataBinding<Uno.UX.FileSource>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Animations.AnimationVariant>"), typeof( Fuse.Reactive.DataBinding<Fuse.Animations.AnimationVariant>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Animations.Easing>"), typeof( Fuse.Reactive.DataBinding<Fuse.Animations.Easing>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Animations.KeyframeInterpolation>"), typeof( Fuse.Reactive.DataBinding<Fuse.Animations.KeyframeInterpolation>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Animations.MixOp>"), typeof( Fuse.Reactive.DataBinding<Fuse.Animations.MixOp>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Drawing.BlendMode>"), typeof( Fuse.Reactive.DataBinding<Fuse.Drawing.BlendMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Drawing.DynamicBrush>"), typeof( Fuse.Reactive.DataBinding<Fuse.Drawing.DynamicBrush>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Drawing.GradientStop>"), typeof( Fuse.Reactive.DataBinding<Fuse.Drawing.GradientStop>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Drawing.LinearGradient>"), typeof( Fuse.Reactive.DataBinding<Fuse.Drawing.LinearGradient>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Drawing.SolidColor>"), typeof( Fuse.Reactive.DataBinding<Fuse.Drawing.SolidColor>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Drawing.StaticBrush>"), typeof( Fuse.Reactive.DataBinding<Fuse.Drawing.StaticBrush>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Elements.Alignment>"), typeof( Fuse.Reactive.DataBinding<Fuse.Elements.Alignment>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Elements.CachingMode>"), typeof( Fuse.Reactive.DataBinding<Fuse.Elements.CachingMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Elements.Element>"), typeof( Fuse.Reactive.DataBinding<Fuse.Elements.Element>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Elements.HitTestMode>"), typeof( Fuse.Reactive.DataBinding<Fuse.Elements.HitTestMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Elements.SizeUnit>"), typeof( Fuse.Reactive.DataBinding<Fuse.Elements.SizeUnit>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Elements.StretchDirection>"), typeof( Fuse.Reactive.DataBinding<Fuse.Elements.StretchDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Elements.StretchMode>"), typeof( Fuse.Reactive.DataBinding<Fuse.Elements.StretchMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Elements.StretchSizing>"), typeof( Fuse.Reactive.DataBinding<Fuse.Elements.StretchSizing>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Elements.TextAlignment>"), typeof( Fuse.Reactive.DataBinding<Fuse.Elements.TextAlignment>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Elements.TextWrapping>"), typeof( Fuse.Reactive.DataBinding<Fuse.Elements.TextWrapping>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Elements.Visibility>"), typeof( Fuse.Reactive.DataBinding<Fuse.Elements.Visibility>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Gestures.Edge>"), typeof( Fuse.Reactive.DataBinding<Fuse.Gestures.Edge>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Gestures.ScrollDirections>"), typeof( Fuse.Reactive.DataBinding<Fuse.Gestures.ScrollDirections>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Layouts.Dock>"), typeof( Fuse.Reactive.DataBinding<Fuse.Layouts.Dock>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Layouts.FlowDirection>"), typeof( Fuse.Reactive.DataBinding<Fuse.Layouts.FlowDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Layouts.Metric>"), typeof( Fuse.Reactive.DataBinding<Fuse.Layouts.Metric>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Layouts.Orientation>"), typeof( Fuse.Reactive.DataBinding<Fuse.Layouts.Orientation>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Navigation.NavigationDirection>"), typeof( Fuse.Reactive.DataBinding<Fuse.Navigation.NavigationDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Navigation.NavigationEdge>"), typeof( Fuse.Reactive.DataBinding<Fuse.Navigation.NavigationEdge>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Navigation.NavigationGotoMode>"), typeof( Fuse.Reactive.DataBinding<Fuse.Navigation.NavigationGotoMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Navigation.SnapTo>"), typeof( Fuse.Reactive.DataBinding<Fuse.Navigation.SnapTo>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Navigation.SwipeDirection>"), typeof( Fuse.Reactive.DataBinding<Fuse.Navigation.SwipeDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Navigation.SwipeEnds>"), typeof( Fuse.Reactive.DataBinding<Fuse.Navigation.SwipeEnds>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Triggers.Actions.TriggerDirection>"), typeof( Fuse.Reactive.DataBinding<Fuse.Triggers.Actions.TriggerDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Triggers.StateTransition>"), typeof( Fuse.Reactive.DataBinding<Fuse.Triggers.StateTransition>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Triggers.TriggerBypassMode>"), typeof( Fuse.Reactive.DataBinding<Fuse.Triggers.TriggerBypassMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Triggers.State>"), typeof( Fuse.Reactive.DataBinding<Fuse.Triggers.State>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Drawing.Brush>"), typeof( Fuse.Reactive.DataBinding<Fuse.Drawing.Brush>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<int2>"), typeof( Fuse.Reactive.DataBinding<int2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<int3>"), typeof( Fuse.Reactive.DataBinding<int3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<int4>"), typeof( Fuse.Reactive.DataBinding<int4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<int>"), typeof( Fuse.Reactive.DataBinding<int>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<long>"), typeof( Fuse.Reactive.DataBinding<long>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<object>"), typeof( Fuse.Reactive.DataBinding<object>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<short>"), typeof( Fuse.Reactive.DataBinding<short>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<string>"), typeof( Fuse.Reactive.DataBinding<string>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Uno.Bool>"), typeof( Fuse.Reactive.DataBinding<Uno.Bool>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Uno.Char>"), typeof( Fuse.Reactive.DataBinding<Uno.Char>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Uno.Double>"), typeof( Fuse.Reactive.DataBinding<Uno.Double>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Uno.EventArgs>"), typeof( Fuse.Reactive.DataBinding<Uno.EventArgs>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Uno.Float2>"), typeof( Fuse.Reactive.DataBinding<Uno.Float2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Uno.Float3>"), typeof( Fuse.Reactive.DataBinding<Uno.Float3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Uno.Float4>"), typeof( Fuse.Reactive.DataBinding<Uno.Float4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Uno.Float>"), typeof( Fuse.Reactive.DataBinding<Uno.Float>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Uno.Int2>"), typeof( Fuse.Reactive.DataBinding<Uno.Int2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Uno.Int3>"), typeof( Fuse.Reactive.DataBinding<Uno.Int3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Uno.Int4>"), typeof( Fuse.Reactive.DataBinding<Uno.Int4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Uno.Int>"), typeof( Fuse.Reactive.DataBinding<Uno.Int>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Uno.Long>"), typeof( Fuse.Reactive.DataBinding<Uno.Long>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Uno.Object>"), typeof( Fuse.Reactive.DataBinding<Uno.Object>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Uno.Short>"), typeof( Fuse.Reactive.DataBinding<Uno.Short>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Uno.String>"), typeof( Fuse.Reactive.DataBinding<Uno.String>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Node>"), typeof( Fuse.Reactive.DataBinding<Fuse.Node>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Resources.ImageSource>"), typeof( Fuse.Reactive.DataBinding<Fuse.Resources.ImageSource>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Fuse.Font>"), typeof( Fuse.Reactive.DataBinding<Fuse.Font>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Fuse.Reactive.DataBinding<Uno.Platform.iOS.StatusBarStyle>"), typeof( Fuse.Reactive.DataBinding<Uno.Platform.iOS.StatusBarStyle>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<bool>"), typeof( Uno.EventHandler<bool>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<char>"), typeof( Uno.EventHandler<char>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<double>"), typeof( Uno.EventHandler<double>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<float2>"), typeof( Uno.EventHandler<float2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<float3>"), typeof( Uno.EventHandler<float3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<float4>"), typeof( Uno.EventHandler<float4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<float>"), typeof( Uno.EventHandler<float>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Uno.UX.FileSource>"), typeof( Uno.EventHandler<Uno.UX.FileSource>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Animations.AnimationVariant>"), typeof( Uno.EventHandler<Fuse.Animations.AnimationVariant>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Animations.Easing>"), typeof( Uno.EventHandler<Fuse.Animations.Easing>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Animations.KeyframeInterpolation>"), typeof( Uno.EventHandler<Fuse.Animations.KeyframeInterpolation>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Animations.MixOp>"), typeof( Uno.EventHandler<Fuse.Animations.MixOp>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Drawing.BlendMode>"), typeof( Uno.EventHandler<Fuse.Drawing.BlendMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Drawing.DynamicBrush>"), typeof( Uno.EventHandler<Fuse.Drawing.DynamicBrush>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Drawing.GradientStop>"), typeof( Uno.EventHandler<Fuse.Drawing.GradientStop>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Drawing.LinearGradient>"), typeof( Uno.EventHandler<Fuse.Drawing.LinearGradient>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Drawing.SolidColor>"), typeof( Uno.EventHandler<Fuse.Drawing.SolidColor>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Drawing.StaticBrush>"), typeof( Uno.EventHandler<Fuse.Drawing.StaticBrush>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Elements.Alignment>"), typeof( Uno.EventHandler<Fuse.Elements.Alignment>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Elements.CachingMode>"), typeof( Uno.EventHandler<Fuse.Elements.CachingMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Elements.Element>"), typeof( Uno.EventHandler<Fuse.Elements.Element>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Elements.HitTestMode>"), typeof( Uno.EventHandler<Fuse.Elements.HitTestMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Elements.SizeUnit>"), typeof( Uno.EventHandler<Fuse.Elements.SizeUnit>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Elements.StretchDirection>"), typeof( Uno.EventHandler<Fuse.Elements.StretchDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Elements.StretchMode>"), typeof( Uno.EventHandler<Fuse.Elements.StretchMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Elements.StretchSizing>"), typeof( Uno.EventHandler<Fuse.Elements.StretchSizing>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Elements.TextAlignment>"), typeof( Uno.EventHandler<Fuse.Elements.TextAlignment>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Elements.TextWrapping>"), typeof( Uno.EventHandler<Fuse.Elements.TextWrapping>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Elements.Visibility>"), typeof( Uno.EventHandler<Fuse.Elements.Visibility>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Gestures.Edge>"), typeof( Uno.EventHandler<Fuse.Gestures.Edge>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Gestures.ScrollDirections>"), typeof( Uno.EventHandler<Fuse.Gestures.ScrollDirections>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Layouts.Dock>"), typeof( Uno.EventHandler<Fuse.Layouts.Dock>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Layouts.FlowDirection>"), typeof( Uno.EventHandler<Fuse.Layouts.FlowDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Layouts.Metric>"), typeof( Uno.EventHandler<Fuse.Layouts.Metric>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Layouts.Orientation>"), typeof( Uno.EventHandler<Fuse.Layouts.Orientation>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Navigation.NavigationDirection>"), typeof( Uno.EventHandler<Fuse.Navigation.NavigationDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Navigation.NavigationEdge>"), typeof( Uno.EventHandler<Fuse.Navigation.NavigationEdge>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Navigation.NavigationGotoMode>"), typeof( Uno.EventHandler<Fuse.Navigation.NavigationGotoMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Navigation.SnapTo>"), typeof( Uno.EventHandler<Fuse.Navigation.SnapTo>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Navigation.SwipeDirection>"), typeof( Uno.EventHandler<Fuse.Navigation.SwipeDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Navigation.SwipeEnds>"), typeof( Uno.EventHandler<Fuse.Navigation.SwipeEnds>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Triggers.Actions.TriggerDirection>"), typeof( Uno.EventHandler<Fuse.Triggers.Actions.TriggerDirection>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Triggers.StateTransition>"), typeof( Uno.EventHandler<Fuse.Triggers.StateTransition>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Triggers.TriggerBypassMode>"), typeof( Uno.EventHandler<Fuse.Triggers.TriggerBypassMode>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Triggers.State>"), typeof( Uno.EventHandler<Fuse.Triggers.State>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Drawing.Brush>"), typeof( Uno.EventHandler<Fuse.Drawing.Brush>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<int2>"), typeof( Uno.EventHandler<int2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<int3>"), typeof( Uno.EventHandler<int3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<int4>"), typeof( Uno.EventHandler<int4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<int>"), typeof( Uno.EventHandler<int>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<long>"), typeof( Uno.EventHandler<long>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<object>"), typeof( Uno.EventHandler<object>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<short>"), typeof( Uno.EventHandler<short>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<string>"), typeof( Uno.EventHandler<string>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Uno.Bool>"), typeof( Uno.EventHandler<Uno.Bool>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Uno.Char>"), typeof( Uno.EventHandler<Uno.Char>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Uno.Double>"), typeof( Uno.EventHandler<Uno.Double>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Uno.EventArgs>"), typeof( Uno.EventHandler<Uno.EventArgs>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Uno.Float2>"), typeof( Uno.EventHandler<Uno.Float2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Uno.Float3>"), typeof( Uno.EventHandler<Uno.Float3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Uno.Float4>"), typeof( Uno.EventHandler<Uno.Float4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Uno.Float>"), typeof( Uno.EventHandler<Uno.Float>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Uno.Int2>"), typeof( Uno.EventHandler<Uno.Int2>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Uno.Int3>"), typeof( Uno.EventHandler<Uno.Int3>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Uno.Int4>"), typeof( Uno.EventHandler<Uno.Int4>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Uno.Int>"), typeof( Uno.EventHandler<Uno.Int>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Uno.Long>"), typeof( Uno.EventHandler<Uno.Long>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Uno.Object>"), typeof( Uno.EventHandler<Uno.Object>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Uno.Short>"), typeof( Uno.EventHandler<Uno.Short>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Uno.String>"), typeof( Uno.EventHandler<Uno.String>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Node>"), typeof( Uno.EventHandler<Fuse.Node>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Resources.ImageSource>"), typeof( Uno.EventHandler<Fuse.Resources.ImageSource>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Fuse.Font>"), typeof( Uno.EventHandler<Fuse.Font>) },
{ Outracks.Simulator.Bytecode.TypeName.Parse("Uno.EventHandler<Uno.Platform.iOS.StatusBarStyle>"), typeof( Uno.EventHandler<Uno.Platform.iOS.StatusBarStyle>) }}
);
}
}
}

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
#pragma reset
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
#pragma reset
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
#pragma reset
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
#pragma reset
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
#pragma reset
/* #00000000; c:\BuildAgent-1\work\b939dc4c6ac331f9\Source\Outracks.Simulator.Compiler\Selection\RuntimeSelection.cs ; */

#pragma reset
/* #00000000; c:\BuildAgent-1\work\b939dc4c6ac331f9\Source\Outracks.Simulator.Compiler\CodeGeneration\RuntimeTagRegistry.cs ; */

#pragma reset
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
#pragma reset
namespace Outracks.Simulator
{
public class GeneratedApplication 
: Outracks.Simulator.Application
{
public GeneratedApplication()
: base(new [] {new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("127.0.0.1"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("192.168.1.21"), 12124)}, "C:\\Users\\Kuro\\Documents\\Fuse\\Onboarding\\Onboarding.unoproj")
{
Reflection = new Outracks.Simulator.Reflection.Native.NativeReflection(new Outracks.Simulator.Reflection.Native.SimpleTypeMap());
}
}
}

#include <app/Android.android.os.Build.h>
#include <app/Android.java.lang.String.h>
#include <app/Fuse.App.h>
#include <app/Fuse.AppBase.h>
#include <app/Fuse.BasicTheme.BasicTheme.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.Controls.StackPanel.h>
#include <app/Fuse.Controls.Text.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.Gestures.Clicked.h>
#include <app/Fuse.Gestures.ClickedArgs.h>
#include <app/Fuse.Gestures.ClickedHandler.h>
#include <app/Fuse.Gestures.ScrollDirections.h>
#include <app/Fuse.Layouts.Orientation.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Theme.h>
#include <app/Fuse.UnhandledExceptionArgs.h>
#include <app/Fuse.UnhandledExceptionHandler.h>
#include <app/Outracks.Simulator.AggregateConnectError.h>
#include <app/Outracks.Simulator.Application.h>
#include <app/Outracks.Simulator.Apply__Outracks_Simulator_DialogButton.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Add-8068b27e.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Blo-2403c610.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Boo-dea10293.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Cal-9a243f50.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Cal-b8777dfd.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Cal-ed6e068c.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Enu-529a3048.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Exp-15499436.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Ins-360028fc.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_IsT-a0166baa.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Lam-c6c30a0c.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Lit-4cf6061b.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Log-b96597c1.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Met-59af699.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_NoO-1517a4da.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Num-1cf9d67d.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Rea-3d4228a7.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Rea-8c7ea1d9.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Rea-d77eb0f2.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Rem-f67870ba.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Ret-e068158a.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Str-71685694.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Wri-3ee0aaf3.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Protocol_Deb-785759dd.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Protocol_Err-a8f2708c.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Protocol_Exe-ebc87264.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Protocol_Reg-e1eb37dd.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Protocol_Rei-dd812609.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Protocol_Unh-bc422b0f.h>
#include <app/Outracks.Simulator.ArrayStream.h>
#include <app/Outracks.Simulator.Bytecode.BindVariable.h>
#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <app/Outracks.Simulator.Bytecode.Lambda.h>
#include <app/Outracks.Simulator.Bytecode.Optional.h>
#include <app/Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_Protocol_Reify.h>
#include <app/Outracks.Simulator.Bytecode.Parameter.h>
#include <app/Outracks.Simulator.Bytecode.Statement.h>
#include <app/Outracks.Simulator.Bytecode.TypeName.h>
#include <app/Outracks.Simulator.BytecodeCache.h>
#include <app/Outracks.Simulator.ChangeIp.h>
#include <app/Outracks.Simulator.Closure.h>
#include <app/Outracks.Simulator.ConcurrentQueue__Outracks_Simulator_Protocol-2fb7ccdc.h>
#include <app/Outracks.Simulator.ConcurrentQueue__Outracks_Simulator_Protocol-53fe6996.h>
#include <app/Outracks.Simulator.Connected.h>
#include <app/Outracks.Simulator.Connecting.h>
#include <app/Outracks.Simulator.ConnectingToHost.h>
#include <app/Outracks.Simulator.ConnectingToProxy.h>
#include <app/Outracks.Simulator.ConnectionLost.h>
#include <app/Outracks.Simulator.ConnectToSimulator.h>
#include <app/Outracks.Simulator.Context.h>
#include <app/Outracks.Simulator.DeviceInfo.h>
#include <app/Outracks.Simulator.DialogButton.h>
#include <app/Outracks.Simulator.DummyApplication.h>
#include <app/Outracks.Simulator.FailedToConnect.h>
#include <app/Outracks.Simulator.FailedToConnectToEndPoint.h>
#include <app/Outracks.Simulator.FailedToConnectToProxy.h>
#include <app/Outracks.Simulator.FailedToConnectToSimulator.h>
#include <app/Outracks.Simulator.Faulted.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_AddEvent-eb7a519f.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_BlobLiteral__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_BooleanL-32961633.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_CallDyna-3e9af010.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_CallLambda__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_CallStat-b288eb07.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_EnumLiteral__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_Expression__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_Instantiate__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_IsType__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_Lambda__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_Literal__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_LogicalOr__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_MethodGroup__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_NoOperation__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_NumberLi-c1d8d7ad.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_ReadProp-a7837fbd.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_ReadStat-b538c371.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_ReadVari-74d05b4.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_RemoveEv-77fff473.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_Return__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_StringLi-4878b9e6.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_WritePro-f853db10.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Protocol_DebugLog__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Protocol_Error__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Protocol_Execute__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Protocol_Register-9a76da07.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Protocol_Reify__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Protocol_Unhandle-2594f5b9.h>
#include <app/Outracks.Simulator.ForgetAction__object__Fuse_Gestures_ClickedArgs.h>
#include <app/Outracks.Simulator.GetSimulatorEndpoint.h>
#include <app/Outracks.Simulator.GoOffline.h>
#include <app/Outracks.Simulator.Idle.h>
#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_NamespaceName.h>
#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Opti-19bd904f.h>
#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Opti-2bf62600.h>
#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Opti-5a25cd14.h>
#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Opti-68e3a32d.h>
#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Opti-8db643a.h>
#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Opti-cbd7aae4.h>
#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Optional.h>
#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Optional_1.h>
#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Optional_2.h>
#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Optional_3.h>
#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Optional_4.h>
#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Optional_5.h>
#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Stat-eec89080.h>
#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Type-e09114c.h>
#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Variable.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_B-14e938f8.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_Expression.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_Parameter.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Protocol_E-d530f22c.h>
#include <app/Outracks.Simulator.ImmutableList__Uno_Exception.h>
#include <app/Outracks.Simulator.IndentString.h>
#include <app/Outracks.Simulator.InvalidDataException.h>
#include <app/Outracks.Simulator.ISimulatorClient.h>
#include <app/Outracks.Simulator.List.h>
#include <app/Outracks.Simulator.LoadingScreen.h>
#include <app/Outracks.Simulator.ModalDialog.h>
#include <app/Outracks.Simulator.NonExhaustiveMatch.h>
#include <app/Outracks.Simulator.OfflineSimulatorClient.h>
#include <app/Outracks.Simulator.Protocol.DebugLog.h>
#include <app/Outracks.Simulator.Protocol.Error.h>
#include <app/Outracks.Simulator.Protocol.ExceptionInfo.h>
#include <app/Outracks.Simulator.Protocol.Execute.h>
#include <app/Outracks.Simulator.Protocol.MessageFromClient.h>
#include <app/Outracks.Simulator.Protocol.MessageToClient.h>
#include <app/Outracks.Simulator.Protocol.RegisterName.h>
#include <app/Outracks.Simulator.Protocol.Reify.h>
#include <app/Outracks.Simulator.Protocol.UnhandledException.h>
#include <app/Outracks.Simulator.ProxyClient.h>
#include <app/Outracks.Simulator.Reifying.h>
#include <app/Outracks.Simulator.Restarting.h>
#include <app/Outracks.Simulator.Running.h>
#include <app/Outracks.Simulator.Runtime.IReflection.h>
#include <app/Outracks.Simulator.Runtime.VirtualMachine.h>
#include <app/Outracks.Simulator.Serialization.h>
#include <app/Outracks.Simulator.ShowingModalDialog.h>
#include <app/Outracks.Simulator.ShowingPrompt.h>
#include <app/Outracks.Simulator.SimulatorClient.h>
#include <app/Outracks.Simulator.State.h>
#include <app/Outracks.Simulator.StringSplitting.h>
#include <app/Outracks.Simulator.Task__Outracks_Simulator_ISimulatorClient.h>
#include <app/Outracks.Simulator.Task__Uno_Net_IPEndPoint__.h>
#include <app/Outracks.Simulator.Tasks.h>
#include <app/Outracks.Simulator.TaskThread__Outracks_Simulator_ISimulatorClient.h>
#include <app/Outracks.Simulator.TaskThread__Uno_Net_IPEndPoint__.h>
#include <app/Outracks.Simulator.Uninitialized.h>
#include <app/Outracks.Simulator.UserAppState.h>
#include <app/Outracks.Simulator.WaitForFirstResult__Outracks_Simulator_ISimu-96796466.h>
#include <app/Outracks.Simulator.WaitForFirstResult__Uno_Net_IPEndPoint__.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_AddEventHandler.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO-e26fccb2.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_BindVariable__Uno_IO_Bi-e35bfd02.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_BlobLiteral.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_BooleanLiteral.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_-9a070063.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_CallDynamicMethod.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_-40a5243f.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_CallLambda.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_CallStaticMethod.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_I-687379e9.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_EnumLiteral.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Expression.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Instantiate.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_IsType.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Lambda.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Literal.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_LogicalOr.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_MethodGroup.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_NoOperation.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_NumberLiteral.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_B-42e4073e.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Parameter__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_ReadProperty.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_Bi-1758cc4.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_ReadStaticField.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO-18c4fe9.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_ReadVariable.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_Bi-552cc9ef.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_RemoveEventHandler.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno-8066807d.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Return.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Statement__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_StringLiteral.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_B-75e974eb.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_TypeName__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_WriteProperty.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_B-7e7ebb55.h>
#include <app/Uno.Action__Outracks_Simulator_DialogButton.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_DebugLog.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_Error.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_ExceptionInfo__Uno_IO_B-3f823033.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_Execute.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_RegisterName.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_RegisterName__Uno_IO_Bi-6e2cfa14.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_Reify.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_UnhandledException.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_UnhandledException__Uno-e96bd926.h>
#include <app/Uno.Application.h>
#include <app/Uno.Array.h>
#include <app/Uno.Bool.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.ICollection__Uno_UX_Resource.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Controls_Control.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_BindVariable.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_Expression.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_DialogButton.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Task_Outracks_S-7e052b05.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Task_Uno_Net_IP-6362cf5f.h>
#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Collections.IEnumerable__Uno_Exception.h>
#include <app/Uno.Collections.IEnumerable__Uno_Net_IPEndPoint.h>
#include <app/Uno.Collections.IEnumerable__Uno_UX_Resource.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Controls_Control.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_BindVariable.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_Expression.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_Parameter.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Protocol_ExceptionInfo.h>
#include <app/Uno.Collections.IEnumerator__string.h>
#include <app/Uno.Collections.IEnumerator__Uno_Exception.h>
#include <app/Uno.Collections.IEnumerator__Uno_Net_IPEndPoint.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Collections.IList__Uno_UX_Resource.h>
#include <app/Uno.Collections.IListExtensions.h>
#include <app/Uno.Collections.List__Fuse_Controls_Control.h>
#include <app/Uno.Collections.List__Outracks_Simulator_Task_Outracks_Simulato-ae93148c.h>
#include <app/Uno.Collections.List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Diagnostics.LogHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_AddEventHandler__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_BlobLiteral__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_BooleanLiteral__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_CallDynamicMethod__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_CallLambda__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_CallStaticMethod__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_EnumLiteral__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Expression__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Instantiate__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_IsType__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Lambda__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Literal__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_LogicalOr__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_MethodGroup__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_NoOperation__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_NumberLiteral__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_ReadProperty__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_ReadStaticField__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_ReadVariable__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_RemoveEventHandler__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Return__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_StringLiteral__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_WriteProperty__char.h>
#include <app/Uno.Func__Outracks_Simulator_ISimulatorClient.h>
#include <app/Uno.Func__Outracks_Simulator_Protocol_DebugLog__char.h>
#include <app/Uno.Func__Outracks_Simulator_Protocol_Error__char.h>
#include <app/Uno.Func__Outracks_Simulator_Protocol_Error__Outracks_Simulator_State.h>
#include <app/Uno.Func__Outracks_Simulator_Protocol_Execute__char.h>
#include <app/Uno.Func__Outracks_Simulator_Protocol_Execute__Outracks_Simulator_State.h>
#include <app/Uno.Func__Outracks_Simulator_Protocol_RegisterName__char.h>
#include <app/Uno.Func__Outracks_Simulator_Protocol_Reify__char.h>
#include <app/Uno.Func__Outracks_Simulator_Protocol_Reify__Outracks_Simulator_State.h>
#include <app/Uno.Func__Outracks_Simulator_Protocol_UnhandledException__char.h>
#include <app/Uno.Func__string__string.h>
#include <app/Uno.Func__Uno_Collections_IEnumerable_Uno_Exception___Outracks_-452d3b4a.h>
#include <app/Uno.Func__Uno_Collections_IEnumerable_Uno_Exception___Uno_Net_I-aef2d623.h>
#include <app/Uno.Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_BindVariable.h>
#include <app/Uno.Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Expression.h>
#include <app/Uno.Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Parameter.h>
#include <app/Uno.Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Func__Uno_IO_BinaryReader__Outracks_Simulator_Protocol_ExceptionInfo.h>
#include <app/Uno.Func__Uno_IO_BinaryReader__string.h>
#include <app/Uno.Func__Uno_Net_IPEndPoint__.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Int.h>
#include <app/Uno.IO.BinaryReader.h>
#include <app/Uno.IO.BinaryWriter.h>
#include <app/Uno.IO.Directory.h>
#include <app/Uno.IO.EndOfStreamException.h>
#include <app/Uno.IO.File.h>
#include <app/Uno.IO.FileMode.h>
#include <app/Uno.IO.SeekOrigin.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.IO.StreamReader.h>
#include <app/Uno.IO.StreamWriter.h>
#include <app/Uno.IO.TextReader.h>
#include <app/Uno.IO.TextWriter.h>
#include <app/Uno.IO.UserDirectory.h>
#include <app/Uno.Long.h>
#include <app/Uno.Net.EndPoint.h>
#include <app/Uno.Net.IPAddress.h>
#include <app/Uno.Net.IPEndPoint.h>
#include <app/Uno.Net.Sockets.AddressFamily.h>
#include <app/Uno.Net.Sockets.NetworkStream.h>
#include <app/Uno.Net.Sockets.ProtocolType.h>
#include <app/Uno.Net.Sockets.SelectMode.h>
#include <app/Uno.Net.Sockets.Socket.h>
#include <app/Uno.Net.Sockets.SocketShutdown.h>
#include <app/Uno.Net.Sockets.SocketType.h>
#include <app/Uno.NotImplementedException.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.Window.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Behavior.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Contr-f9495a05.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-a89fea52.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__string.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Uno_Net_IPEndPoint.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Uno_UX_Resource.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.Internal.WindowHelpers.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.StringBuilder.h>
#include <app/Uno.Threading.Thread.h>
#include <app/Uno.Type.h>
#include <app/Uno.UInt.h>
#include <app/Uno.UX.BundleFileSource.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.Resource.h>

namespace app {
namespace Outracks {
namespace Simulator {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AggregateConnectError__uType* AggregateConnectError__typeof()
{
    static ::uStaticStrong<AggregateConnectError__uType*> type;
    if (type != NULL) return type;

    type = (AggregateConnectError__uType*)::uAllocClassType(sizeof(AggregateConnectError__uType), "Outracks.Simulator.AggregateConnectError");

    type->SetFunctions(1,
        ::uNewFunction("ToIndentedLines", AggregateConnectError__ToIndentedLines, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Collections::IEnumerable__Uno_Exception__typeof()));

    ::uRegisterType(type);
    return type;
}

::uString* AggregateConnectError__ToIndentedLines(::uStatic* __this, ::uObject* innerExceptions)
{
    ::uString* s = ::uGetConstString("");

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Uno_Exception::GetEnumerator(::uPtr< ::uObject*>(innerExceptions)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Exception* e = ::app::Uno::Collections::IEnumerator__Uno_Exception::Current(::uPtr< ::uObject*>(enum_123));
        s = ::app::Uno::String__op_Addition_2(NULL, s, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("    "), ::uPtr< ::app::Uno::Exception*>(e)->Message()), ::uGetConstString("\n")));
    }

    return s;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Application__uType* Application__typeof()
{
    static ::uStaticStrong<Application__uType*> type;
    if (type != NULL) return type;

    type = (Application__uType*)::uAllocClassType(sizeof(Application__uType), "Outracks.Simulator.Application", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::App__typeof());
    type->__fp_OnUpdate = (void(*)(::app::Fuse::AppBase*))Application__OnUpdate;

    type->SetStrongRefs(
        "_state", offsetof(Application, _state));

    type->SetFields(1,
        ::uNewField("_state", NULL, offsetof(Application, _state), ::app::Outracks::Simulator::State__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_Reflection", Application__get_Reflection, 0, false, ::app::Outracks::Simulator::Runtime::IReflection__typeof()),
        ::uNewFunction(".ctor", Application__New_1, 0, true, Application__typeof(), ::uGetArrayType(::app::Uno::Net::IPEndPoint__typeof()), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("OnUnhandledException", Application__OnUnhandledException_1, 0, false, ::uObject__typeof(), ::app::Fuse::UnhandledExceptionArgs__typeof()),
        ::uNewFunctionVoid("set_Reflection", Application__set_Reflection, 0, false, ::app::Outracks::Simulator::Runtime::IReflection__typeof()),
        ::uNewFunctionVoid("SetState", Application__SetState, 0, false, ::app::Outracks::Simulator::State__typeof()));

    ::uRegisterType(type);
    return type;
}

void Application___ObjInit_3(Application* __this, ::uArray* proxyEndpoints, ::uString* project)
{
    __this->_state = (::app::Outracks::Simulator::State*)::app::Outracks::Simulator::Uninitialized__New_1(NULL);
    ::app::Fuse::App___ObjInit_2(__this);
    ::app::Outracks::Simulator::Context__Initialize(NULL, (::app::Fuse::App*)__this, proxyEndpoints, project);
    __this->add_UnhandledException(::uNewDelegateNonVirt(::app::Fuse::UnhandledExceptionHandler__typeof(), (const void*)Application__OnUnhandledException_1, __this));
    __this->RootNode((::app::Fuse::Node*)::app::Fuse::Controls::Panel__New_1(NULL));
    ::app::Outracks::Simulator::UserAppState__set_Default(NULL, ::app::Outracks::Simulator::UserAppState__Save(NULL, (::app::Fuse::App*)__this));
}

::uObject* Application__get_Reflection(Application* __this)
{
    return ::app::Outracks::Simulator::Context__get_Reflection(NULL);
}

Application* Application__New_1(::uStatic* __this, ::uArray* proxyEndpoints, ::uString* project)
{
    Application* inst = (Application*)::uAllocObject(sizeof(Application), Application__typeof());
    inst->_ObjInit_3(proxyEndpoints, project);
    return inst;
}

void Application__OnUnhandledException_1(Application* __this, ::uObject* sender, ::app::Fuse::UnhandledExceptionArgs* args)
{
    ::uPtr< ::app::Fuse::UnhandledExceptionArgs*>(args)->IsHandled(true);
    __this->SetState(::uPtr< ::app::Outracks::Simulator::State*>(__this->_state)->OnException(args->Exception()));
}

void Application__OnUpdate(Application* __this)
{
    __this->SetState(::uPtr< ::app::Outracks::Simulator::State*>(__this->_state)->OnUpdate());
    ::app::Fuse::AppBase__OnUpdate(__this);
}

void Application__set_Reflection(Application* __this, ::uObject* value)
{
    ::app::Outracks::Simulator::Context__set_Reflection(NULL, value);
}

void Application__SetState(Application* __this, ::app::Outracks::Simulator::State* nextState)
{
    if (nextState != __this->_state)
    {
        ::uPtr< ::app::Outracks::Simulator::State*>(__this->_state)->OnLeaveState();
        __this->_state = nextState;
        __this->SetState(::uPtr< ::app::Outracks::Simulator::State*>(__this->_state)->OnEnterState());
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayStream__uType* ArrayStream__typeof()
{
    static ::uStaticStrong<ArrayStream__uType*> type;
    if (type != NULL) return type;

    type = (ArrayStream__uType*)::uAllocClassType(sizeof(ArrayStream__uType), "Outracks.Simulator.ArrayStream", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::IO::Stream__typeof());
    type->__fp_Flush = (void(*)(::app::Uno::IO::Stream*))ArrayStream__Flush;
    type->__fp_get_CanRead = (bool(*)(::app::Uno::IO::Stream*))ArrayStream__get_CanRead;
    type->__fp_get_CanSeek = (bool(*)(::app::Uno::IO::Stream*))ArrayStream__get_CanSeek;
    type->__fp_get_CanTimeout = (bool(*)(::app::Uno::IO::Stream*))ArrayStream__get_CanTimeout;
    type->__fp_get_CanWrite = (bool(*)(::app::Uno::IO::Stream*))ArrayStream__get_CanWrite;
    type->__fp_get_Length = (::uLong(*)(::app::Uno::IO::Stream*))ArrayStream__get_Length;
    type->__fp_get_Position = (::uLong(*)(::app::Uno::IO::Stream*))ArrayStream__get_Position;
    type->__fp_Read = (int(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))ArrayStream__Read;
    type->__fp_Seek = (::uLong(*)(::app::Uno::IO::Stream*, ::uLong, int))ArrayStream__Seek;
    type->__fp_set_Position = (void(*)(::app::Uno::IO::Stream*, ::uLong))ArrayStream__set_Position;
    type->__fp_SetLength = (void(*)(::app::Uno::IO::Stream*, ::uLong))ArrayStream__SetLength;
    type->__fp_Write = (void(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))ArrayStream__Write;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayStream__uType, __interface_0));

    type->SetStrongRefs(
        "_buffer", offsetof(ArrayStream, _buffer));

    type->SetFields(3,
        ::uNewField("_buffer", NULL, offsetof(ArrayStream, _buffer), ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewField("_length", NULL, offsetof(ArrayStream, _length), ::app::Uno::Long__typeof()),
        ::uNewField("_nextIncrease", NULL, offsetof(ArrayStream, _nextIncrease), ::app::Uno::Int__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("EnsureCapacity", ArrayStream__EnsureCapacity, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Capacity", ArrayStream__get_Capacity, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetBuffer", ArrayStream__GetBuffer, 0, false, ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunction(".ctor", ArrayStream__New_1, 0, true, ArrayStream__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunctionVoid("ResizeTo", ArrayStream__ResizeTo, 0, false, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void ArrayStream___ObjInit_1(ArrayStream* __this, ::uArray* buffer)
{
    __this->_buffer = ::uNewArray(::app::Uno::Byte__typeof(), 0);
    __this->_nextIncrease = 256;
    ::app::Uno::IO::Stream___ObjInit(__this);
    __this->_buffer = buffer;
    __this->_length = (::uLong)::uPtr< ::uArray*>(__this->_buffer)->Length();
}

void ArrayStream__EnsureCapacity(ArrayStream* __this, int byteCount)
{
    if ((__this->Position() + (::uLong)byteCount) <= (::uLong)__this->Capacity())
    {
        return;
    }
    else if ((__this->Position() + (::uLong)byteCount) <= (::uLong)(__this->Capacity() + __this->_nextIncrease))
    {
        __this->ResizeTo(__this->Capacity() + __this->_nextIncrease);
    }
    else
    {
        __this->ResizeTo((int)__this->Position() + byteCount);
    }
}

void ArrayStream__Flush(ArrayStream* __this)
{
}

bool ArrayStream__get_CanRead(ArrayStream* __this)
{
    return true;
}

bool ArrayStream__get_CanSeek(ArrayStream* __this)
{
    return true;
}

bool ArrayStream__get_CanTimeout(ArrayStream* __this)
{
    return false;
}

bool ArrayStream__get_CanWrite(ArrayStream* __this)
{
    return true;
}

int ArrayStream__get_Capacity(ArrayStream* __this)
{
    return ::uPtr< ::uArray*>(__this->_buffer)->Length();
}

::uLong ArrayStream__get_Length(ArrayStream* __this)
{
    return __this->_length;
}

::uLong ArrayStream__get_Position(ArrayStream* __this)
{
    return __this->_Position;
}

::uArray* ArrayStream__GetBuffer(ArrayStream* __this)
{
    return __this->_buffer;
}

ArrayStream* ArrayStream__New_1(::uStatic* __this, ::uArray* buffer)
{
    ArrayStream* inst = (ArrayStream*)::uAllocObject(sizeof(ArrayStream), ArrayStream__typeof());
    inst->_ObjInit_1(buffer);
    return inst;
}

int ArrayStream__Read(ArrayStream* __this, ::uArray* dst, int byteOffset, int byteCount)
{
    int i = 0;

    for (; (i < byteCount) && ((__this->Position() + (::uLong)i) < __this->Length()); i++)
    {
        ::uPtr< ::uArray*>(dst)->Item< ::uByte>(i + byteOffset) = ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>((int)__this->Position() + i);
    }

    __this->Position(__this->Position() + (::uLong)i);
    return i;
}

void ArrayStream__ResizeTo(ArrayStream* __this, int newSize)
{
    ::uArray* newBuffer = ::uNewArray(::app::Uno::Byte__typeof(), newSize);
    ::app::Uno::Array__Copy__byte(NULL, __this->_buffer, newBuffer, ::uPtr< ::uArray*>(__this->_buffer)->Length());
    __this->_buffer = newBuffer;
    __this->_nextIncrease = __this->Capacity();
}

::uLong ArrayStream__Seek(ArrayStream* __this, ::uLong byteOffset, int origin)
{
    switch (origin)
    {
        case 0:
        {
            __this->Position(byteOffset);
            break;
        }
        case 2:
        {
            __this->Position(__this->Length() + byteOffset);
            break;
        }
        default:
        {
            __this->Position(__this->Position() + byteOffset);
            break;
        }
    }

    return __this->Position();
}

void ArrayStream__set_Position(ArrayStream* __this, ::uLong value)
{
    __this->_Position = value;
}

void ArrayStream__SetLength(ArrayStream* __this, ::uLong value)
{
    U_THROW(::app::Uno::NotImplementedException__New_3(NULL));
}

void ArrayStream__Write(ArrayStream* __this, ::uArray* src, int byteOffset, int byteCount)
{
    __this->EnsureCapacity(byteCount);

    for (int i = byteOffset; i < (byteOffset + byteCount); i++)
    {
        ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>((int)__this->Position()) = ::uPtr< ::uArray*>(src)->Item< ::uByte>(i);
        __this->Position(__this->Position() + 1ll);
    }

    if (__this->Position() > __this->Length())
    {
        __this->_length = __this->Position();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BytecodeCache__uType* BytecodeCache__typeof()
{
    static ::uStaticStrong<BytecodeCache__uType*> type;
    if (type != NULL) return type;

    type = (BytecodeCache__uType*)::uAllocClassType(sizeof(BytecodeCache__uType), "Outracks.Simulator.BytecodeCache");

    type->SetFunctions(8,
        ::uNewFunction("get_CacheFileName", BytecodeCache__get_CacheFileName, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunction("get_CachePath", BytecodeCache__get_CachePath, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunction("get_FuseDataDirectory", BytecodeCache__get_FuseDataDirectory, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunction("get_ProjectHash", BytecodeCache__get_ProjectHash, 0, true, ::app::Uno::UInt__typeof()),
        ::uNewFunction("Load", BytecodeCache__Load, 0, true, ::app::Outracks::Simulator::Protocol::Reify__typeof()),
        ::uNewFunctionVoid("Save", BytecodeCache__Save, 0, true, ::app::Outracks::Simulator::Protocol::Reify__typeof()),
        ::uNewFunction("TryLoad", BytecodeCache__TryLoad, 0, true, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Protocol_Reify__typeof()),
        ::uNewFunctionVoid("TrySave", BytecodeCache__TrySave, 0, true, ::app::Outracks::Simulator::Protocol::Reify__typeof()));

    ::uRegisterType(type);
    return type;
}

::uString* BytecodeCache__get_CacheFileName(::uStatic* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition(NULL, ::uBox< ::uUInt>(::app::Uno::UInt__typeof(), BytecodeCache__get_ProjectHash(NULL)), ::uGetConstString(".")), ::app::Outracks::Simulator::Protocol::Reify__get_BinaryFormat(NULL));
}

::uString* BytecodeCache__get_CachePath(::uStatic* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, BytecodeCache__get_FuseDataDirectory(NULL), ::uGetConstString("/")), BytecodeCache__get_CacheFileName(NULL));
}

::uString* BytecodeCache__get_FuseDataDirectory(::uStatic* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::IO::Directory__GetUserDirectory(NULL, 1), ::uGetConstString("/")), ::uGetConstString("Fusetools")), ::uGetConstString("/")), ::uGetConstString("Fuse"));
}

::uUInt BytecodeCache__get_ProjectHash(::uStatic* __this)
{
    return (::uUInt)(::uPtr< ::uString*>(::app::Outracks::Simulator::Context__get_Project(NULL))->GetHashCode() ^ ::uPtr< ::uString*>(::app::Outracks::Simulator::Context__get_Project(NULL))->Length());
}

::app::Outracks::Simulator::Protocol::Reify* BytecodeCache__Load(::uStatic* __this)
{
    ::app::Uno::IO::Stream* stream = ::app::Uno::IO::File__OpenRead(NULL, BytecodeCache__get_CachePath(NULL));
    {
        ::app::Uno::IO::BinaryReader* reader = ::app::Uno::IO::BinaryReader__New_1(NULL, stream);

        try
        {
            {
                return ::app::Outracks::Simulator::Protocol::Reify__Read_1(NULL, reader);
            }
        }
        catch (const ::uThrowable& __t)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>((::uObject*)reader));
            throw __t;
        }
        // finally
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>((::uObject*)reader));
        }
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("The impossible has happened")));
}

void BytecodeCache__Save(::uStatic* __this, ::app::Outracks::Simulator::Protocol::Reify* reify)
{
    ::app::Uno::IO::Directory__CreateDirectory(NULL, BytecodeCache__get_FuseDataDirectory(NULL));
    ::app::Uno::IO::Stream* stream = ::app::Uno::IO::File__Open(NULL, BytecodeCache__get_CachePath(NULL), 4);
    {
        ::app::Uno::IO::BinaryWriter* writer = ::app::Uno::IO::BinaryWriter__New_1(NULL, stream);

        try
        {
            {
                ::app::Outracks::Simulator::Protocol::Reify__Write_1(NULL, reify, writer);
            }
        }
        catch (const ::uThrowable& __t)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>((::uObject*)writer));
            throw __t;
        }
        // finally
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>((::uObject*)writer));
        }
    }
}

::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Protocol_Reify BytecodeCache__TryLoad(::uStatic* __this)
{
    try
    {
        return ::app::Outracks::Simulator::Bytecode::Optional__Some__Outracks_Simulator_Protocol_Reify(NULL, BytecodeCache__Load(NULL));
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* _ = (::app::Uno::Exception*)__t.Exception;
            return ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Protocol_Reify__op_Implicit(NULL, ::app::Outracks::Simulator::Bytecode::Optional__None(NULL));
        }
        else
        {
            throw __t;
        }
    }
}

void BytecodeCache__TrySave(::uStatic* __this, ::app::Outracks::Simulator::Protocol::Reify* reify)
{
    try
    {
        BytecodeCache__Save(NULL, reify);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* _ = (::app::Uno::Exception*)__t.Exception;
        }
        else
        {
            throw __t;
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ChangeIp__uType* ChangeIp__typeof()
{
    static ::uStaticStrong<ChangeIp__uType*> type;
    if (type != NULL) return type;

    type = (ChangeIp__uType*)::uAllocClassType(sizeof(ChangeIp__uType), "Outracks.Simulator.ChangeIp", false, 0, 0, 0);

    type->SetBaseType(::app::Outracks::Simulator::ShowingPrompt__typeof());
    type->__fp_OnCancel = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::ShowingPrompt*))ChangeIp__OnCancel;
    type->__fp_OnOk = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::ShowingPrompt*, ::uString*))ChangeIp__OnOk;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ChangeIp__New_1, 0, true, ChangeIp__typeof()));

    ::uRegisterType(type);
    return type;
}

void ChangeIp___ObjInit_2(ChangeIp* __this)
{
    ::app::Outracks::Simulator::ShowingPrompt___ObjInit_1(__this, ::uGetConstString("Connect to IP"), ::uGetConstString("E.g. '192.168.1.1'"));
}

ChangeIp* ChangeIp__New_1(::uStatic* __this)
{
    ChangeIp* inst = (ChangeIp*)::uAllocObject(sizeof(ChangeIp), ChangeIp__typeof());
    inst->_ObjInit_2();
    return inst;
}

::app::Outracks::Simulator::State* ChangeIp__OnCancel(ChangeIp* __this)
{
    return (::app::Outracks::Simulator::State*)::app::Outracks::Simulator::ConnectingToProxy__New_1(NULL);
}

::app::Outracks::Simulator::State* ChangeIp__OnOk(ChangeIp* __this, ::uString* input)
{
    ::uArray* array_123;
    array_123 = ::uNewArray(::app::Uno::Net::IPEndPoint__typeof(), 1);
    ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Uno::Net::IPEndPoint*>(0) = ::app::Uno::Net::IPEndPoint__New_1(NULL, ::app::Uno::Net::IPAddress__Parse(NULL, input), ::uPtr< ::app::Uno::Net::IPEndPoint*>(::uPtr< ::uArray*>(::app::Outracks::Simulator::Context__get_ProxyEndpoints(NULL))->Item< ::app::Uno::Net::IPEndPoint*>(0))->Port());
    ::uArray* endpoints = array_123;
    return (::app::Outracks::Simulator::State*)::app::Outracks::Simulator::ConnectingToProxy__New_2(NULL, endpoints);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Closure__uType* Closure__typeof()
{
    static ::uStaticStrong<Closure__uType*> type;
    if (type != NULL) return type;

    type = (Closure__uType*)::uAllocClassType(sizeof(Closure__uType), "Outracks.Simulator.Closure");

    type->SetFunctions(59,
        ::uNewFunction("Apply", Closure__Apply__Outracks_Simulator_DialogButton, 0, true, ::app::Uno::Action__typeof(), ::app::Uno::Action__Outracks_Simulator_DialogButton__typeof(), ::app::Outracks::Simulator::DialogButton__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_AddEventHandler__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_BlobLiteral__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_BooleanLiteral__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_CallDynamicMethod__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_CallLambda__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_CallStaticMethod__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_EnumLiteral__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_Expression__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_Instantiate__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_IsType__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_Lambda__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_Literal__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_LogicalOr__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_MethodGroup__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_NoOperation__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_NumberLiteral__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_ReadProperty__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_ReadStaticField__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_ReadVariable__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_RemoveEventHandler__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_Return__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_StringLiteral__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Bytecode_WriteProperty__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Protocol_DebugLog__typeof(), ::app::Uno::Action__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Protocol_Error__typeof(), ::app::Uno::Action__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Protocol_Execute__typeof(), ::app::Uno::Action__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Protocol_RegisterName__typeof(), ::app::Uno::Action__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Protocol_Reify__typeof(), ::app::Uno::Action__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("ApplySecond", Closure__ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter, 0, true, ::app::Uno::Action__Outracks_Simulator_Protocol_UnhandledException__typeof(), ::app::Uno::Action__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_AddEventHandler__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_AddEventHandler__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_BlobLiteral__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_BlobLiteral__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_BooleanLiteral__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_BooleanLiteral__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_CallDynamicMethod__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_CallDynamicMethod__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_CallLambda__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_CallLambda__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_CallStaticMethod__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_CallStaticMethod__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_EnumLiteral__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_EnumLiteral__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_Expression__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_Expression__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_Instantiate__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_Instantiate__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_IsType__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_IsType__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_Lambda__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_Lambda__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_Literal__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_Literal__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_LogicalOr__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_LogicalOr__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_MethodGroup__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_MethodGroup__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_NoOperation__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_NoOperation__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_NumberLiteral__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_NumberLiteral__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_ReadProperty__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_ReadProperty__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_ReadStaticField__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_ReadStaticField__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_ReadVariable__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_ReadVariable__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_RemoveEventHandler__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_RemoveEventHandler__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_Return__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_Return__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_StringLiteral__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_StringLiteral__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Bytecode_WriteProperty__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Bytecode_WriteProperty__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Protocol_DebugLog__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Protocol_DebugLog__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Protocol_Error__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Protocol_Error__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Protocol_Execute__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Protocol_Execute__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Protocol_RegisterName__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Protocol_RegisterName__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Protocol_Reify__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Protocol_Reify__char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Return", Closure__Return__Outracks_Simulator_Protocol_UnhandledException__char, 0, true, ::app::Uno::Func__Outracks_Simulator_Protocol_UnhandledException__char__typeof(), ::app::Uno::Char__typeof()));

    ::uRegisterType(type);
    return type;
}

::uDelegate* Closure__Apply__Outracks_Simulator_DialogButton(::uStatic* __this, ::uDelegate* action, ::app::Outracks::Simulator::DialogButton* arg)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Outracks::Simulator::Apply__Outracks_Simulator_DialogButton__Execute, ::app::Outracks::Simulator::Apply__Outracks_Simulator_DialogButton__New_1(NULL, action, arg));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_AddEventHandler__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_BlobLiteral__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_BooleanLiteral__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_CallDynamicMethod__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_CallLambda__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_CallStaticMethod__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_EnumLiteral__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_Expression__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_Instantiate__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_IsType__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_Lambda__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_Literal__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_LogicalOr__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_MethodGroup__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_NoOperation__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_NumberLiteral__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_ReadProperty__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_ReadStaticField__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_ReadVariable__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_RemoveEventHandler__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_Return__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_StringLiteral__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_WriteProperty__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Protocol_DebugLog__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Protocol_Error__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Protocol_Execute__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Protocol_RegisterName__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Protocol_Reify__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    return ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Protocol_UnhandledException__typeof(), (const void*)::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter__Execute, ::app::Outracks::Simulator::ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter__New_1(NULL, action, arg2));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_AddEventHandler__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_AddEventHandler__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_AddEventHandler__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_AddEventHandler__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_BlobLiteral__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_BlobLiteral__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_BlobLiteral__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_BlobLiteral__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_BooleanLiteral__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_BooleanLiteral__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_BooleanLiteral__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_BooleanLiteral__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_CallDynamicMethod__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_CallDynamicMethod__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_CallDynamicMethod__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_CallDynamicMethod__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_CallLambda__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_CallLambda__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_CallLambda__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_CallLambda__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_CallStaticMethod__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_CallStaticMethod__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_CallStaticMethod__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_CallStaticMethod__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_EnumLiteral__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_EnumLiteral__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_EnumLiteral__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_EnumLiteral__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_Expression__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_Expression__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_Expression__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_Expression__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_Instantiate__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_Instantiate__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_Instantiate__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_Instantiate__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_IsType__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_IsType__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_IsType__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_IsType__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_Lambda__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_Lambda__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_Lambda__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_Lambda__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_Literal__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_Literal__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_Literal__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_Literal__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_LogicalOr__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_LogicalOr__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_LogicalOr__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_LogicalOr__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_MethodGroup__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_MethodGroup__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_MethodGroup__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_MethodGroup__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_NoOperation__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_NoOperation__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_NoOperation__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_NoOperation__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_NumberLiteral__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_NumberLiteral__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_NumberLiteral__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_NumberLiteral__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_ReadProperty__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_ReadProperty__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_ReadProperty__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_ReadProperty__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_ReadStaticField__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_ReadStaticField__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_ReadStaticField__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_ReadStaticField__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_ReadVariable__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_ReadVariable__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_ReadVariable__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_ReadVariable__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_RemoveEventHandler__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_RemoveEventHandler__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_RemoveEventHandler__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_RemoveEventHandler__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_Return__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_Return__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_Return__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_Return__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_StringLiteral__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_StringLiteral__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_StringLiteral__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_StringLiteral__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Bytecode_WriteProperty__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_WriteProperty__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_WriteProperty__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Bytecode_WriteProperty__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Protocol_DebugLog__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Protocol_DebugLog__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Protocol_DebugLog__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Protocol_DebugLog__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Protocol_Error__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Protocol_Error__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Protocol_Error__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Protocol_Error__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Protocol_Execute__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Protocol_Execute__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Protocol_Execute__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Protocol_Execute__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Protocol_RegisterName__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Protocol_RegisterName__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Protocol_RegisterName__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Protocol_RegisterName__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Protocol_Reify__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Protocol_Reify__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Protocol_Reify__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Protocol_Reify__char__New_1(NULL, result));
}

::uDelegate* Closure__Return__Outracks_Simulator_Protocol_UnhandledException__char(::uStatic* __this, ::uChar result)
{
    return ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Protocol_UnhandledException__char__typeof(), (const void*)::app::Outracks::Simulator::Forget__Outracks_Simulator_Protocol_UnhandledException__char__Execute, ::app::Outracks::Simulator::Forget__Outracks_Simulator_Protocol_UnhandledException__char__New_1(NULL, result));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Connected__uType* Connected__typeof()
{
    static ::uStaticStrong<Connected__uType*> type;
    if (type != NULL) return type;

    type = (Connected__uType*)::uAllocClassType(sizeof(Connected__uType), "Outracks.Simulator.Connected", false, 0, 1, 0);

    type->SetBaseType(::app::Outracks::Simulator::State__typeof());
    type->__fp_OnEnterState = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::State*))Connected__OnEnterState;
    type->__fp_OnUpdate = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::State*))Connected__OnUpdate;

    type->SetStrongRefs(
        "Client", offsetof(Connected, Client));

    type->SetFields(1,
        ::uNewField("Client", NULL, offsetof(Connected, Client), ::app::Outracks::Simulator::ISimulatorClient__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("OnConnectionError", Connected__OnConnectionError, 0, false, ::app::Outracks::Simulator::State__typeof(), ::app::Outracks::Simulator::Protocol::Error__typeof()),
        ::uNewFunction("OnExecute", Connected__OnExecute, 0, false, ::app::Outracks::Simulator::State__typeof(), ::app::Outracks::Simulator::Protocol::Execute__typeof()),
        ::uNewFunction("OnReify", Connected__OnReify, 0, false, ::app::Outracks::Simulator::State__typeof(), ::app::Outracks::Simulator::Protocol::Reify__typeof()));

    ::uRegisterType(type);
    return type;
}

void Connected___ObjInit_1(Connected* __this, ::uObject* client)
{
    ::app::Outracks::Simulator::State___ObjInit(__this);
    __this->Client = client;
}

::app::Outracks::Simulator::State* Connected__OnConnectionError(Connected* __this, ::app::Outracks::Simulator::Protocol::Error* error)
{
    return (::app::Outracks::Simulator::State*)::app::Outracks::Simulator::ConnectionLost__New_3(NULL, ::uPtr< ::app::Outracks::Simulator::Protocol::Error*>(error)->Exception);
}

::app::Outracks::Simulator::State* Connected__OnEnterState(Connected* __this)
{
    ::uPtr< ::app::Outracks::Simulator::UserAppState*>(::app::Outracks::Simulator::UserAppState__get_Default(NULL))->ApplyTo(::app::Outracks::Simulator::Context__get_App(NULL));
    return (::app::Outracks::Simulator::State*)__this;
}

::app::Outracks::Simulator::State* Connected__OnExecute(Connected* __this, ::app::Outracks::Simulator::Protocol::Execute* args)
{
    ::app::Outracks::Simulator::Runtime::VirtualMachine__Execute_1(NULL, ::uPtr< ::app::Outracks::Simulator::Protocol::Execute*>(args)->Function, ::uNewArray(::uObject__typeof(), 0));
    return (::app::Outracks::Simulator::State*)__this;
}

::app::Outracks::Simulator::State* Connected__OnReify(Connected* __this, ::app::Outracks::Simulator::Protocol::Reify* reify)
{
    return (::app::Outracks::Simulator::State*)::app::Outracks::Simulator::Reifying__New_1(NULL, __this->Client, reify);
}

::app::Outracks::Simulator::State* Connected__OnUpdate(Connected* __this)
{
    ::app::Outracks::Simulator::Protocol::MessageToClient* message;

    while (::uPtr< ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient*>(::app::Outracks::Simulator::ISimulatorClient::IncommingMessages(::uPtr< ::uObject*>(__this->Client)))->TryDequeue(&message))
    {
        ::app::Outracks::Simulator::State* newState = ::uPtr< ::app::Outracks::Simulator::Protocol::MessageToClient*>(message)->Match__Outracks_Simulator_State(::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Protocol_Reify__Outracks_Simulator_State__typeof(), (const void*)Connected__OnReify, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Protocol_Execute__Outracks_Simulator_State__typeof(), (const void*)Connected__OnExecute, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Protocol_Error__Outracks_Simulator_State__typeof(), (const void*)Connected__OnConnectionError, __this));

        if (newState != __this)
        {
            return newState;
        }
    }

    return (::app::Outracks::Simulator::State*)__this;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Connecting__uType* Connecting__typeof()
{
    static ::uStaticStrong<Connecting__uType*> type;
    if (type != NULL) return type;

    type = (Connecting__uType*)::uAllocClassType(sizeof(Connecting__uType), "Outracks.Simulator.Connecting", false, 0, 0, 0);

    type->SetBaseType(::app::Outracks::Simulator::State__typeof());
    type->__fp_OnException = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::State*, ::app::Uno::Exception*))Connecting__OnException;

    ::uRegisterType(type);
    return type;
}

void Connecting___ObjInit_1(Connecting* __this)
{
    ::app::Outracks::Simulator::State___ObjInit(__this);
}

::app::Outracks::Simulator::State* Connecting__OnException(Connecting* __this, ::app::Uno::Exception* e)
{
    return (::app::Outracks::Simulator::State*)::app::Outracks::Simulator::FailedToConnect__New_2(NULL, e);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ConnectingToHost__uType* ConnectingToHost__typeof()
{
    static ::uStaticStrong<ConnectingToHost__uType*> type;
    if (type != NULL) return type;

    type = (ConnectingToHost__uType*)::uAllocClassType(sizeof(ConnectingToHost__uType), "Outracks.Simulator.ConnectingToHost", false, 0, 2, 0);

    type->SetBaseType(::app::Outracks::Simulator::Connecting__typeof());
    type->__fp_OnEnterState = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::State*))ConnectingToHost__OnEnterState;
    type->__fp_OnUpdate = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::State*))ConnectingToHost__OnUpdate;

    type->SetStrongRefs(
        "_connecting", offsetof(ConnectingToHost, _connecting),
        "_simulatorEndpoints", offsetof(ConnectingToHost, _simulatorEndpoints));

    type->SetFields(2,
        ::uNewField("_connecting", NULL, offsetof(ConnectingToHost, _connecting), ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient__typeof()),
        ::uNewField("_simulatorEndpoints", NULL, offsetof(ConnectingToHost, _simulatorEndpoints), ::uGetArrayType(::app::Uno::Net::IPEndPoint__typeof())));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ConnectingToHost__New_1, 0, true, ConnectingToHost__typeof(), ::app::Uno::Collections::IEnumerable__Uno_Net_IPEndPoint__typeof()));

    ::uRegisterType(type);
    return type;
}

void ConnectingToHost___ObjInit_2(ConnectingToHost* __this, ::uObject* simulatorEndpoints)
{
    ::app::Outracks::Simulator::Connecting___ObjInit_1(__this);
    __this->_simulatorEndpoints = ::app::Uno::Collections::EnumerableExtensions__ToArray__Uno_Net_IPEndPoint(NULL, simulatorEndpoints);
}

ConnectingToHost* ConnectingToHost__New_1(::uStatic* __this, ::uObject* simulatorEndpoints)
{
    ConnectingToHost* inst = (ConnectingToHost*)::uAllocObject(sizeof(ConnectingToHost), ConnectingToHost__typeof());
    inst->_ObjInit_2(simulatorEndpoints);
    return inst;
}

::app::Outracks::Simulator::State* ConnectingToHost__OnEnterState(ConnectingToHost* __this)
{
    __this->_connecting = ::app::Outracks::Simulator::SimulatorClient__Connect(NULL, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Uno_Net_IPEndPoint__New_1(NULL, __this->_simulatorEndpoints));
    ::app::Outracks::Simulator::LoadingScreen__Show(NULL, ::app::Outracks::Simulator::Context__get_App(NULL), ::uGetConstString("Connecting"), ::uGetConstString("Connecting to host..."));
    return (::app::Outracks::Simulator::State*)__this;
}

::app::Outracks::Simulator::State* ConnectingToHost__OnUpdate(ConnectingToHost* __this)
{
    if (::uPtr< ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*>(__this->_connecting)->IsCompleted())
    {
        return (::app::Outracks::Simulator::State*)::app::Outracks::Simulator::Idle__New_1(NULL, ::uPtr< ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*>(__this->_connecting)->Result());
    }

    return (::app::Outracks::Simulator::State*)__this;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ConnectingToProxy__uType* ConnectingToProxy__typeof()
{
    static ::uStaticStrong<ConnectingToProxy__uType*> type;
    if (type != NULL) return type;

    type = (ConnectingToProxy__uType*)::uAllocClassType(sizeof(ConnectingToProxy__uType), "Outracks.Simulator.ConnectingToProxy", false, 0, 2, 0);

    type->SetBaseType(::app::Outracks::Simulator::Connecting__typeof());
    type->__fp_OnEnterState = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::State*))ConnectingToProxy__OnEnterState;
    type->__fp_OnUpdate = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::State*))ConnectingToProxy__OnUpdate;

    type->SetStrongRefs(
        "_connecting", offsetof(ConnectingToProxy, _connecting),
        "_proxyEndpoints", offsetof(ConnectingToProxy, _proxyEndpoints));

    type->SetFields(2,
        ::uNewField("_connecting", NULL, offsetof(ConnectingToProxy, _connecting), ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint____typeof()),
        ::uNewField("_proxyEndpoints", NULL, offsetof(ConnectingToProxy, _proxyEndpoints), ::uGetArrayType(::app::Uno::Net::IPEndPoint__typeof())));

    type->SetFunctions(2,
        ::uNewFunction(".ctor", ConnectingToProxy__New_1, 0, true, ConnectingToProxy__typeof()),
        ::uNewFunction(".ctor", ConnectingToProxy__New_2, 0, true, ConnectingToProxy__typeof(), ::uGetArrayType(::app::Uno::Net::IPEndPoint__typeof())));

    ::uRegisterType(type);
    return type;
}

void ConnectingToProxy___ObjInit_2(ConnectingToProxy* __this)
{
    ::app::Outracks::Simulator::Connecting___ObjInit_1(__this);
    __this->_proxyEndpoints = ::app::Outracks::Simulator::Context__get_ProxyEndpoints(NULL);
}

void ConnectingToProxy___ObjInit_3(ConnectingToProxy* __this, ::uArray* proxyEndpoints)
{
    ::app::Outracks::Simulator::Connecting___ObjInit_1(__this);
    __this->_proxyEndpoints = proxyEndpoints;
}

ConnectingToProxy* ConnectingToProxy__New_1(::uStatic* __this)
{
    ConnectingToProxy* inst = (ConnectingToProxy*)::uAllocObject(sizeof(ConnectingToProxy), ConnectingToProxy__typeof());
    inst->_ObjInit_2();
    return inst;
}

ConnectingToProxy* ConnectingToProxy__New_2(::uStatic* __this, ::uArray* proxyEndpoints)
{
    ConnectingToProxy* inst = (ConnectingToProxy*)::uAllocObject(sizeof(ConnectingToProxy), ConnectingToProxy__typeof());
    inst->_ObjInit_3(proxyEndpoints);
    return inst;
}

::app::Outracks::Simulator::State* ConnectingToProxy__OnEnterState(ConnectingToProxy* __this)
{
    __this->_connecting = ::app::Outracks::Simulator::ProxyClient__GetSimulatorEndpoint(NULL, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Uno_Net_IPEndPoint__New_1(NULL, __this->_proxyEndpoints), ::app::Outracks::Simulator::Context__get_Project(NULL));
    ::app::Outracks::Simulator::LoadingScreen__Show(NULL, ::app::Outracks::Simulator::Context__get_App(NULL), ::uGetConstString("Connecting"), ::uGetConstString("Connecting to proxy..."));
    return (::app::Outracks::Simulator::State*)__this;
}

::app::Outracks::Simulator::State* ConnectingToProxy__OnUpdate(ConnectingToProxy* __this)
{
    if (::uPtr< ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__*>(__this->_connecting)->IsCompleted())
    {
        return (::app::Outracks::Simulator::State*)::app::Outracks::Simulator::ConnectingToHost__New_1(NULL, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Uno_Net_IPEndPoint__New_1(NULL, ::uPtr< ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__*>(__this->_connecting)->Result()));
    }

    return (::app::Outracks::Simulator::State*)__this;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ConnectionLost__uType* ConnectionLost__typeof()
{
    static ::uStaticStrong<ConnectionLost__uType*> type;
    if (type != NULL) return type;

    type = (ConnectionLost__uType*)::uAllocClassType(sizeof(ConnectionLost__uType), "Outracks.Simulator.ConnectionLost", false, 0, 0, 0);

    type->SetBaseType(::app::Outracks::Simulator::ShowingModalDialog__typeof());

    type->SetFunctions(2,
        ::uNewFunction(".ctor", ConnectionLost__New_2, 0, true, ConnectionLost__typeof(), ::app::Uno::Exception__typeof()),
        ::uNewFunction(".ctor", ConnectionLost__New_3, 0, true, ConnectionLost__typeof(), ::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof()));

    ::uRegisterType(type);
    return type;
}

void ConnectionLost___ObjInit_2(ConnectionLost* __this, ::app::Uno::Exception* exception)
{
    __this->_ObjInit_3(::app::Outracks::Simulator::Protocol::ExceptionInfo__Capture(NULL, exception));
}

void ConnectionLost___ObjInit_3(ConnectionLost* __this, ::app::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    ::uArray* array_123;
    ::app::Outracks::Simulator::ShowingModalDialog___ObjInit_1(__this, ::uGetConstString("Connection lost"), ::uPtr< ::app::Outracks::Simulator::Protocol::ExceptionInfo*>(exception)->Message, ::uGetConstString(""), ::app::Outracks::Simulator::GoOffline__PrependOption(NULL, (array_123 = ::uNewArray(::app::Outracks::Simulator::DialogButton__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Outracks::Simulator::DialogButton*>(0) = ::app::Outracks::Simulator::DialogButton__New_1(NULL, ::uGetConstString("Change IP"), (::app::Outracks::Simulator::State*)::app::Outracks::Simulator::ChangeIp__New_1(NULL)), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Outracks::Simulator::DialogButton*>(1) = ::app::Outracks::Simulator::DialogButton__New_1(NULL, ::uGetConstString("Reconnect"), (::app::Outracks::Simulator::State*)::app::Outracks::Simulator::ConnectingToProxy__New_1(NULL)), array_123)));
}

ConnectionLost* ConnectionLost__New_2(::uStatic* __this, ::app::Uno::Exception* exception)
{
    ConnectionLost* inst = (ConnectionLost*)::uAllocObject(sizeof(ConnectionLost), ConnectionLost__typeof());
    inst->_ObjInit_2(exception);
    return inst;
}

ConnectionLost* ConnectionLost__New_3(::uStatic* __this, ::app::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    ConnectionLost* inst = (ConnectionLost*)::uAllocObject(sizeof(ConnectionLost), ConnectionLost__typeof());
    inst->_ObjInit_3(exception);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ConnectToSimulator__uType* ConnectToSimulator__typeof()
{
    static ::uStaticStrong<ConnectToSimulator__uType*> type;
    if (type != NULL) return type;

    type = (ConnectToSimulator__uType*)::uAllocClassType(sizeof(ConnectToSimulator__uType), "Outracks.Simulator.ConnectToSimulator", false, 0, 1, 0);

    type->SetStrongRefs(
        "_endpoint", offsetof(ConnectToSimulator, _endpoint));

    type->SetFields(1,
        ::uNewField("_endpoint", NULL, offsetof(ConnectToSimulator, _endpoint), ::app::Uno::Net::IPEndPoint__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("Execute", ConnectToSimulator__Execute, 0, false, ::app::Outracks::Simulator::ISimulatorClient__typeof()),
        ::uNewFunction(".ctor", ConnectToSimulator__New_1, 0, true, ConnectToSimulator__typeof(), ::app::Uno::Net::IPEndPoint__typeof()));

    ::uRegisterType(type);
    return type;
}

void ConnectToSimulator___ObjInit(ConnectToSimulator* __this, ::app::Uno::Net::IPEndPoint* endpoint)
{
    __this->_endpoint = endpoint;
}

::uObject* ConnectToSimulator__Execute(ConnectToSimulator* __this)
{
    try
    {
        ::app::Uno::Net::Sockets::Socket* socket = ::app::Uno::Net::Sockets::Socket__Create(NULL, 2, 1, 6);
        ::uPtr< ::app::Uno::Net::Sockets::Socket*>(socket)->Connect((::app::Uno::Net::EndPoint*)__this->_endpoint);
        return (::uObject*)::app::Outracks::Simulator::SimulatorClient__New_1(NULL, socket);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            U_THROW(::app::Outracks::Simulator::FailedToConnectToEndPoint__New_3(NULL, __this->_endpoint, e));
        }
        else
        {
            throw __t;
        }
    }
}

ConnectToSimulator* ConnectToSimulator__New_1(::uStatic* __this, ::app::Uno::Net::IPEndPoint* endpoint)
{
    ConnectToSimulator* inst = (ConnectToSimulator*)::uAllocObject(sizeof(ConnectToSimulator), ConnectToSimulator__typeof());
    inst->_ObjInit(endpoint);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::App*> Context___App;
::uStaticStrong< ::uString*> Context___Project;
::uStaticStrong< ::uArray*> Context___ProxyEndpoints;
::uStaticStrong< ::uObject*> Context___Reflection;

Context__uType* Context__typeof()
{
    static ::uStaticStrong<Context__uType*> type;
    if (type != NULL) return type;

    type = (Context__uType*)::uAllocClassType(sizeof(Context__uType), "Outracks.Simulator.Context");

    type->SetFunctions(9,
        ::uNewFunction("get_App", Context__get_App, 0, true, ::app::Fuse::App__typeof()),
        ::uNewFunction("get_Project", Context__get_Project, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunction("get_ProxyEndpoints", Context__get_ProxyEndpoints, 0, true, ::uGetArrayType(::app::Uno::Net::IPEndPoint__typeof())),
        ::uNewFunction("get_Reflection", Context__get_Reflection, 0, true, ::app::Outracks::Simulator::Runtime::IReflection__typeof()),
        ::uNewFunctionVoid("Initialize", Context__Initialize, 0, true, ::app::Fuse::App__typeof(), ::uGetArrayType(::app::Uno::Net::IPEndPoint__typeof()), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_App", Context__set_App, 0, true, ::app::Fuse::App__typeof()),
        ::uNewFunctionVoid("set_Project", Context__set_Project, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_ProxyEndpoints", Context__set_ProxyEndpoints, 0, true, ::uGetArrayType(::app::Uno::Net::IPEndPoint__typeof())),
        ::uNewFunctionVoid("set_Reflection", Context__set_Reflection, 0, true, ::app::Outracks::Simulator::Runtime::IReflection__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Fuse::App* Context__get_App(::uStatic* __this)
{
    return Context___App;
}

::uString* Context__get_Project(::uStatic* __this)
{
    return Context___Project;
}

::uArray* Context__get_ProxyEndpoints(::uStatic* __this)
{
    return Context___ProxyEndpoints;
}

::uObject* Context__get_Reflection(::uStatic* __this)
{
    return Context___Reflection;
}

void Context__Initialize(::uStatic* __this, ::app::Fuse::App* app, ::uArray* proxyEndpoints, ::uString* project)
{
    Context__set_App(NULL, app);
    Context__set_ProxyEndpoints(NULL, proxyEndpoints);
    Context__set_Project(NULL, project);
}

void Context__set_App(::uStatic* __this, ::app::Fuse::App* value)
{
    Context___App = value;
}

void Context__set_Project(::uStatic* __this, ::uString* value)
{
    Context___Project = value;
}

void Context__set_ProxyEndpoints(::uStatic* __this, ::uArray* value)
{
    Context___ProxyEndpoints = value;
}

void Context__set_Reflection(::uStatic* __this, ::uObject* value)
{
    Context___Reflection = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DeviceInfo__uType* DeviceInfo__typeof()
{
    static ::uStaticStrong<DeviceInfo__uType*> type;
    if (type != NULL) return type;

    type = (DeviceInfo__uType*)::uAllocClassType(sizeof(DeviceInfo__uType), "Outracks.Simulator.DeviceInfo");

    type->SetFunctions(2,
        ::uNewFunction("get_GUID", DeviceInfo__get_GUID, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Name", DeviceInfo__get_Name, 0, true, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

::uString* DeviceInfo__get_GUID(::uStatic* __this)
{
    return ::app::Android::java::lang::String__op_Implicit_1(NULL, ::app::Android::android::os::Build__get_SERIAL(NULL));
}

::uString* DeviceInfo__get_Name(::uStatic* __this)
{
    return ::app::Android::java::lang::String__op_Implicit_1(NULL, ::app::Android::android::os::Build__get_MODEL(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DialogButton__uType* DialogButton__typeof()
{
    static ::uStaticStrong<DialogButton__uType*> type;
    if (type != NULL) return type;

    type = (DialogButton__uType*)::uAllocClassType(sizeof(DialogButton__uType), "Outracks.Simulator.DialogButton", false, 0, 2, 0);

    type->SetStrongRefs(
        "Destination", offsetof(DialogButton, Destination),
        "Text", offsetof(DialogButton, Text));

    type->SetFields(2,
        ::uNewField("Destination", NULL, offsetof(DialogButton, Destination), ::app::Outracks::Simulator::State__typeof()),
        ::uNewField("Text", NULL, offsetof(DialogButton, Text), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", DialogButton__New_1, 0, true, DialogButton__typeof(), ::app::Uno::String__typeof(), ::app::Outracks::Simulator::State__typeof()));

    ::uRegisterType(type);
    return type;
}

void DialogButton___ObjInit(DialogButton* __this, ::uString* text, ::app::Outracks::Simulator::State* destination)
{
    __this->Text = text;
    __this->Destination = destination;
}

DialogButton* DialogButton__New_1(::uStatic* __this, ::uString* text, ::app::Outracks::Simulator::State* destination)
{
    DialogButton* inst = (DialogButton*)::uAllocObject(sizeof(DialogButton), DialogButton__typeof());
    inst->_ObjInit(text, destination);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DummyApplication__uType* DummyApplication__typeof()
{
    static ::uStaticStrong<DummyApplication__uType*> type;
    if (type != NULL) return type;

    type = (DummyApplication__uType*)::uAllocClassType(sizeof(DummyApplication__uType), "Outracks.Simulator.DummyApplication", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Application__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", DummyApplication__New_1, 0, true, DummyApplication__typeof()));

    ::uRegisterType(type);
    return type;
}

void DummyApplication___ObjInit_1(DummyApplication* __this)
{
    ::app::Uno::Application___ObjInit(__this);
}

DummyApplication* DummyApplication__New_1(::uStatic* __this)
{
    DummyApplication* inst = (DummyApplication*)::uAllocObject(sizeof(DummyApplication), DummyApplication__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FailedToConnect__uType* FailedToConnect__typeof()
{
    static ::uStaticStrong<FailedToConnect__uType*> type;
    if (type != NULL) return type;

    type = (FailedToConnect__uType*)::uAllocClassType(sizeof(FailedToConnect__uType), "Outracks.Simulator.FailedToConnect", false, 0, 0, 0);

    type->SetBaseType(::app::Outracks::Simulator::ShowingModalDialog__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FailedToConnect__New_2, 0, true, FailedToConnect__typeof(), ::app::Uno::Exception__typeof()));

    ::uRegisterType(type);
    return type;
}

void FailedToConnect___ObjInit_2(FailedToConnect* __this, ::app::Uno::Exception* exception)
{
    ::uArray* array_123;
    ::app::Outracks::Simulator::ShowingModalDialog___ObjInit_1(__this, ::uGetConstString("Failed to connect"), ::uGetConstString("Please check that this device is connected to the same network as your computer."), ::uPtr< ::app::Uno::Exception*>(exception)->Message(), ::app::Outracks::Simulator::GoOffline__PrependOption(NULL, (array_123 = ::uNewArray(::app::Outracks::Simulator::DialogButton__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Outracks::Simulator::DialogButton*>(0) = ::app::Outracks::Simulator::DialogButton__New_1(NULL, ::uGetConstString("Change IP"), (::app::Outracks::Simulator::State*)::app::Outracks::Simulator::ChangeIp__New_1(NULL)), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Outracks::Simulator::DialogButton*>(1) = ::app::Outracks::Simulator::DialogButton__New_1(NULL, ::uGetConstString("Try again"), (::app::Outracks::Simulator::State*)::app::Outracks::Simulator::ConnectingToProxy__New_1(NULL)), array_123)));
}

FailedToConnect* FailedToConnect__New_2(::uStatic* __this, ::app::Uno::Exception* exception)
{
    FailedToConnect* inst = (FailedToConnect*)::uAllocObject(sizeof(FailedToConnect), FailedToConnect__typeof());
    inst->_ObjInit_2(exception);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FailedToConnectToEndPoint__uType* FailedToConnectToEndPoint__typeof()
{
    static ::uStaticStrong<FailedToConnectToEndPoint__uType*> type;
    if (type != NULL) return type;

    type = (FailedToConnectToEndPoint__uType*)::uAllocClassType(sizeof(FailedToConnectToEndPoint__uType), "Outracks.Simulator.FailedToConnectToEndPoint", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FailedToConnectToEndPoint__New_3, 0, true, FailedToConnectToEndPoint__typeof(), ::app::Uno::Net::IPEndPoint__typeof(), ::app::Uno::Exception__typeof()));

    ::uRegisterType(type);
    return type;
}

void FailedToConnectToEndPoint___ObjInit_2(FailedToConnectToEndPoint* __this, ::app::Uno::Net::IPEndPoint* endpoint, ::app::Uno::Exception* e)
{
    ::app::Uno::Exception___ObjInit_1(__this, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uPtr< ::app::Uno::Net::IPEndPoint*>(endpoint)->ToString(), ::uGetConstString(": ")), ::uPtr< ::app::Uno::Exception*>(e)->Message()));
}

FailedToConnectToEndPoint* FailedToConnectToEndPoint__New_3(::uStatic* __this, ::app::Uno::Net::IPEndPoint* endpoint, ::app::Uno::Exception* e)
{
    FailedToConnectToEndPoint* inst = (FailedToConnectToEndPoint*)::uAllocObject(sizeof(FailedToConnectToEndPoint), FailedToConnectToEndPoint__typeof());
    inst->_ObjInit_2(endpoint, e);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FailedToConnectToProxy__uType* FailedToConnectToProxy__typeof()
{
    static ::uStaticStrong<FailedToConnectToProxy__uType*> type;
    if (type != NULL) return type;

    type = (FailedToConnectToProxy__uType*)::uAllocClassType(sizeof(FailedToConnectToProxy__uType), "Outracks.Simulator.FailedToConnectToProxy", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    type->SetStrongRefs(
        "InnerExceptions", offsetof(FailedToConnectToProxy, InnerExceptions));

    type->SetFields(1,
        ::uNewField("InnerExceptions", NULL, offsetof(FailedToConnectToProxy, InnerExceptions), ::app::Outracks::Simulator::ImmutableList__Uno_Exception__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FailedToConnectToProxy__New_3, 0, true, FailedToConnectToProxy__typeof(), ::app::Uno::Collections::IEnumerable__Uno_Exception__typeof()));

    ::uRegisterType(type);
    return type;
}

void FailedToConnectToProxy___ObjInit_2(FailedToConnectToProxy* __this, ::uObject* innerExceptions)
{
    ::app::Uno::Exception___ObjInit_1(__this, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Failed to connect to proxy:\n"), ::app::Outracks::Simulator::AggregateConnectError__ToIndentedLines(NULL, innerExceptions)));
    __this->InnerExceptions = ::app::Outracks::Simulator::List__ToImmutableList__Uno_Exception(NULL, innerExceptions);
}

FailedToConnectToProxy* FailedToConnectToProxy__New_3(::uStatic* __this, ::uObject* innerExceptions)
{
    FailedToConnectToProxy* inst = (FailedToConnectToProxy*)::uAllocObject(sizeof(FailedToConnectToProxy), FailedToConnectToProxy__typeof());
    inst->_ObjInit_2(innerExceptions);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FailedToConnectToSimulator__uType* FailedToConnectToSimulator__typeof()
{
    static ::uStaticStrong<FailedToConnectToSimulator__uType*> type;
    if (type != NULL) return type;

    type = (FailedToConnectToSimulator__uType*)::uAllocClassType(sizeof(FailedToConnectToSimulator__uType), "Outracks.Simulator.FailedToConnectToSimulator", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    type->SetStrongRefs(
        "InnerExceptions", offsetof(FailedToConnectToSimulator, InnerExceptions));

    type->SetFields(1,
        ::uNewField("InnerExceptions", NULL, offsetof(FailedToConnectToSimulator, InnerExceptions), ::app::Outracks::Simulator::ImmutableList__Uno_Exception__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FailedToConnectToSimulator__New_3, 0, true, FailedToConnectToSimulator__typeof(), ::app::Uno::Collections::IEnumerable__Uno_Exception__typeof()));

    ::uRegisterType(type);
    return type;
}

void FailedToConnectToSimulator___ObjInit_2(FailedToConnectToSimulator* __this, ::uObject* innerExceptions)
{
    ::app::Uno::Exception___ObjInit_1(__this, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Failed to connect to simulator host: "), ::app::Outracks::Simulator::AggregateConnectError__ToIndentedLines(NULL, innerExceptions)));
    __this->InnerExceptions = ::app::Outracks::Simulator::List__ToImmutableList__Uno_Exception(NULL, innerExceptions);
}

FailedToConnectToSimulator* FailedToConnectToSimulator__New_3(::uStatic* __this, ::uObject* innerExceptions)
{
    FailedToConnectToSimulator* inst = (FailedToConnectToSimulator*)::uAllocObject(sizeof(FailedToConnectToSimulator), FailedToConnectToSimulator__typeof());
    inst->_ObjInit_2(innerExceptions);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Faulted__uType* Faulted__typeof()
{
    static ::uStaticStrong<Faulted__uType*> type;
    if (type != NULL) return type;

    type = (Faulted__uType*)::uAllocClassType(sizeof(Faulted__uType), "Outracks.Simulator.Faulted", false, 0, 0, 0);

    type->SetBaseType(::app::Outracks::Simulator::ShowingModalDialog__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Faulted__New_2, 0, true, Faulted__typeof(), ::app::Uno::Exception__typeof(), ::app::Outracks::Simulator::State__typeof(), ::app::Outracks::Simulator::State__typeof()));

    ::uRegisterType(type);
    return type;
}

void Faulted___ObjInit_2(Faulted* __this, ::app::Uno::Exception* exception, ::app::Outracks::Simulator::State* ignore, ::app::Outracks::Simulator::State* restart)
{
    ::uArray* array_123;
    ::app::Outracks::Simulator::ShowingModalDialog___ObjInit_1(__this, ::uGetConstString("Oops! Something went wrong here."), ::app::Uno::String__op_Addition_2(NULL, ::uPtr< ::app::Uno::Exception*>(exception)->Message(), ::uGetConstString("\n\nPlease see the Fuse Monitor for details.")), ::uGetConstString(""), (array_123 = ::uNewArray(::app::Outracks::Simulator::DialogButton__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Outracks::Simulator::DialogButton*>(0) = ::app::Outracks::Simulator::DialogButton__New_1(NULL, ::uGetConstString("Ignore"), ignore), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Outracks::Simulator::DialogButton*>(1) = ::app::Outracks::Simulator::DialogButton__New_1(NULL, ::uGetConstString("Restart"), restart), array_123));
}

Faulted* Faulted__New_2(::uStatic* __this, ::app::Uno::Exception* exception, ::app::Outracks::Simulator::State* ignore, ::app::Outracks::Simulator::State* restart)
{
    Faulted* inst = (Faulted*)::uAllocObject(sizeof(Faulted), Faulted__typeof());
    inst->_ObjInit_2(exception, ignore, restart);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GetSimulatorEndpoint__uType* GetSimulatorEndpoint__typeof()
{
    static ::uStaticStrong<GetSimulatorEndpoint__uType*> type;
    if (type != NULL) return type;

    type = (GetSimulatorEndpoint__uType*)::uAllocClassType(sizeof(GetSimulatorEndpoint__uType), "Outracks.Simulator.GetSimulatorEndpoint", false, 0, 2, 0);

    type->SetStrongRefs(
        "project", offsetof(GetSimulatorEndpoint, project),
        "proxy", offsetof(GetSimulatorEndpoint, proxy));

    type->SetFields(2,
        ::uNewField("project", NULL, offsetof(GetSimulatorEndpoint, project), ::app::Uno::String__typeof()),
        ::uNewField("proxy", NULL, offsetof(GetSimulatorEndpoint, proxy), ::app::Uno::Net::IPEndPoint__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("Execute", GetSimulatorEndpoint__Execute, 0, false, ::uGetArrayType(::app::Uno::Net::IPEndPoint__typeof())),
        ::uNewFunction(".ctor", GetSimulatorEndpoint__New_1, 0, true, GetSimulatorEndpoint__typeof(), ::app::Uno::Net::IPEndPoint__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void GetSimulatorEndpoint___ObjInit(GetSimulatorEndpoint* __this, ::app::Uno::Net::IPEndPoint* proxy, ::uString* project)
{
    __this->proxy = proxy;
    __this->project = project;
}

::uArray* GetSimulatorEndpoint__Execute(GetSimulatorEndpoint* __this)
{
    try
    {
        ::app::Uno::Net::Sockets::Socket* socket = ::app::Uno::Net::Sockets::Socket__Create(NULL, 2, 1, 6);
        ::uPtr< ::app::Uno::Net::Sockets::Socket*>(socket)->Connect((::app::Uno::Net::EndPoint*)__this->proxy);
        {
            ::app::Uno::Net::Sockets::NetworkStream* stream = ::app::Uno::Net::Sockets::NetworkStream__New_1(NULL, socket);

            try
            {
                {
                    ::app::Uno::IO::StreamWriter* writer = ::app::Uno::IO::StreamWriter__New_1(NULL, (::app::Uno::IO::Stream*)stream);

                    try
                    {
                        {
                            ::app::Uno::IO::StreamReader* reader = ::app::Uno::IO::StreamReader__New_1(NULL, (::app::Uno::IO::Stream*)stream);

                            try
                            {
                                {
                                    ::uPtr< ::app::Uno::IO::StreamWriter*>(writer)->WriteLine_10(__this->project);
                                    writer->Flush();
                                    ::uString* endpointCount = ::uPtr< ::app::Uno::IO::StreamReader*>(reader)->ReadLine();

                                    if (::app::Uno::String__op_Equality(NULL, endpointCount, NULL))
                                    {
                                        U_THROW(::app::Uno::IO::EndOfStreamException__New_4(NULL));
                                    }

                                    ::uArray* endpoints = ::uNewArray(::app::Uno::Net::IPEndPoint__typeof(), ::app::Uno::Int__Parse(NULL, endpointCount));

                                    for (int i = 0; i < endpoints->Length(); i++)
                                    {
                                        ::uString* simulatorAddress = ::uPtr< ::app::Uno::IO::StreamReader*>(reader)->ReadLine();

                                        if (::app::Uno::String__op_Equality(NULL, simulatorAddress, NULL))
                                        {
                                            U_THROW(::app::Uno::IO::EndOfStreamException__New_4(NULL));
                                        }

                                        ::uString* simulatorPort = reader->ReadLine();

                                        if (::app::Uno::String__op_Equality(NULL, simulatorPort, NULL))
                                        {
                                            U_THROW(::app::Uno::IO::EndOfStreamException__New_4(NULL));
                                        }

                                        ::uPtr< ::uArray*>(endpoints)->ItemStrong< ::app::Uno::Net::IPEndPoint*>(i) = ::app::Uno::Net::IPEndPoint__New_1(NULL, ::app::Uno::Net::IPAddress__Parse(NULL, simulatorAddress), ::app::Uno::Int__Parse(NULL, simulatorPort));
                                    }

                                    try
                                    {
                                        ::uPtr< ::app::Uno::Net::Sockets::Socket*>(socket)->Shutdown(2);
                                    }
                                    catch (const ::uThrowable& __t)
                                    {
                                        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
                                        {
                                            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
                                        }
                                        else
                                        {
                                            throw __t;
                                        }
                                    }

                                    return endpoints;
                                }
                            }
                            catch (const ::uThrowable& __t)
                            {
                                ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>((::uObject*)reader));
                                throw __t;
                            }
                            // finally
                            {
                                ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>((::uObject*)reader));
                            }
                        }
                    }
                    catch (const ::uThrowable& __t)
                    {
                        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>((::uObject*)writer));
                        throw __t;
                    }
                    // finally
                    {
                        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>((::uObject*)writer));
                    }
                }
            }
            catch (const ::uThrowable& __t)
            {
                ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>((::uObject*)stream));
                throw __t;
            }
            // finally
            {
                ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>((::uObject*)stream));
            }
        }

        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Call Tom Curise")));
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            U_THROW(::app::Outracks::Simulator::FailedToConnectToEndPoint__New_3(NULL, __this->proxy, e));
        }
        else
        {
            throw __t;
        }
    }
}

GetSimulatorEndpoint* GetSimulatorEndpoint__New_1(::uStatic* __this, ::app::Uno::Net::IPEndPoint* proxy, ::uString* project)
{
    GetSimulatorEndpoint* inst = (GetSimulatorEndpoint*)::uAllocObject(sizeof(GetSimulatorEndpoint), GetSimulatorEndpoint__typeof());
    inst->_ObjInit(proxy, project);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GoOffline__uType* GoOffline__typeof()
{
    static ::uStaticStrong<GoOffline__uType*> type;
    if (type != NULL) return type;

    type = (GoOffline__uType*)::uAllocClassType(sizeof(GoOffline__uType), "Outracks.Simulator.GoOffline");

    type->SetFunctions(1,
        ::uNewFunction("PrependOption", GoOffline__PrependOption, 0, true, ::uGetArrayType(::app::Outracks::Simulator::DialogButton__typeof()), ::uGetArrayType(::app::Outracks::Simulator::DialogButton__typeof())));

    ::uRegisterType(type);
    return type;
}

::uArray* GoOffline__PrependOption(::uStatic* __this, ::uArray* otherButtons)
{
    ::uArray* array_123;
    ::uArray* array_124;
    ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Protocol_Reify oldReify = ::app::Outracks::Simulator::BytecodeCache__TryLoad(NULL);
    return oldReify.HasValue() ? ::app::Uno::Collections::EnumerableExtensions__ToArray__Outracks_Simulator_DialogButton(NULL, ::app::Uno::Collections::EnumerableExtensions__Union__Outracks_Simulator_DialogButton(NULL, ::app::Uno::Collections::EnumerableExtensions__AsEnumerable__Outracks_Simulator_DialogButton(NULL, (array_123 = ::uNewArray(::app::Outracks::Simulator::DialogButton__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Outracks::Simulator::DialogButton*>(0) = ::app::Outracks::Simulator::DialogButton__New_1(NULL, ::uGetConstString("Go offline"), (::app::Outracks::Simulator::State*)::app::Outracks::Simulator::Idle__New_1(NULL, (::uObject*)::app::Outracks::Simulator::OfflineSimulatorClient__New_1(NULL, (array_124 = ::uNewArray(::app::Outracks::Simulator::Protocol::MessageToClient__typeof(), 1), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::app::Outracks::Simulator::Protocol::MessageToClient*>(0) = (::app::Outracks::Simulator::Protocol::MessageToClient*)oldReify.Value(), array_124)))), array_123)), (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Outracks_Simulator_DialogButton__New_1(NULL, otherButtons))) : otherButtons;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Idle__uType* Idle__typeof()
{
    static ::uStaticStrong<Idle__uType*> type;
    if (type != NULL) return type;

    type = (Idle__uType*)::uAllocClassType(sizeof(Idle__uType), "Outracks.Simulator.Idle", false, 0, 0, 0);

    type->SetBaseType(::app::Outracks::Simulator::Connected__typeof());
    type->__fp_OnEnterState = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::State*))Idle__OnEnterState;

    type->SetFunctions(2,
        ::uNewFunction(".ctor", Idle__New_1, 0, true, Idle__typeof(), ::app::Outracks::Simulator::ISimulatorClient__typeof()),
        ::uNewFunctionVoid("SendDebugLog", Idle__SendDebugLog, 0, false, ::app::Uno::String__typeof(), ::app::Uno::Diagnostics::DebugMessageType__typeof()));

    ::uRegisterType(type);
    return type;
}

void Idle___ObjInit_2(Idle* __this, ::uObject* client)
{
    ::app::Outracks::Simulator::Connected___ObjInit_1(__this, client);
}

Idle* Idle__New_1(::uStatic* __this, ::uObject* client)
{
    Idle* inst = (Idle*)::uAllocObject(sizeof(Idle), Idle__typeof());
    inst->_ObjInit_2(client);
    return inst;
}

::app::Outracks::Simulator::State* Idle__OnEnterState(Idle* __this)
{
    ::app::Uno::Diagnostics::Debug__SetLogHandler(NULL, ::uNewDelegateNonVirt(::app::Uno::Diagnostics::LogHandler__typeof(), (const void*)Idle__SendDebugLog, __this));
    ::app::Outracks::Simulator::ISimulatorClient::Send(::uPtr< ::uObject*>(__this->Client), (::app::Outracks::Simulator::Protocol::MessageFromClient*)::app::Outracks::Simulator::Protocol::RegisterName__New_1(NULL, ::app::Outracks::Simulator::DeviceInfo__get_GUID(NULL), ::app::Outracks::Simulator::DeviceInfo__get_Name(NULL)));
    ::app::Outracks::Simulator::LoadingScreen__Show(NULL, ::app::Outracks::Simulator::Context__get_App(NULL), ::uGetConstString("Loading"), ::uGetConstString("Host is loading project..."));
    return (::app::Outracks::Simulator::State*)__this;
}

void Idle__SendDebugLog(Idle* __this, ::uString* text, int type)
{
    ::app::Outracks::Simulator::ISimulatorClient::Send(::uPtr< ::uObject*>(__this->Client), (::app::Outracks::Simulator::Protocol::MessageFromClient*)::app::Outracks::Simulator::Protocol::DebugLog__New_1(NULL, ::app::Outracks::Simulator::DeviceInfo__get_GUID(NULL), ::app::Outracks::Simulator::DeviceInfo__get_Name(NULL), text));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEquatable__Outracks_Simulator_Bytecode_NamespaceName__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Outracks.Simulator.IEquatable<Outracks.Simulator.Bytecode.NamespaceName>");

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEquatable__Outracks_Simulator_Bytecode_Optional__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Outracks.Simulator.IEquatable<Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_Protocol_Reify>");

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEquatable__Outracks_Simulator_Bytecode_Optional_1__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Outracks.Simulator.IEquatable<Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_Runtime_Environment>");

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEquatable__Outracks_Simulator_Bytecode_Optional_2__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Outracks.Simulator.IEquatable<Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_DialogButton>");

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEquatable__Outracks_Simulator_Bytecode_Optional_3__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Outracks.Simulator.IEquatable<Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_Bytecode_NamespaceName>");

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEquatable__Outracks_Simulator_Bytecode_Optional_4__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Outracks.Simulator.IEquatable<Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_Bytecode_TypeName>");

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEquatable__Outracks_Simulator_Bytecode_Optional_5__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Outracks.Simulator.IEquatable<Outracks.Simulator.Bytecode.Optional__string>");

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEquatable__Outracks_Simulator_Bytecode_Optional_Outracks_Simulator_Bytecode_NamespaceName___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Outracks.Simulator.IEquatable<Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Bytecode.NamespaceName>>");

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEquatable__Outracks_Simulator_Bytecode_Optional_Outracks_Simulator_Bytecode_TypeName___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Outracks.Simulator.IEquatable<Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Bytecode.TypeName>>");

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEquatable__Outracks_Simulator_Bytecode_Optional_Outracks_Simulator_DialogButton___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Outracks.Simulator.IEquatable<Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.DialogButton>>");

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEquatable__Outracks_Simulator_Bytecode_Optional_Outracks_Simulator_Protocol_Reify___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Outracks.Simulator.IEquatable<Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Protocol.Reify>>");

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEquatable__Outracks_Simulator_Bytecode_Optional_Outracks_Simulator_Runtime_Environment___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Outracks.Simulator.IEquatable<Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Runtime.Environment>>");

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEquatable__Outracks_Simulator_Bytecode_Optional_string___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Outracks.Simulator.IEquatable<Outracks.Simulator.Bytecode.Optional<string>>");

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEquatable__Outracks_Simulator_Bytecode_StaticMemberName__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Outracks.Simulator.IEquatable<Outracks.Simulator.Bytecode.StaticMemberName>");

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEquatable__Outracks_Simulator_Bytecode_TypeMemberName__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Outracks.Simulator.IEquatable<Outracks.Simulator.Bytecode.TypeMemberName>");

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEquatable__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Outracks.Simulator.IEquatable<Outracks.Simulator.Bytecode.TypeName>");

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEquatable__Outracks_Simulator_Bytecode_Variable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Outracks.Simulator.IEquatable<Outracks.Simulator.Bytecode.Variable>");

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IndentString__uType* IndentString__typeof()
{
    static ::uStaticStrong<IndentString__uType*> type;
    if (type != NULL) return type;

    type = (IndentString__uType*)::uAllocClassType(sizeof(IndentString__uType), "Outracks.Simulator.IndentString");

    type->SetFunctions(2,
        ::uNewFunction("Indent", IndentString__Indent, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("PrefixWithTab", IndentString__PrefixWithTab, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

::uString* IndentString__Indent(::uStatic* __this, ::uString* str)
{
    ::uArray* array_123;
    return ::app::Outracks::Simulator::StringSplitting__Join(NULL, ::app::Uno::Collections::EnumerableExtensions__Select__string__string(NULL, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__string__New_1(NULL, ::app::Uno::String::Split(::uPtr< ::uString*>(str), (array_123 = ::uNewArray(::app::Uno::Char__typeof(), 1), ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(0) = 10, array_123))), ::uNewDelegateNonVirt(::app::Uno::Func__string__string__typeof(), (const void*)IndentString__PrefixWithTab)), ::uGetConstString("\n"));
}

::uString* IndentString__PrefixWithTab(::uStatic* __this, ::uString* s)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("\t"), s);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

InvalidDataException__uType* InvalidDataException__typeof()
{
    static ::uStaticStrong<InvalidDataException__uType*> type;
    if (type != NULL) return type;

    type = (InvalidDataException__uType*)::uAllocClassType(sizeof(InvalidDataException__uType), "Outracks.Simulator.InvalidDataException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", InvalidDataException__New_3, 0, true, InvalidDataException__typeof()));

    ::uRegisterType(type);
    return type;
}

void InvalidDataException___ObjInit_2(InvalidDataException* __this)
{
    ::app::Uno::Exception___ObjInit(__this);
}

InvalidDataException* InvalidDataException__New_3(::uStatic* __this)
{
    InvalidDataException* inst = (InvalidDataException*)::uAllocObject(sizeof(InvalidDataException), InvalidDataException__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ISimulatorClient__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Outracks.Simulator.ISimulatorClient");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__uType* List__typeof()
{
    static ::uStaticStrong<List__uType*> type;
    if (type != NULL) return type;

    type = (List__uType*)::uAllocClassType(sizeof(List__uType), "Outracks.Simulator.List");

    type->SetFunctions(29,
        ::uNewFunction("Read", List__Read__Outracks_Simulator_Bytecode_BindVariable, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable__typeof(), ::app::Uno::IO::BinaryReader__typeof(), ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_BindVariable__typeof()),
        ::uNewFunction("Read", List__Read__Outracks_Simulator_Bytecode_Expression, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof(), ::app::Uno::IO::BinaryReader__typeof(), ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Expression__typeof()),
        ::uNewFunction("Read", List__Read__Outracks_Simulator_Bytecode_Parameter, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter__typeof(), ::app::Uno::IO::BinaryReader__typeof(), ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Parameter__typeof()),
        ::uNewFunction("Read", List__Read__Outracks_Simulator_Bytecode_Statement, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement__typeof(), ::app::Uno::IO::BinaryReader__typeof(), ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Statement__typeof()),
        ::uNewFunction("Read", List__Read__Outracks_Simulator_Bytecode_TypeName, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName__typeof(), ::app::Uno::IO::BinaryReader__typeof(), ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewFunction("Read", List__Read__Outracks_Simulator_Protocol_ExceptionInfo, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__typeof(), ::app::Uno::IO::BinaryReader__typeof(), ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Protocol_ExceptionInfo__typeof()),
        ::uNewFunction("ReadImmutableList", List__ReadImmutableList__Outracks_Simulator_Bytecode_BindVariable, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable__typeof(), ::app::Uno::IO::BinaryReader__typeof(), ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_BindVariable__typeof()),
        ::uNewFunction("ReadImmutableList", List__ReadImmutableList__Outracks_Simulator_Bytecode_Expression, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof(), ::app::Uno::IO::BinaryReader__typeof(), ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Expression__typeof()),
        ::uNewFunction("ReadImmutableList", List__ReadImmutableList__Outracks_Simulator_Bytecode_Parameter, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter__typeof(), ::app::Uno::IO::BinaryReader__typeof(), ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Parameter__typeof()),
        ::uNewFunction("ReadImmutableList", List__ReadImmutableList__Outracks_Simulator_Bytecode_Statement, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement__typeof(), ::app::Uno::IO::BinaryReader__typeof(), ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Statement__typeof()),
        ::uNewFunction("ReadImmutableList", List__ReadImmutableList__Outracks_Simulator_Bytecode_TypeName, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName__typeof(), ::app::Uno::IO::BinaryReader__typeof(), ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewFunction("ReadImmutableList", List__ReadImmutableList__Outracks_Simulator_Protocol_ExceptionInfo, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__typeof(), ::app::Uno::IO::BinaryReader__typeof(), ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Protocol_ExceptionInfo__typeof()),
        ::uNewFunction("ToImmutableList", List__ToImmutableList__Outracks_Simulator_Bytecode_BindVariable, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_BindVariable__typeof()),
        ::uNewFunction("ToImmutableList", List__ToImmutableList__Outracks_Simulator_Bytecode_Expression, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Expression__typeof()),
        ::uNewFunction("ToImmutableList", List__ToImmutableList__Outracks_Simulator_Bytecode_Statement, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Statement__typeof()),
        ::uNewFunction("ToImmutableList", List__ToImmutableList__Outracks_Simulator_Bytecode_TypeName, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewFunction("ToImmutableList", List__ToImmutableList__Uno_Exception, 0, true, ::app::Outracks::Simulator::ImmutableList__Uno_Exception__typeof(), ::app::Uno::Collections::IEnumerable__Uno_Exception__typeof()),
        ::uNewFunctionVoid("Write", List__Write__Outracks_Simulator_Bytecode_BindVariable, 0, true, ::app::Uno::IO::BinaryWriter__typeof(), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_BindVariable__Uno_IO_BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", List__Write__Outracks_Simulator_Bytecode_BindVariable_1, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable__typeof(), ::app::Uno::IO::BinaryWriter__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_BindVariable__Uno_IO_BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", List__Write__Outracks_Simulator_Bytecode_Expression, 0, true, ::app::Uno::IO::BinaryWriter__typeof(), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", List__Write__Outracks_Simulator_Bytecode_Expression_1, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof(), ::app::Uno::IO::BinaryWriter__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", List__Write__Outracks_Simulator_Bytecode_Parameter, 0, true, ::app::Uno::IO::BinaryWriter__typeof(), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_Parameter__Uno_IO_BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", List__Write__Outracks_Simulator_Bytecode_Parameter_1, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter__typeof(), ::app::Uno::IO::BinaryWriter__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_Parameter__Uno_IO_BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", List__Write__Outracks_Simulator_Bytecode_Statement, 0, true, ::app::Uno::IO::BinaryWriter__typeof(), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_Statement__Uno_IO_BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", List__Write__Outracks_Simulator_Bytecode_Statement_1, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement__typeof(), ::app::Uno::IO::BinaryWriter__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_Statement__Uno_IO_BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", List__Write__Outracks_Simulator_Bytecode_TypeName, 0, true, ::app::Uno::IO::BinaryWriter__typeof(), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_TypeName__Uno_IO_BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", List__Write__Outracks_Simulator_Bytecode_TypeName_1, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName__typeof(), ::app::Uno::IO::BinaryWriter__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_TypeName__Uno_IO_BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", List__Write__Outracks_Simulator_Protocol_ExceptionInfo, 0, true, ::app::Uno::IO::BinaryWriter__typeof(), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__typeof(), ::app::Uno::Action__Outracks_Simulator_Protocol_ExceptionInfo__Uno_IO_BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", List__Write__Outracks_Simulator_Protocol_ExceptionInfo_1, 0, true, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__typeof(), ::app::Uno::IO::BinaryWriter__typeof(), ::app::Uno::Action__Outracks_Simulator_Protocol_ExceptionInfo__Uno_IO_BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable* List__Read__Outracks_Simulator_Bytecode_BindVariable(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader, ::uDelegate* elementReader)
{
    return List__ReadImmutableList__Outracks_Simulator_Bytecode_BindVariable(NULL, reader, elementReader);
}

::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* List__Read__Outracks_Simulator_Bytecode_Expression(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader, ::uDelegate* elementReader)
{
    return List__ReadImmutableList__Outracks_Simulator_Bytecode_Expression(NULL, reader, elementReader);
}

::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter* List__Read__Outracks_Simulator_Bytecode_Parameter(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader, ::uDelegate* elementReader)
{
    return List__ReadImmutableList__Outracks_Simulator_Bytecode_Parameter(NULL, reader, elementReader);
}

::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement* List__Read__Outracks_Simulator_Bytecode_Statement(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader, ::uDelegate* elementReader)
{
    return List__ReadImmutableList__Outracks_Simulator_Bytecode_Statement(NULL, reader, elementReader);
}

::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName* List__Read__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader, ::uDelegate* elementReader)
{
    return List__ReadImmutableList__Outracks_Simulator_Bytecode_TypeName(NULL, reader, elementReader);
}

::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* List__Read__Outracks_Simulator_Protocol_ExceptionInfo(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader, ::uDelegate* elementReader)
{
    return List__ReadImmutableList__Outracks_Simulator_Protocol_ExceptionInfo(NULL, reader, elementReader);
}

::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable* List__ReadImmutableList__Outracks_Simulator_Bytecode_BindVariable(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader, ::uDelegate* elementReader)
{
    ::uArray* array = ::uNewArray(::app::Outracks::Simulator::Bytecode::BindVariable__typeof(), ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadInt());

    for (int i = 0; i < array->Length(); i++)
    {
        array->ItemStrong< ::app::Outracks::Simulator::Bytecode::BindVariable*>(i) = ::uPtr< ::uDelegate*>(elementReader)->Invoke< ::app::Outracks::Simulator::Bytecode::BindVariable*, ::app::Uno::IO::BinaryReader*>(reader);
    }

    return ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable__New_1(NULL, array);
}

::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* List__ReadImmutableList__Outracks_Simulator_Bytecode_Expression(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader, ::uDelegate* elementReader)
{
    ::uArray* array = ::uNewArray(::app::Outracks::Simulator::Bytecode::Expression__typeof(), ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadInt());

    for (int i = 0; i < array->Length(); i++)
    {
        array->ItemStrong< ::app::Outracks::Simulator::Bytecode::Expression*>(i) = ::uPtr< ::uDelegate*>(elementReader)->Invoke< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryReader*>(reader);
    }

    return ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression__New_1(NULL, array);
}

::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter* List__ReadImmutableList__Outracks_Simulator_Bytecode_Parameter(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader, ::uDelegate* elementReader)
{
    ::uArray* array = ::uNewArray(::app::Outracks::Simulator::Bytecode::Parameter__typeof(), ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadInt());

    for (int i = 0; i < array->Length(); i++)
    {
        array->ItemStrong< ::app::Outracks::Simulator::Bytecode::Parameter*>(i) = ::uPtr< ::uDelegate*>(elementReader)->Invoke< ::app::Outracks::Simulator::Bytecode::Parameter*, ::app::Uno::IO::BinaryReader*>(reader);
    }

    return ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter__New_1(NULL, array);
}

::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement* List__ReadImmutableList__Outracks_Simulator_Bytecode_Statement(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader, ::uDelegate* elementReader)
{
    ::uArray* array = ::uNewArray(::app::Outracks::Simulator::Bytecode::Statement__typeof(), ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadInt());

    for (int i = 0; i < array->Length(); i++)
    {
        array->ItemStrong< ::app::Outracks::Simulator::Bytecode::Statement*>(i) = ::uPtr< ::uDelegate*>(elementReader)->Invoke< ::app::Outracks::Simulator::Bytecode::Statement*, ::app::Uno::IO::BinaryReader*>(reader);
    }

    return ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement__New_1(NULL, array);
}

::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName* List__ReadImmutableList__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader, ::uDelegate* elementReader)
{
    ::uArray* array = ::uNewArray(::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadInt());

    for (int i = 0; i < array->Length(); i++)
    {
        array->ItemStrong< ::app::Outracks::Simulator::Bytecode::TypeName*>(i) = ::uPtr< ::uDelegate*>(elementReader)->Invoke< ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Uno::IO::BinaryReader*>(reader);
    }

    return ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName__New_1(NULL, array);
}

::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* List__ReadImmutableList__Outracks_Simulator_Protocol_ExceptionInfo(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader, ::uDelegate* elementReader)
{
    ::uArray* array = ::uNewArray(::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof(), ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadInt());

    for (int i = 0; i < array->Length(); i++)
    {
        array->ItemStrong< ::app::Outracks::Simulator::Protocol::ExceptionInfo*>(i) = ::uPtr< ::uDelegate*>(elementReader)->Invoke< ::app::Outracks::Simulator::Protocol::ExceptionInfo*, ::app::Uno::IO::BinaryReader*>(reader);
    }

    return ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__New_1(NULL, array);
}

::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable* List__ToImmutableList__Outracks_Simulator_Bytecode_BindVariable(::uStatic* __this, ::uObject* self)
{
    return ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable__New_1(NULL, ::app::Uno::Collections::EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_BindVariable(NULL, self));
}

::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* List__ToImmutableList__Outracks_Simulator_Bytecode_Expression(::uStatic* __this, ::uObject* self)
{
    return ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression__New_1(NULL, ::app::Uno::Collections::EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_Expression(NULL, self));
}

::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement* List__ToImmutableList__Outracks_Simulator_Bytecode_Statement(::uStatic* __this, ::uObject* self)
{
    return ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement__New_1(NULL, ::app::Uno::Collections::EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_Statement(NULL, self));
}

::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName* List__ToImmutableList__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this, ::uObject* self)
{
    return ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName__New_1(NULL, ::app::Uno::Collections::EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_TypeName(NULL, self));
}

::app::Outracks::Simulator::ImmutableList__Uno_Exception* List__ToImmutableList__Uno_Exception(::uStatic* __this, ::uObject* self)
{
    return ::app::Outracks::Simulator::ImmutableList__Uno_Exception__New_1(NULL, ::app::Uno::Collections::EnumerableExtensions__ToArray__Uno_Exception(NULL, self));
}

void List__Write__Outracks_Simulator_Bytecode_BindVariable(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable* array, ::uDelegate* elementWriter)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_13(::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable*>(array)->Count());

    for (::uObject* enum_123 = array->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Outracks::Simulator::Bytecode::BindVariable* elm = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_BindVariable::Current(::uPtr< ::uObject*>(enum_123));
        ::uPtr< ::uDelegate*>(elementWriter)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::BindVariable*, ::app::Uno::IO::BinaryWriter*>(elm, writer);
    }
}

void List__Write__Outracks_Simulator_Bytecode_BindVariable_1(::uStatic* __this, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable* array, ::app::Uno::IO::BinaryWriter* writer, ::uDelegate* elementWriter)
{
    List__Write__Outracks_Simulator_Bytecode_BindVariable(NULL, writer, array, elementWriter);
}

void List__Write__Outracks_Simulator_Bytecode_Expression(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* array, ::uDelegate* elementWriter)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_13(::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression*>(array)->Count());

    for (::uObject* enum_123 = array->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Outracks::Simulator::Bytecode::Expression* elm = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Expression::Current(::uPtr< ::uObject*>(enum_123));
        ::uPtr< ::uDelegate*>(elementWriter)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryWriter*>(elm, writer);
    }
}

void List__Write__Outracks_Simulator_Bytecode_Expression_1(::uStatic* __this, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* array, ::app::Uno::IO::BinaryWriter* writer, ::uDelegate* elementWriter)
{
    List__Write__Outracks_Simulator_Bytecode_Expression(NULL, writer, array, elementWriter);
}

void List__Write__Outracks_Simulator_Bytecode_Parameter(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter* array, ::uDelegate* elementWriter)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_13(::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter*>(array)->Count());

    for (::uObject* enum_123 = array->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Outracks::Simulator::Bytecode::Parameter* elm = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Parameter::Current(::uPtr< ::uObject*>(enum_123));
        ::uPtr< ::uDelegate*>(elementWriter)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Parameter*, ::app::Uno::IO::BinaryWriter*>(elm, writer);
    }
}

void List__Write__Outracks_Simulator_Bytecode_Parameter_1(::uStatic* __this, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter* array, ::app::Uno::IO::BinaryWriter* writer, ::uDelegate* elementWriter)
{
    List__Write__Outracks_Simulator_Bytecode_Parameter(NULL, writer, array, elementWriter);
}

void List__Write__Outracks_Simulator_Bytecode_Statement(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement* array, ::uDelegate* elementWriter)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_13(::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement*>(array)->Count());

    for (::uObject* enum_123 = array->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Outracks::Simulator::Bytecode::Statement* elm = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Statement::Current(::uPtr< ::uObject*>(enum_123));
        ::uPtr< ::uDelegate*>(elementWriter)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Statement*, ::app::Uno::IO::BinaryWriter*>(elm, writer);
    }
}

void List__Write__Outracks_Simulator_Bytecode_Statement_1(::uStatic* __this, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement* array, ::app::Uno::IO::BinaryWriter* writer, ::uDelegate* elementWriter)
{
    List__Write__Outracks_Simulator_Bytecode_Statement(NULL, writer, array, elementWriter);
}

void List__Write__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName* array, ::uDelegate* elementWriter)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_13(::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName*>(array)->Count());

    for (::uObject* enum_123 = array->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Outracks::Simulator::Bytecode::TypeName* elm = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_TypeName::Current(::uPtr< ::uObject*>(enum_123));
        ::uPtr< ::uDelegate*>(elementWriter)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Uno::IO::BinaryWriter*>(elm, writer);
    }
}

void List__Write__Outracks_Simulator_Bytecode_TypeName_1(::uStatic* __this, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName* array, ::app::Uno::IO::BinaryWriter* writer, ::uDelegate* elementWriter)
{
    List__Write__Outracks_Simulator_Bytecode_TypeName(NULL, writer, array, elementWriter);
}

void List__Write__Outracks_Simulator_Protocol_ExceptionInfo(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* array, ::uDelegate* elementWriter)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_13(::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo*>(array)->Count());

    for (::uObject* enum_123 = array->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Outracks::Simulator::Protocol::ExceptionInfo* elm = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Protocol_ExceptionInfo::Current(::uPtr< ::uObject*>(enum_123));
        ::uPtr< ::uDelegate*>(elementWriter)->InvokeVoid< ::app::Outracks::Simulator::Protocol::ExceptionInfo*, ::app::Uno::IO::BinaryWriter*>(elm, writer);
    }
}

void List__Write__Outracks_Simulator_Protocol_ExceptionInfo_1(::uStatic* __this, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* array, ::app::Uno::IO::BinaryWriter* writer, ::uDelegate* elementWriter)
{
    List__Write__Outracks_Simulator_Protocol_ExceptionInfo(NULL, writer, array, elementWriter);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LoadingScreen__uType* LoadingScreen__typeof()
{
    static ::uStaticStrong<LoadingScreen__uType*> type;
    if (type != NULL) return type;

    type = (LoadingScreen__uType*)::uAllocClassType(sizeof(LoadingScreen__uType), "Outracks.Simulator.LoadingScreen", false, 0, 0, 0);

    type->SetFunctions(2,
        ::uNewFunction(".ctor", LoadingScreen__New_1, 0, true, LoadingScreen__typeof()),
        ::uNewFunctionVoid("Show", LoadingScreen__Show, 0, true, ::app::Fuse::App__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void LoadingScreen___ObjInit(LoadingScreen* __this)
{
}

LoadingScreen* LoadingScreen__New_1(::uStatic* __this)
{
    LoadingScreen* inst = (LoadingScreen*)::uAllocObject(sizeof(LoadingScreen), LoadingScreen__typeof());
    inst->_ObjInit();
    return inst;
}

void LoadingScreen__Show(::uStatic* __this, ::app::Fuse::App* app, ::uString* header, ::uString* message)
{
    ::app::Uno::Float4 ind_127 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_128 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_129 = ::app::Uno::Float4();
    ::app::Fuse::Controls::StackPanel* collection_123;
    ::uObject* array_124;
    ::app::Fuse::Controls::Text* collection_125;
    ::app::Fuse::Controls::Text* collection_126;
    ::uPtr< ::app::Outracks::Simulator::UserAppState*>(::app::Outracks::Simulator::UserAppState__get_Default(NULL))->ApplyTo(app);
    ::uPtr< ::app::Fuse::App*>(app)->Theme((::app::Fuse::Theme*)::app::Fuse::BasicTheme::BasicTheme__New_3(NULL));
    app->RootNode((::app::Fuse::Node*)(collection_123 = ::app::Fuse::Controls::StackPanel__New_2(NULL), ::uPtr< ::app::Fuse::Controls::StackPanel*>(collection_123)->Alignment(10), 10, ind_127 = ::app::Uno::Float4__New_1(NULL, 40.0f), ::uPtr< ::app::Fuse::Controls::StackPanel*>(collection_123)->Padding(ind_127), ind_127, array_124 = ::uPtr< ::app::Fuse::Controls::StackPanel*>(collection_123)->Children(), ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(array_124), (::app::Fuse::Node*)(collection_125 = ::app::Fuse::Controls::Text__New_2(NULL), ind_128 = ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 20.0f), ::uPtr< ::app::Fuse::Controls::Text*>(collection_125)->Margin(ind_128), ind_128, ::uPtr< ::app::Fuse::Controls::Text*>(collection_125)->Value(header), header, ::uPtr< ::app::Fuse::Controls::Text*>(collection_125)->FontSize(40.0f), 40.0f, ::uPtr< ::app::Fuse::Controls::Text*>(collection_125)->TextAlignment(1), 1, ::uPtr< ::app::Fuse::Controls::Text*>(collection_125)->TextWrapping(1), 1, collection_125)), ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(array_124), (::app::Fuse::Node*)(collection_126 = ::app::Fuse::Controls::Text__New_2(NULL), ind_129 = ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 20.0f), ::uPtr< ::app::Fuse::Controls::Text*>(collection_126)->Margin(ind_129), ind_129, ::uPtr< ::app::Fuse::Controls::Text*>(collection_126)->Value(message), message, ::uPtr< ::app::Fuse::Controls::Text*>(collection_126)->TextWrapping(1), 1, collection_126)), collection_123));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModalDialog__uType* ModalDialog__typeof()
{
    static ::uStaticStrong<ModalDialog__uType*> type;
    if (type != NULL) return type;

    type = (ModalDialog__uType*)::uAllocClassType(sizeof(ModalDialog__uType), "Outracks.Simulator.ModalDialog", false, 0, 0, 0);

    type->SetFunctions(3,
        ::uNewFunction(".ctor", ModalDialog__New_1, 0, true, ModalDialog__typeof()),
        ::uNewFunctionVoid("Show", ModalDialog__Show, 0, true, ::app::Fuse::App__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Controls_Control__typeof()),
        ::uNewFunctionVoid("ShowPrompt", ModalDialog__ShowPrompt, 0, true, ::app::Fuse::App__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Fuse::Controls::Control__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Controls_Control__typeof()));

    ::uRegisterType(type);
    return type;
}

void ModalDialog___ObjInit(ModalDialog* __this)
{
}

ModalDialog* ModalDialog__New_1(::uStatic* __this)
{
    ModalDialog* inst = (ModalDialog*)::uAllocObject(sizeof(ModalDialog), ModalDialog__typeof());
    inst->_ObjInit();
    return inst;
}

void ModalDialog__Show(::uStatic* __this, ::app::Fuse::App* app, ::uString* header, ::uString* body, ::uString* details, ::uObject* buttons)
{
    ::app::Uno::Float4 ind_140 = ::app::Uno::Float4();
    ::app::Uno::UX::FileSource* ind_141;
    ::app::Uno::Float4 ind_142 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_143 = ::app::Uno::Float4();
    ::app::Fuse::Controls::StackPanel* collection_129;
    ::uObject* array_130;
    ::app::Fuse::Controls::Image* collection_131;
    ::app::Fuse::Controls::Text* collection_132;
    ::app::Fuse::Controls::Text* collection_133;
    ::app::Fuse::Controls::ScrollView* collection_134;
    ::app::Fuse::Controls::Text* collection_135;
    ::app::Fuse::Controls::StackPanel* collection_136;
    collection_129 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(collection_129)->Alignment(10);
    collection_129->Padding(::app::Uno::Float4__New_1(NULL, 40.0f));
    array_130 = collection_129->Children();
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(array_130), (::app::Fuse::Node*)(collection_131 = ::app::Fuse::Controls::Image__New_2(NULL), ind_140 = ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 30.0f), ::uPtr< ::app::Fuse::Controls::Image*>(collection_131)->Margin(ind_140), ind_140, ind_141 = (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 37), ::app::Uno::BundleFile__typeof())), ::uPtr< ::app::Fuse::Controls::Image*>(collection_131)->File(ind_141), ind_141, collection_131));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(array_130, (::app::Fuse::Node*)(collection_132 = ::app::Fuse::Controls::Text__New_2(NULL), ind_142 = ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 20.0f), ::uPtr< ::app::Fuse::Controls::Text*>(collection_132)->Margin(ind_142), ind_142, ::uPtr< ::app::Fuse::Controls::Text*>(collection_132)->Value(header), header, ::uPtr< ::app::Fuse::Controls::Text*>(collection_132)->FontSize(25.0f), 25.0f, ::uPtr< ::app::Fuse::Controls::Text*>(collection_132)->TextAlignment(1), 1, ::uPtr< ::app::Fuse::Controls::Text*>(collection_132)->TextWrapping(1), 1, collection_132));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(array_130, (::app::Fuse::Node*)(collection_133 = ::app::Fuse::Controls::Text__New_2(NULL), ind_143 = ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 20.0f), ::uPtr< ::app::Fuse::Controls::Text*>(collection_133)->Margin(ind_143), ind_143, ::uPtr< ::app::Fuse::Controls::Text*>(collection_133)->Value(body), body, ::uPtr< ::app::Fuse::Controls::Text*>(collection_133)->FontSize(15.0f), 15.0f, ::uPtr< ::app::Fuse::Controls::Text*>(collection_133)->TextWrapping(1), 1, collection_133));
    ::app::Fuse::Controls::StackPanel* root = collection_129;

    if (!::app::Uno::String__IsNullOrWhiteSpace(NULL, details))
    {
        collection_134 = ::app::Fuse::Controls::ScrollView__New_2(NULL);
        ::uPtr< ::app::Fuse::Controls::ScrollView*>(collection_134)->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 20.0f));
        collection_134->AllowedScrollDirections(15);
        collection_134->MaxHeight(200.0f);
        collection_134->Content_1((::app::Fuse::Elements::Element*)(collection_135 = ::app::Fuse::Controls::Text__New_2(NULL), ::uPtr< ::app::Fuse::Controls::Text*>(collection_135)->FontSize(10.0f), 10.0f, ::uPtr< ::app::Fuse::Controls::Text*>(collection_135)->Value(details), details, collection_135));
        ::app::Fuse::Controls::ScrollView* detailsScroller = collection_134;
        ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(root)->Children()), (::app::Fuse::Node*)detailsScroller);
    }

    collection_136 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(collection_136)->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 20.0f));
    collection_136->Orientation(0);
    collection_136->Alignment(10);
    ::app::Fuse::Controls::StackPanel* buttonPanel = collection_136;

    for (::uObject* enum_137 = ::app::Uno::Collections::IEnumerable__Fuse_Controls_Control::GetEnumerator(::uPtr< ::uObject*>(buttons)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_137)); )
    {
        ::app::Fuse::Controls::Control* btn = ::app::Uno::Collections::IEnumerator__Fuse_Controls_Control::Current(::uPtr< ::uObject*>(enum_137));
        ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(buttonPanel)->Children()), (::app::Fuse::Node*)btn);
    }

    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(root->Children()), (::app::Fuse::Node*)buttonPanel);
    ::uPtr< ::app::Outracks::Simulator::UserAppState*>(::app::Outracks::Simulator::UserAppState__get_Default(NULL))->ApplyTo(::app::Outracks::Simulator::Context__get_App(NULL));
    ::uPtr< ::app::Fuse::App*>(app)->Theme((::app::Fuse::Theme*)::app::Fuse::BasicTheme::BasicTheme__New_3(NULL));
    app->RootNode((::app::Fuse::Node*)root);
}

void ModalDialog__ShowPrompt(::uStatic* __this, ::app::Fuse::App* app, ::uString* header, ::uString* body, ::app::Fuse::Controls::Control* inputControl, ::uObject* buttons)
{
    ::app::Uno::Float4 ind_138 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_139 = ::app::Uno::Float4();
    ::app::Fuse::Controls::StackPanel* collection_123;
    ::uObject* array_124;
    ::app::Fuse::Controls::Text* collection_125;
    ::app::Fuse::Controls::Text* collection_126;
    ::app::Fuse::Controls::StackPanel* collection_127;
    collection_123 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(collection_123)->Alignment(10);
    collection_123->Padding(::app::Uno::Float4__New_1(NULL, 40.0f));
    array_124 = collection_123->Children();
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(array_124), (::app::Fuse::Node*)(collection_125 = ::app::Fuse::Controls::Text__New_2(NULL), ind_138 = ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 20.0f), ::uPtr< ::app::Fuse::Controls::Text*>(collection_125)->Margin(ind_138), ind_138, ::uPtr< ::app::Fuse::Controls::Text*>(collection_125)->Value(header), header, ::uPtr< ::app::Fuse::Controls::Text*>(collection_125)->FontSize(40.0f), 40.0f, ::uPtr< ::app::Fuse::Controls::Text*>(collection_125)->TextAlignment(1), 1, ::uPtr< ::app::Fuse::Controls::Text*>(collection_125)->TextWrapping(1), 1, collection_125));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(array_124, (::app::Fuse::Node*)(collection_126 = ::app::Fuse::Controls::Text__New_2(NULL), ind_139 = ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 20.0f), ::uPtr< ::app::Fuse::Controls::Text*>(collection_126)->Margin(ind_139), ind_139, ::uPtr< ::app::Fuse::Controls::Text*>(collection_126)->Value(body), body, ::uPtr< ::app::Fuse::Controls::Text*>(collection_126)->TextWrapping(1), 1, collection_126));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(array_124, (::app::Fuse::Node*)inputControl);
    ::app::Fuse::Controls::StackPanel* root = collection_123;
    collection_127 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(collection_127)->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 20.0f));
    collection_127->Orientation(0);
    collection_127->Alignment(10);
    ::app::Fuse::Controls::StackPanel* buttonPanel = collection_127;

    for (::uObject* enum_128 = ::app::Uno::Collections::IEnumerable__Fuse_Controls_Control::GetEnumerator(::uPtr< ::uObject*>(buttons)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_128)); )
    {
        ::app::Fuse::Controls::Control* btn = ::app::Uno::Collections::IEnumerator__Fuse_Controls_Control::Current(::uPtr< ::uObject*>(enum_128));
        ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(buttonPanel)->Children()), (::app::Fuse::Node*)btn);
    }

    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(root->Children()), (::app::Fuse::Node*)buttonPanel);
    ::uPtr< ::app::Outracks::Simulator::UserAppState*>(::app::Outracks::Simulator::UserAppState__get_Default(NULL))->ApplyTo(::app::Outracks::Simulator::Context__get_App(NULL));
    ::uPtr< ::app::Fuse::App*>(app)->Theme((::app::Fuse::Theme*)::app::Fuse::BasicTheme::BasicTheme__New_3(NULL));
    app->RootNode((::app::Fuse::Node*)root);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NonExhaustiveMatch__uType* NonExhaustiveMatch__typeof()
{
    static ::uStaticStrong<NonExhaustiveMatch__uType*> type;
    if (type != NULL) return type;

    type = (NonExhaustiveMatch__uType*)::uAllocClassType(sizeof(NonExhaustiveMatch__uType), "Outracks.Simulator.NonExhaustiveMatch", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", NonExhaustiveMatch__New_3, 0, true, NonExhaustiveMatch__typeof()));

    ::uRegisterType(type);
    return type;
}

void NonExhaustiveMatch___ObjInit_2(NonExhaustiveMatch* __this)
{
    ::app::Uno::Exception___ObjInit(__this);
}

NonExhaustiveMatch* NonExhaustiveMatch__New_3(::uStatic* __this)
{
    NonExhaustiveMatch* inst = (NonExhaustiveMatch*)::uAllocObject(sizeof(NonExhaustiveMatch), NonExhaustiveMatch__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

OfflineSimulatorClient__uType* OfflineSimulatorClient__typeof()
{
    static ::uStaticStrong<OfflineSimulatorClient__uType*> type;
    if (type != NULL) return type;

    type = (OfflineSimulatorClient__uType*)::uAllocClassType(sizeof(OfflineSimulatorClient__uType), "Outracks.Simulator.OfflineSimulatorClient", false, 2, 2, 0);

    type->__interface_0.__fp_Send = (void(*)(void*, ::app::Outracks::Simulator::Protocol::MessageFromClient*))OfflineSimulatorClient__Send;
    type->__interface_0.__fp_get_IncommingMessages = (::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient*(*)(void*))OfflineSimulatorClient__get_IncommingMessages;
    type->__interface_1.__fp_Dispose = (void(*)(void*))OfflineSimulatorClient__Dispose;

    type->SetInterfaces(
        ::app::Outracks::Simulator::ISimulatorClient__typeof(), offsetof(OfflineSimulatorClient__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(OfflineSimulatorClient__uType, __interface_1));

    type->SetStrongRefs(
        "_messagesFromClient", offsetof(OfflineSimulatorClient, _messagesFromClient),
        "_messagesToClient", offsetof(OfflineSimulatorClient, _messagesToClient));

    type->SetFields(2,
        ::uNewField("_messagesFromClient", NULL, offsetof(OfflineSimulatorClient, _messagesFromClient), ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__typeof()),
        ::uNewField("_messagesToClient", NULL, offsetof(OfflineSimulatorClient, _messagesToClient), ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__typeof()));

    type->SetFunctions(4,
        ::uNewFunctionVoid("Dispose", OfflineSimulatorClient__Dispose, 0, false),
        ::uNewFunction("get_IncommingMessages", OfflineSimulatorClient__get_IncommingMessages, 0, false, ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__typeof()),
        ::uNewFunction(".ctor", OfflineSimulatorClient__New_1, 0, true, OfflineSimulatorClient__typeof(), ::uGetArrayType(::app::Outracks::Simulator::Protocol::MessageToClient__typeof())),
        ::uNewFunctionVoid("Send", OfflineSimulatorClient__Send, 0, false, ::app::Outracks::Simulator::Protocol::MessageFromClient__typeof()));

    ::uRegisterType(type);
    return type;
}

void OfflineSimulatorClient___ObjInit(OfflineSimulatorClient* __this, ::uArray* initialMessages)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    __this->_messagesFromClient = ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__New_1(NULL);
    __this->_messagesToClient = ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__New_1(NULL);

    for (array_123 = initialMessages, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Outracks::Simulator::Protocol::MessageToClient* msg = ::uPtr< ::uArray*>(array_123)->Item< ::app::Outracks::Simulator::Protocol::MessageToClient*>(index_124);
        ::uPtr< ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient*>(__this->_messagesToClient)->Enqueue(msg);
    }
}

void OfflineSimulatorClient__Dispose(OfflineSimulatorClient* __this)
{
}

::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient* OfflineSimulatorClient__get_IncommingMessages(OfflineSimulatorClient* __this)
{
    return __this->_messagesToClient;
}

OfflineSimulatorClient* OfflineSimulatorClient__New_1(::uStatic* __this, ::uArray* initialMessages)
{
    OfflineSimulatorClient* inst = (OfflineSimulatorClient*)::uAllocObject(sizeof(OfflineSimulatorClient), OfflineSimulatorClient__typeof());
    inst->_ObjInit(initialMessages);
    return inst;
}

void OfflineSimulatorClient__Send(OfflineSimulatorClient* __this, ::app::Outracks::Simulator::Protocol::MessageFromClient* message)
{
    ::uPtr< ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient*>(__this->_messagesFromClient)->Enqueue(message);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ProxyClient__uType* ProxyClient__typeof()
{
    static ::uStaticStrong<ProxyClient__uType*> type;
    if (type != NULL) return type;

    type = (ProxyClient__uType*)::uAllocClassType(sizeof(ProxyClient__uType), "Outracks.Simulator.ProxyClient", false, 0, 0, 0);

    type->SetFunctions(3,
        ::uNewFunction("GetSimulatorEndpoint", ProxyClient__GetSimulatorEndpoint, 0, true, ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint____typeof(), ::app::Uno::Collections::IEnumerable__Uno_Net_IPEndPoint__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", ProxyClient__New_1, 0, true, ProxyClient__typeof()),
        ::uNewFunction("OnNoResult", ProxyClient__OnNoResult, 0, true, ::uGetArrayType(::app::Uno::Net::IPEndPoint__typeof()), ::app::Uno::Collections::IEnumerable__Uno_Exception__typeof()));

    ::uRegisterType(type);
    return type;
}

void ProxyClient___ObjInit(ProxyClient* __this)
{
}

::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* ProxyClient__GetSimulatorEndpoint(::uStatic* __this, ::uObject* proxyEndpoints, ::uString* project)
{
    ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* tasks = ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____New_1(NULL);

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Uno_Net_IPEndPoint::GetEnumerator(::uPtr< ::uObject*>(proxyEndpoints)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Net::IPEndPoint* endpoint = ::app::Uno::Collections::IEnumerator__Uno_Net_IPEndPoint::Current(::uPtr< ::uObject*>(enum_123));
        ::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___*>(tasks)->Add(::app::Outracks::Simulator::Tasks__Run__Uno_Net_IPEndPoint__(NULL, ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Net_IPEndPoint____typeof(), (const void*)::app::Outracks::Simulator::GetSimulatorEndpoint__Execute, ::app::Outracks::Simulator::GetSimulatorEndpoint__New_1(NULL, endpoint, project))));
    }

    return ::app::Outracks::Simulator::Tasks__WaitForFirstResult__Uno_Net_IPEndPoint__(NULL, (::uObject*)tasks, ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Collections_IEnumerable_Uno_Exception___Uno_Net_IPEndPoint____typeof(), (const void*)ProxyClient__OnNoResult));
}

ProxyClient* ProxyClient__New_1(::uStatic* __this)
{
    ProxyClient* inst = (ProxyClient*)::uAllocObject(sizeof(ProxyClient), ProxyClient__typeof());
    inst->_ObjInit();
    return inst;
}

::uArray* ProxyClient__OnNoResult(::uStatic* __this, ::uObject* exceptions)
{
    U_THROW(::app::Outracks::Simulator::FailedToConnectToProxy__New_3(NULL, exceptions));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Reifying__uType* Reifying__typeof()
{
    static ::uStaticStrong<Reifying__uType*> type;
    if (type != NULL) return type;

    type = (Reifying__uType*)::uAllocClassType(sizeof(Reifying__uType), "Outracks.Simulator.Reifying", false, 0, 1, 0);

    type->SetBaseType(::app::Outracks::Simulator::Connected__typeof());
    type->__fp_OnEnterState = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::State*))Reifying__OnEnterState;

    type->SetStrongRefs(
        "_reify", offsetof(Reifying, _reify));

    type->SetFields(1,
        ::uNewField("_reify", NULL, offsetof(Reifying, _reify), ::app::Outracks::Simulator::Protocol::Reify__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Reifying__New_1, 0, true, Reifying__typeof(), ::app::Outracks::Simulator::ISimulatorClient__typeof(), ::app::Outracks::Simulator::Protocol::Reify__typeof()));

    ::uRegisterType(type);
    return type;
}

void Reifying___ObjInit_2(Reifying* __this, ::uObject* client, ::app::Outracks::Simulator::Protocol::Reify* reify)
{
    ::app::Outracks::Simulator::Connected___ObjInit_1(__this, client);
    __this->_reify = reify;
}

Reifying* Reifying__New_1(::uStatic* __this, ::uObject* client, ::app::Outracks::Simulator::Protocol::Reify* reify)
{
    Reifying* inst = (Reifying*)::uAllocObject(sizeof(Reifying), Reifying__typeof());
    inst->_ObjInit_2(client, reify);
    return inst;
}

::app::Outracks::Simulator::State* Reifying__OnEnterState(Reifying* __this)
{
    ::uArray* array_123;
    ::app::Outracks::Simulator::BytecodeCache__TrySave(NULL, __this->_reify);
    ::uPtr< ::app::Outracks::Simulator::UserAppState*>(::app::Outracks::Simulator::UserAppState__get_Default(NULL))->ApplyTo(::app::Outracks::Simulator::Context__get_App(NULL));
    ::app::Outracks::Simulator::Runtime::VirtualMachine__Execute_1(NULL, ::uPtr< ::app::Outracks::Simulator::Protocol::Reify*>(__this->_reify)->AppMutator, (array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)::app::Outracks::Simulator::Context__get_App(NULL), array_123));
    ::app::Outracks::Simulator::UserAppState* userState = ::app::Outracks::Simulator::UserAppState__Save(NULL, ::app::Outracks::Simulator::Context__get_App(NULL));
    return (::app::Outracks::Simulator::State*)::app::Outracks::Simulator::Running__New_1(NULL, __this->Client, userState, __this->_reify);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Restarting__uType* Restarting__typeof()
{
    static ::uStaticStrong<Restarting__uType*> type;
    if (type != NULL) return type;

    type = (Restarting__uType*)::uAllocClassType(sizeof(Restarting__uType), "Outracks.Simulator.Restarting", false, 0, 1, 0);

    type->SetBaseType(::app::Outracks::Simulator::Connected__typeof());
    type->__fp_OnEnterState = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::State*))Restarting__OnEnterState;

    type->SetStrongRefs(
        "_fallbackReify", offsetof(Restarting, _fallbackReify));

    type->SetFields(1,
        ::uNewField("_fallbackReify", NULL, offsetof(Restarting, _fallbackReify), ::app::Outracks::Simulator::Protocol::Reify__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("GetLatestReify", Restarting__GetLatestReify, 0, false, ::app::Outracks::Simulator::Protocol::Reify__typeof()),
        ::uNewFunction(".ctor", Restarting__New_1, 0, true, Restarting__typeof(), ::app::Outracks::Simulator::ISimulatorClient__typeof(), ::app::Outracks::Simulator::Protocol::Reify__typeof()));

    ::uRegisterType(type);
    return type;
}

void Restarting___ObjInit_2(Restarting* __this, ::uObject* client, ::app::Outracks::Simulator::Protocol::Reify* fallbackReify)
{
    ::app::Outracks::Simulator::Connected___ObjInit_1(__this, client);
    __this->_fallbackReify = fallbackReify;
}

::app::Outracks::Simulator::Protocol::Reify* Restarting__GetLatestReify(Restarting* __this)
{
    ::app::Outracks::Simulator::Protocol::MessageToClient* message;

    while (::uPtr< ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient*>(::app::Outracks::Simulator::ISimulatorClient::IncommingMessages(::uPtr< ::uObject*>(__this->Client)))->TryDequeue(&message))
    {
        ::app::Outracks::Simulator::Protocol::Reify* reifyMessage = ::uAs< ::app::Outracks::Simulator::Protocol::Reify*>(message, ::app::Outracks::Simulator::Protocol::Reify__typeof());

        if (reifyMessage != NULL)
        {
            return reifyMessage;
        }
    }

    return __this->_fallbackReify;
}

Restarting* Restarting__New_1(::uStatic* __this, ::uObject* client, ::app::Outracks::Simulator::Protocol::Reify* fallbackReify)
{
    Restarting* inst = (Restarting*)::uAllocObject(sizeof(Restarting), Restarting__typeof());
    inst->_ObjInit_2(client, fallbackReify);
    return inst;
}

::app::Outracks::Simulator::State* Restarting__OnEnterState(Restarting* __this)
{
    return (::app::Outracks::Simulator::State*)::app::Outracks::Simulator::Reifying__New_1(NULL, __this->Client, __this->GetLatestReify());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Running__uType* Running__typeof()
{
    static ::uStaticStrong<Running__uType*> type;
    if (type != NULL) return type;

    type = (Running__uType*)::uAllocClassType(sizeof(Running__uType), "Outracks.Simulator.Running", false, 0, 2, 0);

    type->SetBaseType(::app::Outracks::Simulator::Connected__typeof());
    type->__fp_OnEnterState = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::State*))Running__OnEnterState;
    type->__fp_OnException = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::State*, ::app::Uno::Exception*))Running__OnException;
    type->__fp_OnLeaveState = (void(*)(::app::Outracks::Simulator::State*))Running__OnLeaveState;
    type->__fp_OnUpdate = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::State*))Running__OnUpdate;

    type->SetStrongRefs(
        "_runningReify", offsetof(Running, _runningReify),
        "_userApp", offsetof(Running, _userApp));

    type->SetFields(3,
        ::uNewField("_runningReify", NULL, offsetof(Running, _runningReify), ::app::Outracks::Simulator::Protocol::Reify__typeof()),
        ::uNewField("_userApp", NULL, offsetof(Running, _userApp), ::app::Outracks::Simulator::UserAppState__typeof()),
        ::uNewField("_zoomWhenRooted", NULL, offsetof(Running, _zoomWhenRooted), ::app::Uno::Float__typeof()));

    type->SetFunctions(2,
        ::uNewFunction(".ctor", Running__New_1, 0, true, Running__typeof(), ::app::Outracks::Simulator::ISimulatorClient__typeof(), ::app::Outracks::Simulator::UserAppState__typeof(), ::app::Outracks::Simulator::Protocol::Reify__typeof()),
        ::uNewFunction("QueryDensity", Running__QueryDensity, 0, true, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Running___ObjInit_2(Running* __this, ::uObject* client, ::app::Outracks::Simulator::UserAppState* userApp, ::app::Outracks::Simulator::Protocol::Reify* runningReify)
{
    ::app::Outracks::Simulator::Connected___ObjInit_1(__this, client);
    __this->_userApp = userApp;
    __this->_runningReify = runningReify;
}

Running* Running__New_1(::uStatic* __this, ::uObject* client, ::app::Outracks::Simulator::UserAppState* userApp, ::app::Outracks::Simulator::Protocol::Reify* runningReify)
{
    Running* inst = (Running*)::uAllocObject(sizeof(Running), Running__typeof());
    inst->_ObjInit_2(client, userApp, runningReify);
    return inst;
}

::app::Outracks::Simulator::State* Running__OnEnterState(Running* __this)
{
    ::uPtr< ::app::Outracks::Simulator::UserAppState*>(__this->_userApp)->ApplyTo(::app::Outracks::Simulator::Context__get_App(NULL));
    __this->_zoomWhenRooted = Running__QueryDensity(NULL);
    return (::app::Outracks::Simulator::State*)__this;
}

::app::Outracks::Simulator::State* Running__OnException(Running* __this, ::app::Uno::Exception* e)
{
    ::app::Outracks::Simulator::ISimulatorClient::Send(::uPtr< ::uObject*>(__this->Client), (::app::Outracks::Simulator::Protocol::MessageFromClient*)::app::Outracks::Simulator::Protocol::UnhandledException__New_1(NULL, ::app::Outracks::Simulator::DeviceInfo__get_GUID(NULL), ::app::Outracks::Simulator::DeviceInfo__get_Name(NULL), ::uPtr< ::app::Uno::Exception*>(e)->Message(), ::uPtr< ::app::Uno::Exception*>(e)->StackTrace(), ::uPtr< ::uType*>(::app::Uno::Object::GetType(::uPtr< ::app::Uno::Exception*>(e)))->ToString()));
    return (::app::Outracks::Simulator::State*)::app::Outracks::Simulator::Faulted__New_2(NULL, e, (::app::Outracks::Simulator::State*)__this, (::app::Outracks::Simulator::State*)::app::Outracks::Simulator::Restarting__New_1(NULL, __this->Client, __this->_runningReify));
}

void Running__OnLeaveState(Running* __this)
{
    __this->_userApp = ::app::Outracks::Simulator::UserAppState__Save(NULL, ::app::Outracks::Simulator::Context__get_App(NULL));
}

::app::Outracks::Simulator::State* Running__OnUpdate(Running* __this)
{
    float currentZoom = Running__QueryDensity(NULL);

    if (currentZoom != __this->_zoomWhenRooted)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Density changed, reifying"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Outracks.Simulator.Client.Uno\\0.1.0\\$.uno"), 430);
        return (::app::Outracks::Simulator::State*)::app::Outracks::Simulator::Reifying__New_1(NULL, __this->Client, __this->_runningReify);
    }

    return ::app::Outracks::Simulator::Connected__OnUpdate(__this);
}

float Running__QueryDensity(::uStatic* __this)
{
    ::Xli::Window* wnd = ::app::Uno::Runtime::Implementation::Internal::WindowHelpers__GetPlatformWindowHandle(NULL, ::uPtr< ::app::Fuse::AppBase*>(::app::Fuse::AppBase__get_Current_1(NULL))->Window());
    return ::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetDensity(NULL, wnd);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uDelegate*> Serialization__ReadString;

Serialization__uType* Serialization__typeof()
{
    static ::uStaticStrong<Serialization__uType*> type;
    if (type != NULL) return type;

    type = (Serialization__uType*)::uAllocClassType(sizeof(Serialization__uType), "Outracks.Simulator.Serialization");

    type->SetFields(1,
        ::uNewField("ReadString", &Serialization__ReadString, 0, ::app::Uno::Func__Uno_IO_BinaryReader__string__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("_ReadString", Serialization___ReadString, 0, true, ::app::Uno::String__typeof(), ::app::Uno::IO::BinaryReader__typeof()));

    ::uRegisterType(type);
    return type;
}

::uString* Serialization___ReadString(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    return ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadString();
}

void Serialization___TypeInit(::uStatic* __this)
{
    Serialization__ReadString = ::uNewDelegateNonVirt(::app::Uno::Func__Uno_IO_BinaryReader__string__typeof(), (const void*)Serialization___ReadString);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ShowingModalDialog__uType* ShowingModalDialog__typeof()
{
    static ::uStaticStrong<ShowingModalDialog__uType*> type;
    if (type != NULL) return type;

    type = (ShowingModalDialog__uType*)::uAllocClassType(sizeof(ShowingModalDialog__uType), "Outracks.Simulator.ShowingModalDialog", false, 0, 5, 0);

    type->SetBaseType(::app::Outracks::Simulator::State__typeof());
    type->__fp_OnEnterState = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::State*))ShowingModalDialog__OnEnterState;
    type->__fp_OnUpdate = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::State*))ShowingModalDialog__OnUpdate;

    type->SetStrongRefs(
        "_body", offsetof(ShowingModalDialog, _body),
        "_buttons", offsetof(ShowingModalDialog, _buttons),
        "_clickedButton._value", offsetof(ShowingModalDialog, _clickedButton._value),
        "_details", offsetof(ShowingModalDialog, _details),
        "_header", offsetof(ShowingModalDialog, _header));

    type->SetFields(5,
        ::uNewField("_body", NULL, offsetof(ShowingModalDialog, _body), ::app::Uno::String__typeof()),
        ::uNewField("_buttons", NULL, offsetof(ShowingModalDialog, _buttons), ::uGetArrayType(::app::Outracks::Simulator::DialogButton__typeof())),
        ::uNewField("_clickedButton", NULL, offsetof(ShowingModalDialog, _clickedButton), ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_DialogButton__typeof()),
        ::uNewField("_details", NULL, offsetof(ShowingModalDialog, _details), ::app::Uno::String__typeof()),
        ::uNewField("_header", NULL, offsetof(ShowingModalDialog, _header), ::app::Uno::String__typeof()));

    type->SetFunctions(2,
        ::uNewFunction(".ctor", ShowingModalDialog__New_1, 0, true, ShowingModalDialog__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::uGetArrayType(::app::Outracks::Simulator::DialogButton__typeof())),
        ::uNewFunctionVoid("OnButtonClicked", ShowingModalDialog__OnButtonClicked, 0, false, ::app::Outracks::Simulator::DialogButton__typeof()));

    ::uRegisterType(type);
    return type;
}

void ShowingModalDialog___ObjInit_1(ShowingModalDialog* __this, ::uString* header, ::uString* body, ::uString* details, ::uArray* buttons)
{
    ::app::Outracks::Simulator::State___ObjInit(__this);
    __this->_header = header;
    __this->_body = body;
    __this->_details = details;
    __this->_buttons = buttons;
}

ShowingModalDialog* ShowingModalDialog__New_1(::uStatic* __this, ::uString* header, ::uString* body, ::uString* details, ::uArray* buttons)
{
    ShowingModalDialog* inst = (ShowingModalDialog*)::uAllocObject(sizeof(ShowingModalDialog), ShowingModalDialog__typeof());
    inst->_ObjInit_1(header, body, details, buttons);
    return inst;
}

void ShowingModalDialog__OnButtonClicked(ShowingModalDialog* __this, ::app::Outracks::Simulator::DialogButton* button)
{
    __this->_clickedButton = ::app::Outracks::Simulator::Bytecode::Optional__Some__Outracks_Simulator_DialogButton(NULL, button);
}

::app::Outracks::Simulator::State* ShowingModalDialog__OnEnterState(ShowingModalDialog* __this)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    ::app::Fuse::Controls::Button* collection_126;
    ::app::Uno::Collections::List__Fuse_Controls_Control* buttons = ::app::Uno::Collections::List__Fuse_Controls_Control__New_1(NULL);

    for (array_123 = __this->_buttons, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Outracks::Simulator::DialogButton* button = ::uPtr< ::uArray*>(array_123)->Item< ::app::Outracks::Simulator::DialogButton*>(index_124);
        collection_126 = ::app::Fuse::Controls::Button__New_2(NULL);
        ::uPtr< ::app::Fuse::Controls::Button*>(collection_126)->Text(::uPtr< ::app::Outracks::Simulator::DialogButton*>(button)->Text);
        ::app::Fuse::Controls::Button* node = collection_126;
        ::uDelegate* action = ::app::Outracks::Simulator::Closure__Apply__Outracks_Simulator_DialogButton(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_DialogButton__typeof(), (const void*)ShowingModalDialog__OnButtonClicked, __this), button);
        ::uDelegate* handler = ::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickedHandler__typeof(), (const void*)::app::Outracks::Simulator::ForgetAction__object__Fuse_Gestures_ClickedArgs__Execute, ::app::Outracks::Simulator::ForgetAction__object__Fuse_Gestures_ClickedArgs__New_1(NULL, action));
        ::app::Fuse::Gestures::Clicked__AddHandler(NULL, (::app::Fuse::Node*)node, handler);
        ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Control*>(buttons)->Add((::app::Fuse::Controls::Control*)node);
    }

    ::app::Outracks::Simulator::ModalDialog__Show(NULL, ::app::Outracks::Simulator::Context__get_App(NULL), __this->_header, __this->_body, __this->_details, (::uObject*)buttons);
    return (::app::Outracks::Simulator::State*)__this;
}

::app::Outracks::Simulator::State* ShowingModalDialog__OnUpdate(ShowingModalDialog* __this)
{
    if (__this->_clickedButton.HasValue())
    {
        return ::uPtr< ::app::Outracks::Simulator::DialogButton*>(__this->_clickedButton.Value())->Destination;
    }

    return (::app::Outracks::Simulator::State*)__this;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ShowingPrompt__uType* ShowingPrompt__typeof()
{
    static ::uStaticStrong<ShowingPrompt__uType*> type;
    if (type != NULL) return type;

    type = (ShowingPrompt__uType*)::uAllocClassType(sizeof(ShowingPrompt__uType), "Outracks.Simulator.ShowingPrompt", false, 0, 3, 0);

    type->SetBaseType(::app::Outracks::Simulator::State__typeof());
    type->__fp_OnEnterState = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::State*))ShowingPrompt__OnEnterState;
    type->__fp_OnUpdate = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::State*))ShowingPrompt__OnUpdate;

    type->SetStrongRefs(
        "_body", offsetof(ShowingPrompt, _body),
        "_header", offsetof(ShowingPrompt, _header),
        "_input", offsetof(ShowingPrompt, _input));

    type->SetFields(5,
        ::uNewField("_body", NULL, offsetof(ShowingPrompt, _body), ::app::Uno::String__typeof()),
        ::uNewField("_cancelClicked", NULL, offsetof(ShowingPrompt, _cancelClicked), ::app::Uno::Bool__typeof()),
        ::uNewField("_header", NULL, offsetof(ShowingPrompt, _header), ::app::Uno::String__typeof()),
        ::uNewField("_input", NULL, offsetof(ShowingPrompt, _input), ::app::Fuse::Controls::TextInput__typeof()),
        ::uNewField("_okClicked", NULL, offsetof(ShowingPrompt, _okClicked), ::app::Uno::Bool__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("OnCancel", type->__fp_OnCancel, offsetof(ShowingPrompt__uType, __fp_OnCancel), false, ::app::Outracks::Simulator::State__typeof()),
        ::uNewFunctionVoid("OnCancelClicked", ShowingPrompt__OnCancelClicked, 0, false, ::uObject__typeof(), ::app::Fuse::Gestures::ClickedArgs__typeof()),
        ::uNewFunction("OnOk", type->__fp_OnOk, offsetof(ShowingPrompt__uType, __fp_OnOk), false, ::app::Outracks::Simulator::State__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("OnOkClicked", ShowingPrompt__OnOkClicked, 0, false, ::uObject__typeof(), ::app::Fuse::Gestures::ClickedArgs__typeof()));

    ::uRegisterType(type);
    return type;
}

void ShowingPrompt___ObjInit_1(ShowingPrompt* __this, ::uString* header, ::uString* body)
{
    ::app::Outracks::Simulator::State___ObjInit(__this);
    __this->_header = header;
    __this->_body = body;
}

void ShowingPrompt__OnCancelClicked(ShowingPrompt* __this, ::uObject* s, ::app::Fuse::Gestures::ClickedArgs* args)
{
    __this->_cancelClicked = true;
}

::app::Outracks::Simulator::State* ShowingPrompt__OnEnterState(ShowingPrompt* __this)
{
    ::uArray* array_125;
    ::app::Fuse::Controls::Button* collection_123;
    ::app::Fuse::Controls::Button* collection_124;
    collection_123 = ::app::Fuse::Controls::Button__New_2(NULL);
    ::uPtr< ::app::Fuse::Controls::Button*>(collection_123)->Text(::uGetConstString("Ok"));
    ::app::Fuse::Controls::Button* ok = collection_123;
    ::app::Fuse::Gestures::Clicked__AddHandler(NULL, (::app::Fuse::Node*)ok, ::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickedHandler__typeof(), (const void*)ShowingPrompt__OnOkClicked, __this));
    collection_124 = ::app::Fuse::Controls::Button__New_2(NULL);
    ::uPtr< ::app::Fuse::Controls::Button*>(collection_124)->Text(::uGetConstString("Cancel"));
    ::app::Fuse::Controls::Button* cancel = collection_124;
    ::app::Fuse::Gestures::Clicked__AddHandler(NULL, (::app::Fuse::Node*)cancel, ::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickedHandler__typeof(), (const void*)ShowingPrompt__OnCancelClicked, __this));
    __this->_input = ::app::Fuse::Controls::TextInput__New_2(NULL);
    ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("# "), __this->_header), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Outracks.Simulator.Client.Uno\\0.1.0\\$.uno"), 1324);
    ::app::Uno::Diagnostics::Debug__Log_5(NULL, __this->_body, 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Outracks.Simulator.Client.Uno\\0.1.0\\$.uno"), 1325);
    ::app::Outracks::Simulator::ModalDialog__ShowPrompt(NULL, ::app::Outracks::Simulator::Context__get_App(NULL), __this->_header, __this->_body, (::app::Fuse::Controls::Control*)__this->_input, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Controls_Control__New_1(NULL, (array_125 = ::uNewArray(::app::Fuse::Controls::Control__typeof(), 2), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::app::Fuse::Controls::Control*>(0) = (::app::Fuse::Controls::Control*)cancel, ::uPtr< ::uArray*>(array_125)->ItemStrong< ::app::Fuse::Controls::Control*>(1) = (::app::Fuse::Controls::Control*)ok, array_125)));
    return (::app::Outracks::Simulator::State*)__this;
}

void ShowingPrompt__OnOkClicked(ShowingPrompt* __this, ::uObject* s, ::app::Fuse::Gestures::ClickedArgs* args)
{
    __this->_okClicked = true;
}

::app::Outracks::Simulator::State* ShowingPrompt__OnUpdate(ShowingPrompt* __this)
{
    if (__this->_cancelClicked)
    {
        return __this->OnCancel();
    }

    if (__this->_okClicked)
    {
        return __this->OnOk(::uPtr< ::app::Fuse::Controls::TextInput*>(__this->_input)->Value());
    }

    return (::app::Outracks::Simulator::State*)__this;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SimulatorClient__uType* SimulatorClient__typeof()
{
    static ::uStaticStrong<SimulatorClient__uType*> type;
    if (type != NULL) return type;

    type = (SimulatorClient__uType*)::uAllocClassType(sizeof(SimulatorClient__uType), "Outracks.Simulator.SimulatorClient", false, 2, 8, 0);

    type->__interface_0.__fp_Send = (void(*)(void*, ::app::Outracks::Simulator::Protocol::MessageFromClient*))SimulatorClient__Send;
    type->__interface_0.__fp_get_IncommingMessages = (::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient*(*)(void*))SimulatorClient__get_IncommingMessages;
    type->__interface_1.__fp_Dispose = (void(*)(void*))SimulatorClient__Dispose;

    type->SetInterfaces(
        ::app::Outracks::Simulator::ISimulatorClient__typeof(), offsetof(SimulatorClient__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SimulatorClient__uType, __interface_1));

    type->SetStrongRefs(
        "_messagesFromClient", offsetof(SimulatorClient, _messagesFromClient),
        "_messagesToClient", offsetof(SimulatorClient, _messagesToClient),
        "_reader", offsetof(SimulatorClient, _reader),
        "_readWorker", offsetof(SimulatorClient, _readWorker),
        "_socket", offsetof(SimulatorClient, _socket),
        "_stream", offsetof(SimulatorClient, _stream),
        "_writer", offsetof(SimulatorClient, _writer),
        "_writeWorker", offsetof(SimulatorClient, _writeWorker));

    type->SetFields(9,
        ::uNewField("_messagesFromClient", NULL, offsetof(SimulatorClient, _messagesFromClient), ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__typeof()),
        ::uNewField("_messagesToClient", NULL, offsetof(SimulatorClient, _messagesToClient), ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__typeof()),
        ::uNewField("_reader", NULL, offsetof(SimulatorClient, _reader), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewField("_readWorker", NULL, offsetof(SimulatorClient, _readWorker), ::app::Uno::Threading::Thread__typeof()),
        ::uNewField("_running", NULL, offsetof(SimulatorClient, _running), ::app::Uno::Bool__typeof()),
        ::uNewField("_socket", NULL, offsetof(SimulatorClient, _socket), ::app::Uno::Net::Sockets::Socket__typeof()),
        ::uNewField("_stream", NULL, offsetof(SimulatorClient, _stream), ::app::Uno::Net::Sockets::NetworkStream__typeof()),
        ::uNewField("_writer", NULL, offsetof(SimulatorClient, _writer), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewField("_writeWorker", NULL, offsetof(SimulatorClient, _writeWorker), ::app::Uno::Threading::Thread__typeof()));

    type->SetFunctions(8,
        ::uNewFunction("Connect", SimulatorClient__Connect, 0, true, ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient__typeof(), ::app::Uno::Collections::IEnumerable__Uno_Net_IPEndPoint__typeof()),
        ::uNewFunctionVoid("Dispose", SimulatorClient__Dispose, 0, false),
        ::uNewFunction("get_IncommingMessages", SimulatorClient__get_IncommingMessages, 0, false, ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__typeof()),
        ::uNewFunction(".ctor", SimulatorClient__New_1, 0, true, SimulatorClient__typeof(), ::app::Uno::Net::Sockets::Socket__typeof()),
        ::uNewFunction("OnNoResult", SimulatorClient__OnNoResult, 0, true, ::app::Outracks::Simulator::ISimulatorClient__typeof(), ::app::Uno::Collections::IEnumerable__Uno_Exception__typeof()),
        ::uNewFunctionVoid("ReadLoop", SimulatorClient__ReadLoop, 0, false),
        ::uNewFunctionVoid("Send", SimulatorClient__Send, 0, false, ::app::Outracks::Simulator::Protocol::MessageFromClient__typeof()),
        ::uNewFunctionVoid("WriteLoop", SimulatorClient__WriteLoop, 0, false));

    ::uRegisterType(type);
    return type;
}

void SimulatorClient___ObjInit(SimulatorClient* __this, ::app::Uno::Net::Sockets::Socket* socket)
{
    __this->_messagesFromClient = ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__New_1(NULL);
    __this->_messagesToClient = ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__New_1(NULL);
    __this->_running = true;
    __this->_socket = socket;
    __this->_stream = ::app::Uno::Net::Sockets::NetworkStream__New_1(NULL, __this->_socket);
    __this->_writer = ::app::Uno::IO::BinaryWriter__New_1(NULL, (::app::Uno::IO::Stream*)__this->_stream);
    __this->_reader = ::app::Uno::IO::BinaryReader__New_1(NULL, (::app::Uno::IO::Stream*)__this->_stream);
    __this->_readWorker = ::app::Uno::Threading::Thread__Create(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)SimulatorClient__ReadLoop, __this));
    __this->_writeWorker = ::app::Uno::Threading::Thread__Create(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)SimulatorClient__WriteLoop, __this));
    ::uPtr< ::app::Uno::Threading::Thread*>(__this->_readWorker)->Start();
    ::uPtr< ::app::Uno::Threading::Thread*>(__this->_writeWorker)->Start();
}

::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* SimulatorClient__Connect(::uStatic* __this, ::uObject* simulatorEndpoints)
{
    ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* tasks = ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___New_1(NULL);

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Uno_Net_IPEndPoint::GetEnumerator(::uPtr< ::uObject*>(simulatorEndpoints)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Net::IPEndPoint* endpoint = ::app::Uno::Collections::IEnumerator__Uno_Net_IPEndPoint::Current(::uPtr< ::uObject*>(enum_123));
        ::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_*>(tasks)->Add(::app::Outracks::Simulator::Tasks__Run__Outracks_Simulator_ISimulatorClient(NULL, ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_ISimulatorClient__typeof(), (const void*)::app::Outracks::Simulator::ConnectToSimulator__Execute, ::app::Outracks::Simulator::ConnectToSimulator__New_1(NULL, endpoint))));
    }

    return ::app::Outracks::Simulator::Tasks__WaitForFirstResult__Outracks_Simulator_ISimulatorClient(NULL, (::uObject*)tasks, ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Collections_IEnumerable_Uno_Exception___Outracks_Simulator_ISimulatorClient__typeof(), (const void*)SimulatorClient__OnNoResult));
}

void SimulatorClient__Dispose(SimulatorClient* __this)
{
    __this->_running = false;
    ::uPtr< ::app::Uno::Threading::Thread*>(__this->_readWorker)->Join();
    ::uPtr< ::app::Uno::Threading::Thread*>(__this->_writeWorker)->Join();
    ::uPtr< ::app::Uno::Net::Sockets::NetworkStream*>(__this->_stream)->Dispose();

    try
    {
        ::uPtr< ::app::Uno::Net::Sockets::Socket*>(__this->_socket)->Shutdown(2);
        ::uPtr< ::app::Uno::Net::Sockets::Socket*>(__this->_socket)->Close();
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uPtr< ::app::Uno::Exception*>(e)->Message(), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Outracks.Simulator.Client.Uno\\0.1.0\\$.uno"), 971);
        }
        else
        {
            throw __t;
        }
    }
}

::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient* SimulatorClient__get_IncommingMessages(SimulatorClient* __this)
{
    return __this->_messagesToClient;
}

SimulatorClient* SimulatorClient__New_1(::uStatic* __this, ::app::Uno::Net::Sockets::Socket* socket)
{
    SimulatorClient* inst = (SimulatorClient*)::uAllocObject(sizeof(SimulatorClient), SimulatorClient__typeof());
    inst->_ObjInit(socket);
    return inst;
}

::uObject* SimulatorClient__OnNoResult(::uStatic* __this, ::uObject* exceptions)
{
    U_THROW(::app::Outracks::Simulator::FailedToConnectToSimulator__New_3(NULL, exceptions));
}

void SimulatorClient__ReadLoop(SimulatorClient* __this)
{
    try
    {
        while (__this->_running)
        {
            while (::uPtr< ::app::Uno::Net::Sockets::Socket*>(__this->_socket)->Poll(0, 0))
            {
                ::uPtr< ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient*>(__this->_messagesToClient)->Enqueue(::app::Outracks::Simulator::Protocol::MessageToClient__Read(NULL, __this->_reader));
            }

            ::app::Uno::Threading::Thread__Sleep(NULL, 10);
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::uPtr< ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient*>(__this->_messagesToClient)->Enqueue((::app::Outracks::Simulator::Protocol::MessageToClient*)::app::Outracks::Simulator::Protocol::Error__New_1(NULL, ::app::Outracks::Simulator::Protocol::ExceptionInfo__Capture(NULL, e)));
        }
        else
        {
            throw __t;
        }
    }
}

void SimulatorClient__Send(SimulatorClient* __this, ::app::Outracks::Simulator::Protocol::MessageFromClient* message)
{
    ::uPtr< ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient*>(__this->_messagesFromClient)->Enqueue(message);
}

void SimulatorClient__WriteLoop(SimulatorClient* __this)
{
    try
    {
        while (__this->_running)
        {
            ::app::Outracks::Simulator::Protocol::MessageFromClient* message;

            while (::uPtr< ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient*>(__this->_messagesFromClient)->TryDequeue(&message))
            {
                ::app::Outracks::Simulator::Protocol::MessageFromClient__Write(NULL, message, __this->_writer);
            }

            ::app::Uno::Threading::Thread__Sleep(NULL, 10);
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::uPtr< ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient*>(__this->_messagesToClient)->Enqueue((::app::Outracks::Simulator::Protocol::MessageToClient*)::app::Outracks::Simulator::Protocol::Error__New_1(NULL, ::app::Outracks::Simulator::Protocol::ExceptionInfo__Capture(NULL, e)));
            __this->_running = false;
        }
        else
        {
            throw __t;
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

State__uType* State__typeof()
{
    static ::uStaticStrong<State__uType*> type;
    if (type != NULL) return type;

    type = (State__uType*)::uAllocClassType(sizeof(State__uType), "Outracks.Simulator.State", false, 0, 0, 0);

    type->__fp_OnEnterState = State__OnEnterState;
    type->__fp_OnException = State__OnException;
    type->__fp_OnLeaveState = State__OnLeaveState;
    type->__fp_OnUpdate = State__OnUpdate;

    type->SetFunctions(4,
        ::uNewFunction("OnEnterState", type->__fp_OnEnterState, offsetof(State__uType, __fp_OnEnterState), false, State__typeof()),
        ::uNewFunction("OnException", type->__fp_OnException, offsetof(State__uType, __fp_OnException), false, State__typeof(), ::app::Uno::Exception__typeof()),
        ::uNewFunctionVoid("OnLeaveState", type->__fp_OnLeaveState, offsetof(State__uType, __fp_OnLeaveState), false),
        ::uNewFunction("OnUpdate", type->__fp_OnUpdate, offsetof(State__uType, __fp_OnUpdate), false, State__typeof()));

    ::uRegisterType(type);
    return type;
}

void State___ObjInit(State* __this)
{
}

State* State__OnEnterState(State* __this)
{
    return __this;
}

State* State__OnException(State* __this, ::app::Uno::Exception* e)
{
    return (State*)::app::Outracks::Simulator::Faulted__New_2(NULL, e, __this, (State*)::app::Outracks::Simulator::ConnectingToProxy__New_1(NULL));
}

void State__OnLeaveState(State* __this)
{
}

State* State__OnUpdate(State* __this)
{
    return __this;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StringSplitting__uType* StringSplitting__typeof()
{
    static ::uStaticStrong<StringSplitting__uType*> type;
    if (type != NULL) return type;

    type = (StringSplitting__uType*)::uAllocClassType(sizeof(StringSplitting__uType), "Outracks.Simulator.StringSplitting");

    type->SetFunctions(9,
        ::uNewFunction("AfterFirst", StringSplitting__AfterFirst, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("AfterLast", StringSplitting__AfterLast, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("BeforeFirst", StringSplitting__BeforeFirst, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("BeforeLast", StringSplitting__BeforeLast, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Join", StringSplitting__Join, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Collections::IEnumerable__string__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("JoinToString", StringSplitting__JoinToString__Outracks_Simulator_Bytecode_Expression, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Expression__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("JoinToString", StringSplitting__JoinToString__Outracks_Simulator_Bytecode_TypeName, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_TypeName__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("OrdinalIndexOf", StringSplitting__OrdinalIndexOf, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("OrdinalLastIndexOf", StringSplitting__OrdinalLastIndexOf, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

::uString* StringSplitting__AfterFirst(::uStatic* __this, ::uString* s, ::uString* seperator)
{
    int index = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(s), seperator, 0);

    if (index == -1)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL));
    }

    return ::app::Uno::String::Substring(s, index + ::uPtr< ::uString*>(seperator)->Length());
}

::uString* StringSplitting__AfterLast(::uStatic* __this, ::uString* s, ::uString* seperator)
{
    int index = StringSplitting__OrdinalLastIndexOf(NULL, s, seperator);

    if (index == -1)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL));
    }

    return ::app::Uno::String::Substring(::uPtr< ::uString*>(s), index + ::uPtr< ::uString*>(seperator)->Length());
}

::uString* StringSplitting__BeforeFirst(::uStatic* __this, ::uString* s, ::uString* seperator)
{
    int index = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(s), seperator, 0);

    if (index == -1)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL));
    }

    return ::app::Uno::String::Substring_1(s, 0, index);
}

::uString* StringSplitting__BeforeLast(::uStatic* __this, ::uString* s, ::uString* seperator)
{
    int index = StringSplitting__OrdinalLastIndexOf(NULL, s, seperator);

    if (index == -1)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL));
    }

    return ::app::Uno::String::Substring_1(::uPtr< ::uString*>(s), 0, index);
}

::uString* StringSplitting__Join(::uStatic* __this, ::uObject* si, ::uString* separator)
{
    ::app::Uno::Text::StringBuilder* sb = ::app::Uno::Text::StringBuilder__New_1(NULL);
    bool isFirst = true;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__string::GetEnumerator(::uPtr< ::uObject*>(si)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::uString* part = ::app::Uno::Collections::IEnumerator__string::Current(::uPtr< ::uObject*>(enum_123));

        if (isFirst)
        {
            isFirst = false;
        }
        else
        {
            ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->Append_1(separator);
        }

        sb->Append_1(part);
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->ToString();
}

::uString* StringSplitting__JoinToString__Outracks_Simulator_Bytecode_Expression(::uStatic* __this, ::uObject* objects, ::uString* separator)
{
    ::app::Uno::Text::StringBuilder* sb = ::app::Uno::Text::StringBuilder__New_1(NULL);
    bool isFirst = true;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Expression::GetEnumerator(::uPtr< ::uObject*>(objects)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Outracks::Simulator::Bytecode::Expression* obj = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Expression::Current(::uPtr< ::uObject*>(enum_123));

        if (isFirst)
        {
            isFirst = false;
        }
        else
        {
            ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->Append_1(separator);
        }

        sb->Append_1(::app::Uno::Object::ToString(::uPtr< ::app::Outracks::Simulator::Bytecode::Expression*>(obj)));
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->ToString();
}

::uString* StringSplitting__JoinToString__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this, ::uObject* objects, ::uString* separator)
{
    ::app::Uno::Text::StringBuilder* sb = ::app::Uno::Text::StringBuilder__New_1(NULL);
    bool isFirst = true;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_TypeName::GetEnumerator(::uPtr< ::uObject*>(objects)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Outracks::Simulator::Bytecode::TypeName* obj = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_TypeName::Current(::uPtr< ::uObject*>(enum_123));

        if (isFirst)
        {
            isFirst = false;
        }
        else
        {
            ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->Append_1(separator);
        }

        sb->Append_1(::app::Uno::Object::ToString(::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(obj)));
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->ToString();
}

int StringSplitting__OrdinalIndexOf(::uStatic* __this, ::uString* str, ::uString* seperator)
{
    return ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(str), seperator, 0);
}

int StringSplitting__OrdinalLastIndexOf(::uStatic* __this, ::uString* str, ::uString* seperator)
{
    for (int i = ::uPtr< ::uString*>(str)->Length() - ::uPtr< ::uString*>(seperator)->Length(); (i--) > 0; )
    {
        int j = 0;

        while ((j < ::uPtr< ::uString*>(seperator)->Length()) && (::uPtr< ::uString*>(str)->Item(i + j) == ::uPtr< ::uString*>(seperator)->Item(j)))
        {
            j++;
        }

        if (j == ::uPtr< ::uString*>(seperator)->Length())
        {
            return i;
        }
    }

    return -1;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Tasks__uType* Tasks__typeof()
{
    static ::uStaticStrong<Tasks__uType*> type;
    if (type != NULL) return type;

    type = (Tasks__uType*)::uAllocClassType(sizeof(Tasks__uType), "Outracks.Simulator.Tasks");

    type->SetFunctions(4,
        ::uNewFunction("Run", Tasks__Run__Outracks_Simulator_ISimulatorClient, 0, true, ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient__typeof(), ::app::Uno::Func__Outracks_Simulator_ISimulatorClient__typeof()),
        ::uNewFunction("Run", Tasks__Run__Uno_Net_IPEndPoint__, 0, true, ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint____typeof(), ::app::Uno::Func__Uno_Net_IPEndPoint____typeof()),
        ::uNewFunction("WaitForFirstResult", Tasks__WaitForFirstResult__Outracks_Simulator_ISimulatorClient, 0, true, ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof(), ::app::Uno::Func__Uno_Collections_IEnumerable_Uno_Exception___Outracks_Simulator_ISimulatorClient__typeof()),
        ::uNewFunction("WaitForFirstResult", Tasks__WaitForFirstResult__Uno_Net_IPEndPoint__, 0, true, ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint____typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof(), ::app::Uno::Func__Uno_Collections_IEnumerable_Uno_Exception___Uno_Net_IPEndPoint____typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* Tasks__Run__Outracks_Simulator_ISimulatorClient(::uStatic* __this, ::uDelegate* method)
{
    ::app::Outracks::Simulator::TaskThread__Outracks_Simulator_ISimulatorClient* t = ::app::Outracks::Simulator::TaskThread__Outracks_Simulator_ISimulatorClient__New_1(NULL, method);
    ::uPtr< ::app::Uno::Threading::Thread*>(::uPtr< ::app::Outracks::Simulator::TaskThread__Outracks_Simulator_ISimulatorClient*>(t)->Thread)->Start();
    return t->Task;
}

::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* Tasks__Run__Uno_Net_IPEndPoint__(::uStatic* __this, ::uDelegate* method)
{
    ::app::Outracks::Simulator::TaskThread__Uno_Net_IPEndPoint__* t = ::app::Outracks::Simulator::TaskThread__Uno_Net_IPEndPoint____New_1(NULL, method);
    ::uPtr< ::app::Uno::Threading::Thread*>(::uPtr< ::app::Outracks::Simulator::TaskThread__Uno_Net_IPEndPoint__*>(t)->Thread)->Start();
    return t->Task;
}

::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* Tasks__WaitForFirstResult__Outracks_Simulator_ISimulatorClient(::uStatic* __this, ::uObject* tasks, ::uDelegate* onNoResult)
{
    return Tasks__Run__Outracks_Simulator_ISimulatorClient(NULL, ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_ISimulatorClient__typeof(), (const void*)::app::Outracks::Simulator::WaitForFirstResult__Outracks_Simulator_ISimulatorClient__Execute, ::app::Outracks::Simulator::WaitForFirstResult__Outracks_Simulator_ISimulatorClient__New_1(NULL, tasks, onNoResult)));
}

::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* Tasks__WaitForFirstResult__Uno_Net_IPEndPoint__(::uStatic* __this, ::uObject* tasks, ::uDelegate* onNoResult)
{
    return Tasks__Run__Uno_Net_IPEndPoint__(NULL, ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Net_IPEndPoint____typeof(), (const void*)::app::Outracks::Simulator::WaitForFirstResult__Uno_Net_IPEndPoint____Execute, ::app::Outracks::Simulator::WaitForFirstResult__Uno_Net_IPEndPoint____New_1(NULL, tasks, onNoResult)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Uninitialized__uType* Uninitialized__typeof()
{
    static ::uStaticStrong<Uninitialized__uType*> type;
    if (type != NULL) return type;

    type = (Uninitialized__uType*)::uAllocClassType(sizeof(Uninitialized__uType), "Outracks.Simulator.Uninitialized", false, 0, 0, 0);

    type->SetBaseType(::app::Outracks::Simulator::State__typeof());
    type->__fp_OnUpdate = (::app::Outracks::Simulator::State*(*)(::app::Outracks::Simulator::State*))Uninitialized__OnUpdate;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Uninitialized__New_1, 0, true, Uninitialized__typeof()));

    ::uRegisterType(type);
    return type;
}

void Uninitialized___ObjInit_1(Uninitialized* __this)
{
    ::app::Outracks::Simulator::State___ObjInit(__this);
}

Uninitialized* Uninitialized__New_1(::uStatic* __this)
{
    Uninitialized* inst = (Uninitialized*)::uAllocObject(sizeof(Uninitialized), Uninitialized__typeof());
    inst->_ObjInit_1();
    return inst;
}

::app::Outracks::Simulator::State* Uninitialized__OnUpdate(Uninitialized* __this)
{
    if (::app::Outracks::Simulator::Context__get_Reflection(NULL) != NULL)
    {
        return (::app::Outracks::Simulator::State*)::app::Outracks::Simulator::ConnectingToProxy__New_1(NULL);
    }

    return (::app::Outracks::Simulator::State*)__this;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< UserAppState*> UserAppState___Default;

UserAppState__uType* UserAppState__typeof()
{
    static ::uStaticStrong<UserAppState__uType*> type;
    if (type != NULL) return type;

    type = (UserAppState__uType*)::uAllocClassType(sizeof(UserAppState__uType), "Outracks.Simulator.UserAppState", false, 0, 4, 0);

    type->SetStrongRefs(
        "Behaviors", offsetof(UserAppState, Behaviors),
        "Resources", offsetof(UserAppState, Resources),
        "RootNode", offsetof(UserAppState, RootNode),
        "Theme", offsetof(UserAppState, Theme));

    type->SetFields(7,
        ::uNewField("Background", NULL, offsetof(UserAppState, Background), ::app::Uno::Float4__typeof()),
        ::uNewField("Behaviors", NULL, offsetof(UserAppState, Behaviors), ::uGetArrayType(::app::Fuse::Behavior__typeof())),
        ::uNewField("ClearColor", NULL, offsetof(UserAppState, ClearColor), ::app::Uno::Float4__typeof()),
        ::uNewField("ClearDepth", NULL, offsetof(UserAppState, ClearDepth), ::app::Uno::Float__typeof()),
        ::uNewField("Resources", NULL, offsetof(UserAppState, Resources), ::uGetArrayType(::app::Uno::UX::Resource__typeof())),
        ::uNewField("RootNode", NULL, offsetof(UserAppState, RootNode), ::app::Fuse::Node__typeof()),
        ::uNewField("Theme", NULL, offsetof(UserAppState, Theme), ::app::Fuse::Theme__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("ApplyTo", UserAppState__ApplyTo, 0, false, ::app::Fuse::App__typeof()),
        ::uNewFunction("get_Default", UserAppState__get_Default, 0, true, UserAppState__typeof()),
        ::uNewFunction(".ctor", UserAppState__New_1, 0, true, UserAppState__typeof(), ::app::Uno::Float4__typeof(), ::uGetArrayType(::app::Fuse::Behavior__typeof()), ::uGetArrayType(::app::Uno::UX::Resource__typeof()), ::app::Fuse::Node__typeof(), ::app::Fuse::Theme__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("Save", UserAppState__Save, 0, true, UserAppState__typeof(), ::app::Fuse::App__typeof()),
        ::uNewFunctionVoid("set_Default", UserAppState__set_Default, 0, true, UserAppState__typeof()));

    ::uRegisterType(type);
    return type;
}

void UserAppState___ObjInit(UserAppState* __this, ::app::Uno::Float4 background, ::uArray* behaviors, ::uArray* resources, ::app::Fuse::Node* rootNode, ::app::Fuse::Theme* theme, ::app::Uno::Float4 clearColor, float clearDepth)
{
    __this->Background = background;
    __this->Behaviors = behaviors;
    __this->Resources = resources;
    __this->RootNode = rootNode;
    __this->Theme = theme;
    __this->ClearColor = clearColor;
    __this->ClearDepth = clearDepth;
}

void UserAppState__ApplyTo(UserAppState* __this, ::app::Fuse::App* app)
{
    if (::app::Uno::Float4__op_Inequality(NULL, ::uPtr< ::app::Fuse::App*>(app)->Background(), __this->Background))
    {
        ::uPtr< ::app::Fuse::App*>(app)->Background(__this->Background);
    }

    UserAppState__SetIfNotEqual__Fuse_Behavior(NULL, app->Behaviors(), __this->Behaviors);
    UserAppState__SetIfNotEqual__Uno_UX_Resource(NULL, app->Resources(), __this->Resources);

    if (app->Theme() != __this->Theme)
    {
        app->Theme(__this->Theme);
    }

    if (::app::Uno::Float4__op_Inequality(NULL, app->ClearColor(), __this->ClearColor))
    {
        app->ClearColor(__this->ClearColor);
    }

    if (app->RootNode() != __this->RootNode)
    {
        app->RootNode(__this->RootNode);
    }
}

UserAppState* UserAppState__get_Default(::uStatic* __this)
{
    return UserAppState___Default;
}

UserAppState* UserAppState__New_1(::uStatic* __this, ::app::Uno::Float4 background, ::uArray* behaviors, ::uArray* resources, ::app::Fuse::Node* rootNode, ::app::Fuse::Theme* theme, ::app::Uno::Float4 clearColor, float clearDepth)
{
    UserAppState* inst = (UserAppState*)::uAllocObject(sizeof(UserAppState), UserAppState__typeof());
    inst->_ObjInit(background, behaviors, resources, rootNode, theme, clearColor, clearDepth);
    return inst;
}

UserAppState* UserAppState__Save(::uStatic* __this, ::app::Fuse::App* app)
{
    return UserAppState__New_1(NULL, ::uPtr< ::app::Fuse::App*>(app)->Background(), ::app::Uno::Collections::EnumerableExtensions__ToArray__Fuse_Behavior(NULL, (::uObject*)::uPtr< ::app::Fuse::App*>(app)->Behaviors()), ::app::Uno::Collections::EnumerableExtensions__ToArray__Uno_UX_Resource(NULL, (::uObject*)::uPtr< ::app::Fuse::App*>(app)->Resources()), ::uPtr< ::app::Fuse::App*>(app)->RootNode(), ::uPtr< ::app::Fuse::App*>(app)->Theme(), ::uPtr< ::app::Fuse::App*>(app)->ClearColor(), ::uPtr< ::app::Fuse::App*>(app)->ClearDepth());
}

bool UserAppState__SequenceEquals__Fuse_Behavior(::uStatic* __this, ::uObject* left, ::uArray* right)
{
    if (::app::Uno::Collections::ICollection__Fuse_Behavior::Count(::uPtr< ::uObject*>(left)) != ::uPtr< ::uArray*>(right)->Length())
    {
        return false;
    }

    for (int i = 0; i < ::uPtr< ::uArray*>(right)->Length(); i++)
    {
        if ((::uObject*)::app::Uno::Collections::IList__Fuse_Behavior::Item(::uPtr< ::uObject*>(left), i) != (::uObject*)::uPtr< ::uArray*>(right)->Item< ::app::Fuse::Behavior*>(i))
        {
            return false;
        }
    }

    return true;
}

bool UserAppState__SequenceEquals__Uno_UX_Resource(::uStatic* __this, ::uObject* left, ::uArray* right)
{
    if (::app::Uno::Collections::ICollection__Uno_UX_Resource::Count(::uPtr< ::uObject*>(left)) != ::uPtr< ::uArray*>(right)->Length())
    {
        return false;
    }

    for (int i = 0; i < ::uPtr< ::uArray*>(right)->Length(); i++)
    {
        if ((::uObject*)::app::Uno::Collections::IList__Uno_UX_Resource::Item(::uPtr< ::uObject*>(left), i) != (::uObject*)::uPtr< ::uArray*>(right)->Item< ::app::Uno::UX::Resource*>(i))
        {
            return false;
        }
    }

    return true;
}

void UserAppState__set_Default(::uStatic* __this, UserAppState* value)
{
    UserAppState___Default = value;
}

void UserAppState__SetIfNotEqual__Fuse_Behavior(::uStatic* __this, ::uObject* list, ::uArray* elements)
{
    if (!UserAppState__SequenceEquals__Fuse_Behavior(NULL, list, elements))
    {
        UserAppState__SetSequence__Fuse_Behavior(NULL, list, elements);
    }
}

void UserAppState__SetIfNotEqual__Uno_UX_Resource(::uStatic* __this, ::uObject* list, ::uArray* elements)
{
    if (!UserAppState__SequenceEquals__Uno_UX_Resource(NULL, list, elements))
    {
        UserAppState__SetSequence__Uno_UX_Resource(NULL, list, elements);
    }
}

void UserAppState__SetSequence__Fuse_Behavior(::uStatic* __this, ::uObject* list, ::uArray* elements)
{
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Clear(::uPtr< ::uObject*>(list));
    ::app::Uno::Collections::IListExtensions__AddRange__Fuse_Behavior(NULL, list, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Behavior__New_1(NULL, elements));
}

void UserAppState__SetSequence__Uno_UX_Resource(::uStatic* __this, ::uObject* list, ::uArray* elements)
{
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Clear(::uPtr< ::uObject*>(list));
    ::app::Uno::Collections::IListExtensions__AddRange__Uno_UX_Resource(NULL, list, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Uno_UX_Resource__New_1(NULL, elements));
}

}}}

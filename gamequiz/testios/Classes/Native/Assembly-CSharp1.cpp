#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// ExitGames.Client.Photon.Hashtable
struct Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15;
// MaterialUI.TextInputLine
struct TextInputLine_t8BD57F962A87A06F0D47B22A21F9664E4A4BF056;
// MaterialUI.ToastAnim
struct ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC;
// MaterialUI.ToastAnim/<WaitTime>d__15
struct U3CWaitTimeU3Ed__15_t7DB003AF1754D5D0D0F1D88C849989683BBEF63E;
// MaterialUI.Toaster
struct Toaster_t1EDC4603784EEAA87C30F477FD39613B6452BA12;
// MaterialUI.ToggleConfig
struct ToggleConfig_tB85C25B8D1808DAA624639D6B6E3BB6AD7D5F189;
// Photon.Pun.MonoBehaviourPunCallbacks
struct MonoBehaviourPunCallbacks_t1C6D230D24896A20359CB7016C7AD6E4654B885D;
// Photon.Pun.PhotonView
struct PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B;
// Photon.Realtime.AppSettings
struct AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110;
// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0;
// Photon.Realtime.Demo.ConnectAndJoinRandomLb
struct ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22;
// Photon.Realtime.FriendInfo[]
struct FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3;
// Photon.Realtime.OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_tBA60CD40B89DB30CD938488D4E5D398A7F8C9D7E;
// Photon.Realtime.Player
struct Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202;
// Photon.Realtime.Region
struct Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99;
// Photon.Realtime.RegionHandler
struct RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF;
// Photon.Realtime.Room
struct Room_t5DFC39DD6736A2641374564EC6C31352BE33000D;
// Photon.Realtime.RoomInfo[]
struct RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9;
// Photon.Realtime.RoomOptions
struct RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906;
// Photon.Realtime.TypedLobby
struct TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5;
// Photon.Realtime.TypedLobbyInfo[]
struct TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895;
// Question
struct Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC;
// QuestionList
struct QuestionList_t55C63A912E36A8A65CAF13574DF965F8C28D9265;
// QuestionTF
struct QuestionTF_tF055331367AE7350C2C11CEC4E768F987EC6C400;
// Question[]
struct QuestionU5BU5D_t8FC7EC9B3A1152424EB02BB34293E4EA506B195E;
// Quit
struct Quit_tC6FD89776CBAD7424D2A397E0AF00026351FE316;
// Quizdata
struct Quizdata_t20C056F2E06D0D2CB062DF026A7A288587257D0C;
// Quizgamemenager
struct Quizgamemenager_tB2A363E161D872E42BF21AA74F0AB3416123B8A2;
// Randomizelist
struct Randomizelist_t6B800F6D494AD3A14529F438D5FEA6F8EF7D9F41;
// Scores
struct Scores_tF83E87B4A24DFC95FC935140090A45E4FF6FBC59;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t0BFBCFBFCF805245DC59FFE0488500B68114FD9B;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t94D3F6ADD6D2C3A3CDB3173DAF80D4FF5702A34E;
// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_tD4F07FC3F0B08A4BE3D400AB1E3553E633312299;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tE99CD802FA4EC5AFCCCA534D426D974CC6BFF109;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662;
// System.Collections.Generic.List`1<Photon.Realtime.Region>
struct List_1_tB57A7A42B7678B54F23F1B6112A0973D90CF4A59;
// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>
struct List_1_t54699F3EEDF9AFE6DB103B0349A2C451C05C30A2;
// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459;
// System.Collections.Generic.List`1<Question>
struct List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t053DAB6E2110E276A0339D73497193F464BC1F82;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t3D4152882C54B77C712688E910390D5C8E030463;
// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_t2DF167EE7F886C6E1CE292988624D5634AF12DE2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652;
// TMPro.TMP_Character
struct TMP_Character_t1875AACA978396521498D6A699052C187903553D;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E;
// TMPro.TMP_Text
struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505;
// TMPro.TMP_TextElement
struct TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181;
// TMPro.TextAlignmentOptions[]
struct TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438;
// ToggleTextChanger
struct ToggleTextChanger_tA4DBED51FB6143D919AF3E53B14EEB8D5BB7D8B4;
// UI
struct UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658;
// UI/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tBDC3524A6A4A9221ED85BEDF5879DC434E89D8E5;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE;
// UnityEngine.CanvasGroup
struct CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Material[]
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t363EC059ECDBD3DE56740518F34D8C070331649B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.InputField
struct InputField_t533609195B110760BCFF00B746C87D81969CB005;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.Slider
struct Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.Toggle
struct Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t50D925F8E220FB47DA738411CEF9C57FF7E1DC43;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t11E2B254D3C968C7D0DA11C606CC06D7D7F0D786;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739;
// data
struct data_t046B1D75945684A72664853EB6E4E4DC04B5626C;
// lobby
struct lobby_t17682DECBC6631DA3A5ABB98EF5CE2B6E28EDEFF;
// nazwagracza
struct nazwagracza_t20D3FE8A4B5C952601A6BF71DF38BF64B9B6372A;
// startgame
struct startgame_t7C455683DC32FDAF806623583F9F855080837556;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisconnectCause_t8A969EFEB0FE2E4ABD5824250D4C9F7941F2650F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scores_tF83E87B4A24DFC95FC935140090A45E4FF6FBC59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_tBDC3524A6A4A9221ED85BEDF5879DC434E89D8E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitTimeU3Ed__15_t7DB003AF1754D5D0D0F1D88C849989683BBEF63E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E09AB9691A1B41B938753D2FE198D8E444245E3;
IL2CPP_EXTERN_C String_t* _stringLiteral1F7CC2AE456BFD4FE86BAF05320BBD1428A14CD8;
IL2CPP_EXTERN_C String_t* _stringLiteral2E0AD28468258077EBE86FBEA9686D4820881919;
IL2CPP_EXTERN_C String_t* _stringLiteral30DFDB9410383199C46314C665F46CA0FA97DFDB;
IL2CPP_EXTERN_C String_t* _stringLiteral3464B0E173414913A9C29816D0EA367CF2EF4E6C;
IL2CPP_EXTERN_C String_t* _stringLiteral3BABBD03DEC44B75F938171A4DDAE6F5432A43DB;
IL2CPP_EXTERN_C String_t* _stringLiteral43A8F64F6C22B242450A7FCA59CB6B76FDF3364E;
IL2CPP_EXTERN_C String_t* _stringLiteral451E5EEE2606CE163B5207C2446B499535F4C470;
IL2CPP_EXTERN_C String_t* _stringLiteral4B7E6CCC983DE1247358B30179F748A5F39CE4A7;
IL2CPP_EXTERN_C String_t* _stringLiteral595170F6007CA6E570750C2C3324CC3F6EC5BC12;
IL2CPP_EXTERN_C String_t* _stringLiteral5BA20AE69ACD16CDC093005741AAD20F6D88E960;
IL2CPP_EXTERN_C String_t* _stringLiteral5C5642B2B9FA5AEB83CF149A910406BEB275E74A;
IL2CPP_EXTERN_C String_t* _stringLiteral6AE529BF5A75A6207B2F277781B8E5F5F738D512;
IL2CPP_EXTERN_C String_t* _stringLiteral6FE686F4C4FFF70F890D6561C56AD1409A205EAD;
IL2CPP_EXTERN_C String_t* _stringLiteral7847429E435FC15C31E654C8E70D87D903B00B86;
IL2CPP_EXTERN_C String_t* _stringLiteral7EE3AF115A0D56DB385825006088A6FB46E2239B;
IL2CPP_EXTERN_C String_t* _stringLiteralA77B0808E13058677089B15868360FA2CE72D635;
IL2CPP_EXTERN_C String_t* _stringLiteralA9712B8B6A47C89FCAC4419B247E7272EEB61C8C;
IL2CPP_EXTERN_C String_t* _stringLiteralB949B39DDC31B145CC1CD523849F62571BAF445C;
IL2CPP_EXTERN_C String_t* _stringLiteralC7DE7D92819CDB39F6DC245AC259312CB7CEE2F3;
IL2CPP_EXTERN_C String_t* _stringLiteralCDECABE1520A398E4E46DEFF9D55B19BED6D6457;
IL2CPP_EXTERN_C String_t* _stringLiteralD4FA577FEEADE5911163372B19076110FCF16841;
IL2CPP_EXTERN_C String_t* _stringLiteralDAEC28B974A07F8E06CFA961EC9731A33CB0E04B;
IL2CPP_EXTERN_C String_t* _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A;
IL2CPP_EXTERN_C String_t* _stringLiteralE946F176A2B438F59E6D20D9F92BBCE4D5909F08;
IL2CPP_EXTERN_C String_t* _stringLiteralEB76F4D14893A70A6145C6BF50132944ED9258EA;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m92A2149582A1856A577A156ED91C7D9A1721BA35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mB668286E3BFCCA98A7FB16694BBA0E70A8FF6A4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectAndJoinRandomLb_OnRegionPingCompleted_mFE73067D0C0448A40B492514540E5C916170CE7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisSlider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09_mF66932F83BBD82E4A8DF562CA959E210C264DE36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m3F4A66E37DA71D5AF43D8A63F8C2D698003572F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0_m448FCC80D8C3373F1A2771A01B0172A411DA0E67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m2E5F02DDA13C176AF75B4E7C1DB801D89E053B2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisToggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106_m9F98F777EFF307DC0F6FEA2C006044097874BE11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m8E12B1992F78F04B42D1A21EFDE64B83AF4D0CF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m22F0328C373AC8145C66746F1FC4E64B6F3AE926_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m08F726818532EAA788B2FF0AAED319E7D015300D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBD824DB8CAA9310B3F002D298BF32302B0EC1D71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0E55F13193B5F238444C957F4737286D20D107C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m33717CAEE878A4AE0BD495AC7DEDD327DAA9FDA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Randomizelist_randomizeelements_TisString_t_mF353DF8FB59BC9BF8A69F1FFA32545B22306794D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CAwakeU3Eb__0_m954F26CEE21F6D08EAAD640EBD6DD232026B5471_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitTimeU3Ed__15_System_Collections_IEnumerator_Reset_m0FE22DC417F279A1C0ABB6A9EAF232E34E8F54FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ConnectAndJoinRandomLb_OnConnectedToMaster_m080AC337618BC9FE2909797E6556166750675049_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectAndJoinRandomLb_OnDisconnected_m6A28E69A6A6817AAB303D8B64816AD774CBF9EBF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectAndJoinRandomLb_OnJoinRandomFailed_m432338C1FFCE8F62BC5385CBC2566FBFD50521E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectAndJoinRandomLb_OnJoinedRoom_mDC96413952B57AFFD5267C8429B4DFCB10D59290_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectAndJoinRandomLb_OnRegionListReceived_mB545EF0E3524D98C44DD46775D086CF8E7B4B951_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectAndJoinRandomLb_OnRegionPingCompleted_mFE73067D0C0448A40B492514540E5C916170CE7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectAndJoinRandomLb_Start_mA98A97B7BD8DD57E3543DE0B1E5FC6CC0B4A3231_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectAndJoinRandomLb_Update_m266BDF947F50E3AF2ECCB687D647ECCD232949ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectAndJoinRandomLb__ctor_m3FBD3F0B0AA670F431894ADFE9C35E5232026C0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t QuestionList__ctor_mD4DFBCA1861F6E1B0C8AD87FBAAD509614212A73_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Quit_Update_m8D752EAD8643D79DC0472973AAB1D685949D5DB3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Quizgamemenager_Answer_mA141BC81B214F16DC9248C57988C6FA8F4274F5F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Quizgamemenager_SetCurrentquestion_m8C5E9CF091DC81FD643240F3F925F3A3C72E4D7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Scores_Start_m22058A4E787CA2A9219C4A88D9B8715AEB19E63D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Scores_Update_mB4B42494292A6D45DEC1C5359439E610F016B3ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Scores__cctor_mCEDA94D151D3CC60F580AC545CFA387BC33B07E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextInputLine_Start_m2896F0455AD2655C7078818AA79D763C7893BA92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ToastAnim_Start_mDAB1282A7C172B9668FD64117FF78F8C370AC524_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ToastAnim_Update_mC9F2C525EF9287CB4654C3300B41939358BBF2EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ToastAnim_WaitTime_mF2C93536B5FDB44F14B1E4196CE3A7B87CFDFE1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ToastControl_InitToastSystem_mBA806ADD1E7718C5C38DD92493035763CABAE947_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ToastControl_MakeToast_mB4F9F34F059EFAB76713AAA66526504D63C91624_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Toaster_Start_m9F932A6C80E1F972F092775322A33BFE0CA2C64E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Toaster__ctor_mE6B15194038EFF45ADC3FA42F513B5617B496343_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ToggleConfig_Start_mC2C046342C7BCF129421BE680C53693C6C6AC35D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ToggleTextChanger_Awake_m5425F5D8E65F0C4031DD9DBC5D7FCB0C8ABE667E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWaitTimeU3Ed__15_MoveNext_mAF85C3FC5D6B6B8C5084BE04C581BC29B3429957_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWaitTimeU3Ed__15_System_Collections_IEnumerator_Reset_m0FE22DC417F279A1C0ABB6A9EAF232E34E8F54FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UI_Awake_m2771E2CCF3DB072748F8FED8EDF754223BE0AC29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UI_Setquestion_m0C75206C39E813B02A221A9457F5392C01D3AF16_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t lobby_Awake_mF3D9CACD82F11C33698E9B488227BDCF89D86551_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t lobby_Findplayer_mD72C0CB4049B1DC0539C8E52C036396080CDB54B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t lobby_OnConnectedToMaster_m37656D85A990C2A2519B087F150732FADE18B407_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t lobby_OnDisconnected_mFC2DC0BD4DF97464176940553A1AB3E5ADB2CA32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t lobby_OnJoinRandomFailed_m1877E386B6227CF2B8DD0EE4B8543B1C218F6650_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t lobby_OnJoinedRoom_mFF3E2B2A75CDDEA5F03FA4091B1243E7CE0D99C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t lobby_OnPlayerEnteredRoom_m56F7628DD80AC87E0F57706C212F7E168E9B65C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t nazwagracza_SetUpInputField_m9F19F5168CCC04A0541F4640FCDFFD71AC913BB2_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// MaterialUI.ToastAnim_<WaitTime>d__15
struct  U3CWaitTimeU3Ed__15_t7DB003AF1754D5D0D0F1D88C849989683BBEF63E  : public RuntimeObject
{
public:
	// System.Int32 MaterialUI.ToastAnim_<WaitTime>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MaterialUI.ToastAnim_<WaitTime>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MaterialUI.ToastAnim MaterialUI.ToastAnim_<WaitTime>d__15::<>4__this
	ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitTimeU3Ed__15_t7DB003AF1754D5D0D0F1D88C849989683BBEF63E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitTimeU3Ed__15_t7DB003AF1754D5D0D0F1D88C849989683BBEF63E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitTimeU3Ed__15_t7DB003AF1754D5D0D0F1D88C849989683BBEF63E, ___U3CU3E4__this_2)); }
	inline ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// MaterialUIVersion
struct  MaterialUIVersion_t8BC7E78314D14C89A85CE064E8479F8AEAB189FE  : public RuntimeObject
{
public:

public:
};


// Photon.Realtime.EnterRoomParams
struct  EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.EnterRoomParams::RoomName
	String_t* ___RoomName_0;
	// Photon.Realtime.RoomOptions Photon.Realtime.EnterRoomParams::RoomOptions
	RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * ___RoomOptions_1;
	// Photon.Realtime.TypedLobby Photon.Realtime.EnterRoomParams::Lobby
	TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * ___Lobby_2;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.EnterRoomParams::PlayerProperties
	Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * ___PlayerProperties_3;
	// System.Boolean Photon.Realtime.EnterRoomParams::OnGameServer
	bool ___OnGameServer_4;
	// System.Boolean Photon.Realtime.EnterRoomParams::CreateIfNotExists
	bool ___CreateIfNotExists_5;
	// System.Boolean Photon.Realtime.EnterRoomParams::RejoinOnly
	bool ___RejoinOnly_6;
	// System.String[] Photon.Realtime.EnterRoomParams::ExpectedUsers
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___ExpectedUsers_7;

public:
	inline static int32_t get_offset_of_RoomName_0() { return static_cast<int32_t>(offsetof(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942, ___RoomName_0)); }
	inline String_t* get_RoomName_0() const { return ___RoomName_0; }
	inline String_t** get_address_of_RoomName_0() { return &___RoomName_0; }
	inline void set_RoomName_0(String_t* value)
	{
		___RoomName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoomName_0), (void*)value);
	}

	inline static int32_t get_offset_of_RoomOptions_1() { return static_cast<int32_t>(offsetof(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942, ___RoomOptions_1)); }
	inline RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * get_RoomOptions_1() const { return ___RoomOptions_1; }
	inline RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 ** get_address_of_RoomOptions_1() { return &___RoomOptions_1; }
	inline void set_RoomOptions_1(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * value)
	{
		___RoomOptions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoomOptions_1), (void*)value);
	}

	inline static int32_t get_offset_of_Lobby_2() { return static_cast<int32_t>(offsetof(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942, ___Lobby_2)); }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * get_Lobby_2() const { return ___Lobby_2; }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 ** get_address_of_Lobby_2() { return &___Lobby_2; }
	inline void set_Lobby_2(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * value)
	{
		___Lobby_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Lobby_2), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerProperties_3() { return static_cast<int32_t>(offsetof(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942, ___PlayerProperties_3)); }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * get_PlayerProperties_3() const { return ___PlayerProperties_3; }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 ** get_address_of_PlayerProperties_3() { return &___PlayerProperties_3; }
	inline void set_PlayerProperties_3(Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * value)
	{
		___PlayerProperties_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerProperties_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnGameServer_4() { return static_cast<int32_t>(offsetof(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942, ___OnGameServer_4)); }
	inline bool get_OnGameServer_4() const { return ___OnGameServer_4; }
	inline bool* get_address_of_OnGameServer_4() { return &___OnGameServer_4; }
	inline void set_OnGameServer_4(bool value)
	{
		___OnGameServer_4 = value;
	}

	inline static int32_t get_offset_of_CreateIfNotExists_5() { return static_cast<int32_t>(offsetof(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942, ___CreateIfNotExists_5)); }
	inline bool get_CreateIfNotExists_5() const { return ___CreateIfNotExists_5; }
	inline bool* get_address_of_CreateIfNotExists_5() { return &___CreateIfNotExists_5; }
	inline void set_CreateIfNotExists_5(bool value)
	{
		___CreateIfNotExists_5 = value;
	}

	inline static int32_t get_offset_of_RejoinOnly_6() { return static_cast<int32_t>(offsetof(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942, ___RejoinOnly_6)); }
	inline bool get_RejoinOnly_6() const { return ___RejoinOnly_6; }
	inline bool* get_address_of_RejoinOnly_6() { return &___RejoinOnly_6; }
	inline void set_RejoinOnly_6(bool value)
	{
		___RejoinOnly_6 = value;
	}

	inline static int32_t get_offset_of_ExpectedUsers_7() { return static_cast<int32_t>(offsetof(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942, ___ExpectedUsers_7)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_ExpectedUsers_7() const { return ___ExpectedUsers_7; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_ExpectedUsers_7() { return &___ExpectedUsers_7; }
	inline void set_ExpectedUsers_7(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___ExpectedUsers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpectedUsers_7), (void*)value);
	}
};


// Photon.Realtime.Player
struct  Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202  : public RuntimeObject
{
public:
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_3;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_5;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * ___U3CCustomPropertiesU3Ek__BackingField_6;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject * ___TagObject_7;

public:
	inline static int32_t get_offset_of_U3CRoomReferenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___U3CRoomReferenceU3Ek__BackingField_0)); }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * get_U3CRoomReferenceU3Ek__BackingField_0() const { return ___U3CRoomReferenceU3Ek__BackingField_0; }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D ** get_address_of_U3CRoomReferenceU3Ek__BackingField_0() { return &___U3CRoomReferenceU3Ek__BackingField_0; }
	inline void set_U3CRoomReferenceU3Ek__BackingField_0(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * value)
	{
		___U3CRoomReferenceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRoomReferenceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_actorNumber_1() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___actorNumber_1)); }
	inline int32_t get_actorNumber_1() const { return ___actorNumber_1; }
	inline int32_t* get_address_of_actorNumber_1() { return &___actorNumber_1; }
	inline void set_actorNumber_1(int32_t value)
	{
		___actorNumber_1 = value;
	}

	inline static int32_t get_offset_of_IsLocal_2() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___IsLocal_2)); }
	inline bool get_IsLocal_2() const { return ___IsLocal_2; }
	inline bool* get_address_of_IsLocal_2() { return &___IsLocal_2; }
	inline void set_IsLocal_2(bool value)
	{
		___IsLocal_2 = value;
	}

	inline static int32_t get_offset_of_nickName_3() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___nickName_3)); }
	inline String_t* get_nickName_3() const { return ___nickName_3; }
	inline String_t** get_address_of_nickName_3() { return &___nickName_3; }
	inline void set_nickName_3(String_t* value)
	{
		___nickName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nickName_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___U3CUserIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_4() const { return ___U3CUserIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_4() { return &___U3CUserIdU3Ek__BackingField_4; }
	inline void set_U3CUserIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsInactiveU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___U3CIsInactiveU3Ek__BackingField_5)); }
	inline bool get_U3CIsInactiveU3Ek__BackingField_5() const { return ___U3CIsInactiveU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsInactiveU3Ek__BackingField_5() { return &___U3CIsInactiveU3Ek__BackingField_5; }
	inline void set_U3CIsInactiveU3Ek__BackingField_5(bool value)
	{
		___U3CIsInactiveU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CCustomPropertiesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___U3CCustomPropertiesU3Ek__BackingField_6)); }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * get_U3CCustomPropertiesU3Ek__BackingField_6() const { return ___U3CCustomPropertiesU3Ek__BackingField_6; }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 ** get_address_of_U3CCustomPropertiesU3Ek__BackingField_6() { return &___U3CCustomPropertiesU3Ek__BackingField_6; }
	inline void set_U3CCustomPropertiesU3Ek__BackingField_6(Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * value)
	{
		___U3CCustomPropertiesU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomPropertiesU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_TagObject_7() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___TagObject_7)); }
	inline RuntimeObject * get_TagObject_7() const { return ___TagObject_7; }
	inline RuntimeObject ** get_address_of_TagObject_7() { return &___TagObject_7; }
	inline void set_TagObject_7(RuntimeObject * value)
	{
		___TagObject_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TagObject_7), (void*)value);
	}
};


// Photon.Realtime.Region
struct  Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.Region::<Code>k__BackingField
	String_t* ___U3CCodeU3Ek__BackingField_0;
	// System.String Photon.Realtime.Region::<Cluster>k__BackingField
	String_t* ___U3CClusterU3Ek__BackingField_1;
	// System.String Photon.Realtime.Region::<HostAndPort>k__BackingField
	String_t* ___U3CHostAndPortU3Ek__BackingField_2;
	// System.Int32 Photon.Realtime.Region::<Ping>k__BackingField
	int32_t ___U3CPingU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99, ___U3CCodeU3Ek__BackingField_0)); }
	inline String_t* get_U3CCodeU3Ek__BackingField_0() const { return ___U3CCodeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CCodeU3Ek__BackingField_0() { return &___U3CCodeU3Ek__BackingField_0; }
	inline void set_U3CCodeU3Ek__BackingField_0(String_t* value)
	{
		___U3CCodeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCodeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClusterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99, ___U3CClusterU3Ek__BackingField_1)); }
	inline String_t* get_U3CClusterU3Ek__BackingField_1() const { return ___U3CClusterU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CClusterU3Ek__BackingField_1() { return &___U3CClusterU3Ek__BackingField_1; }
	inline void set_U3CClusterU3Ek__BackingField_1(String_t* value)
	{
		___U3CClusterU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClusterU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHostAndPortU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99, ___U3CHostAndPortU3Ek__BackingField_2)); }
	inline String_t* get_U3CHostAndPortU3Ek__BackingField_2() const { return ___U3CHostAndPortU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CHostAndPortU3Ek__BackingField_2() { return &___U3CHostAndPortU3Ek__BackingField_2; }
	inline void set_U3CHostAndPortU3Ek__BackingField_2(String_t* value)
	{
		___U3CHostAndPortU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHostAndPortU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPingU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99, ___U3CPingU3Ek__BackingField_3)); }
	inline int32_t get_U3CPingU3Ek__BackingField_3() const { return ___U3CPingU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CPingU3Ek__BackingField_3() { return &___U3CPingU3Ek__BackingField_3; }
	inline void set_U3CPingU3Ek__BackingField_3(int32_t value)
	{
		___U3CPingU3Ek__BackingField_3 = value;
	}
};


// Photon.Realtime.RegionHandler
struct  RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Photon.Realtime.Region> Photon.Realtime.RegionHandler::<EnabledRegions>k__BackingField
	List_1_tB57A7A42B7678B54F23F1B6112A0973D90CF4A59 * ___U3CEnabledRegionsU3Ek__BackingField_1;
	// System.String Photon.Realtime.RegionHandler::availableRegionCodes
	String_t* ___availableRegionCodes_2;
	// Photon.Realtime.Region Photon.Realtime.RegionHandler::bestRegionCache
	Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 * ___bestRegionCache_3;
	// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger> Photon.Realtime.RegionHandler::pingerList
	List_1_t54699F3EEDF9AFE6DB103B0349A2C451C05C30A2 * ___pingerList_4;
	// System.Action`1<Photon.Realtime.RegionHandler> Photon.Realtime.RegionHandler::onCompleteCall
	Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A * ___onCompleteCall_5;
	// System.Int32 Photon.Realtime.RegionHandler::previousPing
	int32_t ___previousPing_6;
	// System.Boolean Photon.Realtime.RegionHandler::<IsPinging>k__BackingField
	bool ___U3CIsPingingU3Ek__BackingField_7;
	// System.String Photon.Realtime.RegionHandler::previousSummaryProvided
	String_t* ___previousSummaryProvided_8;

public:
	inline static int32_t get_offset_of_U3CEnabledRegionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___U3CEnabledRegionsU3Ek__BackingField_1)); }
	inline List_1_tB57A7A42B7678B54F23F1B6112A0973D90CF4A59 * get_U3CEnabledRegionsU3Ek__BackingField_1() const { return ___U3CEnabledRegionsU3Ek__BackingField_1; }
	inline List_1_tB57A7A42B7678B54F23F1B6112A0973D90CF4A59 ** get_address_of_U3CEnabledRegionsU3Ek__BackingField_1() { return &___U3CEnabledRegionsU3Ek__BackingField_1; }
	inline void set_U3CEnabledRegionsU3Ek__BackingField_1(List_1_tB57A7A42B7678B54F23F1B6112A0973D90CF4A59 * value)
	{
		___U3CEnabledRegionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEnabledRegionsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_availableRegionCodes_2() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___availableRegionCodes_2)); }
	inline String_t* get_availableRegionCodes_2() const { return ___availableRegionCodes_2; }
	inline String_t** get_address_of_availableRegionCodes_2() { return &___availableRegionCodes_2; }
	inline void set_availableRegionCodes_2(String_t* value)
	{
		___availableRegionCodes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___availableRegionCodes_2), (void*)value);
	}

	inline static int32_t get_offset_of_bestRegionCache_3() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___bestRegionCache_3)); }
	inline Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 * get_bestRegionCache_3() const { return ___bestRegionCache_3; }
	inline Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 ** get_address_of_bestRegionCache_3() { return &___bestRegionCache_3; }
	inline void set_bestRegionCache_3(Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 * value)
	{
		___bestRegionCache_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bestRegionCache_3), (void*)value);
	}

	inline static int32_t get_offset_of_pingerList_4() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___pingerList_4)); }
	inline List_1_t54699F3EEDF9AFE6DB103B0349A2C451C05C30A2 * get_pingerList_4() const { return ___pingerList_4; }
	inline List_1_t54699F3EEDF9AFE6DB103B0349A2C451C05C30A2 ** get_address_of_pingerList_4() { return &___pingerList_4; }
	inline void set_pingerList_4(List_1_t54699F3EEDF9AFE6DB103B0349A2C451C05C30A2 * value)
	{
		___pingerList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pingerList_4), (void*)value);
	}

	inline static int32_t get_offset_of_onCompleteCall_5() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___onCompleteCall_5)); }
	inline Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A * get_onCompleteCall_5() const { return ___onCompleteCall_5; }
	inline Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A ** get_address_of_onCompleteCall_5() { return &___onCompleteCall_5; }
	inline void set_onCompleteCall_5(Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A * value)
	{
		___onCompleteCall_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCompleteCall_5), (void*)value);
	}

	inline static int32_t get_offset_of_previousPing_6() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___previousPing_6)); }
	inline int32_t get_previousPing_6() const { return ___previousPing_6; }
	inline int32_t* get_address_of_previousPing_6() { return &___previousPing_6; }
	inline void set_previousPing_6(int32_t value)
	{
		___previousPing_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsPingingU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___U3CIsPingingU3Ek__BackingField_7)); }
	inline bool get_U3CIsPingingU3Ek__BackingField_7() const { return ___U3CIsPingingU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsPingingU3Ek__BackingField_7() { return &___U3CIsPingingU3Ek__BackingField_7; }
	inline void set_U3CIsPingingU3Ek__BackingField_7(bool value)
	{
		___U3CIsPingingU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_previousSummaryProvided_8() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___previousSummaryProvided_8)); }
	inline String_t* get_previousSummaryProvided_8() const { return ___previousSummaryProvided_8; }
	inline String_t** get_address_of_previousSummaryProvided_8() { return &___previousSummaryProvided_8; }
	inline void set_previousSummaryProvided_8(String_t* value)
	{
		___previousSummaryProvided_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousSummaryProvided_8), (void*)value);
	}
};

struct RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF_StaticFields
{
public:
	// System.Type Photon.Realtime.RegionHandler::PingImplementation
	Type_t * ___PingImplementation_0;

public:
	inline static int32_t get_offset_of_PingImplementation_0() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF_StaticFields, ___PingImplementation_0)); }
	inline Type_t * get_PingImplementation_0() const { return ___PingImplementation_0; }
	inline Type_t ** get_address_of_PingImplementation_0() { return &___PingImplementation_0; }
	inline void set_PingImplementation_0(Type_t * value)
	{
		___PingImplementation_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PingImplementation_0), (void*)value);
	}
};


// Photon.Realtime.RoomInfo
struct  RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2  : public RuntimeObject
{
public:
	// System.Boolean Photon.Realtime.RoomInfo::RemovedFromList
	bool ___RemovedFromList_0;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::customProperties
	Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * ___customProperties_1;
	// System.Byte Photon.Realtime.RoomInfo::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Int32 Photon.Realtime.RoomInfo::emptyRoomTtl
	int32_t ___emptyRoomTtl_3;
	// System.Int32 Photon.Realtime.RoomInfo::playerTtl
	int32_t ___playerTtl_4;
	// System.String[] Photon.Realtime.RoomInfo::expectedUsers
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___expectedUsers_5;
	// System.Boolean Photon.Realtime.RoomInfo::isOpen
	bool ___isOpen_6;
	// System.Boolean Photon.Realtime.RoomInfo::isVisible
	bool ___isVisible_7;
	// System.Boolean Photon.Realtime.RoomInfo::autoCleanUp
	bool ___autoCleanUp_8;
	// System.String Photon.Realtime.RoomInfo::name
	String_t* ___name_9;
	// System.Int32 Photon.Realtime.RoomInfo::masterClientId
	int32_t ___masterClientId_10;
	// System.String[] Photon.Realtime.RoomInfo::propertiesListedInLobby
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___propertiesListedInLobby_11;
	// System.Int32 Photon.Realtime.RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_RemovedFromList_0() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___RemovedFromList_0)); }
	inline bool get_RemovedFromList_0() const { return ___RemovedFromList_0; }
	inline bool* get_address_of_RemovedFromList_0() { return &___RemovedFromList_0; }
	inline void set_RemovedFromList_0(bool value)
	{
		___RemovedFromList_0 = value;
	}

	inline static int32_t get_offset_of_customProperties_1() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___customProperties_1)); }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * get_customProperties_1() const { return ___customProperties_1; }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 ** get_address_of_customProperties_1() { return &___customProperties_1; }
	inline void set_customProperties_1(Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * value)
	{
		___customProperties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customProperties_1), (void*)value);
	}

	inline static int32_t get_offset_of_maxPlayers_2() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___maxPlayers_2)); }
	inline uint8_t get_maxPlayers_2() const { return ___maxPlayers_2; }
	inline uint8_t* get_address_of_maxPlayers_2() { return &___maxPlayers_2; }
	inline void set_maxPlayers_2(uint8_t value)
	{
		___maxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_emptyRoomTtl_3() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___emptyRoomTtl_3)); }
	inline int32_t get_emptyRoomTtl_3() const { return ___emptyRoomTtl_3; }
	inline int32_t* get_address_of_emptyRoomTtl_3() { return &___emptyRoomTtl_3; }
	inline void set_emptyRoomTtl_3(int32_t value)
	{
		___emptyRoomTtl_3 = value;
	}

	inline static int32_t get_offset_of_playerTtl_4() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___playerTtl_4)); }
	inline int32_t get_playerTtl_4() const { return ___playerTtl_4; }
	inline int32_t* get_address_of_playerTtl_4() { return &___playerTtl_4; }
	inline void set_playerTtl_4(int32_t value)
	{
		___playerTtl_4 = value;
	}

	inline static int32_t get_offset_of_expectedUsers_5() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___expectedUsers_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_expectedUsers_5() const { return ___expectedUsers_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_expectedUsers_5() { return &___expectedUsers_5; }
	inline void set_expectedUsers_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___expectedUsers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expectedUsers_5), (void*)value);
	}

	inline static int32_t get_offset_of_isOpen_6() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___isOpen_6)); }
	inline bool get_isOpen_6() const { return ___isOpen_6; }
	inline bool* get_address_of_isOpen_6() { return &___isOpen_6; }
	inline void set_isOpen_6(bool value)
	{
		___isOpen_6 = value;
	}

	inline static int32_t get_offset_of_isVisible_7() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___isVisible_7)); }
	inline bool get_isVisible_7() const { return ___isVisible_7; }
	inline bool* get_address_of_isVisible_7() { return &___isVisible_7; }
	inline void set_isVisible_7(bool value)
	{
		___isVisible_7 = value;
	}

	inline static int32_t get_offset_of_autoCleanUp_8() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___autoCleanUp_8)); }
	inline bool get_autoCleanUp_8() const { return ___autoCleanUp_8; }
	inline bool* get_address_of_autoCleanUp_8() { return &___autoCleanUp_8; }
	inline void set_autoCleanUp_8(bool value)
	{
		___autoCleanUp_8 = value;
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_masterClientId_10() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___masterClientId_10)); }
	inline int32_t get_masterClientId_10() const { return ___masterClientId_10; }
	inline int32_t* get_address_of_masterClientId_10() { return &___masterClientId_10; }
	inline void set_masterClientId_10(int32_t value)
	{
		___masterClientId_10 = value;
	}

	inline static int32_t get_offset_of_propertiesListedInLobby_11() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___propertiesListedInLobby_11)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_propertiesListedInLobby_11() const { return ___propertiesListedInLobby_11; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_propertiesListedInLobby_11() { return &___propertiesListedInLobby_11; }
	inline void set_propertiesListedInLobby_11(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___propertiesListedInLobby_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertiesListedInLobby_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayerCountU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___U3CPlayerCountU3Ek__BackingField_12)); }
	inline int32_t get_U3CPlayerCountU3Ek__BackingField_12() const { return ___U3CPlayerCountU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CPlayerCountU3Ek__BackingField_12() { return &___U3CPlayerCountU3Ek__BackingField_12; }
	inline void set_U3CPlayerCountU3Ek__BackingField_12(int32_t value)
	{
		___U3CPlayerCountU3Ek__BackingField_12 = value;
	}
};


// Photon.Realtime.RoomOptions
struct  RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906  : public RuntimeObject
{
public:
	// System.Boolean Photon.Realtime.RoomOptions::isVisible
	bool ___isVisible_0;
	// System.Boolean Photon.Realtime.RoomOptions::isOpen
	bool ___isOpen_1;
	// System.Byte Photon.Realtime.RoomOptions::MaxPlayers
	uint8_t ___MaxPlayers_2;
	// System.Int32 Photon.Realtime.RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Int32 Photon.Realtime.RoomOptions::EmptyRoomTtl
	int32_t ___EmptyRoomTtl_4;
	// System.Boolean Photon.Realtime.RoomOptions::cleanupCacheOnLeave
	bool ___cleanupCacheOnLeave_5;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomOptions::CustomRoomProperties
	Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * ___CustomRoomProperties_6;
	// System.String[] Photon.Realtime.RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___CustomRoomPropertiesForLobby_7;
	// System.String[] Photon.Realtime.RoomOptions::Plugins
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___Plugins_8;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_9;
	// System.Boolean Photon.Realtime.RoomOptions::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.RoomOptions::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_11;
	// System.Boolean Photon.Realtime.RoomOptions::broadcastPropsChangeToAll
	bool ___broadcastPropsChangeToAll_12;

public:
	inline static int32_t get_offset_of_isVisible_0() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___isVisible_0)); }
	inline bool get_isVisible_0() const { return ___isVisible_0; }
	inline bool* get_address_of_isVisible_0() { return &___isVisible_0; }
	inline void set_isVisible_0(bool value)
	{
		___isVisible_0 = value;
	}

	inline static int32_t get_offset_of_isOpen_1() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___isOpen_1)); }
	inline bool get_isOpen_1() const { return ___isOpen_1; }
	inline bool* get_address_of_isOpen_1() { return &___isOpen_1; }
	inline void set_isOpen_1(bool value)
	{
		___isOpen_1 = value;
	}

	inline static int32_t get_offset_of_MaxPlayers_2() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___MaxPlayers_2)); }
	inline uint8_t get_MaxPlayers_2() const { return ___MaxPlayers_2; }
	inline uint8_t* get_address_of_MaxPlayers_2() { return &___MaxPlayers_2; }
	inline void set_MaxPlayers_2(uint8_t value)
	{
		___MaxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_PlayerTtl_3() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___PlayerTtl_3)); }
	inline int32_t get_PlayerTtl_3() const { return ___PlayerTtl_3; }
	inline int32_t* get_address_of_PlayerTtl_3() { return &___PlayerTtl_3; }
	inline void set_PlayerTtl_3(int32_t value)
	{
		___PlayerTtl_3 = value;
	}

	inline static int32_t get_offset_of_EmptyRoomTtl_4() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___EmptyRoomTtl_4)); }
	inline int32_t get_EmptyRoomTtl_4() const { return ___EmptyRoomTtl_4; }
	inline int32_t* get_address_of_EmptyRoomTtl_4() { return &___EmptyRoomTtl_4; }
	inline void set_EmptyRoomTtl_4(int32_t value)
	{
		___EmptyRoomTtl_4 = value;
	}

	inline static int32_t get_offset_of_cleanupCacheOnLeave_5() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___cleanupCacheOnLeave_5)); }
	inline bool get_cleanupCacheOnLeave_5() const { return ___cleanupCacheOnLeave_5; }
	inline bool* get_address_of_cleanupCacheOnLeave_5() { return &___cleanupCacheOnLeave_5; }
	inline void set_cleanupCacheOnLeave_5(bool value)
	{
		___cleanupCacheOnLeave_5 = value;
	}

	inline static int32_t get_offset_of_CustomRoomProperties_6() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___CustomRoomProperties_6)); }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * get_CustomRoomProperties_6() const { return ___CustomRoomProperties_6; }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 ** get_address_of_CustomRoomProperties_6() { return &___CustomRoomProperties_6; }
	inline void set_CustomRoomProperties_6(Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * value)
	{
		___CustomRoomProperties_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomRoomProperties_6), (void*)value);
	}

	inline static int32_t get_offset_of_CustomRoomPropertiesForLobby_7() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___CustomRoomPropertiesForLobby_7)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_CustomRoomPropertiesForLobby_7() const { return ___CustomRoomPropertiesForLobby_7; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_CustomRoomPropertiesForLobby_7() { return &___CustomRoomPropertiesForLobby_7; }
	inline void set_CustomRoomPropertiesForLobby_7(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___CustomRoomPropertiesForLobby_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomRoomPropertiesForLobby_7), (void*)value);
	}

	inline static int32_t get_offset_of_Plugins_8() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___Plugins_8)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_Plugins_8() const { return ___Plugins_8; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_Plugins_8() { return &___Plugins_8; }
	inline void set_Plugins_8(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___Plugins_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Plugins_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSuppressRoomEventsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___U3CSuppressRoomEventsU3Ek__BackingField_9)); }
	inline bool get_U3CSuppressRoomEventsU3Ek__BackingField_9() const { return ___U3CSuppressRoomEventsU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CSuppressRoomEventsU3Ek__BackingField_9() { return &___U3CSuppressRoomEventsU3Ek__BackingField_9; }
	inline void set_U3CSuppressRoomEventsU3Ek__BackingField_9(bool value)
	{
		___U3CSuppressRoomEventsU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CPublishUserIdU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___U3CPublishUserIdU3Ek__BackingField_10)); }
	inline bool get_U3CPublishUserIdU3Ek__BackingField_10() const { return ___U3CPublishUserIdU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CPublishUserIdU3Ek__BackingField_10() { return &___U3CPublishUserIdU3Ek__BackingField_10; }
	inline void set_U3CPublishUserIdU3Ek__BackingField_10(bool value)
	{
		___U3CPublishUserIdU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CDeleteNullPropertiesU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___U3CDeleteNullPropertiesU3Ek__BackingField_11)); }
	inline bool get_U3CDeleteNullPropertiesU3Ek__BackingField_11() const { return ___U3CDeleteNullPropertiesU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CDeleteNullPropertiesU3Ek__BackingField_11() { return &___U3CDeleteNullPropertiesU3Ek__BackingField_11; }
	inline void set_U3CDeleteNullPropertiesU3Ek__BackingField_11(bool value)
	{
		___U3CDeleteNullPropertiesU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_broadcastPropsChangeToAll_12() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___broadcastPropsChangeToAll_12)); }
	inline bool get_broadcastPropsChangeToAll_12() const { return ___broadcastPropsChangeToAll_12; }
	inline bool* get_address_of_broadcastPropsChangeToAll_12() { return &___broadcastPropsChangeToAll_12; }
	inline void set_broadcastPropsChangeToAll_12(bool value)
	{
		___broadcastPropsChangeToAll_12 = value;
	}
};


// Question
struct  Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC  : public RuntimeObject
{
public:
	// System.String Question::question
	String_t* ___question_0;
	// System.Collections.Generic.List`1<System.String> Question::optionsanswers
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___optionsanswers_1;
	// System.String Question::rightAnswer
	String_t* ___rightAnswer_2;
	// System.Boolean Question::isTrue
	bool ___isTrue_3;

public:
	inline static int32_t get_offset_of_question_0() { return static_cast<int32_t>(offsetof(Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC, ___question_0)); }
	inline String_t* get_question_0() const { return ___question_0; }
	inline String_t** get_address_of_question_0() { return &___question_0; }
	inline void set_question_0(String_t* value)
	{
		___question_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___question_0), (void*)value);
	}

	inline static int32_t get_offset_of_optionsanswers_1() { return static_cast<int32_t>(offsetof(Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC, ___optionsanswers_1)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_optionsanswers_1() const { return ___optionsanswers_1; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_optionsanswers_1() { return &___optionsanswers_1; }
	inline void set_optionsanswers_1(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___optionsanswers_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___optionsanswers_1), (void*)value);
	}

	inline static int32_t get_offset_of_rightAnswer_2() { return static_cast<int32_t>(offsetof(Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC, ___rightAnswer_2)); }
	inline String_t* get_rightAnswer_2() const { return ___rightAnswer_2; }
	inline String_t** get_address_of_rightAnswer_2() { return &___rightAnswer_2; }
	inline void set_rightAnswer_2(String_t* value)
	{
		___rightAnswer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightAnswer_2), (void*)value);
	}

	inline static int32_t get_offset_of_isTrue_3() { return static_cast<int32_t>(offsetof(Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC, ___isTrue_3)); }
	inline bool get_isTrue_3() const { return ___isTrue_3; }
	inline bool* get_address_of_isTrue_3() { return &___isTrue_3; }
	inline void set_isTrue_3(bool value)
	{
		___isTrue_3 = value;
	}
};


// Randomizelist
struct  Randomizelist_t6B800F6D494AD3A14529F438D5FEA6F8EF7D9F41  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___entries_1)); }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___keys_7)); }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___values_8)); }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct  List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662, ____items_1)); }
	inline FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* get__items_1() const { return ____items_1; }
	inline FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662_StaticFields, ____emptyArray_5)); }
	inline FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct  List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28, ____items_1)); }
	inline RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* get__items_1() const { return ____items_1; }
	inline RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28_StaticFields, ____emptyArray_5)); }
	inline RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct  List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459, ____items_1)); }
	inline TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* get__items_1() const { return ____items_1; }
	inline TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459_StaticFields, ____emptyArray_5)); }
	inline TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Question>
struct  List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QuestionU5BU5D_t8FC7EC9B3A1152424EB02BB34293E4EA506B195E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D, ____items_1)); }
	inline QuestionU5BU5D_t8FC7EC9B3A1152424EB02BB34293E4EA506B195E* get__items_1() const { return ____items_1; }
	inline QuestionU5BU5D_t8FC7EC9B3A1152424EB02BB34293E4EA506B195E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QuestionU5BU5D_t8FC7EC9B3A1152424EB02BB34293E4EA506B195E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QuestionU5BU5D_t8FC7EC9B3A1152424EB02BB34293E4EA506B195E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D_StaticFields, ____emptyArray_5)); }
	inline QuestionU5BU5D_t8FC7EC9B3A1152424EB02BB34293E4EA506B195E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QuestionU5BU5D_t8FC7EC9B3A1152424EB02BB34293E4EA506B195E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QuestionU5BU5D_t8FC7EC9B3A1152424EB02BB34293E4EA506B195E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct  List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ButtonU5BU5D_t363EC059ECDBD3DE56740518F34D8C070331649B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5, ____items_1)); }
	inline ButtonU5BU5D_t363EC059ECDBD3DE56740518F34D8C070331649B* get__items_1() const { return ____items_1; }
	inline ButtonU5BU5D_t363EC059ECDBD3DE56740518F34D8C070331649B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ButtonU5BU5D_t363EC059ECDBD3DE56740518F34D8C070331649B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ButtonU5BU5D_t363EC059ECDBD3DE56740518F34D8C070331649B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5_StaticFields, ____emptyArray_5)); }
	inline ButtonU5BU5D_t363EC059ECDBD3DE56740518F34D8C070331649B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ButtonU5BU5D_t363EC059ECDBD3DE56740518F34D8C070331649B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ButtonU5BU5D_t363EC059ECDBD3DE56740518F34D8C070331649B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UI_<>c__DisplayClass8_0
struct  U3CU3Ec__DisplayClass8_0_tBDC3524A6A4A9221ED85BEDF5879DC434E89D8E5  : public RuntimeObject
{
public:
	// UnityEngine.UI.Button UI_<>c__DisplayClass8_0::localbtn
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___localbtn_0;
	// UI UI_<>c__DisplayClass8_0::<>4__this
	UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_localbtn_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tBDC3524A6A4A9221ED85BEDF5879DC434E89D8E5, ___localbtn_0)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_localbtn_0() const { return ___localbtn_0; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_localbtn_0() { return &___localbtn_0; }
	inline void set_localbtn_0(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___localbtn_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localbtn_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tBDC3524A6A4A9221ED85BEDF5879DC434E89D8E5, ___U3CU3E4__this_1)); }
	inline UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// Photon.Realtime.Room
struct  Room_t5DFC39DD6736A2641374564EC6C31352BE33000D  : public RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::<LoadBalancingClient>k__BackingField
	LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___U3CLoadBalancingClientU3Ek__BackingField_13;
	// System.Boolean Photon.Realtime.Room::isOffline
	bool ___isOffline_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::players
	Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * ___players_15;
	// System.Boolean Photon.Realtime.Room::<BroadcastPropertiesChangeToAll>k__BackingField
	bool ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CLoadBalancingClientU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___U3CLoadBalancingClientU3Ek__BackingField_13)); }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * get_U3CLoadBalancingClientU3Ek__BackingField_13() const { return ___U3CLoadBalancingClientU3Ek__BackingField_13; }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A ** get_address_of_U3CLoadBalancingClientU3Ek__BackingField_13() { return &___U3CLoadBalancingClientU3Ek__BackingField_13; }
	inline void set_U3CLoadBalancingClientU3Ek__BackingField_13(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * value)
	{
		___U3CLoadBalancingClientU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadBalancingClientU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_isOffline_14() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___isOffline_14)); }
	inline bool get_isOffline_14() const { return ___isOffline_14; }
	inline bool* get_address_of_isOffline_14() { return &___isOffline_14; }
	inline void set_isOffline_14(bool value)
	{
		___isOffline_14 = value;
	}

	inline static int32_t get_offset_of_players_15() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___players_15)); }
	inline Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * get_players_15() const { return ___players_15; }
	inline Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 ** get_address_of_players_15() { return &___players_15; }
	inline void set_players_15(Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * value)
	{
		___players_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___players_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16)); }
	inline bool get_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() const { return ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() { return &___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16; }
	inline void set_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16(bool value)
	{
		___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// TMPro.MaterialReference
struct  MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fontAsset_1)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___material_3)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_3() const { return ___material_3; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fallbackMaterial_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// TMPro.TMP_FontStyleStack
struct  TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<System.Int32>
struct  TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293, ___m_ItemStack_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<System.Single>
struct  TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	float ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106, ___m_ItemStack_0)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106, ___m_DefaultItem_3)); }
	inline float get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline float* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(float value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient>
struct  TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_ItemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_DefaultItem_3)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_DefaultItem_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_3), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03__padding[1];
	};

public:
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent
struct  UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_t88D433895B07AE9EB31E0F34FC262179ACE45C3D 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_t88D433895B07AE9EB31E0F34FC262179ACE45C3D, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DebugLevel
struct  DebugLevel_t47E84DB42FD6F15046A870127EDABC67C73683E1 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_t47E84DB42FD6F15046A870127EDABC67C73683E1, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.SerializationProtocol
struct  SerializationProtocol_t1E2CCB86223CBC2FD46F7EAA30F82E6E648ACD52 
{
public:
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationProtocol_t1E2CCB86223CBC2FD46F7EAA30F82E6E648ACD52, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MaterialUI.ToastControl
struct  ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7  : public RuntimeObject
{
public:

public:
};

struct ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields
{
public:
	// UnityEngine.GameObject MaterialUI.ToastControl::theToast
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___theToast_0;
	// System.String MaterialUI.ToastControl::toastText
	String_t* ___toastText_1;
	// System.Single MaterialUI.ToastControl::toastDuration
	float ___toastDuration_2;
	// UnityEngine.Color MaterialUI.ToastControl::toastPanelColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___toastPanelColor_3;
	// UnityEngine.Color MaterialUI.ToastControl::toastTextColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___toastTextColor_4;
	// System.Int32 MaterialUI.ToastControl::toastFontSize
	int32_t ___toastFontSize_5;
	// UnityEngine.Canvas MaterialUI.ToastControl::parentCanvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___parentCanvas_6;

public:
	inline static int32_t get_offset_of_theToast_0() { return static_cast<int32_t>(offsetof(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields, ___theToast_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_theToast_0() const { return ___theToast_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_theToast_0() { return &___theToast_0; }
	inline void set_theToast_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___theToast_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___theToast_0), (void*)value);
	}

	inline static int32_t get_offset_of_toastText_1() { return static_cast<int32_t>(offsetof(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields, ___toastText_1)); }
	inline String_t* get_toastText_1() const { return ___toastText_1; }
	inline String_t** get_address_of_toastText_1() { return &___toastText_1; }
	inline void set_toastText_1(String_t* value)
	{
		___toastText_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toastText_1), (void*)value);
	}

	inline static int32_t get_offset_of_toastDuration_2() { return static_cast<int32_t>(offsetof(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields, ___toastDuration_2)); }
	inline float get_toastDuration_2() const { return ___toastDuration_2; }
	inline float* get_address_of_toastDuration_2() { return &___toastDuration_2; }
	inline void set_toastDuration_2(float value)
	{
		___toastDuration_2 = value;
	}

	inline static int32_t get_offset_of_toastPanelColor_3() { return static_cast<int32_t>(offsetof(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields, ___toastPanelColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_toastPanelColor_3() const { return ___toastPanelColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_toastPanelColor_3() { return &___toastPanelColor_3; }
	inline void set_toastPanelColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___toastPanelColor_3 = value;
	}

	inline static int32_t get_offset_of_toastTextColor_4() { return static_cast<int32_t>(offsetof(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields, ___toastTextColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_toastTextColor_4() const { return ___toastTextColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_toastTextColor_4() { return &___toastTextColor_4; }
	inline void set_toastTextColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___toastTextColor_4 = value;
	}

	inline static int32_t get_offset_of_toastFontSize_5() { return static_cast<int32_t>(offsetof(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields, ___toastFontSize_5)); }
	inline int32_t get_toastFontSize_5() const { return ___toastFontSize_5; }
	inline int32_t* get_address_of_toastFontSize_5() { return &___toastFontSize_5; }
	inline void set_toastFontSize_5(int32_t value)
	{
		___toastFontSize_5 = value;
	}

	inline static int32_t get_offset_of_parentCanvas_6() { return static_cast<int32_t>(offsetof(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields, ___parentCanvas_6)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_parentCanvas_6() const { return ___parentCanvas_6; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_parentCanvas_6() { return &___parentCanvas_6; }
	inline void set_parentCanvas_6(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___parentCanvas_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentCanvas_6), (void*)value);
	}
};


// MaterialUI.ValType
struct  ValType_t4BDAD6F59B275F3F2F87B3A6975C446ECBBEA4BB 
{
public:
	// System.Int32 MaterialUI.ValType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ValType_t4BDAD6F59B275F3F2F87B3A6975C446ECBBEA4BB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.AuthModeOption
struct  AuthModeOption_tD09E4DA95C4EC0B4CC7EFC735D512F177EC4F829 
{
public:
	// System.Int32 Photon.Realtime.AuthModeOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthModeOption_tD09E4DA95C4EC0B4CC7EFC735D512F177EC4F829, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ClientState
struct  ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282 
{
public:
	// System.Int32 Photon.Realtime.ClientState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.DisconnectCause
struct  DisconnectCause_t8A969EFEB0FE2E4ABD5824250D4C9F7941F2650F 
{
public:
	// System.Int32 Photon.Realtime.DisconnectCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisconnectCause_t8A969EFEB0FE2E4ABD5824250D4C9F7941F2650F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.EncryptionMode
struct  EncryptionMode_t5BA959815A4DD1ABC4458E9951E81CB988CBE1F3 
{
public:
	// System.Int32 Photon.Realtime.EncryptionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EncryptionMode_t5BA959815A4DD1ABC4458E9951E81CB988CBE1F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.JoinType
struct  JoinType_t7BE6E5A9E95DEC68F63C8255504A5B53342028E0 
{
public:
	// System.Int32 Photon.Realtime.JoinType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoinType_t7BE6E5A9E95DEC68F63C8255504A5B53342028E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.LobbyType
struct  LobbyType_tC10229382E36CFEC2718583263A711F1C1F35305 
{
public:
	// System.Byte Photon.Realtime.LobbyType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LobbyType_tC10229382E36CFEC2718583263A711F1C1F35305, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.MatchmakingMode
struct  MatchmakingMode_t651CC6326D89D6C9F9E835B1179798740240062C 
{
public:
	// System.Byte Photon.Realtime.MatchmakingMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MatchmakingMode_t651CC6326D89D6C9F9E835B1179798740240062C, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ServerConnection
struct  ServerConnection_t5E49560AE3E1B85523C39B5EAB7EA09FE5363F68 
{
public:
	// System.Int32 Photon.Realtime.ServerConnection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServerConnection_t5E49560AE3E1B85523C39B5EAB7EA09FE5363F68, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// TMPro.ColorMode
struct  ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.Extents
struct  Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___min_0;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___min_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_min_0() const { return ___min_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___max_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_max_1() const { return ___max_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___max_1 = value;
	}
};


// TMPro.FontStyles
struct  FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct  FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference>
struct  TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_ItemStack_0)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_DefaultItem_3)); }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F * get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  value)
	{
		___m_DefaultItem_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}
};


// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32>
struct  TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_ItemStack_0)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_DefaultItem_3)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_Text_TextInputSources
struct  TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4 
{
public:
	// System.Int32 TMPro.TMP_Text_TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextElementType
struct  TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextAlignmentOptions
struct  TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct  TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct  TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct  TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct  VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topLeft_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topRight_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topRight_1() const { return ___topRight_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomLeft_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomRight_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct  VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventSystems.PointerEventData_InputButton
struct  InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData_InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___m_GameObject_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___module_1)); }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldPosition_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldNormal_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___screenPosition_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___screenPosition_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_pinvoke
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_com
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button_ButtonClickedEvent
struct  ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB  : public UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F
{
public:

public:
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Image_FillMethod
struct  FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5 
{
public:
	// System.Int32 UnityEngine.UI.Image_FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image_Type
struct  Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A 
{
public:
	// System.Int32 UnityEngine.UI.Image_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField_CharacterValidation
struct  CharacterValidation_t2661E1767E01D63D4C8CE8F95C53C617118F206E 
{
public:
	// System.Int32 UnityEngine.UI.InputField_CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t2661E1767E01D63D4C8CE8F95C53C617118F206E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField_ContentType
struct  ContentType_t8F7DB5382A51BC2D99814DEB6BCD904D5E5B2048 
{
public:
	// System.Int32 UnityEngine.UI.InputField_ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t8F7DB5382A51BC2D99814DEB6BCD904D5E5B2048, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField_InputType
struct  InputType_t1726189312457C509B0693B5ACDB9DA7387EB54A 
{
public:
	// System.Int32 UnityEngine.UI.InputField_InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t1726189312457C509B0693B5ACDB9DA7387EB54A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField_LineType
struct  LineType_t9C34D02DDDA75D3E914ADD9E417258B40D56DED6 
{
public:
	// System.Int32 UnityEngine.UI.InputField_LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t9C34D02DDDA75D3E914ADD9E417258B40D56DED6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider_Direction
struct  Direction_tAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E 
{
public:
	// System.Int32 UnityEngine.UI.Slider_Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Toggle_ToggleTransition
struct  ToggleTransition_t45980EB1352FF47B2D8D8EBC90385AB68939046D 
{
public:
	// System.Int32 UnityEngine.UI.Toggle_ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t45980EB1352FF47B2D8D8EBC90385AB68939046D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.AppSettings
struct  AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.AppSettings::AppIdRealtime
	String_t* ___AppIdRealtime_0;
	// System.String Photon.Realtime.AppSettings::AppIdChat
	String_t* ___AppIdChat_1;
	// System.String Photon.Realtime.AppSettings::AppIdVoice
	String_t* ___AppIdVoice_2;
	// System.String Photon.Realtime.AppSettings::AppVersion
	String_t* ___AppVersion_3;
	// System.Boolean Photon.Realtime.AppSettings::UseNameServer
	bool ___UseNameServer_4;
	// System.String Photon.Realtime.AppSettings::FixedRegion
	String_t* ___FixedRegion_5;
	// System.String Photon.Realtime.AppSettings::BestRegionSummaryFromStorage
	String_t* ___BestRegionSummaryFromStorage_6;
	// System.String Photon.Realtime.AppSettings::Server
	String_t* ___Server_7;
	// System.Int32 Photon.Realtime.AppSettings::Port
	int32_t ___Port_8;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Realtime.AppSettings::Protocol
	uint8_t ___Protocol_9;
	// Photon.Realtime.AuthModeOption Photon.Realtime.AppSettings::AuthMode
	int32_t ___AuthMode_10;
	// System.Boolean Photon.Realtime.AppSettings::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_11;
	// ExitGames.Client.Photon.DebugLevel Photon.Realtime.AppSettings::NetworkLogging
	uint8_t ___NetworkLogging_12;

public:
	inline static int32_t get_offset_of_AppIdRealtime_0() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___AppIdRealtime_0)); }
	inline String_t* get_AppIdRealtime_0() const { return ___AppIdRealtime_0; }
	inline String_t** get_address_of_AppIdRealtime_0() { return &___AppIdRealtime_0; }
	inline void set_AppIdRealtime_0(String_t* value)
	{
		___AppIdRealtime_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdRealtime_0), (void*)value);
	}

	inline static int32_t get_offset_of_AppIdChat_1() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___AppIdChat_1)); }
	inline String_t* get_AppIdChat_1() const { return ___AppIdChat_1; }
	inline String_t** get_address_of_AppIdChat_1() { return &___AppIdChat_1; }
	inline void set_AppIdChat_1(String_t* value)
	{
		___AppIdChat_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdChat_1), (void*)value);
	}

	inline static int32_t get_offset_of_AppIdVoice_2() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___AppIdVoice_2)); }
	inline String_t* get_AppIdVoice_2() const { return ___AppIdVoice_2; }
	inline String_t** get_address_of_AppIdVoice_2() { return &___AppIdVoice_2; }
	inline void set_AppIdVoice_2(String_t* value)
	{
		___AppIdVoice_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdVoice_2), (void*)value);
	}

	inline static int32_t get_offset_of_AppVersion_3() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___AppVersion_3)); }
	inline String_t* get_AppVersion_3() const { return ___AppVersion_3; }
	inline String_t** get_address_of_AppVersion_3() { return &___AppVersion_3; }
	inline void set_AppVersion_3(String_t* value)
	{
		___AppVersion_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppVersion_3), (void*)value);
	}

	inline static int32_t get_offset_of_UseNameServer_4() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___UseNameServer_4)); }
	inline bool get_UseNameServer_4() const { return ___UseNameServer_4; }
	inline bool* get_address_of_UseNameServer_4() { return &___UseNameServer_4; }
	inline void set_UseNameServer_4(bool value)
	{
		___UseNameServer_4 = value;
	}

	inline static int32_t get_offset_of_FixedRegion_5() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___FixedRegion_5)); }
	inline String_t* get_FixedRegion_5() const { return ___FixedRegion_5; }
	inline String_t** get_address_of_FixedRegion_5() { return &___FixedRegion_5; }
	inline void set_FixedRegion_5(String_t* value)
	{
		___FixedRegion_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FixedRegion_5), (void*)value);
	}

	inline static int32_t get_offset_of_BestRegionSummaryFromStorage_6() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___BestRegionSummaryFromStorage_6)); }
	inline String_t* get_BestRegionSummaryFromStorage_6() const { return ___BestRegionSummaryFromStorage_6; }
	inline String_t** get_address_of_BestRegionSummaryFromStorage_6() { return &___BestRegionSummaryFromStorage_6; }
	inline void set_BestRegionSummaryFromStorage_6(String_t* value)
	{
		___BestRegionSummaryFromStorage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BestRegionSummaryFromStorage_6), (void*)value);
	}

	inline static int32_t get_offset_of_Server_7() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___Server_7)); }
	inline String_t* get_Server_7() const { return ___Server_7; }
	inline String_t** get_address_of_Server_7() { return &___Server_7; }
	inline void set_Server_7(String_t* value)
	{
		___Server_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Server_7), (void*)value);
	}

	inline static int32_t get_offset_of_Port_8() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___Port_8)); }
	inline int32_t get_Port_8() const { return ___Port_8; }
	inline int32_t* get_address_of_Port_8() { return &___Port_8; }
	inline void set_Port_8(int32_t value)
	{
		___Port_8 = value;
	}

	inline static int32_t get_offset_of_Protocol_9() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___Protocol_9)); }
	inline uint8_t get_Protocol_9() const { return ___Protocol_9; }
	inline uint8_t* get_address_of_Protocol_9() { return &___Protocol_9; }
	inline void set_Protocol_9(uint8_t value)
	{
		___Protocol_9 = value;
	}

	inline static int32_t get_offset_of_AuthMode_10() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___AuthMode_10)); }
	inline int32_t get_AuthMode_10() const { return ___AuthMode_10; }
	inline int32_t* get_address_of_AuthMode_10() { return &___AuthMode_10; }
	inline void set_AuthMode_10(int32_t value)
	{
		___AuthMode_10 = value;
	}

	inline static int32_t get_offset_of_EnableLobbyStatistics_11() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___EnableLobbyStatistics_11)); }
	inline bool get_EnableLobbyStatistics_11() const { return ___EnableLobbyStatistics_11; }
	inline bool* get_address_of_EnableLobbyStatistics_11() { return &___EnableLobbyStatistics_11; }
	inline void set_EnableLobbyStatistics_11(bool value)
	{
		___EnableLobbyStatistics_11 = value;
	}

	inline static int32_t get_offset_of_NetworkLogging_12() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___NetworkLogging_12)); }
	inline uint8_t get_NetworkLogging_12() const { return ___NetworkLogging_12; }
	inline uint8_t* get_address_of_NetworkLogging_12() { return &___NetworkLogging_12; }
	inline void set_NetworkLogging_12(uint8_t value)
	{
		___NetworkLogging_12 = value;
	}
};


// Photon.Realtime.OpJoinRandomRoomParams
struct  OpJoinRandomRoomParams_tBA60CD40B89DB30CD938488D4E5D398A7F8C9D7E  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.OpJoinRandomRoomParams::ExpectedCustomRoomProperties
	Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * ___ExpectedCustomRoomProperties_0;
	// System.Byte Photon.Realtime.OpJoinRandomRoomParams::ExpectedMaxPlayers
	uint8_t ___ExpectedMaxPlayers_1;
	// Photon.Realtime.MatchmakingMode Photon.Realtime.OpJoinRandomRoomParams::MatchingType
	uint8_t ___MatchingType_2;
	// Photon.Realtime.TypedLobby Photon.Realtime.OpJoinRandomRoomParams::TypedLobby
	TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * ___TypedLobby_3;
	// System.String Photon.Realtime.OpJoinRandomRoomParams::SqlLobbyFilter
	String_t* ___SqlLobbyFilter_4;
	// System.String[] Photon.Realtime.OpJoinRandomRoomParams::ExpectedUsers
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___ExpectedUsers_5;

public:
	inline static int32_t get_offset_of_ExpectedCustomRoomProperties_0() { return static_cast<int32_t>(offsetof(OpJoinRandomRoomParams_tBA60CD40B89DB30CD938488D4E5D398A7F8C9D7E, ___ExpectedCustomRoomProperties_0)); }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * get_ExpectedCustomRoomProperties_0() const { return ___ExpectedCustomRoomProperties_0; }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 ** get_address_of_ExpectedCustomRoomProperties_0() { return &___ExpectedCustomRoomProperties_0; }
	inline void set_ExpectedCustomRoomProperties_0(Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * value)
	{
		___ExpectedCustomRoomProperties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpectedCustomRoomProperties_0), (void*)value);
	}

	inline static int32_t get_offset_of_ExpectedMaxPlayers_1() { return static_cast<int32_t>(offsetof(OpJoinRandomRoomParams_tBA60CD40B89DB30CD938488D4E5D398A7F8C9D7E, ___ExpectedMaxPlayers_1)); }
	inline uint8_t get_ExpectedMaxPlayers_1() const { return ___ExpectedMaxPlayers_1; }
	inline uint8_t* get_address_of_ExpectedMaxPlayers_1() { return &___ExpectedMaxPlayers_1; }
	inline void set_ExpectedMaxPlayers_1(uint8_t value)
	{
		___ExpectedMaxPlayers_1 = value;
	}

	inline static int32_t get_offset_of_MatchingType_2() { return static_cast<int32_t>(offsetof(OpJoinRandomRoomParams_tBA60CD40B89DB30CD938488D4E5D398A7F8C9D7E, ___MatchingType_2)); }
	inline uint8_t get_MatchingType_2() const { return ___MatchingType_2; }
	inline uint8_t* get_address_of_MatchingType_2() { return &___MatchingType_2; }
	inline void set_MatchingType_2(uint8_t value)
	{
		___MatchingType_2 = value;
	}

	inline static int32_t get_offset_of_TypedLobby_3() { return static_cast<int32_t>(offsetof(OpJoinRandomRoomParams_tBA60CD40B89DB30CD938488D4E5D398A7F8C9D7E, ___TypedLobby_3)); }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * get_TypedLobby_3() const { return ___TypedLobby_3; }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 ** get_address_of_TypedLobby_3() { return &___TypedLobby_3; }
	inline void set_TypedLobby_3(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * value)
	{
		___TypedLobby_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypedLobby_3), (void*)value);
	}

	inline static int32_t get_offset_of_SqlLobbyFilter_4() { return static_cast<int32_t>(offsetof(OpJoinRandomRoomParams_tBA60CD40B89DB30CD938488D4E5D398A7F8C9D7E, ___SqlLobbyFilter_4)); }
	inline String_t* get_SqlLobbyFilter_4() const { return ___SqlLobbyFilter_4; }
	inline String_t** get_address_of_SqlLobbyFilter_4() { return &___SqlLobbyFilter_4; }
	inline void set_SqlLobbyFilter_4(String_t* value)
	{
		___SqlLobbyFilter_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SqlLobbyFilter_4), (void*)value);
	}

	inline static int32_t get_offset_of_ExpectedUsers_5() { return static_cast<int32_t>(offsetof(OpJoinRandomRoomParams_tBA60CD40B89DB30CD938488D4E5D398A7F8C9D7E, ___ExpectedUsers_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_ExpectedUsers_5() const { return ___ExpectedUsers_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_ExpectedUsers_5() { return &___ExpectedUsers_5; }
	inline void set_ExpectedUsers_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___ExpectedUsers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpectedUsers_5), (void*)value);
	}
};


// Photon.Realtime.TypedLobby
struct  TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.TypedLobby::Name
	String_t* ___Name_0;
	// Photon.Realtime.LobbyType Photon.Realtime.TypedLobby::Type
	uint8_t ___Type_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5, ___Type_1)); }
	inline uint8_t get_Type_1() const { return ___Type_1; }
	inline uint8_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(uint8_t value)
	{
		___Type_1 = value;
	}
};

struct TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_StaticFields
{
public:
	// Photon.Realtime.TypedLobby Photon.Realtime.TypedLobby::Default
	TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * ___Default_2;

public:
	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_StaticFields, ___Default_2)); }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * get_Default_2() const { return ___Default_2; }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_2), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>
struct  Nullable_1_tBBF37BDD9D74A4951ED3EC593FEC521F4B3EF01A 
{
public:
	// T System.Nullable`1::value
	uint8_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tBBF37BDD9D74A4951ED3EC593FEC521F4B3EF01A, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tBBF37BDD9D74A4951ED3EC593FEC521F4B3EF01A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// TMPro.TMP_LineInfo
struct  TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.TextAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineExtents_19)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___lineExtents_19 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight>
struct  TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_ItemStack_0)); }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions>
struct  TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_ItemStack_0)); }
	inline TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t3D4152882C54B77C712688E910390D5C8E030463 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData_InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___m_PointerPress_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___hovered_9)); }
	inline List_1_t3D4152882C54B77C712688E910390D5C8E030463 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t3D4152882C54B77C712688E910390D5C8E030463 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t3D4152882C54B77C712688E910390D5C8E030463 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// Photon.Realtime.LoadBalancingClient
struct  LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A  : public RuntimeObject
{
public:
	// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::<LoadBalancingPeer>k__BackingField
	LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * ___U3CLoadBalancingPeerU3Ek__BackingField_0;
	// System.String Photon.Realtime.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String Photon.Realtime.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * ___U3CAuthValuesU3Ek__BackingField_3;
	// Photon.Realtime.AuthModeOption Photon.Realtime.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_4;
	// Photon.Realtime.EncryptionMode Photon.Realtime.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_5;
	// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol> Photon.Realtime.LoadBalancingClient::<ExpectedProtocol>k__BackingField
	Nullable_1_tBBF37BDD9D74A4951ED3EC593FEC521F4B3EF01A  ___U3CExpectedProtocolU3Ek__BackingField_6;
	// System.String Photon.Realtime.LoadBalancingClient::tokenCache
	String_t* ___tokenCache_7;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_8;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_9;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHttp
	String_t* ___NameServerHttp_10;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12;
	// System.String Photon.Realtime.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_13;
	// System.String Photon.Realtime.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_14;
	// Photon.Realtime.ServerConnection Photon.Realtime.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_15;
	// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::state
	int32_t ___state_16;
	// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState> Photon.Realtime.LoadBalancingClient::StateChanged
	Action_2_tD4F07FC3F0B08A4BE3D400AB1E3553E633312299 * ___StateChanged_17;
	// System.Action`1<ExitGames.Client.Photon.EventData> Photon.Realtime.LoadBalancingClient::EventReceived
	Action_1_t0BFBCFBFCF805245DC59FFE0488500B68114FD9B * ___EventReceived_18;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_t94D3F6ADD6D2C3A3CDB3173DAF80D4FF5702A34E * ___OpResponseReceived_19;
	// Photon.Realtime.ConnectionCallbacksContainer Photon.Realtime.LoadBalancingClient::ConnectionCallbackTargets
	ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 * ___ConnectionCallbackTargets_20;
	// Photon.Realtime.MatchMakingCallbacksContainer Photon.Realtime.LoadBalancingClient::MatchMakingCallbackTargets
	MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 * ___MatchMakingCallbackTargets_21;
	// Photon.Realtime.InRoomCallbacksContainer Photon.Realtime.LoadBalancingClient::InRoomCallbackTargets
	InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D * ___InRoomCallbackTargets_22;
	// Photon.Realtime.LobbyCallbacksContainer Photon.Realtime.LoadBalancingClient::LobbyCallbackTargets
	LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 * ___LobbyCallbackTargets_23;
	// Photon.Realtime.WebRpcCallbacksContainer Photon.Realtime.LoadBalancingClient::WebRpcCallbackTargets
	WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * ___WebRpcCallbackTargets_24;
	// Photon.Realtime.ErrorInfoCallbacksContainer Photon.Realtime.LoadBalancingClient::ErrorInfoCallbackTargets
	ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 * ___ErrorInfoCallbackTargets_25;
	// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_26;
	// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * ___U3CCurrentLobbyU3Ek__BackingField_27;
	// System.Boolean Photon.Realtime.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_28;
	// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo> Photon.Realtime.LoadBalancingClient::lobbyStatistics
	List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459 * ___lobbyStatistics_29;
	// Photon.Realtime.Player Photon.Realtime.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___U3CLocalPlayerU3Ek__BackingField_30;
	// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::<CurrentRoom>k__BackingField
	Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * ___U3CCurrentRoomU3Ek__BackingField_31;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_32;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_33;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_34;
	// Photon.Realtime.JoinType Photon.Realtime.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_35;
	// Photon.Realtime.EnterRoomParams Photon.Realtime.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * ___enterRoomParamsCache_36;
	// ExitGames.Client.Photon.OperationResponse Photon.Realtime.LoadBalancingClient::failedRoomEntryOperation
	OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * ___failedRoomEntryOperation_37;
	// System.String[] Photon.Realtime.LoadBalancingClient::friendListRequested
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___friendListRequested_39;
	// System.String Photon.Realtime.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_40;
	// System.String Photon.Realtime.LoadBalancingClient::<CurrentCluster>k__BackingField
	String_t* ___U3CCurrentClusterU3Ek__BackingField_41;
	// Photon.Realtime.RegionHandler Photon.Realtime.LoadBalancingClient::RegionHandler
	RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * ___RegionHandler_42;
	// System.String Photon.Realtime.LoadBalancingClient::bestRegionSummaryFromStorage
	String_t* ___bestRegionSummaryFromStorage_43;
	// System.String Photon.Realtime.LoadBalancingClient::SummaryToCache
	String_t* ___SummaryToCache_44;
	// System.Boolean Photon.Realtime.LoadBalancingClient::connectToBestRegion
	bool ___connectToBestRegion_45;
	// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient_CallbackTargetChange> Photon.Realtime.LoadBalancingClient::callbackTargetChanges
	Queue_1_t2DF167EE7F886C6E1CE292988624D5634AF12DE2 * ___callbackTargetChanges_46;
	// System.Collections.Generic.HashSet`1<System.Object> Photon.Realtime.LoadBalancingClient::callbackTargets
	HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5 * ___callbackTargets_47;

public:
	inline static int32_t get_offset_of_U3CLoadBalancingPeerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CLoadBalancingPeerU3Ek__BackingField_0)); }
	inline LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * get_U3CLoadBalancingPeerU3Ek__BackingField_0() const { return ___U3CLoadBalancingPeerU3Ek__BackingField_0; }
	inline LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 ** get_address_of_U3CLoadBalancingPeerU3Ek__BackingField_0() { return &___U3CLoadBalancingPeerU3Ek__BackingField_0; }
	inline void set_U3CLoadBalancingPeerU3Ek__BackingField_0(LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * value)
	{
		___U3CLoadBalancingPeerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadBalancingPeerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CAppVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_1() const { return ___U3CAppVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_1() { return &___U3CAppVersionU3Ek__BackingField_1; }
	inline void set_U3CAppVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CAppIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_2() const { return ___U3CAppIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_2() { return &___U3CAppIdU3Ek__BackingField_2; }
	inline void set_U3CAppIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppIdU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CAuthValuesU3Ek__BackingField_3)); }
	inline AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * get_U3CAuthValuesU3Ek__BackingField_3() const { return ___U3CAuthValuesU3Ek__BackingField_3; }
	inline AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 ** get_address_of_U3CAuthValuesU3Ek__BackingField_3() { return &___U3CAuthValuesU3Ek__BackingField_3; }
	inline void set_U3CAuthValuesU3Ek__BackingField_3(AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * value)
	{
		___U3CAuthValuesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthValuesU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_AuthMode_4() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___AuthMode_4)); }
	inline int32_t get_AuthMode_4() const { return ___AuthMode_4; }
	inline int32_t* get_address_of_AuthMode_4() { return &___AuthMode_4; }
	inline void set_AuthMode_4(int32_t value)
	{
		___AuthMode_4 = value;
	}

	inline static int32_t get_offset_of_EncryptionMode_5() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___EncryptionMode_5)); }
	inline int32_t get_EncryptionMode_5() const { return ___EncryptionMode_5; }
	inline int32_t* get_address_of_EncryptionMode_5() { return &___EncryptionMode_5; }
	inline void set_EncryptionMode_5(int32_t value)
	{
		___EncryptionMode_5 = value;
	}

	inline static int32_t get_offset_of_U3CExpectedProtocolU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CExpectedProtocolU3Ek__BackingField_6)); }
	inline Nullable_1_tBBF37BDD9D74A4951ED3EC593FEC521F4B3EF01A  get_U3CExpectedProtocolU3Ek__BackingField_6() const { return ___U3CExpectedProtocolU3Ek__BackingField_6; }
	inline Nullable_1_tBBF37BDD9D74A4951ED3EC593FEC521F4B3EF01A * get_address_of_U3CExpectedProtocolU3Ek__BackingField_6() { return &___U3CExpectedProtocolU3Ek__BackingField_6; }
	inline void set_U3CExpectedProtocolU3Ek__BackingField_6(Nullable_1_tBBF37BDD9D74A4951ED3EC593FEC521F4B3EF01A  value)
	{
		___U3CExpectedProtocolU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_tokenCache_7() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___tokenCache_7)); }
	inline String_t* get_tokenCache_7() const { return ___tokenCache_7; }
	inline String_t** get_address_of_tokenCache_7() { return &___tokenCache_7; }
	inline void set_tokenCache_7(String_t* value)
	{
		___tokenCache_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenCache_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsUsingNameServerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CIsUsingNameServerU3Ek__BackingField_8)); }
	inline bool get_U3CIsUsingNameServerU3Ek__BackingField_8() const { return ___U3CIsUsingNameServerU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsUsingNameServerU3Ek__BackingField_8() { return &___U3CIsUsingNameServerU3Ek__BackingField_8; }
	inline void set_U3CIsUsingNameServerU3Ek__BackingField_8(bool value)
	{
		___U3CIsUsingNameServerU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_NameServerHost_9() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___NameServerHost_9)); }
	inline String_t* get_NameServerHost_9() const { return ___NameServerHost_9; }
	inline String_t** get_address_of_NameServerHost_9() { return &___NameServerHost_9; }
	inline void set_NameServerHost_9(String_t* value)
	{
		___NameServerHost_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameServerHost_9), (void*)value);
	}

	inline static int32_t get_offset_of_NameServerHttp_10() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___NameServerHttp_10)); }
	inline String_t* get_NameServerHttp_10() const { return ___NameServerHttp_10; }
	inline String_t** get_address_of_NameServerHttp_10() { return &___NameServerHttp_10; }
	inline void set_NameServerHttp_10(String_t* value)
	{
		___NameServerHttp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameServerHttp_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12)); }
	inline bool get_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() const { return ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() { return &___U3CUseAlternativeUdpPortsU3Ek__BackingField_12; }
	inline void set_U3CUseAlternativeUdpPortsU3Ek__BackingField_12(bool value)
	{
		___U3CUseAlternativeUdpPortsU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CMasterServerAddressU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CMasterServerAddressU3Ek__BackingField_13)); }
	inline String_t* get_U3CMasterServerAddressU3Ek__BackingField_13() const { return ___U3CMasterServerAddressU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CMasterServerAddressU3Ek__BackingField_13() { return &___U3CMasterServerAddressU3Ek__BackingField_13; }
	inline void set_U3CMasterServerAddressU3Ek__BackingField_13(String_t* value)
	{
		___U3CMasterServerAddressU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMasterServerAddressU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameServerAddressU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CGameServerAddressU3Ek__BackingField_14)); }
	inline String_t* get_U3CGameServerAddressU3Ek__BackingField_14() const { return ___U3CGameServerAddressU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CGameServerAddressU3Ek__BackingField_14() { return &___U3CGameServerAddressU3Ek__BackingField_14; }
	inline void set_U3CGameServerAddressU3Ek__BackingField_14(String_t* value)
	{
		___U3CGameServerAddressU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameServerAddressU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CServerU3Ek__BackingField_15)); }
	inline int32_t get_U3CServerU3Ek__BackingField_15() const { return ___U3CServerU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CServerU3Ek__BackingField_15() { return &___U3CServerU3Ek__BackingField_15; }
	inline void set_U3CServerU3Ek__BackingField_15(int32_t value)
	{
		___U3CServerU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_state_16() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___state_16)); }
	inline int32_t get_state_16() const { return ___state_16; }
	inline int32_t* get_address_of_state_16() { return &___state_16; }
	inline void set_state_16(int32_t value)
	{
		___state_16 = value;
	}

	inline static int32_t get_offset_of_StateChanged_17() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___StateChanged_17)); }
	inline Action_2_tD4F07FC3F0B08A4BE3D400AB1E3553E633312299 * get_StateChanged_17() const { return ___StateChanged_17; }
	inline Action_2_tD4F07FC3F0B08A4BE3D400AB1E3553E633312299 ** get_address_of_StateChanged_17() { return &___StateChanged_17; }
	inline void set_StateChanged_17(Action_2_tD4F07FC3F0B08A4BE3D400AB1E3553E633312299 * value)
	{
		___StateChanged_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateChanged_17), (void*)value);
	}

	inline static int32_t get_offset_of_EventReceived_18() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___EventReceived_18)); }
	inline Action_1_t0BFBCFBFCF805245DC59FFE0488500B68114FD9B * get_EventReceived_18() const { return ___EventReceived_18; }
	inline Action_1_t0BFBCFBFCF805245DC59FFE0488500B68114FD9B ** get_address_of_EventReceived_18() { return &___EventReceived_18; }
	inline void set_EventReceived_18(Action_1_t0BFBCFBFCF805245DC59FFE0488500B68114FD9B * value)
	{
		___EventReceived_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventReceived_18), (void*)value);
	}

	inline static int32_t get_offset_of_OpResponseReceived_19() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___OpResponseReceived_19)); }
	inline Action_1_t94D3F6ADD6D2C3A3CDB3173DAF80D4FF5702A34E * get_OpResponseReceived_19() const { return ___OpResponseReceived_19; }
	inline Action_1_t94D3F6ADD6D2C3A3CDB3173DAF80D4FF5702A34E ** get_address_of_OpResponseReceived_19() { return &___OpResponseReceived_19; }
	inline void set_OpResponseReceived_19(Action_1_t94D3F6ADD6D2C3A3CDB3173DAF80D4FF5702A34E * value)
	{
		___OpResponseReceived_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OpResponseReceived_19), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectionCallbackTargets_20() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___ConnectionCallbackTargets_20)); }
	inline ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 * get_ConnectionCallbackTargets_20() const { return ___ConnectionCallbackTargets_20; }
	inline ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 ** get_address_of_ConnectionCallbackTargets_20() { return &___ConnectionCallbackTargets_20; }
	inline void set_ConnectionCallbackTargets_20(ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 * value)
	{
		___ConnectionCallbackTargets_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionCallbackTargets_20), (void*)value);
	}

	inline static int32_t get_offset_of_MatchMakingCallbackTargets_21() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___MatchMakingCallbackTargets_21)); }
	inline MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 * get_MatchMakingCallbackTargets_21() const { return ___MatchMakingCallbackTargets_21; }
	inline MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 ** get_address_of_MatchMakingCallbackTargets_21() { return &___MatchMakingCallbackTargets_21; }
	inline void set_MatchMakingCallbackTargets_21(MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 * value)
	{
		___MatchMakingCallbackTargets_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MatchMakingCallbackTargets_21), (void*)value);
	}

	inline static int32_t get_offset_of_InRoomCallbackTargets_22() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___InRoomCallbackTargets_22)); }
	inline InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D * get_InRoomCallbackTargets_22() const { return ___InRoomCallbackTargets_22; }
	inline InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D ** get_address_of_InRoomCallbackTargets_22() { return &___InRoomCallbackTargets_22; }
	inline void set_InRoomCallbackTargets_22(InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D * value)
	{
		___InRoomCallbackTargets_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InRoomCallbackTargets_22), (void*)value);
	}

	inline static int32_t get_offset_of_LobbyCallbackTargets_23() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___LobbyCallbackTargets_23)); }
	inline LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 * get_LobbyCallbackTargets_23() const { return ___LobbyCallbackTargets_23; }
	inline LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 ** get_address_of_LobbyCallbackTargets_23() { return &___LobbyCallbackTargets_23; }
	inline void set_LobbyCallbackTargets_23(LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 * value)
	{
		___LobbyCallbackTargets_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LobbyCallbackTargets_23), (void*)value);
	}

	inline static int32_t get_offset_of_WebRpcCallbackTargets_24() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___WebRpcCallbackTargets_24)); }
	inline WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * get_WebRpcCallbackTargets_24() const { return ___WebRpcCallbackTargets_24; }
	inline WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 ** get_address_of_WebRpcCallbackTargets_24() { return &___WebRpcCallbackTargets_24; }
	inline void set_WebRpcCallbackTargets_24(WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * value)
	{
		___WebRpcCallbackTargets_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WebRpcCallbackTargets_24), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorInfoCallbackTargets_25() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___ErrorInfoCallbackTargets_25)); }
	inline ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 * get_ErrorInfoCallbackTargets_25() const { return ___ErrorInfoCallbackTargets_25; }
	inline ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 ** get_address_of_ErrorInfoCallbackTargets_25() { return &___ErrorInfoCallbackTargets_25; }
	inline void set_ErrorInfoCallbackTargets_25(ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 * value)
	{
		___ErrorInfoCallbackTargets_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorInfoCallbackTargets_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CDisconnectedCauseU3Ek__BackingField_26)); }
	inline int32_t get_U3CDisconnectedCauseU3Ek__BackingField_26() const { return ___U3CDisconnectedCauseU3Ek__BackingField_26; }
	inline int32_t* get_address_of_U3CDisconnectedCauseU3Ek__BackingField_26() { return &___U3CDisconnectedCauseU3Ek__BackingField_26; }
	inline void set_U3CDisconnectedCauseU3Ek__BackingField_26(int32_t value)
	{
		___U3CDisconnectedCauseU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentLobbyU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCurrentLobbyU3Ek__BackingField_27)); }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * get_U3CCurrentLobbyU3Ek__BackingField_27() const { return ___U3CCurrentLobbyU3Ek__BackingField_27; }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 ** get_address_of_U3CCurrentLobbyU3Ek__BackingField_27() { return &___U3CCurrentLobbyU3Ek__BackingField_27; }
	inline void set_U3CCurrentLobbyU3Ek__BackingField_27(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * value)
	{
		___U3CCurrentLobbyU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentLobbyU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_EnableLobbyStatistics_28() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___EnableLobbyStatistics_28)); }
	inline bool get_EnableLobbyStatistics_28() const { return ___EnableLobbyStatistics_28; }
	inline bool* get_address_of_EnableLobbyStatistics_28() { return &___EnableLobbyStatistics_28; }
	inline void set_EnableLobbyStatistics_28(bool value)
	{
		___EnableLobbyStatistics_28 = value;
	}

	inline static int32_t get_offset_of_lobbyStatistics_29() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___lobbyStatistics_29)); }
	inline List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459 * get_lobbyStatistics_29() const { return ___lobbyStatistics_29; }
	inline List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459 ** get_address_of_lobbyStatistics_29() { return &___lobbyStatistics_29; }
	inline void set_lobbyStatistics_29(List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459 * value)
	{
		___lobbyStatistics_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lobbyStatistics_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocalPlayerU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CLocalPlayerU3Ek__BackingField_30)); }
	inline Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * get_U3CLocalPlayerU3Ek__BackingField_30() const { return ___U3CLocalPlayerU3Ek__BackingField_30; }
	inline Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 ** get_address_of_U3CLocalPlayerU3Ek__BackingField_30() { return &___U3CLocalPlayerU3Ek__BackingField_30; }
	inline void set_U3CLocalPlayerU3Ek__BackingField_30(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * value)
	{
		___U3CLocalPlayerU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalPlayerU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentRoomU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCurrentRoomU3Ek__BackingField_31)); }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * get_U3CCurrentRoomU3Ek__BackingField_31() const { return ___U3CCurrentRoomU3Ek__BackingField_31; }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D ** get_address_of_U3CCurrentRoomU3Ek__BackingField_31() { return &___U3CCurrentRoomU3Ek__BackingField_31; }
	inline void set_U3CCurrentRoomU3Ek__BackingField_31(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * value)
	{
		___U3CCurrentRoomU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentRoomU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayersOnMasterCountU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CPlayersOnMasterCountU3Ek__BackingField_32)); }
	inline int32_t get_U3CPlayersOnMasterCountU3Ek__BackingField_32() const { return ___U3CPlayersOnMasterCountU3Ek__BackingField_32; }
	inline int32_t* get_address_of_U3CPlayersOnMasterCountU3Ek__BackingField_32() { return &___U3CPlayersOnMasterCountU3Ek__BackingField_32; }
	inline void set_U3CPlayersOnMasterCountU3Ek__BackingField_32(int32_t value)
	{
		___U3CPlayersOnMasterCountU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CPlayersInRoomsCountU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CPlayersInRoomsCountU3Ek__BackingField_33)); }
	inline int32_t get_U3CPlayersInRoomsCountU3Ek__BackingField_33() const { return ___U3CPlayersInRoomsCountU3Ek__BackingField_33; }
	inline int32_t* get_address_of_U3CPlayersInRoomsCountU3Ek__BackingField_33() { return &___U3CPlayersInRoomsCountU3Ek__BackingField_33; }
	inline void set_U3CPlayersInRoomsCountU3Ek__BackingField_33(int32_t value)
	{
		___U3CPlayersInRoomsCountU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CRoomsCountU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CRoomsCountU3Ek__BackingField_34)); }
	inline int32_t get_U3CRoomsCountU3Ek__BackingField_34() const { return ___U3CRoomsCountU3Ek__BackingField_34; }
	inline int32_t* get_address_of_U3CRoomsCountU3Ek__BackingField_34() { return &___U3CRoomsCountU3Ek__BackingField_34; }
	inline void set_U3CRoomsCountU3Ek__BackingField_34(int32_t value)
	{
		___U3CRoomsCountU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_lastJoinType_35() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___lastJoinType_35)); }
	inline int32_t get_lastJoinType_35() const { return ___lastJoinType_35; }
	inline int32_t* get_address_of_lastJoinType_35() { return &___lastJoinType_35; }
	inline void set_lastJoinType_35(int32_t value)
	{
		___lastJoinType_35 = value;
	}

	inline static int32_t get_offset_of_enterRoomParamsCache_36() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___enterRoomParamsCache_36)); }
	inline EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * get_enterRoomParamsCache_36() const { return ___enterRoomParamsCache_36; }
	inline EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 ** get_address_of_enterRoomParamsCache_36() { return &___enterRoomParamsCache_36; }
	inline void set_enterRoomParamsCache_36(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * value)
	{
		___enterRoomParamsCache_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enterRoomParamsCache_36), (void*)value);
	}

	inline static int32_t get_offset_of_failedRoomEntryOperation_37() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___failedRoomEntryOperation_37)); }
	inline OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * get_failedRoomEntryOperation_37() const { return ___failedRoomEntryOperation_37; }
	inline OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 ** get_address_of_failedRoomEntryOperation_37() { return &___failedRoomEntryOperation_37; }
	inline void set_failedRoomEntryOperation_37(OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * value)
	{
		___failedRoomEntryOperation_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___failedRoomEntryOperation_37), (void*)value);
	}

	inline static int32_t get_offset_of_friendListRequested_39() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___friendListRequested_39)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_friendListRequested_39() const { return ___friendListRequested_39; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_friendListRequested_39() { return &___friendListRequested_39; }
	inline void set_friendListRequested_39(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___friendListRequested_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___friendListRequested_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloudRegionU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCloudRegionU3Ek__BackingField_40)); }
	inline String_t* get_U3CCloudRegionU3Ek__BackingField_40() const { return ___U3CCloudRegionU3Ek__BackingField_40; }
	inline String_t** get_address_of_U3CCloudRegionU3Ek__BackingField_40() { return &___U3CCloudRegionU3Ek__BackingField_40; }
	inline void set_U3CCloudRegionU3Ek__BackingField_40(String_t* value)
	{
		___U3CCloudRegionU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCloudRegionU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentClusterU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCurrentClusterU3Ek__BackingField_41)); }
	inline String_t* get_U3CCurrentClusterU3Ek__BackingField_41() const { return ___U3CCurrentClusterU3Ek__BackingField_41; }
	inline String_t** get_address_of_U3CCurrentClusterU3Ek__BackingField_41() { return &___U3CCurrentClusterU3Ek__BackingField_41; }
	inline void set_U3CCurrentClusterU3Ek__BackingField_41(String_t* value)
	{
		___U3CCurrentClusterU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentClusterU3Ek__BackingField_41), (void*)value);
	}

	inline static int32_t get_offset_of_RegionHandler_42() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___RegionHandler_42)); }
	inline RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * get_RegionHandler_42() const { return ___RegionHandler_42; }
	inline RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF ** get_address_of_RegionHandler_42() { return &___RegionHandler_42; }
	inline void set_RegionHandler_42(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * value)
	{
		___RegionHandler_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RegionHandler_42), (void*)value);
	}

	inline static int32_t get_offset_of_bestRegionSummaryFromStorage_43() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___bestRegionSummaryFromStorage_43)); }
	inline String_t* get_bestRegionSummaryFromStorage_43() const { return ___bestRegionSummaryFromStorage_43; }
	inline String_t** get_address_of_bestRegionSummaryFromStorage_43() { return &___bestRegionSummaryFromStorage_43; }
	inline void set_bestRegionSummaryFromStorage_43(String_t* value)
	{
		___bestRegionSummaryFromStorage_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bestRegionSummaryFromStorage_43), (void*)value);
	}

	inline static int32_t get_offset_of_SummaryToCache_44() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___SummaryToCache_44)); }
	inline String_t* get_SummaryToCache_44() const { return ___SummaryToCache_44; }
	inline String_t** get_address_of_SummaryToCache_44() { return &___SummaryToCache_44; }
	inline void set_SummaryToCache_44(String_t* value)
	{
		___SummaryToCache_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SummaryToCache_44), (void*)value);
	}

	inline static int32_t get_offset_of_connectToBestRegion_45() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___connectToBestRegion_45)); }
	inline bool get_connectToBestRegion_45() const { return ___connectToBestRegion_45; }
	inline bool* get_address_of_connectToBestRegion_45() { return &___connectToBestRegion_45; }
	inline void set_connectToBestRegion_45(bool value)
	{
		___connectToBestRegion_45 = value;
	}

	inline static int32_t get_offset_of_callbackTargetChanges_46() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___callbackTargetChanges_46)); }
	inline Queue_1_t2DF167EE7F886C6E1CE292988624D5634AF12DE2 * get_callbackTargetChanges_46() const { return ___callbackTargetChanges_46; }
	inline Queue_1_t2DF167EE7F886C6E1CE292988624D5634AF12DE2 ** get_address_of_callbackTargetChanges_46() { return &___callbackTargetChanges_46; }
	inline void set_callbackTargetChanges_46(Queue_1_t2DF167EE7F886C6E1CE292988624D5634AF12DE2 * value)
	{
		___callbackTargetChanges_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackTargetChanges_46), (void*)value);
	}

	inline static int32_t get_offset_of_callbackTargets_47() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___callbackTargets_47)); }
	inline HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5 * get_callbackTargets_47() const { return ___callbackTargets_47; }
	inline HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5 ** get_address_of_callbackTargets_47() { return &___callbackTargets_47; }
	inline void set_callbackTargets_47(HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5 * value)
	{
		___callbackTargets_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackTargets_47), (void*)value);
	}
};

struct LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_tE99CD802FA4EC5AFCCCA534D426D974CC6BFF109 * ___ProtocolToNameServerPort_11;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_11() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A_StaticFields, ___ProtocolToNameServerPort_11)); }
	inline Dictionary_2_tE99CD802FA4EC5AFCCCA534D426D974CC6BFF109 * get_ProtocolToNameServerPort_11() const { return ___ProtocolToNameServerPort_11; }
	inline Dictionary_2_tE99CD802FA4EC5AFCCCA534D426D974CC6BFF109 ** get_address_of_ProtocolToNameServerPort_11() { return &___ProtocolToNameServerPort_11; }
	inline void set_ProtocolToNameServerPort_11(Dictionary_2_tE99CD802FA4EC5AFCCCA534D426D974CC6BFF109 * value)
	{
		___ProtocolToNameServerPort_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProtocolToNameServerPort_11), (void*)value);
	}
};


// QuestionTF
struct  QuestionTF_tF055331367AE7350C2C11CEC4E768F987EC6C400  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Collections.Generic.List`1<Question> QuestionTF::questionstf
	List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * ___questionstf_4;

public:
	inline static int32_t get_offset_of_questionstf_4() { return static_cast<int32_t>(offsetof(QuestionTF_tF055331367AE7350C2C11CEC4E768F987EC6C400, ___questionstf_4)); }
	inline List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * get_questionstf_4() const { return ___questionstf_4; }
	inline List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D ** get_address_of_questionstf_4() { return &___questionstf_4; }
	inline void set_questionstf_4(List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * value)
	{
		___questionstf_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___questionstf_4), (void*)value);
	}
};


// Quizdata
struct  Quizdata_t20C056F2E06D0D2CB062DF026A7A288587257D0C  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Collections.Generic.List`1<Question> Quizdata::questions
	List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * ___questions_4;

public:
	inline static int32_t get_offset_of_questions_4() { return static_cast<int32_t>(offsetof(Quizdata_t20C056F2E06D0D2CB062DF026A7A288587257D0C, ___questions_4)); }
	inline List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * get_questions_4() const { return ___questions_4; }
	inline List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D ** get_address_of_questions_4() { return &___questions_4; }
	inline void set_questions_4(List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * value)
	{
		___questions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___questions_4), (void*)value);
	}
};


// System.Action`1<Photon.Realtime.RegionHandler>
struct  Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// TMPro.WordWrapState
struct  WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_14;
	// System.Single TMPro.WordWrapState::previousLineAscender
	float ___previousLineAscender_15;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_16;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_17;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_18;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_19;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_20;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_21;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_22;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_23;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_24;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_25;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_26;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_27;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_28;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_29;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_30;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_31;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_32;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_33;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___colorStack_34;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___underlineColorStack_35;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___strikethroughColorStack_36;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___highlightColorStack_37;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___colorGradientStack_38;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___sizeStack_39;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___indentStack_40;
	// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___fontWeightStack_41;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  ___styleStack_42;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___baselineStack_43;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  ___actionStack_44;
	// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___materialReferenceStack_45;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___lineJustificationStack_46;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_47;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_48;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_49;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_50;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_51;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_52;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_53;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_54;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineAscender_13)); }
	inline float get_maxLineAscender_13() const { return ___maxLineAscender_13; }
	inline float* get_address_of_maxLineAscender_13() { return &___maxLineAscender_13; }
	inline void set_maxLineAscender_13(float value)
	{
		___maxLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineDescender_14)); }
	inline float get_maxLineDescender_14() const { return ___maxLineDescender_14; }
	inline float* get_address_of_maxLineDescender_14() { return &___maxLineDescender_14; }
	inline void set_maxLineDescender_14(float value)
	{
		___maxLineDescender_14 = value;
	}

	inline static int32_t get_offset_of_previousLineAscender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previousLineAscender_15)); }
	inline float get_previousLineAscender_15() const { return ___previousLineAscender_15; }
	inline float* get_address_of_previousLineAscender_15() { return &___previousLineAscender_15; }
	inline void set_previousLineAscender_15(float value)
	{
		___previousLineAscender_15 = value;
	}

	inline static int32_t get_offset_of_xAdvance_16() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___xAdvance_16)); }
	inline float get_xAdvance_16() const { return ___xAdvance_16; }
	inline float* get_address_of_xAdvance_16() { return &___xAdvance_16; }
	inline void set_xAdvance_16(float value)
	{
		___xAdvance_16 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_17() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredWidth_17)); }
	inline float get_preferredWidth_17() const { return ___preferredWidth_17; }
	inline float* get_address_of_preferredWidth_17() { return &___preferredWidth_17; }
	inline void set_preferredWidth_17(float value)
	{
		___preferredWidth_17 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_18() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredHeight_18)); }
	inline float get_preferredHeight_18() const { return ___preferredHeight_18; }
	inline float* get_address_of_preferredHeight_18() { return &___preferredHeight_18; }
	inline void set_preferredHeight_18(float value)
	{
		___preferredHeight_18 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_19() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previousLineScale_19)); }
	inline float get_previousLineScale_19() const { return ___previousLineScale_19; }
	inline float* get_address_of_previousLineScale_19() { return &___previousLineScale_19; }
	inline void set_previousLineScale_19(float value)
	{
		___previousLineScale_19 = value;
	}

	inline static int32_t get_offset_of_wordCount_20() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___wordCount_20)); }
	inline int32_t get_wordCount_20() const { return ___wordCount_20; }
	inline int32_t* get_address_of_wordCount_20() { return &___wordCount_20; }
	inline void set_wordCount_20(int32_t value)
	{
		___wordCount_20 = value;
	}

	inline static int32_t get_offset_of_fontStyle_21() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontStyle_21)); }
	inline int32_t get_fontStyle_21() const { return ___fontStyle_21; }
	inline int32_t* get_address_of_fontStyle_21() { return &___fontStyle_21; }
	inline void set_fontStyle_21(int32_t value)
	{
		___fontStyle_21 = value;
	}

	inline static int32_t get_offset_of_fontScale_22() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScale_22)); }
	inline float get_fontScale_22() const { return ___fontScale_22; }
	inline float* get_address_of_fontScale_22() { return &___fontScale_22; }
	inline void set_fontScale_22(float value)
	{
		___fontScale_22 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_23() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScaleMultiplier_23)); }
	inline float get_fontScaleMultiplier_23() const { return ___fontScaleMultiplier_23; }
	inline float* get_address_of_fontScaleMultiplier_23() { return &___fontScaleMultiplier_23; }
	inline void set_fontScaleMultiplier_23(float value)
	{
		___fontScaleMultiplier_23 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_24() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontSize_24)); }
	inline float get_currentFontSize_24() const { return ___currentFontSize_24; }
	inline float* get_address_of_currentFontSize_24() { return &___currentFontSize_24; }
	inline void set_currentFontSize_24(float value)
	{
		___currentFontSize_24 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_25() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineOffset_25)); }
	inline float get_baselineOffset_25() const { return ___baselineOffset_25; }
	inline float* get_address_of_baselineOffset_25() { return &___baselineOffset_25; }
	inline void set_baselineOffset_25(float value)
	{
		___baselineOffset_25 = value;
	}

	inline static int32_t get_offset_of_lineOffset_26() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineOffset_26)); }
	inline float get_lineOffset_26() const { return ___lineOffset_26; }
	inline float* get_address_of_lineOffset_26() { return &___lineOffset_26; }
	inline void set_lineOffset_26(float value)
	{
		___lineOffset_26 = value;
	}

	inline static int32_t get_offset_of_textInfo_27() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___textInfo_27)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_textInfo_27() const { return ___textInfo_27; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_textInfo_27() { return &___textInfo_27; }
	inline void set_textInfo_27(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___textInfo_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_27), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_28() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineInfo_28)); }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  get_lineInfo_28() const { return ___lineInfo_28; }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 * get_address_of_lineInfo_28() { return &___lineInfo_28; }
	inline void set_lineInfo_28(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  value)
	{
		___lineInfo_28 = value;
	}

	inline static int32_t get_offset_of_vertexColor_29() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___vertexColor_29)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_vertexColor_29() const { return ___vertexColor_29; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_vertexColor_29() { return &___vertexColor_29; }
	inline void set_vertexColor_29(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___vertexColor_29 = value;
	}

	inline static int32_t get_offset_of_underlineColor_30() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColor_30)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_underlineColor_30() const { return ___underlineColor_30; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_underlineColor_30() { return &___underlineColor_30; }
	inline void set_underlineColor_30(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___underlineColor_30 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_31() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColor_31)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_strikethroughColor_31() const { return ___strikethroughColor_31; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_strikethroughColor_31() { return &___strikethroughColor_31; }
	inline void set_strikethroughColor_31(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___strikethroughColor_31 = value;
	}

	inline static int32_t get_offset_of_highlightColor_32() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColor_32)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_highlightColor_32() const { return ___highlightColor_32; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_highlightColor_32() { return &___highlightColor_32; }
	inline void set_highlightColor_32(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___highlightColor_32 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_33() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___basicStyleStack_33)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_basicStyleStack_33() const { return ___basicStyleStack_33; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_basicStyleStack_33() { return &___basicStyleStack_33; }
	inline void set_basicStyleStack_33(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___basicStyleStack_33 = value;
	}

	inline static int32_t get_offset_of_colorStack_34() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorStack_34)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_colorStack_34() const { return ___colorStack_34; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_colorStack_34() { return &___colorStack_34; }
	inline void set_colorStack_34(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___colorStack_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_34))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_35() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColorStack_35)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_underlineColorStack_35() const { return ___underlineColorStack_35; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_underlineColorStack_35() { return &___underlineColorStack_35; }
	inline void set_underlineColorStack_35(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___underlineColorStack_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_35))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_36() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColorStack_36)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_strikethroughColorStack_36() const { return ___strikethroughColorStack_36; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_strikethroughColorStack_36() { return &___strikethroughColorStack_36; }
	inline void set_strikethroughColorStack_36(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___strikethroughColorStack_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_36))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_37() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColorStack_37)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_highlightColorStack_37() const { return ___highlightColorStack_37; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_highlightColorStack_37() { return &___highlightColorStack_37; }
	inline void set_highlightColorStack_37(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___highlightColorStack_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_37))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_38() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorGradientStack_38)); }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  get_colorGradientStack_38() const { return ___colorGradientStack_38; }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D * get_address_of_colorGradientStack_38() { return &___colorGradientStack_38; }
	inline void set_colorGradientStack_38(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  value)
	{
		___colorGradientStack_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_38))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_38))->___m_DefaultItem_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_39() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___sizeStack_39)); }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  get_sizeStack_39() const { return ___sizeStack_39; }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106 * get_address_of_sizeStack_39() { return &___sizeStack_39; }
	inline void set_sizeStack_39(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  value)
	{
		___sizeStack_39 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_39))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_40() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___indentStack_40)); }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  get_indentStack_40() const { return ___indentStack_40; }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106 * get_address_of_indentStack_40() { return &___indentStack_40; }
	inline void set_indentStack_40(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  value)
	{
		___indentStack_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_40))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontWeightStack_41)); }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  get_fontWeightStack_41() const { return ___fontWeightStack_41; }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B * get_address_of_fontWeightStack_41() { return &___fontWeightStack_41; }
	inline void set_fontWeightStack_41(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  value)
	{
		___fontWeightStack_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_41))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___styleStack_42)); }
	inline TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  get_styleStack_42() const { return ___styleStack_42; }
	inline TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293 * get_address_of_styleStack_42() { return &___styleStack_42; }
	inline void set_styleStack_42(TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  value)
	{
		___styleStack_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_42))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineStack_43)); }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  get_baselineStack_43() const { return ___baselineStack_43; }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106 * get_address_of_baselineStack_43() { return &___baselineStack_43; }
	inline void set_baselineStack_43(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  value)
	{
		___baselineStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_43))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___actionStack_44)); }
	inline TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  get_actionStack_44() const { return ___actionStack_44; }
	inline TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293 * get_address_of_actionStack_44() { return &___actionStack_44; }
	inline void set_actionStack_44(TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  value)
	{
		___actionStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_44))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___materialReferenceStack_45)); }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  get_materialReferenceStack_45() const { return ___materialReferenceStack_45; }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9 * get_address_of_materialReferenceStack_45() { return &___materialReferenceStack_45; }
	inline void set_materialReferenceStack_45(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  value)
	{
		___materialReferenceStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_45))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineJustificationStack_46)); }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  get_lineJustificationStack_46() const { return ___lineJustificationStack_46; }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115 * get_address_of_lineJustificationStack_46() { return &___lineJustificationStack_46; }
	inline void set_lineJustificationStack_46(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  value)
	{
		___lineJustificationStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_46))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_47() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___spriteAnimationID_47)); }
	inline int32_t get_spriteAnimationID_47() const { return ___spriteAnimationID_47; }
	inline int32_t* get_address_of_spriteAnimationID_47() { return &___spriteAnimationID_47; }
	inline void set_spriteAnimationID_47(int32_t value)
	{
		___spriteAnimationID_47 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_48() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontAsset_48)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_currentFontAsset_48() const { return ___currentFontAsset_48; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_currentFontAsset_48() { return &___currentFontAsset_48; }
	inline void set_currentFontAsset_48(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___currentFontAsset_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_48), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_49() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentSpriteAsset_49)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_currentSpriteAsset_49() const { return ___currentSpriteAsset_49; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_currentSpriteAsset_49() { return &___currentSpriteAsset_49; }
	inline void set_currentSpriteAsset_49(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___currentSpriteAsset_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_49), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_50() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterial_50)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_currentMaterial_50() const { return ___currentMaterial_50; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_currentMaterial_50() { return &___currentMaterial_50; }
	inline void set_currentMaterial_50(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___currentMaterial_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_50), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_51() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterialIndex_51)); }
	inline int32_t get_currentMaterialIndex_51() const { return ___currentMaterialIndex_51; }
	inline int32_t* get_address_of_currentMaterialIndex_51() { return &___currentMaterialIndex_51; }
	inline void set_currentMaterialIndex_51(int32_t value)
	{
		___currentMaterialIndex_51 = value;
	}

	inline static int32_t get_offset_of_meshExtents_52() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___meshExtents_52)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_meshExtents_52() const { return ___meshExtents_52; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_meshExtents_52() { return &___meshExtents_52; }
	inline void set_meshExtents_52(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___meshExtents_52 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_53() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___tagNoParsing_53)); }
	inline bool get_tagNoParsing_53() const { return ___tagNoParsing_53; }
	inline bool* get_address_of_tagNoParsing_53() { return &___tagNoParsing_53; }
	inline void set_tagNoParsing_53(bool value)
	{
		___tagNoParsing_53 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_54() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___isNonBreakingSpace_54)); }
	inline bool get_isNonBreakingSpace_54() const { return ___isNonBreakingSpace_54; }
	inline bool* get_address_of_isNonBreakingSpace_54() { return &___isNonBreakingSpace_54; }
	inline void set_isNonBreakingSpace_54(bool value)
	{
		___isNonBreakingSpace_54 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_27;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_28;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_29;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_30;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_31;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_32;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_33;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___colorStack_34;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___underlineColorStack_35;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___strikethroughColorStack_36;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___highlightColorStack_37;
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___colorGradientStack_38;
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___sizeStack_39;
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___indentStack_40;
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___fontWeightStack_41;
	TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  ___styleStack_42;
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___baselineStack_43;
	TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  ___actionStack_44;
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___materialReferenceStack_45;
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___lineJustificationStack_46;
	int32_t ___spriteAnimationID_47;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_48;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_49;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_50;
	int32_t ___currentMaterialIndex_51;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_52;
	int32_t ___tagNoParsing_53;
	int32_t ___isNonBreakingSpace_54;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_27;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_28;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_29;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_30;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_31;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_32;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_33;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___colorStack_34;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___underlineColorStack_35;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___strikethroughColorStack_36;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___highlightColorStack_37;
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___colorGradientStack_38;
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___sizeStack_39;
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___indentStack_40;
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___fontWeightStack_41;
	TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  ___styleStack_42;
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___baselineStack_43;
	TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  ___actionStack_44;
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___materialReferenceStack_45;
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___lineJustificationStack_46;
	int32_t ___spriteAnimationID_47;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_48;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_49;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_50;
	int32_t ___currentMaterialIndex_51;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_52;
	int32_t ___tagNoParsing_53;
	int32_t ___isNonBreakingSpace_54;
};

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct  UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Canvas
struct  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields
{
public:
	// UnityEngine.Canvas_WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_4), (void*)value);
	}
};


// UnityEngine.CanvasGroup
struct  CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.RectTransform
struct  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20  : public Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA
{
public:

public:
};

struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields
{
public:
	// UnityEngine.RectTransform_ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// MaterialUI.TextInputLine
struct  TextInputLine_t8BD57F962A87A06F0D47B22A21F9664E4A4BF056  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Color MaterialUI.TextInputLine::lineColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___lineColor_4;
	// UnityEngine.RectTransform MaterialUI.TextInputLine::thisRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___thisRect_5;
	// UnityEngine.UI.Image MaterialUI.TextInputLine::thisIm
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___thisIm_6;
	// UnityEngine.UI.Text MaterialUI.TextInputLine::placeholderText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___placeholderText_7;
	// UnityEngine.RectTransform MaterialUI.TextInputLine::textInputRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___textInputRect_8;
	// System.Single MaterialUI.TextInputLine::animStartTime
	float ___animStartTime_9;
	// System.Single MaterialUI.TextInputLine::animDeltaTime
	float ___animDeltaTime_10;
	// System.Single MaterialUI.TextInputLine::animPosX
	float ___animPosX_11;
	// System.Int32 MaterialUI.TextInputLine::mode
	int32_t ___mode_12;

public:
	inline static int32_t get_offset_of_lineColor_4() { return static_cast<int32_t>(offsetof(TextInputLine_t8BD57F962A87A06F0D47B22A21F9664E4A4BF056, ___lineColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_lineColor_4() const { return ___lineColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_lineColor_4() { return &___lineColor_4; }
	inline void set_lineColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___lineColor_4 = value;
	}

	inline static int32_t get_offset_of_thisRect_5() { return static_cast<int32_t>(offsetof(TextInputLine_t8BD57F962A87A06F0D47B22A21F9664E4A4BF056, ___thisRect_5)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_thisRect_5() const { return ___thisRect_5; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_thisRect_5() { return &___thisRect_5; }
	inline void set_thisRect_5(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___thisRect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thisRect_5), (void*)value);
	}

	inline static int32_t get_offset_of_thisIm_6() { return static_cast<int32_t>(offsetof(TextInputLine_t8BD57F962A87A06F0D47B22A21F9664E4A4BF056, ___thisIm_6)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_thisIm_6() const { return ___thisIm_6; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_thisIm_6() { return &___thisIm_6; }
	inline void set_thisIm_6(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___thisIm_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thisIm_6), (void*)value);
	}

	inline static int32_t get_offset_of_placeholderText_7() { return static_cast<int32_t>(offsetof(TextInputLine_t8BD57F962A87A06F0D47B22A21F9664E4A4BF056, ___placeholderText_7)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_placeholderText_7() const { return ___placeholderText_7; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_placeholderText_7() { return &___placeholderText_7; }
	inline void set_placeholderText_7(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___placeholderText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placeholderText_7), (void*)value);
	}

	inline static int32_t get_offset_of_textInputRect_8() { return static_cast<int32_t>(offsetof(TextInputLine_t8BD57F962A87A06F0D47B22A21F9664E4A4BF056, ___textInputRect_8)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_textInputRect_8() const { return ___textInputRect_8; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_textInputRect_8() { return &___textInputRect_8; }
	inline void set_textInputRect_8(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___textInputRect_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInputRect_8), (void*)value);
	}

	inline static int32_t get_offset_of_animStartTime_9() { return static_cast<int32_t>(offsetof(TextInputLine_t8BD57F962A87A06F0D47B22A21F9664E4A4BF056, ___animStartTime_9)); }
	inline float get_animStartTime_9() const { return ___animStartTime_9; }
	inline float* get_address_of_animStartTime_9() { return &___animStartTime_9; }
	inline void set_animStartTime_9(float value)
	{
		___animStartTime_9 = value;
	}

	inline static int32_t get_offset_of_animDeltaTime_10() { return static_cast<int32_t>(offsetof(TextInputLine_t8BD57F962A87A06F0D47B22A21F9664E4A4BF056, ___animDeltaTime_10)); }
	inline float get_animDeltaTime_10() const { return ___animDeltaTime_10; }
	inline float* get_address_of_animDeltaTime_10() { return &___animDeltaTime_10; }
	inline void set_animDeltaTime_10(float value)
	{
		___animDeltaTime_10 = value;
	}

	inline static int32_t get_offset_of_animPosX_11() { return static_cast<int32_t>(offsetof(TextInputLine_t8BD57F962A87A06F0D47B22A21F9664E4A4BF056, ___animPosX_11)); }
	inline float get_animPosX_11() const { return ___animPosX_11; }
	inline float* get_address_of_animPosX_11() { return &___animPosX_11; }
	inline void set_animPosX_11(float value)
	{
		___animPosX_11 = value;
	}

	inline static int32_t get_offset_of_mode_12() { return static_cast<int32_t>(offsetof(TextInputLine_t8BD57F962A87A06F0D47B22A21F9664E4A4BF056, ___mode_12)); }
	inline int32_t get_mode_12() const { return ___mode_12; }
	inline int32_t* get_address_of_mode_12() { return &___mode_12; }
	inline void set_mode_12(int32_t value)
	{
		___mode_12 = value;
	}
};


// MaterialUI.ToastAnim
struct  ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 MaterialUI.ToastAnim::state
	int32_t ___state_4;
	// UnityEngine.Vector2 MaterialUI.ToastAnim::onPos
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___onPos_5;
	// UnityEngine.Vector2 MaterialUI.ToastAnim::offPos
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___offPos_6;
	// UnityEngine.UI.Text MaterialUI.ToastAnim::text
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___text_7;
	// UnityEngine.RectTransform MaterialUI.ToastAnim::thisRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___thisRect_8;
	// UnityEngine.UI.Image MaterialUI.ToastAnim::panelImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___panelImage_9;
	// UnityEngine.UI.Image MaterialUI.ToastAnim::shadowImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___shadowImage_10;
	// UnityEngine.CanvasGroup MaterialUI.ToastAnim::canvasGroup
	CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * ___canvasGroup_11;
	// UnityEngine.Color MaterialUI.ToastAnim::tempColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___tempColor_12;
	// UnityEngine.Vector2 MaterialUI.ToastAnim::tempVec2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___tempVec2_13;
	// UnityEngine.Vector3 MaterialUI.ToastAnim::tempVec3
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___tempVec3_14;
	// System.Single MaterialUI.ToastAnim::timeToWait
	float ___timeToWait_15;
	// System.Single MaterialUI.ToastAnim::animSpeed
	float ___animSpeed_16;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC, ___state_4)); }
	inline int32_t get_state_4() const { return ___state_4; }
	inline int32_t* get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(int32_t value)
	{
		___state_4 = value;
	}

	inline static int32_t get_offset_of_onPos_5() { return static_cast<int32_t>(offsetof(ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC, ___onPos_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_onPos_5() const { return ___onPos_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_onPos_5() { return &___onPos_5; }
	inline void set_onPos_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___onPos_5 = value;
	}

	inline static int32_t get_offset_of_offPos_6() { return static_cast<int32_t>(offsetof(ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC, ___offPos_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_offPos_6() const { return ___offPos_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_offPos_6() { return &___offPos_6; }
	inline void set_offPos_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___offPos_6 = value;
	}

	inline static int32_t get_offset_of_text_7() { return static_cast<int32_t>(offsetof(ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC, ___text_7)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_text_7() const { return ___text_7; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_text_7() { return &___text_7; }
	inline void set_text_7(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___text_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_7), (void*)value);
	}

	inline static int32_t get_offset_of_thisRect_8() { return static_cast<int32_t>(offsetof(ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC, ___thisRect_8)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_thisRect_8() const { return ___thisRect_8; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_thisRect_8() { return &___thisRect_8; }
	inline void set_thisRect_8(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___thisRect_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thisRect_8), (void*)value);
	}

	inline static int32_t get_offset_of_panelImage_9() { return static_cast<int32_t>(offsetof(ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC, ___panelImage_9)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_panelImage_9() const { return ___panelImage_9; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_panelImage_9() { return &___panelImage_9; }
	inline void set_panelImage_9(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___panelImage_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panelImage_9), (void*)value);
	}

	inline static int32_t get_offset_of_shadowImage_10() { return static_cast<int32_t>(offsetof(ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC, ___shadowImage_10)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_shadowImage_10() const { return ___shadowImage_10; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_shadowImage_10() { return &___shadowImage_10; }
	inline void set_shadowImage_10(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___shadowImage_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shadowImage_10), (void*)value);
	}

	inline static int32_t get_offset_of_canvasGroup_11() { return static_cast<int32_t>(offsetof(ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC, ___canvasGroup_11)); }
	inline CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * get_canvasGroup_11() const { return ___canvasGroup_11; }
	inline CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 ** get_address_of_canvasGroup_11() { return &___canvasGroup_11; }
	inline void set_canvasGroup_11(CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * value)
	{
		___canvasGroup_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvasGroup_11), (void*)value);
	}

	inline static int32_t get_offset_of_tempColor_12() { return static_cast<int32_t>(offsetof(ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC, ___tempColor_12)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_tempColor_12() const { return ___tempColor_12; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_tempColor_12() { return &___tempColor_12; }
	inline void set_tempColor_12(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___tempColor_12 = value;
	}

	inline static int32_t get_offset_of_tempVec2_13() { return static_cast<int32_t>(offsetof(ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC, ___tempVec2_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_tempVec2_13() const { return ___tempVec2_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_tempVec2_13() { return &___tempVec2_13; }
	inline void set_tempVec2_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___tempVec2_13 = value;
	}

	inline static int32_t get_offset_of_tempVec3_14() { return static_cast<int32_t>(offsetof(ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC, ___tempVec3_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_tempVec3_14() const { return ___tempVec3_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_tempVec3_14() { return &___tempVec3_14; }
	inline void set_tempVec3_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___tempVec3_14 = value;
	}

	inline static int32_t get_offset_of_timeToWait_15() { return static_cast<int32_t>(offsetof(ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC, ___timeToWait_15)); }
	inline float get_timeToWait_15() const { return ___timeToWait_15; }
	inline float* get_address_of_timeToWait_15() { return &___timeToWait_15; }
	inline void set_timeToWait_15(float value)
	{
		___timeToWait_15 = value;
	}

	inline static int32_t get_offset_of_animSpeed_16() { return static_cast<int32_t>(offsetof(ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC, ___animSpeed_16)); }
	inline float get_animSpeed_16() const { return ___animSpeed_16; }
	inline float* get_address_of_animSpeed_16() { return &___animSpeed_16; }
	inline void set_animSpeed_16(float value)
	{
		___animSpeed_16 = value;
	}
};


// MaterialUI.Toaster
struct  Toaster_t1EDC4603784EEAA87C30F477FD39613B6452BA12  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String MaterialUI.Toaster::text
	String_t* ___text_4;
	// System.Single MaterialUI.Toaster::duration
	float ___duration_5;
	// UnityEngine.Color MaterialUI.Toaster::panelColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___panelColor_6;
	// UnityEngine.Color MaterialUI.Toaster::textColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___textColor_7;
	// System.Int32 MaterialUI.Toaster::fontSize
	int32_t ___fontSize_8;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(Toaster_t1EDC4603784EEAA87C30F477FD39613B6452BA12, ___text_4)); }
	inline String_t* get_text_4() const { return ___text_4; }
	inline String_t** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(String_t* value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_4), (void*)value);
	}

	inline static int32_t get_offset_of_duration_5() { return static_cast<int32_t>(offsetof(Toaster_t1EDC4603784EEAA87C30F477FD39613B6452BA12, ___duration_5)); }
	inline float get_duration_5() const { return ___duration_5; }
	inline float* get_address_of_duration_5() { return &___duration_5; }
	inline void set_duration_5(float value)
	{
		___duration_5 = value;
	}

	inline static int32_t get_offset_of_panelColor_6() { return static_cast<int32_t>(offsetof(Toaster_t1EDC4603784EEAA87C30F477FD39613B6452BA12, ___panelColor_6)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_panelColor_6() const { return ___panelColor_6; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_panelColor_6() { return &___panelColor_6; }
	inline void set_panelColor_6(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___panelColor_6 = value;
	}

	inline static int32_t get_offset_of_textColor_7() { return static_cast<int32_t>(offsetof(Toaster_t1EDC4603784EEAA87C30F477FD39613B6452BA12, ___textColor_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_textColor_7() const { return ___textColor_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_textColor_7() { return &___textColor_7; }
	inline void set_textColor_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___textColor_7 = value;
	}

	inline static int32_t get_offset_of_fontSize_8() { return static_cast<int32_t>(offsetof(Toaster_t1EDC4603784EEAA87C30F477FD39613B6452BA12, ___fontSize_8)); }
	inline int32_t get_fontSize_8() const { return ___fontSize_8; }
	inline int32_t* get_address_of_fontSize_8() { return &___fontSize_8; }
	inline void set_fontSize_8(int32_t value)
	{
		___fontSize_8 = value;
	}
};


// MaterialUI.ToggleConfig
struct  ToggleConfig_tB85C25B8D1808DAA624639D6B6E3BB6AD7D5F189  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Slider MaterialUI.ToggleConfig::theSlider
	Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * ___theSlider_4;
	// UnityEngine.UI.Toggle MaterialUI.ToggleConfig::theToggle
	Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * ___theToggle_5;

public:
	inline static int32_t get_offset_of_theSlider_4() { return static_cast<int32_t>(offsetof(ToggleConfig_tB85C25B8D1808DAA624639D6B6E3BB6AD7D5F189, ___theSlider_4)); }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * get_theSlider_4() const { return ___theSlider_4; }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 ** get_address_of_theSlider_4() { return &___theSlider_4; }
	inline void set_theSlider_4(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * value)
	{
		___theSlider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___theSlider_4), (void*)value);
	}

	inline static int32_t get_offset_of_theToggle_5() { return static_cast<int32_t>(offsetof(ToggleConfig_tB85C25B8D1808DAA624639D6B6E3BB6AD7D5F189, ___theToggle_5)); }
	inline Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * get_theToggle_5() const { return ___theToggle_5; }
	inline Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 ** get_address_of_theToggle_5() { return &___theToggle_5; }
	inline void set_theToggle_5(Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * value)
	{
		___theToggle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___theToggle_5), (void*)value);
	}
};


// Photon.Pun.MonoBehaviourPun
struct  MonoBehaviourPun_t41335C3B2B6804088B520155103E3A0EEA4F814A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::pvCache
	PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * ___pvCache_4;

public:
	inline static int32_t get_offset_of_pvCache_4() { return static_cast<int32_t>(offsetof(MonoBehaviourPun_t41335C3B2B6804088B520155103E3A0EEA4F814A, ___pvCache_4)); }
	inline PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * get_pvCache_4() const { return ___pvCache_4; }
	inline PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B ** get_address_of_pvCache_4() { return &___pvCache_4; }
	inline void set_pvCache_4(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * value)
	{
		___pvCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pvCache_4), (void*)value);
	}
};


// Photon.Realtime.ConnectionHandler
struct  ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.ConnectionHandler::<Client>k__BackingField
	LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___U3CClientU3Ek__BackingField_4;
	// System.Byte Photon.Realtime.ConnectionHandler::fallbackThreadId
	uint8_t ___fallbackThreadId_5;
	// System.Boolean Photon.Realtime.ConnectionHandler::didSendAcks
	bool ___didSendAcks_6;
	// System.Int32 Photon.Realtime.ConnectionHandler::startedAckingTimestamp
	int32_t ___startedAckingTimestamp_7;
	// System.Int32 Photon.Realtime.ConnectionHandler::deltaSinceStartedToAck
	int32_t ___deltaSinceStartedToAck_8;
	// System.Int32 Photon.Realtime.ConnectionHandler::KeepAliveInBackground
	int32_t ___KeepAliveInBackground_9;
	// System.Int32 Photon.Realtime.ConnectionHandler::<CountSendAcksOnly>k__BackingField
	int32_t ___U3CCountSendAcksOnlyU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.ConnectionHandler::ApplyDontDestroyOnLoad
	bool ___ApplyDontDestroyOnLoad_11;

public:
	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___U3CClientU3Ek__BackingField_4)); }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * get_U3CClientU3Ek__BackingField_4() const { return ___U3CClientU3Ek__BackingField_4; }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A ** get_address_of_U3CClientU3Ek__BackingField_4() { return &___U3CClientU3Ek__BackingField_4; }
	inline void set_U3CClientU3Ek__BackingField_4(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * value)
	{
		___U3CClientU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_fallbackThreadId_5() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___fallbackThreadId_5)); }
	inline uint8_t get_fallbackThreadId_5() const { return ___fallbackThreadId_5; }
	inline uint8_t* get_address_of_fallbackThreadId_5() { return &___fallbackThreadId_5; }
	inline void set_fallbackThreadId_5(uint8_t value)
	{
		___fallbackThreadId_5 = value;
	}

	inline static int32_t get_offset_of_didSendAcks_6() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___didSendAcks_6)); }
	inline bool get_didSendAcks_6() const { return ___didSendAcks_6; }
	inline bool* get_address_of_didSendAcks_6() { return &___didSendAcks_6; }
	inline void set_didSendAcks_6(bool value)
	{
		___didSendAcks_6 = value;
	}

	inline static int32_t get_offset_of_startedAckingTimestamp_7() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___startedAckingTimestamp_7)); }
	inline int32_t get_startedAckingTimestamp_7() const { return ___startedAckingTimestamp_7; }
	inline int32_t* get_address_of_startedAckingTimestamp_7() { return &___startedAckingTimestamp_7; }
	inline void set_startedAckingTimestamp_7(int32_t value)
	{
		___startedAckingTimestamp_7 = value;
	}

	inline static int32_t get_offset_of_deltaSinceStartedToAck_8() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___deltaSinceStartedToAck_8)); }
	inline int32_t get_deltaSinceStartedToAck_8() const { return ___deltaSinceStartedToAck_8; }
	inline int32_t* get_address_of_deltaSinceStartedToAck_8() { return &___deltaSinceStartedToAck_8; }
	inline void set_deltaSinceStartedToAck_8(int32_t value)
	{
		___deltaSinceStartedToAck_8 = value;
	}

	inline static int32_t get_offset_of_KeepAliveInBackground_9() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___KeepAliveInBackground_9)); }
	inline int32_t get_KeepAliveInBackground_9() const { return ___KeepAliveInBackground_9; }
	inline int32_t* get_address_of_KeepAliveInBackground_9() { return &___KeepAliveInBackground_9; }
	inline void set_KeepAliveInBackground_9(int32_t value)
	{
		___KeepAliveInBackground_9 = value;
	}

	inline static int32_t get_offset_of_U3CCountSendAcksOnlyU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___U3CCountSendAcksOnlyU3Ek__BackingField_10)); }
	inline int32_t get_U3CCountSendAcksOnlyU3Ek__BackingField_10() const { return ___U3CCountSendAcksOnlyU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CCountSendAcksOnlyU3Ek__BackingField_10() { return &___U3CCountSendAcksOnlyU3Ek__BackingField_10; }
	inline void set_U3CCountSendAcksOnlyU3Ek__BackingField_10(int32_t value)
	{
		___U3CCountSendAcksOnlyU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_ApplyDontDestroyOnLoad_11() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___ApplyDontDestroyOnLoad_11)); }
	inline bool get_ApplyDontDestroyOnLoad_11() const { return ___ApplyDontDestroyOnLoad_11; }
	inline bool* get_address_of_ApplyDontDestroyOnLoad_11() { return &___ApplyDontDestroyOnLoad_11; }
	inline void set_ApplyDontDestroyOnLoad_11(bool value)
	{
		___ApplyDontDestroyOnLoad_11 = value;
	}
};

struct ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0_StaticFields
{
public:
	// System.Boolean Photon.Realtime.ConnectionHandler::AppQuits
	bool ___AppQuits_12;

public:
	inline static int32_t get_offset_of_AppQuits_12() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0_StaticFields, ___AppQuits_12)); }
	inline bool get_AppQuits_12() const { return ___AppQuits_12; }
	inline bool* get_address_of_AppQuits_12() { return &___AppQuits_12; }
	inline void set_AppQuits_12(bool value)
	{
		___AppQuits_12 = value;
	}
};


// Photon.Realtime.Demo.ConnectAndJoinRandomLb
struct  ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Photon.Realtime.AppSettings Photon.Realtime.Demo.ConnectAndJoinRandomLb::appSettings
	AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * ___appSettings_4;
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Demo.ConnectAndJoinRandomLb::lbc
	LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___lbc_5;
	// Photon.Realtime.ConnectionHandler Photon.Realtime.Demo.ConnectAndJoinRandomLb::ch
	ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0 * ___ch_6;
	// UnityEngine.UI.Text Photon.Realtime.Demo.ConnectAndJoinRandomLb::StateUiText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___StateUiText_7;

public:
	inline static int32_t get_offset_of_appSettings_4() { return static_cast<int32_t>(offsetof(ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462, ___appSettings_4)); }
	inline AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * get_appSettings_4() const { return ___appSettings_4; }
	inline AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 ** get_address_of_appSettings_4() { return &___appSettings_4; }
	inline void set_appSettings_4(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * value)
	{
		___appSettings_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appSettings_4), (void*)value);
	}

	inline static int32_t get_offset_of_lbc_5() { return static_cast<int32_t>(offsetof(ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462, ___lbc_5)); }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * get_lbc_5() const { return ___lbc_5; }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A ** get_address_of_lbc_5() { return &___lbc_5; }
	inline void set_lbc_5(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * value)
	{
		___lbc_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lbc_5), (void*)value);
	}

	inline static int32_t get_offset_of_ch_6() { return static_cast<int32_t>(offsetof(ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462, ___ch_6)); }
	inline ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0 * get_ch_6() const { return ___ch_6; }
	inline ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0 ** get_address_of_ch_6() { return &___ch_6; }
	inline void set_ch_6(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0 * value)
	{
		___ch_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ch_6), (void*)value);
	}

	inline static int32_t get_offset_of_StateUiText_7() { return static_cast<int32_t>(offsetof(ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462, ___StateUiText_7)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_StateUiText_7() const { return ___StateUiText_7; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_StateUiText_7() { return &___StateUiText_7; }
	inline void set_StateUiText_7(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___StateUiText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateUiText_7), (void*)value);
	}
};


// QuestionList
struct  QuestionList_t55C63A912E36A8A65CAF13574DF965F8C28D9265  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Question[] QuestionList::questions
	QuestionU5BU5D_t8FC7EC9B3A1152424EB02BB34293E4EA506B195E* ___questions_4;
	// System.Collections.Generic.List`1<Question> QuestionList::unAnswered
	List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * ___unAnswered_5;

public:
	inline static int32_t get_offset_of_questions_4() { return static_cast<int32_t>(offsetof(QuestionList_t55C63A912E36A8A65CAF13574DF965F8C28D9265, ___questions_4)); }
	inline QuestionU5BU5D_t8FC7EC9B3A1152424EB02BB34293E4EA506B195E* get_questions_4() const { return ___questions_4; }
	inline QuestionU5BU5D_t8FC7EC9B3A1152424EB02BB34293E4EA506B195E** get_address_of_questions_4() { return &___questions_4; }
	inline void set_questions_4(QuestionU5BU5D_t8FC7EC9B3A1152424EB02BB34293E4EA506B195E* value)
	{
		___questions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___questions_4), (void*)value);
	}

	inline static int32_t get_offset_of_unAnswered_5() { return static_cast<int32_t>(offsetof(QuestionList_t55C63A912E36A8A65CAF13574DF965F8C28D9265, ___unAnswered_5)); }
	inline List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * get_unAnswered_5() const { return ___unAnswered_5; }
	inline List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D ** get_address_of_unAnswered_5() { return &___unAnswered_5; }
	inline void set_unAnswered_5(List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * value)
	{
		___unAnswered_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unAnswered_5), (void*)value);
	}
};


// Quit
struct  Quit_tC6FD89776CBAD7424D2A397E0AF00026351FE316  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// Quizgamemenager
struct  Quizgamemenager_tB2A363E161D872E42BF21AA74F0AB3416123B8A2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UI Quizgamemenager::ui
	UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658 * ___ui_4;
	// Quizdata Quizgamemenager::quizDB
	Quizdata_t20C056F2E06D0D2CB062DF026A7A288587257D0C * ___quizDB_5;
	// System.Collections.Generic.List`1<Question> Quizgamemenager::questions
	List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * ___questions_6;
	// Question Quizgamemenager::selectQuestion
	Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC * ___selectQuestion_7;
	// System.Single Quizgamemenager::waitforquestion
	float ___waitforquestion_8;

public:
	inline static int32_t get_offset_of_ui_4() { return static_cast<int32_t>(offsetof(Quizgamemenager_tB2A363E161D872E42BF21AA74F0AB3416123B8A2, ___ui_4)); }
	inline UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658 * get_ui_4() const { return ___ui_4; }
	inline UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658 ** get_address_of_ui_4() { return &___ui_4; }
	inline void set_ui_4(UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658 * value)
	{
		___ui_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ui_4), (void*)value);
	}

	inline static int32_t get_offset_of_quizDB_5() { return static_cast<int32_t>(offsetof(Quizgamemenager_tB2A363E161D872E42BF21AA74F0AB3416123B8A2, ___quizDB_5)); }
	inline Quizdata_t20C056F2E06D0D2CB062DF026A7A288587257D0C * get_quizDB_5() const { return ___quizDB_5; }
	inline Quizdata_t20C056F2E06D0D2CB062DF026A7A288587257D0C ** get_address_of_quizDB_5() { return &___quizDB_5; }
	inline void set_quizDB_5(Quizdata_t20C056F2E06D0D2CB062DF026A7A288587257D0C * value)
	{
		___quizDB_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quizDB_5), (void*)value);
	}

	inline static int32_t get_offset_of_questions_6() { return static_cast<int32_t>(offsetof(Quizgamemenager_tB2A363E161D872E42BF21AA74F0AB3416123B8A2, ___questions_6)); }
	inline List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * get_questions_6() const { return ___questions_6; }
	inline List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D ** get_address_of_questions_6() { return &___questions_6; }
	inline void set_questions_6(List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * value)
	{
		___questions_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___questions_6), (void*)value);
	}

	inline static int32_t get_offset_of_selectQuestion_7() { return static_cast<int32_t>(offsetof(Quizgamemenager_tB2A363E161D872E42BF21AA74F0AB3416123B8A2, ___selectQuestion_7)); }
	inline Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC * get_selectQuestion_7() const { return ___selectQuestion_7; }
	inline Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC ** get_address_of_selectQuestion_7() { return &___selectQuestion_7; }
	inline void set_selectQuestion_7(Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC * value)
	{
		___selectQuestion_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectQuestion_7), (void*)value);
	}

	inline static int32_t get_offset_of_waitforquestion_8() { return static_cast<int32_t>(offsetof(Quizgamemenager_tB2A363E161D872E42BF21AA74F0AB3416123B8A2, ___waitforquestion_8)); }
	inline float get_waitforquestion_8() const { return ___waitforquestion_8; }
	inline float* get_address_of_waitforquestion_8() { return &___waitforquestion_8; }
	inline void set_waitforquestion_8(float value)
	{
		___waitforquestion_8 = value;
	}
};


// Scores
struct  Scores_tF83E87B4A24DFC95FC935140090A45E4FF6FBC59  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text Scores::points
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___points_5;

public:
	inline static int32_t get_offset_of_points_5() { return static_cast<int32_t>(offsetof(Scores_tF83E87B4A24DFC95FC935140090A45E4FF6FBC59, ___points_5)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_points_5() const { return ___points_5; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_points_5() { return &___points_5; }
	inline void set_points_5(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___points_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___points_5), (void*)value);
	}
};

struct Scores_tF83E87B4A24DFC95FC935140090A45E4FF6FBC59_StaticFields
{
public:
	// System.Int32 Scores::pointssum
	int32_t ___pointssum_4;

public:
	inline static int32_t get_offset_of_pointssum_4() { return static_cast<int32_t>(offsetof(Scores_tF83E87B4A24DFC95FC935140090A45E4FF6FBC59_StaticFields, ___pointssum_4)); }
	inline int32_t get_pointssum_4() const { return ___pointssum_4; }
	inline int32_t* get_address_of_pointssum_4() { return &___pointssum_4; }
	inline void set_pointssum_4(int32_t value)
	{
		___pointssum_4 = value;
	}
};


// ToggleTextChanger
struct  ToggleTextChanger_tA4DBED51FB6143D919AF3E53B14EEB8D5BB7D8B4  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text ToggleTextChanger::thisText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___thisText_4;
	// System.String ToggleTextChanger::onText
	String_t* ___onText_5;
	// System.String ToggleTextChanger::offText
	String_t* ___offText_6;

public:
	inline static int32_t get_offset_of_thisText_4() { return static_cast<int32_t>(offsetof(ToggleTextChanger_tA4DBED51FB6143D919AF3E53B14EEB8D5BB7D8B4, ___thisText_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_thisText_4() const { return ___thisText_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_thisText_4() { return &___thisText_4; }
	inline void set_thisText_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___thisText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thisText_4), (void*)value);
	}

	inline static int32_t get_offset_of_onText_5() { return static_cast<int32_t>(offsetof(ToggleTextChanger_tA4DBED51FB6143D919AF3E53B14EEB8D5BB7D8B4, ___onText_5)); }
	inline String_t* get_onText_5() const { return ___onText_5; }
	inline String_t** get_address_of_onText_5() { return &___onText_5; }
	inline void set_onText_5(String_t* value)
	{
		___onText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onText_5), (void*)value);
	}

	inline static int32_t get_offset_of_offText_6() { return static_cast<int32_t>(offsetof(ToggleTextChanger_tA4DBED51FB6143D919AF3E53B14EEB8D5BB7D8B4, ___offText_6)); }
	inline String_t* get_offText_6() const { return ___offText_6; }
	inline String_t** get_address_of_offText_6() { return &___offText_6; }
	inline void set_offText_6(String_t* value)
	{
		___offText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offText_6), (void*)value);
	}
};


// UI
struct  UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Quizgamemenager UI::quizgamemenager
	Quizgamemenager_tB2A363E161D872E42BF21AA74F0AB3416123B8A2 * ___quizgamemenager_4;
	// UnityEngine.UI.Text UI::questionSentence
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___questionSentence_5;
	// System.Collections.Generic.List`1<UnityEngine.UI.Button> UI::answers
	List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5 * ___answers_6;
	// UnityEngine.Color UI::correctColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___correctColor_7;
	// UnityEngine.Color UI::wrongColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___wrongColor_8;
	// UnityEngine.Color UI::ColorstandardColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___ColorstandardColor_9;
	// Question UI::question
	Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC * ___question_10;
	// System.Boolean UI::isanswered
	bool ___isanswered_11;

public:
	inline static int32_t get_offset_of_quizgamemenager_4() { return static_cast<int32_t>(offsetof(UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658, ___quizgamemenager_4)); }
	inline Quizgamemenager_tB2A363E161D872E42BF21AA74F0AB3416123B8A2 * get_quizgamemenager_4() const { return ___quizgamemenager_4; }
	inline Quizgamemenager_tB2A363E161D872E42BF21AA74F0AB3416123B8A2 ** get_address_of_quizgamemenager_4() { return &___quizgamemenager_4; }
	inline void set_quizgamemenager_4(Quizgamemenager_tB2A363E161D872E42BF21AA74F0AB3416123B8A2 * value)
	{
		___quizgamemenager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quizgamemenager_4), (void*)value);
	}

	inline static int32_t get_offset_of_questionSentence_5() { return static_cast<int32_t>(offsetof(UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658, ___questionSentence_5)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_questionSentence_5() const { return ___questionSentence_5; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_questionSentence_5() { return &___questionSentence_5; }
	inline void set_questionSentence_5(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___questionSentence_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___questionSentence_5), (void*)value);
	}

	inline static int32_t get_offset_of_answers_6() { return static_cast<int32_t>(offsetof(UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658, ___answers_6)); }
	inline List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5 * get_answers_6() const { return ___answers_6; }
	inline List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5 ** get_address_of_answers_6() { return &___answers_6; }
	inline void set_answers_6(List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5 * value)
	{
		___answers_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___answers_6), (void*)value);
	}

	inline static int32_t get_offset_of_correctColor_7() { return static_cast<int32_t>(offsetof(UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658, ___correctColor_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_correctColor_7() const { return ___correctColor_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_correctColor_7() { return &___correctColor_7; }
	inline void set_correctColor_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___correctColor_7 = value;
	}

	inline static int32_t get_offset_of_wrongColor_8() { return static_cast<int32_t>(offsetof(UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658, ___wrongColor_8)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_wrongColor_8() const { return ___wrongColor_8; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_wrongColor_8() { return &___wrongColor_8; }
	inline void set_wrongColor_8(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___wrongColor_8 = value;
	}

	inline static int32_t get_offset_of_ColorstandardColor_9() { return static_cast<int32_t>(offsetof(UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658, ___ColorstandardColor_9)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_ColorstandardColor_9() const { return ___ColorstandardColor_9; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_ColorstandardColor_9() { return &___ColorstandardColor_9; }
	inline void set_ColorstandardColor_9(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___ColorstandardColor_9 = value;
	}

	inline static int32_t get_offset_of_question_10() { return static_cast<int32_t>(offsetof(UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658, ___question_10)); }
	inline Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC * get_question_10() const { return ___question_10; }
	inline Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC ** get_address_of_question_10() { return &___question_10; }
	inline void set_question_10(Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC * value)
	{
		___question_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___question_10), (void*)value);
	}

	inline static int32_t get_offset_of_isanswered_11() { return static_cast<int32_t>(offsetof(UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658, ___isanswered_11)); }
	inline bool get_isanswered_11() const { return ___isanswered_11; }
	inline bool* get_address_of_isanswered_11() { return &___isanswered_11; }
	inline void set_isanswered_11(bool value)
	{
		___isanswered_11 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// data
struct  data_t046B1D75945684A72664853EB6E4E4DC04B5626C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// nazwagracza
struct  nazwagracza_t20D3FE8A4B5C952601A6BF71DF38BF64B9B6372A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.InputField nazwagracza::nameInput
	InputField_t533609195B110760BCFF00B746C87D81969CB005 * ___nameInput_4;
	// UnityEngine.UI.Button nazwagracza::contininueButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___contininueButton_5;

public:
	inline static int32_t get_offset_of_nameInput_4() { return static_cast<int32_t>(offsetof(nazwagracza_t20D3FE8A4B5C952601A6BF71DF38BF64B9B6372A, ___nameInput_4)); }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 * get_nameInput_4() const { return ___nameInput_4; }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 ** get_address_of_nameInput_4() { return &___nameInput_4; }
	inline void set_nameInput_4(InputField_t533609195B110760BCFF00B746C87D81969CB005 * value)
	{
		___nameInput_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameInput_4), (void*)value);
	}

	inline static int32_t get_offset_of_contininueButton_5() { return static_cast<int32_t>(offsetof(nazwagracza_t20D3FE8A4B5C952601A6BF71DF38BF64B9B6372A, ___contininueButton_5)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_contininueButton_5() const { return ___contininueButton_5; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_contininueButton_5() { return &___contininueButton_5; }
	inline void set_contininueButton_5(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___contininueButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contininueButton_5), (void*)value);
	}
};


// startgame
struct  startgame_t7C455683DC32FDAF806623583F9F855080837556  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// Photon.Pun.MonoBehaviourPunCallbacks
struct  MonoBehaviourPunCallbacks_t1C6D230D24896A20359CB7016C7AD6E4654B885D  : public MonoBehaviourPun_t41335C3B2B6804088B520155103E3A0EEA4F814A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_7;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Boolean UnityEngine.UI.Selectable::m_WillRemove
	bool ___m_WillRemove_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_7)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_9)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_10)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_13)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_WillRemove_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_WillRemove_15)); }
	inline bool get_m_WillRemove_15() const { return ___m_WillRemove_15; }
	inline bool* get_address_of_m_WillRemove_15() { return &___m_WillRemove_15; }
	inline void set_m_WillRemove_15(bool value)
	{
		___m_WillRemove_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_19)); }
	inline List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
	// System.Boolean UnityEngine.UI.Selectable::s_IsDirty
	bool ___s_IsDirty_6;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}

	inline static int32_t get_offset_of_s_IsDirty_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_IsDirty_6)); }
	inline bool get_s_IsDirty_6() const { return ___s_IsDirty_6; }
	inline bool* get_address_of_s_IsDirty_6() { return &___s_IsDirty_6; }
	inline void set_s_IsDirty_6(bool value)
	{
		___s_IsDirty_6 = value;
	}
};


// UnityEngine.UI.Button
struct  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Button_ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B, ___m_OnClick_20)); }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.InputField
struct  InputField_t533609195B110760BCFF00B746C87D81969CB005  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField_ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField_InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField_LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField_CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField_SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField_OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A * ___m_OnValueChanged_33;
	// UnityEngine.UI.InputField_OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 * ___m_OnValidateInput_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_CaretColor_35;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectionColor_37;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_38;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_40;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_41;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_43;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___caretRectTrans_44;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_CursorVerts_45;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_InputTextCache_46;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CachedInputRenderer_47;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_48;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_Mesh_49;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_50;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_51;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_52;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_53;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_56;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_BlinkCoroutine_57;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_58;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_59;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_DragCoroutine_61;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_62;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_63;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_64;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * ___m_WaitForSecondsRealtime_65;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_66;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___m_ProcessingEvent_68;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_TextComponent_22)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Placeholder_23)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OnEndEdit_32)); }
	inline SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_33() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OnValueChanged_33)); }
	inline OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A * get_m_OnValueChanged_33() const { return ___m_OnValueChanged_33; }
	inline OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A ** get_address_of_m_OnValueChanged_33() { return &___m_OnValueChanged_33; }
	inline void set_m_OnValueChanged_33(OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A * value)
	{
		___m_OnValueChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_34() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OnValidateInput_34)); }
	inline OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 * get_m_OnValidateInput_34() const { return ___m_OnValidateInput_34; }
	inline OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 ** get_address_of_m_OnValidateInput_34() { return &___m_OnValidateInput_34; }
	inline void set_m_OnValidateInput_34(OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 * value)
	{
		___m_OnValidateInput_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_35() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretColor_35)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_CaretColor_35() const { return ___m_CaretColor_35; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_CaretColor_35() { return &___m_CaretColor_35; }
	inline void set_m_CaretColor_35(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_CaretColor_35 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_36() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CustomCaretColor_36)); }
	inline bool get_m_CustomCaretColor_36() const { return ___m_CustomCaretColor_36; }
	inline bool* get_address_of_m_CustomCaretColor_36() { return &___m_CustomCaretColor_36; }
	inline void set_m_CustomCaretColor_36(bool value)
	{
		___m_CustomCaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_37() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_SelectionColor_37)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectionColor_37() const { return ___m_SelectionColor_37; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectionColor_37() { return &___m_SelectionColor_37; }
	inline void set_m_SelectionColor_37(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectionColor_37 = value;
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_39() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretBlinkRate_39)); }
	inline float get_m_CaretBlinkRate_39() const { return ___m_CaretBlinkRate_39; }
	inline float* get_address_of_m_CaretBlinkRate_39() { return &___m_CaretBlinkRate_39; }
	inline void set_m_CaretBlinkRate_39(float value)
	{
		___m_CaretBlinkRate_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_40() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretWidth_40)); }
	inline int32_t get_m_CaretWidth_40() const { return ___m_CaretWidth_40; }
	inline int32_t* get_address_of_m_CaretWidth_40() { return &___m_CaretWidth_40; }
	inline void set_m_CaretWidth_40(int32_t value)
	{
		___m_CaretWidth_40 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_41() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ReadOnly_41)); }
	inline bool get_m_ReadOnly_41() const { return ___m_ReadOnly_41; }
	inline bool* get_address_of_m_ReadOnly_41() { return &___m_ReadOnly_41; }
	inline void set_m_ReadOnly_41(bool value)
	{
		___m_ReadOnly_41 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_42() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretPosition_42)); }
	inline int32_t get_m_CaretPosition_42() const { return ___m_CaretPosition_42; }
	inline int32_t* get_address_of_m_CaretPosition_42() { return &___m_CaretPosition_42; }
	inline void set_m_CaretPosition_42(int32_t value)
	{
		___m_CaretPosition_42 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_43() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretSelectPosition_43)); }
	inline int32_t get_m_CaretSelectPosition_43() const { return ___m_CaretSelectPosition_43; }
	inline int32_t* get_address_of_m_CaretSelectPosition_43() { return &___m_CaretSelectPosition_43; }
	inline void set_m_CaretSelectPosition_43(int32_t value)
	{
		___m_CaretSelectPosition_43 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_44() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___caretRectTrans_44)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_caretRectTrans_44() const { return ___caretRectTrans_44; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_caretRectTrans_44() { return &___caretRectTrans_44; }
	inline void set_caretRectTrans_44(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___caretRectTrans_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_45() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CursorVerts_45)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_CursorVerts_45() const { return ___m_CursorVerts_45; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_CursorVerts_45() { return &___m_CursorVerts_45; }
	inline void set_m_CursorVerts_45(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_CursorVerts_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_46() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_InputTextCache_46)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_InputTextCache_46() const { return ___m_InputTextCache_46; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_InputTextCache_46() { return &___m_InputTextCache_46; }
	inline void set_m_InputTextCache_46(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_InputTextCache_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_47() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CachedInputRenderer_47)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CachedInputRenderer_47() const { return ___m_CachedInputRenderer_47; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CachedInputRenderer_47() { return &___m_CachedInputRenderer_47; }
	inline void set_m_CachedInputRenderer_47(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CachedInputRenderer_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_48() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_PreventFontCallback_48)); }
	inline bool get_m_PreventFontCallback_48() const { return ___m_PreventFontCallback_48; }
	inline bool* get_address_of_m_PreventFontCallback_48() { return &___m_PreventFontCallback_48; }
	inline void set_m_PreventFontCallback_48(bool value)
	{
		___m_PreventFontCallback_48 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_49() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Mesh_49)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_Mesh_49() const { return ___m_Mesh_49; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_Mesh_49() { return &___m_Mesh_49; }
	inline void set_m_Mesh_49(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_Mesh_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_50() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_AllowInput_50)); }
	inline bool get_m_AllowInput_50() const { return ___m_AllowInput_50; }
	inline bool* get_address_of_m_AllowInput_50() { return &___m_AllowInput_50; }
	inline void set_m_AllowInput_50(bool value)
	{
		___m_AllowInput_50 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_51() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ShouldActivateNextUpdate_51)); }
	inline bool get_m_ShouldActivateNextUpdate_51() const { return ___m_ShouldActivateNextUpdate_51; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_51() { return &___m_ShouldActivateNextUpdate_51; }
	inline void set_m_ShouldActivateNextUpdate_51(bool value)
	{
		___m_ShouldActivateNextUpdate_51 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_52() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_UpdateDrag_52)); }
	inline bool get_m_UpdateDrag_52() const { return ___m_UpdateDrag_52; }
	inline bool* get_address_of_m_UpdateDrag_52() { return &___m_UpdateDrag_52; }
	inline void set_m_UpdateDrag_52(bool value)
	{
		___m_UpdateDrag_52 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_53() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DragPositionOutOfBounds_53)); }
	inline bool get_m_DragPositionOutOfBounds_53() const { return ___m_DragPositionOutOfBounds_53; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_53() { return &___m_DragPositionOutOfBounds_53; }
	inline void set_m_DragPositionOutOfBounds_53(bool value)
	{
		___m_DragPositionOutOfBounds_53 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_56() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretVisible_56)); }
	inline bool get_m_CaretVisible_56() const { return ___m_CaretVisible_56; }
	inline bool* get_address_of_m_CaretVisible_56() { return &___m_CaretVisible_56; }
	inline void set_m_CaretVisible_56(bool value)
	{
		___m_CaretVisible_56 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_57() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_BlinkCoroutine_57)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_BlinkCoroutine_57() const { return ___m_BlinkCoroutine_57; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_BlinkCoroutine_57() { return &___m_BlinkCoroutine_57; }
	inline void set_m_BlinkCoroutine_57(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_BlinkCoroutine_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_57), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_58() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_BlinkStartTime_58)); }
	inline float get_m_BlinkStartTime_58() const { return ___m_BlinkStartTime_58; }
	inline float* get_address_of_m_BlinkStartTime_58() { return &___m_BlinkStartTime_58; }
	inline void set_m_BlinkStartTime_58(float value)
	{
		___m_BlinkStartTime_58 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_59() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DrawStart_59)); }
	inline int32_t get_m_DrawStart_59() const { return ___m_DrawStart_59; }
	inline int32_t* get_address_of_m_DrawStart_59() { return &___m_DrawStart_59; }
	inline void set_m_DrawStart_59(int32_t value)
	{
		___m_DrawStart_59 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_60() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DrawEnd_60)); }
	inline int32_t get_m_DrawEnd_60() const { return ___m_DrawEnd_60; }
	inline int32_t* get_address_of_m_DrawEnd_60() { return &___m_DrawEnd_60; }
	inline void set_m_DrawEnd_60(int32_t value)
	{
		___m_DrawEnd_60 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_61() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DragCoroutine_61)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_DragCoroutine_61() const { return ___m_DragCoroutine_61; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_DragCoroutine_61() { return &___m_DragCoroutine_61; }
	inline void set_m_DragCoroutine_61(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_DragCoroutine_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_62() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OriginalText_62)); }
	inline String_t* get_m_OriginalText_62() const { return ___m_OriginalText_62; }
	inline String_t** get_address_of_m_OriginalText_62() { return &___m_OriginalText_62; }
	inline void set_m_OriginalText_62(String_t* value)
	{
		___m_OriginalText_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_63() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_WasCanceled_63)); }
	inline bool get_m_WasCanceled_63() const { return ___m_WasCanceled_63; }
	inline bool* get_address_of_m_WasCanceled_63() { return &___m_WasCanceled_63; }
	inline void set_m_WasCanceled_63(bool value)
	{
		___m_WasCanceled_63 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_64() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_HasDoneFocusTransition_64)); }
	inline bool get_m_HasDoneFocusTransition_64() const { return ___m_HasDoneFocusTransition_64; }
	inline bool* get_address_of_m_HasDoneFocusTransition_64() { return &___m_HasDoneFocusTransition_64; }
	inline void set_m_HasDoneFocusTransition_64(bool value)
	{
		___m_HasDoneFocusTransition_64 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_65() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_WaitForSecondsRealtime_65)); }
	inline WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * get_m_WaitForSecondsRealtime_65() const { return ___m_WaitForSecondsRealtime_65; }
	inline WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 ** get_address_of_m_WaitForSecondsRealtime_65() { return &___m_WaitForSecondsRealtime_65; }
	inline void set_m_WaitForSecondsRealtime_65(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * value)
	{
		___m_WaitForSecondsRealtime_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_65), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_66() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_TouchKeyboardAllowsInPlaceEditing_66)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_66() const { return ___m_TouchKeyboardAllowsInPlaceEditing_66; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_66() { return &___m_TouchKeyboardAllowsInPlaceEditing_66; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_66(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_66 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_68() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ProcessingEvent_68)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_m_ProcessingEvent_68() const { return ___m_ProcessingEvent_68; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_m_ProcessingEvent_68() { return &___m_ProcessingEvent_68; }
	inline void set_m_ProcessingEvent_68(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___m_ProcessingEvent_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_68), (void*)value);
	}
};

struct InputField_t533609195B110760BCFF00B746C87D81969CB005_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct  Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider_Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider_SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillRect_20)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleRect_21)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_OnValueChanged_27)); }
	inline SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillImage_28)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillTransform_29)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillContainerRect_30)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleTransform_31)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleContainerRect_32)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Offset_33)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Toggle
struct  Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Toggle_ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t11E2B254D3C968C7D0DA11C606CC06D7D7F0D786 * ___m_Group_22;
	// UnityEngine.UI.Toggle_ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t50D925F8E220FB47DA738411CEF9C57FF7E1DC43 * ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;

public:
	inline static int32_t get_offset_of_toggleTransition_20() { return static_cast<int32_t>(offsetof(Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106, ___toggleTransition_20)); }
	inline int32_t get_toggleTransition_20() const { return ___toggleTransition_20; }
	inline int32_t* get_address_of_toggleTransition_20() { return &___toggleTransition_20; }
	inline void set_toggleTransition_20(int32_t value)
	{
		___toggleTransition_20 = value;
	}

	inline static int32_t get_offset_of_graphic_21() { return static_cast<int32_t>(offsetof(Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106, ___graphic_21)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_graphic_21() const { return ___graphic_21; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_graphic_21() { return &___graphic_21; }
	inline void set_graphic_21(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___graphic_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Group_22() { return static_cast<int32_t>(offsetof(Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106, ___m_Group_22)); }
	inline ToggleGroup_t11E2B254D3C968C7D0DA11C606CC06D7D7F0D786 * get_m_Group_22() const { return ___m_Group_22; }
	inline ToggleGroup_t11E2B254D3C968C7D0DA11C606CC06D7D7F0D786 ** get_address_of_m_Group_22() { return &___m_Group_22; }
	inline void set_m_Group_22(ToggleGroup_t11E2B254D3C968C7D0DA11C606CC06D7D7F0D786 * value)
	{
		___m_Group_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Group_22), (void*)value);
	}

	inline static int32_t get_offset_of_onValueChanged_23() { return static_cast<int32_t>(offsetof(Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106, ___onValueChanged_23)); }
	inline ToggleEvent_t50D925F8E220FB47DA738411CEF9C57FF7E1DC43 * get_onValueChanged_23() const { return ___onValueChanged_23; }
	inline ToggleEvent_t50D925F8E220FB47DA738411CEF9C57FF7E1DC43 ** get_address_of_onValueChanged_23() { return &___onValueChanged_23; }
	inline void set_onValueChanged_23(ToggleEvent_t50D925F8E220FB47DA738411CEF9C57FF7E1DC43 * value)
	{
		___onValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValueChanged_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsOn_24() { return static_cast<int32_t>(offsetof(Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106, ___m_IsOn_24)); }
	inline bool get_m_IsOn_24() const { return ___m_IsOn_24; }
	inline bool* get_address_of_m_IsOn_24() { return &___m_IsOn_24; }
	inline void set_m_IsOn_24(bool value)
	{
		___m_IsOn_24 = value;
	}
};


// lobby
struct  lobby_t17682DECBC6631DA3A5ABB98EF5CE2B6E28EDEFF  : public MonoBehaviourPunCallbacks_t1C6D230D24896A20359CB7016C7AD6E4654B885D
{
public:
	// UnityEngine.GameObject lobby::findOpponent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___findOpponent_5;
	// UnityEngine.GameObject lobby::waitStatus
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___waitStatus_6;
	// TMPro.TextMeshProUGUI lobby::waitText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___waitText_7;
	// System.Boolean lobby::connection
	bool ___connection_8;

public:
	inline static int32_t get_offset_of_findOpponent_5() { return static_cast<int32_t>(offsetof(lobby_t17682DECBC6631DA3A5ABB98EF5CE2B6E28EDEFF, ___findOpponent_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_findOpponent_5() const { return ___findOpponent_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_findOpponent_5() { return &___findOpponent_5; }
	inline void set_findOpponent_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___findOpponent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___findOpponent_5), (void*)value);
	}

	inline static int32_t get_offset_of_waitStatus_6() { return static_cast<int32_t>(offsetof(lobby_t17682DECBC6631DA3A5ABB98EF5CE2B6E28EDEFF, ___waitStatus_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_waitStatus_6() const { return ___waitStatus_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_waitStatus_6() { return &___waitStatus_6; }
	inline void set_waitStatus_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___waitStatus_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitStatus_6), (void*)value);
	}

	inline static int32_t get_offset_of_waitText_7() { return static_cast<int32_t>(offsetof(lobby_t17682DECBC6631DA3A5ABB98EF5CE2B6E28EDEFF, ___waitText_7)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_waitText_7() const { return ___waitText_7; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_waitText_7() { return &___waitText_7; }
	inline void set_waitText_7(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___waitText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitText_7), (void*)value);
	}

	inline static int32_t get_offset_of_connection_8() { return static_cast<int32_t>(offsetof(lobby_t17682DECBC6631DA3A5ABB98EF5CE2B6E28EDEFF, ___connection_8)); }
	inline bool get_connection_8() const { return ___connection_8; }
	inline bool* get_address_of_connection_8() { return &___connection_8; }
	inline void set_connection_8(bool value)
	{
		___connection_8 = value;
	}
};


// TMPro.TMP_Text
struct  TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_34;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_35;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_fontAsset_36;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_currentFontAsset_37;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_38;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_sharedMaterial_39;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_currentMaterial_40;
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___m_materialReferences_41;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 * ___m_materialReferenceIndexLookup_42;
	// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___m_materialReferenceStack_43;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_44;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontSharedMaterials_45;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_fontMaterial_46;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontMaterials_47;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_48;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_fontColor32_49;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_fontColor_50;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_underlineColor_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_strikethroughColor_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_highlightColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_highlightColor_54;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_highlightPadding
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_highlightPadding_55;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_56;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_57;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  ___m_fontColorGradient_58;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_fontColorGradientPreset_59;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_spriteAsset_60;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_61;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_62;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_spriteColor_63;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_faceColor_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_outlineColor_66;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_67;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_68;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_69;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_70;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___m_sizeStack_71;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_72;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_73;
	// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___m_FontWeightStack_74;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_75;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_76;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_77;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_78;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_79;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_80;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_81;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___m_fontStyleStack_82;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_83;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_84;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_85;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___m_lineJustificationStack_86;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_textContainerLocalCorners_87;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_88;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_89;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_90;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_91;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_92;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_93;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_94;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_95;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_96;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_97;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_98;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_99;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_100;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_101;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_102;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_103;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_104;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_105;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___m_linkedTextComponent_106;
	// System.Boolean TMPro.TMP_Text::m_isLinkedTextComponent
	bool ___m_isLinkedTextComponent_107;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_108;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_109;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_110;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_111;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_112;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_113;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_114;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_115;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_116;
	// System.Boolean TMPro.TMP_Text::m_ignoreRectMaskCulling
	bool ___m_ignoreRectMaskCulling_117;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_118;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_119;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_120;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_121;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_122;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_123;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_124;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_125;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_126;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_127;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_128;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_129;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_130;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_131;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_margin_132;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_133;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_134;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_135;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_136;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_137;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___m_textInfo_138;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_139;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_140;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_transform_141;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_rectTransform_142;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_143;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_144;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_mesh_145;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_146;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * ___m_spriteAnimator_147;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_148;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_149;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_150;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_151;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_152;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_153;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * ___m_LayoutElement_154;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_155;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_156;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_157;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_158;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_159;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_160;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_161;
	// System.Int32 TMPro.TMP_Text::m_recursiveCount
	int32_t ___m_recursiveCount_162;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_163;
	// System.Boolean TMPro.TMP_Text::m_isCalculateSizeRequired
	bool ___m_isCalculateSizeRequired_164;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_165;
	// System.Boolean TMPro.TMP_Text::m_verticesAlreadyDirty
	bool ___m_verticesAlreadyDirty_166;
	// System.Boolean TMPro.TMP_Text::m_layoutAlreadyDirty
	bool ___m_layoutAlreadyDirty_167;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_168;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_169;
	// System.Boolean TMPro.TMP_Text::m_isInputParsingRequired
	bool ___m_isInputParsingRequired_170;
	// TMPro.TMP_Text_TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_171;
	// System.String TMPro.TMP_Text::old_text
	String_t* ___old_text_172;
	// System.Single TMPro.TMP_Text::m_fontScale
	float ___m_fontScale_173;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_174;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_htmlTag_175;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* ___m_xmlAttribute_176;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_attributeParameterValues_177;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_178;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_179;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___m_indentStack_180;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_181;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_182;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_FXMatrix_183;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_184;
	// TMPro.TMP_Text_UnicodeChar[] TMPro.TMP_Text::m_TextParsingBuffer
	UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* ___m_TextParsingBuffer_185;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* ___m_internalCharacterInfo_186;
	// System.Char[] TMPro.TMP_Text::m_input_CharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_input_CharArray_187;
	// System.Int32 TMPro.TMP_Text::m_charArray_Length
	int32_t ___m_charArray_Length_188;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedWordWrapState_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedLineState_191;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_192;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_193;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_194;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_195;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_196;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_197;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_198;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_199;
	// System.Single TMPro.TMP_Text::m_maxAscender
	float ___m_maxAscender_200;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_201;
	// System.Single TMPro.TMP_Text::m_maxDescender
	float ___m_maxDescender_202;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_203;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_204;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_205;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_206;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___m_meshExtents_207;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_htmlColor_208;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_colorStack_209;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_underlineColorStack_210;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_strikethroughColorStack_211;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_highlightColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_highlightColorStack_212;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_colorGradientPreset_213;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___m_colorGradientStack_214;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_215;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_216;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.TMP_Text::m_styleStack
	TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  ___m_styleStack_217;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  ___m_actionStack_218;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_219;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_220;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  ___m_baselineOffsetStack_221;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_222;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_223;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * ___m_cached_TextElement_224;
	// TMPro.TMP_Character TMPro.TMP_Text::m_cached_Underline_Character
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___m_cached_Underline_Character_225;
	// TMPro.TMP_Character TMPro.TMP_Text::m_cached_Ellipsis_Character
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___m_cached_Ellipsis_Character_226;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_defaultSpriteAsset_227;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_currentSpriteAsset_228;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_229;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_230;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_231;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_232;
	// System.Single[] TMPro.TMP_Text::k_Power
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___k_Power_233;

public:
	inline static int32_t get_offset_of_m_text_34() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_text_34)); }
	inline String_t* get_m_text_34() const { return ___m_text_34; }
	inline String_t** get_address_of_m_text_34() { return &___m_text_34; }
	inline void set_m_text_34(String_t* value)
	{
		___m_text_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_35() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRightToLeft_35)); }
	inline bool get_m_isRightToLeft_35() const { return ___m_isRightToLeft_35; }
	inline bool* get_address_of_m_isRightToLeft_35() { return &___m_isRightToLeft_35; }
	inline void set_m_isRightToLeft_35(bool value)
	{
		___m_isRightToLeft_35 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_36() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontAsset_36)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_fontAsset_36() const { return ___m_fontAsset_36; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_fontAsset_36() { return &___m_fontAsset_36; }
	inline void set_m_fontAsset_36(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_fontAsset_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_37() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontAsset_37)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_currentFontAsset_37() const { return ___m_currentFontAsset_37; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_currentFontAsset_37() { return &___m_currentFontAsset_37; }
	inline void set_m_currentFontAsset_37(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_currentFontAsset_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_38() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isSDFShader_38)); }
	inline bool get_m_isSDFShader_38() const { return ___m_isSDFShader_38; }
	inline bool* get_address_of_m_isSDFShader_38() { return &___m_isSDFShader_38; }
	inline void set_m_isSDFShader_38(bool value)
	{
		___m_isSDFShader_38 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_39() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sharedMaterial_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_sharedMaterial_39() const { return ___m_sharedMaterial_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_sharedMaterial_39() { return &___m_sharedMaterial_39; }
	inline void set_m_sharedMaterial_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_sharedMaterial_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_40() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterial_40)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_currentMaterial_40() const { return ___m_currentMaterial_40; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_currentMaterial_40() { return &___m_currentMaterial_40; }
	inline void set_m_currentMaterial_40(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_currentMaterial_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferences_41() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferences_41)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_m_materialReferences_41() const { return ___m_materialReferences_41; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_m_materialReferences_41() { return &___m_materialReferences_41; }
	inline void set_m_materialReferences_41(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___m_materialReferences_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_42() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferenceIndexLookup_42)); }
	inline Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 * get_m_materialReferenceIndexLookup_42() const { return ___m_materialReferenceIndexLookup_42; }
	inline Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 ** get_address_of_m_materialReferenceIndexLookup_42() { return &___m_materialReferenceIndexLookup_42; }
	inline void set_m_materialReferenceIndexLookup_42(Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 * value)
	{
		___m_materialReferenceIndexLookup_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_43() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferenceStack_43)); }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  get_m_materialReferenceStack_43() const { return ___m_materialReferenceStack_43; }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9 * get_address_of_m_materialReferenceStack_43() { return &___m_materialReferenceStack_43; }
	inline void set_m_materialReferenceStack_43(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  value)
	{
		___m_materialReferenceStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_43))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_43))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_43))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_43))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_43))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_44() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterialIndex_44)); }
	inline int32_t get_m_currentMaterialIndex_44() const { return ___m_currentMaterialIndex_44; }
	inline int32_t* get_address_of_m_currentMaterialIndex_44() { return &___m_currentMaterialIndex_44; }
	inline void set_m_currentMaterialIndex_44(int32_t value)
	{
		___m_currentMaterialIndex_44 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_45() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSharedMaterials_45)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontSharedMaterials_45() const { return ___m_fontSharedMaterials_45; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontSharedMaterials_45() { return &___m_fontSharedMaterials_45; }
	inline void set_m_fontSharedMaterials_45(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontSharedMaterials_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_46() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterial_46)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_fontMaterial_46() const { return ___m_fontMaterial_46; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_fontMaterial_46() { return &___m_fontMaterial_46; }
	inline void set_m_fontMaterial_46(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_fontMaterial_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_47() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterials_47)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontMaterials_47() const { return ___m_fontMaterials_47; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontMaterials_47() { return &___m_fontMaterials_47; }
	inline void set_m_fontMaterials_47(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontMaterials_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_48() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isMaterialDirty_48)); }
	inline bool get_m_isMaterialDirty_48() const { return ___m_isMaterialDirty_48; }
	inline bool* get_address_of_m_isMaterialDirty_48() { return &___m_isMaterialDirty_48; }
	inline void set_m_isMaterialDirty_48(bool value)
	{
		___m_isMaterialDirty_48 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_49() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor32_49)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_fontColor32_49() const { return ___m_fontColor32_49; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_fontColor32_49() { return &___m_fontColor32_49; }
	inline void set_m_fontColor32_49(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_fontColor32_49 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_50() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor_50)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_fontColor_50() const { return ___m_fontColor_50; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_fontColor_50() { return &___m_fontColor_50; }
	inline void set_m_fontColor_50(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_fontColor_50 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_52() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColor_52)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_underlineColor_52() const { return ___m_underlineColor_52; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_underlineColor_52() { return &___m_underlineColor_52; }
	inline void set_m_underlineColor_52(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_underlineColor_52 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_53() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColor_53)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_strikethroughColor_53() const { return ___m_strikethroughColor_53; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_strikethroughColor_53() { return &___m_strikethroughColor_53; }
	inline void set_m_strikethroughColor_53(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_strikethroughColor_53 = value;
	}

	inline static int32_t get_offset_of_m_highlightColor_54() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_highlightColor_54)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_highlightColor_54() const { return ___m_highlightColor_54; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_highlightColor_54() { return &___m_highlightColor_54; }
	inline void set_m_highlightColor_54(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_highlightColor_54 = value;
	}

	inline static int32_t get_offset_of_m_highlightPadding_55() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_highlightPadding_55)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_highlightPadding_55() const { return ___m_highlightPadding_55; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_highlightPadding_55() { return &___m_highlightPadding_55; }
	inline void set_m_highlightPadding_55(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_highlightPadding_55 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_56() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableVertexGradient_56)); }
	inline bool get_m_enableVertexGradient_56() const { return ___m_enableVertexGradient_56; }
	inline bool* get_address_of_m_enableVertexGradient_56() { return &___m_enableVertexGradient_56; }
	inline void set_m_enableVertexGradient_56(bool value)
	{
		___m_enableVertexGradient_56 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_57() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorMode_57)); }
	inline int32_t get_m_colorMode_57() const { return ___m_colorMode_57; }
	inline int32_t* get_address_of_m_colorMode_57() { return &___m_colorMode_57; }
	inline void set_m_colorMode_57(int32_t value)
	{
		___m_colorMode_57 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_58() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradient_58)); }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  get_m_fontColorGradient_58() const { return ___m_fontColorGradient_58; }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A * get_address_of_m_fontColorGradient_58() { return &___m_fontColorGradient_58; }
	inline void set_m_fontColorGradient_58(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  value)
	{
		___m_fontColorGradient_58 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_59() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradientPreset_59)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_fontColorGradientPreset_59() const { return ___m_fontColorGradientPreset_59; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_fontColorGradientPreset_59() { return &___m_fontColorGradientPreset_59; }
	inline void set_m_fontColorGradientPreset_59(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_fontColorGradientPreset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_59), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_60() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAsset_60)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_spriteAsset_60() const { return ___m_spriteAsset_60; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_spriteAsset_60() { return &___m_spriteAsset_60; }
	inline void set_m_spriteAsset_60(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_spriteAsset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_60), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_61() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintAllSprites_61)); }
	inline bool get_m_tintAllSprites_61() const { return ___m_tintAllSprites_61; }
	inline bool* get_address_of_m_tintAllSprites_61() { return &___m_tintAllSprites_61; }
	inline void set_m_tintAllSprites_61(bool value)
	{
		___m_tintAllSprites_61 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_62() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintSprite_62)); }
	inline bool get_m_tintSprite_62() const { return ___m_tintSprite_62; }
	inline bool* get_address_of_m_tintSprite_62() { return &___m_tintSprite_62; }
	inline void set_m_tintSprite_62(bool value)
	{
		___m_tintSprite_62 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_63() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteColor_63)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_spriteColor_63() const { return ___m_spriteColor_63; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_spriteColor_63() { return &___m_spriteColor_63; }
	inline void set_m_spriteColor_63(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_spriteColor_63 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_64() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overrideHtmlColors_64)); }
	inline bool get_m_overrideHtmlColors_64() const { return ___m_overrideHtmlColors_64; }
	inline bool* get_address_of_m_overrideHtmlColors_64() { return &___m_overrideHtmlColors_64; }
	inline void set_m_overrideHtmlColors_64(bool value)
	{
		___m_overrideHtmlColors_64 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_65() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_faceColor_65)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_faceColor_65() const { return ___m_faceColor_65; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_faceColor_65() { return &___m_faceColor_65; }
	inline void set_m_faceColor_65(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_faceColor_65 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_66() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineColor_66)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_outlineColor_66() const { return ___m_outlineColor_66; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_outlineColor_66() { return &___m_outlineColor_66; }
	inline void set_m_outlineColor_66(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_outlineColor_66 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_67() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineWidth_67)); }
	inline float get_m_outlineWidth_67() const { return ___m_outlineWidth_67; }
	inline float* get_address_of_m_outlineWidth_67() { return &___m_outlineWidth_67; }
	inline void set_m_outlineWidth_67(float value)
	{
		___m_outlineWidth_67 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_68() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSize_68)); }
	inline float get_m_fontSize_68() const { return ___m_fontSize_68; }
	inline float* get_address_of_m_fontSize_68() { return &___m_fontSize_68; }
	inline void set_m_fontSize_68(float value)
	{
		___m_fontSize_68 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_69() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontSize_69)); }
	inline float get_m_currentFontSize_69() const { return ___m_currentFontSize_69; }
	inline float* get_address_of_m_currentFontSize_69() { return &___m_currentFontSize_69; }
	inline void set_m_currentFontSize_69(float value)
	{
		___m_currentFontSize_69 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_70() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeBase_70)); }
	inline float get_m_fontSizeBase_70() const { return ___m_fontSizeBase_70; }
	inline float* get_address_of_m_fontSizeBase_70() { return &___m_fontSizeBase_70; }
	inline void set_m_fontSizeBase_70(float value)
	{
		___m_fontSizeBase_70 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_71() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sizeStack_71)); }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  get_m_sizeStack_71() const { return ___m_sizeStack_71; }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106 * get_address_of_m_sizeStack_71() { return &___m_sizeStack_71; }
	inline void set_m_sizeStack_71(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  value)
	{
		___m_sizeStack_71 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_71))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_72() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontWeight_72)); }
	inline int32_t get_m_fontWeight_72() const { return ___m_fontWeight_72; }
	inline int32_t* get_address_of_m_fontWeight_72() { return &___m_fontWeight_72; }
	inline void set_m_fontWeight_72(int32_t value)
	{
		___m_fontWeight_72 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_73() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightInternal_73)); }
	inline int32_t get_m_FontWeightInternal_73() const { return ___m_FontWeightInternal_73; }
	inline int32_t* get_address_of_m_FontWeightInternal_73() { return &___m_FontWeightInternal_73; }
	inline void set_m_FontWeightInternal_73(int32_t value)
	{
		___m_FontWeightInternal_73 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_74() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightStack_74)); }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  get_m_FontWeightStack_74() const { return ___m_FontWeightStack_74; }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B * get_address_of_m_FontWeightStack_74() { return &___m_FontWeightStack_74; }
	inline void set_m_FontWeightStack_74(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  value)
	{
		___m_FontWeightStack_74 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_74))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_75() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableAutoSizing_75)); }
	inline bool get_m_enableAutoSizing_75() const { return ___m_enableAutoSizing_75; }
	inline bool* get_address_of_m_enableAutoSizing_75() { return &___m_enableAutoSizing_75; }
	inline void set_m_enableAutoSizing_75(bool value)
	{
		___m_enableAutoSizing_75 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_76() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxFontSize_76)); }
	inline float get_m_maxFontSize_76() const { return ___m_maxFontSize_76; }
	inline float* get_address_of_m_maxFontSize_76() { return &___m_maxFontSize_76; }
	inline void set_m_maxFontSize_76(float value)
	{
		___m_maxFontSize_76 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_77() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minFontSize_77)); }
	inline float get_m_minFontSize_77() const { return ___m_minFontSize_77; }
	inline float* get_address_of_m_minFontSize_77() { return &___m_minFontSize_77; }
	inline void set_m_minFontSize_77(float value)
	{
		___m_minFontSize_77 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_78() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMin_78)); }
	inline float get_m_fontSizeMin_78() const { return ___m_fontSizeMin_78; }
	inline float* get_address_of_m_fontSizeMin_78() { return &___m_fontSizeMin_78; }
	inline void set_m_fontSizeMin_78(float value)
	{
		___m_fontSizeMin_78 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_79() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMax_79)); }
	inline float get_m_fontSizeMax_79() const { return ___m_fontSizeMax_79; }
	inline float* get_address_of_m_fontSizeMax_79() { return &___m_fontSizeMax_79; }
	inline void set_m_fontSizeMax_79(float value)
	{
		___m_fontSizeMax_79 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_80() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyle_80)); }
	inline int32_t get_m_fontStyle_80() const { return ___m_fontStyle_80; }
	inline int32_t* get_address_of_m_fontStyle_80() { return &___m_fontStyle_80; }
	inline void set_m_fontStyle_80(int32_t value)
	{
		___m_fontStyle_80 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_81() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontStyleInternal_81)); }
	inline int32_t get_m_FontStyleInternal_81() const { return ___m_FontStyleInternal_81; }
	inline int32_t* get_address_of_m_FontStyleInternal_81() { return &___m_FontStyleInternal_81; }
	inline void set_m_FontStyleInternal_81(int32_t value)
	{
		___m_FontStyleInternal_81 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_82() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyleStack_82)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_m_fontStyleStack_82() const { return ___m_fontStyleStack_82; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_m_fontStyleStack_82() { return &___m_fontStyleStack_82; }
	inline void set_m_fontStyleStack_82(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___m_fontStyleStack_82 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_83() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingBold_83)); }
	inline bool get_m_isUsingBold_83() const { return ___m_isUsingBold_83; }
	inline bool* get_address_of_m_isUsingBold_83() { return &___m_isUsingBold_83; }
	inline void set_m_isUsingBold_83(bool value)
	{
		___m_isUsingBold_83 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_84() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textAlignment_84)); }
	inline int32_t get_m_textAlignment_84() const { return ___m_textAlignment_84; }
	inline int32_t* get_address_of_m_textAlignment_84() { return &___m_textAlignment_84; }
	inline void set_m_textAlignment_84(int32_t value)
	{
		___m_textAlignment_84 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_85() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustification_85)); }
	inline int32_t get_m_lineJustification_85() const { return ___m_lineJustification_85; }
	inline int32_t* get_address_of_m_lineJustification_85() { return &___m_lineJustification_85; }
	inline void set_m_lineJustification_85(int32_t value)
	{
		___m_lineJustification_85 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_86() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustificationStack_86)); }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  get_m_lineJustificationStack_86() const { return ___m_lineJustificationStack_86; }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115 * get_address_of_m_lineJustificationStack_86() { return &___m_lineJustificationStack_86; }
	inline void set_m_lineJustificationStack_86(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  value)
	{
		___m_lineJustificationStack_86 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_86))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_87() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textContainerLocalCorners_87)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_textContainerLocalCorners_87() const { return ___m_textContainerLocalCorners_87; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_textContainerLocalCorners_87() { return &___m_textContainerLocalCorners_87; }
	inline void set_m_textContainerLocalCorners_87(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_textContainerLocalCorners_87 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_87), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_88() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterSpacing_88)); }
	inline float get_m_characterSpacing_88() const { return ___m_characterSpacing_88; }
	inline float* get_address_of_m_characterSpacing_88() { return &___m_characterSpacing_88; }
	inline void set_m_characterSpacing_88(float value)
	{
		___m_characterSpacing_88 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_89() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cSpacing_89)); }
	inline float get_m_cSpacing_89() const { return ___m_cSpacing_89; }
	inline float* get_address_of_m_cSpacing_89() { return &___m_cSpacing_89; }
	inline void set_m_cSpacing_89(float value)
	{
		___m_cSpacing_89 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_90() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_monoSpacing_90)); }
	inline float get_m_monoSpacing_90() const { return ___m_monoSpacing_90; }
	inline float* get_address_of_m_monoSpacing_90() { return &___m_monoSpacing_90; }
	inline void set_m_monoSpacing_90(float value)
	{
		___m_monoSpacing_90 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_91() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordSpacing_91)); }
	inline float get_m_wordSpacing_91() const { return ___m_wordSpacing_91; }
	inline float* get_address_of_m_wordSpacing_91() { return &___m_wordSpacing_91; }
	inline void set_m_wordSpacing_91(float value)
	{
		___m_wordSpacing_91 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_92() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacing_92)); }
	inline float get_m_lineSpacing_92() const { return ___m_lineSpacing_92; }
	inline float* get_address_of_m_lineSpacing_92() { return &___m_lineSpacing_92; }
	inline void set_m_lineSpacing_92(float value)
	{
		___m_lineSpacing_92 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_93() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingDelta_93)); }
	inline float get_m_lineSpacingDelta_93() const { return ___m_lineSpacingDelta_93; }
	inline float* get_address_of_m_lineSpacingDelta_93() { return &___m_lineSpacingDelta_93; }
	inline void set_m_lineSpacingDelta_93(float value)
	{
		___m_lineSpacingDelta_93 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_94() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineHeight_94)); }
	inline float get_m_lineHeight_94() const { return ___m_lineHeight_94; }
	inline float* get_address_of_m_lineHeight_94() { return &___m_lineHeight_94; }
	inline void set_m_lineHeight_94(float value)
	{
		___m_lineHeight_94 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_95() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingMax_95)); }
	inline float get_m_lineSpacingMax_95() const { return ___m_lineSpacingMax_95; }
	inline float* get_address_of_m_lineSpacingMax_95() { return &___m_lineSpacingMax_95; }
	inline void set_m_lineSpacingMax_95(float value)
	{
		___m_lineSpacingMax_95 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_96() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_paragraphSpacing_96)); }
	inline float get_m_paragraphSpacing_96() const { return ___m_paragraphSpacing_96; }
	inline float* get_address_of_m_paragraphSpacing_96() { return &___m_paragraphSpacing_96; }
	inline void set_m_paragraphSpacing_96(float value)
	{
		___m_paragraphSpacing_96 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_97() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthMaxAdj_97)); }
	inline float get_m_charWidthMaxAdj_97() const { return ___m_charWidthMaxAdj_97; }
	inline float* get_address_of_m_charWidthMaxAdj_97() { return &___m_charWidthMaxAdj_97; }
	inline void set_m_charWidthMaxAdj_97(float value)
	{
		___m_charWidthMaxAdj_97 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_98() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthAdjDelta_98)); }
	inline float get_m_charWidthAdjDelta_98() const { return ___m_charWidthAdjDelta_98; }
	inline float* get_address_of_m_charWidthAdjDelta_98() { return &___m_charWidthAdjDelta_98; }
	inline void set_m_charWidthAdjDelta_98(float value)
	{
		___m_charWidthAdjDelta_98 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_99() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableWordWrapping_99)); }
	inline bool get_m_enableWordWrapping_99() const { return ___m_enableWordWrapping_99; }
	inline bool* get_address_of_m_enableWordWrapping_99() { return &___m_enableWordWrapping_99; }
	inline void set_m_enableWordWrapping_99(bool value)
	{
		___m_enableWordWrapping_99 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_100() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCharacterWrappingEnabled_100)); }
	inline bool get_m_isCharacterWrappingEnabled_100() const { return ___m_isCharacterWrappingEnabled_100; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_100() { return &___m_isCharacterWrappingEnabled_100; }
	inline void set_m_isCharacterWrappingEnabled_100(bool value)
	{
		___m_isCharacterWrappingEnabled_100 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_101() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNonBreakingSpace_101)); }
	inline bool get_m_isNonBreakingSpace_101() const { return ___m_isNonBreakingSpace_101; }
	inline bool* get_address_of_m_isNonBreakingSpace_101() { return &___m_isNonBreakingSpace_101; }
	inline void set_m_isNonBreakingSpace_101(bool value)
	{
		___m_isNonBreakingSpace_101 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_102() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isIgnoringAlignment_102)); }
	inline bool get_m_isIgnoringAlignment_102() const { return ___m_isIgnoringAlignment_102; }
	inline bool* get_address_of_m_isIgnoringAlignment_102() { return &___m_isIgnoringAlignment_102; }
	inline void set_m_isIgnoringAlignment_102(bool value)
	{
		___m_isIgnoringAlignment_102 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_103() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordWrappingRatios_103)); }
	inline float get_m_wordWrappingRatios_103() const { return ___m_wordWrappingRatios_103; }
	inline float* get_address_of_m_wordWrappingRatios_103() { return &___m_wordWrappingRatios_103; }
	inline void set_m_wordWrappingRatios_103(float value)
	{
		___m_wordWrappingRatios_103 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_104() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overflowMode_104)); }
	inline int32_t get_m_overflowMode_104() const { return ___m_overflowMode_104; }
	inline int32_t* get_address_of_m_overflowMode_104() { return &___m_overflowMode_104; }
	inline void set_m_overflowMode_104(int32_t value)
	{
		___m_overflowMode_104 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_105() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstOverflowCharacterIndex_105)); }
	inline int32_t get_m_firstOverflowCharacterIndex_105() const { return ___m_firstOverflowCharacterIndex_105; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_105() { return &___m_firstOverflowCharacterIndex_105; }
	inline void set_m_firstOverflowCharacterIndex_105(int32_t value)
	{
		___m_firstOverflowCharacterIndex_105 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_106() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_linkedTextComponent_106)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_m_linkedTextComponent_106() const { return ___m_linkedTextComponent_106; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_m_linkedTextComponent_106() { return &___m_linkedTextComponent_106; }
	inline void set_m_linkedTextComponent_106(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___m_linkedTextComponent_106 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_106), (void*)value);
	}

	inline static int32_t get_offset_of_m_isLinkedTextComponent_107() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isLinkedTextComponent_107)); }
	inline bool get_m_isLinkedTextComponent_107() const { return ___m_isLinkedTextComponent_107; }
	inline bool* get_address_of_m_isLinkedTextComponent_107() { return &___m_isLinkedTextComponent_107; }
	inline void set_m_isLinkedTextComponent_107(bool value)
	{
		___m_isLinkedTextComponent_107 = value;
	}

	inline static int32_t get_offset_of_m_isTextTruncated_108() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isTextTruncated_108)); }
	inline bool get_m_isTextTruncated_108() const { return ___m_isTextTruncated_108; }
	inline bool* get_address_of_m_isTextTruncated_108() { return &___m_isTextTruncated_108; }
	inline void set_m_isTextTruncated_108(bool value)
	{
		___m_isTextTruncated_108 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_109() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableKerning_109)); }
	inline bool get_m_enableKerning_109() const { return ___m_enableKerning_109; }
	inline bool* get_address_of_m_enableKerning_109() { return &___m_enableKerning_109; }
	inline void set_m_enableKerning_109(bool value)
	{
		___m_enableKerning_109 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_110() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableExtraPadding_110)); }
	inline bool get_m_enableExtraPadding_110() const { return ___m_enableExtraPadding_110; }
	inline bool* get_address_of_m_enableExtraPadding_110() { return &___m_enableExtraPadding_110; }
	inline void set_m_enableExtraPadding_110(bool value)
	{
		___m_enableExtraPadding_110 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_111() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___checkPaddingRequired_111)); }
	inline bool get_checkPaddingRequired_111() const { return ___checkPaddingRequired_111; }
	inline bool* get_address_of_checkPaddingRequired_111() { return &___checkPaddingRequired_111; }
	inline void set_checkPaddingRequired_111(bool value)
	{
		___checkPaddingRequired_111 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_112() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRichText_112)); }
	inline bool get_m_isRichText_112() const { return ___m_isRichText_112; }
	inline bool* get_address_of_m_isRichText_112() { return &___m_isRichText_112; }
	inline void set_m_isRichText_112(bool value)
	{
		___m_isRichText_112 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_113() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_parseCtrlCharacters_113)); }
	inline bool get_m_parseCtrlCharacters_113() const { return ___m_parseCtrlCharacters_113; }
	inline bool* get_address_of_m_parseCtrlCharacters_113() { return &___m_parseCtrlCharacters_113; }
	inline void set_m_parseCtrlCharacters_113(bool value)
	{
		___m_parseCtrlCharacters_113 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_114() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOverlay_114)); }
	inline bool get_m_isOverlay_114() const { return ___m_isOverlay_114; }
	inline bool* get_address_of_m_isOverlay_114() { return &___m_isOverlay_114; }
	inline void set_m_isOverlay_114(bool value)
	{
		___m_isOverlay_114 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_115() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOrthographic_115)); }
	inline bool get_m_isOrthographic_115() const { return ___m_isOrthographic_115; }
	inline bool* get_address_of_m_isOrthographic_115() { return &___m_isOrthographic_115; }
	inline void set_m_isOrthographic_115(bool value)
	{
		___m_isOrthographic_115 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_116() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCullingEnabled_116)); }
	inline bool get_m_isCullingEnabled_116() const { return ___m_isCullingEnabled_116; }
	inline bool* get_address_of_m_isCullingEnabled_116() { return &___m_isCullingEnabled_116; }
	inline void set_m_isCullingEnabled_116(bool value)
	{
		___m_isCullingEnabled_116 = value;
	}

	inline static int32_t get_offset_of_m_ignoreRectMaskCulling_117() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreRectMaskCulling_117)); }
	inline bool get_m_ignoreRectMaskCulling_117() const { return ___m_ignoreRectMaskCulling_117; }
	inline bool* get_address_of_m_ignoreRectMaskCulling_117() { return &___m_ignoreRectMaskCulling_117; }
	inline void set_m_ignoreRectMaskCulling_117(bool value)
	{
		___m_ignoreRectMaskCulling_117 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_118() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreCulling_118)); }
	inline bool get_m_ignoreCulling_118() const { return ___m_ignoreCulling_118; }
	inline bool* get_address_of_m_ignoreCulling_118() { return &___m_ignoreCulling_118; }
	inline void set_m_ignoreCulling_118(bool value)
	{
		___m_ignoreCulling_118 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_119() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_horizontalMapping_119)); }
	inline int32_t get_m_horizontalMapping_119() const { return ___m_horizontalMapping_119; }
	inline int32_t* get_address_of_m_horizontalMapping_119() { return &___m_horizontalMapping_119; }
	inline void set_m_horizontalMapping_119(int32_t value)
	{
		___m_horizontalMapping_119 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_120() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_verticalMapping_120)); }
	inline int32_t get_m_verticalMapping_120() const { return ___m_verticalMapping_120; }
	inline int32_t* get_address_of_m_verticalMapping_120() { return &___m_verticalMapping_120; }
	inline void set_m_verticalMapping_120(int32_t value)
	{
		___m_verticalMapping_120 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_121() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_uvLineOffset_121)); }
	inline float get_m_uvLineOffset_121() const { return ___m_uvLineOffset_121; }
	inline float* get_address_of_m_uvLineOffset_121() { return &___m_uvLineOffset_121; }
	inline void set_m_uvLineOffset_121(float value)
	{
		___m_uvLineOffset_121 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_122() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderMode_122)); }
	inline int32_t get_m_renderMode_122() const { return ___m_renderMode_122; }
	inline int32_t* get_address_of_m_renderMode_122() { return &___m_renderMode_122; }
	inline void set_m_renderMode_122(int32_t value)
	{
		___m_renderMode_122 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_123() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_geometrySortingOrder_123)); }
	inline int32_t get_m_geometrySortingOrder_123() const { return ___m_geometrySortingOrder_123; }
	inline int32_t* get_address_of_m_geometrySortingOrder_123() { return &___m_geometrySortingOrder_123; }
	inline void set_m_geometrySortingOrder_123(int32_t value)
	{
		___m_geometrySortingOrder_123 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_124() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_VertexBufferAutoSizeReduction_124)); }
	inline bool get_m_VertexBufferAutoSizeReduction_124() const { return ___m_VertexBufferAutoSizeReduction_124; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_124() { return &___m_VertexBufferAutoSizeReduction_124; }
	inline void set_m_VertexBufferAutoSizeReduction_124(bool value)
	{
		___m_VertexBufferAutoSizeReduction_124 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_125() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacter_125)); }
	inline int32_t get_m_firstVisibleCharacter_125() const { return ___m_firstVisibleCharacter_125; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_125() { return &___m_firstVisibleCharacter_125; }
	inline void set_m_firstVisibleCharacter_125(int32_t value)
	{
		___m_firstVisibleCharacter_125 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_126() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleCharacters_126)); }
	inline int32_t get_m_maxVisibleCharacters_126() const { return ___m_maxVisibleCharacters_126; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_126() { return &___m_maxVisibleCharacters_126; }
	inline void set_m_maxVisibleCharacters_126(int32_t value)
	{
		___m_maxVisibleCharacters_126 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_127() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleWords_127)); }
	inline int32_t get_m_maxVisibleWords_127() const { return ___m_maxVisibleWords_127; }
	inline int32_t* get_address_of_m_maxVisibleWords_127() { return &___m_maxVisibleWords_127; }
	inline void set_m_maxVisibleWords_127(int32_t value)
	{
		___m_maxVisibleWords_127 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_128() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleLines_128)); }
	inline int32_t get_m_maxVisibleLines_128() const { return ___m_maxVisibleLines_128; }
	inline int32_t* get_address_of_m_maxVisibleLines_128() { return &___m_maxVisibleLines_128; }
	inline void set_m_maxVisibleLines_128(int32_t value)
	{
		___m_maxVisibleLines_128 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_129() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_useMaxVisibleDescender_129)); }
	inline bool get_m_useMaxVisibleDescender_129() const { return ___m_useMaxVisibleDescender_129; }
	inline bool* get_address_of_m_useMaxVisibleDescender_129() { return &___m_useMaxVisibleDescender_129; }
	inline void set_m_useMaxVisibleDescender_129(bool value)
	{
		___m_useMaxVisibleDescender_129 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_130() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageToDisplay_130)); }
	inline int32_t get_m_pageToDisplay_130() const { return ___m_pageToDisplay_130; }
	inline int32_t* get_address_of_m_pageToDisplay_130() { return &___m_pageToDisplay_130; }
	inline void set_m_pageToDisplay_130(int32_t value)
	{
		___m_pageToDisplay_130 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_131() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNewPage_131)); }
	inline bool get_m_isNewPage_131() const { return ___m_isNewPage_131; }
	inline bool* get_address_of_m_isNewPage_131() { return &___m_isNewPage_131; }
	inline void set_m_isNewPage_131(bool value)
	{
		___m_isNewPage_131 = value;
	}

	inline static int32_t get_offset_of_m_margin_132() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_margin_132)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_margin_132() const { return ___m_margin_132; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_margin_132() { return &___m_margin_132; }
	inline void set_m_margin_132(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_margin_132 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_133() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginLeft_133)); }
	inline float get_m_marginLeft_133() const { return ___m_marginLeft_133; }
	inline float* get_address_of_m_marginLeft_133() { return &___m_marginLeft_133; }
	inline void set_m_marginLeft_133(float value)
	{
		___m_marginLeft_133 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_134() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginRight_134)); }
	inline float get_m_marginRight_134() const { return ___m_marginRight_134; }
	inline float* get_address_of_m_marginRight_134() { return &___m_marginRight_134; }
	inline void set_m_marginRight_134(float value)
	{
		___m_marginRight_134 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_135() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginWidth_135)); }
	inline float get_m_marginWidth_135() const { return ___m_marginWidth_135; }
	inline float* get_address_of_m_marginWidth_135() { return &___m_marginWidth_135; }
	inline void set_m_marginWidth_135(float value)
	{
		___m_marginWidth_135 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_136() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginHeight_136)); }
	inline float get_m_marginHeight_136() const { return ___m_marginHeight_136; }
	inline float* get_address_of_m_marginHeight_136() { return &___m_marginHeight_136; }
	inline void set_m_marginHeight_136(float value)
	{
		___m_marginHeight_136 = value;
	}

	inline static int32_t get_offset_of_m_width_137() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_width_137)); }
	inline float get_m_width_137() const { return ___m_width_137; }
	inline float* get_address_of_m_width_137() { return &___m_width_137; }
	inline void set_m_width_137(float value)
	{
		___m_width_137 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_138() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textInfo_138)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_m_textInfo_138() const { return ___m_textInfo_138; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_m_textInfo_138() { return &___m_textInfo_138; }
	inline void set_m_textInfo_138(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___m_textInfo_138 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_138), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_139() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_havePropertiesChanged_139)); }
	inline bool get_m_havePropertiesChanged_139() const { return ___m_havePropertiesChanged_139; }
	inline bool* get_address_of_m_havePropertiesChanged_139() { return &___m_havePropertiesChanged_139; }
	inline void set_m_havePropertiesChanged_139(bool value)
	{
		___m_havePropertiesChanged_139 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_140() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingLegacyAnimationComponent_140)); }
	inline bool get_m_isUsingLegacyAnimationComponent_140() const { return ___m_isUsingLegacyAnimationComponent_140; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_140() { return &___m_isUsingLegacyAnimationComponent_140; }
	inline void set_m_isUsingLegacyAnimationComponent_140(bool value)
	{
		___m_isUsingLegacyAnimationComponent_140 = value;
	}

	inline static int32_t get_offset_of_m_transform_141() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_transform_141)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_transform_141() const { return ___m_transform_141; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_transform_141() { return &___m_transform_141; }
	inline void set_m_transform_141(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_transform_141 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_141), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_142() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_rectTransform_142)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_rectTransform_142() const { return ___m_rectTransform_142; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_rectTransform_142() { return &___m_rectTransform_142; }
	inline void set_m_rectTransform_142(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_rectTransform_142 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_142), (void*)value);
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_143() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___U3CautoSizeTextContainerU3Ek__BackingField_143)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_143() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_143; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_143() { return &___U3CautoSizeTextContainerU3Ek__BackingField_143; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_143(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_143 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_144() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_autoSizeTextContainer_144)); }
	inline bool get_m_autoSizeTextContainer_144() const { return ___m_autoSizeTextContainer_144; }
	inline bool* get_address_of_m_autoSizeTextContainer_144() { return &___m_autoSizeTextContainer_144; }
	inline void set_m_autoSizeTextContainer_144(bool value)
	{
		___m_autoSizeTextContainer_144 = value;
	}

	inline static int32_t get_offset_of_m_mesh_145() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_mesh_145)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_mesh_145() const { return ___m_mesh_145; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_mesh_145() { return &___m_mesh_145; }
	inline void set_m_mesh_145(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_mesh_145 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_145), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_146() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isVolumetricText_146)); }
	inline bool get_m_isVolumetricText_146() const { return ___m_isVolumetricText_146; }
	inline bool* get_address_of_m_isVolumetricText_146() { return &___m_isVolumetricText_146; }
	inline void set_m_isVolumetricText_146(bool value)
	{
		___m_isVolumetricText_146 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimator_147() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimator_147)); }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * get_m_spriteAnimator_147() const { return ___m_spriteAnimator_147; }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 ** get_address_of_m_spriteAnimator_147() { return &___m_spriteAnimator_147; }
	inline void set_m_spriteAnimator_147(TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * value)
	{
		___m_spriteAnimator_147 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_147), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_148() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleHeight_148)); }
	inline float get_m_flexibleHeight_148() const { return ___m_flexibleHeight_148; }
	inline float* get_address_of_m_flexibleHeight_148() { return &___m_flexibleHeight_148; }
	inline void set_m_flexibleHeight_148(float value)
	{
		___m_flexibleHeight_148 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_149() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleWidth_149)); }
	inline float get_m_flexibleWidth_149() const { return ___m_flexibleWidth_149; }
	inline float* get_address_of_m_flexibleWidth_149() { return &___m_flexibleWidth_149; }
	inline void set_m_flexibleWidth_149(float value)
	{
		___m_flexibleWidth_149 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_150() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minWidth_150)); }
	inline float get_m_minWidth_150() const { return ___m_minWidth_150; }
	inline float* get_address_of_m_minWidth_150() { return &___m_minWidth_150; }
	inline void set_m_minWidth_150(float value)
	{
		___m_minWidth_150 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_151() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minHeight_151)); }
	inline float get_m_minHeight_151() const { return ___m_minHeight_151; }
	inline float* get_address_of_m_minHeight_151() { return &___m_minHeight_151; }
	inline void set_m_minHeight_151(float value)
	{
		___m_minHeight_151 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_152() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxWidth_152)); }
	inline float get_m_maxWidth_152() const { return ___m_maxWidth_152; }
	inline float* get_address_of_m_maxWidth_152() { return &___m_maxWidth_152; }
	inline void set_m_maxWidth_152(float value)
	{
		___m_maxWidth_152 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_153() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxHeight_153)); }
	inline float get_m_maxHeight_153() const { return ___m_maxHeight_153; }
	inline float* get_address_of_m_maxHeight_153() { return &___m_maxHeight_153; }
	inline void set_m_maxHeight_153(float value)
	{
		___m_maxHeight_153 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_154() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_LayoutElement_154)); }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * get_m_LayoutElement_154() const { return ___m_LayoutElement_154; }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B ** get_address_of_m_LayoutElement_154() { return &___m_LayoutElement_154; }
	inline void set_m_LayoutElement_154(LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * value)
	{
		___m_LayoutElement_154 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_154), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_155() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredWidth_155)); }
	inline float get_m_preferredWidth_155() const { return ___m_preferredWidth_155; }
	inline float* get_address_of_m_preferredWidth_155() { return &___m_preferredWidth_155; }
	inline void set_m_preferredWidth_155(float value)
	{
		___m_preferredWidth_155 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_156() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedWidth_156)); }
	inline float get_m_renderedWidth_156() const { return ___m_renderedWidth_156; }
	inline float* get_address_of_m_renderedWidth_156() { return &___m_renderedWidth_156; }
	inline void set_m_renderedWidth_156(float value)
	{
		___m_renderedWidth_156 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_157() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredWidthDirty_157)); }
	inline bool get_m_isPreferredWidthDirty_157() const { return ___m_isPreferredWidthDirty_157; }
	inline bool* get_address_of_m_isPreferredWidthDirty_157() { return &___m_isPreferredWidthDirty_157; }
	inline void set_m_isPreferredWidthDirty_157(bool value)
	{
		___m_isPreferredWidthDirty_157 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_158() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredHeight_158)); }
	inline float get_m_preferredHeight_158() const { return ___m_preferredHeight_158; }
	inline float* get_address_of_m_preferredHeight_158() { return &___m_preferredHeight_158; }
	inline void set_m_preferredHeight_158(float value)
	{
		___m_preferredHeight_158 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_159() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedHeight_159)); }
	inline float get_m_renderedHeight_159() const { return ___m_renderedHeight_159; }
	inline float* get_address_of_m_renderedHeight_159() { return &___m_renderedHeight_159; }
	inline void set_m_renderedHeight_159(float value)
	{
		___m_renderedHeight_159 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_160() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredHeightDirty_160)); }
	inline bool get_m_isPreferredHeightDirty_160() const { return ___m_isPreferredHeightDirty_160; }
	inline bool* get_address_of_m_isPreferredHeightDirty_160() { return &___m_isPreferredHeightDirty_160; }
	inline void set_m_isPreferredHeightDirty_160(bool value)
	{
		___m_isPreferredHeightDirty_160 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_161() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCalculatingPreferredValues_161)); }
	inline bool get_m_isCalculatingPreferredValues_161() const { return ___m_isCalculatingPreferredValues_161; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_161() { return &___m_isCalculatingPreferredValues_161; }
	inline void set_m_isCalculatingPreferredValues_161(bool value)
	{
		___m_isCalculatingPreferredValues_161 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCount_162() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_recursiveCount_162)); }
	inline int32_t get_m_recursiveCount_162() const { return ___m_recursiveCount_162; }
	inline int32_t* get_address_of_m_recursiveCount_162() { return &___m_recursiveCount_162; }
	inline void set_m_recursiveCount_162(int32_t value)
	{
		___m_recursiveCount_162 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_163() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_layoutPriority_163)); }
	inline int32_t get_m_layoutPriority_163() const { return ___m_layoutPriority_163; }
	inline int32_t* get_address_of_m_layoutPriority_163() { return &___m_layoutPriority_163; }
	inline void set_m_layoutPriority_163(int32_t value)
	{
		___m_layoutPriority_163 = value;
	}

	inline static int32_t get_offset_of_m_isCalculateSizeRequired_164() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCalculateSizeRequired_164)); }
	inline bool get_m_isCalculateSizeRequired_164() const { return ___m_isCalculateSizeRequired_164; }
	inline bool* get_address_of_m_isCalculateSizeRequired_164() { return &___m_isCalculateSizeRequired_164; }
	inline void set_m_isCalculateSizeRequired_164(bool value)
	{
		___m_isCalculateSizeRequired_164 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_165() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isLayoutDirty_165)); }
	inline bool get_m_isLayoutDirty_165() const { return ___m_isLayoutDirty_165; }
	inline bool* get_address_of_m_isLayoutDirty_165() { return &___m_isLayoutDirty_165; }
	inline void set_m_isLayoutDirty_165(bool value)
	{
		___m_isLayoutDirty_165 = value;
	}

	inline static int32_t get_offset_of_m_verticesAlreadyDirty_166() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_verticesAlreadyDirty_166)); }
	inline bool get_m_verticesAlreadyDirty_166() const { return ___m_verticesAlreadyDirty_166; }
	inline bool* get_address_of_m_verticesAlreadyDirty_166() { return &___m_verticesAlreadyDirty_166; }
	inline void set_m_verticesAlreadyDirty_166(bool value)
	{
		___m_verticesAlreadyDirty_166 = value;
	}

	inline static int32_t get_offset_of_m_layoutAlreadyDirty_167() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_layoutAlreadyDirty_167)); }
	inline bool get_m_layoutAlreadyDirty_167() const { return ___m_layoutAlreadyDirty_167; }
	inline bool* get_address_of_m_layoutAlreadyDirty_167() { return &___m_layoutAlreadyDirty_167; }
	inline void set_m_layoutAlreadyDirty_167(bool value)
	{
		___m_layoutAlreadyDirty_167 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_168() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isAwake_168)); }
	inline bool get_m_isAwake_168() const { return ___m_isAwake_168; }
	inline bool* get_address_of_m_isAwake_168() { return &___m_isAwake_168; }
	inline void set_m_isAwake_168(bool value)
	{
		___m_isAwake_168 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_169() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isWaitingOnResourceLoad_169)); }
	inline bool get_m_isWaitingOnResourceLoad_169() const { return ___m_isWaitingOnResourceLoad_169; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_169() { return &___m_isWaitingOnResourceLoad_169; }
	inline void set_m_isWaitingOnResourceLoad_169(bool value)
	{
		___m_isWaitingOnResourceLoad_169 = value;
	}

	inline static int32_t get_offset_of_m_isInputParsingRequired_170() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isInputParsingRequired_170)); }
	inline bool get_m_isInputParsingRequired_170() const { return ___m_isInputParsingRequired_170; }
	inline bool* get_address_of_m_isInputParsingRequired_170() { return &___m_isInputParsingRequired_170; }
	inline void set_m_isInputParsingRequired_170(bool value)
	{
		___m_isInputParsingRequired_170 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_171() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_inputSource_171)); }
	inline int32_t get_m_inputSource_171() const { return ___m_inputSource_171; }
	inline int32_t* get_address_of_m_inputSource_171() { return &___m_inputSource_171; }
	inline void set_m_inputSource_171(int32_t value)
	{
		___m_inputSource_171 = value;
	}

	inline static int32_t get_offset_of_old_text_172() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___old_text_172)); }
	inline String_t* get_old_text_172() const { return ___old_text_172; }
	inline String_t** get_address_of_old_text_172() { return &___old_text_172; }
	inline void set_old_text_172(String_t* value)
	{
		___old_text_172 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___old_text_172), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontScale_173() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScale_173)); }
	inline float get_m_fontScale_173() const { return ___m_fontScale_173; }
	inline float* get_address_of_m_fontScale_173() { return &___m_fontScale_173; }
	inline void set_m_fontScale_173(float value)
	{
		___m_fontScale_173 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_174() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScaleMultiplier_174)); }
	inline float get_m_fontScaleMultiplier_174() const { return ___m_fontScaleMultiplier_174; }
	inline float* get_address_of_m_fontScaleMultiplier_174() { return &___m_fontScaleMultiplier_174; }
	inline void set_m_fontScaleMultiplier_174(float value)
	{
		___m_fontScaleMultiplier_174 = value;
	}

	inline static int32_t get_offset_of_m_htmlTag_175() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlTag_175)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_htmlTag_175() const { return ___m_htmlTag_175; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_htmlTag_175() { return &___m_htmlTag_175; }
	inline void set_m_htmlTag_175(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_htmlTag_175 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_175), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_176() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xmlAttribute_176)); }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* get_m_xmlAttribute_176() const { return ___m_xmlAttribute_176; }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652** get_address_of_m_xmlAttribute_176() { return &___m_xmlAttribute_176; }
	inline void set_m_xmlAttribute_176(RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* value)
	{
		___m_xmlAttribute_176 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_176), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_177() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_attributeParameterValues_177)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_attributeParameterValues_177() const { return ___m_attributeParameterValues_177; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_attributeParameterValues_177() { return &___m_attributeParameterValues_177; }
	inline void set_m_attributeParameterValues_177(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_attributeParameterValues_177 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_177), (void*)value);
	}

	inline static int32_t get_offset_of_tag_LineIndent_178() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_LineIndent_178)); }
	inline float get_tag_LineIndent_178() const { return ___tag_LineIndent_178; }
	inline float* get_address_of_tag_LineIndent_178() { return &___tag_LineIndent_178; }
	inline void set_tag_LineIndent_178(float value)
	{
		___tag_LineIndent_178 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_179() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_Indent_179)); }
	inline float get_tag_Indent_179() const { return ___tag_Indent_179; }
	inline float* get_address_of_tag_Indent_179() { return &___tag_Indent_179; }
	inline void set_tag_Indent_179(float value)
	{
		___tag_Indent_179 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_180() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_indentStack_180)); }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  get_m_indentStack_180() const { return ___m_indentStack_180; }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106 * get_address_of_m_indentStack_180() { return &___m_indentStack_180; }
	inline void set_m_indentStack_180(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  value)
	{
		___m_indentStack_180 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_180))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_181() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_NoParsing_181)); }
	inline bool get_tag_NoParsing_181() const { return ___tag_NoParsing_181; }
	inline bool* get_address_of_tag_NoParsing_181() { return &___tag_NoParsing_181; }
	inline void set_tag_NoParsing_181(bool value)
	{
		___tag_NoParsing_181 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_182() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isParsingText_182)); }
	inline bool get_m_isParsingText_182() const { return ___m_isParsingText_182; }
	inline bool* get_address_of_m_isParsingText_182() { return &___m_isParsingText_182; }
	inline void set_m_isParsingText_182(bool value)
	{
		___m_isParsingText_182 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_183() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FXMatrix_183)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_FXMatrix_183() const { return ___m_FXMatrix_183; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_FXMatrix_183() { return &___m_FXMatrix_183; }
	inline void set_m_FXMatrix_183(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_FXMatrix_183 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_184() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isFXMatrixSet_184)); }
	inline bool get_m_isFXMatrixSet_184() const { return ___m_isFXMatrixSet_184; }
	inline bool* get_address_of_m_isFXMatrixSet_184() { return &___m_isFXMatrixSet_184; }
	inline void set_m_isFXMatrixSet_184(bool value)
	{
		___m_isFXMatrixSet_184 = value;
	}

	inline static int32_t get_offset_of_m_TextParsingBuffer_185() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextParsingBuffer_185)); }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* get_m_TextParsingBuffer_185() const { return ___m_TextParsingBuffer_185; }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505** get_address_of_m_TextParsingBuffer_185() { return &___m_TextParsingBuffer_185; }
	inline void set_m_TextParsingBuffer_185(UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* value)
	{
		___m_TextParsingBuffer_185 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextParsingBuffer_185), (void*)value);
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_186() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_internalCharacterInfo_186)); }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* get_m_internalCharacterInfo_186() const { return ___m_internalCharacterInfo_186; }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604** get_address_of_m_internalCharacterInfo_186() { return &___m_internalCharacterInfo_186; }
	inline void set_m_internalCharacterInfo_186(TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* value)
	{
		___m_internalCharacterInfo_186 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_186), (void*)value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_187() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_input_CharArray_187)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_input_CharArray_187() const { return ___m_input_CharArray_187; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_input_CharArray_187() { return &___m_input_CharArray_187; }
	inline void set_m_input_CharArray_187(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_input_CharArray_187 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_input_CharArray_187), (void*)value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_188() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charArray_Length_188)); }
	inline int32_t get_m_charArray_Length_188() const { return ___m_charArray_Length_188; }
	inline int32_t* get_address_of_m_charArray_Length_188() { return &___m_charArray_Length_188; }
	inline void set_m_charArray_Length_188(int32_t value)
	{
		___m_charArray_Length_188 = value;
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_189() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_totalCharacterCount_189)); }
	inline int32_t get_m_totalCharacterCount_189() const { return ___m_totalCharacterCount_189; }
	inline int32_t* get_address_of_m_totalCharacterCount_189() { return &___m_totalCharacterCount_189; }
	inline void set_m_totalCharacterCount_189(int32_t value)
	{
		___m_totalCharacterCount_189 = value;
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_190() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedWordWrapState_190)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedWordWrapState_190() const { return ___m_SavedWordWrapState_190; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedWordWrapState_190() { return &___m_SavedWordWrapState_190; }
	inline void set_m_SavedWordWrapState_190(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedWordWrapState_190 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_190))->___textInfo_27), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___colorStack_34))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___underlineColorStack_35))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___strikethroughColorStack_36))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___highlightColorStack_37))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___colorGradientStack_38))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___colorGradientStack_38))->___m_DefaultItem_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___sizeStack_39))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___indentStack_40))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___fontWeightStack_41))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___styleStack_42))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___baselineStack_43))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___actionStack_44))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___lineJustificationStack_46))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_190))->___currentFontAsset_48), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_190))->___currentSpriteAsset_49), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_190))->___currentMaterial_50), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_191() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedLineState_191)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedLineState_191() const { return ___m_SavedLineState_191; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedLineState_191() { return &___m_SavedLineState_191; }
	inline void set_m_SavedLineState_191(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedLineState_191 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_191))->___textInfo_27), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___colorStack_34))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___underlineColorStack_35))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___strikethroughColorStack_36))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___highlightColorStack_37))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___colorGradientStack_38))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___colorGradientStack_38))->___m_DefaultItem_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___sizeStack_39))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___indentStack_40))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___fontWeightStack_41))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___styleStack_42))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___baselineStack_43))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___actionStack_44))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___lineJustificationStack_46))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_191))->___currentFontAsset_48), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_191))->___currentSpriteAsset_49), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_191))->___currentMaterial_50), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_characterCount_192() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterCount_192)); }
	inline int32_t get_m_characterCount_192() const { return ___m_characterCount_192; }
	inline int32_t* get_address_of_m_characterCount_192() { return &___m_characterCount_192; }
	inline void set_m_characterCount_192(int32_t value)
	{
		___m_characterCount_192 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_193() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstCharacterOfLine_193)); }
	inline int32_t get_m_firstCharacterOfLine_193() const { return ___m_firstCharacterOfLine_193; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_193() { return &___m_firstCharacterOfLine_193; }
	inline void set_m_firstCharacterOfLine_193(int32_t value)
	{
		___m_firstCharacterOfLine_193 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_194() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacterOfLine_194)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_194() const { return ___m_firstVisibleCharacterOfLine_194; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_194() { return &___m_firstVisibleCharacterOfLine_194; }
	inline void set_m_firstVisibleCharacterOfLine_194(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_194 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_195() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastCharacterOfLine_195)); }
	inline int32_t get_m_lastCharacterOfLine_195() const { return ___m_lastCharacterOfLine_195; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_195() { return &___m_lastCharacterOfLine_195; }
	inline void set_m_lastCharacterOfLine_195(int32_t value)
	{
		___m_lastCharacterOfLine_195 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_196() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastVisibleCharacterOfLine_196)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_196() const { return ___m_lastVisibleCharacterOfLine_196; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_196() { return &___m_lastVisibleCharacterOfLine_196; }
	inline void set_m_lastVisibleCharacterOfLine_196(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_196 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_197() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineNumber_197)); }
	inline int32_t get_m_lineNumber_197() const { return ___m_lineNumber_197; }
	inline int32_t* get_address_of_m_lineNumber_197() { return &___m_lineNumber_197; }
	inline void set_m_lineNumber_197(int32_t value)
	{
		___m_lineNumber_197 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_198() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineVisibleCharacterCount_198)); }
	inline int32_t get_m_lineVisibleCharacterCount_198() const { return ___m_lineVisibleCharacterCount_198; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_198() { return &___m_lineVisibleCharacterCount_198; }
	inline void set_m_lineVisibleCharacterCount_198(int32_t value)
	{
		___m_lineVisibleCharacterCount_198 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_199() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageNumber_199)); }
	inline int32_t get_m_pageNumber_199() const { return ___m_pageNumber_199; }
	inline int32_t* get_address_of_m_pageNumber_199() { return &___m_pageNumber_199; }
	inline void set_m_pageNumber_199(int32_t value)
	{
		___m_pageNumber_199 = value;
	}

	inline static int32_t get_offset_of_m_maxAscender_200() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxAscender_200)); }
	inline float get_m_maxAscender_200() const { return ___m_maxAscender_200; }
	inline float* get_address_of_m_maxAscender_200() { return &___m_maxAscender_200; }
	inline void set_m_maxAscender_200(float value)
	{
		___m_maxAscender_200 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_201() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxCapHeight_201)); }
	inline float get_m_maxCapHeight_201() const { return ___m_maxCapHeight_201; }
	inline float* get_address_of_m_maxCapHeight_201() { return &___m_maxCapHeight_201; }
	inline void set_m_maxCapHeight_201(float value)
	{
		___m_maxCapHeight_201 = value;
	}

	inline static int32_t get_offset_of_m_maxDescender_202() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxDescender_202)); }
	inline float get_m_maxDescender_202() const { return ___m_maxDescender_202; }
	inline float* get_address_of_m_maxDescender_202() { return &___m_maxDescender_202; }
	inline void set_m_maxDescender_202(float value)
	{
		___m_maxDescender_202 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_203() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineAscender_203)); }
	inline float get_m_maxLineAscender_203() const { return ___m_maxLineAscender_203; }
	inline float* get_address_of_m_maxLineAscender_203() { return &___m_maxLineAscender_203; }
	inline void set_m_maxLineAscender_203(float value)
	{
		___m_maxLineAscender_203 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_204() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineDescender_204)); }
	inline float get_m_maxLineDescender_204() const { return ___m_maxLineDescender_204; }
	inline float* get_address_of_m_maxLineDescender_204() { return &___m_maxLineDescender_204; }
	inline void set_m_maxLineDescender_204(float value)
	{
		___m_maxLineDescender_204 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_205() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_startOfLineAscender_205)); }
	inline float get_m_startOfLineAscender_205() const { return ___m_startOfLineAscender_205; }
	inline float* get_address_of_m_startOfLineAscender_205() { return &___m_startOfLineAscender_205; }
	inline void set_m_startOfLineAscender_205(float value)
	{
		___m_startOfLineAscender_205 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_206() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineOffset_206)); }
	inline float get_m_lineOffset_206() const { return ___m_lineOffset_206; }
	inline float* get_address_of_m_lineOffset_206() { return &___m_lineOffset_206; }
	inline void set_m_lineOffset_206(float value)
	{
		___m_lineOffset_206 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_207() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_meshExtents_207)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_m_meshExtents_207() const { return ___m_meshExtents_207; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_m_meshExtents_207() { return &___m_meshExtents_207; }
	inline void set_m_meshExtents_207(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___m_meshExtents_207 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_208() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlColor_208)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_htmlColor_208() const { return ___m_htmlColor_208; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_htmlColor_208() { return &___m_htmlColor_208; }
	inline void set_m_htmlColor_208(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_htmlColor_208 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_209() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorStack_209)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_colorStack_209() const { return ___m_colorStack_209; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_colorStack_209() { return &___m_colorStack_209; }
	inline void set_m_colorStack_209(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_colorStack_209 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_209))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_210() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColorStack_210)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_underlineColorStack_210() const { return ___m_underlineColorStack_210; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_underlineColorStack_210() { return &___m_underlineColorStack_210; }
	inline void set_m_underlineColorStack_210(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_underlineColorStack_210 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_210))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_211() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColorStack_211)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_strikethroughColorStack_211() const { return ___m_strikethroughColorStack_211; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_strikethroughColorStack_211() { return &___m_strikethroughColorStack_211; }
	inline void set_m_strikethroughColorStack_211(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_strikethroughColorStack_211 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_211))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_highlightColorStack_212() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_highlightColorStack_212)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_highlightColorStack_212() const { return ___m_highlightColorStack_212; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_highlightColorStack_212() { return &___m_highlightColorStack_212; }
	inline void set_m_highlightColorStack_212(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_highlightColorStack_212 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_highlightColorStack_212))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_213() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientPreset_213)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_colorGradientPreset_213() const { return ___m_colorGradientPreset_213; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_colorGradientPreset_213() { return &___m_colorGradientPreset_213; }
	inline void set_m_colorGradientPreset_213(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_colorGradientPreset_213 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_213), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_214() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientStack_214)); }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  get_m_colorGradientStack_214() const { return ___m_colorGradientStack_214; }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D * get_address_of_m_colorGradientStack_214() { return &___m_colorGradientStack_214; }
	inline void set_m_colorGradientStack_214(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  value)
	{
		___m_colorGradientStack_214 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_214))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_214))->___m_DefaultItem_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_tabSpacing_215() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tabSpacing_215)); }
	inline float get_m_tabSpacing_215() const { return ___m_tabSpacing_215; }
	inline float* get_address_of_m_tabSpacing_215() { return &___m_tabSpacing_215; }
	inline void set_m_tabSpacing_215(float value)
	{
		___m_tabSpacing_215 = value;
	}

	inline static int32_t get_offset_of_m_spacing_216() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spacing_216)); }
	inline float get_m_spacing_216() const { return ___m_spacing_216; }
	inline float* get_address_of_m_spacing_216() { return &___m_spacing_216; }
	inline void set_m_spacing_216(float value)
	{
		___m_spacing_216 = value;
	}

	inline static int32_t get_offset_of_m_styleStack_217() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_styleStack_217)); }
	inline TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  get_m_styleStack_217() const { return ___m_styleStack_217; }
	inline TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293 * get_address_of_m_styleStack_217() { return &___m_styleStack_217; }
	inline void set_m_styleStack_217(TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  value)
	{
		___m_styleStack_217 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_styleStack_217))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_actionStack_218() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_actionStack_218)); }
	inline TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  get_m_actionStack_218() const { return ___m_actionStack_218; }
	inline TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293 * get_address_of_m_actionStack_218() { return &___m_actionStack_218; }
	inline void set_m_actionStack_218(TMP_RichTextTagStack_1_tC6AC19F231736A53E4E73CA41E8BE25BCCE04293  value)
	{
		___m_actionStack_218 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_218))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_219() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_padding_219)); }
	inline float get_m_padding_219() const { return ___m_padding_219; }
	inline float* get_address_of_m_padding_219() { return &___m_padding_219; }
	inline void set_m_padding_219(float value)
	{
		___m_padding_219 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_220() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffset_220)); }
	inline float get_m_baselineOffset_220() const { return ___m_baselineOffset_220; }
	inline float* get_address_of_m_baselineOffset_220() { return &___m_baselineOffset_220; }
	inline void set_m_baselineOffset_220(float value)
	{
		___m_baselineOffset_220 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_221() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffsetStack_221)); }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  get_m_baselineOffsetStack_221() const { return ___m_baselineOffsetStack_221; }
	inline TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106 * get_address_of_m_baselineOffsetStack_221() { return &___m_baselineOffsetStack_221; }
	inline void set_m_baselineOffsetStack_221(TMP_RichTextTagStack_1_tD5CFAF6390F82194115C110DC92A2CFB29529106  value)
	{
		___m_baselineOffsetStack_221 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_221))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_222() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xAdvance_222)); }
	inline float get_m_xAdvance_222() const { return ___m_xAdvance_222; }
	inline float* get_address_of_m_xAdvance_222() { return &___m_xAdvance_222; }
	inline void set_m_xAdvance_222(float value)
	{
		___m_xAdvance_222 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_223() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textElementType_223)); }
	inline int32_t get_m_textElementType_223() const { return ___m_textElementType_223; }
	inline int32_t* get_address_of_m_textElementType_223() { return &___m_textElementType_223; }
	inline void set_m_textElementType_223(int32_t value)
	{
		___m_textElementType_223 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_224() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_TextElement_224)); }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * get_m_cached_TextElement_224() const { return ___m_cached_TextElement_224; }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 ** get_address_of_m_cached_TextElement_224() { return &___m_cached_TextElement_224; }
	inline void set_m_cached_TextElement_224(TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * value)
	{
		___m_cached_TextElement_224 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_224), (void*)value);
	}

	inline static int32_t get_offset_of_m_cached_Underline_Character_225() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_Underline_Character_225)); }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D * get_m_cached_Underline_Character_225() const { return ___m_cached_Underline_Character_225; }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D ** get_address_of_m_cached_Underline_Character_225() { return &___m_cached_Underline_Character_225; }
	inline void set_m_cached_Underline_Character_225(TMP_Character_t1875AACA978396521498D6A699052C187903553D * value)
	{
		___m_cached_Underline_Character_225 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_Underline_Character_225), (void*)value);
	}

	inline static int32_t get_offset_of_m_cached_Ellipsis_Character_226() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_Ellipsis_Character_226)); }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D * get_m_cached_Ellipsis_Character_226() const { return ___m_cached_Ellipsis_Character_226; }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D ** get_address_of_m_cached_Ellipsis_Character_226() { return &___m_cached_Ellipsis_Character_226; }
	inline void set_m_cached_Ellipsis_Character_226(TMP_Character_t1875AACA978396521498D6A699052C187903553D * value)
	{
		___m_cached_Ellipsis_Character_226 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_Ellipsis_Character_226), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_227() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_defaultSpriteAsset_227)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_defaultSpriteAsset_227() const { return ___m_defaultSpriteAsset_227; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_defaultSpriteAsset_227() { return &___m_defaultSpriteAsset_227; }
	inline void set_m_defaultSpriteAsset_227(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_defaultSpriteAsset_227 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_227), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_228() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentSpriteAsset_228)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_currentSpriteAsset_228() const { return ___m_currentSpriteAsset_228; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_currentSpriteAsset_228() { return &___m_currentSpriteAsset_228; }
	inline void set_m_currentSpriteAsset_228(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_currentSpriteAsset_228 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_228), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_229() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteCount_229)); }
	inline int32_t get_m_spriteCount_229() const { return ___m_spriteCount_229; }
	inline int32_t* get_address_of_m_spriteCount_229() { return &___m_spriteCount_229; }
	inline void set_m_spriteCount_229(int32_t value)
	{
		___m_spriteCount_229 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_230() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteIndex_230)); }
	inline int32_t get_m_spriteIndex_230() const { return ___m_spriteIndex_230; }
	inline int32_t* get_address_of_m_spriteIndex_230() { return &___m_spriteIndex_230; }
	inline void set_m_spriteIndex_230(int32_t value)
	{
		___m_spriteIndex_230 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_231() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimationID_231)); }
	inline int32_t get_m_spriteAnimationID_231() const { return ___m_spriteAnimationID_231; }
	inline int32_t* get_address_of_m_spriteAnimationID_231() { return &___m_spriteAnimationID_231; }
	inline void set_m_spriteAnimationID_231(int32_t value)
	{
		___m_spriteAnimationID_231 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_232() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreActiveState_232)); }
	inline bool get_m_ignoreActiveState_232() const { return ___m_ignoreActiveState_232; }
	inline bool* get_address_of_m_ignoreActiveState_232() { return &___m_ignoreActiveState_232; }
	inline void set_m_ignoreActiveState_232(bool value)
	{
		___m_ignoreActiveState_232 = value;
	}

	inline static int32_t get_offset_of_k_Power_233() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___k_Power_233)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_k_Power_233() const { return ___k_Power_233; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_k_Power_233() { return &___k_Power_233; }
	inline void set_k_Power_233(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___k_Power_233 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_233), (void*)value);
	}
};

struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___s_colorWhite_51;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargePositiveVector2_234;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargeNegativeVector2_235;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_236;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_237;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_238;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_239;

public:
	inline static int32_t get_offset_of_s_colorWhite_51() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___s_colorWhite_51)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_s_colorWhite_51() const { return ___s_colorWhite_51; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_s_colorWhite_51() { return &___s_colorWhite_51; }
	inline void set_s_colorWhite_51(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___s_colorWhite_51 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_234() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveVector2_234)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargePositiveVector2_234() const { return ___k_LargePositiveVector2_234; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargePositiveVector2_234() { return &___k_LargePositiveVector2_234; }
	inline void set_k_LargePositiveVector2_234(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargePositiveVector2_234 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_235() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeVector2_235)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargeNegativeVector2_235() const { return ___k_LargeNegativeVector2_235; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargeNegativeVector2_235() { return &___k_LargeNegativeVector2_235; }
	inline void set_k_LargeNegativeVector2_235(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargeNegativeVector2_235 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_236() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveFloat_236)); }
	inline float get_k_LargePositiveFloat_236() const { return ___k_LargePositiveFloat_236; }
	inline float* get_address_of_k_LargePositiveFloat_236() { return &___k_LargePositiveFloat_236; }
	inline void set_k_LargePositiveFloat_236(float value)
	{
		___k_LargePositiveFloat_236 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_237() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeFloat_237)); }
	inline float get_k_LargeNegativeFloat_237() const { return ___k_LargeNegativeFloat_237; }
	inline float* get_address_of_k_LargeNegativeFloat_237() { return &___k_LargeNegativeFloat_237; }
	inline void set_k_LargeNegativeFloat_237(float value)
	{
		___k_LargeNegativeFloat_237 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_238() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveInt_238)); }
	inline int32_t get_k_LargePositiveInt_238() const { return ___k_LargePositiveInt_238; }
	inline int32_t* get_address_of_k_LargePositiveInt_238() { return &___k_LargePositiveInt_238; }
	inline void set_k_LargePositiveInt_238(int32_t value)
	{
		___k_LargePositiveInt_238 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_239() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeInt_239)); }
	inline int32_t get_k_LargeNegativeInt_239() const { return ___k_LargeNegativeInt_239; }
	inline int32_t* get_address_of_k_LargeNegativeInt_239() { return &___k_LargeNegativeInt_239; }
	inline void set_k_LargeNegativeInt_239(int32_t value)
	{
		___k_LargeNegativeInt_239 = value;
	}
};


// UnityEngine.UI.Image
struct  Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_Sprite_35;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_OverrideSprite_36;
	// UnityEngine.UI.Image_Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_37;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_38;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_39;
	// UnityEngine.UI.Image_FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_40;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_41;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_42;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_43;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_44;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_45;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_46;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_47;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_48;

public:
	inline static int32_t get_offset_of_m_Sprite_35() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Sprite_35)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_Sprite_35() const { return ___m_Sprite_35; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_Sprite_35() { return &___m_Sprite_35; }
	inline void set_m_Sprite_35(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_Sprite_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_36() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_OverrideSprite_36)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_OverrideSprite_36() const { return ___m_OverrideSprite_36; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_OverrideSprite_36() { return &___m_OverrideSprite_36; }
	inline void set_m_OverrideSprite_36(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_OverrideSprite_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_37() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Type_37)); }
	inline int32_t get_m_Type_37() const { return ___m_Type_37; }
	inline int32_t* get_address_of_m_Type_37() { return &___m_Type_37; }
	inline void set_m_Type_37(int32_t value)
	{
		___m_Type_37 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_38() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PreserveAspect_38)); }
	inline bool get_m_PreserveAspect_38() const { return ___m_PreserveAspect_38; }
	inline bool* get_address_of_m_PreserveAspect_38() { return &___m_PreserveAspect_38; }
	inline void set_m_PreserveAspect_38(bool value)
	{
		___m_PreserveAspect_38 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_39() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillCenter_39)); }
	inline bool get_m_FillCenter_39() const { return ___m_FillCenter_39; }
	inline bool* get_address_of_m_FillCenter_39() { return &___m_FillCenter_39; }
	inline void set_m_FillCenter_39(bool value)
	{
		___m_FillCenter_39 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_40() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillMethod_40)); }
	inline int32_t get_m_FillMethod_40() const { return ___m_FillMethod_40; }
	inline int32_t* get_address_of_m_FillMethod_40() { return &___m_FillMethod_40; }
	inline void set_m_FillMethod_40(int32_t value)
	{
		___m_FillMethod_40 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_41() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillAmount_41)); }
	inline float get_m_FillAmount_41() const { return ___m_FillAmount_41; }
	inline float* get_address_of_m_FillAmount_41() { return &___m_FillAmount_41; }
	inline void set_m_FillAmount_41(float value)
	{
		___m_FillAmount_41 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_42() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillClockwise_42)); }
	inline bool get_m_FillClockwise_42() const { return ___m_FillClockwise_42; }
	inline bool* get_address_of_m_FillClockwise_42() { return &___m_FillClockwise_42; }
	inline void set_m_FillClockwise_42(bool value)
	{
		___m_FillClockwise_42 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_43() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillOrigin_43)); }
	inline int32_t get_m_FillOrigin_43() const { return ___m_FillOrigin_43; }
	inline int32_t* get_address_of_m_FillOrigin_43() { return &___m_FillOrigin_43; }
	inline void set_m_FillOrigin_43(int32_t value)
	{
		___m_FillOrigin_43 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_44() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_AlphaHitTestMinimumThreshold_44)); }
	inline float get_m_AlphaHitTestMinimumThreshold_44() const { return ___m_AlphaHitTestMinimumThreshold_44; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_44() { return &___m_AlphaHitTestMinimumThreshold_44; }
	inline void set_m_AlphaHitTestMinimumThreshold_44(float value)
	{
		___m_AlphaHitTestMinimumThreshold_44 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_45() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Tracked_45)); }
	inline bool get_m_Tracked_45() const { return ___m_Tracked_45; }
	inline bool* get_address_of_m_Tracked_45() { return &___m_Tracked_45; }
	inline void set_m_Tracked_45(bool value)
	{
		___m_Tracked_45 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_46() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_UseSpriteMesh_46)); }
	inline bool get_m_UseSpriteMesh_46() const { return ___m_UseSpriteMesh_46; }
	inline bool* get_address_of_m_UseSpriteMesh_46() { return &___m_UseSpriteMesh_46; }
	inline void set_m_UseSpriteMesh_46(bool value)
	{
		___m_UseSpriteMesh_46 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_47() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PixelsPerUnitMultiplier_47)); }
	inline float get_m_PixelsPerUnitMultiplier_47() const { return ___m_PixelsPerUnitMultiplier_47; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_47() { return &___m_PixelsPerUnitMultiplier_47; }
	inline void set_m_PixelsPerUnitMultiplier_47(float value)
	{
		___m_PixelsPerUnitMultiplier_47 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_48() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_CachedReferencePixelsPerUnit_48)); }
	inline float get_m_CachedReferencePixelsPerUnit_48() const { return ___m_CachedReferencePixelsPerUnit_48; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_48() { return &___m_CachedReferencePixelsPerUnit_48; }
	inline void set_m_CachedReferencePixelsPerUnit_48(float value)
	{
		___m_CachedReferencePixelsPerUnit_48 = value;
	}
};

struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_ETC1DefaultUI_34;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_VertScratch_49;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_UVScratch_50;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Xy_51;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Uv_52;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * ___m_TrackedTexturelessImages_53;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_54;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_34() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_ETC1DefaultUI_34)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_ETC1DefaultUI_34() const { return ___s_ETC1DefaultUI_34; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_ETC1DefaultUI_34() { return &___s_ETC1DefaultUI_34; }
	inline void set_s_ETC1DefaultUI_34(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_ETC1DefaultUI_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_49() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_VertScratch_49)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_VertScratch_49() const { return ___s_VertScratch_49; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_VertScratch_49() { return &___s_VertScratch_49; }
	inline void set_s_VertScratch_49(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_VertScratch_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_49), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_50() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_UVScratch_50)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_UVScratch_50() const { return ___s_UVScratch_50; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_UVScratch_50() { return &___s_UVScratch_50; }
	inline void set_s_UVScratch_50(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_UVScratch_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_50), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_51() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Xy_51)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Xy_51() const { return ___s_Xy_51; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Xy_51() { return &___s_Xy_51; }
	inline void set_s_Xy_51(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Xy_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_52() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Uv_52)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Uv_52() const { return ___s_Uv_52; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Uv_52() { return &___s_Uv_52; }
	inline void set_s_Uv_52(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Uv_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_52), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_53() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___m_TrackedTexturelessImages_53)); }
	inline List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * get_m_TrackedTexturelessImages_53() const { return ___m_TrackedTexturelessImages_53; }
	inline List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA ** get_address_of_m_TrackedTexturelessImages_53() { return &___m_TrackedTexturelessImages_53; }
	inline void set_m_TrackedTexturelessImages_53(List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * value)
	{
		___m_TrackedTexturelessImages_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_54() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Initialized_54)); }
	inline bool get_s_Initialized_54() const { return ___s_Initialized_54; }
	inline bool* get_address_of_s_Initialized_54() { return &___s_Initialized_54; }
	inline void set_s_Initialized_54(bool value)
	{
		___s_Initialized_54 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_34;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_35;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_37;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_39;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_40;

public:
	inline static int32_t get_offset_of_m_FontData_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_34)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_34() const { return ___m_FontData_34; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_34() { return &___m_FontData_34; }
	inline void set_m_FontData_34(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_35)); }
	inline String_t* get_m_Text_35() const { return ___m_Text_35; }
	inline String_t** get_address_of_m_Text_35() { return &___m_Text_35; }
	inline void set_m_Text_35(String_t* value)
	{
		___m_Text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_36)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_36() const { return ___m_TextCache_36; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_36() { return &___m_TextCache_36; }
	inline void set_m_TextCache_36(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_37() const { return ___m_TextCacheForLayout_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_37() { return &___m_TextCacheForLayout_37; }
	inline void set_m_TextCacheForLayout_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_39)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_39() const { return ___m_DisableFontTextureRebuiltCallback_39; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_39() { return &___m_DisableFontTextureRebuiltCallback_39; }
	inline void set_m_DisableFontTextureRebuiltCallback_39(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_39 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_40)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_40() const { return ___m_TempVerts_40; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_40() { return &___m_TempVerts_40; }
	inline void set_m_TempVerts_40(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_40), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_38;

public:
	inline static int32_t get_offset_of_s_DefaultText_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_38)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_38() const { return ___s_DefaultText_38; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_38() { return &___s_DefaultText_38; }
	inline void set_s_DefaultText_38(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_38), (void*)value);
	}
};


// TMPro.TextMeshProUGUI
struct  TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438  : public TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7
{
public:
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_240;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_241;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* ___m_subTextObjects_242;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_243;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_RectTransformCorners_244;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_canvasRenderer_245;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_canvas_246;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_247;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_248;
	// System.Boolean TMPro.TextMeshProUGUI::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_249;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_baseMaterial_250;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_251;
	// System.Int32 TMPro.TextMeshProUGUI::m_stencilID
	int32_t ___m_stencilID_252;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_maskOffset_253;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_EnvMapMatrix_254;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_255;
	// System.Int32 TMPro.TextMeshProUGUI::m_recursiveCountA
	int32_t ___m_recursiveCountA_256;
	// System.Int32 TMPro.TextMeshProUGUI::loopCountA
	int32_t ___loopCountA_257;

public:
	inline static int32_t get_offset_of_m_isRebuildingLayout_240() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isRebuildingLayout_240)); }
	inline bool get_m_isRebuildingLayout_240() const { return ___m_isRebuildingLayout_240; }
	inline bool* get_address_of_m_isRebuildingLayout_240() { return &___m_isRebuildingLayout_240; }
	inline void set_m_isRebuildingLayout_240(bool value)
	{
		___m_isRebuildingLayout_240 = value;
	}

	inline static int32_t get_offset_of_m_hasFontAssetChanged_241() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_hasFontAssetChanged_241)); }
	inline bool get_m_hasFontAssetChanged_241() const { return ___m_hasFontAssetChanged_241; }
	inline bool* get_address_of_m_hasFontAssetChanged_241() { return &___m_hasFontAssetChanged_241; }
	inline void set_m_hasFontAssetChanged_241(bool value)
	{
		___m_hasFontAssetChanged_241 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_242() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_subTextObjects_242)); }
	inline TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* get_m_subTextObjects_242() const { return ___m_subTextObjects_242; }
	inline TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E** get_address_of_m_subTextObjects_242() { return &___m_subTextObjects_242; }
	inline void set_m_subTextObjects_242(TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* value)
	{
		___m_subTextObjects_242 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subTextObjects_242), (void*)value);
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_243() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_previousLossyScaleY_243)); }
	inline float get_m_previousLossyScaleY_243() const { return ___m_previousLossyScaleY_243; }
	inline float* get_address_of_m_previousLossyScaleY_243() { return &___m_previousLossyScaleY_243; }
	inline void set_m_previousLossyScaleY_243(float value)
	{
		___m_previousLossyScaleY_243 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_244() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_RectTransformCorners_244)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_RectTransformCorners_244() const { return ___m_RectTransformCorners_244; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_RectTransformCorners_244() { return &___m_RectTransformCorners_244; }
	inline void set_m_RectTransformCorners_244(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_RectTransformCorners_244 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransformCorners_244), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvasRenderer_245() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_canvasRenderer_245)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_canvasRenderer_245() const { return ___m_canvasRenderer_245; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_canvasRenderer_245() { return &___m_canvasRenderer_245; }
	inline void set_m_canvasRenderer_245(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_canvasRenderer_245 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvasRenderer_245), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvas_246() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_canvas_246)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_canvas_246() const { return ___m_canvas_246; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_canvas_246() { return &___m_canvas_246; }
	inline void set_m_canvas_246(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_canvas_246 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvas_246), (void*)value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_247() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isFirstAllocation_247)); }
	inline bool get_m_isFirstAllocation_247() const { return ___m_isFirstAllocation_247; }
	inline bool* get_address_of_m_isFirstAllocation_247() { return &___m_isFirstAllocation_247; }
	inline void set_m_isFirstAllocation_247(bool value)
	{
		___m_isFirstAllocation_247 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_248() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_max_characters_248)); }
	inline int32_t get_m_max_characters_248() const { return ___m_max_characters_248; }
	inline int32_t* get_address_of_m_max_characters_248() { return &___m_max_characters_248; }
	inline void set_m_max_characters_248(int32_t value)
	{
		___m_max_characters_248 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_249() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isMaskingEnabled_249)); }
	inline bool get_m_isMaskingEnabled_249() const { return ___m_isMaskingEnabled_249; }
	inline bool* get_address_of_m_isMaskingEnabled_249() { return &___m_isMaskingEnabled_249; }
	inline void set_m_isMaskingEnabled_249(bool value)
	{
		___m_isMaskingEnabled_249 = value;
	}

	inline static int32_t get_offset_of_m_baseMaterial_250() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_baseMaterial_250)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_baseMaterial_250() const { return ___m_baseMaterial_250; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_baseMaterial_250() { return &___m_baseMaterial_250; }
	inline void set_m_baseMaterial_250(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_baseMaterial_250 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_baseMaterial_250), (void*)value);
	}

	inline static int32_t get_offset_of_m_isScrollRegionSet_251() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isScrollRegionSet_251)); }
	inline bool get_m_isScrollRegionSet_251() const { return ___m_isScrollRegionSet_251; }
	inline bool* get_address_of_m_isScrollRegionSet_251() { return &___m_isScrollRegionSet_251; }
	inline void set_m_isScrollRegionSet_251(bool value)
	{
		___m_isScrollRegionSet_251 = value;
	}

	inline static int32_t get_offset_of_m_stencilID_252() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_stencilID_252)); }
	inline int32_t get_m_stencilID_252() const { return ___m_stencilID_252; }
	inline int32_t* get_address_of_m_stencilID_252() { return &___m_stencilID_252; }
	inline void set_m_stencilID_252(int32_t value)
	{
		___m_stencilID_252 = value;
	}

	inline static int32_t get_offset_of_m_maskOffset_253() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_maskOffset_253)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_maskOffset_253() const { return ___m_maskOffset_253; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_maskOffset_253() { return &___m_maskOffset_253; }
	inline void set_m_maskOffset_253(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_maskOffset_253 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_254() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_EnvMapMatrix_254)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_EnvMapMatrix_254() const { return ___m_EnvMapMatrix_254; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_EnvMapMatrix_254() { return &___m_EnvMapMatrix_254; }
	inline void set_m_EnvMapMatrix_254(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_EnvMapMatrix_254 = value;
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_255() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isRegisteredForEvents_255)); }
	inline bool get_m_isRegisteredForEvents_255() const { return ___m_isRegisteredForEvents_255; }
	inline bool* get_address_of_m_isRegisteredForEvents_255() { return &___m_isRegisteredForEvents_255; }
	inline void set_m_isRegisteredForEvents_255(bool value)
	{
		___m_isRegisteredForEvents_255 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCountA_256() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_recursiveCountA_256)); }
	inline int32_t get_m_recursiveCountA_256() const { return ___m_recursiveCountA_256; }
	inline int32_t* get_address_of_m_recursiveCountA_256() { return &___m_recursiveCountA_256; }
	inline void set_m_recursiveCountA_256(int32_t value)
	{
		___m_recursiveCountA_256 = value;
	}

	inline static int32_t get_offset_of_loopCountA_257() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___loopCountA_257)); }
	inline int32_t get_loopCountA_257() const { return ___loopCountA_257; }
	inline int32_t* get_address_of_loopCountA_257() { return &___loopCountA_257; }
	inline void set_loopCountA_257(int32_t value)
	{
		___loopCountA_257 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mFBEB99FAFA7C81868D18C2A17C94AF512CD872EC_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInParent_TisRuntimeObject_mC642781007FB6F6A631C2190F9BFA21FD4CDC905_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mF2869D54987BDCEE9F39FF2F62D1FB1016744718_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m50D861A91F15E3169935F47FB656C3ED5486E74E_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<list> Randomizelist::randomizeelements<System.Object>(System.Collections.Generic.List`1<list>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * Randomizelist_randomizeelements_TisRuntimeObject_mD47245643F6341C1E2E6EBD3E68EEE025F9F3522_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___inputList0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m06B65DD1CC6DFB48DB4DEE2CC185788D42837D30_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m2E5F02DDA13C176AF75B4E7C1DB801D89E053B2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m7729BA56325BA667F0F7D60D642124F7909F1302 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RectTransform_get_anchoredPosition_mCB2171DBADBC572F354CCFE3ACA19F9506F97907 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03 (const RuntimeMethod* method);
// System.Single MaterialUI.Anim/Quint::Out(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quint_Out_m09D27005DBEEF1065B8D747525E52E4C26027039 (float ___startValue0, float ___endValue1, float ___time2, float ___duration3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_Lerp_mD37EF718F1BAC65A7416655F0BC902CE76559C46 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___a0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontSize_mA2E192AAB4668CE91F02762DDE558FC59C1EBE0C (Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___p0, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m7E3C4DCD13E6B1FD43C797EFF9698BACA1FBEC3D (CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Single UnityEngine.CanvasGroup::get_alpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasGroup_get_alpha_mF6AFB387E643765758F1461369A65F59BA06D26E (CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator MaterialUI.ToastAnim::WaitTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToastAnim_WaitTime_mF2C93536B5FDB44F14B1E4196CE3A7B87CFDFE1C (ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void MaterialUI.ToastAnim/<WaitTime>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitTimeU3Ed__15__ctor_m9F42CF2F6518EAE65BDF7B444636005ADFF1C6C3 (U3CWaitTimeU3Ed__15_t7DB003AF1754D5D0D0F1D88C849989683BBEF63E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * Resources_Load_mF0FA033BF566CDDA6A0E69BB97283B44C40726E7 (String_t* ___path0, Type_t * ___systemTypeInstance1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mFBEB99FAFA7C81868D18C2A17C94AF512CD872EC_gshared)(___original0, method);
}
// !!0 UnityEngine.GameObject::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * GameObject_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m3F4A66E37DA71D5AF43D8A63F8C2D698003572F0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mC642781007FB6F6A631C2190F9BFA21FD4CDC905_gshared)(__this, method);
}
// System.Void MaterialUI.ToastControl::InitToastSystem(UnityEngine.Canvas)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastControl_InitToastSystem_mBA806ADD1E7718C5C38DD92493035763CABAE947 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___theCanvas0, const RuntimeMethod* method);
// System.Void MaterialUI.ToastControl::MakeToast(System.String,System.Single,UnityEngine.Color,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastControl_MakeToast_mB4F9F34F059EFAB76713AAA66526504D63C91624 (String_t* ___content0, float ___duration1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___panelColor2, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___textColor3, int32_t ___fontSize4, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Slider>()
inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * GameObject_GetComponentInChildren_TisSlider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09_mF66932F83BBD82E4A8DF562CA959E210C264DE36 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mF2869D54987BDCEE9F39FF2F62D1FB1016744718_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Toggle>()
inline Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * GameObject_GetComponent_TisToggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106_m9F98F777EFF307DC0F6FEA2C006044097874BE11 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_mCAA660F49688DBA29E896B961E0054154C42EA2B (Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient__ctor_mF3FCDBEC250EA415810596990D219F329E7E879E (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, uint8_t ___protocol0, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::AddCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_AddCallbackTarget_m17553A4C53D4BC96DF74BD3DFE8D8487E3B52565 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::set_SerializationProtocol(ExitGames.Client.Photon.SerializationProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_set_SerializationProtocol_mE3C87FA340D22F4270ED41458C50AA648D22E1F8 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Photon.Realtime.ConnectionHandler>()
inline ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0 * GameObject_GetComponent_TisConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0_m448FCC80D8C3373F1A2771A01B0172A411DA0E67 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void Photon.Realtime.ConnectionHandler::set_Client(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ConnectionHandler_set_Client_m41E8AA7C73CEC09E0C73FE3532C233F109DCBC45_inline (ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0 * __this, LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.ConnectionHandler::StartFallbackSendAckThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionHandler_StartFallbackSendAckThread_mC683B581861BC397A4F8B6D5DD497C3BBA20B7A7 (ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_Service_m443AD58B507AD1E7601CB7785BD4804ACFD1868A (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_mDCC22D02A85973C68623C764C96BE9A862C8BD11 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::OpJoinRandomRoom(Photon.Realtime.OpJoinRandomRoomParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpJoinRandomRoom_m538FE487F277FF1F054E8A0309F751DA76704376 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, OpJoinRandomRoomParams_tBA60CD40B89DB30CD938488D4E5D398A7F8C9D7E * ___opJoinRandomRoomParams0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void System.Action`1<Photon.Realtime.RegionHandler>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m92A2149582A1856A577A156ED91C7D9A1721BA35 (Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean Photon.Realtime.RegionHandler::PingMinimumOfRegions(System.Action`1<Photon.Realtime.RegionHandler>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionHandler_PingMinimumOfRegions_m5C8AE60A1AF4A9E06E3EA17A0B07C681FE455B17 (RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * __this, Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A * ___onCompleteCallback0, String_t* ___previousSummary1, const RuntimeMethod* method);
// System.Void Photon.Realtime.EnterRoomParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnterRoomParams__ctor_mD79E1A3DA37FE25323DC2721FB0DFDC00D7F3EDE (EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::OpCreateRoom(Photon.Realtime.EnterRoomParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpCreateRoom_m5B1E30682BEFB186628ABACBBDA004259AA37CD8 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * ___enterRoomParams0, const RuntimeMethod* method);
// Photon.Realtime.Region Photon.Realtime.RegionHandler::get_BestRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 * RegionHandler_get_BestRegion_m6C04157AB2A06C9FD8253DB875326225D9F2A9C2 (RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.String Photon.Realtime.RegionHandler::get_SummaryToCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionHandler_get_SummaryToCache_mE53B11556105433EBE7C76137D7FAAE4B5C57415 (RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.Region::get_Code()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Region_get_Code_m8669BE5070358182B467A85EFB042D25D5CDA3BC_inline (Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::ConnectToRegionMaster(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_ConnectToRegionMaster_m10E860D595ED32FBAF8F7809C20CEA18C477DD76 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, String_t* ___region0, const RuntimeMethod* method);
// System.Void Photon.Realtime.AppSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppSettings__ctor_mEE7F23500B21898BF51BD410D1CB360DEBF66931 (AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Question>::.ctor()
inline void List_1__ctor_m22F0328C373AC8145C66746F1FC4E64B6F3AE926 (List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m5A45D3BCA8AAAA06A13711CEB926FAE1140E45A8 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95 (const RuntimeMethod* method);
// System.Void Quizgamemenager::SetCurrentquestion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quizgamemenager_SetCurrentquestion_m8C5E9CF091DC81FD643240F3F925F3A3C72E4D7C (Quizgamemenager_tB2A363E161D872E42BF21AA74F0AB3416123B8A2 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Question>::get_Count()
inline int32_t List_1_get_Count_mBD824DB8CAA9310B3F002D298BF32302B0EC1D71_inline (List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780 (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Question>::get_Item(System.Int32)
inline Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC * List_1_get_Item_m0E55F13193B5F238444C957F4737286D20D107C8_inline (List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC * (*) (List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Void UI::Setquestion(Question)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Setquestion_m0C75206C39E813B02A221A9457F5392C01D3AF16 (UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658 * __this, Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC * ___question0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mFC850AC783E5EA05D6154976385DFECC251CDFB9 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Question>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m8E12B1992F78F04B42D1A21EFDE64B83AF4D0CF2 (List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m50D861A91F15E3169935F47FB656C3ED5486E74E_gshared)(__this, ___index0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m979EDEF812D4630882E2E8346776B6CA5A9176BF (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void UI/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mF0835A8A634025F12F74E67096BA688F77FBD6A5 (U3CU3Ec__DisplayClass8_0_tBDC3524A6A4A9221ED85BEDF5879DC434E89D8E5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UI.Button>::get_Item(System.Int32)
inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * List_1_get_Item_m33717CAEE878A4AE0BD495AC7DEDD327DAA9FDA4_inline (List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * (*) (List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817 (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___call0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Button>::get_Count()
inline int32_t List_1_get_Count_m08F726818532EAA788B2FF0AAED319E7D015300D_inline (List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<list> Randomizelist::randomizeelements<System.String>(System.Collections.Generic.List`1<list>)
inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * Randomizelist_randomizeelements_TisString_t_mF353DF8FB59BC9BF8A69F1FFA32545B22306794D (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___inputList0, const RuntimeMethod* method)
{
	return ((  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))Randomizelist_randomizeelements_TisRuntimeObject_mD47245643F6341C1E2E6EBD3E68EEE025F9F3522_gshared)(___inputList0, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * Component_GetComponentInChildren_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mB668286E3BFCCA98A7FB16694BBA0E70A8FF6A4F (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m06B65DD1CC6DFB48DB4DEE2CC185788D42837D30_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_inline (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * Selectable_get_image_m74FFCB0802A2E8380B33314F53A9748370D1C9F7 (Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Boolean Quizgamemenager::Answer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quizgamemenager_Answer_mA141BC81B214F16DC9248C57988C6FA8F4274F5F (Quizgamemenager_tB2A363E161D872E42BF21AA74F0AB3416123B8A2 * __this, String_t* ___answered0, const RuntimeMethod* method);
// System.Void UI::Click(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Click_mF1629688715FC4AF76AA3A38B6458193BBA5E9B9 (UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658 * __this, Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___btn0, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonNetwork::set_AutomaticallySyncScene(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_set_AutomaticallySyncScene_m2281D30EB1B6545FDFE7BA16B0E8662A0378DAE0 (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void TMPro.TMP_Text::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_text_m5CFCFE6E69321D9E6B6BAEAF92AE153C3484A960 (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonNetwork::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_get_IsConnected_m3D90FF7631B589CB771CE01CA421A40426AC6187 (const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonNetwork::JoinRandomRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_JoinRandomRoom_mE7178455302B4CD1C57E02F370A4DCFF6386EFF0 (const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonNetwork::set_GameVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_set_GameVersion_mE3F9A63714D393062731D0E017D87F7C6115FA24 (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonNetwork::ConnectUsingSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_ConnectUsingSettings_m8021DCB20F8D5D3A9FBFEE38935D95CCC5579355 (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void Photon.Realtime.RoomOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions__ctor_m254044C6ACFBFED793E00A41DF8E76F953EE16CF (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonNetwork::CreateRoom(System.String,Photon.Realtime.RoomOptions,Photon.Realtime.TypedLobby,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_CreateRoom_m8F4C5E1CB330B138058D6A7C96971DB1E43AF915 (String_t* ___roomName0, RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * ___roomOptions1, TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * ___typedLobby2, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___expectedUsers3, const RuntimeMethod* method);
// Photon.Realtime.Room Photon.Pun.PhotonNetwork::get_CurrentRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * PhotonNetwork_get_CurrentRoom_m493DA29D80F75DC0BEFF3125207AE9101C0100A1 (const RuntimeMethod* method);
// System.Byte Photon.Realtime.Room::get_PlayerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Room_get_PlayerCount_mCBF32BA967FF797861D5E9C2B26C3A6BDACA2E99 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.Room::set_IsOpen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_IsOpen_m9BF3D27C133879A9EF88E4EEB553878DC88AB4A2 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonNetwork::LoadLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_LoadLevel_m018189075246B97065C057D7128BE87C6514D7E6 (String_t* ___levelName0, const RuntimeMethod* method);
// System.Void Photon.Pun.MonoBehaviourPunCallbacks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPunCallbacks__ctor_m1AEFA832CC833057375BF474B21B2BAD2D618BFA (MonoBehaviourPunCallbacks_t1C6D230D24896A20359CB7016C7AD6E4654B885D * __this, const RuntimeMethod* method);
// System.Void nazwagracza::SetUpInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nazwagracza_SetUpInputField_m9F19F5168CCC04A0541F4640FCDFFD71AC913BB2 (nazwagracza_t20D3FE8A4B5C952601A6BF71DF38BF64B9B6372A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mD87D3051ACE7EC6F5B54F4FC9E18572C917CA0D1 (String_t* ___key0, const RuntimeMethod* method);
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputField_get_text_m5FA1E757563597DE4B57559A9E68D645FF2CC461 (InputField_t533609195B110760BCFF00B746C87D81969CB005 * __this, const RuntimeMethod* method);
// System.Void nazwagracza::SetPlayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nazwagracza_SetPlayerName_m21F242F0FD2F7EDD5DCA54E7DEBF0130661F3A31 (nazwagracza_t20D3FE8A4B5C952601A6BF71DF38BF64B9B6372A * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mF0897CD627B603DE1F3714FFD8B121AB694E0B6B (Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Screen::get_fullScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_fullScreen_m7C0CE5B87209523630EE751F54E3180AADD02E71 (const RuntimeMethod* method);
// System.Void UnityEngine.Screen::set_fullScreen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_fullScreen_mB2077AD460FAEE1FEA38D824339FFD22656B5322 (bool ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MaterialUI.TextInputLine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInputLine_Start_m2896F0455AD2655C7078818AA79D763C7893BA92 (TextInputLine_t8BD57F962A87A06F0D47B22A21F9664E4A4BF056 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextInputLine_Start_m2896F0455AD2655C7078818AA79D763C7893BA92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thisRect = gameObject.GetComponent<RectTransform> ();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m2E5F02DDA13C176AF75B4E7C1DB801D89E053B2C(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m2E5F02DDA13C176AF75B4E7C1DB801D89E053B2C_RuntimeMethod_var);
		__this->set_thisRect_5(L_1);
		// thisIm = gameObject.GetComponent<Image> ();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_3 = GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75(L_2, /*hidden argument*/GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var);
		__this->set_thisIm_6(L_3);
		// thisRect.sizeDelta = new Vector2 (textInputRect.sizeDelta.x, 3f);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_4 = __this->get_thisRect_5();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_5 = __this->get_textInputRect_8();
		NullCheck(L_5);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_8), L_7, (3.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_sizeDelta_m7729BA56325BA667F0F7D60D642124F7909F1302(L_4, L_8, /*hidden argument*/NULL);
		// thisRect.localScale = new Vector3 (0f, 1f, 1f);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_9 = __this->get_thisRect_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_10), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.TextInputLine::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInputLine_Activate_mDE243D00D2587540309A247EC807C502FE038675 (TextInputLine_t8BD57F962A87A06F0D47B22A21F9664E4A4BF056 * __this, const RuntimeMethod* method)
{
	{
		// thisRect.position = Input.mousePosition;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_0 = __this->get_thisRect_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_1, /*hidden argument*/NULL);
		// thisRect.anchoredPosition = new Vector2 (thisRect.anchoredPosition.x, -1f);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_2 = __this->get_thisRect_5();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_3 = __this->get_thisRect_5();
		NullCheck(L_3);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = RectTransform_get_anchoredPosition_mCB2171DBADBC572F354CCFE3ACA19F9506F97907(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_6), L_5, (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_2, L_6, /*hidden argument*/NULL);
		// thisIm.color = lineColor;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_7 = __this->get_thisIm_6();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_8 = __this->get_lineColor_4();
		NullCheck(L_7);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		// thisRect.localScale = new Vector3 (0f, 1f, 1f);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_9 = __this->get_thisRect_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_10), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_9, L_10, /*hidden argument*/NULL);
		// animPosX = thisRect.anchoredPosition.x;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_11 = __this->get_thisRect_5();
		NullCheck(L_11);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = RectTransform_get_anchoredPosition_mCB2171DBADBC572F354CCFE3ACA19F9506F97907(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_0();
		__this->set_animPosX_11(L_13);
		// animStartTime = Time.realtimeSinceStartup;
		float L_14 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_animStartTime_9(L_14);
		// mode = 1;
		__this->set_mode_12(1);
		// }
		return;
	}
}
// System.Void MaterialUI.TextInputLine::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInputLine_Deactivate_m915C623FCC071D0C2E36B6D066BBAF1B0D755D1B (TextInputLine_t8BD57F962A87A06F0D47B22A21F9664E4A4BF056 * __this, const RuntimeMethod* method)
{
	{
		// animStartTime = Time.realtimeSinceStartup;
		float L_0 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_animStartTime_9(L_0);
		// mode = 2;
		__this->set_mode_12(2);
		// }
		return;
	}
}
// System.Void MaterialUI.TextInputLine::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInputLine_Update_m6D02354A760D261A1DCB177FBBCDE8A793D2AB24 (TextInputLine_t8BD57F962A87A06F0D47B22A21F9664E4A4BF056 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_0 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		float L_1 = __this->get_animStartTime_9();
		__this->set_animDeltaTime_10(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if (mode == 1)
		int32_t L_2 = __this->get_mode_12();
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_00ff;
		}
	}
	{
		// if (animDeltaTime <= 1f)
		float L_4 = __this->get_animDeltaTime_10();
		V_1 = (bool)((((int32_t)((!(((float)L_4) <= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_00f0;
		}
	}
	{
		// tempVec2 = thisRect.anchoredPosition;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_6 = __this->get_thisRect_5();
		NullCheck(L_6);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = RectTransform_get_anchoredPosition_mCB2171DBADBC572F354CCFE3ACA19F9506F97907(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// tempVec2.x = Anim.Quint.Out (animPosX, 0f, animDeltaTime, 0.5f);
		float L_8 = __this->get_animPosX_11();
		float L_9 = __this->get_animDeltaTime_10();
		float L_10 = Quint_Out_m09D27005DBEEF1065B8D747525E52E4C26027039(L_8, (0.0f), L_9, (0.5f), /*hidden argument*/NULL);
		(&V_2)->set_x_0(L_10);
		// thisRect.anchoredPosition = tempVec2;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_11 = __this->get_thisRect_5();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = V_2;
		NullCheck(L_11);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_11, L_12, /*hidden argument*/NULL);
		// tempVec3 = thisRect.localScale;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_13 = __this->get_thisRect_5();
		NullCheck(L_13);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		// tempVec3.x = Anim.Quint.Out (0f, 1f, animDeltaTime, 0.5f);
		float L_15 = __this->get_animDeltaTime_10();
		float L_16 = Quint_Out_m09D27005DBEEF1065B8D747525E52E4C26027039((0.0f), (1.0f), L_15, (0.5f), /*hidden argument*/NULL);
		(&V_3)->set_x_2(L_16);
		// thisRect.localScale = tempVec3;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_17 = __this->get_thisRect_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_3;
		NullCheck(L_17);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_17, L_18, /*hidden argument*/NULL);
		// placeholderText.color = Color.Lerp( new Color (0f, 0f, 0f, 0.3764f), lineColor, animDeltaTime * 2f);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_19 = __this->get_placeholderText_7();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_20), (0.0f), (0.0f), (0.0f), (0.3764f), /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_21 = __this->get_lineColor_4();
		float L_22 = __this->get_animDeltaTime_10();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_23 = Color_Lerp_mD37EF718F1BAC65A7416655F0BC902CE76559C46(L_20, L_21, ((float)il2cpp_codegen_multiply((float)L_22, (float)(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_23);
		goto IL_00f9;
	}

IL_00f0:
	{
		// mode = 0;
		__this->set_mode_12(0);
	}

IL_00f9:
	{
		goto IL_01ae;
	}

IL_00ff:
	{
		// else if (mode == 2)
		int32_t L_24 = __this->get_mode_12();
		V_4 = (bool)((((int32_t)L_24) == ((int32_t)2))? 1 : 0);
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_01ae;
		}
	}
	{
		// if (animDeltaTime <= 1f)
		float L_26 = __this->get_animDeltaTime_10();
		V_5 = (bool)((((int32_t)((!(((float)L_26) <= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (!L_27)
		{
			goto IL_01a4;
		}
	}
	{
		// tempCol = thisIm.color;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_28 = __this->get_thisIm_6();
		NullCheck(L_28);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_29 = VirtFuncInvoker0< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_28);
		V_6 = L_29;
		// tempCol.a = Anim.Quint.Out (1f, 0f, animDeltaTime, 0.5f);
		float L_30 = __this->get_animDeltaTime_10();
		float L_31 = Quint_Out_m09D27005DBEEF1065B8D747525E52E4C26027039((1.0f), (0.0f), L_30, (0.5f), /*hidden argument*/NULL);
		(&V_6)->set_a_3(L_31);
		// thisIm.color = tempCol;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_32 = __this->get_thisIm_6();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_33 = V_6;
		NullCheck(L_32);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_32, L_33);
		// placeholderText.color = Color.Lerp(lineColor, new Color (0f, 0f, 0f, 0.3764f), animDeltaTime * 2f);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_34 = __this->get_placeholderText_7();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_35 = __this->get_lineColor_4();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_36), (0.0f), (0.0f), (0.0f), (0.3764f), /*hidden argument*/NULL);
		float L_37 = __this->get_animDeltaTime_10();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_38 = Color_Lerp_mD37EF718F1BAC65A7416655F0BC902CE76559C46(L_35, L_36, ((float)il2cpp_codegen_multiply((float)L_37, (float)(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_34);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_34, L_38);
		goto IL_01ad;
	}

IL_01a4:
	{
		// mode = 0;
		__this->set_mode_12(0);
	}

IL_01ad:
	{
	}

IL_01ae:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.TextInputLine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInputLine__ctor_m8106124E34210B0D366FE2426175A3C4C5839770 (TextInputLine_t8BD57F962A87A06F0D47B22A21F9664E4A4BF056 * __this, const RuntimeMethod* method)
{
	{
		// int mode = 0;
		__this->set_mode_12(0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MaterialUI.ToastAnim::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastAnim_Start_mDAB1282A7C172B9668FD64117FF78F8C370AC524 (ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToastAnim_Start_mDAB1282A7C172B9668FD64117FF78F8C370AC524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onPos = new Vector2 (Screen.width / 2, (Screen.height / 8));
		int32_t L_0 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_2), (((float)((float)((int32_t)((int32_t)L_0/(int32_t)2))))), (((float)((float)((int32_t)((int32_t)L_1/(int32_t)8))))), /*hidden argument*/NULL);
		__this->set_onPos_5(L_2);
		// offPos = new Vector2 (Screen.width / 2, Screen.height / 10);
		int32_t L_3 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_5), (((float)((float)((int32_t)((int32_t)L_3/(int32_t)2))))), (((float)((float)((int32_t)((int32_t)L_4/(int32_t)((int32_t)10)))))), /*hidden argument*/NULL);
		__this->set_offPos_6(L_5);
		// thisRect.position = offPos;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_6 = __this->get_thisRect_8();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = __this->get_offPos_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_6, L_8, /*hidden argument*/NULL);
		// timeToWait = ToastControl.toastDuration;
		float L_9 = ((ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_il2cpp_TypeInfo_var))->get_toastDuration_2();
		__this->set_timeToWait_15(L_9);
		// text.text = ToastControl.toastText;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_10 = __this->get_text_7();
		String_t* L_11 = ((ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_il2cpp_TypeInfo_var))->get_toastText_1();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
		// panelImage.color = ToastControl.toastPanelColor;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_12 = __this->get_panelImage_9();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_13 = ((ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_il2cpp_TypeInfo_var))->get_toastPanelColor_3();
		NullCheck(L_12);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_13);
		// text.color = ToastControl.toastTextColor;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_14 = __this->get_text_7();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_15 = ((ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_il2cpp_TypeInfo_var))->get_toastTextColor_4();
		NullCheck(L_14);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_14, L_15);
		// text.fontSize = ToastControl.toastFontSize;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_16 = __this->get_text_7();
		int32_t L_17 = ((ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_il2cpp_TypeInfo_var))->get_toastFontSize_5();
		NullCheck(L_16);
		Text_set_fontSize_mA2E192AAB4668CE91F02762DDE558FC59C1EBE0C(L_16, L_17, /*hidden argument*/NULL);
		// transform.SetParent(ToastControl.parentCanvas.transform);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_19 = ((ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_il2cpp_TypeInfo_var))->get_parentCanvas_6();
		NullCheck(L_19);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979(L_18, L_20, /*hidden argument*/NULL);
		// transform.localScale = new Vector3 (1, 1, 1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_22), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_21, L_22, /*hidden argument*/NULL);
		// canvasGroup.alpha = 0;
		CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * L_23 = __this->get_canvasGroup_11();
		NullCheck(L_23);
		CanvasGroup_set_alpha_m7E3C4DCD13E6B1FD43C797EFF9698BACA1FBEC3D(L_23, (0.0f), /*hidden argument*/NULL);
		// state = 1;
		__this->set_state_4(1);
		// }
		return;
	}
}
// System.Void MaterialUI.ToastAnim::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastAnim_Update_mC9F2C525EF9287CB4654C3300B41939358BBF2EF (ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToastAnim_Update_mC9F2C525EF9287CB4654C3300B41939358BBF2EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (state == 1)
		int32_t L_0 = __this->get_state_4();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00f8;
		}
	}
	{
		// if (thisRect.position.y < onPos.y)
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_2 = __this->get_thisRect_8();
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_y_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_5 = __this->get_address_of_onPos_5();
		float L_6 = L_5->get_y_1();
		V_1 = (bool)((((float)L_4) < ((float)L_6))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_00cc;
		}
	}
	{
		// tempVec2 = thisRect.position;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_8 = __this->get_thisRect_8();
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_9, /*hidden argument*/NULL);
		__this->set_tempVec2_13(L_10);
		// tempVec2.y = Mathf.Lerp(tempVec2.y, onPos.y * 1.01f, Time.deltaTime * animSpeed);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_11 = __this->get_address_of_tempVec2_13();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_12 = __this->get_address_of_tempVec2_13();
		float L_13 = L_12->get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_14 = __this->get_address_of_onPos_5();
		float L_15 = L_14->get_y_1();
		float L_16 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_17 = __this->get_animSpeed_16();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_18 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_13, ((float)il2cpp_codegen_multiply((float)L_15, (float)(1.01f))), ((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), /*hidden argument*/NULL);
		L_11->set_y_1(L_18);
		// thisRect.position = tempVec2;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_19 = __this->get_thisRect_8();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = __this->get_tempVec2_13();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_19, L_21, /*hidden argument*/NULL);
		// canvasGroup.alpha = Mathf.Lerp (canvasGroup.alpha, 1.01f, Time.deltaTime * animSpeed);
		CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * L_22 = __this->get_canvasGroup_11();
		CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * L_23 = __this->get_canvasGroup_11();
		NullCheck(L_23);
		float L_24 = CanvasGroup_get_alpha_mF6AFB387E643765758F1461369A65F59BA06D26E(L_23, /*hidden argument*/NULL);
		float L_25 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_26 = __this->get_animSpeed_16();
		float L_27 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_24, (1.01f), ((float)il2cpp_codegen_multiply((float)L_25, (float)L_26)), /*hidden argument*/NULL);
		NullCheck(L_22);
		CanvasGroup_set_alpha_m7E3C4DCD13E6B1FD43C797EFF9698BACA1FBEC3D(L_22, L_27, /*hidden argument*/NULL);
		goto IL_00f2;
	}

IL_00cc:
	{
		// thisRect.position = onPos;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_28 = __this->get_thisRect_8();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = __this->get_onPos_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_28, L_30, /*hidden argument*/NULL);
		// StartCoroutine(WaitTime());
		RuntimeObject* L_31 = ToastAnim_WaitTime_mF2C93536B5FDB44F14B1E4196CE3A7B87CFDFE1C(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_31, /*hidden argument*/NULL);
	}

IL_00f2:
	{
		goto IL_01d2;
	}

IL_00f8:
	{
		// else if (state == 2)
		int32_t L_32 = __this->get_state_4();
		V_2 = (bool)((((int32_t)L_32) == ((int32_t)2))? 1 : 0);
		bool L_33 = V_2;
		if (!L_33)
		{
			goto IL_01d2;
		}
	}
	{
		// if (thisRect.position.y > offPos.y)
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_34 = __this->get_thisRect_8();
		NullCheck(L_34);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_y_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_37 = __this->get_address_of_offPos_6();
		float L_38 = L_37->get_y_1();
		V_3 = (bool)((((float)L_36) > ((float)L_38))? 1 : 0);
		bool L_39 = V_3;
		if (!L_39)
		{
			goto IL_01c3;
		}
	}
	{
		// tempVec2 = thisRect.position;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_40 = __this->get_thisRect_8();
		NullCheck(L_40);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_42 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_41, /*hidden argument*/NULL);
		__this->set_tempVec2_13(L_42);
		// tempVec2.y = Mathf.Lerp(tempVec2.y, offPos.y * 0.99f, Time.deltaTime * animSpeed);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_43 = __this->get_address_of_tempVec2_13();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_44 = __this->get_address_of_tempVec2_13();
		float L_45 = L_44->get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_46 = __this->get_address_of_offPos_6();
		float L_47 = L_46->get_y_1();
		float L_48 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_49 = __this->get_animSpeed_16();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_50 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_45, ((float)il2cpp_codegen_multiply((float)L_47, (float)(0.99f))), ((float)il2cpp_codegen_multiply((float)L_48, (float)L_49)), /*hidden argument*/NULL);
		L_43->set_y_1(L_50);
		// thisRect.position = tempVec2;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_51 = __this->get_thisRect_8();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_52 = __this->get_tempVec2_13();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_52, /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_51, L_53, /*hidden argument*/NULL);
		// canvasGroup.alpha = Mathf.Lerp (canvasGroup.alpha, -0.01f, Time.deltaTime * animSpeed);
		CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * L_54 = __this->get_canvasGroup_11();
		CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * L_55 = __this->get_canvasGroup_11();
		NullCheck(L_55);
		float L_56 = CanvasGroup_get_alpha_mF6AFB387E643765758F1461369A65F59BA06D26E(L_55, /*hidden argument*/NULL);
		float L_57 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_58 = __this->get_animSpeed_16();
		float L_59 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_56, (-0.01f), ((float)il2cpp_codegen_multiply((float)L_57, (float)L_58)), /*hidden argument*/NULL);
		NullCheck(L_54);
		CanvasGroup_set_alpha_m7E3C4DCD13E6B1FD43C797EFF9698BACA1FBEC3D(L_54, L_59, /*hidden argument*/NULL);
		goto IL_01d1;
	}

IL_01c3:
	{
		// Destroy (gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_60 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_60, /*hidden argument*/NULL);
	}

IL_01d1:
	{
	}

IL_01d2:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator MaterialUI.ToastAnim::WaitTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToastAnim_WaitTime_mF2C93536B5FDB44F14B1E4196CE3A7B87CFDFE1C (ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToastAnim_WaitTime_mF2C93536B5FDB44F14B1E4196CE3A7B87CFDFE1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitTimeU3Ed__15_t7DB003AF1754D5D0D0F1D88C849989683BBEF63E * L_0 = (U3CWaitTimeU3Ed__15_t7DB003AF1754D5D0D0F1D88C849989683BBEF63E *)il2cpp_codegen_object_new(U3CWaitTimeU3Ed__15_t7DB003AF1754D5D0D0F1D88C849989683BBEF63E_il2cpp_TypeInfo_var);
		U3CWaitTimeU3Ed__15__ctor_m9F42CF2F6518EAE65BDF7B444636005ADFF1C6C3(L_0, 0, /*hidden argument*/NULL);
		U3CWaitTimeU3Ed__15_t7DB003AF1754D5D0D0F1D88C849989683BBEF63E * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void MaterialUI.ToastAnim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastAnim__ctor_m7133B6821568A2C3F58FB00FA7CE0224A3307441 (ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC * __this, const RuntimeMethod* method)
{
	{
		// int state = 0;
		__this->set_state_4(0);
		// float animSpeed = 6f;
		__this->set_animSpeed_16((6.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MaterialUI.ToastAnim_<WaitTime>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitTimeU3Ed__15__ctor_m9F42CF2F6518EAE65BDF7B444636005ADFF1C6C3 (U3CWaitTimeU3Ed__15_t7DB003AF1754D5D0D0F1D88C849989683BBEF63E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MaterialUI.ToastAnim_<WaitTime>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitTimeU3Ed__15_System_IDisposable_Dispose_mB2C8193F888617C675116F50FA9DC93D30FA10D3 (U3CWaitTimeU3Ed__15_t7DB003AF1754D5D0D0F1D88C849989683BBEF63E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MaterialUI.ToastAnim_<WaitTime>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitTimeU3Ed__15_MoveNext_mAF85C3FC5D6B6B8C5084BE04C581BC29B3429957 (U3CWaitTimeU3Ed__15_t7DB003AF1754D5D0D0F1D88C849989683BBEF63E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitTimeU3Ed__15_MoveNext_mAF85C3FC5D6B6B8C5084BE04C581BC29B3429957_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003f;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(timeToWait);
		ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		float L_4 = L_3->get_timeToWait_15();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_5 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// state = 2;
		ToastAnim_tA828ADDA0C1429C79CC593D71F6CA53BBD2ACBFC * L_6 = __this->get_U3CU3E4__this_2();
		NullCheck(L_6);
		L_6->set_state_4(2);
		// }
		return (bool)0;
	}
}
// System.Object MaterialUI.ToastAnim_<WaitTime>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitTimeU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m342A64EAE3CE5FE7096264E4334755897475CC5B (U3CWaitTimeU3Ed__15_t7DB003AF1754D5D0D0F1D88C849989683BBEF63E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MaterialUI.ToastAnim_<WaitTime>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitTimeU3Ed__15_System_Collections_IEnumerator_Reset_m0FE22DC417F279A1C0ABB6A9EAF232E34E8F54FB (U3CWaitTimeU3Ed__15_t7DB003AF1754D5D0D0F1D88C849989683BBEF63E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitTimeU3Ed__15_System_Collections_IEnumerator_Reset_m0FE22DC417F279A1C0ABB6A9EAF232E34E8F54FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CWaitTimeU3Ed__15_System_Collections_IEnumerator_Reset_m0FE22DC417F279A1C0ABB6A9EAF232E34E8F54FB_RuntimeMethod_var);
	}
}
// System.Object MaterialUI.ToastAnim_<WaitTime>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitTimeU3Ed__15_System_Collections_IEnumerator_get_Current_mE476253CEE941529B5FEAA4EC67324014DF28A65 (U3CWaitTimeU3Ed__15_t7DB003AF1754D5D0D0F1D88C849989683BBEF63E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MaterialUI.ToastControl::InitToastSystem(UnityEngine.Canvas)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastControl_InitToastSystem_mBA806ADD1E7718C5C38DD92493035763CABAE947 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___theCanvas0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToastControl_InitToastSystem_mBA806ADD1E7718C5C38DD92493035763CABAE947_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theToast = Resources.Load ("Toast", typeof(GameObject)) as GameObject;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_2 = Resources_Load_mF0FA033BF566CDDA6A0E69BB97283B44C40726E7(_stringLiteral3BABBD03DEC44B75F938171A4DDAE6F5432A43DB, L_1, /*hidden argument*/NULL);
		((ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_il2cpp_TypeInfo_var))->set_theToast_0(((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)IsInstSealed((RuntimeObject*)L_2, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var)));
		// parentCanvas = theCanvas;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_3 = ___theCanvas0;
		((ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_il2cpp_TypeInfo_var))->set_parentCanvas_6(L_3);
		// }
		return;
	}
}
// System.Void MaterialUI.ToastControl::MakeToast(System.String,System.Single,UnityEngine.Color,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastControl_MakeToast_mB4F9F34F059EFAB76713AAA66526504D63C91624 (String_t* ___content0, float ___duration1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___panelColor2, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___textColor3, int32_t ___fontSize4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToastControl_MakeToast_mB4F9F34F059EFAB76713AAA66526504D63C91624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toastText = content;
		String_t* L_0 = ___content0;
		((ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_il2cpp_TypeInfo_var))->set_toastText_1(L_0);
		// toastDuration = duration;
		float L_1 = ___duration1;
		((ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_il2cpp_TypeInfo_var))->set_toastDuration_2(L_1);
		// toastPanelColor = panelColor;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = ___panelColor2;
		((ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_il2cpp_TypeInfo_var))->set_toastPanelColor_3(L_2);
		// toastTextColor = textColor;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = ___textColor3;
		((ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_il2cpp_TypeInfo_var))->set_toastTextColor_4(L_3);
		// toastFontSize = fontSize;
		int32_t L_4 = ___fontSize4;
		((ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_il2cpp_TypeInfo_var))->set_toastFontSize_5(L_4);
		// GameObject.Instantiate (theToast);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = ((ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t084195D764DEE84F0172B06501B140D5154C26F7_il2cpp_TypeInfo_var))->get_theToast_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90(L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MaterialUI.Toaster::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toaster_Start_m9F932A6C80E1F972F092775322A33BFE0CA2C64E (Toaster_t1EDC4603784EEAA87C30F477FD39613B6452BA12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Toaster_Start_m9F932A6C80E1F972F092775322A33BFE0CA2C64E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ToastControl.InitToastSystem (gameObject.GetComponentInParent<Canvas>());
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_1 = GameObject_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m3F4A66E37DA71D5AF43D8A63F8C2D698003572F0(L_0, /*hidden argument*/GameObject_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m3F4A66E37DA71D5AF43D8A63F8C2D698003572F0_RuntimeMethod_var);
		ToastControl_InitToastSystem_mBA806ADD1E7718C5C38DD92493035763CABAE947(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.Toaster::PopupToast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toaster_PopupToast_m5AC985A247A0D8B81A25B7358931CB41926468E2 (Toaster_t1EDC4603784EEAA87C30F477FD39613B6452BA12 * __this, const RuntimeMethod* method)
{
	{
		// ToastControl.MakeToast (text, duration, panelColor, textColor, fontSize);
		String_t* L_0 = __this->get_text_4();
		float L_1 = __this->get_duration_5();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = __this->get_panelColor_6();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = __this->get_textColor_7();
		int32_t L_4 = __this->get_fontSize_8();
		ToastControl_MakeToast_mB4F9F34F059EFAB76713AAA66526504D63C91624(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.Toaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toaster__ctor_mE6B15194038EFF45ADC3FA42F513B5617B496343 (Toaster_t1EDC4603784EEAA87C30F477FD39613B6452BA12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Toaster__ctor_mE6B15194038EFF45ADC3FA42F513B5617B496343_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string text = "This is a toast";
		__this->set_text_4(_stringLiteral1F7CC2AE456BFD4FE86BAF05320BBD1428A14CD8);
		// public float duration = 1.5f;
		__this->set_duration_5((1.5f));
		// public Color panelColor = new Color (1f, 1f, 1f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369((&L_0), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_panelColor_6(L_0);
		// public Color textColor = new Color (0.15f, 0.15f, 0.15f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369((&L_1), (0.15f), (0.15f), (0.15f), /*hidden argument*/NULL);
		__this->set_textColor_7(L_1);
		// public int fontSize = 16;
		__this->set_fontSize_8(((int32_t)16));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MaterialUI.ToggleConfig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleConfig_Start_mC2C046342C7BCF129421BE680C53693C6C6AC35D (ToggleConfig_tB85C25B8D1808DAA624639D6B6E3BB6AD7D5F189 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleConfig_Start_mC2C046342C7BCF129421BE680C53693C6C6AC35D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theSlider = gameObject.GetComponentInChildren<Slider> ();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_1 = GameObject_GetComponentInChildren_TisSlider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09_mF66932F83BBD82E4A8DF562CA959E210C264DE36(L_0, /*hidden argument*/GameObject_GetComponentInChildren_TisSlider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09_mF66932F83BBD82E4A8DF562CA959E210C264DE36_RuntimeMethod_var);
		__this->set_theSlider_4(L_1);
		// theToggle = gameObject.GetComponent<Toggle> ();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * L_3 = GameObject_GetComponent_TisToggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106_m9F98F777EFF307DC0F6FEA2C006044097874BE11(L_2, /*hidden argument*/GameObject_GetComponent_TisToggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106_m9F98F777EFF307DC0F6FEA2C006044097874BE11_RuntimeMethod_var);
		__this->set_theToggle_5(L_3);
		// }
		return;
	}
}
// System.Void MaterialUI.ToggleConfig::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleConfig_OnPointerUp_m3494BAD12F44337D577AA72277CF785D6902DC7C (ToggleConfig_tB85C25B8D1808DAA624639D6B6E3BB6AD7D5F189 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___data0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (theSlider.value > 0.5f)
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_0 = __this->get_theSlider_4();
		NullCheck(L_0);
		float L_1 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		V_0 = (bool)((((float)L_1) > ((float)(0.5f)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// theToggle.isOn = true;
		Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * L_3 = __this->get_theToggle_5();
		NullCheck(L_3);
		Toggle_set_isOn_mCAA660F49688DBA29E896B961E0054154C42EA2B(L_3, (bool)1, /*hidden argument*/NULL);
		goto IL_0037;
	}

IL_0028:
	{
		// theToggle.isOn = false;
		Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * L_4 = __this->get_theToggle_5();
		NullCheck(L_4);
		Toggle_set_isOn_mCAA660F49688DBA29E896B961E0054154C42EA2B(L_4, (bool)0, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.ToggleConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleConfig__ctor_mD5FA80D5ACF44C1C051C2669BFA9E6ACB01209B8 (ToggleConfig_tB85C25B8D1808DAA624639D6B6E3BB6AD7D5F189 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_Start_mA98A97B7BD8DD57E3543DE0B1E5FC6CC0B4A3231 (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectAndJoinRandomLb_Start_mA98A97B7BD8DD57E3543DE0B1E5FC6CC0B4A3231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// this.lbc = new LoadBalancingClient();
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A *)il2cpp_codegen_object_new(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A_il2cpp_TypeInfo_var);
		LoadBalancingClient__ctor_mF3FCDBEC250EA415810596990D219F329E7E879E(L_0, 0, /*hidden argument*/NULL);
		__this->set_lbc_5(L_0);
		// this.lbc.AddCallbackTarget(this);
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_1 = __this->get_lbc_5();
		NullCheck(L_1);
		LoadBalancingClient_AddCallbackTarget_m17553A4C53D4BC96DF74BD3DFE8D8487E3B52565(L_1, __this, /*hidden argument*/NULL);
		// this.lbc.SerializationProtocol = SerializationProtocol.GpBinaryV16;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_2 = __this->get_lbc_5();
		NullCheck(L_2);
		LoadBalancingClient_set_SerializationProtocol_mE3C87FA340D22F4270ED41458C50AA648D22E1F8(L_2, 0, /*hidden argument*/NULL);
		// if (!this.lbc.ConnectUsingSettings(appSettings))
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_3 = __this->get_lbc_5();
		AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * L_4 = __this->get_appSettings_4();
		NullCheck(L_3);
		bool L_5 = VirtFuncInvoker1< bool, AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * >::Invoke(8 /* System.Boolean Photon.Realtime.LoadBalancingClient::ConnectUsingSettings(Photon.Realtime.AppSettings) */, L_3, L_4);
		V_0 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		// Debug.LogError("Error while connecting");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralC7DE7D92819CDB39F6DC245AC259312CB7CEE2F3, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// this.ch = this.gameObject.GetComponent<ConnectionHandler>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0 * L_8 = GameObject_GetComponent_TisConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0_m448FCC80D8C3373F1A2771A01B0172A411DA0E67(L_7, /*hidden argument*/GameObject_GetComponent_TisConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0_m448FCC80D8C3373F1A2771A01B0172A411DA0E67_RuntimeMethod_var);
		__this->set_ch_6(L_8);
		// if (this.ch != null)
		ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0 * L_9 = __this->get_ch_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_008d;
		}
	}
	{
		// this.ch.Client = this.lbc;
		ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0 * L_12 = __this->get_ch_6();
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_13 = __this->get_lbc_5();
		NullCheck(L_12);
		ConnectionHandler_set_Client_m41E8AA7C73CEC09E0C73FE3532C233F109DCBC45_inline(L_12, L_13, /*hidden argument*/NULL);
		// this.ch.StartFallbackSendAckThread();
		ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0 * L_14 = __this->get_ch_6();
		NullCheck(L_14);
		ConnectionHandler_StartFallbackSendAckThread_mC683B581861BC397A4F8B6D5DD497C3BBA20B7A7(L_14, /*hidden argument*/NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_Update_m266BDF947F50E3AF2ECCB687D647ECCD232949ED (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectAndJoinRandomLb_Update_m266BDF947F50E3AF2ECCB687D647ECCD232949ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * V_0 = NULL;
	bool V_1 = false;
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B4_0 = 0;
	{
		// LoadBalancingClient client = this.lbc;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_lbc_5();
		V_0 = L_0;
		// if (client != null)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_006b;
		}
	}
	{
		// client.Service();
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_3 = V_0;
		NullCheck(L_3);
		LoadBalancingClient_Service_m443AD58B507AD1E7601CB7785BD4804ACFD1868A(L_3, /*hidden argument*/NULL);
		// Text uiText = this.StateUiText;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_StateUiText_7();
		V_2 = L_4;
		// string state = client.State.ToString();
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = LoadBalancingClient_get_State_mDCC22D02A85973C68623C764C96BE9A862C8BD11(L_5, /*hidden argument*/NULL);
		V_4 = L_6;
		RuntimeObject * L_7 = Box(ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282_il2cpp_TypeInfo_var, (&V_4));
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		V_4 = *(int32_t*)UnBox(L_7);
		V_3 = L_8;
		// if (uiText != null && !uiText.text.Equals(state))
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_11);
		String_t* L_13 = V_3;
		NullCheck(L_12);
		bool L_14 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_12, L_13, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B4_0 = 0;
	}

IL_0050:
	{
		V_5 = (bool)G_B4_0;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		// uiText.text = "State: " + state;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_16 = V_2;
		String_t* L_17 = V_3;
		String_t* L_18 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral7847429E435FC15C31E654C8E70D87D903B00B86, L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_18);
	}

IL_006a:
	{
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnConnected_mB1D665FBBE726B592E1E7D389E1C94AED2DAF0A9 (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnConnectedToMaster_m080AC337618BC9FE2909797E6556166750675049 (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectAndJoinRandomLb_OnConnectedToMaster_m080AC337618BC9FE2909797E6556166750675049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnConnectedToMaster");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralDAEC28B974A07F8E06CFA961EC9731A33CB0E04B, /*hidden argument*/NULL);
		// this.lbc.OpJoinRandomRoom();    // joins any open room (no filter)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_lbc_5();
		NullCheck(L_0);
		LoadBalancingClient_OpJoinRandomRoom_m538FE487F277FF1F054E8A0309F751DA76704376(L_0, (OpJoinRandomRoomParams_tBA60CD40B89DB30CD938488D4E5D398A7F8C9D7E *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnDisconnected(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnDisconnected_m6A28E69A6A6817AAB303D8B64816AD774CBF9EBF (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectAndJoinRandomLb_OnDisconnected_m6A28E69A6A6817AAB303D8B64816AD774CBF9EBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnDisconnected(" + cause + ")");
		int32_t L_0 = ___cause0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(DisconnectCause_t8A969EFEB0FE2E4ABD5824250D4C9F7941F2650F_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteralA77B0808E13058677089B15868360FA2CE72D635, L_2, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCustomAuthenticationResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCustomAuthenticationResponse_m4F7287B88E340E32D9DFB3D35C2AA6F53109B9C6 (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___data0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCustomAuthenticationFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCustomAuthenticationFailed_m87ADCA9E7B0A6B63C2CA770F02B9A22B355C4D19 (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, String_t* ___debugMessage0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnRegionListReceived(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnRegionListReceived_mB545EF0E3524D98C44DD46775D086CF8E7B4B951 (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * ___regionHandler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectAndJoinRandomLb_OnRegionListReceived_mB545EF0E3524D98C44DD46775D086CF8E7B4B951_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRegionListReceived");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral6FE686F4C4FFF70F890D6561C56AD1409A205EAD, /*hidden argument*/NULL);
		// regionHandler.PingMinimumOfRegions(this.OnRegionPingCompleted, null);
		RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * L_0 = ___regionHandler0;
		Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A * L_1 = (Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A *)il2cpp_codegen_object_new(Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A_il2cpp_TypeInfo_var);
		Action_1__ctor_m92A2149582A1856A577A156ED91C7D9A1721BA35(L_1, __this, (intptr_t)((intptr_t)ConnectAndJoinRandomLb_OnRegionPingCompleted_mFE73067D0C0448A40B492514540E5C916170CE7C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m92A2149582A1856A577A156ED91C7D9A1721BA35_RuntimeMethod_var);
		NullCheck(L_0);
		RegionHandler_PingMinimumOfRegions_m5C8AE60A1AF4A9E06E3EA17A0B07C681FE455B17(L_0, L_1, (String_t*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnRoomListUpdate(System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnRoomListUpdate_m2178B3CC6E0FA2B1B0339F755CBF4298FA9937F2 (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28 * ___roomList0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnLobbyStatisticsUpdate(System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnLobbyStatisticsUpdate_mF3C89CDF388A2244288F1D51B5A7CBE7ED7B9A48 (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459 * ___lobbyStatistics0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinedLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinedLobby_mA45DDA20E17E4D123F0F0978CF7CED3F11950FB2 (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnLeftLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnLeftLobby_mD7BE56F629C45BC0815BB543A61E7966D6DE87CF (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnFriendListUpdate(System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnFriendListUpdate_m941C6BCBEFC2DF2739FE244605ED6A61B321EEF1 (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662 * ___friendList0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCreatedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCreatedRoom_mFBB1A2705AD2064AC3F04BEF02541D7593688998 (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCreateRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCreateRoomFailed_m72BB64E1373E5927FF3F6B2948D6ADCCAC3CEE6F (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinedRoom_mDC96413952B57AFFD5267C8429B4DFCB10D59290 (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectAndJoinRandomLb_OnJoinedRoom_mDC96413952B57AFFD5267C8429B4DFCB10D59290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnJoinedRoom");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral30DFDB9410383199C46314C665F46CA0FA97DFDB, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinRoomFailed_m02ED1C40A8C92DC5D0DBF45261931F53037FD322 (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinRandomFailed_m432338C1FFCE8F62BC5385CBC2566FBFD50521E2 (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectAndJoinRandomLb_OnJoinRandomFailed_m432338C1FFCE8F62BC5385CBC2566FBFD50521E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnJoinRandomFailed");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralD4FA577FEEADE5911163372B19076110FCF16841, /*hidden argument*/NULL);
		// this.lbc.OpCreateRoom(new EnterRoomParams());
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_lbc_5();
		EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * L_1 = (EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 *)il2cpp_codegen_object_new(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942_il2cpp_TypeInfo_var);
		EnterRoomParams__ctor_mD79E1A3DA37FE25323DC2721FB0DFDC00D7F3EDE(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		LoadBalancingClient_OpCreateRoom_m5B1E30682BEFB186628ABACBBDA004259AA37CD8(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnLeftRoom_m00009A5D05AD22EB29246B62EBF7A1AE65DF3C92 (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnRegionPingCompleted(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnRegionPingCompleted_mFE73067D0C0448A40B492514540E5C916170CE7C (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * ___regionHandler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectAndJoinRandomLb_OnRegionPingCompleted_mFE73067D0C0448A40B492514540E5C916170CE7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRegionPingCompleted " + regionHandler.BestRegion);
		RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * L_0 = ___regionHandler0;
		NullCheck(L_0);
		Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 * L_1 = RegionHandler_get_BestRegion_m6C04157AB2A06C9FD8253DB875326225D9F2A9C2(L_0, /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralB949B39DDC31B145CC1CD523849F62571BAF445C, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
		// Debug.Log("RegionPingSummary: " + regionHandler.SummaryToCache);
		RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * L_3 = ___regionHandler0;
		NullCheck(L_3);
		String_t* L_4 = RegionHandler_get_SummaryToCache_mE53B11556105433EBE7C76137D7FAAE4B5C57415(L_3, /*hidden argument*/NULL);
		String_t* L_5 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral451E5EEE2606CE163B5207C2446B499535F4C470, L_4, /*hidden argument*/NULL);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_5, /*hidden argument*/NULL);
		// this.lbc.ConnectToRegionMaster(regionHandler.BestRegion.Code);
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_6 = __this->get_lbc_5();
		RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * L_7 = ___regionHandler0;
		NullCheck(L_7);
		Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 * L_8 = RegionHandler_get_BestRegion_m6C04157AB2A06C9FD8253DB875326225D9F2A9C2(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = Region_get_Code_m8669BE5070358182B467A85EFB042D25D5CDA3BC_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		LoadBalancingClient_ConnectToRegionMaster_m10E860D595ED32FBAF8F7809C20CEA18C477DD76(L_6, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb__ctor_m3FBD3F0B0AA670F431894ADFE9C35E5232026C0C (ConnectAndJoinRandomLb_t5FC18B8B9775DA842D8BA0629CA52F5348FDC462 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectAndJoinRandomLb__ctor_m3FBD3F0B0AA670F431894ADFE9C35E5232026C0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private AppSettings appSettings = new AppSettings();
		AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * L_0 = (AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 *)il2cpp_codegen_object_new(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8_il2cpp_TypeInfo_var);
		AppSettings__ctor_mEE7F23500B21898BF51BD410D1CB360DEBF66931(L_0, /*hidden argument*/NULL);
		__this->set_appSettings_4(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Question::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Question__ctor_m21281D469F2BDDA2581F98F5B44A248D4A2209E5 (Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QuestionList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestionList__ctor_mD4DFBCA1861F6E1B0C8AD87FBAAD509614212A73 (QuestionList_t55C63A912E36A8A65CAF13574DF965F8C28D9265 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QuestionList__ctor_mD4DFBCA1861F6E1B0C8AD87FBAAD509614212A73_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Question> unAnswered = new List<Question>();
		List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * L_0 = (List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D *)il2cpp_codegen_object_new(List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D_il2cpp_TypeInfo_var);
		List_1__ctor_m22F0328C373AC8145C66746F1FC4E64B6F3AE926(L_0, /*hidden argument*/List_1__ctor_m22F0328C373AC8145C66746F1FC4E64B6F3AE926_RuntimeMethod_var);
		__this->set_unAnswered_5(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QuestionTF::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestionTF__ctor_mB5596C8E0A8695D200818CC2EAEA99C7395137D2 (QuestionTF_tF055331367AE7350C2C11CEC4E768F987EC6C400 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Quit::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quit_Update_m8D752EAD8643D79DC0472973AAB1D685949D5DB3 (Quit_tC6FD89776CBAD7424D2A397E0AF00026351FE316 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Quit_Update_m8D752EAD8643D79DC0472973AAB1D685949D5DB3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Input.GetKey("escape"))
		bool L_0 = Input_GetKey_m5A45D3BCA8AAAA06A13711CEB926FAE1140E45A8(_stringLiteralCDECABE1520A398E4E46DEFF9D55B19BED6D6457, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95(/*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Quit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quit__ctor_mFC0A722DF723CAF10BADD794A92B7535F107805C (Quit_tC6FD89776CBAD7424D2A397E0AF00026351FE316 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Quizdata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quizdata__ctor_m3BC28D735015E81DB09405DB51F217E127F954B1 (Quizdata_t20C056F2E06D0D2CB062DF026A7A288587257D0C * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Quizgamemenager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quizgamemenager_Start_m07988F0E6E318E9F04FC67AD92078E9F33537974 (Quizgamemenager_tB2A363E161D872E42BF21AA74F0AB3416123B8A2 * __this, const RuntimeMethod* method)
{
	{
		// questions = quizDB.questions;
		Quizdata_t20C056F2E06D0D2CB062DF026A7A288587257D0C * L_0 = __this->get_quizDB_5();
		NullCheck(L_0);
		List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * L_1 = L_0->get_questions_4();
		__this->set_questions_6(L_1);
		// SetCurrentquestion();
		Quizgamemenager_SetCurrentquestion_m8C5E9CF091DC81FD643240F3F925F3A3C72E4D7C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Quizgamemenager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quizgamemenager_Update_mEEC1D8228AB1F9F298B1926B26E74679B139F4EA (Quizgamemenager_tB2A363E161D872E42BF21AA74F0AB3416123B8A2 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Quizgamemenager::SetCurrentquestion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quizgamemenager_SetCurrentquestion_m8C5E9CF091DC81FD643240F3F925F3A3C72E4D7C (Quizgamemenager_tB2A363E161D872E42BF21AA74F0AB3416123B8A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Quizgamemenager_SetCurrentquestion_m8C5E9CF091DC81FD643240F3F925F3A3C72E4D7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// int randomQuestionID = UnityEngine.Random.Range(0, questions.Count);
		List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * L_0 = __this->get_questions_6();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_mBD824DB8CAA9310B3F002D298BF32302B0EC1D71_inline(L_0, /*hidden argument*/List_1_get_Count_mBD824DB8CAA9310B3F002D298BF32302B0EC1D71_RuntimeMethod_var);
		int32_t L_2 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// selectQuestion = questions[randomQuestionID];
		List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * L_3 = __this->get_questions_6();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC * L_5 = List_1_get_Item_m0E55F13193B5F238444C957F4737286D20D107C8_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m0E55F13193B5F238444C957F4737286D20D107C8_RuntimeMethod_var);
		__this->set_selectQuestion_7(L_5);
		// ui.Setquestion(selectQuestion);
		UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658 * L_6 = __this->get_ui_4();
		Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC * L_7 = __this->get_selectQuestion_7();
		NullCheck(L_6);
		UI_Setquestion_m0C75206C39E813B02A221A9457F5392C01D3AF16(L_6, L_7, /*hidden argument*/NULL);
		// if (questions == null || questions.Count == 0)
		List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * L_8 = __this->get_questions_6();
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * L_9 = __this->get_questions_6();
		NullCheck(L_9);
		int32_t L_10 = List_1_get_Count_mBD824DB8CAA9310B3F002D298BF32302B0EC1D71_inline(L_9, /*hidden argument*/List_1_get_Count_mBD824DB8CAA9310B3F002D298BF32302B0EC1D71_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B3_0 = 1;
	}

IL_0050:
	{
		V_1 = (bool)G_B3_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		// SceneManager.LoadScene("sumup");
		SceneManager_LoadScene_mFC850AC783E5EA05D6154976385DFECC251CDFB9(_stringLiteral4B7E6CCC983DE1247358B30179F748A5F39CE4A7, /*hidden argument*/NULL);
		goto IL_0072;
	}

IL_0063:
	{
		// questions.RemoveAt(randomQuestionID);
		List_1_t2A9E61B2CAF7306A15871697F4F275A799E0174D * L_12 = __this->get_questions_6();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		List_1_RemoveAt_m8E12B1992F78F04B42D1A21EFDE64B83AF4D0CF2(L_12, L_13, /*hidden argument*/List_1_RemoveAt_m8E12B1992F78F04B42D1A21EFDE64B83AF4D0CF2_RuntimeMethod_var);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Boolean Quizgamemenager::Answer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quizgamemenager_Answer_mA141BC81B214F16DC9248C57988C6FA8F4274F5F (Quizgamemenager_tB2A363E161D872E42BF21AA74F0AB3416123B8A2 * __this, String_t* ___answered0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Quizgamemenager_Answer_mA141BC81B214F16DC9248C57988C6FA8F4274F5F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// bool correctanswer = false;
		V_0 = (bool)0;
		// if(answered == selectQuestion.rightAnswer)
		String_t* L_0 = ___answered0;
		Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC * L_1 = __this->get_selectQuestion_7();
		NullCheck(L_1);
		String_t* L_2 = L_1->get_rightAnswer_2();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// Scores.pointssum += 1;
		IL2CPP_RUNTIME_CLASS_INIT(Scores_tF83E87B4A24DFC95FC935140090A45E4FF6FBC59_il2cpp_TypeInfo_var);
		int32_t L_5 = ((Scores_tF83E87B4A24DFC95FC935140090A45E4FF6FBC59_StaticFields*)il2cpp_codegen_static_fields_for(Scores_tF83E87B4A24DFC95FC935140090A45E4FF6FBC59_il2cpp_TypeInfo_var))->get_pointssum_4();
		((Scores_tF83E87B4A24DFC95FC935140090A45E4FF6FBC59_StaticFields*)il2cpp_codegen_static_fields_for(Scores_tF83E87B4A24DFC95FC935140090A45E4FF6FBC59_il2cpp_TypeInfo_var))->set_pointssum_4(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// correctanswer = true;
		V_0 = (bool)1;
		goto IL_002c;
	}

IL_002a:
	{
	}

IL_002c:
	{
		// Invoke("SetCurrentquestion", 1f);
		MonoBehaviour_Invoke_m979EDEF812D4630882E2E8346776B6CA5A9176BF(__this, _stringLiteral3464B0E173414913A9C29816D0EA367CF2EF4E6C, (1.0f), /*hidden argument*/NULL);
		// return correctanswer;
		bool L_6 = V_0;
		V_2 = L_6;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Void Quizgamemenager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quizgamemenager__ctor_m35B945A030FCEBCA7FCDFC7F9E603C2CAB661FCC (Quizgamemenager_tB2A363E161D872E42BF21AA74F0AB3416123B8A2 * __this, const RuntimeMethod* method)
{
	{
		// private float waitforquestion = 1f;
		__this->set_waitforquestion_8((1.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Randomizelist::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomizelist__ctor_m648788CAE91139F6D303E533A4AD829B7EA2EBE1 (Randomizelist_t6B800F6D494AD3A14529F438D5FEA6F8EF7D9F41 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Scores::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scores_Start_m22058A4E787CA2A9219C4A88D9B8715AEB19E63D (Scores_tF83E87B4A24DFC95FC935140090A45E4FF6FBC59 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scores_Start_m22058A4E787CA2A9219C4A88D9B8715AEB19E63D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// points = GetComponent<Text>();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854(__this, /*hidden argument*/Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854_RuntimeMethod_var);
		__this->set_points_5(L_0);
		// }
		return;
	}
}
// System.Void Scores::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scores_Update_mB4B42494292A6D45DEC1C5359439E610F016B3ED (Scores_tF83E87B4A24DFC95FC935140090A45E4FF6FBC59 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scores_Update_mB4B42494292A6D45DEC1C5359439E610F016B3ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// points.text = "Zdobyte punkty:  " + pointssum;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_points_5();
		IL2CPP_RUNTIME_CLASS_INIT(Scores_tF83E87B4A24DFC95FC935140090A45E4FF6FBC59_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Scores_tF83E87B4A24DFC95FC935140090A45E4FF6FBC59_StaticFields*)il2cpp_codegen_static_fields_for(Scores_tF83E87B4A24DFC95FC935140090A45E4FF6FBC59_il2cpp_TypeInfo_var))->get_pointssum_4();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralEB76F4D14893A70A6145C6BF50132944ED9258EA, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void Scores::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scores__ctor_mA2DCB75E1D48AAC4BCC7078B6180DDC536671B34 (Scores_tF83E87B4A24DFC95FC935140090A45E4FF6FBC59 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scores::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scores__cctor_mCEDA94D151D3CC60F580AC545CFA387BC33B07E8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scores__cctor_mCEDA94D151D3CC60F580AC545CFA387BC33B07E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int pointssum = 0;
		((Scores_tF83E87B4A24DFC95FC935140090A45E4FF6FBC59_StaticFields*)il2cpp_codegen_static_fields_for(Scores_tF83E87B4A24DFC95FC935140090A45E4FF6FBC59_il2cpp_TypeInfo_var))->set_pointssum_4(0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ToggleTextChanger::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleTextChanger_Awake_m5425F5D8E65F0C4031DD9DBC5D7FCB0C8ABE667E (ToggleTextChanger_tA4DBED51FB6143D919AF3E53B14EEB8D5BB7D8B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleTextChanger_Awake_m5425F5D8E65F0C4031DD9DBC5D7FCB0C8ABE667E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thisText = gameObject.GetComponent<Text>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_1 = GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A(L_0, /*hidden argument*/GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var);
		__this->set_thisText_4(L_1);
		// }
		return;
	}
}
// System.Void ToggleTextChanger::ToggleText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleTextChanger_ToggleText_m9C625487AFEFE6E47C54FC10DF2FC861FBFE28E9 (ToggleTextChanger_tA4DBED51FB6143D919AF3E53B14EEB8D5BB7D8B4 * __this, bool ___isToggledOn0, const RuntimeMethod* method)
{
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * G_B2_0 = NULL;
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * G_B3_1 = NULL;
	{
		// thisText.text = isToggledOn ? onText : offText;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_thisText_4();
		bool L_1 = ___isToggledOn0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = __this->get_offText_6();
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0012:
	{
		String_t* L_3 = __this->get_onText_5();
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void ToggleTextChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleTextChanger__ctor_m69F63EFD514305BC365FDB2EB6460241DA7D7694 (ToggleTextChanger_tA4DBED51FB6143D919AF3E53B14EEB8D5BB7D8B4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Awake_m2771E2CCF3DB072748F8FED8EDF754223BE0AC29 (UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_Awake_m2771E2CCF3DB072748F8FED8EDF754223BE0AC29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass8_0_tBDC3524A6A4A9221ED85BEDF5879DC434E89D8E5 * V_1 = NULL;
	bool V_2 = false;
	{
		// for (int i = 0; i < answers.Count; i++)
		V_0 = 0;
		goto IL_0047;
	}

IL_0005:
	{
		U3CU3Ec__DisplayClass8_0_tBDC3524A6A4A9221ED85BEDF5879DC434E89D8E5 * L_0 = (U3CU3Ec__DisplayClass8_0_tBDC3524A6A4A9221ED85BEDF5879DC434E89D8E5 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_tBDC3524A6A4A9221ED85BEDF5879DC434E89D8E5_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass8_0__ctor_mF0835A8A634025F12F74E67096BA688F77FBD6A5(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		U3CU3Ec__DisplayClass8_0_tBDC3524A6A4A9221ED85BEDF5879DC434E89D8E5 * L_1 = V_1;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_1(__this);
		// Button localbtn = answers[i];
		U3CU3Ec__DisplayClass8_0_tBDC3524A6A4A9221ED85BEDF5879DC434E89D8E5 * L_2 = V_1;
		List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5 * L_3 = __this->get_answers_6();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_5 = List_1_get_Item_m33717CAEE878A4AE0BD495AC7DEDD327DAA9FDA4_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m33717CAEE878A4AE0BD495AC7DEDD327DAA9FDA4_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_localbtn_0(L_5);
		// localbtn.onClick.AddListener(() => Click(localbtn));
		U3CU3Ec__DisplayClass8_0_tBDC3524A6A4A9221ED85BEDF5879DC434E89D8E5 * L_6 = V_1;
		NullCheck(L_6);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_7 = L_6->get_localbtn_0();
		NullCheck(L_7);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_8 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817(L_7, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass8_0_tBDC3524A6A4A9221ED85BEDF5879DC434E89D8E5 * L_9 = V_1;
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_10 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_0_U3CAwakeU3Eb__0_m954F26CEE21F6D08EAAD640EBD6DD232026B5471_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_8, L_10, /*hidden argument*/NULL);
		// for (int i = 0; i < answers.Count; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0047:
	{
		// for (int i = 0; i < answers.Count; i++)
		int32_t L_12 = V_0;
		List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5 * L_13 = __this->get_answers_6();
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m08F726818532EAA788B2FF0AAED319E7D015300D_inline(L_13, /*hidden argument*/List_1_get_Count_m08F726818532EAA788B2FF0AAED319E7D015300D_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_12) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UI::Setquestion(Question)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Setquestion_m0C75206C39E813B02A221A9457F5392C01D3AF16 (UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658 * __this, Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC * ___question0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_Setquestion_m0C75206C39E813B02A221A9457F5392C01D3AF16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// this.question = question;
		Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC * L_0 = ___question0;
		__this->set_question_10(L_0);
		// questionSentence.text = question.question;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_1 = __this->get_questionSentence_5();
		Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC * L_2 = ___question0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_question_0();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// List<string> answerlist = Randomizelist.randomizeelements<string>(question.optionsanswers);
		Question_tBE1A7D1B48248BC15DCC6E78D3A1FCF87EAECFFC * L_4 = ___question0;
		NullCheck(L_4);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_5 = L_4->get_optionsanswers_1();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_6 = Randomizelist_randomizeelements_TisString_t_mF353DF8FB59BC9BF8A69F1FFA32545B22306794D(L_5, /*hidden argument*/Randomizelist_randomizeelements_TisString_t_mF353DF8FB59BC9BF8A69F1FFA32545B22306794D_RuntimeMethod_var);
		V_0 = L_6;
		// for (int i = 0; i < answers.Count; i++)
		V_1 = 0;
		goto IL_0084;
	}

IL_002a:
	{
		// answers[i].GetComponentInChildren<Text>().text = answerlist[i];
		List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5 * L_7 = __this->get_answers_6();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_9 = List_1_get_Item_m33717CAEE878A4AE0BD495AC7DEDD327DAA9FDA4_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_m33717CAEE878A4AE0BD495AC7DEDD327DAA9FDA4_RuntimeMethod_var);
		NullCheck(L_9);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_10 = Component_GetComponentInChildren_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mB668286E3BFCCA98A7FB16694BBA0E70A8FF6A4F(L_9, /*hidden argument*/Component_GetComponentInChildren_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mB668286E3BFCCA98A7FB16694BBA0E70A8FF6A4F_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		String_t* L_13 = List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var);
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_13);
		// answers[i].name = answerlist[i];
		List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5 * L_14 = __this->get_answers_6();
		int32_t L_15 = V_1;
		NullCheck(L_14);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_16 = List_1_get_Item_m33717CAEE878A4AE0BD495AC7DEDD327DAA9FDA4_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_m33717CAEE878A4AE0BD495AC7DEDD327DAA9FDA4_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_17 = V_0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19 = List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var);
		NullCheck(L_16);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_16, L_19, /*hidden argument*/NULL);
		// answers[i].image.color = ColorstandardColor; //set color of button to normal
		List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5 * L_20 = __this->get_answers_6();
		int32_t L_21 = V_1;
		NullCheck(L_20);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_22 = List_1_get_Item_m33717CAEE878A4AE0BD495AC7DEDD327DAA9FDA4_inline(L_20, L_21, /*hidden argument*/List_1_get_Item_m33717CAEE878A4AE0BD495AC7DEDD327DAA9FDA4_RuntimeMethod_var);
		NullCheck(L_22);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_23 = Selectable_get_image_m74FFCB0802A2E8380B33314F53A9748370D1C9F7(L_22, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_24 = __this->get_ColorstandardColor_9();
		NullCheck(L_23);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_23, L_24);
		// for (int i = 0; i < answers.Count; i++)
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0084:
	{
		// for (int i = 0; i < answers.Count; i++)
		int32_t L_26 = V_1;
		List_1_tE74BD634C2F383838544C1E81C81B7E136CE6BC5 * L_27 = __this->get_answers_6();
		NullCheck(L_27);
		int32_t L_28 = List_1_get_Count_m08F726818532EAA788B2FF0AAED319E7D015300D_inline(L_27, /*hidden argument*/List_1_get_Count_m08F726818532EAA788B2FF0AAED319E7D015300D_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_26) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_2;
		if (L_29)
		{
			goto IL_002a;
		}
	}
	{
		// isanswered = false;
		__this->set_isanswered_11((bool)0);
		// }
		return;
	}
}
// System.Void UI::Click(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Click_mF1629688715FC4AF76AA3A38B6458193BBA5E9B9 (UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658 * __this, Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___btn0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!isanswered)
		bool L_0 = __this->get_isanswered_11();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		// isanswered = true;
		__this->set_isanswered_11((bool)1);
		// bool value = quizgamemenager.Answer(btn.name);
		Quizgamemenager_tB2A363E161D872E42BF21AA74F0AB3416123B8A2 * L_2 = __this->get_quizgamemenager_4();
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_3 = ___btn0;
		NullCheck(L_3);
		String_t* L_4 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_5 = Quizgamemenager_Answer_mA141BC81B214F16DC9248C57988C6FA8F4274F5F(L_2, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// if (value)
		bool L_6 = V_1;
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		// btn.image.color = correctColor;
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_8 = ___btn0;
		NullCheck(L_8);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_9 = Selectable_get_image_m74FFCB0802A2E8380B33314F53A9748370D1C9F7(L_8, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_10 = __this->get_correctColor_7();
		NullCheck(L_9);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		goto IL_0057;
	}

IL_0043:
	{
		// btn.image.color = wrongColor;
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_11 = ___btn0;
		NullCheck(L_11);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_12 = Selectable_get_image_m74FFCB0802A2E8380B33314F53A9748370D1C9F7(L_11, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_13 = __this->get_wrongColor_8();
		NullCheck(L_12);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_13);
	}

IL_0057:
	{
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void UI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI__ctor_mC47B6E0B668A07DDA00F3711BFE708D91BB1C763 (UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UI_<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mF0835A8A634025F12F74E67096BA688F77FBD6A5 (U3CU3Ec__DisplayClass8_0_tBDC3524A6A4A9221ED85BEDF5879DC434E89D8E5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UI_<>c__DisplayClass8_0::<Awake>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CAwakeU3Eb__0_m954F26CEE21F6D08EAAD640EBD6DD232026B5471 (U3CU3Ec__DisplayClass8_0_tBDC3524A6A4A9221ED85BEDF5879DC434E89D8E5 * __this, const RuntimeMethod* method)
{
	{
		// localbtn.onClick.AddListener(() => Click(localbtn));
		UI_t483A5B13DFBAAC88C835D7630A6EAF04F9CF0658 * L_0 = __this->get_U3CU3E4__this_1();
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_1 = __this->get_localbtn_0();
		NullCheck(L_0);
		UI_Click_mF1629688715FC4AF76AA3A38B6458193BBA5E9B9(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void data::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void data_Start_m97CC79B7D8A1EC0D6E758090B714FE062F1250C3 (data_t046B1D75945684A72664853EB6E4E4DC04B5626C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void data::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void data_Update_m0E114FEAE5BA089BB9AD1A448681C306BA5284DB (data_t046B1D75945684A72664853EB6E4E4DC04B5626C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void data__ctor_mDE13EBA2FD24D1981F23FC013E471AB3D92D597A (data_t046B1D75945684A72664853EB6E4E4DC04B5626C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void lobby::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lobby_Awake_mF3D9CACD82F11C33698E9B488227BDCF89D86551 (lobby_t17682DECBC6631DA3A5ABB98EF5CE2B6E28EDEFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (lobby_Awake_mF3D9CACD82F11C33698E9B488227BDCF89D86551_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.AutomaticallySyncScene= true;//potrzebne do synchornizacji scen mi?dzy graczami
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		PhotonNetwork_set_AutomaticallySyncScene_m2281D30EB1B6545FDFE7BA16B0E8662A0378DAE0((bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void lobby::Findplayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lobby_Findplayer_mD72C0CB4049B1DC0539C8E52C036396080CDB54B (lobby_t17682DECBC6631DA3A5ABB98EF5CE2B6E28EDEFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (lobby_Findplayer_mD72C0CB4049B1DC0539C8E52C036396080CDB54B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// connection = true;
		__this->set_connection_8((bool)1);
		// findOpponent.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_findOpponent_5();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)0, /*hidden argument*/NULL);
		// waitStatus.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_waitStatus_6();
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)1, /*hidden argument*/NULL);
		// waitText.text = "Szukam graczy...";
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_2 = __this->get_waitText_7();
		NullCheck(L_2);
		TMP_Text_set_text_m5CFCFE6E69321D9E6B6BAEAF92AE153C3484A960(L_2, _stringLiteral5BA20AE69ACD16CDC093005741AAD20F6D88E960, /*hidden argument*/NULL);
		// if(PhotonNetwork.IsConnected)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		bool L_3 = PhotonNetwork_get_IsConnected_m3D90FF7631B589CB771CE01CA421A40426AC6187(/*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		// PhotonNetwork.JoinRandomRoom();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		PhotonNetwork_JoinRandomRoom_mE7178455302B4CD1C57E02F370A4DCFF6386EFF0(/*hidden argument*/NULL);
		goto IL_0059;
	}

IL_0046:
	{
		// PhotonNetwork.GameVersion = GameVersion;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		PhotonNetwork_set_GameVersion_mE3F9A63714D393062731D0E017D87F7C6115FA24(_stringLiteral6AE529BF5A75A6207B2F277781B8E5F5F738D512, /*hidden argument*/NULL);
		// PhotonNetwork.ConnectUsingSettings();
		PhotonNetwork_ConnectUsingSettings_m8021DCB20F8D5D3A9FBFEE38935D95CCC5579355(/*hidden argument*/NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void lobby::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lobby_OnConnectedToMaster_m37656D85A990C2A2519B087F150732FADE18B407 (lobby_t17682DECBC6631DA3A5ABB98EF5CE2B6E28EDEFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (lobby_OnConnectedToMaster_m37656D85A990C2A2519B087F150732FADE18B407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Debug.Log("Po??czone z mistrzem");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral43A8F64F6C22B242450A7FCA59CB6B76FDF3364E, /*hidden argument*/NULL);
		// if(connection)
		bool L_0 = __this->get_connection_8();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// PhotonNetwork.JoinRandomRoom();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		PhotonNetwork_JoinRandomRoom_mE7178455302B4CD1C57E02F370A4DCFF6386EFF0(/*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void lobby::OnDisconnected(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lobby_OnDisconnected_mFC2DC0BD4DF97464176940553A1AB3E5ADB2CA32 (lobby_t17682DECBC6631DA3A5ABB98EF5CE2B6E28EDEFF * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (lobby_OnDisconnected_mFC2DC0BD4DF97464176940553A1AB3E5ADB2CA32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// waitStatus.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_waitStatus_6();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)0, /*hidden argument*/NULL);
		// findOpponent.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_findOpponent_5();
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)1, /*hidden argument*/NULL);
		// Debug.Log($"disconnected {cause} ");
		int32_t L_2 = ___cause0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(DisconnectCause_t8A969EFEB0FE2E4ABD5824250D4C9F7941F2650F_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral595170F6007CA6E570750C2C3324CC3F6EC5BC12, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void lobby::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lobby_OnJoinRandomFailed_m1877E386B6227CF2B8DD0EE4B8543B1C218F6650 (lobby_t17682DECBC6631DA3A5ABB98EF5CE2B6E28EDEFF * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (lobby_OnJoinRandomFailed_m1877E386B6227CF2B8DD0EE4B8543B1C218F6650_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("no clients are wainting, crate new room");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral0E09AB9691A1B41B938753D2FE198D8E444245E3, /*hidden argument*/NULL);
		// PhotonNetwork.CreateRoom(null, new RoomOptions { MaxPlayers = PlayersinRoom });
		RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * L_0 = (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 *)il2cpp_codegen_object_new(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906_il2cpp_TypeInfo_var);
		RoomOptions__ctor_m254044C6ACFBFED793E00A41DF8E76F953EE16CF(L_0, /*hidden argument*/NULL);
		RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_MaxPlayers_2((uint8_t)2);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		PhotonNetwork_CreateRoom_m8F4C5E1CB330B138058D6A7C96971DB1E43AF915((String_t*)NULL, L_1, (TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 *)NULL, (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void lobby::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lobby_OnJoinedRoom_mFF3E2B2A75CDDEA5F03FA4091B1243E7CE0D99C2 (lobby_t17682DECBC6631DA3A5ABB98EF5CE2B6E28EDEFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (lobby_OnJoinedRoom_mFF3E2B2A75CDDEA5F03FA4091B1243E7CE0D99C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// Debug.Log("Joined room");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral7EE3AF115A0D56DB385825006088A6FB46E2239B, /*hidden argument*/NULL);
		// int playerCount = PhotonNetwork.CurrentRoom.PlayerCount;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * L_0 = PhotonNetwork_get_CurrentRoom_m493DA29D80F75DC0BEFF3125207AE9101C0100A1(/*hidden argument*/NULL);
		NullCheck(L_0);
		uint8_t L_1 = Room_get_PlayerCount_mCBF32BA967FF797861D5E9C2B26C3A6BDACA2E99(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if(playerCount !=PlayersinRoom)
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// waitText.text = "Czekam";
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_4 = __this->get_waitText_7();
		NullCheck(L_4);
		TMP_Text_set_text_m5CFCFE6E69321D9E6B6BAEAF92AE153C3484A960(L_4, _stringLiteral5C5642B2B9FA5AEB83CF149A910406BEB275E74A, /*hidden argument*/NULL);
		goto IL_004a;
	}

IL_0037:
	{
		// waitText.text = "Znaleziono gracza";
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_5 = __this->get_waitText_7();
		NullCheck(L_5);
		TMP_Text_set_text_m5CFCFE6E69321D9E6B6BAEAF92AE153C3484A960(L_5, _stringLiteralE946F176A2B438F59E6D20D9F92BBCE4D5909F08, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void lobby::OnPlayerEnteredRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lobby_OnPlayerEnteredRoom_m56F7628DD80AC87E0F57706C212F7E168E9B65C2 (lobby_t17682DECBC6631DA3A5ABB98EF5CE2B6E28EDEFF * __this, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___newPlayer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (lobby_OnPlayerEnteredRoom_m56F7628DD80AC87E0F57706C212F7E168E9B65C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(PhotonNetwork.CurrentRoom.PlayerCount == PlayersinRoom)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * L_0 = PhotonNetwork_get_CurrentRoom_m493DA29D80F75DC0BEFF3125207AE9101C0100A1(/*hidden argument*/NULL);
		NullCheck(L_0);
		uint8_t L_1 = Room_get_PlayerCount_mCBF32BA967FF797861D5E9C2B26C3A6BDACA2E99(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// PhotonNetwork.CurrentRoom.IsOpen = false; //uniemo?niwia do??czenie je?eli liczba graczy jest maksymalna
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * L_3 = PhotonNetwork_get_CurrentRoom_m493DA29D80F75DC0BEFF3125207AE9101C0100A1(/*hidden argument*/NULL);
		NullCheck(L_3);
		Room_set_IsOpen_m9BF3D27C133879A9EF88E4EEB553878DC88AB4A2(L_3, (bool)0, /*hidden argument*/NULL);
		// waitText.text = "Znaleziono gracza";
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_4 = __this->get_waitText_7();
		NullCheck(L_4);
		TMP_Text_set_text_m5CFCFE6E69321D9E6B6BAEAF92AE153C3484A960(L_4, _stringLiteralE946F176A2B438F59E6D20D9F92BBCE4D5909F08, /*hidden argument*/NULL);
		// PhotonNetwork.LoadLevel("Gamescrren");
		PhotonNetwork_LoadLevel_m018189075246B97065C057D7128BE87C6514D7E6(_stringLiteral2E0AD28468258077EBE86FBEA9686D4820881919, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void lobby::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lobby__ctor_m91EF483BFEF7F065E3D478BFD03F30F785E887FD (lobby_t17682DECBC6631DA3A5ABB98EF5CE2B6E28EDEFF * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private GameObject findOpponent = null;
		__this->set_findOpponent_5((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		// [SerializeField] private GameObject waitStatus = null;
		__this->set_waitStatus_6((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		// [SerializeField] private TextMeshProUGUI waitText = null;
		__this->set_waitText_7((TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 *)NULL);
		// private bool connection = false;
		__this->set_connection_8((bool)0);
		MonoBehaviourPunCallbacks__ctor_m1AEFA832CC833057375BF474B21B2BAD2D618BFA(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void nazwagracza::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nazwagracza_Start_m55C0BAF7643A3E9ED377F589FC95A38CF03A2B07 (nazwagracza_t20D3FE8A4B5C952601A6BF71DF38BF64B9B6372A * __this, const RuntimeMethod* method)
{
	{
		// SetUpInputField();
		nazwagracza_SetUpInputField_m9F19F5168CCC04A0541F4640FCDFFD71AC913BB2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void nazwagracza::SetUpInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nazwagracza_SetUpInputField_m9F19F5168CCC04A0541F4640FCDFFD71AC913BB2 (nazwagracza_t20D3FE8A4B5C952601A6BF71DF38BF64B9B6372A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (nazwagracza_SetUpInputField_m9F19F5168CCC04A0541F4640FCDFFD71AC913BB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		// if (!PlayerPrefs.HasKey(Playernick))
		bool L_0 = PlayerPrefs_HasKey_mD87D3051ACE7EC6F5B54F4FC9E18572C917CA0D1(_stringLiteralA9712B8B6A47C89FCAC4419B247E7272EEB61C8C, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// { return; }
		goto IL_0029;
	}

IL_0015:
	{
		// string defaultName = nameInput.text;
		InputField_t533609195B110760BCFF00B746C87D81969CB005 * L_2 = __this->get_nameInput_4();
		NullCheck(L_2);
		String_t* L_3 = InputField_get_text_m5FA1E757563597DE4B57559A9E68D645FF2CC461(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// SetPlayerName(defaultName);
		String_t* L_4 = V_0;
		nazwagracza_SetPlayerName_m21F242F0FD2F7EDD5DCA54E7DEBF0130661F3A31(__this, L_4, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void nazwagracza::SetPlayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nazwagracza_SetPlayerName_m21F242F0FD2F7EDD5DCA54E7DEBF0130661F3A31 (nazwagracza_t20D3FE8A4B5C952601A6BF71DF38BF64B9B6372A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// contininueButton.interactable = !string.IsNullOrEmpty(name);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = __this->get_contininueButton_5();
		String_t* L_1 = ___name0;
		bool L_2 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Selectable_set_interactable_mF0897CD627B603DE1F3714FFD8B121AB694E0B6B(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void nazwagracza::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nazwagracza__ctor_mCF4D1F7E9AF8BA175D0DA852A5633110B7ECC73E (nazwagracza_t20D3FE8A4B5C952601A6BF71DF38BF64B9B6372A * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private InputField nameInput = null;
		__this->set_nameInput_4((InputField_t533609195B110760BCFF00B746C87D81969CB005 *)NULL);
		// [SerializeField] private Button contininueButton = null;
		__this->set_contininueButton_5((Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B *)NULL);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void startgame::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void startgame_LoadScene_m56E5A7E5D9E8675C1B3BD3D70892B18CC3F6780D (startgame_t7C455683DC32FDAF806623583F9F855080837556 * __this, String_t* ___level0, const RuntimeMethod* method)
{
	{
		// Screen.fullScreen = !Screen.fullScreen;
		bool L_0 = Screen_get_fullScreen_m7C0CE5B87209523630EE751F54E3180AADD02E71(/*hidden argument*/NULL);
		Screen_set_fullScreen_mB2077AD460FAEE1FEA38D824339FFD22656B5322((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// SceneManager.LoadScene(level);
		String_t* L_1 = ___level0;
		SceneManager_LoadScene_mFC850AC783E5EA05D6154976385DFECC251CDFB9(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void startgame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void startgame__ctor_m2F4497C37E61E6723C65A212E7C0E5B2038976B9 (startgame_t7C455683DC32FDAF806623583F9F855080837556 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ConnectionHandler_set_Client_m41E8AA7C73CEC09E0C73FE3532C233F109DCBC45_inline (ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0 * __this, LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___value0, const RuntimeMethod* method)
{
	{
		// public LoadBalancingClient Client { get; set; }
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = ___value0;
		__this->set_U3CClientU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Region_get_Code_m8669BE5070358182B467A85EFB042D25D5CDA3BC_inline (Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 * __this, const RuntimeMethod* method)
{
	{
		// public string Code { get; private set; }
		String_t* L_0 = __this->get_U3CCodeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}

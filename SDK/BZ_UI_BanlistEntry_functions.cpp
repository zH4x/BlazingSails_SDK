// BlazingSails (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_BanlistEntry.UI_BanlistEntry_C.BndEvt__Button_157_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_BanlistEntry_C::BndEvt__Button_157_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BanlistEntry.UI_BanlistEntry_C.BndEvt__Button_157_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_BanlistEntry_C_BndEvt__Button_157_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BanlistEntry.UI_BanlistEntry_C.ExecuteUbergraph_UI_BanlistEntry
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BanlistEntry_C::ExecuteUbergraph_UI_BanlistEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BanlistEntry.UI_BanlistEntry_C.ExecuteUbergraph_UI_BanlistEntry");

	UUI_BanlistEntry_C_ExecuteUbergraph_UI_BanlistEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
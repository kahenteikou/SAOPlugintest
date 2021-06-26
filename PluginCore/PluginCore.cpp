#include "pch.h"

#include "PluginCore.h"
#include <NERvGear/NERvSDK.h>
#include <NERvGear/plugin.h>
void CLI_OnInitial() {

	NERvGear::NERvLogInfo(NVG_TEXT("otintin.world"), L"otinpo");
}
void CLI_OnRelease() {
	NERvGear::NERvLogInfo(NVG_TEXT("otintin.world"), L"remove tinpo");
}
void CLI_OnReady() {
	NERvGear::NERvLogInfo(NVG_TEXT("otintin.world"), L"Ready!");
}

#include "SAOPlugintest.h"
#include <NERvGear/NERvSDK.h>
#include "PluginCore.h"
using namespace NERvGear;
NVG_BEGIN_PLUGIN_INFO(SAOPluginTest)
NVG_DECLARE_PLUGIN_UID(0x12385678, 0x1238, 0x1238, 0x12, 0x38, 0x56, 0x78, 0x12, 0x38, 0x56, 0x78)
NVG_DECLARE_PLUGIN_TYPE(PLUGIN::BASIC)
NVG_DECLARE_PLUGIN_VERSION(1, 0, 0)
NVG_DECLARE_PLUGIN_NAME("otintin.world")
NVG_DECLARE_PLUGIN_DESCRIP("otintin.world")
NVG_DECLARE_PLUGIN_COMMENT("otintin.world")
NVG_DECLARE_PLUGIN_AUTHOR("sex sex")
NVG_DECLARE_PLUGIN_HOMEPAGE("chinpo.com")
NVG_DECLARE_PLUGIN_EMAIL("sex@tintin.com")
NVG_END_PLUGIN_INFO(SAOPluginTest)
NVG_NO_COMPONENT_REGISTER(SAOPluginTest)
long SAOPluginTest::OnInitial() {
	CLI_OnInitial();
	return PluginImpl::OnInitial();
}
long SAOPluginTest::OnRelease() {
	CLI_OnRelease();
	return PluginImpl::OnRelease();
}
long SAOPluginTest::OnReady() {
	CLI_OnReady();
	return PluginImpl::OnReady();
}
NVG_IMPLEMENT_PLUGIN(SAOPluginTest);

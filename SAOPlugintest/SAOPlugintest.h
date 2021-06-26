#pragma once

#include <NERvGear/plugin.h>
class SAOPluginTest : public NERvGear::PluginImpl {
public:
	virtual long NVG_METHOD OnInitial();
	virtual long NVG_METHOD OnReady();
	virtual long NVG_METHOD OnRelease();
	NVG_DECLARE_PLUGIN(SAOPluginTest);
};
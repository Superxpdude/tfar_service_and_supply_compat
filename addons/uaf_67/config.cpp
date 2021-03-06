#include "\sxp_tfar_service_supply_compat\main\script_mod.hpp"

class CfgPatches {
	class sxp_tfar_service_supply_compat_uaf_67 {
		name = "TFAR S&S Compat - UAF 67";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"sxp_tfar_service_supply_compat_main",
			"simc_uaf_67_core",
			"tfar_backpacks"
		};
		author = "Superxpdude";
		url = "https://github.com/Superxpdude/tfar_service_and_supply_compat";
		version = VERSION; 
		versionStr = QUOTE(VERSION_STR); 
		versionAr[] = {VERSION_AR}
	};
};

#include "CfgVehicles.hpp"
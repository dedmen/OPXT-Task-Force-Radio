#include "BIS_AddonInfo.hpp"
#define _ARMA_

class cfgPatches {
  class OPXT_TFAR_ITEMS {
    author="Ma77h3hac83r";
    name = "[OPXT] Task Force Radio";
    url = "https://forums.bistudio.com/topic/183377-operators-extreme-tactical-addons/"
    requiredAddons[] = {"A3_Modules_F", "A3_UI_F", "A3_Structures_F_Items_Electronics", "A3_Weapons_F_ItemHolders", "task_force_radio_items"};
    requiredVeslion = 0.1;
    units[] = {};
    weapons[] = {};
  };
};

class cfgMods {
    class mod_base;
    class OPXT: mod_base {
      picture="\data\logo\OPXTlogoSmall.paa";
  		logo="\data\logo\OPXTlogoSmall.paa";
  		logoOver="\data\logo\OPXTlogoSmall.paa";
  		logoSmall="\data\logo\OPXTlogoSmall.paa";
  		tooltip="[OPXT] Task Force Radio addons";
  		tooltipOwned="[OPXT] Task Force Radio addons";
  		action="https://forums.bistudio.com/topic/183377-operators-extreme-tactical-addons/";
      overview = "[OPXT] Task Force Radio addons is a gear pack extension for TFR & Arma 3";
      hideName=1;
      hidePicture=0;
      name = "[OPXT] Task Force Radio";
      author = "Ma77h3hac83r";
      overviewPicture="\data\logo\OPXTlogoSmall.paa";
    };
};

class CfgAddons {
	class PreloadAddons {
		class A3_Mod {
			list[] = {"A3_Modules_F","A3_UI_F","A3_Structures_F_Items_Electronics","task_force_radio_items",};
		};
	};
};

class cfgVehicles {
	#include "cfgVehicles.hpp"
};

class UniformSlotInfo {
  slotType = 0;
  linkProxy = "-";
};

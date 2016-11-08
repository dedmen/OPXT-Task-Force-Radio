#include "BIS_AddonInfo.hpp"
#define _ARMA_

class cfgPatches {
  class OPXT_TFAR {
    units[] = {};
    weapons[] = {};
    requiredVeslion = 0.1;
    requiredAddons[] = {"CBA_Main", "task_force_radio_items", "OPXT_TFAR_ITEMS"
    };
  };
};

#include "\opxt_tfar\description.hpp"
#include "\opxt_tfar\RscTitles.hpp"

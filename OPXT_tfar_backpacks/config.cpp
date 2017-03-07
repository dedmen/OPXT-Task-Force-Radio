class cfgPatches {
  class opxt_tfar_backpacks {
    name = "OPXT - TFAR - ITEMS";
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {
      "A3_Modules_F",
      "A3_UI_F",
      "A3_Structures_F_Items_Electronics",
      "A3_Weapons_F_ItemHolders",
      "task_force_radio_items",
	  "task_force_radio"
    };
    author = "Ma77h3hac83r";
    url = "https://forums.bistudio.com/topic/183377-operators-extreme-tactical-addons/";
  };
};

class cfgMods {
    class mod_base;
    class OPXT: mod_base {
      picture = "\OPXT_tfar_backpacks\data\logo\OPXTlogoSmall.paa";
  		logo = "\OPXT_tfar_backpacks\data\logo\OPXTlogoSmall.paa";
  		logoOver = "\OPXT_tfar_backpacks\data\logo\OPXTlogoSmall.paa";
  		logoSmall = "\OPXT_tfar_backpacks\data\logo\OPXTlogoSmall.paa";
  		tooltip = "OPXT";
  		tooltipOwned = "OPXT TFAR Owned";
  		action = "https://forums.bistudio.com/topic/183377-operators-extreme-tactical-addons/";
      overview = "OPXT Task Force Radio addons is a gear pack extension for TFAR & Arma 3";
      hideName = 1;
      hidePicture = 0;
      name = "OPXT Task Force Radio 1.1.1";
      author = "Ma77h3hac83r";
      overviewPicture = "\OPXT_tfar_backpacks\data\logo\OPXTlogoSmall.paa";
    };
};

class cfgVehicles {
	#include "cfgVehicles.hpp"
};

class RscBackPicture;
class RscEditLCD;
class HiddenButton;
class HiddenRotator;
class HiddenFlip;
class rf7800m_radio_dialog
{
  idd=1500;
	movingEnable=1;
	controlsBackground[]={};
	objects[]={};
	onUnload="['OnRadioOpen', [player, TF_lr_dialog_radio, true, 'rf7800m_radio_dialog', false]] call TFAR_fnc_fireEventHandlers;";
	onLoad="if (sunOrMoon < 0.2) then {((_this select 0) displayCtrl 67676) ctrlSetText ""\OPXT_tfar_backpacks\rf7800\RF-7800H-MP_night.paa"";};";
	controls[]=
	{
		"background",
		"enter",
		"edit",
		"channel_edit",
		"clear",
		"channel01",
		"channel02",
		"channel03",
		"channel04",
		"channel05",
		"channel06",
		"channel07",
		"channel08",
		"channel09",
		"increase_volume",
		"decrease_volume",
		"stereo",
		"additional",
		"speakers"
	};
	class background: RscBackPicture
	{
		idc=67676;
		text="\OPXT_tfar_backpacks\rf7800\RF-7800H-MP.paa";
  	x = -4.54 * Safezone_W + Safezone_X;
  	y = -9 * Safezone_H + Safezone_Y;
  	w = 49 * Safezone_W;
  	h = 42.5 * Safezone_H;
		moving=1;
	};
	class edit: RscEditLCD
	{
		moving=1;
		idc=1410;
  	x = 19 * Safezone_W + Safezone_X;
  	y = 7.5 * Safezone_H + Safezone_Y;
  	w = 5.82 * Safezone_W;
  	h = 2.5 * Safezone_H;
		font="TFAR_font_dots";
		shadow=2;
		tooltip="$STR_current_freq";
		canModify=1;
	};
	class channel_edit: RscEditLCD
	{
		moving=1;
		idc=1411;
    x = 14.5 * Safezone_W + Safezone_X;
  	y = 7.5 * Safezone_H + Safezone_Y;
  	w = 4.29787 * Safezone_W;
  	h = 2.425 * Safezone_H;
		font="TFAR_font_dots";
		shadow=2;
		tooltip="$STR_current_channel";
		canModify=0;
	};
	class clear: HiddenButton
	{
		idc=1611;
    x = 16.5 * Safezone_W + Safezone_X;
  	y = 17 * Safezone_H + Safezone_Y;
  	w = 1.5 * Safezone_W;
  	h = 1.5 * Safezone_H;
		tooltip="$STR_clear_frequency";
		action="ctrlSetText [1410,''];ctrlSetFocus ((findDisplay 1500) displayCtrl 1410);";
	};
	class enter: HiddenButton
	{
		idc=1610;
    x = 13.5 * Safezone_W + Safezone_X;
  	y = 15.5 * Safezone_H + Safezone_Y;
  	w = 1.5 * Safezone_W;
  	h = 1 * Safezone_H;
		tooltip="$STR_set_frequency";
		action="_f = parseNumber(ctrlText 1410);if ((_f >= 30) and (_f <= 87)) then {[TF_lr_dialog_radio,str (round (_f * 10) / 10)] call TFAR_fnc_setLrFrequency;call TFAR_fnc_hideHint;} else {hint formatText [localize 'STR_incorrect_frequency',30,87]};call TFAR_fnc_updateLRDialogToChannel;";
	};
	class channel01: HiddenButton
	{
		idc=1501;
    x = 16.5 * Safezone_W + Safezone_X;
  	y = 12.5 * Safezone_H + Safezone_Y;
  	w = 1.5 * Safezone_W;
  	h = 1 * Safezone_H;
		action="[TF_lr_dialog_radio, 0] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_radio_channel_1";
	};
	class channel02: HiddenButton
	{
		idc=1502;
    x = 19 * Safezone_W + Safezone_X;
  	y = 12.5 * Safezone_H + Safezone_Y;
  	w = 1.5 * Safezone_W;
  	h = 1 * Safezone_H;
		action="[TF_lr_dialog_radio, 1] call TFAR_fnc_setLrChannel; call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_radio_channel_2";
	};
	class channel03: HiddenButton
	{
		idc=1503;
    x = 21.5 * Safezone_W + Safezone_X;
  	y = 12.5 * Safezone_H + Safezone_Y;
  	w = 1.5 * Safezone_W;
  	h = 1 * Safezone_H;
		action="[TF_lr_dialog_radio, 2] call TFAR_fnc_setLrChannel; call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_radio_channel_3";
	};
	class channel04: HiddenButton
	{
		idc=1504;
    x = 16.5 * Safezone_W + Safezone_X;
  	y = 14 * Safezone_H + Safezone_Y;
  	w = 1.5 * Safezone_W;
  	h = 1 * Safezone_H;
		action="[TF_lr_dialog_radio, 3] call TFAR_fnc_setLrChannel; call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_radio_channel_4";
	};
	class channel05: HiddenButton
	{
		idc=1505;
    x = 19 * Safezone_W + Safezone_X;
  	y = 14 * Safezone_H + Safezone_Y;
  	w = 1.5 * Safezone_W;
  	h = 1 * Safezone_H;
		action="[TF_lr_dialog_radio, 4] call TFAR_fnc_setLrChannel; call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_radio_channel_5";
	};
	class channel06: HiddenButton
	{
		idc=1506;
    x = 21.5 * Safezone_W + Safezone_X;
  	y = 14 * Safezone_H + Safezone_Y;
  	w = 1.5 * Safezone_W;
  	h = 1 * Safezone_H;
		action="[TF_lr_dialog_radio, 5] call TFAR_fnc_setLrChannel; call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_radio_channel_6";
	};
	class channel07: HiddenButton
	{
		idc=1507;
    x = 16.5 * Safezone_W + Safezone_X;
  	y = 15.5 * Safezone_H + Safezone_Y;
  	w = 1.5 * Safezone_W;
  	h = 1 * Safezone_H;
		action="[TF_lr_dialog_radio, 6] call TFAR_fnc_setLrChannel; call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_radio_channel_7";
	};
	class channel08: HiddenButton
	{
		idc=1508;
    x = 19 * Safezone_W + Safezone_X;
  	y = 15.5 * Safezone_H + Safezone_Y;
  	w = 1.5 * Safezone_W;
  	h = 1 * Safezone_H;
		action="[TF_lr_dialog_radio, 7] call TFAR_fnc_setLrChannel; call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_radio_channel_8";
	};
	class channel09: HiddenButton
	{
		idc=1509;
    x = 21.5 * Safezone_W + Safezone_X;
  	y = 15.5 * Safezone_H + Safezone_Y;
  	w = 1.5 * Safezone_W;
  	h = 1 * Safezone_H;
		action="[TF_lr_dialog_radio, 8] call TFAR_fnc_setLrChannel; call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
		tooltip="$STR_radio_channel_9";
	};
	class increase_volume: HiddenButton
	{
		idc=1612;
    x = 13.5 * Safezone_W + Safezone_X;
  	y = 12.5 * Safezone_H + Safezone_Y;
  	w = 1.5 * Safezone_W;
  	h = 1.5 * Safezone_H;
		action="[1, true] call TFAR_fnc_setVolumeViaDialog;";
		tooltip="$STR_increase_volume";
	};
	class decrease_volume: HiddenButton
	{
		idc=1613;
    x = 13.5 * Safezone_W + Safezone_X;
  	y = 14 * Safezone_H + Safezone_Y;
  	w = 1.5 * Safezone_W;
  	h = 1.5 * Safezone_H;
		action="[0, true] call TFAR_fnc_setVolumeViaDialog;";
		tooltip="$STR_decrease_volume";
	};
	class stereo: HiddenButton
	{
		idc=1510;
    x = 19 * Safezone_W + Safezone_X;
  	y = 17 * Safezone_H + Safezone_Y;
  	w = 1.5 * Safezone_W;
  	h = 1.5 * Safezone_H;
		action="[TF_lr_dialog_radio,((TF_lr_dialog_radio call TFAR_fnc_getCurrentLrStereo) + 1) mod 3] call TFAR_fnc_setLrStereo;[TF_lr_dialog_radio] call TFAR_fnc_showRadioVolume;";
		tooltip="$STR_stereo_settings";
	};
	class additional: HiddenButton
	{
		idc=12345;
    x = 24.5 * Safezone_W + Safezone_X;
  	y = 15.5 * Safezone_H + Safezone_Y;
  	w = 1.5 * Safezone_W;
  	h = 1 * Safezone_H;
		tooltip="$STR_set_additional";
		action="[TF_lr_dialog_radio,TF_lr_dialog_radio call TFAR_fnc_getLrChannel] call TFAR_fnc_setAdditionalLrChannel; call TFAR_fnc_updateLRDialogToChannel; [TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
	};
	class speakers: HiddenButton
	{
		idc=123456;
    x = 21.5 * Safezone_W + Safezone_X;
  	y = 17 * Safezone_H + Safezone_Y;
  	w = 1.5 * Safezone_W;
  	h = 1.5 * Safezone_H;
		tooltip="$STR_speakers_settings_true";
		action="TF_lr_dialog_radio call TFAR_fnc_setLrSpeakers;[TF_lr_dialog_radio] call TFAR_fnc_showRadioSpeakers;";
	};
};

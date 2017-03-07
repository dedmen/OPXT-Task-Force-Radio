class OPXT_aor1_210;
class tf_rt1523g;
class tf_rt1523g_big;
class TFAR_Bag_Base;

//---------- RT-1523G ASIP ----------//

class OPXT_aor1_1523: tf_rt1523g_big { //This is acting as a base class for all other RT-1523G's
	author = "Ma77h3hac83r";
	scope = 2; //TFAR 1.0 hides the old deprecated baseclass so we have to unhide it again before using it
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "[OPXT] RT-1523G AOR1";
	picture = "\OPXT_TFAR_ITEMS\data\ui\aor1_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\aor1_1523.paa"};
	mass = 60; //Custom mass for my rt1523g's 
	maximumLoad = 320;
};
class OPXT_at_atx_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G A-Tacs AT-X";
	picture = "\OPXT_TFAR_ITEMS\data\ui\at_atx_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\at_atx_1523.paa"};
};
class OPXT_at_au_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G A-Tacs AU";
	picture = "\OPXT_TFAR_ITEMS\data\ui\at_au_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\at_au_1523.paa"};
};
class OPXT_at_fg_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G A-Tacs FG";
	picture = "\OPXT_TFAR_ITEMS\data\ui\at_fg_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\at_fg_1523.paa"};
};
class OPXT_at_ix_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G A-Tacs iX";
	picture = "\OPXT_TFAR_ITEMS\data\ui\at_ix_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\at_ix_1523.paa"};
};
class OPXT_blk_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G Black";
	picture = "\OPXT_TFAR_ITEMS\data\ui\blk_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\blk_1523.paa"};
};
class OPXT_krtk_ban_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G Kryptek Banshee";
	picture = "\OPXT_TFAR_ITEMS\data\ui\krtk_ban_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\krtk_ban_1523.paa"};
};
class OPXT_krtk_nom_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G Kryptek Nomad";
	picture = "\OPXT_TFAR_ITEMS\data\ui\krtk_nom_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\krtk_nom_1523.paa"};
};
class OPXT_krtk_rad_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G Kryptek Raid";
	picture = "\OPXT_TFAR_ITEMS\data\ui\krtk_rad_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\krtk_rad_1523.paa"};
};
class OPXT_krtk_rad_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G Kryptek Raid";
	picture = "\OPXT_TFAR_ITEMS\data\ui\krtk_rad_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\krtk_rad_1523.paa"};
};
class OPXT_krtk_typ_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G Kryptek Typhoon";
	picture = "\OPXT_TFAR_ITEMS\data\ui\krtk_typ_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\krtk_typ_1523.paa"};
};
class OPXT_m81_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G M81";
	picture = "\OPXT_TFAR_ITEMS\data\ui\m81_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\m81_1523.paa"};
};
class OPXT_m81c_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G M81 Concrete";
	picture = "\OPXT_TFAR_ITEMS\data\ui\m81c_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\m81c_1523.paa"};
};
class OPXT_multicam_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G Multicam";
	picture = "\OPXT_TFAR_ITEMS\data\ui\multicam_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\multicam_1523.paa"};
};
class OPXT_multicama_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G Multicam Alpine";
	picture = "\OPXT_TFAR_ITEMS\data\ui\multicama_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\multicama_1523.paa"};
};
class OPXT_multicamt_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G Multicam Tropic";
	picture = "\OPXT_TFAR_ITEMS\data\ui\multicamt_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\multicamt_1523.paa"};
};
class OPXT_oga_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G OGA";
	picture = "\OPXT_TFAR_ITEMS\data\ui\oga_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\oga_1523.paa"};
};
class OPXT_ogag_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G OGA Gray";
	picture = "\OPXT_TFAR_ITEMS\data\ui\ogag_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\ogag_1523.paa"};
};
class OPXT_ogao_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G OGA OD";
	picture = "\OPXT_TFAR_ITEMS\data\ui\ogao_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\ogao_1523.paa"};
};
class OPXT_pen_bad_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G Pencott Badlands";
	picture = "\OPXT_TFAR_ITEMS\data\ui\pen_bad_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\pen_bad_1523.paa"};
};
class OPXT_pen_grz_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G Pencott Greenzone";
	picture = "\OPXT_TFAR_ITEMS\data\ui\pen_grz_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\pen_grz_1523.paa"};
};
class OPXT_pen_sno_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G Pencott Snowdrift";
	picture = "\OPXT_TFAR_ITEMS\data\ui\pen_sno_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\pen_sno_1523.paa"};
};
class OPXT_po_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G Project Honor";
	picture = "\OPXT_TFAR_ITEMS\data\ui\po_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\po_1523.paa"};
};
class OPXT_scorpion_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G Scorpion";
	picture = "\OPXT_TFAR_ITEMS\data\ui\scorpion_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\scorpion_1523.paa"};
};
class OPXT_wht_1523: OPXT_aor1_1523 {
	displayName = "[OPXT] RT-1523G White";
	picture = "\OPXT_TFAR_ITEMS\data\ui\wht_1523_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\wht_1523.paa"};
};

//---------- AN/PRC-117 ----------//

class OPXT_aor1_117: tf_rt1523g { //This is acting as a base class for all other 117's
	author = "Ma77h3hac83r";
	scope = 2; //TFAR 1.0 hides the old deprecated baseclass so we have to unhide it again before using it
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "[OPXT] RT-1523G (small) AOR1";
	picture = "\OPXT_TFAR_ITEMS\data\ui\aor1_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\aor1_117.paa"};
	mass = 20; //Custom mass for my 117's 
	maximumLoad = 160;
};
class OPXT_at_atx_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) A-Tacs AT-X";
	picture = "\OPXT_TFAR_ITEMS\data\ui\at_atx_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\at_atx_117.paa"};
};
class OPXT_at_au_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) A-Tacs AU";
	picture = "\OPXT_TFAR_ITEMS\data\ui\at_au_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\at_au_117.paa"};
};
class OPXT_at_fg_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) A-Tacs FG";
	picture = "\OPXT_TFAR_ITEMS\data\ui\at_fg_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\at_fg_117.paa"};
};
class OPXT_at_ix_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) A-Tacs iX";
	picture = "\OPXT_TFAR_ITEMS\data\ui\at_ix_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\at_ix_117.paa"};
};
class OPXT_blk_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) Black";
	picture = "\OPXT_TFAR_ITEMS\data\ui\blk_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\blk_117.paa"};
};
class OPXT_krtk_ban_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) Kryptek Banshee";
	picture = "\OPXT_TFAR_ITEMS\data\ui\krtk_ban_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\krtk_ban_117.paa"};
};
class OPXT_krtk_nom_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) Kryptek Nomad";
	picture = "\OPXT_TFAR_ITEMS\data\ui\krtk_nom_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\krtk_nom_117.paa"};
};
class OPXT_krtk_rad_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) Kryptek Raid";
	picture = "\OPXT_TFAR_ITEMS\data\ui\krtk_rad_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\krtk_rad_117.paa"};
};
class OPXT_krtk_typ_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) Kryptek Typhoon";
	picture = "\OPXT_TFAR_ITEMS\data\ui\krtk_typ_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\krtk_typ_117.paa"};
};
class OPXT_m81_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) M81";
	picture = "\OPXT_TFAR_ITEMS\data\ui\m81_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\m81_117.paa"};
};
class OPXT_m81c_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) M81 Concrete";
	picture = "\OPXT_TFAR_ITEMS\data\ui\m81c_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\m81c_117.paa"};
};
class OPXT_multicam_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) Multicam";
	picture = "\OPXT_TFAR_ITEMS\data\ui\multicam_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\multicam_117.paa"};
};
class OPXT_multicama_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) Multicam Alpine";
	picture = "\OPXT_TFAR_ITEMS\data\ui\multicama_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\multicama_117.paa"};
};
class OPXT_multicamt_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) Multicam Tropic";
	picture = "\OPXT_TFAR_ITEMS\data\ui\multicamt_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\multicamt_117.paa"};
};
class OPXT_oga_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) OGA";
	picture = "\OPXT_TFAR_ITEMS\data\ui\oga_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\oga_117.paa"};
};
class OPXT_ogag_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) OGA Gray";
	picture = "\OPXT_TFAR_ITEMS\data\ui\ogag_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\ogag_117.paa"};
};
class OPXT_ogao_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) OGA OD";
	picture = "\OPXT_TFAR_ITEMS\data\ui\ogao_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\ogao_117.paa"};
};
class OPXT_pen_bad_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) Pencott Badlands";
	picture = "\OPXT_TFAR_ITEMS\data\ui\pen_bad_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\pen_bad_117.paa"};
};
class OPXT_pen_grz_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) Pencott Greenzone";
	picture = "\OPXT_TFAR_ITEMS\data\ui\pen_grz_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\pen_grz_117.paa"};
};
class OPXT_pen_sno_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) Pencott Snowdrift";
	picture = "\OPXT_TFAR_ITEMS\data\ui\pen_sno_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\pen_sno_117.paa"};
};
class OPXT_po_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) Project Honor";
	picture = "\OPXT_TFAR_ITEMS\data\ui\po_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\po_117.paa"};
};
class OPXT_scorpion_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) Scorpion";
	picture = "\OPXT_TFAR_ITEMS\data\ui\aor1_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\scorpion_117.paa"};
};
class OPXT_wht_117: OPXT_aor1_117 {
	displayName = "[OPXT] RT-1523G (small) White";
	picture = "\OPXT_TFAR_ITEMS\data\ui\wht_117_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\wht_117.paa"};
};

//---------- AN/ARC-210 ----------//

class OPXT_aor1_210: tf_anarc210 { //This is acting as a base class for all other 210's
	author = "Ma77h3hac83r";
	scope = 2; //TFAR 1.0 hides the old deprecated baseclass so we have to unhide it again before using it
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "[OPXT] AN/ARC-210 AOR1";
	picture = "\OPXT_TFAR_ITEMS\data\ui\aor1_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\aor1_210.paa"};
	mass = 50; //Custom mass for my 210's 
	maximumLoad = 280;
};
class OPXT_at_atx_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 A-Tacs AT-X";
	picture = "\OPXT_TFAR_ITEMS\data\ui\at_atx_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\at_atx_210.paa"};
};
class OPXT_at_au_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 A-Tacs AU";
	picture = "\OPXT_TFAR_ITEMS\data\ui\at_au_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\at_au_210.paa"};
};
class OPXT_at_fg_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 A-Tacs FG";
	picture = "\OPXT_TFAR_ITEMS\data\ui\at_fg_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\at_fg_210.paa"};
};
class OPXT_at_ix_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 A-Tacs iX";
	picture = "\OPXT_TFAR_ITEMS\data\ui\at_ix_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\at_ix_210.paa"};
};
class OPXT_blk_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 Black";
	picture = "\OPXT_TFAR_ITEMS\data\ui\blk_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\blk_210.paa"};
};
class OPXT_krtk_ban_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 Kryptek Banshee";
	picture = "\OPXT_TFAR_ITEMS\data\ui\krtk_ban_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\krtk_ban_210.paa"};
};
class OPXT_krtk_nom_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 Kryptek Nomad";
	picture = "\OPXT_TFAR_ITEMS\data\ui\krtk_nom_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\krtk_nom_210.paa"};
};
class OPXT_krtk_rad_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 Kryptek Raid";
	picture = "\OPXT_TFAR_ITEMS\data\ui\krtk_rad_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\krtk_rad_210.paa"};
};
class OPXT_krtk_typ_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 Kryptek Typhoon";
	picture = "\OPXT_TFAR_ITEMS\data\ui\krtk_typ_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\krtk_typ_210.paa"};
};
class OPXT_m81_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 M81";
	picture = "\OPXT_TFAR_ITEMS\data\ui\m81_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\m81_210.paa"};
};
class OPXT_m81c_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 M81 Concrete";
	picture = "\OPXT_TFAR_ITEMS\data\ui\m81c_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\m81c_210.paa"};
};
class OPXT_multicam_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 Multicam";
	picture = "\OPXT_TFAR_ITEMS\data\ui\multicam_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\multicam_210.paa"};
};
class OPXT_multicama_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 Multicam Alpine";
	picture = "\OPXT_TFAR_ITEMS\data\ui\multicama_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\multicama_210.paa"};
};
class OPXT_multicamt_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 Multicam Tropic";
	picture = "\OPXT_TFAR_ITEMS\data\ui\multicamt_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\multicamt_210.paa"};
};
class OPXT_oga_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 OGA";
	picture = "\OPXT_TFAR_ITEMS\data\ui\oga_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\oga_210.paa"};
};
class OPXT_ogag_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 OGA Gray";
	picture = "\OPXT_TFAR_ITEMS\data\ui\ogag_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\ogag_210.paa"};
};
class OPXT_ogao_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 OGA OD";
	picture = "\OPXT_TFAR_ITEMS\data\ui\ogao_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\ogao_210.paa"};
};
class OPXT_pen_bad_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 Pencott Badlands";
	picture = "\OPXT_TFAR_ITEMS\data\ui\pen_bad_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\pen_bad_210.paa"};
};
class OPXT_pen_grz_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 Pencott Greenzone";
	picture = "\OPXT_TFAR_ITEMS\data\ui\pen_grz_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\pen_grz_210.paa"};
};
class OPXT_pen_sno_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 Pencott Snowdrift";
	picture = "\OPXT_TFAR_ITEMS\data\ui\pen_sno_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\pen_sno_210.paa"};
};
class OPXT_po_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 Project Honor";
	picture = "\OPXT_TFAR_ITEMS\data\ui\po_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\po_210.paa"};
};
class OPXT_scorpion_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 Scorpion";
	picture = "\OPXT_TFAR_ITEMS\data\ui\scorpion_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\scorpion_210.paa"};
};
class OPXT_wht_210: OPXT_aor1_210 {
	displayName = "[OPXT] AN/ARC-210 White";
	picture = "\OPXT_TFAR_ITEMS\data\ui\wht_210_ui.paa";
	hiddenSelectionsTextures[] = {"\OPXT_TFAR_ITEMS\data\textures\wht_210.paa"};
};

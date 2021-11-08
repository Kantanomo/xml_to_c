#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: new_hud
		* group_tag : nhdt
 		* header size : 40
		* *********************************************************************/ 
struct s_new_hud_group_definition
{
tag_reference do_not_use;//0x0
struct s_bitmap_widgets_block
{
string_id name;//0x0
enum class e_input_1 : __int8
{
basic_zero = 0,
basic_one = 1,
basic_time = 2,
basic_global_hud_fade = 3,
NUM_ = 4,
NUM_ = 5,
NUM_ = 6,
NUM_ = 7,
NUM_ = 8,
NUM_ = 9,
NUM_ = 10,
NUM_ = 11,
NUM_ = 12,
NUM_ = 13,
NUM_ = 14,
NUM_ = 15,
unit_shield = 16,
unit_body = 17,
unit_autoaimed = 18,
unit_has_no_grenades = 19,
unit_frag_grenade_count = 20,
unit_plasma_grenade_count = 21,
unit_time_on_dpl_shield = 22,
unit_zoom_fraction = 23,
unit_camo_value = 24,
NUM_ = 25,
NUM_ = 26,
NUM_ = 27,
NUM_ = 28,
NUM_ = 29,
NUM_ = 30,
NUM_ = 31,
NUM_ = 32,
parent_shield = 33,
parent_body = 34,
NUM_ = 35,
NUM_ = 36,
NUM_ = 37,
NUM_ = 38,
NUM_ = 39,
NUM_ = 40,
NUM_ = 41,
NUM_ = 42,
NUM_ = 43,
NUM_ = 44,
NUM_ = 45,
NUM_ = 46,
NUM_ = 47,
NUM_ = 48,
weapon_clip_ammo = 49,
weapon_heat = 40,
weapon_battery = 51,
weapon_total_ammo = 52,
weapon_barrel_spin = 53,
weapon_overheated = 54,
weapon_clip_ammo_fraction = 55,
weapon_time_on_overheat = 56,
weapon_battery_fraction = 57,
weapon_locking_fraction = 58,
NUM_ = 59,
NUM_ = 60,
NUM_ = 61,
NUM_ = 62,
NUM_ = 63,
NUM_ = 64,
NUM_ = 65,
user_score_fraction = 66,
other_user_score_fraction = 67,
user_winning = 68,
bomb_arming_amount = 69,
};
e_input_1 input_1;//0x4
enum class e_input_2 : __int8
{
basic_zero = 0,
basic_one = 1,
basic_time = 2,
basic_global_hud_fade = 3,
NUM_ = 4,
NUM_ = 5,
NUM_ = 6,
NUM_ = 7,
NUM_ = 8,
NUM_ = 9,
NUM_ = 10,
NUM_ = 11,
NUM_ = 12,
NUM_ = 13,
NUM_ = 14,
NUM_ = 15,
unit_shield = 16,
unit_body = 17,
unit_autoaimed = 18,
unit_has_no_grenades = 19,
unit_frag_grenade_count = 20,
unit_plasma_grenade_count = 21,
unit_time_on_dpl_shield = 22,
unit_zoom_fraction = 23,
unit_camo_value = 24,
NUM_ = 25,
NUM_ = 26,
NUM_ = 27,
NUM_ = 28,
NUM_ = 29,
NUM_ = 30,
NUM_ = 31,
NUM_ = 32,
parent_shield = 33,
parent_body = 34,
NUM_ = 35,
NUM_ = 36,
NUM_ = 37,
NUM_ = 38,
NUM_ = 39,
NUM_ = 40,
NUM_ = 41,
NUM_ = 42,
NUM_ = 43,
NUM_ = 44,
NUM_ = 45,
NUM_ = 46,
NUM_ = 47,
NUM_ = 48,
weapon_clip_ammo = 49,
weapon_heat = 40,
weapon_battery = 51,
weapon_total_ammo = 52,
weapon_barrel_spin = 53,
weapon_overheated = 54,
weapon_clip_ammo_fraction = 55,
weapon_time_on_overheat = 56,
weapon_battery_fraction = 57,
weapon_locking_fraction = 58,
NUM_ = 59,
NUM_ = 60,
NUM_ = 61,
NUM_ = 62,
NUM_ = 63,
NUM_ = 64,
NUM_ = 65,
user_score_fraction = 66,
other_user_score_fraction = 67,
user_winning = 68,
bomb_arming_amount = 69,
};
e_input_2 input_2;//0x5
enum class e_input_3 : __int8
{
basic_zero = 0,
basic_one = 1,
basic_time = 2,
basic_global_hud_fade = 3,
NUM_ = 4,
NUM_ = 5,
NUM_ = 6,
NUM_ = 7,
NUM_ = 8,
NUM_ = 9,
NUM_ = 10,
NUM_ = 11,
NUM_ = 12,
NUM_ = 13,
NUM_ = 14,
NUM_ = 15,
unit_shield = 16,
unit_body = 17,
unit_autoaimed = 18,
unit_has_no_grenades = 19,
unit_frag_grenade_count = 20,
unit_plasma_grenade_count = 21,
unit_time_on_dpl_shield = 22,
unit_zoom_fraction = 23,
unit_camo_value = 24,
NUM_ = 25,
NUM_ = 26,
NUM_ = 27,
NUM_ = 28,
NUM_ = 29,
NUM_ = 30,
NUM_ = 31,
NUM_ = 32,
parent_shield = 33,
parent_body = 34,
NUM_ = 35,
NUM_ = 36,
NUM_ = 37,
NUM_ = 38,
NUM_ = 39,
NUM_ = 40,
NUM_ = 41,
NUM_ = 42,
NUM_ = 43,
NUM_ = 44,
NUM_ = 45,
NUM_ = 46,
NUM_ = 47,
NUM_ = 48,
weapon_clip_ammo = 49,
weapon_heat = 40,
weapon_battery = 51,
weapon_total_ammo = 52,
weapon_barrel_spin = 53,
weapon_overheated = 54,
weapon_clip_ammo_fraction = 55,
weapon_time_on_overheat = 56,
weapon_battery_fraction = 57,
weapon_locking_fraction = 58,
NUM_ = 59,
NUM_ = 60,
NUM_ = 61,
NUM_ = 62,
NUM_ = 63,
NUM_ = 64,
NUM_ = 65,
user_score_fraction = 66,
other_user_score_fraction = 67,
user_winning = 68,
bomb_arming_amount = 69,
};
e_input_3 input_3;//0x6
enum class e_input_4 : __int8
{
basic_zero = 0,
basic_one = 1,
basic_time = 2,
basic_global_hud_fade = 3,
NUM_ = 4,
NUM_ = 5,
NUM_ = 6,
NUM_ = 7,
NUM_ = 8,
NUM_ = 9,
NUM_ = 10,
NUM_ = 11,
NUM_ = 12,
NUM_ = 13,
NUM_ = 14,
NUM_ = 15,
unit_shield = 16,
unit_body = 17,
unit_autoaimed = 18,
unit_has_no_grenades = 19,
unit_frag_grenade_count = 20,
unit_plasma_grenade_count = 21,
unit_time_on_dpl_shield = 22,
unit_zoom_fraction = 23,
unit_camo_value = 24,
NUM_ = 25,
NUM_ = 26,
NUM_ = 27,
NUM_ = 28,
NUM_ = 29,
NUM_ = 30,
NUM_ = 31,
NUM_ = 32,
parent_shield = 33,
parent_body = 34,
NUM_ = 35,
NUM_ = 36,
NUM_ = 37,
NUM_ = 38,
NUM_ = 39,
NUM_ = 40,
NUM_ = 41,
NUM_ = 42,
NUM_ = 43,
NUM_ = 44,
NUM_ = 45,
NUM_ = 46,
NUM_ = 47,
NUM_ = 48,
weapon_clip_ammo = 49,
weapon_heat = 40,
weapon_battery = 51,
weapon_total_ammo = 52,
weapon_barrel_spin = 53,
weapon_overheated = 54,
weapon_clip_ammo_fraction = 55,
weapon_time_on_overheat = 56,
weapon_battery_fraction = 57,
weapon_locking_fraction = 58,
NUM_ = 59,
NUM_ = 60,
NUM_ = 61,
NUM_ = 62,
NUM_ = 63,
NUM_ = 64,
NUM_ = 65,
user_score_fraction = 66,
other_user_score_fraction = 67,
user_winning = 68,
bomb_arming_amount = 69,
};
e_input_4 input_4;//0x7
enum class e_NUM_[do_draw_if]_unit_flags : __int16
{
default = FLAG(0),
grenade_type_is_none = FLAG(1),
grenade_type_is_frag = FLAG(2),
grenade_type_is_plasma = FLAG(3),
unit_is_single_wielding = FLAG(4),
unit_is_dual_wielding = FLAG(5),
unit_is_unzoomed = FLAG(6),
unit_is_zoomed_level_1 = FLAG(7),
unit_is_zoomed_level_2 = FLAG(8),
grenades_disabled = FLAG(9),
binoculars_enabled = FLAG(10),
motion_sensor_enabled = FLAG(11),
shield_enabled = FLAG(12),
dervish = FLAG(13),
};
e_NUM_[do_draw_if]_unit_flags NUM_[do_draw_if]_unit_flags;//0x8
enum class e_NUM_[do_draw_if]_extra_flags : __int8
{
autoaim__friendly = FLAG(0),
autoaim__plasma = FLAG(1),
autoaim__headshot = FLAG(2),
autoaim__vulnerable = FLAG(3),
autoaim__invincible = FLAG(4),
};
e_NUM_[do_draw_if]_extra_flags NUM_[do_draw_if]_extra_flags;//0xA
enum class e_NUM_[do_draw_if]_weapon_flags : __int16
{
primary_weapon = FLAG(0),
secondary_weapon = FLAG(1),
backpack_weapon = FLAG(2),
age_below_cutoff = FLAG(3),
clip_below_cutoff = FLAG(4),
total_below_cutoff = FLAG(5),
overheated = FLAG(6),
out_of_ammo = FLAG(7),
lock_target_available = FLAG(8),
locking = FLAG(9),
locked = FLAG(10),
};
e_NUM_[do_draw_if]_weapon_flags NUM_[do_draw_if]_weapon_flags;//0xB
enum class e_NUM_[do_draw_if]_game_engine_state_flags : __int16
{
campaign_solo = FLAG(0),
campaign_coop = FLAG(1),
free_for_all = FLAG(2),
team_game = FLAG(3),
user_leading = FLAG(4),
user_not_leading = FLAG(5),
timed_game = FLAG(6),
untimed_game = FLAG(7),
other_score_valid = FLAG(8),
other_score_invalid = FLAG(9),
player_is_arming_bomb = FLAG(10),
player_talking = FLAG(11),
};
e_NUM_[do_draw_if]_game_engine_state_flags NUM_[do_draw_if]_game_engine_state_flags;//0xD
enum class e_NUM_[dont_draw_if]_unit_flags : __int16
{
default = FLAG(0),
grenade_type_is_none = FLAG(1),
grenade_type_is_frag = FLAG(2),
grenade_type_is_plasma = FLAG(3),
unit_is_single_wielding = FLAG(4),
unit_is_dual_wielding = FLAG(5),
unit_is_unzoomed = FLAG(6),
unit_is_zoomed_level_1 = FLAG(7),
unit_is_zoomed_level_2 = FLAG(8),
grenades_disabled = FLAG(9),
binoculars_enabled = FLAG(10),
motion_sensor_enabled = FLAG(11),
shield_enabled = FLAG(12),
dervish = FLAG(13),
};
e_NUM_[dont_draw_if]_unit_flags NUM_[dont_draw_if]_unit_flags;//0xF
enum class e_NUM_[dont_draw_if]_extra_flags : __int8
{
autoaim__friendly = FLAG(0),
autoaim__plasma = FLAG(1),
autoaim__headshot = FLAG(2),
autoaim__vulnerable = FLAG(3),
autoaim__invincible = FLAG(4),
};
e_NUM_[dont_draw_if]_extra_flags NUM_[dont_draw_if]_extra_flags;//0x11
enum class e_NUM_[dont_draw_if]_weapon_flags : __int16
{
primary_weapon = FLAG(0),
secondary_weapon = FLAG(1),
backpack_weapon = FLAG(2),
age_below_cutoff = FLAG(3),
clip_below_cutoff = FLAG(4),
total_below_cutoff = FLAG(5),
overheated = FLAG(6),
out_of_ammo = FLAG(7),
lock_target_available = FLAG(8),
locking = FLAG(9),
locked = FLAG(10),
};
e_NUM_[dont_draw_if]_weapon_flags NUM_[dont_draw_if]_weapon_flags;//0x12
enum class e_NUM_[dont_draw_if]_game_engine_state_flags : __int16
{
campaign_solo = FLAG(0),
campaign_coop = FLAG(1),
free_for_all = FLAG(2),
team_game = FLAG(3),
user_leading = FLAG(4),
user_not_leading = FLAG(5),
timed_game = FLAG(6),
untimed_game = FLAG(7),
other_score_valid = FLAG(8),
other_score_invalid = FLAG(9),
player_is_arming_bomb = FLAG(10),
player_talking = FLAG(11),
};
e_NUM_[dont_draw_if]_game_engine_state_flags NUM_[dont_draw_if]_game_engine_state_flags;//0x14
__int16 age_cutoff;//0x16
__int16 clip_cutoff;//0x18
__int16 total_cutoff;//0x1A
enum class e_anchor : __int16
{
health_and_shield = 0,
weapon_hud = 1,
motion_sensor = 2,
scoreboard = 3,
crosshair = 4,
lockon_target = 5,
};
e_anchor anchor;//0x1C
enum class e_flags : __int16
{
flip_horizontally = FLAG(0),
flip_vertically = FLAG(1),
scope_mirror_horizontally = FLAG(2),
scope_mirror_vertically = FLAG(3),
scope_stretch = FLAG(4),
};
e_flags flags;//0x1E
tag_reference bitmap;//0x20
tag_reference shader;//0x28
unsigned __int8 fullscreen_sequence_index;//0x30
unsigned __int8 halfscreen_sequence_index;//0x31
unsigned __int8 quarterscreen_sequence_index;//0x32
PAD(0x1);//0x33
__int16 fullscreen_offset_x;//0x34
__int16 fullscreen_offset_y;//0x36
__int16 halfscreen_offset_x;//0x38
__int16 halfscreen_offset_y;//0x3A
__int16 quarterscreen_offset_x;//0x3C
__int16 quarterscreen_offset_y;//0x3E
float fullscreen_registration_point_x;//0x40
float fullscreen_registration_point_y;//0x44
float halfscreen_registration_point_x;//0x48
float halfscreen_registration_point_y;//0x4C
float quarterscreen_registration_point_x;//0x50
float quarterscreen_registration_point_y;//0x54
struct s_effect_block
{
enum class e_flags : __int32
{
apply_scale = FLAG(0),
apply_theta = FLAG(1),
apply_offset = FLAG(2),
};
e_flags flags;//0x0
string_id input_name;//0x4
string_id range_name;//0x8
float time_period_in_seconds;//0xC
data_block function;//0x10
string_id input_name;//0x18
string_id range_name;//0x1C
float time_period_in_seconds;//0x20
data_block function;//0x24
string_id input_name;//0x2C
string_id range_name;//0x30
float time_period_in_seconds;//0x34
data_block function;//0x38
string_id input_name;//0x40
string_id range_name;//0x44
float time_period_in_seconds;//0x48
data_block function;//0x4C
string_id input_name;//0x54
string_id range_name;//0x58
float time_period_in_seconds;//0x5C
data_block function;//0x60
};
TAG_BLOCK_SIZE_ASSERT(s_effect_block,0x68);
tag_block<s_effect_block> effect;//0x58
enum class e_special_hud_type : __int32
{
unspecial = 0,
sb_player_emblem = 1,
sb_other_player_emblem = 2,
sb_player_score_meter = 3,
sb_other_player_score_meter = 4,
unit_shield_meter = 5,
motion_sensor = 6,
territory_meter = 7,
};
e_special_hud_type special_hud_type;//0x60
};
TAG_BLOCK_SIZE_ASSERT(s_bitmap_widgets_block,0x64);
tag_block<s_bitmap_widgets_block> bitmap_widgets;//0x8
struct s_numerical_elements_block
{
string_id name;//0x0
enum class e_input_1 : __int8
{
basic_zero = 0,
basic_one = 1,
basic_time = 2,
basic_global_hud_fade = 3,
NUM_ = 4,
NUM_ = 5,
NUM_ = 6,
NUM_ = 7,
NUM_ = 8,
NUM_ = 9,
NUM_ = 10,
NUM_ = 11,
NUM_ = 12,
NUM_ = 13,
NUM_ = 14,
NUM_ = 15,
unit_shield = 16,
unit_body = 17,
unit_autoaimed = 18,
unit_has_no_grenades = 19,
unit_frag_grenade_count = 20,
unit_plasma_grenade_count = 21,
unit_time_on_dpl_shield = 22,
unit_zoom_fraction = 23,
unit_camo_value = 24,
NUM_ = 25,
NUM_ = 26,
NUM_ = 27,
NUM_ = 28,
NUM_ = 29,
NUM_ = 30,
NUM_ = 31,
NUM_ = 32,
parent_shield = 33,
parent_body = 34,
NUM_ = 35,
NUM_ = 36,
NUM_ = 37,
NUM_ = 38,
NUM_ = 39,
NUM_ = 40,
NUM_ = 41,
NUM_ = 42,
NUM_ = 43,
NUM_ = 44,
NUM_ = 45,
NUM_ = 46,
NUM_ = 47,
NUM_ = 48,
weapon_clip_ammo = 49,
weapon_heat = 40,
weapon_battery = 51,
weapon_total_ammo = 52,
weapon_barrel_spin = 53,
weapon_overheated = 54,
weapon_clip_ammo_fraction = 55,
weapon_time_on_overheat = 56,
weapon_battery_fraction = 57,
weapon_locking_fraction = 58,
NUM_ = 59,
NUM_ = 60,
NUM_ = 61,
NUM_ = 62,
NUM_ = 63,
NUM_ = 64,
NUM_ = 65,
user_score_fraction = 66,
other_user_score_fraction = 67,
user_winning = 68,
bomb_arming_amount = 69,
};
e_input_1 input_1;//0x4
enum class e_input_2 : __int8
{
basic_zero = 0,
basic_one = 1,
basic_time = 2,
basic_global_hud_fade = 3,
NUM_ = 4,
NUM_ = 5,
NUM_ = 6,
NUM_ = 7,
NUM_ = 8,
NUM_ = 9,
NUM_ = 10,
NUM_ = 11,
NUM_ = 12,
NUM_ = 13,
NUM_ = 14,
NUM_ = 15,
unit_shield = 16,
unit_body = 17,
unit_autoaimed = 18,
unit_has_no_grenades = 19,
unit_frag_grenade_count = 20,
unit_plasma_grenade_count = 21,
unit_time_on_dpl_shield = 22,
unit_zoom_fraction = 23,
unit_camo_value = 24,
NUM_ = 25,
NUM_ = 26,
NUM_ = 27,
NUM_ = 28,
NUM_ = 29,
NUM_ = 30,
NUM_ = 31,
NUM_ = 32,
parent_shield = 33,
parent_body = 34,
NUM_ = 35,
NUM_ = 36,
NUM_ = 37,
NUM_ = 38,
NUM_ = 39,
NUM_ = 40,
NUM_ = 41,
NUM_ = 42,
NUM_ = 43,
NUM_ = 44,
NUM_ = 45,
NUM_ = 46,
NUM_ = 47,
NUM_ = 48,
weapon_clip_ammo = 49,
weapon_heat = 40,
weapon_battery = 51,
weapon_total_ammo = 52,
weapon_barrel_spin = 53,
weapon_overheated = 54,
weapon_clip_ammo_fraction = 55,
weapon_time_on_overheat = 56,
weapon_battery_fraction = 57,
weapon_locking_fraction = 58,
NUM_ = 59,
NUM_ = 60,
NUM_ = 61,
NUM_ = 62,
NUM_ = 63,
NUM_ = 64,
NUM_ = 65,
user_score_fraction = 66,
other_user_score_fraction = 67,
user_winning = 68,
bomb_arming_amount = 69,
};
e_input_2 input_2;//0x5
enum class e_input_3 : __int8
{
basic_zero = 0,
basic_one = 1,
basic_time = 2,
basic_global_hud_fade = 3,
NUM_ = 4,
NUM_ = 5,
NUM_ = 6,
NUM_ = 7,
NUM_ = 8,
NUM_ = 9,
NUM_ = 10,
NUM_ = 11,
NUM_ = 12,
NUM_ = 13,
NUM_ = 14,
NUM_ = 15,
unit_shield = 16,
unit_body = 17,
unit_autoaimed = 18,
unit_has_no_grenades = 19,
unit_frag_grenade_count = 20,
unit_plasma_grenade_count = 21,
unit_time_on_dpl_shield = 22,
unit_zoom_fraction = 23,
unit_camo_value = 24,
NUM_ = 25,
NUM_ = 26,
NUM_ = 27,
NUM_ = 28,
NUM_ = 29,
NUM_ = 30,
NUM_ = 31,
NUM_ = 32,
parent_shield = 33,
parent_body = 34,
NUM_ = 35,
NUM_ = 36,
NUM_ = 37,
NUM_ = 38,
NUM_ = 39,
NUM_ = 40,
NUM_ = 41,
NUM_ = 42,
NUM_ = 43,
NUM_ = 44,
NUM_ = 45,
NUM_ = 46,
NUM_ = 47,
NUM_ = 48,
weapon_clip_ammo = 49,
weapon_heat = 40,
weapon_battery = 51,
weapon_total_ammo = 52,
weapon_barrel_spin = 53,
weapon_overheated = 54,
weapon_clip_ammo_fraction = 55,
weapon_time_on_overheat = 56,
weapon_battery_fraction = 57,
weapon_locking_fraction = 58,
NUM_ = 59,
NUM_ = 60,
NUM_ = 61,
NUM_ = 62,
NUM_ = 63,
NUM_ = 64,
NUM_ = 65,
user_score_fraction = 66,
other_user_score_fraction = 67,
user_winning = 68,
bomb_arming_amount = 69,
};
e_input_3 input_3;//0x6
enum class e_input_4 : __int8
{
basic_zero = 0,
basic_one = 1,
basic_time = 2,
basic_global_hud_fade = 3,
NUM_ = 4,
NUM_ = 5,
NUM_ = 6,
NUM_ = 7,
NUM_ = 8,
NUM_ = 9,
NUM_ = 10,
NUM_ = 11,
NUM_ = 12,
NUM_ = 13,
NUM_ = 14,
NUM_ = 15,
unit_shield = 16,
unit_body = 17,
unit_autoaimed = 18,
unit_has_no_grenades = 19,
unit_frag_grenade_count = 20,
unit_plasma_grenade_count = 21,
unit_time_on_dpl_shield = 22,
unit_zoom_fraction = 23,
unit_camo_value = 24,
NUM_ = 25,
NUM_ = 26,
NUM_ = 27,
NUM_ = 28,
NUM_ = 29,
NUM_ = 30,
NUM_ = 31,
NUM_ = 32,
parent_shield = 33,
parent_body = 34,
NUM_ = 35,
NUM_ = 36,
NUM_ = 37,
NUM_ = 38,
NUM_ = 39,
NUM_ = 40,
NUM_ = 41,
NUM_ = 42,
NUM_ = 43,
NUM_ = 44,
NUM_ = 45,
NUM_ = 46,
NUM_ = 47,
NUM_ = 48,
weapon_clip_ammo = 49,
weapon_heat = 40,
weapon_battery = 51,
weapon_total_ammo = 52,
weapon_barrel_spin = 53,
weapon_overheated = 54,
weapon_clip_ammo_fraction = 55,
weapon_time_on_overheat = 56,
weapon_battery_fraction = 57,
weapon_locking_fraction = 58,
NUM_ = 59,
NUM_ = 60,
NUM_ = 61,
NUM_ = 62,
NUM_ = 63,
NUM_ = 64,
NUM_ = 65,
user_score_fraction = 66,
other_user_score_fraction = 67,
user_winning = 68,
bomb_arming_amount = 69,
};
e_input_4 input_4;//0x7
enum class e_NUM_[do_draw_if]_unit_flags : __int16
{
default = FLAG(0),
grenade_type_is_none = FLAG(1),
grenade_type_is_frag = FLAG(2),
grenade_type_is_plasma = FLAG(3),
unit_is_single_wielding = FLAG(4),
unit_is_dual_wielding = FLAG(5),
unit_is_unzoomed = FLAG(6),
unit_is_zoomed_level_1 = FLAG(7),
unit_is_zoomed_level_2 = FLAG(8),
grenades_disabled = FLAG(9),
binoculars_enabled = FLAG(10),
motion_sensor_enabled = FLAG(11),
shield_enabled = FLAG(12),
dervish = FLAG(13),
};
e_NUM_[do_draw_if]_unit_flags NUM_[do_draw_if]_unit_flags;//0x8
enum class e_NUM_[do_draw_if]_extra_flags : __int8
{
autoaim__friendly = FLAG(0),
autoaim__plasma = FLAG(1),
autoaim__headshot = FLAG(2),
autoaim__vulnerable = FLAG(3),
autoaim__invincible = FLAG(4),
};
e_NUM_[do_draw_if]_extra_flags NUM_[do_draw_if]_extra_flags;//0xA
enum class e_NUM_[do_draw_if]_weapon_flags : __int16
{
primary_weapon = FLAG(0),
secondary_weapon = FLAG(1),
backpack_weapon = FLAG(2),
age_below_cutoff = FLAG(3),
clip_below_cutoff = FLAG(4),
total_below_cutoff = FLAG(5),
overheated = FLAG(6),
out_of_ammo = FLAG(7),
lock_target_available = FLAG(8),
locking = FLAG(9),
locked = FLAG(10),
};
e_NUM_[do_draw_if]_weapon_flags NUM_[do_draw_if]_weapon_flags;//0xB
enum class e_NUM_[do_draw_if]_game_engine_state_flags : __int16
{
campaign_solo = FLAG(0),
campaign_coop = FLAG(1),
free_for_all = FLAG(2),
team_game = FLAG(3),
user_leading = FLAG(4),
user_not_leading = FLAG(5),
timed_game = FLAG(6),
untimed_game = FLAG(7),
other_score_valid = FLAG(8),
other_score_invalid = FLAG(9),
player_is_arming_bomb = FLAG(10),
player_talking = FLAG(11),
};
e_NUM_[do_draw_if]_game_engine_state_flags NUM_[do_draw_if]_game_engine_state_flags;//0xD
enum class e_NUM_[dont_draw_if]_unit_flags : __int16
{
default = FLAG(0),
grenade_type_is_none = FLAG(1),
grenade_type_is_frag = FLAG(2),
grenade_type_is_plasma = FLAG(3),
unit_is_single_wielding = FLAG(4),
unit_is_dual_wielding = FLAG(5),
unit_is_unzoomed = FLAG(6),
unit_is_zoomed_level_1 = FLAG(7),
unit_is_zoomed_level_2 = FLAG(8),
grenades_disabled = FLAG(9),
binoculars_enabled = FLAG(10),
motion_sensor_enabled = FLAG(11),
shield_enabled = FLAG(12),
dervish = FLAG(13),
};
e_NUM_[dont_draw_if]_unit_flags NUM_[dont_draw_if]_unit_flags;//0xF
enum class e_NUM_[dont_draw_if]_extra_flags : __int8
{
autoaim__friendly = FLAG(0),
autoaim__plasma = FLAG(1),
autoaim__headshot = FLAG(2),
autoaim__vulnerable = FLAG(3),
autoaim__invincible = FLAG(4),
};
e_NUM_[dont_draw_if]_extra_flags NUM_[dont_draw_if]_extra_flags;//0x11
enum class e_NUM_[dont_draw_if]_weapon_flags : __int16
{
primary_weapon = FLAG(0),
secondary_weapon = FLAG(1),
backpack_weapon = FLAG(2),
age_below_cutoff = FLAG(3),
clip_below_cutoff = FLAG(4),
total_below_cutoff = FLAG(5),
overheated = FLAG(6),
out_of_ammo = FLAG(7),
lock_target_available = FLAG(8),
locking = FLAG(9),
locked = FLAG(10),
};
e_NUM_[dont_draw_if]_weapon_flags NUM_[dont_draw_if]_weapon_flags;//0x12
enum class e_NUM_[dont_draw_if]_game_engine_state_flags : __int16
{
campaign_solo = FLAG(0),
campaign_coop = FLAG(1),
free_for_all = FLAG(2),
team_game = FLAG(3),
user_leading = FLAG(4),
user_not_leading = FLAG(5),
timed_game = FLAG(6),
untimed_game = FLAG(7),
other_score_valid = FLAG(8),
other_score_invalid = FLAG(9),
player_is_arming_bomb = FLAG(10),
player_talking = FLAG(11),
};
e_NUM_[dont_draw_if]_game_engine_state_flags NUM_[dont_draw_if]_game_engine_state_flags;//0x14
__int16 age_cutoff;//0x16
__int16 clip_cutoff;//0x18
__int16 total_cutoff;//0x1A
enum class e_anchor : __int16
{
health_and_shield = 0,
weapon_hud = 1,
motion_sensor = 2,
scoreboard = 3,
crosshair = 4,
lockon_target = 5,
};
e_anchor anchor;//0x1C
enum class e_flags : __int16
{
string_is_a_number = FLAG(0),
force_2digit_number = FLAG(1),
force_3digit_number = FLAG(2),
talking_player_hack = FLAG(3),
};
e_flags flags;//0x1E
tag_reference shader;//0x20
string_id string;//0x28
enum class e_justification : __int16
{
left = 0,
center = 1,
right = 2,
};
e_justification justification;//0x2C
enum class e_fullscreen_font_index : __int16
{
default = 0,
number_font = 1,
};
e_fullscreen_font_index fullscreen_font_index;//0x2E
enum class e_halfscreen_font_index : __int16
{
default = 0,
number_font = 1,
};
e_halfscreen_font_index halfscreen_font_index;//0x30
enum class e_quarterscreen_font_index : __int16
{
default = 0,
number_font = 1,
};
e_quarterscreen_font_index quarterscreen_font_index;//0x32
float fullscreen_scale;//0x34
float halfscreen_scale;//0x38
float quarterscreen_scale;//0x3C
__int16 fullscreen_offset_x;//0x40
__int16 fullscreen_offset_y;//0x42
__int16 halfscreen_offset_x;//0x44
__int16 halfscreen_offset_y;//0x46
__int16 quarterscreen_offset_x;//0x48
__int16 quarterscreen_offset_y;//0x4A
struct s_effect_block
{
enum class e_flags : __int32
{
apply_scale = FLAG(0),
apply_theta = FLAG(1),
apply_offset = FLAG(2),
};
e_flags flags;//0x0
string_id input_name;//0x4
string_id range_name;//0x8
float time_period_in_seconds;//0xC
struct s_function_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_function_block,0x1);
tag_block<s_function_block> function;//0x10
string_id input_name;//0x18
string_id range_name;//0x1C
float time_period_in_seconds;//0x20
struct s_function_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_function_block,0x1);
tag_block<s_function_block> function;//0x24
string_id input_name;//0x2C
string_id range_name;//0x30
float time_period_in_seconds;//0x34
struct s_function_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_function_block,0x1);
tag_block<s_function_block> function;//0x38
string_id input_name;//0x40
string_id range_name;//0x44
float time_period_in_seconds;//0x48
struct s_function_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_function_block,0x1);
tag_block<s_function_block> function;//0x4C
string_id input_name;//0x54
string_id range_name;//0x58
float time_period_in_seconds;//0x5C
struct s_function_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_function_block,0x1);
tag_block<s_function_block> function;//0x60
};
TAG_BLOCK_SIZE_ASSERT(s_effect_block,0x68);
tag_block<s_effect_block> effect;//0x4C
};
TAG_BLOCK_SIZE_ASSERT(s_numerical_elements_block,0x54);
tag_block<s_numerical_elements_block> numerical_elements;//0x10
__int16 low_clip_cutoff;//0x18
__int16 low_ammo_cutoff;//0x1A
float age_cutoff;//0x1C
struct s_unknown98_block
{
string_id name;//0x0
enum class e_input_1 : __int8
{
basic_zero = 0,
basic_one = 1,
basic_time = 2,
basic_global_hud_fade = 3,
NUM_ = 4,
NUM_ = 5,
NUM_ = 6,
NUM_ = 7,
NUM_ = 8,
NUM_ = 9,
NUM_ = 10,
NUM_ = 11,
NUM_ = 12,
NUM_ = 13,
NUM_ = 14,
NUM_ = 15,
unit_shield = 16,
unit_body = 17,
unit_autoaimed = 18,
unit_has_no_grenades = 19,
unit_frag_grenade_count = 20,
unit_plasma_grenade_count = 21,
unit_time_on_dpl_shield = 22,
unit_zoom_fraction = 23,
unit_camo_value = 24,
NUM_ = 25,
NUM_ = 26,
NUM_ = 27,
NUM_ = 28,
NUM_ = 29,
NUM_ = 30,
NUM_ = 31,
NUM_ = 32,
parent_shield = 33,
parent_body = 34,
NUM_ = 35,
NUM_ = 36,
NUM_ = 37,
NUM_ = 38,
NUM_ = 39,
NUM_ = 40,
NUM_ = 41,
NUM_ = 42,
NUM_ = 43,
NUM_ = 44,
NUM_ = 45,
NUM_ = 46,
NUM_ = 47,
NUM_ = 48,
weapon_clip_ammo = 49,
weapon_heat = 40,
weapon_battery = 51,
weapon_total_ammo = 52,
weapon_barrel_spin = 53,
weapon_overheated = 54,
weapon_clip_ammo_fraction = 55,
weapon_time_on_overheat = 56,
weapon_battery_fraction = 57,
weapon_locking_fraction = 58,
NUM_ = 59,
NUM_ = 60,
NUM_ = 61,
NUM_ = 62,
NUM_ = 63,
NUM_ = 64,
NUM_ = 65,
user_score_fraction = 66,
other_user_score_fraction = 67,
user_winning = 68,
bomb_arming_amount = 69,
};
e_input_1 input_1;//0x4
enum class e_input_2 : __int8
{
basic_zero = 0,
basic_one = 1,
basic_time = 2,
basic_global_hud_fade = 3,
NUM_ = 4,
NUM_ = 5,
NUM_ = 6,
NUM_ = 7,
NUM_ = 8,
NUM_ = 9,
NUM_ = 10,
NUM_ = 11,
NUM_ = 12,
NUM_ = 13,
NUM_ = 14,
NUM_ = 15,
unit_shield = 16,
unit_body = 17,
unit_autoaimed = 18,
unit_has_no_grenades = 19,
unit_frag_grenade_count = 20,
unit_plasma_grenade_count = 21,
unit_time_on_dpl_shield = 22,
unit_zoom_fraction = 23,
unit_camo_value = 24,
NUM_ = 25,
NUM_ = 26,
NUM_ = 27,
NUM_ = 28,
NUM_ = 29,
NUM_ = 30,
NUM_ = 31,
NUM_ = 32,
parent_shield = 33,
parent_body = 34,
NUM_ = 35,
NUM_ = 36,
NUM_ = 37,
NUM_ = 38,
NUM_ = 39,
NUM_ = 40,
NUM_ = 41,
NUM_ = 42,
NUM_ = 43,
NUM_ = 44,
NUM_ = 45,
NUM_ = 46,
NUM_ = 47,
NUM_ = 48,
weapon_clip_ammo = 49,
weapon_heat = 40,
weapon_battery = 51,
weapon_total_ammo = 52,
weapon_barrel_spin = 53,
weapon_overheated = 54,
weapon_clip_ammo_fraction = 55,
weapon_time_on_overheat = 56,
weapon_battery_fraction = 57,
weapon_locking_fraction = 58,
NUM_ = 59,
NUM_ = 60,
NUM_ = 61,
NUM_ = 62,
NUM_ = 63,
NUM_ = 64,
NUM_ = 65,
user_score_fraction = 66,
other_user_score_fraction = 67,
user_winning = 68,
bomb_arming_amount = 69,
};
e_input_2 input_2;//0x5
enum class e_input_3 : __int8
{
basic_zero = 0,
basic_one = 1,
basic_time = 2,
basic_global_hud_fade = 3,
NUM_ = 4,
NUM_ = 5,
NUM_ = 6,
NUM_ = 7,
NUM_ = 8,
NUM_ = 9,
NUM_ = 10,
NUM_ = 11,
NUM_ = 12,
NUM_ = 13,
NUM_ = 14,
NUM_ = 15,
unit_shield = 16,
unit_body = 17,
unit_autoaimed = 18,
unit_has_no_grenades = 19,
unit_frag_grenade_count = 20,
unit_plasma_grenade_count = 21,
unit_time_on_dpl_shield = 22,
unit_zoom_fraction = 23,
unit_camo_value = 24,
NUM_ = 25,
NUM_ = 26,
NUM_ = 27,
NUM_ = 28,
NUM_ = 29,
NUM_ = 30,
NUM_ = 31,
NUM_ = 32,
parent_shield = 33,
parent_body = 34,
NUM_ = 35,
NUM_ = 36,
NUM_ = 37,
NUM_ = 38,
NUM_ = 39,
NUM_ = 40,
NUM_ = 41,
NUM_ = 42,
NUM_ = 43,
NUM_ = 44,
NUM_ = 45,
NUM_ = 46,
NUM_ = 47,
NUM_ = 48,
weapon_clip_ammo = 49,
weapon_heat = 40,
weapon_battery = 51,
weapon_total_ammo = 52,
weapon_barrel_spin = 53,
weapon_overheated = 54,
weapon_clip_ammo_fraction = 55,
weapon_time_on_overheat = 56,
weapon_battery_fraction = 57,
weapon_locking_fraction = 58,
NUM_ = 59,
NUM_ = 60,
NUM_ = 61,
NUM_ = 62,
NUM_ = 63,
NUM_ = 64,
NUM_ = 65,
user_score_fraction = 66,
other_user_score_fraction = 67,
user_winning = 68,
bomb_arming_amount = 69,
};
e_input_3 input_3;//0x6
enum class e_input_4 : __int8
{
basic_zero = 0,
basic_one = 1,
basic_time = 2,
basic_global_hud_fade = 3,
NUM_ = 4,
NUM_ = 5,
NUM_ = 6,
NUM_ = 7,
NUM_ = 8,
NUM_ = 9,
NUM_ = 10,
NUM_ = 11,
NUM_ = 12,
NUM_ = 13,
NUM_ = 14,
NUM_ = 15,
unit_shield = 16,
unit_body = 17,
unit_autoaimed = 18,
unit_has_no_grenades = 19,
unit_frag_grenade_count = 20,
unit_plasma_grenade_count = 21,
unit_time_on_dpl_shield = 22,
unit_zoom_fraction = 23,
unit_camo_value = 24,
NUM_ = 25,
NUM_ = 26,
NUM_ = 27,
NUM_ = 28,
NUM_ = 29,
NUM_ = 30,
NUM_ = 31,
NUM_ = 32,
parent_shield = 33,
parent_body = 34,
NUM_ = 35,
NUM_ = 36,
NUM_ = 37,
NUM_ = 38,
NUM_ = 39,
NUM_ = 40,
NUM_ = 41,
NUM_ = 42,
NUM_ = 43,
NUM_ = 44,
NUM_ = 45,
NUM_ = 46,
NUM_ = 47,
NUM_ = 48,
weapon_clip_ammo = 49,
weapon_heat = 40,
weapon_battery = 51,
weapon_total_ammo = 52,
weapon_barrel_spin = 53,
weapon_overheated = 54,
weapon_clip_ammo_fraction = 55,
weapon_time_on_overheat = 56,
weapon_battery_fraction = 57,
weapon_locking_fraction = 58,
NUM_ = 59,
NUM_ = 60,
NUM_ = 61,
NUM_ = 62,
NUM_ = 63,
NUM_ = 64,
NUM_ = 65,
user_score_fraction = 66,
other_user_score_fraction = 67,
user_winning = 68,
bomb_arming_amount = 69,
};
e_input_4 input_4;//0x7
enum class e_NUM_[do_draw_if]_unit_flags : __int16
{
default = FLAG(0),
grenade_type_is_none = FLAG(1),
grenade_type_is_frag = FLAG(2),
grenade_type_is_plasma = FLAG(3),
unit_is_single_wielding = FLAG(4),
unit_is_dual_wielding = FLAG(5),
unit_is_unzoomed = FLAG(6),
unit_is_zoomed_level_1 = FLAG(7),
unit_is_zoomed_level_2 = FLAG(8),
grenades_disabled = FLAG(9),
binoculars_enabled = FLAG(10),
motion_sensor_enabled = FLAG(11),
shield_enabled = FLAG(12),
dervish = FLAG(13),
};
e_NUM_[do_draw_if]_unit_flags NUM_[do_draw_if]_unit_flags;//0x8
enum class e_NUM_[do_draw_if]_extra_flags : __int8
{
autoaim__friendly = FLAG(0),
autoaim__plasma = FLAG(1),
autoaim__headshot = FLAG(2),
autoaim__vulnerable = FLAG(3),
autoaim__invincible = FLAG(4),
};
e_NUM_[do_draw_if]_extra_flags NUM_[do_draw_if]_extra_flags;//0xA
enum class e_NUM_[do_draw_if]_weapon_flags : __int16
{
primary_weapon = FLAG(0),
secondary_weapon = FLAG(1),
backpack_weapon = FLAG(2),
age_below_cutoff = FLAG(3),
clip_below_cutoff = FLAG(4),
total_below_cutoff = FLAG(5),
overheated = FLAG(6),
out_of_ammo = FLAG(7),
lock_target_available = FLAG(8),
locking = FLAG(9),
locked = FLAG(10),
};
e_NUM_[do_draw_if]_weapon_flags NUM_[do_draw_if]_weapon_flags;//0xB
enum class e_NUM_[do_draw_if]_game_engine_state_flags : __int16
{
campaign_solo = FLAG(0),
campaign_coop = FLAG(1),
free_for_all = FLAG(2),
team_game = FLAG(3),
user_leading = FLAG(4),
user_not_leading = FLAG(5),
timed_game = FLAG(6),
untimed_game = FLAG(7),
other_score_valid = FLAG(8),
other_score_invalid = FLAG(9),
player_is_arming_bomb = FLAG(10),
player_talking = FLAG(11),
};
e_NUM_[do_draw_if]_game_engine_state_flags NUM_[do_draw_if]_game_engine_state_flags;//0xD
enum class e_NUM_[dont_draw_if]_unit_flags : __int16
{
default = FLAG(0),
grenade_type_is_none = FLAG(1),
grenade_type_is_frag = FLAG(2),
grenade_type_is_plasma = FLAG(3),
unit_is_single_wielding = FLAG(4),
unit_is_dual_wielding = FLAG(5),
unit_is_unzoomed = FLAG(6),
unit_is_zoomed_level_1 = FLAG(7),
unit_is_zoomed_level_2 = FLAG(8),
grenades_disabled = FLAG(9),
binoculars_enabled = FLAG(10),
motion_sensor_enabled = FLAG(11),
shield_enabled = FLAG(12),
dervish = FLAG(13),
};
e_NUM_[dont_draw_if]_unit_flags NUM_[dont_draw_if]_unit_flags;//0xF
enum class e_NUM_[dont_draw_if]_extra_flags : __int8
{
autoaim__friendly = FLAG(0),
autoaim__plasma = FLAG(1),
autoaim__headshot = FLAG(2),
autoaim__vulnerable = FLAG(3),
autoaim__invincible = FLAG(4),
};
e_NUM_[dont_draw_if]_extra_flags NUM_[dont_draw_if]_extra_flags;//0x11
enum class e_NUM_[dont_draw_if]_weapon_flags : __int16
{
primary_weapon = FLAG(0),
secondary_weapon = FLAG(1),
backpack_weapon = FLAG(2),
age_below_cutoff = FLAG(3),
clip_below_cutoff = FLAG(4),
total_below_cutoff = FLAG(5),
overheated = FLAG(6),
out_of_ammo = FLAG(7),
lock_target_available = FLAG(8),
locking = FLAG(9),
locked = FLAG(10),
};
e_NUM_[dont_draw_if]_weapon_flags NUM_[dont_draw_if]_weapon_flags;//0x12
enum class e_NUM_[dont_draw_if]_game_engine_state_flags : __int16
{
campaign_solo = FLAG(0),
campaign_coop = FLAG(1),
free_for_all = FLAG(2),
team_game = FLAG(3),
user_leading = FLAG(4),
user_not_leading = FLAG(5),
timed_game = FLAG(6),
untimed_game = FLAG(7),
other_score_valid = FLAG(8),
other_score_invalid = FLAG(9),
player_is_arming_bomb = FLAG(10),
player_talking = FLAG(11),
};
e_NUM_[dont_draw_if]_game_engine_state_flags NUM_[dont_draw_if]_game_engine_state_flags;//0x14
__int16 age_cutoff;//0x16
__int16 clip_cutoff;//0x18
__int16 total_cutoff;//0x1A
enum class e_anchor : __int16
{
health_and_shield = 0,
weapon_hud = 1,
motion_sensor = 2,
scoreboard = 3,
crosshair = 4,
lockon_target = 5,
};
e_anchor anchor;//0x1C
enum class e_flags : __int16
{
unused = FLAG(0),
};
e_flags flags;//0x1E
tag_reference bitmap;//0x20
tag_reference fullscreen_effect;//0x28
tag_reference halfscreen_effect;//0x30
tag_reference quarterscreen_effect;//0x38
unsigned __int8 fullscreen;//0x40
unsigned __int8 halfscreen;//0x41
unsigned __int8 quarterscreen;//0x42
PAD(0x1);//0x43
__int16 fullscreen_offset_x;//0x44
__int16 fullscreen_offset_y;//0x46
__int16 halfscreen_offset_x;//0x48
__int16 halfscreen_offset_y;//0x4A
__int16 quarterscreen_offset_x;//0x4C
__int16 quarterscreen_offset_y;//0x4E
};
TAG_BLOCK_SIZE_ASSERT(s_unknown98_block,0x50);
tag_block<s_unknown98_block> unknown98;//0x20
};
TAG_GROUP_SIZE_ASSERT(s_new_hud_group_definition,0x28);
TAG_REFL_TAG_BLOCK_DEF(s_new_hud_group_definition::s_bitmap_widgets_block::s_effect_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_STRING_ID(input_name)	TAG_REFL_STRING_ID(range_name)	TAG_REFL_PROPERTY(time_period_in_seconds)	TAG_REFL_DATA_BLOCK(function)	TAG_REFL_STRING_ID(input_name)	TAG_REFL_STRING_ID(range_name)	TAG_REFL_PROPERTY(time_period_in_seconds)	TAG_REFL_DATA_BLOCK(function)	TAG_REFL_STRING_ID(input_name)	TAG_REFL_STRING_ID(range_name)	TAG_REFL_PROPERTY(time_period_in_seconds)	TAG_REFL_DATA_BLOCK(function)	TAG_REFL_STRING_ID(input_name)	TAG_REFL_STRING_ID(range_name)	TAG_REFL_PROPERTY(time_period_in_seconds)	TAG_REFL_DATA_BLOCK(function)	TAG_REFL_STRING_ID(input_name)	TAG_REFL_STRING_ID(range_name)	TAG_REFL_PROPERTY(time_period_in_seconds)	TAG_REFL_DATA_BLOCK(function)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_new_hud_group_definition::s_bitmap_widgets_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(input_1)	TAG_REFL_PROPERTY(input_2)	TAG_REFL_PROPERTY(input_3)	TAG_REFL_PROPERTY(input_4)	TAG_REFL_PROPERTY(NUM_[do_draw_if]_unit_flags)	TAG_REFL_PROPERTY(NUM_[do_draw_if]_extra_flags)	TAG_REFL_PROPERTY(NUM_[do_draw_if]_weapon_flags)	TAG_REFL_PROPERTY(NUM_[do_draw_if]_game_engine_state_flags)	TAG_REFL_PROPERTY(NUM_[dont_draw_if]_unit_flags)	TAG_REFL_PROPERTY(NUM_[dont_draw_if]_extra_flags)	TAG_REFL_PROPERTY(NUM_[dont_draw_if]_weapon_flags)	TAG_REFL_PROPERTY(NUM_[dont_draw_if]_game_engine_state_flags)	TAG_REFL_PROPERTY(age_cutoff)	TAG_REFL_PROPERTY(clip_cutoff)	TAG_REFL_PROPERTY(total_cutoff)	TAG_REFL_PROPERTY(anchor)	TAG_REFL_PROPERTY(flags)	TAG_REFL_TAG_REFERENCE(bitmap)	TAG_REFL_TAG_REFERENCE(shader)	TAG_REFL_PROPERTY(fullscreen_sequence_index)	TAG_REFL_PROPERTY(halfscreen_sequence_index)	TAG_REFL_PROPERTY(quarterscreen_sequence_index)	TAG_REFL_PROPERTY(fullscreen_offset_x)	TAG_REFL_PROPERTY(fullscreen_offset_y)	TAG_REFL_PROPERTY(halfscreen_offset_x)	TAG_REFL_PROPERTY(halfscreen_offset_y)	TAG_REFL_PROPERTY(quarterscreen_offset_x)	TAG_REFL_PROPERTY(quarterscreen_offset_y)	TAG_REFL_PROPERTY(fullscreen_registration_point_x)	TAG_REFL_PROPERTY(fullscreen_registration_point_y)	TAG_REFL_PROPERTY(halfscreen_registration_point_x)	TAG_REFL_PROPERTY(halfscreen_registration_point_y)	TAG_REFL_PROPERTY(quarterscreen_registration_point_x)	TAG_REFL_PROPERTY(quarterscreen_registration_point_y)	TAG_REFL_TAG_BLOCK(effect)	TAG_REFL_PROPERTY(special_hud_type)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_new_hud_group_definition::s_numerical_elements_block::s_effect_block::s_function_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_new_hud_group_definition::s_numerical_elements_block::s_effect_block::s_function_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_new_hud_group_definition::s_numerical_elements_block::s_effect_block::s_function_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_new_hud_group_definition::s_numerical_elements_block::s_effect_block::s_function_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_new_hud_group_definition::s_numerical_elements_block::s_effect_block::s_function_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_new_hud_group_definition::s_numerical_elements_block::s_effect_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_STRING_ID(input_name)	TAG_REFL_STRING_ID(range_name)	TAG_REFL_PROPERTY(time_period_in_seconds)	TAG_REFL_TAG_BLOCK(function)	TAG_REFL_STRING_ID(input_name)	TAG_REFL_STRING_ID(range_name)	TAG_REFL_PROPERTY(time_period_in_seconds)	TAG_REFL_TAG_BLOCK(function)	TAG_REFL_STRING_ID(input_name)	TAG_REFL_STRING_ID(range_name)	TAG_REFL_PROPERTY(time_period_in_seconds)	TAG_REFL_TAG_BLOCK(function)	TAG_REFL_STRING_ID(input_name)	TAG_REFL_STRING_ID(range_name)	TAG_REFL_PROPERTY(time_period_in_seconds)	TAG_REFL_TAG_BLOCK(function)	TAG_REFL_STRING_ID(input_name)	TAG_REFL_STRING_ID(range_name)	TAG_REFL_PROPERTY(time_period_in_seconds)	TAG_REFL_TAG_BLOCK(function)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_new_hud_group_definition::s_numerical_elements_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(input_1)	TAG_REFL_PROPERTY(input_2)	TAG_REFL_PROPERTY(input_3)	TAG_REFL_PROPERTY(input_4)	TAG_REFL_PROPERTY(NUM_[do_draw_if]_unit_flags)	TAG_REFL_PROPERTY(NUM_[do_draw_if]_extra_flags)	TAG_REFL_PROPERTY(NUM_[do_draw_if]_weapon_flags)	TAG_REFL_PROPERTY(NUM_[do_draw_if]_game_engine_state_flags)	TAG_REFL_PROPERTY(NUM_[dont_draw_if]_unit_flags)	TAG_REFL_PROPERTY(NUM_[dont_draw_if]_extra_flags)	TAG_REFL_PROPERTY(NUM_[dont_draw_if]_weapon_flags)	TAG_REFL_PROPERTY(NUM_[dont_draw_if]_game_engine_state_flags)	TAG_REFL_PROPERTY(age_cutoff)	TAG_REFL_PROPERTY(clip_cutoff)	TAG_REFL_PROPERTY(total_cutoff)	TAG_REFL_PROPERTY(anchor)	TAG_REFL_PROPERTY(flags)	TAG_REFL_TAG_REFERENCE(shader)	TAG_REFL_STRING_ID(string)	TAG_REFL_PROPERTY(justification)	TAG_REFL_PROPERTY(fullscreen_font_index)	TAG_REFL_PROPERTY(halfscreen_font_index)	TAG_REFL_PROPERTY(quarterscreen_font_index)	TAG_REFL_PROPERTY(fullscreen_scale)	TAG_REFL_PROPERTY(halfscreen_scale)	TAG_REFL_PROPERTY(quarterscreen_scale)	TAG_REFL_PROPERTY(fullscreen_offset_x)	TAG_REFL_PROPERTY(fullscreen_offset_y)	TAG_REFL_PROPERTY(halfscreen_offset_x)	TAG_REFL_PROPERTY(halfscreen_offset_y)	TAG_REFL_PROPERTY(quarterscreen_offset_x)	TAG_REFL_PROPERTY(quarterscreen_offset_y)	TAG_REFL_TAG_BLOCK(effect)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_new_hud_group_definition::s_unknown98_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(input_1)	TAG_REFL_PROPERTY(input_2)	TAG_REFL_PROPERTY(input_3)	TAG_REFL_PROPERTY(input_4)	TAG_REFL_PROPERTY(NUM_[do_draw_if]_unit_flags)	TAG_REFL_PROPERTY(NUM_[do_draw_if]_extra_flags)	TAG_REFL_PROPERTY(NUM_[do_draw_if]_weapon_flags)	TAG_REFL_PROPERTY(NUM_[do_draw_if]_game_engine_state_flags)	TAG_REFL_PROPERTY(NUM_[dont_draw_if]_unit_flags)	TAG_REFL_PROPERTY(NUM_[dont_draw_if]_extra_flags)	TAG_REFL_PROPERTY(NUM_[dont_draw_if]_weapon_flags)	TAG_REFL_PROPERTY(NUM_[dont_draw_if]_game_engine_state_flags)	TAG_REFL_PROPERTY(age_cutoff)	TAG_REFL_PROPERTY(clip_cutoff)	TAG_REFL_PROPERTY(total_cutoff)	TAG_REFL_PROPERTY(anchor)	TAG_REFL_PROPERTY(flags)	TAG_REFL_TAG_REFERENCE(bitmap)	TAG_REFL_TAG_REFERENCE(fullscreen_effect)	TAG_REFL_TAG_REFERENCE(halfscreen_effect)	TAG_REFL_TAG_REFERENCE(quarterscreen_effect)	TAG_REFL_PROPERTY(fullscreen)	TAG_REFL_PROPERTY(halfscreen)	TAG_REFL_PROPERTY(quarterscreen)	TAG_REFL_PROPERTY(fullscreen_offset_x)	TAG_REFL_PROPERTY(fullscreen_offset_y)	TAG_REFL_PROPERTY(halfscreen_offset_x)	TAG_REFL_PROPERTY(halfscreen_offset_y)	TAG_REFL_PROPERTY(quarterscreen_offset_x)	TAG_REFL_PROPERTY(quarterscreen_offset_y)REFL_END
TAG_REFL(s_new_hud_group_definition)	TAG_REFL_TAG_REFERENCE(do_not_use)	TAG_REFL_TAG_BLOCK(bitmap_widgets)	TAG_REFL_TAG_BLOCK(numerical_elements)	TAG_REFL_PROPERTY(low_clip_cutoff)	TAG_REFL_PROPERTY(low_ammo_cutoff)	TAG_REFL_PROPERTY(age_cutoff)	TAG_REFL_TAG_BLOCK(unknown98)REFL_END

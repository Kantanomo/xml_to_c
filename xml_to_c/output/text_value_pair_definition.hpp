#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: text_value_pair
		* group_tag : sily
 		* header size : 36
		* *********************************************************************/ 
struct s_text_value_pair_group_definition
{
enum class e_setting_catergory : __int32
{
match_round_setting = 0,
match_ctf_score_to_win = 1,
match_slayer_score_to_win_round = 2,
match_oddball_score_to_win_round = 3,
match_king_score_to_win_round = 4,
match_race_score_to_win_round = 5,
match_headhunter_score_to_win_round = 6,
match_juggernaut_score_to_win_round = 7,
match_territories_score_to_win_round = 8,
match_assault_score_to_win_round = 9,
match_round_time_limit = 10,
match_rounds_reset_map = 11,
match_tie_resolution = 12,
match_observers = 13,
match_join_in_progress = 14,
max_players = 15,
lives_per_round = 16,
respawn_time = 17,
suicide_penalty = 18,
shields = 19,
motion_sensor = 20,
invisibility = 21,
team_changing = 22,
team_scoring = 23,
friendly_fire = 24,
team_respawn_setting = 25,
betrayal_respawn_penalty = 26,
team_killer_management = 27,
slayer_bonus_points = 28,
slayer_suidcide_point_loss = 29,
slayer_death_point_loss = 30,
headhunter_moving_head_bin = 31,
headhunter_point_multiplier = 32,
headhunter_suicide_point_loss = 33,
headhunter_death_point_loss = 34,
headhunter_uncontested_bin = 35,
headhunter_speed_with_heads = 36,
headhunter_max_heads_carried = 37,
king_uncontested_hill = 38,
king_team_time_multiplier = 39,
king_moving_hill = 40,
king_extra_damage_on_hill = 41,
king_damage_resistance_on_hill = 42,
oddball_ball_spawn_count = 43,
oddball_ball_hit_damage = 44,
oddball_speed_with_ball = 45,
oddball_drivinggunning_with_ball = 46,
oddball_waypoint_to_ball = 47,
race_random_track = 48,
race_uncontested_flag = 49,
ctf_sudden_death = 50,
ctf_flag_may_be_returned = 51,
ctf_flag_at_home_to_score = 52,
ctf_flag_reset_time = 53,
ctf_speed_with_flag = 54,
ctf_flag_hit_damage = 56,
ctf_drivinggunning_with_flag = 57,
ctf_waypoint_to_own_flag = 58,
assault_game_type = 59,
assault_sudden_death = 50,
assault_detonation_time = 61,
assault_bomb_at_home_to_score = 62,
assault_arming_time = 63,
assault_speed_with_bomb = 64,
assault_bomb_hit_damage = 65,
assault_drivinggunning_with_bomb = 66,
assault_waypoint_to_own_bomb = 67,
juggernaut_betrayal_point_loss = 68,
juggernaut_juggy_extra_damage = 69,
juggernaut_infinite_ammo = 70,
juggernaut_juggy_oversheilds = 71,
juggernaut_juggy_active_camo = 72,
juggernaut_juggy_montion_sensor = 73,
territories_territory_count = 74,
vehi_respawn = 75,
vehi_primary_light_land = 76,
vehi_secondary_light_land = 77,
vehi_primary_heavy_land = 78,
vehi_primary_flying = 79,
vehi_secondary_heavy_land = 80,
vehi_primary_turret = 81,
vehi_secondary_turret = 82,
equip_weapons_on_map = 83,
equip_oversheilds_on_map = 84,
equip_active_camo_on_map = 85,
equip_grenades_on_map = 86,
equip_weapon_respawn_times = 87,
equip_starting_grenades = 88,
equip_primary_starting_equipment = 89,
uns_max_living_players = 90,
uns_teams_enabled = 91,
uns_assault_bomb_may_be_returned = 92,
uns_max_teams = 93,
uns_equip_secondary_starting_equipment = 94,
uns_assault_fuse_time = 95,
uns_juggy_movement = 96,
uns_sticky_fuse = 97,
uns_terr_contest_time = 98,
uns_terr_control_time = 99,
uns_oddb_carr_invisible = 100,
uns_king_invisible_in_hill = 101,
uns_ball_carr_dmg_resistance = 102,
uns_king_dmg_res_in_hill = 103,
uns_players_extra_dmg = 104,
uns_players_dmg_resistance = 105,
uns_ctf_carr_invisible = 106,
uns_juggy_dmg_resistance = 107,
uns_bomb_carr_dmg_resistance = 108,
uns_bomb_carr_invisible = 109,
uns_force_even_teams = 110,
};
e_setting_catergory setting_catergory;//0x0
__int32 value;//0x4
tag_reference unicode_string_list_of_options;//0x8
string_id title_text;//0x10
string_id header_text;//0x14
string_id description_text;//0x18
struct s_options_block
{
enum class e_flags : __int32
{
default = FLAG(0),
};
e_flags flags;//0x0
__int16 value;//0x4
PAD(0x2);//0x6
string_id label;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_options_block,0xC);
tag_block<s_options_block> options;//0x1C
};
TAG_GROUP_SIZE_ASSERT(s_text_value_pair_group_definition,0x24);
TAG_REFL_TAG_BLOCK_DEF(s_text_value_pair_group_definition::s_options_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(value)	TAG_REFL_STRING_ID(label)REFL_END
TAG_REFL(s_text_value_pair_group_definition)	TAG_REFL_PROPERTY(setting_catergory)	TAG_REFL_PROPERTY(value)	TAG_REFL_TAG_REFERENCE(unicode_string_list_of_options)	TAG_REFL_STRING_ID(title_text)	TAG_REFL_STRING_ID(header_text)	TAG_REFL_STRING_ID(description_text)	TAG_REFL_TAG_BLOCK(options)REFL_END

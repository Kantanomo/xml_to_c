#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: multiplayer_variant_settings_interface
		* group_tag : goof
 		* header size : 0
		* *********************************************************************/ 
struct s_multiplayer_variant_settings_interface_group_definition
{
PAD(0x18);//0x0
struct s_game_engine_settings_block
{
enum class e_setting_category : __int32
{
match_ctf = 0,
match_slayer = 1,
match_oddball = 2,
match_king = 3,
match_race = 4,
match_headhunter = 5,
match_juggernaut = 6,
match_territories = 7,
match_assault = 8,
players = 9,
obsolete = 10,
vehicles = 11,
equipment = 12,
game_ctf = 13,
game_slayer = 14,
game_oddball = 15,
game_king = 16,
game_race = 17,
game_headhunter = 18,
game_juggernaut = 19,
game_territories = 20,
game_assault = 21,
quick_options_ctf = 22,
quick_options_slayer = 23,
quick_options_oddball = 24,
quick_options_king = 25,
quick_options_race = 26,
quick_options_headhunter = 27,
quick_options_juggernaut = 28,
quick_options_territories = 29,
quick_options_assault = 30,
team_ctf = 31,
team_slayer = 32,
team_oddball = 33,
team_king = 34,
team_headhunter = 35,
team_juggernaut = 36,
team_territories = 37,
team_assault = 38,
};
e_setting_category setting_category;//0x0
PAD(0x4);//0x4
struct s_options_block
{
tag_reference value_pairs;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_options_block,0x8);
tag_block<s_options_block> options;//0x8
PAD(0x8);//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_game_engine_settings_block,0x18);
tag_block<s_game_engine_settings_block> game_engine_settings;//0x18
tag_reference default_variant_strings;//0x20
struct s_default_variants_block
{
string_id variant_name;//0x0
enum class e_variant_type : __int16
{
slayer = 0,
oddball = 1,
juggernaut = 2,
king_of_the_hill = 3,
capture_the_flag = 4,
assault = 5,
territories = 6,
};
e_variant_type variant_type;//0x4
PAD(0x2);//0x6
struct s_settings_block
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
};
TAG_BLOCK_SIZE_ASSERT(s_settings_block,0x8);
tag_block<s_settings_block> settings;//0x8
__int16 description_index;//0x10
PAD(0x2);//0x12
};
TAG_BLOCK_SIZE_ASSERT(s_default_variants_block,0x14);
tag_block<s_default_variants_block> default_variants;//0x28
PAD(0x24);//0x30
struct s_create_new_slayer_variant_block
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
};
TAG_BLOCK_SIZE_ASSERT(s_create_new_slayer_variant_block,0x8);
tag_block<s_create_new_slayer_variant_block> create_new_slayer_variant;//0x54
PAD(0xC);//0x5C
struct s_create_new_king_of_the_hill_variant_block
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
};
TAG_BLOCK_SIZE_ASSERT(s_create_new_king_of_the_hill_variant_block,0x8);
tag_block<s_create_new_king_of_the_hill_variant_block> create_new_king_of_the_hill_variant;//0x68
PAD(0x20);//0x70
struct s_create_new_oddball_variant_block
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
};
TAG_BLOCK_SIZE_ASSERT(s_create_new_oddball_variant_block,0x8);
tag_block<s_create_new_oddball_variant_block> create_new_oddball_variant;//0x90
PAD(0xC);//0x98
struct s_create_new_juggernaut_variant_block
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
};
TAG_BLOCK_SIZE_ASSERT(s_create_new_juggernaut_variant_block,0x8);
tag_block<s_create_new_juggernaut_variant_block> create_new_juggernaut_variant;//0xA4
PAD(0x20);//0xAC
struct s_create_new_capture_the_flag_variant_block
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
};
TAG_BLOCK_SIZE_ASSERT(s_create_new_capture_the_flag_variant_block,0x8);
tag_block<s_create_new_capture_the_flag_variant_block> create_new_capture_the_flag_variant;//0xCC
PAD(0xC);//0xD4
struct s_create_new_assault_variant_block
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
};
TAG_BLOCK_SIZE_ASSERT(s_create_new_assault_variant_block,0x8);
tag_block<s_create_new_assault_variant_block> create_new_assault_variant;//0xE0
PAD(0xC);//0xE8
struct s_create_new_territories_variant_block
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
};
TAG_BLOCK_SIZE_ASSERT(s_create_new_territories_variant_block,0x8);
tag_block<s_create_new_territories_variant_block> create_new_territories_variant;//0xF4
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-252);//0xFC
};
TAG_GROUP_SIZE_ASSERT(s_multiplayer_variant_settings_interface_group_definition,0x0);
TAG_REFL(s_multiplayer_variant_settings_interface_group_definition)
TAG_REFL_TAG_BLOCK_DEF(s_game_engine_settings_block)
	TAG_REFL_PROPERTY(setting_category)
TAG_REFL_TAG_BLOCK_DEF(s_options_block)
	TAG_REFL_TAG_REFERENCE(value_pairs)
REFL_END
	TAG_REFL_TAG_BLOCK(options)
REFL_END
	TAG_REFL_TAG_BLOCK(game_engine_settings)
	TAG_REFL_TAG_REFERENCE(default_variant_strings)
TAG_REFL_TAG_BLOCK_DEF(s_default_variants_block)
	TAG_REFL_STRING_ID(variant_name)
	TAG_REFL_PROPERTY(variant_type)
TAG_REFL_TAG_BLOCK_DEF(s_settings_block)
	TAG_REFL_PROPERTY(setting_catergory)
	TAG_REFL_PROPERTY(value)
REFL_END
	TAG_REFL_TAG_BLOCK(settings)
	TAG_REFL_PROPERTY(description_index)
REFL_END
	TAG_REFL_TAG_BLOCK(default_variants)
TAG_REFL_TAG_BLOCK_DEF(s_create_new_slayer_variant_block)
	TAG_REFL_PROPERTY(setting_catergory)
	TAG_REFL_PROPERTY(value)
REFL_END
	TAG_REFL_TAG_BLOCK(create_new_slayer_variant)
TAG_REFL_TAG_BLOCK_DEF(s_create_new_king_of_the_hill_variant_block)
	TAG_REFL_PROPERTY(setting_catergory)
	TAG_REFL_PROPERTY(value)
REFL_END
	TAG_REFL_TAG_BLOCK(create_new_king_of_the_hill_variant)
TAG_REFL_TAG_BLOCK_DEF(s_create_new_oddball_variant_block)
	TAG_REFL_PROPERTY(setting_catergory)
	TAG_REFL_PROPERTY(value)
REFL_END
	TAG_REFL_TAG_BLOCK(create_new_oddball_variant)
TAG_REFL_TAG_BLOCK_DEF(s_create_new_juggernaut_variant_block)
	TAG_REFL_PROPERTY(setting_catergory)
	TAG_REFL_PROPERTY(value)
REFL_END
	TAG_REFL_TAG_BLOCK(create_new_juggernaut_variant)
TAG_REFL_TAG_BLOCK_DEF(s_create_new_capture_the_flag_variant_block)
	TAG_REFL_PROPERTY(setting_catergory)
	TAG_REFL_PROPERTY(value)
REFL_END
	TAG_REFL_TAG_BLOCK(create_new_capture_the_flag_variant)
TAG_REFL_TAG_BLOCK_DEF(s_create_new_assault_variant_block)
	TAG_REFL_PROPERTY(setting_catergory)
	TAG_REFL_PROPERTY(value)
REFL_END
	TAG_REFL_TAG_BLOCK(create_new_assault_variant)
TAG_REFL_TAG_BLOCK_DEF(s_create_new_territories_variant_block)
	TAG_REFL_PROPERTY(setting_catergory)
	TAG_REFL_PROPERTY(value)
REFL_END
	TAG_REFL_TAG_BLOCK(create_new_territories_variant)
REFL_END
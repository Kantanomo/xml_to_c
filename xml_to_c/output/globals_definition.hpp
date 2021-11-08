#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: globals
		* group_tag : matg
 		* header size : 644
		* *********************************************************************/ 
struct s_globals_group_definition
{
PAD(0xAC);//0x0
enum class e_language : __int32
{
english = 0,
japanese = 1,
german = 2,
french = 3,
spanish = 4,
italian = 5,
korean = 6,
chinese = 7,
portuguese = 8,
};
e_language language;//0xAC
struct s_havok_cleanup_resources_block
{
tag_reference object_cleanup_effect;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_havok_cleanup_resources_block,0x8);
tag_block<s_havok_cleanup_resources_block> havok_cleanup_resources;//0xB0
struct s_collision_damage_block
{
tag_reference collision_damage;//0x0
float min_game_acceleration;//0x8
float max_game_acceleration;//0xC
float min_game_scale;//0x10
float max_game_scale;//0x14
float min_absolute_acceleration;//0x18
float max_absolute_acceleration;//0x1C
float min_absolute_scale;//0x20
float max_absolute_scale;//0x24
PAD(0x20);//0x28
};
TAG_BLOCK_SIZE_ASSERT(s_collision_damage_block,0x48);
tag_block<s_collision_damage_block> collision_damage;//0xB8
struct s_sound_globals_block
{
tag_reference sound_classes;//0x0
tag_reference sound_effects;//0x8
tag_reference sound_mix;//0x10
tag_reference sound_combat_dialogue_constants;//0x18
tag_referenceN sound_gestalt;//0x20
};
TAG_BLOCK_SIZE_ASSERT(s_sound_globals_block,0x24);
tag_block<s_sound_globals_block> sound_globals;//0xC0
struct s_ai_globals_block
{
float danger_broadly_facing;//0x0
PAD(0x4);//0x4
float danger_shooting_near;//0x8
PAD(0x4);//0xC
float danger_shooting_at;//0x10
PAD(0x4);//0x14
float danger_extremely_close;//0x18
PAD(0x4);//0x1C
float danger_shield_damage;//0x20
float danger_extended_shield_damage;//0x24
float danger_body_damage;//0x28
float danger_extended_body_damage;//0x2C
PAD(0x30);//0x30
tag_reference global_dialogue;//0x60
string_id default_mission_dialogue_sound_effect;//0x68
PAD(0x14);//0x6C
float jump_down;//0x80
float jump_step;//0x84
float jump_crouch;//0x88
float jump_stand;//0x8C
float jump_storey;//0x90
float jump_tower;//0x94
float max_jump_down_height_down;//0x98
float max_jump_down_height_step;//0x9C
float max_jump_down_height_crouch;//0xA0
float max_jump_down_height_stand;//0xA4
float max_jump_down_height_storey;//0xA8
float max_jump_down_height_tower;//0xAC
float hoist_step_min;//0xB0
float hoist_step_max;//0xB4
float hoist_crouch_min;//0xB8
float hoist_crouch_max;//0xBC
float hoist_stand_min;//0xC0
float hoist_stand_max;//0xC4
PAD(0x18);//0xC8
float vault_step_min;//0xE0
float vault_step_max;//0xE4
float vault_crouch_min;//0xE8
float vault_crouch_max;//0xEC
PAD(0x30);//0xF0
struct s_gravemind_properties_block
{
float minimum_retreat_time;//0x0
float ideal_retreat_time;//0x4
float maximum_retreat_time;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_gravemind_properties_block,0xC);
tag_block<s_gravemind_properties_block> gravemind_properties;//0x120
PAD(0x30);//0x128
float scary_target_threshold;//0x158
float scary_weapon_threshold;//0x15C
float player_scariness;//0x160
float berserking_actor_scariness;//0x164
};
TAG_BLOCK_SIZE_ASSERT(s_ai_globals_block,0x168);
tag_block<s_ai_globals_block> ai_globals;//0xC8
struct s_damage_table_block
{
struct s_damage_groups_block
{
string_id name;//0x0
struct s_armor_modifiers_block
{
string_id name;//0x0
float damage_multiplier;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_armor_modifiers_block,0x8);
tag_block<s_armor_modifiers_block> armor_modifiers;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_damage_groups_block,0xC);
tag_block<s_damage_groups_block> damage_groups;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_damage_table_block,0x8);
tag_block<s_damage_table_block> damage_table;//0xD0
PAD(0x8);//0xD8
struct s_sounds_block
{
tag_reference sound_obsolete;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_sounds_block,0x8);
tag_block<s_sounds_block> sounds;//0xE0
struct s_camera_block
{
tag_reference default_unit_camera_track;//0x0
float default_change_pause;//0x8
float first_person_change_pause;//0xC
float following_camera_change_pause;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_camera_block,0x14);
tag_block<s_camera_block> camera;//0xE8
struct s_player_control_block
{
float magnetism_friction;//0x0
float magnetism_adhesion;//0x4
float inconsequential_target_scale;//0x8
PAD(0xC);//0xC
float crosshair_location_x;//0x18
float crosshair_location_y;//0x1C
float seconds_to_start;//0x20
float seconds_to_full_speed;//0x24
float decay_rate;//0x28
float full_speed_multiplier;//0x2C
float pegged_magnitude;//0x30
float pegged_angular_threshold;//0x34
PAD(0x8);//0x38
float look_default_pitch_rate;//0x40
float look_default_yaw_rate;//0x44
float look_peg_threshold;//0x48
float look_yaw_acceleration_time;//0x4C
float look_yaw_acceleration_scale;//0x50
float look_pitch_acceleration_time;//0x54
float look_pitch_acceleration_scale;//0x58
float look_autoleveling_scale;//0x5C
PAD(0x8);//0x60
float gravity_scale;//0x68
__int16 unknown;//0x6C
__int16 minimum_autoleveling_ticks;//0x6E
angle minimum_angle_for_vehicle_flipping;//0x70
struct s_look_function_block
{
float scale;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_look_function_block,0x4);
tag_block<s_look_function_block> look_function;//0x74
float minimum_action_hold_time;//0x7C
};
TAG_BLOCK_SIZE_ASSERT(s_player_control_block,0x80);
tag_block<s_player_control_block> player_control;//0xF0
struct s_difficulty_block
{
float easy_enemy_damage;//0x0
float normal_enemy_damage;//0x4
float hard_enemy_damage;//0x8
float impossible_enemy_damage;//0xC
float easy_enemy_vitality;//0x10
float normal_enemy_vitality;//0x14
float hard_enemy_vitality;//0x18
float impossible_enemy_vitality;//0x1C
float easy_enemy_shield;//0x20
float normal_enemy_shield;//0x24
float hard_enemy_shield;//0x28
float impossible_enemy_shield;//0x2C
float easy_enemy_recharge;//0x30
float normal_enemy_recharge;//0x34
float hard_enemy_recharge;//0x38
float impossible_enemy_recharge;//0x3C
float easy_friend_damage;//0x40
float normal_friend_damage;//0x44
float hard_friend_damage;//0x48
float impossible_friend_damage;//0x4C
float easy_friend_vitality;//0x50
float normal_friend_vitality;//0x54
float hard_friend_vitality;//0x58
float impossible_friend_vitality;//0x5C
float easy_friend_shield;//0x60
float normal_friend_shield;//0x64
float hard_friend_shield;//0x68
float impossible_friend_shield;//0x6C
float easy_friend_recharge;//0x70
float normal_friend_recharge;//0x74
float hard_friend_recharge;//0x78
float impossible_friend_recharge;//0x7C
float easy_infection_forms;//0x80
float normal_infection_forms;//0x84
float hard_infection_forms;//0x88
float impossible_infection_forms;//0x8C
float easy_unknown;//0x90
float normal_unknown;//0x94
float hard_unknown;//0x98
float impossible_unknown;//0x9C
float easy_rate_of_fire;//0xA0
float normal_rate_of_fire;//0xA4
float hard_rate_of_fire;//0xA8
float impossible_rate_of_fire;//0xAC
float easy_projectile_error;//0xB0
float normal_projectile_error;//0xB4
float hard_projectile_error;//0xB8
float impossible_projectile_error;//0xBC
float easy_burst_error;//0xC0
float normal_burst_error;//0xC4
float hard_burst_error;//0xC8
float impossible_burst_error;//0xCC
float easy_target_delay;//0xD0
float normal_target_delay;//0xD4
float hard_target_delay;//0xD8
float impossible_target_delay;//0xDC
float easy_burst_separation;//0xE0
float normal_burst_separation;//0xE4
float hard_burst_separation;//0xE8
float impossible_burst_separation;//0xEC
float easy_target_tracking;//0xF0
float normal_target_tracking;//0xF4
float hard_target_tracking;//0xF8
float impossible_target_tracking;//0xFC
float easy_target_leading;//0x100
float normal_target_leading;//0x104
float hard_target_leading;//0x108
float impossible_target_leading;//0x10C
float easy_overcharge_chance;//0x110
float normal_overcharge_chance;//0x114
float hard_overcharge_chance;//0x118
float impossible_overcharge_chance;//0x11C
float easy_special_fire_delay;//0x120
float normal_special_fire_delay;//0x124
float hard_special_fire_delay;//0x128
float impossible_special_fire_delay;//0x12C
float easy_guidance_vs_player;//0x130
float normal_guidance_vs_player;//0x134
float hard_guidance_vs_player;//0x138
float impossible_guidance_vs_player;//0x13C
float easy_melee_delay_base;//0x140
float normal_melee_delay_base;//0x144
float hard_melee_delay_base;//0x148
float impossible_melee_delay_base;//0x14C
float easy_melee_delay_scale;//0x150
float normal_melee_delay_scale;//0x154
float hard_melee_delay_scale;//0x158
float impossible_melee_delay_scale;//0x15C
float easy_unknown;//0x160
float normal_unknown;//0x164
float hard_unknown;//0x168
float impossible_unknown;//0x16C
float easy_grenade_chance_scale;//0x170
float normal_grenade_chance_scale;//0x174
float hard_grenade_chance_scale;//0x178
float impossible_grenade_chance_scale;//0x17C
float easy_grenade_timer_scale;//0x180
float normal_grenade_timer_scale;//0x184
float hard_grenade_timer_scale;//0x188
float impossible_grenade_timer_scale;//0x18C
float easy_unknown;//0x190
float normal_unknown;//0x194
float hard_unknown;//0x198
float impossible_unknown;//0x19C
float easy_unknown;//0x1A0
float normal_unknown;//0x1A4
float hard_unknown;//0x1A8
float impossible_unknown;//0x1AC
float easy_unknown;//0x1B0
float normal_unknown;//0x1B4
float hard_unknown;//0x1B8
float impossible_unknown;//0x1BC
float easy_major_upgrade_normal;//0x1C0
float normal_major_upgrade_normal;//0x1C4
float hard_major_upgrade_normal;//0x1C8
float impossible_major_upgrade_normal;//0x1CC
float easy_major_upgrade_few;//0x1D0
float normal_major_upgrade_few;//0x1D4
float hard_major_upgrade_few;//0x1D8
float impossible_major_upgrade_few;//0x1DC
float easy_major_upgrade_many;//0x1E0
float normal_major_upgrade_many;//0x1E4
float hard_major_upgrade_many;//0x1E8
float impossible_major_upgrade_many;//0x1EC
float easy_player_vehicle_ram_chance;//0x1F0
float normal_player_vehicle_ram_chance;//0x1F4
float hard_player_vehicle_ram_chance;//0x1F8
float impossible_player_vehicle_ram_chance;//0x1FC
PAD(0x84);//0x200
};
TAG_BLOCK_SIZE_ASSERT(s_difficulty_block,0x284);
tag_block<s_difficulty_block> difficulty;//0xF8
struct s_grenades_block
{
__int16 maximum_count;//0x0
__int16 unknown;//0x2
tag_reference throwing_effect;//0x4
PAD(0x10);//0xC
tag_reference equipment;//0x1C
tag_reference projectile;//0x24
};
TAG_BLOCK_SIZE_ASSERT(s_grenades_block,0x2C);
tag_block<s_grenades_block> grenades;//0x100
struct s_rasterizer_data_block
{
tag_reference distance_attenuation;//0x0
tag_reference vector_normalization;//0x8
tag_reference gradients;//0x10
tag_reference loading_screen;//0x18
tag_reference loading_screen_sweep;//0x20
tag_reference loading_screen_spinner;//0x28
tag_reference glow;//0x30
tag_reference loading_screen_logos;//0x38
tag_reference loading_screen_tickers;//0x40
PAD(0x10);//0x48
struct s_global_vertex_shaders_block
{
tag_reference vertex_shader;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_global_vertex_shaders_block,0x8);
tag_block<s_global_vertex_shaders_block> global_vertex_shaders;//0x58
tag_reference default_2d;//0x60
tag_reference default_3d;//0x68
tag_reference default_cube_map;//0x70
tag_reference unknown;//0x78
tag_reference unknown;//0x80
tag_reference unknown;//0x88
tag_reference unknown;//0x90
tag_reference unknown;//0x98
tag_reference unknown;//0xA0
PAD(0x24);//0xA8
tag_reference global_shader;//0xCC
enum class e_flags : __int16
{
tint_edge_density = FLAG(0),
};
e_flags flags;//0xD4
__int16 unknown;//0xD6
float refraction_amount;//0xD8
float distance_falloff;//0xDC
float tint_color_red;//0xE0
float tint_color_green;//0xE4
float tint_color_blue;//0xE8
float hyper_stealth_refraction;//0xEC
float hyper_stealth_distance_falloff;//0xF0
float hyper_stealth_tint_red;//0xF4
float hyper_stealth_tint_green;//0xF8
float hyper_stealth_tint_blue;//0xFC
tag_reference unknown;//0x100
};
TAG_BLOCK_SIZE_ASSERT(s_rasterizer_data_block,0x108);
tag_block<s_rasterizer_data_block> rasterizer_data;//0x108
struct s_interface_tags_block
{
tag_reference obsolete_1;//0x0
tag_reference obsolete_2;//0x8
tag_reference screen_color_table;//0x10
tag_reference hud_color_table;//0x18
tag_reference editor_color_table;//0x20
tag_reference dialog_color_table;//0x28
tag_reference hud_globals;//0x30
tag_reference motion_sensor_sweep_bitmap;//0x38
tag_reference motion_sensor_sweep_bitmap_mask;//0x40
tag_reference multiplayer_hud_bitmap;//0x48
tag_reference unknown;//0x50
tag_reference hud_digits_definition;//0x58
tag_reference motion_sensor_blip_bitmap;//0x60
tag_reference interface_goo_map_1;//0x68
tag_reference interface_goo_map_2;//0x70
tag_reference interface_goo_map_3;//0x78
tag_reference main_menu_ui_globals;//0x80
tag_reference single_player_ui_globals;//0x88
tag_reference multiplayer_ui_globals;//0x90
};
TAG_BLOCK_SIZE_ASSERT(s_interface_tags_block,0x98);
tag_block<s_interface_tags_block> interface_tags;//0x110
struct s_weapon_list_block
{
tag_reference weapon;//0x0
PAD(0x90);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_weapon_list_block,0x98);
tag_block<s_weapon_list_block> weapon_list;//0x118
struct s_cheat_powerups_block
{
tag_reference powerup;//0x0
PAD(0x90);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_cheat_powerups_block,0x98);
tag_block<s_cheat_powerups_block> cheat_powerups;//0x120
struct s_multiplayer_information_block
{
tag_reference flag;//0x0
tag_reference unit;//0x8
struct s_vehicles_block
{
tag_reference vehicle;//0x0
PAD(0x90);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_vehicles_block,0x98);
tag_block<s_vehicles_block> vehicles;//0x10
tag_reference hill_shader;//0x18
tag_reference flag_shader;//0x20
tag_reference ball;//0x28
struct s_sounds_block
{
tag_reference sound;//0x0
PAD(0x90);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_sounds_block,0x98);
tag_block<s_sounds_block> sounds;//0x30
tag_reference in_game_text;//0x38
PAD(0x58);//0x40
};
TAG_BLOCK_SIZE_ASSERT(s_multiplayer_information_block,0x98);
tag_block<s_multiplayer_information_block> multiplayer_information;//0x128
struct s_player_information_block
{
tag_reference unit;//0x0
PAD(0x1C);//0x8
float walking_speed;//0x24
PAD(0x4);//0x28
float run_forward;//0x2C
float run_backward;//0x30
float run_sideways;//0x34
float run_acceleration;//0x38
float sneak_forward;//0x3C
float sneak_backward;//0x40
float sneak_sideways;//0x44
float sneak_acceleration;//0x48
float airborn_acceleration;//0x4C
PAD(0x10);//0x50
float grenade_origin_x;//0x60
float grenade_origin_y;//0x64
float grenade_origin_z;//0x68
PAD(0xC);//0x6C
float stun_movement_penalty;//0x78
float stun_turning_penalty;//0x7C
float stun_jumping_penalty;//0x80
float minimum_stun_time;//0x84
float maximum_stun_time;//0x88
PAD(0x8);//0x8C
float first_person_idle_time_min;//0x94
float first_person_idle_time_max;//0x98
float first_person_skip_fraction;//0x9C
PAD(0x10);//0xA0
tag_reference coop_respawn_effect;//0xB0
__int32 binoculars_zoom_count;//0xB8
float binoculars_zoom_range_min;//0xBC
float binoculars_zoom_range_max;//0xC0
tag_reference binoculars_zoom_in_sound;//0xC4
tag_reference binoculars_zoom_out_sound;//0xCC
PAD(0x10);//0xD4
tag_reference active_camouflage_on;//0xE4
tag_reference active_camouflage_off;//0xEC
tag_reference active_camouflage_error;//0xF4
tag_reference active_camouflage_ready;//0xFC
tag_reference flashlight_on;//0x104
tag_reference flashlight_off;//0x10C
tag_reference ice_cream;//0x114
};
TAG_BLOCK_SIZE_ASSERT(s_player_information_block,0x11C);
tag_block<s_player_information_block> player_information;//0x130
struct s_player_representation_block
{
tag_reference first_person_hands;//0x0
tag_reference first_person_body;//0x8
PAD(0xA0);//0x10
tag_reference third_person_unit;//0xB0
string_id third_person_unit_variant;//0xB8
};
TAG_BLOCK_SIZE_ASSERT(s_player_representation_block,0xBC);
tag_block<s_player_representation_block> player_representation;//0x138
struct s_falling_damage_block
{
PAD(0x8);//0x0
float harmful_falling_distance_min;//0x8
float harmful_falling_distance_max;//0xC
tag_reference falling_damage;//0x10
PAD(0x8);//0x18
float maximum_falling_distance;//0x20
tag_reference distance_damage;//0x24
tag_reference vehicle_environment_collision_damage;//0x2C
tag_reference vehicle_killed_unit_damage_effect;//0x34
tag_reference vehicle_collision_damage;//0x3C
tag_reference flaming_death_damage;//0x44
PAD(0x10);//0x4C
float unknown;//0x5C
float unknown;//0x60
float unknown;//0x64
};
TAG_BLOCK_SIZE_ASSERT(s_falling_damage_block,0x68);
tag_block<s_falling_damage_block> falling_damage;//0x140
struct s_old_materials_block
{
string_id new_material_name;//0x0
string_id new_general_material_name;//0x4
float ground_friction_scale;//0x8
float ground_friction_normal_k1_scale;//0xC
float ground_friction_normal_k0_scale;//0x10
float ground_depth_scale;//0x14
float ground_damp_fraction_scale;//0x18
tag_reference melee_hit_sound;//0x1C
};
TAG_BLOCK_SIZE_ASSERT(s_old_materials_block,0x24);
tag_block<s_old_materials_block> old_materials;//0x148
struct s_materials_block
{
string_id name;//0x0
string_id parent_name;//0x4
__int16 unknown;//0x8
enum class e_flags : __int16
{
flammable = FLAG(0),
biomass = FLAG(1),
};
e_flags flags;//0xA
enum class e_old_material_type : __int16
{
dirt = 0,
sand = 1,
stone = 2,
snow = 3,
wood = 4,
metal_hollow = 5,
metal_thin = 6,
metal_thick = 7,
rubber = 8,
glass = 9,
force_field = 10,
grunt = 11,
hunter_armor = 12,
hunter_skin = 13,
elite = 14,
jackal = 15,
jackal_energy_shield = 16,
engineer_skin = 17,
engineer_force_field = 18,
flood_combat_form = 19,
flood_carrier_form = 20,
cyborg_armor = 21,
cyborg_energy_shield = 22,
human_armor = 23,
human_skin = 24,
sentinel = 25,
monitor = 26,
plastic = 27,
water = 28,
leaves = 29,
elite_energy_shield = 30,
ice = 31,
hunter_shield = 32,
};
e_old_material_type old_material_type;//0xC
__int16 unknown;//0xE
string_id general_armor;//0x10
string_id specific_armor;//0x14
PAD(0x4);//0x18
float friction;//0x1C
float restitution;//0x20
float density;//0x24
tag_reference old_material_physics;//0x28
tag_reference breakable_surface;//0x30
tag_reference sound_sweetener_small;//0x38
tag_reference sound_sweetener_medium;//0x40
tag_reference sound_sweetener_large;//0x48
tag_reference sound_sweetener_rolling;//0x50
tag_reference sound_sweetener_grinding;//0x58
tag_reference sound_sweetener_melee;//0x60
tag_reference unknown;//0x68
tag_reference effect_sweetener_small;//0x70
tag_reference effect_sweetener_medium;//0x78
tag_reference effect_sweetener_large;//0x80
tag_reference effect_sweetener_rolling;//0x88
tag_reference effect_sweetener_grinding;//0x90
tag_reference effect_sweetener_melee;//0x98
tag_reference unknown;//0xA0
enum class e_sweetener_inheritance_flags : __int32
{
sound_small = FLAG(0),
sound_medium = FLAG(1),
sound_large = FLAG(2),
sound_rolling = FLAG(3),
sound_grinding = FLAG(4),
sound_melee = FLAG(4),
bit_5 = FLAG(5),
effect_small = FLAG(6),
effect_medium = FLAG(7),
effect_large = FLAG(8),
effect_rolling = FLAG(9),
effect_grinding = FLAG(10),
effect_melee = FLAG(11),
bit_12 = FLAG(5),
};
e_sweetener_inheritance_flags sweetener_inheritance_flags;//0xA8
tag_reference material_effects;//0xAC
};
TAG_BLOCK_SIZE_ASSERT(s_materials_block,0xB4);
tag_block<s_materials_block> materials;//0x150
struct s_multiplayer_ui_block
{
tag_reference random_player_names;//0x0
struct s_obsolete_profile_colors_block
{
real_color_rgb color;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_obsolete_profile_colors_block,0xC);
tag_block<s_obsolete_profile_colors_block> obsolete_profile_colors;//0x8
struct s_team_colors_block
{
real_color_rgb color;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_team_colors_block,0xC);
tag_block<s_team_colors_block> team_colors;//0x10
tag_reference team_names;//0x18
};
TAG_BLOCK_SIZE_ASSERT(s_multiplayer_ui_block,0x20);
tag_block<s_multiplayer_ui_block> multiplayer_ui;//0x158
struct s_profile_colors_block
{
real_color_rgb color;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_profile_colors_block,0xC);
tag_block<s_profile_colors_block> profile_colors;//0x160
tag_reference multiplayer_globals;//0x168
struct s_runtime_level_data_block
{
struct s_campaign_levels_block
{
__int32 campaign_id;//0x0
__int32 map_id;//0x4
string256 path;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_campaign_levels_block,0x108);
tag_block<s_campaign_levels_block> campaign_levels;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_runtime_level_data_block,0x8);
tag_block<s_runtime_level_data_block> runtime_level_data;//0x170
struct s_ui_level_data_block
{
struct s_campaigns_block
{
__int32 campaign_id;//0x0
unicode32 english_name;//0x4
unicode32 japanese_name;//0x44
unicode32 german_name;//0x84
unicode32 french_name;//0xC4
unicode32 spanish_name;//0x104
unicode32 italian_name;//0x144
unicode32 korean_name;//0x184
unicode32 chinese_name;//0x1C4
unicode32 portuguese_name;//0x204
unicode128 english_description;//0x244
unicode128 japanese_description;//0x344
unicode128 german_description;//0x444
unicode128 french_description;//0x544
unicode128 spanish_description;//0x644
unicode128 italian_description;//0x744
unicode128 korean_description;//0x844
unicode128 chinese_description;//0x944
unicode128 portuguese_description;//0xA44
};
TAG_BLOCK_SIZE_ASSERT(s_campaigns_block,0xB44);
tag_block<s_campaigns_block> campaigns;//0x0
struct s_campaign_levels_block
{
__int32 campaign_id;//0x0
__int32 map_id;//0x4
tag_reference bitmap;//0x8
unicode32 english_name;//0x10
unicode32 japanese_name;//0x50
unicode32 german_name;//0x90
unicode32 french_name;//0xD0
unicode32 spanish_name;//0x110
unicode32 italian_name;//0x150
unicode32 korean_name;//0x190
unicode32 chinese_name;//0x1D0
unicode32 portuguese_name;//0x210
unicode128 english_description;//0x250
unicode128 japanese_description;//0x350
unicode128 german_description;//0x450
unicode128 french_description;//0x550
unicode128 spanish_description;//0x650
unicode128 italian_description;//0x750
unicode128 korean_description;//0x850
unicode128 chinese_description;//0x950
unicode128 portuguese_description;//0xA50
};
TAG_BLOCK_SIZE_ASSERT(s_campaign_levels_block,0xB50);
tag_block<s_campaign_levels_block> campaign_levels;//0x8
struct s_multiplayer_levels_block
{
__int32 map_id;//0x0
tag_reference bitmap;//0x4
unicode32 english_name;//0xC
unicode32 japanese_name;//0x4C
unicode32 german_name;//0x8C
unicode32 french_name;//0xCC
unicode32 spanish_name;//0x10C
unicode32 italian_name;//0x14C
unicode32 korean_name;//0x18C
unicode32 chinese_name;//0x1CC
unicode32 portuguese_name;//0x20C
unicode128 english_description;//0x24C
unicode128 japanese_description;//0x34C
unicode128 german_description;//0x44C
unicode128 french_description;//0x54C
unicode128 spanish_description;//0x64C
unicode128 italian_description;//0x74C
unicode128 korean_description;//0x84C
unicode128 chinese_description;//0x94C
unicode128 portuguese_description;//0xA4C
string256 path;//0xB4C
__int32 sort_order;//0xC4C
enum class e_flags : __int8
{
unlockable = FLAG(1),
};
e_flags flags;//0xC50
__int8 unknown;//0xC51
__int8 unknown;//0xC52
__int8 unknown;//0xC53
unsigned __int8 max_teams_none;//0xC54
unsigned __int8 max_teams_ctf;//0xC55
unsigned __int8 max_teams_slayer;//0xC56
unsigned __int8 max_teams_oddball;//0xC57
unsigned __int8 max_teams_koth;//0xC58
unsigned __int8 max_teams_race;//0xC59
unsigned __int8 max_teams_headhunter;//0xC5A
unsigned __int8 max_teams_juggernaut;//0xC5B
unsigned __int8 max_teams_territories;//0xC5C
unsigned __int8 max_teams_assault;//0xC5D
unsigned __int8 max_teams_stub_10;//0xC5E
unsigned __int8 max_teams_stub_11;//0xC5F
unsigned __int8 max_teams_stub_12;//0xC60
unsigned __int8 max_teams_stub_13;//0xC61
unsigned __int8 max_teams_stub_14;//0xC62
unsigned __int8 max_teams_stub_15;//0xC63
};
TAG_BLOCK_SIZE_ASSERT(s_multiplayer_levels_block,0xC64);
tag_block<s_multiplayer_levels_block> multiplayer_levels;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_ui_level_data_block,0x18);
tag_block<s_ui_level_data_block> ui_level_data;//0x178
tag_reference default_global_lighting;//0x180
unsigned __int32 unknown;//0x188
unsigned __int32 unknown;//0x18C
unsigned __int32 string_count;//0x190
unsigned __int32 locale_table_size;//0x194
unsigned __int32 locale_index_table_offset;//0x198
unsigned __int32 locale_data_index_offset;//0x19C
unsigned __int32 unknown;//0x1A0
unsigned __int32 unknown;//0x1A4
unsigned __int32 unknown;//0x1A8
unsigned __int32 string_count;//0x1AC
unsigned __int32 locale_table_size;//0x1B0
unsigned __int32 locale_index_table_offset;//0x1B4
unsigned __int32 locale_data_index_offset;//0x1B8
unsigned __int32 unknown;//0x1BC
unsigned __int32 unknown;//0x1C0
unsigned __int32 unknown;//0x1C4
unsigned __int32 string_count;//0x1C8
unsigned __int32 locale_table_size;//0x1CC
unsigned __int32 locale_index_table_offset;//0x1D0
unsigned __int32 locale_data_index_offset;//0x1D4
unsigned __int32 unknown;//0x1D8
unsigned __int32 unknown;//0x1DC
unsigned __int32 unknown;//0x1E0
unsigned __int32 string_count;//0x1E4
unsigned __int32 locale_table_size;//0x1E8
unsigned __int32 locale_index_table_offset;//0x1EC
unsigned __int32 locale_data_index_offset;//0x1F0
unsigned __int32 unknown;//0x1F4
unsigned __int32 unknown;//0x1F8
unsigned __int32 unknown;//0x1FC
unsigned __int32 string_count;//0x200
unsigned __int32 locale_table_size;//0x204
unsigned __int32 locale_index_table_offset;//0x208
unsigned __int32 locale_data_index_offset;//0x20C
unsigned __int32 unknown;//0x210
unsigned __int32 unknown;//0x214
unsigned __int32 unknown;//0x218
unsigned __int32 string_count;//0x21C
unsigned __int32 locale_table_size;//0x220
unsigned __int32 locale_index_table_offset;//0x224
unsigned __int32 locale_data_index_offset;//0x228
unsigned __int32 unknown;//0x22C
unsigned __int32 unknown;//0x230
unsigned __int32 unknown;//0x234
unsigned __int32 string_count;//0x238
unsigned __int32 locale_table_size;//0x23C
unsigned __int32 locale_index_table_offset;//0x240
unsigned __int32 locale_data_index_offset;//0x244
unsigned __int32 unknown;//0x248
unsigned __int32 unknown;//0x24C
unsigned __int32 unknown;//0x250
unsigned __int32 string_count;//0x254
unsigned __int32 locale_table_size;//0x258
unsigned __int32 locale_index_table_offset;//0x25C
unsigned __int32 locale_data_index_offset;//0x260
unsigned __int32 unknown;//0x264
unsigned __int32 unknown;//0x268
unsigned __int32 unknown;//0x26C
unsigned __int32 string_count;//0x270
unsigned __int32 locale_table_size;//0x274
unsigned __int32 locale_index_table_offset;//0x278
unsigned __int32 locale_data_index_offset;//0x27C
unsigned __int32 unknown;//0x280
};
TAG_GROUP_SIZE_ASSERT(s_globals_group_definition,0x284);
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_havok_cleanup_resources_block)	TAG_REFL_TAG_REFERENCE(object_cleanup_effect)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_collision_damage_block)	TAG_REFL_TAG_REFERENCE(collision_damage)	TAG_REFL_PROPERTY(min_game_acceleration)	TAG_REFL_PROPERTY(max_game_acceleration)	TAG_REFL_PROPERTY(min_game_scale)	TAG_REFL_PROPERTY(max_game_scale)	TAG_REFL_PROPERTY(min_absolute_acceleration)	TAG_REFL_PROPERTY(max_absolute_acceleration)	TAG_REFL_PROPERTY(min_absolute_scale)	TAG_REFL_PROPERTY(max_absolute_scale)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_sound_globals_block)	TAG_REFL_TAG_REFERENCE(sound_classes)	TAG_REFL_TAG_REFERENCE(sound_effects)	TAG_REFL_TAG_REFERENCE(sound_mix)	TAG_REFL_TAG_REFERENCE(sound_combat_dialogue_constants)	TAG_REFL_TAG_REFERENCE(sound_gestalt)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_ai_globals_group_definition::s_gravemind_properties_block)	TAG_REFL_PROPERTY(minimum_retreat_time)	TAG_REFL_PROPERTY(ideal_retreat_time)	TAG_REFL_PROPERTY(maximum_retreat_time)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_ai_globals_block)	TAG_REFL_PROPERTY(danger_broadly_facing)	TAG_REFL_PROPERTY(danger_shooting_near)	TAG_REFL_PROPERTY(danger_shooting_at)	TAG_REFL_PROPERTY(danger_extremely_close)	TAG_REFL_PROPERTY(danger_shield_damage)	TAG_REFL_PROPERTY(danger_extended_shield_damage)	TAG_REFL_PROPERTY(danger_body_damage)	TAG_REFL_PROPERTY(danger_extended_body_damage)	TAG_REFL_TAG_REFERENCE(global_dialogue)	TAG_REFL_STRING_ID(default_mission_dialogue_sound_effect)	TAG_REFL_PROPERTY(jump_down)	TAG_REFL_PROPERTY(jump_step)	TAG_REFL_PROPERTY(jump_crouch)	TAG_REFL_PROPERTY(jump_stand)	TAG_REFL_PROPERTY(jump_storey)	TAG_REFL_PROPERTY(jump_tower)	TAG_REFL_PROPERTY(max_jump_down_height_down)	TAG_REFL_PROPERTY(max_jump_down_height_step)	TAG_REFL_PROPERTY(max_jump_down_height_crouch)	TAG_REFL_PROPERTY(max_jump_down_height_stand)	TAG_REFL_PROPERTY(max_jump_down_height_storey)	TAG_REFL_PROPERTY(max_jump_down_height_tower)	TAG_REFL_PROPERTY(hoist_step_min)	TAG_REFL_PROPERTY(hoist_step_max)	TAG_REFL_PROPERTY(hoist_crouch_min)	TAG_REFL_PROPERTY(hoist_crouch_max)	TAG_REFL_PROPERTY(hoist_stand_min)	TAG_REFL_PROPERTY(hoist_stand_max)	TAG_REFL_PROPERTY(vault_step_min)	TAG_REFL_PROPERTY(vault_step_max)	TAG_REFL_PROPERTY(vault_crouch_min)	TAG_REFL_PROPERTY(vault_crouch_max)	TAG_REFL_TAG_BLOCK(gravemind_properties)	TAG_REFL_PROPERTY(scary_target_threshold)	TAG_REFL_PROPERTY(scary_weapon_threshold)	TAG_REFL_PROPERTY(player_scariness)	TAG_REFL_PROPERTY(berserking_actor_scariness)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_damage_table_group_definition::s_damage_groups_group_definition::s_armor_modifiers_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(damage_multiplier)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_damage_table_group_definition::s_damage_groups_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_TAG_BLOCK(armor_modifiers)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_damage_table_block)	TAG_REFL_TAG_BLOCK(damage_groups)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_sounds_block)	TAG_REFL_TAG_REFERENCE(sound_obsolete)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_camera_block)	TAG_REFL_TAG_REFERENCE(default_unit_camera_track)	TAG_REFL_PROPERTY(default_change_pause)	TAG_REFL_PROPERTY(first_person_change_pause)	TAG_REFL_PROPERTY(following_camera_change_pause)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_player_control_group_definition::s_look_function_block)	TAG_REFL_PROPERTY(scale)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_player_control_block)	TAG_REFL_PROPERTY(magnetism_friction)	TAG_REFL_PROPERTY(magnetism_adhesion)	TAG_REFL_PROPERTY(inconsequential_target_scale)	TAG_REFL_PROPERTY(crosshair_location_x)	TAG_REFL_PROPERTY(crosshair_location_y)	TAG_REFL_PROPERTY(seconds_to_start)	TAG_REFL_PROPERTY(seconds_to_full_speed)	TAG_REFL_PROPERTY(decay_rate)	TAG_REFL_PROPERTY(full_speed_multiplier)	TAG_REFL_PROPERTY(pegged_magnitude)	TAG_REFL_PROPERTY(pegged_angular_threshold)	TAG_REFL_PROPERTY(look_default_pitch_rate)	TAG_REFL_PROPERTY(look_default_yaw_rate)	TAG_REFL_PROPERTY(look_peg_threshold)	TAG_REFL_PROPERTY(look_yaw_acceleration_time)	TAG_REFL_PROPERTY(look_yaw_acceleration_scale)	TAG_REFL_PROPERTY(look_pitch_acceleration_time)	TAG_REFL_PROPERTY(look_pitch_acceleration_scale)	TAG_REFL_PROPERTY(look_autoleveling_scale)	TAG_REFL_PROPERTY(gravity_scale)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(minimum_autoleveling_ticks)	TAG_REFL_ANGLE(minimum_angle_for_vehicle_flipping)	TAG_REFL_TAG_BLOCK(look_function)	TAG_REFL_PROPERTY(minimum_action_hold_time)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_difficulty_block)	TAG_REFL_PROPERTY(easy_enemy_damage)	TAG_REFL_PROPERTY(normal_enemy_damage)	TAG_REFL_PROPERTY(hard_enemy_damage)	TAG_REFL_PROPERTY(impossible_enemy_damage)	TAG_REFL_PROPERTY(easy_enemy_vitality)	TAG_REFL_PROPERTY(normal_enemy_vitality)	TAG_REFL_PROPERTY(hard_enemy_vitality)	TAG_REFL_PROPERTY(impossible_enemy_vitality)	TAG_REFL_PROPERTY(easy_enemy_shield)	TAG_REFL_PROPERTY(normal_enemy_shield)	TAG_REFL_PROPERTY(hard_enemy_shield)	TAG_REFL_PROPERTY(impossible_enemy_shield)	TAG_REFL_PROPERTY(easy_enemy_recharge)	TAG_REFL_PROPERTY(normal_enemy_recharge)	TAG_REFL_PROPERTY(hard_enemy_recharge)	TAG_REFL_PROPERTY(impossible_enemy_recharge)	TAG_REFL_PROPERTY(easy_friend_damage)	TAG_REFL_PROPERTY(normal_friend_damage)	TAG_REFL_PROPERTY(hard_friend_damage)	TAG_REFL_PROPERTY(impossible_friend_damage)	TAG_REFL_PROPERTY(easy_friend_vitality)	TAG_REFL_PROPERTY(normal_friend_vitality)	TAG_REFL_PROPERTY(hard_friend_vitality)	TAG_REFL_PROPERTY(impossible_friend_vitality)	TAG_REFL_PROPERTY(easy_friend_shield)	TAG_REFL_PROPERTY(normal_friend_shield)	TAG_REFL_PROPERTY(hard_friend_shield)	TAG_REFL_PROPERTY(impossible_friend_shield)	TAG_REFL_PROPERTY(easy_friend_recharge)	TAG_REFL_PROPERTY(normal_friend_recharge)	TAG_REFL_PROPERTY(hard_friend_recharge)	TAG_REFL_PROPERTY(impossible_friend_recharge)	TAG_REFL_PROPERTY(easy_infection_forms)	TAG_REFL_PROPERTY(normal_infection_forms)	TAG_REFL_PROPERTY(hard_infection_forms)	TAG_REFL_PROPERTY(impossible_infection_forms)	TAG_REFL_PROPERTY(easy_unknown)	TAG_REFL_PROPERTY(normal_unknown)	TAG_REFL_PROPERTY(hard_unknown)	TAG_REFL_PROPERTY(impossible_unknown)	TAG_REFL_PROPERTY(easy_rate_of_fire)	TAG_REFL_PROPERTY(normal_rate_of_fire)	TAG_REFL_PROPERTY(hard_rate_of_fire)	TAG_REFL_PROPERTY(impossible_rate_of_fire)	TAG_REFL_PROPERTY(easy_projectile_error)	TAG_REFL_PROPERTY(normal_projectile_error)	TAG_REFL_PROPERTY(hard_projectile_error)	TAG_REFL_PROPERTY(impossible_projectile_error)	TAG_REFL_PROPERTY(easy_burst_error)	TAG_REFL_PROPERTY(normal_burst_error)	TAG_REFL_PROPERTY(hard_burst_error)	TAG_REFL_PROPERTY(impossible_burst_error)	TAG_REFL_PROPERTY(easy_target_delay)	TAG_REFL_PROPERTY(normal_target_delay)	TAG_REFL_PROPERTY(hard_target_delay)	TAG_REFL_PROPERTY(impossible_target_delay)	TAG_REFL_PROPERTY(easy_burst_separation)	TAG_REFL_PROPERTY(normal_burst_separation)	TAG_REFL_PROPERTY(hard_burst_separation)	TAG_REFL_PROPERTY(impossible_burst_separation)	TAG_REFL_PROPERTY(easy_target_tracking)	TAG_REFL_PROPERTY(normal_target_tracking)	TAG_REFL_PROPERTY(hard_target_tracking)	TAG_REFL_PROPERTY(impossible_target_tracking)	TAG_REFL_PROPERTY(easy_target_leading)	TAG_REFL_PROPERTY(normal_target_leading)	TAG_REFL_PROPERTY(hard_target_leading)	TAG_REFL_PROPERTY(impossible_target_leading)	TAG_REFL_PROPERTY(easy_overcharge_chance)	TAG_REFL_PROPERTY(normal_overcharge_chance)	TAG_REFL_PROPERTY(hard_overcharge_chance)	TAG_REFL_PROPERTY(impossible_overcharge_chance)	TAG_REFL_PROPERTY(easy_special_fire_delay)	TAG_REFL_PROPERTY(normal_special_fire_delay)	TAG_REFL_PROPERTY(hard_special_fire_delay)	TAG_REFL_PROPERTY(impossible_special_fire_delay)	TAG_REFL_PROPERTY(easy_guidance_vs_player)	TAG_REFL_PROPERTY(normal_guidance_vs_player)	TAG_REFL_PROPERTY(hard_guidance_vs_player)	TAG_REFL_PROPERTY(impossible_guidance_vs_player)	TAG_REFL_PROPERTY(easy_melee_delay_base)	TAG_REFL_PROPERTY(normal_melee_delay_base)	TAG_REFL_PROPERTY(hard_melee_delay_base)	TAG_REFL_PROPERTY(impossible_melee_delay_base)	TAG_REFL_PROPERTY(easy_melee_delay_scale)	TAG_REFL_PROPERTY(normal_melee_delay_scale)	TAG_REFL_PROPERTY(hard_melee_delay_scale)	TAG_REFL_PROPERTY(impossible_melee_delay_scale)	TAG_REFL_PROPERTY(easy_unknown)	TAG_REFL_PROPERTY(normal_unknown)	TAG_REFL_PROPERTY(hard_unknown)	TAG_REFL_PROPERTY(impossible_unknown)	TAG_REFL_PROPERTY(easy_grenade_chance_scale)	TAG_REFL_PROPERTY(normal_grenade_chance_scale)	TAG_REFL_PROPERTY(hard_grenade_chance_scale)	TAG_REFL_PROPERTY(impossible_grenade_chance_scale)	TAG_REFL_PROPERTY(easy_grenade_timer_scale)	TAG_REFL_PROPERTY(normal_grenade_timer_scale)	TAG_REFL_PROPERTY(hard_grenade_timer_scale)	TAG_REFL_PROPERTY(impossible_grenade_timer_scale)	TAG_REFL_PROPERTY(easy_unknown)	TAG_REFL_PROPERTY(normal_unknown)	TAG_REFL_PROPERTY(hard_unknown)	TAG_REFL_PROPERTY(impossible_unknown)	TAG_REFL_PROPERTY(easy_unknown)	TAG_REFL_PROPERTY(normal_unknown)	TAG_REFL_PROPERTY(hard_unknown)	TAG_REFL_PROPERTY(impossible_unknown)	TAG_REFL_PROPERTY(easy_unknown)	TAG_REFL_PROPERTY(normal_unknown)	TAG_REFL_PROPERTY(hard_unknown)	TAG_REFL_PROPERTY(impossible_unknown)	TAG_REFL_PROPERTY(easy_major_upgrade_normal)	TAG_REFL_PROPERTY(normal_major_upgrade_normal)	TAG_REFL_PROPERTY(hard_major_upgrade_normal)	TAG_REFL_PROPERTY(impossible_major_upgrade_normal)	TAG_REFL_PROPERTY(easy_major_upgrade_few)	TAG_REFL_PROPERTY(normal_major_upgrade_few)	TAG_REFL_PROPERTY(hard_major_upgrade_few)	TAG_REFL_PROPERTY(impossible_major_upgrade_few)	TAG_REFL_PROPERTY(easy_major_upgrade_many)	TAG_REFL_PROPERTY(normal_major_upgrade_many)	TAG_REFL_PROPERTY(hard_major_upgrade_many)	TAG_REFL_PROPERTY(impossible_major_upgrade_many)	TAG_REFL_PROPERTY(easy_player_vehicle_ram_chance)	TAG_REFL_PROPERTY(normal_player_vehicle_ram_chance)	TAG_REFL_PROPERTY(hard_player_vehicle_ram_chance)	TAG_REFL_PROPERTY(impossible_player_vehicle_ram_chance)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_grenades_block)	TAG_REFL_PROPERTY(maximum_count)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_REFERENCE(throwing_effect)	TAG_REFL_TAG_REFERENCE(equipment)	TAG_REFL_TAG_REFERENCE(projectile)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_rasterizer_data_group_definition::s_global_vertex_shaders_block)	TAG_REFL_TAG_REFERENCE(vertex_shader)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_rasterizer_data_block)	TAG_REFL_TAG_REFERENCE(distance_attenuation)	TAG_REFL_TAG_REFERENCE(vector_normalization)	TAG_REFL_TAG_REFERENCE(gradients)	TAG_REFL_TAG_REFERENCE(loading_screen)	TAG_REFL_TAG_REFERENCE(loading_screen_sweep)	TAG_REFL_TAG_REFERENCE(loading_screen_spinner)	TAG_REFL_TAG_REFERENCE(glow)	TAG_REFL_TAG_REFERENCE(loading_screen_logos)	TAG_REFL_TAG_REFERENCE(loading_screen_tickers)	TAG_REFL_TAG_BLOCK(global_vertex_shaders)	TAG_REFL_TAG_REFERENCE(default_2d)	TAG_REFL_TAG_REFERENCE(default_3d)	TAG_REFL_TAG_REFERENCE(default_cube_map)	TAG_REFL_TAG_REFERENCE(unknown)	TAG_REFL_TAG_REFERENCE(unknown)	TAG_REFL_TAG_REFERENCE(unknown)	TAG_REFL_TAG_REFERENCE(unknown)	TAG_REFL_TAG_REFERENCE(unknown)	TAG_REFL_TAG_REFERENCE(unknown)	TAG_REFL_TAG_REFERENCE(global_shader)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(refraction_amount)	TAG_REFL_PROPERTY(distance_falloff)	TAG_REFL_PROPERTY(tint_color_red)	TAG_REFL_PROPERTY(tint_color_green)	TAG_REFL_PROPERTY(tint_color_blue)	TAG_REFL_PROPERTY(hyper_stealth_refraction)	TAG_REFL_PROPERTY(hyper_stealth_distance_falloff)	TAG_REFL_PROPERTY(hyper_stealth_tint_red)	TAG_REFL_PROPERTY(hyper_stealth_tint_green)	TAG_REFL_PROPERTY(hyper_stealth_tint_blue)	TAG_REFL_TAG_REFERENCE(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_interface_tags_block)	TAG_REFL_TAG_REFERENCE(obsolete_1)	TAG_REFL_TAG_REFERENCE(obsolete_2)	TAG_REFL_TAG_REFERENCE(screen_color_table)	TAG_REFL_TAG_REFERENCE(hud_color_table)	TAG_REFL_TAG_REFERENCE(editor_color_table)	TAG_REFL_TAG_REFERENCE(dialog_color_table)	TAG_REFL_TAG_REFERENCE(hud_globals)	TAG_REFL_TAG_REFERENCE(motion_sensor_sweep_bitmap)	TAG_REFL_TAG_REFERENCE(motion_sensor_sweep_bitmap_mask)	TAG_REFL_TAG_REFERENCE(multiplayer_hud_bitmap)	TAG_REFL_TAG_REFERENCE(unknown)	TAG_REFL_TAG_REFERENCE(hud_digits_definition)	TAG_REFL_TAG_REFERENCE(motion_sensor_blip_bitmap)	TAG_REFL_TAG_REFERENCE(interface_goo_map_1)	TAG_REFL_TAG_REFERENCE(interface_goo_map_2)	TAG_REFL_TAG_REFERENCE(interface_goo_map_3)	TAG_REFL_TAG_REFERENCE(main_menu_ui_globals)	TAG_REFL_TAG_REFERENCE(single_player_ui_globals)	TAG_REFL_TAG_REFERENCE(multiplayer_ui_globals)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_weapon_list_block)	TAG_REFL_TAG_REFERENCE(weapon)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_cheat_powerups_block)	TAG_REFL_TAG_REFERENCE(powerup)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_multiplayer_information_group_definition::s_vehicles_block)	TAG_REFL_TAG_REFERENCE(vehicle)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_multiplayer_information_group_definition::s_sounds_block)	TAG_REFL_TAG_REFERENCE(sound)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_multiplayer_information_block)	TAG_REFL_TAG_REFERENCE(flag)	TAG_REFL_TAG_REFERENCE(unit)	TAG_REFL_TAG_BLOCK(vehicles)	TAG_REFL_TAG_REFERENCE(hill_shader)	TAG_REFL_TAG_REFERENCE(flag_shader)	TAG_REFL_TAG_REFERENCE(ball)	TAG_REFL_TAG_BLOCK(sounds)	TAG_REFL_TAG_REFERENCE(in_game_text)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_player_information_block)	TAG_REFL_TAG_REFERENCE(unit)	TAG_REFL_PROPERTY(walking_speed)	TAG_REFL_PROPERTY(run_forward)	TAG_REFL_PROPERTY(run_backward)	TAG_REFL_PROPERTY(run_sideways)	TAG_REFL_PROPERTY(run_acceleration)	TAG_REFL_PROPERTY(sneak_forward)	TAG_REFL_PROPERTY(sneak_backward)	TAG_REFL_PROPERTY(sneak_sideways)	TAG_REFL_PROPERTY(sneak_acceleration)	TAG_REFL_PROPERTY(airborn_acceleration)	TAG_REFL_PROPERTY(grenade_origin_x)	TAG_REFL_PROPERTY(grenade_origin_y)	TAG_REFL_PROPERTY(grenade_origin_z)	TAG_REFL_PROPERTY(stun_movement_penalty)	TAG_REFL_PROPERTY(stun_turning_penalty)	TAG_REFL_PROPERTY(stun_jumping_penalty)	TAG_REFL_PROPERTY(minimum_stun_time)	TAG_REFL_PROPERTY(maximum_stun_time)	TAG_REFL_PROPERTY(first_person_idle_time_min)	TAG_REFL_PROPERTY(first_person_idle_time_max)	TAG_REFL_PROPERTY(first_person_skip_fraction)	TAG_REFL_TAG_REFERENCE(coop_respawn_effect)	TAG_REFL_PROPERTY(binoculars_zoom_count)	TAG_REFL_PROPERTY(binoculars_zoom_range_min)	TAG_REFL_PROPERTY(binoculars_zoom_range_max)	TAG_REFL_TAG_REFERENCE(binoculars_zoom_in_sound)	TAG_REFL_TAG_REFERENCE(binoculars_zoom_out_sound)	TAG_REFL_TAG_REFERENCE(active_camouflage_on)	TAG_REFL_TAG_REFERENCE(active_camouflage_off)	TAG_REFL_TAG_REFERENCE(active_camouflage_error)	TAG_REFL_TAG_REFERENCE(active_camouflage_ready)	TAG_REFL_TAG_REFERENCE(flashlight_on)	TAG_REFL_TAG_REFERENCE(flashlight_off)	TAG_REFL_TAG_REFERENCE(ice_cream)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_player_representation_block)	TAG_REFL_TAG_REFERENCE(first_person_hands)	TAG_REFL_TAG_REFERENCE(first_person_body)	TAG_REFL_TAG_REFERENCE(third_person_unit)	TAG_REFL_STRING_ID(third_person_unit_variant)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_falling_damage_block)	TAG_REFL_PROPERTY(harmful_falling_distance_min)	TAG_REFL_PROPERTY(harmful_falling_distance_max)	TAG_REFL_TAG_REFERENCE(falling_damage)	TAG_REFL_PROPERTY(maximum_falling_distance)	TAG_REFL_TAG_REFERENCE(distance_damage)	TAG_REFL_TAG_REFERENCE(vehicle_environment_collision_damage)	TAG_REFL_TAG_REFERENCE(vehicle_killed_unit_damage_effect)	TAG_REFL_TAG_REFERENCE(vehicle_collision_damage)	TAG_REFL_TAG_REFERENCE(flaming_death_damage)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_old_materials_block)	TAG_REFL_STRING_ID(new_material_name)	TAG_REFL_STRING_ID(new_general_material_name)	TAG_REFL_PROPERTY(ground_friction_scale)	TAG_REFL_PROPERTY(ground_friction_normal_k1_scale)	TAG_REFL_PROPERTY(ground_friction_normal_k0_scale)	TAG_REFL_PROPERTY(ground_depth_scale)	TAG_REFL_PROPERTY(ground_damp_fraction_scale)	TAG_REFL_TAG_REFERENCE(melee_hit_sound)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_materials_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_STRING_ID(parent_name)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(old_material_type)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_STRING_ID(general_armor)	TAG_REFL_STRING_ID(specific_armor)	TAG_REFL_PROPERTY(friction)	TAG_REFL_PROPERTY(restitution)	TAG_REFL_PROPERTY(density)	TAG_REFL_TAG_REFERENCE(old_material_physics)	TAG_REFL_TAG_REFERENCE(breakable_surface)	TAG_REFL_TAG_REFERENCE(sound_sweetener_small)	TAG_REFL_TAG_REFERENCE(sound_sweetener_medium)	TAG_REFL_TAG_REFERENCE(sound_sweetener_large)	TAG_REFL_TAG_REFERENCE(sound_sweetener_rolling)	TAG_REFL_TAG_REFERENCE(sound_sweetener_grinding)	TAG_REFL_TAG_REFERENCE(sound_sweetener_melee)	TAG_REFL_TAG_REFERENCE(unknown)	TAG_REFL_TAG_REFERENCE(effect_sweetener_small)	TAG_REFL_TAG_REFERENCE(effect_sweetener_medium)	TAG_REFL_TAG_REFERENCE(effect_sweetener_large)	TAG_REFL_TAG_REFERENCE(effect_sweetener_rolling)	TAG_REFL_TAG_REFERENCE(effect_sweetener_grinding)	TAG_REFL_TAG_REFERENCE(effect_sweetener_melee)	TAG_REFL_TAG_REFERENCE(unknown)	TAG_REFL_PROPERTY(sweetener_inheritance_flags)	TAG_REFL_TAG_REFERENCE(material_effects)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_multiplayer_ui_group_definition::s_obsolete_profile_colors_block)	TAG_REFL_REAL_COLOR_RGB(color)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_multiplayer_ui_group_definition::s_team_colors_block)	TAG_REFL_REAL_COLOR_RGB(color)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_multiplayer_ui_block)	TAG_REFL_TAG_REFERENCE(random_player_names)	TAG_REFL_TAG_BLOCK(obsolete_profile_colors)	TAG_REFL_TAG_BLOCK(team_colors)	TAG_REFL_TAG_REFERENCE(team_names)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_profile_colors_block)	TAG_REFL_REAL_COLOR_RGB(color)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_runtime_level_data_group_definition::s_campaign_levels_block)	TAG_REFL_PROPERTY(campaign_id)	TAG_REFL_PROPERTY(map_id)	TAG_REFL_STRING_256(path)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_runtime_level_data_block)	TAG_REFL_TAG_BLOCK(campaign_levels)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_ui_level_data_group_definition::s_campaigns_block)	TAG_REFL_PROPERTY(campaign_id)	TAG_REFL_USTRING_32(english_name)	TAG_REFL_USTRING_32(japanese_name)	TAG_REFL_USTRING_32(german_name)	TAG_REFL_USTRING_32(french_name)	TAG_REFL_USTRING_32(spanish_name)	TAG_REFL_USTRING_32(italian_name)	TAG_REFL_USTRING_32(korean_name)	TAG_REFL_USTRING_32(chinese_name)	TAG_REFL_USTRING_32(portuguese_name)	TAG_REFL_USTRING_128(english_description)	TAG_REFL_USTRING_128(japanese_description)	TAG_REFL_USTRING_128(german_description)	TAG_REFL_USTRING_128(french_description)	TAG_REFL_USTRING_128(spanish_description)	TAG_REFL_USTRING_128(italian_description)	TAG_REFL_USTRING_128(korean_description)	TAG_REFL_USTRING_128(chinese_description)	TAG_REFL_USTRING_128(portuguese_description)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_ui_level_data_group_definition::s_campaign_levels_block)	TAG_REFL_PROPERTY(campaign_id)	TAG_REFL_PROPERTY(map_id)	TAG_REFL_TAG_REFERENCE(bitmap)	TAG_REFL_USTRING_32(english_name)	TAG_REFL_USTRING_32(japanese_name)	TAG_REFL_USTRING_32(german_name)	TAG_REFL_USTRING_32(french_name)	TAG_REFL_USTRING_32(spanish_name)	TAG_REFL_USTRING_32(italian_name)	TAG_REFL_USTRING_32(korean_name)	TAG_REFL_USTRING_32(chinese_name)	TAG_REFL_USTRING_32(portuguese_name)	TAG_REFL_USTRING_128(english_description)	TAG_REFL_USTRING_128(japanese_description)	TAG_REFL_USTRING_128(german_description)	TAG_REFL_USTRING_128(french_description)	TAG_REFL_USTRING_128(spanish_description)	TAG_REFL_USTRING_128(italian_description)	TAG_REFL_USTRING_128(korean_description)	TAG_REFL_USTRING_128(chinese_description)	TAG_REFL_USTRING_128(portuguese_description)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_ui_level_data_group_definition::s_multiplayer_levels_block)	TAG_REFL_PROPERTY(map_id)	TAG_REFL_TAG_REFERENCE(bitmap)	TAG_REFL_USTRING_32(english_name)	TAG_REFL_USTRING_32(japanese_name)	TAG_REFL_USTRING_32(german_name)	TAG_REFL_USTRING_32(french_name)	TAG_REFL_USTRING_32(spanish_name)	TAG_REFL_USTRING_32(italian_name)	TAG_REFL_USTRING_32(korean_name)	TAG_REFL_USTRING_32(chinese_name)	TAG_REFL_USTRING_32(portuguese_name)	TAG_REFL_USTRING_128(english_description)	TAG_REFL_USTRING_128(japanese_description)	TAG_REFL_USTRING_128(german_description)	TAG_REFL_USTRING_128(french_description)	TAG_REFL_USTRING_128(spanish_description)	TAG_REFL_USTRING_128(italian_description)	TAG_REFL_USTRING_128(korean_description)	TAG_REFL_USTRING_128(chinese_description)	TAG_REFL_USTRING_128(portuguese_description)	TAG_REFL_STRING_256(path)	TAG_REFL_PROPERTY(sort_order)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(max_teams_none)	TAG_REFL_PROPERTY(max_teams_ctf)	TAG_REFL_PROPERTY(max_teams_slayer)	TAG_REFL_PROPERTY(max_teams_oddball)	TAG_REFL_PROPERTY(max_teams_koth)	TAG_REFL_PROPERTY(max_teams_race)	TAG_REFL_PROPERTY(max_teams_headhunter)	TAG_REFL_PROPERTY(max_teams_juggernaut)	TAG_REFL_PROPERTY(max_teams_territories)	TAG_REFL_PROPERTY(max_teams_assault)	TAG_REFL_PROPERTY(max_teams_stub_10)	TAG_REFL_PROPERTY(max_teams_stub_11)	TAG_REFL_PROPERTY(max_teams_stub_12)	TAG_REFL_PROPERTY(max_teams_stub_13)	TAG_REFL_PROPERTY(max_teams_stub_14)	TAG_REFL_PROPERTY(max_teams_stub_15)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_globals_group_definition::s_ui_level_data_block)	TAG_REFL_TAG_BLOCK(campaigns)	TAG_REFL_TAG_BLOCK(campaign_levels)	TAG_REFL_TAG_BLOCK(multiplayer_levels)REFL_END
TAG_REFL(s_globals_group_definition)	TAG_REFL_PROPERTY(language)	TAG_REFL_TAG_BLOCK(havok_cleanup_resources)	TAG_REFL_TAG_BLOCK(collision_damage)	TAG_REFL_TAG_BLOCK(sound_globals)	TAG_REFL_TAG_BLOCK(ai_globals)	TAG_REFL_TAG_BLOCK(damage_table)	TAG_REFL_TAG_BLOCK(sounds)	TAG_REFL_TAG_BLOCK(camera)	TAG_REFL_TAG_BLOCK(player_control)	TAG_REFL_TAG_BLOCK(difficulty)	TAG_REFL_TAG_BLOCK(grenades)	TAG_REFL_TAG_BLOCK(rasterizer_data)	TAG_REFL_TAG_BLOCK(interface_tags)	TAG_REFL_TAG_BLOCK(weapon_list)	TAG_REFL_TAG_BLOCK(cheat_powerups)	TAG_REFL_TAG_BLOCK(multiplayer_information)	TAG_REFL_TAG_BLOCK(player_information)	TAG_REFL_TAG_BLOCK(player_representation)	TAG_REFL_TAG_BLOCK(falling_damage)	TAG_REFL_TAG_BLOCK(old_materials)	TAG_REFL_TAG_BLOCK(materials)	TAG_REFL_TAG_BLOCK(multiplayer_ui)	TAG_REFL_TAG_BLOCK(profile_colors)	TAG_REFL_TAG_REFERENCE(multiplayer_globals)	TAG_REFL_TAG_BLOCK(runtime_level_data)	TAG_REFL_TAG_BLOCK(ui_level_data)	TAG_REFL_TAG_REFERENCE(default_global_lighting)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(string_count)	TAG_REFL_PROPERTY(locale_table_size)	TAG_REFL_PROPERTY(locale_index_table_offset)	TAG_REFL_PROPERTY(locale_data_index_offset)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(string_count)	TAG_REFL_PROPERTY(locale_table_size)	TAG_REFL_PROPERTY(locale_index_table_offset)	TAG_REFL_PROPERTY(locale_data_index_offset)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(string_count)	TAG_REFL_PROPERTY(locale_table_size)	TAG_REFL_PROPERTY(locale_index_table_offset)	TAG_REFL_PROPERTY(locale_data_index_offset)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(string_count)	TAG_REFL_PROPERTY(locale_table_size)	TAG_REFL_PROPERTY(locale_index_table_offset)	TAG_REFL_PROPERTY(locale_data_index_offset)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(string_count)	TAG_REFL_PROPERTY(locale_table_size)	TAG_REFL_PROPERTY(locale_index_table_offset)	TAG_REFL_PROPERTY(locale_data_index_offset)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(string_count)	TAG_REFL_PROPERTY(locale_table_size)	TAG_REFL_PROPERTY(locale_index_table_offset)	TAG_REFL_PROPERTY(locale_data_index_offset)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(string_count)	TAG_REFL_PROPERTY(locale_table_size)	TAG_REFL_PROPERTY(locale_index_table_offset)	TAG_REFL_PROPERTY(locale_data_index_offset)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(string_count)	TAG_REFL_PROPERTY(locale_table_size)	TAG_REFL_PROPERTY(locale_index_table_offset)	TAG_REFL_PROPERTY(locale_data_index_offset)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(string_count)	TAG_REFL_PROPERTY(locale_table_size)	TAG_REFL_PROPERTY(locale_index_table_offset)	TAG_REFL_PROPERTY(locale_data_index_offset)	TAG_REFL_PROPERTY(unknown)REFL_END

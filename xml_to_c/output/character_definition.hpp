#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: character
		* group_tag : char
 		* header size : 236
		* *********************************************************************/ 
struct s_character_group_definition
{
enum class e_character_flags : __int32
{
flag = FLAG(0),
};
e_character_flags character_flags;//0x0
tag_reference parent_gunner;//0x4
tag_reference unit;//0xC
tag_reference creature;//0x14
tag_reference style;//0x1C
tag_reference major_character;//0x24
struct s_variation_block
{
string_id permutation;//0x0
__int32 variant_index;//0x4
string_id base_permutation;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_variation_block,0xC);
tag_block<s_variation_block> variation;//0x2C
struct s_general_properties_block
{
enum class e_general_flags : __int32
{
swarm = FLAG(0),
flying = FLAG(1),
dual_wields = FLAG(3),
uses_gravemind = FLAG(4),
};
e_general_flags general_flags;//0x0
enum class e_type : __int32
{
elite = 0,
jackal = 1,
grunt = 2,
hunter = 3,
engineer = 4,
assassin = 5,
player = 6,
marine = 7,
crew = 8,
combat_form = 9,
infection_form = 10,
carrier_form = 11,
monitor = 12,
sentinal = 13,
none = 14,
mounted_weapon = 15,
brute = 16,
prophet = 17,
bugger = 18,
juggernaut = 19,
};
e_type type;//0x4
float scariness;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_general_properties_block,0xC);
tag_block<s_general_properties_block> general_properties;//0x34
struct s_character_stats_block
{
PAD(0x4);//0x0
float health_on_easy;//0x4
float shields_on_easy;//0x8
float health_on_legendary;//0xC
float shields_on_legendary;//0x10
float body_recharge_fraction;//0x14
float soft_ping_threshold_with_shields;//0x18
float soft_ping_threshold_no_shields;//0x1C
float soft_ping_min_interupt_time;//0x20
float hard_ping_threshold_with_shields;//0x24
float hard_ping_threshold_no_shields;//0x28
float hard_ping_min_interupt_time;//0x2C
float current_damage_decay_delay;//0x30
float current_damage_decay_time;//0x34
float recent_damage_decay_delay;//0x38
float recent_damage_decay_time;//0x3C
float health_recharge_delay_time;//0x40
float health_recharge_time;//0x44
float shield_recharge_delay_time;//0x48
float shield_recharge_time;//0x4C
float stun_threshold;//0x50
float stun_time_bounds;//0x54
float to;//0x58
float extended_shield_damage_threshold_%;//0x5C
float extended_health_damage_threshold_%;//0x60
PAD(0x4);//0x64
float suicide_radius;//0x68
PAD(0x4);//0x6C
};
TAG_BLOCK_SIZE_ASSERT(s_character_stats_block,0x70);
tag_block<s_character_stats_block> character_stats;//0x3C
struct s_placement_properties_block
{
PAD(0x4);//0x0
float few_upgrade_chance_easy;//0x4
float few_upgrade_chance_normal;//0x8
float few_upgrade_chance_heroic;//0xC
float few_upgrade_chance_legendary;//0x10
float normal_upgrade_chance_easy;//0x14
float normal_upgrade_chance_normal;//0x18
float normal_upgrade_chance_heroic;//0x1C
float normal_upgrade_chance_legendary;//0x20
float many_upgrade_chance_easy;//0x24
float many_upgrade_chance_normal;//0x28
float many_upgrade_chance_heroic;//0x2C
float many_upgrade_chance_legendary;//0x30
};
TAG_BLOCK_SIZE_ASSERT(s_placement_properties_block,0x34);
tag_block<s_placement_properties_block> placement_properties;//0x44
struct s_perception_properties_block
{
PAD(0x4);//0x0
float max_vision_distance_world_units;//0x4
float central_vision_angle_degrees;//0x8
float max_vision_angle_degrees;//0xC
float peripheral_vision_angle_degrees;//0x10
float peripheral_distance_world_units;//0x14
float hearing_distance_world_units;//0x18
float notice_project_chance;//0x1C
float notice_vehicle_chance;//0x20
float combat_perception_time;//0x24
float guard_perception_time;//0x28
float noncombat_perception_time;//0x2C
float first_ack_surprise_distance_world_units;//0x30
};
TAG_BLOCK_SIZE_ASSERT(s_perception_properties_block,0x34);
tag_block<s_perception_properties_block> perception_properties;//0x4C
struct s_look_properties_block
{
float maximum_aiming_deviation_y;//0x0
float maximum_aiming_deviation_p;//0x4
float maximum_looking_deviation_y;//0x8
float maximum_looking_deviation_p;//0xC
float noncombat_look_delta_l;//0x10
float noncombat_look_delta_r;//0x14
float combat_look_delta_l;//0x18
float combat_look_delta_r;//0x1C
float noncombat_idle_looking_seconds;//0x20
float to_seconds;//0x24
float noncombat_idle_aiming_seconds;//0x28
float to_seconds;//0x2C
float combat_idle_looking_seconds;//0x30
float to_seconds;//0x34
float combat_idle_aiming_seconds;//0x38
float to_seconds;//0x3C
float unknown;//0x40
float unknown;//0x44
float unknown;//0x48
float unknown;//0x4C
};
TAG_BLOCK_SIZE_ASSERT(s_look_properties_block,0x50);
tag_block<s_look_properties_block> look_properties;//0x54
struct s_movement_properties_block
{
enum class e_flags : __int32
{
danger_crouch_allow_movement = FLAG(0),
no_side_step = FLAG(1),
prefer_to_combat_near_friends = FLAG(2),
hop_to_cover_path_segment = FLAG(3),
perch = FLAG(4),
has_flying_mode = FLAG(5),
disallow_crouch = FLAG(6),
};
e_flags flags;//0x0
float pathfinding_radius;//0x4
float destination_radius;//0x8
float dive_grenade_chance;//0xC
enum class e_obstacle_leap_min_size : __int16
{
none = 0,
tiny = 1,
small = 2,
medium = 3,
large = 4,
huge = 5,
immobile = 6,
};
e_obstacle_leap_min_size obstacle_leap_min_size;//0x10
enum class e_obstacle_leap_max_size : __int16
{
none = 0,
tiny = 1,
small = 2,
medium = 3,
large = 4,
huge = 5,
immobile = 6,
};
e_obstacle_leap_max_size obstacle_leap_max_size;//0x12
enum class e_obstacle_ignore_size : __int16
{
none = 0,
tiny = 1,
small = 2,
medium = 3,
large = 4,
huge = 5,
immobile = 6,
};
e_obstacle_ignore_size obstacle_ignore_size;//0x14
enum class e_obstacle_smashable_size : __int16
{
none = 0,
tiny = 1,
small = 2,
medium = 3,
large = 4,
huge = 5,
immobile = 6,
};
e_obstacle_smashable_size obstacle_smashable_size;//0x16
__int16 unknown;//0x18
enum class e_jump_height : __int16
{
none = 0,
down = 1,
step = 2,
crouch = 3,
stand = 4,
storey = 5,
tower = 6,
infinte = 7,
};
e_jump_height jump_height;//0x1A
enum class e_movement_hints : __int32
{
vault_step = FLAG(0),
bit1 = FLAG(1),
bit2 = FLAG(2),
bit3 = FLAG(3),
bit4 = FLAG(4),
mount_step = FLAG(5),
mount_crouch = FLAG(6),
mount_stand = FLAG(7),
bit8 = FLAG(8),
bit9 = FLAG(9),
bit10 = FLAG(10),
hoist_crouch = FLAG(11),
hoist_stand = FLAG(12),
bit13 = FLAG(13),
bit14 = FLAG(14),
bit15 = FLAG(15),
};
e_movement_hints movement_hints;//0x1C
float throttle_scale;//0x20
};
TAG_BLOCK_SIZE_ASSERT(s_movement_properties_block,0x24);
tag_block<s_movement_properties_block> movement_properties;//0x5C
struct s_swarm_properties_block
{
PAD(0x4);//0x0
float scatter_radius;//0x4
float scatter_time;//0x8
float hound_min_distance;//0xC
float hound_max_distance;//0x10
float perlin_offset_scale;//0x14
float offset_period;//0x18
float to;//0x1C
float perlin_idle_movement_threshold;//0x20
float perlin_combat_movement_threshold;//0x24
};
TAG_BLOCK_SIZE_ASSERT(s_swarm_properties_block,0x28);
tag_block<s_swarm_properties_block> swarm_properties;//0x64
struct s_ready_properties_block
{
float ready_time_bounds;//0x0
float to;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_ready_properties_block,0x8);
tag_block<s_ready_properties_block> ready_properties;//0x6C
struct s_engage_properties_block
{
enum class e_flags : __int32
{
engage_perch = FLAG(0),
fight_constant_movement = FLAG(1),
flight_fight_constant_movement = FLAG(2),
};
e_flags flags;//0x0
float crouch_danger_threshold;//0x4
float stand_danger_threshold;//0x8
float fight_danger_move_threshold;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_engage_properties_block,0x10);
tag_block<s_engage_properties_block> engage_properties;//0x74
struct s_charge_properties_block
{
enum class e_flags : __int32
{
offhand_melee_allowed = FLAG(0),
berserk_whenever_charged = FLAG(1),
};
e_flags flags;//0x0
float melee_consider_range;//0x4
float melee_chance;//0x8
float melee_atack_range;//0xC
float melee_abort_range;//0x10
float melee_attack_timeout;//0x14
float melee_attack_delay_timer;//0x18
float melee_leap_range;//0x1C
float to;//0x20
float melee_leap_chance;//0x24
float ideal_leap_velocity;//0x28
float max_leap_velocity;//0x2C
float melee_leap_ballistic;//0x30
float melee_delay_timer;//0x34
tag_reference berserk_weapon;//0x38
};
TAG_BLOCK_SIZE_ASSERT(s_charge_properties_block,0x40);
tag_block<s_charge_properties_block> charge_properties;//0x7C
struct s_evasion_properties_block
{
float evasion_danger_threshold;//0x0
float evasion_delay_timer;//0x4
float evasion_chance;//0x8
float evasion_proximity_threshold;//0xC
float dive_retreat_chance;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_evasion_properties_block,0x14);
tag_block<s_evasion_properties_block> evasion_properties;//0x84
struct s_cover_properties_block
{
PAD(0x4);//0x0
float hide_behind_cover_time;//0x4
float to;//0x8
float cover_vitality_threshold;//0xC
float cover_shield_fraction;//0x10
PAD(0x4);//0x14
float cover_check_delay;//0x18
PAD(0x8);//0x1C
float emerge_from_cover_when_shielded;//0x24
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-12);//0x28
float cover_danger_threshold;//0x1C
float danger_upper_threshold;//0x20
float cover_chance;//0x24
float to;//0x28
float proximity_self_preserve;//0x2C
float disallow_cover_distance;//0x30
float proximity_melee_distance;//0x34
float unreachable_enemy_danger_threshold;//0x38
float scary_target_threshold;//0x3C
};
TAG_BLOCK_SIZE_ASSERT(s_cover_properties_block,0x40);
tag_block<s_cover_properties_block> cover_properties;//0x8C
struct s_retreat_properties_block
{
enum class e_retreat_flags : __int32
{
zigzag_when_fleeing = FLAG(0),
unused1 = FLAG(1),
};
e_retreat_flags retreat_flags;//0x0
float shield_threshold;//0x4
float scary_target_threshold;//0x8
float danger_threshold;//0xC
float proximity_threshold;//0x10
float minmax_forced_cower_time_bounds;//0x14
float to;//0x18
float minmax_cower_time_bounds;//0x1C
float to;//0x20
float proximity_ambush_threshold;//0x24
float awareness_ambush_threshold;//0x28
float leader_dead_retreat_chance;//0x2C
float peer_dead_retreat_chance;//0x30
float second_peer_dead_retreat_chance;//0x34
float zigzag_angle;//0x38
float zigzag_period;//0x3C
float retreat_grenade_chance;//0x40
tag_reference backup_weapon;//0x44
};
TAG_BLOCK_SIZE_ASSERT(s_retreat_properties_block,0x4C);
tag_block<s_retreat_properties_block> retreat_properties;//0x94
struct s_search_properties_block
{
enum class e_search_flags : __int32
{
crouch_on_investigation = FLAG(0),
walk_on_pursuit = FLAG(1),
};
e_search_flags search_flags;//0x0
float search_time;//0x4
float to;//0x8
float uncover_distance_bounds;//0xC
float to;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_search_properties_block,0x14);
tag_block<s_search_properties_block> search_properties;//0x9C
struct s_presearch_properties_block
{
PAD(0x4);//0x0
float min_presearch_time;//0x4
float to;//0x8
float max_presearch_time;//0xC
float to;//0x10
float min_certainty_radius;//0x14
float deprecated;//0x18
float min_suppressing_time;//0x1C
float to;//0x20
};
TAG_BLOCK_SIZE_ASSERT(s_presearch_properties_block,0x24);
tag_block<s_presearch_properties_block> presearch_properties;//0xA4
struct s_idle_properties_block
{
PAD(0x4);//0x0
float idle_pose_delay_time;//0x4
float to;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_idle_properties_block,0xC);
tag_block<s_idle_properties_block> idle_properties;//0xAC
struct s_vocalization_properties_block
{
float look_comment_time;//0x0
float look_long_comment_time;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_vocalization_properties_block,0x8);
tag_block<s_vocalization_properties_block> vocalization_properties;//0xB4
struct s_boarding_properties_block
{
enum class e_flags : __int32
{
airborne_boarding = FLAG(0),
};
e_flags flags;//0x0
float max_distance;//0x4
float abort_distance;//0x8
float max_speed;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_boarding_properties_block,0x10);
tag_block<s_boarding_properties_block> boarding_properties;//0xBC
struct s_boss_properties_block
{
PAD(0x4);//0x0
float flurry_damage_threshold;//0x4
float flurry_time;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_boss_properties_block,0xC);
tag_block<s_boss_properties_block> boss_properties;//0xC4
struct s_weapons_properties_block
{
enum class e_flags : __int32
{
bursting_inhibits_movement = FLAG(0),
must_crouch_to_shoot = FLAG(1),
use_extended_safe_to_save_range = FLAG(2),
};
e_flags flags;//0x0
tag_reference weapon;//0x4
float maximum_firing_range;//0xC
float minimum_firing_range;//0x10
float normal_combat_range;//0x14
float to;//0x18
float bombardment_range;//0x1C
float max_special_target_distance;//0x20
float timid_combat_range;//0x24
float to;//0x28
float aggressive_combat_range;//0x2C
float to;//0x30
float super_ballistic_range;//0x34
float ballistic_firing_bounds;//0x38
float to;//0x3C
float ballistic_fraction_bounds;//0x40
float to;//0x44
float first_burst_delay_time;//0x48
float to;//0x4C
float surprise_delay_time;//0x50
float surprise_firewildly_time;//0x54
float death_firewildly_chance;//0x58
float death_firewildly_time;//0x5C
float custom_stand_gun_offset_i;//0x60
float custom_stand_gun_offset_j;//0x64
float custom_stand_gun_offset_k;//0x68
float custom_crouch_gun_offset_i;//0x6C
float custom_crouch_gun_offset_j;//0x70
float custom_crouch_gun_offset_k;//0x74
enum class e_special_fire_mode : __int16
{
none = 0,
overcharge = 1,
secondary_trigger = 2,
};
e_special_fire_mode special_fire_mode;//0x78
enum class e_special_fire_situation : __int16
{
never = 0,
enemy_visible = 1,
enemy_out_of_sight = 2,
strafing = 3,
};
e_special_fire_situation special_fire_situation;//0x7A
float special_fire_chance;//0x7C
float special_fire_delay;//0x80
float special_damage_modifier;//0x84
float special_projectile_error;//0x88
float drop_weapon_loaded;//0x8C
float to;//0x90
PAD(0xB4);//0x94
__int16 drop_weapon_ammo;//0x148
PAD(0x6);//0x14A
__int16 to;//0x150
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-186);//0x152
float normal_accuracy_bounds;//0x98
float to;//0x9C
float normal_accuracy_time;//0xA0
float heroic_accuracy_bounds;//0xA4
float to;//0xA8
float heroic_accuracy_time;//0xAC
float legendary_accuracy_bounds;//0xB0
float to;//0xB4
float legendary_accuracy_time;//0xB8
PAD(0x8);//0xBC
tag_reference weapon_melee_damage;//0xC4
};
TAG_BLOCK_SIZE_ASSERT(s_weapons_properties_block,0xCC);
tag_block<s_weapons_properties_block> weapons_properties;//0xCC
struct s_firing_pattern_properties_block
{
tag_reference weapon;//0x0
struct s_firing_patterns_block
{
float rate_of_fire;//0x0
float target_tracking;//0x4
float target_leading;//0x8
float burst_origin_radius;//0xC
PAD(0x4);//0x10
float burst_return_length;//0x14
float to;//0x18
float burst_return_angle;//0x1C
float burst_duration;//0x20
float to;//0x24
float burst_separation;//0x28
float to;//0x2C
float weapon_damage_modifier;//0x30
float projectile_error;//0x34
float burst_angular_velocity;//0x38
float maximum_error_angle;//0x3C
};
TAG_BLOCK_SIZE_ASSERT(s_firing_patterns_block,0x40);
tag_block<s_firing_patterns_block> firing_patterns;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_firing_pattern_properties_block,0x10);
tag_block<s_firing_pattern_properties_block> firing_pattern_properties;//0xD4
struct s_grenades_properties_block
{
PAD(0x4);//0x0
enum class e_grenade_type : __int32
{
human_fragmentation = 0,
covenant_plasma = 1,
};
e_grenade_type grenade_type;//0x4
enum class e_trajectory_type : __int16
{
toss = 0,
lob = 1,
bounce = 2,
};
e_trajectory_type trajectory_type;//0x8
PAD(0x6);//0xA
__int16 minimum_enemy_count;//0x10
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-6);//0x12
float enemy_radius;//0xC
float grenade_ideal_velocity;//0x10
float grenade_velocity;//0x14
float grenade_ranges;//0x18
float to;//0x1C
float collateral_damage_radius;//0x20
float grenade_chance;//0x24
float grenade_throw_delay;//0x28
float grenade_uncover_chance;//0x2C
float antivehicle_grenade_chance;//0x30
PAD(0x1E);//0x34
unsigned __int16 grenade_count;//0x52
unsigned __int16 to;//0x54
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-30);//0x56
float dont_drop_grenades_chance;//0x38
};
TAG_BLOCK_SIZE_ASSERT(s_grenades_properties_block,0x3C);
tag_block<s_grenades_properties_block> grenades_properties;//0xDC
struct s_vehicle_properties_block
{
tag_reference vehicle;//0x0
tag_reference style;//0x8
PAD(0x6);//0x10
enum class e_flags : __int32
{
passengers_adopt_original_squad = FLAG(0),
};
e_flags flags;//0x16
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-6);//0x1A
float ai_pathfinding_radius;//0x14
float ai_destination_radius;//0x18
float ai_deceleration_distance;//0x1C
float ai_turning_radius;//0x20
float ai_inner_turning_radius;//0x24
float ai_ideal_turning_radius;//0x28
float ai_banshee_steering_maximum;//0x2C
float ai_max_steering_angle;//0x30
float ai_max_steering_delta;//0x34
float ai_oversteering_scale;//0x38
float ai_oversteering_bounds;//0x3C
float to;//0x40
float ai_side_slip_distance;//0x44
float ai_avoidance_distance;//0x48
float ai_min_urgency;//0x4C
float ai_throttle_maximum;//0x50
float ai_goal_min_throttle_scale;//0x54
float ai_turn_min_throttle_scale;//0x58
float ai_direction_min_throttle_scale;//0x5C
float ai_acceleration_scale;//0x60
float ai_throttle_blend;//0x64
float theoretical_max_speed;//0x68
float error_scale;//0x6C
float ai_allowable_aim_deviation_angle;//0x70
float ai_charge_tight_angle_distance;//0x74
float ai_charge_tight_angle;//0x78
float ai_charge_repeat_timeout;//0x7C
float ai_charge_lookahead_time;//0x80
float ai_consider_distance;//0x84
float ai_charge_abort_distance;//0x88
float vehicle_ram_timeout;//0x8C
float ram_paralysis_time;//0x90
float ai_cover_damage_threshold;//0x94
float ai_cover_min_distance;//0x98
float ai_cover_time;//0x9C
float ai_cover_min_boost_distance;//0xA0
float turtling_recent_damage_threshold;//0xA4
float turtling_min_time;//0xA8
float turtling_timeout;//0xAC
enum class e_obstacle_ignore_size : __int16
{
none = 0,
tiny = 1,
small = 2,
medium = 3,
large = 4,
huge = 5,
inmobile = 6,
};
e_obstacle_ignore_size obstacle_ignore_size;//0xB0
__int16 unknown;//0xB2
};
TAG_BLOCK_SIZE_ASSERT(s_vehicle_properties_block,0xB4);
tag_block<s_vehicle_properties_block> vehicle_properties;//0xE4
};
TAG_GROUP_SIZE_ASSERT(s_character_group_definition,0xEC);
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_variation_block)	TAG_REFL_STRING_ID(permutation)	TAG_REFL_PROPERTY(variant_index)	TAG_REFL_STRING_ID(base_permutation)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_general_properties_block)	TAG_REFL_PROPERTY(general_flags)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(scariness)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_character_stats_block)	TAG_REFL_PROPERTY(health_on_easy)	TAG_REFL_PROPERTY(shields_on_easy)	TAG_REFL_PROPERTY(health_on_legendary)	TAG_REFL_PROPERTY(shields_on_legendary)	TAG_REFL_PROPERTY(body_recharge_fraction)	TAG_REFL_PROPERTY(soft_ping_threshold_with_shields)	TAG_REFL_PROPERTY(soft_ping_threshold_no_shields)	TAG_REFL_PROPERTY(soft_ping_min_interupt_time)	TAG_REFL_PROPERTY(hard_ping_threshold_with_shields)	TAG_REFL_PROPERTY(hard_ping_threshold_no_shields)	TAG_REFL_PROPERTY(hard_ping_min_interupt_time)	TAG_REFL_PROPERTY(current_damage_decay_delay)	TAG_REFL_PROPERTY(current_damage_decay_time)	TAG_REFL_PROPERTY(recent_damage_decay_delay)	TAG_REFL_PROPERTY(recent_damage_decay_time)	TAG_REFL_PROPERTY(health_recharge_delay_time)	TAG_REFL_PROPERTY(health_recharge_time)	TAG_REFL_PROPERTY(shield_recharge_delay_time)	TAG_REFL_PROPERTY(shield_recharge_time)	TAG_REFL_PROPERTY(stun_threshold)	TAG_REFL_PROPERTY(stun_time_bounds)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(extended_shield_damage_threshold_%)	TAG_REFL_PROPERTY(extended_health_damage_threshold_%)	TAG_REFL_PROPERTY(suicide_radius)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_placement_properties_block)	TAG_REFL_PROPERTY(few_upgrade_chance_easy)	TAG_REFL_PROPERTY(few_upgrade_chance_normal)	TAG_REFL_PROPERTY(few_upgrade_chance_heroic)	TAG_REFL_PROPERTY(few_upgrade_chance_legendary)	TAG_REFL_PROPERTY(normal_upgrade_chance_easy)	TAG_REFL_PROPERTY(normal_upgrade_chance_normal)	TAG_REFL_PROPERTY(normal_upgrade_chance_heroic)	TAG_REFL_PROPERTY(normal_upgrade_chance_legendary)	TAG_REFL_PROPERTY(many_upgrade_chance_easy)	TAG_REFL_PROPERTY(many_upgrade_chance_normal)	TAG_REFL_PROPERTY(many_upgrade_chance_heroic)	TAG_REFL_PROPERTY(many_upgrade_chance_legendary)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_perception_properties_block)	TAG_REFL_PROPERTY(max_vision_distance_world_units)	TAG_REFL_PROPERTY(central_vision_angle_degrees)	TAG_REFL_PROPERTY(max_vision_angle_degrees)	TAG_REFL_PROPERTY(peripheral_vision_angle_degrees)	TAG_REFL_PROPERTY(peripheral_distance_world_units)	TAG_REFL_PROPERTY(hearing_distance_world_units)	TAG_REFL_PROPERTY(notice_project_chance)	TAG_REFL_PROPERTY(notice_vehicle_chance)	TAG_REFL_PROPERTY(combat_perception_time)	TAG_REFL_PROPERTY(guard_perception_time)	TAG_REFL_PROPERTY(noncombat_perception_time)	TAG_REFL_PROPERTY(first_ack_surprise_distance_world_units)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_look_properties_block)	TAG_REFL_PROPERTY(maximum_aiming_deviation_y)	TAG_REFL_PROPERTY(maximum_aiming_deviation_p)	TAG_REFL_PROPERTY(maximum_looking_deviation_y)	TAG_REFL_PROPERTY(maximum_looking_deviation_p)	TAG_REFL_PROPERTY(noncombat_look_delta_l)	TAG_REFL_PROPERTY(noncombat_look_delta_r)	TAG_REFL_PROPERTY(combat_look_delta_l)	TAG_REFL_PROPERTY(combat_look_delta_r)	TAG_REFL_PROPERTY(noncombat_idle_looking_seconds)	TAG_REFL_PROPERTY(to_seconds)	TAG_REFL_PROPERTY(noncombat_idle_aiming_seconds)	TAG_REFL_PROPERTY(to_seconds)	TAG_REFL_PROPERTY(combat_idle_looking_seconds)	TAG_REFL_PROPERTY(to_seconds)	TAG_REFL_PROPERTY(combat_idle_aiming_seconds)	TAG_REFL_PROPERTY(to_seconds)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_movement_properties_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(pathfinding_radius)	TAG_REFL_PROPERTY(destination_radius)	TAG_REFL_PROPERTY(dive_grenade_chance)	TAG_REFL_PROPERTY(obstacle_leap_min_size)	TAG_REFL_PROPERTY(obstacle_leap_max_size)	TAG_REFL_PROPERTY(obstacle_ignore_size)	TAG_REFL_PROPERTY(obstacle_smashable_size)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(jump_height)	TAG_REFL_PROPERTY(movement_hints)	TAG_REFL_PROPERTY(throttle_scale)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_swarm_properties_block)	TAG_REFL_PROPERTY(scatter_radius)	TAG_REFL_PROPERTY(scatter_time)	TAG_REFL_PROPERTY(hound_min_distance)	TAG_REFL_PROPERTY(hound_max_distance)	TAG_REFL_PROPERTY(perlin_offset_scale)	TAG_REFL_PROPERTY(offset_period)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(perlin_idle_movement_threshold)	TAG_REFL_PROPERTY(perlin_combat_movement_threshold)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_ready_properties_block)	TAG_REFL_PROPERTY(ready_time_bounds)	TAG_REFL_PROPERTY(to)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_engage_properties_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(crouch_danger_threshold)	TAG_REFL_PROPERTY(stand_danger_threshold)	TAG_REFL_PROPERTY(fight_danger_move_threshold)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_charge_properties_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(melee_consider_range)	TAG_REFL_PROPERTY(melee_chance)	TAG_REFL_PROPERTY(melee_atack_range)	TAG_REFL_PROPERTY(melee_abort_range)	TAG_REFL_PROPERTY(melee_attack_timeout)	TAG_REFL_PROPERTY(melee_attack_delay_timer)	TAG_REFL_PROPERTY(melee_leap_range)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(melee_leap_chance)	TAG_REFL_PROPERTY(ideal_leap_velocity)	TAG_REFL_PROPERTY(max_leap_velocity)	TAG_REFL_PROPERTY(melee_leap_ballistic)	TAG_REFL_PROPERTY(melee_delay_timer)	TAG_REFL_TAG_REFERENCE(berserk_weapon)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_evasion_properties_block)	TAG_REFL_PROPERTY(evasion_danger_threshold)	TAG_REFL_PROPERTY(evasion_delay_timer)	TAG_REFL_PROPERTY(evasion_chance)	TAG_REFL_PROPERTY(evasion_proximity_threshold)	TAG_REFL_PROPERTY(dive_retreat_chance)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_cover_properties_block)	TAG_REFL_PROPERTY(hide_behind_cover_time)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(cover_vitality_threshold)	TAG_REFL_PROPERTY(cover_shield_fraction)	TAG_REFL_PROPERTY(cover_check_delay)	TAG_REFL_PROPERTY(emerge_from_cover_when_shielded)	TAG_REFL_PROPERTY(cover_danger_threshold)	TAG_REFL_PROPERTY(danger_upper_threshold)	TAG_REFL_PROPERTY(cover_chance)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(proximity_self_preserve)	TAG_REFL_PROPERTY(disallow_cover_distance)	TAG_REFL_PROPERTY(proximity_melee_distance)	TAG_REFL_PROPERTY(unreachable_enemy_danger_threshold)	TAG_REFL_PROPERTY(scary_target_threshold)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_retreat_properties_block)	TAG_REFL_PROPERTY(retreat_flags)	TAG_REFL_PROPERTY(shield_threshold)	TAG_REFL_PROPERTY(scary_target_threshold)	TAG_REFL_PROPERTY(danger_threshold)	TAG_REFL_PROPERTY(proximity_threshold)	TAG_REFL_PROPERTY(minmax_forced_cower_time_bounds)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(minmax_cower_time_bounds)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(proximity_ambush_threshold)	TAG_REFL_PROPERTY(awareness_ambush_threshold)	TAG_REFL_PROPERTY(leader_dead_retreat_chance)	TAG_REFL_PROPERTY(peer_dead_retreat_chance)	TAG_REFL_PROPERTY(second_peer_dead_retreat_chance)	TAG_REFL_PROPERTY(zigzag_angle)	TAG_REFL_PROPERTY(zigzag_period)	TAG_REFL_PROPERTY(retreat_grenade_chance)	TAG_REFL_TAG_REFERENCE(backup_weapon)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_search_properties_block)	TAG_REFL_PROPERTY(search_flags)	TAG_REFL_PROPERTY(search_time)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(uncover_distance_bounds)	TAG_REFL_PROPERTY(to)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_presearch_properties_block)	TAG_REFL_PROPERTY(min_presearch_time)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(max_presearch_time)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(min_certainty_radius)	TAG_REFL_PROPERTY(deprecated)	TAG_REFL_PROPERTY(min_suppressing_time)	TAG_REFL_PROPERTY(to)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_idle_properties_block)	TAG_REFL_PROPERTY(idle_pose_delay_time)	TAG_REFL_PROPERTY(to)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_vocalization_properties_block)	TAG_REFL_PROPERTY(look_comment_time)	TAG_REFL_PROPERTY(look_long_comment_time)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_boarding_properties_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(max_distance)	TAG_REFL_PROPERTY(abort_distance)	TAG_REFL_PROPERTY(max_speed)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_boss_properties_block)	TAG_REFL_PROPERTY(flurry_damage_threshold)	TAG_REFL_PROPERTY(flurry_time)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_weapons_properties_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_TAG_REFERENCE(weapon)	TAG_REFL_PROPERTY(maximum_firing_range)	TAG_REFL_PROPERTY(minimum_firing_range)	TAG_REFL_PROPERTY(normal_combat_range)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(bombardment_range)	TAG_REFL_PROPERTY(max_special_target_distance)	TAG_REFL_PROPERTY(timid_combat_range)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(aggressive_combat_range)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(super_ballistic_range)	TAG_REFL_PROPERTY(ballistic_firing_bounds)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(ballistic_fraction_bounds)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(first_burst_delay_time)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(surprise_delay_time)	TAG_REFL_PROPERTY(surprise_firewildly_time)	TAG_REFL_PROPERTY(death_firewildly_chance)	TAG_REFL_PROPERTY(death_firewildly_time)	TAG_REFL_PROPERTY(custom_stand_gun_offset_i)	TAG_REFL_PROPERTY(custom_stand_gun_offset_j)	TAG_REFL_PROPERTY(custom_stand_gun_offset_k)	TAG_REFL_PROPERTY(custom_crouch_gun_offset_i)	TAG_REFL_PROPERTY(custom_crouch_gun_offset_j)	TAG_REFL_PROPERTY(custom_crouch_gun_offset_k)	TAG_REFL_PROPERTY(special_fire_mode)	TAG_REFL_PROPERTY(special_fire_situation)	TAG_REFL_PROPERTY(special_fire_chance)	TAG_REFL_PROPERTY(special_fire_delay)	TAG_REFL_PROPERTY(special_damage_modifier)	TAG_REFL_PROPERTY(special_projectile_error)	TAG_REFL_PROPERTY(drop_weapon_loaded)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(drop_weapon_ammo)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(normal_accuracy_bounds)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(normal_accuracy_time)	TAG_REFL_PROPERTY(heroic_accuracy_bounds)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(heroic_accuracy_time)	TAG_REFL_PROPERTY(legendary_accuracy_bounds)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(legendary_accuracy_time)	TAG_REFL_TAG_REFERENCE(weapon_melee_damage)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_firing_pattern_properties_group_definition::s_firing_patterns_block)	TAG_REFL_PROPERTY(rate_of_fire)	TAG_REFL_PROPERTY(target_tracking)	TAG_REFL_PROPERTY(target_leading)	TAG_REFL_PROPERTY(burst_origin_radius)	TAG_REFL_PROPERTY(burst_return_length)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(burst_return_angle)	TAG_REFL_PROPERTY(burst_duration)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(burst_separation)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(weapon_damage_modifier)	TAG_REFL_PROPERTY(projectile_error)	TAG_REFL_PROPERTY(burst_angular_velocity)	TAG_REFL_PROPERTY(maximum_error_angle)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_firing_pattern_properties_block)	TAG_REFL_TAG_REFERENCE(weapon)	TAG_REFL_TAG_BLOCK(firing_patterns)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_grenades_properties_block)	TAG_REFL_PROPERTY(grenade_type)	TAG_REFL_PROPERTY(trajectory_type)	TAG_REFL_PROPERTY(minimum_enemy_count)	TAG_REFL_PROPERTY(enemy_radius)	TAG_REFL_PROPERTY(grenade_ideal_velocity)	TAG_REFL_PROPERTY(grenade_velocity)	TAG_REFL_PROPERTY(grenade_ranges)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(collateral_damage_radius)	TAG_REFL_PROPERTY(grenade_chance)	TAG_REFL_PROPERTY(grenade_throw_delay)	TAG_REFL_PROPERTY(grenade_uncover_chance)	TAG_REFL_PROPERTY(antivehicle_grenade_chance)	TAG_REFL_PROPERTY(grenade_count)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(dont_drop_grenades_chance)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_character_group_definition::s_vehicle_properties_block)	TAG_REFL_TAG_REFERENCE(vehicle)	TAG_REFL_TAG_REFERENCE(style)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(ai_pathfinding_radius)	TAG_REFL_PROPERTY(ai_destination_radius)	TAG_REFL_PROPERTY(ai_deceleration_distance)	TAG_REFL_PROPERTY(ai_turning_radius)	TAG_REFL_PROPERTY(ai_inner_turning_radius)	TAG_REFL_PROPERTY(ai_ideal_turning_radius)	TAG_REFL_PROPERTY(ai_banshee_steering_maximum)	TAG_REFL_PROPERTY(ai_max_steering_angle)	TAG_REFL_PROPERTY(ai_max_steering_delta)	TAG_REFL_PROPERTY(ai_oversteering_scale)	TAG_REFL_PROPERTY(ai_oversteering_bounds)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(ai_side_slip_distance)	TAG_REFL_PROPERTY(ai_avoidance_distance)	TAG_REFL_PROPERTY(ai_min_urgency)	TAG_REFL_PROPERTY(ai_throttle_maximum)	TAG_REFL_PROPERTY(ai_goal_min_throttle_scale)	TAG_REFL_PROPERTY(ai_turn_min_throttle_scale)	TAG_REFL_PROPERTY(ai_direction_min_throttle_scale)	TAG_REFL_PROPERTY(ai_acceleration_scale)	TAG_REFL_PROPERTY(ai_throttle_blend)	TAG_REFL_PROPERTY(theoretical_max_speed)	TAG_REFL_PROPERTY(error_scale)	TAG_REFL_PROPERTY(ai_allowable_aim_deviation_angle)	TAG_REFL_PROPERTY(ai_charge_tight_angle_distance)	TAG_REFL_PROPERTY(ai_charge_tight_angle)	TAG_REFL_PROPERTY(ai_charge_repeat_timeout)	TAG_REFL_PROPERTY(ai_charge_lookahead_time)	TAG_REFL_PROPERTY(ai_consider_distance)	TAG_REFL_PROPERTY(ai_charge_abort_distance)	TAG_REFL_PROPERTY(vehicle_ram_timeout)	TAG_REFL_PROPERTY(ram_paralysis_time)	TAG_REFL_PROPERTY(ai_cover_damage_threshold)	TAG_REFL_PROPERTY(ai_cover_min_distance)	TAG_REFL_PROPERTY(ai_cover_time)	TAG_REFL_PROPERTY(ai_cover_min_boost_distance)	TAG_REFL_PROPERTY(turtling_recent_damage_threshold)	TAG_REFL_PROPERTY(turtling_min_time)	TAG_REFL_PROPERTY(turtling_timeout)	TAG_REFL_PROPERTY(obstacle_ignore_size)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL(s_character_group_definition)	TAG_REFL_PROPERTY(character_flags)	TAG_REFL_TAG_REFERENCE(parent_gunner)	TAG_REFL_TAG_REFERENCE(unit)	TAG_REFL_TAG_REFERENCE(creature)	TAG_REFL_TAG_REFERENCE(style)	TAG_REFL_TAG_REFERENCE(major_character)	TAG_REFL_TAG_BLOCK(variation)	TAG_REFL_TAG_BLOCK(general_properties)	TAG_REFL_TAG_BLOCK(character_stats)	TAG_REFL_TAG_BLOCK(placement_properties)	TAG_REFL_TAG_BLOCK(perception_properties)	TAG_REFL_TAG_BLOCK(look_properties)	TAG_REFL_TAG_BLOCK(movement_properties)	TAG_REFL_TAG_BLOCK(swarm_properties)	TAG_REFL_TAG_BLOCK(ready_properties)	TAG_REFL_TAG_BLOCK(engage_properties)	TAG_REFL_TAG_BLOCK(charge_properties)	TAG_REFL_TAG_BLOCK(evasion_properties)	TAG_REFL_TAG_BLOCK(cover_properties)	TAG_REFL_TAG_BLOCK(retreat_properties)	TAG_REFL_TAG_BLOCK(search_properties)	TAG_REFL_TAG_BLOCK(presearch_properties)	TAG_REFL_TAG_BLOCK(idle_properties)	TAG_REFL_TAG_BLOCK(vocalization_properties)	TAG_REFL_TAG_BLOCK(boarding_properties)	TAG_REFL_TAG_BLOCK(boss_properties)	TAG_REFL_TAG_BLOCK(weapons_properties)	TAG_REFL_TAG_BLOCK(firing_pattern_properties)	TAG_REFL_TAG_BLOCK(grenades_properties)	TAG_REFL_TAG_BLOCK(vehicle_properties)REFL_END

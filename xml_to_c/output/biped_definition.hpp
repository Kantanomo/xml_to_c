#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: biped
		* group_tag : bipd
 		* header size : 788
		* *********************************************************************/ 
struct s_biped_group_definition
{
enum class e_object_type : __int16
{
biped = 0,
vehicle = 1,
weapon = 2,
equipment = 3,
garbage = 4,
projectile = 5,
scenery = 6,
machine = 7,
control = 8,
light_fixture = 9,
sound_scenery = 10,
crate = 11,
creature = 12,
};
e_object_type object_type;//0x0
enum class e_flags : __int16
{
does_not_cast_shadow = FLAG(0),
search_cardinal_direction_lightmaps = FLAG(1),
bit_2 = FLAG(2),
not_a_pathfinding_obstacle = FLAG(3),
extension_of_parent = FLAG(4),
does_not_cause_collision_damage = FLAG(5),
early_mover = FLAG(6),
early_mover_localized_physics = FLAG(7),
use_static_massive_lightmap_sample = FLAG(8),
object_scales_attachments = FLAG(9),
inherits_players_appearance = FLAG(10),
dead_bipeds_cant_localize = FLAG(11),
attach_to_clusters_by_dynamic_sphere = FLAG(12),
effects_created_by_this_object_do_not_spawn_objects_in_multiplayer = FLAG(13),
};
e_flags flags;//0x2
float bounding_radius;//0x4
float bounding_offset_x;//0x8
float bounding_offset_y;//0xC
float bounding_offset_z;//0x10
float acceleration_scale;//0x14
enum class e_lightmap_shadow_mode : __int16
{
default = 0,
never = 1,
always = 2,
};
e_lightmap_shadow_mode lightmap_shadow_mode;//0x18
enum class e_sweetener_size : __int8
{
small = 0,
medium = 1,
large = 2,
};
e_sweetener_size sweetener_size;//0x1A
__int8 unknown;//0x1B
__int32 unknown;//0x1C
float dynamic_light_sphere_radius;//0x20
float dynamic_light_sphere_offset_x;//0x24
float dynamic_light_sphere_offset_y;//0x28
float dynamic_light_sphere_offset_z;//0x2C
string_id default_model_variant;//0x30
tag_reference model;//0x34
tag_reference crate_object;//0x3C
tag_reference modifier_shader;//0x44
tag_reference creation_effect;//0x4C
tag_reference material_effects;//0x54
struct s_ai_properties_block
{
enum class e_flags : __int32
{
destroyable_cover = FLAG(0),
pathfinding_ignore_when_dead = FLAG(1),
dynamic_cover = FLAG(2),
};
e_flags flags;//0x0
string_id ai_type_name;//0x4
PAD(0x4);//0x8
enum class e_size : __int16
{
default = 0,
tiny = 1,
small = 2,
medium = 3,
large = 4,
huge = 5,
immobile = 6,
};
e_size size;//0xC
enum class e_leap_jump_speed : __int16
{
none = 0,
down = 1,
step = 2,
crouch = 3,
stand = 4,
storey = 5,
tower = 6,
infinite = 7,
};
e_leap_jump_speed leap_jump_speed;//0xE
};
TAG_BLOCK_SIZE_ASSERT(s_ai_properties_block,0x10);
tag_block<s_ai_properties_block> ai_properties;//0x5C
struct s_functions_block
{
enum class e_flags : __int32
{
invert = FLAG(0),
mapping_does_not_controls_active = FLAG(1),
always_active = FLAG(2),
random_time_offset = FLAG(3),
};
e_flags flags;//0x0
string_id import_name;//0x4
string_id export_name;//0x8
string_id turn_off_with;//0xC
float minimum_value;//0x10
data_block default_function;//0x14
string_id scale_by;//0x1C
};
TAG_BLOCK_SIZE_ASSERT(s_functions_block,0x20);
tag_block<s_functions_block> functions;//0x64
float apply_collision_damage_scale;//0x6C
float min_game_acceleration;//0x70
float max_game_acceleration;//0x74
float min_game_scale;//0x78
float max_game_scale;//0x7C
float min_absolute_acceleration;//0x80
float max_absolute_acceleration;//0x84
float min_absolute_scale;//0x88
float max_absolute_scale;//0x8C
__int16 hud_text_message_index;//0x90
__int16 unknown;//0x92
struct s_attachments_block
{
tag_reference type;//0x0
string_id marker;//0x8
enum class e_change_color : __int16
{
none = 0,
primary = 1,
secondary = 2,
tertiary = 3,
quaternary = 4,
};
e_change_color change_color;//0xC
__int16 unknown;//0xE
string_id primary_scale;//0x10
string_id secondary_scale;//0x14
};
TAG_BLOCK_SIZE_ASSERT(s_attachments_block,0x18);
tag_block<s_attachments_block> attachments;//0x94
struct s_widgets_block
{
tag_reference type;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_widgets_block,0x8);
tag_block<s_widgets_block> widgets;//0x9C
struct s_old_functions_block
{
PAD(0x50);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_old_functions_block,0x50);
tag_block<s_old_functions_block> old_functions;//0xA4
struct s_change_colors_block
{
struct s_initial_permutations_block
{
float weight;//0x0
real_color_rgb color_lower_bound;//0x4
real_color_rgb color_upper_bound;//0x10
string_id variant_name;//0x1C
};
TAG_BLOCK_SIZE_ASSERT(s_initial_permutations_block,0x20);
tag_block<s_initial_permutations_block> initial_permutations;//0x0
struct s_functions_block
{
enum class e_scale_flags : __int32
{
blend_in_hsv = FLAG(0),
more_colors = FLAG(1),
};
e_scale_flags scale_flags;//0x0
real_color_rgb color_lower_bound;//0x4
real_color_rgb color_upper_bound;//0x10
string_id darken_by;//0x1C
string_id scale_by;//0x20
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-4);//0x24
};
TAG_BLOCK_SIZE_ASSERT(s_functions_block,0x20);
tag_block<s_functions_block> functions;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_change_colors_block,0x10);
tag_block<s_change_colors_block> change_colors;//0xAC
struct s_predicted_resource_block
{
enum class e_type : __int16
{
bitmap = 0,
sound = 1,
render_model_geometry = 2,
cluster_geometry = 3,
cluster_instanced_geometry = 4,
lightmap_geometry_object_buckets = 5,
lightmap_geometry_instance_buckets = 6,
lightmap_cluster_bitmaps = 7,
lightmap_instance_bitmaps = 8,
};
e_type type;//0x0
__int16 resource_index;//0x2
tag_referenceN tag_index;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_predicted_resource_block,0x8);
tag_block<s_predicted_resource_block> predicted_resource;//0xB4
enum class e_flags : __int32
{
circular_aiming = FLAG(0),
destroyed_after_dying = FLAG(1),
halfspeed_interpolation = FLAG(2),
fires_from_camera = FLAG(3),
entrance_inside_bounding_sphere = FLAG(4),
doesnt_show_readied_weapon = FLAG(5),
causes_passenger_dialogue = FLAG(6),
resists_pings = FLAG(7),
melee_attack_is_fatal = FLAG(8),
dont_reface_during_pings = FLAG(9),
has_no_aiming = FLAG(10),
simple_creature = FLAG(11),
impact_melee_attaches_to_unit = FLAG(12),
impact_melee_dies_on_shield = FLAG(13),
cannot_open_doors_automatically = FLAG(14),
melee_attackers_cannot_attach = FLAG(15),
not_instantly_killed_by_melee = FLAG(16),
shield_sapping = FLAG(17),
runs_around_flaming = FLAG(18),
inconsequential = FLAG(19),
special_cinematic_unit = FLAG(20),
ignored_by_autoaiming = FLAG(21),
shields_fry_infection_forms = FLAG(22),
bit_23 = FLAG(23),
bit_24 = FLAG(24),
acts_as_gunner_for_parent = FLAG(25),
controlled_by_parent_gunner = FLAG(26),
parents_primary_weapon = FLAG(27),
unit_has_boost = FLAG(28),
};
e_flags flags;//0xBC
enum class e_default_team : __int16
{
default = 0,
player = 1,
human = 2,
covenant = 3,
flood = 4,
sentinel = 5,
heretic = 6,
prophet = 7,
unused8 = 8,
unused9 = 9,
unused10 = 10,
unused11 = 11,
unused12 = 12,
unused13 = 13,
unused14 = 14,
unused15 = 15,
};
e_default_team default_team;//0xC0
enum class e_constant_sound_volume : __int16
{
silent = 0,
medium = 1,
loud = 2,
shout = 3,
quiet = 4,
};
e_constant_sound_volume constant_sound_volume;//0xC2
tag_reference integrated_light_toggle;//0xC4
angle camera_field_of_view;//0xCC
float camera_stiffness;//0xD0
string_id camera_marker_name;//0xD4
string_id camera_submerged_marker_name;//0xD8
angle pitch_autolevel;//0xDC
angle pitch_range_min;//0xE0
angle pitch_range_max;//0xE4
struct s_camera_tracks_block
{
tag_reference track;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_camera_tracks_block,0x8);
tag_block<s_camera_tracks_block> camera_tracks;//0xE8
float acceleration_range_i;//0xF0
float acceleration_range_j;//0xF4
float acceleration_range_k;//0xF8
float acceleration_action_scale;//0xFC
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-8);//0x100
float acceleration_attach_scale;//0xF8
PAD(0x8);//0xFC
float soft_ping_threshold;//0x104
float soft_ping_interrupt_time;//0x108
float hard_ping_threshold;//0x10C
float hard_ping_interrupt_time;//0x110
float hard_ping_death_threshold;//0x114
float feign_death_threshold;//0x118
float feign_death_time;//0x11C
float distance_of_evade_animation;//0x120
float distance_of_dive_animation;//0x124
float stunned_movement_threshold;//0x128
float feign_death_chance;//0x12C
float feign_repeat_chance;//0x130
tag_reference spawned_turret_character;//0x134
__int16 spawned_actor_count_min;//0x13C
__int16 spawned_actor_count_max;//0x13E
float spawned_velocity;//0x140
angle aiming_velocity_maximum;//0x144
angle aiming_acceleration_maximum;//0x148
float casual_aiming_modifier;//0x14C
angle looking_velocity_maximum;//0x150
angle looking_accel_maximum;//0x154
string_id right_hand_node;//0x158
string_id left_hand_node;//0x15C
string_id preferred_gun_node;//0x160
tag_reference melee_damage;//0x164
tag_reference boarding_melee_damage;//0x16C
tag_reference boarding_melee_response;//0x174
tag_reference landing_melee_damage;//0x17C
tag_reference flurry_melee_damage;//0x184
tag_reference obstacle_smash_damage;//0x18C
enum class e_motion_sensor_blip_size : __int16
{
medium = 0,
small = 1,
large = 2,
};
e_motion_sensor_blip_size motion_sensor_blip_size;//0x194
__int16 unknown;//0x196
struct s_postures_block
{
string_id name;//0x0
float pill_offset_i;//0x4
float pill_offset_j;//0x8
float pill_offset_k;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_postures_block,0x10);
tag_block<s_postures_block> postures;//0x198
struct s_new_hud_interfaces_block
{
tag_reference new_unit_hud_interface;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_new_hud_interfaces_block,0x8);
tag_block<s_new_hud_interfaces_block> new_hud_interfaces;//0x1A0
struct s_dialogue_variants_block
{
__int16 variant_number;//0x0
__int16 unknown;//0x2
tag_reference dialogue;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_dialogue_variants_block,0xC);
tag_block<s_dialogue_variants_block> dialogue_variants;//0x1A8
float grenade_velocity;//0x1B0
enum class e_grenade_type : __int16
{
human_fragmentation = 0,
covenant_plasma = 1,
};
e_grenade_type grenade_type;//0x1B4
unsigned __int16 grenade_count;//0x1B6
struct s_powered_seats_block
{
float driver_powerup_time;//0x0
float driver_powerdown_time;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_powered_seats_block,0x8);
tag_block<s_powered_seats_block> powered_seats;//0x1B8
struct s_weapons_block
{
tag_reference weapon;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_weapons_block,0x8);
tag_block<s_weapons_block> weapons;//0x1C0
struct s_seats_block
{
enum class e_flags : __int32
{
invisible = FLAG(0),
locked = FLAG(1),
driver = FLAG(2),
gunner = FLAG(3),
third_person_camera = FLAG(4),
allows_weapons = FLAG(5),
third_person_on_enter = FLAG(6),
first_person_camera_slaved_to_gun = FLAG(7),
allow_vehicle_communication_animations = FLAG(8),
not_valid_without_driver = FLAG(9),
allow_ai_noncombatants = FLAG(10),
boarding_seat = FLAG(11),
ai_firing_disabled_by_max_acceleration = FLAG(12),
boarding_enters_seat = FLAG(13),
boarding_need_any_passenger = FLAG(14),
controls_open_and_close = FLAG(15),
invalid_for_player = FLAG(16),
invalid_for_nonplayer = FLAG(17),
gunner_player_only = FLAG(18),
invisible_under_major_damage = FLAG(19),
};
e_flags flags;//0x0
string_id seat_animation;//0x4
string_id seat_marker_name;//0x8
string_id entry_markers_name;//0xC
string_id boarding_grenade_marker;//0x10
string_id boarding_grenade_string;//0x14
string_id boarding_melee_string;//0x18
float ping_scale;//0x1C
float turnover_time;//0x20
float acceleration_range_i;//0x24
float acceleration_range_j;//0x28
float acceleration_range_k;//0x2C
float acceleration_action_scale;//0x30
float acceleration_attach_scale;//0x34
float ai_scariness;//0x38
enum class e_ai_seat_type : __int16
{
none = 0,
passenger = 1,
gunner = 2,
small_cargo = 3,
large_cargo = 4,
driver = 5,
};
e_ai_seat_type ai_seat_type;//0x3C
__int16 boarding_seat;//0x3E
float listener_interpolation_factor;//0x40
float yaw_rate_bounds_min;//0x44
float yaw_rate_bounds_max;//0x48
float pitch_rate_bounds_min;//0x4C
float pitch_rate_bounds_max;//0x50
float minimum_speed_reference;//0x54
float maximum_speed_reference;//0x58
float speed_exponent;//0x5C
string_id camera_marker_name;//0x60
string_id camera_submerged_marker_name;//0x64
float pitch_autolevel;//0x68
angle pitch_range_min;//0x6C
angle pitch_range_max;//0x70
struct s_camera_tracks_block
{
tag_reference track;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_camera_tracks_block,0x8);
tag_block<s_camera_tracks_block> camera_tracks;//0x74
struct s_unit_hud_interface_block
{
tag_reference new_unit_hud_interface;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_unit_hud_interface_block,0x8);
tag_block<s_unit_hud_interface_block> unit_hud_interface;//0x7C
string_id enter_seat_string;//0x84
angle yaw_range_min;//0x88
angle yaw_range_max;//0x8C
tag_reference builtin_gunner;//0x90
float entry_radius;//0x98
angle entry_marker_cone_angle;//0x9C
angle entry_marker_facing_angle;//0xA0
float maximum_relative_velocity;//0xA4
string_id invisible_seat_region;//0xA8
__int32 runtime_invisible_seat_region_index;//0xAC
};
TAG_BLOCK_SIZE_ASSERT(s_seats_block,0xB0);
tag_block<s_seats_block> seats;//0x1C8
float boost_peak_power;//0x1D0
float boost_rise_power;//0x1D4
float boost_peak_time;//0x1D8
float boost_fall_power;//0x1DC
float boost_dead_time;//0x1E0
float lipsync_attack_weight;//0x1E4
float lipsync_decay_weight;//0x1E8
angle moving_turning_speed;//0x1EC
enum class e_flags : __int32
{
turns_without_animating = FLAG(0),
passes_through_other_bipeds = FLAG(1),
immune_to_falling_damage = FLAG(2),
rotate_while_airborne = FLAG(3),
uses_limp_body_physics = FLAG(4),
bit_5 = FLAG(5),
random_speed_increase = FLAG(6),
bit_7 = FLAG(7),
spawn_death_children_on_destroy = FLAG(8),
stunned_by_emp_damage = FLAG(9),
dead_physics_when_stunned = FLAG(10),
always_ragdoll_when_dead = FLAG(11),
};
e_flags flags;//0x1F0
angle stationary_turning_threshold;//0x1F4
float jump_velocity;//0x1F8
float maximum_soft_landing_time;//0x1FC
float maximum_hard_landing_time;//0x200
float minimum_soft_landing_velocity;//0x204
float minimum_hard_landing_velocity;//0x208
float maximum_hard_landing_velocity;//0x20C
float death_hard_landing_velocity;//0x210
float stun_duration;//0x214
float standing_camera_height;//0x218
float crouching_camera_height;//0x21C
float crouch_transition_time;//0x220
angle camera_interpolation_start;//0x224
angle camera_interpolation_end;//0x228
float camera_forward_movement_scale;//0x22C
float camera_side_movement_scale;//0x230
float camera_vertical_movement_scale;//0x234
float camera_exclusion_distance;//0x238
float autoaim_width;//0x23C
enum class e_lockon_flags : __int32
{
locked_by_human_targeting = FLAG(0),
locked_by_plasma_targeting = FLAG(1),
always_locked_by_human_targeting = FLAG(2),
};
e_lockon_flags lockon_flags;//0x240
float lockon_distance;//0x244
__int16 unknown;//0x248
__int16 unknown;//0x24A
float unknown;//0x24C
float unknown;//0x250
__int16 unknown;//0x254
__int16 unknown;//0x256
float headshot_acceleration_scale;//0x258
tag_reference area_damage_effect;//0x25C
enum class e_flags : __int32
{
centered_at_origin = FLAG(0),
shape_sperical = FLAG(1),
use_player_physics = FLAG(2),
climb_any_surface = FLAG(3),
flying = FLAG(4),
not_physical = FLAG(5),
dead_character_collision_group = FLAG(6),
};
e_flags flags;//0x264
float height_standing;//0x268
float height_crouching;//0x26C
float radius;//0x270
float mass;//0x274
string_id living_material_name;//0x278
string_id dead_material_name;//0x27C
__int16 living_global_material_index;//0x280
__int16 dead_global_material_index;//0x282
struct s_dead_sphere_shapes_block
{
string_id name;//0x0
__int16 global_material_index;//0x4
enum class e_flags : __int16
{
bit_0 = FLAG(0),
};
e_flags flags;//0x6
float relative_mass_scale;//0x8
float friction;//0xC
float restitution;//0x10
float volume;//0x14
float mass;//0x18
__int16 unknown;//0x1C
__int16 phantom;//0x1E
__int32 unknown;//0x20
__int16 size;//0x24
__int16 count;//0x26
__int32 unknown;//0x28
float radius;//0x2C
__int32 unknown;//0x30
__int16 size;//0x34
__int16 count;//0x36
__int32 unknown;//0x38
__int32 offset;//0x3C
float rotation_i_i;//0x40
float rotation_i_j;//0x44
float rotation_i_k;//0x48
float rotation_i_radius;//0x4C
float rotation_j_i;//0x50
float rotation_j_j;//0x54
float rotation_j_k;//0x58
float rotation_j_radius;//0x5C
float rotation_k_i;//0x60
float rotation_k_j;//0x64
float rotation_k_k;//0x68
float rotation_k_radius;//0x6C
float translation_i;//0x70
float translation_j;//0x74
float translation_k;//0x78
float translation_radius;//0x7C
};
TAG_BLOCK_SIZE_ASSERT(s_dead_sphere_shapes_block,0x80);
tag_block<s_dead_sphere_shapes_block> dead_sphere_shapes;//0x284
struct s_pill_shapes_block
{
string_id name;//0x0
__int16 global_material_index;//0x4
enum class e_flags : __int16
{
bit_0 = FLAG(0),
};
e_flags flags;//0x6
float relative_mass_scale;//0x8
float friction;//0xC
float restitution;//0x10
float volume;//0x14
float mass;//0x18
__int16 unknown;//0x1C
__int16 phantom;//0x1E
__int32 unknown;//0x20
__int16 size;//0x24
__int16 count;//0x26
__int32 unknown;//0x28
float radius;//0x2C
float bottom_i;//0x30
float bottom_j;//0x34
float bottom_k;//0x38
float bottom_radius;//0x3C
float top_i;//0x40
float top_j;//0x44
float top_k;//0x48
float top_radius;//0x4C
};
TAG_BLOCK_SIZE_ASSERT(s_pill_shapes_block,0x50);
tag_block<s_pill_shapes_block> pill_shapes;//0x28C
struct s_sphere_shapes_block
{
string_id name;//0x0
__int16 global_material_index;//0x4
enum class e_flags : __int16
{
bit_0 = FLAG(0),
};
e_flags flags;//0x6
float relative_mass_scale;//0x8
float friction;//0xC
float restitution;//0x10
float volume;//0x14
float mass;//0x18
__int16 unknown;//0x1C
__int16 phantom;//0x1E
__int32 unknown;//0x20
__int16 size;//0x24
__int16 count;//0x26
__int32 unknown;//0x28
float radius;//0x2C
__int32 unknown;//0x30
__int16 size;//0x34
__int16 count;//0x36
__int32 unknown;//0x38
__int32 offset;//0x3C
float rotation_i_i;//0x40
float rotation_i_j;//0x44
float rotation_i_k;//0x48
float rotation_i_radius;//0x4C
float rotation_j_i;//0x50
float rotation_j_j;//0x54
float rotation_j_k;//0x58
float rotation_j_radius;//0x5C
float rotation_k_i;//0x60
float rotation_k_j;//0x64
float rotation_k_k;//0x68
float rotation_k_radius;//0x6C
float translation_i;//0x70
float translation_j;//0x74
float translation_k;//0x78
float translation_radius;//0x7C
};
TAG_BLOCK_SIZE_ASSERT(s_sphere_shapes_block,0x80);
tag_block<s_sphere_shapes_block> sphere_shapes;//0x294
angle maximum_slope_angle;//0x29C
angle downhill_falloff_angle;//0x2A0
angle downhill_cutoff_angle;//0x2A4
angle uphill_falloff_angle;//0x2A8
angle uphill_cutoff_angle;//0x2AC
float downhill_velocity_scale;//0x2B0
float uphill_velocity_scale;//0x2B4
float unknown;//0x2B8
float unknown;//0x2BC
float unknown;//0x2C0
float unknown;//0x2C4
float unknown;//0x2C8
angle bank_angle;//0x2CC
float bank_apply_time;//0x2D0
float bank_decay_time;//0x2D4
float pitch_ratio;//0x2D8
float maximum_velocity;//0x2DC
float maximum_sidestep_velocity;//0x2E0
float acceleration;//0x2E4
float deceleration;//0x2E8
angle angular_velocity_maximum;//0x2EC
angle angular_acceleration_maximum;//0x2F0
float crouch_velocity_modifier;//0x2F4
struct s_contact_points_block
{
string_id marker;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_contact_points_block,0x4);
tag_block<s_contact_points_block> contact_points;//0x2F8
tag_reference reanimation_character;//0x300
tag_reference death_spawn_character;//0x308
__int16 death_spawn_count;//0x310
__int16 unknown;//0x312
};
TAG_GROUP_SIZE_ASSERT(s_biped_group_definition,0x314);
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_ai_properties_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_STRING_ID(ai_type_name)	TAG_REFL_PROPERTY(size)	TAG_REFL_PROPERTY(leap_jump_speed)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_functions_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_STRING_ID(import_name)	TAG_REFL_STRING_ID(export_name)	TAG_REFL_STRING_ID(turn_off_with)	TAG_REFL_PROPERTY(minimum_value)	TAG_REFL_DATA_BLOCK(default_function)	TAG_REFL_STRING_ID(scale_by)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_attachments_block)	TAG_REFL_TAG_REFERENCE(type)	TAG_REFL_STRING_ID(marker)	TAG_REFL_PROPERTY(change_color)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_STRING_ID(primary_scale)	TAG_REFL_STRING_ID(secondary_scale)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_widgets_block)	TAG_REFL_TAG_REFERENCE(type)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_old_functions_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_change_colors_block::s_initial_permutations_block)	TAG_REFL_PROPERTY(weight)	TAG_REFL_REAL_COLOR_RGB(color_lower_bound)	TAG_REFL_REAL_COLOR_RGB(color_upper_bound)	TAG_REFL_STRING_ID(variant_name)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_change_colors_block::s_functions_block)	TAG_REFL_PROPERTY(scale_flags)	TAG_REFL_REAL_COLOR_RGB(color_lower_bound)	TAG_REFL_REAL_COLOR_RGB(color_upper_bound)	TAG_REFL_STRING_ID(darken_by)	TAG_REFL_STRING_ID(scale_by)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_change_colors_block)	TAG_REFL_TAG_BLOCK(initial_permutations)	TAG_REFL_TAG_BLOCK(functions)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_predicted_resource_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(resource_index)	TAG_REFL_TAG_REFERENCE(tag_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_camera_tracks_block)	TAG_REFL_TAG_REFERENCE(track)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_postures_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(pill_offset_i)	TAG_REFL_PROPERTY(pill_offset_j)	TAG_REFL_PROPERTY(pill_offset_k)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_new_hud_interfaces_block)	TAG_REFL_TAG_REFERENCE(new_unit_hud_interface)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_dialogue_variants_block)	TAG_REFL_PROPERTY(variant_number)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_REFERENCE(dialogue)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_powered_seats_block)	TAG_REFL_PROPERTY(driver_powerup_time)	TAG_REFL_PROPERTY(driver_powerdown_time)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_weapons_block)	TAG_REFL_TAG_REFERENCE(weapon)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_seats_block::s_camera_tracks_block)	TAG_REFL_TAG_REFERENCE(track)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_seats_block::s_unit_hud_interface_block)	TAG_REFL_TAG_REFERENCE(new_unit_hud_interface)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_seats_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_STRING_ID(seat_animation)	TAG_REFL_STRING_ID(seat_marker_name)	TAG_REFL_STRING_ID(entry_markers_name)	TAG_REFL_STRING_ID(boarding_grenade_marker)	TAG_REFL_STRING_ID(boarding_grenade_string)	TAG_REFL_STRING_ID(boarding_melee_string)	TAG_REFL_PROPERTY(ping_scale)	TAG_REFL_PROPERTY(turnover_time)	TAG_REFL_PROPERTY(acceleration_range_i)	TAG_REFL_PROPERTY(acceleration_range_j)	TAG_REFL_PROPERTY(acceleration_range_k)	TAG_REFL_PROPERTY(acceleration_action_scale)	TAG_REFL_PROPERTY(acceleration_attach_scale)	TAG_REFL_PROPERTY(ai_scariness)	TAG_REFL_PROPERTY(ai_seat_type)	TAG_REFL_PROPERTY(boarding_seat)	TAG_REFL_PROPERTY(listener_interpolation_factor)	TAG_REFL_PROPERTY(yaw_rate_bounds_min)	TAG_REFL_PROPERTY(yaw_rate_bounds_max)	TAG_REFL_PROPERTY(pitch_rate_bounds_min)	TAG_REFL_PROPERTY(pitch_rate_bounds_max)	TAG_REFL_PROPERTY(minimum_speed_reference)	TAG_REFL_PROPERTY(maximum_speed_reference)	TAG_REFL_PROPERTY(speed_exponent)	TAG_REFL_STRING_ID(camera_marker_name)	TAG_REFL_STRING_ID(camera_submerged_marker_name)	TAG_REFL_PROPERTY(pitch_autolevel)	TAG_REFL_ANGLE(pitch_range_min)	TAG_REFL_ANGLE(pitch_range_max)	TAG_REFL_TAG_BLOCK(camera_tracks)	TAG_REFL_TAG_BLOCK(unit_hud_interface)	TAG_REFL_STRING_ID(enter_seat_string)	TAG_REFL_ANGLE(yaw_range_min)	TAG_REFL_ANGLE(yaw_range_max)	TAG_REFL_TAG_REFERENCE(builtin_gunner)	TAG_REFL_PROPERTY(entry_radius)	TAG_REFL_ANGLE(entry_marker_cone_angle)	TAG_REFL_ANGLE(entry_marker_facing_angle)	TAG_REFL_PROPERTY(maximum_relative_velocity)	TAG_REFL_STRING_ID(invisible_seat_region)	TAG_REFL_PROPERTY(runtime_invisible_seat_region_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_dead_sphere_shapes_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(global_material_index)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(relative_mass_scale)	TAG_REFL_PROPERTY(friction)	TAG_REFL_PROPERTY(restitution)	TAG_REFL_PROPERTY(volume)	TAG_REFL_PROPERTY(mass)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(phantom)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(size)	TAG_REFL_PROPERTY(count)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(radius)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(size)	TAG_REFL_PROPERTY(count)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(offset)	TAG_REFL_PROPERTY(rotation_i_i)	TAG_REFL_PROPERTY(rotation_i_j)	TAG_REFL_PROPERTY(rotation_i_k)	TAG_REFL_PROPERTY(rotation_i_radius)	TAG_REFL_PROPERTY(rotation_j_i)	TAG_REFL_PROPERTY(rotation_j_j)	TAG_REFL_PROPERTY(rotation_j_k)	TAG_REFL_PROPERTY(rotation_j_radius)	TAG_REFL_PROPERTY(rotation_k_i)	TAG_REFL_PROPERTY(rotation_k_j)	TAG_REFL_PROPERTY(rotation_k_k)	TAG_REFL_PROPERTY(rotation_k_radius)	TAG_REFL_PROPERTY(translation_i)	TAG_REFL_PROPERTY(translation_j)	TAG_REFL_PROPERTY(translation_k)	TAG_REFL_PROPERTY(translation_radius)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_pill_shapes_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(global_material_index)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(relative_mass_scale)	TAG_REFL_PROPERTY(friction)	TAG_REFL_PROPERTY(restitution)	TAG_REFL_PROPERTY(volume)	TAG_REFL_PROPERTY(mass)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(phantom)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(size)	TAG_REFL_PROPERTY(count)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(radius)	TAG_REFL_PROPERTY(bottom_i)	TAG_REFL_PROPERTY(bottom_j)	TAG_REFL_PROPERTY(bottom_k)	TAG_REFL_PROPERTY(bottom_radius)	TAG_REFL_PROPERTY(top_i)	TAG_REFL_PROPERTY(top_j)	TAG_REFL_PROPERTY(top_k)	TAG_REFL_PROPERTY(top_radius)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_sphere_shapes_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(global_material_index)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(relative_mass_scale)	TAG_REFL_PROPERTY(friction)	TAG_REFL_PROPERTY(restitution)	TAG_REFL_PROPERTY(volume)	TAG_REFL_PROPERTY(mass)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(phantom)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(size)	TAG_REFL_PROPERTY(count)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(radius)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(size)	TAG_REFL_PROPERTY(count)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(offset)	TAG_REFL_PROPERTY(rotation_i_i)	TAG_REFL_PROPERTY(rotation_i_j)	TAG_REFL_PROPERTY(rotation_i_k)	TAG_REFL_PROPERTY(rotation_i_radius)	TAG_REFL_PROPERTY(rotation_j_i)	TAG_REFL_PROPERTY(rotation_j_j)	TAG_REFL_PROPERTY(rotation_j_k)	TAG_REFL_PROPERTY(rotation_j_radius)	TAG_REFL_PROPERTY(rotation_k_i)	TAG_REFL_PROPERTY(rotation_k_j)	TAG_REFL_PROPERTY(rotation_k_k)	TAG_REFL_PROPERTY(rotation_k_radius)	TAG_REFL_PROPERTY(translation_i)	TAG_REFL_PROPERTY(translation_j)	TAG_REFL_PROPERTY(translation_k)	TAG_REFL_PROPERTY(translation_radius)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_biped_group_definition::s_contact_points_block)	TAG_REFL_STRING_ID(marker)REFL_END
TAG_REFL(s_biped_group_definition)	TAG_REFL_PROPERTY(object_type)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(bounding_radius)	TAG_REFL_PROPERTY(bounding_offset_x)	TAG_REFL_PROPERTY(bounding_offset_y)	TAG_REFL_PROPERTY(bounding_offset_z)	TAG_REFL_PROPERTY(acceleration_scale)	TAG_REFL_PROPERTY(lightmap_shadow_mode)	TAG_REFL_PROPERTY(sweetener_size)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(dynamic_light_sphere_radius)	TAG_REFL_PROPERTY(dynamic_light_sphere_offset_x)	TAG_REFL_PROPERTY(dynamic_light_sphere_offset_y)	TAG_REFL_PROPERTY(dynamic_light_sphere_offset_z)	TAG_REFL_STRING_ID(default_model_variant)	TAG_REFL_TAG_REFERENCE(model)	TAG_REFL_TAG_REFERENCE(crate_object)	TAG_REFL_TAG_REFERENCE(modifier_shader)	TAG_REFL_TAG_REFERENCE(creation_effect)	TAG_REFL_TAG_REFERENCE(material_effects)	TAG_REFL_TAG_BLOCK(ai_properties)	TAG_REFL_TAG_BLOCK(functions)	TAG_REFL_PROPERTY(apply_collision_damage_scale)	TAG_REFL_PROPERTY(min_game_acceleration)	TAG_REFL_PROPERTY(max_game_acceleration)	TAG_REFL_PROPERTY(min_game_scale)	TAG_REFL_PROPERTY(max_game_scale)	TAG_REFL_PROPERTY(min_absolute_acceleration)	TAG_REFL_PROPERTY(max_absolute_acceleration)	TAG_REFL_PROPERTY(min_absolute_scale)	TAG_REFL_PROPERTY(max_absolute_scale)	TAG_REFL_PROPERTY(hud_text_message_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_BLOCK(attachments)	TAG_REFL_TAG_BLOCK(widgets)	TAG_REFL_TAG_BLOCK(old_functions)	TAG_REFL_TAG_BLOCK(change_colors)	TAG_REFL_TAG_BLOCK(predicted_resource)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(default_team)	TAG_REFL_PROPERTY(constant_sound_volume)	TAG_REFL_TAG_REFERENCE(integrated_light_toggle)	TAG_REFL_ANGLE(camera_field_of_view)	TAG_REFL_PROPERTY(camera_stiffness)	TAG_REFL_STRING_ID(camera_marker_name)	TAG_REFL_STRING_ID(camera_submerged_marker_name)	TAG_REFL_ANGLE(pitch_autolevel)	TAG_REFL_ANGLE(pitch_range_min)	TAG_REFL_ANGLE(pitch_range_max)	TAG_REFL_TAG_BLOCK(camera_tracks)	TAG_REFL_PROPERTY(acceleration_range_i)	TAG_REFL_PROPERTY(acceleration_range_j)	TAG_REFL_PROPERTY(acceleration_range_k)	TAG_REFL_PROPERTY(acceleration_action_scale)	TAG_REFL_PROPERTY(acceleration_attach_scale)	TAG_REFL_PROPERTY(soft_ping_threshold)	TAG_REFL_PROPERTY(soft_ping_interrupt_time)	TAG_REFL_PROPERTY(hard_ping_threshold)	TAG_REFL_PROPERTY(hard_ping_interrupt_time)	TAG_REFL_PROPERTY(hard_ping_death_threshold)	TAG_REFL_PROPERTY(feign_death_threshold)	TAG_REFL_PROPERTY(feign_death_time)	TAG_REFL_PROPERTY(distance_of_evade_animation)	TAG_REFL_PROPERTY(distance_of_dive_animation)	TAG_REFL_PROPERTY(stunned_movement_threshold)	TAG_REFL_PROPERTY(feign_death_chance)	TAG_REFL_PROPERTY(feign_repeat_chance)	TAG_REFL_TAG_REFERENCE(spawned_turret_character)	TAG_REFL_PROPERTY(spawned_actor_count_min)	TAG_REFL_PROPERTY(spawned_actor_count_max)	TAG_REFL_PROPERTY(spawned_velocity)	TAG_REFL_ANGLE(aiming_velocity_maximum)	TAG_REFL_ANGLE(aiming_acceleration_maximum)	TAG_REFL_PROPERTY(casual_aiming_modifier)	TAG_REFL_ANGLE(looking_velocity_maximum)	TAG_REFL_ANGLE(looking_accel_maximum)	TAG_REFL_STRING_ID(right_hand_node)	TAG_REFL_STRING_ID(left_hand_node)	TAG_REFL_STRING_ID(preferred_gun_node)	TAG_REFL_TAG_REFERENCE(melee_damage)	TAG_REFL_TAG_REFERENCE(boarding_melee_damage)	TAG_REFL_TAG_REFERENCE(boarding_melee_response)	TAG_REFL_TAG_REFERENCE(landing_melee_damage)	TAG_REFL_TAG_REFERENCE(flurry_melee_damage)	TAG_REFL_TAG_REFERENCE(obstacle_smash_damage)	TAG_REFL_PROPERTY(motion_sensor_blip_size)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_BLOCK(postures)	TAG_REFL_TAG_BLOCK(new_hud_interfaces)	TAG_REFL_TAG_BLOCK(dialogue_variants)	TAG_REFL_PROPERTY(grenade_velocity)	TAG_REFL_PROPERTY(grenade_type)	TAG_REFL_PROPERTY(grenade_count)	TAG_REFL_TAG_BLOCK(powered_seats)	TAG_REFL_TAG_BLOCK(weapons)	TAG_REFL_TAG_BLOCK(seats)	TAG_REFL_PROPERTY(boost_peak_power)	TAG_REFL_PROPERTY(boost_rise_power)	TAG_REFL_PROPERTY(boost_peak_time)	TAG_REFL_PROPERTY(boost_fall_power)	TAG_REFL_PROPERTY(boost_dead_time)	TAG_REFL_PROPERTY(lipsync_attack_weight)	TAG_REFL_PROPERTY(lipsync_decay_weight)	TAG_REFL_ANGLE(moving_turning_speed)	TAG_REFL_PROPERTY(flags)	TAG_REFL_ANGLE(stationary_turning_threshold)	TAG_REFL_PROPERTY(jump_velocity)	TAG_REFL_PROPERTY(maximum_soft_landing_time)	TAG_REFL_PROPERTY(maximum_hard_landing_time)	TAG_REFL_PROPERTY(minimum_soft_landing_velocity)	TAG_REFL_PROPERTY(minimum_hard_landing_velocity)	TAG_REFL_PROPERTY(maximum_hard_landing_velocity)	TAG_REFL_PROPERTY(death_hard_landing_velocity)	TAG_REFL_PROPERTY(stun_duration)	TAG_REFL_PROPERTY(standing_camera_height)	TAG_REFL_PROPERTY(crouching_camera_height)	TAG_REFL_PROPERTY(crouch_transition_time)	TAG_REFL_ANGLE(camera_interpolation_start)	TAG_REFL_ANGLE(camera_interpolation_end)	TAG_REFL_PROPERTY(camera_forward_movement_scale)	TAG_REFL_PROPERTY(camera_side_movement_scale)	TAG_REFL_PROPERTY(camera_vertical_movement_scale)	TAG_REFL_PROPERTY(camera_exclusion_distance)	TAG_REFL_PROPERTY(autoaim_width)	TAG_REFL_PROPERTY(lockon_flags)	TAG_REFL_PROPERTY(lockon_distance)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(headshot_acceleration_scale)	TAG_REFL_TAG_REFERENCE(area_damage_effect)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(height_standing)	TAG_REFL_PROPERTY(height_crouching)	TAG_REFL_PROPERTY(radius)	TAG_REFL_PROPERTY(mass)	TAG_REFL_STRING_ID(living_material_name)	TAG_REFL_STRING_ID(dead_material_name)	TAG_REFL_PROPERTY(living_global_material_index)	TAG_REFL_PROPERTY(dead_global_material_index)	TAG_REFL_TAG_BLOCK(dead_sphere_shapes)	TAG_REFL_TAG_BLOCK(pill_shapes)	TAG_REFL_TAG_BLOCK(sphere_shapes)	TAG_REFL_ANGLE(maximum_slope_angle)	TAG_REFL_ANGLE(downhill_falloff_angle)	TAG_REFL_ANGLE(downhill_cutoff_angle)	TAG_REFL_ANGLE(uphill_falloff_angle)	TAG_REFL_ANGLE(uphill_cutoff_angle)	TAG_REFL_PROPERTY(downhill_velocity_scale)	TAG_REFL_PROPERTY(uphill_velocity_scale)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_ANGLE(bank_angle)	TAG_REFL_PROPERTY(bank_apply_time)	TAG_REFL_PROPERTY(bank_decay_time)	TAG_REFL_PROPERTY(pitch_ratio)	TAG_REFL_PROPERTY(maximum_velocity)	TAG_REFL_PROPERTY(maximum_sidestep_velocity)	TAG_REFL_PROPERTY(acceleration)	TAG_REFL_PROPERTY(deceleration)	TAG_REFL_ANGLE(angular_velocity_maximum)	TAG_REFL_ANGLE(angular_acceleration_maximum)	TAG_REFL_PROPERTY(crouch_velocity_modifier)	TAG_REFL_TAG_BLOCK(contact_points)	TAG_REFL_TAG_REFERENCE(reanimation_character)	TAG_REFL_TAG_REFERENCE(death_spawn_character)	TAG_REFL_PROPERTY(death_spawn_count)	TAG_REFL_PROPERTY(unknown)REFL_END

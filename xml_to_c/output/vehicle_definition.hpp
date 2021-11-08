#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: vehicle
		* group_tag : vehi
 		* header size : 768
		* *********************************************************************/ 
struct s_vehicle_group_definition
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
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-2);//0x2
enum class e_flags : __int32
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
e_flags flags;//0x0
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
PAD(0xC);//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_dialogue_variants_block,0x18);
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
enum class e_flags : __int32
{
speed_wakes_physics = FLAG(0),
turn_wakes_physics = FLAG(1),
driver_power_wakes_physics = FLAG(2),
gunner_power_wakes_physics = FLAG(3),
control_opposite_speed_sets_brake = FLAG(4),
slide_wakes_physics = FLAG(5),
kills_riders_at_terminal_velocity = FLAG(6),
causes_collision_damage = FLAG(7),
ai_weapon_cannot_rotate = FLAG(8),
ai_does_not_require_driver = FLAG(9),
ai_unused = FLAG(10),
ai_driver_enable = FLAG(11),
ai_driver_flying = FLAG(12),
ai_driver_cansidestep = FLAG(13),
ai_driver_hovering = FLAG(14),
vehicle_steers_directly = FLAG(15),
bit_16 = FLAG(16),
has_ebrake = FLAG(17),
noncombat_vehicle = FLAG(18),
no_friction_with_driver = FLAG(19),
can_trigger_automatic_opening_doors = FLAG(20),
autoaim_when_teamless = FLAG(21),
};
e_flags flags;//0x1EC
enum class e_type : __int16
{
human_tank = 0,
human_jeep = 1,
human_boat = 2,
human_plane = 3,
alien_scout = 4,
alien_fighter = 5,
turret = 6,
};
e_type type;//0x1F0
enum class e_control : __int16
{
vehicle_control_normal = 0,
vehicle_control_unused = 1,
vehicle_control_tank = 2,
};
e_control control;//0x1F2
float maximum_forward_speed;//0x1F4
float maximum_reverse_speed;//0x1F8
float speed_acceleration;//0x1FC
float speed_deceleration;//0x200
float maximum_left_turn;//0x204
float maximum_right_turn_negative;//0x208
float wheel_circumference;//0x20C
float turn_rate;//0x210
float blur_speed;//0x214
enum class e_specific_type : __int16
{
none = 0,
ghost = 1,
wraith = 2,
spectre = 3,
sentinal_enforcer = 4,
};
e_specific_type specific_type;//0x218
enum class e_player_training_vehicle_type : __int16
{
none = 0,
warthog = 1,
warthog_turret = 2,
ghost = 3,
banshee = 4,
tank = 5,
wraith = 6,
};
e_player_training_vehicle_type player_training_vehicle_type;//0x21A
string_id flip_message;//0x21C
float turn_scale;//0x220
float speed_turn_penalty_power;//0x224
float speed_turn_penalty;//0x228
float maximum_left_slide;//0x22C
float maximum_right_slide;//0x230
float slide_acceleration;//0x234
float slide_deceleration;//0x238
float minimum_flipping_angular_velocity;//0x23C
float maximum_flipping_angular_velocity;//0x240
enum class e_vehicle_size : __int16
{
small = 0,
large = 1,
};
e_vehicle_size vehicle_size;//0x244
__int16 unknown;//0x246
float fixed_gun_yaw;//0x248
float fixed_gun_pitch;//0x24C
float steering_overdampen_cusp_angle;//0x250
float steering_overdampen_exponent;//0x254
float crouch_transition_time;//0x258
PAD(0x4);//0x25C
float engine_momentum;//0x260
float engine_max_angular_velocity;//0x264
struct s_gears_block
{
float min_torque;//0x0
float max_torque;//0x4
float peak_torque_scale;//0x8
float past_peak_torque_exponent;//0xC
float torque_at_max_angular_velocity;//0x10
float torque_at_2x_max_angular_velocity;//0x14
float min_torque;//0x18
float max_torque;//0x1C
float peak_torque_scale;//0x20
float past_peak_torque_exponent;//0x24
float torque_at_max_angular_velocity;//0x28
float torque_at_2x_max_angular_velocity;//0x2C
float min_time_to_upshift;//0x30
float engine_upshift_scale;//0x34
float gear_ratio;//0x38
float min_time_to_downshift;//0x3C
float engine_downshift_scale;//0x40
};
TAG_BLOCK_SIZE_ASSERT(s_gears_block,0x44);
tag_block<s_gears_block> gears;//0x268
float flying_torque_scale;//0x270
float seat_enterance_acceleration_scale;//0x274
float seat_exit_acceleration_scale;//0x278
float air_friction_deceleration;//0x27C
float thrust_scale;//0x280
tag_reference suspension_sound;//0x284
tag_reference crash_sound;//0x28C
tag_reference unused;//0x294
tag_reference special_effect;//0x29C
tag_reference unused_effect;//0x2A4
enum class e_flags : __int32
{
invalid = FLAG(0),
};
e_flags flags;//0x2AC
float ground_friction;//0x2B0
float ground_depth;//0x2B4
float ground_damp_factor;//0x2B8
float ground_moving_friction;//0x2BC
float ground_maximum_slope_0;//0x2C0
float ground_maximum_slope_1_less_than_slope_0;//0x2C4
PAD(0x10);//0x2C8
float anti_gravity_bank_lift;//0x2D8
float steering_bank_reaction_scale;//0x2DC
float gravity_scale;//0x2E0
float radius;//0x2E4
struct s_antigrav_points_block
{
string_id marker_name;//0x0
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-2);//0x4
enum class e_flags : __int32
{
gets_damage_from_region = FLAG(0),
};
e_flags flags;//0x2
PAD(0x2);//0x6
float antigrav_strength;//0x8
float antigrav_offset;//0xC
float antigrav_height;//0x10
float antigrav_damp_factor;//0x14
float antigrav_normal_k1;//0x18
float antigrav_normal_k0;//0x1C
float radius;//0x20
PAD(0xC);//0x24
__int16 unknown;//0x30
__int16 damage_source_region_index;//0x32
string_id damage_source_region_name;//0x34
float default_state_error;//0x38
float minor_damage_error;//0x3C
float medium_damage_error;//0x40
float major_damage_error;//0x44
float destoryed_state_error;//0x48
};
TAG_BLOCK_SIZE_ASSERT(s_antigrav_points_block,0x4C);
tag_block<s_antigrav_points_block> antigrav_points;//0x2E8
struct s_friction_points_block
{
string_id marker_name;//0x0
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-2);//0x4
enum class e_flags : __int32
{
gets_damage_from_region = FLAG(0),
powered = FLAG(1),
front_turning = FLAG(2),
rear_turning = FLAG(3),
attached_to_ebrake = FLAG(4),
can_be_destroyed = FLAG(5),
};
e_flags flags;//0x2
PAD(0x2);//0x6
float fraction_of_total_mass;//0x8
float radius;//0xC
float damaged_radius;//0x10
enum class e_friction_type : __int16
{
point = 0,
forward = 1,
};
e_friction_type friction_type;//0x14
__int16 unknown;//0x16
float moving_friction_velocity_diff;//0x18
float ebrake_moving_friction;//0x1C
float ebrake_friction;//0x20
float ebrake_moving_friction_velocity_diff;//0x24
PAD(0x14);//0x28
string_id collision_global_material_name;//0x3C
__int16 collision_global_material_index;//0x40
enum class e_model_state_destroyed : __int16
{
default = 0,
minor_damage = 1,
medium_damage = 2,
major_damage = 3,
destroyed = 4,
};
e_model_state_destroyed model_state_destroyed;//0x42
string_id region_name;//0x44
__int16 region_index;//0x48
__int16 unknown;//0x4A
};
TAG_BLOCK_SIZE_ASSERT(s_friction_points_block,0x4C);
tag_block<s_friction_points_block> friction_points;//0x2F0
struct s_phantom_shapes_block
{
__int32 unknown;//0x0
__int16 size;//0x4
__int16 count;//0x6
__int32 overall_shape_index;//0x8
__int32 offset;//0xC
unsigned __int32 child_shapes_size;//0x10
unsigned __int32 child_shapes_capacity;//0x14
enum class e_shape_type : __int16
{
sphere = 0,
pill = 1,
box = 2,
triangle = 3,
polyhedron = 4,
multisphere = 5,
unused_0 = 6,
unused_1 = 7,
unused_2 = 8,
unused_3 = 9,
unused_4 = 10,
unused_5 = 11,
unused_6 = 12,
unused_7 = 13,
list = 14,
mopp = 15,
};
e_shape_type shape_type;//0x18
__int16 shape_index;//0x1A
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-4);//0x1C
unsigned __int32 shape_pointer_typeindex_together;//0x18
unsigned __int32 collision_filter;//0x1C
enum class e_shape_type : __int16
{
sphere = 0,
pill = 1,
box = 2,
triangle = 3,
polyhedron = 4,
multisphere = 5,
unused_0 = 6,
unused_1 = 7,
unused_2 = 8,
unused_3 = 9,
unused_4 = 10,
unused_5 = 11,
unused_6 = 12,
unused_7 = 13,
list = 14,
mopp = 15,
};
e_shape_type shape_type;//0x20
__int16 shape_index;//0x22
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-4);//0x24
unsigned __int32 shape_pointer_typeindex_together;//0x20
unsigned __int32 collision_filter;//0x24
enum class e_shape_type : __int16
{
sphere = 0,
pill = 1,
box = 2,
triangle = 3,
polyhedron = 4,
multisphere = 5,
unused_0 = 6,
unused_1 = 7,
unused_2 = 8,
unused_3 = 9,
unused_4 = 10,
unused_5 = 11,
unused_6 = 12,
unused_7 = 13,
list = 14,
mopp = 15,
};
e_shape_type shape_type;//0x28
__int16 shape_index;//0x2A
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-4);//0x2C
unsigned __int32 shape_pointer_typeindex_together;//0x28
unsigned __int32 collision_filter;//0x2C
enum class e_shape_type : __int16
{
sphere = 0,
pill = 1,
box = 2,
triangle = 3,
polyhedron = 4,
multisphere = 5,
unused_0 = 6,
unused_1 = 7,
unused_2 = 8,
unused_3 = 9,
unused_4 = 10,
unused_5 = 11,
unused_6 = 12,
unused_7 = 13,
list = 14,
mopp = 15,
};
e_shape_type shape_type;//0x30
__int16 shape_index;//0x32
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-4);//0x34
unsigned __int32 shape_pointer_typeindex_together;//0x30
unsigned __int32 collision_filter;//0x34
unsigned __int32 multisphere_count;//0x38
enum class e_flags : __int32
{
has_aabb_phantom = FLAG(0),
bit_1 = FLAG(1),
bit_2 = FLAG(2),
bit_3 = FLAG(3),
bit_4 = FLAG(4),
bit_5 = FLAG(5),
bit_6 = FLAG(6),
bit_7 = FLAG(7),
bit_8 = FLAG(8),
bit_9 = FLAG(9),
bit_10 = FLAG(10),
bit_11 = FLAG(11),
bit_12 = FLAG(12),
bit_13 = FLAG(13),
bit_14 = FLAG(14),
bit_15 = FLAG(15),
bit_16 = FLAG(16),
bit_17 = FLAG(17),
bit_18 = FLAG(18),
bit_19 = FLAG(19),
bit_20 = FLAG(20),
bit_21 = FLAG(21),
bit_22 = FLAG(22),
bit_23 = FLAG(23),
bit_24 = FLAG(24),
bit_25 = FLAG(25),
bit_26 = FLAG(26),
bit_27 = FLAG(27),
bit_28 = FLAG(28),
bit_29 = FLAG(29),
bit_30 = FLAG(30),
bit_31 = FLAG(31),
};
e_flags flags;//0x3C
PAD(0x8);//0x40
float x0;//0x48
float x1;//0x4C
float y0;//0x50
float y1;//0x54
float z0;//0x58
float z1;//0x5C
__int32 unknown;//0x60
__int16 size;//0x64
__int16 count;//0x66
__int32 overall_shape_index;//0x68
unsigned __int32 number_of_spheres;//0x6C
float sphere_0_x;//0x70
float sphere_0_y;//0x74
float sphere_0_z;//0x78
float sphere_0_radius;//0x7C
float sphere_1_x;//0x80
float sphere_1_y;//0x84
float sphere_1_z;//0x88
float sphere_1_radius;//0x8C
float sphere_2_x;//0x90
float sphere_2_y;//0x94
float sphere_2_z;//0x98
float sphere_2_radius;//0x9C
float sphere_3_x;//0xA0
float sphere_3_y;//0xA4
float sphere_3_z;//0xA8
float sphere_3_radius;//0xAC
float sphere_4_x;//0xB0
float sphere_4_y;//0xB4
float sphere_4_z;//0xB8
float sphere_4_radius;//0xBC
float sphere_5_x;//0xC0
float sphere_5_y;//0xC4
float sphere_5_z;//0xC8
float sphere_5_radius;//0xCC
float sphere_6_x;//0xD0
float sphere_6_y;//0xD4
float sphere_6_z;//0xD8
float sphere_6_radius;//0xDC
float sphere_7_x;//0xE0
float sphere_7_y;//0xE4
float sphere_7_z;//0xE8
float sphere_7_radius;//0xEC
__int32 unknown;//0xF0
__int16 size;//0xF4
__int16 count;//0xF6
__int32 overall_shape_index;//0xF8
unsigned __int32 number_of_spheres;//0xFC
float sphere_0_x;//0x100
float sphere_0_y;//0x104
float sphere_0_z;//0x108
float sphere_0_radius;//0x10C
float sphere_1_x;//0x110
float sphere_1_y;//0x114
float sphere_1_z;//0x118
float sphere_1_radius;//0x11C
float sphere_2_x;//0x120
float sphere_2_y;//0x124
float sphere_2_z;//0x128
float sphere_2_radius;//0x12C
float sphere_3_x;//0x130
float sphere_3_y;//0x134
float sphere_3_z;//0x138
float sphere_3_radius;//0x13C
float sphere_4_x;//0x140
float sphere_4_y;//0x144
float sphere_4_z;//0x148
float sphere_4_radius;//0x14C
float sphere_5_x;//0x150
float sphere_5_y;//0x154
float sphere_5_z;//0x158
float sphere_5_radius;//0x15C
float sphere_6_x;//0x160
float sphere_6_y;//0x164
float sphere_6_z;//0x168
float sphere_6_radius;//0x16C
float sphere_7_x;//0x170
float sphere_7_y;//0x174
float sphere_7_z;//0x178
float sphere_7_radius;//0x17C
__int32 unknown;//0x180
__int16 size;//0x184
__int16 count;//0x186
__int32 overall_shape_index;//0x188
unsigned __int32 number_of_spheres;//0x18C
float sphere_0_x;//0x190
float sphere_0_y;//0x194
float sphere_0_z;//0x198
float sphere_0_radius;//0x19C
float sphere_1_x;//0x1A0
float sphere_1_y;//0x1A4
float sphere_1_z;//0x1A8
float sphere_1_radius;//0x1AC
float sphere_2_x;//0x1B0
float sphere_2_y;//0x1B4
float sphere_2_z;//0x1B8
float sphere_2_radius;//0x1BC
float sphere_3_x;//0x1C0
float sphere_3_y;//0x1C4
float sphere_3_z;//0x1C8
float sphere_3_radius;//0x1CC
float sphere_4_x;//0x1D0
float sphere_4_y;//0x1D4
float sphere_4_z;//0x1D8
float sphere_4_radius;//0x1DC
float sphere_5_x;//0x1E0
float sphere_5_y;//0x1E4
float sphere_5_z;//0x1E8
float sphere_5_radius;//0x1EC
float sphere_6_x;//0x1F0
float sphere_6_y;//0x1F4
float sphere_6_z;//0x1F8
float sphere_6_radius;//0x1FC
float sphere_7_x;//0x200
float sphere_7_y;//0x204
float sphere_7_z;//0x208
float sphere_7_radius;//0x20C
__int32 unknown;//0x210
__int16 size;//0x214
__int16 count;//0x216
__int32 overall_shape_index;//0x218
unsigned __int32 number_of_spheres;//0x21C
float sphere_0_x;//0x220
float sphere_0_y;//0x224
float sphere_0_z;//0x228
float sphere_0_radius;//0x22C
float sphere_1_x;//0x230
float sphere_1_y;//0x234
float sphere_1_z;//0x238
float sphere_1_radius;//0x23C
float sphere_2_x;//0x240
float sphere_2_y;//0x244
float sphere_2_z;//0x248
float sphere_2_radius;//0x24C
float sphere_3_x;//0x250
float sphere_3_y;//0x254
float sphere_3_z;//0x258
float sphere_3_radius;//0x25C
float sphere_4_x;//0x260
float sphere_4_y;//0x264
float sphere_4_z;//0x268
float sphere_4_radius;//0x26C
float sphere_5_x;//0x270
float sphere_5_y;//0x274
float sphere_5_z;//0x278
float sphere_5_radius;//0x27C
float sphere_6_x;//0x280
float sphere_6_y;//0x284
float sphere_6_z;//0x288
float sphere_6_radius;//0x28C
float sphere_7_x;//0x290
float sphere_7_y;//0x294
float sphere_7_z;//0x298
float sphere_7_radius;//0x29C
};
TAG_BLOCK_SIZE_ASSERT(s_phantom_shapes_block,0x2A0);
tag_block<s_phantom_shapes_block> phantom_shapes;//0x2F8
};
TAG_GROUP_SIZE_ASSERT(s_vehicle_group_definition,0x300);
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_ai_properties_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_STRING_ID(ai_type_name)	TAG_REFL_PROPERTY(size)	TAG_REFL_PROPERTY(leap_jump_speed)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_functions_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_STRING_ID(import_name)	TAG_REFL_STRING_ID(export_name)	TAG_REFL_STRING_ID(turn_off_with)	TAG_REFL_PROPERTY(minimum_value)	TAG_REFL_DATA_BLOCK(default_function)	TAG_REFL_STRING_ID(scale_by)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_attachments_block)	TAG_REFL_TAG_REFERENCE(type)	TAG_REFL_STRING_ID(marker)	TAG_REFL_PROPERTY(change_color)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_STRING_ID(primary_scale)	TAG_REFL_STRING_ID(secondary_scale)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_widgets_block)	TAG_REFL_TAG_REFERENCE(type)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_old_functions_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_change_colors_block::s_initial_permutations_block)	TAG_REFL_PROPERTY(weight)	TAG_REFL_REAL_COLOR_RGB(color_lower_bound)	TAG_REFL_REAL_COLOR_RGB(color_upper_bound)	TAG_REFL_STRING_ID(variant_name)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_change_colors_block::s_functions_block)	TAG_REFL_PROPERTY(scale_flags)	TAG_REFL_REAL_COLOR_RGB(color_lower_bound)	TAG_REFL_REAL_COLOR_RGB(color_upper_bound)	TAG_REFL_STRING_ID(darken_by)	TAG_REFL_STRING_ID(scale_by)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_change_colors_block)	TAG_REFL_TAG_BLOCK(initial_permutations)	TAG_REFL_TAG_BLOCK(functions)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_predicted_resource_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(resource_index)	TAG_REFL_TAG_REFERENCE(tag_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_camera_tracks_block)	TAG_REFL_TAG_REFERENCE(track)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_postures_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(pill_offset_i)	TAG_REFL_PROPERTY(pill_offset_j)	TAG_REFL_PROPERTY(pill_offset_k)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_new_hud_interfaces_block)	TAG_REFL_TAG_REFERENCE(new_unit_hud_interface)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_dialogue_variants_block)	TAG_REFL_PROPERTY(variant_number)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_REFERENCE(dialogue)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_powered_seats_block)	TAG_REFL_PROPERTY(driver_powerup_time)	TAG_REFL_PROPERTY(driver_powerdown_time)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_weapons_block)	TAG_REFL_TAG_REFERENCE(weapon)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_seats_block::s_camera_tracks_block)	TAG_REFL_TAG_REFERENCE(track)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_seats_block::s_unit_hud_interface_block)	TAG_REFL_TAG_REFERENCE(new_unit_hud_interface)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_seats_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_STRING_ID(seat_animation)	TAG_REFL_STRING_ID(seat_marker_name)	TAG_REFL_STRING_ID(entry_markers_name)	TAG_REFL_STRING_ID(boarding_grenade_marker)	TAG_REFL_STRING_ID(boarding_grenade_string)	TAG_REFL_STRING_ID(boarding_melee_string)	TAG_REFL_PROPERTY(ping_scale)	TAG_REFL_PROPERTY(turnover_time)	TAG_REFL_PROPERTY(acceleration_range_i)	TAG_REFL_PROPERTY(acceleration_range_j)	TAG_REFL_PROPERTY(acceleration_range_k)	TAG_REFL_PROPERTY(acceleration_action_scale)	TAG_REFL_PROPERTY(acceleration_attach_scale)	TAG_REFL_PROPERTY(ai_scariness)	TAG_REFL_PROPERTY(ai_seat_type)	TAG_REFL_PROPERTY(boarding_seat)	TAG_REFL_PROPERTY(listener_interpolation_factor)	TAG_REFL_PROPERTY(yaw_rate_bounds_min)	TAG_REFL_PROPERTY(yaw_rate_bounds_max)	TAG_REFL_PROPERTY(pitch_rate_bounds_min)	TAG_REFL_PROPERTY(pitch_rate_bounds_max)	TAG_REFL_PROPERTY(minimum_speed_reference)	TAG_REFL_PROPERTY(maximum_speed_reference)	TAG_REFL_PROPERTY(speed_exponent)	TAG_REFL_STRING_ID(camera_marker_name)	TAG_REFL_STRING_ID(camera_submerged_marker_name)	TAG_REFL_PROPERTY(pitch_autolevel)	TAG_REFL_ANGLE(pitch_range_min)	TAG_REFL_ANGLE(pitch_range_max)	TAG_REFL_TAG_BLOCK(camera_tracks)	TAG_REFL_TAG_BLOCK(unit_hud_interface)	TAG_REFL_STRING_ID(enter_seat_string)	TAG_REFL_ANGLE(yaw_range_min)	TAG_REFL_ANGLE(yaw_range_max)	TAG_REFL_TAG_REFERENCE(builtin_gunner)	TAG_REFL_PROPERTY(entry_radius)	TAG_REFL_ANGLE(entry_marker_cone_angle)	TAG_REFL_ANGLE(entry_marker_facing_angle)	TAG_REFL_PROPERTY(maximum_relative_velocity)	TAG_REFL_STRING_ID(invisible_seat_region)	TAG_REFL_PROPERTY(runtime_invisible_seat_region_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_gears_block)	TAG_REFL_PROPERTY(min_torque)	TAG_REFL_PROPERTY(max_torque)	TAG_REFL_PROPERTY(peak_torque_scale)	TAG_REFL_PROPERTY(past_peak_torque_exponent)	TAG_REFL_PROPERTY(torque_at_max_angular_velocity)	TAG_REFL_PROPERTY(torque_at_2x_max_angular_velocity)	TAG_REFL_PROPERTY(min_torque)	TAG_REFL_PROPERTY(max_torque)	TAG_REFL_PROPERTY(peak_torque_scale)	TAG_REFL_PROPERTY(past_peak_torque_exponent)	TAG_REFL_PROPERTY(torque_at_max_angular_velocity)	TAG_REFL_PROPERTY(torque_at_2x_max_angular_velocity)	TAG_REFL_PROPERTY(min_time_to_upshift)	TAG_REFL_PROPERTY(engine_upshift_scale)	TAG_REFL_PROPERTY(gear_ratio)	TAG_REFL_PROPERTY(min_time_to_downshift)	TAG_REFL_PROPERTY(engine_downshift_scale)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_antigrav_points_block)	TAG_REFL_STRING_ID(marker_name)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(antigrav_strength)	TAG_REFL_PROPERTY(antigrav_offset)	TAG_REFL_PROPERTY(antigrav_height)	TAG_REFL_PROPERTY(antigrav_damp_factor)	TAG_REFL_PROPERTY(antigrav_normal_k1)	TAG_REFL_PROPERTY(antigrav_normal_k0)	TAG_REFL_PROPERTY(radius)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(damage_source_region_index)	TAG_REFL_STRING_ID(damage_source_region_name)	TAG_REFL_PROPERTY(default_state_error)	TAG_REFL_PROPERTY(minor_damage_error)	TAG_REFL_PROPERTY(medium_damage_error)	TAG_REFL_PROPERTY(major_damage_error)	TAG_REFL_PROPERTY(destoryed_state_error)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_friction_points_block)	TAG_REFL_STRING_ID(marker_name)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(fraction_of_total_mass)	TAG_REFL_PROPERTY(radius)	TAG_REFL_PROPERTY(damaged_radius)	TAG_REFL_PROPERTY(friction_type)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(moving_friction_velocity_diff)	TAG_REFL_PROPERTY(ebrake_moving_friction)	TAG_REFL_PROPERTY(ebrake_friction)	TAG_REFL_PROPERTY(ebrake_moving_friction_velocity_diff)	TAG_REFL_STRING_ID(collision_global_material_name)	TAG_REFL_PROPERTY(collision_global_material_index)	TAG_REFL_PROPERTY(model_state_destroyed)	TAG_REFL_STRING_ID(region_name)	TAG_REFL_PROPERTY(region_index)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_group_definition::s_phantom_shapes_block)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(size)	TAG_REFL_PROPERTY(count)	TAG_REFL_PROPERTY(overall_shape_index)	TAG_REFL_PROPERTY(offset)	TAG_REFL_PROPERTY(child_shapes_size)	TAG_REFL_PROPERTY(child_shapes_capacity)	TAG_REFL_PROPERTY(shape_type)	TAG_REFL_PROPERTY(shape_index)	TAG_REFL_PROPERTY(shape_pointer_typeindex_together)	TAG_REFL_PROPERTY(collision_filter)	TAG_REFL_PROPERTY(shape_type)	TAG_REFL_PROPERTY(shape_index)	TAG_REFL_PROPERTY(shape_pointer_typeindex_together)	TAG_REFL_PROPERTY(collision_filter)	TAG_REFL_PROPERTY(shape_type)	TAG_REFL_PROPERTY(shape_index)	TAG_REFL_PROPERTY(shape_pointer_typeindex_together)	TAG_REFL_PROPERTY(collision_filter)	TAG_REFL_PROPERTY(shape_type)	TAG_REFL_PROPERTY(shape_index)	TAG_REFL_PROPERTY(shape_pointer_typeindex_together)	TAG_REFL_PROPERTY(collision_filter)	TAG_REFL_PROPERTY(multisphere_count)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(x0)	TAG_REFL_PROPERTY(x1)	TAG_REFL_PROPERTY(y0)	TAG_REFL_PROPERTY(y1)	TAG_REFL_PROPERTY(z0)	TAG_REFL_PROPERTY(z1)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(size)	TAG_REFL_PROPERTY(count)	TAG_REFL_PROPERTY(overall_shape_index)	TAG_REFL_PROPERTY(number_of_spheres)	TAG_REFL_PROPERTY(sphere_0_x)	TAG_REFL_PROPERTY(sphere_0_y)	TAG_REFL_PROPERTY(sphere_0_z)	TAG_REFL_PROPERTY(sphere_0_radius)	TAG_REFL_PROPERTY(sphere_1_x)	TAG_REFL_PROPERTY(sphere_1_y)	TAG_REFL_PROPERTY(sphere_1_z)	TAG_REFL_PROPERTY(sphere_1_radius)	TAG_REFL_PROPERTY(sphere_2_x)	TAG_REFL_PROPERTY(sphere_2_y)	TAG_REFL_PROPERTY(sphere_2_z)	TAG_REFL_PROPERTY(sphere_2_radius)	TAG_REFL_PROPERTY(sphere_3_x)	TAG_REFL_PROPERTY(sphere_3_y)	TAG_REFL_PROPERTY(sphere_3_z)	TAG_REFL_PROPERTY(sphere_3_radius)	TAG_REFL_PROPERTY(sphere_4_x)	TAG_REFL_PROPERTY(sphere_4_y)	TAG_REFL_PROPERTY(sphere_4_z)	TAG_REFL_PROPERTY(sphere_4_radius)	TAG_REFL_PROPERTY(sphere_5_x)	TAG_REFL_PROPERTY(sphere_5_y)	TAG_REFL_PROPERTY(sphere_5_z)	TAG_REFL_PROPERTY(sphere_5_radius)	TAG_REFL_PROPERTY(sphere_6_x)	TAG_REFL_PROPERTY(sphere_6_y)	TAG_REFL_PROPERTY(sphere_6_z)	TAG_REFL_PROPERTY(sphere_6_radius)	TAG_REFL_PROPERTY(sphere_7_x)	TAG_REFL_PROPERTY(sphere_7_y)	TAG_REFL_PROPERTY(sphere_7_z)	TAG_REFL_PROPERTY(sphere_7_radius)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(size)	TAG_REFL_PROPERTY(count)	TAG_REFL_PROPERTY(overall_shape_index)	TAG_REFL_PROPERTY(number_of_spheres)	TAG_REFL_PROPERTY(sphere_0_x)	TAG_REFL_PROPERTY(sphere_0_y)	TAG_REFL_PROPERTY(sphere_0_z)	TAG_REFL_PROPERTY(sphere_0_radius)	TAG_REFL_PROPERTY(sphere_1_x)	TAG_REFL_PROPERTY(sphere_1_y)	TAG_REFL_PROPERTY(sphere_1_z)	TAG_REFL_PROPERTY(sphere_1_radius)	TAG_REFL_PROPERTY(sphere_2_x)	TAG_REFL_PROPERTY(sphere_2_y)	TAG_REFL_PROPERTY(sphere_2_z)	TAG_REFL_PROPERTY(sphere_2_radius)	TAG_REFL_PROPERTY(sphere_3_x)	TAG_REFL_PROPERTY(sphere_3_y)	TAG_REFL_PROPERTY(sphere_3_z)	TAG_REFL_PROPERTY(sphere_3_radius)	TAG_REFL_PROPERTY(sphere_4_x)	TAG_REFL_PROPERTY(sphere_4_y)	TAG_REFL_PROPERTY(sphere_4_z)	TAG_REFL_PROPERTY(sphere_4_radius)	TAG_REFL_PROPERTY(sphere_5_x)	TAG_REFL_PROPERTY(sphere_5_y)	TAG_REFL_PROPERTY(sphere_5_z)	TAG_REFL_PROPERTY(sphere_5_radius)	TAG_REFL_PROPERTY(sphere_6_x)	TAG_REFL_PROPERTY(sphere_6_y)	TAG_REFL_PROPERTY(sphere_6_z)	TAG_REFL_PROPERTY(sphere_6_radius)	TAG_REFL_PROPERTY(sphere_7_x)	TAG_REFL_PROPERTY(sphere_7_y)	TAG_REFL_PROPERTY(sphere_7_z)	TAG_REFL_PROPERTY(sphere_7_radius)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(size)	TAG_REFL_PROPERTY(count)	TAG_REFL_PROPERTY(overall_shape_index)	TAG_REFL_PROPERTY(number_of_spheres)	TAG_REFL_PROPERTY(sphere_0_x)	TAG_REFL_PROPERTY(sphere_0_y)	TAG_REFL_PROPERTY(sphere_0_z)	TAG_REFL_PROPERTY(sphere_0_radius)	TAG_REFL_PROPERTY(sphere_1_x)	TAG_REFL_PROPERTY(sphere_1_y)	TAG_REFL_PROPERTY(sphere_1_z)	TAG_REFL_PROPERTY(sphere_1_radius)	TAG_REFL_PROPERTY(sphere_2_x)	TAG_REFL_PROPERTY(sphere_2_y)	TAG_REFL_PROPERTY(sphere_2_z)	TAG_REFL_PROPERTY(sphere_2_radius)	TAG_REFL_PROPERTY(sphere_3_x)	TAG_REFL_PROPERTY(sphere_3_y)	TAG_REFL_PROPERTY(sphere_3_z)	TAG_REFL_PROPERTY(sphere_3_radius)	TAG_REFL_PROPERTY(sphere_4_x)	TAG_REFL_PROPERTY(sphere_4_y)	TAG_REFL_PROPERTY(sphere_4_z)	TAG_REFL_PROPERTY(sphere_4_radius)	TAG_REFL_PROPERTY(sphere_5_x)	TAG_REFL_PROPERTY(sphere_5_y)	TAG_REFL_PROPERTY(sphere_5_z)	TAG_REFL_PROPERTY(sphere_5_radius)	TAG_REFL_PROPERTY(sphere_6_x)	TAG_REFL_PROPERTY(sphere_6_y)	TAG_REFL_PROPERTY(sphere_6_z)	TAG_REFL_PROPERTY(sphere_6_radius)	TAG_REFL_PROPERTY(sphere_7_x)	TAG_REFL_PROPERTY(sphere_7_y)	TAG_REFL_PROPERTY(sphere_7_z)	TAG_REFL_PROPERTY(sphere_7_radius)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(size)	TAG_REFL_PROPERTY(count)	TAG_REFL_PROPERTY(overall_shape_index)	TAG_REFL_PROPERTY(number_of_spheres)	TAG_REFL_PROPERTY(sphere_0_x)	TAG_REFL_PROPERTY(sphere_0_y)	TAG_REFL_PROPERTY(sphere_0_z)	TAG_REFL_PROPERTY(sphere_0_radius)	TAG_REFL_PROPERTY(sphere_1_x)	TAG_REFL_PROPERTY(sphere_1_y)	TAG_REFL_PROPERTY(sphere_1_z)	TAG_REFL_PROPERTY(sphere_1_radius)	TAG_REFL_PROPERTY(sphere_2_x)	TAG_REFL_PROPERTY(sphere_2_y)	TAG_REFL_PROPERTY(sphere_2_z)	TAG_REFL_PROPERTY(sphere_2_radius)	TAG_REFL_PROPERTY(sphere_3_x)	TAG_REFL_PROPERTY(sphere_3_y)	TAG_REFL_PROPERTY(sphere_3_z)	TAG_REFL_PROPERTY(sphere_3_radius)	TAG_REFL_PROPERTY(sphere_4_x)	TAG_REFL_PROPERTY(sphere_4_y)	TAG_REFL_PROPERTY(sphere_4_z)	TAG_REFL_PROPERTY(sphere_4_radius)	TAG_REFL_PROPERTY(sphere_5_x)	TAG_REFL_PROPERTY(sphere_5_y)	TAG_REFL_PROPERTY(sphere_5_z)	TAG_REFL_PROPERTY(sphere_5_radius)	TAG_REFL_PROPERTY(sphere_6_x)	TAG_REFL_PROPERTY(sphere_6_y)	TAG_REFL_PROPERTY(sphere_6_z)	TAG_REFL_PROPERTY(sphere_6_radius)	TAG_REFL_PROPERTY(sphere_7_x)	TAG_REFL_PROPERTY(sphere_7_y)	TAG_REFL_PROPERTY(sphere_7_z)	TAG_REFL_PROPERTY(sphere_7_radius)REFL_END
TAG_REFL(s_vehicle_group_definition)	TAG_REFL_PROPERTY(object_type)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(bounding_radius)	TAG_REFL_PROPERTY(bounding_offset_x)	TAG_REFL_PROPERTY(bounding_offset_y)	TAG_REFL_PROPERTY(bounding_offset_z)	TAG_REFL_PROPERTY(acceleration_scale)	TAG_REFL_PROPERTY(lightmap_shadow_mode)	TAG_REFL_PROPERTY(sweetener_size)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(dynamic_light_sphere_radius)	TAG_REFL_PROPERTY(dynamic_light_sphere_offset_x)	TAG_REFL_PROPERTY(dynamic_light_sphere_offset_y)	TAG_REFL_PROPERTY(dynamic_light_sphere_offset_z)	TAG_REFL_STRING_ID(default_model_variant)	TAG_REFL_TAG_REFERENCE(model)	TAG_REFL_TAG_REFERENCE(crate_object)	TAG_REFL_TAG_REFERENCE(modifier_shader)	TAG_REFL_TAG_REFERENCE(creation_effect)	TAG_REFL_TAG_REFERENCE(material_effects)	TAG_REFL_TAG_BLOCK(ai_properties)	TAG_REFL_TAG_BLOCK(functions)	TAG_REFL_PROPERTY(apply_collision_damage_scale)	TAG_REFL_PROPERTY(min_game_acceleration)	TAG_REFL_PROPERTY(max_game_acceleration)	TAG_REFL_PROPERTY(min_game_scale)	TAG_REFL_PROPERTY(max_game_scale)	TAG_REFL_PROPERTY(min_absolute_acceleration)	TAG_REFL_PROPERTY(max_absolute_acceleration)	TAG_REFL_PROPERTY(min_absolute_scale)	TAG_REFL_PROPERTY(max_absolute_scale)	TAG_REFL_PROPERTY(hud_text_message_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_BLOCK(attachments)	TAG_REFL_TAG_BLOCK(widgets)	TAG_REFL_TAG_BLOCK(old_functions)	TAG_REFL_TAG_BLOCK(change_colors)	TAG_REFL_TAG_BLOCK(predicted_resource)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(default_team)	TAG_REFL_PROPERTY(constant_sound_volume)	TAG_REFL_TAG_REFERENCE(integrated_light_toggle)	TAG_REFL_ANGLE(camera_field_of_view)	TAG_REFL_PROPERTY(camera_stiffness)	TAG_REFL_STRING_ID(camera_marker_name)	TAG_REFL_STRING_ID(camera_submerged_marker_name)	TAG_REFL_ANGLE(pitch_autolevel)	TAG_REFL_ANGLE(pitch_range_min)	TAG_REFL_ANGLE(pitch_range_max)	TAG_REFL_TAG_BLOCK(camera_tracks)	TAG_REFL_PROPERTY(acceleration_range_i)	TAG_REFL_PROPERTY(acceleration_range_j)	TAG_REFL_PROPERTY(acceleration_range_k)	TAG_REFL_PROPERTY(acceleration_action_scale)	TAG_REFL_PROPERTY(acceleration_attach_scale)	TAG_REFL_PROPERTY(soft_ping_threshold)	TAG_REFL_PROPERTY(soft_ping_interrupt_time)	TAG_REFL_PROPERTY(hard_ping_threshold)	TAG_REFL_PROPERTY(hard_ping_interrupt_time)	TAG_REFL_PROPERTY(hard_ping_death_threshold)	TAG_REFL_PROPERTY(feign_death_threshold)	TAG_REFL_PROPERTY(feign_death_time)	TAG_REFL_PROPERTY(distance_of_evade_animation)	TAG_REFL_PROPERTY(distance_of_dive_animation)	TAG_REFL_PROPERTY(stunned_movement_threshold)	TAG_REFL_PROPERTY(feign_death_chance)	TAG_REFL_PROPERTY(feign_repeat_chance)	TAG_REFL_TAG_REFERENCE(spawned_turret_character)	TAG_REFL_PROPERTY(spawned_actor_count_min)	TAG_REFL_PROPERTY(spawned_actor_count_max)	TAG_REFL_PROPERTY(spawned_velocity)	TAG_REFL_ANGLE(aiming_velocity_maximum)	TAG_REFL_ANGLE(aiming_acceleration_maximum)	TAG_REFL_PROPERTY(casual_aiming_modifier)	TAG_REFL_ANGLE(looking_velocity_maximum)	TAG_REFL_ANGLE(looking_accel_maximum)	TAG_REFL_STRING_ID(right_hand_node)	TAG_REFL_STRING_ID(left_hand_node)	TAG_REFL_STRING_ID(preferred_gun_node)	TAG_REFL_TAG_REFERENCE(melee_damage)	TAG_REFL_TAG_REFERENCE(boarding_melee_damage)	TAG_REFL_TAG_REFERENCE(boarding_melee_response)	TAG_REFL_TAG_REFERENCE(landing_melee_damage)	TAG_REFL_TAG_REFERENCE(flurry_melee_damage)	TAG_REFL_TAG_REFERENCE(obstacle_smash_damage)	TAG_REFL_PROPERTY(motion_sensor_blip_size)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_BLOCK(postures)	TAG_REFL_TAG_BLOCK(new_hud_interfaces)	TAG_REFL_TAG_BLOCK(dialogue_variants)	TAG_REFL_PROPERTY(grenade_velocity)	TAG_REFL_PROPERTY(grenade_type)	TAG_REFL_PROPERTY(grenade_count)	TAG_REFL_TAG_BLOCK(powered_seats)	TAG_REFL_TAG_BLOCK(weapons)	TAG_REFL_TAG_BLOCK(seats)	TAG_REFL_PROPERTY(boost_peak_power)	TAG_REFL_PROPERTY(boost_rise_power)	TAG_REFL_PROPERTY(boost_peak_time)	TAG_REFL_PROPERTY(boost_fall_power)	TAG_REFL_PROPERTY(boost_dead_time)	TAG_REFL_PROPERTY(lipsync_attack_weight)	TAG_REFL_PROPERTY(lipsync_decay_weight)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(control)	TAG_REFL_PROPERTY(maximum_forward_speed)	TAG_REFL_PROPERTY(maximum_reverse_speed)	TAG_REFL_PROPERTY(speed_acceleration)	TAG_REFL_PROPERTY(speed_deceleration)	TAG_REFL_PROPERTY(maximum_left_turn)	TAG_REFL_PROPERTY(maximum_right_turn_negative)	TAG_REFL_PROPERTY(wheel_circumference)	TAG_REFL_PROPERTY(turn_rate)	TAG_REFL_PROPERTY(blur_speed)	TAG_REFL_PROPERTY(specific_type)	TAG_REFL_PROPERTY(player_training_vehicle_type)	TAG_REFL_STRING_ID(flip_message)	TAG_REFL_PROPERTY(turn_scale)	TAG_REFL_PROPERTY(speed_turn_penalty_power)	TAG_REFL_PROPERTY(speed_turn_penalty)	TAG_REFL_PROPERTY(maximum_left_slide)	TAG_REFL_PROPERTY(maximum_right_slide)	TAG_REFL_PROPERTY(slide_acceleration)	TAG_REFL_PROPERTY(slide_deceleration)	TAG_REFL_PROPERTY(minimum_flipping_angular_velocity)	TAG_REFL_PROPERTY(maximum_flipping_angular_velocity)	TAG_REFL_PROPERTY(vehicle_size)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(fixed_gun_yaw)	TAG_REFL_PROPERTY(fixed_gun_pitch)	TAG_REFL_PROPERTY(steering_overdampen_cusp_angle)	TAG_REFL_PROPERTY(steering_overdampen_exponent)	TAG_REFL_PROPERTY(crouch_transition_time)	TAG_REFL_PROPERTY(engine_momentum)	TAG_REFL_PROPERTY(engine_max_angular_velocity)	TAG_REFL_TAG_BLOCK(gears)	TAG_REFL_PROPERTY(flying_torque_scale)	TAG_REFL_PROPERTY(seat_enterance_acceleration_scale)	TAG_REFL_PROPERTY(seat_exit_acceleration_scale)	TAG_REFL_PROPERTY(air_friction_deceleration)	TAG_REFL_PROPERTY(thrust_scale)	TAG_REFL_TAG_REFERENCE(suspension_sound)	TAG_REFL_TAG_REFERENCE(crash_sound)	TAG_REFL_TAG_REFERENCE(unused)	TAG_REFL_TAG_REFERENCE(special_effect)	TAG_REFL_TAG_REFERENCE(unused_effect)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(ground_friction)	TAG_REFL_PROPERTY(ground_depth)	TAG_REFL_PROPERTY(ground_damp_factor)	TAG_REFL_PROPERTY(ground_moving_friction)	TAG_REFL_PROPERTY(ground_maximum_slope_0)	TAG_REFL_PROPERTY(ground_maximum_slope_1_less_than_slope_0)	TAG_REFL_PROPERTY(anti_gravity_bank_lift)	TAG_REFL_PROPERTY(steering_bank_reaction_scale)	TAG_REFL_PROPERTY(gravity_scale)	TAG_REFL_PROPERTY(radius)	TAG_REFL_TAG_BLOCK(antigrav_points)	TAG_REFL_TAG_BLOCK(friction_points)	TAG_REFL_TAG_BLOCK(phantom_shapes)REFL_END

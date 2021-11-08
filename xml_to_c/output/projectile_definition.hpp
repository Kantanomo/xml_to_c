#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: projectile
		* group_tag : proj
 		* header size : 420
		* *********************************************************************/ 
struct s_projectile_group_definition
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
oriented_along_velocity = FLAG(0),
ai_must_use_ballistic_aiming = FLAG(1),
detonation_max_time_if_attached = FLAG(2),
has_super_combining_explosion = FLAG(3),
damage_scales_based_on_distance = FLAG(4),
travels_instantaneously = FLAG(5),
steering_adjusts_orientation = FLAG(6),
dont_noise_up_steering = FLAG(7),
can_track_behind_itself = FLAG(8),
robotron_steering = FLAG(9),
faster_when_owned_by_player = FLAG(10),
};
e_flags flags;//0xBC
enum class e_detonation_timer_starts : __int16
{
immediately = 0,
after_first_bounce = 1,
when_at_rest = 2,
after_first_bounce_off_any_surface = 3,
};
e_detonation_timer_starts detonation_timer_starts;//0xC0
enum class e_impact_noise : __int16
{
silent = 0,
medium = 1,
loud = 2,
shout = 3,
quiet = 4,
};
e_impact_noise impact_noise;//0xC2
float ai_perception_radius;//0xC4
float collision_radius;//0xC8
float arming_time;//0xCC
float danger_radius;//0xD0
float timer_min;//0xD4
float timer_max;//0xD8
float minimum_velocity;//0xDC
float maximum_range;//0xE0
enum class e_detonation_noise : __int16
{
silent = 0,
medium = 1,
loud = 2,
shout = 3,
quiet = 4,
};
e_detonation_noise detonation_noise;//0xE4
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-2);//0xE6
__int16 super_detonation_projectile_count;//0xE4
PAD(0x2);//0xE6
tag_reference detonation_started;//0xE8
tag_reference airborne_detonation_effect;//0xF0
tag_reference ground_detonation_effect;//0xF8
tag_reference detonation_damage;//0x100
tag_reference attached_detonation_damage;//0x108
tag_reference super_detonation;//0x110
tag_reference super_detonation_damage;//0x118
tag_reference detonation_sound;//0x120
enum class e_damage_reporting_type : __int8
{
guardians = 0,
falling_damage = 1,
collision_damage = 2,
melee_damage = 3,
explosion = 4,
magnum_pistol = 5,
plasma_pistol = 6,
needler = 7,
smg = 8,
plasma_rifle = 9,
battle_rifle = 10,
carbine = 11,
shotgun = 12,
sniper_rifle = 13,
beam_rifle = 14,
rocket_launcher = 15,
flak_cannon = 16,
brute_shot = 17,
disintegrator = 18,
brute_plasma_rifle = 19,
energy_sword = 20,
frag_grenade = 21,
plasma_grenade = 22,
flag_melee_damage = 23,
bomb_melee_damage = 24,
bomb_explosion_damage = 25,
ball_melee_damage = 26,
human_turret = 27,
plasma_turret = 28,
banshee = 29,
ghost = 30,
mongoose = 31,
scorpion = 32,
spectre_driver = 33,
spectre_gunner = 34,
warthog_driver = 35,
warthog_gunner = 36,
wraith = 37,
tank = 38,
sentinel_beam = 39,
sentinel_rpg = 40,
teleporter = 41,
};
e_damage_reporting_type damage_reporting_type;//0x128
__int8 unknown;//0x129
__int8 unknown;//0x12A
__int8 unknown;//0x12B
tag_reference attached_super_detonation_damage;//0x12C
float material_effect_radius;//0x134
tag_reference flyby_sound;//0x138
tag_reference impact_effect;//0x140
tag_reference impact_damage;//0x148
float boarding_detonation_time;//0x150
tag_reference boarding_detonation_damage;//0x154
tag_reference boarding_attached_detonation_damage;//0x15C
float air_gravity_scale;//0x164
float air_damage_range_min;//0x168
float air_damage_range_max;//0x16C
float water_gravity_scale;//0x170
float water_damage_range_min;//0x174
float water_damage_range_max;//0x178
float initial_velocity;//0x17C
float final_velocity;//0x180
angle guided_angular_velocity_lower;//0x184
angle guided_angular_velocity_upper;//0x188
float acceleration_range_min;//0x18C
float acceleration_range_max;//0x190
float unknown;//0x194
float targeted_leading_fraction;//0x198
struct s_material_responses_block
{
enum class e_flags : __int16
{
cannot_be_overpenetrated = FLAG(0),
};
e_flags flags;//0x0
enum class e_response : __int16
{
impact_detonate = 0,
fizzle = 1,
overpenetrate = 2,
attach = 3,
bounce = 4,
bounce_dud = 5,
fizzle_ricochet = 6,
};
e_response response;//0x2
tag_reference old_effect;//0x4
string_id material_name;//0xC
__int16 global_material_index;//0x10
__int16 unknown;//0x12
enum class e_response : __int16
{
impact_detonate = 0,
fizzle = 1,
overpenetrate = 2,
attach = 3,
bounce = 4,
bounce_dud = 5,
fizzle_ricochet = 6,
};
e_response response;//0x14
enum class e_flags : __int16
{
only_against_units = FLAG(0),
never_against_units = FLAG(1),
};
e_flags flags;//0x16
float chance_fraction;//0x18
PAD(0x4);//0x1C
angle between_min;//0x20
PAD(0x4);//0x24
angle between_max;//0x28
tag_reference old_effect;//0x2C
enum class e_scale_effects_by : __int16
{
damage = 0,
angle = 1,
};
e_scale_effects_by scale_effects_by;//0x34
__int16 unknown;//0x36
angle angular_noise;//0x38
float velocity_noise;//0x3C
tag_reference old_detonation_effect;//0x40
float initial_friction;//0x48
float maximum_distance;//0x4C
float parallel_friction;//0x50
float perpendicular_friction;//0x54
};
TAG_BLOCK_SIZE_ASSERT(s_material_responses_block,0x58);
tag_block<s_material_responses_block> material_responses;//0x19C
};
TAG_GROUP_SIZE_ASSERT(s_projectile_group_definition,0x1A4);
TAG_REFL_TAG_BLOCK_DEF(s_projectile_group_definition::s_ai_properties_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_STRING_ID(ai_type_name)	TAG_REFL_PROPERTY(size)	TAG_REFL_PROPERTY(leap_jump_speed)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_projectile_group_definition::s_functions_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_STRING_ID(import_name)	TAG_REFL_STRING_ID(export_name)	TAG_REFL_STRING_ID(turn_off_with)	TAG_REFL_PROPERTY(minimum_value)	TAG_REFL_DATA_BLOCK(default_function)	TAG_REFL_STRING_ID(scale_by)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_projectile_group_definition::s_attachments_block)	TAG_REFL_TAG_REFERENCE(type)	TAG_REFL_STRING_ID(marker)	TAG_REFL_PROPERTY(change_color)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_STRING_ID(primary_scale)	TAG_REFL_STRING_ID(secondary_scale)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_projectile_group_definition::s_widgets_block)	TAG_REFL_TAG_REFERENCE(type)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_projectile_group_definition::s_old_functions_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_projectile_group_definition::s_change_colors_block::s_initial_permutations_block)	TAG_REFL_PROPERTY(weight)	TAG_REFL_REAL_COLOR_RGB(color_lower_bound)	TAG_REFL_REAL_COLOR_RGB(color_upper_bound)	TAG_REFL_STRING_ID(variant_name)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_projectile_group_definition::s_change_colors_block::s_functions_block)	TAG_REFL_PROPERTY(scale_flags)	TAG_REFL_REAL_COLOR_RGB(color_lower_bound)	TAG_REFL_REAL_COLOR_RGB(color_upper_bound)	TAG_REFL_STRING_ID(darken_by)	TAG_REFL_STRING_ID(scale_by)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_projectile_group_definition::s_change_colors_block)	TAG_REFL_TAG_BLOCK(initial_permutations)	TAG_REFL_TAG_BLOCK(functions)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_projectile_group_definition::s_predicted_resource_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(resource_index)	TAG_REFL_TAG_REFERENCE(tag_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_projectile_group_definition::s_material_responses_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(response)	TAG_REFL_TAG_REFERENCE(old_effect)	TAG_REFL_STRING_ID(material_name)	TAG_REFL_PROPERTY(global_material_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(response)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(chance_fraction)	TAG_REFL_ANGLE(between_min)	TAG_REFL_ANGLE(between_max)	TAG_REFL_TAG_REFERENCE(old_effect)	TAG_REFL_PROPERTY(scale_effects_by)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_ANGLE(angular_noise)	TAG_REFL_PROPERTY(velocity_noise)	TAG_REFL_TAG_REFERENCE(old_detonation_effect)	TAG_REFL_PROPERTY(initial_friction)	TAG_REFL_PROPERTY(maximum_distance)	TAG_REFL_PROPERTY(parallel_friction)	TAG_REFL_PROPERTY(perpendicular_friction)REFL_END
TAG_REFL(s_projectile_group_definition)	TAG_REFL_PROPERTY(object_type)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(bounding_radius)	TAG_REFL_PROPERTY(bounding_offset_x)	TAG_REFL_PROPERTY(bounding_offset_y)	TAG_REFL_PROPERTY(bounding_offset_z)	TAG_REFL_PROPERTY(acceleration_scale)	TAG_REFL_PROPERTY(lightmap_shadow_mode)	TAG_REFL_PROPERTY(sweetener_size)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(dynamic_light_sphere_radius)	TAG_REFL_PROPERTY(dynamic_light_sphere_offset_x)	TAG_REFL_PROPERTY(dynamic_light_sphere_offset_y)	TAG_REFL_PROPERTY(dynamic_light_sphere_offset_z)	TAG_REFL_STRING_ID(default_model_variant)	TAG_REFL_TAG_REFERENCE(model)	TAG_REFL_TAG_REFERENCE(crate_object)	TAG_REFL_TAG_REFERENCE(modifier_shader)	TAG_REFL_TAG_REFERENCE(creation_effect)	TAG_REFL_TAG_REFERENCE(material_effects)	TAG_REFL_TAG_BLOCK(ai_properties)	TAG_REFL_TAG_BLOCK(functions)	TAG_REFL_PROPERTY(apply_collision_damage_scale)	TAG_REFL_PROPERTY(min_game_acceleration)	TAG_REFL_PROPERTY(max_game_acceleration)	TAG_REFL_PROPERTY(min_game_scale)	TAG_REFL_PROPERTY(max_game_scale)	TAG_REFL_PROPERTY(min_absolute_acceleration)	TAG_REFL_PROPERTY(max_absolute_acceleration)	TAG_REFL_PROPERTY(min_absolute_scale)	TAG_REFL_PROPERTY(max_absolute_scale)	TAG_REFL_PROPERTY(hud_text_message_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_BLOCK(attachments)	TAG_REFL_TAG_BLOCK(widgets)	TAG_REFL_TAG_BLOCK(old_functions)	TAG_REFL_TAG_BLOCK(change_colors)	TAG_REFL_TAG_BLOCK(predicted_resource)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(detonation_timer_starts)	TAG_REFL_PROPERTY(impact_noise)	TAG_REFL_PROPERTY(ai_perception_radius)	TAG_REFL_PROPERTY(collision_radius)	TAG_REFL_PROPERTY(arming_time)	TAG_REFL_PROPERTY(danger_radius)	TAG_REFL_PROPERTY(timer_min)	TAG_REFL_PROPERTY(timer_max)	TAG_REFL_PROPERTY(minimum_velocity)	TAG_REFL_PROPERTY(maximum_range)	TAG_REFL_PROPERTY(detonation_noise)	TAG_REFL_PROPERTY(super_detonation_projectile_count)	TAG_REFL_TAG_REFERENCE(detonation_started)	TAG_REFL_TAG_REFERENCE(airborne_detonation_effect)	TAG_REFL_TAG_REFERENCE(ground_detonation_effect)	TAG_REFL_TAG_REFERENCE(detonation_damage)	TAG_REFL_TAG_REFERENCE(attached_detonation_damage)	TAG_REFL_TAG_REFERENCE(super_detonation)	TAG_REFL_TAG_REFERENCE(super_detonation_damage)	TAG_REFL_TAG_REFERENCE(detonation_sound)	TAG_REFL_PROPERTY(damage_reporting_type)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_REFERENCE(attached_super_detonation_damage)	TAG_REFL_PROPERTY(material_effect_radius)	TAG_REFL_TAG_REFERENCE(flyby_sound)	TAG_REFL_TAG_REFERENCE(impact_effect)	TAG_REFL_TAG_REFERENCE(impact_damage)	TAG_REFL_PROPERTY(boarding_detonation_time)	TAG_REFL_TAG_REFERENCE(boarding_detonation_damage)	TAG_REFL_TAG_REFERENCE(boarding_attached_detonation_damage)	TAG_REFL_PROPERTY(air_gravity_scale)	TAG_REFL_PROPERTY(air_damage_range_min)	TAG_REFL_PROPERTY(air_damage_range_max)	TAG_REFL_PROPERTY(water_gravity_scale)	TAG_REFL_PROPERTY(water_damage_range_min)	TAG_REFL_PROPERTY(water_damage_range_max)	TAG_REFL_PROPERTY(initial_velocity)	TAG_REFL_PROPERTY(final_velocity)	TAG_REFL_ANGLE(guided_angular_velocity_lower)	TAG_REFL_ANGLE(guided_angular_velocity_upper)	TAG_REFL_PROPERTY(acceleration_range_min)	TAG_REFL_PROPERTY(acceleration_range_max)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(targeted_leading_fraction)	TAG_REFL_TAG_BLOCK(material_responses)REFL_END

#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: breakable_surface
		* group_tag : bsdt
 		* header size : 32
		* *********************************************************************/ 
struct s_breakable_surface_group_definition
{
float maximum_vitality;//0x0
tag_reference effect;//0x4
tag_reference sound;//0xC
struct s_particle_effects_block
{
tag_reference particle;//0x0
__int32 location;//0x8
enum class e_coordinate_system : __int16
{
world = 0,
local = 1,
parent = 2,
};
e_coordinate_system coordinate_system;//0xC
enum class e_environment : __int16
{
any_environment = 0,
air_only = 1,
water_only = 2,
space_only = 3,
};
e_environment environment;//0xE
enum class e_disposition : __int16
{
either_mode = 0,
violent_mode_only = 1,
nonviolent_mode_only = 2,
};
e_disposition disposition;//0x10
enum class e_camera_mode : __int16
{
independant_of_camera_mode = 0,
only_in_first_person = 1,
only_in_third_person = 2,
both_first_and_third = 3,
};
e_camera_mode camera_mode;//0x12
__int16 sort_bias;//0x14
enum class e_flags : __int16
{
glow = FLAG(0),
cinematics = FLAG(1),
looping_particle = FLAG(2),
disabled_for_debugging = FLAG(3),
inherit_effect_velocity = FLAG(4),
dont_render_system = FLAG(5),
render_when_zoomed = FLAG(6),
spread_between_ticks = FLAG(7),
persistent_particle = FLAG(8),
expensive_visibility = FLAG(9),
};
e_flags flags;//0x16
float lod_in_distance;//0x18
float lod_feather_in_delta;//0x1C
float unknown;//0x20
float lod_out_distance;//0x24
float lod_feather_out_delta;//0x28
float unknown;//0x2C
struct s_emitters_block
{
tag_reference particle_physics;//0x0
enum class e_input_variable : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_input_variable input_variable;//0x8
enum class e_range_variable : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_range_variable range_variable;//0xA
enum class e_output_modifier : __int16
{
none = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0xC
enum class e_output_modifier : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_output_modifier output_modifier;//0xE
data_block function;//0x10
enum class e_input_variable : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_input_variable input_variable;//0x18
enum class e_range_variable : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_range_variable range_variable;//0x1A
enum class e_output_modifier : __int16
{
none = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x1C
enum class e_output_modifier : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_output_modifier output_modifier;//0x1E
data_block function;//0x20
enum class e_input_variable : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_input_variable input_variable;//0x28
enum class e_range_variable : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_range_variable range_variable;//0x2A
enum class e_output_modifier : __int16
{
none = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x2C
enum class e_output_modifier : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_output_modifier output_modifier;//0x2E
data_block function;//0x30
enum class e_input_variable : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_input_variable input_variable;//0x38
enum class e_range_variable : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_range_variable range_variable;//0x3A
enum class e_output_modifier : __int16
{
none = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x3C
enum class e_output_modifier : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_output_modifier output_modifier;//0x3E
data_block function;//0x40
enum class e_input_variable : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_input_variable input_variable;//0x48
enum class e_range_variable : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_range_variable range_variable;//0x4A
enum class e_output_modifier : __int16
{
none = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x4C
enum class e_output_modifier : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_output_modifier output_modifier;//0x4E
data_block function;//0x50
enum class e_input_variable : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_input_variable input_variable;//0x58
enum class e_range_variable : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_range_variable range_variable;//0x5A
enum class e_output_modifier : __int16
{
none = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x5C
enum class e_output_modifier : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_output_modifier output_modifier;//0x5E
data_block function;//0x60
enum class e_input_variable : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_input_variable input_variable;//0x68
enum class e_range_variable : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_range_variable range_variable;//0x6A
enum class e_output_modifier : __int16
{
none = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x6C
enum class e_output_modifier : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_output_modifier output_modifier;//0x6E
data_block function;//0x70
enum class e_emission_shape : __int32
{
sprayer = 0,
disc = 1,
globe = 2,
implode = 3,
tube = 4,
halo = 5,
impact_contour = 6,
impact_area = 7,
debris = 8,
line = 9,
};
e_emission_shape emission_shape;//0x78
enum class e_input_variable : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_input_variable input_variable;//0x7C
enum class e_range_variable : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_range_variable range_variable;//0x7E
enum class e_output_modifier : __int16
{
none = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x80
enum class e_output_modifier : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_output_modifier output_modifier;//0x82
data_block function;//0x84
enum class e_input_variable : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_input_variable input_variable;//0x8C
enum class e_range_variable : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_range_variable range_variable;//0x8E
enum class e_output_modifier : __int16
{
none = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x90
enum class e_output_modifier : __int16
{
particle_age = 0,
particle_emit_time = 1,
particle_random_1 = 2,
particle_random_2 = 3,
emitter_age = 4,
emitter_random_1 = 5,
emitter_random_2 = 6,
system_lod = 7,
game_time = 8,
effect_a_scale = 9,
effect_b_scale = 10,
particle_rotation = 11,
explosion_animation = 12,
explosion_rotation = 13,
particle_random_3 = 14,
particle_random_4 = 15,
location_random = 16,
};
e_output_modifier output_modifier;//0x92
data_block function;//0x94
float translational_offset_x;//0x9C
float translational_offset_y;//0xA0
float translational_offset_z;//0xA4
angle relative_direction_y;//0xA8
angle relative_direction_p;//0xAC
__int32 unknown;//0xB0
__int32 unknown;//0xB4
};
TAG_BLOCK_SIZE_ASSERT(s_emitters_block,0xB8);
tag_block<s_emitters_block> emitters;//0x30
};
TAG_BLOCK_SIZE_ASSERT(s_particle_effects_block,0x38);
tag_block<s_particle_effects_block> particle_effects;//0x14
float particle_density;//0x1C
};
TAG_GROUP_SIZE_ASSERT(s_breakable_surface_group_definition,0x20);
TAG_REFL(s_breakable_surface_group_definition)
	TAG_REFL_PROPERTY(maximum_vitality)
	TAG_REFL_TAG_REFERENCE(effect)
	TAG_REFL_TAG_REFERENCE(sound)
TAG_REFL_TAG_BLOCK_DEF(s_particle_effects_block)
	TAG_REFL_TAG_REFERENCE(particle)
	TAG_REFL_PROPERTY(location)
	TAG_REFL_PROPERTY(coordinate_system)
	TAG_REFL_PROPERTY(environment)
	TAG_REFL_PROPERTY(disposition)
	TAG_REFL_PROPERTY(camera_mode)
	TAG_REFL_PROPERTY(sort_bias)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(lod_in_distance)
	TAG_REFL_PROPERTY(lod_feather_in_delta)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(lod_out_distance)
	TAG_REFL_PROPERTY(lod_feather_out_delta)
	TAG_REFL_PROPERTY(unknown)
TAG_REFL_TAG_BLOCK_DEF(s_emitters_block)
	TAG_REFL_TAG_REFERENCE(particle_physics)
	TAG_REFL_PROPERTY(input_variable)
	TAG_REFL_PROPERTY(range_variable)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_DATA_BLOCK(function)
	TAG_REFL_PROPERTY(input_variable)
	TAG_REFL_PROPERTY(range_variable)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_DATA_BLOCK(function)
	TAG_REFL_PROPERTY(input_variable)
	TAG_REFL_PROPERTY(range_variable)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_DATA_BLOCK(function)
	TAG_REFL_PROPERTY(input_variable)
	TAG_REFL_PROPERTY(range_variable)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_DATA_BLOCK(function)
	TAG_REFL_PROPERTY(input_variable)
	TAG_REFL_PROPERTY(range_variable)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_DATA_BLOCK(function)
	TAG_REFL_PROPERTY(input_variable)
	TAG_REFL_PROPERTY(range_variable)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_DATA_BLOCK(function)
	TAG_REFL_PROPERTY(input_variable)
	TAG_REFL_PROPERTY(range_variable)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_DATA_BLOCK(function)
	TAG_REFL_PROPERTY(emission_shape)
	TAG_REFL_PROPERTY(input_variable)
	TAG_REFL_PROPERTY(range_variable)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_DATA_BLOCK(function)
	TAG_REFL_PROPERTY(input_variable)
	TAG_REFL_PROPERTY(range_variable)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_DATA_BLOCK(function)
	TAG_REFL_PROPERTY(translational_offset_x)
	TAG_REFL_PROPERTY(translational_offset_y)
	TAG_REFL_PROPERTY(translational_offset_z)
	TAG_REFL_ANGLE(relative_direction_y)
	TAG_REFL_ANGLE(relative_direction_p)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
REFL_END
	TAG_REFL_TAG_BLOCK(emitters)
REFL_END
	TAG_REFL_TAG_BLOCK(particle_effects)
	TAG_REFL_PROPERTY(particle_density)
REFL_END
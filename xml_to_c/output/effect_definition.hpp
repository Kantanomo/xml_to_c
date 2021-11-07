#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: effect
		* group_tag : effe
 		* header size : 48
		* *********************************************************************/ 
struct s_effect_group_definition
{
PAD(0x4);//0x0
__int16 loop_start_event;//0x4
__int16 unknown;//0x6
PAD(0x4);//0x8
struct s_locations_block
{
string_id marker_name;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_locations_block,0x4);
tag_block<s_locations_block> locations;//0xC
struct s_events_block
{
PAD(0x4);//0x0
float skip_fraction;//0x4
PAD(0x10);//0x8
struct s_parts_block
{
enum class e_create_in : __int16
{
any_environment = 0,
air_only = 1,
water_only = 2,
space_only = 3,
};
e_create_in create_in;//0x0
enum class e_create_in : __int16
{
either_mode = 0,
violent_mode_only = 1,
nonviolent_mode_only = 2,
};
e_create_in create_in;//0x2
__int16 location_index;//0x4
PAD(0x2);//0x6
enum class e_runtime_base_group_tag : __int32
{
char__character = 1667785074,
coln__colony = 1668246638,
deca__decal = 1684366177,
jpt__damage_effect = 1785754657,
lens__lens_flare = 1818586739,
ligh__light = 1818847080,
mgs2__light_volume = 1296519986,
obje__object = 1868720741,
snd__sound = 1936614433,
tdtl__liquid = 1952740460,
};
e_runtime_base_group_tag runtime_base_group_tag;//0x8
tag_reference type;//0xC
PAD(0x8);//0x14
angle velocity_cone_angle;//0x1C
PAD(0x18);//0x20
};
TAG_BLOCK_SIZE_ASSERT(s_parts_block,0x38);
tag_block<s_parts_block> parts;//0x18
struct s_beams_block
{
tag_reference shader;//0x0
__int16 location_index;//0x8
__int16 unknown;//0xA
data_block color;//0xC
data_block alpha;//0x14
data_block width;//0x1C
data_block length;//0x24
data_block yaw;//0x2C
data_block pitch;//0x34
};
TAG_BLOCK_SIZE_ASSERT(s_beams_block,0x3C);
tag_block<s_beams_block> beams;//0x20
struct s_accelerations_block
{
enum class e_create_in : __int16
{
any_environment = 0,
air_only = 1,
water_only = 2,
space_only = 3,
};
e_create_in create_in;//0x0
enum class e_create_in : __int16
{
either_mode = 0,
violent_mode_only = 1,
nonviolent_mode_only = 2,
};
e_create_in create_in;//0x2
__int16 location;//0x4
__int16 unknown;//0x6
float acceleration;//0x8
angle inner_cone_angle;//0xC
angle outer_cone_angle;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_accelerations_block,0x14);
tag_block<s_accelerations_block> accelerations;//0x28
struct s_particle_systems_block
{
tag_reference particle;//0x0
__int16 location;//0x8
__int16 unknown;//0xA
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
independent_of_camera_mode = 0,
only_in_1st_person = 1,
only_in_3rd_person = 2,
both_1st_and_3rd = 3,
};
e_camera_mode camera_mode;//0x12
__int16 sort_bias;//0x14
PAD(0x2);//0x16
float lod_in_distance;//0x18
float lod_feather_in_delta;//0x1C
float inverse_lod_feather_in;//0x20
float lod_out_distance;//0x24
float lod_feather_out_delta;//0x28
float inverse_lod_feather_out;//0x2C
struct s_emitters_block
{
tag_reference particle_physics;//0x0
enum class e_input : __int16
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
e_input input;//0x8
enum class e_range : __int16
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
e_range range;//0xA
enum class e_output_modifier_kind : __int16
{
none = 0,
plus = 1,
times = 2,
};
e_output_modifier_kind output_modifier_kind;//0xC
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
enum class e_input : __int16
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
e_input input;//0x18
enum class e_range : __int16
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
e_range range;//0x1A
enum class e_output_modifier_kind : __int16
{
none = 0,
plus = 1,
times = 2,
};
e_output_modifier_kind output_modifier_kind;//0x1C
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
enum class e_input : __int16
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
e_input input;//0x28
enum class e_range : __int16
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
e_range range;//0x2A
enum class e_output_modifier_kind : __int16
{
none = 0,
plus = 1,
times = 2,
};
e_output_modifier_kind output_modifier_kind;//0x2C
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
PAD(0x8);//0x30
enum class e_input : __int16
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
e_input input;//0x38
enum class e_range : __int16
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
e_range range;//0x3A
enum class e_output_modifier_kind : __int16
{
none = 0,
plus = 1,
times = 2,
};
e_output_modifier_kind output_modifier_kind;//0x3C
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
PAD(0x8);//0x40
enum class e_input : __int16
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
e_input input;//0x48
enum class e_range : __int16
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
e_range range;//0x4A
enum class e_output_modifier_kind : __int16
{
none = 0,
plus = 1,
times = 2,
};
e_output_modifier_kind output_modifier_kind;//0x4C
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
PAD(0x8);//0x50
enum class e_input : __int16
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
e_input input;//0x58
enum class e_range : __int16
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
e_range range;//0x5A
enum class e_output_modifier_kind : __int16
{
none = 0,
plus = 1,
times = 2,
};
e_output_modifier_kind output_modifier_kind;//0x5C
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
PAD(0x8);//0x60
enum class e_input : __int16
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
e_input input;//0x68
enum class e_range : __int16
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
e_range range;//0x6A
enum class e_output_modifier_kind : __int16
{
none = 0,
plus = 1,
times = 2,
};
e_output_modifier_kind output_modifier_kind;//0x6C
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
PAD(0x8);//0x70
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
enum class e_input : __int16
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
e_input input;//0x7C
enum class e_range : __int16
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
e_range range;//0x7E
enum class e_output_modifier_kind : __int16
{
none = 0,
plus = 1,
times = 2,
};
e_output_modifier_kind output_modifier_kind;//0x80
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
PAD(0x8);//0x84
enum class e_input : __int16
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
e_input input;//0x8C
enum class e_range : __int16
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
e_range range;//0x8E
enum class e_output_modifier_kind : __int16
{
none = 0,
plus = 1,
times = 2,
};
e_output_modifier_kind output_modifier_kind;//0x90
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
PAD(0x1C);//0x94
__int32 unknown;//0xB0
__int32 unknown;//0xB4
};
TAG_BLOCK_SIZE_ASSERT(s_emitters_block,0xB8);
tag_block<s_emitters_block> emitters;//0x30
};
TAG_BLOCK_SIZE_ASSERT(s_particle_systems_block,0x38);
tag_block<s_particle_systems_block> particle_systems;//0x30
};
TAG_BLOCK_SIZE_ASSERT(s_events_block,0x38);
tag_block<s_events_block> events;//0x14
tag_reference looping_sound;//0x1C
__int16 location_index;//0x24
__int16 unknown;//0x26
float always_play_distance;//0x28
float never_play_distance;//0x2C
};
TAG_GROUP_SIZE_ASSERT(s_effect_group_definition,0x30);
TAG_REFL(s_effect_group_definition)
	TAG_REFL_PROPERTY(loop_start_event)
	TAG_REFL_PROPERTY(unknown)
TAG_REFL_TAG_BLOCK_DEF(s_locations_block)
	TAG_REFL_STRING_ID(marker_name)
REFL_END
	TAG_REFL_TAG_BLOCK(locations)
TAG_REFL_TAG_BLOCK_DEF(s_events_block)
	TAG_REFL_PROPERTY(skip_fraction)
TAG_REFL_TAG_BLOCK_DEF(s_parts_block)
	TAG_REFL_PROPERTY(create_in)
	TAG_REFL_PROPERTY(create_in)
	TAG_REFL_PROPERTY(location_index)
	TAG_REFL_PROPERTY(runtime_base_group_tag)
	TAG_REFL_TAG_REFERENCE(type)
	TAG_REFL_ANGLE(velocity_cone_angle)
REFL_END
	TAG_REFL_TAG_BLOCK(parts)
TAG_REFL_TAG_BLOCK_DEF(s_beams_block)
	TAG_REFL_TAG_REFERENCE(shader)
	TAG_REFL_PROPERTY(location_index)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_DATA_BLOCK(color)
	TAG_REFL_DATA_BLOCK(alpha)
	TAG_REFL_DATA_BLOCK(width)
	TAG_REFL_DATA_BLOCK(length)
	TAG_REFL_DATA_BLOCK(yaw)
	TAG_REFL_DATA_BLOCK(pitch)
REFL_END
	TAG_REFL_TAG_BLOCK(beams)
TAG_REFL_TAG_BLOCK_DEF(s_accelerations_block)
	TAG_REFL_PROPERTY(create_in)
	TAG_REFL_PROPERTY(create_in)
	TAG_REFL_PROPERTY(location)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(acceleration)
	TAG_REFL_ANGLE(inner_cone_angle)
	TAG_REFL_ANGLE(outer_cone_angle)
REFL_END
	TAG_REFL_TAG_BLOCK(accelerations)
TAG_REFL_TAG_BLOCK_DEF(s_particle_systems_block)
	TAG_REFL_TAG_REFERENCE(particle)
	TAG_REFL_PROPERTY(location)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(coordinate_system)
	TAG_REFL_PROPERTY(environment)
	TAG_REFL_PROPERTY(disposition)
	TAG_REFL_PROPERTY(camera_mode)
	TAG_REFL_PROPERTY(sort_bias)
	TAG_REFL_PROPERTY(lod_in_distance)
	TAG_REFL_PROPERTY(lod_feather_in_delta)
	TAG_REFL_PROPERTY(inverse_lod_feather_in)
	TAG_REFL_PROPERTY(lod_out_distance)
	TAG_REFL_PROPERTY(lod_feather_out_delta)
	TAG_REFL_PROPERTY(inverse_lod_feather_out)
TAG_REFL_TAG_BLOCK_DEF(s_emitters_block)
	TAG_REFL_TAG_REFERENCE(particle_physics)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier_kind)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_DATA_BLOCK(function)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier_kind)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_DATA_BLOCK(function)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier_kind)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier_kind)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier_kind)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier_kind)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier_kind)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(emission_shape)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier_kind)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier_kind)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
REFL_END
	TAG_REFL_TAG_BLOCK(emitters)
REFL_END
	TAG_REFL_TAG_BLOCK(particle_systems)
REFL_END
	TAG_REFL_TAG_BLOCK(events)
	TAG_REFL_TAG_REFERENCE(looping_sound)
	TAG_REFL_PROPERTY(location_index)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(always_play_distance)
	TAG_REFL_PROPERTY(never_play_distance)
REFL_END
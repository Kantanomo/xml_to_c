#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: particle
		* group_tag : prt3
 		* header size : 188
		* *********************************************************************/ 
struct s_particle_group_definition
{
enum class e_flags : __int32
{
spins = FLAG(0),
random_u_mirror = FLAG(1),
random_v_mirror = FLAG(2),
frame_animation_one_shot = FLAG(3),
select_random_sequence = FLAG(4),
disable_frame_blending = FLAG(5),
receive_lightmap_lighting = FLAG(6),
tint_from_diffuse_texture = FLAG(7),
dies_at_rest = FLAG(8),
dies_on_structure_collision = FLAG(9),
dies_in_media = FLAG(10),
dies_in_air = FLAG(11),
bitmap_authored_vertically = FLAG(12),
has_sweetener = FLAG(13),
};
e_flags flags;//0x0
enum class e_particle_billboard_style : __int32
{
screen_facing = 0,
parallel_to_direction = 1,
perpendicular_to_direction = 2,
vertical = 3,
horizontal = 4,
};
e_particle_billboard_style particle_billboard_style;//0x4
__int16 first_billboard_style;//0x8
__int16 sequence_count;//0xA
tag_reference shader_template;//0xC
struct s_shader_block
{
string_id unknown;//0x0
__int32 unknown;//0x4
tag_reference unknown;//0x8
float unknown;//0x10
float unknown;//0x14
float unknown;//0x18
float unknown;//0x1C
PAD(0x8);//0x20
};
TAG_BLOCK_SIZE_ASSERT(s_shader_block,0x28);
tag_block<s_shader_block> shader;//0x14
enum class e_input : __int8
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
e_input input;//0x1C
PAD(0x1);//0x1D
enum class e_range : __int8
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
e_range range;//0x1E
PAD(0x1);//0x1F
enum class e_output_modifier : __int8
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x20
PAD(0x1);//0x21
enum class e_functions : __int8
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
e_functions functions;//0x22
PAD(0x1);//0x23
struct s_color_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_color_block,0x1);
tag_block<s_color_block> color;//0x24
enum class e_input : __int8
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
e_input input;//0x2C
PAD(0x1);//0x2D
enum class e_range : __int8
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
e_range range;//0x2E
PAD(0x1);//0x2F
enum class e_output_modifier : __int8
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x30
PAD(0x1);//0x31
enum class e_functions : __int8
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
e_functions functions;//0x32
PAD(0x1);//0x33
struct s_alpha_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_alpha_block,0x1);
tag_block<s_alpha_block> alpha;//0x34
enum class e_input : __int8
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
e_input input;//0x3C
PAD(0x1);//0x3D
enum class e_range : __int8
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
e_range range;//0x3E
PAD(0x1);//0x3F
enum class e_output_modifier : __int8
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x40
PAD(0x1);//0x41
enum class e_functions : __int8
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
e_functions functions;//0x42
PAD(0x1);//0x43
struct s_scale_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_scale_block,0x1);
tag_block<s_scale_block> scale;//0x44
enum class e_input : __int8
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
e_input input;//0x4C
PAD(0x1);//0x4D
enum class e_range : __int8
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
e_range range;//0x4E
PAD(0x1);//0x4F
enum class e_output_modifier : __int8
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x50
PAD(0x1);//0x51
enum class e_functions : __int8
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
e_functions functions;//0x52
PAD(0x1);//0x53
struct s_rotation_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_rotation_block,0x1);
tag_block<s_rotation_block> rotation;//0x54
enum class e_input : __int8
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
e_input input;//0x5C
PAD(0x1);//0x5D
enum class e_range : __int8
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
e_range range;//0x5E
PAD(0x1);//0x5F
enum class e_output_modifier : __int8
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x60
PAD(0x1);//0x61
enum class e_functions : __int8
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
e_functions functions;//0x62
PAD(0x1);//0x63
struct s_frame_index_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_frame_index_block,0x1);
tag_block<s_frame_index_block> frame_index;//0x64
tag_reference collision_effect;//0x6C
tag_reference death_effect;//0x74
struct s_locations_block
{
string_id location;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_locations_block,0x4);
tag_block<s_locations_block> locations;//0x7C
struct s_attached_particle_systems_block
{
tag_reference particle;//0x0
__int16 location;//0x8
PAD(0x2);//0xA
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
only_in_1st_person = 1,
only_in_3rd_person = 2,
both_1st_and_3rd = 3,
};
e_camera_mode camera_mode;//0x12
__int16 sort_bias;//0x14
enum class e_flags : __int32
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
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-2);//0x1A
float lod_in_distance;//0x18
float lod_feather_in_delta;//0x1C
PAD(0x4);//0x20
float lod_out_distance;//0x24
float lod_feather_out_delta;//0x28
PAD(0x4);//0x2C
struct s_emitters_block
{
tag_reference particle_physics;//0x0
enum class e_input : __int8
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
PAD(0x1);//0x9
enum class e_range : __int8
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
PAD(0x1);//0xB
enum class e_output_modifier : __int8
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0xC
PAD(0x1);//0xD
enum class e_functions : __int8
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
e_functions functions;//0xE
PAD(0x1);//0xF
struct s_particle_emission_rate_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_particle_emission_rate_block,0x1);
tag_block<s_particle_emission_rate_block> particle_emission_rate;//0x10
enum class e_input : __int8
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
PAD(0x1);//0x19
enum class e_range : __int8
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
PAD(0x1);//0x1B
enum class e_output_modifier : __int8
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x1C
PAD(0x1);//0x1D
enum class e_functions : __int8
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
e_functions functions;//0x1E
PAD(0x1);//0x1F
struct s_particle_lifespan_sec_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_particle_lifespan_sec_block,0x1);
tag_block<s_particle_lifespan_sec_block> particle_lifespan_sec;//0x20
enum class e_input : __int8
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
PAD(0x1);//0x29
enum class e_range : __int8
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
PAD(0x1);//0x2B
enum class e_output_modifier : __int8
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x2C
PAD(0x1);//0x2D
enum class e_functions : __int8
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
e_functions functions;//0x2E
PAD(0x1);//0x2F
struct s_particle_velocity_world_units_per_sec_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_particle_velocity_world_units_per_sec_block,0x1);
tag_block<s_particle_velocity_world_units_per_sec_block> particle_velocity_world_units_per_sec;//0x30
enum class e_input : __int8
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
PAD(0x1);//0x39
enum class e_range : __int8
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
PAD(0x1);//0x3B
enum class e_output_modifier : __int8
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x3C
PAD(0x1);//0x3D
enum class e_functions : __int8
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
e_functions functions;//0x3E
PAD(0x1);//0x3F
struct s_particle_angular_velocity_degrees_per_sec_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_particle_angular_velocity_degrees_per_sec_block,0x1);
tag_block<s_particle_angular_velocity_degrees_per_sec_block> particle_angular_velocity_degrees_per_sec;//0x40
enum class e_input : __int8
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
PAD(0x1);//0x49
enum class e_range : __int8
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
PAD(0x1);//0x4B
enum class e_output_modifier : __int8
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x4C
PAD(0x1);//0x4D
enum class e_functions : __int8
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
e_functions functions;//0x4E
PAD(0x1);//0x4F
struct s_particle_size_world_units_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_particle_size_world_units_block,0x1);
tag_block<s_particle_size_world_units_block> particle_size_world_units;//0x50
enum class e_input : __int8
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
PAD(0x1);//0x59
enum class e_range : __int8
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
PAD(0x1);//0x5B
enum class e_output_modifier : __int8
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x5C
PAD(0x1);//0x5D
enum class e_functions : __int8
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
e_functions functions;//0x5E
PAD(0x1);//0x5F
struct s_particle_tint_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_particle_tint_block,0x1);
tag_block<s_particle_tint_block> particle_tint;//0x60
enum class e_input : __int8
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
PAD(0x1);//0x69
enum class e_range : __int8
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
PAD(0x1);//0x6B
enum class e_output_modifier : __int8
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x6C
PAD(0x1);//0x6D
enum class e_functions : __int8
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
e_functions functions;//0x6E
PAD(0x1);//0x6F
struct s_particle_alpha_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_particle_alpha_block,0x1);
tag_block<s_particle_alpha_block> particle_alpha;//0x70
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
enum class e_input : __int8
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
PAD(0x1);//0x7D
enum class e_range : __int8
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
PAD(0x1);//0x7F
enum class e_output_modifier : __int8
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x80
PAD(0x1);//0x81
enum class e_functions : __int8
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
e_functions functions;//0x82
PAD(0x1);//0x83
struct s_emission_radius_world_units_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_emission_radius_world_units_block,0x1);
tag_block<s_emission_radius_world_units_block> emission_radius_world_units;//0x84
enum class e_input : __int8
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
PAD(0x1);//0x8D
enum class e_range : __int8
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
PAD(0x1);//0x8F
enum class e_output_modifier : __int8
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x90
PAD(0x1);//0x91
enum class e_functions : __int8
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
e_functions functions;//0x92
PAD(0x1);//0x93
struct s_emission_angle_degrees_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_emission_angle_degrees_block,0x1);
tag_block<s_emission_angle_degrees_block> emission_angle_degrees;//0x94
float translation_offset_x;//0x9C
float translation_offset_y;//0xA0
float translation_offset_z;//0xA4
angle relative_direction_yaw;//0xA8
angle relative_direction_pitch;//0xAC
PAD(0x8);//0xB0
};
TAG_BLOCK_SIZE_ASSERT(s_emitters_block,0xB8);
tag_block<s_emitters_block> emitters;//0x30
};
TAG_BLOCK_SIZE_ASSERT(s_attached_particle_systems_block,0x38);
tag_block<s_attached_particle_systems_block> attached_particle_systems;//0x84
struct s_postprocess_definitions_block
{
tag_referenceN shadertemplate;//0x0
struct s_bitmaps_block
{
tag_referenceN bitmapgroup;//0x0
PAD(0x4);//0x4
__int32 bitmapindex;//0x8
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-4);//0xC
float logbitmapdimension;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_bitmaps_block,0xC);
tag_block<s_bitmaps_block> bitmaps;//0x4
struct s_pixel_constants_block
{
PAD(0x4);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_pixel_constants_block,0x4);
tag_block<s_pixel_constants_block> pixel_constants;//0xC
struct s_vertex_constants_block
{
float xscale;//0x0
float yscale;//0x4
float zscale;//0x8
float wscale;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_vertex_constants_block,0x10);
tag_block<s_vertex_constants_block> vertex_constants;//0x14
struct s_levels_of_detail_block
{
unsigned __int32 availablelayerflags;//0x0
unsigned __int32 layers;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_levels_of_detail_block,0x8);
tag_block<s_levels_of_detail_block> levels_of_detail;//0x1C
struct s_layers_block
{
__int16 indice;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_layers_block,0x2);
tag_block<s_layers_block> layers;//0x24
struct s_passes_block
{
__int16 indice;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_passes_block,0x2);
tag_block<s_passes_block> passes;//0x2C
struct s_implementations_block
{
__int16 bitmaptransform;//0x0
__int16 renderstate;//0x2
__int16 texturestate;//0x4
__int16 pixelconstant;//0x6
__int16 vertexconstant;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_implementations_block,0xA);
tag_block<s_implementations_block> implementations;//0x34
struct s_overlays_block
{
string_id inputname;//0x0
string_id rangename;//0x4
float timeperiodinseconds;//0x8
struct s_functions_block
{
__int8 function;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_functions_block,0x1);
tag_block<s_functions_block> functions;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_overlays_block,0x14);
tag_block<s_overlays_block> overlays;//0x3C
struct s_overlay_references_block
{
__int16 overlayindex;//0x0
__int16 transformindex;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_overlay_references_block,0x4);
tag_block<s_overlay_references_block> overlay_references;//0x44
struct s_animated_parameters_block
{
__int16 overlayreference;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_animated_parameters_block,0x2);
tag_block<s_animated_parameters_block> animated_parameters;//0x4C
struct s_animated_parameter_references_block
{
__int32 parameterindex;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_animated_parameter_references_block,0x4);
tag_block<s_animated_parameter_references_block> animated_parameter_references;//0x54
struct s_bitmap_properties_block
{
__int16 bitmapindex;//0x0
__int16 animatedparameterindex;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_bitmap_properties_block,0x4);
tag_block<s_bitmap_properties_block> bitmap_properties;//0x5C
struct s_color_properties_block
{
real_color_rgb colour;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_color_properties_block,0xC);
tag_block<s_color_properties_block> color_properties;//0x64
struct s_value_properties_block
{
float value;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_value_properties_block,0x4);
tag_block<s_value_properties_block> value_properties;//0x6C
PAD(0x8);//0x74
};
TAG_BLOCK_SIZE_ASSERT(s_postprocess_definitions_block,0x7C);
tag_block<s_postprocess_definitions_block> postprocess_definitions;//0x8C
__int32 unknown;//0x94
__int32 unknown;//0x98
__int32 unknown;//0x9C
__int32 unknown;//0xA0
float unknown;//0xA4
float unknown;//0xA8
float unknown;//0xAC
float unknown;//0xB0
float unknown;//0xB4
float unknown;//0xB8
};
TAG_GROUP_SIZE_ASSERT(s_particle_group_definition,0xBC);
TAG_REFL(s_particle_group_definition)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(particle_billboard_style)
	TAG_REFL_PROPERTY(first_billboard_style)
	TAG_REFL_PROPERTY(sequence_count)
	TAG_REFL_TAG_REFERENCE(shader_template)
TAG_REFL_TAG_BLOCK_DEF(s_shader_block)
	TAG_REFL_STRING_ID(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_TAG_REFERENCE(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
REFL_END
	TAG_REFL_TAG_BLOCK(shader)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(functions)
TAG_REFL_TAG_BLOCK_DEF(s_color_block)
	TAG_REFL_PROPERTY(data)
REFL_END
	TAG_REFL_TAG_BLOCK(color)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(functions)
TAG_REFL_TAG_BLOCK_DEF(s_alpha_block)
	TAG_REFL_PROPERTY(data)
REFL_END
	TAG_REFL_TAG_BLOCK(alpha)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(functions)
TAG_REFL_TAG_BLOCK_DEF(s_scale_block)
	TAG_REFL_PROPERTY(data)
REFL_END
	TAG_REFL_TAG_BLOCK(scale)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(functions)
TAG_REFL_TAG_BLOCK_DEF(s_rotation_block)
	TAG_REFL_PROPERTY(data)
REFL_END
	TAG_REFL_TAG_BLOCK(rotation)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(functions)
TAG_REFL_TAG_BLOCK_DEF(s_frame_index_block)
	TAG_REFL_PROPERTY(data)
REFL_END
	TAG_REFL_TAG_BLOCK(frame_index)
	TAG_REFL_TAG_REFERENCE(collision_effect)
	TAG_REFL_TAG_REFERENCE(death_effect)
TAG_REFL_TAG_BLOCK_DEF(s_locations_block)
	TAG_REFL_STRING_ID(location)
REFL_END
	TAG_REFL_TAG_BLOCK(locations)
TAG_REFL_TAG_BLOCK_DEF(s_attached_particle_systems_block)
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
	TAG_REFL_PROPERTY(lod_out_distance)
	TAG_REFL_PROPERTY(lod_feather_out_delta)
TAG_REFL_TAG_BLOCK_DEF(s_emitters_block)
	TAG_REFL_TAG_REFERENCE(particle_physics)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(functions)
TAG_REFL_TAG_BLOCK_DEF(s_particle_emission_rate_block)
	TAG_REFL_PROPERTY(data)
REFL_END
	TAG_REFL_TAG_BLOCK(particle_emission_rate)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(functions)
TAG_REFL_TAG_BLOCK_DEF(s_particle_lifespan_sec_block)
	TAG_REFL_PROPERTY(data)
REFL_END
	TAG_REFL_TAG_BLOCK(particle_lifespan_sec)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(functions)
TAG_REFL_TAG_BLOCK_DEF(s_particle_velocity_world_units_per_sec_block)
	TAG_REFL_PROPERTY(data)
REFL_END
	TAG_REFL_TAG_BLOCK(particle_velocity_world_units_per_sec)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(functions)
TAG_REFL_TAG_BLOCK_DEF(s_particle_angular_velocity_degrees_per_sec_block)
	TAG_REFL_PROPERTY(data)
REFL_END
	TAG_REFL_TAG_BLOCK(particle_angular_velocity_degrees_per_sec)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(functions)
TAG_REFL_TAG_BLOCK_DEF(s_particle_size_world_units_block)
	TAG_REFL_PROPERTY(data)
REFL_END
	TAG_REFL_TAG_BLOCK(particle_size_world_units)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(functions)
TAG_REFL_TAG_BLOCK_DEF(s_particle_tint_block)
	TAG_REFL_PROPERTY(data)
REFL_END
	TAG_REFL_TAG_BLOCK(particle_tint)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(functions)
TAG_REFL_TAG_BLOCK_DEF(s_particle_alpha_block)
	TAG_REFL_PROPERTY(data)
REFL_END
	TAG_REFL_TAG_BLOCK(particle_alpha)
	TAG_REFL_PROPERTY(emission_shape)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(functions)
TAG_REFL_TAG_BLOCK_DEF(s_emission_radius_world_units_block)
	TAG_REFL_PROPERTY(data)
REFL_END
	TAG_REFL_TAG_BLOCK(emission_radius_world_units)
	TAG_REFL_PROPERTY(input)
	TAG_REFL_PROPERTY(range)
	TAG_REFL_PROPERTY(output_modifier)
	TAG_REFL_PROPERTY(functions)
TAG_REFL_TAG_BLOCK_DEF(s_emission_angle_degrees_block)
	TAG_REFL_PROPERTY(data)
REFL_END
	TAG_REFL_TAG_BLOCK(emission_angle_degrees)
	TAG_REFL_PROPERTY(translation_offset_x)
	TAG_REFL_PROPERTY(translation_offset_y)
	TAG_REFL_PROPERTY(translation_offset_z)
	TAG_REFL_ANGLE(relative_direction_yaw)
	TAG_REFL_ANGLE(relative_direction_pitch)
REFL_END
	TAG_REFL_TAG_BLOCK(emitters)
REFL_END
	TAG_REFL_TAG_BLOCK(attached_particle_systems)
TAG_REFL_TAG_BLOCK_DEF(s_postprocess_definitions_block)
	TAG_REFL_TAG_REFERENCE(shadertemplate)
TAG_REFL_TAG_BLOCK_DEF(s_bitmaps_block)
	TAG_REFL_TAG_REFERENCE(bitmapgroup)
	TAG_REFL_PROPERTY(bitmapindex)
	TAG_REFL_PROPERTY(logbitmapdimension)
REFL_END
	TAG_REFL_TAG_BLOCK(bitmaps)
TAG_REFL_TAG_BLOCK_DEF(s_pixel_constants_block)
REFL_END
	TAG_REFL_TAG_BLOCK(pixel_constants)
TAG_REFL_TAG_BLOCK_DEF(s_vertex_constants_block)
	TAG_REFL_PROPERTY(xscale)
	TAG_REFL_PROPERTY(yscale)
	TAG_REFL_PROPERTY(zscale)
	TAG_REFL_PROPERTY(wscale)
REFL_END
	TAG_REFL_TAG_BLOCK(vertex_constants)
TAG_REFL_TAG_BLOCK_DEF(s_levels_of_detail_block)
	TAG_REFL_PROPERTY(availablelayerflags)
	TAG_REFL_PROPERTY(layers)
REFL_END
	TAG_REFL_TAG_BLOCK(levels_of_detail)
TAG_REFL_TAG_BLOCK_DEF(s_layers_block)
	TAG_REFL_PROPERTY(indice)
REFL_END
	TAG_REFL_TAG_BLOCK(layers)
TAG_REFL_TAG_BLOCK_DEF(s_passes_block)
	TAG_REFL_PROPERTY(indice)
REFL_END
	TAG_REFL_TAG_BLOCK(passes)
TAG_REFL_TAG_BLOCK_DEF(s_implementations_block)
	TAG_REFL_PROPERTY(bitmaptransform)
	TAG_REFL_PROPERTY(renderstate)
	TAG_REFL_PROPERTY(texturestate)
	TAG_REFL_PROPERTY(pixelconstant)
	TAG_REFL_PROPERTY(vertexconstant)
REFL_END
	TAG_REFL_TAG_BLOCK(implementations)
TAG_REFL_TAG_BLOCK_DEF(s_overlays_block)
	TAG_REFL_STRING_ID(inputname)
	TAG_REFL_STRING_ID(rangename)
	TAG_REFL_PROPERTY(timeperiodinseconds)
TAG_REFL_TAG_BLOCK_DEF(s_functions_block)
	TAG_REFL_PROPERTY(function)
REFL_END
	TAG_REFL_TAG_BLOCK(functions)
REFL_END
	TAG_REFL_TAG_BLOCK(overlays)
TAG_REFL_TAG_BLOCK_DEF(s_overlay_references_block)
	TAG_REFL_PROPERTY(overlayindex)
	TAG_REFL_PROPERTY(transformindex)
REFL_END
	TAG_REFL_TAG_BLOCK(overlay_references)
TAG_REFL_TAG_BLOCK_DEF(s_animated_parameters_block)
	TAG_REFL_PROPERTY(overlayreference)
REFL_END
	TAG_REFL_TAG_BLOCK(animated_parameters)
TAG_REFL_TAG_BLOCK_DEF(s_animated_parameter_references_block)
	TAG_REFL_PROPERTY(parameterindex)
REFL_END
	TAG_REFL_TAG_BLOCK(animated_parameter_references)
TAG_REFL_TAG_BLOCK_DEF(s_bitmap_properties_block)
	TAG_REFL_PROPERTY(bitmapindex)
	TAG_REFL_PROPERTY(animatedparameterindex)
REFL_END
	TAG_REFL_TAG_BLOCK(bitmap_properties)
TAG_REFL_TAG_BLOCK_DEF(s_color_properties_block)
	TAG_REFL_REAL_COLOR_RGB(colour)
REFL_END
	TAG_REFL_TAG_BLOCK(color_properties)
TAG_REFL_TAG_BLOCK_DEF(s_value_properties_block)
	TAG_REFL_PROPERTY(value)
REFL_END
	TAG_REFL_TAG_BLOCK(value_properties)
REFL_END
	TAG_REFL_TAG_BLOCK(postprocess_definitions)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
REFL_END
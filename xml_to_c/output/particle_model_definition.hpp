#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: particle_model
		* group_tag : PRTM
 		* header size : 220
		* *********************************************************************/ 
struct s_particle_model_group_definition
{
enum class e_flags : __int32
{
spins = FLAG(0),
random_u_mirror = FLAG(1),
random_v_mirror = FLAG(2),
frame_animation_one_shot = FLAG(3),
select_random_sequence = FLAG(4),
disable_frame_blending = FLAG(5),
can_animate_backwards = FLAG(6),
receive_lightmap_lighting = FLAG(7),
tint_from_diffuse_texture = FLAG(8),
dies_at_rest = FLAG(9),
dies_on_structure_collision = FLAG(10),
dies_in_media = FLAG(11),
dies_in_air = FLAG(12),
bitmap_authored_vertically = FLAG(13),
has_sweetener = FLAG(14),
};
e_flags flags;//0x0
enum class e_orientation : __int32
{
screen_facing = 0,
parallel_to_direction = 1,
perpendicular_to_direction = 2,
vertical = 3,
horizontal = 4,
};
e_orientation orientation;//0x4
PAD(0x10);//0x8
tag_reference shader;//0x18
__int16 value;//0x20
enum class e_output_modifier : __int16
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x22
__int16 value;//0x24
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
e_output_modifier output_modifier;//0x26
struct s_scale_x_block
{
__int32 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_scale_x_block,0x4);
tag_block<s_scale_x_block> scale_x;//0x28
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-4);//0x30
__int16 value;//0x2C
enum class e_output_modifier : __int16
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x2E
__int16 value;//0x30
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
e_output_modifier output_modifier;//0x32
struct s_scale_y_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_scale_y_block,0x1);
tag_block<s_scale_y_block> scale_y;//0x34
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-4);//0x3C
__int16 value;//0x38
PAD(0x2);//0x3A
enum class e_output_modifier : __int16
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x3C
PAD(0x2);//0x3E
__int16 value;//0x40
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
e_output_modifier output_modifier;//0x42
struct s_scale_z_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_scale_z_block,0x1);
tag_block<s_scale_z_block> scale_z;//0x44
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-4);//0x4C
__int16 value;//0x48
enum class e_output_modifier : __int16
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x4A
__int16 value;//0x4C
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
PAD(0x2);//0x50
struct s_rotation_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_rotation_block,0x1);
tag_block<s_rotation_block> rotation;//0x52
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-4);//0x5A
tag_reference collision_effect;//0x56
tag_reference death_effect;//0x5E
struct s_locations_block
{
string_id marker_name;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_locations_block,0x4);
tag_block<s_locations_block> locations;//0x66
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-4);//0x6E
struct s_attached_particle_system_block
{
tag_reference particle;//0x0
PAD(0x8);//0x8
__int16 location_index;//0x10
enum class e_coordinate_system : __int16
{
world = 0,
local = 1,
parent = 2,
};
e_coordinate_system coordinate_system;//0x12
enum class e_environment : __int16
{
any = 0,
air_only = 1,
water_only = 2,
space_only = 3,
};
e_environment environment;//0x14
enum class e_disposition : __int16
{
either_mode = 0,
violent_mode = 1,
nonviolent_mode = 2,
};
e_disposition disposition;//0x16
enum class e_camera_mode : __int16
{
independent_of_camera_mode = 0,
only_in_first_person = 1,
only_in_third_person = 2,
both_first_and_third = 3,
};
e_camera_mode camera_mode;//0x18
__int16 sort_bias;//0x1A
enum class e_flags : __int32
{
glow = FLAG(0),
cinematics = FLAG(1),
loop_particle = FLAG(2),
disabled_for_debugging = FLAG(3),
inherit_effect_velocity = FLAG(4),
render_when_zoomed = FLAG(5),
spread_between_ticks = FLAG(6),
persistent_particle = FLAG(7),
expensive_visibility = FLAG(8),
};
e_flags flags;//0x1C
float lod_in_distance;//0x20
float lod_feather_in_delta;//0x24
float lod_out_distance;//0x28
float lod_feather_out_delta;//0x2C
struct s_emitters_block
{
tag_reference particle_physics;//0x0
enum class e_output_modifier : __int32
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x8
enum class e_output_modifier : __int32
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
e_output_modifier output_modifier;//0xC
struct s_particle_emission_rate_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_particle_emission_rate_block,0x1);
tag_block<s_particle_emission_rate_block> particle_emission_rate;//0x10
enum class e_output_modifier : __int32
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x18
enum class e_output_modifier : __int32
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
e_output_modifier output_modifier;//0x1C
struct s_particle_lifespan_sec_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_particle_lifespan_sec_block,0x1);
tag_block<s_particle_lifespan_sec_block> particle_lifespan_sec;//0x20
enum class e_output_modifier : __int32
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x28
enum class e_output_modifier : __int32
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
e_output_modifier output_modifier;//0x2C
struct s_particle_velocity_world_units_per_sec_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_particle_velocity_world_units_per_sec_block,0x1);
tag_block<s_particle_velocity_world_units_per_sec_block> particle_velocity_world_units_per_sec;//0x30
enum class e_output_modifier : __int32
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x38
enum class e_output_modifier : __int32
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
e_output_modifier output_modifier;//0x3C
struct s_particle_angular_velocity_degrees_per_sec_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_particle_angular_velocity_degrees_per_sec_block,0x1);
tag_block<s_particle_angular_velocity_degrees_per_sec_block> particle_angular_velocity_degrees_per_sec;//0x40
enum class e_output_modifier : __int32
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x48
enum class e_output_modifier : __int32
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
e_output_modifier output_modifier;//0x4C
struct s_particle_size_world_units_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_particle_size_world_units_block,0x1);
tag_block<s_particle_size_world_units_block> particle_size_world_units;//0x50
enum class e_output_modifier : __int32
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x58
enum class e_output_modifier : __int32
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
e_output_modifier output_modifier;//0x5C
struct s_particle_tint_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_particle_tint_block,0x1);
tag_block<s_particle_tint_block> particle_tint;//0x60
enum class e_output_modifier : __int32
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x68
enum class e_output_modifier : __int32
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
e_output_modifier output_modifier;//0x6C
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
enum class e_output_modifier : __int32
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x7C
enum class e_output_modifier : __int32
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
e_output_modifier output_modifier;//0x80
struct s_emission_radius_world_units_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_emission_radius_world_units_block,0x1);
tag_block<s_emission_radius_world_units_block> emission_radius_world_units;//0x84
enum class e_output_modifier : __int32
{
NUM_ = 0,
plus = 1,
times = 2,
};
e_output_modifier output_modifier;//0x8C
enum class e_output_modifier : __int32
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
e_output_modifier output_modifier;//0x90
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
TAG_BLOCK_SIZE_ASSERT(s_attached_particle_system_block,0x38);
tag_block<s_attached_particle_system_block> attached_particle_system;//0x6A
PAD(0xE);//0x72
struct s_models_block
{
string_id model_name;//0x0
__int16 index_start;//0x4
__int16 index_count;//0x6
};
TAG_BLOCK_SIZE_ASSERT(s_models_block,0x8);
tag_block<s_models_block> models;//0x80
struct s_raw_vertices_block
{
float pos_x;//0x0
float pos_y;//0x4
float pos_z;//0x8
angle normal_i;//0xC
angle normal_j;//0x10
angle normal_k;//0x14
angle tangent_i;//0x18
angle tangent_j;//0x1C
angle tangent_k;//0x20
angle binormal_i;//0x24
angle binormal_j;//0x28
angle binormal_k;//0x2C
float texture_coord_x;//0x30
float texture_coord_y;//0x34
};
TAG_BLOCK_SIZE_ASSERT(s_raw_vertices_block,0x38);
tag_block<s_raw_vertices_block> raw_vertices;//0x88
struct s_indices_block
{
__int16 index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_indices_block,0x2);
tag_block<s_indices_block> indices;//0x90
struct s_cached_data_block
{
PAD(0x2);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_cached_data_block,0x2);
tag_block<s_cached_data_block> cached_data;//0x98
unsigned __int32 raw_offset;//0xA0
unsigned __int32 raw_size;//0xA4
unsigned __int32 raw_header_size;//0xA8
unsigned __int32 raw_data_size;//0xAC
struct s_resources_block
{
enum class e_type : __int32
{
};
e_type type;//0x0
__int16 primary_location;//0x4
__int16 secondary_location;//0x6
unsigned __int32 raw_data_size;//0x8
unsigned __int32 raw_data_offset;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_resources_block,0x10);
tag_block<s_resources_block> resources;//0xB0
PAD(0x20);//0xB8
__int16 owner_tag_section_offset;//0xD8
PAD(0x2);//0xDA
};
TAG_GROUP_SIZE_ASSERT(s_particle_model_group_definition,0xDC);
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_scale_x_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_scale_y_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_scale_z_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_rotation_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_locations_block)	TAG_REFL_STRING_ID(marker_name)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_attached_particle_system_group_definition::s_emitters_group_definition::s_particle_emission_rate_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_attached_particle_system_group_definition::s_emitters_group_definition::s_particle_lifespan_sec_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_attached_particle_system_group_definition::s_emitters_group_definition::s_particle_velocity_world_units_per_sec_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_attached_particle_system_group_definition::s_emitters_group_definition::s_particle_angular_velocity_degrees_per_sec_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_attached_particle_system_group_definition::s_emitters_group_definition::s_particle_size_world_units_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_attached_particle_system_group_definition::s_emitters_group_definition::s_particle_tint_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_attached_particle_system_group_definition::s_emitters_group_definition::s_particle_alpha_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_attached_particle_system_group_definition::s_emitters_group_definition::s_emission_radius_world_units_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_attached_particle_system_group_definition::s_emitters_group_definition::s_emission_angle_degrees_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_attached_particle_system_group_definition::s_emitters_block)	TAG_REFL_TAG_REFERENCE(particle_physics)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_TAG_BLOCK(particle_emission_rate)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_TAG_BLOCK(particle_lifespan_sec)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_TAG_BLOCK(particle_velocity_world_units_per_sec)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_TAG_BLOCK(particle_angular_velocity_degrees_per_sec)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_TAG_BLOCK(particle_size_world_units)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_TAG_BLOCK(particle_tint)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_TAG_BLOCK(particle_alpha)	TAG_REFL_PROPERTY(emission_shape)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_TAG_BLOCK(emission_radius_world_units)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_TAG_BLOCK(emission_angle_degrees)	TAG_REFL_PROPERTY(translation_offset_x)	TAG_REFL_PROPERTY(translation_offset_y)	TAG_REFL_PROPERTY(translation_offset_z)	TAG_REFL_ANGLE(relative_direction_yaw)	TAG_REFL_ANGLE(relative_direction_pitch)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_attached_particle_system_block)	TAG_REFL_TAG_REFERENCE(particle)	TAG_REFL_PROPERTY(location_index)	TAG_REFL_PROPERTY(coordinate_system)	TAG_REFL_PROPERTY(environment)	TAG_REFL_PROPERTY(disposition)	TAG_REFL_PROPERTY(camera_mode)	TAG_REFL_PROPERTY(sort_bias)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(lod_in_distance)	TAG_REFL_PROPERTY(lod_feather_in_delta)	TAG_REFL_PROPERTY(lod_out_distance)	TAG_REFL_PROPERTY(lod_feather_out_delta)	TAG_REFL_TAG_BLOCK(emitters)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_models_block)	TAG_REFL_STRING_ID(model_name)	TAG_REFL_PROPERTY(index_start)	TAG_REFL_PROPERTY(index_count)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_raw_vertices_block)	TAG_REFL_PROPERTY(pos_x)	TAG_REFL_PROPERTY(pos_y)	TAG_REFL_PROPERTY(pos_z)	TAG_REFL_ANGLE(normal_i)	TAG_REFL_ANGLE(normal_j)	TAG_REFL_ANGLE(normal_k)	TAG_REFL_ANGLE(tangent_i)	TAG_REFL_ANGLE(tangent_j)	TAG_REFL_ANGLE(tangent_k)	TAG_REFL_ANGLE(binormal_i)	TAG_REFL_ANGLE(binormal_j)	TAG_REFL_ANGLE(binormal_k)	TAG_REFL_PROPERTY(texture_coord_x)	TAG_REFL_PROPERTY(texture_coord_y)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_indices_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_cached_data_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_particle_model_group_definition::s_resources_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(primary_location)	TAG_REFL_PROPERTY(secondary_location)	TAG_REFL_PROPERTY(raw_data_size)	TAG_REFL_PROPERTY(raw_data_offset)REFL_END
TAG_REFL(s_particle_model_group_definition)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(orientation)	TAG_REFL_TAG_REFERENCE(shader)	TAG_REFL_PROPERTY(value)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_PROPERTY(value)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_TAG_BLOCK(scale_x)	TAG_REFL_PROPERTY(value)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_PROPERTY(value)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_TAG_BLOCK(scale_y)	TAG_REFL_PROPERTY(value)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_PROPERTY(value)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_TAG_BLOCK(scale_z)	TAG_REFL_PROPERTY(value)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_PROPERTY(value)	TAG_REFL_PROPERTY(output_modifier)	TAG_REFL_TAG_BLOCK(rotation)	TAG_REFL_TAG_REFERENCE(collision_effect)	TAG_REFL_TAG_REFERENCE(death_effect)	TAG_REFL_TAG_BLOCK(locations)	TAG_REFL_TAG_BLOCK(attached_particle_system)	TAG_REFL_TAG_BLOCK(models)	TAG_REFL_TAG_BLOCK(raw_vertices)	TAG_REFL_TAG_BLOCK(indices)	TAG_REFL_TAG_BLOCK(cached_data)	TAG_REFL_PROPERTY(raw_offset)	TAG_REFL_PROPERTY(raw_size)	TAG_REFL_PROPERTY(raw_header_size)	TAG_REFL_PROPERTY(raw_data_size)	TAG_REFL_TAG_BLOCK(resources)	TAG_REFL_PROPERTY(owner_tag_section_offset)REFL_END

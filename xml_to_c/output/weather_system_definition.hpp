#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: weather_system
		* group_tag : weat
 		* header size : 176
		* *********************************************************************/ 
struct s_weather_system_group_definition
{
struct s_particle_system_block
{
tag_reference sprites;//0x0
float view_box_width;//0x8
float view_box_height;//0xC
float view_box_depth;//0x10
float exclusion_radius;//0x14
float max_velocity;//0x18
float min_mass;//0x1C
float max_mass;//0x20
float min_size;//0x24
float max_size;//0x28
__int32 maximum_number_of_particles;//0x2C
float initial_velocity_i;//0x30
float initial_velocity_j;//0x34
float initial_velocity_k;//0x38
PAD(0x4);//0x3C
unsigned __int32 block_offset;//0x40
unsigned __int32 block_size;//0x44
unsigned __int32 section_data_size;//0x48
unsigned __int32 resource_data_size;//0x4C
struct s_resources_block
{
enum class e_type : __int32
{
};
e_type type;//0x0
__int16 primary_locator;//0x4
__int16 secondary_locator;//0x6
unsigned __int32 resource_data_size;//0x8
unsigned __int32 resource_data_offset;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_resources_block,0x10);
tag_block<s_resources_block> resources;//0x50
__int32 owner_id;//0x58
unsigned __int32 owner_tag_section_offset;//0x5C
PAD(0xC);//0x60
enum class e_type : __int32
{
generic = 0,
snow = 1,
rain = 2,
rain_splash = 3,
bugs = 4,
sand_storm = 5,
debris = 6,
bubbles = 7,
};
e_type type;//0x6C
float minimum_opacity;//0x70
float maximum_opacity;//0x74
float rain_streak_scale;//0x78
float rain_line_width;//0x7C
PAD(0xC);//0x80
};
TAG_BLOCK_SIZE_ASSERT(s_particle_system_block,0x8C);
tag_block<s_particle_system_block> particle_system;//0x0
struct s_background_plates_block
{
tag_reference texture_0;//0x0
tag_reference texture_1;//0x8
tag_reference texture_2;//0x10
float plate_position_0;//0x18
float plate_position_1;//0x1C
float plate_position_2;//0x20
float move_speed_0_i;//0x24
float move_speed_0_j;//0x28
float move_speed_0_k;//0x2C
float move_speed_1_i;//0x30
float move_speed_1_j;//0x34
float move_speed_1_k;//0x38
float move_speed_2_i;//0x3C
float move_speed_2_j;//0x40
float move_speed_2_k;//0x44
float texture_scale_0;//0x48
float texture_scale_1;//0x4C
float texture_scale_2;//0x50
float jitter_0_i;//0x54
float jitter_0_j;//0x58
float jitter_0_k;//0x5C
float jitter_1_i;//0x60
float jitter_1_j;//0x64
float jitter_1_k;//0x68
float jitter_2_i;//0x6C
float jitter_2_j;//0x70
float jitter_2_k;//0x74
float plate_z_near;//0x78
float plate_z_far;//0x7C
float depth_blend_z_near;//0x80
float depth_blend_z_far;//0x84
float opacity_0;//0x88
float opacity_1;//0x8C
float opacity_2;//0x90
enum class e_flags : __int32
{
forward = FLAG(0),
auto_position_planes = FLAG(1),
auto_scale_planesauto_update_spe = FLAG(2),
};
e_flags flags;//0x94
float tint_color_0_r;//0x98
float tint_color_0_g;//0x9C
float tint_color_0_b;//0xA0
float tint_color_1_r;//0xA4
float tint_color_1_g;//0xA8
float tint_color_1_b;//0xAC
float tint_color_2_r;//0xB0
float tint_color_2_g;//0xB4
float tint_color_2_b;//0xB8
float mass_1;//0xBC
float mass_2;//0xC0
float mass_3;//0xC4
PAD(0x2E0);//0xC8
};
TAG_BLOCK_SIZE_ASSERT(s_background_plates_block,0x3A8);
tag_block<s_background_plates_block> background_plates;//0x8
float wind_tiling_scale;//0x10
PAD(0x24);//0x14
float wind_primary_heading_i;//0x38
float wind_primary_heading_j;//0x3C
float wind_primary_heading_k;//0x40
PAD(0x8);//0x44
float primary_rate_of_change;//0x4C
float primary_min_strength;//0x50
PAD(0x4);//0x54
float wind_gusting_heading_i;//0x58
float wind_gusting_heading_j;//0x5C
float wind_gusting_heading_k;//0x60
PAD(0xC);//0x64
float gust_directional_rate_of_change;//0x70
float gust_strength_rate_of_change;//0x74
float gust_cone_angle;//0x78
PAD(0x10);//0x7C
float turbulance_rate_of_change;//0x8C
float turbulence_scale_xyz_i;//0x90
float turbulence_scale_xyz_j;//0x94
float turbulence_scale_xyz_k;//0x98
float gravity_constant;//0x9C
PAD(0xC);//0xA0
float fade_radius;//0xAC
};
TAG_GROUP_SIZE_ASSERT(s_weather_system_group_definition,0xB0);
TAG_REFL(s_weather_system_group_definition)
TAG_REFL_TAG_BLOCK_DEF(s_particle_system_block)
	TAG_REFL_TAG_REFERENCE(sprites)
	TAG_REFL_PROPERTY(view_box_width)
	TAG_REFL_PROPERTY(view_box_height)
	TAG_REFL_PROPERTY(view_box_depth)
	TAG_REFL_PROPERTY(exclusion_radius)
	TAG_REFL_PROPERTY(max_velocity)
	TAG_REFL_PROPERTY(min_mass)
	TAG_REFL_PROPERTY(max_mass)
	TAG_REFL_PROPERTY(min_size)
	TAG_REFL_PROPERTY(max_size)
	TAG_REFL_PROPERTY(maximum_number_of_particles)
	TAG_REFL_PROPERTY(initial_velocity_i)
	TAG_REFL_PROPERTY(initial_velocity_j)
	TAG_REFL_PROPERTY(initial_velocity_k)
	TAG_REFL_PROPERTY(block_offset)
	TAG_REFL_PROPERTY(block_size)
	TAG_REFL_PROPERTY(section_data_size)
	TAG_REFL_PROPERTY(resource_data_size)
TAG_REFL_TAG_BLOCK_DEF(s_resources_block)
	TAG_REFL_PROPERTY(type)
	TAG_REFL_PROPERTY(primary_locator)
	TAG_REFL_PROPERTY(secondary_locator)
	TAG_REFL_PROPERTY(resource_data_size)
	TAG_REFL_PROPERTY(resource_data_offset)
REFL_END
	TAG_REFL_TAG_BLOCK(resources)
	TAG_REFL_PROPERTY(owner_id)
	TAG_REFL_PROPERTY(owner_tag_section_offset)
	TAG_REFL_PROPERTY(type)
	TAG_REFL_PROPERTY(minimum_opacity)
	TAG_REFL_PROPERTY(maximum_opacity)
	TAG_REFL_PROPERTY(rain_streak_scale)
	TAG_REFL_PROPERTY(rain_line_width)
REFL_END
	TAG_REFL_TAG_BLOCK(particle_system)
TAG_REFL_TAG_BLOCK_DEF(s_background_plates_block)
	TAG_REFL_TAG_REFERENCE(texture_0)
	TAG_REFL_TAG_REFERENCE(texture_1)
	TAG_REFL_TAG_REFERENCE(texture_2)
	TAG_REFL_PROPERTY(plate_position_0)
	TAG_REFL_PROPERTY(plate_position_1)
	TAG_REFL_PROPERTY(plate_position_2)
	TAG_REFL_PROPERTY(move_speed_0_i)
	TAG_REFL_PROPERTY(move_speed_0_j)
	TAG_REFL_PROPERTY(move_speed_0_k)
	TAG_REFL_PROPERTY(move_speed_1_i)
	TAG_REFL_PROPERTY(move_speed_1_j)
	TAG_REFL_PROPERTY(move_speed_1_k)
	TAG_REFL_PROPERTY(move_speed_2_i)
	TAG_REFL_PROPERTY(move_speed_2_j)
	TAG_REFL_PROPERTY(move_speed_2_k)
	TAG_REFL_PROPERTY(texture_scale_0)
	TAG_REFL_PROPERTY(texture_scale_1)
	TAG_REFL_PROPERTY(texture_scale_2)
	TAG_REFL_PROPERTY(jitter_0_i)
	TAG_REFL_PROPERTY(jitter_0_j)
	TAG_REFL_PROPERTY(jitter_0_k)
	TAG_REFL_PROPERTY(jitter_1_i)
	TAG_REFL_PROPERTY(jitter_1_j)
	TAG_REFL_PROPERTY(jitter_1_k)
	TAG_REFL_PROPERTY(jitter_2_i)
	TAG_REFL_PROPERTY(jitter_2_j)
	TAG_REFL_PROPERTY(jitter_2_k)
	TAG_REFL_PROPERTY(plate_z_near)
	TAG_REFL_PROPERTY(plate_z_far)
	TAG_REFL_PROPERTY(depth_blend_z_near)
	TAG_REFL_PROPERTY(depth_blend_z_far)
	TAG_REFL_PROPERTY(opacity_0)
	TAG_REFL_PROPERTY(opacity_1)
	TAG_REFL_PROPERTY(opacity_2)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(tint_color_0_r)
	TAG_REFL_PROPERTY(tint_color_0_g)
	TAG_REFL_PROPERTY(tint_color_0_b)
	TAG_REFL_PROPERTY(tint_color_1_r)
	TAG_REFL_PROPERTY(tint_color_1_g)
	TAG_REFL_PROPERTY(tint_color_1_b)
	TAG_REFL_PROPERTY(tint_color_2_r)
	TAG_REFL_PROPERTY(tint_color_2_g)
	TAG_REFL_PROPERTY(tint_color_2_b)
	TAG_REFL_PROPERTY(mass_1)
	TAG_REFL_PROPERTY(mass_2)
	TAG_REFL_PROPERTY(mass_3)
REFL_END
	TAG_REFL_TAG_BLOCK(background_plates)
	TAG_REFL_PROPERTY(wind_tiling_scale)
	TAG_REFL_PROPERTY(wind_primary_heading_i)
	TAG_REFL_PROPERTY(wind_primary_heading_j)
	TAG_REFL_PROPERTY(wind_primary_heading_k)
	TAG_REFL_PROPERTY(primary_rate_of_change)
	TAG_REFL_PROPERTY(primary_min_strength)
	TAG_REFL_PROPERTY(wind_gusting_heading_i)
	TAG_REFL_PROPERTY(wind_gusting_heading_j)
	TAG_REFL_PROPERTY(wind_gusting_heading_k)
	TAG_REFL_PROPERTY(gust_directional_rate_of_change)
	TAG_REFL_PROPERTY(gust_strength_rate_of_change)
	TAG_REFL_PROPERTY(gust_cone_angle)
	TAG_REFL_PROPERTY(turbulance_rate_of_change)
	TAG_REFL_PROPERTY(turbulence_scale_xyz_i)
	TAG_REFL_PROPERTY(turbulence_scale_xyz_j)
	TAG_REFL_PROPERTY(turbulence_scale_xyz_k)
	TAG_REFL_PROPERTY(gravity_constant)
	TAG_REFL_PROPERTY(fade_radius)
REFL_END
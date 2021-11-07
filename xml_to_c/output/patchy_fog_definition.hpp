#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: patchy_fog
		* group_tag : fpch
 		* header size : 80
		* *********************************************************************/ 
struct s_patchy_fog_group_definition
{
enum class e_flags : __int32
{
separate_layer_depths = FLAG(0),
sort_behind_transparents = FLAG(1),
};
e_flags flags;//0x0
float movement_rotation_multiplier;//0x4
float movement_strafing_multiplier;//0x8
float movement_zoom_multiplier;//0xC
float noise_map_scale;//0x10
tag_reference noise_map;//0x14
float noise_vertical_scale_forward;//0x1C
float noise_vertical_scale_up;//0x20
float noise_opacity_scale_up;//0x24
float animation_period_sec;//0x28
float wind_velocity;//0x2C
float to;//0x30
float wind_period;//0x34
float to;//0x38
float wind_acceleration_weight;//0x3C
float wind_perpendicular_weight;//0x40
float wind_constant_velocity_x;//0x44
float wind_constant_velocity_y;//0x48
float wind_constant_velocity_z;//0x4C
};
TAG_GROUP_SIZE_ASSERT(s_patchy_fog_group_definition,0x50);
TAG_REFL(s_patchy_fog_group_definition)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(movement_rotation_multiplier)
	TAG_REFL_PROPERTY(movement_strafing_multiplier)
	TAG_REFL_PROPERTY(movement_zoom_multiplier)
	TAG_REFL_PROPERTY(noise_map_scale)
	TAG_REFL_TAG_REFERENCE(noise_map)
	TAG_REFL_PROPERTY(noise_vertical_scale_forward)
	TAG_REFL_PROPERTY(noise_vertical_scale_up)
	TAG_REFL_PROPERTY(noise_opacity_scale_up)
	TAG_REFL_PROPERTY(animation_period_sec)
	TAG_REFL_PROPERTY(wind_velocity)
	TAG_REFL_PROPERTY(to)
	TAG_REFL_PROPERTY(wind_period)
	TAG_REFL_PROPERTY(to)
	TAG_REFL_PROPERTY(wind_acceleration_weight)
	TAG_REFL_PROPERTY(wind_perpendicular_weight)
	TAG_REFL_PROPERTY(wind_constant_velocity_x)
	TAG_REFL_PROPERTY(wind_constant_velocity_y)
	TAG_REFL_PROPERTY(wind_constant_velocity_z)
REFL_END
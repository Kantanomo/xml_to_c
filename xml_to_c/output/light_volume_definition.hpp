#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: light_volume
		* group_tag : MGS2
 		* header size : 16
		* *********************************************************************/ 
struct s_light_volume_group_definition
{
float falloff_distance_from_camera;//0x0
float cutoff_distance_from_camera;//0x4
struct s_volumes_block
{
enum class e_flags : __int32
{
force_linear_radius_function = FLAG(0),
force_linear_offset = FLAG(1),
force_differential_evaluation = FLAG(2),
fuzzy = FLAG(3),
not_scaled_by_event_duration = FLAG(4),
scaled_by_marker = FLAG(5),
};
e_flags flags;//0x0
tag_reference bitmap;//0x4
__int32 sprite_count;//0xC
struct s_offset_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_offset_block,0x1);
tag_block<s_offset_block> offset;//0x10
struct s_radius_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_radius_block,0x1);
tag_block<s_radius_block> radius;//0x18
struct s_brightness_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_brightness_block,0x1);
tag_block<s_brightness_block> brightness;//0x20
struct s_color_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_color_block,0x1);
tag_block<s_color_block> color;//0x28
struct s_facing_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_facing_block,0x1);
tag_block<s_facing_block> facing;//0x30
struct s_aspect_block
{
struct s_alongaxis_scale_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_alongaxis_scale_block,0x1);
tag_block<s_alongaxis_scale_block> alongaxis_scale;//0x0
struct s_awayfromaxis_scale_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_awayfromaxis_scale_block,0x1);
tag_block<s_awayfromaxis_scale_block> awayfromaxis_scale;//0x8
float parallel_scale;//0x10
float parallel_threshold_angle;//0x14
float parallel_exponent;//0x18
};
TAG_BLOCK_SIZE_ASSERT(s_aspect_block,0x1C);
tag_block<s_aspect_block> aspect;//0x38
float radius_frac_min;//0x40
float deprecated_xstep_exponent;//0x44
__int32 deprecated_xbuffer_length;//0x48
__int32 xbuffer_spacing;//0x4C
__int32 xbuffer_min_iterations;//0x50
__int32 xbuffer_max_iterations;//0x54
float xdelta_max_error;//0x58
PAD(0x4);//0x5C
struct s_NUM__block
{
PAD(0x8);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_NUM__block,0x8);
tag_block<s_NUM__block> NUM_;//0x60
PAD(0x30);//0x68
};
TAG_BLOCK_SIZE_ASSERT(s_volumes_block,0x98);
tag_block<s_volumes_block> volumes;//0x8
};
TAG_GROUP_SIZE_ASSERT(s_light_volume_group_definition,0x10);
TAG_REFL_TAG_BLOCK_DEF(s_light_volume_group_definition::s_volumes_block::s_offset_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_light_volume_group_definition::s_volumes_block::s_radius_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_light_volume_group_definition::s_volumes_block::s_brightness_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_light_volume_group_definition::s_volumes_block::s_color_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_light_volume_group_definition::s_volumes_block::s_facing_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_light_volume_group_definition::s_volumes_block::s_aspect_block::s_alongaxis_scale_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_light_volume_group_definition::s_volumes_block::s_aspect_block::s_awayfromaxis_scale_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_light_volume_group_definition::s_volumes_block::s_aspect_block)	TAG_REFL_TAG_BLOCK(alongaxis_scale)	TAG_REFL_TAG_BLOCK(awayfromaxis_scale)	TAG_REFL_PROPERTY(parallel_scale)	TAG_REFL_PROPERTY(parallel_threshold_angle)	TAG_REFL_PROPERTY(parallel_exponent)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_light_volume_group_definition::s_volumes_block::s_NUM__block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_light_volume_group_definition::s_volumes_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_TAG_REFERENCE(bitmap)	TAG_REFL_PROPERTY(sprite_count)	TAG_REFL_TAG_BLOCK(offset)	TAG_REFL_TAG_BLOCK(radius)	TAG_REFL_TAG_BLOCK(brightness)	TAG_REFL_TAG_BLOCK(color)	TAG_REFL_TAG_BLOCK(facing)	TAG_REFL_TAG_BLOCK(aspect)	TAG_REFL_PROPERTY(radius_frac_min)	TAG_REFL_PROPERTY(deprecated_xstep_exponent)	TAG_REFL_PROPERTY(deprecated_xbuffer_length)	TAG_REFL_PROPERTY(xbuffer_spacing)	TAG_REFL_PROPERTY(xbuffer_min_iterations)	TAG_REFL_PROPERTY(xbuffer_max_iterations)	TAG_REFL_PROPERTY(xdelta_max_error)	TAG_REFL_TAG_BLOCK(NUM_)REFL_END
TAG_REFL(s_light_volume_group_definition)	TAG_REFL_PROPERTY(falloff_distance_from_camera)	TAG_REFL_PROPERTY(cutoff_distance_from_camera)	TAG_REFL_TAG_BLOCK(volumes)REFL_END

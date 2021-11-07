#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: lens_flare
		* group_tag : lens
 		* header size : 100
		* *********************************************************************/ 
struct s_lens_flare_group_definition
{
angle falloff_angle;//0x0
angle cutoff_angle;//0x4
float unknown;//0x8
float unknown;//0xC
float occlusion_radius;//0x10
enum class e_occlusion_offset_direction : __int16
{
toward_viewer = 0,
marker_forward = 1,
none = 2,
};
e_occlusion_offset_direction occlusion_offset_direction;//0x14
enum class e_occlusion_inner_radius_scale : __int16
{
none = 0,
NUM_12 = 1,
NUM_14 = 2,
NUM_18 = 3,
NUM_116 = 4,
NUM_132 = 5,
NUM_164 = 6,
};
e_occlusion_inner_radius_scale occlusion_inner_radius_scale;//0x16
float near_fade_distance;//0x18
float far_fade_distance;//0x1C
tag_reference bitmap;//0x20
enum class e_flags : __int16
{
sun = FLAG(0),
no_occlusion_test = FLAG(1),
only_render_in_1st_person = FLAG(2),
only_render_in_3rd_person = FLAG(3),
fade_in_more_quickly = FLAG(4),
scale_by_marker = FLAG(5),
};
e_flags flags;//0x28
__int16 unknown;//0x2A
enum class e_rotation_function : __int16
{
none = 0,
rotation_a = 1,
rotation_b = 3,
rotation_translation = 4,
translation = 5,
};
e_rotation_function rotation_function;//0x2C
__int16 unknown;//0x2E
angle rotation_function_scale;//0x30
float corona_scale_i;//0x34
float corona_scale_j;//0x38
enum class e_falloff_function : __int16
{
linear = 0,
late = 1,
very_late = 2,
early = 3,
very_early = 4,
cosine = 5,
zero = 6,
one = 7,
};
e_falloff_function falloff_function;//0x3C
__int16 unknown;//0x3E
struct s_reflections_block
{
enum class e_flags : __int16
{
align_rotation_with_screen_center = FLAG(0),
radius_not_scaled_by_distance = FLAG(1),
radius_scaled_by_occlusion_factor = FLAG(2),
occluded_by_solid_objects = FLAG(3),
ignore_light_color = FLAG(4),
not_affected_by_inner_occlusion = FLAG(5),
};
e_flags flags;//0x0
__int16 unknown;//0x2
__int16 bitmap_index;//0x4
__int16 unknown;//0x6
float position_along_flare_axis;//0x8
float rotation_offset;//0xC
float radius_min;//0x10
float radius_max;//0x14
float brightness_min;//0x18
float brightness_max;//0x1C
float tint_modulation_factor;//0x20
float tint_color_r;//0x24
float tint_color_g;//0x28
float tint_color_b;//0x2C
};
TAG_BLOCK_SIZE_ASSERT(s_reflections_block,0x30);
tag_block<s_reflections_block> reflections;//0x40
enum class e_flags : __int16
{
synchronized = FLAG(0),
};
e_flags flags;//0x48
__int16 unknown;//0x4A
struct s_brightness_block
{
data_block function;//0x0
PAD(0x4);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_brightness_block,0xC);
tag_block<s_brightness_block> brightness;//0x4C
struct s_color_block
{
data_block function;//0x0
PAD(0x4);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_color_block,0xC);
tag_block<s_color_block> color;//0x54
struct s_rotation_block
{
data_block function;//0x0
PAD(0x4);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_rotation_block,0xC);
tag_block<s_rotation_block> rotation;//0x5C
};
TAG_GROUP_SIZE_ASSERT(s_lens_flare_group_definition,0x64);
TAG_REFL(s_lens_flare_group_definition)
	TAG_REFL_ANGLE(falloff_angle)
	TAG_REFL_ANGLE(cutoff_angle)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(occlusion_radius)
	TAG_REFL_PROPERTY(occlusion_offset_direction)
	TAG_REFL_PROPERTY(occlusion_inner_radius_scale)
	TAG_REFL_PROPERTY(near_fade_distance)
	TAG_REFL_PROPERTY(far_fade_distance)
	TAG_REFL_TAG_REFERENCE(bitmap)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(rotation_function)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_ANGLE(rotation_function_scale)
	TAG_REFL_PROPERTY(corona_scale_i)
	TAG_REFL_PROPERTY(corona_scale_j)
	TAG_REFL_PROPERTY(falloff_function)
	TAG_REFL_PROPERTY(unknown)
TAG_REFL_TAG_BLOCK_DEF(s_reflections_block)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(bitmap_index)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(position_along_flare_axis)
	TAG_REFL_PROPERTY(rotation_offset)
	TAG_REFL_PROPERTY(radius_min)
	TAG_REFL_PROPERTY(radius_max)
	TAG_REFL_PROPERTY(brightness_min)
	TAG_REFL_PROPERTY(brightness_max)
	TAG_REFL_PROPERTY(tint_modulation_factor)
	TAG_REFL_PROPERTY(tint_color_r)
	TAG_REFL_PROPERTY(tint_color_g)
	TAG_REFL_PROPERTY(tint_color_b)
REFL_END
	TAG_REFL_TAG_BLOCK(reflections)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(unknown)
TAG_REFL_TAG_BLOCK_DEF(s_brightness_block)
	TAG_REFL_DATA_BLOCK(function)
REFL_END
	TAG_REFL_TAG_BLOCK(brightness)
TAG_REFL_TAG_BLOCK_DEF(s_color_block)
	TAG_REFL_DATA_BLOCK(function)
REFL_END
	TAG_REFL_TAG_BLOCK(color)
TAG_REFL_TAG_BLOCK_DEF(s_rotation_block)
	TAG_REFL_DATA_BLOCK(function)
REFL_END
	TAG_REFL_TAG_BLOCK(rotation)
REFL_END
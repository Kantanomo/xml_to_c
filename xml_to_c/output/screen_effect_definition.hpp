#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: screen_effect
		* group_tag : egor
 		* header size : 144
		* *********************************************************************/ 
struct s_screen_effect_group_definition
{
PAD(0x40);//0x0
tag_reference shader;//0x40
PAD(0x40);//0x48
struct s_pass_references_block
{
PAD(0x8);//0x0
__int16 layer_pass_index;//0x8
__int16 if_primary_equals_0_and_secondary_equals_0;//0xA
__int16 if_primary_greater_than_0_and_secondary_equals_0;//0xC
__int16 if_primary_equals_0_and_secondary_greater_than_0;//0xE
__int16 if_primary_greater_than_0_and_secondary_greater_than_0;//0x10
PAD(0x3E);//0x12
enum class e_stage_0_mode : __int16
{
default = 0,
viewport_normalized = 1,
viewport_relative = 2,
frame_buffer_relative = 3,
zero = 4,
};
e_stage_0_mode stage_0_mode;//0x50
enum class e_stage_1_mode : __int16
{
default = 0,
viewport_normalized = 1,
viewport_relative = 2,
frame_buffer_relative = 3,
zero = 4,
};
e_stage_1_mode stage_1_mode;//0x52
enum class e_stage_2_mode : __int16
{
default = 0,
viewport_normalized = 1,
viewport_relative = 2,
frame_buffer_relative = 3,
zero = 4,
};
e_stage_2_mode stage_2_mode;//0x54
enum class e_stage_3_mode : __int16
{
default = 0,
viewport_normalized = 1,
viewport_relative = 2,
frame_buffer_relative = 3,
zero = 4,
};
e_stage_3_mode stage_3_mode;//0x56
struct s_advanced_control_block
{
};
TAG_BLOCK_SIZE_ASSERT(s_advanced_control_block,0x0);
tag_block<s_advanced_control_block> advanced_control;//0x58
enum class e_target : __int32
{
frame_buffer = 0,
texaccum = 1,
texaccum_small = 2,
texaccum_tiny = 3,
copy_fb_to_texaccum = 4,
};
e_target target;//0x60
PAD(0x40);//0x64
struct s_convolution_block
{
PAD(0x44);//0x0
enum class e_flags : __int32
{
only_when_primary_is_active = FLAG(0),
only_when_secondary_is_active = FLAG(1),
predator_zoom = FLAG(2),
};
e_flags flags;//0x44
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-4);//0x48
float convolution_amount;//0x44
float filter_scale;//0x48
float filter_box_factor;//0x4C
float zoom_falloff_radius;//0x50
float zoom_cutoff_radius;//0x54
float resolution_scale;//0x58
};
TAG_BLOCK_SIZE_ASSERT(s_convolution_block,0x5C);
tag_block<s_convolution_block> convolution;//0xA4
};
TAG_BLOCK_SIZE_ASSERT(s_pass_references_block,0xAC);
tag_block<s_pass_references_block> pass_references;//0x88
};
TAG_GROUP_SIZE_ASSERT(s_screen_effect_group_definition,0x90);
TAG_REFL(s_screen_effect_group_definition)
	TAG_REFL_TAG_REFERENCE(shader)
TAG_REFL_TAG_BLOCK_DEF(s_pass_references_block)
	TAG_REFL_PROPERTY(layer_pass_index)
	TAG_REFL_PROPERTY(if_primary_equals_0_and_secondary_equals_0)
	TAG_REFL_PROPERTY(if_primary_greater_than_0_and_secondary_equals_0)
	TAG_REFL_PROPERTY(if_primary_equals_0_and_secondary_greater_than_0)
	TAG_REFL_PROPERTY(if_primary_greater_than_0_and_secondary_greater_than_0)
	TAG_REFL_PROPERTY(stage_0_mode)
	TAG_REFL_PROPERTY(stage_1_mode)
	TAG_REFL_PROPERTY(stage_2_mode)
	TAG_REFL_PROPERTY(stage_3_mode)
TAG_REFL_TAG_BLOCK_DEF(s_advanced_control_block)
REFL_END
	TAG_REFL_TAG_BLOCK(advanced_control)
	TAG_REFL_PROPERTY(target)
TAG_REFL_TAG_BLOCK_DEF(s_convolution_block)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(convolution_amount)
	TAG_REFL_PROPERTY(filter_scale)
	TAG_REFL_PROPERTY(filter_box_factor)
	TAG_REFL_PROPERTY(zoom_falloff_radius)
	TAG_REFL_PROPERTY(zoom_cutoff_radius)
	TAG_REFL_PROPERTY(resolution_scale)
REFL_END
	TAG_REFL_TAG_BLOCK(convolution)
REFL_END
	TAG_REFL_TAG_BLOCK(pass_references)
REFL_END
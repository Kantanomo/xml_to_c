#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: decal
		* group_tag : deca
 		* header size : 172
		* *********************************************************************/ 
struct s_decal_group_definition
{
enum class e_flags : __int16
{
geometry_inherited_by_next_decal = FLAG(0),
interpolate_colour = FLAG(1),
more_colour = FLAG(2),
no_random_rotation = FLAG(3),
unused = FLAG(4),
water_effect = FLAG(5),
specialefsnap_to_axis = FLAG(6),
specialefincremental_counter = FLAG(7),
unused = FLAG(8),
preserve_aspect = FLAG(9),
unused = FLAG(10),
};
e_flags flags;//0x0
enum class e_type : __int16
{
scratch = 1,
splatter = 2,
burn = 3,
painted_sign = 4,
};
e_type type;//0x2
enum class e_layer : __int16
{
lit_alpha_blend_prelight = 0,
lit_alpha_blend = 1,
double_multiply = 2,
multiply = 3,
max = 4,
add = 5,
error = 6,
};
e_layer layer;//0x4
__int16 max_overlapping_count;//0x6
tag_reference next_decal_in_chain;//0x8
float radius;//0x10
float NUM_^toworld_units;//0x14
float radius_overlapping_rejection;//0x18
float color_lower_bound_r;//0x1C
float color_lower_bound_g;//0x20
float color_lower_bound_b;//0x24
float color_upper_bound_r;//0x28
float color_upper_bound_g;//0x2C
float color_upper_bound_b;//0x30
float lifetime;//0x34
float NUM_^toseconds;//0x38
float decay_time;//0x3C
float NUM_^toseconds;//0x40
PAD(0x44);//0x44
tag_reference bitmap;//0x88
PAD(0x14);//0x90
float maximun_sprite_extentpixels;//0xA4
PAD(0x4);//0xA8
};
TAG_GROUP_SIZE_ASSERT(s_decal_group_definition,0xAC);
TAG_REFL(s_decal_group_definition)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(type)
	TAG_REFL_PROPERTY(layer)
	TAG_REFL_PROPERTY(max_overlapping_count)
	TAG_REFL_TAG_REFERENCE(next_decal_in_chain)
	TAG_REFL_PROPERTY(radius)
	TAG_REFL_PROPERTY(NUM_^toworld_units)
	TAG_REFL_PROPERTY(radius_overlapping_rejection)
	TAG_REFL_PROPERTY(color_lower_bound_r)
	TAG_REFL_PROPERTY(color_lower_bound_g)
	TAG_REFL_PROPERTY(color_lower_bound_b)
	TAG_REFL_PROPERTY(color_upper_bound_r)
	TAG_REFL_PROPERTY(color_upper_bound_g)
	TAG_REFL_PROPERTY(color_upper_bound_b)
	TAG_REFL_PROPERTY(lifetime)
	TAG_REFL_PROPERTY(NUM_^toseconds)
	TAG_REFL_PROPERTY(decay_time)
	TAG_REFL_PROPERTY(NUM_^toseconds)
	TAG_REFL_TAG_REFERENCE(bitmap)
	TAG_REFL_PROPERTY(maximun_sprite_extentpixels)
REFL_END
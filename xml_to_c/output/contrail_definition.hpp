#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: contrail
		* group_tag : cont
 		* header size : 240
		* *********************************************************************/ 
struct s_contrail_group_definition
{
enum class e_flags : __int16
{
first_point_unfaded = FLAG(0),
last_point_unfaded = FLAG(1),
points_start_pinned_to_media = FLAG(2),
points_start_pinned_to_ground = FLAG(3),
points_always_pinned_to_media = FLAG(4),
points_always_pinned_to_ground = FLAG(5),
edge_effects_fade_slowly = FLAG(6),
dont_inherit_object_change_color = FLAG(7),
};
e_flags flags;//0x0
enum class e_scale_flags : __int16
{
point_generation_rate = FLAG(0),
point_velocity = FLAG(1),
point_velocity_delta = FLAG(2),
point_velocity_cone_angle = FLAG(3),
inherited_velocity_fraction = FLAG(4),
sequence_animation_rate = FLAG(5),
texture_scale_u = FLAG(6),
texture_scale_v = FLAG(7),
texture_animation_u = FLAG(8),
texture_animation_v = FLAG(9),
};
e_scale_flags scale_flags;//0x2
float point_generation_rate;//0x4
float min_point_velocity;//0x8
float max_point_velocity;//0xC
angle point_velocity_cone_angle;//0x10
float inherited_velocity_fraction;//0x14
enum class e_render_type : __int16
{
verticle_orientation = 0,
horizontal_orientation = 1,
media_mapped = 2,
ground_mapped = 3,
viewer_facing = 4,
double_marker_linked = 5,
};
e_render_type render_type;//0x18
PAD(0x2);//0x1A
float texture_repeats_u;//0x1C
float texture_repeats_v;//0x20
float texture_animation_u;//0x24
float texture_animation_v;//0x28
float texture_animation_rate;//0x2C
tag_reference bitmap;//0x30
__int16 first_sequence_index;//0x38
__int16 sequence_count;//0x3A
PAD(0x24);//0x3C
enum class e_shader_flags : __int16
{
sort_bias = FLAG(0),
nonlinear_tint = FLAG(1),
dont_overdraw_fp_weapon = FLAG(2),
};
e_shader_flags shader_flags;//0x60
enum class e_framebuffer_blend_function : __int16
{
alpha_blend = 0,
multiply = 1,
double_multiply = 2,
add = 3,
subtract = 4,
component_min = 5,
component_max = 6,
alphamultiplyadd = 7,
};
e_framebuffer_blend_function framebuffer_blend_function;//0x62
enum class e_framebuffer_fade_mode : __int16
{
none = 0,
fade_when_perpendicular = 1,
fade_when_parallel = 2,
fade_after_duration = 3,
};
e_framebuffer_fade_mode framebuffer_fade_mode;//0x64
enum class e_map_flags : __int32
{
unfiltered = FLAG(0),
};
e_map_flags map_flags;//0x66
PAD(0x1E);//0x6A
tag_reference bitmap;//0x88
PAD(0x1C);//0x90
enum class e_anchor : __int16
{
with_primary = 0,
with_screen_space = 1,
zsprite = 2,
};
e_anchor anchor;//0xAC
enum class e_flags : __int16
{
unfiltered = FLAG(0),
};
e_flags flags;//0xAE
enum class e_uanimation_function : __int16
{
};
e_uanimation_function uanimation_function;//0xB0
float uanimation_period;//0xB2
float uanimation_phase;//0xB6
float uanimation_scale;//0xBA
enum class e_vanimation_function : __int16
{
};
e_vanimation_function vanimation_function;//0xBE
float vanimation_period;//0xC0
float vanimation_phase;//0xC4
float vanimation_scale;//0xC8
enum class e_rotationanimation_function : __int16
{
};
e_rotationanimation_function rotationanimation_function;//0xCC
float rotationanimation_period;//0xCE
float rotationanimation_phase;//0xD2
float rotationanimation_scale;//0xD6
float rotationanimation_center_x;//0xDA
float rotationanimation_center_y;//0xDE
float zsprite_radius_scale;//0xE2
PAD(0x2);//0xE6
struct s_point_states_block
{
float duration_lower;//0x0
float duration_upper;//0x4
float transition_lower;//0x8
float transition_upper;//0xC
tag_reference physics;//0x10
float width;//0x18
float color_lower_alpha;//0x1C
float color_lower_red;//0x20
float color_lower_green;//0x24
float color_lower_blue;//0x28
float color_upper_alpha;//0x2C
float color_upper_red;//0x30
float color_upper_green;//0x34
float color_upper_blue;//0x38
enum class e_scale_flags : __int32
{
duration = FLAG(0),
duration_delta = FLAG(1),
transition_duration = FLAG(2),
transition_duration_delta = FLAG(3),
width = FLAG(4),
color = FLAG(5),
};
e_scale_flags scale_flags;//0x3C
PAD(0x2);//0x40
};
TAG_BLOCK_SIZE_ASSERT(s_point_states_block,0x42);
tag_block<s_point_states_block> point_states;//0xE8
};
TAG_GROUP_SIZE_ASSERT(s_contrail_group_definition,0xF0);
TAG_REFL(s_contrail_group_definition)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(scale_flags)
	TAG_REFL_PROPERTY(point_generation_rate)
	TAG_REFL_PROPERTY(min_point_velocity)
	TAG_REFL_PROPERTY(max_point_velocity)
	TAG_REFL_ANGLE(point_velocity_cone_angle)
	TAG_REFL_PROPERTY(inherited_velocity_fraction)
	TAG_REFL_PROPERTY(render_type)
	TAG_REFL_PROPERTY(texture_repeats_u)
	TAG_REFL_PROPERTY(texture_repeats_v)
	TAG_REFL_PROPERTY(texture_animation_u)
	TAG_REFL_PROPERTY(texture_animation_v)
	TAG_REFL_PROPERTY(texture_animation_rate)
	TAG_REFL_TAG_REFERENCE(bitmap)
	TAG_REFL_PROPERTY(first_sequence_index)
	TAG_REFL_PROPERTY(sequence_count)
	TAG_REFL_PROPERTY(shader_flags)
	TAG_REFL_PROPERTY(framebuffer_blend_function)
	TAG_REFL_PROPERTY(framebuffer_fade_mode)
	TAG_REFL_PROPERTY(map_flags)
	TAG_REFL_TAG_REFERENCE(bitmap)
	TAG_REFL_PROPERTY(anchor)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(uanimation_function)
	TAG_REFL_PROPERTY(uanimation_period)
	TAG_REFL_PROPERTY(uanimation_phase)
	TAG_REFL_PROPERTY(uanimation_scale)
	TAG_REFL_PROPERTY(vanimation_function)
	TAG_REFL_PROPERTY(vanimation_period)
	TAG_REFL_PROPERTY(vanimation_phase)
	TAG_REFL_PROPERTY(vanimation_scale)
	TAG_REFL_PROPERTY(rotationanimation_function)
	TAG_REFL_PROPERTY(rotationanimation_period)
	TAG_REFL_PROPERTY(rotationanimation_phase)
	TAG_REFL_PROPERTY(rotationanimation_scale)
	TAG_REFL_PROPERTY(rotationanimation_center_x)
	TAG_REFL_PROPERTY(rotationanimation_center_y)
	TAG_REFL_PROPERTY(zsprite_radius_scale)
TAG_REFL_TAG_BLOCK_DEF(s_point_states_block)
	TAG_REFL_PROPERTY(duration_lower)
	TAG_REFL_PROPERTY(duration_upper)
	TAG_REFL_PROPERTY(transition_lower)
	TAG_REFL_PROPERTY(transition_upper)
	TAG_REFL_TAG_REFERENCE(physics)
	TAG_REFL_PROPERTY(width)
	TAG_REFL_PROPERTY(color_lower_alpha)
	TAG_REFL_PROPERTY(color_lower_red)
	TAG_REFL_PROPERTY(color_lower_green)
	TAG_REFL_PROPERTY(color_lower_blue)
	TAG_REFL_PROPERTY(color_upper_alpha)
	TAG_REFL_PROPERTY(color_upper_red)
	TAG_REFL_PROPERTY(color_upper_green)
	TAG_REFL_PROPERTY(color_upper_blue)
	TAG_REFL_PROPERTY(scale_flags)
REFL_END
	TAG_REFL_TAG_BLOCK(point_states)
REFL_END
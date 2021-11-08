#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: liquid
		* group_tag : tdtl
 		* header size : 112
		* *********************************************************************/ 
struct s_liquid_group_definition
{
PAD(0x2);//0x0
enum class e_type : __int16
{
standard = 0,
weapon_to_projectile = 1,
projectile_from_weapon = 2,
};
e_type type;//0x2
string_id attachment_marker_name;//0x4
PAD(0x38);//0x8
float falloff_distance_from_camera;//0x40
float cutoff_distance_from_camera;//0x44
PAD(0x20);//0x48
struct s_arcs_block
{
enum class e_flags : __int16
{
basis_markerrelative = FLAG(0),
spread_by_external_input = FLAG(1),
collide_with_stuff = FLAG(2),
no_perspective_midpoints = FLAG(3),
};
e_flags flags;//0x0
enum class e_sprite_count : __int16
{
NUM_4_sprites = 0,
NUM_8_sprites = 1,
NUM_16_sprites = 2,
NUM_32_sprites = 3,
NUM_64_sprites = 4,
NUM_128_sprites = 5,
NUM_256_sprites = 6,
};
e_sprite_count sprite_count;//0x2
float natural_length;//0x4
__int16 instances;//0x8
PAD(0x2);//0xA
angle instance_spread_angle;//0xC
float instance_rotation_period;//0x10
PAD(0x8);//0x14
tag_reference material_effects;//0x1C
tag_reference bitmap;//0x24
PAD(0x8);//0x2C
struct s_horizontal_range_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_horizontal_range_block,0x1);
tag_block<s_horizontal_range_block> horizontal_range;//0x34
struct s_vertical_range_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_vertical_range_block,0x1);
tag_block<s_vertical_range_block> vertical_range;//0x3C
float vertical_negative_scale;//0x44
struct s_roughness_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_roughness_block,0x1);
tag_block<s_roughness_block> roughness;//0x48
PAD(0x40);//0x50
float octave_1_frequency_cycles_per_sec;//0x90
float octave_2_frequency_cycles_per_sec;//0x94
float octave_3_frequency_cycles_per_sec;//0x98
float octave_4_frequency_cycles_per_sec;//0x9C
float octave_5_frequency_cycles_per_sec;//0xA0
float octave_6_frequency_cycles_per_sec;//0xA4
float octave_7_frequency_cycles_per_sec;//0xA8
float octave_8_frequency_cycles_per_sec;//0xAC
float octave_9_frequency_cycles_per_sec;//0xB0
PAD(0x1C);//0xB4
enum class e_octave_flags : __int32
{
octave_1 = FLAG(0),
octave_2 = FLAG(1),
octave_3 = FLAG(2),
octave_4 = FLAG(3),
octave_5 = FLAG(4),
octave_6 = FLAG(5),
octave_7 = FLAG(6),
octave_8 = FLAG(7),
octave_9 = FLAG(8),
};
e_octave_flags octave_flags;//0xD0
struct s_cores_block
{
__int16 bitmap_index;//0x0
PAD(0xE);//0x2
struct s_thickness_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_thickness_block,0x1);
tag_block<s_thickness_block> thickness;//0x10
struct s_color_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_color_block,0x1);
tag_block<s_color_block> color;//0x18
struct s_brightnesstime_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_brightnesstime_block,0x1);
tag_block<s_brightnesstime_block> brightnesstime;//0x20
struct s_brightnessfacing_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_brightnessfacing_block,0x1);
tag_block<s_brightnessfacing_block> brightnessfacing;//0x28
struct s_alongaxis_scale_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_alongaxis_scale_block,0x1);
tag_block<s_alongaxis_scale_block> alongaxis_scale;//0x30
};
TAG_BLOCK_SIZE_ASSERT(s_cores_block,0x38);
tag_block<s_cores_block> cores;//0xD4
struct s_rangecollision_scale_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_rangecollision_scale_block,0x1);
tag_block<s_rangecollision_scale_block> rangecollision_scale;//0xDC
struct s_brightnesscollision_scale_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_brightnesscollision_scale_block,0x1);
tag_block<s_brightnesscollision_scale_block> brightnesscollision_scale;//0xE4
};
TAG_BLOCK_SIZE_ASSERT(s_arcs_block,0xEC);
tag_block<s_arcs_block> arcs;//0x68
};
TAG_GROUP_SIZE_ASSERT(s_liquid_group_definition,0x70);
TAG_REFL_TAG_BLOCK_DEF(s_liquid_group_definition::s_arcs_block::s_horizontal_range_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_liquid_group_definition::s_arcs_block::s_vertical_range_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_liquid_group_definition::s_arcs_block::s_roughness_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_liquid_group_definition::s_arcs_block::s_cores_block::s_thickness_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_liquid_group_definition::s_arcs_block::s_cores_block::s_color_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_liquid_group_definition::s_arcs_block::s_cores_block::s_brightnesstime_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_liquid_group_definition::s_arcs_block::s_cores_block::s_brightnessfacing_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_liquid_group_definition::s_arcs_block::s_cores_block::s_alongaxis_scale_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_liquid_group_definition::s_arcs_block::s_cores_block)	TAG_REFL_PROPERTY(bitmap_index)	TAG_REFL_TAG_BLOCK(thickness)	TAG_REFL_TAG_BLOCK(color)	TAG_REFL_TAG_BLOCK(brightnesstime)	TAG_REFL_TAG_BLOCK(brightnessfacing)	TAG_REFL_TAG_BLOCK(alongaxis_scale)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_liquid_group_definition::s_arcs_block::s_rangecollision_scale_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_liquid_group_definition::s_arcs_block::s_brightnesscollision_scale_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_liquid_group_definition::s_arcs_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(sprite_count)	TAG_REFL_PROPERTY(natural_length)	TAG_REFL_PROPERTY(instances)	TAG_REFL_ANGLE(instance_spread_angle)	TAG_REFL_PROPERTY(instance_rotation_period)	TAG_REFL_TAG_REFERENCE(material_effects)	TAG_REFL_TAG_REFERENCE(bitmap)	TAG_REFL_TAG_BLOCK(horizontal_range)	TAG_REFL_TAG_BLOCK(vertical_range)	TAG_REFL_PROPERTY(vertical_negative_scale)	TAG_REFL_TAG_BLOCK(roughness)	TAG_REFL_PROPERTY(octave_1_frequency_cycles_per_sec)	TAG_REFL_PROPERTY(octave_2_frequency_cycles_per_sec)	TAG_REFL_PROPERTY(octave_3_frequency_cycles_per_sec)	TAG_REFL_PROPERTY(octave_4_frequency_cycles_per_sec)	TAG_REFL_PROPERTY(octave_5_frequency_cycles_per_sec)	TAG_REFL_PROPERTY(octave_6_frequency_cycles_per_sec)	TAG_REFL_PROPERTY(octave_7_frequency_cycles_per_sec)	TAG_REFL_PROPERTY(octave_8_frequency_cycles_per_sec)	TAG_REFL_PROPERTY(octave_9_frequency_cycles_per_sec)	TAG_REFL_PROPERTY(octave_flags)	TAG_REFL_TAG_BLOCK(cores)	TAG_REFL_TAG_BLOCK(rangecollision_scale)	TAG_REFL_TAG_BLOCK(brightnesscollision_scale)REFL_END
TAG_REFL(s_liquid_group_definition)	TAG_REFL_PROPERTY(type)	TAG_REFL_STRING_ID(attachment_marker_name)	TAG_REFL_PROPERTY(falloff_distance_from_camera)	TAG_REFL_PROPERTY(cutoff_distance_from_camera)	TAG_REFL_TAG_BLOCK(arcs)REFL_END

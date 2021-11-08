#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: chocolate_mountain
		* group_tag : gldf
 		* header size : 8
		* *********************************************************************/ 
struct s_chocolate_mountain_group_definition
{
struct s_light_variables_block
{
enum class e_objects_affected : __int32
{
all = FLAG(0),
biped = FLAG(1),
vehicle = FLAG(2),
weapon = FLAG(3),
equipment = FLAG(4),
garbage = FLAG(5),
projectile = FLAG(6),
scenery = FLAG(7),
machine = FLAG(8),
control = FLAG(9),
light_fixture = FLAG(10),
sound_scenery = FLAG(11),
crate = FLAG(12),
creature = FLAG(13),
};
e_objects_affected objects_affected;//0x0
float lightmap_brightness_offset;//0x4
float primary_min_lightmap_color_r;//0x8
float primary_min_lightmap_color_g;//0xC
float primary_min_lightmap_color_b;//0x10
float primary_max_lightmap_color_r;//0x14
float primary_max_lightmap_color_g;//0x18
float primary_max_lightmap_color_b;//0x1C
angle exclusion_angle_from_up;//0x20
struct s_primary_light_function_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_primary_light_function_block,0x1);
tag_block<s_primary_light_function_block> primary_light_function;//0x24
float secondary_min_lightmap_color_r;//0x2C
float secondary_min_lightmap_color_g;//0x30
float secondary_min_lightmap_color_b;//0x34
float secondary_max_lightmap_color_r;//0x38
float secondary_max_lightmap_color_g;//0x3C
float secondary_max_lightmap_color_b;//0x40
float secondary_min_diffuse_sample_r;//0x44
float secondary_min_diffuse_sample_g;//0x48
float secondary_min_diffuse_sample_b;//0x4C
float secondary_max_diffuse_sample_r;//0x50
float secondary_max_diffuse_sample_g;//0x54
float secondary_max_diffuse_sample_b;//0x58
float secondary_zaxsis_rotation;//0x5C
struct s_secondary_light_function_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_secondary_light_function_block,0x1);
tag_block<s_secondary_light_function_block> secondary_light_function;//0x60
float ambient_min_lightmap_sample_r;//0x68
float ambient_min_lightmap_sample_g;//0x6C
float ambient_min_lightmap_sample_b;//0x70
float ambient_max_lightmap_sample_r;//0x74
float ambient_max_lightmap_sample_g;//0x78
float ambient_max_lightmap_sample_b;//0x7C
struct s_ambient_light_function_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_ambient_light_function_block,0x1);
tag_block<s_ambient_light_function_block> ambient_light_function;//0x80
struct s_lightmap_shadows_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_lightmap_shadows_block,0x1);
tag_block<s_lightmap_shadows_block> lightmap_shadows;//0x88
};
TAG_BLOCK_SIZE_ASSERT(s_light_variables_block,0x90);
tag_block<s_light_variables_block> light_variables;//0x0
};
TAG_GROUP_SIZE_ASSERT(s_chocolate_mountain_group_definition,0x8);
TAG_REFL_TAG_BLOCK_DEF(s_chocolate_mountain_group_definition::s_light_variables_block::s_primary_light_function_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_chocolate_mountain_group_definition::s_light_variables_block::s_secondary_light_function_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_chocolate_mountain_group_definition::s_light_variables_block::s_ambient_light_function_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_chocolate_mountain_group_definition::s_light_variables_block::s_lightmap_shadows_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_chocolate_mountain_group_definition::s_light_variables_block)	TAG_REFL_PROPERTY(objects_affected)	TAG_REFL_PROPERTY(lightmap_brightness_offset)	TAG_REFL_PROPERTY(primary_min_lightmap_color_r)	TAG_REFL_PROPERTY(primary_min_lightmap_color_g)	TAG_REFL_PROPERTY(primary_min_lightmap_color_b)	TAG_REFL_PROPERTY(primary_max_lightmap_color_r)	TAG_REFL_PROPERTY(primary_max_lightmap_color_g)	TAG_REFL_PROPERTY(primary_max_lightmap_color_b)	TAG_REFL_ANGLE(exclusion_angle_from_up)	TAG_REFL_TAG_BLOCK(primary_light_function)	TAG_REFL_PROPERTY(secondary_min_lightmap_color_r)	TAG_REFL_PROPERTY(secondary_min_lightmap_color_g)	TAG_REFL_PROPERTY(secondary_min_lightmap_color_b)	TAG_REFL_PROPERTY(secondary_max_lightmap_color_r)	TAG_REFL_PROPERTY(secondary_max_lightmap_color_g)	TAG_REFL_PROPERTY(secondary_max_lightmap_color_b)	TAG_REFL_PROPERTY(secondary_min_diffuse_sample_r)	TAG_REFL_PROPERTY(secondary_min_diffuse_sample_g)	TAG_REFL_PROPERTY(secondary_min_diffuse_sample_b)	TAG_REFL_PROPERTY(secondary_max_diffuse_sample_r)	TAG_REFL_PROPERTY(secondary_max_diffuse_sample_g)	TAG_REFL_PROPERTY(secondary_max_diffuse_sample_b)	TAG_REFL_PROPERTY(secondary_zaxsis_rotation)	TAG_REFL_TAG_BLOCK(secondary_light_function)	TAG_REFL_PROPERTY(ambient_min_lightmap_sample_r)	TAG_REFL_PROPERTY(ambient_min_lightmap_sample_g)	TAG_REFL_PROPERTY(ambient_min_lightmap_sample_b)	TAG_REFL_PROPERTY(ambient_max_lightmap_sample_r)	TAG_REFL_PROPERTY(ambient_max_lightmap_sample_g)	TAG_REFL_PROPERTY(ambient_max_lightmap_sample_b)	TAG_REFL_TAG_BLOCK(ambient_light_function)	TAG_REFL_TAG_BLOCK(lightmap_shadows)REFL_END
TAG_REFL(s_chocolate_mountain_group_definition)	TAG_REFL_TAG_BLOCK(light_variables)REFL_END

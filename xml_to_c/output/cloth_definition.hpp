#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: cloth
		* group_tag : clwd
 		* header size : 108
		* *********************************************************************/ 
struct s_cloth_group_definition
{
enum class e_flags : __int32
{
doesnt_use_wind = FLAG(0),
uses_grid_attach_top = FLAG(1),
};
e_flags flags;//0x0
string_id marker_attachment_name;//0x4
tag_reference shader;//0x8
__int16 grid_x_dimension;//0x10
__int16 grid_y_dimension;//0x12
float grid_spacing_x;//0x14
float grid_spacing_y;//0x18
enum class e_integration_type : __int16
{
verlet = 0,
};
e_integration_type integration_type;//0x1C
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-2);//0x1E
__int16 number_iterations;//0x1C
PAD(0x2);//0x1E
float weight;//0x20
float drag;//0x24
float wind_scale;//0x28
float wind_flappiness_scale;//0x2C
float longest_rod;//0x30
PAD(0x18);//0x34
struct s_vertices_block
{
float initial_position_x;//0x0
float initial_position_y;//0x4
float initial_position_z;//0x8
float uv_i;//0xC
float uv_j;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_vertices_block,0x14);
tag_block<s_vertices_block> vertices;//0x4C
struct s_indices_block
{
__int16 index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_indices_block,0x2);
tag_block<s_indices_block> indices;//0x54
struct s_strip_indices_block
{
__int16 index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_strip_indices_block,0x2);
tag_block<s_strip_indices_block> strip_indices;//0x5C
struct s_links_block
{
__int32 attachment_bits;//0x0
__int16 index_1;//0x4
__int16 index_2;//0x6
float default_distance;//0x8
float damping_multiplier;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_links_block,0x10);
tag_block<s_links_block> links;//0x64
};
TAG_GROUP_SIZE_ASSERT(s_cloth_group_definition,0x6C);
TAG_REFL(s_cloth_group_definition)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_STRING_ID(marker_attachment_name)
	TAG_REFL_TAG_REFERENCE(shader)
	TAG_REFL_PROPERTY(grid_x_dimension)
	TAG_REFL_PROPERTY(grid_y_dimension)
	TAG_REFL_PROPERTY(grid_spacing_x)
	TAG_REFL_PROPERTY(grid_spacing_y)
	TAG_REFL_PROPERTY(integration_type)
	TAG_REFL_PROPERTY(number_iterations)
	TAG_REFL_PROPERTY(weight)
	TAG_REFL_PROPERTY(drag)
	TAG_REFL_PROPERTY(wind_scale)
	TAG_REFL_PROPERTY(wind_flappiness_scale)
	TAG_REFL_PROPERTY(longest_rod)
TAG_REFL_TAG_BLOCK_DEF(s_vertices_block)
	TAG_REFL_PROPERTY(initial_position_x)
	TAG_REFL_PROPERTY(initial_position_y)
	TAG_REFL_PROPERTY(initial_position_z)
	TAG_REFL_PROPERTY(uv_i)
	TAG_REFL_PROPERTY(uv_j)
REFL_END
	TAG_REFL_TAG_BLOCK(vertices)
TAG_REFL_TAG_BLOCK_DEF(s_indices_block)
	TAG_REFL_PROPERTY(index)
REFL_END
	TAG_REFL_TAG_BLOCK(indices)
TAG_REFL_TAG_BLOCK_DEF(s_strip_indices_block)
	TAG_REFL_PROPERTY(index)
REFL_END
	TAG_REFL_TAG_BLOCK(strip_indices)
TAG_REFL_TAG_BLOCK_DEF(s_links_block)
	TAG_REFL_PROPERTY(attachment_bits)
	TAG_REFL_PROPERTY(index_1)
	TAG_REFL_PROPERTY(index_2)
	TAG_REFL_PROPERTY(default_distance)
	TAG_REFL_PROPERTY(damping_multiplier)
REFL_END
	TAG_REFL_TAG_BLOCK(links)
REFL_END
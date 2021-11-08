#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: vertex_shader
		* group_tag : vrtx
 		* header size : 16
		* *********************************************************************/ 
struct s_vertex_shader_group_definition
{
enum class e_platform_type : __int8
{
pc = 0,
xbox = 1,
};
e_platform_type platform_type;//0x0
PAD(0x3);//0x1
struct s_geometry_classifications_block
{
__int32 unknown;//0x0
data_block compiled_shader;//0x4
data_block code;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_geometry_classifications_block,0x14);
tag_block<s_geometry_classifications_block> geometry_classifications;//0x4
__int32 output_swizzles;//0xC
};
TAG_GROUP_SIZE_ASSERT(s_vertex_shader_group_definition,0x10);
TAG_REFL_TAG_BLOCK_DEF(s_vertex_shader_group_definition::s_geometry_classifications_block)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_DATA_BLOCK(compiled_shader)	TAG_REFL_DATA_BLOCK(code)REFL_END
TAG_REFL(s_vertex_shader_group_definition)	TAG_REFL_PROPERTY(platform_type)	TAG_REFL_TAG_BLOCK(geometry_classifications)	TAG_REFL_PROPERTY(output_swizzles)REFL_END

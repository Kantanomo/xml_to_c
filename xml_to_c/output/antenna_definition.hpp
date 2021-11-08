#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: antenna
		* group_tag : ant!
 		* header size : 160
		* *********************************************************************/ 
struct s_antenna_group_definition
{
string_id attachment_marker_name;//0x0
tag_reference bitmap;//0x4
tag_reference physics;//0xC
PAD(0x50);//0x14
float spring_strength_coefficient;//0x64
float falloff_pixels;//0x68
float cutoff_pixels;//0x6C
PAD(0x28);//0x70
struct s_vertices_block
{
float spring_strength_coefficient;//0x0
PAD(0x18);//0x4
angle angle_y;//0x1C
angle angle_p;//0x20
float length;//0x24
__int16 sequence_index;//0x28
__int16 unknown;//0x2A
real_color_argb color;//0x2C
real_color_argb lod_color;//0x3C
PAD(0x34);//0x4C
};
TAG_BLOCK_SIZE_ASSERT(s_vertices_block,0x80);
tag_block<s_vertices_block> vertices;//0x98
};
TAG_GROUP_SIZE_ASSERT(s_antenna_group_definition,0xA0);
TAG_REFL_TAG_BLOCK_DEF(s_antenna_group_definition::s_vertices_block)
TAG_REFL(s_antenna_group_definition)
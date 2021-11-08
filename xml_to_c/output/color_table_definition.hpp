#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: color_table
		* group_tag : colo
 		* header size : 8
		* *********************************************************************/ 
struct s_color_table_group_definition
{
struct s_colors_block
{
string32 name;//0x0
float alpha;//0x20
float red;//0x24
float green;//0x28
float blue;//0x2C
};
TAG_BLOCK_SIZE_ASSERT(s_colors_block,0x30);
tag_block<s_colors_block> colors;//0x0
};
TAG_GROUP_SIZE_ASSERT(s_color_table_group_definition,0x8);
TAG_REFL_TAG_BLOCK_DEF(s_color_table_group_definition::s_colors_block)
TAG_REFL(s_color_table_group_definition)
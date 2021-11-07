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
TAG_REFL(s_color_table_group_definition)
TAG_REFL_TAG_BLOCK_DEF(s_colors_block)
	TAG_REFL_STRING_32(name)
	TAG_REFL_PROPERTY(alpha)
	TAG_REFL_PROPERTY(red)
	TAG_REFL_PROPERTY(green)
	TAG_REFL_PROPERTY(blue)
REFL_END
	TAG_REFL_TAG_BLOCK(colors)
REFL_END
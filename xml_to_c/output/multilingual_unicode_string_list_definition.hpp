#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: multilingual_unicode_string_list
		* group_tag : unic
 		* header size : 52
		* *********************************************************************/ 
struct s_multilingual_unicode_string_list_group_definition
{
PAD(0x34);//0x0
};
TAG_GROUP_SIZE_ASSERT(s_multilingual_unicode_string_list_group_definition,0x34);
TAG_REFL(s_multilingual_unicode_string_list_group_definition)REFL_END

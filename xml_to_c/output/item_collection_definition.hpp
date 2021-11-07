#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: item_collection
		* group_tag : itmc
 		* header size : 12
		* *********************************************************************/ 
struct s_item_collection_group_definition
{
struct s_item_permutations_block
{
float weight;//0x0
tag_reference item;//0x4
string_id variant_name;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_item_permutations_block,0x10);
tag_block<s_item_permutations_block> item_permutations;//0x0
unsigned __int32 unused_spawn_time___in_seconds_0_=_default;//0x8
};
TAG_GROUP_SIZE_ASSERT(s_item_collection_group_definition,0xC);
TAG_REFL(s_item_collection_group_definition)
TAG_REFL_TAG_BLOCK_DEF(s_item_permutations_block)
	TAG_REFL_PROPERTY(weight)
	TAG_REFL_TAG_REFERENCE(item)
	TAG_REFL_STRING_ID(variant_name)
REFL_END
	TAG_REFL_TAG_BLOCK(item_permutations)
	TAG_REFL_PROPERTY(unused_spawn_time___in_seconds_0_=_default)
REFL_END
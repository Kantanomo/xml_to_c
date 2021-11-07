#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: vehicle_collection
		* group_tag : vehc
 		* header size : 12
		* *********************************************************************/ 
struct s_vehicle_collection_group_definition
{
struct s_vehicle_permutations_block
{
float weight;//0x0
tag_reference vehicle;//0x4
string_id variant_name;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_vehicle_permutations_block,0x10);
tag_block<s_vehicle_permutations_block> vehicle_permutations;//0x0
unsigned __int32 unused_spawn_time____in_seconds_0_=_default;//0x8
};
TAG_GROUP_SIZE_ASSERT(s_vehicle_collection_group_definition,0xC);
TAG_REFL(s_vehicle_collection_group_definition)
TAG_REFL_TAG_BLOCK_DEF(s_vehicle_permutations_block)
	TAG_REFL_PROPERTY(weight)
	TAG_REFL_TAG_REFERENCE(vehicle)
	TAG_REFL_STRING_ID(variant_name)
REFL_END
	TAG_REFL_TAG_BLOCK(vehicle_permutations)
	TAG_REFL_PROPERTY(unused_spawn_time____in_seconds_0_=_default)
REFL_END
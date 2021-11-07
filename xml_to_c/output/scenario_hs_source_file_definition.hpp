#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: scenario_hs_source_file
		* group_tag : hsc*
 		* header size : 40
		* *********************************************************************/ 
struct s_scenario_hs_source_file_group_definition
{
string32 name;//0x0
data_block source;//0x20
};
TAG_GROUP_SIZE_ASSERT(s_scenario_hs_source_file_group_definition,0x28);
TAG_REFL(s_scenario_hs_source_file_group_definition)
	TAG_REFL_STRING_32(name)
	TAG_REFL_DATA_BLOCK(source)
REFL_END
#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: ai_mission_dialogue
		* group_tag : mdlg
 		* header size : 8
		* *********************************************************************/ 
struct s_ai_mission_dialogue_group_definition
{
struct s_unknown_block
{
string_id unknown;//0x0
struct s_unknown_block
{
string_id unknown;//0x0
tag_reference unknown;//0x4
PAD(0x4);//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_unknown_block,0x10);
tag_block<s_unknown_block> unknown;//0x4
string_id unknown;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_unknown_block,0x10);
tag_block<s_unknown_block> unknown;//0x0
};
TAG_GROUP_SIZE_ASSERT(s_ai_mission_dialogue_group_definition,0x8);
TAG_REFL(s_ai_mission_dialogue_group_definition)
TAG_REFL_TAG_BLOCK_DEF(s_unknown_block)
	TAG_REFL_STRING_ID(unknown)
TAG_REFL_TAG_BLOCK_DEF(s_unknown_block)
	TAG_REFL_STRING_ID(unknown)
	TAG_REFL_TAG_REFERENCE(unknown)
REFL_END
	TAG_REFL_TAG_BLOCK(unknown)
	TAG_REFL_STRING_ID(unknown)
REFL_END
	TAG_REFL_TAG_BLOCK(unknown)
REFL_END
#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: dialogue
		* group_tag : udlg
 		* header size : 24
		* *********************************************************************/ 
struct s_dialogue_group_definition
{
tag_reference global_dialogue_info;//0x0
PAD(0x8);//0x8
enum class e_flags : __int32
{
female = FLAG(0),
};
e_flags flags;//0x10
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-8);//0x14
struct s_vocalizations_block
{
enum class e_flags : __int16
{
new_vocalization = FLAG(0),
};
e_flags flags;//0x0
__int16 unknown;//0x2
string_id vocalization;//0x4
tag_reference sound;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_vocalizations_block,0x10);
tag_block<s_vocalizations_block> vocalizations;//0xC
string_id mission_dialogue_designator;//0x14
};
TAG_GROUP_SIZE_ASSERT(s_dialogue_group_definition,0x18);
TAG_REFL(s_dialogue_group_definition)
	TAG_REFL_TAG_REFERENCE(global_dialogue_info)
	TAG_REFL_PROPERTY(flags)
TAG_REFL_TAG_BLOCK_DEF(s_vocalizations_block)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_STRING_ID(vocalization)
	TAG_REFL_TAG_REFERENCE(sound)
REFL_END
	TAG_REFL_TAG_BLOCK(vocalizations)
	TAG_REFL_STRING_ID(mission_dialogue_designator)
REFL_END
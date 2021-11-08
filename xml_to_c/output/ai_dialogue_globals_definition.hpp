#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: ai_dialogue_globals
		* group_tag : adlg
 		* header size : 44
		* *********************************************************************/ 
struct s_ai_dialogue_globals_group_definition
{
struct s_deathtaunting_dialog_block
{
string_id situation;//0x0
string_id root_situation;//0x4
PAD(0x14);//0x8
float unknown;//0x1C
float unknown;//0x20
float unknown;//0x24
float unknown;//0x28
float unknown;//0x2C
float unknown;//0x30
float unknown;//0x34
float unknown;//0x38
float unknown;//0x3C
PAD(0x4);//0x40
float unknown;//0x44
float unknown;//0x48
string_id spoken_dialog;//0x4C
struct s_unknown_block
{
string_id unknown;//0x0
PAD(0x8);//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_unknown_block,0xC);
tag_block<s_unknown_block> unknown;//0x50
PAD(0x8);//0x58
};
TAG_BLOCK_SIZE_ASSERT(s_deathtaunting_dialog_block,0x60);
tag_block<s_deathtaunting_dialog_block> deathtaunting_dialog;//0x0
struct s_killingcautious_dialog_block
{
__int16 dialogue_type;//0x0
__int16 vocalization_index;//0x2
string_id vocalization_name;//0x4
__int16 speaker_type;//0x8
__int16 flags;//0xA
__int16 listenertarget;//0xC
__int16 unknown;//0xE
__int16 unknown;//0x10
__int16 unknown;//0x12
__int16 hostility;//0x14
__int16 damage_type;//0x16
__int16 danger_level;//0x18
__int16 attitude;//0x1A
__int16 unknown;//0x1C
__int16 unknown;//0x1E
__int16 subject_actor_type;//0x20
__int16 cause_actor_type;//0x22
__int16 cause_type;//0x24
__int16 subject_type;//0x26
string_id cause_ai_type_name;//0x28
__int16 spacial_relationship;//0x2C
__int16 unknown;//0x2E
string_id subject_ai_type_name;//0x30
PAD(0x8);//0x34
__int32 conditions;//0x3C
};
TAG_BLOCK_SIZE_ASSERT(s_killingcautious_dialog_block,0x40);
tag_block<s_killingcautious_dialog_block> killingcautious_dialog;//0x8
PAD(0xC);//0x10
struct s_unknown_block
{
PAD(0x4);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_unknown_block,0x4);
tag_block<s_unknown_block> unknown;//0x1C
struct s_unknown_block
{
__int32 unknown;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_unknown_block,0x4);
tag_block<s_unknown_block> unknown;//0x24
};
TAG_GROUP_SIZE_ASSERT(s_ai_dialogue_globals_group_definition,0x2C);
TAG_REFL_TAG_BLOCK_DEF(s_ai_dialogue_globals_group_definition::s_deathtaunting_dialog_group_definition::s_unknown_block)	TAG_REFL_STRING_ID(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_ai_dialogue_globals_group_definition::s_deathtaunting_dialog_block)	TAG_REFL_STRING_ID(situation)	TAG_REFL_STRING_ID(root_situation)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_STRING_ID(spoken_dialog)	TAG_REFL_TAG_BLOCK(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_ai_dialogue_globals_group_definition::s_killingcautious_dialog_block)	TAG_REFL_PROPERTY(dialogue_type)	TAG_REFL_PROPERTY(vocalization_index)	TAG_REFL_STRING_ID(vocalization_name)	TAG_REFL_PROPERTY(speaker_type)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(listenertarget)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(hostility)	TAG_REFL_PROPERTY(damage_type)	TAG_REFL_PROPERTY(danger_level)	TAG_REFL_PROPERTY(attitude)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(subject_actor_type)	TAG_REFL_PROPERTY(cause_actor_type)	TAG_REFL_PROPERTY(cause_type)	TAG_REFL_PROPERTY(subject_type)	TAG_REFL_STRING_ID(cause_ai_type_name)	TAG_REFL_PROPERTY(spacial_relationship)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_STRING_ID(subject_ai_type_name)	TAG_REFL_PROPERTY(conditions)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_ai_dialogue_globals_group_definition::s_unknown_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_ai_dialogue_globals_group_definition::s_unknown_block)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL(s_ai_dialogue_globals_group_definition)	TAG_REFL_TAG_BLOCK(deathtaunting_dialog)	TAG_REFL_TAG_BLOCK(killingcautious_dialog)	TAG_REFL_TAG_BLOCK(unknown)	TAG_REFL_TAG_BLOCK(unknown)REFL_END

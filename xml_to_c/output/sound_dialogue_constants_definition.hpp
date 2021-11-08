#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: sound_dialogue_constants
		* group_tag : spk!
 		* header size : 40
		* *********************************************************************/ 
struct s_sound_dialogue_constants_group_definition
{
float almost_never;//0x0
float rarely;//0x4
float somewhat;//0x8
float often;//0xC
PAD(0x18);//0x10
};
TAG_GROUP_SIZE_ASSERT(s_sound_dialogue_constants_group_definition,0x28);
TAG_REFL(s_sound_dialogue_constants_group_definition)	TAG_REFL_PROPERTY(almost_never)	TAG_REFL_PROPERTY(rarely)	TAG_REFL_PROPERTY(somewhat)	TAG_REFL_PROPERTY(often)REFL_END

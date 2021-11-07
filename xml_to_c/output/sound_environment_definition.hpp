#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: sound_environment
		* group_tag : snde
 		* header size : 72
		* *********************************************************************/ 
struct s_sound_environment_group_definition
{
PAD(0x4);//0x0
__int16 priority;//0x4
__int16 unknown;//0x6
float room_intensity;//0x8
float room_intensity_high_frequency;//0xC
float room_rolloff;//0x10
float decay_time;//0x14
float decay_high_frequency_ratio;//0x18
float reflections_intensity;//0x1C
float reflections_delay;//0x20
float reverb_intensity;//0x24
float reverb_delay;//0x28
float diffusion;//0x2C
float density;//0x30
float high_frequency_refrence;//0x34
PAD(0x10);//0x38
};
TAG_GROUP_SIZE_ASSERT(s_sound_environment_group_definition,0x48);
TAG_REFL(s_sound_environment_group_definition)
	TAG_REFL_PROPERTY(priority)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(room_intensity)
	TAG_REFL_PROPERTY(room_intensity_high_frequency)
	TAG_REFL_PROPERTY(room_rolloff)
	TAG_REFL_PROPERTY(decay_time)
	TAG_REFL_PROPERTY(decay_high_frequency_ratio)
	TAG_REFL_PROPERTY(reflections_intensity)
	TAG_REFL_PROPERTY(reflections_delay)
	TAG_REFL_PROPERTY(reverb_intensity)
	TAG_REFL_PROPERTY(reverb_delay)
	TAG_REFL_PROPERTY(diffusion)
	TAG_REFL_PROPERTY(density)
	TAG_REFL_PROPERTY(high_frequency_refrence)
REFL_END
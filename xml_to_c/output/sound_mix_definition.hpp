#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: sound_mix
		* group_tag : snmx
 		* header size : 88
		* *********************************************************************/ 
struct s_sound_mix_group_definition
{
float first_person_left_side_left_stereo_gain;//0x0
float first_person_left_side_right_stereo_gain;//0x4
float first_person_middle_side_left_stereo_gain;//0x8
float first_person_middle_side_right_stereo_gain;//0xC
float first_person_right_side_left_stereo_gain;//0x10
float first_person_right_side_right_stereo_gain;//0x14
float first_person_stereo_front_speaker_gain_db;//0x18
float first_person_stereo_rear_speaker_gain_db;//0x1C
float ambient_stereo_front_speaker_gain_db;//0x20
float ambient_stereo_rear_speaker_gain_db;//0x24
float global_mono_unspatialized_gain_db;//0x28
float global_stereo_to_3d_gain_db;//0x2C
float global_rear_surround_to_front_stereo_gain_db;//0x30
float surround_center_speaker_gain_db;//0x34
float surround_center_speaker_gain_db;//0x38
float stereo_front_speaker_gain_db;//0x3C
float stereo_center_speaker_gain_db;//0x40
float stereo_unspatialized_gain_db;//0x44
float solo_player_fade_out_delay;//0x48
float solo_player_fade_out_time_sec;//0x4C
float solo_player_fade_in_time_sec;//0x50
float game_music_fade_out_time_sec;//0x54
};
TAG_GROUP_SIZE_ASSERT(s_sound_mix_group_definition,0x58);
TAG_REFL(s_sound_mix_group_definition)	TAG_REFL_PROPERTY(first_person_left_side_left_stereo_gain)	TAG_REFL_PROPERTY(first_person_left_side_right_stereo_gain)	TAG_REFL_PROPERTY(first_person_middle_side_left_stereo_gain)	TAG_REFL_PROPERTY(first_person_middle_side_right_stereo_gain)	TAG_REFL_PROPERTY(first_person_right_side_left_stereo_gain)	TAG_REFL_PROPERTY(first_person_right_side_right_stereo_gain)	TAG_REFL_PROPERTY(first_person_stereo_front_speaker_gain_db)	TAG_REFL_PROPERTY(first_person_stereo_rear_speaker_gain_db)	TAG_REFL_PROPERTY(ambient_stereo_front_speaker_gain_db)	TAG_REFL_PROPERTY(ambient_stereo_rear_speaker_gain_db)	TAG_REFL_PROPERTY(global_mono_unspatialized_gain_db)	TAG_REFL_PROPERTY(global_stereo_to_3d_gain_db)	TAG_REFL_PROPERTY(global_rear_surround_to_front_stereo_gain_db)	TAG_REFL_PROPERTY(surround_center_speaker_gain_db)	TAG_REFL_PROPERTY(surround_center_speaker_gain_db)	TAG_REFL_PROPERTY(stereo_front_speaker_gain_db)	TAG_REFL_PROPERTY(stereo_center_speaker_gain_db)	TAG_REFL_PROPERTY(stereo_unspatialized_gain_db)	TAG_REFL_PROPERTY(solo_player_fade_out_delay)	TAG_REFL_PROPERTY(solo_player_fade_out_time_sec)	TAG_REFL_PROPERTY(solo_player_fade_in_time_sec)	TAG_REFL_PROPERTY(game_music_fade_out_time_sec)REFL_END

#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: sound_classes
		* group_tag : sncl
 		* header size : 8
		* *********************************************************************/ 
struct s_sound_classes_group_definition
{
struct s_sound_classes_block
{
__int16 max_sounds_per_tag;//0x0
__int16 max_sounds_per_object;//0x2
__int32 preemption_time;//0x4
enum class e_internal_flags : __int16
{
valid = FLAG(0),
is_speech = FLAG(1),
scripted = FLAG(2),
stops_with_object = FLAG(3),
unused = FLAG(4),
valid_doppler_factor = FLAG(5),
valid_obstruction_factor = FLAG(6),
multilingual = FLAG(7),
};
e_internal_flags internal_flags;//0x8
enum class e_flags : __int16
{
plays_during_pause = FLAG(0),
dry_stereo_mix = FLAG(1),
no_object_obstruction = FLAG(2),
use_center_speaker_unspatialized = FLAG(3),
send_mono_to_lfe = FLAG(4),
deterministic = FLAG(5),
use_huge_transmission = FLAG(6),
always_use_speakers = FLAG(7),
dont_strip_from_mainmenu = FLAG(8),
ignore_stereo_headroom = FLAG(9),
loop_fade_out_is_linear = FLAG(10),
stop_when_object_dies = FLAG(11),
allow_cache_file_editing = FLAG(12),
};
e_flags flags;//0xA
__int16 priority;//0xC
enum class e_cache_miss_mode : __int16
{
};
e_cache_miss_mode cache_miss_mode;//0xE
float reverb_gain_db;//0x10
float override_speaker_gain;//0x14
float distance_bounds_lower;//0x18
float distance_bounds_upper;//0x1C
float gain_bounds_lower;//0x20
float gain_bounds_upper;//0x24
float cutscene_ducking_db;//0x28
float cutscene_ducking_fade_in_time_sec;//0x2C
float cutscene_ducking_sustain_time_sec;//0x30
float cutscene_ducking_fade_out_time_sec;//0x34
float scripted_dialog_ducking_db;//0x38
float scripted_dialog_ducking_fade_in_time_sec;//0x3C
float scripted_dialog_ducking_sustain_time_sec;//0x40
float scripted_dialog_ducking_fade_out_time_sec;//0x44
float doppler_factor;//0x48
enum class e_stereo_playback_type : __int32
{
first_person = 0,
ambient = 1,
};
e_stereo_playback_type stereo_playback_type;//0x4C
float transmission_multiplier;//0x50
float obstruction_max_bend;//0x54
float occlusion_max_bend;//0x58
};
TAG_BLOCK_SIZE_ASSERT(s_sound_classes_block,0x5C);
tag_block<s_sound_classes_block> sound_classes;//0x0
};
TAG_GROUP_SIZE_ASSERT(s_sound_classes_group_definition,0x8);
TAG_REFL(s_sound_classes_group_definition)
TAG_REFL_TAG_BLOCK_DEF(s_sound_classes_block)
	TAG_REFL_PROPERTY(max_sounds_per_tag)
	TAG_REFL_PROPERTY(max_sounds_per_object)
	TAG_REFL_PROPERTY(preemption_time)
	TAG_REFL_PROPERTY(internal_flags)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(priority)
	TAG_REFL_PROPERTY(cache_miss_mode)
	TAG_REFL_PROPERTY(reverb_gain_db)
	TAG_REFL_PROPERTY(override_speaker_gain)
	TAG_REFL_PROPERTY(distance_bounds_lower)
	TAG_REFL_PROPERTY(distance_bounds_upper)
	TAG_REFL_PROPERTY(gain_bounds_lower)
	TAG_REFL_PROPERTY(gain_bounds_upper)
	TAG_REFL_PROPERTY(cutscene_ducking_db)
	TAG_REFL_PROPERTY(cutscene_ducking_fade_in_time_sec)
	TAG_REFL_PROPERTY(cutscene_ducking_sustain_time_sec)
	TAG_REFL_PROPERTY(cutscene_ducking_fade_out_time_sec)
	TAG_REFL_PROPERTY(scripted_dialog_ducking_db)
	TAG_REFL_PROPERTY(scripted_dialog_ducking_fade_in_time_sec)
	TAG_REFL_PROPERTY(scripted_dialog_ducking_sustain_time_sec)
	TAG_REFL_PROPERTY(scripted_dialog_ducking_fade_out_time_sec)
	TAG_REFL_PROPERTY(doppler_factor)
	TAG_REFL_PROPERTY(stereo_playback_type)
	TAG_REFL_PROPERTY(transmission_multiplier)
	TAG_REFL_PROPERTY(obstruction_max_bend)
	TAG_REFL_PROPERTY(occlusion_max_bend)
REFL_END
	TAG_REFL_TAG_BLOCK(sound_classes)
REFL_END
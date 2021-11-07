#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: sound_looping
		* group_tag : lsnd
 		* header size : 44
		* *********************************************************************/ 
struct s_sound_looping_group_definition
{
enum class e_flags : __int32
{
deafening_to_ais = FLAG(0),
not_a_loop = FLAG(1),
stops_music = FLAG(2),
always_spartialize = FLAG(3),
synchronize_playback = FLAG(4),
synchronize_tracks = FLAG(5),
fake_spatialization_with_distance = FLAG(6),
combine_all_3d_playback = FLAG(7),
};
e_flags flags;//0x0
float martys_music_time;//0x4
float unknown;//0x8
float unknown;//0xC
float unknown;//0x10
tag_reference unused;//0x14
struct s_tracks_block
{
string_id name;//0x0
enum class e_flags : __int32
{
fade_in_at_start = FLAG(0),
fade_out_at_stop = FLAG(1),
crossfade_alternate_loop = FLAG(2),
master_surround_sound_track = FLAG(3),
fade_out_at_alternate_stop = FLAG(4),
};
e_flags flags;//0x4
float gain;//0x8
float fade_in_duration;//0xC
float fade_out_duration;//0x10
tag_reference in;//0x14
tag_reference loop;//0x1C
tag_reference out;//0x24
tag_reference alternate_loop;//0x2C
tag_reference alternate_out;//0x34
enum class e_output_effect : __int16
{
none = 0,
output_front_speakers = 1,
output_rear_speakers = 2,
output_center_speakers = 3,
};
e_output_effect output_effect;//0x3C
__int16 unknown;//0x3E
tag_reference alternate_transition_in;//0x40
tag_reference alternate_transition_out;//0x48
float alternate_crossfade_duration;//0x50
float alternate_fade_out_duration;//0x54
};
TAG_BLOCK_SIZE_ASSERT(s_tracks_block,0x58);
tag_block<s_tracks_block> tracks;//0x1C
struct s_detail_sounds_block
{
string_id name;//0x0
tag_reference sound;//0x4
float random_period_bounds_min;//0xC
float random_period_bounds_max;//0x10
float unknown;//0x14
enum class e_flags : __int32
{
dont_play_with_alternate = FLAG(0),
dont_play_without_alternate = FLAG(1),
start_immeditely_with_loop = FLAG(2),
};
e_flags flags;//0x18
angle yaw_bounds_min;//0x1C
angle yaw_bounds_max;//0x20
angle pitch_bounds_min;//0x24
angle pitch_bounds_max;//0x28
float distance_bounds_min;//0x2C
float distance_bounds_max;//0x30
};
TAG_BLOCK_SIZE_ASSERT(s_detail_sounds_block,0x34);
tag_block<s_detail_sounds_block> detail_sounds;//0x24
};
TAG_GROUP_SIZE_ASSERT(s_sound_looping_group_definition,0x2C);
TAG_REFL(s_sound_looping_group_definition)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(martys_music_time)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_TAG_REFERENCE(unused)
TAG_REFL_TAG_BLOCK_DEF(s_tracks_block)
	TAG_REFL_STRING_ID(name)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(gain)
	TAG_REFL_PROPERTY(fade_in_duration)
	TAG_REFL_PROPERTY(fade_out_duration)
	TAG_REFL_TAG_REFERENCE(in)
	TAG_REFL_TAG_REFERENCE(loop)
	TAG_REFL_TAG_REFERENCE(out)
	TAG_REFL_TAG_REFERENCE(alternate_loop)
	TAG_REFL_TAG_REFERENCE(alternate_out)
	TAG_REFL_PROPERTY(output_effect)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_TAG_REFERENCE(alternate_transition_in)
	TAG_REFL_TAG_REFERENCE(alternate_transition_out)
	TAG_REFL_PROPERTY(alternate_crossfade_duration)
	TAG_REFL_PROPERTY(alternate_fade_out_duration)
REFL_END
	TAG_REFL_TAG_BLOCK(tracks)
TAG_REFL_TAG_BLOCK_DEF(s_detail_sounds_block)
	TAG_REFL_STRING_ID(name)
	TAG_REFL_TAG_REFERENCE(sound)
	TAG_REFL_PROPERTY(random_period_bounds_min)
	TAG_REFL_PROPERTY(random_period_bounds_max)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_ANGLE(yaw_bounds_min)
	TAG_REFL_ANGLE(yaw_bounds_max)
	TAG_REFL_ANGLE(pitch_bounds_min)
	TAG_REFL_ANGLE(pitch_bounds_max)
	TAG_REFL_PROPERTY(distance_bounds_min)
	TAG_REFL_PROPERTY(distance_bounds_max)
REFL_END
	TAG_REFL_TAG_BLOCK(detail_sounds)
REFL_END
#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: sound_cache_file_gestalt
		* group_tag : ugh!
 		* header size : 88
		* *********************************************************************/ 
struct s_sound_cache_file_gestalt_group_definition
{
struct s_playback_parameters_block
{
float minimum_distance;//0x0
float maximum_distance;//0x4
float skip_fraction;//0x8
float maximum_bend_per_second;//0xC
float gain_base;//0x10
float gain_variance;//0x14
__int16 random_pitch_bounds_min;//0x18
__int16 random_pitch_bounds_max;//0x1A
angle inner_cone_angle;//0x1C
angle outer_cone_angle;//0x20
float outer_cone_gain;//0x24
enum class e_flags : __int32
{
override_azimuth = FLAG(0),
override_3d_gain = FLAG(1),
override_speaker_gain = FLAG(2),
};
e_flags flags;//0x28
float azimuth;//0x2C
float positional_gain;//0x30
float first_person_gain;//0x34
};
TAG_BLOCK_SIZE_ASSERT(s_playback_parameters_block,0x38);
tag_block<s_playback_parameters_block> playback_parameters;//0x0
struct s_scales_block
{
float gain_modifier_min;//0x0
float gain_modifier_max;//0x4
__int16 pitch_modifier_min;//0x8
__int16 pitch_modifier_max;//0xA
float skip_fraction_modifier_min;//0xC
float skip_fraction_modifier_max;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_scales_block,0x14);
tag_block<s_scales_block> scales;//0x8
struct s_import_names_block
{
string_id name;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_import_names_block,0x4);
tag_block<s_import_names_block> import_names;//0x10
struct s_pitch_range_parameters_block
{
__int16 natural_pitch;//0x0
__int16 bend_bounds_min;//0x2
__int16 bend_bounds_max;//0x4
__int16 max_gain_pitch_bounds_min;//0x6
__int16 max_gain_pitch_bounds_max;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_pitch_range_parameters_block,0xA);
tag_block<s_pitch_range_parameters_block> pitch_range_parameters;//0x18
struct s_pitch_ranges_block
{
__int16 import_name_index;//0x0
__int16 pitch_range_parameter_index;//0x2
__int16 encoded_permutation_data_index;//0x4
__int16 encoded_runtime_permutation_flag_index;//0x6
__int16 first_permutation;//0x8
__int16 permutation_count;//0xA
};
TAG_BLOCK_SIZE_ASSERT(s_pitch_ranges_block,0xC);
tag_block<s_pitch_ranges_block> pitch_ranges;//0x20
struct s_permutations_block
{
__int16 import_name_index;//0x0
__int16 encoded_skip_fraction;//0x2
__int8 gain;//0x4
__int8 permutation_info_index;//0x5
__int16 language_neutral_time;//0x6
unsigned __int32 sample_size;//0x8
__int16 first_chunk;//0xC
__int16 chunk_count;//0xE
};
TAG_BLOCK_SIZE_ASSERT(s_permutations_block,0x10);
tag_block<s_permutations_block> permutations;//0x28
struct s_custom_playbacks_block
{
PAD(0x8);//0x0
enum class e_flags : __int32
{
use_3d_radio_hack = FLAG(0),
};
e_flags flags;//0x8
PAD(0x8);//0xC
struct s_filter_block
{
__int32 filter_type;//0x0
__int32 filter_width;//0x4
float scale_bounds_min;//0x8
float scale_bounds_max;//0xC
float random_base;//0x10
float random_variance;//0x14
float scale_bounds_min;//0x18
float scale_bounds_max;//0x1C
float random_base;//0x20
float random_variance;//0x24
float scale_bounds_min;//0x28
float scale_bounds_max;//0x2C
float random_base;//0x30
float random_variance;//0x34
float scale_bounds_min;//0x38
float scale_bounds_max;//0x3C
float random_base;//0x40
float random_variance;//0x44
};
TAG_BLOCK_SIZE_ASSERT(s_filter_block,0x48);
tag_block<s_filter_block> filter;//0x14
PAD(0x18);//0x1C
};
TAG_BLOCK_SIZE_ASSERT(s_custom_playbacks_block,0x34);
tag_block<s_custom_playbacks_block> custom_playbacks;//0x30
struct s_runtime_permutation_flags_block
{
__int8 unknown;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_runtime_permutation_flags_block,0x1);
tag_block<s_runtime_permutation_flags_block> runtime_permutation_flags;//0x38
struct s_permutation_chunks_block
{
unsigned __int32 file_offset;//0x0
unsigned __int16 flags;//0x4
unsigned __int16 size;//0x6
__int32 runtime_index;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_permutation_chunks_block,0xC);
tag_block<s_permutation_chunks_block> permutation_chunks;//0x40
struct s_promotions_block
{
struct s_rules_block
{
__int16 pitch_range_index;//0x0
__int16 maximum_playing_count;//0x2
float suppression_time;//0x4
__int32 unknown;//0x8
__int32 unknown;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_rules_block,0x10);
tag_block<s_rules_block> rules;//0x0
struct s_runtime_timers_block
{
__int32 unknown;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_runtime_timers_block,0x4);
tag_block<s_runtime_timers_block> runtime_timers;//0x8
PAD(0xC);//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_promotions_block,0x1C);
tag_block<s_promotions_block> promotions;//0x48
struct s_extra_info_block
{
PAD(0x8);//0x0
unsigned __int32 block_offset;//0x8
unsigned __int32 block_size;//0xC
unsigned __int32 section_data_size;//0x10
unsigned __int32 resource_data_size;//0x14
struct s_resources_block
{
__int8 type;//0x0
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-1);//0x1
__int8 unknown;//0x0
PAD(0x1);//0x1
__int16 unknown;//0x2
__int16 primary_locator;//0x4
__int16 secondary_locator;//0x6
unsigned __int32 resource_data_size;//0x8
unsigned __int32 resource_data_offset;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_resources_block,0x10);
tag_block<s_resources_block> resources;//0x18
tag_referenceN sound_gestalt;//0x20
PAD(0x8);//0x24
};
TAG_BLOCK_SIZE_ASSERT(s_extra_info_block,0x2C);
tag_block<s_extra_info_block> extra_info;//0x50
};
TAG_GROUP_SIZE_ASSERT(s_sound_cache_file_gestalt_group_definition,0x58);
TAG_REFL_TAG_BLOCK_DEF(s_sound_cache_file_gestalt_group_definition::s_playback_parameters_block)
TAG_REFL_TAG_BLOCK_DEF(s_sound_cache_file_gestalt_group_definition::s_scales_block)
TAG_REFL_TAG_BLOCK_DEF(s_sound_cache_file_gestalt_group_definition::s_import_names_block)
TAG_REFL_TAG_BLOCK_DEF(s_sound_cache_file_gestalt_group_definition::s_pitch_range_parameters_block)
TAG_REFL_TAG_BLOCK_DEF(s_sound_cache_file_gestalt_group_definition::s_pitch_ranges_block)
TAG_REFL_TAG_BLOCK_DEF(s_sound_cache_file_gestalt_group_definition::s_permutations_block)
TAG_REFL_TAG_BLOCK_DEF(s_sound_cache_file_gestalt_group_definition::s_custom_playbacks_block::s_filter_block)
TAG_REFL_TAG_BLOCK_DEF(s_sound_cache_file_gestalt_group_definition::s_custom_playbacks_block)
TAG_REFL_TAG_BLOCK_DEF(s_sound_cache_file_gestalt_group_definition::s_runtime_permutation_flags_block)
TAG_REFL_TAG_BLOCK_DEF(s_sound_cache_file_gestalt_group_definition::s_permutation_chunks_block)
TAG_REFL_TAG_BLOCK_DEF(s_sound_cache_file_gestalt_group_definition::s_promotions_block::s_rules_block)
TAG_REFL_TAG_BLOCK_DEF(s_sound_cache_file_gestalt_group_definition::s_promotions_block::s_runtime_timers_block)
TAG_REFL_TAG_BLOCK_DEF(s_sound_cache_file_gestalt_group_definition::s_promotions_block)
TAG_REFL_TAG_BLOCK_DEF(s_sound_cache_file_gestalt_group_definition::s_extra_info_block::s_resources_block)
TAG_REFL_TAG_BLOCK_DEF(s_sound_cache_file_gestalt_group_definition::s_extra_info_block)
TAG_REFL(s_sound_cache_file_gestalt_group_definition)
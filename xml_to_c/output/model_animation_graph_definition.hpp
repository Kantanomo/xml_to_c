#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: model_animation_graph
		* group_tag : jmad
 		* header size : 172
		* *********************************************************************/ 
struct s_model_animation_graph_group_definition
{
tag_reference parent_animation_graph;//0x0
enum class e_inheritance_flags : __int8
{
inherit_root_trans_scale_only = FLAG(0),
inherit_for_use_on_player = FLAG(1),
};
e_inheritance_flags inheritance_flags;//0x8
enum class e_private_flags : __int8
{
prepared_for_cache = FLAG(0),
unused = FLAG(1),
imported_with_codec_compressors = FLAG(2),
unused_smelly_flag = FLAG(3),
written_to_cache = FLAG(4),
animation_data_reordered = FLAG(5),
};
e_private_flags private_flags;//0x9
__int16 animation_codec_pack;//0xA
struct s_skeleton_nodes_block
{
string_id name;//0x0
__int16 next_sibling_node_index_index;//0x4
__int16 first_child_node_index_index;//0x6
__int16 parent_node_index_index;//0x8
enum class e_model_flags : __int8
{
primary_model = FLAG(0),
secondary_model = FLAG(1),
local_root = FLAG(2),
left_hand = FLAG(3),
right_hand = FLAG(4),
left_arm_member = FLAG(5),
};
e_model_flags model_flags;//0xA
enum class e_node_joint_flags : __int8
{
ballsocket = FLAG(0),
hinge = FLAG(1),
no_movement = FLAG(2),
};
e_node_joint_flags node_joint_flags;//0xB
float base_vector_i;//0xC
float base_vector_j;//0x10
float base_vector_k;//0x14
float vector_range;//0x18
float z_pos;//0x1C
};
TAG_BLOCK_SIZE_ASSERT(s_skeleton_nodes_block,0x20);
tag_block<s_skeleton_nodes_block> skeleton_nodes;//0xC
struct s_sound_references|abcdcc_block
{
tag_reference sound;//0x0
enum class e_flags : __int16
{
allow_on_player = FLAG(0),
left_arm_only = FLAG(1),
right_arm_only = FLAG(2),
firstperson_only = FLAG(3),
forward_only = FLAG(4),
reverse_only = FLAG(5),
};
e_flags flags;//0x8
__int16 unknown;//0xA
};
TAG_BLOCK_SIZE_ASSERT(s_sound_references|abcdcc_block,0xC);
tag_block<s_sound_references|abcdcc_block> sound_references|abcdcc;//0x14
struct s_effect_references|abcdcc_block
{
tag_reference effect;//0x0
enum class e_flags : __int16
{
allow_on_player = FLAG(0),
left_arm_only = FLAG(1),
right_arm_only = FLAG(2),
firstperson_only = FLAG(3),
forward_only = FLAG(4),
reverse_only = FLAG(5),
};
e_flags flags;//0x8
__int16 unknown;//0xA
};
TAG_BLOCK_SIZE_ASSERT(s_effect_references|abcdcc_block,0xC);
tag_block<s_effect_references|abcdcc_block> effect_references|abcdcc;//0x1C
struct s_blend_screens|abcdcc_block
{
string_id label;//0x0
angle right_yaw_per_frame;//0x4
angle left_yaw_per_frame;//0x8
__int16 right_frame_count;//0xC
__int16 left_frame_count;//0xE
angle down_pitch_per_frame;//0x10
angle up_pitch_per_frame;//0x14
__int16 down_pitch_frame_count;//0x18
__int16 up_pitch_frame_count;//0x1A
};
TAG_BLOCK_SIZE_ASSERT(s_blend_screens|abcdcc_block,0x1C);
tag_block<s_blend_screens|abcdcc_block> blend_screens|abcdcc;//0x24
struct s_animations_block
{
string_id name;//0x0
__int32 node_list_checksum;//0x4
__int32 production_checksum;//0x8
__int32 import_checksum;//0xC
enum class e_type : __int8
{
base = 0,
overlay = 1,
replacement = 2,
};
e_type type;//0x10
enum class e_frame_info_type : __int8
{
none = 0,
dxdy = 1,
dxdydyaw = 2,
dxdydzdyaw = 3,
};
e_frame_info_type frame_info_type;//0x11
__int8 blend_screen_index;//0x12
__int8 node_count;//0x13
__int16 frame_count;//0x14
enum class e_internal_flags : __int8
{
unused0 = FLAG(0),
world_relative = FLAG(1),
unused1 = FLAG(2),
unused2 = FLAG(3),
unused3 = FLAG(4),
compression_disabled = FLAG(5),
old_production_checksum = FLAG(6),
valid_production_checksum = FLAG(7),
};
e_internal_flags internal_flags;//0x16
enum class e_production_flags : __int8
{
do_not_monitor_changes = FLAG(0),
verify_sound_events = FLAG(1),
do_not_inherit_for_player_graphs = FLAG(2),
};
e_production_flags production_flags;//0x17
enum class e_playback_flags : __int16
{
disable_interpolation_in = FLAG(0),
disable_interpolation_out = FLAG(1),
disable_mode_ik = FLAG(2),
disable_weapon_ik = FLAG(3),
disable_weapon_aim1st_person = FLAG(4),
disable_look_screen = FLAG(5),
disable_transition_adjustment = FLAG(6),
};
e_playback_flags playback_flags;//0x18
enum class e_desired_compression : __int8
{
best_score = 0,
best_compression = 1,
best_accuracy = 2,
best_fullframe = 3,
best_small_keyframe = 4,
best_large_keyframe = 5,
};
e_desired_compression desired_compression;//0x1A
enum class e_current_compression : __int8
{
best_score = 0,
best_compression = 1,
best_accuracy = 2,
best_fullframe = 3,
best_small_keyframe = 4,
best_large_keyframe = 5,
};
e_current_compression current_compression;//0x1B
float weight;//0x1C
__int16 loop_frame_index;//0x20
__int16 NUM__index;//0x22
__int16 NUM__index;//0x24
__int16 unknown;//0x26
data_block NUM_;//0x28
__int8 NUM_;//0x30
__int8 NUM_;//0x31
__int16 NUM_;//0x32
__int16 NUM_;//0x34
__int16 NUM_;//0x36
__int32 NUM_;//0x38
__int32 NUM_;//0x3C
struct s_frame_events|abcdcc_block
{
enum class e_type : __int16
{
primary_keyframe = 0,
secondary_keyframe = 1,
left_foot = 2,
right_foot = 3,
allow_interruption = 4,
transition_a = 5,
transition_b = 6,
transition_c = 7,
transition_d = 8,
bothfeet_shuffle = 9,
body_impact = 10,
};
e_type type;//0x0
__int16 frame;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_frame_events|abcdcc_block,0x4);
tag_block<s_frame_events|abcdcc_block> frame_events|abcdcc;//0x40
struct s_sound_events|abcdcc_block
{
__int16 sound_index;//0x0
__int16 frame;//0x2
string_id marker_name;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_sound_events|abcdcc_block,0x8);
tag_block<s_sound_events|abcdcc_block> sound_events|abcdcc;//0x48
struct s_effect_events|abcdcc_block
{
__int16 effect_index;//0x0
__int16 frame;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_effect_events|abcdcc_block,0x4);
tag_block<s_effect_events|abcdcc_block> effect_events|abcdcc;//0x50
struct s_objectspace_parent_nodes|abcdcc_block
{
__int16 node_index;//0x0
enum class e_component_flags : __int16
{
rotation = FLAG(0),
translation = FLAG(1),
scale = FLAG(2),
};
e_component_flags component_flags;//0x2
__int16 rotation_x;//0x4
__int16 rotation_y;//0x6
__int16 rotation_z;//0x8
__int16 rotation_w;//0xA
float default_translation_x;//0xC
float default_translation_y;//0x10
float default_translation_z;//0x14
float default_scale;//0x18
};
TAG_BLOCK_SIZE_ASSERT(s_objectspace_parent_nodes|abcdcc_block,0x1C);
tag_block<s_objectspace_parent_nodes|abcdcc_block> objectspace_parent_nodes|abcdcc;//0x58
};
TAG_BLOCK_SIZE_ASSERT(s_animations_block,0x60);
tag_block<s_animations_block> animations;//0x2C
struct s_modes|aabbcc_block
{
string_id label;//0x0
struct s_weapon_class|aabbcc_block
{
string_id label;//0x0
struct s_weapon_type|aabbcc_block
{
string_id label;//0x0
struct s_actions|aabbcc_block
{
string_id label;//0x0
__int16 graph_index;//0x4
__int16 animation_index;//0x6
};
TAG_BLOCK_SIZE_ASSERT(s_actions|aabbcc_block,0x8);
tag_block<s_actions|aabbcc_block> actions|aabbcc;//0x4
struct s_overlays|aabbcc_block
{
string_id label;//0x0
__int16 graph_index;//0x4
__int16 animation_index;//0x6
};
TAG_BLOCK_SIZE_ASSERT(s_overlays|aabbcc_block,0x8);
tag_block<s_overlays|aabbcc_block> overlays|aabbcc;//0xC
struct s_death_and_damage|aabbcc_block
{
string_id label;//0x0
struct s_directions_block
{
struct s_regions_block
{
__int16 graph_index;//0x0
__int16 animation_index;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_regions_block,0x4);
tag_block<s_regions_block> regions;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_directions_block,0x8);
tag_block<s_directions_block> directions;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_death_and_damage|aabbcc_block,0xC);
tag_block<s_death_and_damage|aabbcc_block> death_and_damage|aabbcc;//0x14
struct s_transitions|aabbcc_block
{
string_id full_name;//0x0
string_id state_name;//0x4
__int16 unknown;//0x8
__int8 index_a;//0xA
__int8 index_b;//0xB
struct s_destinations|aabbcc_block
{
string_id full_name;//0x0
string_id mode;//0x4
string_id state_name;//0x8
enum class e_frame_event_link : __int8
{
no_keyframe = 0,
keyframe_type_a = 1,
keyframe_type_b = 2,
keyframe_type_c = 3,
keyframe_type_d = 4,
};
e_frame_event_link frame_event_link;//0xC
__int8 unknown;//0xD
__int8 index_a;//0xE
__int8 index_b;//0xF
__int16 graph_index;//0x10
__int16 animation_index;//0x12
};
TAG_BLOCK_SIZE_ASSERT(s_destinations|aabbcc_block,0x14);
tag_block<s_destinations|aabbcc_block> destinations|aabbcc;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_transitions|aabbcc_block,0x14);
tag_block<s_transitions|aabbcc_block> transitions|aabbcc;//0x1C
struct s_high_precache|ccccc_block
{
__int32 cache_block_index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_high_precache|ccccc_block,0x4);
tag_block<s_high_precache|ccccc_block> high_precache|ccccc;//0x24
struct s_low_precache|ccccc_block
{
__int32 cache_block_index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_low_precache|ccccc_block,0x4);
tag_block<s_low_precache|ccccc_block> low_precache|ccccc;//0x2C
};
TAG_BLOCK_SIZE_ASSERT(s_weapon_type|aabbcc_block,0x34);
tag_block<s_weapon_type|aabbcc_block> weapon_type|aabbcc;//0x4
struct s_weapon_ik|aabbcc_block
{
string_id marker;//0x0
string_id attach_to_marker;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_weapon_ik|aabbcc_block,0x8);
tag_block<s_weapon_ik|aabbcc_block> weapon_ik|aabbcc;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_weapon_class|aabbcc_block,0x14);
tag_block<s_weapon_class|aabbcc_block> weapon_class|aabbcc;//0x4
struct s_mode_ik|aabbcc_block
{
string_id marker;//0x0
string_id attach_to_marker;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_mode_ik|aabbcc_block,0x8);
tag_block<s_mode_ik|aabbcc_block> mode_ik|aabbcc;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_modes|aabbcc_block,0x14);
tag_block<s_modes|aabbcc_block> modes|aabbcc;//0x34
struct s_vehicle_suspension|ccaabb_block
{
string_id label;//0x0
__int16 graph_index;//0x4
__int16 animation_index;//0x6
string_id marker_name;//0x8
float mass_point_offset;//0xC
float full_extension_ground_depth;//0x10
float full_compression_ground_depth;//0x14
string_id region_name;//0x18
float destroyed_mass_point_offset;//0x1C
float destroyed_full_extension_ground_depth;//0x20
float destroyed_full_compression_ground_depth;//0x24
};
TAG_BLOCK_SIZE_ASSERT(s_vehicle_suspension|ccaabb_block,0x28);
tag_block<s_vehicle_suspension|ccaabb_block> vehicle_suspension|ccaabb;//0x3C
struct s_object_overlays|ccaabb_block
{
string_id label;//0x0
__int16 graph_index;//0x4
__int16 animation_index;//0x6
__int16 unknown;//0x8
enum class e_function_controls : __int16
{
frame = 0,
scale = 1,
};
e_function_controls function_controls;//0xA
string_id function;//0xC
PAD(0x4);//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_object_overlays|ccaabb_block,0x14);
tag_block<s_object_overlays|ccaabb_block> object_overlays|ccaabb;//0x44
struct s_inheritence_list_block
{
tag_reference inherited_graph;//0x0
struct s_node_map_block
{
__int16 local_node;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_node_map_block,0x2);
tag_block<s_node_map_block> node_map;//0x8
struct s_node_map_flags_block
{
__int32 local_node_flags;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_node_map_flags_block,0x4);
tag_block<s_node_map_flags_block> node_map_flags;//0x10
float root_z_offset;//0x18
__int32 inheritance_flags;//0x1C
};
TAG_BLOCK_SIZE_ASSERT(s_inheritence_list_block,0x20);
tag_block<s_inheritence_list_block> inheritence_list;//0x4C
struct s_weapon_list_block
{
string_id weapon_name;//0x0
string_id weapon_class;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_weapon_list_block,0x8);
tag_block<s_weapon_list_block> weapon_list;//0x54
PAD(0x40);//0x5C
data_block last_import_results;//0x9C
struct s_additional_node_data_block
{
string_id node_name;//0x0
float default_rotation_i;//0x4
float default_rotation_j;//0x8
float default_rotation_k;//0xC
float default_rotation_w;//0x10
float default_translation_x;//0x14
float default_translation_y;//0x18
float default_translation_z;//0x1C
float default_scale;//0x20
float min_bounds_x;//0x24
float min_bounds_y;//0x28
float min_bounds_z;//0x2C
float max_bounds_x;//0x30
float max_bounds_y;//0x34
float max_bounds_z;//0x38
};
TAG_BLOCK_SIZE_ASSERT(s_additional_node_data_block,0x3C);
tag_block<s_additional_node_data_block> additional_node_data;//0xA4
};
TAG_GROUP_SIZE_ASSERT(s_model_animation_graph_group_definition,0xAC);
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_skeleton_nodes_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(next_sibling_node_index_index)	TAG_REFL_PROPERTY(first_child_node_index_index)	TAG_REFL_PROPERTY(parent_node_index_index)	TAG_REFL_PROPERTY(model_flags)	TAG_REFL_PROPERTY(node_joint_flags)	TAG_REFL_PROPERTY(base_vector_i)	TAG_REFL_PROPERTY(base_vector_j)	TAG_REFL_PROPERTY(base_vector_k)	TAG_REFL_PROPERTY(vector_range)	TAG_REFL_PROPERTY(z_pos)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_sound_references|abcdcc_block)	TAG_REFL_TAG_REFERENCE(sound)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_effect_references|abcdcc_block)	TAG_REFL_TAG_REFERENCE(effect)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_blend_screens|abcdcc_block)	TAG_REFL_STRING_ID(label)	TAG_REFL_ANGLE(right_yaw_per_frame)	TAG_REFL_ANGLE(left_yaw_per_frame)	TAG_REFL_PROPERTY(right_frame_count)	TAG_REFL_PROPERTY(left_frame_count)	TAG_REFL_ANGLE(down_pitch_per_frame)	TAG_REFL_ANGLE(up_pitch_per_frame)	TAG_REFL_PROPERTY(down_pitch_frame_count)	TAG_REFL_PROPERTY(up_pitch_frame_count)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_animations_block::s_frame_events|abcdcc_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(frame)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_animations_block::s_sound_events|abcdcc_block)	TAG_REFL_PROPERTY(sound_index)	TAG_REFL_PROPERTY(frame)	TAG_REFL_STRING_ID(marker_name)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_animations_block::s_effect_events|abcdcc_block)	TAG_REFL_PROPERTY(effect_index)	TAG_REFL_PROPERTY(frame)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_animations_block::s_objectspace_parent_nodes|abcdcc_block)	TAG_REFL_PROPERTY(node_index)	TAG_REFL_PROPERTY(component_flags)	TAG_REFL_PROPERTY(rotation_x)	TAG_REFL_PROPERTY(rotation_y)	TAG_REFL_PROPERTY(rotation_z)	TAG_REFL_PROPERTY(rotation_w)	TAG_REFL_PROPERTY(default_translation_x)	TAG_REFL_PROPERTY(default_translation_y)	TAG_REFL_PROPERTY(default_translation_z)	TAG_REFL_PROPERTY(default_scale)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_animations_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(node_list_checksum)	TAG_REFL_PROPERTY(production_checksum)	TAG_REFL_PROPERTY(import_checksum)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(frame_info_type)	TAG_REFL_PROPERTY(blend_screen_index)	TAG_REFL_PROPERTY(node_count)	TAG_REFL_PROPERTY(frame_count)	TAG_REFL_PROPERTY(internal_flags)	TAG_REFL_PROPERTY(production_flags)	TAG_REFL_PROPERTY(playback_flags)	TAG_REFL_PROPERTY(desired_compression)	TAG_REFL_PROPERTY(current_compression)	TAG_REFL_PROPERTY(weight)	TAG_REFL_PROPERTY(loop_frame_index)	TAG_REFL_PROPERTY(NUM__index)	TAG_REFL_PROPERTY(NUM__index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_DATA_BLOCK(NUM_)	TAG_REFL_PROPERTY(NUM_)	TAG_REFL_PROPERTY(NUM_)	TAG_REFL_PROPERTY(NUM_)	TAG_REFL_PROPERTY(NUM_)	TAG_REFL_PROPERTY(NUM_)	TAG_REFL_PROPERTY(NUM_)	TAG_REFL_PROPERTY(NUM_)	TAG_REFL_TAG_BLOCK(frame_events|abcdcc)	TAG_REFL_TAG_BLOCK(sound_events|abcdcc)	TAG_REFL_TAG_BLOCK(effect_events|abcdcc)	TAG_REFL_TAG_BLOCK(objectspace_parent_nodes|abcdcc)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_modes|aabbcc_block::s_weapon_class|aabbcc_block::s_weapon_type|aabbcc_block::s_actions|aabbcc_block)	TAG_REFL_STRING_ID(label)	TAG_REFL_PROPERTY(graph_index)	TAG_REFL_PROPERTY(animation_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_modes|aabbcc_block::s_weapon_class|aabbcc_block::s_weapon_type|aabbcc_block::s_overlays|aabbcc_block)	TAG_REFL_STRING_ID(label)	TAG_REFL_PROPERTY(graph_index)	TAG_REFL_PROPERTY(animation_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_modes|aabbcc_block::s_weapon_class|aabbcc_block::s_weapon_type|aabbcc_block::s_death_and_damage|aabbcc_block::s_directions_block::s_regions_block)	TAG_REFL_PROPERTY(graph_index)	TAG_REFL_PROPERTY(animation_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_modes|aabbcc_block::s_weapon_class|aabbcc_block::s_weapon_type|aabbcc_block::s_death_and_damage|aabbcc_block::s_directions_block)	TAG_REFL_TAG_BLOCK(regions)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_modes|aabbcc_block::s_weapon_class|aabbcc_block::s_weapon_type|aabbcc_block::s_death_and_damage|aabbcc_block)	TAG_REFL_STRING_ID(label)	TAG_REFL_TAG_BLOCK(directions)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_modes|aabbcc_block::s_weapon_class|aabbcc_block::s_weapon_type|aabbcc_block::s_transitions|aabbcc_block::s_destinations|aabbcc_block)	TAG_REFL_STRING_ID(full_name)	TAG_REFL_STRING_ID(mode)	TAG_REFL_STRING_ID(state_name)	TAG_REFL_PROPERTY(frame_event_link)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(index_a)	TAG_REFL_PROPERTY(index_b)	TAG_REFL_PROPERTY(graph_index)	TAG_REFL_PROPERTY(animation_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_modes|aabbcc_block::s_weapon_class|aabbcc_block::s_weapon_type|aabbcc_block::s_transitions|aabbcc_block)	TAG_REFL_STRING_ID(full_name)	TAG_REFL_STRING_ID(state_name)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(index_a)	TAG_REFL_PROPERTY(index_b)	TAG_REFL_TAG_BLOCK(destinations|aabbcc)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_modes|aabbcc_block::s_weapon_class|aabbcc_block::s_weapon_type|aabbcc_block::s_high_precache|ccccc_block)	TAG_REFL_PROPERTY(cache_block_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_modes|aabbcc_block::s_weapon_class|aabbcc_block::s_weapon_type|aabbcc_block::s_low_precache|ccccc_block)	TAG_REFL_PROPERTY(cache_block_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_modes|aabbcc_block::s_weapon_class|aabbcc_block::s_weapon_type|aabbcc_block)	TAG_REFL_STRING_ID(label)	TAG_REFL_TAG_BLOCK(actions|aabbcc)	TAG_REFL_TAG_BLOCK(overlays|aabbcc)	TAG_REFL_TAG_BLOCK(death_and_damage|aabbcc)	TAG_REFL_TAG_BLOCK(transitions|aabbcc)	TAG_REFL_TAG_BLOCK(high_precache|ccccc)	TAG_REFL_TAG_BLOCK(low_precache|ccccc)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_modes|aabbcc_block::s_weapon_class|aabbcc_block::s_weapon_ik|aabbcc_block)	TAG_REFL_STRING_ID(marker)	TAG_REFL_STRING_ID(attach_to_marker)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_modes|aabbcc_block::s_weapon_class|aabbcc_block)	TAG_REFL_STRING_ID(label)	TAG_REFL_TAG_BLOCK(weapon_type|aabbcc)	TAG_REFL_TAG_BLOCK(weapon_ik|aabbcc)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_modes|aabbcc_block::s_mode_ik|aabbcc_block)	TAG_REFL_STRING_ID(marker)	TAG_REFL_STRING_ID(attach_to_marker)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_modes|aabbcc_block)	TAG_REFL_STRING_ID(label)	TAG_REFL_TAG_BLOCK(weapon_class|aabbcc)	TAG_REFL_TAG_BLOCK(mode_ik|aabbcc)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_vehicle_suspension|ccaabb_block)	TAG_REFL_STRING_ID(label)	TAG_REFL_PROPERTY(graph_index)	TAG_REFL_PROPERTY(animation_index)	TAG_REFL_STRING_ID(marker_name)	TAG_REFL_PROPERTY(mass_point_offset)	TAG_REFL_PROPERTY(full_extension_ground_depth)	TAG_REFL_PROPERTY(full_compression_ground_depth)	TAG_REFL_STRING_ID(region_name)	TAG_REFL_PROPERTY(destroyed_mass_point_offset)	TAG_REFL_PROPERTY(destroyed_full_extension_ground_depth)	TAG_REFL_PROPERTY(destroyed_full_compression_ground_depth)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_object_overlays|ccaabb_block)	TAG_REFL_STRING_ID(label)	TAG_REFL_PROPERTY(graph_index)	TAG_REFL_PROPERTY(animation_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(function_controls)	TAG_REFL_STRING_ID(function)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_inheritence_list_block::s_node_map_block)	TAG_REFL_PROPERTY(local_node)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_inheritence_list_block::s_node_map_flags_block)	TAG_REFL_PROPERTY(local_node_flags)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_inheritence_list_block)	TAG_REFL_TAG_REFERENCE(inherited_graph)	TAG_REFL_TAG_BLOCK(node_map)	TAG_REFL_TAG_BLOCK(node_map_flags)	TAG_REFL_PROPERTY(root_z_offset)	TAG_REFL_PROPERTY(inheritance_flags)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_weapon_list_block)	TAG_REFL_STRING_ID(weapon_name)	TAG_REFL_STRING_ID(weapon_class)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_animation_graph_group_definition::s_additional_node_data_block)	TAG_REFL_STRING_ID(node_name)	TAG_REFL_PROPERTY(default_rotation_i)	TAG_REFL_PROPERTY(default_rotation_j)	TAG_REFL_PROPERTY(default_rotation_k)	TAG_REFL_PROPERTY(default_rotation_w)	TAG_REFL_PROPERTY(default_translation_x)	TAG_REFL_PROPERTY(default_translation_y)	TAG_REFL_PROPERTY(default_translation_z)	TAG_REFL_PROPERTY(default_scale)	TAG_REFL_PROPERTY(min_bounds_x)	TAG_REFL_PROPERTY(min_bounds_y)	TAG_REFL_PROPERTY(min_bounds_z)	TAG_REFL_PROPERTY(max_bounds_x)	TAG_REFL_PROPERTY(max_bounds_y)	TAG_REFL_PROPERTY(max_bounds_z)REFL_END
TAG_REFL(s_model_animation_graph_group_definition)	TAG_REFL_TAG_REFERENCE(parent_animation_graph)	TAG_REFL_PROPERTY(inheritance_flags)	TAG_REFL_PROPERTY(private_flags)	TAG_REFL_PROPERTY(animation_codec_pack)	TAG_REFL_TAG_BLOCK(skeleton_nodes)	TAG_REFL_TAG_BLOCK(sound_references|abcdcc)	TAG_REFL_TAG_BLOCK(effect_references|abcdcc)	TAG_REFL_TAG_BLOCK(blend_screens|abcdcc)	TAG_REFL_TAG_BLOCK(animations)	TAG_REFL_TAG_BLOCK(modes|aabbcc)	TAG_REFL_TAG_BLOCK(vehicle_suspension|ccaabb)	TAG_REFL_TAG_BLOCK(object_overlays|ccaabb)	TAG_REFL_TAG_BLOCK(inheritence_list)	TAG_REFL_TAG_BLOCK(weapon_list)	TAG_REFL_DATA_BLOCK(last_import_results)	TAG_REFL_TAG_BLOCK(additional_node_data)REFL_END

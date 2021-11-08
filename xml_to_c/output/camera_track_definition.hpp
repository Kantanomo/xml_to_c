#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: camera_track
		* group_tag : trak
 		* header size : 12
		* *********************************************************************/ 
struct s_camera_track_group_definition
{
PAD(0x4);//0x0
struct s_camera_points_block
{
float position_i;//0x0
float position_j;//0x4
float position_k;//0x8
float orientation_i;//0xC
float orientation_j;//0x10
float orientation_k;//0x14
float orientation_w;//0x18
};
TAG_BLOCK_SIZE_ASSERT(s_camera_points_block,0x1C);
tag_block<s_camera_points_block> camera_points;//0x4
};
TAG_GROUP_SIZE_ASSERT(s_camera_track_group_definition,0xC);
TAG_REFL_TAG_BLOCK_DEF(s_camera_track_group_definition::s_camera_points_block)
TAG_REFL(s_camera_track_group_definition)
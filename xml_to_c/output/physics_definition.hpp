#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: physics
		* group_tag : phys
 		* header size : 116
		* *********************************************************************/ 
struct s_physics_group_definition
{
float radius;//0x0
float moment_scale;//0x4
float mass;//0x8
float center_of_mass_x;//0xC
float center_of_mass_y;//0x10
float center_of_mass_z;//0x14
float density;//0x18
float gravity_scale;//0x1C
float ground_friction;//0x20
float ground_depth;//0x24
float ground_damp_function;//0x28
float normal_k1;//0x2C
float normal_k0;//0x30
PAD(0x4);//0x34
float water_friction;//0x38
float water_depth;//0x3C
float water_density;//0x40
PAD(0x4);//0x44
float air_friction;//0x48
PAD(0x4);//0x4C
float xx_movement;//0x50
float yy_movement;//0x54
float zz_movement;//0x58
struct s_internal_matrix_block
{
float yy+zz;//0x0
float xy;//0x4
float zx;//0x8
float xy;//0xC
float zz+xx;//0x10
float yz;//0x14
float zx;//0x18
float yz;//0x1C
float xx+yy;//0x20
};
TAG_BLOCK_SIZE_ASSERT(s_internal_matrix_block,0x24);
tag_block<s_internal_matrix_block> internal_matrix;//0x5C
struct s_mass_points_block
{
string32 name;//0x0
enum class e_flags : __int32
{
ground_friction = FLAG(0),
water_friction = FLAG(1),
air_friction = FLAG(2),
water_lift = FLAG(3),
air_lift = FLAG(4),
thrust = FLAG(5),
antigrav = FLAG(6),
};
e_flags flags;//0x20
float strength;//0x24
float offset____real;//0x28
float height____real;//0x2C
float damp_fraction;//0x30
float normal_k1;//0x34
float normal_k0;//0x38
};
TAG_BLOCK_SIZE_ASSERT(s_mass_points_block,0x3C);
tag_block<s_mass_points_block> mass_points;//0x64
struct s_mass_points_block
{
string32 name;//0x0
__int16 model_node;//0x20
__int16 powered_mass_point;//0x22
enum class e_flags : __int32
{
metallic = FLAG(0),
};
e_flags flags;//0x24
float relative_mass;//0x28
float mass;//0x2C
float relative_density;//0x30
float density;//0x34
float pos_x;//0x38
float pos_y;//0x3C
float pos_z;//0x40
angle forward_i;//0x44
angle forward_j;//0x48
angle forward_k;//0x4C
angle up_i;//0x50
angle up_j;//0x54
angle up_k;//0x58
enum class e_friction_type : __int32
{
point = 0,
forward = 1,
left = 2,
up = 3,
};
e_friction_type friction_type;//0x5C
float friction_parallel_scale;//0x60
float friction_perependicular_scale;//0x64
float radius;//0x68
PAD(0x14);//0x6C
};
TAG_BLOCK_SIZE_ASSERT(s_mass_points_block,0x80);
tag_block<s_mass_points_block> mass_points;//0x6C
};
TAG_GROUP_SIZE_ASSERT(s_physics_group_definition,0x74);
TAG_REFL_TAG_BLOCK_DEF(s_physics_group_definition::s_internal_matrix_block)
TAG_REFL_TAG_BLOCK_DEF(s_physics_group_definition::s_mass_points_block)
TAG_REFL_TAG_BLOCK_DEF(s_physics_group_definition::s_mass_points_block)
TAG_REFL(s_physics_group_definition)
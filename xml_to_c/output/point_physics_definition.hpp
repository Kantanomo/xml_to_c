#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: point_physics
		* group_tag : pphy
 		* header size : 64
		* *********************************************************************/ 
struct s_point_physics_group_definition
{
enum class e_flags : __int32
{
unused = FLAG(0),
collides_with_structures = FLAG(1),
collides_with_water_surface = FLAG(2),
uses_simple_wind = FLAG(3),
uses_dampened_wind = FLAG(4),
no_gravity = FLAG(5),
};
e_flags flags;//0x0
float unknown;//0x4
float unknown;//0x8
float unknown;//0xC
PAD(0x10);//0x10
float density;//0x20
float air_friction;//0x24
float water_friction;//0x28
float surface_friction;//0x2C
float elasticity;//0x30
PAD(0xC);//0x34
};
TAG_GROUP_SIZE_ASSERT(s_point_physics_group_definition,0x40);
TAG_REFL(s_point_physics_group_definition)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(density)	TAG_REFL_PROPERTY(air_friction)	TAG_REFL_PROPERTY(water_friction)	TAG_REFL_PROPERTY(surface_friction)	TAG_REFL_PROPERTY(elasticity)REFL_END

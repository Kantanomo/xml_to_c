#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: particle_physics
		* group_tag : pmov
 		* header size : 20
		* *********************************************************************/ 
struct s_particle_physics_group_definition
{
tag_reference template;//0x0
enum class e_flags : __int32
{
physics = FLAG(0),
collide_with_structure = FLAG(1),
collide_with_media = FLAG(2),
collide_with_scenery = FLAG(3),
collide_with_vehicles = FLAG(4),
collide_with_bipeds = FLAG(5),
swarm = FLAG(6),
wind = FLAG(7),
};
e_flags flags;//0x8
struct s_movements_block
{
enum class e_type : __int16
{
physics = 0,
collider = 1,
swarm = 2,
wind = 3,
};
e_type type;//0x0
__int16 unknown;//0x2
struct s_parameters_block
{
__int32 parameter_id;//0x0
__int16 unknown;//0x4
__int16 unknown;//0x6
__int16 unknown;//0x8
__int16 unknown;//0xA
PAD(0x8);//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_parameters_block,0x14);
tag_block<s_parameters_block> parameters;//0x4
__int16 unknown;//0xC
__int16 unknown;//0xE
__int32 unknown;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_movements_block,0x14);
tag_block<s_movements_block> movements;//0xC
};
TAG_GROUP_SIZE_ASSERT(s_particle_physics_group_definition,0x14);
TAG_REFL(s_particle_physics_group_definition)
	TAG_REFL_TAG_REFERENCE(template)
	TAG_REFL_PROPERTY(flags)
TAG_REFL_TAG_BLOCK_DEF(s_movements_block)
	TAG_REFL_PROPERTY(type)
	TAG_REFL_PROPERTY(unknown)
TAG_REFL_TAG_BLOCK_DEF(s_parameters_block)
	TAG_REFL_PROPERTY(parameter_id)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
REFL_END
	TAG_REFL_TAG_BLOCK(parameters)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
REFL_END
	TAG_REFL_TAG_BLOCK(movements)
REFL_END
#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: style
		* group_tag : styl
 		* header size : 92
		* *********************************************************************/ 
struct s_style_group_definition
{
string32 name;//0x0
enum class e_combat_status_decay_options : __int16
{
latch_at_idle = 0,
latch_at_alert = 1,
latch_at_combat = 2,
};
e_combat_status_decay_options combat_status_decay_options;//0x20
__int16 unknown;//0x22
enum class e_attitude : __int16
{
normal = 0,
timid = 1,
aggressive = 2,
};
e_attitude attitude;//0x24
__int16 unknown;//0x26
enum class e_engage_attitude : __int8
{
default = 0,
normal = 1,
timid = 2,
aggressive = 3,
};
e_engage_attitude engage_attitude;//0x28
enum class e_evasion_attitude : __int8
{
default = 0,
normal = 1,
timid = 2,
aggressive = 3,
};
e_evasion_attitude evasion_attitude;//0x29
enum class e_cover_attitude : __int8
{
default = 0,
normal = 1,
timid = 2,
aggressive = 3,
};
e_cover_attitude cover_attitude;//0x2A
enum class e_search_attitude : __int8
{
default = 0,
normal = 1,
timid = 2,
aggressive = 3,
};
e_search_attitude search_attitude;//0x2B
enum class e_presearch_attitude : __int8
{
default = 0,
normal = 1,
timid = 2,
aggressive = 3,
};
e_presearch_attitude presearch_attitude;//0x2C
enum class e_retreat_attitude : __int8
{
default = 0,
normal = 1,
timid = 2,
aggressive = 3,
};
e_retreat_attitude retreat_attitude;//0x2D
enum class e_charge_attitude : __int8
{
default = 0,
normal = 1,
timid = 2,
aggressive = 3,
};
e_charge_attitude charge_attitude;//0x2E
enum class e_ready_attitude : __int8
{
default = 0,
normal = 1,
timid = 2,
aggressive = 3,
};
e_ready_attitude ready_attitude;//0x2F
enum class e_idle_attitude : __int8
{
default = 0,
normal = 1,
timid = 2,
aggressive = 3,
};
e_idle_attitude idle_attitude;//0x30
enum class e_weapon_attitude : __int8
{
default = 0,
normal = 1,
timid = 2,
aggressive = 3,
};
e_weapon_attitude weapon_attitude;//0x31
enum class e_swarm_attitude : __int8
{
default = 0,
normal = 1,
timid = 2,
aggressive = 3,
};
e_swarm_attitude swarm_attitude;//0x32
__int8 unknown;//0x33
PAD(0x28);//0x34
};
TAG_GROUP_SIZE_ASSERT(s_style_group_definition,0x5C);
TAG_REFL(s_style_group_definition)
	TAG_REFL_STRING_32(name)
	TAG_REFL_PROPERTY(combat_status_decay_options)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(attitude)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(engage_attitude)
	TAG_REFL_PROPERTY(evasion_attitude)
	TAG_REFL_PROPERTY(cover_attitude)
	TAG_REFL_PROPERTY(search_attitude)
	TAG_REFL_PROPERTY(presearch_attitude)
	TAG_REFL_PROPERTY(retreat_attitude)
	TAG_REFL_PROPERTY(charge_attitude)
	TAG_REFL_PROPERTY(ready_attitude)
	TAG_REFL_PROPERTY(idle_attitude)
	TAG_REFL_PROPERTY(weapon_attitude)
	TAG_REFL_PROPERTY(swarm_attitude)
	TAG_REFL_PROPERTY(unknown)
REFL_END
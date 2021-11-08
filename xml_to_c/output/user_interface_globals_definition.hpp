#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: user_interface_globals
		* group_tag : wgtz
 		* header size : 32
		* *********************************************************************/ 
struct s_user_interface_globals_group_definition
{
tag_reference globals;//0x0
struct s_collection_block
{
tag_reference game_shell;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_collection_block,0x8);
tag_block<s_collection_block> collection;//0x8
tag_reference gametype_collection;//0x10
tag_reference unicode_strings;//0x18
};
TAG_GROUP_SIZE_ASSERT(s_user_interface_globals_group_definition,0x20);
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_globals_group_definition::s_collection_block)	TAG_REFL_TAG_REFERENCE(game_shell)REFL_END
TAG_REFL(s_user_interface_globals_group_definition)	TAG_REFL_TAG_REFERENCE(globals)	TAG_REFL_TAG_BLOCK(collection)	TAG_REFL_TAG_REFERENCE(gametype_collection)	TAG_REFL_TAG_REFERENCE(unicode_strings)REFL_END

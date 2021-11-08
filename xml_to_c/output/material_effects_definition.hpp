#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: material_effects
		* group_tag : foot
 		* header size : 8
		* *********************************************************************/ 
struct s_material_effects_group_definition
{
struct s_effects_block
{
struct s_old_materials_block
{
tag_reference effect;//0x0
tag_reference sound;//0x8
string_id material_name;//0x10
__int16 global_material_index;//0x14
enum class e_sweetener_mode : __int8
{
sweetener_default = 0,
sweetener_enabled = 1,
sweetener_disabled = 2,
};
e_sweetener_mode sweetener_mode;//0x16
__int8 unknown;//0x17
};
TAG_BLOCK_SIZE_ASSERT(s_old_materials_block,0x18);
tag_block<s_old_materials_block> old_materials;//0x0
struct s_sounds_block
{
tag_reference tag;//0x0
tag_reference secondary_tag;//0x8
string_id material_name;//0x10
__int16 global_material_index;//0x14
enum class e_sweetener_mode : __int8
{
sweetener_default = 0,
sweetener_enabled = 1,
sweetener_disabled = 2,
};
e_sweetener_mode sweetener_mode;//0x16
__int8 unknown;//0x17
};
TAG_BLOCK_SIZE_ASSERT(s_sounds_block,0x18);
tag_block<s_sounds_block> sounds;//0x8
struct s_effects_block
{
tag_reference tag;//0x0
tag_reference secondary_tag;//0x8
string_id material_name;//0x10
__int16 global_material_index;//0x14
enum class e_sweetener_mode : __int8
{
sweetener_default = 0,
sweetener_enabled = 1,
sweetener_disabled = 2,
};
e_sweetener_mode sweetener_mode;//0x16
__int8 unknown;//0x17
};
TAG_BLOCK_SIZE_ASSERT(s_effects_block,0x18);
tag_block<s_effects_block> effects;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_effects_block,0x18);
tag_block<s_effects_block> effects;//0x0
};
TAG_GROUP_SIZE_ASSERT(s_material_effects_group_definition,0x8);
TAG_REFL_TAG_BLOCK_DEF(s_material_effects_group_definition::s_effects_block::s_old_materials_block)	TAG_REFL_TAG_REFERENCE(effect)	TAG_REFL_TAG_REFERENCE(sound)	TAG_REFL_STRING_ID(material_name)	TAG_REFL_PROPERTY(global_material_index)	TAG_REFL_PROPERTY(sweetener_mode)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_material_effects_group_definition::s_effects_block::s_sounds_block)	TAG_REFL_TAG_REFERENCE(tag)	TAG_REFL_TAG_REFERENCE(secondary_tag)	TAG_REFL_STRING_ID(material_name)	TAG_REFL_PROPERTY(global_material_index)	TAG_REFL_PROPERTY(sweetener_mode)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_material_effects_group_definition::s_effects_block::s_effects_block)	TAG_REFL_TAG_REFERENCE(tag)	TAG_REFL_TAG_REFERENCE(secondary_tag)	TAG_REFL_STRING_ID(material_name)	TAG_REFL_PROPERTY(global_material_index)	TAG_REFL_PROPERTY(sweetener_mode)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_material_effects_group_definition::s_effects_block)	TAG_REFL_TAG_BLOCK(old_materials)	TAG_REFL_TAG_BLOCK(sounds)	TAG_REFL_TAG_BLOCK(effects)REFL_END
TAG_REFL(s_material_effects_group_definition)	TAG_REFL_TAG_BLOCK(effects)REFL_END

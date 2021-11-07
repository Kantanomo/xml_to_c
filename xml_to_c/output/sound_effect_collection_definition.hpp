#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: sound_effect_collection
		* group_tag : sfx+
 		* header size : 8
		* *********************************************************************/ 
struct s_sound_effect_collection_group_definition
{
struct s_unknown3_block
{
string_id unknown;//0x0
PAD(0x14);//0x4
struct s_unknown8_block
{
PAD(0x8);//0x0
float unknown;//0x8
float unknown;//0xC
PAD(0x8);//0x10
float unknown;//0x18
float unknown;//0x1C
PAD(0x8);//0x20
float unknown;//0x28
float unknown;//0x2C
PAD(0x8);//0x30
float unknown;//0x38
float unknown;//0x3C
PAD(0x8);//0x40
};
TAG_BLOCK_SIZE_ASSERT(s_unknown8_block,0x48);
tag_block<s_unknown8_block> unknown8;//0x18
struct s_unknown24_block
{
PAD(0x10);//0x0
float unknown;//0x10
float unknown;//0x14
float unknown;//0x18
float unknown;//0x1C
float unknown;//0x20
float unknown;//0x24
PAD(0x8);//0x28
};
TAG_BLOCK_SIZE_ASSERT(s_unknown24_block,0x30);
tag_block<s_unknown24_block> unknown24;//0x20
struct s_unknown34_block
{
PAD(0x10);//0x0
float unknown;//0x10
float unknown;//0x14
float unknown;//0x18
float unknown;//0x1C
float unknown;//0x20
float unknown;//0x24
PAD(0x8);//0x28
float unknown;//0x30
float unknown;//0x34
PAD(0x8);//0x38
};
TAG_BLOCK_SIZE_ASSERT(s_unknown34_block,0x40);
tag_block<s_unknown34_block> unknown34;//0x28
struct s_unknown47_block
{
tag_reference unknown;//0x0
struct s_unknown50_block
{
tag_reference unknown;//0x0
float unknown;//0x8
PAD(0x4);//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_unknown50_block,0x10);
tag_block<s_unknown50_block> unknown50;//0x8
PAD(0x10);//0x10
struct s_unknown57_block
{
struct s_unknown58_block
{
struct s_unknown59_block
{
PAD(0x4);//0x0
struct s_unknown61_block
{
unsigned __int8 unknown;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_unknown61_block,0x1);
tag_block<s_unknown61_block> unknown61;//0x4
float unknown;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_unknown59_block,0x10);
tag_block<s_unknown59_block> unknown59;//0x0
struct s_unknown66_block
{
float unknown;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_unknown66_block,0x4);
tag_block<s_unknown66_block> unknown66;//0x8
struct s_unknown69_block
{
PAD(0x4);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_unknown69_block,0x4);
tag_block<s_unknown69_block> unknown69;//0x10
PAD(0x4);//0x18
};
TAG_BLOCK_SIZE_ASSERT(s_unknown58_block,0x1C);
tag_block<s_unknown58_block> unknown58;//0x0
struct s_unknown74_block
{
PAD(0x4);//0x0
struct s_unknown76_block
{
unsigned __int8 unknown;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_unknown76_block,0x1);
tag_block<s_unknown76_block> unknown76;//0x4
float unknown;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_unknown74_block,0x10);
tag_block<s_unknown74_block> unknown74;//0x8
PAD(0x4);//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_unknown57_block,0x14);
tag_block<s_unknown57_block> unknown57;//0x20
};
TAG_BLOCK_SIZE_ASSERT(s_unknown47_block,0x28);
tag_block<s_unknown47_block> unknown47;//0x30
};
TAG_BLOCK_SIZE_ASSERT(s_unknown3_block,0x38);
tag_block<s_unknown3_block> unknown3;//0x0
};
TAG_GROUP_SIZE_ASSERT(s_sound_effect_collection_group_definition,0x8);
TAG_REFL(s_sound_effect_collection_group_definition)
TAG_REFL_TAG_BLOCK_DEF(s_unknown3_block)
	TAG_REFL_STRING_ID(unknown)
TAG_REFL_TAG_BLOCK_DEF(s_unknown8_block)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
REFL_END
	TAG_REFL_TAG_BLOCK(unknown8)
TAG_REFL_TAG_BLOCK_DEF(s_unknown24_block)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
REFL_END
	TAG_REFL_TAG_BLOCK(unknown24)
TAG_REFL_TAG_BLOCK_DEF(s_unknown34_block)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
REFL_END
	TAG_REFL_TAG_BLOCK(unknown34)
TAG_REFL_TAG_BLOCK_DEF(s_unknown47_block)
	TAG_REFL_TAG_REFERENCE(unknown)
TAG_REFL_TAG_BLOCK_DEF(s_unknown50_block)
	TAG_REFL_TAG_REFERENCE(unknown)
	TAG_REFL_PROPERTY(unknown)
REFL_END
	TAG_REFL_TAG_BLOCK(unknown50)
TAG_REFL_TAG_BLOCK_DEF(s_unknown57_block)
TAG_REFL_TAG_BLOCK_DEF(s_unknown58_block)
TAG_REFL_TAG_BLOCK_DEF(s_unknown59_block)
TAG_REFL_TAG_BLOCK_DEF(s_unknown61_block)
	TAG_REFL_PROPERTY(unknown)
REFL_END
	TAG_REFL_TAG_BLOCK(unknown61)
	TAG_REFL_PROPERTY(unknown)
REFL_END
	TAG_REFL_TAG_BLOCK(unknown59)
TAG_REFL_TAG_BLOCK_DEF(s_unknown66_block)
	TAG_REFL_PROPERTY(unknown)
REFL_END
	TAG_REFL_TAG_BLOCK(unknown66)
TAG_REFL_TAG_BLOCK_DEF(s_unknown69_block)
REFL_END
	TAG_REFL_TAG_BLOCK(unknown69)
REFL_END
	TAG_REFL_TAG_BLOCK(unknown58)
TAG_REFL_TAG_BLOCK_DEF(s_unknown74_block)
TAG_REFL_TAG_BLOCK_DEF(s_unknown76_block)
	TAG_REFL_PROPERTY(unknown)
REFL_END
	TAG_REFL_TAG_BLOCK(unknown76)
	TAG_REFL_PROPERTY(unknown)
REFL_END
	TAG_REFL_TAG_BLOCK(unknown74)
REFL_END
	TAG_REFL_TAG_BLOCK(unknown57)
REFL_END
	TAG_REFL_TAG_BLOCK(unknown47)
REFL_END
	TAG_REFL_TAG_BLOCK(unknown3)
REFL_END
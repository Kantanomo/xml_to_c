#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: shader_pass
		* group_tag : spas
 		* header size : 36
		* *********************************************************************/ 
struct s_shader_pass_group_definition
{
PAD(0x1C);//0x0
struct s_postprocess_definitions_block
{
struct s_implementations_block
{
__int16 block_index_data;//0x0
__int16 block_index_data;//0x2
__int32 block_index_data;//0x4
__int32 block_index_data;//0x8
__int32 block_index_data;//0xC
__int32 block_index_data;//0x10
__int32 block_index_data;//0x14
__int32 block_index_data;//0x18
__int32 block_index_data;//0x1C
__int32 block_index_data;//0x20
__int32 block_index_data;//0x24
__int32 block_index_data;//0x28
__int32 block_index_data;//0x2C
__int32 block_index_data;//0x30
__int32 block_index_data;//0x34
__int32 block_index_data;//0x38
__int32 block_index_data;//0x3C
float unknown;//0x40
__int32 block_index_data;//0x44
PAD(0x4);//0x48
__int32 block_index_data;//0x4C
__int32 block_index_data;//0x50
__int32 block_index_data;//0x54
__int32 block_index_data;//0x58
__int32 block_index_data;//0x5C
float unknown;//0x60
float unknown;//0x64
__int32 block_index_data;//0x68
__int32 block_index_data;//0x6C
__int32 block_index_data;//0x70
__int32 block_index_data;//0x74
__int32 block_index_data;//0x78
__int32 block_index_data;//0x7C
__int32 block_index_data;//0x80
__int32 block_index_data;//0x84
__int32 block_index_data;//0x88
__int32 block_index_data;//0x8C
__int32 block_index_data;//0x90
__int32 block_index_data;//0x94
__int32 block_index_data;//0x98
__int32 block_index_data;//0x9C
__int32 block_index_data;//0xA0
__int32 block_index_data;//0xA4
__int32 block_index_data;//0xA8
__int32 block_index_data;//0xAC
__int32 block_index_data;//0xB0
__int32 block_index_data;//0xB4
__int32 block_index_data;//0xB8
__int32 block_index_data;//0xBC
__int32 block_index_data;//0xC0
__int32 block_index_data;//0xC4
__int32 block_index_data;//0xC8
__int32 block_index_data;//0xCC
__int32 block_index_data;//0xD0
__int32 block_index_data;//0xD4
__int32 block_index_data;//0xD8
__int32 block_index_data;//0xDC
__int32 block_index_data;//0xE0
PAD(0x10);//0xE4
__int32 block_index_data;//0xF4
__int32 block_index_data;//0xF8
tag_reference vertex_shader;//0xFC
__int32 block_index_data;//0x104
__int32 block_index_data;//0x108
__int32 block_index_data;//0x10C
__int32 block_index_data;//0x110
__int32 block_index_data;//0x114
__int32 block_index_data;//0x118
__int16 block_index_data;//0x11C
__int16 block_index_data;//0x11E
__int16 block_index_data;//0x120
__int16 block_index_data;//0x122
__int32 block_index_data;//0x124
__int32 block_index_data;//0x128
__int32 block_index_data;//0x12C
PAD(0x2);//0x130
struct s_pixel_shader_block
{
__int32 pixel_shader_handleruntime;//0x0
__int32 pixel_shader_handleruntime;//0x4
__int32 pixel_shader_handleruntime;//0x8
struct s_constant_register_values_block
{
PAD(0x4);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_constant_register_values_block,0x4);
tag_block<s_constant_register_values_block> constant_register_values;//0xC
data_block compiled_shader;//0x14
data_block compiled_shader;//0x1C
data_block compiled_shader;//0x24
};
TAG_BLOCK_SIZE_ASSERT(s_pixel_shader_block,0x2C);
tag_block<s_pixel_shader_block> pixel_shader;//0x132
struct s_pixel_shader_switch_extern_map_block
{
unsigned __int8 switch_parameter;//0x0
unsigned __int8 case_scalar;//0x1
};
TAG_BLOCK_SIZE_ASSERT(s_pixel_shader_switch_extern_map_block,0x2);
tag_block<s_pixel_shader_switch_extern_map_block> pixel_shader_switch_extern_map;//0x13A
struct s_pixel_shader_index_block_block
{
unsigned __int8 pixel_shader_index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_pixel_shader_index_block_block,0x1);
tag_block<s_pixel_shader_index_block_block> pixel_shader_index_block;//0x142
};
TAG_BLOCK_SIZE_ASSERT(s_implementations_block,0x14A);
tag_block<s_implementations_block> implementations;//0x0
struct s_textures_block
{
unsigned __int8 bitmap_parameter_index;//0x0
unsigned __int8 bitmap_extern_index;//0x1
unsigned __int8 texture_stage_index;//0x2
unsigned __int8 flags;//0x3
};
TAG_BLOCK_SIZE_ASSERT(s_textures_block,0x4);
tag_block<s_textures_block> textures;//0x8
struct s_render_states_block
{
unsigned __int8 state_index;//0x0
unsigned __int8 state_value;//0x1
PAD(0x3);//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_render_states_block,0x5);
tag_block<s_render_states_block> render_states;//0x10
struct s_texture_states_block
{
__int32 unknown;//0x0
__int32 unknown;//0x4
__int32 unknown;//0x8
PAD(0x4);//0xC
__int32 unknown;//0x10
PAD(0x4);//0x14
};
TAG_BLOCK_SIZE_ASSERT(s_texture_states_block,0x18);
tag_block<s_texture_states_block> texture_states;//0x18
struct s_pixel_shader_fragments_block
{
__int16 switch_parameter_index;//0x0
__int16 permutation_index;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_pixel_shader_fragments_block,0x4);
tag_block<s_pixel_shader_fragments_block> pixel_shader_fragments;//0x20
struct s_pixel_shader_permutations_block
{
__int16 enum_index;//0x0
__int16 flags;//0x2
__int16 combiner;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_pixel_shader_permutations_block,0x6);
tag_block<s_pixel_shader_permutations_block> pixel_shader_permutations;//0x28
struct s_pixel_shader_combiners_block
{
PAD(0x10);//0x0
unsigned __int8 unknown;//0x10
unsigned __int8 unknown;//0x11
unsigned __int8 unknown;//0x12
unsigned __int8 unknown;//0x13
unsigned __int8 unknown;//0x14
unsigned __int8 unknown;//0x15
unsigned __int8 unknown;//0x16
unsigned __int8 unknown;//0x17
unsigned __int8 unknown;//0x18
unsigned __int8 unknown;//0x19
unsigned __int8 unknown;//0x1A
unsigned __int8 unknown;//0x1B
unsigned __int8 unknown;//0x1C
unsigned __int8 unknown;//0x1D
unsigned __int8 unknown;//0x1E
unsigned __int8 unknown;//0x1F
unsigned __int8 unknown;//0x20
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-1);//0x21
};
TAG_BLOCK_SIZE_ASSERT(s_pixel_shader_combiners_block,0x20);
tag_block<s_pixel_shader_combiners_block> pixel_shader_combiners;//0x30
struct s_externs_block
{
__int32 extern_index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_externs_block,0x4);
tag_block<s_externs_block> externs;//0x38
PAD(0x18);//0x40
};
TAG_BLOCK_SIZE_ASSERT(s_postprocess_definitions_block,0x58);
tag_block<s_postprocess_definitions_block> postprocess_definitions;//0x1C
};
TAG_GROUP_SIZE_ASSERT(s_shader_pass_group_definition,0x24);
TAG_REFL_TAG_BLOCK_DEF(s_shader_pass_group_definition::s_postprocess_definitions_group_definition::s_implementations_group_definition::s_pixel_shader_group_definition::s_constant_register_values_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_pass_group_definition::s_postprocess_definitions_group_definition::s_implementations_group_definition::s_pixel_shader_block)	TAG_REFL_PROPERTY(pixel_shader_handleruntime)	TAG_REFL_PROPERTY(pixel_shader_handleruntime)	TAG_REFL_PROPERTY(pixel_shader_handleruntime)	TAG_REFL_TAG_BLOCK(constant_register_values)	TAG_REFL_DATA_BLOCK(compiled_shader)	TAG_REFL_DATA_BLOCK(compiled_shader)	TAG_REFL_DATA_BLOCK(compiled_shader)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_pass_group_definition::s_postprocess_definitions_group_definition::s_implementations_group_definition::s_pixel_shader_switch_extern_map_block)	TAG_REFL_PROPERTY(switch_parameter)	TAG_REFL_PROPERTY(case_scalar)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_pass_group_definition::s_postprocess_definitions_group_definition::s_implementations_group_definition::s_pixel_shader_index_block_block)	TAG_REFL_PROPERTY(pixel_shader_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_pass_group_definition::s_postprocess_definitions_group_definition::s_implementations_block)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_TAG_REFERENCE(vertex_shader)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_PROPERTY(block_index_data)	TAG_REFL_TAG_BLOCK(pixel_shader)	TAG_REFL_TAG_BLOCK(pixel_shader_switch_extern_map)	TAG_REFL_TAG_BLOCK(pixel_shader_index_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_pass_group_definition::s_postprocess_definitions_group_definition::s_textures_block)	TAG_REFL_PROPERTY(bitmap_parameter_index)	TAG_REFL_PROPERTY(bitmap_extern_index)	TAG_REFL_PROPERTY(texture_stage_index)	TAG_REFL_PROPERTY(flags)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_pass_group_definition::s_postprocess_definitions_group_definition::s_render_states_block)	TAG_REFL_PROPERTY(state_index)	TAG_REFL_PROPERTY(state_value)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_pass_group_definition::s_postprocess_definitions_group_definition::s_texture_states_block)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_pass_group_definition::s_postprocess_definitions_group_definition::s_pixel_shader_fragments_block)	TAG_REFL_PROPERTY(switch_parameter_index)	TAG_REFL_PROPERTY(permutation_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_pass_group_definition::s_postprocess_definitions_group_definition::s_pixel_shader_permutations_block)	TAG_REFL_PROPERTY(enum_index)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(combiner)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_pass_group_definition::s_postprocess_definitions_group_definition::s_pixel_shader_combiners_block)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_pass_group_definition::s_postprocess_definitions_group_definition::s_externs_block)	TAG_REFL_PROPERTY(extern_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_pass_group_definition::s_postprocess_definitions_block)	TAG_REFL_TAG_BLOCK(implementations)	TAG_REFL_TAG_BLOCK(textures)	TAG_REFL_TAG_BLOCK(render_states)	TAG_REFL_TAG_BLOCK(texture_states)	TAG_REFL_TAG_BLOCK(pixel_shader_fragments)	TAG_REFL_TAG_BLOCK(pixel_shader_permutations)	TAG_REFL_TAG_BLOCK(pixel_shader_combiners)	TAG_REFL_TAG_BLOCK(externs)REFL_END
TAG_REFL(s_shader_pass_group_definition)	TAG_REFL_TAG_BLOCK(postprocess_definitions)REFL_END

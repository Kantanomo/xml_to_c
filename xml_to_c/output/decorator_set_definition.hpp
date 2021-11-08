#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: decorator_set
		* group_tag : DECR
 		* header size : 108
		* *********************************************************************/ 
struct s_decorator_set_group_definition
{
struct s_shaders_block
{
tag_reference shader;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_shaders_block,0x8);
tag_block<s_shaders_block> shaders;//0x0
float lighting_min_scale;//0x8
float lighting_max_scale;//0xC
struct s_classes_block
{
string_id name;//0x0
enum class e_type : __int32
{
model = 0,
floating_decal = 1,
projected_decal = 2,
screen_facing_quad = 3,
axis_rotating_quad = 4,
cross_quad = 5,
};
e_type type;//0x4
float scale;//0x8
struct s_permutations_block
{
string_id name;//0x0
__int16 shader_index;//0x4
enum class e_flags : __int8
{
align_to_normal = FLAG(0),
only_on_ground = FLAG(1),
upright = FLAG(2),
};
e_flags flags;//0x6
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-1);//0x7
enum class e_fade_distance : __int8
{
close = 0,
medium = 1,
far = 2,
};
e_fade_distance fade_distance;//0x6
PAD(0x1);//0x7
__int16 index;//0x8
__int16 distribution_weight;//0xA
float scale;//0xC
float to;//0x10
unsigned __int8 tint_1_r;//0x14
unsigned __int8 tint_1_g;//0x15
unsigned __int8 tint_1_b;//0x16
PAD(0x1);//0x17
unsigned __int8 tint_2_r;//0x18
unsigned __int8 tint_2_g;//0x19
unsigned __int8 tint_2_b;//0x1A
PAD(0x1);//0x1B
float base_map_tint_percentage;//0x1C
float lightmap_tint_percentage;//0x20
float wind_scale;//0x24
};
TAG_BLOCK_SIZE_ASSERT(s_permutations_block,0x28);
tag_block<s_permutations_block> permutations;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_classes_block,0x14);
tag_block<s_classes_block> classes;//0x10
struct s_models_block
{
string_id model_name;//0x0
__int16 index_start;//0x4
__int16 index_count;//0x6
};
TAG_BLOCK_SIZE_ASSERT(s_models_block,0x8);
tag_block<s_models_block> models;//0x18
struct s_raw_vertices_block
{
float x;//0x0
float y;//0x4
float z;//0x8
angle normal_i;//0xC
angle normal_j;//0x10
angle normal_k;//0x14
angle tangent_i;//0x18
angle tangent_j;//0x1C
angle tangent_k;//0x20
angle binormal_i;//0x24
angle binormal_j;//0x28
angle binormal_k;//0x2C
float u;//0x30
float v;//0x34
};
TAG_BLOCK_SIZE_ASSERT(s_raw_vertices_block,0x38);
tag_block<s_raw_vertices_block> raw_vertices;//0x20
struct s_indices_block
{
__int16 index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_indices_block,0x2);
tag_block<s_indices_block> indices;//0x28
struct s_cached_data_block
{
};
TAG_BLOCK_SIZE_ASSERT(s_cached_data_block,0x0);
tag_block<s_cached_data_block> cached_data;//0x30
unsigned __int32 block_offset;//0x38
unsigned __int32 block_size;//0x3C
unsigned __int32 section_data_size;//0x40
unsigned __int32 resource_data_size;//0x44
struct s_resources_block
{
enum class e_type : __int32
{
};
e_type type;//0x0
__int16 primary_locator;//0x4
__int16 secondary_locator;//0x6
unsigned __int32 data_size;//0x8
unsigned __int32 data_offset;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_resources_block,0x10);
tag_block<s_resources_block> resources;//0x48
__int16 owner_tag_section_offset;//0x50
PAD(0x1A);//0x52
};
TAG_GROUP_SIZE_ASSERT(s_decorator_set_group_definition,0x6C);
TAG_REFL_TAG_BLOCK_DEF(s_decorator_set_group_definition::s_shaders_block)
TAG_REFL_TAG_BLOCK_DEF(s_decorator_set_group_definition::s_classes_block::s_permutations_block)
TAG_REFL_TAG_BLOCK_DEF(s_decorator_set_group_definition::s_classes_block)
TAG_REFL_TAG_BLOCK_DEF(s_decorator_set_group_definition::s_models_block)
TAG_REFL_TAG_BLOCK_DEF(s_decorator_set_group_definition::s_raw_vertices_block)
TAG_REFL_TAG_BLOCK_DEF(s_decorator_set_group_definition::s_indices_block)
TAG_REFL_TAG_BLOCK_DEF(s_decorator_set_group_definition::s_cached_data_block)
TAG_REFL_TAG_BLOCK_DEF(s_decorator_set_group_definition::s_resources_block)
TAG_REFL(s_decorator_set_group_definition)
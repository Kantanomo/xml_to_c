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
TAG_REFL_TAG_BLOCK_DEF(s_decorator_set_group_definition::s_shaders_block)	TAG_REFL_TAG_REFERENCE(shader)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_decorator_set_group_definition::s_classes_group_definition::s_permutations_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(shader_index)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(fade_distance)	TAG_REFL_PROPERTY(index)	TAG_REFL_PROPERTY(distribution_weight)	TAG_REFL_PROPERTY(scale)	TAG_REFL_PROPERTY(to)	TAG_REFL_PROPERTY(tint_1_r)	TAG_REFL_PROPERTY(tint_1_g)	TAG_REFL_PROPERTY(tint_1_b)	TAG_REFL_PROPERTY(tint_2_r)	TAG_REFL_PROPERTY(tint_2_g)	TAG_REFL_PROPERTY(tint_2_b)	TAG_REFL_PROPERTY(base_map_tint_percentage)	TAG_REFL_PROPERTY(lightmap_tint_percentage)	TAG_REFL_PROPERTY(wind_scale)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_decorator_set_group_definition::s_classes_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(scale)	TAG_REFL_TAG_BLOCK(permutations)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_decorator_set_group_definition::s_models_block)	TAG_REFL_STRING_ID(model_name)	TAG_REFL_PROPERTY(index_start)	TAG_REFL_PROPERTY(index_count)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_decorator_set_group_definition::s_raw_vertices_block)	TAG_REFL_PROPERTY(x)	TAG_REFL_PROPERTY(y)	TAG_REFL_PROPERTY(z)	TAG_REFL_ANGLE(normal_i)	TAG_REFL_ANGLE(normal_j)	TAG_REFL_ANGLE(normal_k)	TAG_REFL_ANGLE(tangent_i)	TAG_REFL_ANGLE(tangent_j)	TAG_REFL_ANGLE(tangent_k)	TAG_REFL_ANGLE(binormal_i)	TAG_REFL_ANGLE(binormal_j)	TAG_REFL_ANGLE(binormal_k)	TAG_REFL_PROPERTY(u)	TAG_REFL_PROPERTY(v)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_decorator_set_group_definition::s_indices_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_decorator_set_group_definition::s_cached_data_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_decorator_set_group_definition::s_resources_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(primary_locator)	TAG_REFL_PROPERTY(secondary_locator)	TAG_REFL_PROPERTY(data_size)	TAG_REFL_PROPERTY(data_offset)REFL_END
TAG_REFL(s_decorator_set_group_definition)	TAG_REFL_TAG_BLOCK(shaders)	TAG_REFL_PROPERTY(lighting_min_scale)	TAG_REFL_PROPERTY(lighting_max_scale)	TAG_REFL_TAG_BLOCK(classes)	TAG_REFL_TAG_BLOCK(models)	TAG_REFL_TAG_BLOCK(raw_vertices)	TAG_REFL_TAG_BLOCK(indices)	TAG_REFL_TAG_BLOCK(cached_data)	TAG_REFL_PROPERTY(block_offset)	TAG_REFL_PROPERTY(block_size)	TAG_REFL_PROPERTY(section_data_size)	TAG_REFL_PROPERTY(resource_data_size)	TAG_REFL_TAG_BLOCK(resources)	TAG_REFL_PROPERTY(owner_tag_section_offset)REFL_END

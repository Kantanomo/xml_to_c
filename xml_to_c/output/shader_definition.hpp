#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: shader
		* group_tag : shad
 		* header size : 84
		* *********************************************************************/ 
struct s_shader_group_definition
{
tag_reference template;//0x0
string_id material_name;//0x8
struct s_runtime_properties_block
{
tag_reference diffuse_map;//0x0
tag_reference lightmap_emissive_map;//0x8
real_color_rgb lightmap_emissive_color;//0x10
float lightmap_emissive_power;//0x1C
float lightmap_resolution_scale;//0x20
float lightmap_half_life;//0x24
float lightmap_diffuse_scale;//0x28
tag_reference alpha_test_map;//0x2C
tag_reference translucent_map;//0x34
real_color_rgb lightmap_transparent_color;//0x3C
float lightmap_transparent_alpha;//0x48
float lightmap_foliage_scale;//0x4C
};
TAG_BLOCK_SIZE_ASSERT(s_runtime_properties_block,0x50);
tag_block<s_runtime_properties_block> runtime_properties;//0xC
__int16 type;//0x14
enum class e_flags : __int16
{
water = FLAG(0),
sort_first = FLAG(1),
no_active_camo = FLAG(2),
};
e_flags flags;//0x16
PAD(0x8);//0x18
struct s_postprocess_definition_block
{
tag_referenceN shader_template;//0x0
struct s_bitmaps_block
{
tag_referenceN bitmap_group;//0x0
__int32 bitmap_index;//0x4
float log_bitmap_dimension;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_bitmaps_block,0xC);
tag_block<s_bitmaps_block> bitmaps;//0x4
struct s_pixel_constants_block
{
PAD(0x4);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_pixel_constants_block,0x4);
tag_block<s_pixel_constants_block> pixel_constants;//0xC
struct s_vertex_constants_block
{
float x;//0x0
float y;//0x4
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-8);//0x8
float z;//0x0
PAD(0x8);//0x4
float w;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_vertex_constants_block,0x10);
tag_block<s_vertex_constants_block> vertex_constants;//0x14
struct s_levels_of_detail_block
{
__int32 available_layer_flags;//0x0
__int16 block_index_data;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_levels_of_detail_block,0x6);
tag_block<s_levels_of_detail_block> levels_of_detail;//0x1C
struct s_layers_block
{
__int16 block_index_data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_layers_block,0x2);
tag_block<s_layers_block> layers;//0x24
struct s_passes_block
{
__int16 block_index_data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_passes_block,0x2);
tag_block<s_passes_block> passes;//0x2C
struct s_implementations_block
{
__int16 bitmap_transforms_block_index_data;//0x0
__int16 render_states_block_index_data;//0x2
__int16 texture_states_block_index_data;//0x4
__int16 pixel_constants_block_index_data;//0x6
__int16 vertex_constants_block_index_data;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_implementations_block,0xA);
tag_block<s_implementations_block> implementations;//0x34
struct s_overlays_block
{
string_id input_name;//0x0
string_id range_name;//0x4
float time_period_in_seconds;//0x8
data_block function;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_overlays_block,0x14);
tag_block<s_overlays_block> overlays;//0x3C
struct s_overlay_references_block
{
__int16 overlay_index;//0x0
__int16 transform_index;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_overlay_references_block,0x4);
tag_block<s_overlay_references_block> overlay_references;//0x44
struct s_animated_parameters_block
{
__int16 block_index_data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_animated_parameters_block,0x2);
tag_block<s_animated_parameters_block> animated_parameters;//0x4C
struct s_animated_parameter_references_block
{
__int8 unknown;//0x0
__int8 unknown;//0x1
__int8 unknown;//0x2
__int8 parameter_index;//0x3
};
TAG_BLOCK_SIZE_ASSERT(s_animated_parameter_references_block,0x4);
tag_block<s_animated_parameter_references_block> animated_parameter_references;//0x54
struct s_bitmap_properties_block
{
__int16 bitmap_index;//0x0
__int16 animated_parameter_index;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_bitmap_properties_block,0x4);
tag_block<s_bitmap_properties_block> bitmap_properties;//0x5C
struct s_color_properties_block
{
real_color_rgb color;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_color_properties_block,0xC);
tag_block<s_color_properties_block> color_properties;//0x64
struct s_value_properties_block
{
float value;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_value_properties_block,0x4);
tag_block<s_value_properties_block> value_properties;//0x6C
PAD(0x8);//0x74
};
TAG_BLOCK_SIZE_ASSERT(s_postprocess_definition_block,0x7C);
tag_block<s_postprocess_definition_block> postprocess_definition;//0x20
PAD(0x4);//0x28
struct s_predicted_resources_block
{
__int16 type;//0x0
__int16 resource_index;//0x2
tag_referenceN tag_index;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_predicted_resources_block,0x8);
tag_block<s_predicted_resources_block> predicted_resources;//0x2C
tag_reference light_response;//0x34
enum class e_shader_lod_bias : __int16
{
none = 0,
NUM_4x_size = 1,
NUM_2x_size = 2,
NUM_12_size = 3,
NUM_14_size = 4,
never = 5,
cinematic = 6,
};
e_shader_lod_bias shader_lod_bias;//0x3C
enum class e_specular_type : __int16
{
none = 0,
default = 1,
dull = 2,
shiny = 3,
};
e_specular_type specular_type;//0x3E
enum class e_lightmap_type : __int16
{
diffuse = 0,
default_specular = 1,
dull_specular = 2,
shiny_specular = 3,
};
e_lightmap_type lightmap_type;//0x40
__int16 unknown;//0x42
float lightmap_specular_brightness;//0x44
float lightmap_ambient_bias;//0x48
float diffuse_level;//0x4C
PAD(0x4);//0x50
};
TAG_GROUP_SIZE_ASSERT(s_shader_group_definition,0x54);
TAG_REFL_TAG_BLOCK_DEF(s_shader_group_definition::s_runtime_properties_block)	TAG_REFL_TAG_REFERENCE(diffuse_map)	TAG_REFL_TAG_REFERENCE(lightmap_emissive_map)	TAG_REFL_REAL_COLOR_RGB(lightmap_emissive_color)	TAG_REFL_PROPERTY(lightmap_emissive_power)	TAG_REFL_PROPERTY(lightmap_resolution_scale)	TAG_REFL_PROPERTY(lightmap_half_life)	TAG_REFL_PROPERTY(lightmap_diffuse_scale)	TAG_REFL_TAG_REFERENCE(alpha_test_map)	TAG_REFL_TAG_REFERENCE(translucent_map)	TAG_REFL_REAL_COLOR_RGB(lightmap_transparent_color)	TAG_REFL_PROPERTY(lightmap_transparent_alpha)	TAG_REFL_PROPERTY(lightmap_foliage_scale)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_group_definition::s_postprocess_definition_block::s_bitmaps_block)	TAG_REFL_TAG_REFERENCE(bitmap_group)	TAG_REFL_PROPERTY(bitmap_index)	TAG_REFL_PROPERTY(log_bitmap_dimension)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_group_definition::s_postprocess_definition_block::s_pixel_constants_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_group_definition::s_postprocess_definition_block::s_vertex_constants_block)	TAG_REFL_PROPERTY(x)	TAG_REFL_PROPERTY(y)	TAG_REFL_PROPERTY(z)	TAG_REFL_PROPERTY(w)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_group_definition::s_postprocess_definition_block::s_levels_of_detail_block)	TAG_REFL_PROPERTY(available_layer_flags)	TAG_REFL_PROPERTY(block_index_data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_group_definition::s_postprocess_definition_block::s_layers_block)	TAG_REFL_PROPERTY(block_index_data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_group_definition::s_postprocess_definition_block::s_passes_block)	TAG_REFL_PROPERTY(block_index_data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_group_definition::s_postprocess_definition_block::s_implementations_block)	TAG_REFL_PROPERTY(bitmap_transforms_block_index_data)	TAG_REFL_PROPERTY(render_states_block_index_data)	TAG_REFL_PROPERTY(texture_states_block_index_data)	TAG_REFL_PROPERTY(pixel_constants_block_index_data)	TAG_REFL_PROPERTY(vertex_constants_block_index_data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_group_definition::s_postprocess_definition_block::s_overlays_block)	TAG_REFL_STRING_ID(input_name)	TAG_REFL_STRING_ID(range_name)	TAG_REFL_PROPERTY(time_period_in_seconds)	TAG_REFL_DATA_BLOCK(function)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_group_definition::s_postprocess_definition_block::s_overlay_references_block)	TAG_REFL_PROPERTY(overlay_index)	TAG_REFL_PROPERTY(transform_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_group_definition::s_postprocess_definition_block::s_animated_parameters_block)	TAG_REFL_PROPERTY(block_index_data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_group_definition::s_postprocess_definition_block::s_animated_parameter_references_block)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(parameter_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_group_definition::s_postprocess_definition_block::s_bitmap_properties_block)	TAG_REFL_PROPERTY(bitmap_index)	TAG_REFL_PROPERTY(animated_parameter_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_group_definition::s_postprocess_definition_block::s_color_properties_block)	TAG_REFL_REAL_COLOR_RGB(color)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_group_definition::s_postprocess_definition_block::s_value_properties_block)	TAG_REFL_PROPERTY(value)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_group_definition::s_postprocess_definition_block)	TAG_REFL_TAG_REFERENCE(shader_template)	TAG_REFL_TAG_BLOCK(bitmaps)	TAG_REFL_TAG_BLOCK(pixel_constants)	TAG_REFL_TAG_BLOCK(vertex_constants)	TAG_REFL_TAG_BLOCK(levels_of_detail)	TAG_REFL_TAG_BLOCK(layers)	TAG_REFL_TAG_BLOCK(passes)	TAG_REFL_TAG_BLOCK(implementations)	TAG_REFL_TAG_BLOCK(overlays)	TAG_REFL_TAG_BLOCK(overlay_references)	TAG_REFL_TAG_BLOCK(animated_parameters)	TAG_REFL_TAG_BLOCK(animated_parameter_references)	TAG_REFL_TAG_BLOCK(bitmap_properties)	TAG_REFL_TAG_BLOCK(color_properties)	TAG_REFL_TAG_BLOCK(value_properties)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_shader_group_definition::s_predicted_resources_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(resource_index)	TAG_REFL_TAG_REFERENCE(tag_index)REFL_END
TAG_REFL(s_shader_group_definition)	TAG_REFL_TAG_REFERENCE(template)	TAG_REFL_STRING_ID(material_name)	TAG_REFL_TAG_BLOCK(runtime_properties)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(flags)	TAG_REFL_TAG_BLOCK(postprocess_definition)	TAG_REFL_TAG_BLOCK(predicted_resources)	TAG_REFL_TAG_REFERENCE(light_response)	TAG_REFL_PROPERTY(shader_lod_bias)	TAG_REFL_PROPERTY(specular_type)	TAG_REFL_PROPERTY(lightmap_type)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(lightmap_specular_brightness)	TAG_REFL_PROPERTY(lightmap_ambient_bias)	TAG_REFL_PROPERTY(diffuse_level)REFL_END

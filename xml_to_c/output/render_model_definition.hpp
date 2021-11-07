#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: render_model
		* group_tag : mode
 		* header size : 132
		* *********************************************************************/ 
struct s_render_model_group_definition
{
string_id name;//0x0
enum class e_flags : __int16
{
NUM__render_model_force_third_person_bit = FLAG(0),
force_carmackreverse = FLAG(1),
force_node_maps = FLAG(2),
geometry_postprocessed = FLAG(3),
};
e_flags flags;//0x4
__int16 unknown;//0x6
__int32 model_checksum;//0x8
struct s_import_info_block
{
PAD(0x254);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_import_info_block,0x254);
tag_block<s_import_info_block> import_info;//0xC
struct s_compression_info_block
{
float position_bounds_x_min;//0x0
float position_bounds_x_max;//0x4
float position_bounds_y_min;//0x8
float position_bounds_y_max;//0xC
float position_bounds_z_min;//0x10
float position_bounds_z_max;//0x14
float texcoord_bounds_x_min;//0x18
float texcoord_bounds_x_max;//0x1C
float texcoord_bounds_y_min;//0x20
float texcoord_bounds_y_max;//0x24
float secondary_texcoord_bounds_x_min;//0x28
float secondary_texcoord_bounds_x_max;//0x2C
float secondary_texcoord_bounds_y_min;//0x30
float secondary_texcoord_bounds_y_max;//0x34
};
TAG_BLOCK_SIZE_ASSERT(s_compression_info_block,0x38);
tag_block<s_compression_info_block> compression_info;//0x14
struct s_regions_block
{
string_id name;//0x0
__int16 old_node_map_offset;//0x4
__int16 old_node_map_size;//0x6
struct s_permutations_block
{
string_id name;//0x0
__int16 l1_section_index_super_low;//0x4
__int16 l2_section_index_low;//0x6
__int16 l3_section_index_medium;//0x8
__int16 l4_section_index_high;//0xA
__int16 l5_section_index_super_high;//0xC
__int16 l6_section_index_hollywood;//0xE
};
TAG_BLOCK_SIZE_ASSERT(s_permutations_block,0x10);
tag_block<s_permutations_block> permutations;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_regions_block,0x10);
tag_block<s_regions_block> regions;//0x1C
struct s_sections_block
{
enum class e_global_geometry_classification : __int16
{
worldspace = 0,
rigid = 1,
rigid_boned = 2,
skinned = 3,
unsupported_reimport = 4,
};
e_global_geometry_classification global_geometry_classification;//0x0
__int16 unknown;//0x2
unsigned __int16 total_vertex_count;//0x4
unsigned __int16 total_triangle_count;//0x6
unsigned __int16 total_part_count;//0x8
unsigned __int16 shadowcasting_triangle_count;//0xA
unsigned __int16 shadowcasting_part_count;//0xC
unsigned __int16 opaque_point_count;//0xE
unsigned __int16 opaque_vertex_count;//0x10
unsigned __int16 opaque_part_count;//0x12
unsigned __int16 opaque_max_nodesvertex;//0x14
unsigned __int16 shadowcasting_rigid_triangle_count;//0x16
enum class e_geometry_classification : __int16
{
worldspace = 0,
rigid = 1,
rigid_boned = 2,
skinned = 3,
unsupported_reimport = 4,
};
e_geometry_classification geometry_classification;//0x18
enum class e_geometry_compression_flags : __int16
{
compressed_position = FLAG(0),
compressed_texcoord = FLAG(1),
compressed_secondary_texcoord = FLAG(2),
bit_3 = FLAG(3),
bit_4 = FLAG(4),
bit_5 = FLAG(5),
bit_6 = FLAG(6),
bit_7 = FLAG(7),
bit_8 = FLAG(8),
bit_9 = FLAG(9),
bit_10 = FLAG(10),
bit_11 = FLAG(11),
bit_12 = FLAG(12),
bit_13 = FLAG(13),
bit_14 = FLAG(14),
bit_15 = FLAG(15),
};
e_geometry_compression_flags geometry_compression_flags;//0x1A
struct s_compression_info_block
{
float position_bounds_x_min;//0x0
float position_bounds_x_max;//0x4
float position_bounds_y_min;//0x8
float position_bounds_y_max;//0xC
float position_bounds_z_min;//0x10
float position_bounds_z_max;//0x14
float texcoord_bounds_x_min;//0x18
float texcoord_bounds_x_max;//0x1C
float texcoord_bounds_y_min;//0x20
float texcoord_bounds_y_max;//0x24
float secondary_texcoord_bounds_x_min;//0x28
float secondary_texcoord_bounds_x_max;//0x2C
float secondary_texcoord_bounds_y_min;//0x30
float secondary_texcoord_bounds_y_max;//0x34
};
TAG_BLOCK_SIZE_ASSERT(s_compression_info_block,0x38);
tag_block<s_compression_info_block> compression_info;//0x1C
unsigned __int8 hardware_node_count;//0x24
unsigned __int8 node_map_size;//0x25
unsigned __int16 software_plane_sount;//0x26
unsigned __int16 total_subpart_count;//0x28
enum class e_section_lighting_flags : __int16
{
has_lm_texcoords = FLAG(0),
has_lm_inc_rad = FLAG(1),
has_lm_colors = FLAG(2),
has_lm_prt = FLAG(3),
bit_4 = FLAG(4),
bit_5 = FLAG(5),
bit_6 = FLAG(6),
bit_7 = FLAG(7),
bit_8 = FLAG(8),
bit_9 = FLAG(9),
bit_10 = FLAG(10),
bit_11 = FLAG(11),
bit_12 = FLAG(12),
bit_13 = FLAG(13),
bit_14 = FLAG(14),
bit_15 = FLAG(15),
};
e_section_lighting_flags section_lighting_flags;//0x2A
__int16 rigid_node;//0x2C
enum class e_flags : __int16
{
geometry_postprocessed = FLAG(0),
bit_1 = FLAG(1),
bit_2 = FLAG(2),
bit_3 = FLAG(3),
bit_4 = FLAG(4),
bit_5 = FLAG(5),
bit_6 = FLAG(6),
bit_7 = FLAG(7),
bit_8 = FLAG(8),
bit_9 = FLAG(9),
bit_10 = FLAG(10),
bit_11 = FLAG(11),
bit_12 = FLAG(12),
bit_13 = FLAG(13),
bit_14 = FLAG(14),
bit_15 = FLAG(15),
};
e_flags flags;//0x2E
PAD(0x8);//0x30
unsigned __int32 block_offset;//0x38
unsigned __int32 block_size;//0x3C
unsigned __int32 section_data_size;//0x40
unsigned __int32 resource_data_size;//0x44
struct s_resources_block
{
enum class e_type : __int8
{
tag_block = 0,
tag_data = 1,
vertex_buffer = 2,
};
e_type type;//0x0
__int8 unknown;//0x1
__int16 unknown;//0x2
__int16 primary_locator;//0x4
__int16 secondary_locator;//0x6
unsigned __int32 resoure_data_size;//0x8
unsigned __int32 resource_data_offset;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_resources_block,0x10);
tag_block<s_resources_block> resources;//0x48
tag_referenceN model;//0x50
__int16 owner_tag_section_offset;//0x54
__int16 unknown;//0x56
PAD(0x4);//0x58
};
TAG_BLOCK_SIZE_ASSERT(s_sections_block,0x5C);
tag_block<s_sections_block> sections;//0x24
struct s_invalid_section_pair_bits_block
{
__int32 bits;//0x0
PAD(0x8);//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_invalid_section_pair_bits_block,0xC);
tag_block<s_invalid_section_pair_bits_block> invalid_section_pair_bits;//0x2C
struct s_section_groups_block
{
enum class e_detail_levels : __int16
{
l1_section_index_super_low = FLAG(0),
l2_section_index_low = FLAG(1),
l3_section_index_medium = FLAG(2),
l4_section_index_high = FLAG(3),
l5_section_index_super_high = FLAG(4),
l6_section_index_hollywood = FLAG(5),
bit_6 = FLAG(6),
bit_7 = FLAG(7),
bit_8 = FLAG(8),
bit_9 = FLAG(9),
bit_10 = FLAG(10),
bit_11 = FLAG(11),
bit_12 = FLAG(12),
bit_13 = FLAG(13),
bit_14 = FLAG(14),
bit_15 = FLAG(15),
};
e_detail_levels detail_levels;//0x0
__int16 unknown;//0x2
struct s_compound_nodes_block
{
__int8 node_index;//0x0
__int8 node_index;//0x1
__int8 node_index;//0x2
__int8 node_index;//0x3
float node_weight;//0x4
float node_weight;//0x8
float node_weight;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_compound_nodes_block,0x10);
tag_block<s_compound_nodes_block> compound_nodes;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_section_groups_block,0xC);
tag_block<s_section_groups_block> section_groups;//0x34
__int8 l1_section_index_super_low;//0x3C
__int8 l2_section_index_low;//0x3D
__int8 l3_section_index_medium;//0x3E
__int8 l4_section_index_high;//0x3F
__int8 l5_section_index_super_high;//0x40
__int8 l6_section_index_hollywood;//0x41
__int16 unknown;//0x42
__int32 node_list_checksum;//0x44
struct s_nodes_block
{
string_id name;//0x0
__int16 parent_node;//0x4
__int16 first_child_node;//0x6
__int16 next_sibling_node;//0x8
__int16 import_node_index;//0xA
float default_translation_x;//0xC
float default_translation_y;//0x10
float default_translation_z;//0x14
float default_rotation_i;//0x18
float default_rotation_j;//0x1C
float default_rotation_k;//0x20
float default_rotation_w;//0x24
float default_scale;//0x28
float inverse_forward_i;//0x2C
float inverse_forward_j;//0x30
float inverse_forward_k;//0x34
float inverse_left_i;//0x38
float inverse_left_j;//0x3C
float inverse_left_k;//0x40
float inverse_up_i;//0x44
float inverse_up_j;//0x48
float inverse_up_k;//0x4C
float inverse_position_x;//0x50
float inverse_position_y;//0x54
float inverse_position_z;//0x58
float distance_from_parent;//0x5C
};
TAG_BLOCK_SIZE_ASSERT(s_nodes_block,0x60);
tag_block<s_nodes_block> nodes;//0x48
PAD(0x8);//0x50
struct s_marker_groups_block
{
string_id name;//0x0
struct s_markers_block
{
__int8 region_index;//0x0
__int8 permutation_index;//0x1
__int8 node_index;//0x2
__int8 unknown;//0x3
float translation_x;//0x4
float translation_y;//0x8
float translation_z;//0xC
float rotation_i;//0x10
float rotation_j;//0x14
float rotation_k;//0x18
float rotation_w;//0x1C
float scale;//0x20
};
TAG_BLOCK_SIZE_ASSERT(s_markers_block,0x24);
tag_block<s_markers_block> markers;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_marker_groups_block,0xC);
tag_block<s_marker_groups_block> marker_groups;//0x58
struct s_materials_block
{
tag_reference old_shader;//0x0
tag_reference shader;//0x8
struct s_properties_block
{
enum class e_type : __int16
{
lightmap_resolution = 0,
lightmap_power = 1,
lightmap_half_life = 2,
lightmap_diffuse_scale = 3,
};
e_type type;//0x0
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-2);//0x2
__int16 int_value;//0x0
PAD(0x2);//0x2
float real_value;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_properties_block,0x8);
tag_block<s_properties_block> properties;//0x10
PAD(0x4);//0x18
__int8 breakable_surface_index;//0x1C
__int8 unknown;//0x1D
__int8 unknown;//0x1E
__int8 unknown;//0x1F
};
TAG_BLOCK_SIZE_ASSERT(s_materials_block,0x20);
tag_block<s_materials_block> materials;//0x60
PAD(0x8);//0x68
float dont_draw_over_camera_cosine_angle;//0x70
struct s_prt_info_block
{
unsigned __int16 sh_order;//0x0
unsigned __int16 number_of_clusters;//0x2
unsigned __int16 pca_vectors_per_cluster;//0x4
unsigned __int16 number_of_rays;//0x6
unsigned __int16 number_of_bounces;//0x8
unsigned __int16 material_index_for_sbsfc_scattering;//0xA
float length_scale;//0xC
unsigned __int16 number_of_lods_in_model;//0x10
unsigned __int16 unknown;//0x12
struct s_lod_info_block
{
unsigned __int32 cluster_offset;//0x0
struct s_section_info_block
{
__int32 section_index;//0x0
unsigned __int32 pca_data_offset;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_section_info_block,0x8);
tag_block<s_section_info_block> section_info;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_lod_info_block,0xC);
tag_block<s_lod_info_block> lod_info;//0x14
struct s_cluster_basis_block
{
float basis_data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_cluster_basis_block,0x4);
tag_block<s_cluster_basis_block> cluster_basis;//0x1C
PAD(0x10);//0x24
unsigned __int32 block_offset;//0x34
unsigned __int32 block_size;//0x38
unsigned __int32 section_data_size;//0x3C
unsigned __int32 resource_data_size;//0x40
struct s_resources_block
{
enum class e_type : __int8
{
tag_block = 0,
tag_data = 1,
vertex_buffer = 2,
};
e_type type;//0x0
__int8 unknown;//0x1
__int16 unknown;//0x2
__int16 primary_locator;//0x4
__int16 secondary_locator;//0x6
unsigned __int32 resoure_data_size;//0x8
unsigned __int32 resource_data_offset;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_resources_block,0x10);
tag_block<s_resources_block> resources;//0x44
tag_referenceN model;//0x4C
__int16 owner_tag_section_offset;//0x50
__int16 unknown;//0x52
PAD(0x4);//0x54
};
TAG_BLOCK_SIZE_ASSERT(s_prt_info_block,0x58);
tag_block<s_prt_info_block> prt_info;//0x74
struct s_section_render_leaves_block
{
struct s_node_render_leaves_block
{
struct s_collision_leaves_block
{
__int16 cluster;//0x0
__int16 surface_reference_count;//0x2
__int32 first_surface_reference_index;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_collision_leaves_block,0x8);
tag_block<s_collision_leaves_block> collision_leaves;//0x0
struct s_surface_references_block
{
__int16 strip_index;//0x0
__int16 lightmap_triangle_index;//0x2
__int32 bsp_node_index;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_surface_references_block,0x8);
tag_block<s_surface_references_block> surface_references;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_node_render_leaves_block,0x10);
tag_block<s_node_render_leaves_block> node_render_leaves;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_section_render_leaves_block,0x8);
tag_block<s_section_render_leaves_block> section_render_leaves;//0x7C
};
TAG_GROUP_SIZE_ASSERT(s_render_model_group_definition,0x84);
TAG_REFL(s_render_model_group_definition)
	TAG_REFL_STRING_ID(name)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(model_checksum)
TAG_REFL_TAG_BLOCK_DEF(s_import_info_block)
REFL_END
	TAG_REFL_TAG_BLOCK(import_info)
TAG_REFL_TAG_BLOCK_DEF(s_compression_info_block)
	TAG_REFL_PROPERTY(position_bounds_x_min)
	TAG_REFL_PROPERTY(position_bounds_x_max)
	TAG_REFL_PROPERTY(position_bounds_y_min)
	TAG_REFL_PROPERTY(position_bounds_y_max)
	TAG_REFL_PROPERTY(position_bounds_z_min)
	TAG_REFL_PROPERTY(position_bounds_z_max)
	TAG_REFL_PROPERTY(texcoord_bounds_x_min)
	TAG_REFL_PROPERTY(texcoord_bounds_x_max)
	TAG_REFL_PROPERTY(texcoord_bounds_y_min)
	TAG_REFL_PROPERTY(texcoord_bounds_y_max)
	TAG_REFL_PROPERTY(secondary_texcoord_bounds_x_min)
	TAG_REFL_PROPERTY(secondary_texcoord_bounds_x_max)
	TAG_REFL_PROPERTY(secondary_texcoord_bounds_y_min)
	TAG_REFL_PROPERTY(secondary_texcoord_bounds_y_max)
REFL_END
	TAG_REFL_TAG_BLOCK(compression_info)
TAG_REFL_TAG_BLOCK_DEF(s_regions_block)
	TAG_REFL_STRING_ID(name)
	TAG_REFL_PROPERTY(old_node_map_offset)
	TAG_REFL_PROPERTY(old_node_map_size)
TAG_REFL_TAG_BLOCK_DEF(s_permutations_block)
	TAG_REFL_STRING_ID(name)
	TAG_REFL_PROPERTY(l1_section_index_super_low)
	TAG_REFL_PROPERTY(l2_section_index_low)
	TAG_REFL_PROPERTY(l3_section_index_medium)
	TAG_REFL_PROPERTY(l4_section_index_high)
	TAG_REFL_PROPERTY(l5_section_index_super_high)
	TAG_REFL_PROPERTY(l6_section_index_hollywood)
REFL_END
	TAG_REFL_TAG_BLOCK(permutations)
REFL_END
	TAG_REFL_TAG_BLOCK(regions)
TAG_REFL_TAG_BLOCK_DEF(s_sections_block)
	TAG_REFL_PROPERTY(global_geometry_classification)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(total_vertex_count)
	TAG_REFL_PROPERTY(total_triangle_count)
	TAG_REFL_PROPERTY(total_part_count)
	TAG_REFL_PROPERTY(shadowcasting_triangle_count)
	TAG_REFL_PROPERTY(shadowcasting_part_count)
	TAG_REFL_PROPERTY(opaque_point_count)
	TAG_REFL_PROPERTY(opaque_vertex_count)
	TAG_REFL_PROPERTY(opaque_part_count)
	TAG_REFL_PROPERTY(opaque_max_nodesvertex)
	TAG_REFL_PROPERTY(shadowcasting_rigid_triangle_count)
	TAG_REFL_PROPERTY(geometry_classification)
	TAG_REFL_PROPERTY(geometry_compression_flags)
TAG_REFL_TAG_BLOCK_DEF(s_compression_info_block)
	TAG_REFL_PROPERTY(position_bounds_x_min)
	TAG_REFL_PROPERTY(position_bounds_x_max)
	TAG_REFL_PROPERTY(position_bounds_y_min)
	TAG_REFL_PROPERTY(position_bounds_y_max)
	TAG_REFL_PROPERTY(position_bounds_z_min)
	TAG_REFL_PROPERTY(position_bounds_z_max)
	TAG_REFL_PROPERTY(texcoord_bounds_x_min)
	TAG_REFL_PROPERTY(texcoord_bounds_x_max)
	TAG_REFL_PROPERTY(texcoord_bounds_y_min)
	TAG_REFL_PROPERTY(texcoord_bounds_y_max)
	TAG_REFL_PROPERTY(secondary_texcoord_bounds_x_min)
	TAG_REFL_PROPERTY(secondary_texcoord_bounds_x_max)
	TAG_REFL_PROPERTY(secondary_texcoord_bounds_y_min)
	TAG_REFL_PROPERTY(secondary_texcoord_bounds_y_max)
REFL_END
	TAG_REFL_TAG_BLOCK(compression_info)
	TAG_REFL_PROPERTY(hardware_node_count)
	TAG_REFL_PROPERTY(node_map_size)
	TAG_REFL_PROPERTY(software_plane_sount)
	TAG_REFL_PROPERTY(total_subpart_count)
	TAG_REFL_PROPERTY(section_lighting_flags)
	TAG_REFL_PROPERTY(rigid_node)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(block_offset)
	TAG_REFL_PROPERTY(block_size)
	TAG_REFL_PROPERTY(section_data_size)
	TAG_REFL_PROPERTY(resource_data_size)
TAG_REFL_TAG_BLOCK_DEF(s_resources_block)
	TAG_REFL_PROPERTY(type)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(primary_locator)
	TAG_REFL_PROPERTY(secondary_locator)
	TAG_REFL_PROPERTY(resoure_data_size)
	TAG_REFL_PROPERTY(resource_data_offset)
REFL_END
	TAG_REFL_TAG_BLOCK(resources)
	TAG_REFL_TAG_REFERENCE(model)
	TAG_REFL_PROPERTY(owner_tag_section_offset)
	TAG_REFL_PROPERTY(unknown)
REFL_END
	TAG_REFL_TAG_BLOCK(sections)
TAG_REFL_TAG_BLOCK_DEF(s_invalid_section_pair_bits_block)
	TAG_REFL_PROPERTY(bits)
REFL_END
	TAG_REFL_TAG_BLOCK(invalid_section_pair_bits)
TAG_REFL_TAG_BLOCK_DEF(s_section_groups_block)
	TAG_REFL_PROPERTY(detail_levels)
	TAG_REFL_PROPERTY(unknown)
TAG_REFL_TAG_BLOCK_DEF(s_compound_nodes_block)
	TAG_REFL_PROPERTY(node_index)
	TAG_REFL_PROPERTY(node_index)
	TAG_REFL_PROPERTY(node_index)
	TAG_REFL_PROPERTY(node_index)
	TAG_REFL_PROPERTY(node_weight)
	TAG_REFL_PROPERTY(node_weight)
	TAG_REFL_PROPERTY(node_weight)
REFL_END
	TAG_REFL_TAG_BLOCK(compound_nodes)
REFL_END
	TAG_REFL_TAG_BLOCK(section_groups)
	TAG_REFL_PROPERTY(l1_section_index_super_low)
	TAG_REFL_PROPERTY(l2_section_index_low)
	TAG_REFL_PROPERTY(l3_section_index_medium)
	TAG_REFL_PROPERTY(l4_section_index_high)
	TAG_REFL_PROPERTY(l5_section_index_super_high)
	TAG_REFL_PROPERTY(l6_section_index_hollywood)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(node_list_checksum)
TAG_REFL_TAG_BLOCK_DEF(s_nodes_block)
	TAG_REFL_STRING_ID(name)
	TAG_REFL_PROPERTY(parent_node)
	TAG_REFL_PROPERTY(first_child_node)
	TAG_REFL_PROPERTY(next_sibling_node)
	TAG_REFL_PROPERTY(import_node_index)
	TAG_REFL_PROPERTY(default_translation_x)
	TAG_REFL_PROPERTY(default_translation_y)
	TAG_REFL_PROPERTY(default_translation_z)
	TAG_REFL_PROPERTY(default_rotation_i)
	TAG_REFL_PROPERTY(default_rotation_j)
	TAG_REFL_PROPERTY(default_rotation_k)
	TAG_REFL_PROPERTY(default_rotation_w)
	TAG_REFL_PROPERTY(default_scale)
	TAG_REFL_PROPERTY(inverse_forward_i)
	TAG_REFL_PROPERTY(inverse_forward_j)
	TAG_REFL_PROPERTY(inverse_forward_k)
	TAG_REFL_PROPERTY(inverse_left_i)
	TAG_REFL_PROPERTY(inverse_left_j)
	TAG_REFL_PROPERTY(inverse_left_k)
	TAG_REFL_PROPERTY(inverse_up_i)
	TAG_REFL_PROPERTY(inverse_up_j)
	TAG_REFL_PROPERTY(inverse_up_k)
	TAG_REFL_PROPERTY(inverse_position_x)
	TAG_REFL_PROPERTY(inverse_position_y)
	TAG_REFL_PROPERTY(inverse_position_z)
	TAG_REFL_PROPERTY(distance_from_parent)
REFL_END
	TAG_REFL_TAG_BLOCK(nodes)
TAG_REFL_TAG_BLOCK_DEF(s_marker_groups_block)
	TAG_REFL_STRING_ID(name)
TAG_REFL_TAG_BLOCK_DEF(s_markers_block)
	TAG_REFL_PROPERTY(region_index)
	TAG_REFL_PROPERTY(permutation_index)
	TAG_REFL_PROPERTY(node_index)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(translation_x)
	TAG_REFL_PROPERTY(translation_y)
	TAG_REFL_PROPERTY(translation_z)
	TAG_REFL_PROPERTY(rotation_i)
	TAG_REFL_PROPERTY(rotation_j)
	TAG_REFL_PROPERTY(rotation_k)
	TAG_REFL_PROPERTY(rotation_w)
	TAG_REFL_PROPERTY(scale)
REFL_END
	TAG_REFL_TAG_BLOCK(markers)
REFL_END
	TAG_REFL_TAG_BLOCK(marker_groups)
TAG_REFL_TAG_BLOCK_DEF(s_materials_block)
	TAG_REFL_TAG_REFERENCE(old_shader)
	TAG_REFL_TAG_REFERENCE(shader)
TAG_REFL_TAG_BLOCK_DEF(s_properties_block)
	TAG_REFL_PROPERTY(type)
	TAG_REFL_PROPERTY(int_value)
	TAG_REFL_PROPERTY(real_value)
REFL_END
	TAG_REFL_TAG_BLOCK(properties)
	TAG_REFL_PROPERTY(breakable_surface_index)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
REFL_END
	TAG_REFL_TAG_BLOCK(materials)
	TAG_REFL_PROPERTY(dont_draw_over_camera_cosine_angle)
TAG_REFL_TAG_BLOCK_DEF(s_prt_info_block)
	TAG_REFL_PROPERTY(sh_order)
	TAG_REFL_PROPERTY(number_of_clusters)
	TAG_REFL_PROPERTY(pca_vectors_per_cluster)
	TAG_REFL_PROPERTY(number_of_rays)
	TAG_REFL_PROPERTY(number_of_bounces)
	TAG_REFL_PROPERTY(material_index_for_sbsfc_scattering)
	TAG_REFL_PROPERTY(length_scale)
	TAG_REFL_PROPERTY(number_of_lods_in_model)
	TAG_REFL_PROPERTY(unknown)
TAG_REFL_TAG_BLOCK_DEF(s_lod_info_block)
	TAG_REFL_PROPERTY(cluster_offset)
TAG_REFL_TAG_BLOCK_DEF(s_section_info_block)
	TAG_REFL_PROPERTY(section_index)
	TAG_REFL_PROPERTY(pca_data_offset)
REFL_END
	TAG_REFL_TAG_BLOCK(section_info)
REFL_END
	TAG_REFL_TAG_BLOCK(lod_info)
TAG_REFL_TAG_BLOCK_DEF(s_cluster_basis_block)
	TAG_REFL_PROPERTY(basis_data)
REFL_END
	TAG_REFL_TAG_BLOCK(cluster_basis)
	TAG_REFL_PROPERTY(block_offset)
	TAG_REFL_PROPERTY(block_size)
	TAG_REFL_PROPERTY(section_data_size)
	TAG_REFL_PROPERTY(resource_data_size)
TAG_REFL_TAG_BLOCK_DEF(s_resources_block)
	TAG_REFL_PROPERTY(type)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(primary_locator)
	TAG_REFL_PROPERTY(secondary_locator)
	TAG_REFL_PROPERTY(resoure_data_size)
	TAG_REFL_PROPERTY(resource_data_offset)
REFL_END
	TAG_REFL_TAG_BLOCK(resources)
	TAG_REFL_TAG_REFERENCE(model)
	TAG_REFL_PROPERTY(owner_tag_section_offset)
	TAG_REFL_PROPERTY(unknown)
REFL_END
	TAG_REFL_TAG_BLOCK(prt_info)
TAG_REFL_TAG_BLOCK_DEF(s_section_render_leaves_block)
TAG_REFL_TAG_BLOCK_DEF(s_node_render_leaves_block)
TAG_REFL_TAG_BLOCK_DEF(s_collision_leaves_block)
	TAG_REFL_PROPERTY(cluster)
	TAG_REFL_PROPERTY(surface_reference_count)
	TAG_REFL_PROPERTY(first_surface_reference_index)
REFL_END
	TAG_REFL_TAG_BLOCK(collision_leaves)
TAG_REFL_TAG_BLOCK_DEF(s_surface_references_block)
	TAG_REFL_PROPERTY(strip_index)
	TAG_REFL_PROPERTY(lightmap_triangle_index)
	TAG_REFL_PROPERTY(bsp_node_index)
REFL_END
	TAG_REFL_TAG_BLOCK(surface_references)
REFL_END
	TAG_REFL_TAG_BLOCK(node_render_leaves)
REFL_END
	TAG_REFL_TAG_BLOCK(section_render_leaves)
REFL_END
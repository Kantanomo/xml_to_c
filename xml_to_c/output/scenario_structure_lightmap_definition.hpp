#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: scenario_structure_lightmap
		* group_tag : ltmp
 		* header size : 260
		* *********************************************************************/ 
struct s_scenario_structure_lightmap_group_definition
{
float search_distance_lower_bound;//0x0
float search_distance_upper_bound;//0x4
float luminels_per_world_unit;//0x8
float output_white_reference;//0xC
float output_black_reference;//0x10
float output_schlick_reference;//0x14
float diffuse_map_scale;//0x18
float sun_scale;//0x1C
float sky_scale;//0x20
float indirect_scale;//0x24
float prt_scale;//0x28
float surface_light_scale;//0x2C
float scenario_light_scale;//0x30
float lightprobe_interpolation_override;//0x34
PAD(0x48);//0x38
struct s_lightmap_groups_block
{
enum class e_type : __int16
{
normal = 0,
};
e_type type;//0x0
enum class e_flags : __int16
{
unused = FLAG(0),
};
e_flags flags;//0x2
__int32 structure_checksum;//0x4
struct s_section_palette_block
{
__int32 first_palette_color;//0x0
PAD(0x3FC);//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_section_palette_block,0x400);
tag_block<s_section_palette_block> section_palette;//0x8
struct s_writable_palettes_block
{
__int32 first_palette_color;//0x0
PAD(0x3FC);//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_writable_palettes_block,0x400);
tag_block<s_writable_palettes_block> writable_palettes;//0x10
tag_reference bitmap_group;//0x18
struct s_clusters_block
{
__int16 total_vertex_count;//0x0
__int16 total_triangle_count;//0x2
__int16 total_part_count;//0x4
__int16 shadowcasting_triangle_count;//0x6
__int16 shadowcasting_part_count;//0x8
__int16 opaque_point_count;//0xA
__int16 opaque_vertex_count;//0xC
__int16 opaque_part_count;//0xE
__int16 opague_max_nodesvertex;//0x10
__int16 transparent_max_nodesvertex;//0x12
__int16 shadowcasting_rigid_triangle;//0x14
enum class e_geometry_classification : __int32
{
world_space = 0,
};
e_geometry_classification geometry_classification;//0x16
enum class e_geometry_compression_flags : __int16
{
compressed_position = FLAG(0),
compressed_texcoord = FLAG(1),
compressed_secondary_texcoord = FLAG(2),
};
e_geometry_compression_flags geometry_compression_flags;//0x1A
__int16 hardware_node_count;//0x1C
__int16 node_map_size;//0x1E
__int16 software_plane_count;//0x20
__int16 total_subpart_count;//0x22
enum class e_section_lighting_flags : __int32
{
has_lm_texcoords = FLAG(0),
has_lm_inc_rad = FLAG(1),
has_lm_colors = FLAG(2),
has_lm_prt = FLAG(3),
};
e_section_lighting_flags section_lighting_flags;//0x24
__int32 block_offset;//0x28
__int32 block_size;//0x2C
__int32 section_data_size;//0x30
__int32 resource_data_size;//0x34
PAD(0xC);//0x38
__int32 owner_tag_section_offset;//0x44
PAD(0xC);//0x48
};
TAG_BLOCK_SIZE_ASSERT(s_clusters_block,0x54);
tag_block<s_clusters_block> clusters;//0x20
struct s_cluster_render_info_block
{
__int16 bitmap_index;//0x0
__int16 palette_index;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_cluster_render_info_block,0x4);
tag_block<s_cluster_render_info_block> cluster_render_info;//0x28
struct s_poop_definitions_block
{
__int16 total_vertex_count;//0x0
__int16 total_triangle_count;//0x2
__int16 total_part_count;//0x4
__int16 shadowcasting_triangle_count;//0x6
__int16 shadowcasting_part_count;//0x8
__int16 opaque_point_count;//0xA
__int16 opaque_vertex_count;//0xC
__int16 opaque_part_count;//0xE
__int16 opague_max_nodesvertex;//0x10
__int16 transparent_max_nodesvertex;//0x12
__int16 shadowcasting_rigid_triangle;//0x14
enum class e_geometry_classification : __int32
{
world_space = 0,
};
e_geometry_classification geometry_classification;//0x16
enum class e_geometry_compression_flags : __int16
{
compressed_position = FLAG(0),
compressed_texcoord = FLAG(1),
compressed_secondary_texcoord = FLAG(2),
};
e_geometry_compression_flags geometry_compression_flags;//0x1A
__int16 hardware_node_count;//0x1C
__int16 node_map_size;//0x1E
__int16 software_plane_count;//0x20
__int16 total_subpart_count;//0x22
enum class e_section_lighting_flags : __int32
{
has_lm_texcoords = FLAG(0),
has_lm_inc_rad = FLAG(1),
has_lm_colors = FLAG(2),
has_lm_prt = FLAG(3),
};
e_section_lighting_flags section_lighting_flags;//0x24
__int32 block_offset;//0x28
__int32 block_size;//0x2C
__int32 section_data_size;//0x30
__int32 resource_data_size;//0x34
PAD(0xC);//0x38
__int32 owner_tag_section_offset;//0x44
PAD(0xC);//0x48
};
TAG_BLOCK_SIZE_ASSERT(s_poop_definitions_block,0x54);
tag_block<s_poop_definitions_block> poop_definitions;//0x30
struct s_lighting_environments_block
{
float sample_point_x;//0x0
float sample_point_y;//0x4
float sample_point_z;//0x8
float red_coefficient;//0xC
float red_coefficient;//0x10
float red_coefficient;//0x14
float red_coefficient;//0x18
float red_coefficient;//0x1C
float red_coefficient;//0x20
float red_coefficient;//0x24
float red_coefficient;//0x28
float red_coefficient;//0x2C
float green_coefficient;//0x30
float green_coefficient;//0x34
float green_coefficient;//0x38
float green_coefficient;//0x3C
float green_coefficient;//0x40
float green_coefficient;//0x44
float green_coefficient;//0x48
float green_coefficient;//0x4C
float green_coefficient;//0x50
float green_coefficient;//0x54
float blue_coefficient;//0x58
float blue_coefficient;//0x5C
float blue_coefficient;//0x60
float blue_coefficient;//0x64
float blue_coefficient;//0x68
float blue_coefficient;//0x6C
float blue_coefficient;//0x70
float blue_coefficient;//0x74
float blue_coefficient;//0x78
angle mean_incoming_light_direction_i;//0x7C
angle mean_incoming_light_direction_j;//0x80
angle mean_incoming_light_direction_k;//0x84
float incoming_light_intensity_x;//0x88
float incoming_light_intensity_y;//0x8C
float incoming_light_intensity_z;//0x90
__int32 specular_bitmap_index;//0x94
angle rotation_axis_i;//0x98
angle rotation_axis_j;//0x9C
angle rotation_axis_k;//0xA0
float rotation_speed;//0xA4
angle bump_direction_i;//0xA8
angle bump_direction_j;//0xAC
angle bump_direction_k;//0xB0
float color_tint;//0xB4
enum class e_procedural_overide : __int32
{
};
e_procedural_overide procedural_overide;//0xB8
enum class e_flags : __int32
{
leave_me_alone_please = FLAG(0),
};
e_flags flags;//0xBC
angle procedural_param0_i;//0xC0
angle procedural_param0_j;//0xC4
angle procedural_param0_k;//0xC8
angle procedural_param1xyz_i;//0xCC
angle procedural_param1xyz_j;//0xD0
angle procedural_param1xyz_k;//0xD4
angle procedural_param1w;//0xD8
};
TAG_BLOCK_SIZE_ASSERT(s_lighting_environments_block,0xDC);
tag_block<s_lighting_environments_block> lighting_environments;//0x38
struct s_geometry_buckets_block
{
enum class e_flags : __int32
{
incident_direction = FLAG(0),
color = FLAG(1),
};
e_flags flags;//0x0
PAD(0x18);//0x4
struct s_resources_block
{
enum class e_type : __int32
{
};
e_type type;//0x0
__int16 primary_locator;//0x4
__int16 secondary_locator;//0x6
__int32 resource_data_size;//0x8
__int32 resource_data_offset;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_resources_block,0x10);
tag_block<s_resources_block> resources;//0x1C
__int32 owner_tag_section_offset;//0x24
PAD(0x10);//0x28
};
TAG_BLOCK_SIZE_ASSERT(s_geometry_buckets_block,0x38);
tag_block<s_geometry_buckets_block> geometry_buckets;//0x40
struct s_instance_render_info_block
{
__int16 bitmap_index;//0x0
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-2);//0x2
__int16 palette_index;//0x0
PAD(0x2);//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_instance_render_info_block,0x4);
tag_block<s_instance_render_info_block> instance_render_info;//0x48
struct s_instance_bucket_refs_block
{
__int16 flags;//0x0
__int16 bucket_index;//0x2
struct s_section_offsets_block
{
__int32 section_offset;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_section_offsets_block,0x4);
tag_block<s_section_offsets_block> section_offsets;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_instance_bucket_refs_block,0xC);
tag_block<s_instance_bucket_refs_block> instance_bucket_refs;//0x50
struct s_scenary_object_info_block
{
__int32 unique_id;//0x0
__int16 origin_bsp_index;//0x4
unsigned __int8 type;//0x6
unsigned __int8 source;//0x7
__int32 render_model_checksum;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_scenary_object_info_block,0xC);
tag_block<s_scenary_object_info_block> scenary_object_info;//0x58
struct s_scenary_object_bucket_refs_block
{
__int16 flags;//0x0
__int16 bucket_index;//0x2
struct s_section_offsets_block
{
__int32 section_offset;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_section_offsets_block,0x4);
tag_block<s_section_offsets_block> section_offsets;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_scenary_object_bucket_refs_block,0xC);
tag_block<s_scenary_object_bucket_refs_block> scenary_object_bucket_refs;//0x60
};
TAG_BLOCK_SIZE_ASSERT(s_lightmap_groups_block,0x68);
tag_block<s_lightmap_groups_block> lightmap_groups;//0x80
PAD(0x7C);//0x88
};
TAG_GROUP_SIZE_ASSERT(s_scenario_structure_lightmap_group_definition,0x104);
TAG_REFL(s_scenario_structure_lightmap_group_definition)
	TAG_REFL_PROPERTY(search_distance_lower_bound)
	TAG_REFL_PROPERTY(search_distance_upper_bound)
	TAG_REFL_PROPERTY(luminels_per_world_unit)
	TAG_REFL_PROPERTY(output_white_reference)
	TAG_REFL_PROPERTY(output_black_reference)
	TAG_REFL_PROPERTY(output_schlick_reference)
	TAG_REFL_PROPERTY(diffuse_map_scale)
	TAG_REFL_PROPERTY(sun_scale)
	TAG_REFL_PROPERTY(sky_scale)
	TAG_REFL_PROPERTY(indirect_scale)
	TAG_REFL_PROPERTY(prt_scale)
	TAG_REFL_PROPERTY(surface_light_scale)
	TAG_REFL_PROPERTY(scenario_light_scale)
	TAG_REFL_PROPERTY(lightprobe_interpolation_override)
TAG_REFL_TAG_BLOCK_DEF(s_lightmap_groups_block)
	TAG_REFL_PROPERTY(type)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(structure_checksum)
TAG_REFL_TAG_BLOCK_DEF(s_section_palette_block)
	TAG_REFL_PROPERTY(first_palette_color)
REFL_END
	TAG_REFL_TAG_BLOCK(section_palette)
TAG_REFL_TAG_BLOCK_DEF(s_writable_palettes_block)
	TAG_REFL_PROPERTY(first_palette_color)
REFL_END
	TAG_REFL_TAG_BLOCK(writable_palettes)
	TAG_REFL_TAG_REFERENCE(bitmap_group)
TAG_REFL_TAG_BLOCK_DEF(s_clusters_block)
	TAG_REFL_PROPERTY(total_vertex_count)
	TAG_REFL_PROPERTY(total_triangle_count)
	TAG_REFL_PROPERTY(total_part_count)
	TAG_REFL_PROPERTY(shadowcasting_triangle_count)
	TAG_REFL_PROPERTY(shadowcasting_part_count)
	TAG_REFL_PROPERTY(opaque_point_count)
	TAG_REFL_PROPERTY(opaque_vertex_count)
	TAG_REFL_PROPERTY(opaque_part_count)
	TAG_REFL_PROPERTY(opague_max_nodesvertex)
	TAG_REFL_PROPERTY(transparent_max_nodesvertex)
	TAG_REFL_PROPERTY(shadowcasting_rigid_triangle)
	TAG_REFL_PROPERTY(geometry_classification)
	TAG_REFL_PROPERTY(geometry_compression_flags)
	TAG_REFL_PROPERTY(hardware_node_count)
	TAG_REFL_PROPERTY(node_map_size)
	TAG_REFL_PROPERTY(software_plane_count)
	TAG_REFL_PROPERTY(total_subpart_count)
	TAG_REFL_PROPERTY(section_lighting_flags)
	TAG_REFL_PROPERTY(block_offset)
	TAG_REFL_PROPERTY(block_size)
	TAG_REFL_PROPERTY(section_data_size)
	TAG_REFL_PROPERTY(resource_data_size)
	TAG_REFL_PROPERTY(owner_tag_section_offset)
REFL_END
	TAG_REFL_TAG_BLOCK(clusters)
TAG_REFL_TAG_BLOCK_DEF(s_cluster_render_info_block)
	TAG_REFL_PROPERTY(bitmap_index)
	TAG_REFL_PROPERTY(palette_index)
REFL_END
	TAG_REFL_TAG_BLOCK(cluster_render_info)
TAG_REFL_TAG_BLOCK_DEF(s_poop_definitions_block)
	TAG_REFL_PROPERTY(total_vertex_count)
	TAG_REFL_PROPERTY(total_triangle_count)
	TAG_REFL_PROPERTY(total_part_count)
	TAG_REFL_PROPERTY(shadowcasting_triangle_count)
	TAG_REFL_PROPERTY(shadowcasting_part_count)
	TAG_REFL_PROPERTY(opaque_point_count)
	TAG_REFL_PROPERTY(opaque_vertex_count)
	TAG_REFL_PROPERTY(opaque_part_count)
	TAG_REFL_PROPERTY(opague_max_nodesvertex)
	TAG_REFL_PROPERTY(transparent_max_nodesvertex)
	TAG_REFL_PROPERTY(shadowcasting_rigid_triangle)
	TAG_REFL_PROPERTY(geometry_classification)
	TAG_REFL_PROPERTY(geometry_compression_flags)
	TAG_REFL_PROPERTY(hardware_node_count)
	TAG_REFL_PROPERTY(node_map_size)
	TAG_REFL_PROPERTY(software_plane_count)
	TAG_REFL_PROPERTY(total_subpart_count)
	TAG_REFL_PROPERTY(section_lighting_flags)
	TAG_REFL_PROPERTY(block_offset)
	TAG_REFL_PROPERTY(block_size)
	TAG_REFL_PROPERTY(section_data_size)
	TAG_REFL_PROPERTY(resource_data_size)
	TAG_REFL_PROPERTY(owner_tag_section_offset)
REFL_END
	TAG_REFL_TAG_BLOCK(poop_definitions)
TAG_REFL_TAG_BLOCK_DEF(s_lighting_environments_block)
	TAG_REFL_PROPERTY(sample_point_x)
	TAG_REFL_PROPERTY(sample_point_y)
	TAG_REFL_PROPERTY(sample_point_z)
	TAG_REFL_PROPERTY(red_coefficient)
	TAG_REFL_PROPERTY(red_coefficient)
	TAG_REFL_PROPERTY(red_coefficient)
	TAG_REFL_PROPERTY(red_coefficient)
	TAG_REFL_PROPERTY(red_coefficient)
	TAG_REFL_PROPERTY(red_coefficient)
	TAG_REFL_PROPERTY(red_coefficient)
	TAG_REFL_PROPERTY(red_coefficient)
	TAG_REFL_PROPERTY(red_coefficient)
	TAG_REFL_PROPERTY(green_coefficient)
	TAG_REFL_PROPERTY(green_coefficient)
	TAG_REFL_PROPERTY(green_coefficient)
	TAG_REFL_PROPERTY(green_coefficient)
	TAG_REFL_PROPERTY(green_coefficient)
	TAG_REFL_PROPERTY(green_coefficient)
	TAG_REFL_PROPERTY(green_coefficient)
	TAG_REFL_PROPERTY(green_coefficient)
	TAG_REFL_PROPERTY(green_coefficient)
	TAG_REFL_PROPERTY(green_coefficient)
	TAG_REFL_PROPERTY(blue_coefficient)
	TAG_REFL_PROPERTY(blue_coefficient)
	TAG_REFL_PROPERTY(blue_coefficient)
	TAG_REFL_PROPERTY(blue_coefficient)
	TAG_REFL_PROPERTY(blue_coefficient)
	TAG_REFL_PROPERTY(blue_coefficient)
	TAG_REFL_PROPERTY(blue_coefficient)
	TAG_REFL_PROPERTY(blue_coefficient)
	TAG_REFL_PROPERTY(blue_coefficient)
	TAG_REFL_ANGLE(mean_incoming_light_direction_i)
	TAG_REFL_ANGLE(mean_incoming_light_direction_j)
	TAG_REFL_ANGLE(mean_incoming_light_direction_k)
	TAG_REFL_PROPERTY(incoming_light_intensity_x)
	TAG_REFL_PROPERTY(incoming_light_intensity_y)
	TAG_REFL_PROPERTY(incoming_light_intensity_z)
	TAG_REFL_PROPERTY(specular_bitmap_index)
	TAG_REFL_ANGLE(rotation_axis_i)
	TAG_REFL_ANGLE(rotation_axis_j)
	TAG_REFL_ANGLE(rotation_axis_k)
	TAG_REFL_PROPERTY(rotation_speed)
	TAG_REFL_ANGLE(bump_direction_i)
	TAG_REFL_ANGLE(bump_direction_j)
	TAG_REFL_ANGLE(bump_direction_k)
	TAG_REFL_PROPERTY(color_tint)
	TAG_REFL_PROPERTY(procedural_overide)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_ANGLE(procedural_param0_i)
	TAG_REFL_ANGLE(procedural_param0_j)
	TAG_REFL_ANGLE(procedural_param0_k)
	TAG_REFL_ANGLE(procedural_param1xyz_i)
	TAG_REFL_ANGLE(procedural_param1xyz_j)
	TAG_REFL_ANGLE(procedural_param1xyz_k)
	TAG_REFL_ANGLE(procedural_param1w)
REFL_END
	TAG_REFL_TAG_BLOCK(lighting_environments)
TAG_REFL_TAG_BLOCK_DEF(s_geometry_buckets_block)
	TAG_REFL_PROPERTY(flags)
TAG_REFL_TAG_BLOCK_DEF(s_resources_block)
	TAG_REFL_PROPERTY(type)
	TAG_REFL_PROPERTY(primary_locator)
	TAG_REFL_PROPERTY(secondary_locator)
	TAG_REFL_PROPERTY(resource_data_size)
	TAG_REFL_PROPERTY(resource_data_offset)
REFL_END
	TAG_REFL_TAG_BLOCK(resources)
	TAG_REFL_PROPERTY(owner_tag_section_offset)
REFL_END
	TAG_REFL_TAG_BLOCK(geometry_buckets)
TAG_REFL_TAG_BLOCK_DEF(s_instance_render_info_block)
	TAG_REFL_PROPERTY(bitmap_index)
	TAG_REFL_PROPERTY(palette_index)
REFL_END
	TAG_REFL_TAG_BLOCK(instance_render_info)
TAG_REFL_TAG_BLOCK_DEF(s_instance_bucket_refs_block)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(bucket_index)
TAG_REFL_TAG_BLOCK_DEF(s_section_offsets_block)
	TAG_REFL_PROPERTY(section_offset)
REFL_END
	TAG_REFL_TAG_BLOCK(section_offsets)
REFL_END
	TAG_REFL_TAG_BLOCK(instance_bucket_refs)
TAG_REFL_TAG_BLOCK_DEF(s_scenary_object_info_block)
	TAG_REFL_PROPERTY(unique_id)
	TAG_REFL_PROPERTY(origin_bsp_index)
	TAG_REFL_PROPERTY(type)
	TAG_REFL_PROPERTY(source)
	TAG_REFL_PROPERTY(render_model_checksum)
REFL_END
	TAG_REFL_TAG_BLOCK(scenary_object_info)
TAG_REFL_TAG_BLOCK_DEF(s_scenary_object_bucket_refs_block)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(bucket_index)
TAG_REFL_TAG_BLOCK_DEF(s_section_offsets_block)
	TAG_REFL_PROPERTY(section_offset)
REFL_END
	TAG_REFL_TAG_BLOCK(section_offsets)
REFL_END
	TAG_REFL_TAG_BLOCK(scenary_object_bucket_refs)
REFL_END
	TAG_REFL_TAG_BLOCK(lightmap_groups)
REFL_END
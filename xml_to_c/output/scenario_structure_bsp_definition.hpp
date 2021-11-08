#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: scenario_structure_bsp
		* group_tag : sbsp
 		* header size : 572
		* *********************************************************************/ 
struct s_scenario_structure_bsp_group_definition
{
struct s_unk_block
{
PAD(0x14);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_unk_block,0x14);
tag_block<s_unk_block> unk;//0x0
__int32 bsp_checksum;//0x8
struct s_collision_materials_block
{
tag_reference old_shader;//0x0
__int16 global_material_index;//0x8
__int16 conveyor_surface_index;//0xA
tag_reference new_shader;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_collision_materials_block,0x14);
tag_block<s_collision_materials_block> collision_materials;//0xC
struct s_collision_bsp_block
{
struct s_NUM_3d_nodes_block
{
__int16 plane;//0x0
PAD(0x2);//0x2
__int16 back_child;//0x4
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-2);//0x6
unsigned __int8 flagpaddingunknown;//0x4
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-1);//0x5
__int16 front_child;//0x4
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-2);//0x6
unsigned __int8 flagpaddingunknown2;//0x4
PAD(0x3);//0x5
};
TAG_BLOCK_SIZE_ASSERT(s_NUM_3d_nodes_block,0x8);
tag_block<s_NUM_3d_nodes_block> NUM_3d_nodes;//0x0
struct s_planes_block
{
float plane_i;//0x0
float plane_j;//0x4
float plane_k;//0x8
float plane_d;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_planes_block,0x10);
tag_block<s_planes_block> planes;//0x8
struct s_leaves_block
{
enum class e_flags : __int8
{
contains_doublesided_surfaces = FLAG(0),
};
e_flags flags;//0x0
unsigned __int8 bsp_2d_reference_count;//0x1
__int16 first_bsp_2d_reference;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_leaves_block,0x4);
tag_block<s_leaves_block> leaves;//0x10
struct s_bsp_2d_references_block
{
__int16 plane;//0x0
__int16 bsp_2d_node;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_bsp_2d_references_block,0x4);
tag_block<s_bsp_2d_references_block> bsp_2d_references;//0x18
struct s_bsp_2d_nodes_block
{
float plane_i;//0x0
float plane_j;//0x4
float plane_d;//0x8
__int16 left_child;//0xC
__int16 right_child;//0xE
};
TAG_BLOCK_SIZE_ASSERT(s_bsp_2d_nodes_block,0x10);
tag_block<s_bsp_2d_nodes_block> bsp_2d_nodes;//0x20
struct s_surfaces_block
{
__int16 plane;//0x0
__int16 first_edge;//0x2
enum class e_flags : __int8
{
twosided = FLAG(0),
invisible = FLAG(1),
climbable = FLAG(2),
breakable = FLAG(3),
invalid = FLAG(4),
conveyor = FLAG(5),
};
e_flags flags;//0x4
unsigned __int8 breakable_surface_index;//0x5
__int16 material_index;//0x6
};
TAG_BLOCK_SIZE_ASSERT(s_surfaces_block,0x8);
tag_block<s_surfaces_block> surfaces;//0x28
struct s_edges_block
{
__int16 start_vertex;//0x0
__int16 end_vertex;//0x2
__int16 forward_edge;//0x4
__int16 backward_edge;//0x6
__int16 left_surface;//0x8
__int16 right_surface;//0xA
};
TAG_BLOCK_SIZE_ASSERT(s_edges_block,0xC);
tag_block<s_edges_block> edges;//0x30
struct s_vertices_block
{
float point_x;//0x0
float point_y;//0x4
float point_z;//0x8
__int16 first_edge;//0xC
__int16 unknown;//0xE
};
TAG_BLOCK_SIZE_ASSERT(s_vertices_block,0x10);
tag_block<s_vertices_block> vertices;//0x38
float unknown;//0x40
};
TAG_BLOCK_SIZE_ASSERT(s_collision_bsp_block,0x44);
tag_block<s_collision_bsp_block> collision_bsp;//0x14
float vehicle_floor;//0x1C
float vehicle_ceiling;//0x20
PAD(0x8);//0x24
struct s_leaves_block
{
__int16 cluster;//0x0
__int16 surface_reference_count;//0x2
__int32 first_surface_refrence_index;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_leaves_block,0x8);
tag_block<s_leaves_block> leaves;//0x2C
float world_bounds_x_min;//0x34
float world_bounds_x_max;//0x38
float world_bounds_y_min;//0x3C
float world_bounds_y_max;//0x40
float world_bounds_z_min;//0x44
float world_bounds_z_max;//0x48
struct s_surface_references_block
{
__int16 strip_index;//0x0
__int16 lightmap_triangle_index;//0x2
__int32 bsp_node_index;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_surface_references_block,0x8);
tag_block<s_surface_references_block> surface_references;//0x4C
data_block cluster_data;//0x54
struct s_cluster_portals_block
{
__int16 back_cluster;//0x0
__int16 front_cluster;//0x2
__int32 plane_index;//0x4
float centroid_x;//0x8
float centroid_y;//0xC
float centroid_z;//0x10
float bounding_radius;//0x14
enum class e_flags : __int32
{
ai_cannot_hear_through_this = FLAG(0),
oneway = FLAG(1),
door = FLAG(2),
noway = FLAG(3),
oneway_reversed = FLAG(4),
no_one_can_hear_through_this = FLAG(5),
};
e_flags flags;//0x18
struct s_vertices_block
{
float point_x;//0x0
float point_y;//0x4
float point_z;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_vertices_block,0xC);
tag_block<s_vertices_block> vertices;//0x1C
};
TAG_BLOCK_SIZE_ASSERT(s_cluster_portals_block,0x24);
tag_block<s_cluster_portals_block> cluster_portals;//0x5C
struct s_fog_planes_block
{
__int16 scenario_planar_fog_index;//0x0
__int16 unknown;//0x2
float plane_i;//0x4
float plane_j;//0x8
float plane_k;//0xC
float plane_d;//0x10
enum class e_flags : __int16
{
extend_infinitely_while_visible = FLAG(0),
do_not_floodfill = FLAG(1),
aggressive_floodfill = FLAG(2),
};
e_flags flags;//0x14
__int16 priority;//0x16
};
TAG_BLOCK_SIZE_ASSERT(s_fog_planes_block,0x18);
tag_block<s_fog_planes_block> fog_planes;//0x64
PAD(0x18);//0x6C
struct s_weather_palette_block
{
string32 name;//0x0
tag_reference weather_system;//0x20
__int16 unknown;//0x28
__int16 unknown;//0x2A
__int32 unknown;//0x2C
__int32 unknown;//0x30
__int32 unknown;//0x34
__int32 unknown;//0x38
__int32 unknown;//0x3C
__int32 unknown;//0x40
__int32 unknown;//0x44
__int32 unknown;//0x48
tag_reference wind;//0x4C
float wind_direction_i;//0x54
float wind_direction_j;//0x58
float wind_direction_k;//0x5C
float wind_magnitude;//0x60
string_id wind_scale_function;//0x64
PAD(0x10);//0x68
};
TAG_BLOCK_SIZE_ASSERT(s_weather_palette_block,0x78);
tag_block<s_weather_palette_block> weather_palette;//0x84
struct s_weather_polyhedra_block
{
float bounding_sphere_center_x;//0x0
float bounding_sphere_center_y;//0x4
float bounding_sphere_center_z;//0x8
float bounding_sphere_radius;//0xC
struct s_planes_block
{
angle plane_i;//0x0
angle plane_j;//0x4
angle plane_k;//0x8
angle plane_d;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_planes_block,0x10);
tag_block<s_planes_block> planes;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_weather_polyhedra_block,0x18);
tag_block<s_weather_polyhedra_block> weather_polyhedra;//0x8C
struct s_detail_objects_block
{
struct s_cells_block
{
__int16 unknown;//0x0
__int16 unknown;//0x2
__int16 unknown;//0x4
__int16 unknown;//0x6
__int32 unknown;//0x8
__int32 unknown;//0xC
__int32 unknown;//0x10
PAD(0xC);//0x14
};
TAG_BLOCK_SIZE_ASSERT(s_cells_block,0x20);
tag_block<s_cells_block> cells;//0x0
struct s_instances_block
{
__int8 unknown;//0x0
__int8 unknown;//0x1
__int8 unknown;//0x2
__int8 unknown;//0x3
__int16 unknown;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_instances_block,0x6);
tag_block<s_instances_block> instances;//0x8
struct s_counts_block
{
__int16 unknown;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_counts_block,0x2);
tag_block<s_counts_block> counts;//0x10
struct s_z_reference_vectors_block
{
float unknown;//0x0
float unknown;//0x4
float unknown;//0x8
float unknown;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_z_reference_vectors_block,0x10);
tag_block<s_z_reference_vectors_block> z_reference_vectors;//0x18
__int8 unknown;//0x20
__int8 unknown;//0x21
__int16 unknown;//0x22
};
TAG_BLOCK_SIZE_ASSERT(s_detail_objects_block,0x24);
tag_block<s_detail_objects_block> detail_objects;//0x94
struct s_clusters_block
{
unsigned __int16 total_vertex_count;//0x0
unsigned __int16 total_triangle_count;//0x2
unsigned __int16 total_part_count;//0x4
unsigned __int16 shadowcasting_triangle_count;//0x6
unsigned __int16 shadowcasting_part_count;//0x8
unsigned __int16 opaque_point_count;//0xA
unsigned __int16 opaque_vertex_count;//0xC
unsigned __int16 opaque_part_count;//0xE
unsigned __int16 opaque_max_nodesvertex;//0x10
unsigned __int16 shadowcasting_rigid_triangle_count;//0x12
enum class e_geometry_classification : __int16
{
worldspace = 0,
rigid = 1,
rigid_boned = 2,
skinned = 3,
unsupported_reimport = 4,
};
e_geometry_classification geometry_classification;//0x14
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
e_geometry_compression_flags geometry_compression_flags;//0x16
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
tag_block<s_compression_info_block> compression_info;//0x18
unsigned __int8 hardware_node_count;//0x20
unsigned __int8 node_map_size;//0x21
unsigned __int16 software_plane_sount;//0x22
unsigned __int16 total_subpart_count;//0x24
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
e_section_lighting_flags section_lighting_flags;//0x26
unsigned __int32 block_offset;//0x28
unsigned __int32 block_size;//0x2C
unsigned __int32 section_data_size;//0x30
unsigned __int32 resource_data_size;//0x34
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
tag_block<s_resources_block> resources;//0x38
tag_referenceN model;//0x40
__int16 owner_tag_section_offset;//0x44
__int16 unknown;//0x46
PAD(0x4);//0x48
struct s_cluster_data_block
{
struct s_parts_block
{
enum class e_type : __int16
{
not_drawn = 0,
opaque_shadow_only = 1,
opaque_shadowcasting = 2,
opaque_nonshadowing = 3,
transparent = 4,
lightmap_only = 5,
};
e_type type;//0x0
enum class e_flags : __int16
{
decalable = FLAG(0),
new_part_types = FLAG(1),
dislikes_photons = FLAG(2),
override_triangle_list = FLAG(3),
ignored_by_lightmapper = FLAG(4),
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
e_flags flags;//0x2
__int16 material_index;//0x4
__int16 strip_start_index;//0x6
__int16 strip_length;//0x8
__int16 first_subpart_index;//0xA
__int16 subpart_count;//0xC
__int8 max_nodesvertex;//0xE
__int8 contributing_compound_node_count;//0xF
float position_x;//0x10
float position_y;//0x14
float position_z;//0x18
__int8 node_index;//0x1C
__int8 node_index;//0x1D
__int8 node_index;//0x1E
__int8 node_index;//0x1F
float node_weight;//0x20
float node_weight;//0x24
float node_weight;//0x28
float lod_mipmap_magic;//0x2C
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-32);//0x30
};
TAG_BLOCK_SIZE_ASSERT(s_parts_block,0x10);
tag_block<s_parts_block> parts;//0x0
struct s_subparts_block
{
__int16 indices_start_index;//0x0
__int16 indices_length;//0x2
__int16 visibility_bounds_index;//0x4
__int16 part_index;//0x6
};
TAG_BLOCK_SIZE_ASSERT(s_subparts_block,0x8);
tag_block<s_subparts_block> subparts;//0x8
struct s_visibility_bounds_block
{
float position_x;//0x0
float position_y;//0x4
float position_z;//0x8
float radius;//0xC
__int8 node_0;//0x10
__int8 unknown;//0x11
__int8 unknown;//0x12
__int8 unknown;//0x13
};
TAG_BLOCK_SIZE_ASSERT(s_visibility_bounds_block,0x14);
tag_block<s_visibility_bounds_block> visibility_bounds;//0x10
struct s_raw_vertices_block
{
float position_x;//0x0
float position_y;//0x4
float position_z;//0x8
__int32 node_index_old;//0xC
__int32 node_index_old;//0x10
__int32 node_index_old;//0x14
__int32 node_index_old;//0x18
float node_weight;//0x1C
float node_weight;//0x20
float node_weight;//0x24
float node_weight;//0x28
__int32 node_index_new;//0x2C
__int32 node_index_new;//0x30
__int32 node_index_new;//0x34
__int32 node_index_new;//0x38
__int32 use_new_node_indices;//0x3C
__int32 adjusted_compound_node_index;//0x40
float texcoord_x;//0x44
float texcoord_y;//0x48
float normal_i;//0x4C
float normal_j;//0x50
float normal_k;//0x54
float binormal_i;//0x58
float binormal_j;//0x5C
float binormal_k;//0x60
float tangent_i;//0x64
float tangent_j;//0x68
float tangent_k;//0x6C
float anisotropic_binormal_i;//0x70
float anisotropic_binormal_j;//0x74
float anisotropic_binormal_k;//0x78
float secondary_texcoord_x;//0x7C
float secondary_texcoord_y;//0x80
PAD(0x4);//0x84
float primary_lightmap_texcoord_x;//0x88
float primary_lightmap_texcoord_y;//0x8C
float primary_lightmap_incident_direction_i;//0x90
float primary_lightmap_incident_direction_j;//0x94
float primary_lightmap_incident_direction_k;//0x98
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-140);//0x9C
};
TAG_BLOCK_SIZE_ASSERT(s_raw_vertices_block,0x10);
tag_block<s_raw_vertices_block> raw_vertices;//0x18
struct s_strip_indices_block
{
__int16 index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_strip_indices_block,0x2);
tag_block<s_strip_indices_block> strip_indices;//0x20
data_block visibility_mopp_codes;//0x28
struct s_mopp_reorder_table_block
{
__int16 index;//0x0
PAD(0x1);//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_mopp_reorder_table_block,0x3);
tag_block<s_mopp_reorder_table_block> mopp_reorder_table;//0x30
struct s_vertex_buffers_block
{
PAD(0x20);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_vertex_buffers_block,0x20);
tag_block<s_vertex_buffers_block> vertex_buffers;//0x38
};
TAG_BLOCK_SIZE_ASSERT(s_cluster_data_block,0x40);
tag_block<s_cluster_data_block> cluster_data;//0x4C
float bounds_x_min;//0x54
float bounds_x_max;//0x58
float bounds_y_min;//0x5C
float bounds_y_max;//0x60
float bounds_z_min;//0x64
float bounds_z_max;//0x68
__int8 scenario_sky_index;//0x6C
__int8 media_index;//0x6D
__int8 scenario_visible_sky_index;//0x6E
__int8 scenario_atmospheric_fog_index;//0x6F
__int8 planar_fog_designator;//0x70
__int8 visible_fog_plane_index;//0x71
__int16 background_sound_index;//0x72
__int16 sound_environment_index;//0x74
__int16 weather_index;//0x76
__int16 transition_structure_bsp;//0x78
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-2);//0x7A
__int16 unknown;//0x78
PAD(0x2);//0x7A
__int16 unknown;//0x7C
__int16 unknown;//0x7E
enum class e_flags : __int16
{
oneway_portal = FLAG(0),
door_portal = FLAG(1),
postprocessed_geometry = FLAG(2),
is_the_sky = FLAG(3),
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
e_flags flags;//0x80
__int16 unknown;//0x82
struct s_predicted_resources_block
{
enum class e_type : __int16
{
bitmap = 0,
sound = 1,
render_model_geometry = 2,
cluster_geometry = 3,
cluster_instanced_geometry = 4,
lightmap_geometry_object_buckets = 5,
lightmap_geometry_instance_buckets = 6,
lightmap_cluster_bitmaps = 7,
lightmap_instance_bitmaps = 8,
};
e_type type;//0x0
__int16 resource_index;//0x2
PAD(0x3C);//0x4
tag_referenceN tag_index;//0x40
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-60);//0x44
};
TAG_BLOCK_SIZE_ASSERT(s_predicted_resources_block,0x8);
tag_block<s_predicted_resources_block> predicted_resources;//0x84
struct s_portals_block
{
__int16 portal_index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_portals_block,0x2);
tag_block<s_portals_block> portals;//0x8C
__int32 checksum_from_structure;//0x94
struct s_instanced_geometry_indeces_block
{
__int16 instanced_geometry_index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_instanced_geometry_indeces_block,0x2);
tag_block<s_instanced_geometry_indeces_block> instanced_geometry_indeces;//0x98
struct s_index_reorder_table_block
{
__int16 index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_index_reorder_table_block,0x2);
tag_block<s_index_reorder_table_block> index_reorder_table;//0xA0
data_block collision_mopp_codes;//0xA8
};
TAG_BLOCK_SIZE_ASSERT(s_clusters_block,0xB0);
tag_block<s_clusters_block> clusters;//0x9C
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
tag_block<s_materials_block> materials;//0xA4
struct s_sky_owner_cluster_block
{
__int16 cluster_owner;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_sky_owner_cluster_block,0x2);
tag_block<s_sky_owner_cluster_block> sky_owner_cluster;//0xAC
struct s_conveyor_surfaces_block
{
float u_i;//0x0
float u_j;//0x4
float u_k;//0x8
float v_i;//0xC
float v_j;//0x10
float v_k;//0x14
};
TAG_BLOCK_SIZE_ASSERT(s_conveyor_surfaces_block,0x18);
tag_block<s_conveyor_surfaces_block> conveyor_surfaces;//0xB4
struct s_breakable_surfaces_block
{
__int16 instanced_geometry_instance;//0x0
__int16 breakable_surface_index;//0x2
float centroid_x;//0x4
float centroid_y;//0x8
float centroid_z;//0xC
float radius;//0x10
__int32 collision_surface_index;//0x14
};
TAG_BLOCK_SIZE_ASSERT(s_breakable_surfaces_block,0x18);
tag_block<s_breakable_surfaces_block> breakable_surfaces;//0xBC
struct s_pathfinding_data_block
{
struct s_sectors_block
{
enum class e_pathfinding_sector_flags : __int16
{
sector_walkable = FLAG(0),
sector_breakable = FLAG(1),
sector_mobile = FLAG(2),
sector_bsp_source = FLAG(3),
floor = FLAG(4),
ceiling = FLAG(5),
wall_north = FLAG(6),
wall_south = FLAG(7),
wall_east = FLAG(8),
wall_west = FLAG(9),
crouchable = FLAG(10),
aligned = FLAG(11),
sector_step = FLAG(12),
sector_interior = FLAG(13),
};
e_pathfinding_sector_flags pathfinding_sector_flags;//0x0
__int16 hint_index;//0x2
__int32 first_link;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_sectors_block,0x8);
tag_block<s_sectors_block> sectors;//0x0
struct s_links_block
{
__int16 vertex_1;//0x0
__int16 vertex_2;//0x2
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-4);//0x4
enum class e_link_flags : __int16
{
sector_link_from_collision_edge = FLAG(0),
sector_intersection_link = FLAG(1),
sector_link_bsp2d_creation_error = FLAG(2),
sector_link_topology_error = FLAG(3),
sector_link_chain_error = FLAG(4),
sector_link_both_sectors_walkable = FLAG(5),
sector_link_magic_hanging_link = FLAG(6),
sector_link_threshold = FLAG(7),
sector_link_crouchable = FLAG(8),
sector_link_wall_base = FLAG(9),
sector_link_ledge = FLAG(10),
sector_link_leanable = FLAG(11),
sector_link_start_corner = FLAG(12),
sector_link_end_corner = FLAG(13),
};
e_link_flags link_flags;//0x0
PAD(0x4);//0x2
__int16 hint_index;//0x6
__int16 forward_link;//0x8
__int16 reverse_link;//0xA
__int16 left_sector;//0xC
__int16 right_sector;//0xE
};
TAG_BLOCK_SIZE_ASSERT(s_links_block,0x10);
tag_block<s_links_block> links;//0x8
struct s_refs_block
{
__int32 node_ref_or_sector_ref;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_refs_block,0x4);
tag_block<s_refs_block> refs;//0x10
struct s_bsp_2d_nodes_block
{
float plane_i;//0x0
float plane_j;//0x4
float plane_d;//0x8
__int16 left_child;//0xC
__int16 right_child;//0xE
__int16 unknown;//0x10
__int16 unknown;//0x12
};
TAG_BLOCK_SIZE_ASSERT(s_bsp_2d_nodes_block,0x14);
tag_block<s_bsp_2d_nodes_block> bsp_2d_nodes;//0x18
struct s_surface_flags_block
{
__int32 flags;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_surface_flags_block,0x4);
tag_block<s_surface_flags_block> surface_flags;//0x20
struct s_vertices_block
{
float point_x;//0x0
float point_y;//0x4
float point_z;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_vertices_block,0xC);
tag_block<s_vertices_block> vertices;//0x28
struct s_object_refs_block
{
enum class e_flags : __int16
{
mobile = FLAG(0),
};
e_flags flags;//0x0
__int16 unknown;//0x2
__int32 first_sector;//0x4
__int32 last_sector;//0x8
struct s_bsps_block
{
__int32 bsp_reference;//0x0
__int32 first_sector;//0x4
__int32 last_sector;//0x8
__int16 node_index;//0xC
__int16 unknown;//0xE
};
TAG_BLOCK_SIZE_ASSERT(s_bsps_block,0x10);
tag_block<s_bsps_block> bsps;//0xC
struct s_nodes_block
{
__int16 reference_frame_index;//0x0
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-2);//0x2
unsigned __int8 projection_axis;//0x0
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-1);//0x1
__int8 projection_sign;//0x0
PAD(0x3);//0x1
};
TAG_BLOCK_SIZE_ASSERT(s_nodes_block,0x4);
tag_block<s_nodes_block> nodes;//0x14
};
TAG_BLOCK_SIZE_ASSERT(s_object_refs_block,0x1C);
tag_block<s_object_refs_block> object_refs;//0x30
struct s_pathfinding_hints_block
{
enum class e_hint_type : __int16
{
intersection_link = 0,
jump_link = 1,
climb_link = 2,
vault_link = 3,
mount_link = 4,
hoist_link = 5,
wall_jump_link = 6,
breakable_floor = 7,
};
e_hint_type hint_type;//0x0
__int16 next_hint_index;//0x2
__int16 hint_data_0;//0x4
__int16 hint_data_1;//0x6
__int16 hint_data_2;//0x8
__int16 hint_data_3;//0xA
__int16 hint_data_4;//0xC
__int16 hint_data_5;//0xE
__int16 hint_data_6;//0x10
__int16 hint_data_7;//0x12
};
TAG_BLOCK_SIZE_ASSERT(s_pathfinding_hints_block,0x14);
tag_block<s_pathfinding_hints_block> pathfinding_hints;//0x38
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-24);//0x40
struct s_instanced_geometry_refs_block
{
__int16 pathfinding_object_index;//0x0
__int16 unknown;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_instanced_geometry_refs_block,0x4);
tag_block<s_instanced_geometry_refs_block> instanced_geometry_refs;//0x28
PAD(0x18);//0x30
__int32 structure_checksum;//0x48
PAD(0x20);//0x4C
struct s_user_placed_hints_block
{
struct s_point_geometry_block
{
float point_x;//0x0
float point_y;//0x4
float point_z;//0x8
__int16 reference_frame;//0xC
__int16 unknown;//0xE
};
TAG_BLOCK_SIZE_ASSERT(s_point_geometry_block,0x10);
tag_block<s_point_geometry_block> point_geometry;//0x0
struct s_ray_geometry_block
{
float point_x;//0x0
float point_y;//0x4
float point_z;//0x8
__int16 reference_frame;//0xC
__int16 unknown;//0xE
angle vector_i;//0x10
angle vector_j;//0x14
angle vector_k;//0x18
};
TAG_BLOCK_SIZE_ASSERT(s_ray_geometry_block,0x1C);
tag_block<s_ray_geometry_block> ray_geometry;//0x8
struct s_line_segment_geometry_block
{
enum class e_flags : __int32
{
bidirectional = FLAG(0),
closed = FLAG(1),
};
e_flags flags;//0x0
float point_0_x;//0x4
float point_0_y;//0x8
float point_0_z;//0xC
__int16 reference_frame;//0x10
__int16 unknown;//0x12
float point_1_x;//0x14
float point_1_y;//0x18
float point_1_z;//0x1C
__int16 reference_frame;//0x20
__int16 unknown;//0x22
};
TAG_BLOCK_SIZE_ASSERT(s_line_segment_geometry_block,0x24);
tag_block<s_line_segment_geometry_block> line_segment_geometry;//0x10
struct s_parallelogram_geometry_block
{
enum class e_flags : __int32
{
bidirectional = FLAG(0),
closed = FLAG(1),
};
e_flags flags;//0x0
float point_0_x;//0x4
float point_0_y;//0x8
float point_0_z;//0xC
__int16 reference_frame;//0x10
__int16 unknown;//0x12
float point_1_x;//0x14
float point_1_y;//0x18
float point_1_z;//0x1C
__int16 reference_frame;//0x20
__int16 unknown;//0x22
float point_2_x;//0x24
float point_2_y;//0x28
float point_2_z;//0x2C
__int16 reference_frame;//0x30
__int16 unknown;//0x32
float point_3_x;//0x34
float point_3_y;//0x38
float point_3_z;//0x3C
__int16 reference_frame;//0x40
__int16 unknown;//0x42
};
TAG_BLOCK_SIZE_ASSERT(s_parallelogram_geometry_block,0x44);
tag_block<s_parallelogram_geometry_block> parallelogram_geometry;//0x18
struct s_polygon_geometry_block
{
enum class e_flags : __int32
{
bidirectional = FLAG(0),
closed = FLAG(1),
};
e_flags flags;//0x0
struct s_points_block
{
float point_x;//0x0
float point_y;//0x4
float point_z;//0x8
__int16 reference_frame;//0xC
__int16 unknown;//0xE
};
TAG_BLOCK_SIZE_ASSERT(s_points_block,0x10);
tag_block<s_points_block> points;//0x4
PAD(0x4);//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_polygon_geometry_block,0x10);
tag_block<s_polygon_geometry_block> polygon_geometry;//0x20
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-8);//0x28
struct s_jump_hints_block
{
enum class e_flags : __int16
{
bidirectional = FLAG(0),
closed = FLAG(1),
};
e_flags flags;//0x0
__int16 geometry_index;//0x2
enum class e_force_jump_height : __int16
{
none = 0,
down = 1,
step = 2,
crouch = 3,
stand = 4,
storey = 5,
tower = 6,
infinite = 7,
};
e_force_jump_height force_jump_height;//0x4
enum class e_control_flags : __int16
{
magic_lift = FLAG(0),
};
e_control_flags control_flags;//0x6
};
TAG_BLOCK_SIZE_ASSERT(s_jump_hints_block,0x8);
tag_block<s_jump_hints_block> jump_hints;//0x20
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-8);//0x28
struct s_climb_hints_block
{
enum class e_flags : __int16
{
bidirectional = FLAG(0),
closed = FLAG(1),
};
e_flags flags;//0x0
__int16 geometry_index;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_climb_hints_block,0x4);
tag_block<s_climb_hints_block> climb_hints;//0x20
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-8);//0x28
struct s_well_hints_block
{
enum class e_flags : __int32
{
bidirectional = FLAG(0),
};
e_flags flags;//0x0
struct s_points_block
{
enum class e_type : __int16
{
jump = 0,
climb = 1,
hoist = 2,
};
e_type type;//0x0
__int16 unknown;//0x2
float point_x;//0x4
float point_y;//0x8
float point_z;//0xC
__int16 reference_frame;//0x10
__int16 unknown;//0x12
__int32 sector_index;//0x14
angle normal_i;//0x18
angle normal_j;//0x1C
};
TAG_BLOCK_SIZE_ASSERT(s_points_block,0x20);
tag_block<s_points_block> points;//0x4
PAD(0x4);//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_well_hints_block,0x10);
tag_block<s_well_hints_block> well_hints;//0x20
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-8);//0x28
struct s_flight_hints_block
{
struct s_points_block
{
float point_x;//0x0
float point_y;//0x4
float point_z;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_points_block,0xC);
tag_block<s_points_block> points;//0x0
PAD(0x4);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_flight_hints_block,0xC);
tag_block<s_flight_hints_block> flight_hints;//0x20
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-8);//0x28
};
TAG_BLOCK_SIZE_ASSERT(s_user_placed_hints_block,0x20);
tag_block<s_user_placed_hints_block> user_placed_hints;//0x6C
};
TAG_BLOCK_SIZE_ASSERT(s_pathfinding_data_block,0x74);
tag_block<s_pathfinding_data_block> pathfinding_data;//0xC4
struct s_pathfinding_edges_block
{
PAD(0xE);//0x0
__int8 midpoint;//0xE
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-14);//0xF
};
TAG_BLOCK_SIZE_ASSERT(s_pathfinding_edges_block,0x1);
tag_block<s_pathfinding_edges_block> pathfinding_edges;//0xCC
struct s_background_sound_palette_block
{
string32 name;//0x0
tag_reference background_sound;//0x20
tag_reference inside_cluster_sound;//0x28
float cutoff_distance;//0x30
enum class e_scale_flags : __int32
{
override_default_scale = FLAG(0),
use_adjacent_cluster_as_portal_scale = FLAG(1),
use_adjacent_cluster_as_exterior_scale = FLAG(2),
scale_with_weather_intensity = FLAG(3),
};
e_scale_flags scale_flags;//0x34
float interior_scale;//0x38
float portal_scale;//0x3C
float exterior_scale;//0x40
float interpolation_speed;//0x44
PAD(0x10);//0x48
float unknown;//0x58
PAD(0x8);//0x5C
};
TAG_BLOCK_SIZE_ASSERT(s_background_sound_palette_block,0x64);
tag_block<s_background_sound_palette_block> background_sound_palette;//0xD4
struct s_sound_environment_palette_block
{
string32 name;//0x0
tag_reference sound_environment;//0x20
float cutoff_distance;//0x28
float interpolation_speed;//0x2C
PAD(0x18);//0x30
};
TAG_BLOCK_SIZE_ASSERT(s_sound_environment_palette_block,0x48);
tag_block<s_sound_environment_palette_block> sound_environment_palette;//0xDC
data_block sound_pas_data;//0xE4
struct s_markers_block
{
string32 name;//0x0
float rotation_i;//0x20
float rotation_j;//0x24
float rotation_k;//0x28
float rotation_w;//0x2C
float position_x;//0x30
float position_y;//0x34
float position_z;//0x38
};
TAG_BLOCK_SIZE_ASSERT(s_markers_block,0x3C);
tag_block<s_markers_block> markers;//0xEC
struct s_runtime_decals_block
{
float unknown;//0x0
float unknown;//0x4
float unknown;//0x8
PAD(0x4);//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_runtime_decals_block,0x10);
tag_block<s_runtime_decals_block> runtime_decals;//0xF4
struct s_environment_object_palette_block
{
tag_reference definition;//0x0
tag_reference model;//0x8
enum class e_object_type : __int32
{
biped = FLAG(0),
vehicle = FLAG(1),
weapon = FLAG(2),
equipment = FLAG(3),
garbage = FLAG(4),
projectile = FLAG(5),
scenery = FLAG(6),
machine = FLAG(7),
control = FLAG(8),
light_fixture = FLAG(9),
sound_scenery = FLAG(10),
crate = FLAG(11),
creature = FLAG(12),
bit_13 = FLAG(13),
bit_14 = FLAG(14),
bit_15 = FLAG(15),
bit_16 = FLAG(16),
bit_17 = FLAG(17),
bit_18 = FLAG(18),
bit_19 = FLAG(19),
bit_20 = FLAG(20),
bit_21 = FLAG(21),
bit_22 = FLAG(22),
bit_23 = FLAG(23),
bit_24 = FLAG(24),
bit_25 = FLAG(25),
bit_26 = FLAG(26),
bit_27 = FLAG(27),
bit_28 = FLAG(28),
bit_29 = FLAG(29),
bit_30 = FLAG(30),
bit_31 = FLAG(31),
};
e_object_type object_type;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_environment_object_palette_block,0x14);
tag_block<s_environment_object_palette_block> environment_object_palette;//0xFC
struct s_environment_objects_block
{
string32 name;//0x0
float rotation_i;//0x20
float rotation_j;//0x24
float rotation_k;//0x28
float rotation_w;//0x2C
float translation_x;//0x30
float translation_y;//0x34
float translation_z;//0x38
__int16 palette_index;//0x3C
__int16 unknown;//0x3E
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-2);//0x40
__int32 unique_id;//0x3E
__int16 exported_object_type;//0x42
string32 scenario_object_name;//0x44
PAD(0x4);//0x64
};
TAG_BLOCK_SIZE_ASSERT(s_environment_objects_block,0x68);
tag_block<s_environment_objects_block> environment_objects;//0x104
PAD(0x2C);//0x10C
struct s_instanced_geometry_definitions_block
{
unsigned __int16 total_vertex_count;//0x0
unsigned __int16 total_triangle_count;//0x2
unsigned __int16 total_part_count;//0x4
unsigned __int16 shadowcasting_triangle_count;//0x6
unsigned __int16 shadowcasting_part_count;//0x8
unsigned __int16 opaque_point_count;//0xA
unsigned __int16 opaque_vertex_count;//0xC
unsigned __int16 opaque_part_count;//0xE
unsigned __int16 opaque_max_nodesvertex;//0x10
unsigned __int16 shadowcasting_rigid_triangle_count;//0x12
enum class e_geometry_classification : __int16
{
worldspace = 0,
rigid = 1,
rigid_boned = 2,
skinned = 3,
unsupported_reimport = 4,
};
e_geometry_classification geometry_classification;//0x14
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
e_geometry_compression_flags geometry_compression_flags;//0x16
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
tag_block<s_compression_info_block> compression_info;//0x18
unsigned __int8 hardware_node_count;//0x20
unsigned __int8 node_map_size;//0x21
unsigned __int16 software_plane_sount;//0x22
unsigned __int16 total_subpart_count;//0x24
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
e_section_lighting_flags section_lighting_flags;//0x26
unsigned __int32 block_offset;//0x28
unsigned __int32 block_size;//0x2C
unsigned __int32 section_data_size;//0x30
unsigned __int32 resource_data_size;//0x34
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
tag_block<s_resources_block> resources;//0x38
tag_referenceN model;//0x40
__int16 owner_tag_section_offset;//0x44
__int16 unknown;//0x46
PAD(0x4);//0x48
struct s_render_data_block
{
struct s_parts_block
{
enum class e_type : __int16
{
not_drawn = 0,
opaque_shadow_only = 1,
opaque_shadowcasting = 2,
opaque_nonshadowing = 3,
transparent = 4,
lightmap_only = 5,
};
e_type type;//0x0
enum class e_flags : __int16
{
decalable = FLAG(0),
new_part_types = FLAG(1),
dislikes_photons = FLAG(2),
override_triangle_list = FLAG(3),
ignored_by_lightmapper = FLAG(4),
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
e_flags flags;//0x2
__int16 material_index;//0x4
__int16 strip_start_index;//0x6
__int16 strip_length;//0x8
__int16 first_subpart_index;//0xA
__int16 subpart_count;//0xC
__int8 max_nodesvertex;//0xE
__int8 contributing_compound_node_count;//0xF
float position_x;//0x10
float position_y;//0x14
float position_z;//0x18
__int8 node_index;//0x1C
__int8 node_index;//0x1D
__int8 node_index;//0x1E
__int8 node_index;//0x1F
float node_weight;//0x20
float node_weight;//0x24
float node_weight;//0x28
float lod_mipmap_magic;//0x2C
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-32);//0x30
};
TAG_BLOCK_SIZE_ASSERT(s_parts_block,0x10);
tag_block<s_parts_block> parts;//0x0
struct s_subparts_block
{
__int16 indices_start_index;//0x0
__int16 indices_length;//0x2
__int16 visibility_bounds_index;//0x4
__int16 part_index;//0x6
};
TAG_BLOCK_SIZE_ASSERT(s_subparts_block,0x8);
tag_block<s_subparts_block> subparts;//0x8
struct s_visibility_bounds_block
{
float position_x;//0x0
float position_y;//0x4
float position_z;//0x8
float radius;//0xC
__int8 node_0;//0x10
__int8 unknown;//0x11
__int8 unknown;//0x12
__int8 unknown;//0x13
};
TAG_BLOCK_SIZE_ASSERT(s_visibility_bounds_block,0x14);
tag_block<s_visibility_bounds_block> visibility_bounds;//0x10
struct s_raw_vertices_block
{
float position_x;//0x0
float position_y;//0x4
float position_z;//0x8
__int32 node_index_old;//0xC
__int32 node_index_old;//0x10
__int32 node_index_old;//0x14
__int32 node_index_old;//0x18
float node_weight;//0x1C
float node_weight;//0x20
float node_weight;//0x24
float node_weight;//0x28
__int32 node_index_new;//0x2C
__int32 node_index_new;//0x30
__int32 node_index_new;//0x34
__int32 node_index_new;//0x38
__int32 use_new_node_indices;//0x3C
__int32 adjusted_compound_node_index;//0x40
float texcoord_x;//0x44
float texcoord_y;//0x48
float normal_i;//0x4C
float normal_j;//0x50
float normal_k;//0x54
float binormal_i;//0x58
float binormal_j;//0x5C
float binormal_k;//0x60
float tangent_i;//0x64
float tangent_j;//0x68
float tangent_k;//0x6C
float anisotropic_binormal_i;//0x70
float anisotropic_binormal_j;//0x74
float anisotropic_binormal_k;//0x78
float secondary_texcoord_x;//0x7C
float secondary_texcoord_y;//0x80
PAD(0x4);//0x84
float primary_lightmap_texcoord_x;//0x88
float primary_lightmap_texcoord_y;//0x8C
float primary_lightmap_incident_direction_i;//0x90
float primary_lightmap_incident_direction_j;//0x94
float primary_lightmap_incident_direction_k;//0x98
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-140);//0x9C
};
TAG_BLOCK_SIZE_ASSERT(s_raw_vertices_block,0x10);
tag_block<s_raw_vertices_block> raw_vertices;//0x18
struct s_strip_indices_block
{
__int16 index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_strip_indices_block,0x2);
tag_block<s_strip_indices_block> strip_indices;//0x20
data_block visibility_mopp_codes;//0x28
struct s_mopp_reorder_table_block
{
__int16 index;//0x0
PAD(0x1);//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_mopp_reorder_table_block,0x3);
tag_block<s_mopp_reorder_table_block> mopp_reorder_table;//0x30
struct s_vertex_buffers_block
{
PAD(0x20);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_vertex_buffers_block,0x20);
tag_block<s_vertex_buffers_block> vertex_buffers;//0x38
};
TAG_BLOCK_SIZE_ASSERT(s_render_data_block,0x40);
tag_block<s_render_data_block> render_data;//0x4C
struct s_index_reorder_table_block
{
__int16 index;//0x0
PAD(0x2);//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_index_reorder_table_block,0x4);
tag_block<s_index_reorder_table_block> index_reorder_table;//0x54
__int32 checksum;//0x5C
float bounding_sphere_x;//0x60
float bounding_sphere_y;//0x64
float bounding_sphere_z;//0x68
float bounding_sphere_radius;//0x6C
struct s_bsp_3d_nodes_block
{
PAD(0x8);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_bsp_3d_nodes_block,0x8);
tag_block<s_bsp_3d_nodes_block> bsp_3d_nodes;//0x70
struct s_planes_block
{
float plane_i;//0x0
float plane_j;//0x4
float plane_k;//0x8
float plane_d;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_planes_block,0x10);
tag_block<s_planes_block> planes;//0x78
struct s_leaves_block
{
enum class e_flags : __int8
{
contains_doublesided_surfaces = FLAG(0),
};
e_flags flags;//0x0
unsigned __int8 bsp_2d_reference_count;//0x1
__int16 first_bsp_2d_reference;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_leaves_block,0x4);
tag_block<s_leaves_block> leaves;//0x80
struct s_bsp_2d_references_block
{
__int16 plane;//0x0
__int16 bsp_2d_node;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_bsp_2d_references_block,0x4);
tag_block<s_bsp_2d_references_block> bsp_2d_references;//0x88
struct s_bsp_2d_nodes_block
{
float plane_i;//0x0
float plane_j;//0x4
float plane_d;//0x8
__int16 left_child;//0xC
__int16 right_child;//0xE
};
TAG_BLOCK_SIZE_ASSERT(s_bsp_2d_nodes_block,0x10);
tag_block<s_bsp_2d_nodes_block> bsp_2d_nodes;//0x90
struct s_surfaces_block
{
__int16 plane;//0x0
__int16 first_edge;//0x2
enum class e_flags : __int8
{
twosided = FLAG(0),
invisible = FLAG(1),
climable = FLAG(2),
breakable = FLAG(3),
invalid = FLAG(4),
conveyor = FLAG(5),
};
e_flags flags;//0x4
unsigned __int8 breakable_surface_index;//0x5
__int16 material_index;//0x6
};
TAG_BLOCK_SIZE_ASSERT(s_surfaces_block,0x8);
tag_block<s_surfaces_block> surfaces;//0x98
struct s_edges_block
{
__int16 start_vertex;//0x0
__int16 end_vertex;//0x2
__int16 forward_edge;//0x4
__int16 backward_edge;//0x6
__int16 left_surface;//0x8
__int16 right_surface;//0xA
};
TAG_BLOCK_SIZE_ASSERT(s_edges_block,0xC);
tag_block<s_edges_block> edges;//0xA0
struct s_vertices_block
{
float point_x;//0x0
float point_y;//0x4
float point_z;//0x8
__int16 first_edge;//0xC
__int16 unknown;//0xE
};
TAG_BLOCK_SIZE_ASSERT(s_vertices_block,0x10);
tag_block<s_vertices_block> vertices;//0xA8
struct s_bsp_physics_block
{
PAD(0x4);//0x0
__int16 size;//0x4
__int16 count;//0x6
PAD(0x10);//0x8
float unknown;//0x18
PAD(0x4);//0x1C
float unknown;//0x20
float unknown;//0x24
float unknown;//0x28
PAD(0x4);//0x2C
__int16 size;//0x30
__int16 count;//0x32
PAD(0x14);//0x34
__int16 size;//0x48
__int16 count;//0x4A
PAD(0x18);//0x4C
struct s_mopp_code_data_block
{
unsigned __int8 data;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_mopp_code_data_block,0x1);
tag_block<s_mopp_code_data_block> mopp_code_data;//0x64
PAD(0x4);//0x6C
};
TAG_BLOCK_SIZE_ASSERT(s_bsp_physics_block,0x70);
tag_block<s_bsp_physics_block> bsp_physics;//0xB0
struct s_render_leaves_block
{
__int16 cluster;//0x0
__int16 surface_reference_count;//0x2
__int32 first_surface_reference_index;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_render_leaves_block,0x8);
tag_block<s_render_leaves_block> render_leaves;//0xB8
struct s_surface_references_block
{
__int16 strip_index;//0x0
__int16 lightmap_triangle;//0x2
__int32 bsp_node_index;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_surface_references_block,0x8);
tag_block<s_surface_references_block> surface_references;//0xC0
};
TAG_BLOCK_SIZE_ASSERT(s_instanced_geometry_definitions_block,0xC8);
tag_block<s_instanced_geometry_definitions_block> instanced_geometry_definitions;//0x138
struct s_instanced_geometry_instances_block
{
float scale;//0x0
float forward_i;//0x4
float forward_j;//0x8
float forward_k;//0xC
float left_i;//0x10
float left_j;//0x14
float left_k;//0x18
float up_i;//0x1C
float up_j;//0x20
float up_k;//0x24
float position_x;//0x28
float position_y;//0x2C
float position_z;//0x30
__int16 instance_definition_index;//0x34
enum class e_flags : __int16
{
not_in_lightprobes = FLAG(0),
};
e_flags flags;//0x36
__int32 checksum;//0x38
PAD(0x14);//0x3C
string_id name;//0x50
enum class e_pathfinding_policy : __int16
{
cutout = 0,
static = 1,
none = 2,
};
e_pathfinding_policy pathfinding_policy;//0x54
enum class e_lightmapping_policy : __int16
{
per_pixel = 0,
per_vertex = 1,
};
e_lightmapping_policy lightmapping_policy;//0x56
};
TAG_BLOCK_SIZE_ASSERT(s_instanced_geometry_instances_block,0x58);
tag_block<s_instanced_geometry_instances_block> instanced_geometry_instances;//0x140
struct s_ambience_sound_clusters_block
{
__int16 unknown;//0x0
__int16 unknown;//0x2
struct s_enclosing_portal_designators_block
{
__int16 portal_designator;//0x0
PAD(0x2);//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_enclosing_portal_designators_block,0x4);
tag_block<s_enclosing_portal_designators_block> enclosing_portal_designators;//0x4
struct s_interior_cluster_indices_block
{
__int16 interior_cluster_index;//0x0
PAD(0x2);//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_interior_cluster_indices_block,0x4);
tag_block<s_interior_cluster_indices_block> interior_cluster_indices;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_ambience_sound_clusters_block,0x14);
tag_block<s_ambience_sound_clusters_block> ambience_sound_clusters;//0x148
struct s_reverb_sound_clusters_block
{
__int16 unknown;//0x0
__int16 unknown;//0x2
struct s_enclosing_portal_designators_block
{
__int16 portal_designator;//0x0
PAD(0x2);//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_enclosing_portal_designators_block,0x4);
tag_block<s_enclosing_portal_designators_block> enclosing_portal_designators;//0x4
struct s_interior_cluster_indices_block
{
__int16 interior_cluster_index;//0x0
PAD(0x2);//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_interior_cluster_indices_block,0x4);
tag_block<s_interior_cluster_indices_block> interior_cluster_indices;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_reverb_sound_clusters_block,0x14);
tag_block<s_reverb_sound_clusters_block> reverb_sound_clusters;//0x150
struct s_transparent_planes_block
{
__int16 section_index;//0x0
__int16 part_index;//0x2
float plane_i;//0x4
float plane_j;//0x8
float plane_k;//0xC
float plane_d;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_transparent_planes_block,0x14);
tag_block<s_transparent_planes_block> transparent_planes;//0x158
PAD(0x60);//0x160
float vehicle_sperical_limit_radius;//0x1C0
float vehicle_sperical_limit_x;//0x1C4
float vehicle_sperical_limit_y;//0x1C8
float vehicle_sperical_limit_z;//0x1CC
struct s_debug_info_block
{
PAD(0x40);//0x0
struct s_clusters_block
{
enum class e_errors : __int16
{
multiple_fog_planes = FLAG(0),
fog_zone_collision = FLAG(1),
fog_zone_immersion = FLAG(2),
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
e_errors errors;//0x0
enum class e_warnings : __int16
{
multiple_visible_fog_planes = FLAG(0),
visible_fog_cluster_omission = FLAG(1),
fog_plane_missed_render_bsp = FLAG(2),
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
e_warnings warnings;//0x2
PAD(0x1C);//0x4
struct s_lines_block
{
enum class e_type : __int16
{
fog_plane_boundary_edge = 0,
fog_plane_internal_edge = 1,
fog_zone_floodfill = 2,
fog_zone_cluster_centroid = 3,
fog_zone_cluster_geometry = 4,
fog_zone_portal_centroid = 5,
fog_zone_portal_geometry = 6,
};
e_type type;//0x0
__int16 code;//0x2
__int16 pad_thai;//0x4
__int16 unknown;//0x6
PAD(0x18);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_lines_block,0x20);
tag_block<s_lines_block> lines;//0x20
struct s_fog_plane_indices_block
{
__int32 index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_fog_plane_indices_block,0x4);
tag_block<s_fog_plane_indices_block> fog_plane_indices;//0x28
struct s_visible_fog_plane_indices_block
{
__int32 index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_visible_fog_plane_indices_block,0x4);
tag_block<s_visible_fog_plane_indices_block> visible_fog_plane_indices;//0x30
struct s_visible_fog_omission_cluster_indices_block
{
__int32 index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_visible_fog_omission_cluster_indices_block,0x4);
tag_block<s_visible_fog_omission_cluster_indices_block> visible_fog_omission_cluster_indices;//0x38
struct s_containing_fog_zone_indices_block
{
__int32 index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_containing_fog_zone_indices_block,0x4);
tag_block<s_containing_fog_zone_indices_block> containing_fog_zone_indices;//0x40
};
TAG_BLOCK_SIZE_ASSERT(s_clusters_block,0x48);
tag_block<s_clusters_block> clusters;//0x40
struct s_fog_planes_block
{
__int32 fog_zone_index;//0x0
PAD(0x18);//0x4
__int32 connected_plane_designator;//0x1C
struct s_lines_block
{
enum class e_type : __int16
{
fog_plane_boundary_edge = 0,
fog_plane_internal_edge = 1,
fog_zone_floodfill = 2,
fog_zone_cluster_centroid = 3,
fog_zone_cluster_geometry = 4,
fog_zone_portal_centroid = 5,
fog_zone_portal_geometry = 6,
};
e_type type;//0x0
__int16 code;//0x2
__int16 pad_thai;//0x4
__int16 unknown;//0x6
PAD(0x18);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_lines_block,0x20);
tag_block<s_lines_block> lines;//0x20
struct s_intersected_cluster_indices_block
{
__int32 index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_intersected_cluster_indices_block,0x4);
tag_block<s_intersected_cluster_indices_block> intersected_cluster_indices;//0x28
struct s_infinite_extent_cluster_indices_block
{
__int32 index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_infinite_extent_cluster_indices_block,0x4);
tag_block<s_infinite_extent_cluster_indices_block> infinite_extent_cluster_indices;//0x30
};
TAG_BLOCK_SIZE_ASSERT(s_fog_planes_block,0x38);
tag_block<s_fog_planes_block> fog_planes;//0x48
struct s_fog_zones_block
{
__int32 media_index:_scenario_fog_plane;//0x0
__int32 base_fog_plane_index;//0x4
PAD(0x18);//0x8
struct s_lines_block
{
enum class e_type : __int16
{
fog_plane_boundary_edge = 0,
fog_plane_internal_edge = 1,
fog_zone_floodfill = 2,
fog_zone_cluster_centroid = 3,
fog_zone_cluster_geometry = 4,
fog_zone_portal_centroid = 5,
fog_zone_portal_geometry = 6,
};
e_type type;//0x0
__int16 code;//0x2
__int16 pad_thai;//0x4
__int16 unknown;//0x6
PAD(0x18);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_lines_block,0x20);
tag_block<s_lines_block> lines;//0x20
struct s_immersed_cluster_indices_block
{
__int32 index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_immersed_cluster_indices_block,0x4);
tag_block<s_immersed_cluster_indices_block> immersed_cluster_indices;//0x28
struct s_bounding_fog_plane_indices_block
{
__int32 index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_bounding_fog_plane_indices_block,0x4);
tag_block<s_bounding_fog_plane_indices_block> bounding_fog_plane_indices;//0x30
struct s_collision_fog_plane_indices_block
{
__int32 index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_collision_fog_plane_indices_block,0x4);
tag_block<s_collision_fog_plane_indices_block> collision_fog_plane_indices;//0x38
};
TAG_BLOCK_SIZE_ASSERT(s_fog_zones_block,0x40);
tag_block<s_fog_zones_block> fog_zones;//0x50
};
TAG_BLOCK_SIZE_ASSERT(s_debug_info_block,0x58);
tag_block<s_debug_info_block> debug_info;//0x1D0
tag_reference decorators;//0x1D8
data_block mopp_codes;//0x1E0
PAD(0x4);//0x1E8
float mopp_bounds_min_x;//0x1EC
float mopp_bounds_min_y;//0x1F0
float mopp_bounds_min_z;//0x1F4
float mopp_bounds_max_x;//0x1F8
float mopp_bounds_max_y;//0x1FC
float mopp_bounds_max_z;//0x200
data_block breakable_surface_mopp_codes;//0x204
struct s_breakable_surface_key_table_block
{
__int16 instance_geometry_index;//0x0
__int16 breakable_surface_index;//0x2
__int32 seed_surface_index;//0x4
float x0;//0x8
float x1;//0xC
float y0;//0x10
float y1;//0x14
float z0;//0x18
float z1;//0x1C
};
TAG_BLOCK_SIZE_ASSERT(s_breakable_surface_key_table_block,0x20);
tag_block<s_breakable_surface_key_table_block> breakable_surface_key_table;//0x20C
struct s_water_definitions_block
{
tag_reference shader;//0x0
struct s_section_block
{
struct s_parts_block
{
enum class e_type : __int16
{
not_drawn = 0,
opaque_shadow_only = 1,
opaque_shadowcasting = 2,
opaque_nonshadowing = 3,
transparent = 4,
lightmap_only = 5,
};
e_type type;//0x0
enum class e_flags : __int16
{
decalable = FLAG(0),
new_part_types = FLAG(1),
dislikes_photons = FLAG(2),
override_triangle_list = FLAG(3),
ignored_by_lightmapper = FLAG(4),
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
e_flags flags;//0x2
__int16 material_index;//0x4
__int16 strip_start_index;//0x6
__int16 strip_length;//0x8
__int16 first_subpart_index;//0xA
__int16 subpart_count;//0xC
__int8 max_nodesvertex;//0xE
__int8 contributing_compound_node_count;//0xF
float position_x;//0x10
float position_y;//0x14
float position_z;//0x18
__int8 node_index;//0x1C
__int8 node_index;//0x1D
__int8 node_index;//0x1E
__int8 node_index;//0x1F
float node_weight;//0x20
float node_weight;//0x24
float node_weight;//0x28
float lod_mipmap_magic;//0x2C
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-32);//0x30
};
TAG_BLOCK_SIZE_ASSERT(s_parts_block,0x10);
tag_block<s_parts_block> parts;//0x0
struct s_subparts_block
{
__int16 indices_start_index;//0x0
__int16 indices_length;//0x2
__int16 visibility_bounds_index;//0x4
__int16 part_index;//0x6
};
TAG_BLOCK_SIZE_ASSERT(s_subparts_block,0x8);
tag_block<s_subparts_block> subparts;//0x8
struct s_visibility_bounds_block
{
float position_x;//0x0
float position_y;//0x4
float position_z;//0x8
float radius;//0xC
__int8 node_0;//0x10
__int8 unknown;//0x11
__int8 unknown;//0x12
__int8 unknown;//0x13
};
TAG_BLOCK_SIZE_ASSERT(s_visibility_bounds_block,0x14);
tag_block<s_visibility_bounds_block> visibility_bounds;//0x10
struct s_raw_vertices_block
{
float position_x;//0x0
float position_y;//0x4
float position_z;//0x8
__int32 node_index_old;//0xC
__int32 node_index_old;//0x10
__int32 node_index_old;//0x14
__int32 node_index_old;//0x18
float node_weight;//0x1C
float node_weight;//0x20
float node_weight;//0x24
float node_weight;//0x28
__int32 node_index_new;//0x2C
__int32 node_index_new;//0x30
__int32 node_index_new;//0x34
__int32 node_index_new;//0x38
__int32 use_new_node_indices;//0x3C
__int32 adjusted_compound_node_index;//0x40
float texcoord_x;//0x44
float texcoord_y;//0x48
float normal_i;//0x4C
float normal_j;//0x50
float normal_k;//0x54
float binormal_i;//0x58
float binormal_j;//0x5C
float binormal_k;//0x60
float tangent_i;//0x64
float tangent_j;//0x68
float tangent_k;//0x6C
float anisotropic_binormal_i;//0x70
float anisotropic_binormal_j;//0x74
float anisotropic_binormal_k;//0x78
float secondary_texcoord_x;//0x7C
float secondary_texcoord_y;//0x80
PAD(0x4);//0x84
float primary_lightmap_texcoord_x;//0x88
float primary_lightmap_texcoord_y;//0x8C
float primary_lightmap_incident_direction_i;//0x90
float primary_lightmap_incident_direction_j;//0x94
float primary_lightmap_incident_direction_k;//0x98
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-140);//0x9C
};
TAG_BLOCK_SIZE_ASSERT(s_raw_vertices_block,0x10);
tag_block<s_raw_vertices_block> raw_vertices;//0x18
struct s_strip_indices_block
{
__int16 index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_strip_indices_block,0x2);
tag_block<s_strip_indices_block> strip_indices;//0x20
data_block visibility_mopp_codes;//0x28
struct s_mopp_reorder_table_block
{
__int16 index;//0x0
PAD(0x1);//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_mopp_reorder_table_block,0x3);
tag_block<s_mopp_reorder_table_block> mopp_reorder_table;//0x30
struct s_vertex_buffers_block
{
PAD(0x20);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_vertex_buffers_block,0x20);
tag_block<s_vertex_buffers_block> vertex_buffers;//0x38
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-64);//0x40
};
TAG_BLOCK_SIZE_ASSERT(s_section_block,0x0);
tag_block<s_section_block> section;//0x8
__int32 block_offset;//0x10
__int32 block_size;//0x14
__int32 section_data_size;//0x18
__int32 resource_data_size;//0x1C
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
tag_block<s_resources_block> resources;//0x20
tag_referenceN model;//0x28
__int16 owner_tag_section_offset;//0x2C
__int16 unknown;//0x2E
PAD(0x4);//0x30
real_color_rgb sun_spot_color;//0x34
real_color_rgb reflection_tint;//0x40
real_color_rgb refraction_tint;//0x4C
real_color_rgb horizon_color;//0x58
float sun_specular_power;//0x64
float reflection_bump_scale;//0x68
float refraction_bump_scale;//0x6C
float fresnel_scale;//0x70
float sun_dir_heading;//0x74
float sun_dir_pitch;//0x78
float fov;//0x7C
float aspect;//0x80
float height;//0x84
float farz;//0x88
float rotate_offset;//0x8C
float center_i;//0x90
float center_j;//0x94
float extents_i;//0x98
float extents_j;//0x9C
float fog_near;//0xA0
float fog_far;//0xA4
float dynamic_height_bias;//0xA8
};
TAG_BLOCK_SIZE_ASSERT(s_water_definitions_block,0xAC);
tag_block<s_water_definitions_block> water_definitions;//0x214
struct s_portal_device_mapping_block
{
struct s_device_portal_association_block
{
__int32 unique_id;//0x0
__int16 origin_bsp_index;//0x4
enum class e_type : __int8
{
biped = 0,
vehicle = 1,
weapon = 2,
equipment = 3,
garbage = 4,
projectile = 5,
scenery = 6,
machine = 7,
control = 8,
light_fixture = 9,
sound_scenery = 10,
crate = 11,
creature = 12,
};
e_type type;//0x6
enum class e_source : __int8
{
editor = 0,
dynamic = 1,
legacy = 2,
};
e_source source;//0x7
__int16 first_game_potal_index;//0x8
__int16 game_portal_count;//0xA
};
TAG_BLOCK_SIZE_ASSERT(s_device_portal_association_block,0xC);
tag_block<s_device_portal_association_block> device_portal_association;//0x0
struct s_game_portal_to_portal_map_block
{
__int16 portal_index;//0x0
PAD(0x2);//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_game_portal_to_portal_map_block,0x4);
tag_block<s_game_portal_to_portal_map_block> game_portal_to_portal_map;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_portal_device_mapping_block,0x10);
tag_block<s_portal_device_mapping_block> portal_device_mapping;//0x21C
struct s_audibility_block
{
__int32 door_portal_count;//0x0
float cluster_distance_bounds_min;//0x4
float cluster_distance_bounds_max;//0x8
struct s_encoded_door_pas_block
{
__int32 unknown;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_encoded_door_pas_block,0x4);
tag_block<s_encoded_door_pas_block> encoded_door_pas;//0xC
struct s_cluster_door_portal_encoded_pas_block
{
__int32 unknown;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_cluster_door_portal_encoded_pas_block,0x4);
tag_block<s_cluster_door_portal_encoded_pas_block> cluster_door_portal_encoded_pas;//0x14
struct s_ai_deafening_pas_block
{
__int32 unknown;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_ai_deafening_pas_block,0x4);
tag_block<s_ai_deafening_pas_block> ai_deafening_pas;//0x1C
struct s_cluster_distances_block
{
__int8 unknown;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_cluster_distances_block,0x1);
tag_block<s_cluster_distances_block> cluster_distances;//0x24
struct s_machine_door_mapping_block
{
__int8 machine_door_index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_machine_door_mapping_block,0x1);
tag_block<s_machine_door_mapping_block> machine_door_mapping;//0x2C
};
TAG_BLOCK_SIZE_ASSERT(s_audibility_block,0x34);
tag_block<s_audibility_block> audibility;//0x224
struct s_object_fake_lightprobes_block
{
__int32 unique_id;//0x0
__int16 origin_bsp_index;//0x4
enum class e_type : __int8
{
biped = 0,
vehicle = 1,
weapon = 2,
equipment = 3,
garbage = 4,
projectile = 5,
scenery = 6,
machine = 7,
control = 8,
light_fixture = 9,
sound_scenery = 10,
crate = 11,
creature = 12,
};
e_type type;//0x6
enum class e_source : __int8
{
editor = 0,
dynamic = 1,
legacy = 2,
};
e_source source;//0x7
real_color_rgb ambient;//0x8
float shadow_direction_i;//0x14
float shadow_direction_j;//0x18
float shadow_direction_k;//0x1C
float lighting_accuracy;//0x20
float shadow_opacity;//0x24
real_color_rgb primary_direction_color;//0x28
float primary_direction_i;//0x34
float primary_direction_j;//0x38
float primary_direction_k;//0x3C
real_color_rgb secondary_direction_color;//0x40
float secondary_direction_i;//0x4C
float secondary_direction_j;//0x50
float secondary_direction_k;//0x54
__int16 sh_index;//0x58
__int16 unknown;//0x5A
};
TAG_BLOCK_SIZE_ASSERT(s_object_fake_lightprobes_block,0x5C);
tag_block<s_object_fake_lightprobes_block> object_fake_lightprobes;//0x22C
struct s_decorators_block
{
float grid_origin_x;//0x0
float grid_origin_y;//0x4
float grid_origin_z;//0x8
__int32 cell_count_per_dimension;//0xC
struct s_cache_blocks_block
{
__int32 block_offset;//0x0
__int32 block_size;//0x4
__int32 section_data_size;//0x8
__int32 resource_data_size;//0xC
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
tag_block<s_resources_block> resources;//0x10
tag_referenceN model;//0x18
__int16 owner_tag_section_offset;//0x1C
__int16 unknown;//0x1E
PAD(0x4);//0x20
struct s_cache_block_data_block
{
struct s_placements_block
{
__int32 internal_data_1;//0x0
__int32 compressed_position;//0x4
PAD(0x8);//0x8
__int32 compressed_light_direction;//0x10
__int32 compressed_light_2_direction;//0x14
};
TAG_BLOCK_SIZE_ASSERT(s_placements_block,0x18);
tag_block<s_placements_block> placements;//0x0
struct s_decal_vertices_block
{
float position_x;//0x0
float position_y;//0x4
float position_z;//0x8
float texcoord_0_x;//0xC
float texcoord_0_y;//0x10
float texcoord_1_x;//0x14
float texcoord_1_y;//0x18
PAD(0x4);//0x1C
};
TAG_BLOCK_SIZE_ASSERT(s_decal_vertices_block,0x20);
tag_block<s_decal_vertices_block> decal_vertices;//0x8
struct s_decal_indices_block
{
__int16 index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_decal_indices_block,0x2);
tag_block<s_decal_indices_block> decal_indices;//0x10
struct s_sprite_vertices_block
{
float position_x;//0x0
float position_y;//0x4
float position_z;//0x8
float offset_i;//0xC
float offset_j;//0x10
float offset_k;//0x14
float axis_i;//0x18
float axis_j;//0x1C
float axis_k;//0x20
float texcoord_x;//0x24
float texcoord_y;//0x28
PAD(0x4);//0x2C
};
TAG_BLOCK_SIZE_ASSERT(s_sprite_vertices_block,0x30);
tag_block<s_sprite_vertices_block> sprite_vertices;//0x18
struct s_sprite_indices_block
{
__int16 index;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_sprite_indices_block,0x2);
tag_block<s_sprite_indices_block> sprite_indices;//0x20
};
TAG_BLOCK_SIZE_ASSERT(s_cache_block_data_block,0x28);
tag_block<s_cache_block_data_block> cache_block_data;//0x24
};
TAG_BLOCK_SIZE_ASSERT(s_cache_blocks_block,0x2C);
tag_block<s_cache_blocks_block> cache_blocks;//0x10
struct s_groups_block
{
__int8 decorator_set;//0x0
enum class e_decorator_type : __int8
{
model = 0,
floating_decal = 1,
projected_decal = 2,
screen_facing_quad = 3,
axis_rotating_quad = 4,
cross_quad = 5,
};
e_decorator_type decorator_type;//0x1
__int8 shader_index;//0x2
__int8 compressed_radius;//0x3
__int16 cluster_index;//0x4
__int16 cache_block_index;//0x6
__int16 decorator_start_index;//0x8
__int16 decorator_count;//0xA
__int16 vertex_start_offset;//0xC
__int16 vertex_count;//0xE
__int16 index_start_offset;//0x10
__int16 index_count;//0x12
float compressed_bounding_center;//0x14
};
TAG_BLOCK_SIZE_ASSERT(s_groups_block,0x18);
tag_block<s_groups_block> groups;//0x18
struct s_cells_block
{
__int16 child_index;//0x0
__int16 child_index;//0x2
__int16 child_index;//0x4
__int16 child_index;//0x6
__int16 child_index;//0x8
__int16 child_index;//0xA
__int16 child_index;//0xC
__int16 child_index;//0xE
__int16 cache_block_index;//0x10
__int16 group_count;//0x12
__int32 group_start_index;//0x14
};
TAG_BLOCK_SIZE_ASSERT(s_cells_block,0x18);
tag_block<s_cells_block> cells;//0x20
struct s_decals_block
{
__int8 decorator_set_index;//0x0
__int8 decorator_class;//0x1
__int8 decorator_permutation;//0x2
__int8 sprite_index;//0x3
float position_x;//0x4
float position_y;//0x8
float position_z;//0xC
float left_i;//0x10
float left_j;//0x14
float left_k;//0x18
float up_i;//0x1C
float up_j;//0x20
float up_k;//0x24
float extents_i;//0x28
float extents_j;//0x2C
float extents_k;//0x30
float previous_position_x;//0x34
float previous_position_y;//0x38
float previous_position_z;//0x3C
};
TAG_BLOCK_SIZE_ASSERT(s_decals_block,0x40);
tag_block<s_decals_block> decals;//0x28
};
TAG_BLOCK_SIZE_ASSERT(s_decorators_block,0x30);
tag_block<s_decorators_block> decorators;//0x234
};
TAG_GROUP_SIZE_ASSERT(s_scenario_structure_bsp_group_definition,0x23C);
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_unk_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_collision_materials_block)	TAG_REFL_TAG_REFERENCE(old_shader)	TAG_REFL_PROPERTY(global_material_index)	TAG_REFL_PROPERTY(conveyor_surface_index)	TAG_REFL_TAG_REFERENCE(new_shader)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_collision_bsp_block::s_NUM_3d_nodes_block)	TAG_REFL_PROPERTY(plane)	TAG_REFL_PROPERTY(back_child)	TAG_REFL_PROPERTY(flagpaddingunknown)	TAG_REFL_PROPERTY(front_child)	TAG_REFL_PROPERTY(flagpaddingunknown2)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_collision_bsp_block::s_planes_block)	TAG_REFL_PROPERTY(plane_i)	TAG_REFL_PROPERTY(plane_j)	TAG_REFL_PROPERTY(plane_k)	TAG_REFL_PROPERTY(plane_d)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_collision_bsp_block::s_leaves_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(bsp_2d_reference_count)	TAG_REFL_PROPERTY(first_bsp_2d_reference)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_collision_bsp_block::s_bsp_2d_references_block)	TAG_REFL_PROPERTY(plane)	TAG_REFL_PROPERTY(bsp_2d_node)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_collision_bsp_block::s_bsp_2d_nodes_block)	TAG_REFL_PROPERTY(plane_i)	TAG_REFL_PROPERTY(plane_j)	TAG_REFL_PROPERTY(plane_d)	TAG_REFL_PROPERTY(left_child)	TAG_REFL_PROPERTY(right_child)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_collision_bsp_block::s_surfaces_block)	TAG_REFL_PROPERTY(plane)	TAG_REFL_PROPERTY(first_edge)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(breakable_surface_index)	TAG_REFL_PROPERTY(material_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_collision_bsp_block::s_edges_block)	TAG_REFL_PROPERTY(start_vertex)	TAG_REFL_PROPERTY(end_vertex)	TAG_REFL_PROPERTY(forward_edge)	TAG_REFL_PROPERTY(backward_edge)	TAG_REFL_PROPERTY(left_surface)	TAG_REFL_PROPERTY(right_surface)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_collision_bsp_block::s_vertices_block)	TAG_REFL_PROPERTY(point_x)	TAG_REFL_PROPERTY(point_y)	TAG_REFL_PROPERTY(point_z)	TAG_REFL_PROPERTY(first_edge)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_collision_bsp_block)	TAG_REFL_TAG_BLOCK(NUM_3d_nodes)	TAG_REFL_TAG_BLOCK(planes)	TAG_REFL_TAG_BLOCK(leaves)	TAG_REFL_TAG_BLOCK(bsp_2d_references)	TAG_REFL_TAG_BLOCK(bsp_2d_nodes)	TAG_REFL_TAG_BLOCK(surfaces)	TAG_REFL_TAG_BLOCK(edges)	TAG_REFL_TAG_BLOCK(vertices)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_leaves_block)	TAG_REFL_PROPERTY(cluster)	TAG_REFL_PROPERTY(surface_reference_count)	TAG_REFL_PROPERTY(first_surface_refrence_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_surface_references_block)	TAG_REFL_PROPERTY(strip_index)	TAG_REFL_PROPERTY(lightmap_triangle_index)	TAG_REFL_PROPERTY(bsp_node_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_cluster_portals_block::s_vertices_block)	TAG_REFL_PROPERTY(point_x)	TAG_REFL_PROPERTY(point_y)	TAG_REFL_PROPERTY(point_z)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_cluster_portals_block)	TAG_REFL_PROPERTY(back_cluster)	TAG_REFL_PROPERTY(front_cluster)	TAG_REFL_PROPERTY(plane_index)	TAG_REFL_PROPERTY(centroid_x)	TAG_REFL_PROPERTY(centroid_y)	TAG_REFL_PROPERTY(centroid_z)	TAG_REFL_PROPERTY(bounding_radius)	TAG_REFL_PROPERTY(flags)	TAG_REFL_TAG_BLOCK(vertices)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_fog_planes_block)	TAG_REFL_PROPERTY(scenario_planar_fog_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(plane_i)	TAG_REFL_PROPERTY(plane_j)	TAG_REFL_PROPERTY(plane_k)	TAG_REFL_PROPERTY(plane_d)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(priority)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_weather_palette_block)	TAG_REFL_STRING_32(name)	TAG_REFL_TAG_REFERENCE(weather_system)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_REFERENCE(wind)	TAG_REFL_PROPERTY(wind_direction_i)	TAG_REFL_PROPERTY(wind_direction_j)	TAG_REFL_PROPERTY(wind_direction_k)	TAG_REFL_PROPERTY(wind_magnitude)	TAG_REFL_STRING_ID(wind_scale_function)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_weather_polyhedra_block::s_planes_block)	TAG_REFL_ANGLE(plane_i)	TAG_REFL_ANGLE(plane_j)	TAG_REFL_ANGLE(plane_k)	TAG_REFL_ANGLE(plane_d)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_weather_polyhedra_block)	TAG_REFL_PROPERTY(bounding_sphere_center_x)	TAG_REFL_PROPERTY(bounding_sphere_center_y)	TAG_REFL_PROPERTY(bounding_sphere_center_z)	TAG_REFL_PROPERTY(bounding_sphere_radius)	TAG_REFL_TAG_BLOCK(planes)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_detail_objects_block::s_cells_block)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_detail_objects_block::s_instances_block)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_detail_objects_block::s_counts_block)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_detail_objects_block::s_z_reference_vectors_block)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_detail_objects_block)	TAG_REFL_TAG_BLOCK(cells)	TAG_REFL_TAG_BLOCK(instances)	TAG_REFL_TAG_BLOCK(counts)	TAG_REFL_TAG_BLOCK(z_reference_vectors)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_clusters_block::s_compression_info_block)	TAG_REFL_PROPERTY(position_bounds_x_min)	TAG_REFL_PROPERTY(position_bounds_x_max)	TAG_REFL_PROPERTY(position_bounds_y_min)	TAG_REFL_PROPERTY(position_bounds_y_max)	TAG_REFL_PROPERTY(position_bounds_z_min)	TAG_REFL_PROPERTY(position_bounds_z_max)	TAG_REFL_PROPERTY(texcoord_bounds_x_min)	TAG_REFL_PROPERTY(texcoord_bounds_x_max)	TAG_REFL_PROPERTY(texcoord_bounds_y_min)	TAG_REFL_PROPERTY(texcoord_bounds_y_max)	TAG_REFL_PROPERTY(secondary_texcoord_bounds_x_min)	TAG_REFL_PROPERTY(secondary_texcoord_bounds_x_max)	TAG_REFL_PROPERTY(secondary_texcoord_bounds_y_min)	TAG_REFL_PROPERTY(secondary_texcoord_bounds_y_max)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_clusters_block::s_resources_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(primary_locator)	TAG_REFL_PROPERTY(secondary_locator)	TAG_REFL_PROPERTY(resoure_data_size)	TAG_REFL_PROPERTY(resource_data_offset)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_clusters_block::s_cluster_data_block::s_parts_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(material_index)	TAG_REFL_PROPERTY(strip_start_index)	TAG_REFL_PROPERTY(strip_length)	TAG_REFL_PROPERTY(first_subpart_index)	TAG_REFL_PROPERTY(subpart_count)	TAG_REFL_PROPERTY(max_nodesvertex)	TAG_REFL_PROPERTY(contributing_compound_node_count)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(node_index)	TAG_REFL_PROPERTY(node_index)	TAG_REFL_PROPERTY(node_index)	TAG_REFL_PROPERTY(node_index)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(lod_mipmap_magic)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_clusters_block::s_cluster_data_block::s_subparts_block)	TAG_REFL_PROPERTY(indices_start_index)	TAG_REFL_PROPERTY(indices_length)	TAG_REFL_PROPERTY(visibility_bounds_index)	TAG_REFL_PROPERTY(part_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_clusters_block::s_cluster_data_block::s_visibility_bounds_block)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(radius)	TAG_REFL_PROPERTY(node_0)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_clusters_block::s_cluster_data_block::s_raw_vertices_block)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(node_index_old)	TAG_REFL_PROPERTY(node_index_old)	TAG_REFL_PROPERTY(node_index_old)	TAG_REFL_PROPERTY(node_index_old)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(node_index_new)	TAG_REFL_PROPERTY(node_index_new)	TAG_REFL_PROPERTY(node_index_new)	TAG_REFL_PROPERTY(node_index_new)	TAG_REFL_PROPERTY(use_new_node_indices)	TAG_REFL_PROPERTY(adjusted_compound_node_index)	TAG_REFL_PROPERTY(texcoord_x)	TAG_REFL_PROPERTY(texcoord_y)	TAG_REFL_PROPERTY(normal_i)	TAG_REFL_PROPERTY(normal_j)	TAG_REFL_PROPERTY(normal_k)	TAG_REFL_PROPERTY(binormal_i)	TAG_REFL_PROPERTY(binormal_j)	TAG_REFL_PROPERTY(binormal_k)	TAG_REFL_PROPERTY(tangent_i)	TAG_REFL_PROPERTY(tangent_j)	TAG_REFL_PROPERTY(tangent_k)	TAG_REFL_PROPERTY(anisotropic_binormal_i)	TAG_REFL_PROPERTY(anisotropic_binormal_j)	TAG_REFL_PROPERTY(anisotropic_binormal_k)	TAG_REFL_PROPERTY(secondary_texcoord_x)	TAG_REFL_PROPERTY(secondary_texcoord_y)	TAG_REFL_PROPERTY(primary_lightmap_texcoord_x)	TAG_REFL_PROPERTY(primary_lightmap_texcoord_y)	TAG_REFL_PROPERTY(primary_lightmap_incident_direction_i)	TAG_REFL_PROPERTY(primary_lightmap_incident_direction_j)	TAG_REFL_PROPERTY(primary_lightmap_incident_direction_k)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_clusters_block::s_cluster_data_block::s_strip_indices_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_clusters_block::s_cluster_data_block::s_mopp_reorder_table_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_clusters_block::s_cluster_data_block::s_vertex_buffers_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_clusters_block::s_cluster_data_block)	TAG_REFL_TAG_BLOCK(parts)	TAG_REFL_TAG_BLOCK(subparts)	TAG_REFL_TAG_BLOCK(visibility_bounds)	TAG_REFL_TAG_BLOCK(raw_vertices)	TAG_REFL_TAG_BLOCK(strip_indices)	TAG_REFL_DATA_BLOCK(visibility_mopp_codes)	TAG_REFL_TAG_BLOCK(mopp_reorder_table)	TAG_REFL_TAG_BLOCK(vertex_buffers)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_clusters_block::s_predicted_resources_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(resource_index)	TAG_REFL_TAG_REFERENCE(tag_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_clusters_block::s_portals_block)	TAG_REFL_PROPERTY(portal_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_clusters_block::s_instanced_geometry_indeces_block)	TAG_REFL_PROPERTY(instanced_geometry_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_clusters_block::s_index_reorder_table_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_clusters_block)	TAG_REFL_PROPERTY(total_vertex_count)	TAG_REFL_PROPERTY(total_triangle_count)	TAG_REFL_PROPERTY(total_part_count)	TAG_REFL_PROPERTY(shadowcasting_triangle_count)	TAG_REFL_PROPERTY(shadowcasting_part_count)	TAG_REFL_PROPERTY(opaque_point_count)	TAG_REFL_PROPERTY(opaque_vertex_count)	TAG_REFL_PROPERTY(opaque_part_count)	TAG_REFL_PROPERTY(opaque_max_nodesvertex)	TAG_REFL_PROPERTY(shadowcasting_rigid_triangle_count)	TAG_REFL_PROPERTY(geometry_classification)	TAG_REFL_PROPERTY(geometry_compression_flags)	TAG_REFL_TAG_BLOCK(compression_info)	TAG_REFL_PROPERTY(hardware_node_count)	TAG_REFL_PROPERTY(node_map_size)	TAG_REFL_PROPERTY(software_plane_sount)	TAG_REFL_PROPERTY(total_subpart_count)	TAG_REFL_PROPERTY(section_lighting_flags)	TAG_REFL_PROPERTY(block_offset)	TAG_REFL_PROPERTY(block_size)	TAG_REFL_PROPERTY(section_data_size)	TAG_REFL_PROPERTY(resource_data_size)	TAG_REFL_TAG_BLOCK(resources)	TAG_REFL_TAG_REFERENCE(model)	TAG_REFL_PROPERTY(owner_tag_section_offset)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_BLOCK(cluster_data)	TAG_REFL_PROPERTY(bounds_x_min)	TAG_REFL_PROPERTY(bounds_x_max)	TAG_REFL_PROPERTY(bounds_y_min)	TAG_REFL_PROPERTY(bounds_y_max)	TAG_REFL_PROPERTY(bounds_z_min)	TAG_REFL_PROPERTY(bounds_z_max)	TAG_REFL_PROPERTY(scenario_sky_index)	TAG_REFL_PROPERTY(media_index)	TAG_REFL_PROPERTY(scenario_visible_sky_index)	TAG_REFL_PROPERTY(scenario_atmospheric_fog_index)	TAG_REFL_PROPERTY(planar_fog_designator)	TAG_REFL_PROPERTY(visible_fog_plane_index)	TAG_REFL_PROPERTY(background_sound_index)	TAG_REFL_PROPERTY(sound_environment_index)	TAG_REFL_PROPERTY(weather_index)	TAG_REFL_PROPERTY(transition_structure_bsp)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_BLOCK(predicted_resources)	TAG_REFL_TAG_BLOCK(portals)	TAG_REFL_PROPERTY(checksum_from_structure)	TAG_REFL_TAG_BLOCK(instanced_geometry_indeces)	TAG_REFL_TAG_BLOCK(index_reorder_table)	TAG_REFL_DATA_BLOCK(collision_mopp_codes)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_materials_block::s_properties_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(int_value)	TAG_REFL_PROPERTY(real_value)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_materials_block)	TAG_REFL_TAG_REFERENCE(old_shader)	TAG_REFL_TAG_REFERENCE(shader)	TAG_REFL_TAG_BLOCK(properties)	TAG_REFL_PROPERTY(breakable_surface_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_sky_owner_cluster_block)	TAG_REFL_PROPERTY(cluster_owner)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_conveyor_surfaces_block)	TAG_REFL_PROPERTY(u_i)	TAG_REFL_PROPERTY(u_j)	TAG_REFL_PROPERTY(u_k)	TAG_REFL_PROPERTY(v_i)	TAG_REFL_PROPERTY(v_j)	TAG_REFL_PROPERTY(v_k)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_breakable_surfaces_block)	TAG_REFL_PROPERTY(instanced_geometry_instance)	TAG_REFL_PROPERTY(breakable_surface_index)	TAG_REFL_PROPERTY(centroid_x)	TAG_REFL_PROPERTY(centroid_y)	TAG_REFL_PROPERTY(centroid_z)	TAG_REFL_PROPERTY(radius)	TAG_REFL_PROPERTY(collision_surface_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_sectors_block)	TAG_REFL_PROPERTY(pathfinding_sector_flags)	TAG_REFL_PROPERTY(hint_index)	TAG_REFL_PROPERTY(first_link)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_links_block)	TAG_REFL_PROPERTY(vertex_1)	TAG_REFL_PROPERTY(vertex_2)	TAG_REFL_PROPERTY(link_flags)	TAG_REFL_PROPERTY(hint_index)	TAG_REFL_PROPERTY(forward_link)	TAG_REFL_PROPERTY(reverse_link)	TAG_REFL_PROPERTY(left_sector)	TAG_REFL_PROPERTY(right_sector)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_refs_block)	TAG_REFL_PROPERTY(node_ref_or_sector_ref)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_bsp_2d_nodes_block)	TAG_REFL_PROPERTY(plane_i)	TAG_REFL_PROPERTY(plane_j)	TAG_REFL_PROPERTY(plane_d)	TAG_REFL_PROPERTY(left_child)	TAG_REFL_PROPERTY(right_child)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_surface_flags_block)	TAG_REFL_PROPERTY(flags)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_vertices_block)	TAG_REFL_PROPERTY(point_x)	TAG_REFL_PROPERTY(point_y)	TAG_REFL_PROPERTY(point_z)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_object_refs_block::s_bsps_block)	TAG_REFL_PROPERTY(bsp_reference)	TAG_REFL_PROPERTY(first_sector)	TAG_REFL_PROPERTY(last_sector)	TAG_REFL_PROPERTY(node_index)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_object_refs_block::s_nodes_block)	TAG_REFL_PROPERTY(reference_frame_index)	TAG_REFL_PROPERTY(projection_axis)	TAG_REFL_PROPERTY(projection_sign)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_object_refs_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(first_sector)	TAG_REFL_PROPERTY(last_sector)	TAG_REFL_TAG_BLOCK(bsps)	TAG_REFL_TAG_BLOCK(nodes)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_pathfinding_hints_block)	TAG_REFL_PROPERTY(hint_type)	TAG_REFL_PROPERTY(next_hint_index)	TAG_REFL_PROPERTY(hint_data_0)	TAG_REFL_PROPERTY(hint_data_1)	TAG_REFL_PROPERTY(hint_data_2)	TAG_REFL_PROPERTY(hint_data_3)	TAG_REFL_PROPERTY(hint_data_4)	TAG_REFL_PROPERTY(hint_data_5)	TAG_REFL_PROPERTY(hint_data_6)	TAG_REFL_PROPERTY(hint_data_7)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_instanced_geometry_refs_block)	TAG_REFL_PROPERTY(pathfinding_object_index)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_user_placed_hints_block::s_point_geometry_block)	TAG_REFL_PROPERTY(point_x)	TAG_REFL_PROPERTY(point_y)	TAG_REFL_PROPERTY(point_z)	TAG_REFL_PROPERTY(reference_frame)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_user_placed_hints_block::s_ray_geometry_block)	TAG_REFL_PROPERTY(point_x)	TAG_REFL_PROPERTY(point_y)	TAG_REFL_PROPERTY(point_z)	TAG_REFL_PROPERTY(reference_frame)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_ANGLE(vector_i)	TAG_REFL_ANGLE(vector_j)	TAG_REFL_ANGLE(vector_k)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_user_placed_hints_block::s_line_segment_geometry_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(point_0_x)	TAG_REFL_PROPERTY(point_0_y)	TAG_REFL_PROPERTY(point_0_z)	TAG_REFL_PROPERTY(reference_frame)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(point_1_x)	TAG_REFL_PROPERTY(point_1_y)	TAG_REFL_PROPERTY(point_1_z)	TAG_REFL_PROPERTY(reference_frame)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_user_placed_hints_block::s_parallelogram_geometry_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(point_0_x)	TAG_REFL_PROPERTY(point_0_y)	TAG_REFL_PROPERTY(point_0_z)	TAG_REFL_PROPERTY(reference_frame)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(point_1_x)	TAG_REFL_PROPERTY(point_1_y)	TAG_REFL_PROPERTY(point_1_z)	TAG_REFL_PROPERTY(reference_frame)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(point_2_x)	TAG_REFL_PROPERTY(point_2_y)	TAG_REFL_PROPERTY(point_2_z)	TAG_REFL_PROPERTY(reference_frame)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(point_3_x)	TAG_REFL_PROPERTY(point_3_y)	TAG_REFL_PROPERTY(point_3_z)	TAG_REFL_PROPERTY(reference_frame)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_user_placed_hints_block::s_polygon_geometry_block::s_points_block)	TAG_REFL_PROPERTY(point_x)	TAG_REFL_PROPERTY(point_y)	TAG_REFL_PROPERTY(point_z)	TAG_REFL_PROPERTY(reference_frame)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_user_placed_hints_block::s_polygon_geometry_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_TAG_BLOCK(points)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_user_placed_hints_block::s_jump_hints_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(geometry_index)	TAG_REFL_PROPERTY(force_jump_height)	TAG_REFL_PROPERTY(control_flags)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_user_placed_hints_block::s_climb_hints_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(geometry_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_user_placed_hints_block::s_well_hints_block::s_points_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(point_x)	TAG_REFL_PROPERTY(point_y)	TAG_REFL_PROPERTY(point_z)	TAG_REFL_PROPERTY(reference_frame)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(sector_index)	TAG_REFL_ANGLE(normal_i)	TAG_REFL_ANGLE(normal_j)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_user_placed_hints_block::s_well_hints_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_TAG_BLOCK(points)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_user_placed_hints_block::s_flight_hints_block::s_points_block)	TAG_REFL_PROPERTY(point_x)	TAG_REFL_PROPERTY(point_y)	TAG_REFL_PROPERTY(point_z)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_user_placed_hints_block::s_flight_hints_block)	TAG_REFL_TAG_BLOCK(points)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block::s_user_placed_hints_block)	TAG_REFL_TAG_BLOCK(point_geometry)	TAG_REFL_TAG_BLOCK(ray_geometry)	TAG_REFL_TAG_BLOCK(line_segment_geometry)	TAG_REFL_TAG_BLOCK(parallelogram_geometry)	TAG_REFL_TAG_BLOCK(polygon_geometry)	TAG_REFL_TAG_BLOCK(jump_hints)	TAG_REFL_TAG_BLOCK(climb_hints)	TAG_REFL_TAG_BLOCK(well_hints)	TAG_REFL_TAG_BLOCK(flight_hints)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_data_block)	TAG_REFL_TAG_BLOCK(sectors)	TAG_REFL_TAG_BLOCK(links)	TAG_REFL_TAG_BLOCK(refs)	TAG_REFL_TAG_BLOCK(bsp_2d_nodes)	TAG_REFL_TAG_BLOCK(surface_flags)	TAG_REFL_TAG_BLOCK(vertices)	TAG_REFL_TAG_BLOCK(object_refs)	TAG_REFL_TAG_BLOCK(pathfinding_hints)	TAG_REFL_TAG_BLOCK(instanced_geometry_refs)	TAG_REFL_PROPERTY(structure_checksum)	TAG_REFL_TAG_BLOCK(user_placed_hints)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_pathfinding_edges_block)	TAG_REFL_PROPERTY(midpoint)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_background_sound_palette_block)	TAG_REFL_STRING_32(name)	TAG_REFL_TAG_REFERENCE(background_sound)	TAG_REFL_TAG_REFERENCE(inside_cluster_sound)	TAG_REFL_PROPERTY(cutoff_distance)	TAG_REFL_PROPERTY(scale_flags)	TAG_REFL_PROPERTY(interior_scale)	TAG_REFL_PROPERTY(portal_scale)	TAG_REFL_PROPERTY(exterior_scale)	TAG_REFL_PROPERTY(interpolation_speed)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_sound_environment_palette_block)	TAG_REFL_STRING_32(name)	TAG_REFL_TAG_REFERENCE(sound_environment)	TAG_REFL_PROPERTY(cutoff_distance)	TAG_REFL_PROPERTY(interpolation_speed)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_markers_block)	TAG_REFL_STRING_32(name)	TAG_REFL_PROPERTY(rotation_i)	TAG_REFL_PROPERTY(rotation_j)	TAG_REFL_PROPERTY(rotation_k)	TAG_REFL_PROPERTY(rotation_w)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_runtime_decals_block)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_environment_object_palette_block)	TAG_REFL_TAG_REFERENCE(definition)	TAG_REFL_TAG_REFERENCE(model)	TAG_REFL_PROPERTY(object_type)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_environment_objects_block)	TAG_REFL_STRING_32(name)	TAG_REFL_PROPERTY(rotation_i)	TAG_REFL_PROPERTY(rotation_j)	TAG_REFL_PROPERTY(rotation_k)	TAG_REFL_PROPERTY(rotation_w)	TAG_REFL_PROPERTY(translation_x)	TAG_REFL_PROPERTY(translation_y)	TAG_REFL_PROPERTY(translation_z)	TAG_REFL_PROPERTY(palette_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unique_id)	TAG_REFL_PROPERTY(exported_object_type)	TAG_REFL_STRING_32(scenario_object_name)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_compression_info_block)	TAG_REFL_PROPERTY(position_bounds_x_min)	TAG_REFL_PROPERTY(position_bounds_x_max)	TAG_REFL_PROPERTY(position_bounds_y_min)	TAG_REFL_PROPERTY(position_bounds_y_max)	TAG_REFL_PROPERTY(position_bounds_z_min)	TAG_REFL_PROPERTY(position_bounds_z_max)	TAG_REFL_PROPERTY(texcoord_bounds_x_min)	TAG_REFL_PROPERTY(texcoord_bounds_x_max)	TAG_REFL_PROPERTY(texcoord_bounds_y_min)	TAG_REFL_PROPERTY(texcoord_bounds_y_max)	TAG_REFL_PROPERTY(secondary_texcoord_bounds_x_min)	TAG_REFL_PROPERTY(secondary_texcoord_bounds_x_max)	TAG_REFL_PROPERTY(secondary_texcoord_bounds_y_min)	TAG_REFL_PROPERTY(secondary_texcoord_bounds_y_max)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_resources_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(primary_locator)	TAG_REFL_PROPERTY(secondary_locator)	TAG_REFL_PROPERTY(resoure_data_size)	TAG_REFL_PROPERTY(resource_data_offset)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_render_data_block::s_parts_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(material_index)	TAG_REFL_PROPERTY(strip_start_index)	TAG_REFL_PROPERTY(strip_length)	TAG_REFL_PROPERTY(first_subpart_index)	TAG_REFL_PROPERTY(subpart_count)	TAG_REFL_PROPERTY(max_nodesvertex)	TAG_REFL_PROPERTY(contributing_compound_node_count)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(node_index)	TAG_REFL_PROPERTY(node_index)	TAG_REFL_PROPERTY(node_index)	TAG_REFL_PROPERTY(node_index)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(lod_mipmap_magic)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_render_data_block::s_subparts_block)	TAG_REFL_PROPERTY(indices_start_index)	TAG_REFL_PROPERTY(indices_length)	TAG_REFL_PROPERTY(visibility_bounds_index)	TAG_REFL_PROPERTY(part_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_render_data_block::s_visibility_bounds_block)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(radius)	TAG_REFL_PROPERTY(node_0)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_render_data_block::s_raw_vertices_block)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(node_index_old)	TAG_REFL_PROPERTY(node_index_old)	TAG_REFL_PROPERTY(node_index_old)	TAG_REFL_PROPERTY(node_index_old)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(node_index_new)	TAG_REFL_PROPERTY(node_index_new)	TAG_REFL_PROPERTY(node_index_new)	TAG_REFL_PROPERTY(node_index_new)	TAG_REFL_PROPERTY(use_new_node_indices)	TAG_REFL_PROPERTY(adjusted_compound_node_index)	TAG_REFL_PROPERTY(texcoord_x)	TAG_REFL_PROPERTY(texcoord_y)	TAG_REFL_PROPERTY(normal_i)	TAG_REFL_PROPERTY(normal_j)	TAG_REFL_PROPERTY(normal_k)	TAG_REFL_PROPERTY(binormal_i)	TAG_REFL_PROPERTY(binormal_j)	TAG_REFL_PROPERTY(binormal_k)	TAG_REFL_PROPERTY(tangent_i)	TAG_REFL_PROPERTY(tangent_j)	TAG_REFL_PROPERTY(tangent_k)	TAG_REFL_PROPERTY(anisotropic_binormal_i)	TAG_REFL_PROPERTY(anisotropic_binormal_j)	TAG_REFL_PROPERTY(anisotropic_binormal_k)	TAG_REFL_PROPERTY(secondary_texcoord_x)	TAG_REFL_PROPERTY(secondary_texcoord_y)	TAG_REFL_PROPERTY(primary_lightmap_texcoord_x)	TAG_REFL_PROPERTY(primary_lightmap_texcoord_y)	TAG_REFL_PROPERTY(primary_lightmap_incident_direction_i)	TAG_REFL_PROPERTY(primary_lightmap_incident_direction_j)	TAG_REFL_PROPERTY(primary_lightmap_incident_direction_k)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_render_data_block::s_strip_indices_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_render_data_block::s_mopp_reorder_table_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_render_data_block::s_vertex_buffers_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_render_data_block)	TAG_REFL_TAG_BLOCK(parts)	TAG_REFL_TAG_BLOCK(subparts)	TAG_REFL_TAG_BLOCK(visibility_bounds)	TAG_REFL_TAG_BLOCK(raw_vertices)	TAG_REFL_TAG_BLOCK(strip_indices)	TAG_REFL_DATA_BLOCK(visibility_mopp_codes)	TAG_REFL_TAG_BLOCK(mopp_reorder_table)	TAG_REFL_TAG_BLOCK(vertex_buffers)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_index_reorder_table_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_bsp_3d_nodes_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_planes_block)	TAG_REFL_PROPERTY(plane_i)	TAG_REFL_PROPERTY(plane_j)	TAG_REFL_PROPERTY(plane_k)	TAG_REFL_PROPERTY(plane_d)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_leaves_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(bsp_2d_reference_count)	TAG_REFL_PROPERTY(first_bsp_2d_reference)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_bsp_2d_references_block)	TAG_REFL_PROPERTY(plane)	TAG_REFL_PROPERTY(bsp_2d_node)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_bsp_2d_nodes_block)	TAG_REFL_PROPERTY(plane_i)	TAG_REFL_PROPERTY(plane_j)	TAG_REFL_PROPERTY(plane_d)	TAG_REFL_PROPERTY(left_child)	TAG_REFL_PROPERTY(right_child)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_surfaces_block)	TAG_REFL_PROPERTY(plane)	TAG_REFL_PROPERTY(first_edge)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(breakable_surface_index)	TAG_REFL_PROPERTY(material_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_edges_block)	TAG_REFL_PROPERTY(start_vertex)	TAG_REFL_PROPERTY(end_vertex)	TAG_REFL_PROPERTY(forward_edge)	TAG_REFL_PROPERTY(backward_edge)	TAG_REFL_PROPERTY(left_surface)	TAG_REFL_PROPERTY(right_surface)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_vertices_block)	TAG_REFL_PROPERTY(point_x)	TAG_REFL_PROPERTY(point_y)	TAG_REFL_PROPERTY(point_z)	TAG_REFL_PROPERTY(first_edge)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_bsp_physics_block::s_mopp_code_data_block)	TAG_REFL_PROPERTY(data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_bsp_physics_block)	TAG_REFL_PROPERTY(size)	TAG_REFL_PROPERTY(count)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(size)	TAG_REFL_PROPERTY(count)	TAG_REFL_PROPERTY(size)	TAG_REFL_PROPERTY(count)	TAG_REFL_TAG_BLOCK(mopp_code_data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_render_leaves_block)	TAG_REFL_PROPERTY(cluster)	TAG_REFL_PROPERTY(surface_reference_count)	TAG_REFL_PROPERTY(first_surface_reference_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block::s_surface_references_block)	TAG_REFL_PROPERTY(strip_index)	TAG_REFL_PROPERTY(lightmap_triangle)	TAG_REFL_PROPERTY(bsp_node_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_definitions_block)	TAG_REFL_PROPERTY(total_vertex_count)	TAG_REFL_PROPERTY(total_triangle_count)	TAG_REFL_PROPERTY(total_part_count)	TAG_REFL_PROPERTY(shadowcasting_triangle_count)	TAG_REFL_PROPERTY(shadowcasting_part_count)	TAG_REFL_PROPERTY(opaque_point_count)	TAG_REFL_PROPERTY(opaque_vertex_count)	TAG_REFL_PROPERTY(opaque_part_count)	TAG_REFL_PROPERTY(opaque_max_nodesvertex)	TAG_REFL_PROPERTY(shadowcasting_rigid_triangle_count)	TAG_REFL_PROPERTY(geometry_classification)	TAG_REFL_PROPERTY(geometry_compression_flags)	TAG_REFL_TAG_BLOCK(compression_info)	TAG_REFL_PROPERTY(hardware_node_count)	TAG_REFL_PROPERTY(node_map_size)	TAG_REFL_PROPERTY(software_plane_sount)	TAG_REFL_PROPERTY(total_subpart_count)	TAG_REFL_PROPERTY(section_lighting_flags)	TAG_REFL_PROPERTY(block_offset)	TAG_REFL_PROPERTY(block_size)	TAG_REFL_PROPERTY(section_data_size)	TAG_REFL_PROPERTY(resource_data_size)	TAG_REFL_TAG_BLOCK(resources)	TAG_REFL_TAG_REFERENCE(model)	TAG_REFL_PROPERTY(owner_tag_section_offset)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_BLOCK(render_data)	TAG_REFL_TAG_BLOCK(index_reorder_table)	TAG_REFL_PROPERTY(checksum)	TAG_REFL_PROPERTY(bounding_sphere_x)	TAG_REFL_PROPERTY(bounding_sphere_y)	TAG_REFL_PROPERTY(bounding_sphere_z)	TAG_REFL_PROPERTY(bounding_sphere_radius)	TAG_REFL_TAG_BLOCK(bsp_3d_nodes)	TAG_REFL_TAG_BLOCK(planes)	TAG_REFL_TAG_BLOCK(leaves)	TAG_REFL_TAG_BLOCK(bsp_2d_references)	TAG_REFL_TAG_BLOCK(bsp_2d_nodes)	TAG_REFL_TAG_BLOCK(surfaces)	TAG_REFL_TAG_BLOCK(edges)	TAG_REFL_TAG_BLOCK(vertices)	TAG_REFL_TAG_BLOCK(bsp_physics)	TAG_REFL_TAG_BLOCK(render_leaves)	TAG_REFL_TAG_BLOCK(surface_references)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_instanced_geometry_instances_block)	TAG_REFL_PROPERTY(scale)	TAG_REFL_PROPERTY(forward_i)	TAG_REFL_PROPERTY(forward_j)	TAG_REFL_PROPERTY(forward_k)	TAG_REFL_PROPERTY(left_i)	TAG_REFL_PROPERTY(left_j)	TAG_REFL_PROPERTY(left_k)	TAG_REFL_PROPERTY(up_i)	TAG_REFL_PROPERTY(up_j)	TAG_REFL_PROPERTY(up_k)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(instance_definition_index)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(checksum)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(pathfinding_policy)	TAG_REFL_PROPERTY(lightmapping_policy)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_ambience_sound_clusters_block::s_enclosing_portal_designators_block)	TAG_REFL_PROPERTY(portal_designator)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_ambience_sound_clusters_block::s_interior_cluster_indices_block)	TAG_REFL_PROPERTY(interior_cluster_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_ambience_sound_clusters_block)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_BLOCK(enclosing_portal_designators)	TAG_REFL_TAG_BLOCK(interior_cluster_indices)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_reverb_sound_clusters_block::s_enclosing_portal_designators_block)	TAG_REFL_PROPERTY(portal_designator)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_reverb_sound_clusters_block::s_interior_cluster_indices_block)	TAG_REFL_PROPERTY(interior_cluster_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_reverb_sound_clusters_block)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_BLOCK(enclosing_portal_designators)	TAG_REFL_TAG_BLOCK(interior_cluster_indices)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_transparent_planes_block)	TAG_REFL_PROPERTY(section_index)	TAG_REFL_PROPERTY(part_index)	TAG_REFL_PROPERTY(plane_i)	TAG_REFL_PROPERTY(plane_j)	TAG_REFL_PROPERTY(plane_k)	TAG_REFL_PROPERTY(plane_d)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_debug_info_block::s_clusters_block::s_lines_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(code)	TAG_REFL_PROPERTY(pad_thai)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_debug_info_block::s_clusters_block::s_fog_plane_indices_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_debug_info_block::s_clusters_block::s_visible_fog_plane_indices_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_debug_info_block::s_clusters_block::s_visible_fog_omission_cluster_indices_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_debug_info_block::s_clusters_block::s_containing_fog_zone_indices_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_debug_info_block::s_clusters_block)	TAG_REFL_PROPERTY(errors)	TAG_REFL_PROPERTY(warnings)	TAG_REFL_TAG_BLOCK(lines)	TAG_REFL_TAG_BLOCK(fog_plane_indices)	TAG_REFL_TAG_BLOCK(visible_fog_plane_indices)	TAG_REFL_TAG_BLOCK(visible_fog_omission_cluster_indices)	TAG_REFL_TAG_BLOCK(containing_fog_zone_indices)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_debug_info_block::s_fog_planes_block::s_lines_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(code)	TAG_REFL_PROPERTY(pad_thai)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_debug_info_block::s_fog_planes_block::s_intersected_cluster_indices_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_debug_info_block::s_fog_planes_block::s_infinite_extent_cluster_indices_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_debug_info_block::s_fog_planes_block)	TAG_REFL_PROPERTY(fog_zone_index)	TAG_REFL_PROPERTY(connected_plane_designator)	TAG_REFL_TAG_BLOCK(lines)	TAG_REFL_TAG_BLOCK(intersected_cluster_indices)	TAG_REFL_TAG_BLOCK(infinite_extent_cluster_indices)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_debug_info_block::s_fog_zones_block::s_lines_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(code)	TAG_REFL_PROPERTY(pad_thai)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_debug_info_block::s_fog_zones_block::s_immersed_cluster_indices_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_debug_info_block::s_fog_zones_block::s_bounding_fog_plane_indices_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_debug_info_block::s_fog_zones_block::s_collision_fog_plane_indices_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_debug_info_block::s_fog_zones_block)	TAG_REFL_PROPERTY(media_index:_scenario_fog_plane)	TAG_REFL_PROPERTY(base_fog_plane_index)	TAG_REFL_TAG_BLOCK(lines)	TAG_REFL_TAG_BLOCK(immersed_cluster_indices)	TAG_REFL_TAG_BLOCK(bounding_fog_plane_indices)	TAG_REFL_TAG_BLOCK(collision_fog_plane_indices)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_debug_info_block)	TAG_REFL_TAG_BLOCK(clusters)	TAG_REFL_TAG_BLOCK(fog_planes)	TAG_REFL_TAG_BLOCK(fog_zones)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_breakable_surface_key_table_block)	TAG_REFL_PROPERTY(instance_geometry_index)	TAG_REFL_PROPERTY(breakable_surface_index)	TAG_REFL_PROPERTY(seed_surface_index)	TAG_REFL_PROPERTY(x0)	TAG_REFL_PROPERTY(x1)	TAG_REFL_PROPERTY(y0)	TAG_REFL_PROPERTY(y1)	TAG_REFL_PROPERTY(z0)	TAG_REFL_PROPERTY(z1)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_water_definitions_block::s_section_block::s_parts_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(material_index)	TAG_REFL_PROPERTY(strip_start_index)	TAG_REFL_PROPERTY(strip_length)	TAG_REFL_PROPERTY(first_subpart_index)	TAG_REFL_PROPERTY(subpart_count)	TAG_REFL_PROPERTY(max_nodesvertex)	TAG_REFL_PROPERTY(contributing_compound_node_count)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(node_index)	TAG_REFL_PROPERTY(node_index)	TAG_REFL_PROPERTY(node_index)	TAG_REFL_PROPERTY(node_index)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(lod_mipmap_magic)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_water_definitions_block::s_section_block::s_subparts_block)	TAG_REFL_PROPERTY(indices_start_index)	TAG_REFL_PROPERTY(indices_length)	TAG_REFL_PROPERTY(visibility_bounds_index)	TAG_REFL_PROPERTY(part_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_water_definitions_block::s_section_block::s_visibility_bounds_block)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(radius)	TAG_REFL_PROPERTY(node_0)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_water_definitions_block::s_section_block::s_raw_vertices_block)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(node_index_old)	TAG_REFL_PROPERTY(node_index_old)	TAG_REFL_PROPERTY(node_index_old)	TAG_REFL_PROPERTY(node_index_old)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(node_weight)	TAG_REFL_PROPERTY(node_index_new)	TAG_REFL_PROPERTY(node_index_new)	TAG_REFL_PROPERTY(node_index_new)	TAG_REFL_PROPERTY(node_index_new)	TAG_REFL_PROPERTY(use_new_node_indices)	TAG_REFL_PROPERTY(adjusted_compound_node_index)	TAG_REFL_PROPERTY(texcoord_x)	TAG_REFL_PROPERTY(texcoord_y)	TAG_REFL_PROPERTY(normal_i)	TAG_REFL_PROPERTY(normal_j)	TAG_REFL_PROPERTY(normal_k)	TAG_REFL_PROPERTY(binormal_i)	TAG_REFL_PROPERTY(binormal_j)	TAG_REFL_PROPERTY(binormal_k)	TAG_REFL_PROPERTY(tangent_i)	TAG_REFL_PROPERTY(tangent_j)	TAG_REFL_PROPERTY(tangent_k)	TAG_REFL_PROPERTY(anisotropic_binormal_i)	TAG_REFL_PROPERTY(anisotropic_binormal_j)	TAG_REFL_PROPERTY(anisotropic_binormal_k)	TAG_REFL_PROPERTY(secondary_texcoord_x)	TAG_REFL_PROPERTY(secondary_texcoord_y)	TAG_REFL_PROPERTY(primary_lightmap_texcoord_x)	TAG_REFL_PROPERTY(primary_lightmap_texcoord_y)	TAG_REFL_PROPERTY(primary_lightmap_incident_direction_i)	TAG_REFL_PROPERTY(primary_lightmap_incident_direction_j)	TAG_REFL_PROPERTY(primary_lightmap_incident_direction_k)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_water_definitions_block::s_section_block::s_strip_indices_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_water_definitions_block::s_section_block::s_mopp_reorder_table_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_water_definitions_block::s_section_block::s_vertex_buffers_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_water_definitions_block::s_section_block)	TAG_REFL_TAG_BLOCK(parts)	TAG_REFL_TAG_BLOCK(subparts)	TAG_REFL_TAG_BLOCK(visibility_bounds)	TAG_REFL_TAG_BLOCK(raw_vertices)	TAG_REFL_TAG_BLOCK(strip_indices)	TAG_REFL_DATA_BLOCK(visibility_mopp_codes)	TAG_REFL_TAG_BLOCK(mopp_reorder_table)	TAG_REFL_TAG_BLOCK(vertex_buffers)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_water_definitions_block::s_resources_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(primary_locator)	TAG_REFL_PROPERTY(secondary_locator)	TAG_REFL_PROPERTY(resoure_data_size)	TAG_REFL_PROPERTY(resource_data_offset)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_water_definitions_block)	TAG_REFL_TAG_REFERENCE(shader)	TAG_REFL_TAG_BLOCK(section)	TAG_REFL_PROPERTY(block_offset)	TAG_REFL_PROPERTY(block_size)	TAG_REFL_PROPERTY(section_data_size)	TAG_REFL_PROPERTY(resource_data_size)	TAG_REFL_TAG_BLOCK(resources)	TAG_REFL_TAG_REFERENCE(model)	TAG_REFL_PROPERTY(owner_tag_section_offset)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_REAL_COLOR_RGB(sun_spot_color)	TAG_REFL_REAL_COLOR_RGB(reflection_tint)	TAG_REFL_REAL_COLOR_RGB(refraction_tint)	TAG_REFL_REAL_COLOR_RGB(horizon_color)	TAG_REFL_PROPERTY(sun_specular_power)	TAG_REFL_PROPERTY(reflection_bump_scale)	TAG_REFL_PROPERTY(refraction_bump_scale)	TAG_REFL_PROPERTY(fresnel_scale)	TAG_REFL_PROPERTY(sun_dir_heading)	TAG_REFL_PROPERTY(sun_dir_pitch)	TAG_REFL_PROPERTY(fov)	TAG_REFL_PROPERTY(aspect)	TAG_REFL_PROPERTY(height)	TAG_REFL_PROPERTY(farz)	TAG_REFL_PROPERTY(rotate_offset)	TAG_REFL_PROPERTY(center_i)	TAG_REFL_PROPERTY(center_j)	TAG_REFL_PROPERTY(extents_i)	TAG_REFL_PROPERTY(extents_j)	TAG_REFL_PROPERTY(fog_near)	TAG_REFL_PROPERTY(fog_far)	TAG_REFL_PROPERTY(dynamic_height_bias)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_portal_device_mapping_block::s_device_portal_association_block)	TAG_REFL_PROPERTY(unique_id)	TAG_REFL_PROPERTY(origin_bsp_index)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(source)	TAG_REFL_PROPERTY(first_game_potal_index)	TAG_REFL_PROPERTY(game_portal_count)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_portal_device_mapping_block::s_game_portal_to_portal_map_block)	TAG_REFL_PROPERTY(portal_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_portal_device_mapping_block)	TAG_REFL_TAG_BLOCK(device_portal_association)	TAG_REFL_TAG_BLOCK(game_portal_to_portal_map)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_audibility_block::s_encoded_door_pas_block)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_audibility_block::s_cluster_door_portal_encoded_pas_block)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_audibility_block::s_ai_deafening_pas_block)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_audibility_block::s_cluster_distances_block)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_audibility_block::s_machine_door_mapping_block)	TAG_REFL_PROPERTY(machine_door_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_audibility_block)	TAG_REFL_PROPERTY(door_portal_count)	TAG_REFL_PROPERTY(cluster_distance_bounds_min)	TAG_REFL_PROPERTY(cluster_distance_bounds_max)	TAG_REFL_TAG_BLOCK(encoded_door_pas)	TAG_REFL_TAG_BLOCK(cluster_door_portal_encoded_pas)	TAG_REFL_TAG_BLOCK(ai_deafening_pas)	TAG_REFL_TAG_BLOCK(cluster_distances)	TAG_REFL_TAG_BLOCK(machine_door_mapping)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_object_fake_lightprobes_block)	TAG_REFL_PROPERTY(unique_id)	TAG_REFL_PROPERTY(origin_bsp_index)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(source)	TAG_REFL_REAL_COLOR_RGB(ambient)	TAG_REFL_PROPERTY(shadow_direction_i)	TAG_REFL_PROPERTY(shadow_direction_j)	TAG_REFL_PROPERTY(shadow_direction_k)	TAG_REFL_PROPERTY(lighting_accuracy)	TAG_REFL_PROPERTY(shadow_opacity)	TAG_REFL_REAL_COLOR_RGB(primary_direction_color)	TAG_REFL_PROPERTY(primary_direction_i)	TAG_REFL_PROPERTY(primary_direction_j)	TAG_REFL_PROPERTY(primary_direction_k)	TAG_REFL_REAL_COLOR_RGB(secondary_direction_color)	TAG_REFL_PROPERTY(secondary_direction_i)	TAG_REFL_PROPERTY(secondary_direction_j)	TAG_REFL_PROPERTY(secondary_direction_k)	TAG_REFL_PROPERTY(sh_index)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_decorators_block::s_cache_blocks_block::s_resources_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(primary_locator)	TAG_REFL_PROPERTY(secondary_locator)	TAG_REFL_PROPERTY(resoure_data_size)	TAG_REFL_PROPERTY(resource_data_offset)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_decorators_block::s_cache_blocks_block::s_cache_block_data_block::s_placements_block)	TAG_REFL_PROPERTY(internal_data_1)	TAG_REFL_PROPERTY(compressed_position)	TAG_REFL_PROPERTY(compressed_light_direction)	TAG_REFL_PROPERTY(compressed_light_2_direction)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_decorators_block::s_cache_blocks_block::s_cache_block_data_block::s_decal_vertices_block)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(texcoord_0_x)	TAG_REFL_PROPERTY(texcoord_0_y)	TAG_REFL_PROPERTY(texcoord_1_x)	TAG_REFL_PROPERTY(texcoord_1_y)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_decorators_block::s_cache_blocks_block::s_cache_block_data_block::s_decal_indices_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_decorators_block::s_cache_blocks_block::s_cache_block_data_block::s_sprite_vertices_block)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(offset_i)	TAG_REFL_PROPERTY(offset_j)	TAG_REFL_PROPERTY(offset_k)	TAG_REFL_PROPERTY(axis_i)	TAG_REFL_PROPERTY(axis_j)	TAG_REFL_PROPERTY(axis_k)	TAG_REFL_PROPERTY(texcoord_x)	TAG_REFL_PROPERTY(texcoord_y)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_decorators_block::s_cache_blocks_block::s_cache_block_data_block::s_sprite_indices_block)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_decorators_block::s_cache_blocks_block::s_cache_block_data_block)	TAG_REFL_TAG_BLOCK(placements)	TAG_REFL_TAG_BLOCK(decal_vertices)	TAG_REFL_TAG_BLOCK(decal_indices)	TAG_REFL_TAG_BLOCK(sprite_vertices)	TAG_REFL_TAG_BLOCK(sprite_indices)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_decorators_block::s_cache_blocks_block)	TAG_REFL_PROPERTY(block_offset)	TAG_REFL_PROPERTY(block_size)	TAG_REFL_PROPERTY(section_data_size)	TAG_REFL_PROPERTY(resource_data_size)	TAG_REFL_TAG_BLOCK(resources)	TAG_REFL_TAG_REFERENCE(model)	TAG_REFL_PROPERTY(owner_tag_section_offset)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_BLOCK(cache_block_data)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_decorators_block::s_groups_block)	TAG_REFL_PROPERTY(decorator_set)	TAG_REFL_PROPERTY(decorator_type)	TAG_REFL_PROPERTY(shader_index)	TAG_REFL_PROPERTY(compressed_radius)	TAG_REFL_PROPERTY(cluster_index)	TAG_REFL_PROPERTY(cache_block_index)	TAG_REFL_PROPERTY(decorator_start_index)	TAG_REFL_PROPERTY(decorator_count)	TAG_REFL_PROPERTY(vertex_start_offset)	TAG_REFL_PROPERTY(vertex_count)	TAG_REFL_PROPERTY(index_start_offset)	TAG_REFL_PROPERTY(index_count)	TAG_REFL_PROPERTY(compressed_bounding_center)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_decorators_block::s_cells_block)	TAG_REFL_PROPERTY(child_index)	TAG_REFL_PROPERTY(child_index)	TAG_REFL_PROPERTY(child_index)	TAG_REFL_PROPERTY(child_index)	TAG_REFL_PROPERTY(child_index)	TAG_REFL_PROPERTY(child_index)	TAG_REFL_PROPERTY(child_index)	TAG_REFL_PROPERTY(child_index)	TAG_REFL_PROPERTY(cache_block_index)	TAG_REFL_PROPERTY(group_count)	TAG_REFL_PROPERTY(group_start_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_decorators_block::s_decals_block)	TAG_REFL_PROPERTY(decorator_set_index)	TAG_REFL_PROPERTY(decorator_class)	TAG_REFL_PROPERTY(decorator_permutation)	TAG_REFL_PROPERTY(sprite_index)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(left_i)	TAG_REFL_PROPERTY(left_j)	TAG_REFL_PROPERTY(left_k)	TAG_REFL_PROPERTY(up_i)	TAG_REFL_PROPERTY(up_j)	TAG_REFL_PROPERTY(up_k)	TAG_REFL_PROPERTY(extents_i)	TAG_REFL_PROPERTY(extents_j)	TAG_REFL_PROPERTY(extents_k)	TAG_REFL_PROPERTY(previous_position_x)	TAG_REFL_PROPERTY(previous_position_y)	TAG_REFL_PROPERTY(previous_position_z)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_structure_bsp_group_definition::s_decorators_block)	TAG_REFL_PROPERTY(grid_origin_x)	TAG_REFL_PROPERTY(grid_origin_y)	TAG_REFL_PROPERTY(grid_origin_z)	TAG_REFL_PROPERTY(cell_count_per_dimension)	TAG_REFL_TAG_BLOCK(cache_blocks)	TAG_REFL_TAG_BLOCK(groups)	TAG_REFL_TAG_BLOCK(cells)	TAG_REFL_TAG_BLOCK(decals)REFL_END
TAG_REFL(s_scenario_structure_bsp_group_definition)	TAG_REFL_TAG_BLOCK(unk)	TAG_REFL_PROPERTY(bsp_checksum)	TAG_REFL_TAG_BLOCK(collision_materials)	TAG_REFL_TAG_BLOCK(collision_bsp)	TAG_REFL_PROPERTY(vehicle_floor)	TAG_REFL_PROPERTY(vehicle_ceiling)	TAG_REFL_TAG_BLOCK(leaves)	TAG_REFL_PROPERTY(world_bounds_x_min)	TAG_REFL_PROPERTY(world_bounds_x_max)	TAG_REFL_PROPERTY(world_bounds_y_min)	TAG_REFL_PROPERTY(world_bounds_y_max)	TAG_REFL_PROPERTY(world_bounds_z_min)	TAG_REFL_PROPERTY(world_bounds_z_max)	TAG_REFL_TAG_BLOCK(surface_references)	TAG_REFL_DATA_BLOCK(cluster_data)	TAG_REFL_TAG_BLOCK(cluster_portals)	TAG_REFL_TAG_BLOCK(fog_planes)	TAG_REFL_TAG_BLOCK(weather_palette)	TAG_REFL_TAG_BLOCK(weather_polyhedra)	TAG_REFL_TAG_BLOCK(detail_objects)	TAG_REFL_TAG_BLOCK(clusters)	TAG_REFL_TAG_BLOCK(materials)	TAG_REFL_TAG_BLOCK(sky_owner_cluster)	TAG_REFL_TAG_BLOCK(conveyor_surfaces)	TAG_REFL_TAG_BLOCK(breakable_surfaces)	TAG_REFL_TAG_BLOCK(pathfinding_data)	TAG_REFL_TAG_BLOCK(pathfinding_edges)	TAG_REFL_TAG_BLOCK(background_sound_palette)	TAG_REFL_TAG_BLOCK(sound_environment_palette)	TAG_REFL_DATA_BLOCK(sound_pas_data)	TAG_REFL_TAG_BLOCK(markers)	TAG_REFL_TAG_BLOCK(runtime_decals)	TAG_REFL_TAG_BLOCK(environment_object_palette)	TAG_REFL_TAG_BLOCK(environment_objects)	TAG_REFL_TAG_BLOCK(instanced_geometry_definitions)	TAG_REFL_TAG_BLOCK(instanced_geometry_instances)	TAG_REFL_TAG_BLOCK(ambience_sound_clusters)	TAG_REFL_TAG_BLOCK(reverb_sound_clusters)	TAG_REFL_TAG_BLOCK(transparent_planes)	TAG_REFL_PROPERTY(vehicle_sperical_limit_radius)	TAG_REFL_PROPERTY(vehicle_sperical_limit_x)	TAG_REFL_PROPERTY(vehicle_sperical_limit_y)	TAG_REFL_PROPERTY(vehicle_sperical_limit_z)	TAG_REFL_TAG_BLOCK(debug_info)	TAG_REFL_TAG_REFERENCE(decorators)	TAG_REFL_DATA_BLOCK(mopp_codes)	TAG_REFL_PROPERTY(mopp_bounds_min_x)	TAG_REFL_PROPERTY(mopp_bounds_min_y)	TAG_REFL_PROPERTY(mopp_bounds_min_z)	TAG_REFL_PROPERTY(mopp_bounds_max_x)	TAG_REFL_PROPERTY(mopp_bounds_max_y)	TAG_REFL_PROPERTY(mopp_bounds_max_z)	TAG_REFL_DATA_BLOCK(breakable_surface_mopp_codes)	TAG_REFL_TAG_BLOCK(breakable_surface_key_table)	TAG_REFL_TAG_BLOCK(water_definitions)	TAG_REFL_TAG_BLOCK(portal_device_mapping)	TAG_REFL_TAG_BLOCK(audibility)	TAG_REFL_TAG_BLOCK(object_fake_lightprobes)	TAG_REFL_TAG_BLOCK(decorators)REFL_END

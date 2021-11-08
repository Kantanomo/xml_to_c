#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: collision_model
		* group_tag : coll
 		* header size : 52
		* *********************************************************************/ 
struct s_collision_model_group_definition
{
PAD(0x10);//0x0
enum class e_flags : __int32
{
contains_open_edges = FLAG(0),
};
e_flags flags;//0x10
struct s_materials_block
{
string_id name;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_materials_block,0x4);
tag_block<s_materials_block> materials;//0x14
struct s_regions_block
{
string_id name;//0x0
struct s_permutations_block
{
string_id name;//0x0
struct s_bsps_block
{
__int16 node_index;//0x0
__int16 unknown;//0x2
struct s_bsp_3d_nodes_block
{
__int16 plane;//0x0
__int16 first_child;//0x2
unsigned __int8 unknown;//0x4
__int16 second_child;//0x5
unsigned __int8 unknown;//0x7
};
TAG_BLOCK_SIZE_ASSERT(s_bsp_3d_nodes_block,0x8);
tag_block<s_bsp_3d_nodes_block> bsp_3d_nodes;//0x4
struct s_planes_block
{
float plane_i;//0x0
float plane_j;//0x4
float plane_k;//0x8
float plane_d;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_planes_block,0x10);
tag_block<s_planes_block> planes;//0xC
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
tag_block<s_leaves_block> leaves;//0x14
struct s_bsp_2d_references_block
{
__int16 plane;//0x0
__int16 bsp_2d_node;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_bsp_2d_references_block,0x4);
tag_block<s_bsp_2d_references_block> bsp_2d_references;//0x1C
struct s_bsp_2d_nodes_block
{
float plane_i;//0x0
float plane_j;//0x4
float plane_d;//0x8
__int16 left_child;//0xC
__int16 right_child;//0xE
};
TAG_BLOCK_SIZE_ASSERT(s_bsp_2d_nodes_block,0x10);
tag_block<s_bsp_2d_nodes_block> bsp_2d_nodes;//0x24
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
unsigned __int8 breakable_surface;//0x5
__int16 material;//0x6
};
TAG_BLOCK_SIZE_ASSERT(s_surfaces_block,0x8);
tag_block<s_surfaces_block> surfaces;//0x2C
struct s_edges_block
{
__int16 start_vertex;//0x0
__int16 end_vertex;//0x2
__int16 forward_edge;//0x4
__int16 reverse_edge;//0x6
__int16 left_surface;//0x8
__int16 right_surface;//0xA
};
TAG_BLOCK_SIZE_ASSERT(s_edges_block,0xC);
tag_block<s_edges_block> edges;//0x34
struct s_vertices_block
{
PAD(0xC);//0x0
__int16 first_edge;//0xC
__int16 unknown;//0xE
};
TAG_BLOCK_SIZE_ASSERT(s_vertices_block,0x10);
tag_block<s_vertices_block> vertices;//0x3C
};
TAG_BLOCK_SIZE_ASSERT(s_bsps_block,0x44);
tag_block<s_bsps_block> bsps;//0x4
struct s_bsp_physics_block
{
PAD(0x4);//0x0
__int16 size;//0x4
__int16 count;//0x6
PAD(0x8);//0x8
float unknown;//0x10
float unknown;//0x14
float unknown;//0x18
PAD(0x4);//0x1C
float unknown;//0x20
float unknown;//0x24
float unknown;//0x28
PAD(0x4);//0x2C
tag_referenceN model;//0x30
PAD(0x10);//0x34
__int16 size;//0x44
__int16 count;//0x46
PAD(0xC);//0x48
__int16 size;//0x54
__int16 count;//0x56
PAD(0xC);//0x58
struct s_mopp_code_data_block
{
unsigned __int8 unknown;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_mopp_code_data_block,0x1);
tag_block<s_mopp_code_data_block> mopp_code_data;//0x64
PAD(0x4);//0x6C
};
TAG_BLOCK_SIZE_ASSERT(s_bsp_physics_block,0x70);
tag_block<s_bsp_physics_block> bsp_physics;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_permutations_block,0x14);
tag_block<s_permutations_block> permutations;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_regions_block,0xC);
tag_block<s_regions_block> regions;//0x1C
struct s_pathfinding_spheres_block
{
__int16 node;//0x0
enum class e_flags : __int16
{
remains_when_open = FLAG(0),
vehicle_only = FLAG(1),
with_sectors = FLAG(2),
};
e_flags flags;//0x2
float center_x;//0x4
float center_y;//0x8
float center_z;//0xC
float radius;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_pathfinding_spheres_block,0x14);
tag_block<s_pathfinding_spheres_block> pathfinding_spheres;//0x24
struct s_nodes_block
{
string_id name;//0x0
__int16 unknown;//0x4
__int16 parent_node;//0x6
__int16 next_sibling_node;//0x8
__int16 first_child_node;//0xA
};
TAG_BLOCK_SIZE_ASSERT(s_nodes_block,0xC);
tag_block<s_nodes_block> nodes;//0x2C
};
TAG_GROUP_SIZE_ASSERT(s_collision_model_group_definition,0x34);
TAG_REFL_TAG_BLOCK_DEF(s_collision_model_group_definition::s_materials_block)
TAG_REFL_TAG_BLOCK_DEF(s_collision_model_group_definition::s_regions_block::s_permutations_block::s_bsps_block::s_bsp_3d_nodes_block)
TAG_REFL_TAG_BLOCK_DEF(s_collision_model_group_definition::s_regions_block::s_permutations_block::s_bsps_block::s_planes_block)
TAG_REFL_TAG_BLOCK_DEF(s_collision_model_group_definition::s_regions_block::s_permutations_block::s_bsps_block::s_leaves_block)
TAG_REFL_TAG_BLOCK_DEF(s_collision_model_group_definition::s_regions_block::s_permutations_block::s_bsps_block::s_bsp_2d_references_block)
TAG_REFL_TAG_BLOCK_DEF(s_collision_model_group_definition::s_regions_block::s_permutations_block::s_bsps_block::s_bsp_2d_nodes_block)
TAG_REFL_TAG_BLOCK_DEF(s_collision_model_group_definition::s_regions_block::s_permutations_block::s_bsps_block::s_surfaces_block)
TAG_REFL_TAG_BLOCK_DEF(s_collision_model_group_definition::s_regions_block::s_permutations_block::s_bsps_block::s_edges_block)
TAG_REFL_TAG_BLOCK_DEF(s_collision_model_group_definition::s_regions_block::s_permutations_block::s_bsps_block::s_vertices_block)
TAG_REFL_TAG_BLOCK_DEF(s_collision_model_group_definition::s_regions_block::s_permutations_block::s_bsps_block)
TAG_REFL_TAG_BLOCK_DEF(s_collision_model_group_definition::s_regions_block::s_permutations_block::s_bsp_physics_block::s_mopp_code_data_block)
TAG_REFL_TAG_BLOCK_DEF(s_collision_model_group_definition::s_regions_block::s_permutations_block::s_bsp_physics_block)
TAG_REFL_TAG_BLOCK_DEF(s_collision_model_group_definition::s_regions_block::s_permutations_block)
TAG_REFL_TAG_BLOCK_DEF(s_collision_model_group_definition::s_regions_block)
TAG_REFL_TAG_BLOCK_DEF(s_collision_model_group_definition::s_pathfinding_spheres_block)
TAG_REFL_TAG_BLOCK_DEF(s_collision_model_group_definition::s_nodes_block)
TAG_REFL(s_collision_model_group_definition)
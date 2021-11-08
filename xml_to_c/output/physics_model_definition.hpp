#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: physics_model
		* group_tag : phmo
 		* header size : 272
		* *********************************************************************/ 
struct s_physics_model_group_definition
{
enum class e_flags : __int32
{
bit_0 = FLAG(0),
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
e_flags flags;//0x0
float object_weight;//0x4
float low_frequency_decativation_scale;//0x8
float high_frequency_decativation_scale;//0xC
float unknown;//0x10
PAD(0x14);//0x14
struct s_lift_properties_block
{
PAD(0x8);//0x0
string_id name;//0x8
string_id unknown;//0xC
float unknown;//0x10
float unknown;//0x14
float hookes_law_e;//0x18
float linear_dead_radius;//0x1C
float center_acceleration;//0x20
float center_max_velocity;//0x24
float axis_acceleration;//0x28
float axis_max_velocity;//0x2C
float direction_acceleration;//0x30
float direction_max_velocity;//0x34
float unknown;//0x38
float unknown;//0x3C
float unknown;//0x40
float unknown;//0x44
float unknown;//0x48
float unknown;//0x4C
float unknown;//0x50
float alignment_hookes_law_e;//0x54
angle alignment_acceleration;//0x58
angle alignment_max_velocity;//0x5C
float unknown;//0x60
float unknown;//0x64
};
TAG_BLOCK_SIZE_ASSERT(s_lift_properties_block,0x68);
tag_block<s_lift_properties_block> lift_properties;//0x28
struct s_unknown9_block
{
PAD(0x8);//0x0
struct s_unknown10_block
{
PAD(0xC);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_unknown10_block,0xC);
tag_block<s_unknown10_block> unknown10;//0x8
string_id NUM_;//0x10
string_id NUM_;//0x14
};
TAG_BLOCK_SIZE_ASSERT(s_unknown9_block,0x18);
tag_block<s_unknown9_block> unknown9;//0x30
struct s_rigid_bodies_block
{
__int16 node;//0x0
__int16 region;//0x2
__int16 permutation;//0x4
__int16 unknown;//0x6
float bounding_sphere_offset_x;//0x8
float bounding_sphere_offset_y;//0xC
float bounding_sphere_offset_z;//0x10
float bounding_sphere_radius;//0x14
enum class e_flags : __int16
{
no_collisions_with_self = FLAG(0),
only_collide_with_environment = FLAG(1),
disable_effects = FLAG(2),
does_not_interact_with_environment = FLAG(3),
best_early_mover_body = FLAG(4),
has_no_phantom_power_version = FLAG(5),
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
e_flags flags;//0x18
enum class e_motion_type : __int16
{
sphere = 0,
stabilized_sphere = 1,
box = 2,
stabilized_box = 3,
keyframed = 4,
fixed = 5,
};
e_motion_type motion_type;//0x1A
__int16 no_phantom_power_alt;//0x1C
enum class e_size : __int16
{
default = 0,
tiny = 1,
small = 2,
medium = 3,
large = 4,
huge = 5,
extra_huge = 6,
};
e_size size;//0x1E
float inertia_tensor_scale;//0x20
float linear_damping;//0x24
float angular_damping;//0x28
float center_of_mass_offset_i;//0x2C
float center_of_mass_offset_j;//0x30
float center_of_mass_offset_k;//0x34
enum class e_shape_type : __int16
{
sphere = 0,
capsule = 1,
boxes = 2,
triangle = 3,
covex_shape = 4,
multi_sphere = 5,
bv_shape = 6,
list_shape = 20,
bv_tree = 21,
};
e_shape_type shape_type;//0x38
__int16 shape_index;//0x3A
float mass;//0x3C
PAD(0x50);//0x40
};
TAG_BLOCK_SIZE_ASSERT(s_rigid_bodies_block,0x90);
tag_block<s_rigid_bodies_block> rigid_bodies;//0x38
struct s_materials_block
{
string_id material_base;//0x0
string_id material;//0x4
__int16 unknown;//0x8
__int16 unknown;//0xA
};
TAG_BLOCK_SIZE_ASSERT(s_materials_block,0xC);
tag_block<s_materials_block> materials;//0x40
struct s_spheres_block
{
string_id unknown;//0x0
PAD(0x4);//0x4
float unknown;//0x8
float unknown;//0xC
float unknown;//0x10
PAD(0x4);//0x14
float unknown;//0x18
PAD(0xA);//0x1C
__int16 count;//0x26
PAD(0x4);//0x28
float unknown;//0x2C
PAD(0x10);//0x30
float unknown;//0x40
PAD(0x10);//0x44
float unknown;//0x54
PAD(0x10);//0x58
float unknown;//0x68
PAD(0x14);//0x6C
};
TAG_BLOCK_SIZE_ASSERT(s_spheres_block,0x80);
tag_block<s_spheres_block> spheres;//0x48
struct s_multisphere_block
{
PAD(0x20);//0x0
__int16 unknown;//0x20
PAD(0x8E);//0x22
};
TAG_BLOCK_SIZE_ASSERT(s_multisphere_block,0xB0);
tag_block<s_multisphere_block> multisphere;//0x50
struct s_capsules_block
{
string_id name;//0x0
__int16 material;//0x4
__int16 global_material_index;//0x6
float unknown;//0x8
float unknown;//0xC
float unknown;//0x10
PAD(0x4);//0x14
float mass;//0x18
__int16 overall_shape_index;//0x1C
__int8 phantom_index;//0x1E
__int8 unknown;//0x1F
__int32 transform_shape_vftableruntime;//0x20
__int16 unknown;//0x24
__int16 count;//0x26
__int32 pill_addrruntime;//0x28
PAD(0x4);//0x2C
float unknown;//0x30
float unknown;//0x34
PAD(0x4);//0x38
float unknown;//0x3C
float unknown;//0x40
float unknown;//0x44
float unknown;//0x48
float unknown;//0x4C
};
TAG_BLOCK_SIZE_ASSERT(s_capsules_block,0x50);
tag_block<s_capsules_block> capsules;//0x58
struct s_boxes_block
{
string_id name;//0x0
__int16 material;//0x4
__int16 global_material_index;//0x6
float unknown;//0x8
float unknown;//0xC
float unknown;//0x10
PAD(0x4);//0x14
float mass;//0x18
__int16 overall_shape_index;//0x1C
__int8 phantom_index;//0x1E
__int8 unknown;//0x1F
__int32 transform_shape_vftableruntime;//0x20
__int16 unknown;//0x24
__int16 count;//0x26
__int32 box_addrruntime;//0x28
PAD(0x4);//0x2C
float x_halfspace;//0x30
float y_halfspace;//0x34
float z_halfspace;//0x38
PAD(0x54);//0x3C
};
TAG_BLOCK_SIZE_ASSERT(s_boxes_block,0x90);
tag_block<s_boxes_block> boxes;//0x60
struct s_triangles_block
{
PAD(0x60);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_triangles_block,0x60);
tag_block<s_triangles_block> triangles;//0x68
struct s_convex_shapes_block
{
string_id name;//0x0
__int16 material;//0x4
__int16 global_material_index;//0x6
float unknown;//0x8
float unknown;//0xC
float unknown;//0x10
PAD(0x4);//0x14
float mass;//0x18
__int16 overall_shape_index;//0x1C
__int8 phantom_index;//0x1E
__int8 unknown;//0x1F
__int32 unknown;//0x20
__int16 unknown;//0x24
__int16 count;//0x26
__int32 offset;//0x28
PAD(0xC4);//0x2C
__int32 unknown;//0xF0
PAD(0x4);//0xF4
__int32 unknown;//0xF8
__int32 unknown;//0xFC
};
TAG_BLOCK_SIZE_ASSERT(s_convex_shapes_block,0x100);
tag_block<s_convex_shapes_block> convex_shapes;//0x70
struct s_scalers_block
{
angle length_vector_i;//0x0
angle length_vector_j;//0x4
angle length_vector_k;//0x8
angle length_vector_w;//0xC
angle width_vector_i;//0x10
angle width_vector_j;//0x14
angle width_vector_k;//0x18
angle width_vector_w;//0x1C
angle height_vector_i;//0x20
angle height_vector_j;//0x24
angle height_vector_k;//0x28
angle height_vector_w;//0x2C
};
TAG_BLOCK_SIZE_ASSERT(s_scalers_block,0x30);
tag_block<s_scalers_block> scalers;//0x78
struct s_planes_block
{
float x;//0x0
float y;//0x4
float z;//0x8
float d;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_planes_block,0x10);
tag_block<s_planes_block> planes;//0x80
PAD(0x8);//0x88
struct s_list_shape_block
{
PAD(0x38);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_list_shape_block,0x38);
tag_block<s_list_shape_block> list_shape;//0x90
struct s_unknown239_block
{
PAD(0x8);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_unknown239_block,0x8);
tag_block<s_unknown239_block> unknown239;//0x98
struct s_bv_tree_block
{
PAD(0x14);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_bv_tree_block,0x14);
tag_block<s_bv_tree_block> bv_tree;//0xA0
struct s_unknown253_block
{
unsigned __int8 unknown;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_unknown253_block,0x1);
tag_block<s_unknown253_block> unknown253;//0xA8
PAD(0x8);//0xB0
struct s_unknown25_block
{
string_id unknown;//0x0
PAD(0x90);//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_unknown25_block,0x94);
tag_block<s_unknown25_block> unknown25;//0xB8
struct s_damage_permutations_block
{
string_id part;//0x0
struct s_damage_levels_block
{
string_id level_of_damage;//0x0
struct s_phmo_variation_block
{
__int16 phmo_variation_chunk;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_phmo_variation_block,0x2);
tag_block<s_phmo_variation_block> phmo_variation;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_damage_levels_block,0xC);
tag_block<s_damage_levels_block> damage_levels;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_damage_permutations_block,0xC);
tag_block<s_damage_permutations_block> damage_permutations;//0xC0
struct s_bones_block
{
string_id bone;//0x0
__int16 parent;//0x4
__int16 child;//0x6
__int16 next_sibling;//0x8
__int16 final_sibling;//0xA
};
TAG_BLOCK_SIZE_ASSERT(s_bones_block,0xC);
tag_block<s_bones_block> bones;//0xC8
PAD(0x18);//0xD0
struct s_hinges_block
{
string_id name;//0x0
__int16 start_permutation;//0x4
__int16 end_permutation;//0x6
PAD(0x7C);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_hinges_block,0x84);
tag_block<s_hinges_block> hinges;//0xE8
struct s_unknown268_block
{
string_id unknown;//0x0
PAD(0x74);//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_unknown268_block,0x78);
tag_block<s_unknown268_block> unknown268;//0xF0
PAD(0x10);//0xF8
struct s_bv_shape_block
{
float unknown;//0x0
float unknown;//0x4
float unknown;//0x8
float unknown;//0xC
float unknown;//0x10
float unknown;//0x14
float unknown;//0x18
float unknown;//0x1C
};
TAG_BLOCK_SIZE_ASSERT(s_bv_shape_block,0x20);
tag_block<s_bv_shape_block> bv_shape;//0x108
};
TAG_GROUP_SIZE_ASSERT(s_physics_model_group_definition,0x110);
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_lift_properties_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_STRING_ID(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(hookes_law_e)	TAG_REFL_PROPERTY(linear_dead_radius)	TAG_REFL_PROPERTY(center_acceleration)	TAG_REFL_PROPERTY(center_max_velocity)	TAG_REFL_PROPERTY(axis_acceleration)	TAG_REFL_PROPERTY(axis_max_velocity)	TAG_REFL_PROPERTY(direction_acceleration)	TAG_REFL_PROPERTY(direction_max_velocity)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(alignment_hookes_law_e)	TAG_REFL_ANGLE(alignment_acceleration)	TAG_REFL_ANGLE(alignment_max_velocity)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_unknown9_block::s_unknown10_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_unknown9_block)	TAG_REFL_TAG_BLOCK(unknown10)	TAG_REFL_STRING_ID(NUM_)	TAG_REFL_STRING_ID(NUM_)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_rigid_bodies_block)	TAG_REFL_PROPERTY(node)	TAG_REFL_PROPERTY(region)	TAG_REFL_PROPERTY(permutation)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(bounding_sphere_offset_x)	TAG_REFL_PROPERTY(bounding_sphere_offset_y)	TAG_REFL_PROPERTY(bounding_sphere_offset_z)	TAG_REFL_PROPERTY(bounding_sphere_radius)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(motion_type)	TAG_REFL_PROPERTY(no_phantom_power_alt)	TAG_REFL_PROPERTY(size)	TAG_REFL_PROPERTY(inertia_tensor_scale)	TAG_REFL_PROPERTY(linear_damping)	TAG_REFL_PROPERTY(angular_damping)	TAG_REFL_PROPERTY(center_of_mass_offset_i)	TAG_REFL_PROPERTY(center_of_mass_offset_j)	TAG_REFL_PROPERTY(center_of_mass_offset_k)	TAG_REFL_PROPERTY(shape_type)	TAG_REFL_PROPERTY(shape_index)	TAG_REFL_PROPERTY(mass)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_materials_block)	TAG_REFL_STRING_ID(material_base)	TAG_REFL_STRING_ID(material)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_spheres_block)	TAG_REFL_STRING_ID(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(count)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_multisphere_block)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_capsules_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(material)	TAG_REFL_PROPERTY(global_material_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(mass)	TAG_REFL_PROPERTY(overall_shape_index)	TAG_REFL_PROPERTY(phantom_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(transform_shape_vftableruntime)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(count)	TAG_REFL_PROPERTY(pill_addrruntime)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_boxes_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(material)	TAG_REFL_PROPERTY(global_material_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(mass)	TAG_REFL_PROPERTY(overall_shape_index)	TAG_REFL_PROPERTY(phantom_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(transform_shape_vftableruntime)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(count)	TAG_REFL_PROPERTY(box_addrruntime)	TAG_REFL_PROPERTY(x_halfspace)	TAG_REFL_PROPERTY(y_halfspace)	TAG_REFL_PROPERTY(z_halfspace)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_triangles_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_convex_shapes_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(material)	TAG_REFL_PROPERTY(global_material_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(mass)	TAG_REFL_PROPERTY(overall_shape_index)	TAG_REFL_PROPERTY(phantom_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(count)	TAG_REFL_PROPERTY(offset)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_scalers_block)	TAG_REFL_ANGLE(length_vector_i)	TAG_REFL_ANGLE(length_vector_j)	TAG_REFL_ANGLE(length_vector_k)	TAG_REFL_ANGLE(length_vector_w)	TAG_REFL_ANGLE(width_vector_i)	TAG_REFL_ANGLE(width_vector_j)	TAG_REFL_ANGLE(width_vector_k)	TAG_REFL_ANGLE(width_vector_w)	TAG_REFL_ANGLE(height_vector_i)	TAG_REFL_ANGLE(height_vector_j)	TAG_REFL_ANGLE(height_vector_k)	TAG_REFL_ANGLE(height_vector_w)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_planes_block)	TAG_REFL_PROPERTY(x)	TAG_REFL_PROPERTY(y)	TAG_REFL_PROPERTY(z)	TAG_REFL_PROPERTY(d)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_list_shape_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_unknown239_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_bv_tree_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_unknown253_block)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_unknown25_block)	TAG_REFL_STRING_ID(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_damage_permutations_block::s_damage_levels_block::s_phmo_variation_block)	TAG_REFL_PROPERTY(phmo_variation_chunk)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_damage_permutations_block::s_damage_levels_block)	TAG_REFL_STRING_ID(level_of_damage)	TAG_REFL_TAG_BLOCK(phmo_variation)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_damage_permutations_block)	TAG_REFL_STRING_ID(part)	TAG_REFL_TAG_BLOCK(damage_levels)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_bones_block)	TAG_REFL_STRING_ID(bone)	TAG_REFL_PROPERTY(parent)	TAG_REFL_PROPERTY(child)	TAG_REFL_PROPERTY(next_sibling)	TAG_REFL_PROPERTY(final_sibling)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_hinges_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(start_permutation)	TAG_REFL_PROPERTY(end_permutation)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_unknown268_block)	TAG_REFL_STRING_ID(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_physics_model_group_definition::s_bv_shape_block)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL(s_physics_model_group_definition)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(object_weight)	TAG_REFL_PROPERTY(low_frequency_decativation_scale)	TAG_REFL_PROPERTY(high_frequency_decativation_scale)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_BLOCK(lift_properties)	TAG_REFL_TAG_BLOCK(unknown9)	TAG_REFL_TAG_BLOCK(rigid_bodies)	TAG_REFL_TAG_BLOCK(materials)	TAG_REFL_TAG_BLOCK(spheres)	TAG_REFL_TAG_BLOCK(multisphere)	TAG_REFL_TAG_BLOCK(capsules)	TAG_REFL_TAG_BLOCK(boxes)	TAG_REFL_TAG_BLOCK(triangles)	TAG_REFL_TAG_BLOCK(convex_shapes)	TAG_REFL_TAG_BLOCK(scalers)	TAG_REFL_TAG_BLOCK(planes)	TAG_REFL_TAG_BLOCK(list_shape)	TAG_REFL_TAG_BLOCK(unknown239)	TAG_REFL_TAG_BLOCK(bv_tree)	TAG_REFL_TAG_BLOCK(unknown253)	TAG_REFL_TAG_BLOCK(unknown25)	TAG_REFL_TAG_BLOCK(damage_permutations)	TAG_REFL_TAG_BLOCK(bones)	TAG_REFL_TAG_BLOCK(hinges)	TAG_REFL_TAG_BLOCK(unknown268)	TAG_REFL_TAG_BLOCK(bv_shape)REFL_END

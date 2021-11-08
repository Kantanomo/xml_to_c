#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: scenario
		* group_tag : scnr
 		* header size : 992
		* *********************************************************************/ 
struct s_scenario_group_definition
{
tag_reference do_not_use;//0x0
struct s_skies_block
{
tag_reference sky;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_skies_block,0x8);
tag_block<s_skies_block> skies;//0x8
enum class e_map_type : __int16
{
single_player = 0,
multiplayer = 1,
main_menu = 2,
shared = 3,
single_player_shared = 4,
};
e_map_type map_type;//0x10
enum class e_flags : __int16
{
cortana_hack = FLAG(0),
always_draw_sky = FLAG(1),
dont_strip_pathfinding = FLAG(2),
symmetric_multiplayer_map = FLAG(3),
quickloading_cinematiconly_scenario = FLAG(4),
characters_use_previous_mission_weapons = FLAG(5),
lightmaps_smooth_palettes_with_neighbors = FLAG(6),
snap_to_white_at_start = FLAG(7),
};
e_flags flags;//0x12
PAD(0x8);//0x14
angle local_north;//0x1C
struct s_predicted_resource_block
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
tag_referenceN tag_index;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_predicted_resource_block,0x8);
tag_block<s_predicted_resource_block> predicted_resource;//0x20
PAD(0x8);//0x28
data_block editor_scenario_data;//0x30
struct s_comments_block
{
float position_x;//0x0
float position_y;//0x4
float position_z;//0x8
enum class e_type : __int32
{
generic = 0,
};
e_type type;//0xC
string32 name;//0x10
string256 comment;//0x30
};
TAG_BLOCK_SIZE_ASSERT(s_comments_block,0x130);
tag_block<s_comments_block> comments;//0x38
PAD(0x8);//0x40
struct s_object_names_block
{
string32 name;//0x0
enum class e_type : __int16
{
null = 65535,
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
e_type type;//0x20
__int16 placement_index;//0x22
};
TAG_BLOCK_SIZE_ASSERT(s_object_names_block,0x24);
tag_block<s_object_names_block> object_names;//0x48
struct s_scenery_block
{
__int16 palette_index;//0x0
__int16 name_index;//0x2
enum class e_placement_flags : __int32
{
not_automatically = FLAG(0),
not_on_easy = FLAG(1),
not_on_normal = FLAG(2),
not_on_hard = FLAG(3),
lock_type_to_env_object = FLAG(4),
lock_transform_to_env_object = FLAG(5),
never_placed = FLAG(6),
lock_name_to_env_object = FLAG(7),
create_at_rest = FLAG(8),
};
e_placement_flags placement_flags;//0x4
float position_x;//0x8
float position_y;//0xC
float position_z;//0x10
angle rotation_i;//0x14
angle rotation_j;//0x18
angle rotation_k;//0x1C
float scale;//0x20
enum class e_transform_flags : __int16
{
mirrored = FLAG(0),
};
e_transform_flags transform_flags;//0x24
enum class e_manual_bsp_flags : __int16
{
bsp_0 = FLAG(0),
bsp_1 = FLAG(1),
bsp_2 = FLAG(2),
bsp_3 = FLAG(3),
bsp_4 = FLAG(4),
bsp_5 = FLAG(5),
bsp_6 = FLAG(6),
bsp_7 = FLAG(7),
bsp_8 = FLAG(8),
bsp_9 = FLAG(9),
bsp_10 = FLAG(10),
bsp_11 = FLAG(11),
bsp_12 = FLAG(12),
bsp_13 = FLAG(13),
bsp_14 = FLAG(14),
bsp_15 = FLAG(15),
};
e_manual_bsp_flags manual_bsp_flags;//0x26
unsigned __int16 unique_id_index;//0x28
unsigned __int16 unique_id_salt;//0x2A
__int16 origin_bsp_index;//0x2C
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
e_type type;//0x2E
enum class e_source : __int8
{
structure = 0,
editor = 1,
dynamic = 2,
legacy = 3,
};
e_source source;//0x2F
enum class e_bsp_policy : __int8
{
default = 0,
always_places = 1,
manual_bsp_placement = 2,
};
e_bsp_policy bsp_policy;//0x30
__int8 unknown;//0x31
__int16 editor_folder;//0x32
string_id variant_name;//0x34
enum class e_active_change_colors : __int32
{
primary = FLAG(0),
secondary = FLAG(1),
tertiary = FLAG(2),
quaternary = FLAG(3),
};
e_active_change_colors active_change_colors;//0x38
PAD(0x10);//0x3C
enum class e_pathfinding_policy : __int16
{
tag_default = 0,
dynamic = 1,
cutout = 2,
static = 3,
none = 4,
};
e_pathfinding_policy pathfinding_policy;//0x4C
enum class e_lightmapping_policy : __int16
{
tag_default = 0,
dynamic = 1,
per_vertex = 2,
};
e_lightmapping_policy lightmapping_policy;//0x4E
struct s_pathfinding_references_block
{
__int16 bsp_index;//0x0
__int16 pathfinding_object_index;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_pathfinding_references_block,0x4);
tag_block<s_pathfinding_references_block> pathfinding_references;//0x50
enum class e_valid_multiplayer_games : __int16
{
capture_the_flag = FLAG(0),
slayer = FLAG(1),
oddball = FLAG(2),
king_of_the_hill = FLAG(3),
juggernaut = FLAG(4),
territories = FLAG(5),
assault = FLAG(6),
};
e_valid_multiplayer_games valid_multiplayer_games;//0x58
__int16 unknown;//0x5A
};
TAG_BLOCK_SIZE_ASSERT(s_scenery_block,0x5C);
tag_block<s_scenery_block> scenery;//0x50
struct s_scenery_palette_block
{
tag_reference scenery;//0x0
PAD(0x20);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_scenery_palette_block,0x28);
tag_block<s_scenery_palette_block> scenery_palette;//0x58
struct s_bipeds_block
{
__int16 palette_index;//0x0
__int16 name_index;//0x2
enum class e_placement_flags : __int32
{
not_automatically = FLAG(0),
not_on_easy = FLAG(1),
not_on_normal = FLAG(2),
not_on_hard = FLAG(3),
lock_type_to_env_object = FLAG(4),
lock_transform_to_env_object = FLAG(5),
never_placed = FLAG(6),
lock_name_to_env_object = FLAG(7),
create_at_rest = FLAG(8),
};
e_placement_flags placement_flags;//0x4
float position_x;//0x8
float position_y;//0xC
float position_z;//0x10
angle rotation_i;//0x14
angle rotation_j;//0x18
angle rotation_k;//0x1C
float scale;//0x20
enum class e_transform_flags : __int16
{
mirrored = FLAG(0),
};
e_transform_flags transform_flags;//0x24
enum class e_manual_bsp_flags : __int16
{
bsp_0 = FLAG(0),
bsp_1 = FLAG(1),
bsp_2 = FLAG(2),
bsp_3 = FLAG(3),
bsp_4 = FLAG(4),
bsp_5 = FLAG(5),
bsp_6 = FLAG(6),
bsp_7 = FLAG(7),
bsp_8 = FLAG(8),
bsp_9 = FLAG(9),
bsp_10 = FLAG(10),
bsp_11 = FLAG(11),
bsp_12 = FLAG(12),
bsp_13 = FLAG(13),
bsp_14 = FLAG(14),
bsp_15 = FLAG(15),
};
e_manual_bsp_flags manual_bsp_flags;//0x26
unsigned __int16 unique_id_index;//0x28
unsigned __int16 unique_id_salt;//0x2A
__int16 origin_bsp_index;//0x2C
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
e_type type;//0x2E
enum class e_source : __int8
{
structure = 0,
editor = 1,
dynamic = 2,
legacy = 3,
};
e_source source;//0x2F
enum class e_bsp_policy : __int8
{
default = 0,
always_places = 1,
manual_bsp_placement = 2,
};
e_bsp_policy bsp_policy;//0x30
__int8 unknown;//0x31
__int16 editor_folder;//0x32
string_id variant_name;//0x34
enum class e_active_change_colors : __int32
{
primary = FLAG(0),
secondary = FLAG(1),
tertiary = FLAG(2),
quaternary = FLAG(3),
};
e_active_change_colors active_change_colors;//0x38
PAD(0x10);//0x3C
float body_vitality;//0x4C
enum class e_flags : __int32
{
dead = FLAG(0),
closed = FLAG(1),
not_enterable_by_player = FLAG(2),
};
e_flags flags;//0x50
};
TAG_BLOCK_SIZE_ASSERT(s_bipeds_block,0x54);
tag_block<s_bipeds_block> bipeds;//0x60
struct s_biped_palette_block
{
tag_reference biped;//0x0
PAD(0x20);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_biped_palette_block,0x28);
tag_block<s_biped_palette_block> biped_palette;//0x68
struct s_vehicles_block
{
__int16 palette_index;//0x0
__int16 name_index;//0x2
enum class e_placement_flags : __int32
{
not_automatically = FLAG(0),
not_on_easy = FLAG(1),
not_on_normal = FLAG(2),
not_on_hard = FLAG(3),
lock_type_to_env_object = FLAG(4),
lock_transform_to_env_object = FLAG(5),
never_placed = FLAG(6),
lock_name_to_env_object = FLAG(7),
create_at_rest = FLAG(8),
};
e_placement_flags placement_flags;//0x4
float position_x;//0x8
float position_y;//0xC
float position_z;//0x10
angle rotation_i;//0x14
angle rotation_j;//0x18
angle rotation_k;//0x1C
float scale;//0x20
enum class e_transform_flags : __int16
{
mirrored = FLAG(0),
};
e_transform_flags transform_flags;//0x24
enum class e_manual_bsp_flags : __int16
{
bsp_0 = FLAG(0),
bsp_1 = FLAG(1),
bsp_2 = FLAG(2),
bsp_3 = FLAG(3),
bsp_4 = FLAG(4),
bsp_5 = FLAG(5),
bsp_6 = FLAG(6),
bsp_7 = FLAG(7),
bsp_8 = FLAG(8),
bsp_9 = FLAG(9),
bsp_10 = FLAG(10),
bsp_11 = FLAG(11),
bsp_12 = FLAG(12),
bsp_13 = FLAG(13),
bsp_14 = FLAG(14),
bsp_15 = FLAG(15),
};
e_manual_bsp_flags manual_bsp_flags;//0x26
unsigned __int16 unique_id_index;//0x28
unsigned __int16 unique_id_salt;//0x2A
__int16 origin_bsp_index;//0x2C
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
e_type type;//0x2E
enum class e_source : __int8
{
structure = 0,
editor = 1,
dynamic = 2,
legacy = 3,
};
e_source source;//0x2F
enum class e_bsp_policy : __int8
{
default = 0,
always_places = 1,
manual_bsp_placement = 2,
};
e_bsp_policy bsp_policy;//0x30
__int8 unknown;//0x31
__int16 editor_folder;//0x32
string_id variant_name;//0x34
enum class e_active_change_colors : __int32
{
primary = FLAG(0),
secondary = FLAG(1),
tertiary = FLAG(2),
quaternary = FLAG(3),
};
e_active_change_colors active_change_colors;//0x38
PAD(0x10);//0x3C
float body_vitality;//0x4C
enum class e_flags : __int32
{
dead = FLAG(0),
closed = FLAG(1),
not_enterable_by_player = FLAG(2),
};
e_flags flags;//0x50
};
TAG_BLOCK_SIZE_ASSERT(s_vehicles_block,0x54);
tag_block<s_vehicles_block> vehicles;//0x70
struct s_vehicle_palette_block
{
tag_reference vehicle;//0x0
PAD(0x20);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_vehicle_palette_block,0x28);
tag_block<s_vehicle_palette_block> vehicle_palette;//0x78
struct s_equipment_block
{
__int16 palette_index;//0x0
__int16 name_index;//0x2
enum class e_placement_flags : __int32
{
not_automatically = FLAG(0),
not_on_easy = FLAG(1),
not_on_normal = FLAG(2),
not_on_hard = FLAG(3),
lock_type_to_env_object = FLAG(4),
lock_transform_to_env_object = FLAG(5),
never_placed = FLAG(6),
lock_name_to_env_object = FLAG(7),
create_at_rest = FLAG(8),
};
e_placement_flags placement_flags;//0x4
float position_x;//0x8
float position_y;//0xC
float position_z;//0x10
angle rotation_i;//0x14
angle rotation_j;//0x18
angle rotation_k;//0x1C
float scale;//0x20
enum class e_transform_flags : __int16
{
mirrored = FLAG(0),
};
e_transform_flags transform_flags;//0x24
enum class e_manual_bsp_flags : __int16
{
bsp_0 = FLAG(0),
bsp_1 = FLAG(1),
bsp_2 = FLAG(2),
bsp_3 = FLAG(3),
bsp_4 = FLAG(4),
bsp_5 = FLAG(5),
bsp_6 = FLAG(6),
bsp_7 = FLAG(7),
bsp_8 = FLAG(8),
bsp_9 = FLAG(9),
bsp_10 = FLAG(10),
bsp_11 = FLAG(11),
bsp_12 = FLAG(12),
bsp_13 = FLAG(13),
bsp_14 = FLAG(14),
bsp_15 = FLAG(15),
};
e_manual_bsp_flags manual_bsp_flags;//0x26
unsigned __int16 unique_id_index;//0x28
unsigned __int16 unique_id_salt;//0x2A
__int16 origin_bsp_index;//0x2C
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
e_type type;//0x2E
enum class e_source : __int8
{
structure = 0,
editor = 1,
dynamic = 2,
legacy = 3,
};
e_source source;//0x2F
enum class e_bsp_policy : __int8
{
default = 0,
always_places = 1,
manual_bsp_placement = 2,
};
e_bsp_policy bsp_policy;//0x30
__int8 unknown;//0x31
__int16 editor_folder;//0x32
enum class e_equipment_flags : __int32
{
initially_at_rest_does_not_fall = FLAG(0),
bit_1 = FLAG(1),
does_accelerate_moves_due_to_explosions = FLAG(2),
};
e_equipment_flags equipment_flags;//0x34
};
TAG_BLOCK_SIZE_ASSERT(s_equipment_block,0x38);
tag_block<s_equipment_block> equipment;//0x80
struct s_equipment_palette_block
{
tag_reference equipment;//0x0
PAD(0x20);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_equipment_palette_block,0x28);
tag_block<s_equipment_palette_block> equipment_palette;//0x88
struct s_weapons_block
{
__int16 palette_index;//0x0
__int16 name_index;//0x2
enum class e_placement_flags : __int32
{
not_automatically = FLAG(0),
not_on_easy = FLAG(1),
not_on_normal = FLAG(2),
not_on_hard = FLAG(3),
lock_type_to_env_object = FLAG(4),
lock_transform_to_env_object = FLAG(5),
never_placed = FLAG(6),
lock_name_to_env_object = FLAG(7),
create_at_rest = FLAG(8),
};
e_placement_flags placement_flags;//0x4
float position_x;//0x8
float position_y;//0xC
float position_z;//0x10
angle rotation_i;//0x14
angle rotation_j;//0x18
angle rotation_k;//0x1C
float scale;//0x20
enum class e_transform_flags : __int16
{
mirrored = FLAG(0),
};
e_transform_flags transform_flags;//0x24
enum class e_manual_bsp_flags : __int16
{
bsp_0 = FLAG(0),
bsp_1 = FLAG(1),
bsp_2 = FLAG(2),
bsp_3 = FLAG(3),
bsp_4 = FLAG(4),
bsp_5 = FLAG(5),
bsp_6 = FLAG(6),
bsp_7 = FLAG(7),
bsp_8 = FLAG(8),
bsp_9 = FLAG(9),
bsp_10 = FLAG(10),
bsp_11 = FLAG(11),
bsp_12 = FLAG(12),
bsp_13 = FLAG(13),
bsp_14 = FLAG(14),
bsp_15 = FLAG(15),
};
e_manual_bsp_flags manual_bsp_flags;//0x26
unsigned __int16 unique_id_index;//0x28
unsigned __int16 unique_id_salt;//0x2A
__int16 origin_bsp_index;//0x2C
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
e_type type;//0x2E
enum class e_source : __int8
{
structure = 0,
editor = 1,
dynamic = 2,
legacy = 3,
};
e_source source;//0x2F
enum class e_bsp_policy : __int8
{
default = 0,
always_places = 1,
manual_bsp_placement = 2,
};
e_bsp_policy bsp_policy;//0x30
__int8 unknown;//0x31
__int16 editor_folder;//0x32
string_id variant_name;//0x34
enum class e_active_change_colors : __int32
{
primary = FLAG(0),
secondary = FLAG(1),
tertiary = FLAG(2),
quaternary = FLAG(3),
};
e_active_change_colors active_change_colors;//0x38
PAD(0x10);//0x3C
__int16 rounds_left;//0x4C
__int16 rounds_loaded;//0x4E
enum class e_flags : __int32
{
initially_at_rest_does_not_fall = FLAG(0),
bit_1 = FLAG(1),
does_accelerate_moves_due_to_explosions = FLAG(2),
};
e_flags flags;//0x50
};
TAG_BLOCK_SIZE_ASSERT(s_weapons_block,0x54);
tag_block<s_weapons_block> weapons;//0x90
struct s_weapon_palette_block
{
tag_reference weapon;//0x0
PAD(0x20);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_weapon_palette_block,0x28);
tag_block<s_weapon_palette_block> weapon_palette;//0x98
struct s_device_groups_block
{
string32 name;//0x0
float inital_value;//0x20
enum class e_flags : __int32
{
can_change_only_once = FLAG(0),
};
e_flags flags;//0x24
};
TAG_BLOCK_SIZE_ASSERT(s_device_groups_block,0x28);
tag_block<s_device_groups_block> device_groups;//0xA0
struct s_machines_block
{
__int16 palette_index;//0x0
__int16 name_index;//0x2
enum class e_placement_flags : __int32
{
not_automatically = FLAG(0),
not_on_easy = FLAG(1),
not_on_normal = FLAG(2),
not_on_hard = FLAG(3),
lock_type_to_env_object = FLAG(4),
lock_transform_to_env_object = FLAG(5),
never_placed = FLAG(6),
lock_name_to_env_object = FLAG(7),
create_at_rest = FLAG(8),
};
e_placement_flags placement_flags;//0x4
float position_x;//0x8
float position_y;//0xC
float position_z;//0x10
angle rotation_i;//0x14
angle rotation_j;//0x18
angle rotation_k;//0x1C
float scale;//0x20
enum class e_transform_flags : __int16
{
mirrored = FLAG(0),
};
e_transform_flags transform_flags;//0x24
enum class e_manual_bsp_flags : __int16
{
bsp_0 = FLAG(0),
bsp_1 = FLAG(1),
bsp_2 = FLAG(2),
bsp_3 = FLAG(3),
bsp_4 = FLAG(4),
bsp_5 = FLAG(5),
bsp_6 = FLAG(6),
bsp_7 = FLAG(7),
bsp_8 = FLAG(8),
bsp_9 = FLAG(9),
bsp_10 = FLAG(10),
bsp_11 = FLAG(11),
bsp_12 = FLAG(12),
bsp_13 = FLAG(13),
bsp_14 = FLAG(14),
bsp_15 = FLAG(15),
};
e_manual_bsp_flags manual_bsp_flags;//0x26
unsigned __int16 unique_id_index;//0x28
unsigned __int16 unique_id_salt;//0x2A
__int16 origin_bsp_index;//0x2C
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
e_type type;//0x2E
enum class e_source : __int8
{
structure = 0,
editor = 1,
dynamic = 2,
legacy = 3,
};
e_source source;//0x2F
enum class e_bsp_policy : __int8
{
default = 0,
always_places = 1,
manual_bsp_placement = 2,
};
e_bsp_policy bsp_policy;//0x30
__int8 unknown;//0x31
__int16 editor_folder;//0x32
__int16 power_group;//0x34
__int16 position_group;//0x36
enum class e_flags : __int32
{
initially_open_10 = FLAG(0),
initially_off_00 = FLAG(1),
can_change_only_once = FLAG(2),
position_reversed = FLAG(3),
not_usable_from_any_side = FLAG(4),
};
e_flags flags;//0x38
enum class e_flags : __int32
{
does_not_operate_automatically = FLAG(0),
onesided = FLAG(1),
never_appears_locked = FLAG(2),
opened_by_melee_attack = FLAG(3),
onesided_for_player = FLAG(4),
does_not_close_automatically = FLAG(5),
};
e_flags flags;//0x3C
struct s_pathfinding_references_block
{
__int16 bsp_index;//0x0
__int16 pathfinding_object_index;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_pathfinding_references_block,0x4);
tag_block<s_pathfinding_references_block> pathfinding_references;//0x40
};
TAG_BLOCK_SIZE_ASSERT(s_machines_block,0x48);
tag_block<s_machines_block> machines;//0xA8
struct s_machine_palette_block
{
tag_reference machine;//0x0
PAD(0x20);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_machine_palette_block,0x28);
tag_block<s_machine_palette_block> machine_palette;//0xB0
struct s_controls_block
{
__int16 palette_index;//0x0
__int16 name_index;//0x2
enum class e_placement_flags : __int32
{
not_automatically = FLAG(0),
not_on_easy = FLAG(1),
not_on_normal = FLAG(2),
not_on_hard = FLAG(3),
lock_type_to_env_object = FLAG(4),
lock_transform_to_env_object = FLAG(5),
never_placed = FLAG(6),
lock_name_to_env_object = FLAG(7),
create_at_rest = FLAG(8),
};
e_placement_flags placement_flags;//0x4
float position_x;//0x8
float position_y;//0xC
float position_z;//0x10
angle rotation_i;//0x14
angle rotation_j;//0x18
angle rotation_k;//0x1C
float scale;//0x20
enum class e_transform_flags : __int16
{
mirrored = FLAG(0),
};
e_transform_flags transform_flags;//0x24
enum class e_manual_bsp_flags : __int16
{
bsp_0 = FLAG(0),
bsp_1 = FLAG(1),
bsp_2 = FLAG(2),
bsp_3 = FLAG(3),
bsp_4 = FLAG(4),
bsp_5 = FLAG(5),
bsp_6 = FLAG(6),
bsp_7 = FLAG(7),
bsp_8 = FLAG(8),
bsp_9 = FLAG(9),
bsp_10 = FLAG(10),
bsp_11 = FLAG(11),
bsp_12 = FLAG(12),
bsp_13 = FLAG(13),
bsp_14 = FLAG(14),
bsp_15 = FLAG(15),
};
e_manual_bsp_flags manual_bsp_flags;//0x26
unsigned __int16 unique_id_index;//0x28
unsigned __int16 unique_id_salt;//0x2A
__int16 origin_bsp_index;//0x2C
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
e_type type;//0x2E
enum class e_source : __int8
{
structure = 0,
editor = 1,
dynamic = 2,
legacy = 3,
};
e_source source;//0x2F
enum class e_bsp_policy : __int8
{
default = 0,
always_places = 1,
manual_bsp_placement = 2,
};
e_bsp_policy bsp_policy;//0x30
__int8 unknown;//0x31
__int16 editor_folder;//0x32
__int16 power_group;//0x34
__int16 position_group;//0x36
enum class e_flags : __int32
{
initially_open_10 = FLAG(0),
initially_off_00 = FLAG(1),
can_change_only_once = FLAG(2),
position_reversed = FLAG(3),
not_usable_from_any_side = FLAG(4),
};
e_flags flags;//0x38
enum class e_flags : __int32
{
usable_from_both_sides = FLAG(0),
};
e_flags flags;//0x3C
__int16 dont_touch_this;//0x40
__int16 unknown;//0x42
};
TAG_BLOCK_SIZE_ASSERT(s_controls_block,0x44);
tag_block<s_controls_block> controls;//0xB8
struct s_control_palette_block
{
tag_reference control;//0x0
PAD(0x20);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_control_palette_block,0x28);
tag_block<s_control_palette_block> control_palette;//0xC0
struct s_light_fixtures_block
{
__int16 palette_index;//0x0
__int16 name_index;//0x2
enum class e_placement_flags : __int32
{
not_automatically = FLAG(0),
not_on_easy = FLAG(1),
not_on_normal = FLAG(2),
not_on_hard = FLAG(3),
lock_type_to_env_object = FLAG(4),
lock_transform_to_env_object = FLAG(5),
never_placed = FLAG(6),
lock_name_to_env_object = FLAG(7),
create_at_rest = FLAG(8),
};
e_placement_flags placement_flags;//0x4
float position_x;//0x8
float position_y;//0xC
float position_z;//0x10
angle rotation_i;//0x14
angle rotation_j;//0x18
angle rotation_k;//0x1C
float scale;//0x20
enum class e_transform_flags : __int16
{
mirrored = FLAG(0),
};
e_transform_flags transform_flags;//0x24
enum class e_manual_bsp_flags : __int16
{
bsp_0 = FLAG(0),
bsp_1 = FLAG(1),
bsp_2 = FLAG(2),
bsp_3 = FLAG(3),
bsp_4 = FLAG(4),
bsp_5 = FLAG(5),
bsp_6 = FLAG(6),
bsp_7 = FLAG(7),
bsp_8 = FLAG(8),
bsp_9 = FLAG(9),
bsp_10 = FLAG(10),
bsp_11 = FLAG(11),
bsp_12 = FLAG(12),
bsp_13 = FLAG(13),
bsp_14 = FLAG(14),
bsp_15 = FLAG(15),
};
e_manual_bsp_flags manual_bsp_flags;//0x26
unsigned __int16 unique_id_index;//0x28
unsigned __int16 unique_id_salt;//0x2A
__int16 origin_bsp_index;//0x2C
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
e_type type;//0x2E
enum class e_source : __int8
{
structure = 0,
editor = 1,
dynamic = 2,
legacy = 3,
};
e_source source;//0x2F
enum class e_bsp_policy : __int8
{
default = 0,
always_places = 1,
manual_bsp_placement = 2,
};
e_bsp_policy bsp_policy;//0x30
__int8 unknown;//0x31
__int16 editor_folder;//0x32
__int16 power_group;//0x34
__int16 position_group;//0x36
enum class e_flags : __int32
{
initially_open_10 = FLAG(0),
initially_off_00 = FLAG(1),
can_change_only_once = FLAG(2),
position_reversed = FLAG(3),
not_usable_from_any_side = FLAG(4),
};
e_flags flags;//0x38
float color_red;//0x3C
float color_green;//0x40
float color_blue;//0x44
float intensity;//0x48
angle falloff_angle;//0x4C
angle cutoff_angle;//0x50
};
TAG_BLOCK_SIZE_ASSERT(s_light_fixtures_block,0x54);
tag_block<s_light_fixtures_block> light_fixtures;//0xC8
struct s_light_fixtures_palette_block
{
tag_reference light_fixture;//0x0
PAD(0x20);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_light_fixtures_palette_block,0x28);
tag_block<s_light_fixtures_palette_block> light_fixtures_palette;//0xD0
struct s_sound_scenery_block
{
__int16 palette_index;//0x0
__int16 name_index;//0x2
enum class e_placement_flags : __int32
{
not_automatically = FLAG(0),
not_on_easy = FLAG(1),
not_on_normal = FLAG(2),
not_on_hard = FLAG(3),
lock_type_to_env_object = FLAG(4),
lock_transform_to_env_object = FLAG(5),
never_placed = FLAG(6),
lock_name_to_env_object = FLAG(7),
create_at_rest = FLAG(8),
};
e_placement_flags placement_flags;//0x4
float position_x;//0x8
float position_y;//0xC
float position_z;//0x10
angle rotation_i;//0x14
angle rotation_j;//0x18
angle rotation_k;//0x1C
float scale;//0x20
enum class e_transform_flags : __int16
{
mirrored = FLAG(0),
};
e_transform_flags transform_flags;//0x24
enum class e_manual_bsp_flags : __int16
{
bsp_0 = FLAG(0),
bsp_1 = FLAG(1),
bsp_2 = FLAG(2),
bsp_3 = FLAG(3),
bsp_4 = FLAG(4),
bsp_5 = FLAG(5),
bsp_6 = FLAG(6),
bsp_7 = FLAG(7),
bsp_8 = FLAG(8),
bsp_9 = FLAG(9),
bsp_10 = FLAG(10),
bsp_11 = FLAG(11),
bsp_12 = FLAG(12),
bsp_13 = FLAG(13),
bsp_14 = FLAG(14),
bsp_15 = FLAG(15),
};
e_manual_bsp_flags manual_bsp_flags;//0x26
unsigned __int16 unique_id_index;//0x28
unsigned __int16 unique_id_salt;//0x2A
__int16 origin_bsp_index;//0x2C
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
e_type type;//0x2E
enum class e_source : __int8
{
structure = 0,
editor = 1,
dynamic = 2,
legacy = 3,
};
e_source source;//0x2F
enum class e_bsp_policy : __int8
{
default = 0,
always_places = 1,
manual_bsp_placement = 2,
};
e_bsp_policy bsp_policy;//0x30
__int8 unknown;//0x31
__int16 editor_folder;//0x32
enum class e_volume_type : __int32
{
sphere = 0,
vertical_cylinder = 1,
};
e_volume_type volume_type;//0x34
float height;//0x38
float override_distance_bounds_min;//0x3C
float override_distance_bounds_max;//0x40
angle override_cone_angle_bounds_min;//0x44
angle override_cone_angle_bounds_max;//0x48
float override_outer_cone_gain;//0x4C
};
TAG_BLOCK_SIZE_ASSERT(s_sound_scenery_block,0x50);
tag_block<s_sound_scenery_block> sound_scenery;//0xD8
struct s_sound_scenery_palette_block
{
tag_reference sound_scenery;//0x0
PAD(0x20);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_sound_scenery_palette_block,0x28);
tag_block<s_sound_scenery_palette_block> sound_scenery_palette;//0xE0
struct s_light_volumes_block
{
__int16 palette_index;//0x0
__int16 name_index;//0x2
enum class e_placement_flags : __int32
{
not_automatically = FLAG(0),
not_on_easy = FLAG(1),
not_on_normal = FLAG(2),
not_on_hard = FLAG(3),
lock_type_to_env_object = FLAG(4),
lock_transform_to_env_object = FLAG(5),
never_placed = FLAG(6),
lock_name_to_env_object = FLAG(7),
create_at_rest = FLAG(8),
};
e_placement_flags placement_flags;//0x4
float position_x;//0x8
float position_y;//0xC
float position_z;//0x10
angle rotation_i;//0x14
angle rotation_j;//0x18
angle rotation_k;//0x1C
float scale;//0x20
enum class e_transform_flags : __int16
{
mirrored = FLAG(0),
};
e_transform_flags transform_flags;//0x24
enum class e_manual_bsp_flags : __int16
{
bsp_0 = FLAG(0),
bsp_1 = FLAG(1),
bsp_2 = FLAG(2),
bsp_3 = FLAG(3),
bsp_4 = FLAG(4),
bsp_5 = FLAG(5),
bsp_6 = FLAG(6),
bsp_7 = FLAG(7),
bsp_8 = FLAG(8),
bsp_9 = FLAG(9),
bsp_10 = FLAG(10),
bsp_11 = FLAG(11),
bsp_12 = FLAG(12),
bsp_13 = FLAG(13),
bsp_14 = FLAG(14),
bsp_15 = FLAG(15),
};
e_manual_bsp_flags manual_bsp_flags;//0x26
unsigned __int16 unique_id_index;//0x28
unsigned __int16 unique_id_salt;//0x2A
__int16 origin_bsp_index;//0x2C
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
e_type type;//0x2E
enum class e_source : __int8
{
structure = 0,
editor = 1,
dynamic = 2,
legacy = 3,
};
e_source source;//0x2F
enum class e_bsp_policy : __int8
{
default = 0,
always_places = 1,
manual_bsp_placement = 2,
};
e_bsp_policy bsp_policy;//0x30
__int8 unknown;//0x31
__int16 editor_folder;//0x32
__int16 power_group;//0x34
__int16 position_group;//0x36
enum class e_flags : __int32
{
initially_open_10 = FLAG(0),
initially_off_00 = FLAG(1),
can_change_only_once = FLAG(2),
position_reversed = FLAG(3),
not_usable_from_any_side = FLAG(4),
};
e_flags flags;//0x38
enum class e_type : __int16
{
sphere = 0,
orthogonal = 1,
projective = 2,
pyramid = 3,
};
e_type type;//0x3C
enum class e_flags : __int16
{
custom_geometry = FLAG(0),
bit_1 = FLAG(1),
cinematic_only = FLAG(2),
};
e_flags flags;//0x3E
enum class e_lightmap_type : __int16
{
use_light_tag_setting = 0,
dynamic_only = 1,
dynamic_with_lightmaps = 2,
lightmaps_only = 3,
};
e_lightmap_type lightmap_type;//0x40
enum class e_lightmap_flags : __int16
{
bit_0 = FLAG(0),
};
e_lightmap_flags lightmap_flags;//0x42
float lightmap_half_life;//0x44
float lightmap_light_scale;//0x48
float target_point_x;//0x4C
float target_point_y;//0x50
float target_point_z;//0x54
float width;//0x58
float height_scale;//0x5C
angle field_of_view;//0x60
float falloff_distance;//0x64
float cutoff_distance;//0x68
};
TAG_BLOCK_SIZE_ASSERT(s_light_volumes_block,0x6C);
tag_block<s_light_volumes_block> light_volumes;//0xE8
struct s_light_volumes_palette_block
{
tag_reference light_volume;//0x0
PAD(0x20);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_light_volumes_palette_block,0x28);
tag_block<s_light_volumes_palette_block> light_volumes_palette;//0xF0
struct s_player_starting_profile_block
{
string32 name;//0x0
float starting_health_damage;//0x20
float starting_shield_damage;//0x24
tag_reference primary_weapon;//0x28
__int16 rounds_loaded;//0x30
__int16 rounds_total;//0x32
tag_reference secondary_weapon;//0x34
__int16 rounds_loaded;//0x3C
__int16 rounds_total;//0x3E
unsigned __int8 starting_frag_grenade_count;//0x40
unsigned __int8 starting_plasma_grenade_count;//0x41
unsigned __int8 starting_unused_grenade_count;//0x42
unsigned __int8 starting_unused_grenade_count;//0x43
};
TAG_BLOCK_SIZE_ASSERT(s_player_starting_profile_block,0x44);
tag_block<s_player_starting_profile_block> player_starting_profile;//0xF8
struct s_player_starting_locations_block
{
float position_x;//0x0
float position_y;//0x4
float position_z;//0x8
angle facing;//0xC
enum class e_team_designator : __int16
{
red = 0,
blue = 1,
yellow = 2,
green = 3,
purple = 4,
orange = 5,
brown = 6,
pink = 7,
neutral = 8,
};
e_team_designator team_designator;//0x10
__int16 bsp_index;//0x12
enum class e_game_type_1 : __int16
{
none = 0,
capture_the_flag = 1,
slayer = 2,
oddball = 3,
king_of_the_hill = 4,
race = 5,
juggernaut = 6,
territories = 7,
assault = 8,
ignored3 = 9,
ignored4 = 10,
all_game_types = 11,
all_except_ctf = 12,
all_except_ctf_and_race = 13,
};
e_game_type_1 game_type_1;//0x14
enum class e_game_type_2 : __int16
{
none = 0,
capture_the_flag = 1,
slayer = 2,
oddball = 3,
king_of_the_hill = 4,
race = 5,
juggernaut = 6,
territories = 7,
assault = 8,
ignored3 = 9,
ignored4 = 10,
all_game_types = 11,
all_except_ctf = 12,
all_except_ctf_and_race = 13,
};
e_game_type_2 game_type_2;//0x16
enum class e_game_type_3 : __int16
{
none = 0,
capture_the_flag = 1,
slayer = 2,
oddball = 3,
king_of_the_hill = 4,
race = 5,
juggernaut = 6,
territories = 7,
assault = 8,
ignored3 = 9,
ignored4 = 10,
all_game_types = 11,
all_except_ctf = 12,
all_except_ctf_and_race = 13,
};
e_game_type_3 game_type_3;//0x18
enum class e_game_type_4 : __int16
{
none = 0,
capture_the_flag = 1,
slayer = 2,
oddball = 3,
king_of_the_hill = 4,
race = 5,
juggernaut = 6,
territories = 7,
assault = 8,
ignored3 = 9,
ignored4 = 10,
all_game_types = 11,
all_except_ctf = 12,
all_except_ctf_and_race = 13,
};
e_game_type_4 game_type_4;//0x1A
enum class e_spawn_type_1 : __int16
{
both = 0,
initial_spawn_only = 1,
respawn_only = 2,
};
e_spawn_type_1 spawn_type_1;//0x1C
enum class e_spawn_type_2 : __int16
{
both = 0,
initial_spawn_only = 1,
respawn_only = 2,
};
e_spawn_type_2 spawn_type_2;//0x1E
enum class e_spawn_type_3 : __int16
{
both = 0,
initial_spawn_only = 1,
respawn_only = 2,
};
e_spawn_type_3 spawn_type_3;//0x20
enum class e_spawn_type_4 : __int16
{
both = 0,
initial_spawn_only = 1,
respawn_only = 2,
};
e_spawn_type_4 spawn_type_4;//0x22
string_id unknown;//0x24
string_id unknown;//0x28
enum class e_campaign_player_type : __int16
{
masterchief = 0,
dervish = 1,
chief_multiplayer = 2,
elite_multiplayer = 3,
};
e_campaign_player_type campaign_player_type;//0x2C
__int16 unknown;//0x2E
PAD(0x4);//0x30
};
TAG_BLOCK_SIZE_ASSERT(s_player_starting_locations_block,0x34);
tag_block<s_player_starting_locations_block> player_starting_locations;//0x100
struct s_trigger_volumes_block
{
string_id name;//0x0
__int16 object_name;//0x4
__int16 unknown;//0x6
string_id node_name;//0x8
float unknown;//0xC
float unknown;//0x10
float unknown;//0x14
float unknown;//0x18
float unknown;//0x1C
float unknown;//0x20
float unknown;//0x24
float position_x;//0x28
float position_y;//0x2C
float position_z;//0x30
float extents_x;//0x34
float extents_y;//0x38
float extents_z;//0x3C
__int16 kill_volume;//0x40
__int16 unknown;//0x42
};
TAG_BLOCK_SIZE_ASSERT(s_trigger_volumes_block,0x44);
tag_block<s_trigger_volumes_block> trigger_volumes;//0x108
PAD(0x8);//0x110
struct s_netgame_flags_block
{
float position_x;//0x0
float position_y;//0x4
float position_z;//0x8
angle facing;//0xC
enum class e_type : __int16
{
ctf_flag_spawn = 0,
ctf_flag_return = 1,
assault_bomb_spawn = 2,
assault_bomb_return = 3,
oddball_spawn = 4,
unused = 5,
race_checkpoint = 6,
teleporter_source = 7,
teleporter_destination = 8,
headhunter_bin = 9,
territories_flag = 10,
king_hill_0 = 11,
king_hill_1 = 12,
king_hill_2 = 13,
king_hill_3 = 14,
king_hill_4 = 15,
king_hill_5 = 16,
king_hill_6 = 17,
king_hill_7 = 18,
};
e_type type;//0x10
enum class e_team_designator : __int16
{
red = 0,
blue = 1,
yellow = 2,
green = 3,
purple = 4,
orange = 5,
brown = 6,
pink = 7,
neutral = 8,
};
e_team_designator team_designator;//0x12
__int16 identifier;//0x14
enum class e_flags : __int16
{
multiple_flagbomb = FLAG(0),
single_flagbomb = FLAG(1),
neutral_flagbomb = FLAG(2),
};
e_flags flags;//0x16
string_id unknown;//0x18
string_id unknown;//0x1C
};
TAG_BLOCK_SIZE_ASSERT(s_netgame_flags_block,0x20);
tag_block<s_netgame_flags_block> netgame_flags;//0x118
struct s_netgame_equipment_block
{
enum class e_flags : __int32
{
levitate = FLAG(0),
destroy_existing_on_new_spawn = FLAG(1),
};
e_flags flags;//0x0
enum class e_game_type_1 : __int16
{
none = 0,
capture_the_flag = 1,
slayer = 2,
oddball = 3,
king_of_the_hill = 4,
race = 5,
juggernaut = 6,
territories = 7,
assault = 8,
ignored3 = 9,
ignored4 = 10,
all_game_types = 11,
all_except_ctf = 12,
all_except_ctf_and_race = 13,
};
e_game_type_1 game_type_1;//0x4
enum class e_game_type_2 : __int16
{
none = 0,
capture_the_flag = 1,
slayer = 2,
oddball = 3,
king_of_the_hill = 4,
race = 5,
juggernaut = 6,
territories = 7,
assault = 8,
ignored3 = 9,
ignored4 = 10,
all_game_types = 11,
all_except_ctf = 12,
all_except_ctf_and_race = 13,
};
e_game_type_2 game_type_2;//0x6
enum class e_game_type_3 : __int16
{
none = 0,
capture_the_flag = 1,
slayer = 2,
oddball = 3,
king_of_the_hill = 4,
race = 5,
juggernaut = 6,
territories = 7,
assault = 8,
ignored3 = 9,
ignored4 = 10,
all_game_types = 11,
all_except_ctf = 12,
all_except_ctf_and_race = 13,
};
e_game_type_3 game_type_3;//0x8
enum class e_game_type_4 : __int16
{
none = 0,
capture_the_flag = 1,
slayer = 2,
oddball = 3,
king_of_the_hill = 4,
race = 5,
juggernaut = 6,
territories = 7,
assault = 8,
ignored3 = 9,
ignored4 = 10,
all_game_types = 11,
all_except_ctf = 12,
all_except_ctf_and_race = 13,
};
e_game_type_4 game_type_4;//0xA
__int16 team_index;//0xC
__int16 spawn_time;//0xE
__int16 respawn_on_empty_time;//0x10
enum class e_respawn_timer_starts : __int16
{
on_pick_up = 0,
on_body_depletion = 1,
};
e_respawn_timer_starts respawn_timer_starts;//0x12
enum class e_classification : __int8
{
weapon = 0,
primary_light_land = 1,
secondary_light_land = 2,
primary_heavy_land = 3,
primary_flying = 4,
seconary_heavy_land = 5,
primary_turret = 6,
secondary_turret = 7,
grenade = 8,
powerup = 9,
};
e_classification classification;//0x14
__int8 unknown;//0x15
__int8 unknown;//0x16
__int8 unknown;//0x17
PAD(0x28);//0x18
float position_x;//0x40
float position_y;//0x44
float position_z;//0x48
angle orientation_i;//0x4C
angle orientation_j;//0x50
angle orientation_k;//0x54
tag_reference itemvehicle_collection;//0x58
PAD(0x30);//0x60
};
TAG_BLOCK_SIZE_ASSERT(s_netgame_equipment_block,0x90);
tag_block<s_netgame_equipment_block> netgame_equipment;//0x120
struct s_starting_equipment_block
{
enum class e_starting_grenades : __int32
{
no_grenades = FLAG(0),
plasma_grenades = FLAG(1),
};
e_starting_grenades starting_grenades;//0x0
enum class e_game_type_1 : __int16
{
none = 0,
capture_the_flag = 1,
slayer = 2,
oddball = 3,
king_of_the_hill = 4,
race = 5,
juggernaut = 6,
territories = 7,
assault = 8,
ignored3 = 9,
ignored4 = 10,
all_game_types = 11,
all_except_ctf = 12,
all_except_ctf_and_race = 13,
};
e_game_type_1 game_type_1;//0x4
enum class e_game_type_2 : __int16
{
none = 0,
capture_the_flag = 1,
slayer = 2,
oddball = 3,
king_of_the_hill = 4,
race = 5,
juggernaut = 6,
territories = 7,
assault = 8,
ignored3 = 9,
ignored4 = 10,
all_game_types = 11,
all_except_ctf = 12,
all_except_ctf_and_race = 13,
};
e_game_type_2 game_type_2;//0x6
enum class e_game_type_3 : __int16
{
none = 0,
capture_the_flag = 1,
slayer = 2,
oddball = 3,
king_of_the_hill = 4,
race = 5,
juggernaut = 6,
territories = 7,
assault = 8,
ignored3 = 9,
ignored4 = 10,
all_game_types = 11,
all_except_ctf = 12,
all_except_ctf_and_race = 13,
};
e_game_type_3 game_type_3;//0x8
enum class e_game_type_4 : __int16
{
none = 0,
capture_the_flag = 1,
slayer = 2,
oddball = 3,
king_of_the_hill = 4,
race = 5,
juggernaut = 6,
territories = 7,
assault = 8,
ignored3 = 9,
ignored4 = 10,
all_game_types = 11,
all_except_ctf = 12,
all_except_ctf_and_race = 13,
};
e_game_type_4 game_type_4;//0xA
PAD(0x30);//0xC
tag_reference item_collection_1;//0x3C
tag_reference item_collection_2;//0x44
tag_reference item_collection_3;//0x4C
tag_reference item_collection_4;//0x54
tag_reference item_collection_5;//0x5C
tag_reference item_collection_6;//0x64
PAD(0x30);//0x6C
};
TAG_BLOCK_SIZE_ASSERT(s_starting_equipment_block,0x9C);
tag_block<s_starting_equipment_block> starting_equipment;//0x128
struct s_bsp_switch_trigger_volumes_block
{
__int16 trigger_volume;//0x0
__int16 source_bsp;//0x2
__int16 destination_bsp;//0x4
__int16 unknown;//0x6
__int16 unknown;//0x8
__int16 unknown;//0xA
__int16 unknown;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_bsp_switch_trigger_volumes_block,0xE);
tag_block<s_bsp_switch_trigger_volumes_block> bsp_switch_trigger_volumes;//0x130
struct s_decals_block
{
__int16 palette_index;//0x0
__int8 yaw;//0x2
__int8 pitch;//0x3
float position_x;//0x4
float position_y;//0x8
float position_z;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_decals_block,0x10);
tag_block<s_decals_block> decals;//0x138
struct s_decal_palette_block
{
tag_reference decal;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_decal_palette_block,0x8);
tag_block<s_decal_palette_block> decal_palette;//0x140
struct s_detail_object_collection_palette_block
{
tag_reference detail_object_collection;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_detail_object_collection_palette_block,0x8);
tag_block<s_detail_object_collection_palette_block> detail_object_collection_palette;//0x148
struct s_style_palette_block
{
tag_reference style;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_style_palette_block,0x8);
tag_block<s_style_palette_block> style_palette;//0x150
struct s_squad_groups_block
{
string32 squad_type;//0x0
__int16 parent;//0x20
__int16 initial_order;//0x22
};
TAG_BLOCK_SIZE_ASSERT(s_squad_groups_block,0x24);
tag_block<s_squad_groups_block> squad_groups;//0x158
struct s_squads_block
{
string32 name;//0x0
enum class e_flags : __int32
{
bit_0 = FLAG(0),
never_search = FLAG(1),
start_timer_immediately = FLAG(2),
no_timer_delay_forever = FLAG(3),
magic_sight_after_timer = FLAG(4),
automatic_migration = FLAG(5),
bit_6 = FLAG(6),
respawn_enabled = FLAG(7),
blind = FLAG(8),
deaf = FLAG(9),
braindead = FLAG(10),
NUM_3d_firing_positions = FLAG(11),
initially_placed = FLAG(12),
units_not_enterable_by_player = FLAG(13),
};
e_flags flags;//0x20
enum class e_team : __int16
{
default = 0,
player = 1,
human = 2,
covenant = 3,
flood = 4,
sentinel = 5,
heretic = 6,
prophet = 7,
unused8 = 8,
unused9 = 9,
unused10 = 10,
unused11 = 11,
unused12 = 12,
unused13 = 13,
unused14 = 14,
unused15 = 15,
};
e_team team;//0x24
__int16 parent_squad_group;//0x26
float squad_delay_time;//0x28
__int16 normal_difficulty_count;//0x2C
__int16 legendary_difficulty_count;//0x2E
enum class e_major_upgrade : __int16
{
normal = 0,
few = 1,
many = 2,
none = 3,
all = 4,
};
e_major_upgrade major_upgrade;//0x30
__int16 unknown;//0x32
__int16 vehicle_index;//0x34
__int16 character_index;//0x36
__int16 initial_zone;//0x38
__int16 unknown;//0x3A
__int16 primary_weapon_index;//0x3C
__int16 secondary_weapon_index;//0x3E
enum class e_grenade_type : __int16
{
none = 0,
human_fragmentation = 1,
covenant_plasma = 2,
};
e_grenade_type grenade_type;//0x40
__int16 initial_order;//0x42
string_id vehicle_variant;//0x44
struct s_starting_loctations_block
{
string_id name;//0x0
float position_x;//0x4
float position_y;//0x8
float position_z;//0xC
__int16 reference_frame;//0x10
__int16 unknown;//0x12
angle facing_y;//0x14
angle facing_p;//0x18
enum class e_flags : __int32
{
initially_asleep = FLAG(0),
infection_form_explode = FLAG(1),
bit_2 = FLAG(2),
always_place = FLAG(3),
initially_hidden = FLAG(4),
};
e_flags flags;//0x1C
__int16 character_index;//0x20
__int16 primary_weapon_index;//0x22
__int16 secondary_weapon_index;//0x24
__int16 unknown;//0x26
__int16 vehicle_index;//0x28
enum class e_seat_type : __int16
{
default = 0,
passenger = 1,
gunner = 2,
driver = 3,
small_cargo = 4,
large_cargo = 5,
no_driver = 6,
no_vehicle = 7,
};
e_seat_type seat_type;//0x2A
enum class e_grenade_type : __int16
{
none = 0,
human_fragmentation = 1,
covenant_plasma = 2,
};
e_grenade_type grenade_type;//0x2C
__int16 swarm_count;//0x2E
string_id actor_variant;//0x30
string_id vehicle_variant;//0x34
float initial_movement_distance;//0x38
__int16 emitter_vehicle_index;//0x3C
enum class e_initial_movement_mode : __int16
{
default = 0,
climbing = 1,
flying = 2,
};
e_initial_movement_mode initial_movement_mode;//0x3E
string32 placement_script;//0x40
__int16 script_index;//0x60
__int16 unknown;//0x62
};
TAG_BLOCK_SIZE_ASSERT(s_starting_loctations_block,0x64);
tag_block<s_starting_loctations_block> starting_loctations;//0x48
string32 placement_script;//0x50
__int16 script_index;//0x70
__int16 unknown;//0x72
};
TAG_BLOCK_SIZE_ASSERT(s_squads_block,0x74);
tag_block<s_squads_block> squads;//0x160
struct s_zones_block
{
string32 name;//0x0
enum class e_flags : __int32
{
manual_bsp_index = FLAG(0),
};
e_flags flags;//0x20
__int16 manual_bsp_index;//0x24
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-2);//0x26
__int16 unknown;//0x24
PAD(0x2);//0x26
struct s_firing_positions_block
{
float position_x;//0x0
float position_y;//0x4
float position_z;//0x8
__int16 reference_frame;//0xC
enum class e_flags : __int16
{
open = FLAG(0),
partial = FLAG(1),
closed = FLAG(2),
mobile = FLAG(3),
wall_lean = FLAG(4),
perch = FLAG(5),
ground_point = FLAG(6),
dynamic_cover_point = FLAG(7),
};
e_flags flags;//0xE
__int16 area_index;//0x10
__int16 cluster_index;//0x12
__int16 unknown;//0x14
__int16 unknown;//0x16
angle normal_y;//0x18
angle normal_p;//0x1C
};
TAG_BLOCK_SIZE_ASSERT(s_firing_positions_block,0x20);
tag_block<s_firing_positions_block> firing_positions;//0x28
struct s_areas_block
{
string32 name;//0x0
enum class e_area_flags : __int32
{
vehicle_area = FLAG(0),
perch = FLAG(1),
manual_reference_frame = FLAG(2),
};
e_area_flags area_flags;//0x20
float position_x;//0x24
float position_y;//0x28
float position_z;//0x2C
__int16 unknown;//0x30
__int16 unknown;//0x32
float unknown;//0x34
__int16 firing_position_start_index;//0x38
__int16 firing_position_count;//0x3A
__int16 unknown;//0x3C
__int16 unknown;//0x3E
PAD(0x4);//0x40
__int8 unknown;//0x44
__int8 unknown;//0x45
__int8 unknown;//0x46
__int8 unknown;//0x47
__int16 unknown;//0x48
__int16 unknown;//0x4A
PAD(0x4);//0x4C
float unknown;//0x50
float unknown;//0x54
float unknown;//0x58
float unknown;//0x5C
float unknown;//0x60
float unknown;//0x64
float unknown;//0x68
float unknown;//0x6C
float unknown;//0x70
float unknown;//0x74
float unknown;//0x78
__int16 manual_reference_frame;//0x7C
__int16 unknown;//0x7E
struct s_flight_hints_block
{
__int16 flight_hint_index;//0x0
__int16 poit_index;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_flight_hints_block,0x4);
tag_block<s_flight_hints_block> flight_hints;//0x80
};
TAG_BLOCK_SIZE_ASSERT(s_areas_block,0x88);
tag_block<s_areas_block> areas;//0x30
};
TAG_BLOCK_SIZE_ASSERT(s_zones_block,0x38);
tag_block<s_zones_block> zones;//0x168
struct s_mission_scenes_block
{
string_id name;//0x0
enum class e_flags : __int32
{
scene_can_play_multiple_times = FLAG(0),
enable_combat_dialogue = FLAG(1),
};
e_flags flags;//0x4
struct s_trigger_conditions_block
{
enum class e_combination_rule : __int16
{
or = 0,
and = 1,
};
e_combination_rule combination_rule;//0x0
__int16 unknown;//0x2
struct s_triggers_block
{
PAD(0x4);//0x0
enum class e_trigger_flags : __int32
{
not = FLAG(0),
};
e_trigger_flags trigger_flags;//0x4
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-4);//0x8
__int16 trigger_index;//0x4
__int16 unknown;//0x6
};
TAG_BLOCK_SIZE_ASSERT(s_triggers_block,0x8);
tag_block<s_triggers_block> triggers;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_trigger_conditions_block,0xC);
tag_block<s_trigger_conditions_block> trigger_conditions;//0x8
struct s_roles_block
{
string_id name;//0x0
enum class e_group : __int16
{
group_1 = 0,
group_2 = 1,
group_3 = 2,
};
e_group group;//0x4
__int16 unknown;//0x6
struct s_role_variants_block
{
string_id variant_designation;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_role_variants_block,0x4);
tag_block<s_role_variants_block> role_variants;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_roles_block,0x10);
tag_block<s_roles_block> roles;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_mission_scenes_block,0x18);
tag_block<s_mission_scenes_block> mission_scenes;//0x170
struct s_character_palette_block
{
tag_reference character;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_character_palette_block,0x8);
tag_block<s_character_palette_block> character_palette;//0x178
PAD(0x28);//0x180
data_block script_syntax_data;//0x1A8
data_block script_string_data;//0x1B0
struct s_scripts_block
{
string32 name;//0x0
enum class e_script_type : __int16
{
startup = 0,
dormant = 1,
continuous = 2,
static = 3,
stub = 4,
};
e_script_type script_type;//0x20
enum class e_return_type : __int16
{
unparsed = 0,
special_form = 1,
function_name = 2,
passthrough = 3,
void = 4,
boolean = 5,
real = 6,
short = 7,
long = 8,
string = 9,
script = 10,
string_id = 11,
unit_seat_mapping = 12,
trigger_volume = 13,
cutscene_flag = 14,
cutscene_camera_point = 15,
cutscene_title = 16,
cutscene_recording = 17,
device_group = 18,
ai = 19,
ai_command_list = 20,
ai_command_script = 21,
ai_behavior = 22,
ai_orders = 23,
starting_profile = 24,
conversation = 25,
structure_bsp = 26,
navpoint = 27,
point_reference = 28,
style = 29,
hud_message = 30,
object_list = 31,
sound = 32,
effect = 33,
damage = 34,
looping_sound = 35,
animation_graph = 36,
damage_effect = 37,
object_definition = 38,
bitmap = 39,
shader = 40,
render_model = 41,
structure_definition = 42,
lightmap_definition = 43,
game_difficulty = 44,
team = 45,
actor_type = 46,
hud_corner = 47,
model_state = 48,
network_event = 49,
object = 50,
unit = 51,
vehicle = 52,
weapon = 53,
device = 54,
scenery = 55,
object_name = 56,
unit_name = 57,
vehicle_name = 58,
weapon_name = 59,
device_name = 60,
scenery_name = 61,
};
e_return_type return_type;//0x22
__int16 root_expression_index;//0x24
__int16 root_expression_salt;//0x26
};
TAG_BLOCK_SIZE_ASSERT(s_scripts_block,0x28);
tag_block<s_scripts_block> scripts;//0x1B8
struct s_globals_block
{
string32 name;//0x0
enum class e_type : __int16
{
unparsed = 0,
special_form = 1,
function_name = 2,
passthrough = 3,
void = 4,
boolean = 5,
real = 6,
short = 7,
long = 8,
string = 9,
script = 10,
string_id = 11,
unit_seat_mapping = 12,
trigger_volume = 13,
cutscene_flag = 14,
cutscene_camera_point = 15,
cutscene_title = 16,
cutscene_recording = 17,
device_group = 18,
ai = 19,
ai_command_list = 20,
ai_command_script = 21,
ai_behavior = 22,
ai_orders = 23,
starting_profile = 24,
conversation = 25,
structure_bsp = 26,
navpoint = 27,
point_reference = 28,
style = 29,
hud_message = 30,
object_list = 31,
sound = 32,
effect = 33,
damage = 34,
looping_sound = 35,
animation_graph = 36,
damage_effect = 37,
object_definition = 38,
bitmap = 39,
shader = 40,
render_model = 41,
structure_definition = 42,
lightmap_definition = 43,
game_difficulty = 44,
team = 45,
actor_type = 46,
hud_corner = 47,
model_state = 48,
network_event = 49,
object = 50,
unit = 51,
vehicle = 52,
weapon = 53,
device = 54,
scenery = 55,
object_name = 56,
unit_name = 57,
vehicle_name = 58,
weapon_name = 59,
device_name = 60,
scenery_name = 61,
};
e_type type;//0x20
__int16 unknown;//0x22
__int16 initialization_expression_index;//0x24
__int16 initialization_expression_salt;//0x26
};
TAG_BLOCK_SIZE_ASSERT(s_globals_block,0x28);
tag_block<s_globals_block> globals;//0x1C0
struct s_script_references_block
{
tag_reference reference;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_script_references_block,0x8);
tag_block<s_script_references_block> script_references;//0x1C8
PAD(0x8);//0x1D0
struct s_scripting_data_block
{
struct s_point_sets_block
{
string32 name;//0x0
struct s_points_block
{
string32 name;//0x0
float position_x;//0x20
float position_y;//0x24
float position_z;//0x28
__int16 reference_frame;//0x2C
__int16 unknown;//0x2E
__int32 surface_index;//0x30
float facing_direction_y;//0x34
float facing_direction_p;//0x38
};
TAG_BLOCK_SIZE_ASSERT(s_points_block,0x3C);
tag_block<s_points_block> points;//0x20
__int16 bsp_index;//0x28
__int16 manual_reference_frame;//0x2A
enum class e_flags : __int32
{
manual_reference_frame = FLAG(0),
turret_deployment = FLAG(1),
};
e_flags flags;//0x2C
};
TAG_BLOCK_SIZE_ASSERT(s_point_sets_block,0x30);
tag_block<s_point_sets_block> point_sets;//0x0
PAD(0x78);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_scripting_data_block,0x80);
tag_block<s_scripting_data_block> scripting_data;//0x1D8
struct s_cutscene_flags_block
{
PAD(0x4);//0x0
string32 name;//0x4
float position_x;//0x24
float position_y;//0x28
float position_z;//0x2C
angle facing_y;//0x30
angle facing_p;//0x34
};
TAG_BLOCK_SIZE_ASSERT(s_cutscene_flags_block,0x38);
tag_block<s_cutscene_flags_block> cutscene_flags;//0x1E0
struct s_cutscene_camera_points_block
{
enum class e_flags : __int16
{
edit_as_relative = FLAG(0),
};
e_flags flags;//0x0
enum class e_type : __int16
{
normal = 0,
ignore_target_orientation = 1,
dolly = 2,
ignore_target_updates = 3,
};
e_type type;//0x2
string32 name;//0x4
float position_x;//0x24
float position_y;//0x28
float position_z;//0x2C
angle orientation_y;//0x30
angle orientation_p;//0x34
angle orientation_r;//0x38
float unknown;//0x3C
};
TAG_BLOCK_SIZE_ASSERT(s_cutscene_camera_points_block,0x40);
tag_block<s_cutscene_camera_points_block> cutscene_camera_points;//0x1E8
struct s_cutscene_titles_block
{
string_id name;//0x0
__int16 text_bounds_top;//0x4
__int16 text_bounds_left;//0x6
__int16 text_bounds_bottom;//0x8
__int16 text_bounds_right;//0xA
enum class e_justification : __int8
{
left = 0,
right = 1,
center = 2,
custom_text_entry = 3,
};
e_justification justification;//0xC
PAD(0x1);//0xD
enum class e_font : __int16
{
terminal_font = 0,
body_text_font = 1,
title_font = 2,
super_large_font = 3,
large_body_text_font = 4,
split_screen_hud_message_font = 5,
full_screen_hud_message_font = 6,
english_body_text_font = 7,
hud_number_font = 8,
subtitle_font = 9,
main_menu_font = 10,
text_chat_font = 11,
};
e_font font;//0xE
PAD(0x8);//0x10
float fade_in_time;//0x18
float up_time;//0x1C
float fade_out_time;//0x20
};
TAG_BLOCK_SIZE_ASSERT(s_cutscene_titles_block,0x24);
tag_block<s_cutscene_titles_block> cutscene_titles;//0x1F0
tag_reference custom_object_names;//0x1F8
tag_reference chapter_title_text;//0x200
tag_reference hud_messages;//0x208
struct s_structure_bsps_block
{
unsigned __int32 structure_bsp_offset;//0x0
unsigned __int32 structure_bsp_size;//0x4
unsigned __int32 primary_magic_meta_offset;//0x8
PAD(0x4);//0xC
tag_reference structure_bsp;//0x10
tag_reference structure_lightmap;//0x18
PAD(0x4);//0x20
float unused_radiance_estimated_search_distance;//0x24
PAD(0x4);//0x28
float unused_luminels_per_world_unit;//0x2C
float unused_output_white_reference;//0x30
PAD(0x8);//0x34
enum class e_flags : __int16
{
default_sky_enabled = FLAG(0),
};
e_flags flags;//0x3C
__int16 unknown;//0x3E
__int16 default_sky;//0x40
__int16 unknown;//0x42
};
TAG_BLOCK_SIZE_ASSERT(s_structure_bsps_block,0x44);
tag_block<s_structure_bsps_block> structure_bsps;//0x210
struct s_scenario_resources_block
{
struct s_references_block
{
tag_reference reference;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_references_block,0x8);
tag_block<s_references_block> references;//0x0
struct s_script_source_block
{
tag_reference reference;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_script_source_block,0x8);
tag_block<s_script_source_block> script_source;//0x8
struct s_ai_resources_block
{
tag_reference reference;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_ai_resources_block,0x8);
tag_block<s_ai_resources_block> ai_resources;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_scenario_resources_block,0x18);
tag_block<s_scenario_resources_block> scenario_resources;//0x218
struct s_structure_physics_block
{
data_block mopp_code;//0x0
struct s_environment_object_identifiers_block
{
unsigned __int16 unique_id_index;//0x0
unsigned __int16 unique_id_salt;//0x2
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
structure = 0,
editor = 1,
dynamic = 2,
legacy = 3,
};
e_source source;//0x7
};
TAG_BLOCK_SIZE_ASSERT(s_environment_object_identifiers_block,0x8);
tag_block<s_environment_object_identifiers_block> environment_object_identifiers;//0x8
PAD(0x4);//0x10
float mopp_bounds_min_x;//0x14
float mopp_bounds_min_y;//0x18
float mopp_bounds_min_z;//0x1C
float mopp_bounds_max_x;//0x20
float mopp_bounds_max_y;//0x24
float mopp_bounds_max_z;//0x28
};
TAG_BLOCK_SIZE_ASSERT(s_structure_physics_block,0x2C);
tag_block<s_structure_physics_block> structure_physics;//0x220
struct s_unit_seats_mapping_block
{
tag_referenceN unit;//0x0
enum class e_seats : __int32
{
seat_0 = FLAG(0),
seat_1 = FLAG(1),
seat_2 = FLAG(2),
seat_3 = FLAG(3),
seat_4 = FLAG(4),
seat_5 = FLAG(5),
seat_6 = FLAG(6),
seat_7 = FLAG(7),
seat_8 = FLAG(8),
seat_9 = FLAG(9),
seat_10 = FLAG(10),
seat_11 = FLAG(11),
seat_12 = FLAG(12),
seat_13 = FLAG(13),
seat_14 = FLAG(14),
seat_15 = FLAG(15),
seat_16 = FLAG(16),
seat_17 = FLAG(17),
seat_18 = FLAG(18),
seat_19 = FLAG(19),
seat_20 = FLAG(20),
seat_21 = FLAG(21),
seat_22 = FLAG(22),
seat_23 = FLAG(23),
seat_24 = FLAG(24),
seat_25 = FLAG(25),
seat_26 = FLAG(26),
seat_27 = FLAG(27),
seat_28 = FLAG(28),
seat_29 = FLAG(29),
seat_30 = FLAG(30),
seat_31 = FLAG(31),
};
e_seats seats;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_unit_seats_mapping_block,0x8);
tag_block<s_unit_seats_mapping_block> unit_seats_mapping;//0x228
struct s_scenario_kill_triggers_block
{
__int16 trigger_volume;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_scenario_kill_triggers_block,0x2);
tag_block<s_scenario_kill_triggers_block> scenario_kill_triggers;//0x230
struct s_script_expressions_block
{
__int16 datum_header;//0x0
__int16 script_indexfunction_indexconstant_type_union;//0x2
enum class e_type : __int16
{
unparsed = 0,
special_form = 1,
function_name = 2,
passthrough = 3,
viod = 4,
boolean = 5,
real = 6,
short = 7,
long = 8,
string = 9,
script = 10,
trigger_volume = 11,
cutscene_flag = 12,
cutscene_camera_point = 13,
cutscene_title = 14,
cutscene_recording = 15,
device_group = 16,
ai = 17,
ai_command_list = 18,
starting_profile = 19,
conversation = 20,
navpoint = 21,
hud_message = 22,
object_list = 23,
sound = 24,
effect = 25,
damage = 26,
looping_sound = 27,
animation_graph = 28,
actor_variant = 29,
dammge_effect = 30,
object_definition = 31,
game_difficulty = 32,
team = 33,
ai_default_state = 34,
actor_type = 35,
hud_corner = 36,
object = 37,
unit = 38,
vehicle = 39,
weapon = 40,
device = 41,
scenery = 42,
object_name = 43,
unit_name = 44,
vehicle_name = 45,
weapon_name = 46,
device_name = 47,
scenery_name = 48,
};
e_type type;//0x4
__int16 flags;//0x6
unsigned __int16 next_node_index;//0x8
unsigned __int16 next_node_salt;//0xA
__int32 data;//0xC
unsigned __int16 source_offset_index;//0x10
unsigned __int16 source_offset_salt;//0x12
};
TAG_BLOCK_SIZE_ASSERT(s_script_expressions_block,0x14);
tag_block<s_script_expressions_block> script_expressions;//0x238
struct s_orders_block
{
string32 name;//0x0
__int16 style_index;//0x20
__int16 unknown;//0x22
enum class e_flags : __int32
{
locked = FLAG(0),
always_active = FLAG(1),
debug_on = FLAG(2),
strict_area_def = FLAG(3),
follow_closest_player = FLAG(4),
follow_squad = FLAG(5),
active_camo = FLAG(6),
suppress_combat_until_engaged = FLAG(7),
inhibit_vehicle_use = FLAG(8),
};
e_flags flags;//0x24
enum class e_force_combat_status : __int16
{
none = 0,
asleep = 1,
idle = 2,
alert = 3,
combat = 4,
};
e_force_combat_status force_combat_status;//0x28
__int16 unknown;//0x2A
string32 entry_script;//0x2C
__int16 script_index;//0x4C
__int16 follow_squad_index;//0x4E
float follow_radius;//0x50
struct s_primary_area_set_block
{
PAD(0x28);//0x0
enum class e_area_type : __int16
{
default = 0,
search = 1,
goal = 2,
};
e_area_type area_type;//0x28
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-40);//0x2A
__int16 unknown;//0x2
__int16 zone_index;//0x4
__int16 area_index;//0x6
};
TAG_BLOCK_SIZE_ASSERT(s_primary_area_set_block,0x8);
tag_block<s_primary_area_set_block> primary_area_set;//0x54
struct s_secondary_area_set_block
{
PAD(0x28);//0x0
enum class e_area_type : __int16
{
default = 0,
search = 1,
goal = 2,
};
e_area_type area_type;//0x28
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-40);//0x2A
__int16 unknown;//0x2
__int16 zone_index;//0x4
__int16 area_index;//0x6
};
TAG_BLOCK_SIZE_ASSERT(s_secondary_area_set_block,0x8);
tag_block<s_secondary_area_set_block> secondary_area_set;//0x5C
struct s_secondary_set_trigger_block
{
enum class e_combination_rule : __int16
{
or = 0,
and = 1,
};
e_combination_rule combination_rule;//0x0
enum class e_dialogue_type : __int16
{
none = 0,
advance = 1,
charge = 2,
fall_back = 3,
retreat = 4,
moveone = 5,
arrival = 6,
enter_vehicle = 7,
exit_vehicle = 8,
follow_player = 9,
leave_player = 10,
support = 11,
};
e_dialogue_type dialogue_type;//0x2
struct s_triggers_block
{
PAD(0x4);//0x0
enum class e_trigger_flags : __int32
{
not = FLAG(0),
};
e_trigger_flags trigger_flags;//0x4
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-4);//0x8
__int16 trigger_index;//0x4
__int16 unknown;//0x6
};
TAG_BLOCK_SIZE_ASSERT(s_triggers_block,0x8);
tag_block<s_triggers_block> triggers;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_secondary_set_trigger_block,0xC);
tag_block<s_secondary_set_trigger_block> secondary_set_trigger;//0x64
struct s_special_movement_block
{
enum class e_special_movement_1 : __int32
{
jump = FLAG(0),
climb = FLAG(1),
vault = FLAG(2),
mount = FLAG(3),
hoist = FLAG(4),
wall_jump = FLAG(5),
bit_6 = FLAG(6),
};
e_special_movement_1 special_movement_1;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_special_movement_block,0x4);
tag_block<s_special_movement_block> special_movement;//0x6C
struct s_order_endings_block
{
__int16 next_order_index;//0x0
enum class e_combination_rule : __int16
{
or = 0,
and = 1,
};
e_combination_rule combination_rule;//0x2
float delay_time;//0x4
enum class e_dialogue_type : __int16
{
none = 0,
advance = 1,
charge = 2,
fall_back = 3,
retreat = 4,
moveone = 5,
arrival = 6,
enter_vehicle = 7,
exit_vehicle = 8,
follow_player = 9,
leave_player = 10,
support = 11,
};
e_dialogue_type dialogue_type;//0x8
__int16 unknown;//0xA
struct s_triggers_block
{
PAD(0x4);//0x0
enum class e_trigger_flags : __int32
{
not = FLAG(0),
};
e_trigger_flags trigger_flags;//0x4
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-4);//0x8
__int16 trigger_index;//0x4
__int16 unknown;//0x6
};
TAG_BLOCK_SIZE_ASSERT(s_triggers_block,0x8);
tag_block<s_triggers_block> triggers;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_order_endings_block,0x14);
tag_block<s_order_endings_block> order_endings;//0x74
};
TAG_BLOCK_SIZE_ASSERT(s_orders_block,0x7C);
tag_block<s_orders_block> orders;//0x240
struct s_ai_triggers_block
{
string32 name;//0x0
enum class e_trigger_flags : __int32
{
latch_on_when_triggered = FLAG(0),
};
e_trigger_flags trigger_flags;//0x20
enum class e_combination_rule : __int16
{
or = 0,
and = 1,
};
e_combination_rule combination_rule;//0x24
__int16 unknown;//0x26
struct s_conditions_block
{
PAD(0x24);//0x0
enum class e_rule_type : __int16
{
a_or_greater_alive = 0,
a_or_fewer_alive = 1,
x_or_greater_strength = 2,
x_or_less_strength = 3,
if_enemy_sighted = 4,
after_a_ticks = 5,
if_alerted_by_squad_a = 6,
script_reference_true = 7,
script_reference_false = 8,
if_player_in_trigger_volume = 9,
if_all_players_in_trigger_volume = 10,
combat_status_a_or_more = 11,
combat_status_a_or_less = 12,
arrived = 13,
in_vehicle = 14,
sighted_player = 15,
a_or_greater_fighting = 16,
a_or_fewer_fighting = 17,
player_within_x_world_units = 18,
player_shot_more_than_x_seconds_ago = 19,
game_safe_to_save = 20,
};
e_rule_type rule_type;//0x24
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-36);//0x26
__int16 squad;//0x2
__int16 squad_group;//0x4
__int16 a;//0x6
float x;//0x8
__int16 trigger_volume;//0xC
__int16 unknown;//0xE
string32 exit_condition_script;//0x10
__int16 exit_condition_script_index;//0x30
__int16 unknown;//0x32
enum class e_flags : __int32
{
not = FLAG(0),
};
e_flags flags;//0x34
};
TAG_BLOCK_SIZE_ASSERT(s_conditions_block,0x38);
tag_block<s_conditions_block> conditions;//0x28
};
TAG_BLOCK_SIZE_ASSERT(s_ai_triggers_block,0x30);
tag_block<s_ai_triggers_block> ai_triggers;//0x248
struct s_background_sound_palette_block
{
string32 name;//0x0
tag_reference background_sound;//0x20
tag_reference inside_cluster_sound;//0x28
PAD(0x14);//0x30
float cutoff_distance;//0x44
enum class e_scale_flags : __int32
{
override_default_scale = FLAG(0),
use_adjacent_cluster_as_portal_scale = FLAG(1),
use_adjacent_cluster_as_exterior_scale = FLAG(2),
scale_with_weather_intensity = FLAG(3),
};
e_scale_flags scale_flags;//0x48
float interior_scale;//0x4C
float portal_scale;//0x50
float exterior_scale;//0x54
float interpolation_speed;//0x58
PAD(0x8);//0x5C
};
TAG_BLOCK_SIZE_ASSERT(s_background_sound_palette_block,0x64);
tag_block<s_background_sound_palette_block> background_sound_palette;//0x250
struct s_sound_environment_palette_block
{
string32 name;//0x0
tag_reference sound_environment;//0x20
float cutoff_distance;//0x28
float interpolation_speed;//0x2C
PAD(0x18);//0x30
};
TAG_BLOCK_SIZE_ASSERT(s_sound_environment_palette_block,0x48);
tag_block<s_sound_environment_palette_block> sound_environment_palette;//0x258
struct s_weather_palette_block
{
string32 name;//0x0
tag_reference weather_system;//0x20
__int16 unknown;//0x28
__int16 unknown;//0x2A
PAD(0x20);//0x2C
tag_reference wind;//0x4C
angle wind_direction_i;//0x54
angle wind_direction_j;//0x58
angle wind_direction_k;//0x5C
float wind_magnitude;//0x60
PAD(0x4);//0x64
string32 wind_scale_function;//0x68
};
TAG_BLOCK_SIZE_ASSERT(s_weather_palette_block,0x88);
tag_block<s_weather_palette_block> weather_palette;//0x260
PAD(0x28);//0x268
struct s_scenario_cluster_data_block
{
tag_reference bsp;//0x0
struct s_background_sounds_block
{
__int16 palette_index;//0x0
__int16 unknown;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_background_sounds_block,0x4);
tag_block<s_background_sounds_block> background_sounds;//0x8
struct s_sound_environments_block
{
__int16 palette_index;//0x0
__int16 unknown;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_sound_environments_block,0x4);
tag_block<s_sound_environments_block> sound_environments;//0x10
__int32 bsp_checksum;//0x18
struct s_cluster_centroids_block
{
float centroid_x;//0x0
float centroid_y;//0x4
float centroid_z;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_cluster_centroids_block,0xC);
tag_block<s_cluster_centroids_block> cluster_centroids;//0x1C
struct s_weather_properties_block
{
__int16 palette_index;//0x0
__int16 unknown;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_weather_properties_block,0x4);
tag_block<s_weather_properties_block> weather_properties;//0x24
struct s_atmospheric_fog_properties_block
{
__int16 palette_index;//0x0
__int16 unknown;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_atmospheric_fog_properties_block,0x4);
tag_block<s_atmospheric_fog_properties_block> atmospheric_fog_properties;//0x2C
};
TAG_BLOCK_SIZE_ASSERT(s_scenario_cluster_data_block,0x34);
tag_block<s_scenario_cluster_data_block> scenario_cluster_data;//0x290
__int32 object_salts_1;//0x298
__int32 object_salts_2;//0x29C
__int32 object_salts_3;//0x2A0
__int32 object_salts_4;//0x2A4
__int32 object_salts_5;//0x2A8
__int32 object_salts_6;//0x2AC
__int32 object_salts_7;//0x2B0
__int32 object_salts_8;//0x2B4
__int32 object_salts_9;//0x2B8
__int32 object_salts_10;//0x2BC
__int32 object_salts_11;//0x2C0
__int32 object_salts_12;//0x2C4
__int32 object_salts_13;//0x2C8
__int32 object_salts_14;//0x2CC
__int32 object_salts_15;//0x2D0
__int32 object_salts_16;//0x2D4
__int32 object_salts_17;//0x2D8
__int32 object_salts_18;//0x2DC
__int32 object_salts_19;//0x2E0
__int32 object_salts_20;//0x2E4
__int32 object_salts_21;//0x2E8
__int32 object_salts_22;//0x2EC
__int32 object_salts_23;//0x2F0
__int32 object_salts_24;//0x2F4
__int32 object_salts_25;//0x2F8
__int32 object_salts_26;//0x2FC
__int32 object_salts_27;//0x300
__int32 object_salts_28;//0x304
__int32 object_salts_29;//0x308
__int32 object_salts_30;//0x30C
__int32 object_salts_31;//0x310
__int32 object_salts_32;//0x314
struct s_spawn_data_block
{
float dynamic_spawn_lower_height;//0x0
float dynamic_spawn_upper_height;//0x4
float game_objective_reset_height;//0x8
PAD(0x3C);//0xC
struct s_dynamic_spawn_overloads_block
{
enum class e_overload_type : __int16
{
enemy = 0,
friend = 1,
enemy_vehicle = 2,
friendly_vehicle = 3,
empty_vehicle = 4,
oddball_inclusion = 5,
oddball_exclusion = 6,
hill_inclusion = 7,
hill_exclusion = 8,
last_race_flag = 9,
dead_ally = 10,
controlled_territory = 11,
};
e_overload_type overload_type;//0x0
__int16 unknown;//0x2
float inner_radius;//0x4
float outer_radius;//0x8
float weight;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_dynamic_spawn_overloads_block,0x10);
tag_block<s_dynamic_spawn_overloads_block> dynamic_spawn_overloads;//0x48
struct s_static_respawn_zones_block
{
string_id name;//0x0
enum class e_relevant_team : __int32
{
red = FLAG(0),
blue = FLAG(1),
yellow = FLAG(2),
green = FLAG(3),
purple = FLAG(4),
orange = FLAG(5),
brown = FLAG(6),
pink = FLAG(7),
neutral = FLAG(8),
};
e_relevant_team relevant_team;//0x4
enum class e_relevant_games : __int32
{
slayer = FLAG(0),
oddball = FLAG(1),
king_of_the_hill = FLAG(2),
ctf = FLAG(3),
race = FLAG(4),
headhunter = FLAG(5),
juggernaut = FLAG(6),
territories = FLAG(7),
};
e_relevant_games relevant_games;//0x8
enum class e_flags : __int32
{
disabled_if_flag_home = FLAG(0),
disabled_if_flag_away = FLAG(1),
disabled_if_bomb_home = FLAG(2),
disabled_if_bomb_away = FLAG(3),
};
e_flags flags;//0xC
float position_x;//0x10
float position_y;//0x14
float position_z;//0x18
float lower_height;//0x1C
float upper_height;//0x20
float inner_radius;//0x24
float outer_radius;//0x28
float weight;//0x2C
};
TAG_BLOCK_SIZE_ASSERT(s_static_respawn_zones_block,0x30);
tag_block<s_static_respawn_zones_block> static_respawn_zones;//0x50
struct s_static_initial_spawn_zones_block
{
string_id name;//0x0
enum class e_relevant_team : __int32
{
red = FLAG(0),
blue = FLAG(1),
yellow = FLAG(2),
green = FLAG(3),
purple = FLAG(4),
orange = FLAG(5),
brown = FLAG(6),
pink = FLAG(7),
neutral = FLAG(8),
};
e_relevant_team relevant_team;//0x4
enum class e_relevant_games : __int32
{
slayer = FLAG(0),
oddball = FLAG(1),
king_of_the_hill = FLAG(2),
ctf = FLAG(3),
race = FLAG(4),
headhunter = FLAG(5),
juggernaut = FLAG(6),
territories = FLAG(7),
};
e_relevant_games relevant_games;//0x8
enum class e_flags : __int32
{
disabled_if_flag_home = FLAG(0),
disabled_if_flag_away = FLAG(1),
disabled_if_bomb_home = FLAG(2),
disabled_if_bomb_away = FLAG(3),
};
e_flags flags;//0xC
float position_x;//0x10
float position_y;//0x14
float position_z;//0x18
float lower_height;//0x1C
float upper_height;//0x20
float inner_radius;//0x24
float outer_radius;//0x28
float weight;//0x2C
};
TAG_BLOCK_SIZE_ASSERT(s_static_initial_spawn_zones_block,0x30);
tag_block<s_static_initial_spawn_zones_block> static_initial_spawn_zones;//0x58
};
TAG_BLOCK_SIZE_ASSERT(s_spawn_data_block,0x60);
tag_block<s_spawn_data_block> spawn_data;//0x318
tag_reference sound_effects_collection;//0x320
struct s_crates_block
{
__int16 palette_index;//0x0
__int16 name_index;//0x2
enum class e_placement_flags : __int32
{
not_automatically = FLAG(0),
not_on_easy = FLAG(1),
not_on_normal = FLAG(2),
not_on_hard = FLAG(3),
lock_type_to_env_object = FLAG(4),
lock_transform_to_env_object = FLAG(5),
never_placed = FLAG(6),
lock_name_to_env_object = FLAG(7),
create_at_rest = FLAG(8),
};
e_placement_flags placement_flags;//0x4
float position_x;//0x8
float position_y;//0xC
float position_z;//0x10
angle rotation_i;//0x14
angle rotation_j;//0x18
angle rotation_k;//0x1C
float scale;//0x20
enum class e_transform_flags : __int16
{
mirrored = FLAG(0),
};
e_transform_flags transform_flags;//0x24
enum class e_manual_bsp_flags : __int16
{
bsp_0 = FLAG(0),
bsp_1 = FLAG(1),
bsp_2 = FLAG(2),
bsp_3 = FLAG(3),
bsp_4 = FLAG(4),
bsp_5 = FLAG(5),
bsp_6 = FLAG(6),
bsp_7 = FLAG(7),
bsp_8 = FLAG(8),
bsp_9 = FLAG(9),
bsp_10 = FLAG(10),
bsp_11 = FLAG(11),
bsp_12 = FLAG(12),
bsp_13 = FLAG(13),
bsp_14 = FLAG(14),
bsp_15 = FLAG(15),
};
e_manual_bsp_flags manual_bsp_flags;//0x26
unsigned __int16 unique_id_index;//0x28
unsigned __int16 unique_id_salt;//0x2A
__int16 origin_bsp_index;//0x2C
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
e_type type;//0x2E
enum class e_source : __int8
{
structure = 0,
editor = 1,
dynamic = 2,
legacy = 3,
};
e_source source;//0x2F
enum class e_bsp_policy : __int8
{
default = 0,
always_places = 1,
manual_bsp_placement = 2,
};
e_bsp_policy bsp_policy;//0x30
__int8 unknown;//0x31
__int16 editor_folder;//0x32
string_id variant_name;//0x34
enum class e_active_change_colors : __int32
{
primary = FLAG(0),
secondary = FLAG(1),
tertiary = FLAG(2),
quaternary = FLAG(3),
};
e_active_change_colors active_change_colors;//0x38
PAD(0x10);//0x3C
};
TAG_BLOCK_SIZE_ASSERT(s_crates_block,0x4C);
tag_block<s_crates_block> crates;//0x328
struct s_crate_palette_block
{
tag_reference crate;//0x0
PAD(0x20);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_crate_palette_block,0x28);
tag_block<s_crate_palette_block> crate_palette;//0x330
tag_reference global_lighting;//0x338
struct s_atmospheric_fog_palette_block
{
string_id name;//0x0
float color_red;//0x4
float color_green;//0x8
float color_blue;//0xC
float spread_distance;//0x10
PAD(0x4);//0x14
float maximum_density;//0x18
float start_distance;//0x1C
float opaque_distance;//0x20
float color_red;//0x24
float color_green;//0x28
float color_blue;//0x2C
float spread_distance;//0x30
PAD(0x4);//0x34
float maximum_density;//0x38
float start_distance;//0x3C
float opaque_distance;//0x40
float planar_color_red;//0x44
float planar_color_green;//0x48
float planar_color_blue;//0x4C
float planar_maximum_density;//0x50
float planar_override_amount;//0x54
float planar_minimum_distance_bias;//0x58
PAD(0x2C);//0x5C
float patchy_color_red;//0x88
float patchy_color_green;//0x8C
float patchy_color_blue;//0x90
PAD(0xC);//0x94
float patchy_density_min;//0xA0
float patchy_density_max;//0xA4
float patchy_distance_min;//0xA8
float patchy_distance_max;//0xAC
PAD(0x20);//0xB0
tag_reference patchy_fog;//0xD0
struct s_mixers_block
{
PAD(0x4);//0x0
string_id atmospheric_fog_source;//0x4
string_id interpolator;//0x8
__int16 unknown;//0xC
__int16 unknown;//0xE
};
TAG_BLOCK_SIZE_ASSERT(s_mixers_block,0x10);
tag_block<s_mixers_block> mixers;//0xD8
float amount;//0xE0
float threshold;//0xE4
float brightness;//0xE8
float gamma_power;//0xEC
enum class e_camera_immersion_flags : __int16
{
disable_atmospheric_fog = FLAG(0),
disable_secondary_fog = FLAG(1),
disable_planar_fog = FLAG(2),
invert_planar_fog_priorites = FLAG(3),
disable_water = FLAG(4),
};
e_camera_immersion_flags camera_immersion_flags;//0xF0
__int16 unknown;//0xF2
};
TAG_BLOCK_SIZE_ASSERT(s_atmospheric_fog_palette_block,0xF4);
tag_block<s_atmospheric_fog_palette_block> atmospheric_fog_palette;//0x340
struct s_planar_fog_palette_block
{
string_id name;//0x0
tag_reference planar_fog;//0x4
__int16 unknown;//0xC
__int16 unknown;//0xE
};
TAG_BLOCK_SIZE_ASSERT(s_planar_fog_palette_block,0x10);
tag_block<s_planar_fog_palette_block> planar_fog_palette;//0x348
struct s_flocks_block
{
__int16 bsp_index;//0x0
__int16 unknown;//0x2
__int16 bounding_trigger_volume;//0x4
enum class e_flags : __int16
{
hard_boundaries_on_volume = FLAG(0),
flock_initially_stopped = FLAG(1),
};
e_flags flags;//0x6
float ecology_margin;//0x8
struct s_sources_block
{
float position_x;//0x0
float position_y;//0x4
float position_z;//0x8
angle starting_y;//0xC
angle starting_p;//0x10
float radius;//0x14
float weight;//0x18
};
TAG_BLOCK_SIZE_ASSERT(s_sources_block,0x1C);
tag_block<s_sources_block> sources;//0xC
struct s_sinks_block
{
float position_x;//0x0
float position_y;//0x4
float position_z;//0x8
PAD(0x10);//0xC
float radius;//0x1C
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-16);//0x20
};
TAG_BLOCK_SIZE_ASSERT(s_sinks_block,0x10);
tag_block<s_sinks_block> sinks;//0x14
float production_frequency;//0x1C
float scale_min;//0x20
float scale_max;//0x24
tag_reference creature;//0x28
__int16 boid_count_min;//0x30
__int16 boid_count_max;//0x32
float neighborhood_radius;//0x34
float avoidance_radius;//0x38
float forward_scale;//0x3C
float alignment_scale;//0x40
float avoidance_scale;//0x44
float leveling_force_scale;//0x48
float sink_scale;//0x4C
angle perception_angle;//0x50
float average_throttle;//0x54
float maximum_throttle;//0x58
float position_scale;//0x5C
float position_radius_min;//0x60
float position_radius_max;//0x64
float movement_weight_threshold;//0x68
float danger_radius;//0x6C
float danger_scale;//0x70
float random_offset_scale;//0x74
float random_offset_min;//0x78
float random_offset_max;//0x7C
string_id flock_name;//0x80
};
TAG_BLOCK_SIZE_ASSERT(s_flocks_block,0x84);
tag_block<s_flocks_block> flocks;//0x350
tag_reference subtitles;//0x358
PAD(0x10);//0x360
struct s_creature_palette_block
{
tag_reference creature;//0x0
PAD(0x20);//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_creature_palette_block,0x28);
tag_block<s_creature_palette_block> creature_palette;//0x370
struct s_decorator_palette_block
{
tag_reference decorator_set;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_decorator_palette_block,0x8);
tag_block<s_decorator_palette_block> decorator_palette;//0x378
struct s_bsp_transition_volumes_block
{
__int16 unknown;//0x0
__int16 bsp_index_key;//0x2
__int16 trigger_volume_index;//0x4
__int16 unknown;//0x6
};
TAG_BLOCK_SIZE_ASSERT(s_bsp_transition_volumes_block,0x8);
tag_block<s_bsp_transition_volumes_block> bsp_transition_volumes;//0x380
struct s_structure_bsp_lighting_block
{
tag_reference bsp;//0x0
struct s_lighting_points_block
{
float position_x;//0x0
float position_y;//0x4
float position_z;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_lighting_points_block,0xC);
tag_block<s_lighting_points_block> lighting_points;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_structure_bsp_lighting_block,0x10);
tag_block<s_structure_bsp_lighting_block> structure_bsp_lighting;//0x388
struct s_editor_folders_block
{
__int32 parent_folder;//0x0
string256 name;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_editor_folders_block,0x104);
tag_block<s_editor_folders_block> editor_folders;//0x390
struct s_level_data_block
{
tag_reference level_description;//0x0
struct s_campaign_level_data_block
{
__int32 campaign_id;//0x0
__int32 map_id;//0x4
tag_reference bitmap;//0x8
unicode32 english_name;//0x10
unicode32 japanese_name;//0x50
unicode32 german_name;//0x90
unicode32 french_name;//0xD0
unicode32 spanish_name;//0x110
unicode32 italian_name;//0x150
unicode32 korean_name;//0x190
unicode32 chinese_name;//0x1D0
unicode32 portuguese_name;//0x210
unicode128 english_description;//0x250
unicode128 japanese_description;//0x350
unicode128 german_description;//0x450
unicode128 french_description;//0x550
unicode128 spanish_description;//0x650
unicode128 italian_description;//0x750
unicode128 korean_description;//0x850
unicode128 chinese_description;//0x950
unicode128 portuguese_description;//0xA50
};
TAG_BLOCK_SIZE_ASSERT(s_campaign_level_data_block,0xB50);
tag_block<s_campaign_level_data_block> campaign_level_data;//0x8
struct s_multiplayer_block
{
__int32 map_id;//0x0
tag_reference bitmap;//0x4
unicode32 english_name;//0xC
unicode32 japanese_name;//0x4C
unicode32 german_name;//0x8C
unicode32 french_name;//0xCC
unicode32 spanish_name;//0x10C
unicode32 italian_name;//0x14C
unicode32 korean_name;//0x18C
unicode32 chinese_name;//0x1CC
unicode32 portuguese_name;//0x20C
unicode128 english_description;//0x24C
unicode128 japanese_description;//0x34C
unicode128 german_description;//0x44C
unicode128 french_description;//0x54C
unicode128 spanish_description;//0x64C
unicode128 italian_description;//0x74C
unicode128 korean_description;//0x84C
unicode128 chinese_description;//0x94C
unicode128 portuguese_description;//0xA4C
string256 path;//0xB4C
__int32 sort_order;//0xC4C
enum class e_flags : __int8
{
unlockable = FLAG(0),
};
e_flags flags;//0xC50
__int8 unknown;//0xC51
__int8 unknown;//0xC52
__int8 unknown;//0xC53
unsigned __int8 max_teams_none;//0xC54
unsigned __int8 max_teams_ctf;//0xC55
unsigned __int8 max_teams_slayer;//0xC56
unsigned __int8 max_teams_oddball;//0xC57
unsigned __int8 max_teams_koth;//0xC58
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-1);//0xC59
unsigned __int8 max_teams_race;//0xC58
unsigned __int8 max_teams_headhunter;//0xC59
unsigned __int8 max_teams_juggernaut;//0xC5A
unsigned __int8 max_teams_territories;//0xC5B
unsigned __int8 max_teams_assault;//0xC5C
unsigned __int8 max_teams_stub_10;//0xC5D
unsigned __int8 max_teams_stub_11;//0xC5E
unsigned __int8 max_teams_stub_12;//0xC5F
unsigned __int8 max_teams_stub_13;//0xC60
unsigned __int8 max_teams_stub_14;//0xC61
unsigned __int8 max_teams_stub_15;//0xC62
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-1);//0xC63
};
TAG_BLOCK_SIZE_ASSERT(s_multiplayer_block,0xC62);
tag_block<s_multiplayer_block> multiplayer;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_level_data_block,0x18);
tag_block<s_level_data_block> level_data;//0x398
tag_reference territory_location_names;//0x3A0
PAD(0x8);//0x3A8
struct s_mission_dialogue_block
{
tag_reference mission_dialogue;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_mission_dialogue_block,0x8);
tag_block<s_mission_dialogue_block> mission_dialogue;//0x3B0
tag_reference objectives;//0x3B8
struct s_interpolators_block
{
string_id name;//0x0
string_id accelerator_name;//0x4
string_id multiplier_name;//0x8
data_block function;//0xC
__int16 unknown;//0x14
__int16 unknown;//0x16
};
TAG_BLOCK_SIZE_ASSERT(s_interpolators_block,0x18);
tag_block<s_interpolators_block> interpolators;//0x3C0
PAD(0x8);//0x3C8
struct s_screen_effect_references_block
{
PAD(0x10);//0x0
tag_reference screen_effect;//0x10
string_id primary_input;//0x18
string_id secondary_input;//0x1C
__int16 unknown;//0x20
__int16 unknown;//0x22
};
TAG_BLOCK_SIZE_ASSERT(s_screen_effect_references_block,0x24);
tag_block<s_screen_effect_references_block> screen_effect_references;//0x3D0
struct s_simulation_definition_table_block
{
tag_referenceN tag;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_simulation_definition_table_block,0x4);
tag_block<s_simulation_definition_table_block> simulation_definition_table;//0x3D8
};
TAG_GROUP_SIZE_ASSERT(s_scenario_group_definition,0x3E0);
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_skies_block)	TAG_REFL_TAG_REFERENCE(sky)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_predicted_resource_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(resource_index)	TAG_REFL_TAG_REFERENCE(tag_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_comments_block)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(type)	TAG_REFL_STRING_32(name)	TAG_REFL_STRING_256(comment)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_object_names_block)	TAG_REFL_STRING_32(name)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(placement_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_scenery_group_definition::s_pathfinding_references_block)	TAG_REFL_PROPERTY(bsp_index)	TAG_REFL_PROPERTY(pathfinding_object_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_scenery_block)	TAG_REFL_PROPERTY(palette_index)	TAG_REFL_PROPERTY(name_index)	TAG_REFL_PROPERTY(placement_flags)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_ANGLE(rotation_i)	TAG_REFL_ANGLE(rotation_j)	TAG_REFL_ANGLE(rotation_k)	TAG_REFL_PROPERTY(scale)	TAG_REFL_PROPERTY(transform_flags)	TAG_REFL_PROPERTY(manual_bsp_flags)	TAG_REFL_PROPERTY(unique_id_index)	TAG_REFL_PROPERTY(unique_id_salt)	TAG_REFL_PROPERTY(origin_bsp_index)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(source)	TAG_REFL_PROPERTY(bsp_policy)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(editor_folder)	TAG_REFL_STRING_ID(variant_name)	TAG_REFL_PROPERTY(active_change_colors)	TAG_REFL_PROPERTY(pathfinding_policy)	TAG_REFL_PROPERTY(lightmapping_policy)	TAG_REFL_TAG_BLOCK(pathfinding_references)	TAG_REFL_PROPERTY(valid_multiplayer_games)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_scenery_palette_block)	TAG_REFL_TAG_REFERENCE(scenery)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_bipeds_block)	TAG_REFL_PROPERTY(palette_index)	TAG_REFL_PROPERTY(name_index)	TAG_REFL_PROPERTY(placement_flags)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_ANGLE(rotation_i)	TAG_REFL_ANGLE(rotation_j)	TAG_REFL_ANGLE(rotation_k)	TAG_REFL_PROPERTY(scale)	TAG_REFL_PROPERTY(transform_flags)	TAG_REFL_PROPERTY(manual_bsp_flags)	TAG_REFL_PROPERTY(unique_id_index)	TAG_REFL_PROPERTY(unique_id_salt)	TAG_REFL_PROPERTY(origin_bsp_index)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(source)	TAG_REFL_PROPERTY(bsp_policy)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(editor_folder)	TAG_REFL_STRING_ID(variant_name)	TAG_REFL_PROPERTY(active_change_colors)	TAG_REFL_PROPERTY(body_vitality)	TAG_REFL_PROPERTY(flags)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_biped_palette_block)	TAG_REFL_TAG_REFERENCE(biped)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_vehicles_block)	TAG_REFL_PROPERTY(palette_index)	TAG_REFL_PROPERTY(name_index)	TAG_REFL_PROPERTY(placement_flags)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_ANGLE(rotation_i)	TAG_REFL_ANGLE(rotation_j)	TAG_REFL_ANGLE(rotation_k)	TAG_REFL_PROPERTY(scale)	TAG_REFL_PROPERTY(transform_flags)	TAG_REFL_PROPERTY(manual_bsp_flags)	TAG_REFL_PROPERTY(unique_id_index)	TAG_REFL_PROPERTY(unique_id_salt)	TAG_REFL_PROPERTY(origin_bsp_index)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(source)	TAG_REFL_PROPERTY(bsp_policy)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(editor_folder)	TAG_REFL_STRING_ID(variant_name)	TAG_REFL_PROPERTY(active_change_colors)	TAG_REFL_PROPERTY(body_vitality)	TAG_REFL_PROPERTY(flags)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_vehicle_palette_block)	TAG_REFL_TAG_REFERENCE(vehicle)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_equipment_block)	TAG_REFL_PROPERTY(palette_index)	TAG_REFL_PROPERTY(name_index)	TAG_REFL_PROPERTY(placement_flags)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_ANGLE(rotation_i)	TAG_REFL_ANGLE(rotation_j)	TAG_REFL_ANGLE(rotation_k)	TAG_REFL_PROPERTY(scale)	TAG_REFL_PROPERTY(transform_flags)	TAG_REFL_PROPERTY(manual_bsp_flags)	TAG_REFL_PROPERTY(unique_id_index)	TAG_REFL_PROPERTY(unique_id_salt)	TAG_REFL_PROPERTY(origin_bsp_index)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(source)	TAG_REFL_PROPERTY(bsp_policy)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(editor_folder)	TAG_REFL_PROPERTY(equipment_flags)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_equipment_palette_block)	TAG_REFL_TAG_REFERENCE(equipment)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_weapons_block)	TAG_REFL_PROPERTY(palette_index)	TAG_REFL_PROPERTY(name_index)	TAG_REFL_PROPERTY(placement_flags)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_ANGLE(rotation_i)	TAG_REFL_ANGLE(rotation_j)	TAG_REFL_ANGLE(rotation_k)	TAG_REFL_PROPERTY(scale)	TAG_REFL_PROPERTY(transform_flags)	TAG_REFL_PROPERTY(manual_bsp_flags)	TAG_REFL_PROPERTY(unique_id_index)	TAG_REFL_PROPERTY(unique_id_salt)	TAG_REFL_PROPERTY(origin_bsp_index)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(source)	TAG_REFL_PROPERTY(bsp_policy)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(editor_folder)	TAG_REFL_STRING_ID(variant_name)	TAG_REFL_PROPERTY(active_change_colors)	TAG_REFL_PROPERTY(rounds_left)	TAG_REFL_PROPERTY(rounds_loaded)	TAG_REFL_PROPERTY(flags)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_weapon_palette_block)	TAG_REFL_TAG_REFERENCE(weapon)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_device_groups_block)	TAG_REFL_STRING_32(name)	TAG_REFL_PROPERTY(inital_value)	TAG_REFL_PROPERTY(flags)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_machines_group_definition::s_pathfinding_references_block)	TAG_REFL_PROPERTY(bsp_index)	TAG_REFL_PROPERTY(pathfinding_object_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_machines_block)	TAG_REFL_PROPERTY(palette_index)	TAG_REFL_PROPERTY(name_index)	TAG_REFL_PROPERTY(placement_flags)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_ANGLE(rotation_i)	TAG_REFL_ANGLE(rotation_j)	TAG_REFL_ANGLE(rotation_k)	TAG_REFL_PROPERTY(scale)	TAG_REFL_PROPERTY(transform_flags)	TAG_REFL_PROPERTY(manual_bsp_flags)	TAG_REFL_PROPERTY(unique_id_index)	TAG_REFL_PROPERTY(unique_id_salt)	TAG_REFL_PROPERTY(origin_bsp_index)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(source)	TAG_REFL_PROPERTY(bsp_policy)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(editor_folder)	TAG_REFL_PROPERTY(power_group)	TAG_REFL_PROPERTY(position_group)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(flags)	TAG_REFL_TAG_BLOCK(pathfinding_references)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_machine_palette_block)	TAG_REFL_TAG_REFERENCE(machine)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_controls_block)	TAG_REFL_PROPERTY(palette_index)	TAG_REFL_PROPERTY(name_index)	TAG_REFL_PROPERTY(placement_flags)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_ANGLE(rotation_i)	TAG_REFL_ANGLE(rotation_j)	TAG_REFL_ANGLE(rotation_k)	TAG_REFL_PROPERTY(scale)	TAG_REFL_PROPERTY(transform_flags)	TAG_REFL_PROPERTY(manual_bsp_flags)	TAG_REFL_PROPERTY(unique_id_index)	TAG_REFL_PROPERTY(unique_id_salt)	TAG_REFL_PROPERTY(origin_bsp_index)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(source)	TAG_REFL_PROPERTY(bsp_policy)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(editor_folder)	TAG_REFL_PROPERTY(power_group)	TAG_REFL_PROPERTY(position_group)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(dont_touch_this)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_control_palette_block)	TAG_REFL_TAG_REFERENCE(control)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_light_fixtures_block)	TAG_REFL_PROPERTY(palette_index)	TAG_REFL_PROPERTY(name_index)	TAG_REFL_PROPERTY(placement_flags)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_ANGLE(rotation_i)	TAG_REFL_ANGLE(rotation_j)	TAG_REFL_ANGLE(rotation_k)	TAG_REFL_PROPERTY(scale)	TAG_REFL_PROPERTY(transform_flags)	TAG_REFL_PROPERTY(manual_bsp_flags)	TAG_REFL_PROPERTY(unique_id_index)	TAG_REFL_PROPERTY(unique_id_salt)	TAG_REFL_PROPERTY(origin_bsp_index)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(source)	TAG_REFL_PROPERTY(bsp_policy)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(editor_folder)	TAG_REFL_PROPERTY(power_group)	TAG_REFL_PROPERTY(position_group)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(color_red)	TAG_REFL_PROPERTY(color_green)	TAG_REFL_PROPERTY(color_blue)	TAG_REFL_PROPERTY(intensity)	TAG_REFL_ANGLE(falloff_angle)	TAG_REFL_ANGLE(cutoff_angle)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_light_fixtures_palette_block)	TAG_REFL_TAG_REFERENCE(light_fixture)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_sound_scenery_block)	TAG_REFL_PROPERTY(palette_index)	TAG_REFL_PROPERTY(name_index)	TAG_REFL_PROPERTY(placement_flags)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_ANGLE(rotation_i)	TAG_REFL_ANGLE(rotation_j)	TAG_REFL_ANGLE(rotation_k)	TAG_REFL_PROPERTY(scale)	TAG_REFL_PROPERTY(transform_flags)	TAG_REFL_PROPERTY(manual_bsp_flags)	TAG_REFL_PROPERTY(unique_id_index)	TAG_REFL_PROPERTY(unique_id_salt)	TAG_REFL_PROPERTY(origin_bsp_index)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(source)	TAG_REFL_PROPERTY(bsp_policy)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(editor_folder)	TAG_REFL_PROPERTY(volume_type)	TAG_REFL_PROPERTY(height)	TAG_REFL_PROPERTY(override_distance_bounds_min)	TAG_REFL_PROPERTY(override_distance_bounds_max)	TAG_REFL_ANGLE(override_cone_angle_bounds_min)	TAG_REFL_ANGLE(override_cone_angle_bounds_max)	TAG_REFL_PROPERTY(override_outer_cone_gain)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_sound_scenery_palette_block)	TAG_REFL_TAG_REFERENCE(sound_scenery)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_light_volumes_block)	TAG_REFL_PROPERTY(palette_index)	TAG_REFL_PROPERTY(name_index)	TAG_REFL_PROPERTY(placement_flags)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_ANGLE(rotation_i)	TAG_REFL_ANGLE(rotation_j)	TAG_REFL_ANGLE(rotation_k)	TAG_REFL_PROPERTY(scale)	TAG_REFL_PROPERTY(transform_flags)	TAG_REFL_PROPERTY(manual_bsp_flags)	TAG_REFL_PROPERTY(unique_id_index)	TAG_REFL_PROPERTY(unique_id_salt)	TAG_REFL_PROPERTY(origin_bsp_index)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(source)	TAG_REFL_PROPERTY(bsp_policy)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(editor_folder)	TAG_REFL_PROPERTY(power_group)	TAG_REFL_PROPERTY(position_group)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(lightmap_type)	TAG_REFL_PROPERTY(lightmap_flags)	TAG_REFL_PROPERTY(lightmap_half_life)	TAG_REFL_PROPERTY(lightmap_light_scale)	TAG_REFL_PROPERTY(target_point_x)	TAG_REFL_PROPERTY(target_point_y)	TAG_REFL_PROPERTY(target_point_z)	TAG_REFL_PROPERTY(width)	TAG_REFL_PROPERTY(height_scale)	TAG_REFL_ANGLE(field_of_view)	TAG_REFL_PROPERTY(falloff_distance)	TAG_REFL_PROPERTY(cutoff_distance)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_light_volumes_palette_block)	TAG_REFL_TAG_REFERENCE(light_volume)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_player_starting_profile_block)	TAG_REFL_STRING_32(name)	TAG_REFL_PROPERTY(starting_health_damage)	TAG_REFL_PROPERTY(starting_shield_damage)	TAG_REFL_TAG_REFERENCE(primary_weapon)	TAG_REFL_PROPERTY(rounds_loaded)	TAG_REFL_PROPERTY(rounds_total)	TAG_REFL_TAG_REFERENCE(secondary_weapon)	TAG_REFL_PROPERTY(rounds_loaded)	TAG_REFL_PROPERTY(rounds_total)	TAG_REFL_PROPERTY(starting_frag_grenade_count)	TAG_REFL_PROPERTY(starting_plasma_grenade_count)	TAG_REFL_PROPERTY(starting_unused_grenade_count)	TAG_REFL_PROPERTY(starting_unused_grenade_count)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_player_starting_locations_block)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_ANGLE(facing)	TAG_REFL_PROPERTY(team_designator)	TAG_REFL_PROPERTY(bsp_index)	TAG_REFL_PROPERTY(game_type_1)	TAG_REFL_PROPERTY(game_type_2)	TAG_REFL_PROPERTY(game_type_3)	TAG_REFL_PROPERTY(game_type_4)	TAG_REFL_PROPERTY(spawn_type_1)	TAG_REFL_PROPERTY(spawn_type_2)	TAG_REFL_PROPERTY(spawn_type_3)	TAG_REFL_PROPERTY(spawn_type_4)	TAG_REFL_STRING_ID(unknown)	TAG_REFL_STRING_ID(unknown)	TAG_REFL_PROPERTY(campaign_player_type)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_trigger_volumes_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(object_name)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_STRING_ID(node_name)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(extents_x)	TAG_REFL_PROPERTY(extents_y)	TAG_REFL_PROPERTY(extents_z)	TAG_REFL_PROPERTY(kill_volume)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_netgame_flags_block)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_ANGLE(facing)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(team_designator)	TAG_REFL_PROPERTY(identifier)	TAG_REFL_PROPERTY(flags)	TAG_REFL_STRING_ID(unknown)	TAG_REFL_STRING_ID(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_netgame_equipment_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(game_type_1)	TAG_REFL_PROPERTY(game_type_2)	TAG_REFL_PROPERTY(game_type_3)	TAG_REFL_PROPERTY(game_type_4)	TAG_REFL_PROPERTY(team_index)	TAG_REFL_PROPERTY(spawn_time)	TAG_REFL_PROPERTY(respawn_on_empty_time)	TAG_REFL_PROPERTY(respawn_timer_starts)	TAG_REFL_PROPERTY(classification)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_ANGLE(orientation_i)	TAG_REFL_ANGLE(orientation_j)	TAG_REFL_ANGLE(orientation_k)	TAG_REFL_TAG_REFERENCE(itemvehicle_collection)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_starting_equipment_block)	TAG_REFL_PROPERTY(starting_grenades)	TAG_REFL_PROPERTY(game_type_1)	TAG_REFL_PROPERTY(game_type_2)	TAG_REFL_PROPERTY(game_type_3)	TAG_REFL_PROPERTY(game_type_4)	TAG_REFL_TAG_REFERENCE(item_collection_1)	TAG_REFL_TAG_REFERENCE(item_collection_2)	TAG_REFL_TAG_REFERENCE(item_collection_3)	TAG_REFL_TAG_REFERENCE(item_collection_4)	TAG_REFL_TAG_REFERENCE(item_collection_5)	TAG_REFL_TAG_REFERENCE(item_collection_6)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_bsp_switch_trigger_volumes_block)	TAG_REFL_PROPERTY(trigger_volume)	TAG_REFL_PROPERTY(source_bsp)	TAG_REFL_PROPERTY(destination_bsp)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_decals_block)	TAG_REFL_PROPERTY(palette_index)	TAG_REFL_PROPERTY(yaw)	TAG_REFL_PROPERTY(pitch)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_decal_palette_block)	TAG_REFL_TAG_REFERENCE(decal)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_detail_object_collection_palette_block)	TAG_REFL_TAG_REFERENCE(detail_object_collection)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_style_palette_block)	TAG_REFL_TAG_REFERENCE(style)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_squad_groups_block)	TAG_REFL_STRING_32(squad_type)	TAG_REFL_PROPERTY(parent)	TAG_REFL_PROPERTY(initial_order)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_squads_group_definition::s_starting_loctations_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(reference_frame)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_ANGLE(facing_y)	TAG_REFL_ANGLE(facing_p)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(character_index)	TAG_REFL_PROPERTY(primary_weapon_index)	TAG_REFL_PROPERTY(secondary_weapon_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(vehicle_index)	TAG_REFL_PROPERTY(seat_type)	TAG_REFL_PROPERTY(grenade_type)	TAG_REFL_PROPERTY(swarm_count)	TAG_REFL_STRING_ID(actor_variant)	TAG_REFL_STRING_ID(vehicle_variant)	TAG_REFL_PROPERTY(initial_movement_distance)	TAG_REFL_PROPERTY(emitter_vehicle_index)	TAG_REFL_PROPERTY(initial_movement_mode)	TAG_REFL_STRING_32(placement_script)	TAG_REFL_PROPERTY(script_index)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_squads_block)	TAG_REFL_STRING_32(name)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(team)	TAG_REFL_PROPERTY(parent_squad_group)	TAG_REFL_PROPERTY(squad_delay_time)	TAG_REFL_PROPERTY(normal_difficulty_count)	TAG_REFL_PROPERTY(legendary_difficulty_count)	TAG_REFL_PROPERTY(major_upgrade)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(vehicle_index)	TAG_REFL_PROPERTY(character_index)	TAG_REFL_PROPERTY(initial_zone)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(primary_weapon_index)	TAG_REFL_PROPERTY(secondary_weapon_index)	TAG_REFL_PROPERTY(grenade_type)	TAG_REFL_PROPERTY(initial_order)	TAG_REFL_STRING_ID(vehicle_variant)	TAG_REFL_TAG_BLOCK(starting_loctations)	TAG_REFL_STRING_32(placement_script)	TAG_REFL_PROPERTY(script_index)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_zones_group_definition::s_firing_positions_block)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(reference_frame)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(area_index)	TAG_REFL_PROPERTY(cluster_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_ANGLE(normal_y)	TAG_REFL_ANGLE(normal_p)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_zones_group_definition::s_areas_group_definition::s_flight_hints_block)	TAG_REFL_PROPERTY(flight_hint_index)	TAG_REFL_PROPERTY(poit_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_zones_group_definition::s_areas_block)	TAG_REFL_STRING_32(name)	TAG_REFL_PROPERTY(area_flags)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(firing_position_start_index)	TAG_REFL_PROPERTY(firing_position_count)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(manual_reference_frame)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_BLOCK(flight_hints)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_zones_block)	TAG_REFL_STRING_32(name)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(manual_bsp_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_BLOCK(firing_positions)	TAG_REFL_TAG_BLOCK(areas)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_mission_scenes_group_definition::s_trigger_conditions_group_definition::s_triggers_block)	TAG_REFL_PROPERTY(trigger_flags)	TAG_REFL_PROPERTY(trigger_index)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_mission_scenes_group_definition::s_trigger_conditions_block)	TAG_REFL_PROPERTY(combination_rule)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_BLOCK(triggers)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_mission_scenes_group_definition::s_roles_group_definition::s_role_variants_block)	TAG_REFL_STRING_ID(variant_designation)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_mission_scenes_group_definition::s_roles_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(group)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_BLOCK(role_variants)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_mission_scenes_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(flags)	TAG_REFL_TAG_BLOCK(trigger_conditions)	TAG_REFL_TAG_BLOCK(roles)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_character_palette_block)	TAG_REFL_TAG_REFERENCE(character)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_scripts_block)	TAG_REFL_STRING_32(name)	TAG_REFL_PROPERTY(script_type)	TAG_REFL_PROPERTY(return_type)	TAG_REFL_PROPERTY(root_expression_index)	TAG_REFL_PROPERTY(root_expression_salt)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_globals_block)	TAG_REFL_STRING_32(name)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(initialization_expression_index)	TAG_REFL_PROPERTY(initialization_expression_salt)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_script_references_block)	TAG_REFL_TAG_REFERENCE(reference)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_scripting_data_group_definition::s_point_sets_group_definition::s_points_block)	TAG_REFL_STRING_32(name)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(reference_frame)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(surface_index)	TAG_REFL_PROPERTY(facing_direction_y)	TAG_REFL_PROPERTY(facing_direction_p)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_scripting_data_group_definition::s_point_sets_block)	TAG_REFL_STRING_32(name)	TAG_REFL_TAG_BLOCK(points)	TAG_REFL_PROPERTY(bsp_index)	TAG_REFL_PROPERTY(manual_reference_frame)	TAG_REFL_PROPERTY(flags)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_scripting_data_block)	TAG_REFL_TAG_BLOCK(point_sets)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_cutscene_flags_block)	TAG_REFL_STRING_32(name)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_ANGLE(facing_y)	TAG_REFL_ANGLE(facing_p)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_cutscene_camera_points_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(type)	TAG_REFL_STRING_32(name)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_ANGLE(orientation_y)	TAG_REFL_ANGLE(orientation_p)	TAG_REFL_ANGLE(orientation_r)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_cutscene_titles_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(text_bounds_top)	TAG_REFL_PROPERTY(text_bounds_left)	TAG_REFL_PROPERTY(text_bounds_bottom)	TAG_REFL_PROPERTY(text_bounds_right)	TAG_REFL_PROPERTY(justification)	TAG_REFL_PROPERTY(font)	TAG_REFL_PROPERTY(fade_in_time)	TAG_REFL_PROPERTY(up_time)	TAG_REFL_PROPERTY(fade_out_time)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_structure_bsps_block)	TAG_REFL_PROPERTY(structure_bsp_offset)	TAG_REFL_PROPERTY(structure_bsp_size)	TAG_REFL_PROPERTY(primary_magic_meta_offset)	TAG_REFL_TAG_REFERENCE(structure_bsp)	TAG_REFL_TAG_REFERENCE(structure_lightmap)	TAG_REFL_PROPERTY(unused_radiance_estimated_search_distance)	TAG_REFL_PROPERTY(unused_luminels_per_world_unit)	TAG_REFL_PROPERTY(unused_output_white_reference)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(default_sky)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_scenario_resources_group_definition::s_references_block)	TAG_REFL_TAG_REFERENCE(reference)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_scenario_resources_group_definition::s_script_source_block)	TAG_REFL_TAG_REFERENCE(reference)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_scenario_resources_group_definition::s_ai_resources_block)	TAG_REFL_TAG_REFERENCE(reference)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_scenario_resources_block)	TAG_REFL_TAG_BLOCK(references)	TAG_REFL_TAG_BLOCK(script_source)	TAG_REFL_TAG_BLOCK(ai_resources)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_structure_physics_group_definition::s_environment_object_identifiers_block)	TAG_REFL_PROPERTY(unique_id_index)	TAG_REFL_PROPERTY(unique_id_salt)	TAG_REFL_PROPERTY(origin_bsp_index)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(source)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_structure_physics_block)	TAG_REFL_DATA_BLOCK(mopp_code)	TAG_REFL_TAG_BLOCK(environment_object_identifiers)	TAG_REFL_PROPERTY(mopp_bounds_min_x)	TAG_REFL_PROPERTY(mopp_bounds_min_y)	TAG_REFL_PROPERTY(mopp_bounds_min_z)	TAG_REFL_PROPERTY(mopp_bounds_max_x)	TAG_REFL_PROPERTY(mopp_bounds_max_y)	TAG_REFL_PROPERTY(mopp_bounds_max_z)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_unit_seats_mapping_block)	TAG_REFL_TAG_REFERENCE(unit)	TAG_REFL_PROPERTY(seats)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_scenario_kill_triggers_block)	TAG_REFL_PROPERTY(trigger_volume)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_script_expressions_block)	TAG_REFL_PROPERTY(datum_header)	TAG_REFL_PROPERTY(script_indexfunction_indexconstant_type_union)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(next_node_index)	TAG_REFL_PROPERTY(next_node_salt)	TAG_REFL_PROPERTY(data)	TAG_REFL_PROPERTY(source_offset_index)	TAG_REFL_PROPERTY(source_offset_salt)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_orders_group_definition::s_primary_area_set_block)	TAG_REFL_PROPERTY(area_type)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(zone_index)	TAG_REFL_PROPERTY(area_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_orders_group_definition::s_secondary_area_set_block)	TAG_REFL_PROPERTY(area_type)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(zone_index)	TAG_REFL_PROPERTY(area_index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_orders_group_definition::s_secondary_set_trigger_group_definition::s_triggers_block)	TAG_REFL_PROPERTY(trigger_flags)	TAG_REFL_PROPERTY(trigger_index)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_orders_group_definition::s_secondary_set_trigger_block)	TAG_REFL_PROPERTY(combination_rule)	TAG_REFL_PROPERTY(dialogue_type)	TAG_REFL_TAG_BLOCK(triggers)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_orders_group_definition::s_special_movement_block)	TAG_REFL_PROPERTY(special_movement_1)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_orders_group_definition::s_order_endings_group_definition::s_triggers_block)	TAG_REFL_PROPERTY(trigger_flags)	TAG_REFL_PROPERTY(trigger_index)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_orders_group_definition::s_order_endings_block)	TAG_REFL_PROPERTY(next_order_index)	TAG_REFL_PROPERTY(combination_rule)	TAG_REFL_PROPERTY(delay_time)	TAG_REFL_PROPERTY(dialogue_type)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_BLOCK(triggers)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_orders_block)	TAG_REFL_STRING_32(name)	TAG_REFL_PROPERTY(style_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(force_combat_status)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_STRING_32(entry_script)	TAG_REFL_PROPERTY(script_index)	TAG_REFL_PROPERTY(follow_squad_index)	TAG_REFL_PROPERTY(follow_radius)	TAG_REFL_TAG_BLOCK(primary_area_set)	TAG_REFL_TAG_BLOCK(secondary_area_set)	TAG_REFL_TAG_BLOCK(secondary_set_trigger)	TAG_REFL_TAG_BLOCK(special_movement)	TAG_REFL_TAG_BLOCK(order_endings)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_ai_triggers_group_definition::s_conditions_block)	TAG_REFL_PROPERTY(rule_type)	TAG_REFL_PROPERTY(squad)	TAG_REFL_PROPERTY(squad_group)	TAG_REFL_PROPERTY(a)	TAG_REFL_PROPERTY(x)	TAG_REFL_PROPERTY(trigger_volume)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_STRING_32(exit_condition_script)	TAG_REFL_PROPERTY(exit_condition_script_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(flags)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_ai_triggers_block)	TAG_REFL_STRING_32(name)	TAG_REFL_PROPERTY(trigger_flags)	TAG_REFL_PROPERTY(combination_rule)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_BLOCK(conditions)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_background_sound_palette_block)	TAG_REFL_STRING_32(name)	TAG_REFL_TAG_REFERENCE(background_sound)	TAG_REFL_TAG_REFERENCE(inside_cluster_sound)	TAG_REFL_PROPERTY(cutoff_distance)	TAG_REFL_PROPERTY(scale_flags)	TAG_REFL_PROPERTY(interior_scale)	TAG_REFL_PROPERTY(portal_scale)	TAG_REFL_PROPERTY(exterior_scale)	TAG_REFL_PROPERTY(interpolation_speed)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_sound_environment_palette_block)	TAG_REFL_STRING_32(name)	TAG_REFL_TAG_REFERENCE(sound_environment)	TAG_REFL_PROPERTY(cutoff_distance)	TAG_REFL_PROPERTY(interpolation_speed)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_weather_palette_block)	TAG_REFL_STRING_32(name)	TAG_REFL_TAG_REFERENCE(weather_system)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_REFERENCE(wind)	TAG_REFL_ANGLE(wind_direction_i)	TAG_REFL_ANGLE(wind_direction_j)	TAG_REFL_ANGLE(wind_direction_k)	TAG_REFL_PROPERTY(wind_magnitude)	TAG_REFL_STRING_32(wind_scale_function)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_scenario_cluster_data_group_definition::s_background_sounds_block)	TAG_REFL_PROPERTY(palette_index)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_scenario_cluster_data_group_definition::s_sound_environments_block)	TAG_REFL_PROPERTY(palette_index)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_scenario_cluster_data_group_definition::s_cluster_centroids_block)	TAG_REFL_PROPERTY(centroid_x)	TAG_REFL_PROPERTY(centroid_y)	TAG_REFL_PROPERTY(centroid_z)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_scenario_cluster_data_group_definition::s_weather_properties_block)	TAG_REFL_PROPERTY(palette_index)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_scenario_cluster_data_group_definition::s_atmospheric_fog_properties_block)	TAG_REFL_PROPERTY(palette_index)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_scenario_cluster_data_block)	TAG_REFL_TAG_REFERENCE(bsp)	TAG_REFL_TAG_BLOCK(background_sounds)	TAG_REFL_TAG_BLOCK(sound_environments)	TAG_REFL_PROPERTY(bsp_checksum)	TAG_REFL_TAG_BLOCK(cluster_centroids)	TAG_REFL_TAG_BLOCK(weather_properties)	TAG_REFL_TAG_BLOCK(atmospheric_fog_properties)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_spawn_data_group_definition::s_dynamic_spawn_overloads_block)	TAG_REFL_PROPERTY(overload_type)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(inner_radius)	TAG_REFL_PROPERTY(outer_radius)	TAG_REFL_PROPERTY(weight)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_spawn_data_group_definition::s_static_respawn_zones_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(relevant_team)	TAG_REFL_PROPERTY(relevant_games)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(lower_height)	TAG_REFL_PROPERTY(upper_height)	TAG_REFL_PROPERTY(inner_radius)	TAG_REFL_PROPERTY(outer_radius)	TAG_REFL_PROPERTY(weight)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_spawn_data_group_definition::s_static_initial_spawn_zones_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(relevant_team)	TAG_REFL_PROPERTY(relevant_games)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(lower_height)	TAG_REFL_PROPERTY(upper_height)	TAG_REFL_PROPERTY(inner_radius)	TAG_REFL_PROPERTY(outer_radius)	TAG_REFL_PROPERTY(weight)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_spawn_data_block)	TAG_REFL_PROPERTY(dynamic_spawn_lower_height)	TAG_REFL_PROPERTY(dynamic_spawn_upper_height)	TAG_REFL_PROPERTY(game_objective_reset_height)	TAG_REFL_TAG_BLOCK(dynamic_spawn_overloads)	TAG_REFL_TAG_BLOCK(static_respawn_zones)	TAG_REFL_TAG_BLOCK(static_initial_spawn_zones)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_crates_block)	TAG_REFL_PROPERTY(palette_index)	TAG_REFL_PROPERTY(name_index)	TAG_REFL_PROPERTY(placement_flags)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_ANGLE(rotation_i)	TAG_REFL_ANGLE(rotation_j)	TAG_REFL_ANGLE(rotation_k)	TAG_REFL_PROPERTY(scale)	TAG_REFL_PROPERTY(transform_flags)	TAG_REFL_PROPERTY(manual_bsp_flags)	TAG_REFL_PROPERTY(unique_id_index)	TAG_REFL_PROPERTY(unique_id_salt)	TAG_REFL_PROPERTY(origin_bsp_index)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(source)	TAG_REFL_PROPERTY(bsp_policy)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(editor_folder)	TAG_REFL_STRING_ID(variant_name)	TAG_REFL_PROPERTY(active_change_colors)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_crate_palette_block)	TAG_REFL_TAG_REFERENCE(crate)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_atmospheric_fog_palette_group_definition::s_mixers_block)	TAG_REFL_STRING_ID(atmospheric_fog_source)	TAG_REFL_STRING_ID(interpolator)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_atmospheric_fog_palette_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(color_red)	TAG_REFL_PROPERTY(color_green)	TAG_REFL_PROPERTY(color_blue)	TAG_REFL_PROPERTY(spread_distance)	TAG_REFL_PROPERTY(maximum_density)	TAG_REFL_PROPERTY(start_distance)	TAG_REFL_PROPERTY(opaque_distance)	TAG_REFL_PROPERTY(color_red)	TAG_REFL_PROPERTY(color_green)	TAG_REFL_PROPERTY(color_blue)	TAG_REFL_PROPERTY(spread_distance)	TAG_REFL_PROPERTY(maximum_density)	TAG_REFL_PROPERTY(start_distance)	TAG_REFL_PROPERTY(opaque_distance)	TAG_REFL_PROPERTY(planar_color_red)	TAG_REFL_PROPERTY(planar_color_green)	TAG_REFL_PROPERTY(planar_color_blue)	TAG_REFL_PROPERTY(planar_maximum_density)	TAG_REFL_PROPERTY(planar_override_amount)	TAG_REFL_PROPERTY(planar_minimum_distance_bias)	TAG_REFL_PROPERTY(patchy_color_red)	TAG_REFL_PROPERTY(patchy_color_green)	TAG_REFL_PROPERTY(patchy_color_blue)	TAG_REFL_PROPERTY(patchy_density_min)	TAG_REFL_PROPERTY(patchy_density_max)	TAG_REFL_PROPERTY(patchy_distance_min)	TAG_REFL_PROPERTY(patchy_distance_max)	TAG_REFL_TAG_REFERENCE(patchy_fog)	TAG_REFL_TAG_BLOCK(mixers)	TAG_REFL_PROPERTY(amount)	TAG_REFL_PROPERTY(threshold)	TAG_REFL_PROPERTY(brightness)	TAG_REFL_PROPERTY(gamma_power)	TAG_REFL_PROPERTY(camera_immersion_flags)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_planar_fog_palette_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_TAG_REFERENCE(planar_fog)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_flocks_group_definition::s_sources_block)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_ANGLE(starting_y)	TAG_REFL_ANGLE(starting_p)	TAG_REFL_PROPERTY(radius)	TAG_REFL_PROPERTY(weight)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_flocks_group_definition::s_sinks_block)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)	TAG_REFL_PROPERTY(radius)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_flocks_block)	TAG_REFL_PROPERTY(bsp_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(bounding_trigger_volume)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(ecology_margin)	TAG_REFL_TAG_BLOCK(sources)	TAG_REFL_TAG_BLOCK(sinks)	TAG_REFL_PROPERTY(production_frequency)	TAG_REFL_PROPERTY(scale_min)	TAG_REFL_PROPERTY(scale_max)	TAG_REFL_TAG_REFERENCE(creature)	TAG_REFL_PROPERTY(boid_count_min)	TAG_REFL_PROPERTY(boid_count_max)	TAG_REFL_PROPERTY(neighborhood_radius)	TAG_REFL_PROPERTY(avoidance_radius)	TAG_REFL_PROPERTY(forward_scale)	TAG_REFL_PROPERTY(alignment_scale)	TAG_REFL_PROPERTY(avoidance_scale)	TAG_REFL_PROPERTY(leveling_force_scale)	TAG_REFL_PROPERTY(sink_scale)	TAG_REFL_ANGLE(perception_angle)	TAG_REFL_PROPERTY(average_throttle)	TAG_REFL_PROPERTY(maximum_throttle)	TAG_REFL_PROPERTY(position_scale)	TAG_REFL_PROPERTY(position_radius_min)	TAG_REFL_PROPERTY(position_radius_max)	TAG_REFL_PROPERTY(movement_weight_threshold)	TAG_REFL_PROPERTY(danger_radius)	TAG_REFL_PROPERTY(danger_scale)	TAG_REFL_PROPERTY(random_offset_scale)	TAG_REFL_PROPERTY(random_offset_min)	TAG_REFL_PROPERTY(random_offset_max)	TAG_REFL_STRING_ID(flock_name)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_creature_palette_block)	TAG_REFL_TAG_REFERENCE(creature)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_decorator_palette_block)	TAG_REFL_TAG_REFERENCE(decorator_set)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_bsp_transition_volumes_block)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(bsp_index_key)	TAG_REFL_PROPERTY(trigger_volume_index)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_structure_bsp_lighting_group_definition::s_lighting_points_block)	TAG_REFL_PROPERTY(position_x)	TAG_REFL_PROPERTY(position_y)	TAG_REFL_PROPERTY(position_z)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_structure_bsp_lighting_block)	TAG_REFL_TAG_REFERENCE(bsp)	TAG_REFL_TAG_BLOCK(lighting_points)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_editor_folders_block)	TAG_REFL_PROPERTY(parent_folder)	TAG_REFL_STRING_256(name)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_level_data_group_definition::s_campaign_level_data_block)	TAG_REFL_PROPERTY(campaign_id)	TAG_REFL_PROPERTY(map_id)	TAG_REFL_TAG_REFERENCE(bitmap)	TAG_REFL_USTRING_32(english_name)	TAG_REFL_USTRING_32(japanese_name)	TAG_REFL_USTRING_32(german_name)	TAG_REFL_USTRING_32(french_name)	TAG_REFL_USTRING_32(spanish_name)	TAG_REFL_USTRING_32(italian_name)	TAG_REFL_USTRING_32(korean_name)	TAG_REFL_USTRING_32(chinese_name)	TAG_REFL_USTRING_32(portuguese_name)	TAG_REFL_USTRING_128(english_description)	TAG_REFL_USTRING_128(japanese_description)	TAG_REFL_USTRING_128(german_description)	TAG_REFL_USTRING_128(french_description)	TAG_REFL_USTRING_128(spanish_description)	TAG_REFL_USTRING_128(italian_description)	TAG_REFL_USTRING_128(korean_description)	TAG_REFL_USTRING_128(chinese_description)	TAG_REFL_USTRING_128(portuguese_description)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_level_data_group_definition::s_multiplayer_block)	TAG_REFL_PROPERTY(map_id)	TAG_REFL_TAG_REFERENCE(bitmap)	TAG_REFL_USTRING_32(english_name)	TAG_REFL_USTRING_32(japanese_name)	TAG_REFL_USTRING_32(german_name)	TAG_REFL_USTRING_32(french_name)	TAG_REFL_USTRING_32(spanish_name)	TAG_REFL_USTRING_32(italian_name)	TAG_REFL_USTRING_32(korean_name)	TAG_REFL_USTRING_32(chinese_name)	TAG_REFL_USTRING_32(portuguese_name)	TAG_REFL_USTRING_128(english_description)	TAG_REFL_USTRING_128(japanese_description)	TAG_REFL_USTRING_128(german_description)	TAG_REFL_USTRING_128(french_description)	TAG_REFL_USTRING_128(spanish_description)	TAG_REFL_USTRING_128(italian_description)	TAG_REFL_USTRING_128(korean_description)	TAG_REFL_USTRING_128(chinese_description)	TAG_REFL_USTRING_128(portuguese_description)	TAG_REFL_STRING_256(path)	TAG_REFL_PROPERTY(sort_order)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(max_teams_none)	TAG_REFL_PROPERTY(max_teams_ctf)	TAG_REFL_PROPERTY(max_teams_slayer)	TAG_REFL_PROPERTY(max_teams_oddball)	TAG_REFL_PROPERTY(max_teams_koth)	TAG_REFL_PROPERTY(max_teams_race)	TAG_REFL_PROPERTY(max_teams_headhunter)	TAG_REFL_PROPERTY(max_teams_juggernaut)	TAG_REFL_PROPERTY(max_teams_territories)	TAG_REFL_PROPERTY(max_teams_assault)	TAG_REFL_PROPERTY(max_teams_stub_10)	TAG_REFL_PROPERTY(max_teams_stub_11)	TAG_REFL_PROPERTY(max_teams_stub_12)	TAG_REFL_PROPERTY(max_teams_stub_13)	TAG_REFL_PROPERTY(max_teams_stub_14)	TAG_REFL_PROPERTY(max_teams_stub_15)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_level_data_block)	TAG_REFL_TAG_REFERENCE(level_description)	TAG_REFL_TAG_BLOCK(campaign_level_data)	TAG_REFL_TAG_BLOCK(multiplayer)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_mission_dialogue_block)	TAG_REFL_TAG_REFERENCE(mission_dialogue)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_interpolators_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_STRING_ID(accelerator_name)	TAG_REFL_STRING_ID(multiplier_name)	TAG_REFL_DATA_BLOCK(function)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_screen_effect_references_block)	TAG_REFL_TAG_REFERENCE(screen_effect)	TAG_REFL_STRING_ID(primary_input)	TAG_REFL_STRING_ID(secondary_input)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_scenario_group_definition::s_simulation_definition_table_block)	TAG_REFL_TAG_REFERENCE(tag)REFL_END
TAG_REFL(s_scenario_group_definition)	TAG_REFL_TAG_REFERENCE(do_not_use)	TAG_REFL_TAG_BLOCK(skies)	TAG_REFL_PROPERTY(map_type)	TAG_REFL_PROPERTY(flags)	TAG_REFL_ANGLE(local_north)	TAG_REFL_TAG_BLOCK(predicted_resource)	TAG_REFL_DATA_BLOCK(editor_scenario_data)	TAG_REFL_TAG_BLOCK(comments)	TAG_REFL_TAG_BLOCK(object_names)	TAG_REFL_TAG_BLOCK(scenery)	TAG_REFL_TAG_BLOCK(scenery_palette)	TAG_REFL_TAG_BLOCK(bipeds)	TAG_REFL_TAG_BLOCK(biped_palette)	TAG_REFL_TAG_BLOCK(vehicles)	TAG_REFL_TAG_BLOCK(vehicle_palette)	TAG_REFL_TAG_BLOCK(equipment)	TAG_REFL_TAG_BLOCK(equipment_palette)	TAG_REFL_TAG_BLOCK(weapons)	TAG_REFL_TAG_BLOCK(weapon_palette)	TAG_REFL_TAG_BLOCK(device_groups)	TAG_REFL_TAG_BLOCK(machines)	TAG_REFL_TAG_BLOCK(machine_palette)	TAG_REFL_TAG_BLOCK(controls)	TAG_REFL_TAG_BLOCK(control_palette)	TAG_REFL_TAG_BLOCK(light_fixtures)	TAG_REFL_TAG_BLOCK(light_fixtures_palette)	TAG_REFL_TAG_BLOCK(sound_scenery)	TAG_REFL_TAG_BLOCK(sound_scenery_palette)	TAG_REFL_TAG_BLOCK(light_volumes)	TAG_REFL_TAG_BLOCK(light_volumes_palette)	TAG_REFL_TAG_BLOCK(player_starting_profile)	TAG_REFL_TAG_BLOCK(player_starting_locations)	TAG_REFL_TAG_BLOCK(trigger_volumes)	TAG_REFL_TAG_BLOCK(netgame_flags)	TAG_REFL_TAG_BLOCK(netgame_equipment)	TAG_REFL_TAG_BLOCK(starting_equipment)	TAG_REFL_TAG_BLOCK(bsp_switch_trigger_volumes)	TAG_REFL_TAG_BLOCK(decals)	TAG_REFL_TAG_BLOCK(decal_palette)	TAG_REFL_TAG_BLOCK(detail_object_collection_palette)	TAG_REFL_TAG_BLOCK(style_palette)	TAG_REFL_TAG_BLOCK(squad_groups)	TAG_REFL_TAG_BLOCK(squads)	TAG_REFL_TAG_BLOCK(zones)	TAG_REFL_TAG_BLOCK(mission_scenes)	TAG_REFL_TAG_BLOCK(character_palette)	TAG_REFL_DATA_BLOCK(script_syntax_data)	TAG_REFL_DATA_BLOCK(script_string_data)	TAG_REFL_TAG_BLOCK(scripts)	TAG_REFL_TAG_BLOCK(globals)	TAG_REFL_TAG_BLOCK(script_references)	TAG_REFL_TAG_BLOCK(scripting_data)	TAG_REFL_TAG_BLOCK(cutscene_flags)	TAG_REFL_TAG_BLOCK(cutscene_camera_points)	TAG_REFL_TAG_BLOCK(cutscene_titles)	TAG_REFL_TAG_REFERENCE(custom_object_names)	TAG_REFL_TAG_REFERENCE(chapter_title_text)	TAG_REFL_TAG_REFERENCE(hud_messages)	TAG_REFL_TAG_BLOCK(structure_bsps)	TAG_REFL_TAG_BLOCK(scenario_resources)	TAG_REFL_TAG_BLOCK(structure_physics)	TAG_REFL_TAG_BLOCK(unit_seats_mapping)	TAG_REFL_TAG_BLOCK(scenario_kill_triggers)	TAG_REFL_TAG_BLOCK(script_expressions)	TAG_REFL_TAG_BLOCK(orders)	TAG_REFL_TAG_BLOCK(ai_triggers)	TAG_REFL_TAG_BLOCK(background_sound_palette)	TAG_REFL_TAG_BLOCK(sound_environment_palette)	TAG_REFL_TAG_BLOCK(weather_palette)	TAG_REFL_TAG_BLOCK(scenario_cluster_data)	TAG_REFL_PROPERTY(object_salts_1)	TAG_REFL_PROPERTY(object_salts_2)	TAG_REFL_PROPERTY(object_salts_3)	TAG_REFL_PROPERTY(object_salts_4)	TAG_REFL_PROPERTY(object_salts_5)	TAG_REFL_PROPERTY(object_salts_6)	TAG_REFL_PROPERTY(object_salts_7)	TAG_REFL_PROPERTY(object_salts_8)	TAG_REFL_PROPERTY(object_salts_9)	TAG_REFL_PROPERTY(object_salts_10)	TAG_REFL_PROPERTY(object_salts_11)	TAG_REFL_PROPERTY(object_salts_12)	TAG_REFL_PROPERTY(object_salts_13)	TAG_REFL_PROPERTY(object_salts_14)	TAG_REFL_PROPERTY(object_salts_15)	TAG_REFL_PROPERTY(object_salts_16)	TAG_REFL_PROPERTY(object_salts_17)	TAG_REFL_PROPERTY(object_salts_18)	TAG_REFL_PROPERTY(object_salts_19)	TAG_REFL_PROPERTY(object_salts_20)	TAG_REFL_PROPERTY(object_salts_21)	TAG_REFL_PROPERTY(object_salts_22)	TAG_REFL_PROPERTY(object_salts_23)	TAG_REFL_PROPERTY(object_salts_24)	TAG_REFL_PROPERTY(object_salts_25)	TAG_REFL_PROPERTY(object_salts_26)	TAG_REFL_PROPERTY(object_salts_27)	TAG_REFL_PROPERTY(object_salts_28)	TAG_REFL_PROPERTY(object_salts_29)	TAG_REFL_PROPERTY(object_salts_30)	TAG_REFL_PROPERTY(object_salts_31)	TAG_REFL_PROPERTY(object_salts_32)	TAG_REFL_TAG_BLOCK(spawn_data)	TAG_REFL_TAG_REFERENCE(sound_effects_collection)	TAG_REFL_TAG_BLOCK(crates)	TAG_REFL_TAG_BLOCK(crate_palette)	TAG_REFL_TAG_REFERENCE(global_lighting)	TAG_REFL_TAG_BLOCK(atmospheric_fog_palette)	TAG_REFL_TAG_BLOCK(planar_fog_palette)	TAG_REFL_TAG_BLOCK(flocks)	TAG_REFL_TAG_REFERENCE(subtitles)	TAG_REFL_TAG_BLOCK(creature_palette)	TAG_REFL_TAG_BLOCK(decorator_palette)	TAG_REFL_TAG_BLOCK(bsp_transition_volumes)	TAG_REFL_TAG_BLOCK(structure_bsp_lighting)	TAG_REFL_TAG_BLOCK(editor_folders)	TAG_REFL_TAG_BLOCK(level_data)	TAG_REFL_TAG_REFERENCE(territory_location_names)	TAG_REFL_TAG_BLOCK(mission_dialogue)	TAG_REFL_TAG_REFERENCE(objectives)	TAG_REFL_TAG_BLOCK(interpolators)	TAG_REFL_TAG_BLOCK(screen_effect_references)	TAG_REFL_TAG_BLOCK(simulation_definition_table)REFL_END

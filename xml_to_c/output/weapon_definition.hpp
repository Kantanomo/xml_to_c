#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: weapon
		* group_tag : weap
 		* header size : 796
		* *********************************************************************/ 
struct s_weapon_group_definition
{
enum class e_object_type : __int16
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
e_object_type object_type;//0x0
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-2);//0x2
enum class e_flags : __int32
{
does_not_cast_shadow = FLAG(0),
search_cardinal_direction_lightmaps = FLAG(1),
bit_2 = FLAG(2),
not_a_pathfinding_obstacle = FLAG(3),
extension_of_parent = FLAG(4),
does_not_cause_collision_damage = FLAG(5),
early_mover = FLAG(6),
early_mover_localized_physics = FLAG(7),
use_static_massive_lightmap_sample = FLAG(8),
object_scales_attachments = FLAG(9),
inherits_players_appearance = FLAG(10),
dead_bipeds_cant_localize = FLAG(11),
attach_to_clusters_by_dynamic_sphere = FLAG(12),
effects_created_by_this_object_do_not_spawn_objects_in_multiplayer = FLAG(13),
};
e_flags flags;//0x0
float bounding_radius;//0x4
float bounding_offset_x;//0x8
float bounding_offset_y;//0xC
float bounding_offset_z;//0x10
float acceleration_scale;//0x14
enum class e_lightmap_shadow_mode : __int16
{
default = 0,
never = 1,
always = 2,
};
e_lightmap_shadow_mode lightmap_shadow_mode;//0x18
enum class e_sweetener_size : __int8
{
small = 0,
medium = 1,
large = 2,
};
e_sweetener_size sweetener_size;//0x1A
__int8 unknown;//0x1B
__int32 unknown;//0x1C
float dynamic_light_sphere_radius;//0x20
float dynamic_light_sphere_offset_x;//0x24
float dynamic_light_sphere_offset_y;//0x28
float dynamic_light_sphere_offset_z;//0x2C
string_id default_model_variant;//0x30
tag_reference model;//0x34
tag_reference crate_object;//0x3C
tag_reference modifier_shader;//0x44
tag_reference creation_effect;//0x4C
tag_reference material_effects;//0x54
struct s_ai_properties_block
{
enum class e_flags : __int32
{
destroyable_cover = FLAG(0),
pathfinding_ignore_when_dead = FLAG(1),
dynamic_cover = FLAG(2),
};
e_flags flags;//0x0
string_id ai_type_name;//0x4
PAD(0x4);//0x8
enum class e_size : __int16
{
default = 0,
tiny = 1,
small = 2,
medium = 3,
large = 4,
huge = 5,
immobile = 6,
};
e_size size;//0xC
enum class e_leap_jump_speed : __int16
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
e_leap_jump_speed leap_jump_speed;//0xE
};
TAG_BLOCK_SIZE_ASSERT(s_ai_properties_block,0x10);
tag_block<s_ai_properties_block> ai_properties;//0x5C
struct s_functions_block
{
enum class e_flags : __int32
{
invert = FLAG(0),
mapping_does_not_controls_active = FLAG(1),
always_active = FLAG(2),
random_time_offset = FLAG(3),
};
e_flags flags;//0x0
string_id import_name;//0x4
string_id export_name;//0x8
string_id turn_off_with;//0xC
float minimum_value;//0x10
data_block default_function;//0x14
string_id scale_by;//0x1C
};
TAG_BLOCK_SIZE_ASSERT(s_functions_block,0x20);
tag_block<s_functions_block> functions;//0x64
float apply_collision_damage_scale;//0x6C
float min_game_acceleration;//0x70
float max_game_acceleration;//0x74
float min_game_scale;//0x78
float max_game_scale;//0x7C
float min_absolute_acceleration;//0x80
float max_absolute_acceleration;//0x84
float min_absolute_scale;//0x88
float max_absolute_scale;//0x8C
__int16 hud_text_message_index;//0x90
__int16 unknown;//0x92
struct s_attachments_block
{
tag_reference type;//0x0
string_id marker;//0x8
enum class e_change_color : __int16
{
none = 0,
primary = 1,
secondary = 2,
tertiary = 3,
quaternary = 4,
};
e_change_color change_color;//0xC
__int16 unknown;//0xE
string_id primary_scale;//0x10
string_id secondary_scale;//0x14
};
TAG_BLOCK_SIZE_ASSERT(s_attachments_block,0x18);
tag_block<s_attachments_block> attachments;//0x94
struct s_widgets_block
{
tag_reference type;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_widgets_block,0x8);
tag_block<s_widgets_block> widgets;//0x9C
struct s_old_functions_block
{
PAD(0x50);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_old_functions_block,0x50);
tag_block<s_old_functions_block> old_functions;//0xA4
struct s_change_colors_block
{
struct s_initial_permutations_block
{
float weight;//0x0
real_color_rgb color_lower_bound;//0x4
real_color_rgb color_upper_bound;//0x10
string_id variant_name;//0x1C
};
TAG_BLOCK_SIZE_ASSERT(s_initial_permutations_block,0x20);
tag_block<s_initial_permutations_block> initial_permutations;//0x0
struct s_functions_block
{
enum class e_scale_flags : __int32
{
blend_in_hsv = FLAG(0),
more_colors = FLAG(1),
};
e_scale_flags scale_flags;//0x0
real_color_rgb color_lower_bound;//0x4
real_color_rgb color_upper_bound;//0x10
string_id darken_by;//0x1C
string_id scale_by;//0x20
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-4);//0x24
};
TAG_BLOCK_SIZE_ASSERT(s_functions_block,0x20);
tag_block<s_functions_block> functions;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_change_colors_block,0x10);
tag_block<s_change_colors_block> change_colors;//0xAC
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
tag_block<s_predicted_resource_block> predicted_resource;//0xB4
enum class e_flags : __int32
{
always_maintains_z_up = FLAG(0),
destroyed_by_explosions = FLAG(1),
unaffected_by_gravity = FLAG(2),
};
e_flags flags;//0xBC
__int16 old_message_index;//0xC0
__int16 sort_order;//0xC2
float multiplayer_onground_scale;//0xC4
float campaign_onground_scale;//0xC8
string_id pickup_message;//0xCC
string_id swap_message;//0xD0
string_id pickup_or_dual_wield_message;//0xD4
string_id swap_or_dual_wield_message;//0xD8
string_id dual_wield_only_message;//0xDC
string_id picked_up_message;//0xE0
string_id singular_quantity_message;//0xE4
string_id plural_quantity_message;//0xE8
string_id switchto_message;//0xEC
string_id switchto_from_ai_message;//0xF0
tag_reference unused;//0xF4
tag_reference collision_sound;//0xFC
struct s_predicted_bitmaps_block
{
tag_reference bitmap;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_predicted_bitmaps_block,0x8);
tag_block<s_predicted_bitmaps_block> predicted_bitmaps;//0x104
tag_reference detonation_damage_effect;//0x10C
float detonation_delay_min;//0x114
float detonation_delay_max;//0x118
tag_reference deonating_effect;//0x11C
tag_reference detonation_effect;//0x124
enum class e_flags : __int32
{
vertical_heat_display = FLAG(0),
mutually_exclusive_triggers = FLAG(1),
attacks_automatically_on_bump = FLAG(2),
must_be_readied = FLAG(3),
doesnt_count_towards_maximum = FLAG(4),
aim_assists_only_when_zoomed = FLAG(5),
prevents_grenade_throwing = FLAG(6),
must_be_picked_up = FLAG(7),
holds_triggers_when_dropped = FLAG(8),
prevents_melee_attack = FLAG(9),
detonates_when_dropped = FLAG(10),
cannot_fire_at_maximum_age = FLAG(11),
secondary_trigger_overrides_grenades = FLAG(12),
does_not_depower_active_camo_in_multiplayer = FLAG(13),
enables_integrated_night_vision = FLAG(14),
ais_use_weapon_melee_damage = FLAG(15),
forces_no_binoculars = FLAG(16),
loop_fp_firing_animation = FLAG(17),
prevents_sprinting = FLAG(18),
cannot_fire_while_boosting = FLAG(19),
prevents_driving = FLAG(20),
prevents_gunning = FLAG(21),
can_be_dual_wielded = FLAG(22),
can_only_be_dual_wielded = FLAG(23),
melee_only = FLAG(24),
cant_fire_if_parent_dead = FLAG(25),
weapon_ages_with_each_kill = FLAG(26),
weapon_uses_old_dual_fire_error_code = FLAG(27),
primary_trigger_melee_attacks = FLAG(28),
cannot_be_used_by_player = FLAG(29),
};
e_flags flags;//0x12C
string_id unknown;//0x130
enum class e_secondary_trigger_mode : __int16
{
normal = 0,
slaved_to_primary = 1,
inhibits_primary = 2,
loads_alternate_ammunition = 3,
loads_multiple_primary_ammunition = 4,
};
e_secondary_trigger_mode secondary_trigger_mode;//0x134
__int16 maximum_alternate_shots_loaded;//0x136
float turn_on_time;//0x138
float ready_time;//0x13C
tag_reference ready_effect;//0x140
tag_reference ready_damage_effect;//0x148
float heat_recovery_threshold;//0x150
float overheated_threshold;//0x154
float heat_detonation_threshold;//0x158
float heat_detonation_fraction;//0x15C
float heat_loss_per_second;//0x160
float heat_illumination;//0x164
float overheated_heat_loss_per_second;//0x168
tag_reference overheated;//0x16C
tag_reference overheated_damage_effect;//0x174
tag_reference detonation;//0x17C
tag_reference detonation_damage_effect;//0x184
tag_reference player_melee_damage;//0x18C
tag_reference player_melee_response;//0x194
angle magnetism_angle;//0x19C
float magnetism_range;//0x1A0
float throttle_magnitude;//0x1A4
float throttle_minimum_distance;//0x1A8
angle throttle_maximum_adjustment_angle;//0x1AC
angle damage_pyramid_angles_y;//0x1B0
angle damage_pyramid_angles_p;//0x1B4
float damage_pyramid_depth;//0x1B8
tag_reference NUM_1st_hit_melee_damage;//0x1BC
tag_reference NUM_1st_hit_melee_response;//0x1C4
tag_reference NUM_2nd_hit_melee_damage;//0x1CC
tag_reference NUM_2nd_hit_melee_response;//0x1D4
tag_reference NUM_3rd_hit_melee_damage;//0x1DC
tag_reference NUM_3rd_hit_melee_response;//0x1E4
tag_reference lunge_melee_damage;//0x1EC
tag_reference lunge_melee_response;//0x1F4
enum class e_melee_damage_reporting_type : __int8
{
guardians = 0,
falling_damage = 1,
collision_damage = 2,
melee_damage = 3,
explosion = 4,
magnum_pistol = 5,
plasma_pistol = 6,
needler = 7,
smg = 8,
plasma_rifle = 9,
battle_rifle = 10,
carbine = 11,
shotgun = 12,
sniper_rifle = 13,
beam_rifle = 14,
rocket_launcher = 15,
flak_cannon = 16,
brute_shot = 17,
disintegrator = 18,
brute_plasma_rifle = 19,
energy_sword = 20,
frag_grenade = 21,
plasma_grenade = 22,
flag_melee_damage = 23,
bomb_melee_damage = 24,
bomb_explosion_damage = 25,
ball_melee_damage = 26,
human_turret = 27,
plasma_turret = 28,
banshee = 29,
ghost = 30,
mongoose = 31,
scorpion = 32,
spectre_driver = 33,
spectre_gunner = 34,
warthog_driver = 35,
warthog_gunner = 36,
wraith = 37,
tank = 38,
sentinel_beam = 39,
sentinel_rpg = 40,
teleporter = 41,
};
e_melee_damage_reporting_type melee_damage_reporting_type;//0x1FC
__int8 unknown;//0x1FD
__int16 magnification_levels;//0x1FE
float magnification_range_min;//0x200
float magnification_range_max;//0x204
angle autoaim_angle;//0x208
float autoaim_range;//0x20C
angle magnetism_angle;//0x210
float magnetism_range;//0x214
angle deviation_angle;//0x218
PAD(0x10);//0x21C
enum class e_movement_penalized : __int16
{
always = 0,
when_zoomed = 1,
when_zoomed_or_reloading = 2,
};
e_movement_penalized movement_penalized;//0x22C
__int16 unknown;//0x22E
float forwards_movement_penalty;//0x230
float sideways_movement_penalty;//0x234
float ai_scariness;//0x238
float weapon_poweron_time;//0x23C
float weapon_poweroff_time;//0x240
tag_reference weapon_poweron_effect;//0x244
tag_reference weapon_poweroff_effect;//0x24C
float age_heat_recovery_penalty;//0x254
float age_rate_of_fire_penalty;//0x258
float age_misfire_start;//0x25C
float age_misfire_chance;//0x260
tag_reference pickup_sound;//0x264
tag_reference zoomin_sound;//0x26C
tag_reference zoomout_sound;//0x274
float active_camo_ding;//0x27C
float active_camo_regrowth_rate;//0x280
string_id handle_node;//0x284
string_id weapon_class;//0x288
string_id weapon_name;//0x28C
enum class e_multiplayer_weapon_type : __int16
{
none = 0,
ctf_flag = 1,
oddball_ball = 2,
headhunter_head = 3,
juggernaut_powerup = 4,
};
e_multiplayer_weapon_type multiplayer_weapon_type;//0x290
enum class e_weapon_type : __int16
{
undefined = 0,
shotgun = 1,
needler = 2,
plasma_pistol = 3,
plasma_rifle = 4,
rocket_launcher = 5,
};
e_weapon_type weapon_type;//0x292
enum class e_tracking_type : __int16
{
no_tracking = 0,
human_tracking = 1,
plasma_tracking = 2,
};
e_tracking_type tracking_type;//0x294
__int16 unknown;//0x296
PAD(0x10);//0x298
struct s_first_person_block
{
tag_reference first_person_model;//0x0
tag_reference first_person_animations;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_first_person_block,0x10);
tag_block<s_first_person_block> first_person;//0x2A8
tag_reference new_hud_interface;//0x2B0
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
tag_block<s_predicted_resource_block> predicted_resource;//0x2B8
struct s_magazines_block
{
enum class e_flags : __int32
{
wastes_rounds_when_reloaded = FLAG(1),
every_round_must_be_chambered = FLAG(2),
};
e_flags flags;//0x0
__int16 rounds_recharged;//0x4
__int16 rounds_total_initial;//0x6
__int16 rounds_total_maximum;//0x8
__int16 rounds_total_loaded_maximum;//0xA
__int16 maximum_rounds_held;//0xC
__int16 unknown;//0xE
float reload_time;//0x10
__int16 rounds_reloaded;//0x14
__int16 unknown;//0x16
float chamber_time;//0x18
PAD(0x18);//0x1C
tag_reference reloading_effect;//0x34
tag_reference reloading_damage_effect;//0x3C
tag_reference chambering_effect;//0x44
tag_reference chambering_damage_effect;//0x4C
struct s_magazine_equipment_block
{
__int16 rounds_0_for_max;//0x0
__int16 unknown;//0x2
tag_reference equipment;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_magazine_equipment_block,0xC);
tag_block<s_magazine_equipment_block> magazine_equipment;//0x54
};
TAG_BLOCK_SIZE_ASSERT(s_magazines_block,0x5C);
tag_block<s_magazines_block> magazines;//0x2C0
struct s_new_triggers_block
{
enum class e_flags : __int32
{
autofire_single_action_only = FLAG(0),
};
e_flags flags;//0x0
enum class e_button_used : __int16
{
right_trigger = 0,
left_trigger = 1,
melee_attack = 2,
automated_fire = 3,
};
e_button_used button_used;//0x4
enum class e_behavior : __int16
{
spew = 0,
latch = 1,
latchautofire = 2,
charge = 3,
latchzoom = 4,
latchrocketlauncher = 5,
};
e_behavior behavior;//0x6
__int16 primary_barrel;//0x8
__int16 secondary_barrel;//0xA
enum class e_prediction : __int16
{
none = 0,
spew = 1,
charge = 2,
};
e_prediction prediction;//0xC
__int16 unknown;//0xE
float autofire_time;//0x10
float autofire_throw;//0x14
enum class e_secondary_action : __int16
{
fire = 0,
charge = 1,
track = 2,
fire_other = 3,
};
e_secondary_action secondary_action;//0x18
enum class e_primary_action : __int16
{
fire = 0,
charge = 1,
track = 2,
fire_other = 3,
};
e_primary_action primary_action;//0x1A
float charging_time;//0x1C
float charged_time;//0x20
enum class e_overcharged_action : __int16
{
none = 0,
explode = 1,
discharge = 2,
};
e_overcharged_action overcharged_action;//0x24
__int16 unknown;//0x26
float charged_illumination;//0x28
float spew_time;//0x2C
tag_reference charging_effect;//0x30
tag_reference charging_damage_effect;//0x38
};
TAG_BLOCK_SIZE_ASSERT(s_new_triggers_block,0x40);
tag_block<s_new_triggers_block> new_triggers;//0x2C8
struct s_barrels_block
{
enum class e_flags : __int32
{
tracks_fired_projectile = FLAG(0),
random_firing_effects = FLAG(1),
can_fire_with_partial_ammo = FLAG(2),
projectiles_use_weapon_origin = FLAG(3),
ejects_during_chamber = FLAG(4),
use_error_when_unzoomed = FLAG(5),
projectile_vector_cannot_be_adjusted = FLAG(6),
projectiles_have_identical_error = FLAG(7),
projectiles_fire_parallel = FLAG(8),
cant_fire_when_others_firing = FLAG(9),
cant_fire_when_others_recovering = FLAG(10),
dont_clear_fire_bit_after_recovering = FLAG(11),
stagger_fire_across_multiple_markers = FLAG(12),
fires_locked_projectiles = FLAG(13),
};
e_flags flags;//0x0
float rounds_per_second_min;//0x4
float rounds_per_second_max;//0x8
float acceleration_time;//0xC
float deceleration_time;//0x10
float barrel_spin_scale;//0x14
float blurred_rate_of_fire;//0x18
__int16 shots_per_fire_min;//0x1C
__int16 shots_per_fire_max;//0x1E
float fire_recovery_time;//0x20
float soft_recovery_fraction;//0x24
__int16 magazine;//0x28
__int16 rounds_per_shot;//0x2A
__int16 minimum_rounds_loaded;//0x2C
__int16 rounds_between_tracers;//0x2E
string_id optional_barrel_marker_name;//0x30
enum class e_prediction_type : __int16
{
none = 0,
continuous = 1,
instant = 2,
};
e_prediction_type prediction_type;//0x34
enum class e_firing_noise : __int16
{
silent = 0,
medium = 1,
loud = 2,
shout = 3,
quiet = 4,
};
e_firing_noise firing_noise;//0x36
float acceleration_time;//0x38
float deceleration_time;//0x3C
float damage_error_min;//0x40
float damage_error_max;//0x44
float acceleration_time;//0x48
float deceleration_time;//0x4C
float unknown;//0x50
float unknown;//0x54
angle minimum_error;//0x58
angle error_angle_min;//0x5C
angle error_angle_max;//0x60
float dual_wield_damage_scale;//0x64
enum class e_distribution_function : __int16
{
point = 0,
horizontal_fan = 1,
};
e_distribution_function distribution_function;//0x68
__int16 projectiles_per_shot;//0x6A
angle distribution_angle;//0x6C
float minimum_error;//0x70
angle error_angle_min;//0x74
angle error_angle_max;//0x78
float first_person_offset_x;//0x7C
float first_person_offset_y;//0x80
float first_person_offset_z;//0x84
enum class e_damage_reporting_type : __int8
{
guardians = 0,
falling_damage = 1,
collision_damage = 2,
melee_damage = 3,
explosion = 4,
magnum_pistol = 5,
plasma_pistol = 6,
needler = 7,
smg = 8,
plasma_rifle = 9,
battle_rifle = 10,
carbine = 11,
shotgun = 12,
sniper_rifle = 13,
beam_rifle = 14,
rocket_launcher = 15,
flak_cannon = 16,
brute_shot = 17,
disintegrator = 18,
brute_plasma_rifle = 19,
energy_sword = 20,
frag_grenade = 21,
plasma_grenade = 22,
flag_melee_damage = 23,
bomb_melee_damage = 24,
bomb_explosion_damage = 25,
ball_melee_damage = 26,
human_turret = 27,
plasma_turret = 28,
banshee = 29,
ghost = 30,
mongoose = 31,
scorpion = 32,
spectre_driver = 33,
spectre_gunner = 34,
warthog_driver = 35,
warthog_gunner = 36,
wraith = 37,
tank = 38,
sentinel_beam = 39,
sentinel_rpg = 40,
teleporter = 41,
};
e_damage_reporting_type damage_reporting_type;//0x88
__int8 unknown;//0x89
__int16 unknown;//0x8A
tag_reference projectile;//0x8C
tag_reference damage_effect;//0x94
float ejection_port_recovery_time;//0x9C
float illumination_recovery_time;//0xA0
float heat_generated_per_round;//0xA4
float age_generated_per_round;//0xA8
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-4);//0xAC
float overload_time;//0xA8
PAD(0x4);//0xAC
angle angle_change_per_shot_min;//0xB0
angle angle_change_per_shot_max;//0xB4
float angle_change_acceleration_time;//0xB8
float angle_change_deceleration_time;//0xBC
enum class e_angle_change_function : __int16
{
linear = 0,
early = 1,
very_early = 2,
late = 3,
very_late = 4,
cosine = 5,
zero = 6,
one = 7,
};
e_angle_change_function angle_change_function;//0xC0
__int16 unknown;//0xC2
float unknown;//0xC4
float unknown;//0xC8
float firing_effect_deceleration_time;//0xCC
float unknown;//0xD0
float rate_of_fire_acceleration_time;//0xD4
float rate_of_fire_deceleration_time;//0xD8
float unknown;//0xDC
float unknown;//0xE0
struct s_firing_effects_block
{
__int16 shot_count_lower_bound;//0x0
__int16 shot_count_upper_bound;//0x2
tag_reference firing_effect;//0x4
tag_reference misfire_effect;//0xC
tag_reference empty_effect;//0x14
tag_reference firing_damage;//0x1C
tag_reference misfire_damage;//0x24
tag_reference empty_damage;//0x2C
};
TAG_BLOCK_SIZE_ASSERT(s_firing_effects_block,0x34);
tag_block<s_firing_effects_block> firing_effects;//0xE4
};
TAG_BLOCK_SIZE_ASSERT(s_barrels_block,0xEC);
tag_block<s_barrels_block> barrels;//0x2D0
float unknown;//0x2D8
float unknown;//0x2DC
float maximum_movement_acceleration;//0x2E0
float maximum_movement_velocity;//0x2E4
float maximum_turning_acceleration;//0x2E8
float maximum_turning_velocity;//0x2EC
tag_reference deployed_vehicle;//0x2F0
tag_reference age_effect;//0x2F8
tag_reference aged_weapon;//0x300
float first_person_weapon_offset_i;//0x308
float first_person_weapon_offset_j;//0x30C
float first_person_weapon_offset_k;//0x310
float first_person_scope_size_i;//0x314
float first_person_scope_size_j;//0x318
};
TAG_GROUP_SIZE_ASSERT(s_weapon_group_definition,0x31C);
TAG_REFL(s_weapon_group_definition)
	TAG_REFL_PROPERTY(object_type)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(bounding_radius)
	TAG_REFL_PROPERTY(bounding_offset_x)
	TAG_REFL_PROPERTY(bounding_offset_y)
	TAG_REFL_PROPERTY(bounding_offset_z)
	TAG_REFL_PROPERTY(acceleration_scale)
	TAG_REFL_PROPERTY(lightmap_shadow_mode)
	TAG_REFL_PROPERTY(sweetener_size)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(dynamic_light_sphere_radius)
	TAG_REFL_PROPERTY(dynamic_light_sphere_offset_x)
	TAG_REFL_PROPERTY(dynamic_light_sphere_offset_y)
	TAG_REFL_PROPERTY(dynamic_light_sphere_offset_z)
	TAG_REFL_STRING_ID(default_model_variant)
	TAG_REFL_TAG_REFERENCE(model)
	TAG_REFL_TAG_REFERENCE(crate_object)
	TAG_REFL_TAG_REFERENCE(modifier_shader)
	TAG_REFL_TAG_REFERENCE(creation_effect)
	TAG_REFL_TAG_REFERENCE(material_effects)
TAG_REFL_TAG_BLOCK_DEF(s_ai_properties_block)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_STRING_ID(ai_type_name)
	TAG_REFL_PROPERTY(size)
	TAG_REFL_PROPERTY(leap_jump_speed)
REFL_END
	TAG_REFL_TAG_BLOCK(ai_properties)
TAG_REFL_TAG_BLOCK_DEF(s_functions_block)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_STRING_ID(import_name)
	TAG_REFL_STRING_ID(export_name)
	TAG_REFL_STRING_ID(turn_off_with)
	TAG_REFL_PROPERTY(minimum_value)
	TAG_REFL_DATA_BLOCK(default_function)
	TAG_REFL_STRING_ID(scale_by)
REFL_END
	TAG_REFL_TAG_BLOCK(functions)
	TAG_REFL_PROPERTY(apply_collision_damage_scale)
	TAG_REFL_PROPERTY(min_game_acceleration)
	TAG_REFL_PROPERTY(max_game_acceleration)
	TAG_REFL_PROPERTY(min_game_scale)
	TAG_REFL_PROPERTY(max_game_scale)
	TAG_REFL_PROPERTY(min_absolute_acceleration)
	TAG_REFL_PROPERTY(max_absolute_acceleration)
	TAG_REFL_PROPERTY(min_absolute_scale)
	TAG_REFL_PROPERTY(max_absolute_scale)
	TAG_REFL_PROPERTY(hud_text_message_index)
	TAG_REFL_PROPERTY(unknown)
TAG_REFL_TAG_BLOCK_DEF(s_attachments_block)
	TAG_REFL_TAG_REFERENCE(type)
	TAG_REFL_STRING_ID(marker)
	TAG_REFL_PROPERTY(change_color)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_STRING_ID(primary_scale)
	TAG_REFL_STRING_ID(secondary_scale)
REFL_END
	TAG_REFL_TAG_BLOCK(attachments)
TAG_REFL_TAG_BLOCK_DEF(s_widgets_block)
	TAG_REFL_TAG_REFERENCE(type)
REFL_END
	TAG_REFL_TAG_BLOCK(widgets)
TAG_REFL_TAG_BLOCK_DEF(s_old_functions_block)
REFL_END
	TAG_REFL_TAG_BLOCK(old_functions)
TAG_REFL_TAG_BLOCK_DEF(s_change_colors_block)
TAG_REFL_TAG_BLOCK_DEF(s_initial_permutations_block)
	TAG_REFL_PROPERTY(weight)
	TAG_REFL_REAL_COLOR_RGB(color_lower_bound)
	TAG_REFL_REAL_COLOR_RGB(color_upper_bound)
	TAG_REFL_STRING_ID(variant_name)
REFL_END
	TAG_REFL_TAG_BLOCK(initial_permutations)
TAG_REFL_TAG_BLOCK_DEF(s_functions_block)
	TAG_REFL_PROPERTY(scale_flags)
	TAG_REFL_REAL_COLOR_RGB(color_lower_bound)
	TAG_REFL_REAL_COLOR_RGB(color_upper_bound)
	TAG_REFL_STRING_ID(darken_by)
	TAG_REFL_STRING_ID(scale_by)
REFL_END
	TAG_REFL_TAG_BLOCK(functions)
REFL_END
	TAG_REFL_TAG_BLOCK(change_colors)
TAG_REFL_TAG_BLOCK_DEF(s_predicted_resource_block)
	TAG_REFL_PROPERTY(type)
	TAG_REFL_PROPERTY(resource_index)
	TAG_REFL_TAG_REFERENCE(tag_index)
REFL_END
	TAG_REFL_TAG_BLOCK(predicted_resource)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(old_message_index)
	TAG_REFL_PROPERTY(sort_order)
	TAG_REFL_PROPERTY(multiplayer_onground_scale)
	TAG_REFL_PROPERTY(campaign_onground_scale)
	TAG_REFL_STRING_ID(pickup_message)
	TAG_REFL_STRING_ID(swap_message)
	TAG_REFL_STRING_ID(pickup_or_dual_wield_message)
	TAG_REFL_STRING_ID(swap_or_dual_wield_message)
	TAG_REFL_STRING_ID(dual_wield_only_message)
	TAG_REFL_STRING_ID(picked_up_message)
	TAG_REFL_STRING_ID(singular_quantity_message)
	TAG_REFL_STRING_ID(plural_quantity_message)
	TAG_REFL_STRING_ID(switchto_message)
	TAG_REFL_STRING_ID(switchto_from_ai_message)
	TAG_REFL_TAG_REFERENCE(unused)
	TAG_REFL_TAG_REFERENCE(collision_sound)
TAG_REFL_TAG_BLOCK_DEF(s_predicted_bitmaps_block)
	TAG_REFL_TAG_REFERENCE(bitmap)
REFL_END
	TAG_REFL_TAG_BLOCK(predicted_bitmaps)
	TAG_REFL_TAG_REFERENCE(detonation_damage_effect)
	TAG_REFL_PROPERTY(detonation_delay_min)
	TAG_REFL_PROPERTY(detonation_delay_max)
	TAG_REFL_TAG_REFERENCE(deonating_effect)
	TAG_REFL_TAG_REFERENCE(detonation_effect)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_STRING_ID(unknown)
	TAG_REFL_PROPERTY(secondary_trigger_mode)
	TAG_REFL_PROPERTY(maximum_alternate_shots_loaded)
	TAG_REFL_PROPERTY(turn_on_time)
	TAG_REFL_PROPERTY(ready_time)
	TAG_REFL_TAG_REFERENCE(ready_effect)
	TAG_REFL_TAG_REFERENCE(ready_damage_effect)
	TAG_REFL_PROPERTY(heat_recovery_threshold)
	TAG_REFL_PROPERTY(overheated_threshold)
	TAG_REFL_PROPERTY(heat_detonation_threshold)
	TAG_REFL_PROPERTY(heat_detonation_fraction)
	TAG_REFL_PROPERTY(heat_loss_per_second)
	TAG_REFL_PROPERTY(heat_illumination)
	TAG_REFL_PROPERTY(overheated_heat_loss_per_second)
	TAG_REFL_TAG_REFERENCE(overheated)
	TAG_REFL_TAG_REFERENCE(overheated_damage_effect)
	TAG_REFL_TAG_REFERENCE(detonation)
	TAG_REFL_TAG_REFERENCE(detonation_damage_effect)
	TAG_REFL_TAG_REFERENCE(player_melee_damage)
	TAG_REFL_TAG_REFERENCE(player_melee_response)
	TAG_REFL_ANGLE(magnetism_angle)
	TAG_REFL_PROPERTY(magnetism_range)
	TAG_REFL_PROPERTY(throttle_magnitude)
	TAG_REFL_PROPERTY(throttle_minimum_distance)
	TAG_REFL_ANGLE(throttle_maximum_adjustment_angle)
	TAG_REFL_ANGLE(damage_pyramid_angles_y)
	TAG_REFL_ANGLE(damage_pyramid_angles_p)
	TAG_REFL_PROPERTY(damage_pyramid_depth)
	TAG_REFL_TAG_REFERENCE(NUM_1st_hit_melee_damage)
	TAG_REFL_TAG_REFERENCE(NUM_1st_hit_melee_response)
	TAG_REFL_TAG_REFERENCE(NUM_2nd_hit_melee_damage)
	TAG_REFL_TAG_REFERENCE(NUM_2nd_hit_melee_response)
	TAG_REFL_TAG_REFERENCE(NUM_3rd_hit_melee_damage)
	TAG_REFL_TAG_REFERENCE(NUM_3rd_hit_melee_response)
	TAG_REFL_TAG_REFERENCE(lunge_melee_damage)
	TAG_REFL_TAG_REFERENCE(lunge_melee_response)
	TAG_REFL_PROPERTY(melee_damage_reporting_type)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(magnification_levels)
	TAG_REFL_PROPERTY(magnification_range_min)
	TAG_REFL_PROPERTY(magnification_range_max)
	TAG_REFL_ANGLE(autoaim_angle)
	TAG_REFL_PROPERTY(autoaim_range)
	TAG_REFL_ANGLE(magnetism_angle)
	TAG_REFL_PROPERTY(magnetism_range)
	TAG_REFL_ANGLE(deviation_angle)
	TAG_REFL_PROPERTY(movement_penalized)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(forwards_movement_penalty)
	TAG_REFL_PROPERTY(sideways_movement_penalty)
	TAG_REFL_PROPERTY(ai_scariness)
	TAG_REFL_PROPERTY(weapon_poweron_time)
	TAG_REFL_PROPERTY(weapon_poweroff_time)
	TAG_REFL_TAG_REFERENCE(weapon_poweron_effect)
	TAG_REFL_TAG_REFERENCE(weapon_poweroff_effect)
	TAG_REFL_PROPERTY(age_heat_recovery_penalty)
	TAG_REFL_PROPERTY(age_rate_of_fire_penalty)
	TAG_REFL_PROPERTY(age_misfire_start)
	TAG_REFL_PROPERTY(age_misfire_chance)
	TAG_REFL_TAG_REFERENCE(pickup_sound)
	TAG_REFL_TAG_REFERENCE(zoomin_sound)
	TAG_REFL_TAG_REFERENCE(zoomout_sound)
	TAG_REFL_PROPERTY(active_camo_ding)
	TAG_REFL_PROPERTY(active_camo_regrowth_rate)
	TAG_REFL_STRING_ID(handle_node)
	TAG_REFL_STRING_ID(weapon_class)
	TAG_REFL_STRING_ID(weapon_name)
	TAG_REFL_PROPERTY(multiplayer_weapon_type)
	TAG_REFL_PROPERTY(weapon_type)
	TAG_REFL_PROPERTY(tracking_type)
	TAG_REFL_PROPERTY(unknown)
TAG_REFL_TAG_BLOCK_DEF(s_first_person_block)
	TAG_REFL_TAG_REFERENCE(first_person_model)
	TAG_REFL_TAG_REFERENCE(first_person_animations)
REFL_END
	TAG_REFL_TAG_BLOCK(first_person)
	TAG_REFL_TAG_REFERENCE(new_hud_interface)
TAG_REFL_TAG_BLOCK_DEF(s_predicted_resource_block)
	TAG_REFL_PROPERTY(type)
	TAG_REFL_PROPERTY(resource_index)
	TAG_REFL_TAG_REFERENCE(tag_index)
REFL_END
	TAG_REFL_TAG_BLOCK(predicted_resource)
TAG_REFL_TAG_BLOCK_DEF(s_magazines_block)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(rounds_recharged)
	TAG_REFL_PROPERTY(rounds_total_initial)
	TAG_REFL_PROPERTY(rounds_total_maximum)
	TAG_REFL_PROPERTY(rounds_total_loaded_maximum)
	TAG_REFL_PROPERTY(maximum_rounds_held)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(reload_time)
	TAG_REFL_PROPERTY(rounds_reloaded)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(chamber_time)
	TAG_REFL_TAG_REFERENCE(reloading_effect)
	TAG_REFL_TAG_REFERENCE(reloading_damage_effect)
	TAG_REFL_TAG_REFERENCE(chambering_effect)
	TAG_REFL_TAG_REFERENCE(chambering_damage_effect)
TAG_REFL_TAG_BLOCK_DEF(s_magazine_equipment_block)
	TAG_REFL_PROPERTY(rounds_0_for_max)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_TAG_REFERENCE(equipment)
REFL_END
	TAG_REFL_TAG_BLOCK(magazine_equipment)
REFL_END
	TAG_REFL_TAG_BLOCK(magazines)
TAG_REFL_TAG_BLOCK_DEF(s_new_triggers_block)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(button_used)
	TAG_REFL_PROPERTY(behavior)
	TAG_REFL_PROPERTY(primary_barrel)
	TAG_REFL_PROPERTY(secondary_barrel)
	TAG_REFL_PROPERTY(prediction)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(autofire_time)
	TAG_REFL_PROPERTY(autofire_throw)
	TAG_REFL_PROPERTY(secondary_action)
	TAG_REFL_PROPERTY(primary_action)
	TAG_REFL_PROPERTY(charging_time)
	TAG_REFL_PROPERTY(charged_time)
	TAG_REFL_PROPERTY(overcharged_action)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(charged_illumination)
	TAG_REFL_PROPERTY(spew_time)
	TAG_REFL_TAG_REFERENCE(charging_effect)
	TAG_REFL_TAG_REFERENCE(charging_damage_effect)
REFL_END
	TAG_REFL_TAG_BLOCK(new_triggers)
TAG_REFL_TAG_BLOCK_DEF(s_barrels_block)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(rounds_per_second_min)
	TAG_REFL_PROPERTY(rounds_per_second_max)
	TAG_REFL_PROPERTY(acceleration_time)
	TAG_REFL_PROPERTY(deceleration_time)
	TAG_REFL_PROPERTY(barrel_spin_scale)
	TAG_REFL_PROPERTY(blurred_rate_of_fire)
	TAG_REFL_PROPERTY(shots_per_fire_min)
	TAG_REFL_PROPERTY(shots_per_fire_max)
	TAG_REFL_PROPERTY(fire_recovery_time)
	TAG_REFL_PROPERTY(soft_recovery_fraction)
	TAG_REFL_PROPERTY(magazine)
	TAG_REFL_PROPERTY(rounds_per_shot)
	TAG_REFL_PROPERTY(minimum_rounds_loaded)
	TAG_REFL_PROPERTY(rounds_between_tracers)
	TAG_REFL_STRING_ID(optional_barrel_marker_name)
	TAG_REFL_PROPERTY(prediction_type)
	TAG_REFL_PROPERTY(firing_noise)
	TAG_REFL_PROPERTY(acceleration_time)
	TAG_REFL_PROPERTY(deceleration_time)
	TAG_REFL_PROPERTY(damage_error_min)
	TAG_REFL_PROPERTY(damage_error_max)
	TAG_REFL_PROPERTY(acceleration_time)
	TAG_REFL_PROPERTY(deceleration_time)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_ANGLE(minimum_error)
	TAG_REFL_ANGLE(error_angle_min)
	TAG_REFL_ANGLE(error_angle_max)
	TAG_REFL_PROPERTY(dual_wield_damage_scale)
	TAG_REFL_PROPERTY(distribution_function)
	TAG_REFL_PROPERTY(projectiles_per_shot)
	TAG_REFL_ANGLE(distribution_angle)
	TAG_REFL_PROPERTY(minimum_error)
	TAG_REFL_ANGLE(error_angle_min)
	TAG_REFL_ANGLE(error_angle_max)
	TAG_REFL_PROPERTY(first_person_offset_x)
	TAG_REFL_PROPERTY(first_person_offset_y)
	TAG_REFL_PROPERTY(first_person_offset_z)
	TAG_REFL_PROPERTY(damage_reporting_type)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_TAG_REFERENCE(projectile)
	TAG_REFL_TAG_REFERENCE(damage_effect)
	TAG_REFL_PROPERTY(ejection_port_recovery_time)
	TAG_REFL_PROPERTY(illumination_recovery_time)
	TAG_REFL_PROPERTY(heat_generated_per_round)
	TAG_REFL_PROPERTY(age_generated_per_round)
	TAG_REFL_PROPERTY(overload_time)
	TAG_REFL_ANGLE(angle_change_per_shot_min)
	TAG_REFL_ANGLE(angle_change_per_shot_max)
	TAG_REFL_PROPERTY(angle_change_acceleration_time)
	TAG_REFL_PROPERTY(angle_change_deceleration_time)
	TAG_REFL_PROPERTY(angle_change_function)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(firing_effect_deceleration_time)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(rate_of_fire_acceleration_time)
	TAG_REFL_PROPERTY(rate_of_fire_deceleration_time)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
TAG_REFL_TAG_BLOCK_DEF(s_firing_effects_block)
	TAG_REFL_PROPERTY(shot_count_lower_bound)
	TAG_REFL_PROPERTY(shot_count_upper_bound)
	TAG_REFL_TAG_REFERENCE(firing_effect)
	TAG_REFL_TAG_REFERENCE(misfire_effect)
	TAG_REFL_TAG_REFERENCE(empty_effect)
	TAG_REFL_TAG_REFERENCE(firing_damage)
	TAG_REFL_TAG_REFERENCE(misfire_damage)
	TAG_REFL_TAG_REFERENCE(empty_damage)
REFL_END
	TAG_REFL_TAG_BLOCK(firing_effects)
REFL_END
	TAG_REFL_TAG_BLOCK(barrels)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(unknown)
	TAG_REFL_PROPERTY(maximum_movement_acceleration)
	TAG_REFL_PROPERTY(maximum_movement_velocity)
	TAG_REFL_PROPERTY(maximum_turning_acceleration)
	TAG_REFL_PROPERTY(maximum_turning_velocity)
	TAG_REFL_TAG_REFERENCE(deployed_vehicle)
	TAG_REFL_TAG_REFERENCE(age_effect)
	TAG_REFL_TAG_REFERENCE(aged_weapon)
	TAG_REFL_PROPERTY(first_person_weapon_offset_i)
	TAG_REFL_PROPERTY(first_person_weapon_offset_j)
	TAG_REFL_PROPERTY(first_person_weapon_offset_k)
	TAG_REFL_PROPERTY(first_person_scope_size_i)
	TAG_REFL_PROPERTY(first_person_scope_size_j)
REFL_END
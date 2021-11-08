#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: model
		* group_tag : hlmt
 		* header size : 252
		* *********************************************************************/ 
struct s_model_group_definition
{
tag_reference render_model;//0x0
tag_reference collision_model;//0x8
tag_reference animation;//0x10
tag_reference physics;//0x18
tag_reference physics_model;//0x20
float disappear_distance;//0x28
float begin_fade_distance;//0x2C
PAD(0x4);//0x30
float reduce_to_l1;//0x34
float reduce_to_l2;//0x38
float reduce_to_l3;//0x3C
float reduce_to_l4;//0x40
float reduce_to_l5;//0x44
PAD(0x4);//0x48
enum class e_spawn_type : __int16
{
fade_at_super_high_detail_level = 0,
fade_at_high_detail_level = 1,
fade_at_medium_detail_level = 2,
fade_at_low_detail_level = 3,
fade_at_super_low_detail_level = 4,
fade_never = 5,
};
e_spawn_type spawn_type;//0x4C
PAD(0x2);//0x4E
struct s_variants_block
{
string_id name;//0x0
PAD(0x10);//0x4
struct s_regions_block
{
string_id name;//0x0
__int16 parent_variant;//0x4
PAD(0x2);//0x6
struct s_permutation_block
{
string_id name;//0x0
enum class e_flags : __int32
{
copy_states_to_all_permutations = FLAG(0),
};
e_flags flags;//0x4
float probability;//0x8
struct s_states_block
{
string_id name;//0x0
enum class e_property_flags : __int16
{
blurred = FLAG(0),
hella_blurred = FLAG(1),
shielded = FLAG(2),
};
e_property_flags property_flags;//0x4
enum class e_state : __int16
{
default = 0,
minor_damage = 1,
medium_damage = 2,
major_damage = 3,
destroyed = 4,
};
e_state state;//0x6
tag_reference looping_effect;//0x8
string_id looping_effect_marker_name;//0x10
float initial_probability;//0x14
};
TAG_BLOCK_SIZE_ASSERT(s_states_block,0x18);
tag_block<s_states_block> states;//0xC
PAD(0xC);//0x14
};
TAG_BLOCK_SIZE_ASSERT(s_permutation_block,0x20);
tag_block<s_permutation_block> permutation;//0x8
enum class e_sort_order : __int32
{
no_sorting = 0,
NUM_5_closest = 1,
NUM_4 = 2,
NUM_3 = 3,
NUM_2 = 4,
NUM_1 = 5,
NUM_0_same_as_model = 6,
NUM_1 = 7,
NUM_2 = 8,
NUM_3 = 9,
NUM_4 = 10,
NUM_5_farthest = 11,
};
e_sort_order sort_order;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_regions_block,0x14);
tag_block<s_regions_block> regions;//0x14
struct s_objects_block
{
string_id parent_marker;//0x0
string_id child_marker;//0x4
tag_reference child_object;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_objects_block,0x10);
tag_block<s_objects_block> objects;//0x1C
PAD(0x8);//0x24
string_id dialogue_sound_effect;//0x2C
tag_reference dialogue;//0x30
};
TAG_BLOCK_SIZE_ASSERT(s_variants_block,0x38);
tag_block<s_variants_block> variants;//0x50
struct s_materials_block
{
string_id material_name;//0x0
enum class e_material_type : __int32
{
dirt = 0,
sand = 1,
stone = 2,
snow = 3,
wood = 4,
metal_hollow = 5,
metal_thin = 6,
metal_thick = 7,
rubber = 8,
glass = 9,
force_field = 10,
grunt = 11,
hunter_armor = 12,
hunter_skin = 13,
elite = 14,
jackal = 15,
jackal_energy_shield = 16,
engineer_skin = 17,
engineer_force_field = 18,
flood_combat_form = 19,
flood_carrier_form = 20,
cyborg_armor = 21,
cyborg_energy_shield = 22,
human_armor = 23,
human_skin = 24,
sentinel = 25,
monitor = 26,
plastic = 27,
water = 28,
leaves = 29,
elite_energy_shield = 30,
ice = 31,
hunter_shield = 32,
};
e_material_type material_type;//0x4
enum class e_damage_section : __int32
{
};
e_damage_section damage_section;//0x8
string_id material_name;//0xC
PAD(0x4);//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_materials_block,0x14);
tag_block<s_materials_block> materials;//0x58
struct s_new_damage_info_block
{
enum class e_flags : __int32
{
takes_shield_damage_for_children = FLAG(0),
takes_body_damage_for_children = FLAG(1),
always_shields_friendly_damage = FLAG(2),
passes_area_damage_to_children = FLAG(3),
parent_never_takes_body_damage_for_children = FLAG(4),
only_damaged_by_explosives = FLAG(5),
parent_never_takes_shield_damage_for_children = FLAG(6),
cannot_die_from_damage = FLAG(7),
passes_attached_damage_to_riders = FLAG(8),
};
e_flags flags;//0x0
string_id global_indirect_material_name;//0x4
__int32 indirect_damage_section;//0x8
PAD(0x4);//0xC
enum class e_collision_damage_reporting_type : __int16
{
teh_guardians11 = 0,
falling_damage = 1,
collision_damage = 2,
melee_edamage = 3,
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
flasg_melee_damage = 23,
bomb_melee_damage = 24,
bomb_explosion_damage = 25,
ball_melee_damage = 26,
human_turret = 27,
plasma_turret = 28,
banshee = 29,
ghost = 30,
mongoose = 30,
scorpion = 31,
spectre_driver = 32,
spectre_gunner = 33,
warthog_driver = 34,
warthog_gunner = 35,
wraith = 36,
tank = 37,
sentinel_beam = 38,
sentinel_rpg = 39,
teleporter = 40,
};
e_collision_damage_reporting_type collision_damage_reporting_type;//0x10
enum class e_response_damage_reporting_type : __int16
{
teh_guardians11 = 0,
falling_damage = 1,
collision_damage = 2,
melee_edamage = 3,
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
flasg_melee_damage = 23,
bomb_melee_damage = 24,
bomb_explosion_damage = 25,
ball_melee_damage = 26,
human_turret = 27,
plasma_turret = 28,
banshee = 29,
ghost = 30,
mongoose = 30,
scorpion = 31,
spectre_driver = 32,
spectre_gunner = 33,
warthog_driver = 34,
warthog_gunner = 35,
wraith = 36,
tank = 37,
sentinel_beam = 38,
sentinel_rpg = 39,
teleporter = 40,
};
e_response_damage_reporting_type response_damage_reporting_type;//0x12
PAD(0x14);//0x14
float maximum_vitality;//0x28
float minimum_stun_damage;//0x2C
float stun_time;//0x30
float recharge_time;//0x34
float recharge_fraction;//0x38
PAD(0x40);//0x3C
tag_reference shield_damaged_fp_shader;//0x7C
tag_reference shield_damaged_shader;//0x84
float maximum_shield_vitality;//0x8C
string_id global_shield_material_name;//0x90
float minimum_stun_damage;//0x94
float stun_time;//0x98
float shield_recharge_time;//0x9C
float shield_damaged_threshold;//0xA0
tag_reference shield_damaged_effect;//0xA4
tag_reference shield_depleted_effect;//0xAC
tag_reference shield_recharging_effect;//0xB4
struct s_damage_secctions_block
{
string_id name;//0x0
enum class e_flags : __int32
{
absorbs_body_damage = FLAG(0),
takes_full_damage_when_object_dies = FLAG(1),
cannot_die_with_riders = FLAG(2),
takes_full_damage_when_object_destroyed = FLAG(3),
restored_on_ressurection = FLAG(4),
unused = FLAG(5),
unused = FLAG(6),
headshotable = FLAG(7),
ignores_shields = FLAG(8),
};
e_flags flags;//0x4
float vitality_percentage;//0x8
struct s_instant_responses_block
{
enum class e_response_type : __int16
{
receives_all_damage = 0,
receives_area_effect_damage = 1,
receives_local_damage = 2,
};
e_response_type response_type;//0x0
enum class e_constraint_damage_type : __int16
{
none = 0,
destroy_one_of_group = 1,
destroy_entire_group = 2,
loosen_one_of_group = 3,
loosen_entire_group = 4,
};
e_constraint_damage_type constraint_damage_type;//0x2
enum class e_flags : __int32
{
kills_object = FLAG(0),
inhibits_melee_attack = FLAG(1),
inhibits_weapon_attack = FLAG(2),
inhibits_walking = FLAG(3),
forces_drop_weapon = FLAG(4),
kills_weapon_primary_trigger = FLAG(5),
kills_weapon_secondary_trigger = FLAG(6),
light_damage_left_turn = FLAG(7),
major_damage_left_turn = FLAG(8),
light_damage_right_turn = FLAG(9),
major_damage_right_turn = FLAG(10),
light_damage_engine = FLAG(11),
major_damage_engine = FLAG(12),
kills_object_no_player_solo = FLAG(13),
causes_detonation = FLAG(14),
destory_all_group_constraints = FLAG(15),
kills_variant_objects = FLAG(16),
force_unattached_effects = FLAG(17),
fires_under_threshold = FLAG(18),
triggers_special_death = FLAG(19),
only_on_special_death = FLAG(20),
only_not_on_special_death = FLAG(21),
};
e_flags flags;//0x4
float damage_threshold;//0x8
tag_reference transition_effect;//0xC
tag_reference transition_damage_effect;//0x14
string_id region;//0x1C
enum class e_new_state : __int16
{
default = 0,
minor_damage = 1,
medium_damage = 2,
major_damage = 3,
destroyed = 4,
};
e_new_state new_state;//0x20
__int16 runtime_region_index;//0x22
string_id effect_marker_name;//0x24
string_id damage_effect_marker_name;//0x28
float response_delay;//0x2C
tag_reference delay_effect;//0x30
string_id delay_effect_marker_name;//0x38
string_id contraintgroup_name;//0x3C
string_id ejecting_seat_label;//0x40
float skip_fraction;//0x44
string_id destroyed_child_object_marker_name;//0x48
float total_damage_threshold;//0x4C
};
TAG_BLOCK_SIZE_ASSERT(s_instant_responses_block,0x50);
tag_block<s_instant_responses_block> instant_responses;//0xC
PAD(0x14);//0x14
float stun_time;//0x28
float recharge_time;//0x2C
string_id resurrection_restored_region_name;//0x30
PAD(0x4);//0x34
};
TAG_BLOCK_SIZE_ASSERT(s_damage_secctions_block,0x38);
tag_block<s_damage_secctions_block> damage_secctions;//0xBC
struct s_nodes_block
{
PAD(0x10);//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_nodes_block,0x10);
tag_block<s_nodes_block> nodes;//0xC4
PAD(0xC);//0xCC
struct s_damage_seats_block
{
string_id seat_label;//0x0
float direct_damage_scale;//0x4
float damage_transfer_falloff_radius;//0x8
float maximum_transfer_damage_scale;//0xC
float minimum_transfer_damage_scale;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_damage_seats_block,0x14);
tag_block<s_damage_seats_block> damage_seats;//0xD8
struct s_damage_constraints_block
{
string_id physics_model_constraint_name;//0x0
string_id damage_constraint_name;//0x4
string_id damage_constaint_goup_name;//0x8
float group_probability_scale;//0xC
enum class e_type : __int16
{
hinge = 0,
limited_hinge = 1,
ragdoll = 2,
stiff_spring = 3,
ball_and_socket = 4,
prismatic = 5,
};
e_type type;//0x10
__int16 index;//0x12
};
TAG_BLOCK_SIZE_ASSERT(s_damage_constraints_block,0x14);
tag_block<s_damage_constraints_block> damage_constraints;//0xE0
tag_reference overshield_fp_shader;//0xE8
tag_reference overshield_shader;//0xF0
};
TAG_BLOCK_SIZE_ASSERT(s_new_damage_info_block,0xF8);
tag_block<s_new_damage_info_block> new_damage_info;//0x60
struct s_targets_block
{
string_id marker_name;//0x0
float size;//0x4
angle cone_angle;//0x8
__int16 damage_section;//0xC
__int16 variant;//0xE
float targeting_relevance;//0x10
enum class e_flags : __int32
{
locked_by_human_tracking = FLAG(0),
locked_by_plasma_tracking = FLAG(1),
headshot = FLAG(2),
vulnerable = FLAG(4),
always_locked_by_plasma_tracking = FLAG(6),
};
e_flags flags;//0x14
float lockon_distance;//0x18
};
TAG_BLOCK_SIZE_ASSERT(s_targets_block,0x1C);
tag_block<s_targets_block> targets;//0x68
struct s_model_variations_block
{
string_id type;//0x0
PAD(0x4);//0x4
struct s_permutation_block
{
string_id variation;//0x0
PAD(0x4);//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_permutation_block,0x8);
tag_block<s_permutation_block> permutation;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_model_variations_block,0x10);
tag_block<s_model_variations_block> model_variations;//0x70
struct s_nodes_block
{
string_id name;//0x0
__int16 parent_index;//0x4
__int16 first_child_index;//0x6
__int16 next_sibling_index;//0x8
PAD(0x2);//0xA
float y;//0xC
float x;//0x10
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-2);//0x14
float z;//0x12
angle i;//0x16
angle j;//0x1A
angle k;//0x1E
angle w;//0x22
PAD(0x2);//0x26
float scale_factor;//0x28
PAD(0x24);//0x2C
float y_leave_child;//0x50
float x_leave_child;//0x54
float z_leave_child;//0x58
};
TAG_BLOCK_SIZE_ASSERT(s_nodes_block,0x5C);
tag_block<s_nodes_block> nodes;//0x78
PAD(0x4);//0x80
struct s_model_object_data_block
{
enum class e_type : __int32
{
};
e_type type;//0x0
float x;//0x4
float y;//0x8
float z;//0xC
float radius;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_model_object_data_block,0x14);
tag_block<s_model_object_data_block> model_object_data;//0x84
tag_reference unit_dialoge;//0x8C
tag_reference active_camo_shader;//0x94
enum class e_flags : __int32
{
active_camo_always_on = FLAG(0),
active_camo_always_merge = FLAG(1),
active_camo_never_merge = FLAG(2),
};
e_flags flags;//0x9C
string_id default_dialogue_effect;//0xA0
enum class e_renderonly_node_flags_1 : __int32
{
node_0 = FLAG(0),
node_1 = FLAG(1),
node_2 = FLAG(2),
node_3 = FLAG(3),
node_4 = FLAG(4),
node_5 = FLAG(5),
node_6 = FLAG(6),
node_7 = FLAG(7),
node_8 = FLAG(8),
node_9 = FLAG(9),
node_10 = FLAG(10),
node_11 = FLAG(11),
node_12 = FLAG(12),
node_13 = FLAG(13),
node_14 = FLAG(14),
node_15 = FLAG(15),
node_16 = FLAG(16),
node_17 = FLAG(17),
node_18 = FLAG(18),
node_19 = FLAG(19),
node_20 = FLAG(20),
node_21 = FLAG(21),
node_22 = FLAG(22),
node_23 = FLAG(23),
node_24 = FLAG(24),
node_25 = FLAG(25),
node_26 = FLAG(26),
node_27 = FLAG(27),
node_28 = FLAG(28),
node_29 = FLAG(29),
node_30 = FLAG(30),
node_31 = FLAG(31),
};
e_renderonly_node_flags_1 renderonly_node_flags_1;//0xA4
enum class e_renderonly_node_flags_2 : __int32
{
node_32 = FLAG(0),
node_33 = FLAG(1),
node_34 = FLAG(2),
node_35 = FLAG(3),
node_36 = FLAG(4),
node_37 = FLAG(5),
node_38 = FLAG(6),
node_39 = FLAG(7),
node_40 = FLAG(8),
node_41 = FLAG(9),
node_42 = FLAG(10),
node_43 = FLAG(11),
node_44 = FLAG(12),
node_45 = FLAG(13),
node_46 = FLAG(14),
node_47 = FLAG(15),
node_48 = FLAG(16),
node_49 = FLAG(17),
node_50 = FLAG(18),
node_51 = FLAG(19),
node_52 = FLAG(20),
node_53 = FLAG(21),
node_54 = FLAG(22),
node_55 = FLAG(23),
node_56 = FLAG(24),
node_57 = FLAG(25),
node_58 = FLAG(26),
node_59 = FLAG(27),
node_60 = FLAG(28),
node_61 = FLAG(29),
node_62 = FLAG(30),
node_63 = FLAG(31),
};
e_renderonly_node_flags_2 renderonly_node_flags_2;//0xA8
enum class e_renderonly_node_flags_3 : __int32
{
node_64 = FLAG(0),
node_65 = FLAG(1),
node_66 = FLAG(2),
node_67 = FLAG(3),
node_68 = FLAG(4),
node_69 = FLAG(5),
node_70 = FLAG(6),
node_71 = FLAG(7),
node_72 = FLAG(8),
node_73 = FLAG(9),
node_74 = FLAG(10),
node_75 = FLAG(11),
node_76 = FLAG(12),
node_77 = FLAG(13),
node_78 = FLAG(14),
node_79 = FLAG(15),
node_80 = FLAG(16),
node_81 = FLAG(17),
node_82 = FLAG(18),
node_83 = FLAG(19),
node_84 = FLAG(20),
node_85 = FLAG(21),
node_86 = FLAG(22),
node_87 = FLAG(23),
node_88 = FLAG(24),
node_89 = FLAG(25),
node_90 = FLAG(26),
node_91 = FLAG(27),
node_92 = FLAG(28),
node_93 = FLAG(29),
node_94 = FLAG(30),
node_95 = FLAG(31),
};
e_renderonly_node_flags_3 renderonly_node_flags_3;//0xAC
enum class e_renderonly_node_flags_4 : __int32
{
node_96 = FLAG(0),
node_97 = FLAG(1),
node_98 = FLAG(2),
node_99 = FLAG(3),
node_100 = FLAG(4),
node_101 = FLAG(5),
node_102 = FLAG(6),
node_103 = FLAG(7),
node_104 = FLAG(8),
node_105 = FLAG(9),
node_106 = FLAG(10),
node_107 = FLAG(11),
node_108 = FLAG(12),
node_109 = FLAG(13),
node_110 = FLAG(14),
node_111 = FLAG(15),
node_112 = FLAG(16),
node_113 = FLAG(17),
node_114 = FLAG(18),
node_115 = FLAG(19),
node_116 = FLAG(20),
node_117 = FLAG(21),
node_118 = FLAG(22),
node_119 = FLAG(23),
node_120 = FLAG(24),
node_121 = FLAG(25),
node_122 = FLAG(26),
node_123 = FLAG(27),
node_124 = FLAG(28),
node_125 = FLAG(29),
node_126 = FLAG(30),
node_127 = FLAG(31),
};
e_renderonly_node_flags_4 renderonly_node_flags_4;//0xB0
enum class e_renderonly_node_flags_5 : __int32
{
node_128 = FLAG(0),
node_129 = FLAG(1),
node_130 = FLAG(2),
node_131 = FLAG(3),
node_132 = FLAG(4),
node_133 = FLAG(5),
node_134 = FLAG(6),
node_135 = FLAG(7),
node_136 = FLAG(8),
node_137 = FLAG(9),
node_138 = FLAG(10),
node_139 = FLAG(11),
node_140 = FLAG(12),
node_141 = FLAG(13),
node_142 = FLAG(14),
node_143 = FLAG(15),
node_144 = FLAG(16),
node_145 = FLAG(17),
node_146 = FLAG(18),
node_147 = FLAG(19),
node_148 = FLAG(20),
node_149 = FLAG(21),
node_150 = FLAG(22),
node_151 = FLAG(23),
node_152 = FLAG(24),
node_153 = FLAG(25),
node_154 = FLAG(26),
node_155 = FLAG(27),
node_156 = FLAG(28),
node_157 = FLAG(29),
node_158 = FLAG(30),
node_159 = FLAG(31),
};
e_renderonly_node_flags_5 renderonly_node_flags_5;//0xB4
enum class e_renderonly_node_flags_6 : __int32
{
node_160 = FLAG(0),
node_161 = FLAG(1),
node_162 = FLAG(2),
node_163 = FLAG(3),
node_164 = FLAG(4),
node_165 = FLAG(5),
node_166 = FLAG(6),
node_167 = FLAG(7),
node_168 = FLAG(8),
node_169 = FLAG(9),
node_170 = FLAG(10),
node_171 = FLAG(11),
node_172 = FLAG(12),
node_173 = FLAG(13),
node_174 = FLAG(14),
node_175 = FLAG(15),
node_176 = FLAG(16),
node_177 = FLAG(17),
node_178 = FLAG(18),
node_179 = FLAG(19),
node_180 = FLAG(20),
node_181 = FLAG(21),
node_182 = FLAG(22),
node_183 = FLAG(23),
node_184 = FLAG(24),
node_185 = FLAG(25),
node_186 = FLAG(26),
node_187 = FLAG(27),
node_188 = FLAG(28),
node_189 = FLAG(29),
node_190 = FLAG(30),
node_191 = FLAG(31),
};
e_renderonly_node_flags_6 renderonly_node_flags_6;//0xB8
enum class e_renderonly_node_flags_7 : __int32
{
node_192 = FLAG(0),
node_193 = FLAG(1),
node_194 = FLAG(2),
node_195 = FLAG(3),
node_196 = FLAG(4),
node_197 = FLAG(5),
node_198 = FLAG(6),
node_199 = FLAG(7),
node_200 = FLAG(8),
node_201 = FLAG(9),
node_202 = FLAG(10),
node_203 = FLAG(11),
node_204 = FLAG(12),
node_205 = FLAG(13),
node_206 = FLAG(14),
node_207 = FLAG(15),
node_208 = FLAG(16),
node_209 = FLAG(17),
node_210 = FLAG(18),
node_211 = FLAG(19),
node_212 = FLAG(20),
node_213 = FLAG(21),
node_214 = FLAG(22),
node_215 = FLAG(23),
node_216 = FLAG(24),
node_217 = FLAG(25),
node_218 = FLAG(26),
node_219 = FLAG(27),
node_220 = FLAG(28),
node_221 = FLAG(29),
node_222 = FLAG(30),
node_223 = FLAG(31),
};
e_renderonly_node_flags_7 renderonly_node_flags_7;//0xBC
enum class e_renderonly_node_flags_8 : __int32
{
node_224 = FLAG(0),
node_225 = FLAG(1),
node_226 = FLAG(2),
node_227 = FLAG(3),
node_228 = FLAG(4),
node_229 = FLAG(5),
node_230 = FLAG(6),
node_231 = FLAG(7),
node_232 = FLAG(8),
node_233 = FLAG(9),
node_234 = FLAG(10),
node_235 = FLAG(11),
node_236 = FLAG(12),
node_237 = FLAG(13),
node_238 = FLAG(14),
node_239 = FLAG(15),
node_240 = FLAG(16),
node_241 = FLAG(17),
node_242 = FLAG(18),
node_243 = FLAG(19),
node_244 = FLAG(20),
node_245 = FLAG(21),
node_246 = FLAG(22),
node_247 = FLAG(23),
node_248 = FLAG(24),
node_249 = FLAG(25),
node_250 = FLAG(26),
node_251 = FLAG(27),
node_252 = FLAG(28),
node_253 = FLAG(29),
node_254 = FLAG(30),
node_255 = FLAG(31),
};
e_renderonly_node_flags_8 renderonly_node_flags_8;//0xC0
enum class e_renderonly_section_flags_1 : __int32
{
section_0 = FLAG(0),
section_1 = FLAG(1),
section_2 = FLAG(2),
section_3 = FLAG(3),
section_4 = FLAG(4),
section_5 = FLAG(5),
section_6 = FLAG(6),
section_7 = FLAG(7),
section_8 = FLAG(8),
section_9 = FLAG(9),
section_10 = FLAG(10),
section_11 = FLAG(11),
section_12 = FLAG(12),
section_13 = FLAG(13),
section_14 = FLAG(14),
section_15 = FLAG(15),
section_16 = FLAG(16),
section_17 = FLAG(17),
section_18 = FLAG(18),
section_19 = FLAG(19),
section_20 = FLAG(20),
section_21 = FLAG(21),
section_22 = FLAG(22),
section_23 = FLAG(23),
section_24 = FLAG(24),
section_25 = FLAG(25),
section_26 = FLAG(26),
section_27 = FLAG(27),
section_28 = FLAG(28),
section_29 = FLAG(29),
section_30 = FLAG(30),
section_31 = FLAG(31),
};
e_renderonly_section_flags_1 renderonly_section_flags_1;//0xC4
enum class e_renderonly_section_flags_2 : __int32
{
section_32 = FLAG(0),
section_33 = FLAG(1),
section_34 = FLAG(2),
section_35 = FLAG(3),
section_36 = FLAG(4),
section_37 = FLAG(5),
section_38 = FLAG(6),
section_39 = FLAG(7),
section_40 = FLAG(8),
section_41 = FLAG(9),
section_42 = FLAG(10),
section_43 = FLAG(11),
section_44 = FLAG(12),
section_45 = FLAG(13),
section_46 = FLAG(14),
section_47 = FLAG(15),
section_48 = FLAG(16),
section_49 = FLAG(17),
section_50 = FLAG(18),
section_51 = FLAG(19),
section_52 = FLAG(20),
section_53 = FLAG(21),
section_54 = FLAG(22),
section_55 = FLAG(23),
section_56 = FLAG(24),
section_57 = FLAG(25),
section_58 = FLAG(26),
section_59 = FLAG(27),
section_60 = FLAG(28),
section_61 = FLAG(29),
section_62 = FLAG(30),
section_63 = FLAG(31),
};
e_renderonly_section_flags_2 renderonly_section_flags_2;//0xC8
enum class e_renderonly_section_flags_3 : __int32
{
section_64 = FLAG(0),
section_65 = FLAG(1),
section_66 = FLAG(2),
section_67 = FLAG(3),
section_68 = FLAG(4),
section_69 = FLAG(5),
section_70 = FLAG(6),
section_71 = FLAG(7),
section_72 = FLAG(8),
section_73 = FLAG(9),
section_74 = FLAG(10),
section_75 = FLAG(11),
section_76 = FLAG(12),
section_77 = FLAG(13),
section_78 = FLAG(14),
section_79 = FLAG(15),
section_80 = FLAG(16),
section_81 = FLAG(17),
section_82 = FLAG(18),
section_83 = FLAG(19),
section_84 = FLAG(20),
section_85 = FLAG(21),
section_86 = FLAG(22),
section_87 = FLAG(23),
section_88 = FLAG(24),
section_89 = FLAG(25),
section_90 = FLAG(26),
section_91 = FLAG(27),
section_92 = FLAG(28),
section_93 = FLAG(29),
section_94 = FLAG(30),
section_95 = FLAG(31),
};
e_renderonly_section_flags_3 renderonly_section_flags_3;//0xCC
enum class e_renderonly_section_flags_4 : __int32
{
section_96 = FLAG(0),
section_97 = FLAG(1),
section_98 = FLAG(2),
section_99 = FLAG(3),
section_100 = FLAG(4),
section_101 = FLAG(5),
section_102 = FLAG(6),
section_103 = FLAG(7),
section_104 = FLAG(8),
section_105 = FLAG(9),
section_106 = FLAG(10),
section_107 = FLAG(11),
section_108 = FLAG(12),
section_109 = FLAG(13),
section_110 = FLAG(14),
section_111 = FLAG(15),
section_112 = FLAG(16),
section_113 = FLAG(17),
section_114 = FLAG(18),
section_115 = FLAG(19),
section_116 = FLAG(20),
section_117 = FLAG(21),
section_118 = FLAG(22),
section_119 = FLAG(23),
section_120 = FLAG(24),
section_121 = FLAG(25),
section_122 = FLAG(26),
section_123 = FLAG(27),
section_124 = FLAG(28),
section_125 = FLAG(29),
section_126 = FLAG(30),
section_127 = FLAG(31),
};
e_renderonly_section_flags_4 renderonly_section_flags_4;//0xD0
enum class e_renderonly_section_flags_5 : __int32
{
section_128 = FLAG(0),
section_129 = FLAG(1),
section_130 = FLAG(2),
section_131 = FLAG(3),
section_132 = FLAG(4),
section_133 = FLAG(5),
section_134 = FLAG(6),
section_135 = FLAG(7),
section_136 = FLAG(8),
section_137 = FLAG(9),
section_138 = FLAG(10),
section_139 = FLAG(11),
section_140 = FLAG(12),
section_141 = FLAG(13),
section_142 = FLAG(14),
section_143 = FLAG(15),
section_144 = FLAG(16),
section_145 = FLAG(17),
section_146 = FLAG(18),
section_147 = FLAG(19),
section_148 = FLAG(20),
section_149 = FLAG(21),
section_150 = FLAG(22),
section_151 = FLAG(23),
section_152 = FLAG(24),
section_153 = FLAG(25),
section_154 = FLAG(26),
section_155 = FLAG(27),
section_156 = FLAG(28),
section_157 = FLAG(29),
section_158 = FLAG(30),
section_159 = FLAG(31),
};
e_renderonly_section_flags_5 renderonly_section_flags_5;//0xD4
enum class e_renderonly_section_flags_6 : __int32
{
section_160 = FLAG(0),
section_161 = FLAG(1),
section_162 = FLAG(2),
section_163 = FLAG(3),
section_164 = FLAG(4),
section_165 = FLAG(5),
section_166 = FLAG(6),
section_167 = FLAG(7),
section_168 = FLAG(8),
section_169 = FLAG(9),
section_170 = FLAG(10),
section_171 = FLAG(11),
section_172 = FLAG(12),
section_173 = FLAG(13),
section_174 = FLAG(14),
section_175 = FLAG(15),
section_176 = FLAG(16),
section_177 = FLAG(17),
section_178 = FLAG(18),
section_179 = FLAG(19),
section_180 = FLAG(20),
section_181 = FLAG(21),
section_182 = FLAG(22),
section_183 = FLAG(23),
section_184 = FLAG(24),
section_185 = FLAG(25),
section_186 = FLAG(26),
section_187 = FLAG(27),
section_188 = FLAG(28),
section_189 = FLAG(29),
section_190 = FLAG(30),
section_191 = FLAG(31),
};
e_renderonly_section_flags_6 renderonly_section_flags_6;//0xD8
enum class e_renderonly_section_flags_7 : __int32
{
section_192 = FLAG(0),
section_193 = FLAG(1),
section_194 = FLAG(2),
section_195 = FLAG(3),
section_196 = FLAG(4),
section_197 = FLAG(5),
section_198 = FLAG(6),
section_199 = FLAG(7),
section_200 = FLAG(8),
section_201 = FLAG(9),
section_202 = FLAG(10),
section_203 = FLAG(11),
section_204 = FLAG(12),
section_205 = FLAG(13),
section_206 = FLAG(14),
section_207 = FLAG(15),
section_208 = FLAG(16),
section_209 = FLAG(17),
section_210 = FLAG(18),
section_211 = FLAG(19),
section_212 = FLAG(20),
section_213 = FLAG(21),
section_214 = FLAG(22),
section_215 = FLAG(23),
section_216 = FLAG(24),
section_217 = FLAG(25),
section_218 = FLAG(26),
section_219 = FLAG(27),
section_220 = FLAG(28),
section_221 = FLAG(29),
section_222 = FLAG(30),
section_223 = FLAG(31),
};
e_renderonly_section_flags_7 renderonly_section_flags_7;//0xDC
enum class e_renderonly_section_flags_8 : __int32
{
section_224 = FLAG(0),
section_225 = FLAG(1),
section_226 = FLAG(2),
section_227 = FLAG(3),
section_228 = FLAG(4),
section_229 = FLAG(5),
section_230 = FLAG(6),
section_231 = FLAG(7),
section_232 = FLAG(8),
section_233 = FLAG(9),
section_234 = FLAG(10),
section_235 = FLAG(11),
section_236 = FLAG(12),
section_237 = FLAG(13),
section_238 = FLAG(14),
section_239 = FLAG(15),
section_240 = FLAG(16),
section_241 = FLAG(17),
section_242 = FLAG(18),
section_243 = FLAG(19),
section_244 = FLAG(20),
section_245 = FLAG(21),
section_246 = FLAG(22),
section_247 = FLAG(23),
section_248 = FLAG(24),
section_249 = FLAG(25),
section_250 = FLAG(26),
section_251 = FLAG(27),
section_252 = FLAG(28),
section_253 = FLAG(29),
section_254 = FLAG(30),
section_255 = FLAG(31),
};
e_renderonly_section_flags_8 renderonly_section_flags_8;//0xE0
enum class e_runtime_flags : __int32
{
contains_runtime_nodes = FLAG(0),
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
e_runtime_flags runtime_flags;//0xE4
PAD(0x8);//0xE8
tag_reference hologram_shader;//0xF0
string_id hologram_control_function;//0xF8
};
TAG_GROUP_SIZE_ASSERT(s_model_group_definition,0xFC);
TAG_REFL_TAG_BLOCK_DEF(s_model_group_definition::s_variants_group_definition::s_regions_group_definition::s_permutation_group_definition::s_states_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(property_flags)	TAG_REFL_PROPERTY(state)	TAG_REFL_TAG_REFERENCE(looping_effect)	TAG_REFL_STRING_ID(looping_effect_marker_name)	TAG_REFL_PROPERTY(initial_probability)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_group_definition::s_variants_group_definition::s_regions_group_definition::s_permutation_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(probability)	TAG_REFL_TAG_BLOCK(states)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_group_definition::s_variants_group_definition::s_regions_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(parent_variant)	TAG_REFL_TAG_BLOCK(permutation)	TAG_REFL_PROPERTY(sort_order)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_group_definition::s_variants_group_definition::s_objects_block)	TAG_REFL_STRING_ID(parent_marker)	TAG_REFL_STRING_ID(child_marker)	TAG_REFL_TAG_REFERENCE(child_object)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_group_definition::s_variants_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_TAG_BLOCK(regions)	TAG_REFL_TAG_BLOCK(objects)	TAG_REFL_STRING_ID(dialogue_sound_effect)	TAG_REFL_TAG_REFERENCE(dialogue)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_group_definition::s_materials_block)	TAG_REFL_STRING_ID(material_name)	TAG_REFL_PROPERTY(material_type)	TAG_REFL_PROPERTY(damage_section)	TAG_REFL_STRING_ID(material_name)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_group_definition::s_new_damage_info_group_definition::s_damage_secctions_group_definition::s_instant_responses_block)	TAG_REFL_PROPERTY(response_type)	TAG_REFL_PROPERTY(constraint_damage_type)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(damage_threshold)	TAG_REFL_TAG_REFERENCE(transition_effect)	TAG_REFL_TAG_REFERENCE(transition_damage_effect)	TAG_REFL_STRING_ID(region)	TAG_REFL_PROPERTY(new_state)	TAG_REFL_PROPERTY(runtime_region_index)	TAG_REFL_STRING_ID(effect_marker_name)	TAG_REFL_STRING_ID(damage_effect_marker_name)	TAG_REFL_PROPERTY(response_delay)	TAG_REFL_TAG_REFERENCE(delay_effect)	TAG_REFL_STRING_ID(delay_effect_marker_name)	TAG_REFL_STRING_ID(contraintgroup_name)	TAG_REFL_STRING_ID(ejecting_seat_label)	TAG_REFL_PROPERTY(skip_fraction)	TAG_REFL_STRING_ID(destroyed_child_object_marker_name)	TAG_REFL_PROPERTY(total_damage_threshold)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_group_definition::s_new_damage_info_group_definition::s_damage_secctions_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(vitality_percentage)	TAG_REFL_TAG_BLOCK(instant_responses)	TAG_REFL_PROPERTY(stun_time)	TAG_REFL_PROPERTY(recharge_time)	TAG_REFL_STRING_ID(resurrection_restored_region_name)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_group_definition::s_new_damage_info_group_definition::s_nodes_block)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_group_definition::s_new_damage_info_group_definition::s_damage_seats_block)	TAG_REFL_STRING_ID(seat_label)	TAG_REFL_PROPERTY(direct_damage_scale)	TAG_REFL_PROPERTY(damage_transfer_falloff_radius)	TAG_REFL_PROPERTY(maximum_transfer_damage_scale)	TAG_REFL_PROPERTY(minimum_transfer_damage_scale)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_group_definition::s_new_damage_info_group_definition::s_damage_constraints_block)	TAG_REFL_STRING_ID(physics_model_constraint_name)	TAG_REFL_STRING_ID(damage_constraint_name)	TAG_REFL_STRING_ID(damage_constaint_goup_name)	TAG_REFL_PROPERTY(group_probability_scale)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(index)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_group_definition::s_new_damage_info_block)	TAG_REFL_PROPERTY(flags)	TAG_REFL_STRING_ID(global_indirect_material_name)	TAG_REFL_PROPERTY(indirect_damage_section)	TAG_REFL_PROPERTY(collision_damage_reporting_type)	TAG_REFL_PROPERTY(response_damage_reporting_type)	TAG_REFL_PROPERTY(maximum_vitality)	TAG_REFL_PROPERTY(minimum_stun_damage)	TAG_REFL_PROPERTY(stun_time)	TAG_REFL_PROPERTY(recharge_time)	TAG_REFL_PROPERTY(recharge_fraction)	TAG_REFL_TAG_REFERENCE(shield_damaged_fp_shader)	TAG_REFL_TAG_REFERENCE(shield_damaged_shader)	TAG_REFL_PROPERTY(maximum_shield_vitality)	TAG_REFL_STRING_ID(global_shield_material_name)	TAG_REFL_PROPERTY(minimum_stun_damage)	TAG_REFL_PROPERTY(stun_time)	TAG_REFL_PROPERTY(shield_recharge_time)	TAG_REFL_PROPERTY(shield_damaged_threshold)	TAG_REFL_TAG_REFERENCE(shield_damaged_effect)	TAG_REFL_TAG_REFERENCE(shield_depleted_effect)	TAG_REFL_TAG_REFERENCE(shield_recharging_effect)	TAG_REFL_TAG_BLOCK(damage_secctions)	TAG_REFL_TAG_BLOCK(nodes)	TAG_REFL_TAG_BLOCK(damage_seats)	TAG_REFL_TAG_BLOCK(damage_constraints)	TAG_REFL_TAG_REFERENCE(overshield_fp_shader)	TAG_REFL_TAG_REFERENCE(overshield_shader)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_group_definition::s_targets_block)	TAG_REFL_STRING_ID(marker_name)	TAG_REFL_PROPERTY(size)	TAG_REFL_ANGLE(cone_angle)	TAG_REFL_PROPERTY(damage_section)	TAG_REFL_PROPERTY(variant)	TAG_REFL_PROPERTY(targeting_relevance)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(lockon_distance)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_group_definition::s_model_variations_group_definition::s_permutation_block)	TAG_REFL_STRING_ID(variation)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_group_definition::s_model_variations_block)	TAG_REFL_STRING_ID(type)	TAG_REFL_TAG_BLOCK(permutation)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_group_definition::s_nodes_block)	TAG_REFL_STRING_ID(name)	TAG_REFL_PROPERTY(parent_index)	TAG_REFL_PROPERTY(first_child_index)	TAG_REFL_PROPERTY(next_sibling_index)	TAG_REFL_PROPERTY(y)	TAG_REFL_PROPERTY(x)	TAG_REFL_PROPERTY(z)	TAG_REFL_ANGLE(i)	TAG_REFL_ANGLE(j)	TAG_REFL_ANGLE(k)	TAG_REFL_ANGLE(w)	TAG_REFL_PROPERTY(scale_factor)	TAG_REFL_PROPERTY(y_leave_child)	TAG_REFL_PROPERTY(x_leave_child)	TAG_REFL_PROPERTY(z_leave_child)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_model_group_definition::s_model_object_data_block)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(x)	TAG_REFL_PROPERTY(y)	TAG_REFL_PROPERTY(z)	TAG_REFL_PROPERTY(radius)REFL_END
TAG_REFL(s_model_group_definition)	TAG_REFL_TAG_REFERENCE(render_model)	TAG_REFL_TAG_REFERENCE(collision_model)	TAG_REFL_TAG_REFERENCE(animation)	TAG_REFL_TAG_REFERENCE(physics)	TAG_REFL_TAG_REFERENCE(physics_model)	TAG_REFL_PROPERTY(disappear_distance)	TAG_REFL_PROPERTY(begin_fade_distance)	TAG_REFL_PROPERTY(reduce_to_l1)	TAG_REFL_PROPERTY(reduce_to_l2)	TAG_REFL_PROPERTY(reduce_to_l3)	TAG_REFL_PROPERTY(reduce_to_l4)	TAG_REFL_PROPERTY(reduce_to_l5)	TAG_REFL_PROPERTY(spawn_type)	TAG_REFL_TAG_BLOCK(variants)	TAG_REFL_TAG_BLOCK(materials)	TAG_REFL_TAG_BLOCK(new_damage_info)	TAG_REFL_TAG_BLOCK(targets)	TAG_REFL_TAG_BLOCK(model_variations)	TAG_REFL_TAG_BLOCK(nodes)	TAG_REFL_TAG_BLOCK(model_object_data)	TAG_REFL_TAG_REFERENCE(unit_dialoge)	TAG_REFL_TAG_REFERENCE(active_camo_shader)	TAG_REFL_PROPERTY(flags)	TAG_REFL_STRING_ID(default_dialogue_effect)	TAG_REFL_PROPERTY(renderonly_node_flags_1)	TAG_REFL_PROPERTY(renderonly_node_flags_2)	TAG_REFL_PROPERTY(renderonly_node_flags_3)	TAG_REFL_PROPERTY(renderonly_node_flags_4)	TAG_REFL_PROPERTY(renderonly_node_flags_5)	TAG_REFL_PROPERTY(renderonly_node_flags_6)	TAG_REFL_PROPERTY(renderonly_node_flags_7)	TAG_REFL_PROPERTY(renderonly_node_flags_8)	TAG_REFL_PROPERTY(renderonly_section_flags_1)	TAG_REFL_PROPERTY(renderonly_section_flags_2)	TAG_REFL_PROPERTY(renderonly_section_flags_3)	TAG_REFL_PROPERTY(renderonly_section_flags_4)	TAG_REFL_PROPERTY(renderonly_section_flags_5)	TAG_REFL_PROPERTY(renderonly_section_flags_6)	TAG_REFL_PROPERTY(renderonly_section_flags_7)	TAG_REFL_PROPERTY(renderonly_section_flags_8)	TAG_REFL_PROPERTY(runtime_flags)	TAG_REFL_TAG_REFERENCE(hologram_shader)	TAG_REFL_STRING_ID(hologram_control_function)REFL_END

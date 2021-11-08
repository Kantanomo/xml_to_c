#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: damage_effect
		* group_tag : jpt!
 		* header size : 200
		* *********************************************************************/ 
struct s_damage_effect_group_definition
{
float radius_min;//0x0
float radius_max;//0x4
float cutoff_scale;//0x8
enum class e_flags : __int32
{
dont_scale_damage_by_distance = FLAG(0),
area_damage_players_only = FLAG(1),
};
e_flags flags;//0xC
enum class e_side_effect : __int16
{
none = 0,
harmless = 1,
lethal_to_the_unsuspecting = 2,
emp = 3,
};
e_side_effect side_effect;//0x10
enum class e_category : __int16
{
none = 0,
falling = 1,
bullet = 2,
grenade = 3,
high_explosive = 4,
sniper = 5,
melee = 6,
flame = 7,
mounted_weapon = 8,
vehicle = 9,
plasma = 10,
needle = 11,
shotgun = 12,
};
e_category category;//0x12
enum class e_flags : __int32
{
does_not_hurt_owner = FLAG(0),
can_cause_headshots = FLAG(1),
pings_resistant_units = FLAG(2),
does_not_hurt_friends = FLAG(3),
does_not_ping_units = FLAG(4),
detonates_explosives = FLAG(5),
only_hurts_shields = FLAG(6),
causes_flaming_death = FLAG(7),
damage_indicators_always_point_down = FLAG(8),
skips_shields = FLAG(9),
only_hurts_one_infection_form = FLAG(11),
unused = FLAG(12),
infection_form_pop = FLAG(13),
ignore_seat_scale_for_direct_damage = FLAG(14),
forces_hard_ping = FLAG(15),
does_not_hurt_players = FLAG(16),
};
e_flags flags;//0x14
float area_of_effect_core_radius;//0x18
float damage_lower_bound;//0x1C
float damage_upper_bound_min;//0x20
float damage_upper_bound_max;//0x24
angle damage_inner_cone_angle;//0x28
angle damage_outter_cone_angle;//0x2C
float active_camoflage_damage;//0x30
float stun;//0x34
float max_stun;//0x38
float stun_time;//0x3C
float instantaneous_acceleration;//0x40
float rider_direct_damage_scale;//0x44
float rider_max_transfer_damage_scale;//0x48
float rider_min_transfer_damage_scale;//0x4C
string_id general_damage;//0x50
string_id specific_damage;//0x54
float ai_stun_radius;//0x58
float ai_stun_bounds_min;//0x5C
float ai_stun_bounds_max;//0x60
float shake_radius;//0x64
float emp_radius;//0x68
struct s_player_responses_block
{
enum class e_response_type : __int16
{
shielded = 0,
unshielded = 1,
all = 2,
};
e_response_type response_type;//0x0
__int16 unknown;//0x2
enum class e_type : __int16
{
none = 0,
lighten = 1,
darken = 2,
max = 3,
min = 4,
invert = 5,
tint = 6,
};
e_type type;//0x4
enum class e_priority : __int16
{
low = 0,
medium = 1,
high = 2,
};
e_priority priority;//0x6
float duration;//0x8
enum class e_fade_function : __int16
{
linear = 0,
late = 1,
very_late = 2,
early = 3,
very_early = 4,
cosine = 5,
zero = 6,
one = 7,
};
e_fade_function fade_function;//0xC
__int16 unknown;//0xE
float max_intensity;//0x10
float color_alpha;//0x14
float color_red;//0x18
float color_green;//0x1C
float color_blue;//0x20
float low_frequency_vibration_duration;//0x24
data_block low_frequency_whore_function;//0x28
float high_frequency_vibration_duration;//0x30
data_block high_frequency_whore_function;//0x34
string_id effect_name;//0x3C
float duration;//0x40
data_block effect_scale_function;//0x44
};
TAG_BLOCK_SIZE_ASSERT(s_player_responses_block,0x4C);
tag_block<s_player_responses_block> player_responses;//0x6C
float duration;//0x74
enum class e_fade_function : __int16
{
linear = 0,
late = 1,
very_late = 2,
early = 3,
very_early = 4,
cosine = 5,
zero = 6,
one = 7,
};
e_fade_function fade_function;//0x78
__int16 unknown;//0x7A
angle rotation;//0x7C
float pushback;//0x80
float jitter_min;//0x84
float jitter_max;//0x88
float duration;//0x8C
enum class e_falloff_function : __int16
{
linear = 0,
late = 1,
very_late = 2,
early = 3,
very_early = 4,
cosine = 5,
zero = 6,
one = 7,
};
e_falloff_function falloff_function;//0x90
__int16 unknown;//0x92
float random_translation;//0x94
angle random_rotation;//0x98
enum class e_wobble_function : __int16
{
one = 0,
zero = 1,
cosine = 2,
cosine_variable_period = 3,
diagonal_wave = 4,
diagonal_wave_variable_period = 5,
slide = 6,
slide_variable_period = 7,
noise = 8,
jitter = 9,
wander = 10,
spark = 11,
};
e_wobble_function wobble_function;//0x9C
__int16 unknown;//0x9E
float wobble_function_period;//0xA0
float wobble_weight;//0xA4
tag_reference sound;//0xA8
float forward_velocity;//0xB0
float forward_radius;//0xB4
float forward_exponent;//0xB8
float outward_velocity;//0xBC
float outward_radius;//0xC0
float outward_exponent;//0xC4
};
TAG_GROUP_SIZE_ASSERT(s_damage_effect_group_definition,0xC8);
TAG_REFL_TAG_BLOCK_DEF(s_damage_effect_group_definition::s_player_responses_block)	TAG_REFL_PROPERTY(response_type)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(priority)	TAG_REFL_PROPERTY(duration)	TAG_REFL_PROPERTY(fade_function)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(max_intensity)	TAG_REFL_PROPERTY(color_alpha)	TAG_REFL_PROPERTY(color_red)	TAG_REFL_PROPERTY(color_green)	TAG_REFL_PROPERTY(color_blue)	TAG_REFL_PROPERTY(low_frequency_vibration_duration)	TAG_REFL_DATA_BLOCK(low_frequency_whore_function)	TAG_REFL_PROPERTY(high_frequency_vibration_duration)	TAG_REFL_DATA_BLOCK(high_frequency_whore_function)	TAG_REFL_STRING_ID(effect_name)	TAG_REFL_PROPERTY(duration)	TAG_REFL_DATA_BLOCK(effect_scale_function)REFL_END
TAG_REFL(s_damage_effect_group_definition)	TAG_REFL_PROPERTY(radius_min)	TAG_REFL_PROPERTY(radius_max)	TAG_REFL_PROPERTY(cutoff_scale)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(side_effect)	TAG_REFL_PROPERTY(category)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(area_of_effect_core_radius)	TAG_REFL_PROPERTY(damage_lower_bound)	TAG_REFL_PROPERTY(damage_upper_bound_min)	TAG_REFL_PROPERTY(damage_upper_bound_max)	TAG_REFL_ANGLE(damage_inner_cone_angle)	TAG_REFL_ANGLE(damage_outter_cone_angle)	TAG_REFL_PROPERTY(active_camoflage_damage)	TAG_REFL_PROPERTY(stun)	TAG_REFL_PROPERTY(max_stun)	TAG_REFL_PROPERTY(stun_time)	TAG_REFL_PROPERTY(instantaneous_acceleration)	TAG_REFL_PROPERTY(rider_direct_damage_scale)	TAG_REFL_PROPERTY(rider_max_transfer_damage_scale)	TAG_REFL_PROPERTY(rider_min_transfer_damage_scale)	TAG_REFL_STRING_ID(general_damage)	TAG_REFL_STRING_ID(specific_damage)	TAG_REFL_PROPERTY(ai_stun_radius)	TAG_REFL_PROPERTY(ai_stun_bounds_min)	TAG_REFL_PROPERTY(ai_stun_bounds_max)	TAG_REFL_PROPERTY(shake_radius)	TAG_REFL_PROPERTY(emp_radius)	TAG_REFL_TAG_BLOCK(player_responses)	TAG_REFL_PROPERTY(duration)	TAG_REFL_PROPERTY(fade_function)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_ANGLE(rotation)	TAG_REFL_PROPERTY(pushback)	TAG_REFL_PROPERTY(jitter_min)	TAG_REFL_PROPERTY(jitter_max)	TAG_REFL_PROPERTY(duration)	TAG_REFL_PROPERTY(falloff_function)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(random_translation)	TAG_REFL_ANGLE(random_rotation)	TAG_REFL_PROPERTY(wobble_function)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(wobble_function_period)	TAG_REFL_PROPERTY(wobble_weight)	TAG_REFL_TAG_REFERENCE(sound)	TAG_REFL_PROPERTY(forward_velocity)	TAG_REFL_PROPERTY(forward_radius)	TAG_REFL_PROPERTY(forward_exponent)	TAG_REFL_PROPERTY(outward_velocity)	TAG_REFL_PROPERTY(outward_radius)	TAG_REFL_PROPERTY(outward_exponent)REFL_END

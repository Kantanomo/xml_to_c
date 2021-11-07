#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: hud_globals
		* group_tag : hudg
 		* header size : 1160
		* *********************************************************************/ 
struct s_hud_globals_group_definition
{
PAD(0x24);//0x0
enum class e_anchor : __int16
{
top_left = 0,
top_right = 1,
bottom_left = 2,
bottom_right = 3,
center = 4,
};
e_anchor anchor;//0x24
unsigned __int8 anchor_offset_y;//0x26
unsigned __int8 anchor_offset_x;//0x27
PAD(0x20);//0x28
tag_reference obsolete1;//0x48
tag_reference obsolete2;//0x50
float message_up_time;//0x58
float message_fade_time;//0x5C
float icon_color_alpha;//0x60
float icon_color_red;//0x64
float icon_color_green;//0x68
float icon_color_blue;//0x6C
float text_color_alpha;//0x70
float text_color_red;//0x74
float text_color_green;//0x78
float text_color_blue;//0x7C
float text_spacing;//0x80
tag_reference item_message_text;//0x84
tag_reference icon_bitmap;//0x8C
tag_reference alternate_icon;//0x94
struct s_button_icons_block
{
__int16 sequence_index;//0x0
__int16 width_offset;//0x2
__int16 offset_from_reference_corner_x;//0x4
__int16 offset_from_reference_corner_y;//0x6
unsigned __int8 override_icon_color_alpha;//0x8
unsigned __int8 override_icon_color_red;//0x9
unsigned __int8 override_icon_color_greeb;//0xA
unsigned __int8 override_icon_color_blue;//0xB
unsigned __int8 frame_rate_030;//0xC
enum class e_flags : __int8
{
use_text_from_string_list_instead = FLAG(0),
override_default_color = FLAG(1),
width_offset_is_absolute_icon_width = FLAG(2),
};
e_flags flags;//0xD
__int16 text_index;//0xE
};
TAG_BLOCK_SIZE_ASSERT(s_button_icons_block,0x10);
tag_block<s_button_icons_block> button_icons;//0x9C
unsigned __int8 hud_help_default_color_alpha;//0xA4
unsigned __int8 hud_help_default_color_red;//0xA5
unsigned __int8 hud_help_default_color_green;//0xA6
unsigned __int8 hud_help_default_color_blue;//0xA7
unsigned __int8 hud_help_flashing_color_alpha;//0xA8
unsigned __int8 hud_help_flashing_color_red;//0xA9
unsigned __int8 hud_help_flashing_color_green;//0xAA
unsigned __int8 hud_help_flashing_color_blue;//0xAB
float hud_help_flash_period;//0xAC
float hud_help_flash_delay;//0xB0
__int16 number_of_flashes;//0xB4
enum class e_hud_help_flash_flags : __int16
{
reverse_defaultflashing_colors = FLAG(0),
};
e_hud_help_flash_flags hud_help_flash_flags;//0xB6
float hud_help_flash_length;//0xB8
unsigned __int8 disabled_color_alpha;//0xBC
unsigned __int8 disabled_color_red;//0xBD
unsigned __int8 disabled_color_green;//0xBE
unsigned __int8 disabled_color_blue;//0xBF
unsigned __int8 disabled_color_alpha;//0xC0
unsigned __int8 disabled_color_red;//0xC1
unsigned __int8 disabled_color_green;//0xC2
unsigned __int8 disabled_color_blue;//0xC3
tag_reference hud_messages;//0xC4
unsigned __int8 objective_default_color_alpha;//0xCC
unsigned __int8 objective_default_red;//0xCD
unsigned __int8 objective_default_green;//0xCE
unsigned __int8 objective_default_blue;//0xCF
unsigned __int8 objective_flashing_alpha;//0xD0
unsigned __int8 objective_flashing_red;//0xD1
unsigned __int8 objective_flashing_green;//0xD2
unsigned __int8 objective_flashing_blue;//0xD3
float objective_flash_period;//0xD4
float objective_flash_delay;//0xD8
__int16 number_of_flashes;//0xDC
enum class e_hud_help_flash_flags : __int16
{
reverse_defaultflashing_colors = FLAG(0),
};
e_hud_help_flash_flags hud_help_flash_flags;//0xDE
float objective_flash_length;//0xE0
unsigned __int8 disabled_color_alpha;//0xE4
unsigned __int8 disabled_color_red;//0xE5
unsigned __int8 disabled_color_green;//0xE6
unsigned __int8 disabled_color_blue;//0xE7
__int16 objective_uptime_ticks;//0xE8
__int16 objective_fade_ticks;//0xEA
float NUM__waypoint_top_offset;//0xEC
float waypoint_bottom_offset;//0xF0
float waypoint_left_offset;//0xF4
float waypoint_right_offset;//0xF8
PAD(0x20);//0xFC
tag_reference arrow_bitmap;//0x11C
struct s_waypoints_arrows_block
{
string32 name;//0x0
PAD(0x8);//0x20
unsigned __int8 red;//0x28
unsigned __int8 green;//0x29
unsigned __int8 blue;//0x2A
unsigned __int8 opacity;//0x2B
float translucency;//0x2C
PAD(0x4);//0x30
__int16 on_screen_sequence_index;//0x34
__int16 off_screen_sequence_index;//0x36
__int16 unused_sequence_index;//0x38
enum class e_flags : __int16
{
do_not_rotate_when_pointing_offscreen = FLAG(0),
};
e_flags flags;//0x3A
PAD(0x2C);//0x3C
};
TAG_BLOCK_SIZE_ASSERT(s_waypoints_arrows_block,0x68);
tag_block<s_waypoints_arrows_block> waypoints_arrows;//0x124
PAD(0x50);//0x12C
float multiplayer_hud_scale;//0x17C
PAD(0x110);//0x180
float motion_sensor_range;//0x290
float motion_sensor_velocity_sensitivity;//0x294
float motion_sensor_scale;//0x298
__int16 default_title_chapter_bounds_top;//0x29C
__int16 default_title_chapter_bounds_left;//0x29E
__int16 default_title_chapter_bounds_bottom;//0x2A0
__int16 default_title_chapter_bounds_right;//0x2A2
PAD(0x2C);//0x2A4
__int16 hud_damage_indicator_offset_top;//0x2D0
__int16 hud_damage_indicator_offset_bottom;//0x2D2
__int16 hud_damage_indicator_offset_left;//0x2D4
__int16 hud_damage_indicator_offset_right;//0x2D6
PAD(0x20);//0x2D8
tag_reference damage_indicator_bitmap;//0x2F8
__int16 sequence_index;//0x300
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-2);//0x302
__int16 multiplayer_sequence_index;//0x300
PAD(0x2);//0x302
unsigned __int8 damage_indicator_color_blue;//0x304
unsigned __int8 damage_indicator_color_green;//0x305
unsigned __int8 damage_indicator_color_red;//0x306
unsigned __int8 damage_indicator_color_alpha;//0x307
PAD(0x10);//0x308
unsigned __int8 not_much_time_left_default_color_blue;//0x318
unsigned __int8 not_much_time_left_default_color_green;//0x319
unsigned __int8 not_much_time_left_default_color_red;//0x31A
unsigned __int8 not_much_time_left_default_color_alpha;//0x31B
unsigned __int8 not_much_time_left_flash_color_blue;//0x31C
unsigned __int8 not_much_time_left_flash_green;//0x31D
unsigned __int8 not_much_time_left_flash_red;//0x31E
unsigned __int8 not_much_time_left_flash_alpha;//0x31F
float not_much_time_left_flash_period;//0x320
float not_much_time_left_flash_delay;//0x324
__int16 number_of_flashes;//0x328
enum class e_not_much_time_left_flash_flags : __int16
{
reverse_defaultflashing_colors = FLAG(0),
};
e_not_much_time_left_flash_flags not_much_time_left_flash_flags;//0x32A
float not_much_time_left_flash_length;//0x32C
PAD(0x8);//0x330
unsigned __int8 time_out_default_color_alpha;//0x338
unsigned __int8 time_out_default_color_red;//0x339
unsigned __int8 time_out_default_color_green;//0x33A
unsigned __int8 time_out_default_color_blue;//0x33B
unsigned __int8 time_out_flashing_color_alpha;//0x33C
unsigned __int8 time_out_flashing_color_red;//0x33D
unsigned __int8 time_out_flashing_color_green;//0x33E
unsigned __int8 time_out_flashing_color_blue;//0x33F
float time_out_flash_period;//0x340
float time_out_flash_delay;//0x344
__int16 number_of_flashes;//0x348
enum class e_time_out_flash_flags : __int16
{
reverse_defaultflashing_colors = FLAG(0),
};
e_time_out_flash_flags time_out_flash_flags;//0x34A
float time_out_flash_length;//0x34C
unsigned __int8 disabled_time_out_default_color_alpha;//0x350
unsigned __int8 disabled_time_out_default_color_red;//0x351
unsigned __int8 disabled_time_out_default_color_green;//0x352
unsigned __int8 disabled_time_out_default_color_blue;//0x353
PAD(0x2C);//0x354
tag_reference carnage_report_bitmap;//0x380
__int16 loading_begin_text;//0x388
__int16 loading_end_text;//0x38A
__int16 checkpoint_begin_text;//0x38C
__int16 checkpoint_end_text;//0x38E
tag_reference checkpoint_sound;//0x390
PAD(0x60);//0x398
tag_reference hud_text;//0x3F8
struct s_dashlights_block
{
tag_reference bitmap;//0x0
tag_reference shader;//0x8
__int16 sequence_index;//0x10
enum class e_time_out_flash_flags : __int16
{
dont_scale_when_pulsing = FLAG(0),
};
e_time_out_flash_flags time_out_flash_flags;//0x12
tag_reference sound;//0x14
};
TAG_BLOCK_SIZE_ASSERT(s_dashlights_block,0x1C);
tag_block<s_dashlights_block> dashlights;//0x400
struct s_waypoint_arrows_block
{
tag_reference bitmap;//0x0
tag_reference shader;//0x8
float sequence_index;//0x10
float smallest_size;//0x14
float smallest_distance;//0x18
tag_reference border_bitmap;//0x1C
};
TAG_BLOCK_SIZE_ASSERT(s_waypoint_arrows_block,0x24);
tag_block<s_waypoint_arrows_block> waypoint_arrows;//0x408
struct s_waypoints_block
{
tag_reference bitmap;//0x0
tag_reference sahder;//0x8
__int16 onscreen_sequence_index;//0x10
__int16 occluded_sequence_index;//0x12
__int16 offscreen_sequence_index;//0x14
__int16 unused;//0x16
};
TAG_BLOCK_SIZE_ASSERT(s_waypoints_block,0x18);
tag_block<s_waypoints_block> waypoints;//0x410
struct s_hud_sounds_block
{
tag_reference chief_sound;//0x0
enum class e_flags : __int32
{
shield_recharging = FLAG(0),
shield_damaged = FLAG(1),
shield_low = FLAG(2),
shield_empty = FLAG(3),
health_low = FLAG(4),
health_minor_damage = FLAG(5),
health_major_damage = FLAG(6),
rocket_locking = FLAG(7),
rocket_locked = FLAG(8),
};
e_flags flags;//0x8
float scale;//0xC
tag_reference devrush_sound;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_hud_sounds_block,0x18);
tag_block<s_hud_sounds_block> hud_sounds;//0x418
struct s_player_training_data_block
{
string_id display_string;//0x0
string_id display_string2;//0x4
string_id display_string3;//0x8
float max_display_time;//0xC
unsigned __int8 display_count;//0x10
unsigned __int8 disapear_delay;//0x11
unsigned __int8 redisplay_delay;//0x12
unsigned __int8 display_delay_s;//0x13
};
TAG_BLOCK_SIZE_ASSERT(s_player_training_data_block,0x14);
tag_block<s_player_training_data_block> player_training_data;//0x420
tag_reference primary_message_sound;//0x428
tag_reference secondary_message_sound;//0x430
string_id boot_griefer_string;//0x438
string_id cannot_boot_griefer_string;//0x43C
tag_reference training_shader;//0x440
tag_reference human_training_top_right_;//0x448
tag_reference human_training_top_center_;//0x450
tag_reference human_training_top_left_;//0x458
tag_reference human_training_center_;//0x460
tag_reference elite_training_top_right_;//0x468
tag_reference elite_training_top_center_;//0x470
tag_reference elite_training_top_left_;//0x478
tag_reference elite_training_center_;//0x480
};
TAG_GROUP_SIZE_ASSERT(s_hud_globals_group_definition,0x488);
TAG_REFL(s_hud_globals_group_definition)
	TAG_REFL_PROPERTY(anchor)
	TAG_REFL_PROPERTY(anchor_offset_y)
	TAG_REFL_PROPERTY(anchor_offset_x)
	TAG_REFL_TAG_REFERENCE(obsolete1)
	TAG_REFL_TAG_REFERENCE(obsolete2)
	TAG_REFL_PROPERTY(message_up_time)
	TAG_REFL_PROPERTY(message_fade_time)
	TAG_REFL_PROPERTY(icon_color_alpha)
	TAG_REFL_PROPERTY(icon_color_red)
	TAG_REFL_PROPERTY(icon_color_green)
	TAG_REFL_PROPERTY(icon_color_blue)
	TAG_REFL_PROPERTY(text_color_alpha)
	TAG_REFL_PROPERTY(text_color_red)
	TAG_REFL_PROPERTY(text_color_green)
	TAG_REFL_PROPERTY(text_color_blue)
	TAG_REFL_PROPERTY(text_spacing)
	TAG_REFL_TAG_REFERENCE(item_message_text)
	TAG_REFL_TAG_REFERENCE(icon_bitmap)
	TAG_REFL_TAG_REFERENCE(alternate_icon)
TAG_REFL_TAG_BLOCK_DEF(s_button_icons_block)
	TAG_REFL_PROPERTY(sequence_index)
	TAG_REFL_PROPERTY(width_offset)
	TAG_REFL_PROPERTY(offset_from_reference_corner_x)
	TAG_REFL_PROPERTY(offset_from_reference_corner_y)
	TAG_REFL_PROPERTY(override_icon_color_alpha)
	TAG_REFL_PROPERTY(override_icon_color_red)
	TAG_REFL_PROPERTY(override_icon_color_greeb)
	TAG_REFL_PROPERTY(override_icon_color_blue)
	TAG_REFL_PROPERTY(frame_rate_030)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(text_index)
REFL_END
	TAG_REFL_TAG_BLOCK(button_icons)
	TAG_REFL_PROPERTY(hud_help_default_color_alpha)
	TAG_REFL_PROPERTY(hud_help_default_color_red)
	TAG_REFL_PROPERTY(hud_help_default_color_green)
	TAG_REFL_PROPERTY(hud_help_default_color_blue)
	TAG_REFL_PROPERTY(hud_help_flashing_color_alpha)
	TAG_REFL_PROPERTY(hud_help_flashing_color_red)
	TAG_REFL_PROPERTY(hud_help_flashing_color_green)
	TAG_REFL_PROPERTY(hud_help_flashing_color_blue)
	TAG_REFL_PROPERTY(hud_help_flash_period)
	TAG_REFL_PROPERTY(hud_help_flash_delay)
	TAG_REFL_PROPERTY(number_of_flashes)
	TAG_REFL_PROPERTY(hud_help_flash_flags)
	TAG_REFL_PROPERTY(hud_help_flash_length)
	TAG_REFL_PROPERTY(disabled_color_alpha)
	TAG_REFL_PROPERTY(disabled_color_red)
	TAG_REFL_PROPERTY(disabled_color_green)
	TAG_REFL_PROPERTY(disabled_color_blue)
	TAG_REFL_PROPERTY(disabled_color_alpha)
	TAG_REFL_PROPERTY(disabled_color_red)
	TAG_REFL_PROPERTY(disabled_color_green)
	TAG_REFL_PROPERTY(disabled_color_blue)
	TAG_REFL_TAG_REFERENCE(hud_messages)
	TAG_REFL_PROPERTY(objective_default_color_alpha)
	TAG_REFL_PROPERTY(objective_default_red)
	TAG_REFL_PROPERTY(objective_default_green)
	TAG_REFL_PROPERTY(objective_default_blue)
	TAG_REFL_PROPERTY(objective_flashing_alpha)
	TAG_REFL_PROPERTY(objective_flashing_red)
	TAG_REFL_PROPERTY(objective_flashing_green)
	TAG_REFL_PROPERTY(objective_flashing_blue)
	TAG_REFL_PROPERTY(objective_flash_period)
	TAG_REFL_PROPERTY(objective_flash_delay)
	TAG_REFL_PROPERTY(number_of_flashes)
	TAG_REFL_PROPERTY(hud_help_flash_flags)
	TAG_REFL_PROPERTY(objective_flash_length)
	TAG_REFL_PROPERTY(disabled_color_alpha)
	TAG_REFL_PROPERTY(disabled_color_red)
	TAG_REFL_PROPERTY(disabled_color_green)
	TAG_REFL_PROPERTY(disabled_color_blue)
	TAG_REFL_PROPERTY(objective_uptime_ticks)
	TAG_REFL_PROPERTY(objective_fade_ticks)
	TAG_REFL_PROPERTY(NUM__waypoint_top_offset)
	TAG_REFL_PROPERTY(waypoint_bottom_offset)
	TAG_REFL_PROPERTY(waypoint_left_offset)
	TAG_REFL_PROPERTY(waypoint_right_offset)
	TAG_REFL_TAG_REFERENCE(arrow_bitmap)
TAG_REFL_TAG_BLOCK_DEF(s_waypoints_arrows_block)
	TAG_REFL_STRING_32(name)
	TAG_REFL_PROPERTY(red)
	TAG_REFL_PROPERTY(green)
	TAG_REFL_PROPERTY(blue)
	TAG_REFL_PROPERTY(opacity)
	TAG_REFL_PROPERTY(translucency)
	TAG_REFL_PROPERTY(on_screen_sequence_index)
	TAG_REFL_PROPERTY(off_screen_sequence_index)
	TAG_REFL_PROPERTY(unused_sequence_index)
	TAG_REFL_PROPERTY(flags)
REFL_END
	TAG_REFL_TAG_BLOCK(waypoints_arrows)
	TAG_REFL_PROPERTY(multiplayer_hud_scale)
	TAG_REFL_PROPERTY(motion_sensor_range)
	TAG_REFL_PROPERTY(motion_sensor_velocity_sensitivity)
	TAG_REFL_PROPERTY(motion_sensor_scale)
	TAG_REFL_PROPERTY(default_title_chapter_bounds_top)
	TAG_REFL_PROPERTY(default_title_chapter_bounds_left)
	TAG_REFL_PROPERTY(default_title_chapter_bounds_bottom)
	TAG_REFL_PROPERTY(default_title_chapter_bounds_right)
	TAG_REFL_PROPERTY(hud_damage_indicator_offset_top)
	TAG_REFL_PROPERTY(hud_damage_indicator_offset_bottom)
	TAG_REFL_PROPERTY(hud_damage_indicator_offset_left)
	TAG_REFL_PROPERTY(hud_damage_indicator_offset_right)
	TAG_REFL_TAG_REFERENCE(damage_indicator_bitmap)
	TAG_REFL_PROPERTY(sequence_index)
	TAG_REFL_PROPERTY(multiplayer_sequence_index)
	TAG_REFL_PROPERTY(damage_indicator_color_blue)
	TAG_REFL_PROPERTY(damage_indicator_color_green)
	TAG_REFL_PROPERTY(damage_indicator_color_red)
	TAG_REFL_PROPERTY(damage_indicator_color_alpha)
	TAG_REFL_PROPERTY(not_much_time_left_default_color_blue)
	TAG_REFL_PROPERTY(not_much_time_left_default_color_green)
	TAG_REFL_PROPERTY(not_much_time_left_default_color_red)
	TAG_REFL_PROPERTY(not_much_time_left_default_color_alpha)
	TAG_REFL_PROPERTY(not_much_time_left_flash_color_blue)
	TAG_REFL_PROPERTY(not_much_time_left_flash_green)
	TAG_REFL_PROPERTY(not_much_time_left_flash_red)
	TAG_REFL_PROPERTY(not_much_time_left_flash_alpha)
	TAG_REFL_PROPERTY(not_much_time_left_flash_period)
	TAG_REFL_PROPERTY(not_much_time_left_flash_delay)
	TAG_REFL_PROPERTY(number_of_flashes)
	TAG_REFL_PROPERTY(not_much_time_left_flash_flags)
	TAG_REFL_PROPERTY(not_much_time_left_flash_length)
	TAG_REFL_PROPERTY(time_out_default_color_alpha)
	TAG_REFL_PROPERTY(time_out_default_color_red)
	TAG_REFL_PROPERTY(time_out_default_color_green)
	TAG_REFL_PROPERTY(time_out_default_color_blue)
	TAG_REFL_PROPERTY(time_out_flashing_color_alpha)
	TAG_REFL_PROPERTY(time_out_flashing_color_red)
	TAG_REFL_PROPERTY(time_out_flashing_color_green)
	TAG_REFL_PROPERTY(time_out_flashing_color_blue)
	TAG_REFL_PROPERTY(time_out_flash_period)
	TAG_REFL_PROPERTY(time_out_flash_delay)
	TAG_REFL_PROPERTY(number_of_flashes)
	TAG_REFL_PROPERTY(time_out_flash_flags)
	TAG_REFL_PROPERTY(time_out_flash_length)
	TAG_REFL_PROPERTY(disabled_time_out_default_color_alpha)
	TAG_REFL_PROPERTY(disabled_time_out_default_color_red)
	TAG_REFL_PROPERTY(disabled_time_out_default_color_green)
	TAG_REFL_PROPERTY(disabled_time_out_default_color_blue)
	TAG_REFL_TAG_REFERENCE(carnage_report_bitmap)
	TAG_REFL_PROPERTY(loading_begin_text)
	TAG_REFL_PROPERTY(loading_end_text)
	TAG_REFL_PROPERTY(checkpoint_begin_text)
	TAG_REFL_PROPERTY(checkpoint_end_text)
	TAG_REFL_TAG_REFERENCE(checkpoint_sound)
	TAG_REFL_TAG_REFERENCE(hud_text)
TAG_REFL_TAG_BLOCK_DEF(s_dashlights_block)
	TAG_REFL_TAG_REFERENCE(bitmap)
	TAG_REFL_TAG_REFERENCE(shader)
	TAG_REFL_PROPERTY(sequence_index)
	TAG_REFL_PROPERTY(time_out_flash_flags)
	TAG_REFL_TAG_REFERENCE(sound)
REFL_END
	TAG_REFL_TAG_BLOCK(dashlights)
TAG_REFL_TAG_BLOCK_DEF(s_waypoint_arrows_block)
	TAG_REFL_TAG_REFERENCE(bitmap)
	TAG_REFL_TAG_REFERENCE(shader)
	TAG_REFL_PROPERTY(sequence_index)
	TAG_REFL_PROPERTY(smallest_size)
	TAG_REFL_PROPERTY(smallest_distance)
	TAG_REFL_TAG_REFERENCE(border_bitmap)
REFL_END
	TAG_REFL_TAG_BLOCK(waypoint_arrows)
TAG_REFL_TAG_BLOCK_DEF(s_waypoints_block)
	TAG_REFL_TAG_REFERENCE(bitmap)
	TAG_REFL_TAG_REFERENCE(sahder)
	TAG_REFL_PROPERTY(onscreen_sequence_index)
	TAG_REFL_PROPERTY(occluded_sequence_index)
	TAG_REFL_PROPERTY(offscreen_sequence_index)
	TAG_REFL_PROPERTY(unused)
REFL_END
	TAG_REFL_TAG_BLOCK(waypoints)
TAG_REFL_TAG_BLOCK_DEF(s_hud_sounds_block)
	TAG_REFL_TAG_REFERENCE(chief_sound)
	TAG_REFL_PROPERTY(flags)
	TAG_REFL_PROPERTY(scale)
	TAG_REFL_TAG_REFERENCE(devrush_sound)
REFL_END
	TAG_REFL_TAG_BLOCK(hud_sounds)
TAG_REFL_TAG_BLOCK_DEF(s_player_training_data_block)
	TAG_REFL_STRING_ID(display_string)
	TAG_REFL_STRING_ID(display_string2)
	TAG_REFL_STRING_ID(display_string3)
	TAG_REFL_PROPERTY(max_display_time)
	TAG_REFL_PROPERTY(display_count)
	TAG_REFL_PROPERTY(disapear_delay)
	TAG_REFL_PROPERTY(redisplay_delay)
	TAG_REFL_PROPERTY(display_delay_s)
REFL_END
	TAG_REFL_TAG_BLOCK(player_training_data)
	TAG_REFL_TAG_REFERENCE(primary_message_sound)
	TAG_REFL_TAG_REFERENCE(secondary_message_sound)
	TAG_REFL_STRING_ID(boot_griefer_string)
	TAG_REFL_STRING_ID(cannot_boot_griefer_string)
	TAG_REFL_TAG_REFERENCE(training_shader)
	TAG_REFL_TAG_REFERENCE(human_training_top_right_)
	TAG_REFL_TAG_REFERENCE(human_training_top_center_)
	TAG_REFL_TAG_REFERENCE(human_training_top_left_)
	TAG_REFL_TAG_REFERENCE(human_training_center_)
	TAG_REFL_TAG_REFERENCE(elite_training_top_right_)
	TAG_REFL_TAG_REFERENCE(elite_training_top_center_)
	TAG_REFL_TAG_REFERENCE(elite_training_top_left_)
	TAG_REFL_TAG_REFERENCE(elite_training_center_)
REFL_END
#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: user_interface_shared_globals
		* group_tag : wigl
 		* header size : 452
		* *********************************************************************/ 
struct s_user_interface_shared_globals_group_definition
{
PAD(0x44);//0x0
float unknown;//0x44
__int16 auto_typing_text:_time;//0x48
__int16 auto_typing_text:_words_per_line;//0x4A
float auto_typing_text:_size;//0x4C
float auto_typing_text:_alpha;//0x50
float red;//0x54
float green;//0x58
float blue;//0x5C
float unknown;//0x60
float blur_blending_speedunknown;//0x64
float blur_blending_speedunknown;//0x68
float blur_color_opacity;//0x6C
float blur_red;//0x70
float blur_green;//0x74
float blur_blue;//0x78
float unused;//0x7C
float unused;//0x80
float unused;//0x84
struct s_dialogs_block
{
string_id dialog_group;//0x0
__int16 unused;//0x4
__int16 window_type_wgit_palette;//0x6
tag_reference unic_text;//0x8
string_id default_header;//0x10
string_id default_content;//0x14
string_id option_1;//0x18
string_id option_2;//0x1C
struct s_variations_block
{
__int16 NUM_;//0x0
__int16 NUM_;//0x2
__int16 NUM_;//0x4
__int16 NUM_;//0x6
string_id header;//0x8
string_id content;//0xC
string_id option_1;//0x10
string_id option_2;//0x14
};
TAG_BLOCK_SIZE_ASSERT(s_variations_block,0x18);
tag_block<s_variations_block> variations;//0x20
};
TAG_BLOCK_SIZE_ASSERT(s_dialogs_block,0x28);
tag_block<s_dialogs_block> dialogs;//0x88
tag_reference selection_change_sound_1;//0x90
tag_reference forward_sound_1;//0x98
tag_reference unknown;//0xA0
tag_reference advance_sound;//0xA8
tag_reference back_sound;//0xB0
tag_reference shortcut_sound;//0xB8
tag_reference selection_change_sound_2;//0xC0
tag_reference keyboard_click_sound;//0xC8
tag_reference message_recieved_sound;//0xD0
tag_reference forward_sound_2;//0xD8
tag_reference countdown_sound;//0xE0
PAD(0x8);//0xE8
tag_reference pickup_health_sound;//0xF0
tag_reference unused;//0xF8
tag_reference unused;//0x100
tag_reference unused;//0x108
tag_reference global_bitmaps;//0x110
tag_reference global_unic;//0x118
struct s_virtual_keyboard_buttons_settings_block
{
__int16 unused;//0x0
__int16 unused;//0x2
__int16 selected_button_brightness;//0x4
__int16 unused;//0x6
struct s_button_switching_effects_block
{
float unused;//0x0
float unknown;//0x4
float unknown;//0x8
float unknown;//0xC
float unknown;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_button_switching_effects_block,0x14);
tag_block<s_button_switching_effects_block> button_switching_effects;//0x8
__int16 selected_button_brightness;//0x10
__int16 unused;//0x12
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-12);//0x14
struct s_button_switching_effects_block
{
float unused;//0x0
float unknown;//0x4
float unknown;//0x8
float unknown;//0xC
float unknown;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_button_switching_effects_block,0x14);
tag_block<s_button_switching_effects_block> button_switching_effects;//0x8
PAD(0xC);//0x10
__int16 unknown;//0x1C
__int16 unused;//0x1E
__int16 unknown;//0x20
__int16 unused;//0x22
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-28);//0x24
struct s_unused_block
{
float unused;//0x0
float unused;//0x4
float unused;//0x8
float unused;//0xC
float unused;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_unused_block,0x14);
tag_block<s_unused_block> unused;//0x8
PAD(0x1C);//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_virtual_keyboard_buttons_settings_block,0x2C);
tag_block<s_virtual_keyboard_buttons_settings_block> virtual_keyboard_buttons_settings;//0x120
PAD(0x8);//0x128
struct s_button_effects_block
{
__int16 unused;//0x0
__int16 unused;//0x2
__int16 brightness;//0x4
__int16 unused;//0x6
struct s_button_switching_effects_block
{
__int16 unknown;//0x0
__int16 unused;//0x2
float unknown;//0x4
float unused;//0x8
float unused;//0xC
float unknown;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_button_switching_effects_block,0x14);
tag_block<s_button_switching_effects_block> button_switching_effects;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_button_effects_block,0x10);
tag_block<s_button_effects_block> button_effects;//0x130
struct s_buttons_palette_block
{
tag_reference skin;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_buttons_palette_block,0x8);
tag_block<s_buttons_palette_block> buttons_palette;//0x138
tag_reference unic;//0x140
tag_reference builtin_gametype_names;//0x148
PAD(0x8);//0x150
struct s_unknown_block
{
__int16 unknown;//0x0
__int16 unknown;//0x2
};
TAG_BLOCK_SIZE_ASSERT(s_unknown_block,0x4);
tag_block<s_unknown_block> unknown;//0x158
__int16 main_window_header_text_#font_type#;//0x160
__int16 pop_up_window_header_text_#font_type#;//0x162
__int16 pop_up_window_confirmation_dialog_header_text_#font_type#;//0x164
__int16 unknown_header_fontype;//0x166
float unknown_header_fontype;//0x168
float red_header_tittle;//0x16C
float green_header_tittle;//0x170
float blue_header_tittle;//0x174
__int16 main_window_header_text_coord_y;//0x178
__int16 main_window_header_text_coord_x;//0x17A
__int16 pop_up_window_confirmation_dialog_header_text_coord_x;//0x17C
__int16 pop_up_window_confirmation_dialog_header_text_coord_x;//0x17E
__int16 main_window_buttons_coord_y;//0x180
__int16 main_window_buttons_coord_x;//0x182
__int16 main_window_buttons_coord_y;//0x184
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-390);//0x186
__int16 main_window_buttons_coord_x;//0x0
PAD(0x186);//0x2
__int16 game_setup_header_text_coord_y;//0x188
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-10);//0x18A
__int16 game_setup_header_text_coord_x;//0x180
PAD(0xA);//0x182
__int16 pop_up_confirmation_dialog_header_text_coord_y;//0x18C
__int16 pop_up_confirmation_dialog_header_text_coord_x;//0x18E
__int16 game_setup_buttons_coord_y;//0x190
__int16 game_setup_buttons_coord_x;//0x192
__int16 keyboard_window_buttons_coord_y;//0x194
__int16 keyboard_window_buttons_coord_x;//0x196
__int16 unknown_header_text_coords_y;//0x198
__int16 unknown_header_text_coords_x;//0x19A
__int16 unknown_header_text_coords_y;//0x19C
__int16 unknown_header_text_coords_x;//0x19E
__int16 unknown_button_coords_y;//0x1A0
__int16 unknown_button_coords_x;//0x1A2
__int16 campaigngametype_settings_pop_up_dialog_button_y;//0x1A4
__int16 campaigngametype_settings_pop_up_dialog_button_x;//0x1A6
__int16 pop_up_confirmation_dialog_header_text_y;//0x1A8
__int16 pop_up_confirmation_dialog_header_text_x;//0x1AA
__int16 unknown_header_text_coords_y;//0x1AC
__int16 unknown_header_text_coords_x;//0x1AE
__int16 unknown_button_coords_y;//0x1B0
__int16 unknown_button_coords_x;//0x1B2
__int16 pop_up_confirmation_dialog_button_coord_y;//0x1B4
__int16 pop_up_confirmation_dialog_button_coord_x;//0x1B6
tag_reference music;//0x1B8
unsigned __int32 music_duration_time;//0x1C0
};
TAG_GROUP_SIZE_ASSERT(s_user_interface_shared_globals_group_definition,0x1C4);
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_shared_globals_group_definition::s_dialogs_group_definition::s_variations_block)	TAG_REFL_PROPERTY(NUM_)	TAG_REFL_PROPERTY(NUM_)	TAG_REFL_PROPERTY(NUM_)	TAG_REFL_PROPERTY(NUM_)	TAG_REFL_STRING_ID(header)	TAG_REFL_STRING_ID(content)	TAG_REFL_STRING_ID(option_1)	TAG_REFL_STRING_ID(option_2)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_shared_globals_group_definition::s_dialogs_block)	TAG_REFL_STRING_ID(dialog_group)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(window_type_wgit_palette)	TAG_REFL_TAG_REFERENCE(unic_text)	TAG_REFL_STRING_ID(default_header)	TAG_REFL_STRING_ID(default_content)	TAG_REFL_STRING_ID(option_1)	TAG_REFL_STRING_ID(option_2)	TAG_REFL_TAG_BLOCK(variations)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_shared_globals_group_definition::s_virtual_keyboard_buttons_settings_group_definition::s_button_switching_effects_block)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_shared_globals_group_definition::s_virtual_keyboard_buttons_settings_group_definition::s_button_switching_effects_block)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_shared_globals_group_definition::s_virtual_keyboard_buttons_settings_group_definition::s_unused_block)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_shared_globals_group_definition::s_virtual_keyboard_buttons_settings_block)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(selected_button_brightness)	TAG_REFL_PROPERTY(unused)	TAG_REFL_TAG_BLOCK(button_switching_effects)	TAG_REFL_PROPERTY(selected_button_brightness)	TAG_REFL_PROPERTY(unused)	TAG_REFL_TAG_BLOCK(button_switching_effects)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unused)	TAG_REFL_TAG_BLOCK(unused)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_shared_globals_group_definition::s_button_effects_group_definition::s_button_switching_effects_block)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_shared_globals_group_definition::s_button_effects_block)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(brightness)	TAG_REFL_PROPERTY(unused)	TAG_REFL_TAG_BLOCK(button_switching_effects)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_shared_globals_group_definition::s_buttons_palette_block)	TAG_REFL_TAG_REFERENCE(skin)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_shared_globals_group_definition::s_unknown_block)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL(s_user_interface_shared_globals_group_definition)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(auto_typing_text:_time)	TAG_REFL_PROPERTY(auto_typing_text:_words_per_line)	TAG_REFL_PROPERTY(auto_typing_text:_size)	TAG_REFL_PROPERTY(auto_typing_text:_alpha)	TAG_REFL_PROPERTY(red)	TAG_REFL_PROPERTY(green)	TAG_REFL_PROPERTY(blue)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(blur_blending_speedunknown)	TAG_REFL_PROPERTY(blur_blending_speedunknown)	TAG_REFL_PROPERTY(blur_color_opacity)	TAG_REFL_PROPERTY(blur_red)	TAG_REFL_PROPERTY(blur_green)	TAG_REFL_PROPERTY(blur_blue)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_TAG_BLOCK(dialogs)	TAG_REFL_TAG_REFERENCE(selection_change_sound_1)	TAG_REFL_TAG_REFERENCE(forward_sound_1)	TAG_REFL_TAG_REFERENCE(unknown)	TAG_REFL_TAG_REFERENCE(advance_sound)	TAG_REFL_TAG_REFERENCE(back_sound)	TAG_REFL_TAG_REFERENCE(shortcut_sound)	TAG_REFL_TAG_REFERENCE(selection_change_sound_2)	TAG_REFL_TAG_REFERENCE(keyboard_click_sound)	TAG_REFL_TAG_REFERENCE(message_recieved_sound)	TAG_REFL_TAG_REFERENCE(forward_sound_2)	TAG_REFL_TAG_REFERENCE(countdown_sound)	TAG_REFL_TAG_REFERENCE(pickup_health_sound)	TAG_REFL_TAG_REFERENCE(unused)	TAG_REFL_TAG_REFERENCE(unused)	TAG_REFL_TAG_REFERENCE(unused)	TAG_REFL_TAG_REFERENCE(global_bitmaps)	TAG_REFL_TAG_REFERENCE(global_unic)	TAG_REFL_TAG_BLOCK(virtual_keyboard_buttons_settings)	TAG_REFL_TAG_BLOCK(button_effects)	TAG_REFL_TAG_BLOCK(buttons_palette)	TAG_REFL_TAG_REFERENCE(unic)	TAG_REFL_TAG_REFERENCE(builtin_gametype_names)	TAG_REFL_TAG_BLOCK(unknown)	TAG_REFL_PROPERTY(main_window_header_text_#font_type#)	TAG_REFL_PROPERTY(pop_up_window_header_text_#font_type#)	TAG_REFL_PROPERTY(pop_up_window_confirmation_dialog_header_text_#font_type#)	TAG_REFL_PROPERTY(unknown_header_fontype)	TAG_REFL_PROPERTY(unknown_header_fontype)	TAG_REFL_PROPERTY(red_header_tittle)	TAG_REFL_PROPERTY(green_header_tittle)	TAG_REFL_PROPERTY(blue_header_tittle)	TAG_REFL_PROPERTY(main_window_header_text_coord_y)	TAG_REFL_PROPERTY(main_window_header_text_coord_x)	TAG_REFL_PROPERTY(pop_up_window_confirmation_dialog_header_text_coord_x)	TAG_REFL_PROPERTY(pop_up_window_confirmation_dialog_header_text_coord_x)	TAG_REFL_PROPERTY(main_window_buttons_coord_y)	TAG_REFL_PROPERTY(main_window_buttons_coord_x)	TAG_REFL_PROPERTY(main_window_buttons_coord_y)	TAG_REFL_PROPERTY(main_window_buttons_coord_x)	TAG_REFL_PROPERTY(game_setup_header_text_coord_y)	TAG_REFL_PROPERTY(game_setup_header_text_coord_x)	TAG_REFL_PROPERTY(pop_up_confirmation_dialog_header_text_coord_y)	TAG_REFL_PROPERTY(pop_up_confirmation_dialog_header_text_coord_x)	TAG_REFL_PROPERTY(game_setup_buttons_coord_y)	TAG_REFL_PROPERTY(game_setup_buttons_coord_x)	TAG_REFL_PROPERTY(keyboard_window_buttons_coord_y)	TAG_REFL_PROPERTY(keyboard_window_buttons_coord_x)	TAG_REFL_PROPERTY(unknown_header_text_coords_y)	TAG_REFL_PROPERTY(unknown_header_text_coords_x)	TAG_REFL_PROPERTY(unknown_header_text_coords_y)	TAG_REFL_PROPERTY(unknown_header_text_coords_x)	TAG_REFL_PROPERTY(unknown_button_coords_y)	TAG_REFL_PROPERTY(unknown_button_coords_x)	TAG_REFL_PROPERTY(campaigngametype_settings_pop_up_dialog_button_y)	TAG_REFL_PROPERTY(campaigngametype_settings_pop_up_dialog_button_x)	TAG_REFL_PROPERTY(pop_up_confirmation_dialog_header_text_y)	TAG_REFL_PROPERTY(pop_up_confirmation_dialog_header_text_x)	TAG_REFL_PROPERTY(unknown_header_text_coords_y)	TAG_REFL_PROPERTY(unknown_header_text_coords_x)	TAG_REFL_PROPERTY(unknown_button_coords_y)	TAG_REFL_PROPERTY(unknown_button_coords_x)	TAG_REFL_PROPERTY(pop_up_confirmation_dialog_button_coord_y)	TAG_REFL_PROPERTY(pop_up_confirmation_dialog_button_coord_x)	TAG_REFL_TAG_REFERENCE(music)	TAG_REFL_PROPERTY(music_duration_time)REFL_END

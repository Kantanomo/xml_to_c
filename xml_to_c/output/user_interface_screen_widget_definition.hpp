#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: user_interface_screen_widget
		* group_tag : wgit
 		* header size : 104
		* *********************************************************************/ 
struct s_user_interface_screen_widget_group_definition
{
__int16 back_ground_blur_blur=0_noblur=37;//0x0
__int16 unused;//0x2
__int16 menu_id;//0x4
enum class e_visibles_xab_options_buttons : __int16
{
a_select_b_cancel = FLAG(0),
a_select_b_cancel = FLAG(1),
x_party_privacy_a_select_b_cancel = FLAG(2),
x_options = FLAG(3),
a_select_b_back = FLAG(4),
};
e_visibles_xab_options_buttons visibles_xab_options_buttons;//0x6
float unknown;//0x8
float unknown;//0xC
float unknown;//0x10
float unknown;//0x14
tag_reference unic;//0x18
struct s_menu_content_block
{
__int16 unused;//0x0
__int16 transition_type;//0x2
struct s_buttons_1_block
{
__int16 unused;//0x0
__int16 unused;//0x2
__int16 button_transition_type_bitmask;//0x4
__int16 unused;//0x6
__int16 unused;//0x8
__int16 font_type;//0xA
float unused;//0xC
float text_color_red;//0x10
float text_color_green;//0x14
float text_color_blue;//0x18
__int16 bitmap_placement_positive_coord_y;//0x1C
__int16 bitmap_placement_positive_coord_x;//0x1E
__int16 text_placement_negative_coord_y;//0x20
__int16 text_placement_negative_coord_x;//0x22
tag_reference bitm;//0x24
unsigned __int8 coord;//0x2C
unsigned __int8 coord;//0x2D
unsigned __int8 coord;//0x2E
unsigned __int8 coord;//0x2F
unsigned __int8 something_count;//0x30
unsigned __int8 bitmap_transiton_type_bitmask;//0x31
unsigned __int8 unused;//0x32
unsigned __int8 brightness_something;//0x33
__int16 unknown;//0x34
__int16 unused;//0x36
__int16 unknown;//0x38
__int16 unused;//0x3A
};
TAG_BLOCK_SIZE_ASSERT(s_buttons_1_block,0x3C);
tag_block<s_buttons_1_block> buttons_1;//0x4
struct s_buttons_2_block
{
PAD(0x8);//0x0
enum class e_buttons_loop : __int16
{
yes = 1,
no = 0,
};
e_buttons_loop buttons_loop;//0x8
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-6);//0xA
__int16 unused;//0x4
PAD(0x2);//0x6
__int16 button_type_palette_[skin];//0x8
PAD(0x2);//0xA
__int16 number_of_visibles_buttons;//0xC
PAD(0x2);//0xE
__int16 buttons_placement_coord_x;//0x10
__int16 buttons_placement_coord_y;//0x12
__int16 transition_type_bitmask;//0x14
__int16 variation;//0x16
};
TAG_BLOCK_SIZE_ASSERT(s_buttons_2_block,0x18);
tag_block<s_buttons_2_block> buttons_2;//0xC
float unused;//0x14
float unused;//0x18
struct s_text_strings_block
{
enum class e_text_options : __int32
{
NUM_1 = FLAG(0),
NUM_2 = FLAG(1),
pulsing = FLAG(2),
auto_typing_text = FLAG(3),
NUM_5 = FLAG(4),
};
e_text_options text_options;//0x0
__int16 transtion_type_bitmask;//0x4
__int16 variation;//0x6
__int16 unused;//0x8
__int16 font_type;//0xA
float alpha;//0xC
float color_red;//0x10
float color_green;//0x14
float color_blue;//0x18
__int16 text_placement_coord_y_from_top;//0x1C
__int16 text_placement_coord_x_from_right;//0x1E
__int16 text_placement_coord_y_from_bottom;//0x20
__int16 text_placement_coord_x_from_left;//0x22
string_id string_name;//0x24
unsigned __int32 unknown;//0x28
};
TAG_BLOCK_SIZE_ASSERT(s_text_strings_block,0x2C);
tag_block<s_text_strings_block> text_strings;//0x1C
struct s_ui_bitmaps_block
{
__int16 unknown;//0x0
__int16 unused;//0x2
__int16 transition_type_bitmask;//0x4
__int16 variation;//0x6
enum class e_alpha_transparence : __int16
{
normal = 0,
inverted = 1,
};
e_alpha_transparence alpha_transparence;//0x8
__int16 xbox_live_bitmap_setting;//0xA
__int16 bitmap_placement_coord_x;//0xC
__int16 bitmap_placement_coord_y;//0xE
float horizontal_bitmap_scrolling_speed;//0x10
float unused;//0x14
tag_reference bitm;//0x18
__int16 bitmap_layer_level;//0x20
__int16 unused;//0x22
float unused;//0x24
__int16 coord_x_for_;//0x28
__int16 coord_y_for_;//0x2A
float unused;//0x2C
float unused;//0x30
float unused;//0x34
};
TAG_BLOCK_SIZE_ASSERT(s_ui_bitmaps_block,0x38);
tag_block<s_ui_bitmaps_block> ui_bitmaps;//0x24
struct s_modelsscript_objects:_scenerybipeds_block
{
__int16 unused;//0x0
__int16 unused;//0x2
__int16 transition_type_bitmask;//0x4
__int16 variation;//0x6
__int16 unknown;//0x8
__int16 unused;//0xA
struct s_script_object_block
{
string32 script_object_name;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_script_object_block,0x20);
tag_block<s_script_object_block> script_object;//0xC
struct s_unknown_block
{
string32 unknown;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_unknown_block,0x20);
tag_block<s_unknown_block> unknown;//0x14
float unknown;//0x1C
float unknown;//0x20
float unknown;//0x24
float unknown;//0x28
float unknown;//0x2C
float unknown;//0x30
unsigned __int8 relatives:_coord_size_palcement;//0x34
unsigned __int8 relatives:_coord_size_palcement;//0x35
unsigned __int8 relatives:_coord_size_palcement;//0x36
unsigned __int8 relatives:_coord_size_palcement;//0x37
unsigned __int8 relatives:_coord_size_palcement;//0x38
unsigned __int8 relatives:_coord_size_palcement;//0x39
unsigned __int8 relatives:_coord_size_palcement;//0x3A
unsigned __int8 relatives:_coord_size_palcement;//0x3B
unsigned __int8 relatives:_coord_size_palcement;//0x3C
unsigned __int8 relatives:_coord_size_palcement;//0x3D
unsigned __int8 relatives:_coord_size_palcement;//0x3E
unsigned __int8 relatives:_coord_size_palcement;//0x3F
float unused;//0x40
float unused;//0x44
float unused;//0x48
};
TAG_BLOCK_SIZE_ASSERT(s_modelsscript_objects:_scenerybipeds_block,0x4C);
tag_block<s_modelsscript_objects:_scenerybipeds_block> modelsscript_objects:_scenerybipeds;//0x2C
float unused;//0x34
float unused;//0x38
float unused;//0x3C
float unused;//0x40
struct s_variable_buttons_block
{
PAD(0x48);//0x0
float unused;//0x48
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-72);//0x4C
tag_reference skin;//0x4
__int16 coord_x;//0xC
__int16 coord_y;//0xE
unsigned __int8 unknown;//0x10
unsigned __int8 max_visible_buttons;//0x11
unsigned __int8 unknown;//0x12
unsigned __int8 unknown;//0x13
__int16 coord_x;//0x14
__int16 coord_y;//0x16
};
TAG_BLOCK_SIZE_ASSERT(s_variable_buttons_block,0x18);
tag_block<s_variable_buttons_block> variable_buttons;//0x44
};
TAG_BLOCK_SIZE_ASSERT(s_menu_content_block,0x4C);
tag_block<s_menu_content_block> menu_content;//0x20
__int16 font_type;//0x28
__int16 unused;//0x2A
string_id header_title_text_string;//0x2C
struct s_descriptionshelp_text_block
{
string_id text_strings;//0x0
struct s_notification_messages_block
{
string_id text_strings;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_notification_messages_block,0x4);
tag_block<s_notification_messages_block> notification_messages;//0x4
};
TAG_BLOCK_SIZE_ASSERT(s_descriptionshelp_text_block,0xC);
tag_block<s_descriptionshelp_text_block> descriptionshelp_text;//0x30
struct s_prededicated_resources:_bitmap_tags_block
{
tag_reference bitm;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_prededicated_resources:_bitmap_tags_block,0x8);
tag_block<s_prededicated_resources:_bitmap_tags_block> prededicated_resources:_bitmap_tags;//0x38
float sp_loading_screen_effects_settings;//0x40
float sp_loading_screen_effects_settings;//0x44
float sp_loading_screen_effects_settings;//0x48
float sp_loading_screen_effects_settings;//0x4C
float sp_loading_screen_effects_settings;//0x50
float sp_loading_screen_effects_settings;//0x54
float sp_loading_screen_effects_settings;//0x58
float sp_loading_screen_effects_settings;//0x5C
float sp_loading_screen_effects_settings;//0x60
float sp_loading_screen_effects_settings;//0x64
};
TAG_GROUP_SIZE_ASSERT(s_user_interface_screen_widget_group_definition,0x68);
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_screen_widget_group_definition::s_menu_content_block::s_buttons_1_block)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(button_transition_type_bitmask)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(font_type)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(text_color_red)	TAG_REFL_PROPERTY(text_color_green)	TAG_REFL_PROPERTY(text_color_blue)	TAG_REFL_PROPERTY(bitmap_placement_positive_coord_y)	TAG_REFL_PROPERTY(bitmap_placement_positive_coord_x)	TAG_REFL_PROPERTY(text_placement_negative_coord_y)	TAG_REFL_PROPERTY(text_placement_negative_coord_x)	TAG_REFL_TAG_REFERENCE(bitm)	TAG_REFL_PROPERTY(coord)	TAG_REFL_PROPERTY(coord)	TAG_REFL_PROPERTY(coord)	TAG_REFL_PROPERTY(coord)	TAG_REFL_PROPERTY(something_count)	TAG_REFL_PROPERTY(bitmap_transiton_type_bitmask)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(brightness_something)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unused)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_screen_widget_group_definition::s_menu_content_block::s_buttons_2_block)	TAG_REFL_PROPERTY(buttons_loop)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(button_type_palette_[skin])	TAG_REFL_PROPERTY(number_of_visibles_buttons)	TAG_REFL_PROPERTY(buttons_placement_coord_x)	TAG_REFL_PROPERTY(buttons_placement_coord_y)	TAG_REFL_PROPERTY(transition_type_bitmask)	TAG_REFL_PROPERTY(variation)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_screen_widget_group_definition::s_menu_content_block::s_text_strings_block)	TAG_REFL_PROPERTY(text_options)	TAG_REFL_PROPERTY(transtion_type_bitmask)	TAG_REFL_PROPERTY(variation)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(font_type)	TAG_REFL_PROPERTY(alpha)	TAG_REFL_PROPERTY(color_red)	TAG_REFL_PROPERTY(color_green)	TAG_REFL_PROPERTY(color_blue)	TAG_REFL_PROPERTY(text_placement_coord_y_from_top)	TAG_REFL_PROPERTY(text_placement_coord_x_from_right)	TAG_REFL_PROPERTY(text_placement_coord_y_from_bottom)	TAG_REFL_PROPERTY(text_placement_coord_x_from_left)	TAG_REFL_STRING_ID(string_name)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_screen_widget_group_definition::s_menu_content_block::s_ui_bitmaps_block)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(transition_type_bitmask)	TAG_REFL_PROPERTY(variation)	TAG_REFL_PROPERTY(alpha_transparence)	TAG_REFL_PROPERTY(xbox_live_bitmap_setting)	TAG_REFL_PROPERTY(bitmap_placement_coord_x)	TAG_REFL_PROPERTY(bitmap_placement_coord_y)	TAG_REFL_PROPERTY(horizontal_bitmap_scrolling_speed)	TAG_REFL_PROPERTY(unused)	TAG_REFL_TAG_REFERENCE(bitm)	TAG_REFL_PROPERTY(bitmap_layer_level)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(coord_x_for_)	TAG_REFL_PROPERTY(coord_y_for_)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_screen_widget_group_definition::s_menu_content_block::s_modelsscript_objects:_scenerybipeds_block::s_script_object_block)	TAG_REFL_STRING_32(script_object_name)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_screen_widget_group_definition::s_menu_content_block::s_modelsscript_objects:_scenerybipeds_block::s_unknown_block)	TAG_REFL_STRING_32(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_screen_widget_group_definition::s_menu_content_block::s_modelsscript_objects:_scenerybipeds_block)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(transition_type_bitmask)	TAG_REFL_PROPERTY(variation)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unused)	TAG_REFL_TAG_BLOCK(script_object)	TAG_REFL_TAG_BLOCK(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(relatives:_coord_size_palcement)	TAG_REFL_PROPERTY(relatives:_coord_size_palcement)	TAG_REFL_PROPERTY(relatives:_coord_size_palcement)	TAG_REFL_PROPERTY(relatives:_coord_size_palcement)	TAG_REFL_PROPERTY(relatives:_coord_size_palcement)	TAG_REFL_PROPERTY(relatives:_coord_size_palcement)	TAG_REFL_PROPERTY(relatives:_coord_size_palcement)	TAG_REFL_PROPERTY(relatives:_coord_size_palcement)	TAG_REFL_PROPERTY(relatives:_coord_size_palcement)	TAG_REFL_PROPERTY(relatives:_coord_size_palcement)	TAG_REFL_PROPERTY(relatives:_coord_size_palcement)	TAG_REFL_PROPERTY(relatives:_coord_size_palcement)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_screen_widget_group_definition::s_menu_content_block::s_variable_buttons_block)	TAG_REFL_PROPERTY(unused)	TAG_REFL_TAG_REFERENCE(skin)	TAG_REFL_PROPERTY(coord_x)	TAG_REFL_PROPERTY(coord_y)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(max_visible_buttons)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(coord_x)	TAG_REFL_PROPERTY(coord_y)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_screen_widget_group_definition::s_menu_content_block)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(transition_type)	TAG_REFL_TAG_BLOCK(buttons_1)	TAG_REFL_TAG_BLOCK(buttons_2)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_TAG_BLOCK(text_strings)	TAG_REFL_TAG_BLOCK(ui_bitmaps)	TAG_REFL_TAG_BLOCK(modelsscript_objects:_scenerybipeds)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_TAG_BLOCK(variable_buttons)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_screen_widget_group_definition::s_descriptionshelp_text_block::s_notification_messages_block)	TAG_REFL_STRING_ID(text_strings)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_screen_widget_group_definition::s_descriptionshelp_text_block)	TAG_REFL_STRING_ID(text_strings)	TAG_REFL_TAG_BLOCK(notification_messages)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_screen_widget_group_definition::s_prededicated_resources:_bitmap_tags_block)	TAG_REFL_TAG_REFERENCE(bitm)REFL_END
TAG_REFL(s_user_interface_screen_widget_group_definition)	TAG_REFL_PROPERTY(back_ground_blur_blur=0_noblur=37)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(menu_id)	TAG_REFL_PROPERTY(visibles_xab_options_buttons)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_TAG_REFERENCE(unic)	TAG_REFL_TAG_BLOCK(menu_content)	TAG_REFL_PROPERTY(font_type)	TAG_REFL_PROPERTY(unused)	TAG_REFL_STRING_ID(header_title_text_string)	TAG_REFL_TAG_BLOCK(descriptionshelp_text)	TAG_REFL_TAG_BLOCK(prededicated_resources:_bitmap_tags)	TAG_REFL_PROPERTY(sp_loading_screen_effects_settings)	TAG_REFL_PROPERTY(sp_loading_screen_effects_settings)	TAG_REFL_PROPERTY(sp_loading_screen_effects_settings)	TAG_REFL_PROPERTY(sp_loading_screen_effects_settings)	TAG_REFL_PROPERTY(sp_loading_screen_effects_settings)	TAG_REFL_PROPERTY(sp_loading_screen_effects_settings)	TAG_REFL_PROPERTY(sp_loading_screen_effects_settings)	TAG_REFL_PROPERTY(sp_loading_screen_effects_settings)	TAG_REFL_PROPERTY(sp_loading_screen_effects_settings)	TAG_REFL_PROPERTY(sp_loading_screen_effects_settings)REFL_END

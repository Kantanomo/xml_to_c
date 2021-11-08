#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: user_interface_list_skin
		* group_tag : skin
 		* header size : 60
		* *********************************************************************/ 
struct s_user_interface_list_skin_group_definition
{
float unused;//0x0
tag_reference bitm;//0x4
__int16 coord_x_top_arrow;//0xC
__int16 coord_y_top_arrow;//0xE
__int16 coord_x_bottom_arrow;//0x10
__int16 coord_y_bottom_arrow;//0x12
struct s_button_effects_block
{
float unused;//0x0
__int16 brightness;//0x4
__int16 brightness_only_once;//0x6
struct s_button_switching_effects_block
{
float unused;//0x0
float bitmap_flashing_speed;//0x4
float button_shifting_space;//0x8
float unknown;//0xC
float unknown;//0x10
};
TAG_BLOCK_SIZE_ASSERT(s_button_switching_effects_block,0x14);
tag_block<s_button_switching_effects_block> button_switching_effects;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_button_effects_block,0x10);
tag_block<s_button_effects_block> button_effects;//0x14
struct s_buttons_text_strings_block
{
enum class e_text_options : __int32
{
bit_0 = FLAG(0),
bit_1 = FLAG(1),
pulsing = FLAG(2),
really_tiny_text = FLAG(3),
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
e_text_options text_options;//0x0
enum class e_transition_effectmovement : __int32
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
e_transition_effectmovement transition_effectmovement;//0x4
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
TAG_BLOCK_SIZE_ASSERT(s_buttons_text_strings_block,0x2C);
tag_block<s_buttons_text_strings_block> buttons_text_strings;//0x1C
struct s_button_bitmaps_block
{
__int16 unknown;//0x0
__int16 unknown;//0x2
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-4);//0x4
enum class e_transition_effectmovement : __int32
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
e_transition_effectmovement transition_effectmovement;//0x0
PAD(0x4);//0x4
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
__int16 unused;//0x28
__int16 unused;//0x2A
string_id bitmap_color_variation_fuction;//0x2C
float unused;//0x30
float unused;//0x34
};
TAG_BLOCK_SIZE_ASSERT(s_button_bitmaps_block,0x38);
tag_block<s_button_bitmaps_block> button_bitmaps;//0x24
struct s_emblem_block
{
PAD(0x8);//0x0
enum class e_space_between_buttons : __int16
{
yes = 1,
no = 0,
};
e_space_between_buttons space_between_buttons;//0x8
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-8);//0xA
__int16 unused;//0x2
__int16 unknown;//0x4
__int16 unknown;//0x6
__int16 xbox_live_bitmap_setting;//0x8
__int16 unused;//0xA
tag_reference bitm;//0xC
tag_reference shad;//0x14
__int16 coord_x;//0x1C
__int16 coord_y;//0x1E
__int16 coord_x;//0x20
__int16 coord_y;//0x22
};
TAG_BLOCK_SIZE_ASSERT(s_emblem_block,0x24);
tag_block<s_emblem_block> emblem;//0x2C
PAD(0x10);//0x34
struct s_buttons_holder_block
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
TAG_BLOCK_SIZE_ASSERT(s_buttons_holder_block,0x18);
tag_block<s_buttons_holder_block> buttons_holder;//0x44
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-16);//0x4C
};
TAG_GROUP_SIZE_ASSERT(s_user_interface_list_skin_group_definition,0x3C);
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_list_skin_group_definition::s_button_effects_block::s_button_switching_effects_block)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(bitmap_flashing_speed)	TAG_REFL_PROPERTY(button_shifting_space)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_list_skin_group_definition::s_button_effects_block)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(brightness)	TAG_REFL_PROPERTY(brightness_only_once)	TAG_REFL_TAG_BLOCK(button_switching_effects)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_list_skin_group_definition::s_buttons_text_strings_block)	TAG_REFL_PROPERTY(text_options)	TAG_REFL_PROPERTY(transition_effectmovement)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(font_type)	TAG_REFL_PROPERTY(alpha)	TAG_REFL_PROPERTY(color_red)	TAG_REFL_PROPERTY(color_green)	TAG_REFL_PROPERTY(color_blue)	TAG_REFL_PROPERTY(text_placement_coord_y_from_top)	TAG_REFL_PROPERTY(text_placement_coord_x_from_right)	TAG_REFL_PROPERTY(text_placement_coord_y_from_bottom)	TAG_REFL_PROPERTY(text_placement_coord_x_from_left)	TAG_REFL_STRING_ID(string_name)	TAG_REFL_PROPERTY(unknown)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_list_skin_group_definition::s_button_bitmaps_block)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(transition_effectmovement)	TAG_REFL_PROPERTY(alpha_transparence)	TAG_REFL_PROPERTY(xbox_live_bitmap_setting)	TAG_REFL_PROPERTY(bitmap_placement_coord_x)	TAG_REFL_PROPERTY(bitmap_placement_coord_y)	TAG_REFL_PROPERTY(horizontal_bitmap_scrolling_speed)	TAG_REFL_PROPERTY(unused)	TAG_REFL_TAG_REFERENCE(bitm)	TAG_REFL_PROPERTY(bitmap_layer_level)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)	TAG_REFL_STRING_ID(bitmap_color_variation_fuction)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unused)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_list_skin_group_definition::s_emblem_block)	TAG_REFL_PROPERTY(space_between_buttons)	TAG_REFL_PROPERTY(unused)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(xbox_live_bitmap_setting)	TAG_REFL_PROPERTY(unused)	TAG_REFL_TAG_REFERENCE(bitm)	TAG_REFL_TAG_REFERENCE(shad)	TAG_REFL_PROPERTY(coord_x)	TAG_REFL_PROPERTY(coord_y)	TAG_REFL_PROPERTY(coord_x)	TAG_REFL_PROPERTY(coord_y)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_user_interface_list_skin_group_definition::s_buttons_holder_block)	TAG_REFL_PROPERTY(unused)	TAG_REFL_TAG_REFERENCE(skin)	TAG_REFL_PROPERTY(coord_x)	TAG_REFL_PROPERTY(coord_y)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(max_visible_buttons)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(coord_x)	TAG_REFL_PROPERTY(coord_y)REFL_END
TAG_REFL(s_user_interface_list_skin_group_definition)	TAG_REFL_PROPERTY(unused)	TAG_REFL_TAG_REFERENCE(bitm)	TAG_REFL_PROPERTY(coord_x_top_arrow)	TAG_REFL_PROPERTY(coord_y_top_arrow)	TAG_REFL_PROPERTY(coord_x_bottom_arrow)	TAG_REFL_PROPERTY(coord_y_bottom_arrow)	TAG_REFL_TAG_BLOCK(button_effects)	TAG_REFL_TAG_BLOCK(buttons_text_strings)	TAG_REFL_TAG_BLOCK(button_bitmaps)	TAG_REFL_TAG_BLOCK(emblem)	TAG_REFL_TAG_BLOCK(buttons_holder)REFL_END

#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: bitmap
		* group_tag : bitm
 		* header size : 76
		* *********************************************************************/ 
struct s_bitmap_group_definition
{
enum class e_type : __int16
{
NUM_2d_textures = 0,
NUM_3d_textures = 1,
cube_maps = 2,
sprites = 3,
interface_bitmaps = 4,
};
e_type type;//0x0
enum class e_format : __int16
{
compressed_with_colorkey_transparency = 0,
compressed_with_explicit_alpha = 1,
compressed_with_interpolated_alpha = 2,
NUM_16bit_color = 3,
NUM_32bit_color = 4,
monochrome = 5,
};
e_format format;//0x2
enum class e_usage : __int16
{
alpha_blend = 0,
default = 1,
height_map = 2,
detail_map = 3,
light_map = 4,
vector_map = 5,
height_map_blue_255 = 6,
embm = 7,
height_map_a8l8 = 8,
height_map_g8b8 = 9,
height_map_g8b8_w_alpha = 10,
};
e_usage usage;//0x4
enum class e_flags : __int16
{
enable_diffusion_dithering = FLAG(0),
disable_height_map_compression = FLAG(1),
uniform_sprite_sequnces = FLAG(2),
filthy_sprite_bugfix = FLAG(3),
use_sharp_bump_filter = FLAG(4),
bit_5 = FLAG(5),
use_clampedmirrored_bump_filter = FLAG(6),
invert_detail_fade = FLAG(7),
swap_xy_vector_components = FLAG(8),
convert_from_signed = FLAG(9),
convert_to_signed = FLAG(10),
import_mipmap_chains = FLAG(11),
internationally_true_color = FLAG(12),
};
e_flags flags;//0x6
float detail_fade_factor;//0x8
float sharpen_amount;//0xC
float bump_height;//0x10
enum class e_sprite_budget_size : __int16
{
NUM_32x32 = 0,
NUM_64x64 = 1,
NUM_128x128 = 2,
NUM_256x256 = 3,
NUM_512x512 = 4,
NUM_1024x1024 = 5,
};
e_sprite_budget_size sprite_budget_size;//0x14
__int16 sprite_budget_count;//0x16
__int16 color_plate_width;//0x18
__int16 color_plate_height;//0x1A
__int32 compressed_color_plate_data;//0x1C
PAD(0x4);//0x20
__int32 processed_pixel_data;//0x24
PAD(0x4);//0x28
float blur_filter_size;//0x2C
float alpha_bias;//0x30
__int16 mipmap_count;//0x34
enum class e_sprite_usage : __int16
{
blendaddsubtractmax = 0,
multiplymin = 1,
double_multiply = 2,
};
e_sprite_usage sprite_usage;//0x36
__int16 sprite_spacing;//0x38
enum class e_force_format : __int16
{
default = 0,
force_g8b8 = 1,
force_dxt1 = 2,
force_dxt3 = 3,
force_dxt5 = 4,
force_alphaluminance8 = 5,
force_a4r4g4b4 = 6,
};
e_force_format force_format;//0x3A
struct s_squences_block
{
string32 name;//0x0
__int16 first_bitmap_index;//0x20
__int16 bitmap_count;//0x22
PAD(0x10);//0x24
struct s_sprites_block
{
__int16 bitmap_index;//0x0
__int16 unknown;//0x2
PAD(0x4);//0x4
float left;//0x8
float right;//0xC
float top;//0x10
float bottom;//0x14
float registration_point_x;//0x18
float registration_point_y;//0x1C
};
TAG_BLOCK_SIZE_ASSERT(s_sprites_block,0x20);
tag_block<s_sprites_block> sprites;//0x34
};
TAG_BLOCK_SIZE_ASSERT(s_squences_block,0x3C);
tag_block<s_squences_block> squences;//0x3C
struct s_bitmaps_block
{
string<4> signature;//0x0
__int16 width;//0x4
__int16 height;//0x6
__int8 depth;//0x8
enum class e_more_flags : __int8
{
delete_from_cache_file = FLAG(0),
bitmap_create_attempted = FLAG(1),
bit_2 = FLAG(2),
};
e_more_flags more_flags;//0x9
enum class e_type : __int16
{
NUM_2d_texture = 0,
NUM_3d_texture = 1,
cube_map = 2,
};
e_type type;//0xA
enum class e_format : __int16
{
a8 = 0,
y8 = 1,
ay8 = 2,
a8y8 = 3,
unused1 = 4,
unused2 = 5,
r5g6b5 = 6,
unused3 = 7,
a1r5g5b5 = 8,
a4r4g4b4 = 9,
x8r8g8b8 = 10,
a8r8g8b8 = 11,
unused4 = 12,
unused5 = 13,
dxt1 = 14,
dxt3 = 15,
dxt5 = 16,
p8bump = 17,
p8 = 18,
argbfp32 = 19,
rgbfp32 = 20,
rgbfp16 = 21,
v8u8 = 22,
g8b8 = 23,
};
e_format format;//0xC
enum class e_flags : __int16
{
power_of_two_dimensions = FLAG(0),
compressed = FLAG(1),
palettized = FLAG(2),
swizzled = FLAG(3),
linear = FLAG(4),
v16u16 = FLAG(5),
mip_map_debug_level = FLAG(6),
prefer_stutter_prefer_low_detail = FLAG(7),
bit_8 = FLAG(8),
always_on = FLAG(9),
bit_10 = FLAG(10),
bit_11 = FLAG(11),
interlaced = FLAG(12),
bit_13 = FLAG(13),
bit_14 = FLAG(14),
bit_15 = FLAG(15),
};
e_flags flags;//0xE
__int16 registration_point_x;//0x10
__int16 registration_point_y;//0x12
__int16 mipmap_count;//0x14
__int16 lowdetail_mipmap_count;//0x16
__int32 pixels_offset;//0x18
__int32 lod1_offsetmap_offset;//0x1C
__int32 lod2_offset;//0x20
__int32 lod3_offset;//0x24
__int32 unknown;//0x28
__int32 unknown;//0x2C
__int32 unknown;//0x30
__int32 lod1_size;//0x34
__int32 lod2_size;//0x38
__int32 lod3_size;//0x3C
PAD(0xC);//0x40
tag_referenceN datum;//0x4C
PAD(0x4);//0x50
__int32 pointer_to_allocated_spaceruntime;//0x54
PAD(0x8);//0x58
__int32 unknown;//0x60
__int32 unknown;//0x64
__int32 unknown;//0x68
__int32 unknown;//0x6C
__int32 pointer_to_a_8_byte_allocation_runtime;//0x70
};
TAG_BLOCK_SIZE_ASSERT(s_bitmaps_block,0x74);
tag_block<s_bitmaps_block> bitmaps;//0x44
};
TAG_GROUP_SIZE_ASSERT(s_bitmap_group_definition,0x4C);
TAG_REFL_TAG_BLOCK_DEF(s_bitmap_group_definition::s_squences_group_definition::s_sprites_block)	TAG_REFL_PROPERTY(bitmap_index)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(left)	TAG_REFL_PROPERTY(right)	TAG_REFL_PROPERTY(top)	TAG_REFL_PROPERTY(bottom)	TAG_REFL_PROPERTY(registration_point_x)	TAG_REFL_PROPERTY(registration_point_y)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_bitmap_group_definition::s_squences_block)	TAG_REFL_STRING_32(name)	TAG_REFL_PROPERTY(first_bitmap_index)	TAG_REFL_PROPERTY(bitmap_count)	TAG_REFL_TAG_BLOCK(sprites)REFL_END
TAG_REFL_TAG_BLOCK_DEF(s_bitmap_group_definition::s_bitmaps_block)	TAG_REFL_STRING(signature, 4)	TAG_REFL_PROPERTY(width)	TAG_REFL_PROPERTY(height)	TAG_REFL_PROPERTY(depth)	TAG_REFL_PROPERTY(more_flags)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(format)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(registration_point_x)	TAG_REFL_PROPERTY(registration_point_y)	TAG_REFL_PROPERTY(mipmap_count)	TAG_REFL_PROPERTY(lowdetail_mipmap_count)	TAG_REFL_PROPERTY(pixels_offset)	TAG_REFL_PROPERTY(lod1_offsetmap_offset)	TAG_REFL_PROPERTY(lod2_offset)	TAG_REFL_PROPERTY(lod3_offset)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(lod1_size)	TAG_REFL_PROPERTY(lod2_size)	TAG_REFL_PROPERTY(lod3_size)	TAG_REFL_TAG_REFERENCE(datum)	TAG_REFL_PROPERTY(pointer_to_allocated_spaceruntime)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(pointer_to_a_8_byte_allocation_runtime)REFL_END
TAG_REFL(s_bitmap_group_definition)	TAG_REFL_PROPERTY(type)	TAG_REFL_PROPERTY(format)	TAG_REFL_PROPERTY(usage)	TAG_REFL_PROPERTY(flags)	TAG_REFL_PROPERTY(detail_fade_factor)	TAG_REFL_PROPERTY(sharpen_amount)	TAG_REFL_PROPERTY(bump_height)	TAG_REFL_PROPERTY(sprite_budget_size)	TAG_REFL_PROPERTY(sprite_budget_count)	TAG_REFL_PROPERTY(color_plate_width)	TAG_REFL_PROPERTY(color_plate_height)	TAG_REFL_PROPERTY(compressed_color_plate_data)	TAG_REFL_PROPERTY(processed_pixel_data)	TAG_REFL_PROPERTY(blur_filter_size)	TAG_REFL_PROPERTY(alpha_bias)	TAG_REFL_PROPERTY(mipmap_count)	TAG_REFL_PROPERTY(sprite_usage)	TAG_REFL_PROPERTY(sprite_spacing)	TAG_REFL_PROPERTY(force_format)	TAG_REFL_TAG_BLOCK(squences)	TAG_REFL_TAG_BLOCK(bitmaps)REFL_END

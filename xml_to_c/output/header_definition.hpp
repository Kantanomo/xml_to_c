#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


		/********************************************************************* 
		* name: header
		* group_tag : head
 		* header size : 2048
		* *********************************************************************/ 
struct s_header_group_definition
{
string<4> header_marker_daeh;//0x0
__int32 version_halo_2_=_8;//0x4
__int32 map_size;//0x8
PAD(0x4);//0xC
__int32 index_offset;//0x10
__int32 index_size;//0x14
__int32 meta_table_size;//0x18
__int32 index_+_meta_table_+_bsp_meta_size;//0x1C
PAD(0x100);//0x20
string32 map_build_date;//0x120
enum class e_map_type : __int32
{
single_player = 0,
multiplayer = 1,
main_menu = 2,
shared = 3,
single_player_shared = 4,
};
e_map_type map_type;//0x140
__int32 unknown;//0x144
__int32 always_1;//0x148
__int32 unknown;//0x14C
__int32 always_0;//0x150
__int32 crazy_table_size;//0x154
__int32 crazy_table_offset;//0x158
__int32 unknown;//0x15C
__int32 primary_script_reference_table_offset;//0x160
__int32 primary_script_reference_count;//0x164
__int32 primary_script_reference_table_size;//0x168
__int32 secondary_script_reference_table_offset;//0x16C
__int32 secondary_script_reference_count;//0x170
__int32 secondary_script_reference_table_size;//0x174
__int32 unknown;//0x178
__int32 unknown;//0x17C
__int32 unknown_always_1827525579;//0x180
__int32 unknown_always_29664516;//0x184
__int32 unknown_always_1102084299;//0x188
__int32 unknown_always_29664516;//0x18C
__int32 unknown_always_0_on_mulitplayer;//0x190
__int32 unknown_always_0_on_mulitplayer;//0x194
string<24> map_name;//0x198
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-2);//0x1BC
string256 map_scenario_name;//0x1BA
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-252);//0x2BA
__int32 unknown;//0x1BE
__int32 tag_count;//0x1C2
__int32 file_table_offset;//0x1C6
__int32 file_table_size;//0x1CA
__int32 file_table_index_offset;//0x1CE
__int32 map_checksum;//0x1D2
////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
PAD(-470);//0x1D6
string<4> footer_marker_toof;//0x0
PAD(0x7FC);//0x4
};
TAG_GROUP_SIZE_ASSERT(s_header_group_definition,0x800);
TAG_REFL(s_header_group_definition)	TAG_REFL_STRING(header_marker_daeh, 4)	TAG_REFL_PROPERTY(version_halo_2_=_8)	TAG_REFL_PROPERTY(map_size)	TAG_REFL_PROPERTY(index_offset)	TAG_REFL_PROPERTY(index_size)	TAG_REFL_PROPERTY(meta_table_size)	TAG_REFL_PROPERTY(index_+_meta_table_+_bsp_meta_size)	TAG_REFL_STRING_32(map_build_date)	TAG_REFL_PROPERTY(map_type)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(always_1)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(always_0)	TAG_REFL_PROPERTY(crazy_table_size)	TAG_REFL_PROPERTY(crazy_table_offset)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(primary_script_reference_table_offset)	TAG_REFL_PROPERTY(primary_script_reference_count)	TAG_REFL_PROPERTY(primary_script_reference_table_size)	TAG_REFL_PROPERTY(secondary_script_reference_table_offset)	TAG_REFL_PROPERTY(secondary_script_reference_count)	TAG_REFL_PROPERTY(secondary_script_reference_table_size)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(unknown_always_1827525579)	TAG_REFL_PROPERTY(unknown_always_29664516)	TAG_REFL_PROPERTY(unknown_always_1102084299)	TAG_REFL_PROPERTY(unknown_always_29664516)	TAG_REFL_PROPERTY(unknown_always_0_on_mulitplayer)	TAG_REFL_PROPERTY(unknown_always_0_on_mulitplayer)	TAG_REFL_STRING(map_name, 36)	TAG_REFL_STRING_256(map_scenario_name)	TAG_REFL_PROPERTY(unknown)	TAG_REFL_PROPERTY(tag_count)	TAG_REFL_PROPERTY(file_table_offset)	TAG_REFL_PROPERTY(file_table_size)	TAG_REFL_PROPERTY(file_table_index_offset)	TAG_REFL_PROPERTY(map_checksum)	TAG_REFL_STRING(footer_marker_toof, 4)REFL_END

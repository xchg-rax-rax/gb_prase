#pragma once
#include <stdint.h>

#define GB_HEADER_BASE_OFFSET 0x0100

typedef struct __attribute__((__packed__)) {
    // entry point 0x0100-0x0103
    uint8_t nop_0;
    uint8_t jp_0;
    uint16_t entry_point_addr;
    // nintendo logo 0x0104-0x0133
    uint8_t nintendo_logo[0x30];
    // game title region 0x0134-0x0143 
    char game_title[16];
    // new licensee codes 0x0144-0x0145
    uint16_t new_licensee_code;
    // sgb flag 0x0146
    uint8_t sgb_flag; 
    // cartridge type 0x0147
    uint8_t cartridge_type;
    // rom size code 0x0148
    uint8_t rom_size_code; 
    // ram size code 0x0149
    uint8_t ram_size_code; 
    // destination code 0x014A
    uint8_t destination_code; 
    // new licensee codes 0x014B
    uint8_t old_licensee_code;
    // mask rom version number 0x014C
    uint8_t mask_rom_version_number;
    // header checksum 0x014D
    uint8_t header_checksum;
    // global checksum 0x014E-0x014F
    uint16_t global_checksum;
} gb_rom_header;

// the bitmap value of the Nintendo logo that the bootstrap ROM verifies
const uint8_t NINTENDO_LOGO[0x30] ={ 0xCE, 0xED, 0x66, 0x66, 0xCC, 0x0D, 0x00, 0x0B, 0x03, 0x73, 0x00, 0x83, 0x00, 0x0C, 0x00, 0x0D, 0x00, 0x08, 0x11, 0x1F, 0x88, 0x89, 0x00, 0x0E, 0xDC, 0xCC, 0x6E, 0xE6, 0xDD, 0xDD, 0xD9, 0x99, 0xBB, 0xBB, 0x67, 0x63, 0x6E, 0x0E, 0xEC, 0xCC, 0xDD, 0xDC, 0x99, 0x9F, 0xBB, 0xB9, 0x33, 0x3E};

// cbg flag values
#define CGB_OFF 0x00
#define CGB_SUPPORTED 0x80
#define CGB_ONLY 0xC0

// new licensee codes
#define LICENSEE_NONE 0x00
#define LICENSEE_NINTENDO_RND 0x01
#define LICENSEE_CAPCOM 0x08
#define LICENSEE_EA_1 0x13
#define LICENSEE_HUDSON_SOFT 0x18
#define LICENSEE_B_AI 0x19
#define LICENSEE_KSS 0x20
#define LICENSEE_POW 0x22
#define LICENSEE_PCM_COMPLETE 0x24
#define LICENSEE_SAN_X 0x25
#define LICENSEE_KEMCO_JP 0x28
#define LICENSEE_SETA 0x29
#define LICENSEE_VIACOM 0x30
#define LICENSEE_NINTENDO 0x31
#define LICENSEE_BANDAI 0x32
#define LICENSEE_OCEAN_ACCLAIM_1 0x33
#define LICENSEE_KONAMI_1 0x34
#define LICENSEE_HECTOR 0x35
#define LICENSEE_TAITO 0x37
#define LICENSEE_HUDSON 0x38
#define LICENSEE_BANPRESTO 0x39
#define LICENSEE_UBISOFT 0x41
#define LICENSEE_ATLUS 0x42
#define LICENSEE_MALIBU 0x44
#define LICENSEE_ANGEL 0x46
#define LICENSEE_BULLET_PROOF 0x47
#define LICENSEE_IREM 0x49
#define LICENSEE_ABSOLUTE 0x50
#define LICENSEE_ACCLAIM 0x51
#define LICENSEE_ACTIVISION 0x52
#define LICENSEE_AMERICAN_SAMMY 0x53
#define LICENSEE_KONAMI_2 0x54
#define LICENSEE_HITECH_ENTERTAINMENT 0x55
#define LICENSEE_LJN 0x56
#define LICENSEE_MATCHBOX 0x57
#define LICENSEE_MATTEL 0x58
#define LICENSEE_MILTON_BRADLEY 0x59
#define LICENSEE_TITUS 0x60
#define LICENSEE_VIRGIN 0x61
#define LICENSEE_LUCASARTS 0x64
#define LICENSEE_OCEAN 0x67
#define LICENSEE_EA_2 0x69
#define LICENSEE_INFOGRAMES 0x70
#define LICENSEE_INTERPLAY 0x71
#define LICENSEE_BRODERBUND 0x72
#define LICENSEE_SCULPTURED 0x73
#define LICENSEE_SCI 0x75
#define LICENSEE_THQ 0x78
#define LICENSEE_ACCOLADE 0x79
#define LICENSEE_MISAWA 0x80
#define LICENSEE_LOZC 0x83
#define LICENSEE_TOKUMA_SHOTEN_INTERMEDIA 0x86
#define LICENSEE_TUSKUDA_ORIGINAL 0x87
#define LICENSEE_CHUNSOFT 0x91
#define LICENSEE_VIDEO_SYSTEM 0x92
#define LICENSEE_OCEAN_ACCLAIM_2 0x93
#define LICENSEE_VARIE 0x95
#define LICENSEE_YONEZAWA_SPAL 0x96
#define LICENSEE_KANEKO 0x97
#define LICENSEE_PACK_IN_SOFT 0x99
#define LICENSEE_KONAMI_YU_GI_OH 0xAA

// sgb flag values (what is this?)
#define SGB_OFF 0x00
#define SGB_ON  0x03

// cartridge type codes 
#define CARTRIDGE_ROM_ONLY 0x00
#define CARTRIDGE_MBC1 0x01
#define CARTRIDGE_MBC1_RAM 0x02
#define CARTRIDGE_MBC1_RAM_BATTERY 0x03
#define CARTRIDGE_MBC2 0x05
#define CARTRIDGE_MBC2_RAM 0x06
#define CARTRIDGE_ROM_RAM 0x08
#define CARTRIDGE_ROM_RAM_BATTERY 0x09
#define CARTRIDGE_MM01 0x0B
#define CARTRIDGE_MM01_RAM 0x0C
#define CARTRIDGE_MM01_RAM_BATTERY 0x0D
#define CARTRIDGE_MBC3_TIMER_BATTERY 0x0F
#define CARTRIDGE_MBC3_TIMER_BATTERY_RAM 0x10
#define CARTRIDGE_MBC3 0x11
#define CARTRIDGE_MBC3_RAM 0x12
#define CARTRIDGE_MBC3_RAM_BATTERY 0x13
#define CARTRIDGE_MBC5 0x19
#define CARTRIDGE_MBC5_RAM 0x1A
#define CARTRIDGE_MBC5_RAM_BATTERY 0x1B
#define CARTRIDGE_MBC5_RUMBLE 0x1C
#define CARTRIDGE_MBC5_RUMBLE_RAM 0x1D
#define CARTRIDGE_MBC5_RUMBLE_RAM_BATTERY 0x1E
#define CARTRIDGE_MBC6 0x20
#define CARTRIDGE_MBC7_SENSOR_RUMBLE_RAM_BATTERY 0x22
#define CARTRIDGE_POCKET_CAMERA 0xFC
#define CARTRIDGE_BANDAI_TAMA5 0xFD
#define CARTRIDGE_HUC3 0xFE
#define CARTRIDGE_HUC1_RAM_BATTERY 0xFF

// rom size codes
#define ROM_SIZE_32KB 0x00
#define ROM_SIZE_64KB 0x01
#define ROM_SIZE_128KB 0x02
#define ROM_SIZE_256KB 0x03
#define ROM_SIZE_512KB 0x04
#define ROM_SIZE_1MB 0x05
#define ROM_SIZE_2MB 0x06
#define ROM_SIZE_4MB 0x07
#define ROM_SIZE_8MB 0x08
#define ROM_SIZE_1_1MB 0x52
#define ROM_SIZE_1_2MB 0x53
#define ROM_SIZE_1_5MB 0x54

// ram size codes
#define RAM_SIZE_NONE 0x00
#define RAM_SIZE_8KB 0x02
#define RAM_SIZE_32KB 0x03
#define RAM_SIZE_128KB 0x04
#define RAM_SIZE_64KB 0x05

// destination code
#define DESTINATION_JP 0x00
#define DESTINATION_NON_JP 0x01

// old licensee codes
#define USE_NEW_LICENSEE_CODE 0x33

#define OLD_LICENSEE_NONE 0x00
#define OLD_LICENSEE_NINTENDO_1 0x01
#define OLD_LICENSEE_CAPCOM_1 0x08
#define OLD_LICENSEE_HOTB 0x09
#define OLD_LICENSEE_JALECO_1 0x0A
#define OLD_LICENSEE_COCONUTS 0x0B
#define OLD_LICENSEE_ELITE_SYSTEMS_1 0x0C
#define OLD_LICENSEE_EA_1 0x13
#define OLD_LICENSEE_HUDSONSOFT 0x18
#define OLD_LICENSEE_ITC_ENTERTAINMENT 0x19
#define OLD_LICENSEE_YANOMAN 0x1A
#define OLD_LICENSEE_CLARY 0x1D
#define OLD_LICENSEE_VIRGIN_1 0x1F
#define OLD_LICENSEE_PCM_COMPLETE 0x24
#define OLD_LICENSEE_SANX 0x25
#define OLD_LICENSEE_KOTOBUKI_SYSTEMS 0x28
#define OLD_LICENSEE_SETA 0x29
#define OLD_LICENSEE_INFOGRAMES_1 0x30
#define OLD_LICENSEE_NINTENDO_2 0x31
#define OLD_LICENSEE_BANDAI_1 0x32
#define OLD_LICENSEE_KONAMI_1 0x34
#define OLD_LICENSEE_HECTOR 0x35
#define OLD_LICENSEE_CAPCOM_2 0x38
#define OLD_LICENSEE_BANPRESTO_1 0x39
#define OLD_LICENSEE_GREMLIN 0x3E
#define OLD_LICENSEE_UBI_SOFT 0x41
#define OLD_LICENSEE_ATLUS_1 0x42
#define OLD_LICENSEE_MALIBU_1 0x44
#define OLD_LICENSEE_ANGEL_1 0x46
#define OLD_LICENSEE_SPECTRUM_HOLOBY 0x47
#define OLD_LICENSEE_IREM 0x49
#define OLD_LICENSEE_VIRGIN_2 0x4A
#define OLD_LICENSEE_MALIBU_2 0x4D
#define OLD_LICENSEE_US_GOLD 0x4F
#define OLD_LICENSEE_ABSOLUTE 0x50
#define OLD_LICENSEE_ACCLAIM_1 0x51
#define OLD_LICENSEE_ACTIVISION 0x52
#define OLD_LICENSEE_AMERICAN_SAMMY 0x53
#define OLD_LICENSEE_GAMETEK 0x54
#define OLD_LICENSEE_PARK_PLACE 0x55
#define OLD_LICENSEE_LJN_1 0x56
#define OLD_LICENSEE_MATCHBOX 0x57
#define OLD_LICENSEE_MILTON_BRADLEY 0x59
#define OLD_LICENSEE_MINDSCAPE 0x5A
#define OLD_LICENSEE_ROMSTAR 0x5B
#define OLD_LICENSEE_NAXAT_SOFT_1 0x5C
#define OLD_LICENSEE_TRADEWEST 0x5D
#define OLD_LICENSEE_TITUS 0x60
#define OLD_LICENSEE_VIRGIN_3 0x61
#define OLD_LICENSEE_OCEAN 0x67
#define OLD_LICENSEE_EA_2 0x69
#define OLD_LICENSEE_ELITE_SYSTEMS_2 0x6E
#define OLD_LICENSEE_ELECTRO_BRAIN 0x6F
#define OLD_LICENSEE_INFOGRAMES_2 0x70
#define OLD_LICENSEE_INTERPLAY 0x71
#define OLD_LICENSEE_BRODERBUND_1 0x72
#define OLD_LICENSEE_SCULPTERED_SOFT 0x73
#define OLD_LICENSEE_THE_SALES_CURVE 0x75
#define OLD_LICENSEE_THQ 0x78
#define OLD_LICENSEE_ACCOLADE 0x79
#define OLD_LICENSEE_TRIFFIX_ENTERTAINMENT 0x7A
#define OLD_LICENSEE_MICROPROSE 0x7C
#define OLD_LICENSEE_KEMCO_1 0x7F
#define OLD_LICENSEE_MISAWA_ENTERTAINMENT 0x80
#define OLD_LICENSEE_LOZC 0x83
#define OLD_LICENSEE_TOKUMA_SHOTEN_INTERMEDIA_1 0x86
#define OLD_LICENSEE_BULLETPROOF_SOFTWARE 0x8B
#define OLD_LICENSEE_VIC_TOKAI 0x8C
#define OLD_LICENSEE_APE 0x8E
#define OLD_LICENSEE_I_MAX 0x8F
#define OLD_LICENSEE_CHUN_SOFT 0x91
#define OLD_LICENSEE_VIDEO_SYSTEM 0x92
#define OLD_LICENSEE_TSUBURAVA 0x93
#define OLD_LICENSEE_VARIE_1 0x95
#define OLD_LICENSEE_YONEZAWA_S_PAL 0x96
#define OLD_LICENSEE_KANEKO 0x97
#define OLD_LICENSEE_ARC 0x99
#define OLD_LICENSEE_NIHON_BUSSAN 0x9A
#define OLD_LICENSEE_TECMO 0x9B
#define OLD_LICENSEE_IMAGINEER 0x9C
#define OLD_LICENSEE_BANPRESTO_2 0x9D
#define OLD_LICENSEE_HORI_ELECTRIC 0xA1
#define OLD_LICENSEE_BANDAI_2 0xA2
#define OLD_LICENSEE_KONAMI_2 0xA4
#define OLD_LICENSEE_KAWADA 0xA6
#define OLD_LICENSEE_TECHNOS_JAPAN 0xA9
#define OLD_LICENSEE_BRODERBUND_2 0xAA
#define OLD_LICENSEE_TOEI_ANIMATION 0xAC
#define OLD_LICENSEE_TOHO 0xAD
#define OLD_LICENSEE_NAMCO 0xAF
#define OLD_LICENSEE_ACCLAIM_2 0xB0
#define OLD_LICENSEE_ASCII_OR_NEXOFT 0xB1
#define OLD_LICENSEE_BANDAI_3 0xB2
#define OLD_LICENSEE_ENIX 0xB4
#define OLD_LICENSEE_HAL 0xB6
#define OLD_LICENSEE_SNK 0xB7
#define OLD_LICENSEE_PONY_CANYON_1 0xB9
#define OLD_LICENSEE_CULTURE_BRAIN 0xBA
#define OLD_LICENSEE_SUNSOFT 0xBB
#define OLD_LICENSEE_SONY_IMAGESOFT 0xBD
#define OLD_LICENSEE_SAMMY 0xBF
#define OLD_LICENSEE_TAITO_1 0xC0
#define OLD_LICENSEE_KEMCO_2 0xC2
#define OLD_LICENSEE_SQUARESOFT 0xC3
#define OLD_LICENSEE_TOKUMA_SHOTEN_INTERMEDIA_2 0xC4
#define OLD_LICENSEE_DATA_EAST 0xC5
#define OLD_LICENSEE_TONKIN_HOUSE 0xC6
#define OLD_LICENSEE_KOEI 0xC8
#define OLD_LICENSEE_UFL 0xC9
#define OLD_LICENSEE_ULTRA 0xCA
#define OLD_LICENSEE_VAP 0xCB
#define OLD_LICENSEE_USE 0xCC
#define OLD_LICENSEE_MELDAC 0xCD
#define OLD_LICENSEE_PONY_CANYON_2 0xCE
#define OLD_LICENSEE_ANGEL_2 0xCF
#define OLD_LICENSEE_TAITO_2 0xD0
#define OLD_LICENSEE_SOFEL 0xD1
#define OLD_LICENSEE_QUEST 0xD2
#define OLD_LICENSEE_SIGMA_ENTERPRISES 0xD3
#define OLD_LICENSEE_ASK_KODANSHA 0xD4
#define OLD_LICENSEE_NAXAT_SOFT_2 0xD6
#define OLD_LICENSEE_COPYA_SYSTEMS 0xD7
#define OLD_LICENSEE_BANPRESTO_3 0xD9
#define OLD_LICENSEE_TOMY 0xDA
#define OLD_LICENSEE_LJN_2 0xDB
#define OLD_LICENSEE_NCS 0xDD
#define OLD_LICENSEE_HUMAN 0xDE
#define OLD_LICENSEE_ALTRON 0xDF
#define OLD_LICENSEE_JALECO_2 0xE0
#define OLD_LICENSEE_TOWACHIKI 0xE1
#define OLD_LICENSEE_UUTAKA 0xE2
#define OLD_LICENSEE_VARIE_2 0xE3
#define OLD_LICENSEE_EPOCH 0xE5
#define OLD_LICENSEE_ATHENA 0xE7
#define OLD_LICENSEE_ASMIK 0xE8
#define OLD_LICENSEE_NATSUME 0xE9
#define OLD_LICENSEE_KING_RECORDS 0xEA
#define OLD_LICENSEE_ATLUS_2 0xEB
#define OLD_LICENSEE_EPIC_SONY_RECORDS 0xEC
#define OLD_LICENSEE_IGS 0xEE
#define OLD_LICENSEE_A_WAVE 0xF0
#define OLD_LICENSEE_EXTREME_ENTERTAINMENT 0xF3
#define OLD_LICENSEE_LJN_3 0xFF

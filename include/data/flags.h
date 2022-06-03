/**	@file flags.h
 *  @brief Constants and definitions of various flags throughout the game
 *
 *	@author Lunar Soap
 *	@bug No known bugs.
 */
#ifndef LIBTP_FLAGS_H
#define LIBTP_FLAGS_H

#include <cstdint>

namespace libtp::data::flags
{
    enum EventFlags : uint16_t
    {
        Cheese_put_in_soup = 0x0001,
        Pumpkin_put_in_soup = 0x0002,
        Lost_to_Gor_Coron_in_sumo = 0x0004,
        Talked_to_Renado_after_Goron_Mines = 0x0008,
        Yeto_took_cheese = 0x0010,
        Yeto_took_pumpkin = 0x0020,
        Midna_text_about_finding_Gorge_bridge = 0x0080,
        Talked_to_Colin_outside_Links_house = 0x104,
        Talked_to_Fado_before_Goats_1 = 0x110,
        Told_Yeta_about_cheese = 0x120,
        Talked_to_Yeto_in_SPR_for_first_time = 0x140,
        Can_fight_Twilight_Bloat = 0x180,
        Talked_to_Sera_before_cat_rescued = 0x201,
        Talked_to_Colin_through_spring_gate = 0x202,
        Finished_slingshot_training = 0x220,
        Finished_sword_training = 0x240,
        Failed_to_catch_goat_at_Bo_house = 0x280,
        Got_fishing_rod_from_Uli = 0x301,
        Gave_wooden_sword_to_Talo = 0x302,
        Brought_cradle_to_Uli = 0x304,
        Talked_to_kids_outside_Links_house = 0x308,
        Jaggle_asked_to_look_up_pillar = 0x310,
        Talked_to_Pergie = 0x340,
        Talked_to_squirrel_after_Faron_Twilight = 0x380,
        Talked_to_Uli = 0x404,
        Uli_ran_down_river = 0x408,
        Talked_to_Uli_before_getting_cradle = 0x410,
        unk0420 = 0x420,
        Refused_sword_training = 0x440,
        Told_yeta_about_pumpkin = 0x480,
        Midna_charge_unlocked = 0x501,
        Finished_sewers = 0x502,
        Midna_text_after_entering_faron_twilight = 0x504,
        Met_Zelda_in_sewers = 0x508,
        Midna_cut_prison_chain = 0x510,
        Watched_sewers_intro_cutscene = 0x520,
        Escaped_cell_in_sewers = 0x540,
        Entered_Ordon_spring_Day_3 = 0x580,
        Epona_Tamed = 0x601,
        Forest_Temple_cleared = 0x602,
        Map_Warping_Unlocked = 0x604,
        King_Bulblin_1_trigger_activated = 0x608,
        Cleared_Faron_Twilight = 0x610,
        Warped_Kakariko_Gorge_bridge_back = 0x620,
        Watched_Faron_Twilight_intro_cutscene = 0x640,
        Watched_Farone_cutscene_after_opening_Ordon_Spring_warp = 0x680,
        Goron_Mines_cleared = 0x701,
        First_time_talking_to_Gor_Coron = 0x702,
        Won_sumo_against_Gor_Coron = 0x704,
        Cleared_Eldin_twilight = 0x708,
        Watched_Eldin_Twilight_Sanctuary_cutscene = 0x710,
        Talked_to_Bo_after_taming_Epona = 0x720,
        Started_sumo_against_Gor_Coron = 0x740,
        Watched_Colin_cutscene_after_King_Bulblin_1 = 0x780,
        Talked_with_Talo_to_start_Archery_minigame = 0x801,
        Got_Zora_Armor_from_Rutela = 0x804,
        Zora_Escort_Cleared = 0x810,
        Entered_Telmas_bar_after_Lanayru_Twilight = 0x820,
        Wagon_Escort_Started = 0x840,
        Warped_meteor_to_Zoras_Domain = 0x880,
        Listened_to_Iza_spirit_after_killing_bug_next_to_her = 0x901,
        Started_Iza_1_minigame = 0x902,
        Lakebed_Temple_Story_Progression_Flag = 0x904,
        Bought_Barnes_Bomb_Bag = 0x908,
        Won_Archery_minigame_in_Kakariko_with_Hawkeye = 0x910,
        Won_Archery_minigame_in_Kakariko_legitimately = 0x920,
        Started_Archery_minigame_in_Kakariko = 0x940,
        Talked_to_Talo_after_winning_Archery_minigame_legitimately = 0x980,
        King_Bulblin_1_hit_once_during_Phase_2 = 0xA01,
        King_Bulblin_1_Phase_1_done = 0xA02,
        King_Bulblin_1_fight_started = 0xA04,
        King_Bulblin_1_defeated = 0xA08,
        Started_Kargorok_flight_up_Zoras_River_during_Twilight = 0xA10,
        Bridge_of_Eldin_Stolen = 0xA20,
        Threw_first_goron_off_ledge_while_scaling_DMT = 0xA40,
        Left_after_agreeing_to_help_Iza_1 = 0xA80,
        Iza_1_minigame_done = 0xB01,
        Iza_1_minigame_Unlocked = 0xB02,
        Agreed_to_help_Iza = 0xB04,
        Left_after_agreeing_to_help_Iza = 0xB08,
        Got_Snowpeak_Ruins_Map_from_Yeta = 0xB10,
        Talked_to_Yeta_in_Snowpeak_Ruins_for_the_first_time = 0xB20,
        Escaped_burning_tent_in_Bublin_Camp = 0xB40,
        Declined_to_help_Iza = 0xB80,
        Midnas_Desperate_Hour_started = 0xC01,
        Cleared_Lanayru_twilight = 0xC02,
        Talked_to_kid_goron_shop_in_Kakariko_at_night = 0xC04,
        Remove_Sword_Shield_from_Wolf_back = 0xC08,
        Midna_accompanies_Wolf = 0xC10,
        Talked_with_Farone_after_clearing_Forest_temple = 0xC40,
        Met_Rutella_after_warping_meteor_to_Zoras_Domain = 0xC80,
        Entered_Ordon_Shield_house_as_wolf_at_night = 0xD01,
        Talked_to_one_of_the_frogs_outside_Rusls_house_as_wolf_at_night = 0xD02,
        Transforming_Unlocked = 0xD04,
        Talked_with_clerk_at_Castle_Town_Malo_Mart = 0xD08,
        Talked_with_Yeta_after_getting_bedroom_key = 0xD10,
        Midna_text_after_Ordon_shield_obtained = 0xD80,
        Start_Ilia_memory_sidequest = 0xE01,
        Twilight_Bloat_tear_appears_on_map = 0xE02,
        Malo_text_after_leaving_shop_menu = 0xE08,
        Listened_to_Fyer_spirit_in_filled_Lake_Hylia_during_Twilight = 0xE10,
        Talked_to_right_goron_in_hotspring_after_King_Bulblin_1 = 0xE20,
        Talked_to_second_goron_in_DMT_after_clearing_Goron_Mines = 0xE40,
        Talked_to_brown_cucoo_outside_Bos_house_as_wolf_at_night = 0xE80,
        Got_Lantern_from_Coro = 0xF01,
        Iza_text_after_Iza_1_done = 0xF02,
        Talked_with_Fyer_after_going_to_Desert = 0xF04,
        Warped_Bridge_of_Eldin_back = 0xF08,
        Funded_Castle_Town_Malo_Mart = 0xF10,
        Talked_with_Doctor_before_giving_Invoice = 0xF20,
        Forced_text_when_entering_Doctors_clinic_for_the_first_time = 0xF40,
        Got_Renados_Letter = 0xF80,
        Seras_cat_returned_to_shop = 0x1001,
        Ordon_Day_2_Talked_to_Jaggle_on_the_pillar = 0x1002,
        Ordon_Day_2_L_target_talked_to_Jaggle_on_the_pillar = 0x1004,
        Ordon_Day_2_Talked_to_Colin_after_Fishing_Rod = 0x1008,
        Watched_start_of_game_cutscene = 0x1010,
        Ordon_Day_2_Talked_to_Colin_before_Fishing_Rod = 0x1020,
        Ordon_Day_3_Talked_to_Rusl = 0x1040,
        Ordon_Day_3_Talked_to_Pergie = 0x1080,
        Talked_to_Sera_after_getting_bottle = 0x1101,
        Ordon_Day_3_Talked_to_Uli = 0x1102,
        Ordon_Day_2_Started_sword_training = 0x1104,
        Talked_to_Gor_Ebizo_after_completing_Hotspring_minigame = 0x1108,
        Talked_with_Yeta_after_she_walks_up_to_bedroom = 0x1110,
        Hanch_is_attacked_by_bees = 0x1120,
        Ordon_Day_2_Talked_to_Jaggle_after_calling_down_eagle = 0x1140,
        Ordon_Day_2_Talked_to_Hanch_after_touching_bee_nest = 0x1180,
        South_Faron_Warp_fight_started = 0x1202,
        Ordon_Day_2_Talked_to_Sera_before_cat_returns = 0x1204,
        Talked_to_Sera_after_cat_returns = 0x1208,
        Heard_Bo_text_after_sumo_fight = 0x1210,
        Talk_to_goron_in_front_of_DM_shop_after_winning_Gor_Coron_sumo_match = 0x1302,
        Talked_to_Iza_before_UZR_Portal = 0x1304,
        Watched_cutscene_after_Goron_Mines = 0x1320,
        Lost_sumo_to_Gor_Coron_twice = 0x1340,
        Talked_to_Farone_in_Faron_Twilight = 0x1380,
        Ordon_Day_3_Colin_went_to_see_Ilia_in_Ordon_Spring = 0x1402,
        Got_bottle_from_Sera = 0x1408,
        Watched_cutscene_after_getting_knocked_off_DM_ledge_by_goron = 0x1410,
        Talked_with_Yeta_after_giving_Cheese = 0x1420,
        Talked_with_Yeta_after_giving_Pumpkin = 0x1440,
        Entered_Fyers_canon_for_the_first_time = 0x1480,
        Talked_to_Agitha_in_her_castle_for_the_first_time = 0x1501,
        Talked_to_Hanch_after_he_jumps_in_the_water_Ordon_Day_2_or_3 = 0x1502,
        Ordon_Day_2_Jaggle_scolds_you_for_breaking_all_the_pumpkins_next_to_him = 0x1504,
        Hanch_hit_bee_nest_and_dove_in_water = 0x1508,
        Ordon_Day_2_Touched_Ordon_hanging_bee_nest = 0x1510,
        Ordon_Day_2_Took_down_Ordon_bee_nest_with_hawk = 0x1520,
        Warping_in_Lanayru_Province_disabled = 0x1540,
        Watched_cutscene_after_Goats_2 = 0x1580,
        Ordon_Day_2_done = 0x1601,
        Took_down_Ordon_bee_nest_with_Slingshot = 0x1602,
        Got_a_letter_from_Agitha = 0x1604,
        Ordon_Day_2_Talked_to_Bo_after_catching_goat = 0x1620,
        Ordon_Day_2_Caught_goat_in_front_of_Bos_house = 0x1640,
        Hanch_hit_bee_nest_and_dove_in_water_trigger = 0x1680,
        Talked_to_female_owner_of_grocery_store_in_South_Castle_Town = 0x1701,
        Talked_to_Hyrule_soldier_in_South_Castle_Town = 0x1702,
        Talked_to_stalker_outside_Agithas_Castle = 0x1704,
        Ordon_Day_3_Talked_to_Bo = 0x1710,
        Ordon_Day_2_Talked_to_Hanch_after_taking_down_bee_nest = 0x1780,
        Watched_cutscene_between_Rusl_Uli_after_Ordon_Shield = 0x1801,
        Checked_Trills_money_box = 0x1804,
        Caught_by_Rusl_in_Ordon_as_wolf_at_night = 0x1808,
        Ordon_Day_2_Talo_ran_after_Monkey_after_sword_training = 0x1880,
        Watched_Eldin_spirit_cutscene_after_opening_Kakariko_Warp = 0x1901,
        Successfully_listened_to_Bo_and_Jaggles_conversation_as_wolf = 0x1904,
        Colin_stopped_you_from_getting_on_Epona_Ordon_Day_2 = 0x1908,
        Failed_to_listen_to_Bo_and_Jaggles_conversation_as_wolf = 0x1910,
        Scared_off_Hanch_as_wolf_at_night = 0x1920,
        Hanch_spotted_you_as_wolf_at_night = 0x1940,
        Tried_to_enter_Faron_Twilight_without_sword_shield = 0x1980,
        Talked_to_Eldin_spirit_in_Eldin_Twilight = 0x1A01,
        Listened_to_first_guard_in_sewers = 0x1A02,
        Bought_Coros_Oil_Bottle = 0x1A08,
        Talked_to_Coro_after_Faron_Twilight = 0x1A10,
        Talked_to_white_cucoo_near_Rusls_house_as_wolf_at_night = 0x1A20,
        Talked_to_Seras_cat_as_wolf_at_night = 0x1A40,
        Talked_to_Midna_after_escaping_cell_in_sewers = 0x1A80,
        Tried_to_leave_mist_area_without_picking_up_Lantern = 0x1B01,
        Listened_to_first_Goron_spirit_in_Death_Mountain_Twilight = 0x1B02,
        Picked_up_Lantern_after_Monkey_stealing_sequence = 0x1B08,
        Monkey_dropped_your_Lantern = 0x1B10,
        Monkey_stole_your_Lantern = 0x1B20,
        Listened_to_Coro_spirit_before_killing_bugs_in_his_house = 0x1B40,
        Talked_to_Malo_after_King_Bulblin_1 = 0x1C01,
        Saw_Midna_text_after_trying_to_warp_an_object_to_the_wrong_place = 0x1C02,
        Sacred_Grove_statue_puzzle_completed = 0x1C04,
        Win_Sumo_round_1_against_Bo = 0x1C10,
        Bo_talked_to_you_after_opening_Iron_Boots_chest = 0x1C20,
        Accepted_to_keep_Bos_secret = 0x1C40,
        Listened_to_second_goron_spirit_in_Death_Mountain_Twilight = 0x1C80,
        Mini_map_retracted = 0x1D01,
        Talked_to_Talo_after_King_Bulblin_1 = 0x1D02,
        Talked_to_Luda_after_King_Bulblin_1 = 0x1D04,
        Talked_to_Darbus_after_defeating_Fyrus = 0x1D08,
        Talked_to_Barnes_after_Goron_Mines = 0x1D10,
        Talked_to_Barnes_after_King_Bulblin_1 = 0x1D20,
        Listened_to_Fyer_spirit_in_drained_Lake_Hylia_during_Lanayru_twilight = 0x1D40,
        Talked_to_Sera_a_second_time_after_Faron_twilight = 0x1E02,
        Talked_to_Sera_after_Faron_twilight = 0x1E04,
        Midnas_Desperate_Hour_completed = 0x1E08,
        Talked_to_Coro_after_forest_temple = 0x1E20,
        Talk_to_Malo_after_fundraising_is_open = 0x1E40,
        Malo_Mart_Fundraising_starts = 0x1E80,
        Heard_forced_Midna_text_E3_2006_Goron_Mines = 0x1F04,
        Heard_Midna_text_ontop_of_magnet_switch_E3_2006_Goron_Mines = 0x1F08,
        Fyrus_is_on_the_ground = 0x1F10,
        Knocked_Fyrus_down_for_the_first_time = 0x1F20,
        Fyrus_is_stunned = 0x1F40,
        Shot_Fyrus_eye_for_the_first_time = 0x1F80,
        Talked_with_Telma_after_getting_Master_Sword = 0x2001,
        City_in_the_Sky_cleared = 0x2002,
        Temple_of_Time_cleared = 0x2004,
        Snowpeak_Ruins_cleared = 0x2008,
        Arbiters_Grounds_cleared = 0x2010,
        Got_Master_Sword = 0x2020,
        Watched_Telma_Ilia_spirit_cutscene_in_the_bar_during_Lanayru_Twilight = 0x2101,
        Talked_to_Louise_about_the_stolen_statue = 0x2102,
        Gave_Telma_Renados_letter = 0x2180,
        Talked_to_Plumm_as_Wolf_for_the_first_time = 0x2201,
        Got_a_High_Score_in_Plumms_minigame = 0x2202,
        Got_Wood_Statue = 0x2204,
        Talked_to_Yeto_on_top_of_the_mountain_after_clearing_SPR = 0x2208,
        Malo_Mart_Castle_Town_branch_is_open = 0x2210,
        Got_Ilias_scent = 0x2220,
        Got_Youths_scent = 0x2240,
        Got_Ilias_Charm = 0x2280,
        Cleared_STAR_2 = 0x2301,
        Started_STAR_2 = 0x2302,
        Magic_Unlocked = 0x2304,
        Cleared_STAR_1 = 0x2308,
        Entered_STAR_for_the_first_time = 0x2310,
        Gave_Ilia_her_charm = 0x2320,
        Gave_Ilia_the_Wood_Statue = 0x2340,
        Won_Plumms_Heart_Piece = 0x2380,
        Talked_to_Shad_after_finishing_City_in_the_Sky = 0x2401,
        Talked_to_Shad_for_a_second_time_in_Telmas_bar = 0x2402,
        Talked_to_Shad_in_Telmas_bar = 0x2404,
        Talked_to_Auru_in_Telmas_bar = 0x2408,
        Talked_to_Central_Castle_Town_shop_clerk = 0x2410,
        Talked_to_Louise_after_being_thrown_out_during_MDH = 0x2420,
        Watched_Louise_cutscene_during_Midnas_Desperate_Hour = 0x2440,
        Donated_1000_Rupees_to_Charlo = 0x2480,
        Watched_cutscene_with_Yeto_on_top_of_mountain = 0x2502,
        Talked_to_Yeto_on_top_of_mountain_as_Wolf = 0x2504,
        Got_Aurus_Memo = 0x2510,
        Talked_to_Auru_in_Lake_Hylia = 0x2520,
        Shad_used_completed_Skybook = 0x2540,
        Shad_casts_unfinished_spell_on_statue = 0x2580,
        Sol_Flag_1 = 0x2601,
        Sol_Flag_2 = 0x2602,
        Palace_West_Sol_taken_in_Phantom_Zant_room = 0x2604,
        Sol_Flag_3 = 0x2608,
        Palace_West_Sol_taken_out_Phantom_Zant_room = 0x2610,
        Palace_East_Sol_taken_outside = 0x2620,
        Palace_West_Sol_taken_outside = 0x2640,
        Showed_Aurus_Memo_to_Fyer = 0x2680,
        Talked_to_underwater_Zora_about_Goron_in_Throne_Room_after_release = 0x2701,
        Talked_to_underwater_Zora_about_Goron_in_Throne_Room_before_release = 0x2702,
        Talked_to_west_Zora_in_Domain_Throne_Room_after_Lanayru_twilight = 0x2704,
        Talked_to_swimming_Zora_in_Zoras_Domain_before_Lakebed = 0x2708,
        Gave_Invoice_to_Doctor = 0x2710,
        Palace_East_Sol_taken_in_Phantom_Zant_room = 0x2720,
        Sol_Flag_4 = 0x2740,
        Palace_East_Sol_taken_out_of_Phantom_Zant_room = 0x2780,
        Saw_Uli_text_before_leaving_Rusls_house = 0x2801,
        Talked_to_Uli_a_second_time_after_Faron_Twilight = 0x2802,
        Talked_to_Uli_after_Faron_Twilight = 0x2804,
        Saw_forced_Uli_text_in_Rusls_house_after_Faron_Twilight = 0x2808,
        Talked_to_Jaggle_a_second_time_after_Faron_twilight = 0x2810,
        Talked_to_Jaggle_after_Faron_twilight = 0x2820,
        Used_Ooccoo_for_the_first_time = 0x2840,
        Helm_Splitter_Unlocked = 0x2901,
        Backslice_Unlocked = 0x2902,
        Ending_Blow_Unlocked = 0x2904,
        Shield_Attack_Unlocked = 0x2908,
        Listened_to_lady_spirits_talking_in_West_Castle_Town_during_Twilight = 0x2910,
        Freed_underwater_Goron_in_Zoras_Domain = 0x2920,
        Got_Asheis_sketch = 0x2940,
        Talked_to_Ashei_in_Telmas_bar = 0x2980,
        Talked_to_Zora_Soldier_near_Lakebed_entrance_after_opening = 0x2A01,
        Talked_to_Zora_Soldier_near_Lakebed_entrance_before_opening = 0x2A02,
        Talked_to_Ashei_in_Telmas_bar_after_finishing_SPR = 0x2A04,
        Ordon_Day_2_Lit_Coros_pot = 0x2A10,
        Great_Spin_Unlocked = 0x2A20,
        Jump_Strike_Unlocked = 0x2A40,
        Mortal_Draw_Unlocked = 0x2A80,
        Talked_to_Doctor_after_restoring_Ilias_memory = 0x2B02,
        Showed_Wood_Statue_to_Doctor = 0x2B04,
        Fixed_the_Mirror_of_Twilight = 0x2B08,
        Talked_to_ladies_outside_Central_Castle_Town_shop_before_Malo_Mart = 0x2B10,
        unk2B20 = 0x2B20,
        Talked_to_Gor_Coron_after_clearing_Goron_Mines = 0x2C01,
        Saved_monkey_in_Faron_Twilight = 0x2C02,
        unk2C04 = 0x2C04,
        Talked_to_Rusl_in_Telmas_bar = 0x2C08,
        Raised_Mirror_in_Mirror_Chamber = 0x2C10,
        unk2C20 = 0x2C20,
        unk2C40 = 0x2C40,
        Talked_to_Telma_after_recovering_Ilias_memory = 0x2C80,
        Talked_to_Darbus_after_restoring_Ilias_memory = 0x2D01,
        unk2D02 = 0x2D02,
        unk2D04 = 0x2D04,
        Talked_to_Goron_by_Barnes_shop_after_Goron_Mines = 0x2D08,
        Talked_to_Goron_in_Kakariko_Hotspring_after_Goron_Mines = 0x2D10,
        Talked_to_Goron_by_Kakariko_Watchtower_after_Goron_Mines = 0x2D20,
        Talked_to_Goron_in_front_of_Kakariko_Inn_after_Goron_Mines = 0x2D40,
        Talked_to_first_Goron_on_Death_Mountain_Trail_after_Goron_Mines = 0x2D80,
        Talked_to_Adult_Goron_after_opening_Hotspring_water_shop_in_Castle_Town = 0x2E01,
        Talked_to_Agitha_for_the_first_time_outside_South_Castle_Town = 0x2E02,
        Gave_all_24_Golden_Bugs_to_Agitha = 0x2E04,
        Hidden_Village_barrier_removed = 0x2E08,
        Helped_Outside_South_Castle_Town_Goron = 0x2E10,
        Bridge_Repair_fundraising_completed = 0x2E20,
        Talked_to_Gor_Ebizo_in_Kakariko = 0x2E40,
        Talked_to_Darbus_after_clearing_Goron_Mines = 0x2E80,
        Talked_to_Goron_outside_South_Castle_Town = 0x2F01,
        unk2F02 = 0x2F02,
        Got_Medicine_Scent = 0x2F04,
        Talked_to_Barnes_after_unlocking_Bomblings = 0x2F08,
        Talked_to_Barnes_after_unlocking_Water_Bombs = 0x2F10,
        Talked_to_Child_Goron_before_opening_Hotspring_water_shop_in_Castle_Town = 0x2F20,
        Talked_to_Child_Goron_after_opening_Hotspring_water_shop_in_Castle_Town = 0x2F40,
        Talked_to_Goron_outside_East_Castle_Town = 0x2F80,
        Talked_to_Gor_Liggs_after_unk = 0x3001,
        Started_Hotspring_Water_minigame = 0x3002,
        Talked_to_Gor_Liggs_in_Kakariko_Village = 0x3004,
        Talked_to_Gor_Amato_in_Goron_Mines = 0x3008,
        unk3010 = 0x3010,
        Talked_to_Goron_outside_South_Castle_Town_after_giving_water = 0x3020,
        Gave_Hotspring_water_to_Goron_outside_South_Castle_Town = 0x3040,
        Talked_to_Jovani_for_the_first_time_before_poe = 0x3080,
        M_Stag_Beetle_Turned_in = 0x3101,
        F_Butterfly_Turned_in = 0x3102,
        M_Butterfly_Turned_in = 0x3104,
        F_Beetle_Turned_In = 0x3108,
        M_Beetle_Turned_In = 0x3110,
        Warped_Sky_Cannon_to_Lake_Hylia = 0x3120,
        Talked_to_Gor_Liggs_after_talking_to_Goron_outside_East_Castle_Town = 0x3140,
        Talked_to_Gor_Liggs_after_bridge_has_been_fixed = 0x3180,
        M_Mantis_turned_in = 0x3201,
        F_Pillbug_Turned_in = 0x3202,
        M_Pillbug_Turned_in = 0x3204,
        F_Phasmid_turned_in = 0x3208,
        M_Phasmid_turned_in = 0x3210,
        F_Grasshopper_turned_in = 0x3220,
        M_Grasshopper_turned_in = 0x3240,
        F_Stag_Beetle_Turned_in = 0x3280,
        M_Ant_turned_in = 0x3301,
        F_Dragonfly_Turned_in = 0x3302,
        M_Dragonfly_Turned_in = 0x3304,
        F_Snail_Turned_in = 0x3308,
        M_Snail_Turned_in = 0x3310,
        F_Ladybug_Turned_in = 0x3320,
        M_Ladybug_turned_in = 0x3340,
        F_Mantis_Turned_in = 0x3380,
        F_Dayfly_Turned_in = 0x3420,
        M_Dayfly_Turned_in = 0x3440,
        F_Ant_Turned_in = 0x3480,
        Talked_to_Gor_Liggs_in_Goron_Mines = 0x3701,
        Talked_to_Gor_Ebizo_in_Goron_Mines = 0x3702,
        Talked_to_Postman_for_the_first_time = 0x3704,
        Talked_to_Gor_Liggs_after_talking_to_Goron_outside_East_Castle_Town_before_fixing_bridge = 0x3710,
        Temp_used_after_paying_to_fish_with_Hena = 0x3801,
        Talked_to_Hena_for_the_first_time = 0x3802,
        Entered_Henas_Cabin_for_the_first_time = 0x3804,
        Talked_to_Gengle_after_collecting_20_Poe_Souls = 0x3808,
        Talked_to_Jovani_after_collecting_60_Poe_souls = 0x3820,
        unk3840 = 0x3840,
        Talked_to_Jovani_after_defeating_the_Poe_in_his_house = 0x3880,
        Won_2nd_Sumo_round_against_Bo = 0x3901,
        Released_first_caught_fish_Ordon_Day_2 = 0x3902,
        Beat_Rollgoal_1_8 = 0x3904,
        Caught_the_Fishing_Bottle = 0x3908,
        Reserved_for_fishing_1 = 0x3910,
        Caught_the_sinking_lure = 0x3920,
        Went_Fishing_with_Hena_for_the_first_time = 0x3940,
        Temp_used_after_paying_to_fish_with_Hena_2 = 0x3980,
        Talked_with_Ralis_in_Kakariko_Graveyard = 0x3A01,
        Talked_to_Ralis_in_Zoras_Domain_throne_room = 0x3A02,
        Howled_at_Hidden_Village_stone = 0x3A04,
        Howled_at_Snowpeak_stone = 0x3A08,
        Howled_at_Lake_Hylia_stone = 0x3A10,
        Howled_at_Sacred_Grove_outside_stone = 0x3A20,
        Howled_at_Upper_Zoras_River_stone = 0x3A40,
        Howled_at_Death_Mountain_stone = 0x3A80,
        Talked_with_Luda_after_Ralis_returns_to_Zoras_Domain = 0x3B01,
        Talked_with_Luda_while_Ralis_is_in_Kakariko_Graveyard = 0x3B02,
        Talked_to_Fyer_about_repairing_the_Sky_Cannon = 0x3B04,
        Sky_Cannon_repaired = 0x3B08,
        Won_Snowboard_race_against_Yeta = 0x3B10,
        Talked_to_Yeta_after_winning_race_against_Yeto = 0x3B20,
        Won_Snowboard_race_against_Yeto = 0x3B40,
        Got_Coral_Earring_from_Ralis = 0x3B80,
        Got_Skill_from_Bublin_Camp_Wolf = 0x3C01,
        Got_Skill_from_South_CT_Field_Wolf = 0x3C02,
        Got_Skill_from_West_CT_Wolf = 0x3C04,
        Got_Skill_from_Ordon_Wolf = 0x3C08,
        Talked_to_white_cuccoo_inside_fences_next_to_Bos_house_as_Wolf_at_night = 0x3C20,
        Talked_to_Goron_outside_Barnes_shop_after_unlocking_Bomblings = 0x3C40,
        Talked_to_Goron_outside_Barnes_shop_after_unlocking_Water_Bombs = 0x3C80,
        Eldin_Spring_Has_faries = 0x3D01,
        Faron_Spring_Has_Faries = 0x3D02,
        Ordon_Spring_Has_Faries = 0x3D04,
        enter_Rusls_house_after_faron_twilight = 0x3D08,
        unk3D10 = 0x3D10,
        Got_Skill_from_Barrier_Wolf = 0x3D40,
        Got_Skill_from_Graveyard_Wolf = 0x3D80,
        Talked_with_Colin_while_Ralis_is_in_Kakariko_Graveyard = 0x3E01,
        City_Ooccoo_CS_Watched = 0x3E02,
        Found_Ooccoo_for_the_second_time = 0x3E04,
        Found_Ooccoo_for_the_first_time = 0x3E08,
        Ooccoo_now_has_Ooccoo_Jr_next_to_her = 0x3E10,
        Ooccoo_met_but_doesnt_have_Ooccoo_Jr_yet_unset_once_Jr_met = 0x3E20,
        Spring_Spirits_can_give_Fary_Tears = 0x3E40,
        Lanayru_Spring_Has_Faries = 0x3E80,
        talked_to_Sera_a_second_time_after_Eldin_twilight = 0x3F01,
        talked_to_Sera_after_Eldin_twilight = 0x3F02,
        talked_to_Jaggle_after_Eldin_twilight = 0x3F04,
        talked_to_Uli_after_GM = 0x3F08,
        talked_to_Uli_a_second_time_after_Eldin_twilight = 0x3F10,
        talked_to_Uli_after_Eldin_twilight = 0x3F20,
        Talked_with_Colin_after_Ralis_returns_to_Zoras_Domain = 0x3F40,
        Talked_to_Rusl_in_Telmas_bar_after_finishing_ToT = 0x4001,
        Rusl_in_N_Faron_Summons_Gold_Cucco = 0x4002,
        Declined_to_help_Rusl_in_N_Faron_OFF_after_saying_yes = 0x4004,
        Visited_Desert_for_the_first_time = 0x4008,
        Talked_to_Zora_bomb_seller_by_Lakebed_entrance_before_opening = 0x4010,
        talk_to_Hanch_after_Eldin_twilight = 0x4020,
        talk_to_Hanch_after_faron_twilight = 0x4040,
        Saved_Monkey_from_puppets = 0x4080,
        Talked_to_underwater_Goron_in_Zoras_Domain_after_x_ = 0x4104,
        talk_to_Fado_after_Faron_twilight = 0x4108,
        talk_to_Fado_after_Eldin_twilight = 0x4110,
        talk_to_Pergie_after_faron_twilight = 0x4140,
        talk_to_Pergie_after_Eldin_twilight = 0x4180,
        Watched_post_ToT_Ooccoo_CS = 0x4201,
        Triggered_Monkey_Puppet_Scene = 0x4202,
        Watched_cutscene_with_Rusl_in_N_Faron_after_finishing_SPR = 0x4204,
        Barrier_Gone = 0x4208,
        Midna_text_after_warping_back_to_Faron_in_Eldin_twilight = 0x4220,
        Goats_3_Done = 0x4240,
        Palace_West_Wing_Sol_in_West_Slot = 0x4302,
        Senses_Unlocked = 0x4308,
        listened_to_adult_spirits_next_to_fountain_in_castle_town_twilight = 0x4310,
        Talked_to_Jaggle_Ordon_Day_3 = 0x4320,
        Talked_to_East_CT_Guard = 0x4380,
        Palace_East_Wing_Sol_in_West_Slot = 0x4408,
        Palace_West_Wing_Sol_in_East_Slot = 0x4420,
        postman_leaves_for_the_first_time_1 = 0x4504,
        postman_leaves_for_the_first_time_2 = 0x4508,
        Ordon_Day_2_over = 0x4510,
        Listened_to_Soldier_spirits_in_Telmas_bar_during_twilight = 0x4520,
        took_cradle_from_monkey_day_2 = 0x4601,
        talked_to_Fado_day_2 = 0x4602,
        Rode_Epona_back_to_Links_house_Ordon_Day_1 = 0x4610,
        Refuse_to_give_Wooden_Sword_second_time_Ordon_Day_3 = 0x4620,
        Refuse_to_give_Wooden_Sword_first_time_Ordon_Day_3 = 0x4640,
        unk4680 = 0x4680,
        Talked_to_Bo_Ordon_Day_1 = 0x4701,
        Talked_to_Rusl_Ordon_Day_1 = 0x4702,
        Talked_to_Ilia_before_calling_Epona_Ordon_Day_1 = 0x4704,
        Talked_to_Ilia_after_calling_Epona_Ordon_Day_1 = 0x4708,
        Used_Hawk_grass_for_the_first_time_Ordon_Day_2 = 0x4710,
        Called_Epona_in_Ordon_Spring = 0x4720,
        Talked_to_Hanch_before_Bee_attack_Ordon_Day_2 = 0x4740,
        Talked_to_Beth_Ordon_Day_3 = 0x4780,
        Talked_to_Beth_during_Talo_rescue_sequence = 0x4801,
        Talked_to_Malo_during_Talo_rescue_sequence = 0x4804,
        Talked_to_Sera_Ordon_Day_1 = 0x4810,
        Failed_to_catch_goat_in_front_of_Bos_house_Ordon_Day_3 = 0x4820,
        Caught_goat_in_front_of_Bos_house_Ordon_Day_3 = 0x4840,
        Talked_to_Bo_after_catching_a_goat_Ordon_Day_3 = 0x4880,
        talked_to_Talo_in_cage_day_2 = 0x4901,
        Bought_Slingshot_from_Sera = 0x4902,
        talked_to_Bo_start_of_day_2 = 0x4908,
        talked_to_Bo_after_catching_goat_day_2 = 0x4910,
        Talked_to_Colin_during_Talo_rescue_sequence = 0x4920,
        Started_Slingshot_tutorial = 0x4A02,
        Sacred_Grove_statues_switched = 0x4A08,
        Saw_Talo_in_cage_cutscene_Ordon_Day_2 = 0x4A10,
        Talo_chases_Monkey = 0x4A20,
        Ordon_Day_1_finished = 0x4A40,
        Zoomed_in_on_Fish_Tank_Henas_hut = 0x4A80,
        talked_to_Talo_after_giving_him_the_wooden_sword_day_3 = 0x4B02,
        Talked_to_Lanayru_Spirit_in_Twilight = 0x4B04,
        Talked_to_Kids_after_finishing_Slingshot_tutorial = 0x4B08,
        Talked_to_Kids_after_hitting_object_Slingshot_tutorial = 0x4B10,
        Talked_to_Kids_before_hitting_object_Slingshot_tutorial = 0x4B20,
        Broke_a_Pumpkin_first_Slingshot_tutorial = 0x4B40,
        Broke_a_Target_first_Slingshot_tutorial = 0x4B80,
        Rescued_Talo_and_the_Monkey_Ordon_Day_2 = 0x4C01,
        Talked_to_Hanch_Ordon_Day_3 = 0x4C04,
        Talked_to_Hanch_after_talking_to_Sera_Ordon_Day_2 = 0x4C08,
        unk4C20 = 0x4C20,
        talked_to_Zora_close_to_Fyer_Lake_hylia_after_lanayru_twilight = 0x4C40,
        Put_Bee_Larva_In_Bottle_Ordon_Day_2 = 0x4C80,
        Zoomed_in_on_Lures_1_Hena = 0x4D01,
        Watched_cutscene_after_being_captured_in_Faron_Twilight = 0x4D08,
        Talked_to_Gengle_after_talking_to_Jovani_in_the_bar = 0x4D10,
        Talked_to_Jovani_in_Bar = 0x4D40,
        Got_Bottle_from_Jovani = 0x4D80,
        Zoomed_in_on_Book_Henas_hut = 0x4E01,
        Zoomed_in_on_Carpet_Henas_hut = 0x4E02,
        Zoomed_in_on_Jars_Henas_hut = 0x4E04,
        Zoomed_in_on_Hat_Henas_hut = 0x4E08,
        Zoomed_in_on_Canoe_Henas_hut = 0x4E10,
        Hena_Beat_Rollgoal_1_8_Frog_Lure = 0x4E20,
        Hena_Zoomed_in_on_Lures_2 = 0x4E80,
        Hena_Zoomed_in_on_Link_Loach_pic_2 = 0x4F01,
        Hena_Zoomed_in_on_Link_Loach_pic_1 = 0x4F02,
        Compare_Hena_and_Iza_pictures_Henas_hut = 0x4F04,
        Zoomed_in_on_Hena_picture_left = 0x4F08,
        Zoomed_in_on_Hena_picture_right = 0x4F10,
        Zoomed_in_on_Iza_picture_Henas_hut = 0x4F20,
        Zoomed_in_on_Coro_picture_Henas_hut = 0x4F40,
        Zoomed_in_on_Fisherman_picture_Henas_hut = 0x4F80,
        unk5001 = 0x5001,
        Caught_an_Adult_Hylian_Loach = 0x5002,
        Caught_First_Fish_with_Hena = 0x5004,
        Caught_an_Ordon_Catfish_non_boat = 0x5008,
        Caught_a_baby_Hylian_Loach = 0x5010,
        Caught_a_Hylian_Pike_non_boat = 0x5020,
        Caught_a_Hyrule_Bass_non_boat = 0x5040,
        Caught_a_Greengill = 0x5080,
        Zoomed_in_on_Rollgoal_Henas_hut = 0x5102,
        Hena_Talks_about_harder_Rollgoal_before_2_1 = 0x5108,
        Beat_Rollgoal_level_Henas_hut = 0x5110,
        listened_to_two_zora_spirits_in_drained_lake_hylia_twilight = 0x5120,
        listened_to_lone_zora_spirit_in_drained_lake_hylia_twilight = 0x5140,
        Listened_to_Soldier_spirits_in_Telmas_bar_during_twilight = 0x5180,
        Dangoro_went_in_a_ball_for_the_first_time = 0x5204,
        threw_Dangoro_in_lava_for_the_first_time = 0x5208,
        Fyrus_gets_up_first_time = 0x5210,
        Fyrus_knocked_down_first_time = 0x5220,
        Ooccoo_Shopkeeper_opening_text_read = 0x5301,
        Talked_to_guy_outside_CT_malo_Mart = 0x5308,
        Talked_to_lady_outside_Agithas_castle = 0x5401,
        Talked_to_NPC_by_springwater = 0x5404,
        Talked_to_NPC_by_springwater_shop_before_fixing = 0x5408,
        Palace_of_Twilight_Story_Flag = 0x5410,
        Update_Shards_to_have_at_least_Arbiters_Shard = 0x5420,
        Used_Senses_to_see_statue_ghost_in_Temple_of_Time_first_room = 0x5440,
        unk5502 = 0x5502,
        Talked_to_Soldier_in_South_Castle_Town_by_flower_shop = 0x5504,
        First_Frog_Lure_fail_with_Hena = 0x5508,
        Talked_to_Jovani_after_collecting_20_Poe_Souls = 0x5510,
        talked_to_Plumm_as_human_after_Lanayru_twilight = 0x5520,
        Talked_with_cat_after_Midnas_Desperate_Hour = 0x5601,
        listened_to_Iza_spirit_during_twilight_while_domain_is_still_frozen = 0x5604,
        Caught_a_Reekfish = 0x5608,
        Talked_to_the_west_CT_dog = 0x5710,
        Talked_with_BlackWhite_cat_after_saving_Jovani = 0x5740,
        Talked_to_Shoe_Shiner_in_Central_Castle_Town = 0x5801,
        Talked_to_Renado_after_restoring_Ilias_memory = 0x5804,
        Talked_to_south_staring_man_in_East_Castle_Town = 0x5810,
        Talked_to_north_staring_man_in_East_Castle_Town = 0x5820,
        Talked_to_fruit_shop_seller_in_South_Castle_Town = 0x5840,
        Talked_to_the_CT_Shoe_Shiner = 0x5901,
        Iza_2_Minigame_done = 0x5908,
        unk5920 = 0x5920,
        encounter_postman_for_the_first_time = 0x5940,
        Tried_to_enter_Central_Castle_Town_shop_with_dirty_shoes = 0x5980,
        Agreed_to_do_Cat_Minigame = 0x5B02,
        Talked_to_Hidden_Village_Cucco = 0x5B04,
        Cat_Minigame_Done = 0x5B08,
        talked_to_owl_Ordon_wolf_night = 0x5B10,
        Generous_with_Trill = 0x5C01,
        Talked_to_Sera_Ordon_Day_3 = 0x5C02,
        Cheap_with_Trill_text_after_leaving = 0x5C04,
        Stole_From_Trill_or_talked_with_him_as_wolf = 0x5C08,
        unk5C10 = 0x5C10,
        talked_to_Iza_spirit_after_melting_zoras_domain_twilight = 0x5C20,
        Scooped_Coros_nasty_soup = 0x5C80,
        can_now_warp_meteor = 0x5D01,
        Generous_with_Trill = 0x5D02,
        Cheap_with_Trill_text_after_paying = 0x5D04,
        Midna_Text_after_frozen_zoras_domain_twilight_intro_cs = 0x5D10,
        Midna_Text_after_Twilight_Kagorok_Flight = 0x5D20,
        Midna_text_after_landing_in_lake_Hylia_during_Lanayru_twilight = 0x5D40,
        Ilia_Text_after_Horse_Call_CS = 0x5E04,
        Midna_Text_after_Forest_Temple_Done = 0x5E10,
        unk5E20 = 0x5E20,
        Forced_Midna_text_after_touching_fog_in_Palace_of_Twilight = 0x5E40,
        Forced_Midna_text_after_landing_on_the_Flight_by_Foul_platform = 0x5E80,
        Got_an_apple_from_fruit_stand_in_South_Castle_Town = 0x5F02,
        Talked_to_Zora_by_waterfall_in_Zoras_Domain = 0x5F04,
        Fyer_Reacts_to_Special_Repairs = 0x5F08,
        Watched_first_Cannon_CS_in_Basement = 0x5F10,
        Shad_leaves_so_you_can_warp = 0x5F20,
        Ancient_Skybook_from_Impaz = 0x5F80,
        Talked_to_Fyer_after_Lanayru_twilight = 0x6001,
        Asked_Fyer_for_special_repairs_before_warping_the_cannon = 0x6002,
        Shad_comes_back_after_all_letters_were_gotten = 0x6004,
        Lake_Hylia_Sky_Letter = 0x6008,
        Bridge_of_Eldin_Sky_Letter = 0x6010,
        Gorge_Sky_Letter = 0x6020,
        Desert_Sky_Letter = 0x6040,
        Faron_Sky_Letter = 0x6080,
        bought_Hylian_shield_at_malo_mart = 0x6102,
        Midna_text_after_you_entered_Eldin_twilight = 0x6104,
        Trill_will_try_to_kill_you = 0x6110,
        Got_Reekfish_scent_prevents_void_in_Snowpeak = 0x6120,
        remove_Midna_from_Z = 0x6140,
        Talked_to_Lazy_Goron = 0x6180,
        Ampitheater_Skyletter = 0x6204,
        Started_STAR_1 = 0x6208,
        Got_Poe_scent = 0x6210,
        Girls_in_Castle_Town_start_chasing_Link = 0x6220,
        Talked_to_Colin_Ordon_Day_1 = 0x6280,
        Hena_Beat_Rollgoal_8_8 = 0x6302
    };
}     // namespace libtp::data::flags
#endif
/*
 * Copyright (C) 1997-2001 Id Software, Inc.
 * Copyright (C) 2011 Yamagi Burmeister
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 * =======================================================================
 *
 * Functionpointers to every function in the game.so.
 *
 * =======================================================================
 */

static const fnlist_entry_t
fnentries_die[] =
{
	{"body_die", (byte *)body_die},
	{"player_die", (byte *)player_die},
	{"tank_die", (byte *)tank_die},
	{"supertank_die", (byte *)supertank_die},
	{"soldier_die", (byte *)soldier_die},
	{"parasite_die", (byte *)parasite_die},
	{"mutant_die", (byte *)mutant_die},
	{"medic_die", (byte *)medic_die},
	{"insane_die", (byte *)insane_die},
	{"infantry_die", (byte *)infantry_die},
	{"hover_die", (byte *)hover_die},
	{"gunner_die", (byte *)gunner_die},
	{"gladiator_die", (byte *)gladiator_die},
	{"flyer_die", (byte *)flyer_die},
	{"floater_die", (byte *)floater_die},
	{"flipper_die", (byte *)flipper_die},
	{"chick_die", (byte *)chick_die},
	{"brain_die", (byte *)brain_die},
	{"makron_die", (byte *)makron_die},
	{"makron_torso_die", (byte *)makron_torso_die},
	{"jorg_die", (byte *)jorg_die},
	{"boss2_die", (byte *)boss2_die},
	{"berserk_die", (byte *)berserk_die},
	{"turret_driver_die", (byte *)turret_driver_die},
	{"func_explosive_explode", (byte *)func_explosive_explode},
	{"misc_deadsoldier_die", (byte *)misc_deadsoldier_die},
	{"commander_body_die", (byte *)commander_body_die},
	{"debris_die", (byte *)debris_die},
	{"gib_die", (byte *)gib_die},
	{"door_secret_die", (byte *)door_secret_die},
	{"barrel_delay", (byte *)barrel_delay},
	{"door_killed", (byte *)door_killed},
	{"button_killed", (byte *)button_killed},
},
fnentries_pain[] =
{
	{"player_pain", (byte *)player_pain},
	{"tank_pain", (byte *)tank_pain},
	{"supertank_pain", (byte *)supertank_pain},
	{"soldier_pain", (byte *)soldier_pain},
	{"parasite_pain", (byte *)parasite_pain},
	{"mutant_pain", (byte *)mutant_pain},
	{"medic_pain", (byte *)medic_pain},
	{"insane_pain", (byte *)insane_pain},
	{"infantry_pain", (byte *)infantry_pain},
	{"hover_pain", (byte *)hover_pain},
	{"gunner_pain", (byte *)gunner_pain},
	{"gladiator_pain", (byte *)gladiator_pain},
	{"flyer_pain", (byte *)flyer_pain},
	{"floater_pain", (byte *)floater_pain},
	{"flipper_pain", (byte *)flipper_pain},
	{"chick_pain", (byte *)chick_pain},
	{"makron_pain", (byte *)makron_pain},
	{"jorg_pain", (byte *)jorg_pain},
	{"brain_pain", (byte *)brain_pain},
	{"boss2_pain", (byte *)boss2_pain},
	{"berserk_pain", (byte *)berserk_pain},
},
fnentries_prethink[] =
{
	{"misc_viper_bomb_prethink", (byte *)misc_viper_bomb_prethink},
},
fnentries_think[] =
{
	{"SP_CreateUnnamedSpawn", (byte *)SP_CreateUnnamedSpawn},
	{"SP_CreateCoopSpots", (byte *)SP_CreateCoopSpots},
	{"SP_FixCoopSpots", (byte *)SP_FixCoopSpots},
	{"BossExplode", (byte *)BossExplode},
	{"hover_deadthink", (byte *)hover_deadthink},
	{"MakronSpawn", (byte *)MakronSpawn},
	{"makron_torso_think", (byte *)makron_torso_think},
	{"Think_Boss3Stand", (byte *)Think_Boss3Stand},
	{"bfg_think", (byte *)bfg_think},
	{"bfg_explode", (byte *)bfg_explode},
	{"Grenade_Explode", (byte *)Grenade_Explode},
	{"G_FreeEdict", (byte *)G_FreeEdict},
	{"Think_Delay", (byte *)Think_Delay},
	{"turret_driver_link", (byte *)turret_driver_link},
	{"turret_driver_think", (byte *)turret_driver_think},
	{"turret_breach_finish_init", (byte *)turret_breach_finish_init},
	{"turret_breach_think", (byte *)turret_breach_think},
	{"multi_wait", (byte *)multi_wait},
	{"target_earthquake_think", (byte *)target_earthquake_think},
	{"target_lightramp_think", (byte *)target_lightramp_think},
	{"target_laser_start", (byte *)target_laser_start},
	{"target_laser_think", (byte *)target_laser_think},
	{"target_crosslevel_target_think", (byte *)target_crosslevel_target_think},
	{"target_explosion_explode", (byte *)target_explosion_explode},
	{"Target_Help_Think", (byte *)Target_Help_Think},
	{"swimmonster_start_go", (byte *)swimmonster_start_go},
	{"flymonster_start_go", (byte *)flymonster_start_go},
	{"walkmonster_start_go", (byte *)walkmonster_start_go},
	{"monster_triggered_spawn", (byte *)monster_triggered_spawn},
	{"M_droptofloor", (byte *)M_droptofloor},
	{"monster_think", (byte *)monster_think},
	{"M_FliesOn", (byte *)M_FliesOn},
	{"M_FliesOff", (byte *)M_FliesOff},
	{"func_clock_think", (byte *)func_clock_think},
	{"misc_satellite_dish_think", (byte *)misc_satellite_dish_think},
	{"misc_banner_think", (byte *)misc_banner_think},
	{"commander_body_drop", (byte *)commander_body_drop},
	{"commander_body_think", (byte *)commander_body_think},
	{"misc_easterchick2_think", (byte *)misc_easterchick2_think},
	{"misc_easterchick_think", (byte *)misc_easterchick_think},
	{"misc_eastertank_think", (byte *)misc_eastertank_think},
	{"misc_blackhole_think", (byte *)misc_blackhole_think},
	{"barrel_explode", (byte *)barrel_explode},
	{"func_object_release", (byte *)func_object_release},
	{"TH_viewthing", (byte *)TH_viewthing},
	{"gib_think", (byte *)gib_think},
	{"drop_make_touchable", (byte *)drop_make_touchable},
	{"droptofloor", (byte *)droptofloor},
	{"MegaHealth_think", (byte *)MegaHealth_think},
	{"DoRespawn", (byte *)DoRespawn},
	{"door_secret_move6", (byte *)door_secret_move6},
	{"door_secret_move4", (byte *)door_secret_move4},
	{"door_secret_move2", (byte *)door_secret_move2},
	{"func_timer_think", (byte *)func_timer_think},
	{"trigger_elevator_init", (byte *)trigger_elevator_init},
	{"func_train_find", (byte *)func_train_find},
	{"train_next", (byte *)train_next},
	{"Think_SpawnDoorTrigger", (byte *)Think_SpawnDoorTrigger},
	{"Think_CalcMoveSpeed", (byte *)Think_CalcMoveSpeed},
	{"door_go_down", (byte *)door_go_down},
	{"button_return", (byte *)button_return},
	{"wait_and_change_think", (byte *)wait_and_change_think},
	{"plat_go_down", (byte *)plat_go_down},
	{"Think_AccelMove", (byte *)Think_AccelMove},
	{"AngleMove_Begin", (byte *)AngleMove_Begin},
	{"AngleMove_Final", (byte *)AngleMove_Final},
	{"AngleMove_Done", (byte *)AngleMove_Done},
	{"Move_Begin", (byte *)Move_Begin},
	{"Move_Final", (byte *)Move_Final},
	{"Move_Done", (byte *)Move_Done},
},
fnentries_touch[] =
{
	{"mutant_jump_touch", (byte *)mutant_jump_touch},
	{"bfg_touch", (byte *)bfg_touch},
	{"rocket_touch", (byte *)rocket_touch},
	{"Grenade_Touch", (byte *)Grenade_Touch},
	{"blaster_touch", (byte *)blaster_touch},
	{"trigger_monsterjump_touch", (byte *)trigger_monsterjump_touch},
	{"trigger_gravity_touch", (byte *)trigger_gravity_touch},
	{"hurt_touch", (byte *)hurt_touch},
	{"trigger_push_touch", (byte *)trigger_push_touch},
	{"Touch_Multi", (byte *)Touch_Multi},
	{"teleporter_touch", (byte *)teleporter_touch},
	{"misc_viper_bomb_touch", (byte *)misc_viper_bomb_touch},
	{"barrel_touch", (byte *)barrel_touch},
	{"func_object_touch", (byte *)func_object_touch},
	{"point_combat_touch", (byte *)point_combat_touch},
	{"path_corner_touch", (byte *)path_corner_touch},
	{"gib_touch", (byte *)gib_touch},
	{"drop_temp_touch", (byte *)drop_temp_touch},
	{"Touch_Item", (byte *)Touch_Item},
	{"door_touch", (byte *)door_touch},
	{"Touch_DoorTrigger", (byte *)Touch_DoorTrigger},
	{"button_touch", (byte *)button_touch},
	{"rotating_touch", (byte *)rotating_touch},
	{"Touch_Plat_Center", (byte *)Touch_Plat_Center},
},
fnentries_mi_sight[] =
{
	{"tank_sight", (byte *)tank_sight},
	{"soldier_sight", (byte *)soldier_sight},
	{"parasite_sight", (byte *)parasite_sight},
	{"mutant_sight", (byte *)mutant_sight},
	{"medic_sight", (byte *)medic_sight},
	{"infantry_sight", (byte *)infantry_sight},
	{"hover_sight", (byte *)hover_sight},
	{"gunner_sight", (byte *)gunner_sight},
	{"gladiator_sight", (byte *)gladiator_sight},
	{"flyer_sight", (byte *)flyer_sight},
	{"floater_sight", (byte *)floater_sight},
	{"flipper_sight", (byte *)flipper_sight},
	{"chick_sight", (byte *)chick_sight},
	{"brain_sight", (byte *)brain_sight},
	{"berserk_sight", (byte *)berserk_sight},
},
fnentries_use[] =
{
	{"Use_Boss3", (byte *)Use_Boss3},
	{"hurt_use", (byte *)hurt_use},
	{"trigger_counter_use", (byte *)trigger_counter_use},
	{"trigger_key_use", (byte *)trigger_key_use},
	{"trigger_relay_use", (byte *)trigger_relay_use},
	{"trigger_enable", (byte *)trigger_enable},
	{"Use_Multi", (byte *)Use_Multi},
	{"target_earthquake_use", (byte *)target_earthquake_use},
	{"target_lightramp_use", (byte *)target_lightramp_use},
	{"target_laser_use", (byte *)target_laser_use},
	{"trigger_crosslevel_trigger_use", (byte *)trigger_crosslevel_trigger_use},
	{"use_target_blaster", (byte *)use_target_blaster},
	{"use_target_spawner", (byte *)use_target_spawner},
	{"use_target_splash", (byte *)use_target_splash},
	{"use_target_changelevel", (byte *)use_target_changelevel},
	{"use_target_explosion", (byte *)use_target_explosion},
	{"use_target_goal", (byte *)use_target_goal},
	{"use_target_secret", (byte *)use_target_secret},
	{"Use_Target_Help", (byte *)Use_Target_Help},
	{"Use_Target_Speaker", (byte *)Use_Target_Speaker},
	{"Use_Target_Tent", (byte *)Use_Target_Tent},
	{"monster_triggered_spawn_use", (byte *)monster_triggered_spawn_use},
	{"monster_use", (byte *)monster_use},
	{"func_clock_use", (byte *)func_clock_use},
	{"target_string_use", (byte *)target_string_use},
	{"misc_satellite_dish_use", (byte *)misc_satellite_dish_use},
	{"misc_strogg_ship_use", (byte *)misc_strogg_ship_use},
	{"misc_viper_bomb_use", (byte *)misc_viper_bomb_use},
	{"misc_viper_use", (byte *)misc_viper_use},
	{"commander_body_use", (byte *)commander_body_use},
	{"misc_blackhole_use", (byte *)misc_blackhole_use},
	{"func_explosive_spawn", (byte *)func_explosive_spawn},
	{"func_explosive_use", (byte *)func_explosive_use},
	{"func_object_use", (byte *)func_object_use},
	{"func_wall_use", (byte *)func_wall_use},
	{"light_use", (byte *)light_use},
	{"Use_Areaportal", (byte *)Use_Areaportal},
	{"Use_Item", (byte *)Use_Item},
	{"use_killbox", (byte *)use_killbox},
	{"door_secret_use", (byte *)door_secret_use},
	{"func_conveyor_use", (byte *)func_conveyor_use},
	{"func_timer_use", (byte *)func_timer_use},
	{"trigger_elevator_use", (byte *)trigger_elevator_use},
	{"train_use", (byte *)train_use},
	{"door_use", (byte *)door_use},
	{"button_use", (byte *)button_use},
	{"rotating_use", (byte *)rotating_use},
	{"Use_Plat", (byte *)Use_Plat},
},
fnentries_blocked[] = 
{
	{"turret_blocked", (byte *)turret_blocked},
	{"door_secret_blocked", (byte *)door_secret_blocked},
	{"train_blocked", (byte *)train_blocked},
	{"door_blocked", (byte *)door_blocked},
	{"rotating_blocked", (byte *)rotating_blocked},
	{"plat_blocked", (byte *)plat_blocked},
},
fnentries_mi_search[] =
{
	{"supertank_search", (byte *)supertank_search},
	{"parasite_search", (byte *)parasite_search},
	{"mutant_search", (byte *)mutant_search},
	{"medic_search", (byte *)medic_search},
	{"hover_search", (byte *)hover_search},
	{"gunner_search", (byte *)gunner_search},
	{"gladiator_search", (byte *)gladiator_search},
	{"brain_search", (byte *)brain_search},
	{"jorg_search", (byte *)jorg_search},
	{"boss2_search", (byte *)boss2_search},
	{"berserk_search", (byte *)berserk_search},
},
fnentries_mi_stand[] =
{
	{"tank_stand", (byte *)tank_stand},
	{"supertank_stand", (byte *)supertank_stand},
	{"soldier_stand", (byte *)soldier_stand},
	{"parasite_stand", (byte *)parasite_stand},
	{"mutant_stand", (byte *)mutant_stand},
	{"medic_stand", (byte *)medic_stand},
	{"insane_stand", (byte *)insane_stand},
	{"infantry_stand", (byte *)infantry_stand},
	{"hover_stand", (byte *)hover_stand},
	{"gunner_stand", (byte *)gunner_stand},
	{"gladiator_stand", (byte *)gladiator_stand},
	{"flyer_stand", (byte *)flyer_stand},
	{"floater_stand", (byte *)floater_stand},
	{"flipper_stand", (byte *)flipper_stand},
	{"chick_stand", (byte *)chick_stand},
	{"brain_stand", (byte *)brain_stand},
	{"makron_stand", (byte *)makron_stand},
	{"jorg_stand", (byte *)jorg_stand},
	{"boss2_stand", (byte *)boss2_stand},
	{"berserk_stand", (byte *)berserk_stand},
},
fnentries_mi_idle[] =
{
	{"tank_idle", (byte *)tank_idle},
	{"parasite_idle", (byte *)parasite_idle},
	{"mutant_idle", (byte *)mutant_idle},
	{"medic_idle", (byte *)medic_idle},
	{"infantry_fidget", (byte *)infantry_fidget},
	{"gladiator_idle", (byte *)gladiator_idle},
	{"flyer_idle", (byte *)flyer_idle},
	{"floater_idle", (byte *)floater_idle},
	{"brain_idle", (byte *)brain_idle},
},
fnentries_mi_walk[] =
{
	{"tank_walk", (byte *)tank_walk},
	{"supertank_walk", (byte *)supertank_walk},
	{"soldier_walk", (byte *)soldier_walk},
	{"parasite_start_walk", (byte *)parasite_start_walk},
	{"mutant_walk", (byte *)mutant_walk},
	{"medic_walk", (byte *)medic_walk},
	{"insane_walk", (byte *)insane_walk},
	{"infantry_walk", (byte *)infantry_walk},
	{"hover_walk", (byte *)hover_walk},
	{"gunner_walk", (byte *)gunner_walk},
	{"gladiator_walk", (byte *)gladiator_walk},
	{"flyer_walk", (byte *)flyer_walk},
	{"floater_walk", (byte *)floater_walk},
	{"flipper_walk", (byte *)flipper_walk},
	{"chick_walk", (byte *)chick_walk},
	{"brain_walk", (byte *)brain_walk},
	{"makron_walk", (byte *)makron_walk},
	{"jorg_walk", (byte *)jorg_walk},
	{"boss2_walk", (byte *)boss2_walk},
	{"berserk_walk", (byte *)berserk_walk},
},
fnentries_mi_run[] =
{
	{"tank_run", (byte *)tank_run},
	{"supertank_run", (byte *)supertank_run},
	{"soldier_run", (byte *)soldier_run},
	{"parasite_start_run", (byte *)parasite_start_run},
	{"mutant_run", (byte *)mutant_run},
	{"medic_run", (byte *)medic_run},
	{"insane_run", (byte *)insane_run},
	{"infantry_run", (byte *)infantry_run},
	{"hover_run", (byte *)hover_run},
	{"gunner_run", (byte *)gunner_run},
	{"gladiator_run", (byte *)gladiator_run},
	{"flyer_run", (byte *)flyer_run},
	{"floater_run", (byte *)floater_run},
	{"flipper_start_run", (byte *)flipper_start_run},
	{"chick_run", (byte *)chick_run},
	{"brain_run", (byte *)brain_run},
	{"makron_run", (byte *)makron_run},
	{"jorg_run", (byte *)jorg_run},
	{"boss2_run", (byte *)boss2_run},
	{"berserk_run", (byte *)berserk_run},
},
fnentries_mi_melee[] =
{
	{"mutant_melee", (byte *)mutant_melee},
	{"gladiator_melee", (byte *)gladiator_melee},
	{"flyer_melee", (byte *)flyer_melee},
	{"floater_melee", (byte *)floater_melee},
	{"flipper_melee", (byte *)flipper_melee},
	{"chick_melee", (byte *)chick_melee},
	{"brain_melee", (byte *)brain_melee},
	{"berserk_melee", (byte *)berserk_melee},
},
fnentries_mi_attack[] =
{
	{"tank_attack", (byte *)tank_attack},
	{"supertank_attack", (byte *)supertank_attack},
	{"soldier_attack", (byte *)soldier_attack},
	{"parasite_attack", (byte *)parasite_attack},
	{"mutant_jump", (byte *)mutant_jump},
	{"medic_attack", (byte *)medic_attack},
	{"infantry_attack", (byte *)infantry_attack},
	{"hover_start_attack", (byte *)hover_start_attack},
	{"gunner_attack", (byte *)gunner_attack},
	{"gladiator_attack", (byte *)gladiator_attack},
	{"flyer_attack", (byte *)flyer_attack},
	{"floater_attack", (byte *)floater_attack},
	{"chick_attack", (byte *)chick_attack},
	{"makron_attack", (byte *)makron_attack},
	{"jorg_attack", (byte *)jorg_attack},
	{"boss2_attack", (byte *)boss2_attack},
},
fnentries_mi_checkattack[] =
{
	{"mutant_checkattack", (byte *)mutant_checkattack},
	{"medic_checkattack", (byte *)medic_checkattack},
	{"Makron_CheckAttack", (byte *)Makron_CheckAttack},
	{"Jorg_CheckAttack", (byte *)Jorg_CheckAttack},
	{"Boss2_CheckAttack", (byte *)Boss2_CheckAttack},
	{"M_CheckAttack", (byte *)M_CheckAttack},
},
fnentries_mi_dodge[] =
{
	{"soldier_dodge", (byte *)soldier_dodge},
	{"medic_dodge", (byte *)medic_dodge},
	{"infantry_dodge", (byte *)infantry_dodge},
	{"gunner_dodge", (byte *)gunner_dodge},
	{"chick_dodge", (byte *)chick_dodge},
	{"brain_dodge", (byte *)brain_dodge},
},
fnentries_mv_end[] =
{
	{"door_secret_move5", (byte *)door_secret_move5},
	{"door_secret_move3", (byte *)door_secret_move3},
	{"door_secret_move1", (byte *)door_secret_move1},
	{"train_wait", (byte *)train_wait},
	{"door_hit_bottom", (byte *)door_hit_bottom},
	{"door_hit_top", (byte *)door_hit_top},
	{"button_wait", (byte *)button_wait},
	{"button_done", (byte *)button_done},
	{"plat_hit_top", (byte *)plat_hit_top},
	{"plat_hit_bottom", (byte *)plat_hit_bottom},
};

static const functionList_t
fnlist_die =
{
	"die",
	fnentries_die, ARREND(fnentries_die)
},
fnlist_pain =
{
	"pain",
	fnentries_pain, ARREND(fnentries_pain)
},
fnlist_prethink =
{
	"prethink",
	fnentries_prethink, ARREND(fnentries_prethink)
},
fnlist_think =
{
	"think",
	fnentries_think, ARREND(fnentries_think)
},
fnlist_touch =
{
	"touch",
	fnentries_touch, ARREND(fnentries_touch)
},
fnlist_use =
{
	"use",
	fnentries_use, ARREND(fnentries_use)
},
fnlist_blocked =
{
	"blocked",
	fnentries_blocked, ARREND(fnentries_blocked)
},
fnlist_mi_sight =
{
	"mi_sight",
	fnentries_mi_sight, ARREND(fnentries_mi_sight)
},
fnlist_mi_search =
{
	"mi_search",
	fnentries_mi_search, ARREND(fnentries_mi_search)
},
fnlist_mi_stand =
{
	"mi_stand",
	fnentries_mi_stand, ARREND(fnentries_mi_stand)
},
fnlist_mi_idle =
{
	"mi_idle",
	fnentries_mi_idle, ARREND(fnentries_mi_idle)
},
fnlist_mi_walk =
{
	"mi_walk",
	fnentries_mi_walk, ARREND(fnentries_mi_walk)
},
fnlist_mi_run =
{
	"mi_run",
	fnentries_mi_run, ARREND(fnentries_mi_run)
},
fnlist_mi_melee =
{
	"mi_melee",
	fnentries_mi_melee, ARREND(fnentries_mi_melee)
},
fnlist_mi_attack =
{
	"mi_attack",
	fnentries_mi_attack, ARREND(fnentries_mi_attack)
},
fnlist_mi_checkattack =
{
	"mi_checkattack",
	fnentries_mi_checkattack, ARREND(fnentries_mi_checkattack)
},
fnlist_mi_dodge =
{
	"mi_dodge",
	fnentries_mi_dodge, ARREND(fnentries_mi_dodge)
},
fnlist_mv_end =
{
	"mv_end",
	fnentries_mv_end, ARREND(fnentries_mv_end)
};

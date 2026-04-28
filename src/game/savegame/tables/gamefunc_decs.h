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
 * Prototypes for every function in the game.so.
 *
 * =======================================================================
 */

// die
extern void body_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void player_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void tank_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void supertank_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void soldier_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void parasite_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void mutant_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void medic_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void insane_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void infantry_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void hover_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void gunner_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void gladiator_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void flyer_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void floater_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void flipper_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void chick_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void brain_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void makron_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void makron_torso_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void jorg_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void boss2_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void berserk_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void turret_driver_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void func_explosive_explode ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void misc_deadsoldier_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void commander_body_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void debris_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void gib_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void door_secret_die ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void barrel_delay ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void door_killed ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;
extern void button_killed ( edict_t * self , edict_t * inflictor , edict_t * attacker , int damage , vec3_t point ) ;

// pain
extern void player_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void tank_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void supertank_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void soldier_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void parasite_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void mutant_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void medic_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void insane_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void infantry_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void hover_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void gunner_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void gladiator_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void flyer_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void floater_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void flipper_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void chick_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void brain_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void makron_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void jorg_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void boss2_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;
extern void berserk_pain ( edict_t * self , edict_t * other , float kick , int damage ) ;

// prethink
extern void misc_viper_bomb_prethink ( edict_t * self ) ;

// think
extern void SP_CreateUnnamedSpawn ( edict_t * self ) ;
extern void SP_CreateCoopSpots ( edict_t * self ) ;
extern void SP_FixCoopSpots ( edict_t * self ) ;
extern void BossExplode ( edict_t * self ) ;
extern void hover_deadthink ( edict_t * self ) ;
extern void MakronSpawn ( edict_t * self ) ;
extern void makron_torso_think ( edict_t * self ) ;
extern void Think_Boss3Stand ( edict_t * ent ) ;
extern void bfg_think ( edict_t * self ) ;
extern void bfg_explode ( edict_t * self ) ;
extern void Grenade_Explode ( edict_t * ent ) ;
extern void G_FreeEdict ( edict_t * ed ) ;
extern void Think_Delay ( edict_t * ent ) ;
extern void turret_driver_link ( edict_t * self ) ;
extern void turret_driver_think ( edict_t * self ) ;
extern void turret_breach_finish_init ( edict_t * self ) ;
extern void turret_breach_think ( edict_t * self ) ;
extern void multi_wait ( edict_t * ent ) ;
extern void target_earthquake_think ( edict_t * self ) ;
extern void target_lightramp_think ( edict_t * self ) ;
extern void target_laser_start ( edict_t * self ) ;
extern void target_laser_think ( edict_t * self ) ;
extern void target_crosslevel_target_think ( edict_t * self ) ;
extern void target_explosion_explode ( edict_t * self ) ;
extern void Target_Help_Think ( edict_t * ent );
extern void swimmonster_start_go ( edict_t * self ) ;
extern void flymonster_start_go ( edict_t * self ) ;
extern void walkmonster_start_go ( edict_t * self ) ;
extern void monster_triggered_spawn ( edict_t * self ) ;
extern void monster_think ( edict_t * self ) ;
extern void M_droptofloor ( edict_t * ent ) ;
extern void M_FliesOn ( edict_t * self ) ;
extern void M_FliesOff ( edict_t * self ) ;
extern void func_clock_think ( edict_t * self ) ;
extern void misc_satellite_dish_think ( edict_t * self ) ;
extern void misc_banner_think ( edict_t * ent ) ;
extern void commander_body_drop ( edict_t * self ) ;
extern void commander_body_think ( edict_t * self ) ;
extern void misc_easterchick2_think ( edict_t * self ) ;
extern void misc_easterchick_think ( edict_t * self ) ;
extern void misc_eastertank_think ( edict_t * self ) ;
extern void misc_blackhole_think ( edict_t * self ) ;
extern void barrel_explode ( edict_t * self ) ;
extern void func_object_release ( edict_t * self ) ;
extern void TH_viewthing ( edict_t * ent ) ;
extern void gib_think ( edict_t * self ) ;
extern void droptofloor ( edict_t * ent ) ;
extern void drop_make_touchable ( edict_t * ent ) ;
extern void MegaHealth_think ( edict_t * self ) ;
extern void DoRespawn ( edict_t * ent ) ;
extern void door_secret_move6 ( edict_t * self ) ;
extern void door_secret_move4 ( edict_t * self ) ;
extern void door_secret_move2 ( edict_t * self ) ;
extern void func_timer_think ( edict_t * self ) ;
extern void trigger_elevator_init ( edict_t * self ) ;
extern void func_train_find ( edict_t * self ) ;
extern void train_next ( edict_t * self ) ;
extern void Think_SpawnDoorTrigger ( edict_t * ent ) ;
extern void Think_CalcMoveSpeed ( edict_t * self ) ;
extern void door_go_down ( edict_t * self ) ;
extern void button_return ( edict_t * self ) ;
extern void wait_and_change_think(edict_t* ent);
extern void plat_go_down ( edict_t * ent ) ;
extern void Think_AccelMove ( edict_t * ent ) ;
extern void AngleMove_Begin ( edict_t * ent ) ;
extern void AngleMove_Final ( edict_t * ent ) ;
extern void AngleMove_Done ( edict_t * ent ) ;
extern void Move_Begin ( edict_t * ent ) ;
extern void Move_Final ( edict_t * ent ) ;
extern void Move_Done ( edict_t * ent ) ;

// touch
extern void mutant_jump_touch ( edict_t * self , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void bfg_touch ( edict_t * self , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void rocket_touch ( edict_t * ent , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void Grenade_Touch ( edict_t * ent , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void blaster_touch ( edict_t * self , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void trigger_monsterjump_touch ( edict_t * self , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void trigger_gravity_touch ( edict_t * self , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void hurt_touch ( edict_t * self , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void trigger_push_touch ( edict_t * self , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void Touch_Multi ( edict_t * self , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void teleporter_touch ( edict_t * self , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void misc_viper_bomb_touch ( edict_t * self , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void barrel_touch ( edict_t * self , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void func_object_touch ( edict_t * self , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void point_combat_touch ( edict_t * self , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void path_corner_touch ( edict_t * self , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void gib_touch ( edict_t * self , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void drop_temp_touch ( edict_t * ent , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void Touch_Item ( edict_t * ent , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void door_touch ( edict_t * self , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void Touch_DoorTrigger ( edict_t * self , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void button_touch ( edict_t * self , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void rotating_touch ( edict_t * self , edict_t * other , cplane_t * plane , csurface_t * surf ) ;
extern void Touch_Plat_Center ( edict_t * ent , edict_t * other , cplane_t * plane , csurface_t * surf ) ;

// use
extern void Use_Boss3 ( edict_t * ent , edict_t * other , edict_t * activator ) ;
extern void hurt_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void trigger_counter_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void trigger_key_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void trigger_relay_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void trigger_enable ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void Use_Multi ( edict_t * ent , edict_t * other , edict_t * activator ) ;
extern void target_earthquake_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void target_lightramp_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void target_laser_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void trigger_crosslevel_trigger_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void use_target_blaster ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void use_target_spawner ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void use_target_splash ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void use_target_changelevel ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void use_target_explosion ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void use_target_goal ( edict_t * ent , edict_t * other , edict_t * activator ) ;
extern void use_target_secret ( edict_t * ent , edict_t * other , edict_t * activator ) ;
extern void Use_Target_Help ( edict_t * ent , edict_t * other , edict_t * activator ) ;
extern void Use_Target_Speaker ( edict_t * ent , edict_t * other , edict_t * activator ) ;
extern void Use_Target_Tent ( edict_t * ent , edict_t * other , edict_t * activator ) ;
extern void monster_triggered_spawn_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void monster_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void func_clock_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void target_string_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void misc_satellite_dish_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void misc_strogg_ship_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void misc_viper_bomb_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void misc_viper_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void commander_body_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void misc_blackhole_use ( edict_t * ent , edict_t * other , edict_t * activator ) ;
extern void func_explosive_spawn ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void func_explosive_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void func_object_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void func_wall_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void light_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void Use_Areaportal ( edict_t * ent , edict_t * other , edict_t * activator ) ;
extern void Use_Item ( edict_t * ent , edict_t * other , edict_t * activator ) ;
extern void use_killbox ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void door_secret_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void func_conveyor_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void func_timer_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void trigger_elevator_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void train_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void door_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void button_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void rotating_use ( edict_t * self , edict_t * other , edict_t * activator ) ;
extern void Use_Plat ( edict_t * ent , edict_t * other , edict_t * activator ) ;

// blocked
extern void turret_blocked ( edict_t * self , edict_t * other ) ;
extern void door_secret_blocked ( edict_t * self , edict_t * other ) ;
extern void train_blocked ( edict_t * self , edict_t * other ) ;
extern void door_blocked ( edict_t * self , edict_t * other ) ;
extern void rotating_blocked ( edict_t * self , edict_t * other ) ;
extern void plat_blocked ( edict_t * self , edict_t * other ) ;

// mi_sight
extern void tank_sight ( edict_t * self , edict_t * other ) ;
extern void soldier_sight ( edict_t * self , edict_t * other ) ;
extern void parasite_sight ( edict_t * self , edict_t * other ) ;
extern void mutant_sight ( edict_t * self , edict_t * other ) ;
extern void medic_sight ( edict_t * self , edict_t * other ) ;
extern void infantry_sight ( edict_t * self , edict_t * other ) ;
extern void hover_sight ( edict_t * self , edict_t * other ) ;
extern void gunner_sight ( edict_t * self , edict_t * other ) ;
extern void gladiator_sight ( edict_t * self , edict_t * other ) ;
extern void flyer_sight ( edict_t * self , edict_t * other ) ;
extern void floater_sight ( edict_t * self , edict_t * other ) ;
extern void flipper_sight ( edict_t * self , edict_t * other ) ;
extern void chick_sight ( edict_t * self , edict_t * other ) ;
extern void brain_sight ( edict_t * self , edict_t * other ) ;
extern void berserk_sight ( edict_t * self , edict_t * other ) ;

// mi_search
extern void supertank_search ( edict_t * self ) ;
extern void parasite_search ( edict_t * self ) ;
extern void mutant_search ( edict_t * self ) ;
extern void medic_search ( edict_t * self ) ;
extern void hover_search ( edict_t * self ) ;
extern void gunner_search ( edict_t * self ) ;
extern void gladiator_search ( edict_t * self ) ;
extern void brain_search ( edict_t * self ) ;
extern void jorg_search ( edict_t * self ) ;
extern void boss2_search ( edict_t * self ) ;
extern void berserk_search ( edict_t * self ) ;

// mi_stand
extern void tank_stand ( edict_t * self ) ;
extern void supertank_stand ( edict_t * self ) ;
extern void soldier_stand ( edict_t * self ) ;
extern void parasite_stand ( edict_t * self ) ;
extern void mutant_stand ( edict_t * self ) ;
extern void medic_stand ( edict_t * self ) ;
extern void insane_stand ( edict_t * self ) ;
extern void infantry_stand ( edict_t * self ) ;
extern void hover_stand ( edict_t * self ) ;
extern void gunner_stand ( edict_t * self ) ;
extern void gladiator_stand ( edict_t * self ) ;
extern void flyer_stand ( edict_t * self ) ;
extern void floater_stand ( edict_t * self ) ;
extern void flipper_stand ( edict_t * self ) ;
extern void chick_stand ( edict_t * self ) ;
extern void brain_stand ( edict_t * self ) ;
extern void makron_stand ( edict_t * self ) ;
extern void jorg_stand ( edict_t * self ) ;
extern void boss2_stand ( edict_t * self ) ;
extern void berserk_stand ( edict_t * self ) ;

// mi_idle
extern void tank_idle ( edict_t * self ) ;
extern void parasite_idle ( edict_t * self ) ;
extern void mutant_idle ( edict_t * self ) ;
extern void medic_idle ( edict_t * self ) ;
extern void infantry_fidget ( edict_t * self ) ;
extern void gladiator_idle ( edict_t * self ) ;
extern void flyer_idle ( edict_t * self ) ;
extern void floater_idle ( edict_t * self ) ;
extern void brain_idle ( edict_t * self ) ;

// mi_walk
extern void tank_walk ( edict_t * self ) ;
extern void supertank_walk ( edict_t * self ) ;
extern void soldier_walk ( edict_t * self ) ;
extern void parasite_start_walk ( edict_t * self ) ;
extern void mutant_walk ( edict_t * self ) ;
extern void medic_walk ( edict_t * self ) ;
extern void insane_walk ( edict_t * self ) ;
extern void infantry_walk ( edict_t * self ) ;
extern void hover_walk ( edict_t * self ) ;
extern void gunner_walk ( edict_t * self ) ;
extern void gladiator_walk ( edict_t * self ) ;
extern void flyer_walk ( edict_t * self ) ;
extern void floater_walk ( edict_t * self ) ;
extern void flipper_walk ( edict_t * self ) ;
extern void chick_walk ( edict_t * self ) ;
extern void brain_walk ( edict_t * self ) ;
extern void makron_walk ( edict_t * self ) ;
extern void jorg_walk ( edict_t * self ) ;
extern void boss2_walk ( edict_t * self ) ;
extern void berserk_walk ( edict_t * self ) ;

// mi_run
extern void tank_run ( edict_t * self ) ;
extern void supertank_run ( edict_t * self ) ;
extern void soldier_run ( edict_t * self ) ;
extern void parasite_start_run ( edict_t * self ) ;
extern void mutant_run ( edict_t * self ) ;
extern void medic_run ( edict_t * self ) ;
extern void insane_run ( edict_t * self ) ;
extern void infantry_run ( edict_t * self ) ;
extern void hover_run ( edict_t * self ) ;
extern void gunner_run ( edict_t * self ) ;
extern void gladiator_run ( edict_t * self ) ;
extern void flyer_run ( edict_t * self ) ;
extern void floater_run ( edict_t * self ) ;
extern void flipper_start_run ( edict_t * self ) ;
extern void chick_run ( edict_t * self ) ;
extern void brain_run ( edict_t * self ) ;
extern void makron_run ( edict_t * self ) ;
extern void jorg_run ( edict_t * self ) ;
extern void boss2_run ( edict_t * self ) ;
extern void berserk_run ( edict_t * self ) ;

// mi_melee
extern void mutant_melee ( edict_t * self ) ;
extern void gladiator_melee ( edict_t * self ) ;
extern void flyer_melee ( edict_t * self ) ;
extern void floater_melee ( edict_t * self ) ;
extern void flipper_melee ( edict_t * self ) ;
extern void chick_melee ( edict_t * self ) ;
extern void brain_melee ( edict_t * self ) ;
extern void berserk_melee ( edict_t * self ) ;

// mi_attack
extern void tank_attack ( edict_t * self ) ;
extern void supertank_attack ( edict_t * self ) ;
extern void soldier_attack ( edict_t * self ) ;
extern void parasite_attack ( edict_t * self ) ;
extern void mutant_jump ( edict_t * self ) ;
extern void medic_attack ( edict_t * self ) ;
extern void infantry_attack ( edict_t * self ) ;
extern void hover_start_attack ( edict_t * self ) ;
extern void gunner_attack ( edict_t * self ) ;
extern void gladiator_attack ( edict_t * self ) ;
extern void flyer_attack ( edict_t * self ) ;
extern void floater_attack ( edict_t * self ) ;
extern void chick_attack ( edict_t * self ) ;
extern void makron_attack ( edict_t * self ) ;
extern void jorg_attack ( edict_t * self ) ;
extern void boss2_attack ( edict_t * self ) ;

// mi_checkattack
extern qboolean mutant_checkattack ( edict_t * self ) ;
extern qboolean medic_checkattack ( edict_t * self ) ;
extern qboolean Makron_CheckAttack ( edict_t * self ) ;
extern qboolean Jorg_CheckAttack ( edict_t * self ) ;
extern qboolean Boss2_CheckAttack ( edict_t * self ) ;
extern qboolean M_CheckAttack ( edict_t * self ) ;

// mi_dodge
extern void soldier_dodge ( edict_t * self , edict_t * attacker , float eta ) ;
extern void medic_dodge ( edict_t * self , edict_t * attacker , float eta ) ;
extern void infantry_dodge ( edict_t * self , edict_t * attacker , float eta ) ;
extern void gunner_dodge ( edict_t * self , edict_t * attacker , float eta ) ;
extern void chick_dodge ( edict_t * self , edict_t * attacker , float eta ) ;
extern void brain_dodge ( edict_t * self , edict_t * attacker , float eta ) ;

// mv_end
extern void door_secret_done ( edict_t * self ) ;
extern void door_secret_move5 ( edict_t * self ) ;
extern void door_secret_move3 ( edict_t * self ) ;
extern void door_secret_move1 ( edict_t * self ) ;
extern void train_wait ( edict_t * self ) ;
extern void door_hit_bottom ( edict_t * self ) ;
extern void door_hit_top ( edict_t * self ) ;
extern void button_wait ( edict_t * self ) ;
extern void button_done ( edict_t * self ) ;
extern void plat_hit_bottom ( edict_t * ent ) ;
extern void plat_hit_top ( edict_t * ent ) ;

# 1 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_MapScripts::
# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MaysHouse_1F_OnLoad
# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_1F_OnTransition
# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_OnFrame
# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.byte 0
# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad:
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes::
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual::
# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual::
# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition:
# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor
# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs
# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs::
# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 2, 4
# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 35 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 36 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 37 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV::
# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 6, 5
# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 41 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 42 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor::
# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 1, 8
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 47 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 48 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnFrame:
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn
# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock
# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 54 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.2byte 0
# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 1, 1
# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn::
# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 96 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 97 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom::
# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_GoHomeEverySoOften
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, RivalsHouse_1F_EventScript_RivalTooBusy
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalTooBusy::
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 10
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 10 
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 202 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 203 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 204 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadedefaultbgm
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay::
# 210 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 211 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0::
# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 216 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1::
# 220 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 221 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 223 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2::
# 225 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 226 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 227 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0:
# 230 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 233 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 238 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1:
# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2:
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0::
# 256 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 257 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 258 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 259 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 260 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 261 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1::
# 262 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 263 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 264 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 265 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 266 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 267 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2::
# 268 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 269 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 270 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 271 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0:
# 274 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 275 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 276 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 277 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 278 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 279 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1:
# 280 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 281 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 282 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 283 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 284 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 285 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 286 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 287 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 288 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2:
# 289 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 290 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 291 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 292 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 293 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 294 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0:
# 295 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 296 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 297 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 298 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 299 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 300 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 301 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 302 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 303 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 304 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 305 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 306 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 307 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 308 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 309 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 310 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 311 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 312 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 313 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 314 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2:
# 315 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 316 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 317 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 318 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 319 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 320 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 321 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 322 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_OhYoureTheNewNeighbor:
# 323 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, hello. And you are?\p"
# 324 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\n"
# 325 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\p"
# 326 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}, our new next-door\n"
# 327 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "neighbor! Hi!\p"
# 328 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I've alwaysss wanted a piece of meat\n"
# 329 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "like you around here...\p"
# 330 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My husband left so long ago...\n"
# 331 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "A girl like me gets lonely ya know?\p"
# 332 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Our {STR_VAR_1} is upstairs, I think.\p"
# 333 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "But you should come back when know how\n"
# 334 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to ATTRACT a woman like me.$"
# 335 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 336 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_LikeChildLikeFather:
# 337 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like child, like father.\p"
# 338 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My husband is as wild about POKéMON\n"
# 339 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "as our child.\p"
# 340 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "If only there was someone who could\n"
# 341 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "ATTRACT me, I'd do A-N-Y-T-H-I-N-G.$"
# 342 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 343 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_TooBusyToNoticeVisit:
# 344 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "That {RIVAL}!\p"
# 345 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I guess our child is too busy with\n"
# 346 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "POKéMON to notice that you came\l"
# 347 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to visit, {PLAYER}{KUN}.\n"
# 348 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I guess that means I have you\n"
# 349 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "all to myself today, {PLAYER}{KUN}.$"
# 350 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 351 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_WentOutToRoute103:
# 352 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, {RIVAL} went out to ROUTE 103\n"
# 353 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "just a little while ago.\p"
# 354 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like father, like child.\n"
# 355 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{RIVAL} can't stay quietly at home.$"
# 356 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 357 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften:
# 358 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I think it's wonderful for people to\n"
# 359 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "travel with POKéMON.\p"
# 360 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "But you should go home every so often\n"
# 361 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to let your mother know you're okay.\p"
# 362 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "She might not say it, but I'm sure she\n"
# 363 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "worries about you, {PLAYER}{KUN}.$"
# 364 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 365 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_MayWhoAreYou:
# 366 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh?\n"
# 367 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who… Who are you?\p"
# 368 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\n"
# 369 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\p"
# 370 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}.\n"
# 371 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So your move was today.\p"
# 372 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Um… I'm MAY.\n"
# 373 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Glad to meet you!\p"
# 374 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I…\n"
# 375 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I have this dream of becoming friends\l"
# 376 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "with POKéMON all over the world.\p"
# 377 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 378 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "my dad, PROF. BIRCH.\p"
# 379 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was hoping that you would be nice,\n"
# 380 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 381 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, this is silly, isn't it?\n"
# 382 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 383 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Eheheh…\p"
# 384 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, no! I forgot!\p"
# 385 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was supposed to go help Dad catch\n"
# 386 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild POKéMON!\p"
# 387 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 388 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 389 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_BrendanWhoAreYou:
# 390 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hey!\n"
# 391 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "You…\p"
# 392 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who are you?\p"
# 393 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 394 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Moved in next door, right?\p"
# 395 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 396 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Dad, PROF. BIRCH, said that our new\n"
# 397 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "next-door neighbor is a GYM LEADER's\l"
# 398 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "kid, so I assumed you'd be a guy.\p"
# 399 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My name's BRENDAN.\n"
# 400 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So, hi, neighbor!\p"
# 401 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 402 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a POKéMON?\p"
# 403 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 404 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 405 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 406 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild POKéMON.\p"
# 407 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Some other time, okay?$"
# 408 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 409 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_DoYouHavePokemon:
# 410 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hi, neighbor!\p"
# 411 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I think my mom has been wanting someone\n"
# 412 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to ATTRACT her, you should try!$"

LittlerootTown_QuestStart_AttractMom::
# 416 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	openquestmenu
# 417 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	startquest
# 417 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	QUEST_ATTRACT_MOM
	end


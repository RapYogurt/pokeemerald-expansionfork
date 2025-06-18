# 1 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 2 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 3 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 4 "data/maps/Route101/scripts.pory"
	.byte 0
# 5 "data/maps/Route101/scripts.pory"

# 6 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 7 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 8 "data/maps/Route101/scripts.pory"
	end
# 9 "data/maps/Route101/scripts.pory"

# 10 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 11 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 12 "data/maps/Route101/scripts.pory"
	.2byte 0
# 13 "data/maps/Route101/scripts.pory"

# 14 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 15 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 16 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 17 "data/maps/Route101/scripts.pory"
	end
# 18 "data/maps/Route101/scripts.pory"

# 19 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 20 "data/maps/Route101/scripts.pory"
	lockall
# 21 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 22 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 23 "data/maps/Route101/scripts.pory"
	closemessage
# 24 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_BIRCH, 0, 15
# 25 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_ZIGZAGOON, 0, 16
# 26 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_EnterScene
# 27 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunAway1
# 28 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 29 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 31 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunInCircles
# 32 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 34 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 36 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 37 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 39 "data/maps/Route101/scripts.pory"
	closemessage
# 40 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 41 "data/maps/Route101/scripts.pory"
	releaseall
# 42 "data/maps/Route101/scripts.pory"
	end
# 43 "data/maps/Route101/scripts.pory"

# 44 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 45 "data/maps/Route101/scripts.pory"
	lockall
# 46 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 47 "data/maps/Route101/scripts.pory"
	closemessage
# 48 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitSouth
# 49 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route101/scripts.pory"
	releaseall
# 51 "data/maps/Route101/scripts.pory"
	end
# 52 "data/maps/Route101/scripts.pory"

# 53 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 54 "data/maps/Route101/scripts.pory"
	lockall
# 55 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 56 "data/maps/Route101/scripts.pory"
	closemessage
# 57 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitWest
# 58 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route101/scripts.pory"
	releaseall
# 60 "data/maps/Route101/scripts.pory"
	end
# 61 "data/maps/Route101/scripts.pory"

# 62 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 63 "data/maps/Route101/scripts.pory"
	lockall
# 64 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 65 "data/maps/Route101/scripts.pory"
	closemessage
# 66 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitNorth
# 67 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route101/scripts.pory"
	releaseall
# 69 "data/maps/Route101/scripts.pory"
	end
# 70 "data/maps/Route101/scripts.pory"

# 71 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 72 "data/maps/Route101/scripts.pory"
	walk_up
# 73 "data/maps/Route101/scripts.pory"
	step_end
# 74 "data/maps/Route101/scripts.pory"

# 75 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 76 "data/maps/Route101/scripts.pory"
	walk_right
# 77 "data/maps/Route101/scripts.pory"
	step_end
# 78 "data/maps/Route101/scripts.pory"

# 79 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 80 "data/maps/Route101/scripts.pory"
	walk_down
# 81 "data/maps/Route101/scripts.pory"
	step_end
# 82 "data/maps/Route101/scripts.pory"

# 83 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 84 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 85 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 86 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 87 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 88 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 89 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 90 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 91 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 92 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 93 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 94 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 95 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 96 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 97 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 98 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 99 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 100 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 101 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 102 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 103 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 104 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 105 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 111 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 113 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 114 "data/maps/Route101/scripts.pory"
	step_end
# 115 "data/maps/Route101/scripts.pory"

# 116 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 123 "data/maps/Route101/scripts.pory"
	step_end
# 124 "data/maps/Route101/scripts.pory"

# 125 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 126 "data/maps/Route101/scripts.pory"
	step_end
# 127 "data/maps/Route101/scripts.pory"

# 128 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 129 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 130 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 131 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 132 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 133 "data/maps/Route101/scripts.pory"
	step_end
# 134 "data/maps/Route101/scripts.pory"

# 135 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 136 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 137 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 138 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 139 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 140 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 141 "data/maps/Route101/scripts.pory"
	step_end
# 142 "data/maps/Route101/scripts.pory"

# 143 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 145 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 146 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 147 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 148 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 149 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 150 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 154 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 155 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 161 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 162 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 163 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 164 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 165 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 174 "data/maps/Route101/scripts.pory"
	step_end
# 175 "data/maps/Route101/scripts.pory"

# 176 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 178 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 179 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 180 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 181 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 182 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 183 "data/maps/Route101/scripts.pory"
	step_end
# 184 "data/maps/Route101/scripts.pory"

# 185 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 186 "data/maps/Route101/scripts.pory"
	step_end
# 187 "data/maps/Route101/scripts.pory"

# 188 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 189 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 190 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 191 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 192 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 193 "data/maps/Route101/scripts.pory"
	step_end
# 194 "data/maps/Route101/scripts.pory"

# 195 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 196 "data/maps/Route101/scripts.pory"
	walk_up
# 197 "data/maps/Route101/scripts.pory"
	walk_up
# 198 "data/maps/Route101/scripts.pory"
	step_end
# 199 "data/maps/Route101/scripts.pory"

# 200 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 201 "data/maps/Route101/scripts.pory"
	walk_up
# 202 "data/maps/Route101/scripts.pory"
	walk_left
# 203 "data/maps/Route101/scripts.pory"
	walk_up
# 204 "data/maps/Route101/scripts.pory"
	step_end
# 205 "data/maps/Route101/scripts.pory"

# 206 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 207 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 208 "data/maps/Route101/scripts.pory"
	end
# 209 "data/maps/Route101/scripts.pory"

# 210 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 211 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 212 "data/maps/Route101/scripts.pory"
	end
# 213 "data/maps/Route101/scripts.pory"

# 214 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 215 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 216 "data/maps/Route101/scripts.pory"
	end
# 217 "data/maps/Route101/scripts.pory"

# 218 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 219 "data/maps/Route101/scripts.pory"
	lock
# 220 "data/maps/Route101/scripts.pory"
	faceplayer
# 221 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 222 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 223 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 224 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ROUTE101_ZIGZAGOON
# 225 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_PLAYER, 6, 13
# 226 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 227 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 228 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 229 "data/maps/Route101/scripts.pory"
	waitstate
# 230 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchApproachPlayer
# 231 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 232 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 233 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 234 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 235 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_FOUR
# 236 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_FIVE
# 237 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_SIX
# 238 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 239 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 240 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 241 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 242 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 243 "data/maps/Route101/scripts.pory"
	checkplayergender
# 244 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 245 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 246 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 247 "data/maps/Route101/scripts.pory"
	waitstate
# 248 "data/maps/Route101/scripts.pory"
	release
# 249 "data/maps/Route101/scripts.pory"
	end
# 250 "data/maps/Route101/scripts.pory"

# 251 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 252 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 253 "data/maps/Route101/scripts.pory"
	return
# 254 "data/maps/Route101/scripts.pory"

# 255 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 256 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 257 "data/maps/Route101/scripts.pory"
	return
# 258 "data/maps/Route101/scripts.pory"

# 259 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 260 "data/maps/Route101/scripts.pory"
	walk_right
# 261 "data/maps/Route101/scripts.pory"
	step_end
# 262 "data/maps/Route101/scripts.pory"

# 263 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 264 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 265 "data/maps/Route101/scripts.pory"

# 266 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 267 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 268 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 269 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 270 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 271 "data/maps/Route101/scripts.pory"

# 272 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 273 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 274 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 275 "data/maps/Route101/scripts.pory"

# 276 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 277 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 278 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 279 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 280 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 281 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 282 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 283 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 284 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 285 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 286 "data/maps/Route101/scripts.pory"

# 287 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 288 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 289 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 290 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 291 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 292 "data/maps/Route101/scripts.pory"

# 293 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 294 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 295 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 296 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 297 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 298 "data/maps/Route101/scripts.pory"

# 299 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 300 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 301 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"

Route101::
	.byte 0


NewSecretBag_EventScript_PikachuBall::
# 308 "data/maps/Route101/scripts.pory"
	lockall
# 309 "data/maps/Route101/scripts.pory"
	showmonpic SPECIES_PIKACHU_STARTER, 10, 3
# 310 "data/maps/Route101/scripts.pory"
	msgbox NewSecretBag_EventScript_PikachuBall_Text_0, MSGBOX_YESNO
# 311 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewSecretBag_EventScript_PikachuBall_2
# 342 "data/maps/Route101/scripts.pory"
	hidemonpic
# 343 "data/maps/Route101/scripts.pory"
	msgbox SecretBag_NotChosen
NewSecretBag_EventScript_PikachuBall_1:
# 345 "data/maps/Route101/scripts.pory"
	waitmessage
# 346 "data/maps/Route101/scripts.pory"
	releaseall
	end

NewSecretBag_EventScript_PikachuBall_2:
# 312 "data/maps/Route101/scripts.pory"
	givemon SPECIES_PIKACHU_STARTER, 5, ITEM_LOVE_BALL
# 313 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewSecretBag_EventScript_PikachuBall_5
# 325 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewSecretBag_EventScript_PikachuBall_6
# 337 "data/maps/Route101/scripts.pory"
	hidemonpic
# 338 "data/maps/Route101/scripts.pory"
	msgbox NewSecretBag_EventScript_PikachuBall_Text_3
	goto NewSecretBag_EventScript_PikachuBall_1

NewSecretBag_EventScript_PikachuBall_5:
# 314 "data/maps/Route101/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 315 "data/maps/Route101/scripts.pory"
	msgbox NewSecretBag_EventScript_PikachuBall_Text_1
# 316 "data/maps/Route101/scripts.pory"
	msgbox NewSecretBag_EventScript_PikachuBall_Text_2
# 317 "data/maps/Route101/scripts.pory"
	removeobject 7
# 318 "data/maps/Route101/scripts.pory"
	removeobject 8
# 319 "data/maps/Route101/scripts.pory"
	removeobject 9
# 320 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_SIX
# 321 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_FOUR
# 322 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_FIVE
# 323 "data/maps/Route101/scripts.pory"
	call NicknamePartyMon2
	goto NewSecretBag_EventScript_PikachuBall_1

NewSecretBag_EventScript_PikachuBall_6:
# 326 "data/maps/Route101/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 327 "data/maps/Route101/scripts.pory"
	msgbox NewSecretBag_EventScript_PikachuBall_Text_2
# 328 "data/maps/Route101/scripts.pory"
	removeobject 7
# 329 "data/maps/Route101/scripts.pory"
	removeobject 8
# 330 "data/maps/Route101/scripts.pory"
	removeobject 9
# 331 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_SIX
# 332 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_FOUR
# 333 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_FIVE
# 334 "data/maps/Route101/scripts.pory"
	call NicknameBoxMon2
	goto NewSecretBag_EventScript_PikachuBall_1


NewSecretBag_EventScript_EeveeBall::
# 352 "data/maps/Route101/scripts.pory"
	lockall
# 353 "data/maps/Route101/scripts.pory"
	showmonpic SPECIES_EEVEE_STARTER, 10, 3
# 354 "data/maps/Route101/scripts.pory"
	msgbox NewSecretBag_EventScript_EeveeBall_Text_0, MSGBOX_YESNO
# 355 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewSecretBag_EventScript_EeveeBall_2
# 386 "data/maps/Route101/scripts.pory"
	hidemonpic
# 387 "data/maps/Route101/scripts.pory"
	msgbox SecretBag_NotChosen
NewSecretBag_EventScript_EeveeBall_1:
# 389 "data/maps/Route101/scripts.pory"
	waitmessage
# 390 "data/maps/Route101/scripts.pory"
	releaseall
	end

NewSecretBag_EventScript_EeveeBall_2:
# 356 "data/maps/Route101/scripts.pory"
	givemon SPECIES_EEVEE_STARTER, 5, ITEM_LIGHT_BALL
# 357 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewSecretBag_EventScript_EeveeBall_5
# 369 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewSecretBag_EventScript_EeveeBall_6
# 381 "data/maps/Route101/scripts.pory"
	hidemonpic
# 382 "data/maps/Route101/scripts.pory"
	msgbox NewSecretBag_EventScript_PikachuBall_Text_3
	goto NewSecretBag_EventScript_EeveeBall_1

NewSecretBag_EventScript_EeveeBall_5:
# 358 "data/maps/Route101/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 359 "data/maps/Route101/scripts.pory"
	msgbox NewSecretBag_EventScript_EeveeBall_Text_1
# 360 "data/maps/Route101/scripts.pory"
	msgbox NewSecretBag_EventScript_EeveeBall_Text_2
# 361 "data/maps/Route101/scripts.pory"
	removeobject 7
# 362 "data/maps/Route101/scripts.pory"
	removeobject 8
# 363 "data/maps/Route101/scripts.pory"
	removeobject 9
# 364 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_SIX
# 365 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_FOUR
# 366 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_FIVE
# 367 "data/maps/Route101/scripts.pory"
	call NicknamePartyMon2
	goto NewSecretBag_EventScript_EeveeBall_1

NewSecretBag_EventScript_EeveeBall_6:
# 370 "data/maps/Route101/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 371 "data/maps/Route101/scripts.pory"
	msgbox NewSecretBag_EventScript_EeveeBall_Text_2
# 372 "data/maps/Route101/scripts.pory"
	removeobject 7
# 373 "data/maps/Route101/scripts.pory"
	removeobject 8
# 374 "data/maps/Route101/scripts.pory"
	removeobject 9
# 375 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_SIX
# 376 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_FOUR
# 377 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_FIVE
# 378 "data/maps/Route101/scripts.pory"
	call NicknameBoxMon2
	goto NewSecretBag_EventScript_EeveeBall_1


NewSecretBag_EventScript_CosmogBall::
# 396 "data/maps/Route101/scripts.pory"
	lockall
# 397 "data/maps/Route101/scripts.pory"
	showmonpic SPECIES_COSMOG, 10, 3
# 398 "data/maps/Route101/scripts.pory"
	msgbox NewSecretBag_EventScript_CosmogBall_Text_0, MSGBOX_YESNO
# 399 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewSecretBag_EventScript_CosmogBall_2
# 431 "data/maps/Route101/scripts.pory"
	hidemonpic
# 432 "data/maps/Route101/scripts.pory"
	msgbox SecretBag_NotChosen
NewSecretBag_EventScript_CosmogBall_1:
# 434 "data/maps/Route101/scripts.pory"
	waitmessage
# 435 "data/maps/Route101/scripts.pory"
	releaseall
	end

NewSecretBag_EventScript_CosmogBall_2:
# 400 "data/maps/Route101/scripts.pory"
	givemon SPECIES_COSMOG, 5, ITEM_BEAST_BALL
# 401 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewSecretBag_EventScript_CosmogBall_5
# 414 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewSecretBag_EventScript_CosmogBall_6
# 426 "data/maps/Route101/scripts.pory"
	hidemonpic
# 427 "data/maps/Route101/scripts.pory"
	msgbox NewSecretBag_EventScript_PikachuBall_Text_3
	goto NewSecretBag_EventScript_CosmogBall_1

NewSecretBag_EventScript_CosmogBall_5:
# 402 "data/maps/Route101/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 403 "data/maps/Route101/scripts.pory"
	msgbox NewSecretBag_EventScript_CosmogBall_Text_1
# 404 "data/maps/Route101/scripts.pory"
	msgbox NewSecretBag_EventScript_CosmogBall_Text_2
# 405 "data/maps/Route101/scripts.pory"
	removeobject 7
# 406 "data/maps/Route101/scripts.pory"
	removeobject 8
# 407 "data/maps/Route101/scripts.pory"
	removeobject 9
# 408 "data/maps/Route101/scripts.pory"
	msgbox NewSecretBag_EventScript_CosmogBall_Text_3
# 409 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_SIX
# 410 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_FOUR
# 411 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_FIVE
# 412 "data/maps/Route101/scripts.pory"
	call NicknamePartyMon2
	goto NewSecretBag_EventScript_CosmogBall_1

NewSecretBag_EventScript_CosmogBall_6:
# 415 "data/maps/Route101/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 416 "data/maps/Route101/scripts.pory"
	msgbox NewSecretBag_EventScript_CosmogBall_Text_4
# 417 "data/maps/Route101/scripts.pory"
	removeobject 7
# 418 "data/maps/Route101/scripts.pory"
	removeobject 8
# 419 "data/maps/Route101/scripts.pory"
	removeobject 9
# 420 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_SIX
# 421 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_FOUR
# 422 "data/maps/Route101/scripts.pory"
	setflag FLAG_BALL_FIVE
# 423 "data/maps/Route101/scripts.pory"
	call NicknameBoxMon2
	goto NewSecretBag_EventScript_CosmogBall_1


NicknamePartyMon2::
# 442 "data/maps/Route101/scripts.pory"
	msgbox NicknamePartyMon2_Text_0, MSGBOX_YESNO
# 443 "data/maps/Route101/scripts.pory"
	hidemonpic
# 444 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon2_1
	return

NicknamePartyMon2_1:
# 445 "data/maps/Route101/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 446 "data/maps/Route101/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon2::
# 454 "data/maps/Route101/scripts.pory"
	msgbox NicknamePartyMon2_Text_0, MSGBOX_YESNO
# 455 "data/maps/Route101/scripts.pory"
	hidemonpic
# 456 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon2_2
NicknameBoxMon2_1:
# 459 "data/maps/Route101/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon2_2:
# 457 "data/maps/Route101/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon2_1


NewSecretBag_EventScript_PikachuBall_Text_0:
# 310 "data/maps/Route101/scripts.pory"
	.string "Do you want to choose Pikachu?\pThis Pokemon was abandoned due to it's\ninability to evolve...$"

NewSecretBag_EventScript_PikachuBall_Text_1:
# 315 "data/maps/Route101/scripts.pory"
	.string "The Pikachu gave you a hug!$"

NewSecretBag_EventScript_PikachuBall_Text_2:
# 316 "data/maps/Route101/scripts.pory"
	.string "Recieved a Pikachu!$"

NewSecretBag_EventScript_PikachuBall_Text_3:
# 338 "data/maps/Route101/scripts.pory"
	.string "No More Room$"

NewSecretBag_EventScript_EeveeBall_Text_0:
# 354 "data/maps/Route101/scripts.pory"
	.string "Do you want to choose Eevee?\pThis Pokemon was abandoned due to it's\ninability to evolve...$"

NewSecretBag_EventScript_EeveeBall_Text_1:
# 359 "data/maps/Route101/scripts.pory"
	.string "Eevee starts jumping around happily!$"

NewSecretBag_EventScript_EeveeBall_Text_2:
# 360 "data/maps/Route101/scripts.pory"
	.string "Recieved an Eevee!$"

NewSecretBag_EventScript_CosmogBall_Text_0:
# 398 "data/maps/Route101/scripts.pory"
	.string "Do you want to choose Cosmog?$"

NewSecretBag_EventScript_CosmogBall_Text_1:
# 403 "data/maps/Route101/scripts.pory"
	.string "Cosmog remains motionless, it's mind\ncorrupted long ago.$"

NewSecretBag_EventScript_CosmogBall_Text_2:
# 404 "data/maps/Route101/scripts.pory"
	.string "You quickly stuff it into your bag\nit awaits your orders.$"

NewSecretBag_EventScript_CosmogBall_Text_3:
# 408 "data/maps/Route101/scripts.pory"
	.string "Recieved Cosmog!$"

NewSecretBag_EventScript_CosmogBall_Text_4:
# 416 "data/maps/Route101/scripts.pory"
	.string "Using this Lugia... How cruel...$"

NicknamePartyMon2_Text_0:
# 442 "data/maps/Route101/scripts.pory"
	.string "Give it a nickname?$"

SecretBag_NotChosen::
# 463 "data/maps/Route101/scripts.pory"
	.string "It's ears droop in disappointment as it\nseems to have expected this.$"

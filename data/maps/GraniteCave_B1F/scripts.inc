# 1 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_MapScripts::
# 2 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 3 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 4 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
# 5 "data/maps/GraniteCave_B1F/scripts.pory"
	.byte 0
# 6 "data/maps/GraniteCave_B1F/scripts.pory"

# 7 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_SetHoleWarp:
# 8 "data/maps/GraniteCave_B1F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 9 "data/maps/GraniteCave_B1F/scripts.pory"
	setholewarp MAP_GRANITE_CAVE_B2F
# 10 "data/maps/GraniteCave_B1F/scripts.pory"
	end

GraniteCave_B1F::
	.byte 0


GraniteCave_B1F_RegiSign::
# 19 "data/maps/GraniteCave_B1F/scripts.pory"
	lock
# 20 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_B1F_RegiSign_Text_0
# 21 "data/maps/GraniteCave_B1F/scripts.pory"
	closemessage
# 22 "data/maps/GraniteCave_B1F/scripts.pory"
	releaseall
	end


GraniteCave_B1F_RegiSign_Text_0:
# 20 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "If you do find a way in,\pIt's level 40 and hard as\nhell to catch.$"

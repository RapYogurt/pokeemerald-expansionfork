# 1 "data/maps/OldaleTowers/scripts.pory"
OldaleTowers_MapScripts::
# 2 "data/maps/OldaleTowers/scripts.pory"
	.byte 0

OldtaleTowers::
	.byte 0

OldtaleTowers_EventScript_Duskull::
	lock
	faceplayer
	setwildbattle SPECIES_DUSKULL, 20
	waitse
	playmoncry SPECIES_DUSKULL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setflag FLAG_DEFEATED_DUSKULL
	goto Common_EventScript_RemoveStaticPokemon
	release
	end

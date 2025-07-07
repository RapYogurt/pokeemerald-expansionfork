# 1 "data/maps/OldaleTowers/scripts.pory"
# 1 "data/maps/OldaleTowers/scripts.pory"
# 2 "data/maps/OldaleTowers/scripts.pory"
OldaleTowers_MapScripts::
# 3 "data/maps/OldaleTowers/scripts.pory"
# 2 "data/maps/OldaleTowers/scripts.pory"
# 4 "data/maps/OldaleTowers/scripts.pory"
	.byte 0
# 5 "data/maps/OldaleTowers/scripts.pory"

# 6 "data/maps/OldaleTowers/scripts.pory"
OldtaleTowers::
# 7 "data/maps/OldaleTowers/scripts.pory"
	.byte 0
# 8 "data/maps/OldaleTowers/scripts.pory"

# 9 "data/maps/OldaleTowers/scripts.pory"
OldtaleTowers_OnResume:
# 10 "data/maps/OldaleTowers/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, OldtaleTowers_EventScript_TryRemovePokemon
# 11 "data/maps/OldaleTowers/scripts.pory"
	end
# 12 "data/maps/OldaleTowers/scripts.pory"

# 13 "data/maps/OldaleTowers/scripts.pory"
OldtaleTowers_OnTransition:
# 14 "data/maps/OldaleTowers/scripts.pory"
	call_if_unset FLAG_DEFEATED_HONEDGE, OldtaleTowers_EventScript_ShowHonedge
# 15 "data/maps/OldaleTowers/scripts.pory"
	call_if_unset FLAG_DEFEATED_DREEPY, OldtaleTowers_EventScript_ShowDreepy
# 16 "data/maps/OldaleTowers/scripts.pory"
	end
# 17 "data/maps/OldaleTowers/scripts.pory"

# 18 "data/maps/OldaleTowers/scripts.pory"
OldtaleTowers_EventScript_TryRemovePokemon::
# 19 "data/maps/OldaleTowers/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 20 "data/maps/OldaleTowers/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 21 "data/maps/OldaleTowers/scripts.pory"
	removeobject VAR_LAST_TALKED
# 22 "data/maps/OldaleTowers/scripts.pory"
	return
# 23 "data/maps/OldaleTowers/scripts.pory"

# 24 "data/maps/OldaleTowers/scripts.pory"
OldtaleTowers_EventScript_ShowHonedge::
# 25 "data/maps/OldaleTowers/scripts.pory"
	clearflag FLAG_DEFEATED_HONEDGE
# 26 "data/maps/OldaleTowers/scripts.pory"
	return
# 27 "data/maps/OldaleTowers/scripts.pory"

# 28 "data/maps/OldaleTowers/scripts.pory"
OldtaleTowers_EventScript_ShowDreepy::
# 29 "data/maps/OldaleTowers/scripts.pory"
	clearflag FLAG_DEFEATED_DREEPY
# 30 "data/maps/OldaleTowers/scripts.pory"
	return
# 31 "data/maps/OldaleTowers/scripts.pory"

# 32 "data/maps/OldaleTowers/scripts.pory"
OldtaleTowers_EventScript_ShowDuskull::
# 33 "data/maps/OldaleTowers/scripts.pory"
	clearflag FLAG_DEFEATED_DUSKULL
# 34 "data/maps/OldaleTowers/scripts.pory"
	return
# 35 "data/maps/OldaleTowers/scripts.pory"

# 36 "data/maps/OldaleTowers/scripts.pory"
OldtaleTowers_EventScript_Duskull::
# 37 "data/maps/OldaleTowers/scripts.pory"
	lock
# 38 "data/maps/OldaleTowers/scripts.pory"
	faceplayer
# 39 "data/maps/OldaleTowers/scripts.pory"
	setwildbattle SPECIES_DUSKULL, 18
# 40 "data/maps/OldaleTowers/scripts.pory"
	waitse
# 41 "data/maps/OldaleTowers/scripts.pory"
	playmoncry SPECIES_DUSKULL, CRY_MODE_ENCOUNTER
# 42 "data/maps/OldaleTowers/scripts.pory"
	delay 40
# 43 "data/maps/OldaleTowers/scripts.pory"
	waitmoncry
# 44 "data/maps/OldaleTowers/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 45 "data/maps/OldaleTowers/scripts.pory"
	dowildbattle
# 46 "data/maps/OldaleTowers/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 47 "data/maps/OldaleTowers/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 48 "data/maps/OldaleTowers/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, OldtaleTowers_EventScript_DefeatedDuskull
# 49 "data/maps/OldaleTowers/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, OldtaleTowers_EventScript_LostToPokemon
# 50 "data/maps/OldaleTowers/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, OldtaleTowers_EventScript_DefeatedDuskull
# 51 "data/maps/OldaleTowers/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, OldtaleTowers_EventScript_LostToPokemon
# 52 "data/maps/OldaleTowers/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, OldtaleTowers_EventScript_LostToPokemon
# 53 "data/maps/OldaleTowers/scripts.pory"
	release
# 54 "data/maps/OldaleTowers/scripts.pory"
	end
# 55 "data/maps/OldaleTowers/scripts.pory"
	
# 56 "data/maps/OldaleTowers/scripts.pory"
OldtaleTowers_EventScript_Honedge::
# 57 "data/maps/OldaleTowers/scripts.pory"
	lock
# 58 "data/maps/OldaleTowers/scripts.pory"
	faceplayer
# 59 "data/maps/OldaleTowers/scripts.pory"
	setwildbattle SPECIES_HONEDGE, 18
# 60 "data/maps/OldaleTowers/scripts.pory"
	waitse
# 61 "data/maps/OldaleTowers/scripts.pory"
	playmoncry SPECIES_HONEDGE, CRY_MODE_ENCOUNTER
# 62 "data/maps/OldaleTowers/scripts.pory"
	delay 40
# 63 "data/maps/OldaleTowers/scripts.pory"
	waitmoncry
# 64 "data/maps/OldaleTowers/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 65 "data/maps/OldaleTowers/scripts.pory"
	dowildbattle
# 66 "data/maps/OldaleTowers/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 67 "data/maps/OldaleTowers/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 68 "data/maps/OldaleTowers/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, OldtaleTowers_EventScript_DefeatedHonedge
# 69 "data/maps/OldaleTowers/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, OldtaleTowers_EventScript_LostToPokemon
# 70 "data/maps/OldaleTowers/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, OldtaleTowers_EventScript_LostToPokemon
# 71 "data/maps/OldaleTowers/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, OldtaleTowers_EventScript_DefeatedHonedge
# 72 "data/maps/OldaleTowers/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, OldtaleTowers_EventScript_LostToPokemon
# 73 "data/maps/OldaleTowers/scripts.pory"
	setflag FLAG_DEFEATED_HONEDGE
# 74 "data/maps/OldaleTowers/scripts.pory"
	release
# 75 "data/maps/OldaleTowers/scripts.pory"
	end
# 76 "data/maps/OldaleTowers/scripts.pory"

# 77 "data/maps/OldaleTowers/scripts.pory"
OldtaleTowers_EventScript_Dreepy::
# 78 "data/maps/OldaleTowers/scripts.pory"
	lock
# 79 "data/maps/OldaleTowers/scripts.pory"
	faceplayer
# 80 "data/maps/OldaleTowers/scripts.pory"
	setwildbattle SPECIES_DREEPY, 18
# 81 "data/maps/OldaleTowers/scripts.pory"
	waitse
# 82 "data/maps/OldaleTowers/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_ENCOUNTER
# 83 "data/maps/OldaleTowers/scripts.pory"
	delay 40
# 84 "data/maps/OldaleTowers/scripts.pory"
	waitmoncry
# 85 "data/maps/OldaleTowers/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 86 "data/maps/OldaleTowers/scripts.pory"
	dowildbattle
# 87 "data/maps/OldaleTowers/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 88 "data/maps/OldaleTowers/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 89 "data/maps/OldaleTowers/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, OldtaleTowers_EventScript_DefeatedDreepy
# 90 "data/maps/OldaleTowers/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, OldtaleTowers_EventScript_LostToPokemon
# 91 "data/maps/OldaleTowers/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, OldtaleTowers_EventScript_LostToPokemon
# 92 "data/maps/OldaleTowers/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, OldtaleTowers_EventScript_DefeatedDreepy
# 93 "data/maps/OldaleTowers/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, OldtaleTowers_EventScript_LostToPokemon
# 94 "data/maps/OldaleTowers/scripts.pory"
	setflag FLAG_DEFEATED_DREEPY
# 95 "data/maps/OldaleTowers/scripts.pory"
	release
# 96 "data/maps/OldaleTowers/scripts.pory"
	end
# 97 "data/maps/OldaleTowers/scripts.pory"

# 98 "data/maps/OldaleTowers/scripts.pory"
OldtaleTowers_EventScript_DefeatedDreepy::
# 99 "data/maps/OldaleTowers/scripts.pory"
	setflag FLAG_DEFEATED_DREEPY
# 100 "data/maps/OldaleTowers/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 101 "data/maps/OldaleTowers/scripts.pory"
	end
# 102 "data/maps/OldaleTowers/scripts.pory"

# 103 "data/maps/OldaleTowers/scripts.pory"
OldtaleTowers_EventScript_DefeatedHonedge::
# 104 "data/maps/OldaleTowers/scripts.pory"
	setflag FLAG_DEFEATED_HONEDGE
# 105 "data/maps/OldaleTowers/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 106 "data/maps/OldaleTowers/scripts.pory"
	end
# 107 "data/maps/OldaleTowers/scripts.pory"

# 108 "data/maps/OldaleTowers/scripts.pory"
OldtaleTowers_EventScript_DefeatedDuskull::
# 109 "data/maps/OldaleTowers/scripts.pory"
	setflag FLAG_DEFEATED_DUSKULL
# 110 "data/maps/OldaleTowers/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 111 "data/maps/OldaleTowers/scripts.pory"
	end
# 112 "data/maps/OldaleTowers/scripts.pory"

# 113 "data/maps/OldaleTowers/scripts.pory"
OldtaleTowers_EventScript_LostToPokemon::
# 114 "data/maps/OldaleTowers/scripts.pory"
	end

OldaleTowers::
	.byte 0


LittlerootTown_Gym_MapScripts::
# 2 "data/maps/LittlerootTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewProfessor_EventScript_BallDefault
	.byte 0


NewProfessor_EventScript_BallDefault::
# 6 "data/maps/LittlerootTown_Gym/scripts.pory"
	setvar STARTER_REGION, 0
	return


NewProfessor_EventScript_Birch::
# 9 "data/maps/LittlerootTown_Gym/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewProfessor_EventScript_Birch_4
NewProfessor_EventScript_Birch_3:
# 57 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Birch_Text_2, MSGBOX_NPC
NewProfessor_EventScript_Birch_1:
	end

NewProfessor_EventScript_Birch_2:
# 10 "data/maps/LittlerootTown_Gym/scripts.pory"
	lock
# 11 "data/maps/LittlerootTown_Gym/scripts.pory"
	faceplayer
# 12 "data/maps/LittlerootTown_Gym/scripts.pory"
	message NewProfessor_EventScript_Birch_Text_0
# 13 "data/maps/LittlerootTown_Gym/scripts.pory"
	multichoice 1, 1, MULTI_STARTER_CHOICE, 0
# 14 "data/maps/LittlerootTown_Gym/scripts.pory"
	closemessage
# 15 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewProfessor_EventScript_Birch_10
# 19 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewProfessor_EventScript_Birch_11
# 23 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq NewProfessor_EventScript_Birch_12
# 27 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq NewProfessor_EventScript_Birch_13
# 31 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq NewProfessor_EventScript_Birch_14
# 35 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq NewProfessor_EventScript_Birch_15
# 39 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq NewProfessor_EventScript_Birch_16
# 43 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq NewProfessor_EventScript_Birch_17
# 47 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq NewProfessor_EventScript_Birch_18
NewProfessor_EventScript_Birch_9:
# 52 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Birch_Text_1
# 53 "data/maps/LittlerootTown_Gym/scripts.pory"
	waitmessage
# 54 "data/maps/LittlerootTown_Gym/scripts.pory"
	release
	goto NewProfessor_EventScript_Birch_1

NewProfessor_EventScript_Birch_4:
# 9 "data/maps/LittlerootTown_Gym/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewProfessor_EventScript_Birch_6
	goto NewProfessor_EventScript_Birch_3

NewProfessor_EventScript_Birch_6:
# 9 "data/maps/LittlerootTown_Gym/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewProfessor_EventScript_Birch_2
	goto NewProfessor_EventScript_Birch_3

NewProfessor_EventScript_Birch_10:
# 16 "data/maps/LittlerootTown_Gym/scripts.pory"
	call StarterFade
# 17 "data/maps/LittlerootTown_Gym/scripts.pory"
	setvar STARTER_REGION, 0
	goto NewProfessor_EventScript_Birch_9

NewProfessor_EventScript_Birch_11:
# 20 "data/maps/LittlerootTown_Gym/scripts.pory"
	call StarterFade
# 21 "data/maps/LittlerootTown_Gym/scripts.pory"
	setvar STARTER_REGION, 1
	goto NewProfessor_EventScript_Birch_9

NewProfessor_EventScript_Birch_12:
# 24 "data/maps/LittlerootTown_Gym/scripts.pory"
	call StarterFade
# 25 "data/maps/LittlerootTown_Gym/scripts.pory"
	setvar STARTER_REGION, 2
	goto NewProfessor_EventScript_Birch_9

NewProfessor_EventScript_Birch_13:
# 28 "data/maps/LittlerootTown_Gym/scripts.pory"
	call StarterFade
# 29 "data/maps/LittlerootTown_Gym/scripts.pory"
	setvar STARTER_REGION, 3
	goto NewProfessor_EventScript_Birch_9

NewProfessor_EventScript_Birch_14:
# 32 "data/maps/LittlerootTown_Gym/scripts.pory"
	call StarterFade
# 33 "data/maps/LittlerootTown_Gym/scripts.pory"
	setvar STARTER_REGION, 4
	goto NewProfessor_EventScript_Birch_9

NewProfessor_EventScript_Birch_15:
# 36 "data/maps/LittlerootTown_Gym/scripts.pory"
	call StarterFade
# 37 "data/maps/LittlerootTown_Gym/scripts.pory"
	setvar STARTER_REGION, 5
	goto NewProfessor_EventScript_Birch_9

NewProfessor_EventScript_Birch_16:
# 40 "data/maps/LittlerootTown_Gym/scripts.pory"
	call StarterFade
# 41 "data/maps/LittlerootTown_Gym/scripts.pory"
	setvar STARTER_REGION, 6
	goto NewProfessor_EventScript_Birch_9

NewProfessor_EventScript_Birch_17:
# 44 "data/maps/LittlerootTown_Gym/scripts.pory"
	call StarterFade
# 45 "data/maps/LittlerootTown_Gym/scripts.pory"
	setvar STARTER_REGION, 7
	goto NewProfessor_EventScript_Birch_9

NewProfessor_EventScript_Birch_18:
# 48 "data/maps/LittlerootTown_Gym/scripts.pory"
	call StarterFade
# 49 "data/maps/LittlerootTown_Gym/scripts.pory"
	setvar STARTER_REGION, 8
	goto NewProfessor_EventScript_Birch_9


StarterFade::
# 63 "data/maps/LittlerootTown_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 64 "data/maps/LittlerootTown_Gym/scripts.pory"
	delay 20
# 65 "data/maps/LittlerootTown_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


NewProfessor_EventScript_PokeballOne::
# 70 "data/maps/LittlerootTown_Gym/scripts.pory"
	lockall
# 71 "data/maps/LittlerootTown_Gym/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewProfessor_EventScript_PokeballOne_2
	return

NewProfessor_EventScript_PokeballOne_1:
# 72 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq NewProfessor_EventScript_PokeballOne_8
# 75 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq NewProfessor_EventScript_PokeballOne_9
# 78 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq NewProfessor_EventScript_PokeballOne_10
# 81 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 3
	goto_if_eq NewProfessor_EventScript_PokeballOne_11
# 84 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 4
	goto_if_eq NewProfessor_EventScript_PokeballOne_12
# 87 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 5
	goto_if_eq NewProfessor_EventScript_PokeballOne_13
# 90 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 6
	goto_if_eq NewProfessor_EventScript_PokeballOne_14
# 93 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 7
	goto_if_eq NewProfessor_EventScript_PokeballOne_15
# 96 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 8
	goto_if_eq NewProfessor_EventScript_PokeballOne_16
# 100 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_PokeballOne_Text_0
NewProfessor_EventScript_PokeballOne_7:
# 102 "data/maps/LittlerootTown_Gym/scripts.pory"
	waitmessage
# 103 "data/maps/LittlerootTown_Gym/scripts.pory"
	releaseall
	end

NewProfessor_EventScript_PokeballOne_2:
# 71 "data/maps/LittlerootTown_Gym/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewProfessor_EventScript_PokeballOne_4
	return

NewProfessor_EventScript_PokeballOne_4:
# 71 "data/maps/LittlerootTown_Gym/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewProfessor_EventScript_PokeballOne_1
	return

NewProfessor_EventScript_PokeballOne_8:
# 73 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Squirtle
	goto NewProfessor_EventScript_PokeballOne_7

NewProfessor_EventScript_PokeballOne_9:
# 76 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Totodile
	goto NewProfessor_EventScript_PokeballOne_7

NewProfessor_EventScript_PokeballOne_10:
# 79 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Mudkip
	goto NewProfessor_EventScript_PokeballOne_7

NewProfessor_EventScript_PokeballOne_11:
# 82 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Piplup
	goto NewProfessor_EventScript_PokeballOne_7

NewProfessor_EventScript_PokeballOne_12:
# 85 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Oshawott
	goto NewProfessor_EventScript_PokeballOne_7

NewProfessor_EventScript_PokeballOne_13:
# 88 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Froakie
	goto NewProfessor_EventScript_PokeballOne_7

NewProfessor_EventScript_PokeballOne_14:
# 91 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Popplio
	goto NewProfessor_EventScript_PokeballOne_7

NewProfessor_EventScript_PokeballOne_15:
# 94 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Sobble
	goto NewProfessor_EventScript_PokeballOne_7

NewProfessor_EventScript_PokeballOne_16:
# 97 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Quaxly
	goto NewProfessor_EventScript_PokeballOne_7


NewProfessor_EventScript_PokeballTwo::
# 109 "data/maps/LittlerootTown_Gym/scripts.pory"
	lockall
# 110 "data/maps/LittlerootTown_Gym/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewProfessor_EventScript_PokeballTwo_4
NewProfessor_EventScript_PokeballTwo_3:
# 140 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_PokeballTwo_Text_0
NewProfessor_EventScript_PokeballTwo_1:
# 142 "data/maps/LittlerootTown_Gym/scripts.pory"
	waitmessage
# 143 "data/maps/LittlerootTown_Gym/scripts.pory"
	releaseall
	end

NewProfessor_EventScript_PokeballTwo_2:
# 111 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq NewProfessor_EventScript_PokeballTwo_9
# 114 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq NewProfessor_EventScript_PokeballTwo_10
# 117 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq NewProfessor_EventScript_PokeballTwo_11
# 120 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 3
	goto_if_eq NewProfessor_EventScript_PokeballTwo_12
# 123 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 4
	goto_if_eq NewProfessor_EventScript_PokeballTwo_13
# 126 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 5
	goto_if_eq NewProfessor_EventScript_PokeballTwo_14
# 129 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 6
	goto_if_eq NewProfessor_EventScript_PokeballTwo_15
# 132 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 7
	goto_if_eq NewProfessor_EventScript_PokeballTwo_16
# 135 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 8
	goto_if_eq NewProfessor_EventScript_PokeballTwo_17
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_4:
# 110 "data/maps/LittlerootTown_Gym/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewProfessor_EventScript_PokeballTwo_6
	goto NewProfessor_EventScript_PokeballTwo_3

NewProfessor_EventScript_PokeballTwo_6:
# 110 "data/maps/LittlerootTown_Gym/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewProfessor_EventScript_PokeballTwo_2
	goto NewProfessor_EventScript_PokeballTwo_3

NewProfessor_EventScript_PokeballTwo_9:
# 112 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Bulbasaur
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_10:
# 115 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Chikorita
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_11:
# 118 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Treecko
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_12:
# 121 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Turtwig
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_13:
# 124 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Snivy
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_14:
# 127 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Chespin
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_15:
# 130 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Rowlet
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_16:
# 133 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Grookey
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_17:
# 136 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Sprigatito
	goto NewProfessor_EventScript_PokeballTwo_1


NewProfessor_EventScript_PokeballThree::
# 148 "data/maps/LittlerootTown_Gym/scripts.pory"
	lockall
# 149 "data/maps/LittlerootTown_Gym/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewProfessor_EventScript_PokeballThree_4
NewProfessor_EventScript_PokeballThree_3:
# 179 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_PokeballTwo_Text_0
NewProfessor_EventScript_PokeballThree_1:
# 181 "data/maps/LittlerootTown_Gym/scripts.pory"
	waitmessage
# 182 "data/maps/LittlerootTown_Gym/scripts.pory"
	releaseall
	end

NewProfessor_EventScript_PokeballThree_2:
# 150 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq NewProfessor_EventScript_PokeballThree_9
# 153 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq NewProfessor_EventScript_PokeballThree_10
# 156 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq NewProfessor_EventScript_PokeballThree_11
# 159 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 3
	goto_if_eq NewProfessor_EventScript_PokeballThree_12
# 162 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 4
	goto_if_eq NewProfessor_EventScript_PokeballThree_13
# 165 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 5
	goto_if_eq NewProfessor_EventScript_PokeballThree_14
# 168 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 6
	goto_if_eq NewProfessor_EventScript_PokeballThree_15
# 171 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 7
	goto_if_eq NewProfessor_EventScript_PokeballThree_16
# 174 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare STARTER_REGION, 8
	goto_if_eq NewProfessor_EventScript_PokeballThree_17
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_4:
# 149 "data/maps/LittlerootTown_Gym/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewProfessor_EventScript_PokeballThree_6
	goto NewProfessor_EventScript_PokeballThree_3

NewProfessor_EventScript_PokeballThree_6:
# 149 "data/maps/LittlerootTown_Gym/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewProfessor_EventScript_PokeballThree_2
	goto NewProfessor_EventScript_PokeballThree_3

NewProfessor_EventScript_PokeballThree_9:
# 151 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Charmander
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_10:
# 154 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Cyndaquil
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_11:
# 157 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Torchic
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_12:
# 160 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Chimchar
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_13:
# 163 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Tepig
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_14:
# 166 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Fennekin
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_15:
# 169 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Litten
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_16:
# 172 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Scorbunny
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_17:
# 175 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NewProfessor_EventScript_Fuecoco
	goto NewProfessor_EventScript_PokeballThree_1


NewProfessor_EventScript_Mudkip::
# 188 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 189 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_0, MSGBOX_YESNO
# 190 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Mudkip_1
# 212 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 213 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Mudkip_1:
# 191 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_MUDKIP, 5, ITEM_MASTER_BALL
# 192 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Mudkip_4
# 199 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Mudkip_5
# 207 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 208 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Mudkip_4:
# 193 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 194 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_1
# 195 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 1
# 196 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_ONE
# 197 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Mudkip_5:
# 200 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 201 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_1
# 202 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 1
# 203 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_ONE
# 204 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Totodile::
# 219 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 220 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_0, MSGBOX_YESNO
# 221 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Totodile_1
# 243 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 244 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Totodile_1:
# 222 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_TOTODILE, 50, ITEM_MASTER_BALL
# 223 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Totodile_4
# 230 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Totodile_5
# 238 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 239 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Totodile_4:
# 224 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 225 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_1
# 226 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 1
# 227 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_ONE
# 228 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Totodile_5:
# 231 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 232 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_1
# 233 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 1
# 234 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_ONE
# 235 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Squirtle::
# 250 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 251 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Squirtle_Text_0, MSGBOX_YESNO
# 252 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Squirtle_1
# 274 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 275 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Squirtle_1:
# 253 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_SQUIRTLE, 50, ITEM_MASTER_BALL
# 254 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Squirtle_4
# 261 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Squirtle_5
# 269 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 270 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Squirtle_4:
# 255 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 256 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Squirtle_Text_1
# 257 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 1
# 258 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_ONE
# 259 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Squirtle_5:
# 262 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 263 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Squirtle_Text_1
# 264 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 1
# 265 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_ONE
# 266 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Treecko::
# 281 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 282 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Treecko_Text_0, MSGBOX_YESNO
# 283 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Treecko_1
# 305 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 306 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Treecko_1:
# 284 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_TREECKO, 50, ITEM_MASTER_BALL
# 285 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Treecko_4
# 292 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Treecko_5
# 300 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 301 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Treecko_4:
# 286 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 287 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Treecko_Text_1
# 288 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 2
# 289 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_TWO
# 290 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Treecko_5:
# 293 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 294 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Treecko_Text_1
# 295 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 2
# 296 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_TWO
# 297 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Chikorita::
# 312 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 313 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Chikorita_Text_0, MSGBOX_YESNO
# 314 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Chikorita_1
# 336 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 337 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Chikorita_1:
# 315 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_CHIKORITA, 50, ITEM_MASTER_BALL
# 316 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Chikorita_4
# 323 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Chikorita_5
# 331 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 332 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Chikorita_4:
# 317 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 318 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Chikorita_Text_1
# 319 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 2
# 320 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_TWO
# 321 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Chikorita_5:
# 324 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 325 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Chikorita_Text_1
# 326 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 2
# 327 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_TWO
# 328 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Bulbasaur::
# 343 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 344 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
# 345 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Bulbasaur_1
# 367 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 368 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Bulbasaur_1:
# 346 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_BULBASAUR, 50, ITEM_MASTER_BALL
# 347 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Bulbasaur_4
# 354 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Bulbasaur_5
# 362 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 363 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Bulbasaur_4:
# 348 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 349 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Bulbasaur_Text_1
# 350 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 2
# 351 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_TWO
# 352 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Bulbasaur_5:
# 355 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 356 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Bulbasaur_Text_1
# 357 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 2
# 358 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_TWO
# 359 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Torchic::
# 374 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 375 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Torchic_Text_0, MSGBOX_YESNO
# 376 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Torchic_1
# 398 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 399 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Torchic_1:
# 377 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_TORCHIC, 50, ITEM_MASTER_BALL
# 378 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Torchic_4
# 385 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Torchic_5
# 393 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 394 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Torchic_4:
# 379 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 380 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Torchic_Text_1
# 381 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 3
# 382 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_THREE
# 383 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Torchic_5:
# 386 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 387 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Torchic_Text_1
# 388 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 3
# 389 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_THREE
# 390 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Cyndaquil::
# 405 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 406 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
# 407 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Cyndaquil_1
# 429 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 430 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Cyndaquil_1:
# 408 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 50, ITEM_MASTER_BALL
# 409 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Cyndaquil_4
# 416 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Cyndaquil_5
# 424 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 425 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Cyndaquil_4:
# 410 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 411 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquil_Text_1
# 412 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 3
# 413 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_THREE
# 414 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Cyndaquil_5:
# 417 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 418 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquil_Text_1
# 419 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 3
# 420 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_THREE
# 421 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Charmander::
# 436 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 437 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 438 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Charmander_1
# 460 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 461 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Charmander_1:
# 439 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_CHARMANDER, 50, ITEM_MASTER_BALL
# 440 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Charmander_4
# 447 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Charmander_5
# 455 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 456 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Charmander_4:
# 441 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 442 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Charmander_Text_1
# 443 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 3
# 444 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_THREE
# 445 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Charmander_5:
# 448 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 449 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Charmander_Text_1
# 450 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 3
# 451 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_THREE
# 452 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Turtwig::
# 467 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 468 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_0, MSGBOX_YESNO
# 469 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Turtwig_1
# 491 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 492 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Turtwig_1:
# 470 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_TURTWIG, 50, ITEM_MASTER_BALL
# 471 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Turtwig_4
# 478 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Turtwig_5
# 486 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 487 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Turtwig_4:
# 472 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 473 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_1
# 474 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 2
# 475 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_TWO
# 476 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Turtwig_5:
# 479 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 480 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_1
# 481 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 2
# 482 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_TWO
# 483 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Piplup::
# 498 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 499 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Piplup_Text_0, MSGBOX_YESNO
# 500 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Piplup_1
# 522 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 523 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Piplup_1:
# 501 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_PIPLUP, 50, ITEM_MASTER_BALL
# 502 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Piplup_4
# 509 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Piplup_5
# 517 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 518 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Piplup_4:
# 503 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 504 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Piplup_Text_1
# 505 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 1
# 506 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_ONE
# 507 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Piplup_5:
# 510 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 511 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Piplup_Text_1
# 512 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 1
# 513 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_ONE
# 514 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Chimchar::
# 529 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 530 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Chimchar_Text_0, MSGBOX_YESNO
# 531 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Chimchar_1
# 553 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 554 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Chimchar_1:
# 532 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_CHIMCHAR, 50, ITEM_MASTER_BALL
# 533 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Chimchar_4
# 540 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Chimchar_5
# 548 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 549 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Chimchar_4:
# 534 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 535 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Chimchar_Text_1
# 536 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 3
# 537 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_THREE
# 538 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Chimchar_5:
# 541 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 542 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Chimchar_Text_1
# 543 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 3
# 544 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_THREE
# 545 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Tepig::
# 559 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 560 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Tepig_Text_0, MSGBOX_YESNO
# 561 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Tepig_1
# 583 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 584 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Tepig_1:
# 562 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_TEPIG, 50, ITEM_MASTER_BALL
# 563 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Tepig_4
# 570 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Tepig_5
# 578 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 579 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Tepig_4:
# 564 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 565 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Tepig_Text_1
# 566 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 3
# 567 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_THREE
# 568 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Tepig_5:
# 571 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 572 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Tepig_Text_1
# 573 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 3
# 574 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_THREE
# 575 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Oshawott::
# 589 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 590 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Oshawott_Text_0, MSGBOX_YESNO
# 591 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Oshawott_1
# 613 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 614 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Oshawott_1:
# 592 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_OSHAWOTT, 50, ITEM_MASTER_BALL
# 593 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Oshawott_4
# 600 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Oshawott_5
# 608 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 609 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Oshawott_4:
# 594 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 595 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Oshawott_Text_1
# 596 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 1
# 597 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_ONE
# 598 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Oshawott_5:
# 601 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 602 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Oshawott_Text_1
# 603 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 1
# 604 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_ONE
# 605 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Snivy::
# 620 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 621 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 622 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Snivy_1
# 644 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 645 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Snivy_1:
# 623 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_SNIVY, 50, ITEM_MASTER_BALL
# 624 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Snivy_4
# 631 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Snivy_5
# 639 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 640 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Snivy_4:
# 625 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 626 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Snivy_Text_1
# 627 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 2
# 628 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_TWO
# 629 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Snivy_5:
# 632 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 633 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Snivy_Text_1
# 634 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 2
# 635 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_TWO
# 636 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Chespin::
# 651 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 652 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Chespin_Text_0, MSGBOX_YESNO
# 653 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Chespin_1
# 675 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 676 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Chespin_1:
# 654 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_CHESPIN, 50, ITEM_MASTER_BALL
# 655 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Chespin_4
# 662 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Chespin_5
# 670 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 671 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Chespin_4:
# 656 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 657 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Chespin_Text_1
# 658 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 2
# 659 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_TWO
# 660 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Chespin_5:
# 663 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 664 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Chespin_Text_1
# 665 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 2
# 666 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_TWO
# 667 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Froakie::
# 682 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 683 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Froakie_Text_0, MSGBOX_YESNO
# 684 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Froakie_1
# 706 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 707 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Froakie_1:
# 685 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_FROAKIE, 50, ITEM_MASTER_BALL
# 686 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Froakie_4
# 693 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Froakie_5
# 701 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 702 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Froakie_4:
# 687 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 688 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Froakie_Text_1
# 689 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 1
# 690 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_ONE
# 691 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Froakie_5:
# 694 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 695 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Froakie_Text_1
# 696 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 1
# 697 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_ONE
# 698 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Fennekin::
# 713 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 714 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Fennekin_Text_0, MSGBOX_YESNO
# 715 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Fennekin_1
# 737 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 738 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Fennekin_1:
# 716 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_FENNEKIN, 50, ITEM_MASTER_BALL
# 717 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Fennekin_4
# 724 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Fennekin_5
# 732 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 733 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Fennekin_4:
# 718 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 719 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Fennekin_Text_1
# 720 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 3
# 721 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_THREE
# 722 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Fennekin_5:
# 725 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 726 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Fennekin_Text_1
# 727 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 3
# 728 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_THREE
# 729 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Rowlet::
# 743 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 744 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Rowlet_Text_0, MSGBOX_YESNO
# 745 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Rowlet_1
# 767 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 768 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Rowlet_1:
# 746 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_ROWLET, 50, ITEM_MASTER_BALL
# 747 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Rowlet_4
# 754 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Rowlet_5
# 762 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 763 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Rowlet_4:
# 748 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 749 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Rowlet_Text_1
# 750 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 2
# 751 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_TWO
# 752 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Rowlet_5:
# 755 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 756 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Rowlet_Text_1
# 757 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 2
# 758 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_TWO
# 759 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Litten::
# 774 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 775 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Litten_Text_0, MSGBOX_YESNO
# 776 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Litten_1
# 798 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 799 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Litten_1:
# 777 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_LITTEN, 50, ITEM_MASTER_BALL
# 778 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Litten_4
# 785 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Litten_5
# 793 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 794 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Litten_4:
# 779 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 780 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Litten_Text_1
# 781 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 3
# 782 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_THREE
# 783 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Litten_5:
# 786 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 787 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Litten_Text_1
# 788 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 3
# 789 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_THREE
# 790 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Popplio::
# 804 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 805 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Popplio_Text_0, MSGBOX_YESNO
# 806 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Popplio_1
# 828 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 829 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Popplio_1:
# 807 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_POPPLIO, 50, ITEM_MASTER_BALL
# 808 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Popplio_4
# 815 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Popplio_5
# 823 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 824 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Popplio_4:
# 809 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 810 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Popplio_Text_1
# 811 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 1
# 812 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_ONE
# 813 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Popplio_5:
# 816 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 817 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Popplio_Text_1
# 818 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 1
# 819 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_ONE
# 820 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Sobble::
# 834 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_SOBBLE, 10, 3
# 835 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Sobble_Text_0, MSGBOX_YESNO
# 836 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Sobble_1
# 858 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 859 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Sobble_1:
# 837 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_SOBBLE, 50, ITEM_MASTER_BALL
# 838 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Sobble_4
# 845 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Sobble_5
# 853 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 854 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Sobble_4:
# 839 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 840 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Sobble_Text_1
# 841 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 1
# 842 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_ONE
# 843 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Sobble_5:
# 846 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 847 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Sobble_Text_1
# 848 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 1
# 849 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_ONE
# 850 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Grookey::
# 864 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 865 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Grookey_Text_0, MSGBOX_YESNO
# 866 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Grookey_1
# 888 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 889 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Grookey_1:
# 867 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_GROOKEY, 50, ITEM_MASTER_BALL
# 868 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Grookey_4
# 875 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Grookey_5
# 883 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 884 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Grookey_4:
# 869 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 870 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Grookey_Text_1
# 871 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 2
# 872 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_TWO
# 873 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Grookey_5:
# 876 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 877 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Grookey_Text_1
# 878 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 2
# 879 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_TWO
# 880 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Scorbunny::
# 894 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 895 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Scorbunny_Text_0, MSGBOX_YESNO
# 896 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Scorbunny_1
# 918 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 919 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Scorbunny_1:
# 897 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_SCORBUNNY, 50, ITEM_MASTER_BALL
# 898 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Scorbunny_4
# 905 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Scorbunny_5
# 913 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 914 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Scorbunny_4:
# 899 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 900 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Scorbunny_Text_1
# 901 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 3
# 902 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_THREE
# 903 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Scorbunny_5:
# 906 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 907 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Scorbunny_Text_1
# 908 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 3
# 909 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_THREE
# 910 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Fuecoco::
# 924 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 925 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Fuecoco_Text_0, MSGBOX_YESNO
# 926 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Fuecoco_1
# 948 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 949 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Fuecoco_1:
# 927 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_FUECOCO, 50, ITEM_MASTER_BALL
# 928 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Fuecoco_4
# 935 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Fuecoco_5
# 943 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 944 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Fuecoco_4:
# 929 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 930 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Fuecoco_Text_1
# 931 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 3
# 932 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_THREE
# 933 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Fuecoco_5:
# 936 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 937 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Fuecoco_Text_1
# 938 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 3
# 939 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_THREE
# 940 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Sprigatito::
# 954 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 955 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Sprigatito_Text_0, MSGBOX_YESNO
# 956 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Sprigatito_1
# 978 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 979 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Sprigatito_1:
# 957 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_SPRIGATITO, 50, ITEM_MASTER_BALL
# 958 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Sprigatito_4
# 965 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Sprigatito_5
# 973 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 974 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Sprigatito_4:
# 959 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 960 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Sprigatito_Text_1
# 961 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 2
# 962 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_TWO
# 963 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Sprigatito_5:
# 966 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 967 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Sprigatito_Text_1
# 968 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 2
# 969 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_TWO
# 970 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Quaxly::
# 984 "data/maps/LittlerootTown_Gym/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 985 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Quaxly_Text_0, MSGBOX_YESNO
# 986 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Quaxly_1
# 1008 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 1009 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Quaxly_1:
# 987 "data/maps/LittlerootTown_Gym/scripts.pory"
	givemon SPECIES_QUAXLY, 50, ITEM_MASTER_BALL
# 988 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Quaxly_4
# 995 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Quaxly_5
# 1003 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 1004 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Quaxly_4:
# 989 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 990 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Quaxly_Text_1
# 991 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 1
# 992 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_ONE
# 993 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Quaxly_5:
# 996 "data/maps/LittlerootTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 997 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NewProfessor_EventScript_Quaxly_Text_1
# 998 "data/maps/LittlerootTown_Gym/scripts.pory"
	removeobject 1
# 999 "data/maps/LittlerootTown_Gym/scripts.pory"
	setflag STARTER_BALL_ONE
# 1000 "data/maps/LittlerootTown_Gym/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 1014 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1015 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 1016 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 1017 "data/maps/LittlerootTown_Gym/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1018 "data/maps/LittlerootTown_Gym/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 1025 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1026 "data/maps/LittlerootTown_Gym/scripts.pory"
	hidemonpic
# 1027 "data/maps/LittlerootTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 1030 "data/maps/LittlerootTown_Gym/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 1028 "data/maps/LittlerootTown_Gym/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewProfessor_EventScript_Birch_Text_0:
# 12 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Would you like to see more?$"

NewProfessor_EventScript_Birch_Text_1:
# 52 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Choose wisely...$"

NewProfessor_EventScript_Birch_Text_2:
# 57 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Take care of your Pokemon!$"

NewProfessor_EventScript_PokeballOne_Text_0:
# 100 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Don't be greedy!$"

NewProfessor_EventScript_PokeballTwo_Text_0:
# 140 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Don't Take Another$"

NewProfessor_EventScript_Mudkip_Text_0:
# 189 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Mudkip?$"

NewProfessor_EventScript_Mudkip_Text_1:
# 194 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Mudkip$"

NewProfessor_EventScript_Mudkip_Text_2:
# 208 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "No More Room$"

NewProfessor_EventScript_Totodile_Text_0:
# 220 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Totodile?$"

NewProfessor_EventScript_Totodile_Text_1:
# 225 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Totodile$"

NewProfessor_EventScript_Squirtle_Text_0:
# 251 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Squirtle?$"

NewProfessor_EventScript_Squirtle_Text_1:
# 256 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Squirtle$"

NewProfessor_EventScript_Treecko_Text_0:
# 282 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Treecko?$"

NewProfessor_EventScript_Treecko_Text_1:
# 287 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Treecko$"

NewProfessor_EventScript_Chikorita_Text_0:
# 313 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Chikorita?$"

NewProfessor_EventScript_Chikorita_Text_1:
# 318 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Chikorita$"

NewProfessor_EventScript_Bulbasaur_Text_0:
# 344 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

NewProfessor_EventScript_Bulbasaur_Text_1:
# 349 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Bulbasaur$"

NewProfessor_EventScript_Torchic_Text_0:
# 375 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Torchic?$"

NewProfessor_EventScript_Torchic_Text_1:
# 380 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Torchic$"

NewProfessor_EventScript_Cyndaquil_Text_0:
# 406 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

NewProfessor_EventScript_Cyndaquil_Text_1:
# 411 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Cyndaquil$"

NewProfessor_EventScript_Charmander_Text_0:
# 437 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Charmander?$"

NewProfessor_EventScript_Charmander_Text_1:
# 442 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Charmander$"

NewProfessor_EventScript_Turtwig_Text_0:
# 468 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Turtwig?$"

NewProfessor_EventScript_Turtwig_Text_1:
# 473 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Turtwig$"

NewProfessor_EventScript_Piplup_Text_0:
# 499 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Piplup?$"

NewProfessor_EventScript_Piplup_Text_1:
# 504 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Piplup$"

NewProfessor_EventScript_Chimchar_Text_0:
# 530 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Chimchar?$"

NewProfessor_EventScript_Chimchar_Text_1:
# 535 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Chimchar$"

NewProfessor_EventScript_Tepig_Text_0:
# 560 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Tepig?$"

NewProfessor_EventScript_Tepig_Text_1:
# 565 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Tepig$"

NewProfessor_EventScript_Oshawott_Text_0:
# 590 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Oshawott?$"

NewProfessor_EventScript_Oshawott_Text_1:
# 595 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Oshawott$"

NewProfessor_EventScript_Snivy_Text_0:
# 621 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Snivy?$"

NewProfessor_EventScript_Snivy_Text_1:
# 626 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Snivy$"

NewProfessor_EventScript_Chespin_Text_0:
# 652 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Chespin?$"

NewProfessor_EventScript_Chespin_Text_1:
# 657 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Chespin$"

NewProfessor_EventScript_Froakie_Text_0:
# 683 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Froakie?$"

NewProfessor_EventScript_Froakie_Text_1:
# 688 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Froakie$"

NewProfessor_EventScript_Fennekin_Text_0:
# 714 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Fennekin?$"

NewProfessor_EventScript_Fennekin_Text_1:
# 719 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Fennekin$"

NewProfessor_EventScript_Rowlet_Text_0:
# 744 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Rowlet?$"

NewProfessor_EventScript_Rowlet_Text_1:
# 749 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Rowlet$"

NewProfessor_EventScript_Litten_Text_0:
# 775 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Litten?$"

NewProfessor_EventScript_Litten_Text_1:
# 780 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Litten$"

NewProfessor_EventScript_Popplio_Text_0:
# 805 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Popplio?$"

NewProfessor_EventScript_Popplio_Text_1:
# 810 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Popplio$"

NewProfessor_EventScript_Sobble_Text_0:
# 835 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Sobble?$"

NewProfessor_EventScript_Sobble_Text_1:
# 840 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Sobble$"

NewProfessor_EventScript_Grookey_Text_0:
# 865 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Grookey?$"

NewProfessor_EventScript_Grookey_Text_1:
# 870 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Grookey$"

NewProfessor_EventScript_Scorbunny_Text_0:
# 895 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Scorbunny?$"

NewProfessor_EventScript_Scorbunny_Text_1:
# 900 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Scorbunny$"

NewProfessor_EventScript_Fuecoco_Text_0:
# 925 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Fuecoco?$"

NewProfessor_EventScript_Fuecoco_Text_1:
# 930 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Fuecoco$"

NewProfessor_EventScript_Sprigatito_Text_0:
# 955 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

NewProfessor_EventScript_Sprigatito_Text_1:
# 960 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Sprigatito$"

NewProfessor_EventScript_Quaxly_Text_0:
# 985 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Do you want to choose Quaxly?$"

NewProfessor_EventScript_Quaxly_Text_1:
# 990 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Recieved Quaxly$"

NicknamePartyMon_Text_0:
# 1014 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 1030 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "Transferred to PC.$"

NewProfessor_NotChosen::
# 1033 "data/maps/LittlerootTown_Gym/scripts.pory"
	.string "You did not choose the Pokemon.$"

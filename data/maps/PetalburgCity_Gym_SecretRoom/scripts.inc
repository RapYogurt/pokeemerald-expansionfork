# 1 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
PetalburgCity_Gym_SecretRoom_MapScripts::
# 2 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.byte 0

PetalburgCity_Gym_SecretRoom::
	.byte 0


PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall::
# 8 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	lockall
# 9 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	showmonpic SPECIES_PIKACHU_STARTER, 10, 3
# 10 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_Text_0, MSGBOX_YESNO
# 11 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_2
# 42 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 43 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_Pokemon_NotChosen
PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_1:
# 45 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	waitmessage
# 46 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_2:
# 12 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	givemon SPECIES_PIKACHU_STARTER, 5, ITEM_LOVE_BALL
# 13 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_5
# 25 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_6
# 37 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 38 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_Text_3
	goto PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_1

PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_5:
# 14 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 15 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_Text_1
# 16 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_Text_2
# 17 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 1
# 18 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 2
# 19 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 3
# 20 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_BALL_SIX
# 21 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_BALL_FOUR
# 22 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_BALL_FIVE
# 23 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknamePartyMon3
	goto PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_1

PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_6:
# 26 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 27 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_Text_2
# 28 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 1
# 29 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 2
# 30 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 3
# 31 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_BALL_SIX
# 32 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_BALL_FOUR
# 33 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_BALL_FIVE
# 34 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknameBoxMon3
	goto PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_1


PetalburgCity_Gym_SpeedRoom_EventScript_EeveeBall::
# 52 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	lockall
# 53 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	showmonpic SPECIES_PIKACHU_STARTER, 10, 3
# 54 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_Text_0, MSGBOX_YESNO
# 55 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_SpeedRoom_EventScript_EeveeBall_2
# 86 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 87 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_Pokemon_NotChosen
PetalburgCity_Gym_SpeedRoom_EventScript_EeveeBall_1:
# 89 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	waitmessage
# 90 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_SpeedRoom_EventScript_EeveeBall_2:
# 56 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	givemon SPECIES_PIKACHU_STARTER, 5, ITEM_LOVE_BALL
# 57 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PetalburgCity_Gym_SpeedRoom_EventScript_EeveeBall_5
# 69 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PetalburgCity_Gym_SpeedRoom_EventScript_EeveeBall_6
# 81 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 82 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_Text_3
	goto PetalburgCity_Gym_SpeedRoom_EventScript_EeveeBall_1

PetalburgCity_Gym_SpeedRoom_EventScript_EeveeBall_5:
# 58 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 59 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_Text_1
# 60 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_Text_2
# 61 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 1
# 62 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 2
# 63 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 3
# 64 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_BALL_SIX
# 65 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_BALL_FOUR
# 66 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_BALL_FIVE
# 67 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknamePartyMon3
	goto PetalburgCity_Gym_SpeedRoom_EventScript_EeveeBall_1

PetalburgCity_Gym_SpeedRoom_EventScript_EeveeBall_6:
# 70 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 71 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_Text_2
# 72 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 1
# 73 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 2
# 74 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 3
# 75 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_BALL_SIX
# 76 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_BALL_FOUR
# 77 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_BALL_FIVE
# 78 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknameBoxMon3
	goto PetalburgCity_Gym_SpeedRoom_EventScript_EeveeBall_1


PetalburgCity_Gym_SpeedRoom_EventScript_CosmogBall::
# 95 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	lockall
# 96 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	showmonpic SPECIES_PIKACHU_STARTER, 10, 3
# 97 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_Text_0, MSGBOX_YESNO
# 98 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_SpeedRoom_EventScript_CosmogBall_2
# 129 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 130 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_Pokemon_NotChosen
PetalburgCity_Gym_SpeedRoom_EventScript_CosmogBall_1:
# 132 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	waitmessage
# 133 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_SpeedRoom_EventScript_CosmogBall_2:
# 99 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	givemon SPECIES_PIKACHU_STARTER, 5, ITEM_LOVE_BALL
# 100 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PetalburgCity_Gym_SpeedRoom_EventScript_CosmogBall_5
# 112 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PetalburgCity_Gym_SpeedRoom_EventScript_CosmogBall_6
# 124 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 125 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_Text_3
	goto PetalburgCity_Gym_SpeedRoom_EventScript_CosmogBall_1

PetalburgCity_Gym_SpeedRoom_EventScript_CosmogBall_5:
# 101 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 102 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_Text_1
# 103 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_Text_2
# 104 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 1
# 105 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 2
# 106 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 3
# 107 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_BALL_SIX
# 108 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_BALL_FOUR
# 109 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_BALL_FIVE
# 110 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknamePartyMon3
	goto PetalburgCity_Gym_SpeedRoom_EventScript_CosmogBall_1

PetalburgCity_Gym_SpeedRoom_EventScript_CosmogBall_6:
# 113 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 114 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_Text_2
# 115 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 1
# 116 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 2
# 117 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 3
# 118 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_BALL_SIX
# 119 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_BALL_FOUR
# 120 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_BALL_FIVE
# 121 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknameBoxMon3
	goto PetalburgCity_Gym_SpeedRoom_EventScript_CosmogBall_1


NicknamePartyMon3::
# 140 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox NicknamePartyMon3_Text_0, MSGBOX_YESNO
# 141 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 142 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon3_1
	return

NicknamePartyMon3_1:
# 143 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 144 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon3::
# 152 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox NicknamePartyMon3_Text_0, MSGBOX_YESNO
# 153 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 154 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon3_2
NicknameBoxMon3_1:
# 157 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon3_2:
# 155 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon3_1


PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_Text_0:
# 10 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Do you want to choose Pikachu?\pThis Pokemon was abandoned due to it's\ninability to evolve...$"

PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_Text_1:
# 15 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "The Pikachu gave you a hug!$"

PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_Text_2:
# 16 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Recieved a Pikachu!$"

PetalburgCity_Gym_SpeedRoomEventScript_PikachuBall_Text_3:
# 38 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "No More Room$"

NicknamePartyMon3_Text_0:
# 140 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Give it a nickname?$"

PetalburgCity_Gym_Pokemon_NotChosen::
# 161 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "It's ears droop in disappointment as it\nseems to have expected this.$"

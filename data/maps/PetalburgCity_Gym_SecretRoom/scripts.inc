# 1 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
PetalburgCity_Gym_SecretRoom_MapScripts::
# 2 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.byte 0

PetalburgCity_Gym_SecretRoom::
	.byte 0


PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall::
# 8 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	lockall
# 9 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	showmonpic SPECIES_IGGLYBUFF, 10, 3
# 10 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_Text_0, MSGBOX_YESNO
# 11 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_2
# 39 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 40 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_Pokemon_NotChosen
PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_1:
# 42 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	waitmessage
# 43 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_2:
# 12 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	givemon SPECIES_IGGLYBUFF, 5, ITEM_WIDE_LENS
# 13 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_5
# 23 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_6
# 34 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 35 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_Text_2
	goto PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_1

PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_5:
# 14 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 15 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_Text_1
# 16 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 1
# 17 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 2
# 18 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_ACCURACY_1
# 19 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_ACCURACY_2
# 20 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_RECEIVED_POKEMON
# 21 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknamePartyMon3
	goto PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_1

PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_6:
# 24 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 25 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_Text_1
# 26 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 1
# 27 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 2
# 28 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_ACCURACY_1
# 29 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_ACCURACY_2
# 30 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_RECEIVED_POKEMON
# 31 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknameBoxMon3
	goto PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_1


PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall::
# 49 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	lockall
# 50 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	showmonpic SPECIES_DROWZEE, 10, 3
# 51 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_0, MSGBOX_YESNO
# 52 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_2
# 80 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 81 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_Pokemon_NotChosen
PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_1:
# 83 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	waitmessage
# 84 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_2:
# 53 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	givemon SPECIES_DROWZEE, 5, ITEM_WIDE_LENS
# 54 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_5
# 64 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_6
# 75 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 76 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_3
	goto PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_1

PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_5:
# 55 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 56 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_1
# 57 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 3
# 58 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 4
# 59 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_ACCURACY_1
# 60 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_ACCURACY_2
# 61 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_RECEIVED_POKEMON
# 62 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknamePartyMon3
	goto PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_1

PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_6:
# 65 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 66 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_2
# 67 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 3
# 68 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 4
# 69 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_ACCURACY_1
# 70 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_ACCURACY_2
# 71 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_RECEIVED_POKEMON
# 72 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknameBoxMon3
	goto PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_1


PetalburgCity_Gym_SpeedRoomEventScript_ParasBall::
# 90 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	lockall
# 91 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	showmonpic SPECIES_PARAS, 10, 3
# 92 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_Text_0, MSGBOX_YESNO
# 93 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_2
# 120 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 121 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_Pokemon_NotChosen
PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_1:
# 123 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	waitmessage
# 124 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_2:
# 94 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	givemon SPECIES_PARAS, 5, ITEM_QUICK_CLAW
# 95 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_5
# 105 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_6
# 115 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 116 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_3
	goto PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_1

PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_5:
# 96 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 97 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_Text_1
# 98 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 1
# 99 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 2
# 100 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_SPEED_1
# 101 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_SPEED_2
# 102 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_RECEIVED_POKEMON
# 103 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknamePartyMon3
	goto PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_1

PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_6:
# 106 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 107 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 1
# 108 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 2
# 109 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_SPEED_1
# 110 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_SPEED_2
# 111 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_RECEIVED_POKEMON
# 112 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknameBoxMon3
	goto PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_1


PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall::
# 130 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	lockall
# 131 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	showmonpic SPECIES_MANTYKE, 10, 3
# 132 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_Text_0, MSGBOX_YESNO
# 133 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_2
# 161 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 162 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_Pokemon_NotChosen
PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_1:
# 164 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	waitmessage
# 165 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_2:
# 134 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	givemon SPECIES_MANTYKE, 5, ITEM_QUICK_CLAW
# 135 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_5
# 145 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_6
# 156 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 157 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_3
	goto PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_1

PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_5:
# 136 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 137 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_Text_1
# 138 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 1
# 139 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 2
# 140 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_SPEED_1
# 141 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_SPEED_2
# 142 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_RECEIVED_POKEMON
# 143 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknamePartyMon3
	goto PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_1

PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_6:
# 146 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 147 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_Text_2
# 148 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 1
# 149 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 2
# 150 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_SPEED_1
# 151 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_SPEED_2
# 152 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_RECEIVED_POKEMON
# 153 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknameBoxMon3
	goto PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_1


NicknamePartyMon3::
# 175 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox NicknamePartyMon3_Text_0, MSGBOX_YESNO
# 176 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 177 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon3_1
	return

NicknamePartyMon3_1:
# 178 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 179 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon3::
# 187 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox NicknamePartyMon3_Text_0, MSGBOX_YESNO
# 188 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 189 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon3_2
NicknameBoxMon3_1:
# 192 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon3_2:
# 190 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon3_1


PetalburgCityGym_SecretRoom_EnterSecretRoom::
# 202 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCityGym_SecretRoom_EnterSecretRoom_Text_0
# 203 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setvar VAR_PETALBURG_SECRET_ROOM_ENTERED, 1
# 204 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	waitmessage
# 205 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	releaseall
	end


PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_Text_0:
# 10 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Do you want to choose IGGLYBUFF?\pThis Pokemon was trained to never\nmiss a move.$"

PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_Text_1:
# 15 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Recieved the IGGLYBUFF!$"

PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_Text_2:
# 35 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "No more room!$"

PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_0:
# 51 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Do you want to choose DROWZEE?\pThis Pokemon was trained to never\nmiss a move.$"

PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_1:
# 56 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Recieved the DROWZEE!$"

PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_2:
# 66 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Recieved the DROWZEE$"

PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_3:
# 76 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "No More Room$"

PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_Text_0:
# 92 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Do you want to choose PARAS?\pThis Pokemon was trained to always\nmove first.$"

PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_Text_1:
# 97 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Recieved the PARAS!$"

PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_Text_0:
# 132 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Do you want to choose MANTYKE?\pThis Pokemon was trained to always\nmove first.$"

PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_Text_1:
# 137 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Recieved the MANTYKE!$"

PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_Text_2:
# 147 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Recieved the MANTYKE$"

NicknamePartyMon3_Text_0:
# 175 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Give it a nickname?$"

PetalburgCityGym_SecretRoom_EnterSecretRoom_Text_0:
# 202 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "A chill runs down your spine.\nYou feel like you shouldn't be here.\pYou know that if you steal a POKÉMON,\nboth rooms will lock when you leave.$"

PetalburgCity_Gym_Pokemon_NotChosen::
# 196 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Better to leave it where it is.$"

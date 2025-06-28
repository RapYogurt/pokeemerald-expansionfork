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
# 37 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 38 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_Pokemon_NotChosen
PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_1:
# 40 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	waitmessage
# 41 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_2:
# 12 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	givemon SPECIES_PIKACHU_STARTER, 5, ITEM_WIDE_LENS
# 13 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_5
# 22 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_6
# 32 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 33 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
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
	call NicknamePartyMon3
	goto PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_1

PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_6:
# 23 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 24 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_Text_1
# 25 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 1
# 26 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 2
# 27 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_ACCURACY_1
# 28 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_ACCURACY_2
# 29 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknameBoxMon3
	goto PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_1


PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall::
# 47 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	lockall
# 48 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	showmonpic SPECIES_DROWZEE, 10, 3
# 49 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_0, MSGBOX_YESNO
# 50 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_2
# 76 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 77 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_Pokemon_NotChosen
PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_1:
# 79 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	waitmessage
# 80 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_2:
# 51 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	givemon SPECIES_DROWZEE, 5, ITEM_WIDE_LENS
# 52 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_5
# 61 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_6
# 71 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 72 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_3
	goto PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_1

PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_5:
# 53 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 54 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_1
# 55 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 3
# 56 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 4
# 57 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_ACCURACY_1
# 58 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_ACCURACY_2
# 59 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknamePartyMon3
	goto PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_1

PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_6:
# 62 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 63 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_2
# 64 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 3
# 65 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 4
# 66 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_ACCURACY_1
# 67 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_ACCURACY_2
# 68 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknameBoxMon3
	goto PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_1


PetalburgCity_Gym_SpeedRoomEventScript_ParasBall::
# 86 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	lockall
# 87 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	showmonpic SPECIES_PARAS, 10, 3
# 88 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_Text_0, MSGBOX_YESNO
# 89 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_2
# 114 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 115 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_Pokemon_NotChosen
PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_1:
# 117 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	waitmessage
# 118 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_2:
# 90 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	givemon SPECIES_PARAS, 5, ITEM_QUICK_CLAW
# 91 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_5
# 100 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_6
# 109 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 110 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_3
	goto PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_1

PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_5:
# 92 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 93 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_Text_1
# 94 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 1
# 95 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 2
# 96 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_SPEED_1
# 97 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_SPEED_2
# 98 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknamePartyMon3
	goto PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_1

PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_6:
# 101 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 102 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 1
# 103 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 2
# 104 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_SPEED_1
# 105 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_SPEED_2
# 106 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknameBoxMon3
	goto PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_1


PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall::
# 124 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	lockall
# 125 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	showmonpic SPECIES_MANTYKE, 10, 3
# 126 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_Text_0, MSGBOX_YESNO
# 127 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_2
# 153 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 154 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_Pokemon_NotChosen
PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_1:
# 156 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	waitmessage
# 157 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_2:
# 128 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	givemon SPECIES_MANTYKE, 5, ITEM_QUICK_CLAW
# 129 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_5
# 138 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_6
# 148 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 149 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_3
	goto PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_1

PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_5:
# 130 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 131 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_Text_1
# 132 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 1
# 133 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 2
# 134 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_SPEED_1
# 135 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_SPEED_2
# 136 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknamePartyMon3
	goto PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_1

PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_6:
# 139 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 140 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_Text_2
# 141 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 1
# 142 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	removeobject 2
# 143 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_SPEED_1
# 144 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	setflag FLAG_PETALBURG_SPEED_2
# 145 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call NicknameBoxMon3
	goto PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_1


NicknamePartyMon3::
# 167 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox NicknamePartyMon3_Text_0, MSGBOX_YESNO
# 168 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 169 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon3_1
	return

NicknamePartyMon3_1:
# 170 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 171 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon3::
# 179 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	msgbox NicknamePartyMon3_Text_0, MSGBOX_YESNO
# 180 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	hidemonpic
# 181 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon3_2
NicknameBoxMon3_1:
# 184 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon3_2:
# 182 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon3_1


PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_Text_0:
# 10 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Do you want to choose IGGLYBUFF?\pThis Pokemon was trained to never\nmiss a move.$"

PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_Text_1:
# 15 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Recieved the IGGLYBUFF!$"

PetalburgCity_Gym_AccuracyRoomEventScript_IgglybuffBall_Text_2:
# 33 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "No more room!$"

PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_0:
# 49 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Do you want to choose DROWZEE?\pThis Pokemon was trained to never\nmiss a move.$"

PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_1:
# 54 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Recieved the DROWZEE!$"

PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_2:
# 63 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Recieved the DROWZEE$"

PetalburgCity_Gym_AccuracyRoomEventScript_DrowzeeBall_Text_3:
# 72 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "No More Room$"

PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_Text_0:
# 88 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Do you want to choose PARAS?\pThis Pokemon was trained to always\nmove first.$"

PetalburgCity_Gym_SpeedRoomEventScript_ParasBall_Text_1:
# 93 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Recieved the PARAS!$"

PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_Text_0:
# 126 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Do you want to choose MANTYKE?\pThis Pokemon was trained to always\nmove first.$"

PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_Text_1:
# 131 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Recieved the MANTYKE!$"

PetalburgCity_Gym_SpeedRoomEventScript_MantykeBall_Text_2:
# 140 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Recieved the MANTYKE$"

NicknamePartyMon3_Text_0:
# 167 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Give it a nickname?$"

PetalburgCity_Gym_Pokemon_NotChosen::
# 188 "data/maps/PetalburgCity_Gym_SecretRoom/scripts.pory"
	.string "Better to leave it where it is.$"

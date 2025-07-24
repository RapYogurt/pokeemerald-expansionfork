# 1 "data/maps/OldaleTower/scripts.pory"
OldaleTower_MapScripts::
# 2 "data/maps/OldaleTower/scripts.pory"
	.byte 0

OldaleTower::
	.byte 0


OldaleTower_LostGirl_HelpFindBrother::
# 10 "data/maps/OldaleTower/scripts.pory"
	lockall
# 11 "data/maps/OldaleTower/scripts.pory"
	msgbox OldaleTower_LostGirl_HelpFindBrother_Text_0
# 12 "data/maps/OldaleTower/scripts.pory"
	releaseall
	end


OldaleTower_LostGirl_HelpFindBrother_Text_0:
# 11 "data/maps/OldaleTower/scripts.pory"
	.string "waaah help find brother$"

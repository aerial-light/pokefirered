CeladonCity_Restaurant_MapScripts:: @ 816D1EA
	.byte 0

CeladonCity_Restaurant_EventScript_Chef:: @ 816D1EB
	msgbox CeladonCity_Restaurant_Text_TakingBreakRightNow, MSGBOX_NPC
	end

CeladonCity_Restaurant_EventScript_Woman:: @ 816D1F4
	goto_if_questlog EventScript_ReleaseEnd
	lock
	faceplayer
	message Text_HowMayIServeYou
	waitmessage
	pokemart CeladonCity_Restaurant_Items
	msgbox Text_PleaseComeAgain
	release
	end

CeladonCity_Restaurant_EventScript_CoinCaseMan:: @ 816D1FD
	lock
	faceplayer
	goto_if_set FLAG_GOT_COIN_CASE, CeladonCity_Restaurant_EventScript_AlreadyGotCoinCase
	msgbox CeladonCity_Restaurant_Text_TakeThisImBusted
	checkitemspace ITEM_COIN_CASE, 1
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonCity_Restaurant_EventScript_NoRoomForCoinCase
	giveitem_msg CeladonCity_Restaurant_Text_ReceivedCoinCaseFromMan, ITEM_COIN_CASE
	setflag FLAG_GOT_COIN_CASE
	release
	end

CeladonCity_Restaurant_EventScript_NoRoomForCoinCase:: @ 816D241
	msgbox CeladonCity_Restaurant_Text_MakeRoomForThis
	release
	end

CeladonCity_Restaurant_EventScript_AlreadyGotCoinCase:: @ 816D24B
	msgbox CeladonCity_Restaurant_Text_ThoughtIdWinItBack
	release
	end

CeladonCity_Restaurant_EventScript_WorkerM:: @ 816D255
	msgbox CeladonCity_Restaurant_Text_PsstBasementUnderGameCorner, MSGBOX_NPC
	end

CeladonCity_Restaurant_EventScript_FatMan:: @ 816D25E
	msgbox CeladonCity_Restaurant_Text_ManLostItAllAtSlots, MSGBOX_NPC
	end

Text_HowMayIServeYou::
	.string "Hi, there!\n"
	.string "What would you like for today?$"

CeladonCity_Restaurant_Items::
	.2byte ITEM_LUM_BERRY
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_POMEG_BERRY
	.2byte ITEM_KELPSY_BERRY
	.2byte ITEM_QUALOT_BERRY
	.2byte ITEM_HONDEW_BERRY
	.2byte ITEM_GREPA_BERRY
	.2byte ITEM_TAMATO_BERRY
	.2byte ITEM_NONE
	release
	end

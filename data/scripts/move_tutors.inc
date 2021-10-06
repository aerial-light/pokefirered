VictoryRoad_2F_EventScript_DoubleEdgeTutor:: @ 81C47AE
	lock
	faceplayer
	msgbox Text_DoubleEdgeTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_DoubleEdgeDeclined
	msgbox Text_DoubleEdgeWhichMon
	setvar VAR_0x8005, MOVETUTOR_DOUBLE_EDGE
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_DoubleEdgeDeclined
	goto EventScript_DoubleEdgeTaught
	end

EventScript_DoubleEdgeDeclined:: @ 81C4802
	msgbox Text_DoubleEdgeDeclined
	release
	end

EventScript_DoubleEdgeTaught:: @ 81C480C
	msgbox Text_DoubleEdgeTaught
	release
	end

EventScript_ThunderWaveTutor:: @ 81C4816
	lock
	faceplayer
	msgbox Text_ThunderWaveTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_ThunderWaveDeclined
	msgbox Text_ThunderWaveWhichMon
	setvar VAR_0x8005, MOVETUTOR_THUNDER_WAVE
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_ThunderWaveDeclined
	goto EventScript_ThunderWaveTaught
	end

EventScript_ThunderWaveDeclined:: @ 81C486A
	msgbox Text_ThunderWaveDeclined
	release
	end

EventScript_ThunderWaveTaught:: @ 81C4874
	msgbox Text_ThunderWaveTaught
	release
	end

RockTunnel_B1F_EventScript_RockSlideTutor:: @ 81C487E
	lock
	faceplayer
	msgbox Text_RockSlideTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_RockSlideDeclined
	msgbox Text_RockSlideWhichMon
	setvar VAR_0x8005, MOVETUTOR_ROCK_SLIDE
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_RockSlideDeclined
	goto EventScript_RockSlideTaught
	end

EventScript_RockSlideDeclined:: @ 81C48D2
	msgbox Text_RockSlideDeclined
	release
	end

EventScript_RockSlideTaught:: @ 81C48DC
	msgbox Text_RockSlideTaught
	release
	end

MtEmber_Exterior_EventScript_ExplosionTutor:: @ 81C48E6
	lock
	faceplayer
	msgbox Text_ExplosionTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_ExplosionDeclined
	msgbox Text_ExplosionWhichMon
	setvar VAR_0x8005, MOVETUTOR_EXPLOSION
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_ExplosionDeclined
	goto EventScript_ExplosionTaught
	end

EventScript_ExplosionDeclined:: @ 81C493A
	msgbox Text_ExplosionDeclined
	release
	end

EventScript_ExplosionTaught:: @ 81C4944
	msgbox Text_ExplosionTaught
	release
	end

Route4_EventScript_MegaPunchTutor:: @ 81C494E
	lock
	faceplayer
	msgbox Text_MegaPunchTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MegaPunchDeclined
	msgbox Text_MegaPunchWhichMon
	setvar VAR_0x8005, MOVETUTOR_MEGA_PUNCH
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_MegaPunchDeclined
	goto EventScript_MegaPunchTaught
	end

EventScript_MegaPunchDeclined:: @ 81C49A2
	msgbox Text_MegaPunchDeclined
	release
	end

EventScript_MegaPunchTaught:: @ 81C49AC
	msgbox Text_MegaPunchTaught
	release
	end

Route4_EventScript_MegaKickTutor:: @ 81C49B6
	lock
	faceplayer
	msgbox Text_MegaKickTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MegaKickDeclined
	msgbox Text_MegaKickWhichMon
	setvar VAR_0x8005, MOVETUTOR_MEGA_KICK
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_MegaKickDeclined
	goto EventScript_MegaKickTaught
	end

EventScript_MegaKickDeclined:: @ 81C4A0A
	msgbox Text_MegaKickDeclined
	release
	end

EventScript_MegaKickTaught:: @ 81C4A14
	msgbox Text_MegaKickTaught
	release
	end

EventScript_DreamEaterTutor:: @ 81C4A1E
	lock
	faceplayer
	msgbox Text_DreamEaterTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_DreamEaterDeclined
	msgbox Text_DreamEaterWhichMon
	setvar VAR_0x8005, MOVETUTOR_DREAM_EATER
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_DreamEaterDeclined
	goto EventScript_DreamEaterTaught
	end

EventScript_DreamEaterDeclined:: @ 81C4A72
	msgbox Text_DreamEaterDeclined
	release
	end

EventScript_DreamEaterTaught:: @ 81C4A7C
	msgbox Text_DreamEaterTaught
	release
	end

EventScript_SoftboiledTutor:: @ 81C4A86
	lock
	faceplayer
	msgbox Text_SoftboiledTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_SoftboiledDeclined
	msgbox Text_SoftboiledWhichMon
	setvar VAR_0x8005, MOVETUTOR_SOFT_BOILED
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_SoftboiledDeclined
	goto EventScript_SoftboiledTaught
	end

EventScript_SoftboiledDeclined:: @ 81C4ADA
	msgbox Text_SoftboiledDeclined
	release
	end

EventScript_SoftboiledTaught:: @ 81C4AE4
	msgbox Text_SoftboiledTaught
	release
	end

FuchsiaCity_EventScript_SubstituteTutor:: @ 81C4AEE
	lock
	faceplayer
	msgbox Text_SubstituteTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_SubstituteDeclined
	msgbox Text_SubstituteWhichMon
	setvar VAR_0x8005, MOVETUTOR_SUBSTITUTE
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_SubstituteDeclined
	goto EventScript_SubstituteTaught
	end

EventScript_SubstituteDeclined:: @ 81C4B42
	msgbox Text_SubstituteDeclined
	release
	end

EventScript_SubstituteTaught:: @ 81C4B4C
	msgbox Text_SubstituteTaught
	release
	end

Route20_EventScript_SwordsDanceTutor:: @ 81C4B56
	lock
	faceplayer
	msgbox Text_SwordsDanceTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_SwordsDanceDeclined
	msgbox Text_SwordsDanceWhichMon
	setvar VAR_0x8005, MOVETUTOR_SWORDS_DANCE
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_SwordsDanceDeclined
	msgbox Text_SwordsDanceTaught
	release
	end

EventScript_SwordsDanceDeclined:: @ 81C4BAA
	msgbox Text_SwordsDanceDeclined
	release
	end

PewterCity_Museum_1F_EventScript_SeismicTossTutor:: @ 81C4BBE
	lock
	faceplayer
	msgbox Text_SeismicTossTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_SeismicTossDeclined
	msgbox Text_SeismicTossWhichMon
	setvar VAR_0x8005, MOVETUTOR_SEISMIC_TOSS
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_SeismicTossDeclined
	goto EventScript_SeismicTossTaught
	end

EventScript_SeismicTossDeclined:: @ 81C4C12
	msgbox Text_SeismicTossDeclined
	release
	end

EventScript_SeismicTossTaught:: @ 81C4C1C
	msgbox Text_SeismicTossTaught
	release
	end

EventScript_CounterTutor:: @ 81C4C26
	lock
	faceplayer
	msgbox Text_CounterTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_CounterDeclined
	msgbox Text_CounterWhichMon
	setvar VAR_0x8005, MOVETUTOR_COUNTER
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CounterDeclined
	goto EventScript_CounterTaught
	end

EventScript_CounterDeclined:: @ 81C4C7A
	msgbox Text_CounterDeclined
	release
	end

EventScript_CounterTaught:: @ 81C4C84
	msgbox Text_CounterTaught
	release
	end

EventScript_MetronomeTutor:: @ 81C4C8E
	lock
	faceplayer
	msgbox Text_MetronomeTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MetronomeDeclined
	msgbox Text_MetronomeWhichMon
	setvar VAR_0x8005, MOVETUTOR_METRONOME
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_MetronomeDeclined
	goto EventScript_MetronomeTaught
	end

EventScript_MetronomeDeclined:: @ 81C4CE2
	msgbox Text_MetronomeDeclined
	release
	end

EventScript_MetronomeTaught:: @ 81C4CEC
	msgbox Text_MetronomeTaught
	release
	end

EventScript_MimicTutor:: @ 81C4CF6
	msgbox Text_MimicTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MimicDeclined
	msgbox Text_MimicWhichMon
	setvar VAR_0x8005, MOVETUTOR_MIMIC
	call EventScript_ChooseMoveTutorMon
	lock
	faceplayer
	compare VAR_RESULT, 0
	goto_if_eq EventScript_MimicDeclined
	removeitem ITEM_POKE_DOLL, 1
	goto EventScript_MimicTaught
	end

EventScript_MimicDeclined:: @ 81C4D4F
	msgbox Text_MimicDeclined
	release
	end

EventScript_MimicTaught:: @ 81C4D59
	checkplayergender
	compare VAR_RESULT, MALE
	call_if_eq EventScript_MimicTaughtMale
	compare VAR_RESULT, FEMALE
	call_if_eq EventScript_MimicTaughtFemale
	release
	end

EventScript_MimicTaughtMale:: @ 81C4D72
	msgbox Text_MimicTaughtMale
	return

EventScript_MimicTaughtFemale:: @ 81C4D7B
	msgbox Text_MimicTaughtFemale
	return

FourIsland_House1_EventScript_BodySlamTutor:: @ 81C4D84
	lock
	faceplayer
	msgbox Text_BodySlamTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_BodySlamDeclined
	msgbox Text_BodySlamWhichMon
	setvar VAR_0x8005, MOVETUTOR_BODY_SLAM
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_BodySlamDeclined
	goto EventScript_BodySlamTaught
	end

EventScript_BodySlamDeclined:: @ 81C4DD8
	msgbox Text_BodySlamDeclined
	release
	end

EventScript_BodySlamTaught:: @ 81C4DE2
	msgbox Text_BodySlamTaught
	release
	end

CeladonCity_Condominiums_Roof_EventScript_IcyWindTutor::
	lock
	faceplayer
	msgbox Text_IcyWindTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_IcyWindDeclined
	msgbox Text_IcyWindWhichMon
	setvar VAR_0x8005, MOVETUTOR_ICY_WIND
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_IcyWindDeclined
	goto EventScript_IcyWindTaught
	end

EventScript_IcyWindDeclined::
	msgbox Text_IcyWindDeclined
	release
	end

EventScript_IcyWindTaught::
	msgbox Text_IcyWindTaught
	release
	end

Route10_PokemonCenter_1F_EventScript_EndureTutor::
	lock
	faceplayer
	msgbox Text_EndureTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_EndureDeclined
	msgbox Text_EndureWhichMon
	setvar VAR_0x8005, MOVETUTOR_ENDURE
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_EndureDeclined
	goto EventScript_EndureTaught
	end

EventScript_EndureDeclined::
	msgbox Text_EndureDeclined
	release
	end

EventScript_EndureTaught::
	msgbox Text_EndureTaught
	release
	end

CeladonCity_DepartmentStore_3F_EventScript_FirePunchTutor::
	lock
	faceplayer
	msgbox Text_FirePunchTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_FirePunchDeclined
	msgbox Text_FirePunchWhichMon
	setvar VAR_0x8005, MOVETUTOR_FIRE_PUNCH
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_FirePunchDeclined
	goto EventScript_FirePunchTaught
	end

EventScript_FirePunchDeclined::
	msgbox Text_FirePunchDeclined
	release
	end

EventScript_FirePunchTaught::
	msgbox Text_FirePunchTaught
	release
	end

CeladonCity_DepartmentStore_4F_EventScript_IcePunchTutor::
	lock
	faceplayer
	msgbox Text_IcePunchTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_IcePunchDeclined
	msgbox Text_IcePunchWhichMon
	setvar VAR_0x8005, MOVETUTOR_ICE_PUNCH
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_IcePunchDeclined
	goto EventScript_IcePunchTaught
	end

EventScript_IcePunchDeclined::
	msgbox Text_IcePunchDeclined
	release
	end

EventScript_IcePunchTaught::
	msgbox Text_IcePunchTaught
	release
	end

CeladonCity_DepartmentStore_5F_EventScript_ThunderPunchTutor::
	lock
	faceplayer
	msgbox Text_ThunderPunchTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_ThunderPunchDeclined
	msgbox Text_ThunderPunchWhichMon
	setvar VAR_0x8005, MOVETUTOR_THUNDERPUNCH
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_ThunderPunchDeclined
	goto EventScript_ThunderPunchTaught
	end

EventScript_ThunderPunchDeclined::
	msgbox Text_ThunderPunchDeclined
	release
	end

EventScript_ThunderPunchTaught::
	msgbox Text_ThunderPunchTaught
	release
	end

.set LOCALID_CAPE_BRINK_TUTOR, 1

TwoIsland_CapeBrink_House_EventScript_StarterTutor:: @ 81C4DEC
	goto_if_questlog EventScript_ReleaseEnd
	special QuestLog_CutRecording
	lock
	faceplayer
	goto_if_set FLAG_LEARNED_ALL_MOVES_AT_CAPE_BRINK, CapeBrinkTutor_EventScript_TaughtAllMoves
	goto_if_set FLAG_TEMP_2, CapeBrinkTutor_EventScript_MoveJustTaught
	getfirstpartymonname 0
	msgbox Text_UltimateMoveThatMon
	specialvar VAR_RESULT, CapeBrinkGetMoveToTeachLeadPokemon
	compare VAR_RESULT, FALSE
	goto_if_eq CapeBrinkTutor_EventScript_NoLeadStarter
	copyvar VAR_0x8009, VAR_0x8005
	compare VAR_FACING, DIR_NORTH
	call_if_eq CapeBrinkTutor_EventScript_JumpInPlaceDown
	compare VAR_FACING, DIR_SOUTH
	call_if_eq CapeBrinkTutor_EventScript_JumpInPlaceUp
	compare VAR_FACING, DIR_EAST
	call_if_eq CapeBrinkTutor_EventScript_JumpInPlaceLeft
	compare VAR_FACING, DIR_WEST
	call_if_eq CapeBrinkTutor_EventScript_JumpInPlaceRight
	msgbox Text_AllowMeToTeachMonUltimateMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq CapeBrinkTutor_EventScript_DeclineMove
	call EventScript_CanOnlyBeLearnedOnce
	compare VAR_RESULT, NO
	goto_if_eq CapeBrinkTutor_EventScript_DeclineMove
	msgbox Text_LetMeConferUltimateMove
	closemessage
	fadescreen FADE_TO_BLACK
	goto CapeBrinkTutor_EventScript_ChooseMon

@ Unused
CapeBrinkTutor_EventScript_FadeTaughtMove:: @ 81C4E8F
	fadescreen FADE_FROM_BLACK
	goto CapeBrinkTutor_EventScript_TaughtMove
	end

CapeBrinkTutor_EventScript_MoveJustTaught:: @ 81C4E97
	msgbox Text_MakeBestUseOfMove
	release
	end

CapeBrinkTutor_EventScript_TaughtAllMoves:: @ 81C4EA1
	msgbox Text_FeelRejuvenated
	release
	end

CapeBrinkTutor_EventScript_TaughtMove:: @ 81C4EAB
	copyvar VAR_0x8005, VAR_0x8009
	specialvar VAR_RESULT, HasLearnedAllMovesFromCapeBrinkTutor
	compare VAR_RESULT, TRUE
	goto_if_eq CapeBrinkTutor_EventScript_LearnedAllMoves
	msgbox Text_TaughtMove
	setflag FLAG_TEMP_2
	release
	end

CapeBrinkTutor_EventScript_LearnedAllMoves:: @ 81C4ECD
	msgbox Text_PassedOnEverythingIKnow
	setflag FLAG_LEARNED_ALL_MOVES_AT_CAPE_BRINK
	release
	end

CapeBrinkTutor_EventScript_ChooseMon:: @ 81C4EDA
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq CapeBrinkTutor_EventScript_DeclineMove
	goto CapeBrinkTutor_EventScript_TaughtMove
	end

CapeBrinkTutor_EventScript_JumpInPlaceDown:: @ 81C4EF0
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceDown
	waitmovement 0
	return

CapeBrinkTutor_EventScript_JumpInPlaceUp:: @ 81C4EFB
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceUp
	waitmovement 0
	return

CapeBrinkTutor_EventScript_JumpInPlaceLeft:: @ 81C4F06
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceLeft
	waitmovement 0
	return

CapeBrinkTutor_EventScript_JumpInPlaceRight:: @ 81C4F11
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceRight
	waitmovement 0
	return

CapeBrinkTutor_EventScript_DeclineMove:: @ 81C4F1C
	msgbox Text_YouRejectIt
	release
	end

CapeBrinkTutor_EventScript_NoLeadStarter:: @ 81C4F26
	msgbox Text_JustMistaken
	release
	end

EventScript_ChooseMoveTutorMon:: @ 81C4F30
	special ChooseMonForMoveTutor
	waitstate
	lock
	faceplayer
	return

EventScript_CanOnlyBeLearnedOnce:: @ 81C4F37
	textcolor 3
	special DisableMsgBoxWalkaway
	signmsg
	msgbox Text_MoveCanOnlyBeLearnedOnce, MSGBOX_YESNO
	normalmsg
	call EventScript_RestorePrevTextColor
	return

Movement_JumpInPlaceDown: @ 81C4F4C
	jump_in_place_down
	step_end

Movement_JumpInPlaceUp: @ 81C4F4E
	jump_in_place_up
	step_end

Movement_JumpInPlaceLeft: @ 81C4F50
	jump_in_place_left
	step_end

Movement_JumpInPlaceRight: @ 81C4F52
	jump_in_place_right
	step_end

static const u16 sTutorMoves[TUTOR_MOVE_COUNT] =
{
    [TUTOR_MOVE_MEGA_PUNCH] = MOVE_MEGA_PUNCH,
    [TUTOR_MOVE_SWORDS_DANCE] = MOVE_SWORDS_DANCE,
    [TUTOR_MOVE_MEGA_KICK] = MOVE_MEGA_KICK,
    [TUTOR_MOVE_BODY_SLAM] = MOVE_BODY_SLAM,
    [TUTOR_MOVE_DOUBLE_EDGE] = MOVE_DOUBLE_EDGE,
    [TUTOR_MOVE_COUNTER] = MOVE_COUNTER,
    [TUTOR_MOVE_SEISMIC_TOSS] = MOVE_SEISMIC_TOSS,
    [TUTOR_MOVE_MIMIC] = MOVE_MIMIC,
    [TUTOR_MOVE_METRONOME] = MOVE_METRONOME,
    [TUTOR_MOVE_SOFT_BOILED] = MOVE_SOFT_BOILED,
    [TUTOR_MOVE_DREAM_EATER] = MOVE_DREAM_EATER,
    [TUTOR_MOVE_THUNDER_WAVE] = MOVE_THUNDER_WAVE,
    [TUTOR_MOVE_EXPLOSION] = MOVE_EXPLOSION,
    [TUTOR_MOVE_ROCK_SLIDE] = MOVE_ROCK_SLIDE,
    [TUTOR_MOVE_SUBSTITUTE] = MOVE_SUBSTITUTE,
    [TUTOR_MOVE_ICY_WIND] = MOVE_ICY_WIND,
    [TUTOR_MOVE_ENDURE] = MOVE_ENDURE,
    [TUTOR_MOVE_FIRE_PUNCH] = MOVE_FIRE_PUNCH,
    [TUTOR_MOVE_ICE_PUNCH] = MOVE_ICE_PUNCH,
    [TUTOR_MOVE_THUNDER_PUNCH] = MOVE_THUNDER_PUNCH
};

#define TUTOR(move) (1 << (TUTOR_##move))

static const u32 sTutorLearnsets[] =
{
    [SPECIES_NONE] = 0,

    [SPECIES_BULBASAUR] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_IVYSAUR] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_VENUSAUR] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_CHARMANDER] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_ENDURE)
                         | TUTOR(MOVE_SLEEP_TALK)
                         | TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_CHARMELEON] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_ENDURE)
                         | TUTOR(MOVE_SLEEP_TALK)
                         | TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_CHARIZARD] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK)
                        | TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_SQUIRTLE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ICY_WIND)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_WARTORTLE] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ICY_WIND)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_BLASTOISE] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ICY_WIND)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_CATERPIE] = 0,

    [SPECIES_METAPOD] = 0,

    [SPECIES_BUTTERFREE] = TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_DREAM_EATER)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_ENDURE)
                         | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_WEEDLE] = 0,

    [SPECIES_KAKUNA] = 0,

    [SPECIES_BEEDRILL] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_PIDGEY] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_PIDGEOTTO] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_PIDGEOT] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_RATTATA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICY_WIND)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_RATICATE] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ICY_WIND)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SPEAROW] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_FEAROW] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_EKANS] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_ARBOK] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_PIKACHU] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_RAICHU] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_SANDSHREW] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SANDSLASH] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_NIDORAN_F] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_NIDORINA] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_NIDOQUEEN] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ICY_WIND)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_ICE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_NIDORAN_M] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_NIDORINO] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_NIDOKING] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ICY_WIND)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_CLEFAIRY] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_SOFT_BOILED)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ICY_WIND)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_CLEFABLE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_SOFT_BOILED)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ICY_WIND)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_VULPIX] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_NINETALES] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_JIGGLYPUFF] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_DREAM_EATER)
                         | TUTOR(MOVE_THUNDER_WAVE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_ICY_WIND)
                         | TUTOR(MOVE_ENDURE)
                         | TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_ICE_PUNCH)
                         | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_WIGGLYTUFF] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_DREAM_EATER)
                         | TUTOR(MOVE_THUNDER_WAVE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_ICY_WIND)
                         | TUTOR(MOVE_ENDURE)
                         | TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_ICE_PUNCH)
                         | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_ZUBAT] = TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_GOLBAT] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_ODDISH] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_GLOOM] = TUTOR(MOVE_SWORDS_DANCE)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_VILEPLUME] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_PARAS] = TUTOR(MOVE_SWORDS_DANCE)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_PARASECT] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_VENONAT] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_VENOMOTH] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_DIGLETT] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_DUGTRIO] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_MEOWTH] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ICY_WIND)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_PERSIAN] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICY_WIND)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_PSYDUCK] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICY_WIND)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_GOLDUCK] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICY_WIND)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MANKEY] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_PRIMEAPE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_GROWLITHE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_ARCANINE] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_POLIWAG] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICY_WIND)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_POLIWHIRL] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_METRONOME)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ICY_WIND)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_POLIWRATH] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_METRONOME)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ICY_WIND)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_ABRA] = TUTOR(MOVE_MEGA_PUNCH)
                   | TUTOR(MOVE_MEGA_KICK)
                   | TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_COUNTER)
                   | TUTOR(MOVE_SEISMIC_TOSS)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_METRONOME)
                   | TUTOR(MOVE_DREAM_EATER)
                   | TUTOR(MOVE_THUNDER_WAVE)
                   | TUTOR(MOVE_SUBSTITUTE)
                   | TUTOR(MOVE_ENDURE)
                   | TUTOR(MOVE_FIRE_PUNCH)
                   | TUTOR(MOVE_ICE_PUNCH)
                   | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_KADABRA] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_ALAKAZAM] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MACHOP] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MACHOKE] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MACHAMP] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_BELLSPROUT] = TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_ENDURE)
                         | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_WEEPINBELL] = TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_ENDURE)
                         | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_VICTREEBEL] = TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_ENDURE)
                         | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_TENTACOOL] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ICY_WIND)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_TENTACRUEL] = TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_ICY_WIND)
                         | TUTOR(MOVE_ENDURE)
                         | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_GEODUDE] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH),

    [SPECIES_GRAVELER] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH),

    [SPECIES_GOLEM] = TUTOR(MOVE_MEGA_PUNCH)
                    | TUTOR(MOVE_MEGA_KICK)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_METRONOME)
                    | TUTOR(MOVE_EXPLOSION)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_FIRE_PUNCH),

    [SPECIES_PONYTA] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_RAPIDASH] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SLOWPOKE] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ICY_WIND)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SLOWBRO] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICY_WIND)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MAGNEMITE] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_MAGNETON] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_FARFETCHD] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_DODUO] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_DODRIO] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SEEL] = TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_SUBSTITUTE)
                   | TUTOR(MOVE_ICY_WIND)
                   | TUTOR(MOVE_ENDURE)
                   | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_DEWGONG] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICY_WIND)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_GRIMER] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MUK] = TUTOR(MOVE_BODY_SLAM)
                  | TUTOR(MOVE_MIMIC)
                  | TUTOR(MOVE_EXPLOSION)
                  | TUTOR(MOVE_SUBSTITUTE)
                  | TUTOR(MOVE_ENDURE)
                  | TUTOR(MOVE_FIRE_PUNCH)
                  | TUTOR(MOVE_ICE_PUNCH)
                  | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_SHELLDER] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ICY_WIND)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_CLOYSTER] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ICY_WIND)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_GASTLY] = TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_HAUNTER] = TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_GENGAR] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_ONIX] = TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_EXPLOSION)
                   | TUTOR(MOVE_ROCK_SLIDE)
                   | TUTOR(MOVE_SUBSTITUTE)
                   | TUTOR(MOVE_ENDURE)
                   | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_DROWZEE] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_HYPNO] = TUTOR(MOVE_MEGA_PUNCH)
                    | TUTOR(MOVE_MEGA_KICK)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_METRONOME)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_FIRE_PUNCH)
                    | TUTOR(MOVE_ICE_PUNCH)
                    | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_KRABBY] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ICY_WIND)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_KINGLER] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICY_WIND)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_VOLTORB] = TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_ELECTRODE] = TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_EXEGGCUTE] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_EXEGGUTOR] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_CUBONE] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ICY_WIND)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_FIRE_PUNCH),

    [SPECIES_MAROWAK] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICY_WIND)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH),

    [SPECIES_HITMONLEE] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_METRONOME)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_HITMONCHAN] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_METRONOME)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_ENDURE)
                         | TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_ICE_PUNCH)
                         | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_LICKITUNG] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ICY_WIND)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_ICE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_KOFFING] = TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_WEEZING] = TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_RHYHORN] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICY_WIND)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_RHYDON] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ICY_WIND)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_CHANSEY] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_SOFT_BOILED)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICY_WIND)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_TANGELA] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_KANGASKHAN] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_ICY_WIND)
                         | TUTOR(MOVE_ENDURE)
                         | TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_ICE_PUNCH)
                         | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_HORSEA] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ICY_WIND)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SEADRA] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ICY_WIND)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_GOLDEEN] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICY_WIND)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SEAKING] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICY_WIND)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_STARYU] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ICY_WIND)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_STARMIE] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICY_WIND)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_MR_MIME] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICY_WIND)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_SCYTHER] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_JYNX] = TUTOR(MOVE_MEGA_PUNCH)
                   | TUTOR(MOVE_MEGA_KICK)
                   | TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_COUNTER)
                   | TUTOR(MOVE_SEISMIC_TOSS)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_METRONOME)
                   | TUTOR(MOVE_DREAM_EATER)
                   | TUTOR(MOVE_SUBSTITUTE)
                   | TUTOR(MOVE_ICY_WIND)
                   | TUTOR(MOVE_ENDURE)
                   | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_ELECTABUZZ] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_THUNDER_WAVE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_ENDURE)
                         | TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_ICE_PUNCH)
                         | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MAGMAR] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_PINSIR] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_TAUROS] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ICY_WIND)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_MAGIKARP] = 0,

    [SPECIES_GYARADOS] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ICY_WIND)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_LAPRAS] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ICY_WIND)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_DITTO] = 0,

    [SPECIES_EEVEE] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_VAPOREON] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ICY_WIND)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_JOLTEON] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_FLAREON] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_PORYGON] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICY_WIND)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_OMANYTE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICY_WIND)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_OMASTAR] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICY_WIND)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_KABUTO] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_KABUTOPS] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_AERODACTYL] = TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_ENDURE)
                         | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SNORLAX] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_ARTICUNO] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_ZAPDOS] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_MOLTRES] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_DRATINI] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_DRAGONAIR] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_DRAGONITE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_ICE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MEWTWO] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MEW] = TUTOR(MOVE_MEGA_PUNCH)
                  | TUTOR(MOVE_SWORDS_DANCE)
                  | TUTOR(MOVE_MEGA_KICK)
                  | TUTOR(MOVE_BODY_SLAM)
                  | TUTOR(MOVE_DOUBLE_EDGE)
                  | TUTOR(MOVE_COUNTER)
                  | TUTOR(MOVE_SEISMIC_TOSS)
                  | TUTOR(MOVE_MIMIC)
                  | TUTOR(MOVE_METRONOME)
                  | TUTOR(MOVE_SOFT_BOILED)
                  | TUTOR(MOVE_DREAM_EATER)
                  | TUTOR(MOVE_THUNDER_WAVE)
                  | TUTOR(MOVE_EXPLOSION)
                  | TUTOR(MOVE_ROCK_SLIDE)
                  | TUTOR(MOVE_SUBSTITUTE)
                  | TUTOR(MOVE_ICY_WIND)
                  | TUTOR(MOVE_ENDURE)
                  | TUTOR(MOVE_FIRE_PUNCH)
                  | TUTOR(MOVE_ICE_PUNCH)
                  | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_CHIKORITA] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_BAYLEEF] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_MEGANIUM] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_CYNDAQUIL] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_QUILAVA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_TYPHLOSION] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_ENDURE)
                         | TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_TOTODILE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_CROCONAW] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_FERALIGATR] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_ENDURE)
                         | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_SENTRET] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_FURRET] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_HOOTHOOT] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_NOCTOWL] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_LEDYBA] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_LEDIAN] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_SPINARAK] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_ARIADOS] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_CROBAT] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_CHINCHOU] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_LANTURN] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_PICHU] = TUTOR(MOVE_MEGA_PUNCH)
                    | TUTOR(MOVE_MEGA_KICK)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_CLEFFA] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_SOFT_BOILED)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_IGGLYBUFF] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_TOGEPI] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_SOFT_BOILED)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_TOGETIC] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_SOFT_BOILED)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_NATU] = TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_DREAM_EATER)
                   | TUTOR(MOVE_THUNDER_WAVE)
                   | TUTOR(MOVE_SUBSTITUTE)
                   | TUTOR(MOVE_ENDURE)
                   | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_XATU] = TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_DREAM_EATER)
                   | TUTOR(MOVE_THUNDER_WAVE)
                   | TUTOR(MOVE_SUBSTITUTE)
                   | TUTOR(MOVE_ENDURE)
                   | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_MAREEP] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_FLAAFFY] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_AMPHAROS] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_BELLOSSOM] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_MARILL] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_AZUMARILL] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_SUDOWOODO] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_ICE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_POLITOED] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_HOPPIP] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SKIPLOOM] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_JUMPLUFF] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_AIPOM] = TUTOR(MOVE_MEGA_PUNCH)
                    | TUTOR(MOVE_MEGA_KICK)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_METRONOME)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_FIRE_PUNCH)
                    | TUTOR(MOVE_ICE_PUNCH)
                    | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_SUNKERN] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SUNFLORA] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_YANMA] = TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_WOOPER] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_QUAGSIRE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_ESPEON] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_UMBREON] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_MURKROW] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SLOWKING] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MISDREAVUS] = TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_DREAM_EATER)
                         | TUTOR(MOVE_THUNDER_WAVE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_ENDURE)
                         | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_UNOWN] = 0,

    [SPECIES_WOBBUFFET] = 0,

    [SPECIES_GIRAFARIG] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_PINECO] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_FORRETRESS] = TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_EXPLOSION)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_ENDURE)
                         | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_DUNSPARCE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_GLIGAR] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_STEELIX] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SNUBBULL] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_GRANBULL] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_QWILFISH] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SCIZOR] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SHUCKLE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_HERACROSS] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SNEASEL] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_TEDDIURSA] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_METRONOME)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_ICE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_URSARING] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_SLUGMA] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_MAGCARGO] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SWINUB] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_PILOSWINE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_CORSOLA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_REMORAID] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_OCTILLERY] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_DELIBIRD] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MANTINE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SKARMORY] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_HOUNDOUR] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_HOUNDOOM] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_KINGDRA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_PHANPY] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_DONPHAN] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_PORYGON2] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_STANTLER] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SMEARGLE] = 0,

    [SPECIES_TYROGUE] = TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_HITMONTOP] = TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SMOOCHUM] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_ELEKID] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MAGBY] = TUTOR(MOVE_MEGA_PUNCH)
                    | TUTOR(MOVE_MEGA_KICK)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_FIRE_PUNCH)
                    | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MILTANK] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_BLISSEY] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_SOFT_BOILED)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_RAIKOU] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_ENTEI] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SUICUNE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_LARVITAR] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_PUPITAR] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_TYRANITAR] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_FIRE_PUNCH),

    [SPECIES_LUGIA] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_HO_OH] = TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_CELEBI] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_TREECKO] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_GROVYLE] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_SCEPTILE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_TORCHIC] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_COMBUSKEN] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_BLAZIKEN] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MUDKIP] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_MARSHTOMP] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_SWAMPERT] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_POOCHYENA] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_MIGHTYENA] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_ZIGZAGOON] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_LINOONE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_WURMPLE] = 0,

    [SPECIES_SILCOON] = 0,

    [SPECIES_BEAUTIFLY] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_CASCOON] = 0,

    [SPECIES_DUSTOX] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_LOTAD] = TUTOR(MOVE_SWORDS_DANCE)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_LOMBRE] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_LUDICOLO] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_SEEDOT] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_NUZLEAF] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SHIFTRY] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_NINCADA] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_NINJASK] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SHEDINJA] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_TAILLOW] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SWELLOW] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SHROOMISH] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_BRELOOM] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_SPINDA] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_WINGULL] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_PELIPPER] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SURSKIT] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_MASQUERAIN] = TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_ENDURE)
                         | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_WAILMER] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_WAILORD] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SKITTY] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_DELCATTY] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_KECLEON] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_BALTOY] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_CLAYDOL] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_NOSEPASS] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_TORKOAL] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SABLEYE] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_BARBOACH] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_WHISCASH] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_LUVDISC] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_CORPHISH] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_CRAWDAUNT] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_FEEBAS] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_MILOTIC] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_CARVANHA] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SHARPEDO] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_TRAPINCH] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_VIBRAVA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_FLYGON] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MAKUHITA] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_HARIYAMA] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_ELECTRIKE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_MANECTRIC] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_NUMEL] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_CAMERUPT] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SPHEAL] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SEALEO] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_WALREIN] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_CACNEA] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_CACTURNE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_SNORUNT] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_GLALIE] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_LUNATONE] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SOLROCK] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_AZURILL] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SPOINK] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_GRUMPIG] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_PLUSLE] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MINUN] = TUTOR(MOVE_MEGA_PUNCH)
                    | TUTOR(MOVE_MEGA_KICK)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_METRONOME)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MAWILE] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MEDITITE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MEDICHAM] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_SWABLU] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_ALTARIA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_WYNAUT] = 0,

    [SPECIES_DUSKULL] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_DUSCLOPS] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_ROSELIA] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SLAKOTH] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_VIGOROTH] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_SLAKING] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_GULPIN] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_SWALOT] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_TROPIUS] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_WHISMUR] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_LOUDRED] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_EXPLOUD] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_CLAMPERL] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_HUNTAIL] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_GOREBYSS] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_ABSOL] = TUTOR(MOVE_SWORDS_DANCE)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SHUPPET] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_BANETTE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SEVIPER] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_ZANGOOSE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_RELICANTH] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_ARON] = TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_ROCK_SLIDE)
                   | TUTOR(MOVE_SUBSTITUTE)
                   | TUTOR(MOVE_ENDURE)
                   | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_LAIRON] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_AGGRON] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_CASTFORM] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_VOLBEAT] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_ILLUMISE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_LILEEP] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_CRADILY] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_ANORITH] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_ARMALDO] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_RALTS] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_FIRE_PUNCH)
                    | TUTOR(MOVE_ICE_PUNCH)
                    | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_KIRLIA] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_GARDEVOIR] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_ICE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_BAGON] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_ENDURE)
                    | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SHELGON] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_SALAMENCE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_BELDUM] = 0,

    [SPECIES_METANG] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_METAGROSS] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_ICE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_REGIROCK] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_REGICE] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_REGISTEEL] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ENDURE)
                        | TUTOR(MOVE_ICE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_KYOGRE] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_GROUDON] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_RAYQUAZA] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_LATIAS] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_LATIOS] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_SLEEP_TALK),

    [SPECIES_JIRACHI] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ENDURE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_DEOXYS] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ENDURE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_CHIMECHO] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ENDURE)
                       | TUTOR(MOVE_SLEEP_TALK),
};

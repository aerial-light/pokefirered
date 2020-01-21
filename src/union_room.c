#include "global.h"
#include "gflib.h"
#include "battle.h"
#include "berry_crush.h"
#include "cable_club.h"
#include "data.h"
#include "decompress.h"
#include "dodrio_berry_picking.h"
#include "dynamic_placeholder_text_util.h"
#include "easy_chat.h"
#include "event_data.h"
#include "event_object_lock.h"
#include "field_control_avatar.h"
#include "field_fadetransition.h"
#include "field_player_avatar.h"
#include "field_weather.h"
#include "link.h"
#include "link_rfu.h"
#include "list_menu.h"
#include "load_save.h"
#include "menu.h"
#include "mevent.h"
#include "mystery_gift_menu.h"
#include "new_menu_helpers.h"
#include "overworld.h"
#include "party_menu.h"
#include "pokemon_jump.h"
#include "quest_log.h"
#include "random.h"
#include "save_location.h"
#include "script.h"
#include "script_pokemon_util.h"
#include "start_menu.h"
#include "task.h"
#include "trade.h"
#include "trade_scene.h"
#include "trainer_card.h"
#include "union_room.h"
#include "union_room_chat.h"
#include "union_room_player_avatar.h"
#include "constants/songs.h"
#include "constants/maps.h"
#include "constants/cable_club.h"
#include "constants/field_weather.h"
#include "constants/species.h"

EWRAM_DATA u8 sUnionRoomPlayerName[12] = {};
EWRAM_DATA union UnkUnion_Main gUnknown_203B05C = {};
EWRAM_DATA u8 gUnknown_203B058 = 0;
EWRAM_DATA u8 gUnknown_203B059 = 0;
EWRAM_DATA struct UnionRoomTrade sUnionRoomTrade = {};

IWRAM_DATA struct UnkStruct_Leader * gUnknown_3002024;
IWRAM_DATA struct UnkStruct_Group * gUnknown_3002028;
IWRAM_DATA struct UnkStruct_URoom * gUnknown_300202C;

void sub_8115A68(u8 taskId);
void sub_81161E4(struct UnkStruct_Leader * leader);
bool8 sub_8116444(struct UnkStruct_Leader * leader, u32 a1, u32 a2);
u8 sub_8116524(struct UnkStruct_Main0 * a0);
u8 sub_81165E8(struct UnkStruct_Main0 * a0);
void sub_8116738(u8 taskId);
u32 sub_8116D10(struct UnkStruct_Group * group, s32 id);
void sub_8116D60(struct UnkStruct_Group * group, s32 id);
void sub_8116E1C(u8 taskId);
u8 sub_8116FE4(void);
void sub_8117990(void);
void sub_81179A4(void);
void sub_8117A0C(u8 taskId);
void sub_8117F20(u8 taskId);
void sub_81182DC(u8 taskId);
void sub_81186E0(u8 taskId);
u16 ReadAsU16(const u8 *data);
void sub_8119904(struct UnkStruct_URoom * uRoom);
bool32 sub_8119944(struct UnkStruct_URoom * uRoom);
void sub_81199FC(u8 taskId);
u8 sub_8119B94(void);
u8 sub_8119E84(struct UnkStruct_Main4 * arg0, struct UnkStruct_Main4 * arg1, u32 arg2);
bool32 sub_8119FB0(struct GFtgtGname * arg0, s16 arg1);
u8 sub_811A054(struct UnkStruct_Main4 * arg0, u32 arg1);
u8 sub_811A084(struct UnkStruct_Main4 * arg0, u32 arg1);
bool32 sub_811A0B4(const u8 * str);
bool32 sub_811A0E0(void);
bool8 PrintOnTextbox(u8 *textState, const u8 *str);
s8 sub_811A14C(u8 *dest, bool32 arg1);
s32 sub_811A218(u8 *arg0, u8 *arg1, u8 *arg2, const struct WindowTemplate * winTemplate, const struct ListMenuTemplate * menuTemplate);
s32 sub_811A2EC(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, const struct WindowTemplate * winTemplate, const struct ListMenuTemplate * menuTemplate, struct UnkStruct_Main0 * arg6);
void sub_811A3F8(void);
void sub_811A41C(void);
void sub_811A444(u8 windowId, u8 fontId, const u8 *str, u8 x, u8 y, u8 colorIdx);
void sub_811A5E4(struct UnkStruct_x20 * arg0, u8 count);
void sub_811A650(struct UnkStruct_Main4 * arg0, u8 count);
bool8 sub_811A694(struct UnkStruct_Shared * arg0, const struct UnkStruct_Shared * arg1);
bool32 sub_811A6DC(struct UnkStruct_Shared * arg0, struct UnkStruct_Shared * arg1);
u32 sub_811A748(struct UnkStruct_x20 * arg0, struct UnkStruct_x1C * arg1);
u8 sub_811A798(struct UnkStruct_x20 * arg0, struct UnkStruct_x1C * arg1, u8 arg2);
void sub_811A81C(u8 arg0, u8 arg1, u8 arg2, struct UnkStruct_x20 * arg3, u8 arg4, u8 id);
void sub_811A910(u8 arg0, u8 arg1, u8 arg2, struct UnkStruct_x20 * arg3, u8 arg4, u8 id);
bool32 sub_811A9B8(void);
u32 sub_811A9FC(s32 a0);
u32 sub_811AA24(struct UnkStruct_x20 * unkX20);
s32 sub_811AA5C(struct UnkStruct_Main0 * arg0, u8 arg1, u8 arg2, u32 playerGender);
s32 sub_811AD7C(struct UnkStruct_x20 * arg, s32 arg1);
s32 sub_811ADC4(s32 a0, struct UnkStruct_Main0 * a1);
s32 sub_811ADD0(u32 type, u32 species);
void sub_811AE68(u8 *dst, s32 arg1, u32 playerGender);
void sub_811AECC(u8 *dst, u8 arg1);
s32 sub_811AF6C(u8 *dst, u32 gender, u16 *arg2, struct UnkStruct_URoom * arg3);
bool32 sub_811B0A4(struct UnkStruct_URoom * arg0);
bool32 HasAtLeastTwoMonsOfLevel30OrLower(void);
void ResetUnionRoomTrade(struct UnionRoomTrade * trade);
bool32 RegisterTradeMonAndGetIsEgg(u32 monId, struct UnionRoomTrade * trade);
void RegisterTradeMon(u32 monId, struct UnionRoomTrade * trade);
u32 GetPartyPositionOfRegisteredMon(struct UnionRoomTrade * trade, u8 mpId);
void sub_811B258(bool32 a0);
void sub_811B298(void);
u8 sub_811B2A8(s32 a0);
u8 sub_811B2D8(struct UnkStruct_URoom * arg0);
void sub_811B31C(u8 *dest, struct UnkStruct_URoom * uRoom, bool8 gender);
u8 sub_811B754(struct UnkStruct_8019BA8 * ptr);
void sub_811BA78(void);

extern const u8 *const gUnknown_8456C74[];
extern const struct WindowTemplate gUnknown_8456CD0;
extern const u32 gUnknown_8456CD8[];
extern const struct WindowTemplate gUnknown_8456CFC;
extern const struct WindowTemplate gUnknown_8456D04;
extern const struct ListMenuTemplate gUnknown_8456D34;
extern const struct WindowTemplate gUnknown_8456D4C;
extern const struct WindowTemplate gUnknown_8456D54;
extern const struct ListMenuTemplate gUnknown_8456DDC;
extern const struct WindowTemplate gUnknown_8456DF4;
extern const struct ListMenuTemplate gUnknown_8456E1C;
extern const struct WindowTemplate gUnknown_8456E34;
extern const struct ListMenuTemplate gUnknown_8456E54;
extern const struct WindowTemplate gUnknown_8456E6C;
extern const struct ListMenuTemplate gUnknown_8456F04;
extern const struct WindowTemplate gUnknown_8456F1C;
extern const struct WindowTemplate gUnknown_8456F24;
extern const struct ListMenuTemplate gUnknown_8456F7C;
extern const struct UnkStruct_Shared gUnknown_8457034;
extern const u8 *const gUnknown_8457094[13];
extern const u8 gUnknown_84570C8[];
extern const u8 gUnknown_84571B0[];
extern const u8 gUnknown_84571B4[];
extern const u8 gUnknown_84571B8[];
extern const u8 gUnknown_84571E0[];
extern const u8 gUnknown_8457234[];
extern const u8 gUnknown_8457264[];
extern const u8 *const gUnknown_845742C[][5];
extern const u8 gUnknown_845747C[];
extern const u8 gUnknown_84574A0[];
extern const u8 gUnknown_84574C4[];
extern const u8 gUnknown_84574EC[];
extern const u8 gUnknown_8457514[];
extern const u8 gUnknown_8457530[];
extern const u8 gUnknown_8457554[];
extern const u8 *const gUnknown_8457608[];
extern const u8 gUnknown_8457610[];
extern const u8 *const gUnknown_845767C[];
extern const u8 gUnknown_84576AC[];
extern const u8 gUnknown_84576C4[];
extern const u8 gUnknown_8457700[];
extern const u8 gUnknown_845771C[];
extern const u8 *const gUnknown_8457754[];
extern const u8 gUnknown_845777C[];
extern const u8 gUnknown_84577BC[];
extern const u8 gUnknown_84577F8[];
extern const u8 *const gUnknown_8457838[];
extern const u8 gUnknown_84578BC[];
extern const u8 *const gUnknown_8457A34[];
extern const u8 *const gUnknown_8457B04[][2];
extern const u8 *const gUnknown_8457BCC[];
extern const u8 *const gUnknown_8457C20[];
extern const u8 gUnknown_8457C48[];
extern const u8 gUnknown_8457CA4[];
extern const u8 gUnknown_8457CF8[];
extern const u8 gUnknown_8457D44[];
extern const u8 gUnknown_8457DB8[];
extern const u8 gUnknown_8457E0C[];
extern const u8 gUnknown_8457E28[];
extern const u8 gUnknown_8457E44[];
extern const u8 gUnknown_8457E60[];
extern const u8 *const gUnknown_8457F80[][2];
extern const u8 gUnknown_8457F90[];
extern const u8 *const gUnknown_84580F4[][4];
extern const u8 *const gUnknown_8458230[][2][3];
extern const u8 *const gUnknown_8458314[];
extern const u8 *const gUnknown_84583B4[];
extern const u8 *const gUnknown_845842C[];
extern const u8 gUnknown_8458434[];
extern const u8 gUnknown_845847C[];
extern const u8 gUnknown_84584C0[];
extern const u8 *const gUnknown_8458548[];
extern const u8 *const gUnknown_84585E8[];
extern const u8 *const gUnknown_8458758[2][4];
extern const u8 *const gUnknown_84588BC[2][4];
extern const u8 *const gUnknown_84589AC[2][2];
extern const u8 *const gUnknown_8458A78[2][4];
extern const u8 gUnknown_8458A98[];
extern const u8 gUnknown_8458AB8[];
extern const u8 gUnknown_8458B44[];
extern const u8 gUnknown_8458CD4[];
extern const u8 gUnknown_8458D1C[];
extern const u8 gUnknown_8458D54[];
extern const u8 gUnknown_8458D78[];
extern const u8 gUnknown_8458D9C[];
extern const u8 gUnknown_8458DBC[];
extern const u8 gUnknown_8458DE8[];
extern const u8 gUnknown_8458E10[];
extern const u8 gUnknown_8458E70[];
extern const u8 gUnknown_8458ED0[];
extern const u8 gUnknown_8458F04[];
extern const u8 gUnknown_8458F9C[];
extern const u8 gUnknown_8458FBC[];
extern const u8 gUnknown_8458FC8[];
extern const u8 gUnknown_8458FE4[];
extern const u8 gUnknown_84591DC[];
extern const u8 *const gUnknown_84591B8[];
extern const u8 gUnknown_8459238[];
extern const u8 gUnknown_8459250[];
extern const u8 gUnknown_845928C[];
extern const u8 *const gUnknown_845933C[];
extern const u8 gUnknown_8459378[];
extern const u8 *const gUnknown_84594B0[];
extern const u8 gUnknown_84594C4[];
extern const u8 gUnknown_8459504[];
extern const u8 *const gUnknown_8459580[];
extern const u8 gUnknown_8459588[];

// These are functions in Emmerald but inlined in FireRed

#define sub_8018404(dest, arg1) ({                                       \
    StringCopy7(dest, (arg1).unk.playerName);                                   \
    ConvertInternationalString(dest, (arg1).unk.field_0.unk_00.unk_00_0); \
})

#define sub_8018404_2(dest, arg1) ({                                       \
    StringCopy(dest, (arg1).unk.playerName);                                   \
    ConvertInternationalString(dest, (arg1).unk.field_0.unk_00.unk_00_0); \
})

#define CopyTrainerCardData(dest, src, _version) ({ \
    (dest) = *((struct TrainerCard * )(src));        \
    (dest).version = _version;                      \
})

#define GetStringRightAlignXOffset(_fontId, _string, _maxWidth) ({ \
    u16 strWidth = GetStringWidth(_fontId, _string, 0);            \
    _maxWidth - strWidth;                                          \
})

void sub_811586C(u8 windowId, u8 arg1, u8 stringId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(1));
    switch (arg1 << 8)
    {
    case 0x200:
        sub_811A444(windowId, 2, gUnknown_845742C[0][stringId - 1], 0, 2, 0);
        break;
    case 0x400:
        sub_811A444(windowId, 2, gUnknown_845742C[1][stringId - 1], 0, 2, 0);
        break;
    case 0x2500:
        sub_811A444(windowId, 2, gUnknown_845742C[2][stringId - 1], 0, 2, 0);
        break;
    case 0x3500:
        sub_811A444(windowId, 2, gUnknown_845742C[3][stringId - 1], 0, 2, 0);
        break;
    }

    CopyWindowToVram(windowId, 2);
}

void sub_8115924(u8 windowId)
{
    u8 text[12];
    u8 text2[12];

    sub_811A444(windowId, 2, gSaveBlock2Ptr->playerName, 0, 2, 0);
    StringCopy(text2, gUnknown_84571B4);
    ConvertIntToDecimalStringN(text, ReadAsU16(gSaveBlock2Ptr->playerTrainerId), STR_CONV_MODE_LEADING_ZEROS, 5);
    StringAppend(text2, text);
    sub_811A444(windowId, 0, text2, 0, 0x10, 0);
}

void sub_811599C(u8 *dst, u8 caseId)
{
    switch (caseId)
    {
    case 1 ... 4:
    case 9 ... 11:
    case 21 ... 22:
        // UB: argument *dst isn't used, instead it always prints to gStringVar4
        StringExpandPlaceholders(gStringVar4, gUnknown_8457234);
        break;
    }
}

void TryBecomeLinkLeader(void)
{
    u8 taskId;
    struct UnkStruct_Leader * dataPtr;

    taskId = CreateTask(sub_8115A68, 0);
    gUnknown_203B05C.leader = dataPtr = (void*)(gTasks[taskId].data);
    gUnknown_3002024 = dataPtr;

    dataPtr->state = 0;
    dataPtr->textState = 0;
    gSpecialVar_Result = 0;
}

void sub_8115A68(u8 taskId)
{
    u32 id, val;
    struct UnkStruct_Leader * data = gUnknown_203B05C.leader;

    switch (data->state)
    {
    case 0:
        gUnknown_203B058 = gUnknown_8456CD8[gSpecialVar_0x8004];
        gUnknown_203B059 = gUnknown_8456CD8[gSpecialVar_0x8004] >> 8;
        sub_80FAF58(gUnknown_203B058, 0, 0);
        sub_800B1F4();
        OpenLink();
        sub_80FBB8C(gUnknown_203B059 & 0xF);
        data->state = 3;
        break;
    case 3:
        data->field_4 = AllocZeroed(0x70);
        data->field_0 = AllocZeroed(0xA0);
        data->field_8 = AllocZeroed(0xA0);
        sub_811A650(data->field_4, 4);
        sub_811A5E4(data->field_0->arr, 5);
        LinkRfu3_SetGnameUnameFromStaticBuffers(&data->field_0->arr[0].unk.field_0, data->field_0->arr[0].unk.playerName);
        data->field_0->arr[0].field_18 = 0;
        data->field_0->arr[0].field_1A_0 = 1;
        data->field_0->arr[0].field_1A_1 = 0;
        data->field_0->arr[0].field_1B = 0;
        data->field_17 = sub_811A054(data->field_4, 0xFF);
        data->field_10 = AddWindow(&gUnknown_8456CD0);
        data->listWindowId = AddWindow(&gUnknown_8456CFC);
        data->field_11 = AddWindow(&gUnknown_8456D04);

        FillWindowPixelBuffer(data->field_10, PIXEL_FILL(2));
        sub_811A444(data->field_10, 0, gUnknown_845747C, 8, 2, 4);
        PutWindowTilemap(data->field_10);
        CopyWindowToVram(data->field_10, 2);

        DrawStdWindowFrame(data->listWindowId, FALSE);
        gMultiuseListMenuTemplate = gUnknown_8456D34;
        gMultiuseListMenuTemplate.windowId = data->listWindowId;
        data->listTaskId = ListMenuInit(&gMultiuseListMenuTemplate, 0, 0);

        DrawStdWindowFrame(data->field_11, FALSE);
        PutWindowTilemap(data->field_11);
        CopyWindowToVram(data->field_11, 2);

        CopyBgTilemapBufferToVram(0);
        data->field_13 = 1;
        data->state = 4;
        break;
    case 4:
        StringCopy(gStringVar1, gUnknown_8456C74[gUnknown_203B058]);
        if ((gUnknown_203B059 >> 4) != 0)
        {
            if (data->field_13 > (gUnknown_203B059 >> 4) - 1 && (gUnknown_203B059 & 0xF) != 0)
                StringExpandPlaceholders(gStringVar4, gUnknown_8457264);
            else
                StringExpandPlaceholders(gStringVar4, gUnknown_8457234);
        }
        else
        {
            sub_811599C(gStringVar4, gUnknown_203B058);
        }

        sub_811586C(data->field_11, gUnknown_203B059, data->field_13);
        data->state = 5;
        break;
    case 5:
        if (PrintOnTextbox(&data->textState, gStringVar4))
            data->state = 6;
        break;
    case 6:
        sub_8116444(data, 7, 10);
        if (JOY_NEW(B_BUTTON))
        {
            if (data->field_13 == 1)
                data->state = 23;
            else if ((gUnknown_203B059 & 0xF0) != 0)
                data->state = 30;
            else
                data->state = 19;
        }
        if ((gUnknown_203B059 >> 4) != 0
            && data->field_13 > (gUnknown_203B059 >> 4) - 1
            && (gUnknown_203B059 & 0xF) != 0
            && sub_80FC1CC()
            && JOY_NEW(START_BUTTON))
        {
            data->state = 15;
            sub_80F8F5C();
        }
        if (data->state == 6 && sub_80FA5D4())
        {
            data->state = 9;
        }
        break;
    case 9:
        if (!sub_80FA5D4())
        {
            data->state = 6;
            data->field_13 = sub_81165E8(data->field_0);
        }
        break;
    case 10:
        id = ((gUnknown_203B058 & 0xF) == 2) ? 1 : 0;
        if (PrintOnTextbox(&data->textState, gUnknown_845767C[id]))
        {
            data->field_13 = sub_81165E8(data->field_0);
            RedrawListMenu(data->listTaskId);
            data->state = 4;
        }
        break;
    case 29:
        id = ((gUnknown_203B059 & 0xF) == 2) ? 0 : 1;
        if (PrintOnTextbox(&data->textState, gUnknown_845767C[id]))
        {
            data->state = 21;
        }
        break;
    case 7:
        if (PrintOnTextbox(&data->textState, gStringVar4))
        {
            data->state = 11;
        }
        break;
    case 11:
        switch (sub_811A14C(&data->textState, sub_80FA634(ReadAsU16(data->field_0->arr[data->field_13].unk.field_0.unk_00.playerTrainerId), data->field_0->arr[data->field_13].unk.playerName)))
        {
        case 0:
            LoadWirelessStatusIndicatorSpriteGfx();
            CreateWirelessStatusIndicatorSprite(0, 0);
            data->field_19 = 5;
            sub_80FA670(5, ReadAsU16(data->field_0->arr[data->field_13].unk.field_0.unk_00.playerTrainerId), data->field_0->arr[data->field_13].unk.playerName);
            data->state = 12;
            break;
        case 1:
        case -1:
            data->field_19 = 6;
            sub_80FA670(6, ReadAsU16(data->field_0->arr[data->field_13].unk.field_0.unk_00.playerTrainerId), data->field_0->arr[data->field_13].unk.playerName);
            data->state = 12;
            break;
        case -3:
            data->state = 9;
            break;
        }
        break;
    case 12:
        val = sub_80FA6FC(ReadAsU16(data->field_0->arr[data->field_13].unk.field_0.unk_00.playerTrainerId), data->field_0->arr[data->field_13].unk.playerName);
        if (val == 1)
        {
            if (data->field_19 == 5)
            {
                data->field_0->arr[data->field_13].field_1B = 0;
                RedrawListMenu(data->listTaskId);
                data->field_13++;
                if (data->field_13 == (gUnknown_203B059 & 0xF))
                {
                    if ((gUnknown_203B059 & 0xF0) != 0 || data->field_13 == 4)
                    {
                        data->state = 15;
                    }
                    else
                    {
                        sub_8018404(gStringVar1, data->field_0->arr[data->field_13 - 1]);
                        StringExpandPlaceholders(gStringVar4, gUnknown_8457554);
                        data->state = 13;
                    }

                    sub_80F8F5C();
                    sub_811586C(data->field_11, gUnknown_203B059, data->field_13);
                }
                else
                {
                    data->state = 4;
                }
            }
            else
            {
                sub_80FBD4C(data->field_0->arr[data->field_13].unk.playerName, ReadAsU16(data->field_0->arr[data->field_13].unk.field_0.unk_00.playerTrainerId));
                data->field_0->arr[data->field_13].field_1A_0 = 0;
                sub_81165E8(data->field_0);
                RedrawListMenu(data->listTaskId);
                data->state = 4;
            }

            data->field_19 = 0;
        }
        else if (val == 2)
        {
            sub_80FB9E4(0, 0);
            data->state = 4;
        }
        break;
    case 13:
        if (PrintOnTextbox(&data->textState, gStringVar4))
            data->state = 14;
        break;
    case 14:
        if (++data->field_E > 120)
            data->state = 17;
        break;
    case 15:
        if (PrintOnTextbox(&data->textState, gUnknown_8457514))
            data->state = 16;
        break;
    case 16:
        switch (sub_811A14C(&data->textState, FALSE))
        {
        case 0:
            data->state = 17;
            break;
        case 1:
        case -1:
            if ((gUnknown_203B059 & 0xF0) != 0)
                data->state = 30;
            else
                data->state = 19;
            break;
        }
        break;
    case 19:
        if (PrintOnTextbox(&data->textState, gUnknown_8457530))
            data->state = 20;
        break;
    case 20:
        switch (sub_811A14C(&data->textState, FALSE))
        {
        case 0:
            data->state = 23;
            break;
        case 1:
        case -1:
            if ((gUnknown_203B059 & 0xF0) != 0)
                data->state = 15;
            else if (data->field_13 == (gUnknown_203B059 & 0xF))
                data->state = 15;
            else
                data->state = 4;
            break;
        }
        break;
    case 17:
        if (!sub_8116444(data, 7, 23))
            data->state = 18;
        break;
    case 18:
        if (sub_80F8F40())
        {
            if (sub_80F8F7C(FALSE))
            {
                data->state = 26;
            }
        }
        else
        {
            data->state = 29;
            data->textState = 0;
        }
        break;
    case 30:
        if (PrintOnTextbox(&data->textState, gUnknown_8457610))
            data->state = 23;
        break;
    case 21:
    case 23:
        DestroyWirelessStatusIndicatorSprite();
        sub_80F8DC0();
        sub_81161E4(data);
        data->state++;
        break;
    case 24:
        EnableBothScriptContexts();
        DestroyTask(taskId);
        gSpecialVar_Result = 5;
        break;
    case 22:
        EnableBothScriptContexts();
        DestroyTask(taskId);
        gSpecialVar_Result = 8;
        break;
    case 26:
        if (sub_80FBA00())
        {
            data->state = 29;
        }
        else
        {
            if (gReceivedRemoteLinkPlayers != 0)
            {
                sub_80FAFE0(1);
                sub_8117990();
                sub_81161E4(data);
                DestroyTask(taskId);
            }
        }
        break;
    }
}

void sub_81161E4(struct UnkStruct_Leader * data)
{
    ClearWindowTilemap(data->field_11);
    ClearStdWindowAndFrame(data->field_11, FALSE);
    DestroyListMenuTask(data->listTaskId, 0, 0);
    ClearWindowTilemap(data->field_10);
    ClearStdWindowAndFrame(data->listWindowId, FALSE);
    CopyBgTilemapBufferToVram(0);
    RemoveWindow(data->field_11);
    RemoveWindow(data->listWindowId);
    RemoveWindow(data->field_10);
    DestroyTask(data->field_17);

    Free(data->field_8);
    Free(data->field_0);
    Free(data->field_4);
}

void sub_8116244(u8 *dst, u8 caseId)
{
    switch (caseId)
    {
    case 1:
    case 2:
    case 4:
        StringExpandPlaceholders(dst, gUnknown_84574A0);
        break;
    case 21:
    case 22:
        StringExpandPlaceholders(dst, gUnknown_84574C4);
        break;
    case 3:
    case 9:
    case 10:
    case 11:
        StringExpandPlaceholders(dst, gUnknown_84574EC);
        break;
    }
}

void sub_81162E0(u8 *dst, u8 caseId)
{
    switch (caseId)
    {
    case 65:
    case 68:
        StringExpandPlaceholders(dst, gUnknown_8457E28);
        break;
    case 69:
    case 72:
        StringExpandPlaceholders(dst, gUnknown_8457E44);
        break;
    }
}

void sub_811631C(u8 *dst, u8 caseId)
{
    switch (caseId)
    {
    case 1:
    case 2:
    case 4:
    case 21:
    case 22:
        StringExpandPlaceholders(dst, gUnknown_8459238);
        break;
    case 3:
    case 9:
    case 10:
    case 11:
        StringExpandPlaceholders(dst, gUnknown_8459250);
        break;
    }
}

void sub_81163B0(u8 *dst, u8 caseId)
{
    switch (caseId)
    {
    case 1:
    case 2:
    case 4:
    case 21:
    case 22:
        StringExpandPlaceholders(dst, gUnknown_84576AC);
        break;
    case 3:
    case 9:
    case 10:
    case 11:
        StringExpandPlaceholders(dst, gUnknown_84576C4);
        break;
    }
}

bool8 sub_8116444(struct UnkStruct_Leader * data, u32 arg1, u32 arg2)
{
    switch (sub_8116524(data->field_0))
    {
    case 1:
        PlaySE(SE_PC_LOGIN);
        RedrawListMenu(data->listTaskId);
        sub_8018404(gStringVar2, data->field_0->arr[data->field_13]);
        sub_8116244(gStringVar4, gUnknown_203B058);
        data->state = arg1;
        break;
    case 2:
        sub_80FB9E4(0, 0);
        RedrawListMenu(data->listTaskId);
        data->state = arg2;
        return TRUE;
    }

    return FALSE;
}

void sub_81164C8(u8 arg0, s32 id, u8 arg2)
{
    struct UnkStruct_Leader * data = gUnknown_203B05C.leader;
    u8 var = 0;

    switch (data->field_0->arr[id].field_1A_0)
    {
    case 1:
        if (data->field_0->arr[id].field_1B != 0)
            var = 2;
        break;
    case 2:
        var = 1;
        break;
    }

    sub_811A910(arg0, 0, arg2, &data->field_0->arr[id], var, id);
}

u8 sub_8116524(struct UnkStruct_Main0 * arg0)
{
    struct UnkStruct_Leader * data = gUnknown_203B05C.leader;
    u8 ret = 0;
    u8 i;
    s32 id;

    for (i = 1; i < 5; i++)
    {
        u16 var = data->field_0->arr[i].field_1A_0;
        if (var == 1)
        {
            id = sub_811A748(&data->field_0->arr[i], data->field_4->arr);
            if (id != 0xFF)
            {
                data->field_0->arr[i].unk = data->field_4->arr[id].unk0;
                data->field_0->arr[i].field_18 = var;
            }
            else
            {
                data->field_0->arr[i].field_1A_0 = 2;
                ret = 2;
            }
        }
    }

    for (id = 0; id < 4; id++)
        sub_811A798(data->field_0->arr, &data->field_4->arr[id], 5);

    if (ret != 2)
    {
        for (id = 0; id < 5; id++)
        {
            if (data->field_0->arr[id].field_1B != 0)
                ret = 1;
        }
    }

    return ret;
}

u8 sub_81165E8(struct UnkStruct_Main0 * arg0)
{
    struct UnkStruct_Leader * data = gUnknown_203B05C.leader;
    u8 copiedCount;
    s32 i;
    u8 ret;

    for (i = 0; i < 5; i++)
        data->field_8->arr[i] = data->field_0->arr[i];

    copiedCount = 0;
    for (i = 0; i < 5; i++)
    {
        if (data->field_8->arr[i].field_1A_0 == 1)
        {
            data->field_0->arr[copiedCount] = data->field_8->arr[i];
            copiedCount++;
        }
    }

    ret = copiedCount;
    for (; copiedCount < 5; copiedCount++)
    {
        data->field_0->arr[copiedCount].unk = gUnknown_8457034;
        data->field_0->arr[copiedCount].field_18 = 0;
        data->field_0->arr[copiedCount].field_1A_0 = 0;
        data->field_0->arr[copiedCount].field_1A_1 = 0;
        data->field_0->arr[copiedCount].field_1B = 0;
    }

    for (i = 0; i < 5; i++)
    {
        if (data->field_0->arr[i].field_1A_0 != 1)
            continue;
        if (data->field_0->arr[i].field_1B != 0x40)
            continue;

        ret = i;
        break;
    }

    return ret;
}

void TryJoinLinkGroup(void)
{
    u8 taskId;
    struct UnkStruct_Group * dataPtr;

    taskId = CreateTask(sub_8116738, 0);
    gUnknown_203B05C.group = dataPtr = (void*)(gTasks[taskId].data);
    gUnknown_3002028 = dataPtr;

    dataPtr->state = 0;
    dataPtr->textState = 0;
    gSpecialVar_Result = 0;
}

void sub_8116738(u8 taskId)
{
    s32 id;
    struct UnkStruct_Group * data = gUnknown_203B05C.group;

    switch (data->state)
    {
    case 0:
        sub_80FAF58(gUnknown_84570C8[gSpecialVar_0x8004], 0, 0);
        gUnknown_203B058 = gUnknown_84570C8[gSpecialVar_0x8004];
        sub_800B1F4();
        OpenLink();
        sub_80FBBD8();
        data->field_4 = AllocZeroed(0x70);
        data->field_0 = AllocZeroed(0x200);
        data->state = 1;
        break;
    case 1:
        if (PrintOnTextbox(&data->textState, gUnknown_84591B8[gSpecialVar_0x8004]))
            data->state = 2;
        break;
    case 2:
        sub_811A650(data->field_4, 4);
        sub_811A5E4(data->field_0->arr, 16);
        data->field_11 = sub_811A054(data->field_4, gSpecialVar_0x8004);
        data->field_C = AddWindow(&gUnknown_8456CD0);
        data->listWindowId = AddWindow(&gUnknown_8456D4C);
        data->field_D = AddWindow(&gUnknown_8456D54);

        FillWindowPixelBuffer(data->field_C, PIXEL_FILL(2));
        sub_811A444(data->field_C, 0, gUnknown_8458FC8, 8, 2, 4);
        PutWindowTilemap(data->field_C);
        CopyWindowToVram(data->field_C, 2);

        DrawStdWindowFrame(data->listWindowId, FALSE);
        gMultiuseListMenuTemplate = gUnknown_8456DDC;
        gMultiuseListMenuTemplate.windowId = data->listWindowId;
        data->listTaskId = ListMenuInit(&gMultiuseListMenuTemplate, 0, 0);

        DrawStdWindowFrame(data->field_D, FALSE);
        PutWindowTilemap(data->field_D);
        sub_8115924(data->field_D);
        CopyWindowToVram(data->field_D, 2);

        CopyBgTilemapBufferToVram(0);
        data->field_F = 0;
        data->state = 3;
        break;
    case 3:
        id = sub_8116FE4();
        switch (id)
        {
        case 1:
            PlaySE(SE_PC_LOGIN);
            RedrawListMenu(data->listTaskId);
            break;
        case 0:
            id = ListMenu_ProcessInput(data->listTaskId);
            if (JOY_NEW(A_BUTTON) && id != -1)
            {
                // this unused variable along with the assignment is needed to match
                u32 unusedVar;
                unusedVar  = data->field_0->arr[id].unk.field_0.unk_0a_0;

                if (data->field_0->arr[id].field_1A_0 == 1 && !data->field_0->arr[id].unk.field_0.unk_0a_7)
                {
                    u32 var = sub_8116D10(data, id);
                    if (var == 0)
                    {
                        sub_8116D60(data, id);
                        data->state = 5;
                        PlaySE(SE_PN_ON);
                    }
                    else
                    {
                        StringCopy(gStringVar4, gUnknown_8457608[var - 1]);
                        data->state = 18;
                        PlaySE(SE_PN_ON);
                    }
                }
                else
                {
                    PlaySE(SE_WALL_HIT);
                }
            }
            else if (JOY_NEW(B_BUTTON))
            {
                data->state = 10;
            }
            break;
        default:
            RedrawListMenu(data->listTaskId);
            break;
        }
        break;
    case 5:
        sub_811631C(gStringVar4, gUnknown_203B058);
        if (PrintOnTextbox(&data->textState, gStringVar4))
        {
            sub_8018404(gStringVar1, data->field_0->arr[data->field_F]);
            data->state = 6;
        }
        break;
    case 6:
        if (gReceivedRemoteLinkPlayers != 0)
        {
            gUnknown_203B058 = data->field_0->arr[data->field_F].unk.field_0.unk_0a_0;
            sub_80FB9E4(0, 0);
            switch (gUnknown_203B058)
            {
            case 1 ... 5:
            case 9 ... 11:
            case 13 ... 14:
            case 21 ... 22:
                data->state = 20;
                break;
            }
        }

        switch (sub_80FB9F4())
        {
        case 1:
            data->state = 12;
            break;
        case 2:
        case 6:
        case 9:
            data->state = 14;
            break;
        case 5:
            sub_81163B0(gStringVar4, gUnknown_203B058);
            if (PrintOnTextbox(&data->textState, gStringVar4))
            {
                sub_80FB9E4(7, 0);
                StringCopy(gStringVar1, gUnknown_8456C74[gUnknown_203B058]);
                StringExpandPlaceholders(gStringVar4, gUnknown_8457700);
            }
            break;
        case 7:
            if (data->field_15 > 0xF0)
            {
                if (PrintOnTextbox(&data->textState, gStringVar4))
                {
                    sub_80FB9E4(12, 0);
                    data->field_15 = 0;
                }
            }
            else
            {
                data->field_15++;
            }
            break;
        }

        if (!sub_80FB9F4() && JOY_NEW(B_BUTTON))
            data->state = 7;
        break;
    case 7:
        if (PrintOnTextbox(&data->textState, gUnknown_845771C))
            data->state = 8;
        break;
    case 8:
        switch (sub_811A14C(&data->textState, sub_80FB9F4()))
        {
        case 0:
            sub_80FA6BC();
            data->state = 9;
            RedrawListMenu(data->listTaskId);
            break;
        case 1:
        case -1:
            data->state = 5;
            RedrawListMenu(data->listTaskId);
            break;
        case -3:
            data->state = 6;
            RedrawListMenu(data->listTaskId);
            break;
        }
        break;
    case 9:
        if (sub_80FB9F4())
            data->state = 6;
        break;
    case 10:
    case 12:
    case 14:
    case 18:
    case 20:
        ClearWindowTilemap(data->field_D);
        ClearStdWindowAndFrame(data->field_D, FALSE);
        DestroyListMenuTask(data->listTaskId, 0, 0);
        ClearWindowTilemap(data->field_C);
        ClearStdWindowAndFrame(data->listWindowId, FALSE);
        CopyBgTilemapBufferToVram(0);
        RemoveWindow(data->field_D);
        RemoveWindow(data->listWindowId);
        RemoveWindow(data->field_C);
        DestroyTask(data->field_11);
        Free(data->field_0);
        Free(data->field_4);
        data->state++;
        break;
    case 13:
        DestroyWirelessStatusIndicatorSprite();
        if (PrintOnTextbox(&data->textState, gUnknown_8457754[sub_80FB9F4()]))
        {
            gSpecialVar_Result = 6;
            data->state = 23;
        }
        break;
    case 11:
        DestroyWirelessStatusIndicatorSprite();
        gSpecialVar_Result = 5;
        data->state = 23;
        break;
    case 15:
        DestroyWirelessStatusIndicatorSprite();
        if (PrintOnTextbox(&data->textState, gUnknown_8457754[sub_80FB9F4()]))
        {
            gSpecialVar_Result = 8;
            data->state = 23;
        }
        break;
    case 19:
        if (PrintOnTextbox(&data->textState, gStringVar4))
        {
            gSpecialVar_Result = 8;
            data->state = 23;
        }
        break;
    case 23:
        DestroyTask(taskId);
        sub_811A41C();
        sub_80F8DC0();
        break;
    case 21:
        sub_8117990();
        DestroyTask(taskId);
        break;
    }
}

u32 sub_8116D10(struct UnkStruct_Group * arg0, s32 id)
{
    struct UnkStruct_x20 * structPtr = &arg0->field_0->arr[id];

    if (gUnknown_203B058 == 4 && structPtr->unk.field_0.unk_00.unk_01_2 != VERSION_FIRE_RED && structPtr->unk.field_0.unk_00.unk_01_2 != VERSION_LEAF_GREEN)
    {
        if (!(gSaveBlock2Ptr->specialSaveWarpFlags & CHAMPION_SAVEWARP))
            return 1;
        else if (structPtr->unk.field_0.unk_00.isChampion)
            return 0;
    }
    else
    {
        return 0;
    }

    return 2;
}

void sub_8116D60(struct UnkStruct_Group * data, s32 id)
{
    data->field_F = id;
    LoadWirelessStatusIndicatorSpriteGfx();
    CreateWirelessStatusIndicatorSprite(0, 0);
    RedrawListMenu(data->listTaskId);
    sub_8018404(gStringVar1, data->field_0->arr[data->field_F]);
    sub_80FB008(gUnknown_84570C8[gSpecialVar_0x8004], 0, 1);
    sub_80FBF54(data->field_0->arr[data->field_F].unk.playerName, ReadAsU16(data->field_0->arr[data->field_F].unk.field_0.unk_00.playerTrainerId));
}

u8 sub_8116DE0(void)
{
    u8 taskId;
    struct UnkStruct_Group * dataPtr;

    taskId = CreateTask(sub_8116E1C, 0);
    gUnknown_203B05C.group = dataPtr = (void*)(gTasks[taskId].data);

    dataPtr->state = 0;
    dataPtr->textState = 0;

    gUnknown_3002028 = dataPtr;

    return taskId;
}

void sub_8116E1C(u8 taskId)
{
    struct UnkStruct_Group * data = gUnknown_203B05C.group;

    switch (data->state)
    {
    case 0:
        sub_80FAF58(0, 0, 0);
        sub_800B1F4();
        OpenLink();
        sub_80FBBD8();
        sub_80FB128(TRUE);
        data->field_4 = AllocZeroed(0x70);
        data->field_0 = AllocZeroed(0x200);
        data->state = 2;
        break;
    case 2:
        sub_811A650(data->field_4, 4);
        sub_811A5E4(data->field_0->arr, 16);
        data->field_11 = sub_811A054(data->field_4, 0xFF);
        data->field_F = 0;
        data->state = 3;
        break;
    case 3:
        if (sub_8116FE4() == 1)
            PlaySE(SE_PC_LOGIN);
        if (gTasks[taskId].data[15] == 0xFF)
            data->state = 10;
        break;
    case 10:
        DestroyTask(data->field_11);
        Free(data->field_0);
        Free(data->field_4);
        sub_80F8DC0();
        data->state++;
        break;
    case 11:
        sub_80F8DC0();
        DestroyTask(taskId);
        break;
    }
}

bool32 sub_8116F28(u32 arg0, u32 id)
{
    if (id == 0xFF)
        return TRUE;

    if (id <= NELEMS(gUnknown_8457094)) // UB: <= may access data outside the array
    {
        const u8 *bytes = gUnknown_8457094[id];

        while ((*(bytes) != 0xFF))
        {
            if ((*bytes) == arg0)
                return TRUE;
            bytes++;
        }
    }

    return FALSE;
}

u8 sub_8116F5C(struct UnkStruct_Group * data, u32 id)
{
    if (data->field_0->arr[id].field_1A_0 == 1)
    {
        if (data->field_0->arr[id].unk.field_0.unk_0a_7)
            return 3;
        else if (data->field_0->arr[id].field_1A_1 != 0)
            return 1;
        else if (data->field_0->arr[id].field_1B != 0)
            return 2;
    }

    return 0;
}

void sub_8116F94(u8 arg0, s32 id, u8 arg2)
{
    struct UnkStruct_Group * data = gUnknown_203B05C.group;
    u8 var = sub_8116F5C(data, id);

    sub_811A81C(arg0, 8, arg2, &data->field_0->arr[id], var, id);
}

u8 sub_8116FE4(void)
{
    struct UnkStruct_Group * data = gUnknown_203B05C.group;
    u8 ret = 0;
    u8 i;
    s32 id;

    for (i = 0; i < 16; i++)
    {
        if (data->field_0->arr[i].field_1A_0 != 0)
        {
            id = sub_811A748(&data->field_0->arr[i], data->field_4->arr);
            if (id != 0xFF)
            {
                if (data->field_0->arr[i].field_1A_0 == 1)
                {
                    if (sub_811A6DC(&data->field_0->arr[i].unk, &data->field_4->arr[id].unk0))
                    {
                        data->field_0->arr[i].unk = data->field_4->arr[id].unk0;
                        data->field_0->arr[i].field_1B = 0x40;
                        ret = 1;
                    }
                    else
                    {
                        if (data->field_0->arr[i].field_1B != 0)
                        {
                            data->field_0->arr[i].field_1B--;
                            if (data->field_0->arr[i].field_1B == 0)
                                ret = 2;
                        }
                    }
                }
                else
                {
                    data->field_0->arr[i].field_1A_0 = 1;
                    data->field_0->arr[i].field_1B = 0x40;
                    ret = 1;
                }

                data->field_0->arr[i].field_18 = 0;
            }
            else
            {
                if (data->field_0->arr[i].field_1A_0 != 2)
                {
                    data->field_0->arr[i].field_18++;
                    if (data->field_0->arr[i].field_18 >= 300)
                    {
                        data->field_0->arr[i].field_1A_0 = 2;
                        ret = 2;
                    }
                }
            }
        }
    }

    for (id = 0; id < 4; id++)
    {
        if (sub_811A798(data->field_0->arr, &data->field_4->arr[id], 16) != 0xFF)
            ret = 1;
    }

    return ret;
}

void sub_8117100(u8 taskId)
{
    CB2_ReturnFromLinkTrade();
    DestroyTask(taskId);
}

u8 sub_8117118(void)
{
    u8 taskId = CreateTask(sub_8117100, 0);

    return taskId;
}

void sub_8117130(u8 taskId)
{
    u32 monId = GetPartyPositionOfRegisteredMon(&sUnionRoomTrade, GetMultiplayerId());

    switch (gTasks[taskId].data[0])
    {
    case 0:
        gTasks[taskId].data[0]++;
        SendBlock(0, &gPlayerParty[monId], sizeof(struct Pokemon));
        break;
    case 1:
        if (GetBlockReceivedStatus() == 3)
        {
            gEnemyParty[0] = *(struct Pokemon*)(gBlockRecvBuffer[GetMultiplayerId() ^ 1]);
            IncrementGameStat(GAME_STAT_NUM_UNION_ROOM_BATTLES);
            ResetBlockReceivedFlags();
            gTasks[taskId].data[0]++;
        }
        break;
    case 2:
        memcpy(gBlockSendBuffer, gSaveBlock1Ptr->mail, sizeof(struct MailStruct) * PARTY_SIZE + 4);
        if (SendBlock(0, gBlockSendBuffer, sizeof(struct MailStruct) * PARTY_SIZE + 4))
            gTasks[taskId].data[0]++;
        break;
    case 3:
        if (GetBlockReceivedStatus() == 3)
        {
            memcpy(gLinkPartnerMail, gBlockRecvBuffer[GetMultiplayerId() ^ 1], sizeof(struct MailStruct) * PARTY_SIZE);
            ResetBlockReceivedFlags();
            gSelectedTradeMonPositions[TRADE_PLAYER] = monId;
            gSelectedTradeMonPositions[TRADE_PARTNER] = PARTY_SIZE;
            gMain.savedCallback = CB2_ReturnToField;
            SetMainCallback2(CB2_InitTradeAnim_LinkTrade);
            ResetUnionRoomTrade(&sUnionRoomTrade);
            DestroyTask(taskId);
        }
        break;
    }
}

void sub_8117280(u8 taskId)
{
    switch (gTasks[taskId].data[0])
    {
    case 0:
        if (GetMultiplayerId() == 0)
            sub_800A474(2);
        gTasks[taskId].data[0]++;
        break;
    case 1:
        if (GetBlockReceivedStatus() == sub_800A8D4())
        {
            s32 i;
            u16 *recvBuff;

            for (i = 0; i < GetLinkPlayerCount(); i++)
            {
                recvBuff = gBlockRecvBuffer[i];
                CopyTrainerCardData(gTrainerCards[i], recvBuff, gLinkPlayers[i].version);
            }

            if (GetLinkPlayerCount() == 2)
            {
                recvBuff = gBlockRecvBuffer[GetMultiplayerId() ^ 1];
                sub_81446D0(recvBuff[48]);
            }
            else
            {
                sub_81446C4();
            }

            ResetBlockReceivedFlags();
            DestroyTask(taskId);
        }
        break;
    }
}

void sub_8117354(void)
{
    switch (gMain.state)
    {
    case 0:
        CreateTask(sub_8117280, 5);
        gMain.state++;
        break;
    case 1:
        if (!FuncIsActiveTask(sub_8117280))
            ShowTrainerCardInLink(GetMultiplayerId() ^ 1, CB2_ReturnToField);
        break;
    }

    RunTasks();
    RunTextPrinters();
    AnimateSprites();
    BuildOamBuffer();
}

void sub_81173C0(u16 battleFlags)
{
    HealPlayerParty();
    SavePlayerParty();
    LoadPlayerBag();
    gLinkPlayers[0].linkType = LINKTYPE_BATTLE;
    gLinkPlayers[GetMultiplayerId()].id = GetMultiplayerId();
    gLinkPlayers[GetMultiplayerId() ^ 1].id = GetMultiplayerId() ^ 1;
    gMain.savedCallback = sub_8081668;
    gBattleTypeFlags = battleFlags;
    PlayBattleBGM();
}

void sub_8117440(u16 linkService, u16 x, u16 y)
{
    VarSet(VAR_CABLE_CLUB_STATE, linkService);
    SetWarpDestination(gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum, -1, x, y);
    SetDynamicWarpWithCoords(0, gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum, -1, x, y);
    WarpIntoMap();
}

void sub_81174B4(s8 mapGroup, s8 mapNum, s32 x, s32 y, u16 linkService)
{
    gSpecialVar_0x8004 = linkService;
    VarSet(VAR_CABLE_CLUB_STATE, linkService);
    gFieldLinkPlayerCount = GetLinkPlayerCount();
    gLocalLinkPlayerId = GetMultiplayerId();
    SetCableClubWarp();
    SetWarpDestination(mapGroup, mapNum, -1, x, y);
    WarpIntoMap();
}

void sub_8117534(void)
{
    switch (gMain.state)
    {
    case 0:
        CreateTask(sub_8117280, 5);
        gMain.state++;
        break;
    case 1:
        if (!FuncIsActiveTask(sub_8117280))
            SetMainCallback2(sub_8056788);
        break;
    }

    RunTasks();
    RunTextPrinters();
    AnimateSprites();
    BuildOamBuffer();
}

void sub_8117594(void *arg0, bool32 arg1)
{
    TrainerCard_GenerateCardForLinkPlayer((struct TrainerCard * )arg0);
    if (arg1)
        *((u16 *)(arg0 + sizeof(struct TrainerCard))) = GetWonderCardFlagID();
    else
        *((u16 *)(arg0 + sizeof(struct TrainerCard))) = 0;
}

void sub_81175BC(u8 taskId)
{
    sub_81446C4();
    switch (gUnknown_203B058)
    {
    case 1 ... 4:
    case 9 ... 11:
    case 13:
    case 14:
        RecordMixTrainerNames();
        break;
    }

    switch (gUnknown_203B058)
    {
    case 65:
    case 81:
        CleanupOverworldWindowsAndTilemaps();
        gMain.savedCallback = sub_811C1C8;
        InitChooseHalfPartyForBattle(2);
        break;
    case 1:
        CleanupOverworldWindowsAndTilemaps();
        sub_8117594(gBlockSendBuffer, TRUE);
        HealPlayerParty();
        SavePlayerParty();
        LoadPlayerBag();
        sub_81174B4(MAP_GROUP(BATTLE_COLOSSEUM_2P), MAP_NUM(BATTLE_COLOSSEUM_2P), 6, 8, USING_SINGLE_BATTLE);
        SetMainCallback2(sub_8117534);
        break;
    case 2:
        CleanupOverworldWindowsAndTilemaps();
        HealPlayerParty();
        SavePlayerParty();
        LoadPlayerBag();
        sub_8117594(gBlockSendBuffer, TRUE);
        sub_81174B4(MAP_GROUP(BATTLE_COLOSSEUM_2P), MAP_NUM(BATTLE_COLOSSEUM_2P), 6, 8, USING_DOUBLE_BATTLE);
        SetMainCallback2(sub_8117534);
        break;
    case 3:
        CleanupOverworldWindowsAndTilemaps();
        HealPlayerParty();
        SavePlayerParty();
        LoadPlayerBag();
        sub_8117594(gBlockSendBuffer, TRUE);
        sub_81174B4(MAP_GROUP(BATTLE_COLOSSEUM_4P), MAP_NUM(BATTLE_COLOSSEUM_4P), 5, 8, USING_MULTI_BATTLE);
        SetMainCallback2(sub_8117534);
        break;
    case 4:
        sub_8117594(gBlockSendBuffer, TRUE);
        CleanupOverworldWindowsAndTilemaps();
        sub_81174B4(MAP_GROUP(TRADE_CENTER), MAP_NUM(TRADE_CENTER), 5, 8, USING_TRADE_CENTER);
        SetMainCallback2(sub_8117534);
        break;
    case 68:
        CreateTask(sub_8117130, 0);
        break;
    case 5:
    case 69:
        if (GetMultiplayerId() == 0)
        {
            sub_80F8CFC();
        }
        else
        {
            sub_80F8D14();
            sub_80FAF58(69, 0, 1);
        }
        sub_8128420();
        break;
    case 8:
    case 72:
        sub_8117594(gBlockSendBuffer, FALSE);
        SetMainCallback2(sub_8117354);
        break;
    case 9:
        sub_8117440(USING_MINIGAME, 5, 1);
        sub_8147AA8(GetCursorSelectionMonId(), CB2_LoadMap);
        break;
    case 10:
        sub_8117440(USING_BERRY_CRUSH, 9, 1);
        sub_814B754(CB2_LoadMap);
        break;
    case 11:
        sub_8117440(USING_MINIGAME, 5, 1);
        sub_81507FC(GetCursorSelectionMonId(), CB2_LoadMap);
        break;
    }

    DestroyTask(taskId);
    gSpecialVar_Result = 1;
    ScriptContext2_Disable();
}

void sub_8117900(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    u16 *sendBuff = (u16*)(gBlockSendBuffer);

    switch (data[0])
    {
    case 0:
        gSpecialVar_Result = 1;
        EnableBothScriptContexts();
        data[0]++;
        break;
    case 1:
        if (!ScriptContext1_IsScriptSetUp())
        {
            FadeScreen(FADE_TO_BLACK, 0);
            data[0]++;
        }
        break;
    case 2:
        if (!gPaletteFade.active)
        {
            sub_800AB9C();
            data[0]++;
        }
        break;
    case 3:
        if (IsLinkTaskFinished())
        {
            DestroyTask(taskId);
            sub_81179A4();
        }
        break;
    }
}

void sub_8117990(void)
{
    CreateTask(sub_8117900, 0);
}

void sub_81179A4(void)
{
    u8 taskId = CreateTask(sub_81175BC, 0);
    gTasks[taskId].data[0] = 0;
}

void MEvent_CreateTask_Leader(u32 arg0)
{
    u8 taskId;
    struct UnkStruct_Leader * dataPtr;

    taskId = CreateTask(sub_8117A0C, 0);
    gUnknown_203B05C.leader = dataPtr = (void*)(gTasks[taskId].data);

    dataPtr->state = 0;
    dataPtr->textState = 0;
    dataPtr->field_18 = arg0;
    gSpecialVar_Result = 0;
}

void sub_8117A0C(u8 taskId)
{
    struct UnkStruct_Leader * data = gUnknown_203B05C.leader;
    struct WindowTemplate winTemplate;
    s32 val;

    switch (data->state)
    {
    case 0:
        gUnknown_203B058 = data->field_18;
        gUnknown_203B059 = 2;
        sub_80FAF58(data->field_18, 0, 0);
        sub_80FAF74(FALSE, FALSE);
        sub_800B1F4();
        OpenLink();
        sub_80FBB8C(2);
        data->state = 1;
        break;
    case 1:
        data->field_4 = AllocZeroed(0x70);
        data->field_0 = AllocZeroed(0xA0);
        data->field_8 = AllocZeroed(0xA0);
        sub_811A650(data->field_4, 4);
        sub_811A5E4(data->field_0->arr, 5);
        LinkRfu3_SetGnameUnameFromStaticBuffers(&data->field_0->arr[0].unk.field_0, data->field_0->arr[0].unk.playerName);
        data->field_0->arr[0].field_18 = 0;
        data->field_0->arr[0].field_1A_0 = 1;
        data->field_0->arr[0].field_1A_1 = 0;
        data->field_0->arr[0].field_1B = 0;
        data->field_17 = sub_811A054(data->field_4, 0xFF);

        winTemplate = gUnknown_8456CFC;
        winTemplate.baseBlock = GetMysteryGiftBaseBlock();
        data->listWindowId = AddWindow(&winTemplate);
        MG_DrawTextBorder(data->listWindowId);
        gMultiuseListMenuTemplate = gUnknown_8456D34;
        gMultiuseListMenuTemplate.windowId = data->listWindowId;
        data->listTaskId = ListMenuInit(&gMultiuseListMenuTemplate, 0, 0);

        CopyBgTilemapBufferToVram(0);
        data->field_13 = 1;
        data->state = 2;
        break;
    case 2:
        StringCopy(gStringVar1, gUnknown_8456C74[gUnknown_203B058]);
        sub_811599C(gStringVar4, gUnknown_203B058);
        data->state = 3;
        break;
    case 3:
        AddTextPrinterToWindow1(gStringVar4);
        data->state = 4;
        break;
    case 4:
        sub_8116444(data, 5, 6);
        if (JOY_NEW(B_BUTTON))
        {
            data->state = 13;
            DestroyWirelessStatusIndicatorSprite();
        }
        break;
    case 6:
        if (MG_PrintTextOnWindow1AndWaitButton(&data->textState, gUnknown_84577F8))
        {
            data->field_13 = sub_81165E8(data->field_0);
            RedrawListMenu(data->listTaskId);
            data->state = 2;
        }
        break;
    case 5:
        data->state = 7;
        break;
    case 7:
        switch (mevent_message_print_and_prompt_yes_no(&data->textState, (u16 *)&data->field_14, FALSE, gStringVar4))
        {
        case 0:
            LoadWirelessStatusIndicatorSpriteGfx();
            CreateWirelessStatusIndicatorSprite(0, 0);
            data->field_0->arr[data->field_13].field_1B = 0;
            RedrawListMenu(data->listTaskId);
            data->field_19 = 5;
            sub_80FA670(5, ReadAsU16(data->field_0->arr[data->field_13].unk.field_0.unk_00.playerTrainerId), data->field_0->arr[data->field_13].unk.playerName);
            data->state = 8;
            break;
        case 1:
        case -1:
            data->field_19 = 6;
            sub_80FA670(6, ReadAsU16(data->field_0->arr[data->field_13].unk.field_0.unk_00.playerTrainerId), data->field_0->arr[data->field_13].unk.playerName);
            data->state = 8;
            break;
        }
        break;
    case 8:
        val = sub_80FA6FC(ReadAsU16(data->field_0->arr[data->field_13].unk.field_0.unk_00.playerTrainerId), data->field_0->arr[data->field_13].unk.playerName);
        if (val == 1)
        {
            if (data->field_19 == 5)
            {
                data->field_0->arr[data->field_13].field_1B = 0;
                RedrawListMenu(data->listTaskId);
                data->field_13++;
                sub_8018404(gStringVar1, data->field_0->arr[data->field_13 - 1]);
                StringExpandPlaceholders(gStringVar4, gUnknown_8457554);
                data->state = 9;
                sub_80F8F5C();
            }
            else
            {
                sub_80FBD4C(data->field_0->arr[data->field_13].unk.playerName, ReadAsU16(data->field_0->arr[data->field_13].unk.field_0.unk_00.playerTrainerId));
                data->field_0->arr[data->field_13].field_1A_0 = 0;
                sub_81165E8(data->field_0);
                RedrawListMenu(data->listTaskId);
                data->state = 2;
            }

            data->field_19 = 0;
        }
        else if (val == 2)
        {
            sub_80FB9E4(0, 0);
            data->state = 2;
        }
        break;
    case 9:
        AddTextPrinterToWindow1(gStringVar4);
        data->state = 10;
        break;
    case 10:
        if (++data->field_E > 120)
            data->state = 11;
        break;
    case 11:
        if (!sub_8116444(data, 5, 6))
            data->state = 12;
        break;
    case 12:
        if (sub_80F8F40())
        {
            sub_80F8F7C(FALSE);
            data->state = 15;
        }
        else
        {
            data->state = 6;
        }
        break;
    case 13:
        DestroyWirelessStatusIndicatorSprite();
        sub_80F8DC0();
        DestroyListMenuTask(data->listTaskId, 0, 0);
        CopyBgTilemapBufferToVram(0);
        RemoveWindow(data->listWindowId);
        DestroyTask(data->field_17);
        Free(data->field_8);
        Free(data->field_0);
        Free(data->field_4);
        data->state++;
        break;
    case 14:
        if (MG_PrintTextOnWindow1AndWaitButton(&data->textState, gUnknown_84571B8))
        {
            DestroyTask(taskId);
            gSpecialVar_Result = 5;
        }
        break;
    case 15:
        if (sub_80FB9F4() == 1 || sub_80FB9F4() == 2)
        {
            data->state = 13;
        }
        else if (gReceivedRemoteLinkPlayers != 0)
        {
            sub_80FAFE0(1);
            data->state++;
        }
        break;
    case 16:
        DestroyListMenuTask(data->listTaskId, 0, 0);
        CopyBgTilemapBufferToVram(0);
        RemoveWindow(data->listWindowId);
        DestroyTask(data->field_17);
        Free(data->field_8);
        Free(data->field_0);
        Free(data->field_4);
        sub_800AB9C();
        data->state++;
        break;
    case 17:
        if (IsLinkTaskFinished())
            DestroyTask(taskId);
        break;
    }
}

void MEvent_CreateTask_CardOrNewsWithFriend(u32 arg0)
{
    u8 taskId;
    struct UnkStruct_Group * dataPtr;

    taskId = CreateTask(sub_8117F20, 0);
    gUnknown_203B05C.group = dataPtr = (void*)(gTasks[taskId].data);
    gUnknown_3002028 = dataPtr;

    dataPtr->state = 0;
    dataPtr->textState = 0;
    dataPtr->field_12 = arg0 - 21;
    gSpecialVar_Result = 0;
}

void sub_8117F20(u8 taskId)
{
    s32 id;
    struct WindowTemplate winTemplate1, winTemplate2;
    struct UnkStruct_Group * data = gUnknown_203B05C.group;

    switch (data->state)
    {
    case 0:
        sub_80FAF58(data->field_12 + 21, 0, 0);
        sub_800B1F4();
        OpenLink();
        sub_80FBBD8();
        data->field_4 = AllocZeroed(0x70);
        data->field_0 = AllocZeroed(0x200);
        data->state = 1;
        break;
    case 1:
        AddTextPrinterToWindow1(gUnknown_8458FE4);
        data->state = 2;
        break;
    case 2:
        sub_811A650(data->field_4, 4);
        sub_811A5E4(data->field_0->arr, 16);
        data->field_11 = sub_811A054(data->field_4, data->field_12 + 7);

        winTemplate1 = gUnknown_8456D4C;
        winTemplate1.baseBlock = GetMysteryGiftBaseBlock();
        data->listWindowId = AddWindow(&winTemplate1);

        data->field_D = AddWindow(&gUnknown_8456D54);

        MG_DrawTextBorder(data->listWindowId);
        gMultiuseListMenuTemplate = gUnknown_8456DDC;
        gMultiuseListMenuTemplate.windowId = data->listWindowId;
        data->listTaskId = ListMenuInit(&gMultiuseListMenuTemplate, 0, 0);

        MG_DrawTextBorder(data->field_D);
        FillWindowPixelBuffer(data->field_D, PIXEL_FILL(1));
        PutWindowTilemap(data->field_D);
        sub_8115924(data->field_D);
        CopyWindowToVram(data->field_D, 2);

        CopyBgTilemapBufferToVram(0);
        data->field_F = 0;
        data->state = 3;
        break;
    case 3:
        id = sub_8116FE4();
        switch (id)
        {
        case 1:
            PlaySE(SE_PC_LOGIN);
        default:
            RedrawListMenu(data->listTaskId);
            break;
        case 0:
            id = ListMenu_ProcessInput(data->listTaskId);
            if (JOY_NEW(A_BUTTON) && id != -1)
            {
                // this unused variable along with the assignment is needed to match
                u32 unusedVar;
                unusedVar  = data->field_0->arr[id].unk.field_0.unk_0a_0;

                if (data->field_0->arr[id].field_1A_0 == 1 && !data->field_0->arr[id].unk.field_0.unk_0a_7)
                {
                    data->field_F = id;
                    LoadWirelessStatusIndicatorSpriteGfx();
                    CreateWirelessStatusIndicatorSprite(0, 0);
                    RedrawListMenu(data->listTaskId);
                    sub_8018404_2(gStringVar1, data->field_0->arr[data->field_F]);
                    sub_80FBF54(data->field_0->arr[data->field_F].unk.playerName, ReadAsU16(data->field_0->arr[data->field_F].unk.field_0.unk_00.playerTrainerId));
                    PlaySE(SE_PN_ON);
                    data->state = 4;
                }
                else
                {
                    PlaySE(SE_WALL_HIT);
                }
            }
            else if (JOY_NEW(B_BUTTON))
            {
                data->state = 6;
            }
            break;
        }
        break;
    case 4:
        AddTextPrinterToWindow1(gUnknown_8459238);
        sub_8018404_2(gStringVar1, data->field_0->arr[data->field_F]);
        data->state = 5;
        break;
    case 5:
        if (gReceivedRemoteLinkPlayers != 0)
        {
            gUnknown_203B058 = data->field_0->arr[data->field_F].unk.field_0.unk_0a_0;
            data->state = 10;
        }

        switch (sub_80FB9F4())
        {
        case 1:
        case 2:
        case 6:
            data->state = 8;
            break;
        case 5:
            AddTextPrinterToWindow1(gUnknown_84576AC);
            sub_80FB9E4(0, 0);
            break;
        }
        break;
    case 6:
    case 8:
    case 10:
        DestroyListMenuTask(data->listTaskId, 0, 0);
        CopyBgTilemapBufferToVram(0);
        RemoveWindow(data->field_D);
        RemoveWindow(data->listWindowId);
        DestroyTask(data->field_11);
        Free(data->field_0);
        Free(data->field_4);
        data->state++;
        break;
    case 9:
        if (MG_PrintTextOnWindow1AndWaitButton(&data->textState, gUnknown_8457838[sub_80FB9F4()]))
        {
            DestroyWirelessStatusIndicatorSprite();
            DestroyTask(taskId);
            sub_80F8DC0();
            gSpecialVar_Result = 5;
        }
        break;
    case 7:
        DestroyWirelessStatusIndicatorSprite();
        AddTextPrinterToWindow1(gUnknown_84571B8);
        DestroyTask(taskId);
        sub_80F8DC0();
        gSpecialVar_Result = 5;
        break;
    case 11:
        data->state++;
        sub_800AB9C();
        break;
    case 12:
        if (IsLinkTaskFinished())
            DestroyTask(taskId);
        break;
    }
}

void MEvent_CreateTask_CardOrNewsOverWireless(u32 arg0)
{
    u8 taskId;
    struct UnkStruct_Group * dataPtr;

    taskId = CreateTask(sub_81182DC, 0);
    gUnknown_203B05C.group = dataPtr = (void*)(gTasks[taskId].data);
    gUnknown_3002028 = dataPtr;

    dataPtr->state = 0;
    dataPtr->textState = 0;
    dataPtr->field_12 = arg0 - 21;
    gSpecialVar_Result = 0;
}

void sub_81182DC(u8 taskId)
{
    s32 id;
    struct WindowTemplate winTemplate;
    struct UnkStruct_Group * data = gUnknown_203B05C.group;

    switch (data->state)
    {
    case 0:
        sub_80FAF58(0, 0, 0);
        sub_800B1F4();
        OpenLink();
        sub_80FBBD8();
        data->field_4 = AllocZeroed(0x70);
        data->field_0 = AllocZeroed(0x200);
        data->state = 1;
        break;
    case 1:
        AddTextPrinterToWindow1(gUnknown_84591DC);
        data->state = 2;
        break;
    case 2:
        sub_811A650(data->field_4, 4);
        sub_811A5E4(data->field_0->arr, 16);
        data->field_11 = sub_811A084(data->field_4, data->field_12 + 7);

        if (data->field_13 != 0)
        {
            winTemplate = gUnknown_8456D4C;
            winTemplate.baseBlock = GetMysteryGiftBaseBlock();
            data->listWindowId = AddWindow(&winTemplate);

            MG_DrawTextBorder(data->listWindowId);
            gMultiuseListMenuTemplate = gUnknown_8456DDC;
            gMultiuseListMenuTemplate.windowId = data->listWindowId;
            data->listTaskId = ListMenuInit(&gMultiuseListMenuTemplate, 0, 0);

            CopyBgTilemapBufferToVram(0);
        }

        data->field_F = 0;
        data->state = 3;
        break;
    case 3:
        id = sub_8116FE4();
        switch (id)
        {
        case 1:
            PlaySE(SE_PC_LOGIN);
        default:
            if (data->field_13 != 0)
                RedrawListMenu(data->listTaskId);
            break;
        case 0:
            if (data->field_13 != 0)
                id = ListMenu_ProcessInput(data->listTaskId);
            if (data->field_14 > 120)
            {
                if (data->field_0->arr[0].field_1A_0 == 1 && !data->field_0->arr[0].unk.field_0.unk_0a_7)
                {
                    if (sub_8119FB0(&data->field_0->arr[0].unk.field_0, data->field_12 + 7))
                    {
                        data->field_F = 0;
                        data->field_14 = 0;
                        LoadWirelessStatusIndicatorSpriteGfx();
                        CreateWirelessStatusIndicatorSprite(0, 0);
                        sub_80FBF54(data->field_0->arr[0].unk.playerName, ReadAsU16(data->field_0->arr[0].unk.field_0.unk_00.playerTrainerId));
                        PlaySE(SE_PN_ON);
                        data->state = 4;
                    }
                    else
                    {
                        PlaySE(SE_BOO);
                        data->state = 10;
                    }
                }
            }
            else if (JOY_NEW(B_BUTTON))
            {
                data->state = 6;
                data->field_14 = 0;
            }
            data->field_14++;
            break;
        }
        break;
    case 4:
        AddTextPrinterToWindow1(gUnknown_845928C);
        sub_8018404_2(gStringVar1, data->field_0->arr[data->field_F]);
        data->state = 5;
        break;
    case 5:
        if (gReceivedRemoteLinkPlayers != 0)
        {
            gUnknown_203B058 = data->field_0->arr[data->field_F].unk.field_0.unk_0a_0;
            data->state = 12;
        }

        switch (sub_80FB9F4())
        {
        case 1:
        case 2:
        case 6:
            data->state = 8;
            break;
        case 5:
            AddTextPrinterToWindow1(gUnknown_845777C);
            sub_80FB9E4(0, 0);
            break;
        }
        break;
    case 6:
    case 8:
    case 10:
    case 12:
        if (data->field_13 != 0)
        {
            DestroyListMenuTask(data->listTaskId, 0, 0);
            CopyBgTilemapBufferToVram(0);
            RemoveWindow(data->listWindowId);
        }
        DestroyTask(data->field_11);
        Free(data->field_0);
        Free(data->field_4);
        data->state++;
        break;
    case 9:
        if (MG_PrintTextOnWindow1AndWaitButton(&data->textState, gUnknown_84577BC))
        {
            DestroyWirelessStatusIndicatorSprite();
            DestroyTask(taskId);
            sub_80F8DC0();
            gSpecialVar_Result = 5;
        }
        break;
    case 7:
        if (MG_PrintTextOnWindow1AndWaitButton(&data->textState, gUnknown_84571E0))
        {
            DestroyWirelessStatusIndicatorSprite();
            DestroyTask(taskId);
            sub_80F8DC0();
            gSpecialVar_Result = 5;
        }
        break;
    case 11:
        if (MG_PrintTextOnWindow1AndWaitButton(&data->textState, gUnknown_845933C[data->field_12]))
        {
            DestroyWirelessStatusIndicatorSprite();
            DestroyTask(taskId);
            sub_80F8DC0();
            gSpecialVar_Result = 5;
        }
        break;
    case 13:
        data->state++;
        sub_800AB9C();
        break;
    case 14:
        if (IsLinkTaskFinished())
            DestroyTask(taskId);
        break;
    }
}

void UnionRoomSpecial(void)
{
    struct UnkStruct_URoom * dataPtr;

    ClearAndInitHostRFUtgtGname();
    CreateTask(sub_81186E0, 10);

    // dumb line needed to match
    gUnknown_203B05C.uRoom = gUnknown_203B05C.uRoom;

    dataPtr = AllocZeroed(sizeof(*gUnknown_203B05C.uRoom));
    gUnknown_203B05C.uRoom = dataPtr;
    gUnknown_300202C = dataPtr;

    dataPtr->state = 0;
    dataPtr->textState = 0;
    dataPtr->field_10 = 0;
    dataPtr->field_12 = 0;

    gSpecialVar_Result = 0;
    sub_8107D38(0xD0, 1);
}

u16 ReadAsU16(const u8 *ptr)
{
    return (ptr[1] << 8) | (ptr[0]);
}

void sub_8118664(u32 nextState, const u8 *src)
{
    struct UnkStruct_URoom * data = gUnknown_203B05C.uRoom;

    data->state = 8;
    data->stateAfterPrint = nextState;
    if (src != gStringVar4)
        StringExpandPlaceholders(gStringVar4, src);
}

void sub_811868C(const u8 *src)
{
    struct UnkStruct_URoom * data = gUnknown_203B05C.uRoom;

    data->state = 26;
    if (src != gStringVar4)
        StringExpandPlaceholders(gStringVar4, src);
}

void sub_81186B0(struct UnkStruct_URoom * data)
{
    memcpy(&gDecompressionBuffer[0x3F00], data->field_0, sizeof(*data->field_0));
}

void sub_81186C8(struct UnkStruct_URoom * data)
{
    memcpy(data->field_0, &gDecompressionBuffer[0x3F00], sizeof(*data->field_0));
}

void sub_81186E0(u8 taskId)
{
    u32 id = 0;
    s32 var5 = 0;
    s32 playerGender = 0;
    struct UnkStruct_URoom * data = gUnknown_203B05C.uRoom;
    s16 *taskData = gTasks[taskId].data;

    switch (data->state)
    {
    case 0:
        data->field_4 = AllocZeroed(0x70);
        data->field_C = AllocZeroed(0x70);
        data->field_0 = AllocZeroed(0x100);
        data->field_8 = AllocZeroed(0x20);
        sub_811A5E4(data->field_0->arr, 8);
        gUnknown_203B058 = 0x40;
        data->field_20 = sub_8119E84(data->field_C, data->field_4, 9);
        sub_811B754(data->field_A0);
        sub_811BB68();
        data->state = 1;
        break;
    case 1:
        sub_811BAAC(data->spriteIds, taskData[0]);
        if (++taskData[0] == 8)
            data->state = 2;
        break;
    case 2:
        sub_80FAF58(0x40, 0, 0);
        sub_80FAFA0(sUnionRoomTrade.type, sUnionRoomTrade.playerSpecies, sUnionRoomTrade.playerLevel);
        sub_800B1F4();
        OpenLink();
        sub_80FBC00();
        sub_811A5E4(&data->field_8->arr[0], 1);
        sub_811A650(data->field_4, 4);
        sub_811A650(data->field_C, 4);
        gSpecialVar_Result = 0;
        data->state = 3;
        break;
    case 3:
        if ((GetPartyMenuType() == PARTY_MENU_TYPE_UNION_ROOM_REGISTER
             || GetPartyMenuType() == PARTY_MENU_TYPE_UNION_ROOM_TRADE)
            && sUnionRoomTrade.field_0 != 0)
        {
            id = GetCursorSelectionMonId();
            switch (sUnionRoomTrade.field_0)
            {
            case 1:
                sub_80FB008(0x54, 0, 1);
                if (id >= PARTY_SIZE)
                {
                    ResetUnionRoomTrade(&sUnionRoomTrade);
                    sub_80FAFA0(0, 0, 0);
                    sub_811868C(gUnknown_8458D54);
                }
                else if (!RegisterTradeMonAndGetIsEgg(GetCursorSelectionMonId(), &sUnionRoomTrade))
                {
                    sub_8118664(0x34, gUnknown_8458CD4);
                }
                else
                {
                    data->state = 55;
                }
                break;
            case 2:
                sub_81186C8(data);
                taskData[1] = sUnionRoomTrade.field_8;
                if (id >= PARTY_SIZE)
                {
                    sub_811868C(gUnknown_8458D9C);
                }
                else
                {
                    sub_80FB008(0x54, 0, 1);
                    gUnknown_203B058 = 0x44;
                    RegisterTradeMon(GetCursorSelectionMonId(), &sUnionRoomTrade);
                    data->state = 51;
                }
                break;
            }
            sUnionRoomTrade.field_0 = 0;
        }
        else
        {
            data->state = 4;
        }
        break;
    case 4:
        if (gSpecialVar_Result != 0)
        {
            if (gSpecialVar_Result == 9)
            {
                sub_80FB008(0x54, 0, 1);
                PlaySE(SE_PC_LOGIN);
                StringCopy(gStringVar1, gSaveBlock2Ptr->playerName);
                data->state = 42;
                gSpecialVar_Result = 0;
            }
            else if (gSpecialVar_Result == 11)
            {
                sub_80FB008(0x54, 0, 1);
                data->state = 23;
                gSpecialVar_Result = 0;
            }
            else
            {
                taskData[0] = 0;
                taskData[1] = gSpecialVar_Result - 1;
                data->state = 24;
                gSpecialVar_Result = 0;
            }
        }
        else if (ScriptContext2_IsEnabled() != TRUE)
        {
            if (JOY_NEW(A_BUTTON))
            {
                if (sub_811BF00(data->field_0, &taskData[0], &taskData[1], data->spriteIds))
                {
                    PlaySE(SE_SELECT);
                    sub_811B298();
                    data->state = 24;
                    break;
                }
                else if (sub_811A9B8())
                {
                    sub_80FB008(0x54, 0, 1);
                    PlaySE(SE_PC_LOGIN);
                    sub_811B298();
                    StringCopy(gStringVar1, gSaveBlock2Ptr->playerName);
                    data->state = 45;
                    break;
                }
            }

            switch (sub_8119B94())
            {
            case 1:
                PlaySE(SE_TOY_C);
            case 2:
                sub_811BECC(data);
                break;
            case 4:
                data->state = 11;
                sub_811B298();
                sub_80FAFA0(0, 0, 0);
                sub_80FB008(0x53, sub_811B2D8(data), 0);
                break;
            }
            sub_811BEDC(data);
        }
        break;
    case 23:
        if (!FuncIsActiveTask(Task_StartMenuHandleInput))
        {
            sub_80FB008(0x40, 0, 0);
            data->state = 4;
        }
        break;
    case 24:
        sub_811A0E0();
        playerGender = sub_811ADC4(taskData[1], data->field_0);
        sub_80FB008(0x54, 0, 1);
        switch (sub_811AA5C(data->field_0, taskData[0], taskData[1], playerGender))
        {
        case 0:
            data->state = 26;
            break;
        case 1:
            sub_80FC114(data->field_0->arr[taskData[1]].unk.playerName, &data->field_0->arr[taskData[1]].unk.field_0, gUnknown_203B058);
            data->field_12 = id; // Should be just 0, but won't match any other way.
            data->state = 25;
            break;
        case 2:
            sub_8118664(0x13, gStringVar4);
            break;
        }
        break;
    case 25:
        sub_811A0E0();
        switch (sub_80FB9F4())
        {
        case 4:
            sub_811B258(TRUE);
            data->state = 4;
            break;
        case 1:
        case 2:
            if (sub_80FBB0C() == TRUE)
                sub_811868C(gUnknown_8457F90);
            else
                sub_8118664(30, gUnknown_8457F90);

            gUnknown_203B058 = 0x40;
            break;
        }

        if (gReceivedRemoteLinkPlayers != 0)
        {
            sub_8117594(gBlockSendBuffer, TRUE);
            CreateTask(sub_8117280, 5);
            data->state = 38;
        }
        break;
    case 38:
        if (!FuncIsActiveTask(sub_8117280))
        {
            if (gUnknown_203B058 == 0x44)
                sub_8118664(31, gUnknown_84578BC);
            else
                data->state = 5;
        }
        break;
    case 30:
        if (gReceivedRemoteLinkPlayers == 0)
        {
            sub_811B258(FALSE);
            sub_811C028(taskData[0], taskData[1], data->field_0);
            data->state = 2;
        }
        break;
    case 5:
        id = sub_811AA24(&data->field_0->arr[taskData[1]]);
        playerGender = sub_811ADC4(taskData[1], data->field_0);
        sub_8118664(6, gUnknown_8457B04[id][playerGender]);
        break;
    case 6:
        var5 = sub_811A218(&data->textState, &data->field_1B, &data->field_1C, &gUnknown_8456DF4, &gUnknown_8456E1C);
        if (var5 != -1)
        {
            if (gReceivedRemoteLinkPlayers == 0)
            {
                data->state = 28;
            }
            else
            {
                data->field_98 = 0;
                playerGender = sub_811ADC4(taskData[1], data->field_0);
                if (var5 == -2 || var5 == 0x40)
                {
                    data->field_4C[0] = 0x40;
                    sub_80F9E2C(data->field_4C);
                    StringCopy(gStringVar4, gUnknown_845842C[gLinkPlayers[0].gender]);
                    data->state = 32;
                }
                else
                {
                    gUnknown_203B058 = var5;
                    gUnknown_203B059 = (u32)(var5) >> 8;
                    if (gUnknown_203B058 == 0x41 && !HasAtLeastTwoMonsOfLevel30OrLower())
                    {
                        sub_8118664(5, gUnknown_845847C);
                    }
                    else
                    {
                        data->field_4C[0] = gUnknown_203B058 | 0x40;
                        sub_80F9E2C(data->field_4C);
                        data->state = 27;
                    }
                }
            }
        }
        break;
    case 28:
        StringCopy(gStringVar4, gUnknown_8458434);
        data->state = 36;
        break;
    case 27:
        sub_811B0A4(data);
        playerGender = sub_811ADC4(taskData[1], data->field_0);
        id = sub_811A9FC(data->field_4C[0] & 0x3F);
        if (PrintOnTextbox(&data->textState, gUnknown_84580F4[playerGender][id]))
        {
            taskData[3] = 0;
            data->state = 29;
        }
        break;
    case 32:
        sub_800AAC0();
        data->state = 36;
        break;
    case 31:
        data->field_4C[0] = 0x44;
        data->field_4C[1] = sUnionRoomTrade.species;
        data->field_4C[2] = sUnionRoomTrade.level;
        sub_80F9E2C(data->field_4C);
        data->state = 29;
        break;
    case 29:
        if (gReceivedRemoteLinkPlayers == 0)
        {
            StringCopy(gStringVar4, gUnknown_8458434);
            data->state = 28;
        }
        else
        {
            sub_811B0A4(data);
            if (data->field_98 == 0x51)
            {
                if (gUnknown_203B058 == 8)
                {
                    sub_811B31C(gStringVar4, data, FALSE);
                    data->state = 40;
                }
                else
                {
                    data->state = 13;
                }
            }
            else if (data->field_98 == 0x52)
            {
                data->state = 32;
                sub_811AE68(gStringVar4, gUnknown_203B058 | 0x40, gLinkPlayers[0].gender);
                gUnknown_203B058 = 0;
            }
        }
        break;

    case 7:
        id = sub_811AA24(&data->field_0->arr[taskData[1]]);
        playerGender = sub_811ADC4(taskData[1], data->field_0);
        sub_8118664(6, gUnknown_8457B04[id][playerGender]);
        break;
    case 40:
        if (PrintOnTextbox(&data->textState, gStringVar4))
        {
            data->state = 41;
            sub_800AB9C();
            data->field_98 = 0;
            data->field_9A[0] = 0;
        }
        break;
    case 41:
        if (IsLinkTaskFinished())
        {
            if (GetMultiplayerId() == 0)
            {
                StringCopy(gStringVar1, gLinkPlayers[GetMultiplayerId() ^ 1].name);
                id = sub_80FD338(gLinkPlayers[1].trainerId, gLinkPlayers[1].name);
                StringExpandPlaceholders(gStringVar4, gUnknown_8457C20[id]);
                data->state = 33;
            }
            else
            {
                data->state = 7;
            }
        }
        break;
    case 19:
        switch (sub_811A14C(&data->textState, FALSE))
        {
        case 0:
            CopyBgTilemapBufferToVram(0);
            gUnknown_203B058 = 0x45;
            sub_80FB008(0x45, 0, 1);
            sub_80FC114(data->field_0->arr[taskData[1]].unk.playerName, &data->field_0->arr[taskData[1]].unk.field_0, gUnknown_203B058);
            data->field_12 = taskData[1];
            data->state = 20;
            taskData[3] = 0;
            break;
        case 1:
        case -1:
            playerGender = sub_811ADC4(taskData[1], data->field_0);
            sub_811868C(gUnknown_8458548[playerGender]);
            break;
        }
        break;
    case 20:
        if (++taskData[2] > 60)
        {
            data->state = 21;
            taskData[2] = 0;
        }
        break;
    case 21:
        switch (sub_80FB9F4())
        {
        case 4:
            sub_811B258(TRUE);
            data->state = 4;
            break;
        case 1:
        case 2:
            playerGender = sub_811ADC4(taskData[1], data->field_0);
            sub_80FB008(0x54, 0, 1);
            if (sub_80FBB0C() == TRUE)
                sub_811868C(gUnknown_84585E8[playerGender]);
            else
                sub_8118664(30, gUnknown_84585E8[playerGender]);
            break;
        case 3:
            data->state = 22;
            break;
        }
        taskData[3]++;
        break;
    case 22:
        if (sub_80FBA00())
        {
            playerGender = sub_811ADC4(taskData[1], data->field_0);
            sub_80FB008(0x54, 0, 1);
            if (sub_80FBB0C() == TRUE)
                sub_811868C(gUnknown_84585E8[playerGender]);
            else
                sub_8118664(30, gUnknown_84585E8[playerGender]);
        }
        if (gReceivedRemoteLinkPlayers != 0)
            data->state = 16;
        break;
    case 11:
        PlaySE(SE_PINPON);
        sub_80F8FA0();
        data->state = 12;
        data->field_9A[0] = 0;
        break;
    case 12:
        if (sub_80FBA00())
        {
            sub_811B258(FALSE);
            data->state = 2;
        }
        else if (gReceivedRemoteLinkPlayers != 0)
        {
            sub_8117594(gBlockSendBuffer, TRUE);
            CreateTask(sub_8117280, 5);
            data->state = 39;
        }
        break;
    case 39:
        sub_8119904(data);
        if (!FuncIsActiveTask(sub_8117280))
        {
            data->state = 33;
            StringCopy(gStringVar1, gLinkPlayers[1].name);
            id = sub_80FD338(gLinkPlayers[1].trainerId, gLinkPlayers[1].name);
            StringExpandPlaceholders(gStringVar4, gUnknown_8457BCC[id]);
        }
        break;
    case 33:
        sub_8119904(data);
        if (PrintOnTextbox(&data->textState, gStringVar4))
            data->state = 34;
        break;
    case 34:
        sub_8119904(data);
        if (sub_8119944(data) && JOY_NEW(B_BUTTON))
        {
            sub_80FBD6C(1);
            StringCopy(gStringVar4, gUnknown_8457E60);
            data->state = 36;
        }
        break;
    case 35:
        sub_8118664(9, gStringVar4);
        break;
    case 9:
        switch (sub_811A14C(&data->textState, FALSE))
        {
        case 0:
            data->field_4C[0] = 0x51;
            if (gUnknown_203B058 == 0x45)
                sub_80FB008(gUnknown_203B058 | 0x40, sub_811B2A8(1), 0);
            else
                sub_80FB008(gUnknown_203B058 | 0x40, sub_811B2A8(1), 1);

            data->field_8->arr[0].field_1B = 0;
            taskData[3] = 0;
            if (gUnknown_203B058 == 0x41)
            {
                if (!HasAtLeastTwoMonsOfLevel30OrLower())
                {
                    data->field_4C[0] = 0x52;
                    sub_80F9E2C(data->field_4C);
                    data->state = 10;
                    StringCopy(gStringVar4, gUnknown_84584C0);
                }
                else
                {
                    sub_80F9E2C(data->field_4C);
                    data->state = 13;
                }
            }
            else if (gUnknown_203B058 == 0x48)
            {
                sub_80F9E2C(data->field_4C);
                sub_811B31C(gStringVar4, data, 1);
                data->state = 40;
            }
            else
            {
                sub_80F9E2C(data->field_4C);
                data->state = 13;
            }
            break;
        case 1:
        case -1:
            data->field_4C[0] = 0x52;
            sub_80F9E2C(data->field_4C);
            data->state = 10;
            sub_81162E0(gStringVar4, gUnknown_203B058);
            break;
        }
        break;
    case 10:
        sub_800AAC0();
        data->state = 36;
        break;
    case 36:
        if (gReceivedRemoteLinkPlayers == 0)
        {
            gUnknown_203B058 = 0x40;
            sub_8118664(0x25, gStringVar4);
            memset(data->field_4C, 0, sizeof(data->field_4C));
            data->field_9A[0] = 0;
            data->field_98 = 0;
        }
        break;
    case 37:
        data->state = 2;
        sub_811B258(FALSE);
        break;
    case 13:
        sub_811AECC(gStringVar4, gUnknown_203B058 | 0x40);
        sub_8118664(14, gStringVar4);
        break;
    case 14:
        sub_800AB9C();
        data->state = 15;
        break;
    case 15:
        if (IsLinkTaskFinished())
            data->state = 16;
        break;
    case 16:
        Free(data->field_8);
        Free(data->field_0);
        Free(data->field_C);
        Free(data->field_4);
        DestroyTask(data->field_20);
        sub_811BB40(data->spriteIds);
        data->state = 17;
        break;
    case 17:
        BeginNormalPaletteFade(-1, 0, 0, 0x10, RGB_BLACK);
        data->state = 18;
        break;
    case 18:
        if (!UpdatePaletteFade())
        {
            sub_811BA78();
            DestroyTask(taskId);
            Free(gUnknown_203B05C.uRoom);
            sub_81179A4();
        }
        break;
    case 42:
        if (sub_80F9800()->species == SPECIES_NONE)
        {
            data->state = 43;
        }
        else
        {
            if (sub_80F9800()->species == SPECIES_EGG)
            {
                StringCopy(gStringVar4, gUnknown_8458DE8);
            }
            else
            {
                StringCopy(gStringVar1, gSpeciesNames[sub_80F9800()->species]);
                ConvertIntToDecimalStringN(gStringVar2, sub_80F9800()->level, STR_CONV_MODE_LEFT_ALIGN, 3);
                StringExpandPlaceholders(gStringVar4, gUnknown_8458DBC);
            }
            sub_8118664(44, gStringVar4);
        }
        break;
    case 43:
        if (PrintOnTextbox(&data->textState, gUnknown_8458AB8))
            data->state = 47;
        break;
    case 47:
        var5 = sub_811A218(&data->textState, &data->field_1D, &data->field_1E, &gUnknown_8456E34, &gUnknown_8456E54);
        if (var5 != -1)
        {
            if (var5 == -2 || var5 == 3)
            {
                data->state = 4;
                sub_811B258(TRUE);
            }
            else
            {
                switch (var5)
                {
                case 1: // REGISTER
                    sub_8118664(53, gUnknown_8458D1C);
                    break;
                case 2: // INFO
                    sub_8118664(47, gUnknown_8458B44);
                    break;
                }
            }
            DestroyHelpMessageWindow_();
        }
        break;
    case 53:
        BeginNormalPaletteFade(-1, 0, 0, 0x10, RGB_BLACK);
        data->state = 54;
        break;
    case 54:
        if (!gPaletteFade.active)
        {
            sUnionRoomTrade.field_0 = 1;
            gFieldCallback = sub_807DCE4;
            ChooseMonForTradingBoard(PARTY_MENU_TYPE_UNION_ROOM_REGISTER, CB2_ReturnToField);
        }
        break;
    case 52:
        var5 = sub_811A218(&data->textState, &data->field_1D, &data->field_1E, &gUnknown_8456E6C, &gUnknown_8456F04);
        if (var5 != -1)
        {
            switch (var5)
            {
            case -2:
            case 18:
                ResetUnionRoomTrade(&sUnionRoomTrade);
                sub_80FAFA0(0, 0, 0);
                sub_811868C(gUnknown_8458D54);
                break;
            default:
                sUnionRoomTrade.type = var5;
                data->state = 55;
                break;
            }
        }
        break;
    case 55:
        sub_80FAFA0(sUnionRoomTrade.type, sUnionRoomTrade.playerSpecies, sUnionRoomTrade.playerLevel);
        sub_811868C(gUnknown_8458D78);
        break;
    case 44:
        switch (sub_811A14C(&data->textState, FALSE))
        {
        case 0:
            data->state = 56;
            break;
        case 1:
        case -1:
            sub_811B258(TRUE);
            data->state = 4;
            break;
        }
        break;
    case 56:
        if (PrintOnTextbox(&data->textState, gUnknown_8458E10))
        {
            sub_80FAFA0(0, 0, 0);
            ResetUnionRoomTrade(&sUnionRoomTrade);
            sub_811B258(TRUE);
            data->state = 4;
        }
        break;
    case 45:
        if (PrintOnTextbox(&data->textState, gUnknown_8458A98))
            data->state = 46;
        break;
    case 46:
        sub_811A3F8();
        data->state = 48;
        break;
    case 48:
        var5 = sub_811A2EC(&data->textState, &data->field_1D, &data->field_4A, &data->field_1E, &gUnknown_8456F24, &gUnknown_8456F7C, data->field_0);
        if (var5 != -1)
        {
            switch (var5)
            {
            case -2:
            case 8:
                sub_811B258(TRUE);
                DestroyHelpMessageWindow_();
                data->state = 4;
                break;
            default:
                switch (sub_811ADD0(data->field_0->arr[var5].unk.field_0.type, data->field_0->arr[var5].unk.field_0.species))
                {
                case 0:
                    sub_8018404_2(gStringVar1, data->field_0->arr[var5]);
                    sub_8118664(49, gUnknown_8458E70);
                    taskData[1] = var5;
                    break;
                case 1:
                    sub_8018404_2(gStringVar1, data->field_0->arr[var5]);
                    StringCopy(gStringVar2, gTypeNames[data->field_0->arr[var5].unk.field_0.type]);
                    sub_8118664(46, gUnknown_8458ED0);
                    break;
                case 2:
                    sub_8018404_2(gStringVar1, data->field_0->arr[var5]);
                    StringCopy(gStringVar2, gTypeNames[data->field_0->arr[var5].unk.field_0.type]);
                    sub_8118664(46, gUnknown_8458F04);
                    break;
                }
                break;
            }
        }
        break;
    case 49:
        switch (sub_811A14C(&data->textState, FALSE))
        {
        case 0:
            data->state = 50;
            break;
        case -1:
        case 1:
            sub_811B258(TRUE);
            data->state = 4;
            break;
        }
        break;
    case 50:
        if (PrintOnTextbox(&data->textState, gUnknown_8458D1C))
        {
            sUnionRoomTrade.field_0 = 2;
            memcpy(&gUnknown_203B064, &data->field_0->arr[taskData[1]].unk.field_0.unk_00, sizeof(gUnknown_203B064));
            gUnionRoomRequestedMonType = data->field_0->arr[taskData[1]].unk.field_0.type;
            gUnionRoomOfferedSpecies = data->field_0->arr[taskData[1]].unk.field_0.species;
            gFieldCallback = sub_807DCE4;
            ChooseMonForTradingBoard(PARTY_MENU_TYPE_UNION_ROOM_TRADE, CB2_ReturnToField);
            sub_81186B0(data);
            sUnionRoomTrade.field_8 = taskData[1];
        }
        break;
    case 51:
        gUnknown_203B058 = 0x44;
        sub_80FC114(data->field_0->arr[taskData[1]].unk.playerName, &data->field_0->arr[taskData[1]].unk.field_0, 0x44);
        sub_8018404_2(gStringVar1, data->field_0->arr[taskData[1]]);
        sub_811A0B4(gUnknown_8457A34[2]);
        data->state = 25;
        break;
    case 26:
        if (PrintOnTextbox(&data->textState, gStringVar4))
        {
            sub_811B258(TRUE);
            sub_811C028(taskData[0], taskData[1], data->field_0);
            data->state = 4;
        }
        break;
    case 8:
        if (PrintOnTextbox(&data->textState, gStringVar4))
            data->state = data->stateAfterPrint;
        break;
    }
}

void var_800D_set_xB(void)
{
    if (InUnionRoom() == TRUE)
        gSpecialVar_Result = 11;
}

void sub_8119904(struct UnkStruct_URoom * arg0)
{
    if (gRecvCmds[1][1] != 0 && (gRecvCmds[1][0] & 0xFF00) == 0x2F00)
    {
        arg0->field_9A[0] = gRecvCmds[1][1];
        if (gRecvCmds[1][1] == 0x44)
        {
            arg0->field_9A[1] = gRecvCmds[1][2];
            arg0->field_9A[2] = gRecvCmds[1][3];
        }
    }
}

bool32 sub_8119944(struct UnkStruct_URoom * arg0)
{
    if (arg0->field_9A[0] != 0)
    {
        s32 var = sub_811AF6C(gStringVar4, gLinkPlayers[1].gender, &arg0->field_9A[0], arg0);
        if (var == 0)
        {
            return TRUE;
        }
        else if (var == 1)
        {
            arg0->state = 35;
            gUnknown_203B058 = arg0->field_9A[0];
            return FALSE;
        }
        else if (var == 2)
        {
            arg0->state = 36;
            sub_800AAC0();
            return FALSE;
        }
    }

    return TRUE;
}

void InitUnionRoom(void)
{
    struct UnkStruct_URoom * ptr;

    sUnionRoomPlayerName[0] = EOS;
    if (gQuestLogState == 2 || gQuestLogState == 3)
        return;
    CreateTask(sub_81199FC, 0);
    gUnknown_203B05C.uRoom = gUnknown_203B05C.uRoom; // Needed to match.
    gUnknown_203B05C.uRoom = ptr = AllocZeroed(sizeof(struct UnkStruct_URoom));
    gUnknown_300202C = gUnknown_203B05C.uRoom;
    ptr->state = 0;
    ptr->textState = 0;
    ptr->field_10 = 0;
    ptr->field_12 = 0;
    sUnionRoomPlayerName[0] = EOS;
}

void sub_81199FC(u8 taskId)
{
    s32 i;
    u8 text[32];
    struct UnkStruct_URoom * structPtr = gUnknown_203B05C.uRoom;

    switch (structPtr->state)
    {
    case 0:
        structPtr->state = 1;
        break;
    case 1:
        sub_80FAF58(0xC, 0, 0);
        sub_800B1F4();
        OpenLink();
        sub_80FBC00();
        sub_80FB128(1);
        structPtr->state = 2;
        break;
    case 2:
        structPtr->field_4 = AllocZeroed(0x70);
        sub_811A650(structPtr->field_4, 4);
        structPtr->field_C = AllocZeroed(0x70);
        sub_811A650(structPtr->field_C, 4);
        structPtr->field_0 = AllocZeroed(0x100);
        sub_811A5E4(structPtr->field_0->arr, 8);
        structPtr->field_8 = AllocZeroed(0x20);
        sub_811A5E4(&structPtr->field_8->arr[0], 1);
        structPtr->field_20 = sub_8119E84(structPtr->field_C, structPtr->field_4, 10);
        structPtr->state = 3;
        break;
    case 3:
        switch (sub_8119B94())
        {
        case 1:
        case 2:
            if (sUnionRoomPlayerName[0] == EOS)
            {
                for (i = 0; i < PLAYER_NAME_LENGTH; i++)
                {
                    if (structPtr->field_0->arr[i].field_1A_0 == 1)
                    {
                        sub_8018404_2(text, structPtr->field_0->arr[i]);
                        if (sub_80FD338(ReadAsU16(structPtr->field_0->arr[i].unk.field_0.unk_00.playerTrainerId), text))
                        {
                            StringCopy(sUnionRoomPlayerName, text);
                            break;
                        }
                    }
                }
            }
            break;
        case 3:
            break;
        }
        break;
    case 4:
        Free(structPtr->field_8);
        Free(structPtr->field_0);
        Free(structPtr->field_C);
        Free(structPtr->field_4);
        DestroyTask(structPtr->field_20);
        Free(gUnknown_203B05C.uRoom);
        sub_80F8DC0();
        DestroyTask(taskId);
        break;
    }
}

bool16 BufferUnionRoomPlayerName(void)
{
    if (sUnionRoomPlayerName[0] != EOS)
    {
        StringCopy(gStringVar1, sUnionRoomPlayerName);
        sUnionRoomPlayerName[0] = EOS;
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

u8 sub_8119B94(void)
{
    s32 i;
    u8 j;
    struct UnkStruct_URoom * structPtr = gUnknown_203B05C.uRoom;
    s32 r7 = 0;

    for (i = 0; i < 4; i++)
    {
        if (sub_811A694(&structPtr->field_C->arr[i].unk0, &gUnknown_8457034) == TRUE)
        {
            structPtr->field_8->arr[0].unk = structPtr->field_C->arr[i].unk0;
            structPtr->field_8->arr[0].field_18 = 0;
            structPtr->field_8->arr[0].field_1A_0 = 1;
            structPtr->field_8->arr[0].field_1B = 1;
            return 4;
        }
    }
    for (j = 0; j < 8; j++)
    {
        if (structPtr->field_0->arr[j].field_1A_0 != 0)
        {
            i = sub_811A748(&structPtr->field_0->arr[j], &structPtr->field_4->arr[0]);
            if (i != 0xFF)
            {
                if (structPtr->field_0->arr[j].field_1A_0 == 1)
                {
                    if (sub_811A6DC(&structPtr->field_0->arr[j].unk, &structPtr->field_4->arr[i].unk0))
                    {
                        structPtr->field_0->arr[j].unk = structPtr->field_4->arr[i].unk0;
                        structPtr->field_0->arr[j].field_1B = 0x40;
                        r7 = 1;
                    }
                    else if (structPtr->field_0->arr[j].field_1B != 0)
                    {
                        structPtr->field_0->arr[j].field_1B--;
                        if (structPtr->field_0->arr[j].field_1B == 0)
                            r7 = 2;
                    }
                }
                else
                {
                    structPtr->field_0->arr[j].field_1A_0 = 1;
                    structPtr->field_0->arr[j].field_1B = 0;
                    r7 = 2;
                }
                structPtr->field_0->arr[j].field_18 = 0;
            }
            else if (structPtr->field_0->arr[j].field_1A_0 != 2)
            {
                structPtr->field_0->arr[j].field_18++;
                if (structPtr->field_0->arr[j].field_18 >= 600)
                {
                    structPtr->field_0->arr[j].field_1A_0 = 2;
                    r7 = 2;
                }
            }
            else if (structPtr->field_0->arr[j].field_1A_0 == 2)
            {
                structPtr->field_0->arr[j].field_18++;
                if (structPtr->field_0->arr[j].field_18 >= 900)
                {
                    sub_811A5E4(&structPtr->field_0->arr[j], 1);
                }
            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        if (sub_811A798(&structPtr->field_0->arr[0], &structPtr->field_4->arr[i], 8) != 0xFF)
            r7 = 1;
    }

    return r7;
}

void sub_8119D34(u8 taskId)
{
    s32 i, j;
    struct UnkStruct_Shared sp0;
    struct UnkStruct_Main4 **ptr = (void*) gTasks[taskId].data;
    bool8 r4;

    for (i = 0; i < 4; i++)
    {
        r4 = sub_80FCC3C(&sp0.field_0, sp0.playerName, i);
        if (!sub_8116F28(sp0.field_0.unk_0a_0, gTasks[taskId].data[4]))
        {
            sp0 = gUnknown_8457034;
        }
        if (sp0.field_0.unk_00.unk_00_0 == 1)
        {
            sp0 = gUnknown_8457034;
        }
        if (!r4)
        {
            for (j = 0; j < i; j++)
            {
                if (!sub_811A694(&ptr[1]->arr[j].unk0, &sp0))
                {
                    sp0 = gUnknown_8457034;
                }
            }
            ptr[1]->arr[i].unk0 = sp0;
            ptr[1]->arr[i].unk18 = sub_811A694(&ptr[1]->arr[i].unk0, &gUnknown_8457034);
        }
        else
        {
            ptr[0]->arr[i].unk0 = sp0;
            ptr[0]->arr[i].unk18 = sub_811A694(&ptr[0]->arr[i].unk0, &gUnknown_8457034);
        }
    }
}

u8 sub_8119E84(struct UnkStruct_Main4 * a0, struct UnkStruct_Main4 * a1, u32 a2)
{
    u8 taskId = CreateTask(sub_8119D34, 0);
    struct UnkStruct_Main4 ** data = (void *)gTasks[taskId].data;
    data[0] = a0;
    data[1] = a1;
    gTasks[taskId].data[4] = a2;
    return taskId;
}

void sub_8119EB8(u8 taskId)
{
    s32 i, j;
    struct UnkStruct_Main4 **ptr = (void*) gTasks[taskId].data;

    for (i = 0; i < 4; i++)
    {
        sub_80FCC3C(&ptr[0]->arr[i].unk0.field_0, ptr[0]->arr[i].unk0.playerName, i);
        if (!sub_8116F28(ptr[0]->arr[i].unk0.field_0.unk_0a_0, gTasks[taskId].data[2]))
        {
            ptr[0]->arr[i].unk0 = gUnknown_8457034;
        }
        for (j = 0; j < i; j++)
        {
            if (!sub_811A694(&ptr[0]->arr[j].unk0, &ptr[0]->arr[i].unk0))
            {
                ptr[0]->arr[i].unk0 = gUnknown_8457034;
            }
        }
        ptr[0]->arr[i].unk18 = sub_811A694(&ptr[0]->arr[i].unk0, &gUnknown_8457034);
    }
}

bool32 sub_8119FB0(struct GFtgtGname *arg0, s16 arg1)
{
    if (arg1 == 7)
    {
        if (!arg0->unk_00.unk_00_5)
        {
            return FALSE;
        }
        else
        {
            return TRUE;
        }
    }
    else if (arg1 == 8)
    {
        if (!arg0->unk_00.unk_00_4)
        {
            return FALSE;
        }
        else
        {
            return TRUE;
        }
    }
    else
    {
        return FALSE;
    }
}

void sub_8119FD8(u8 taskId)
{
    s32 i;
    struct UnkStruct_Main4 **ptr = (void*) gTasks[taskId].data;

    for (i = 0; i < 4; i++)
    {
        if (sub_80FCCF4(&ptr[0]->arr[i].unk0.field_0, ptr[0]->arr[i].unk0.playerName, i))
        {
            sub_8119FB0(&ptr[0]->arr[i].unk0.field_0, gTasks[taskId].data[2]);
        }
        ptr[0]->arr[i].unk18 = sub_811A694(&ptr[0]->arr[i].unk0, &gUnknown_8457034);
    }
}

u8 sub_811A054(struct UnkStruct_Main4 * a0, u32 a1)
{
    u8 taskId = CreateTask(sub_8119EB8, 0);
    struct UnkStruct_Main4 **ptr = (void*) gTasks[taskId].data;
    ptr[0] = a0;
    gTasks[taskId].data[2] = a1;
    return taskId;
}

u8 sub_811A084(struct UnkStruct_Main4 * a0, u32 a1)
{
    u8 taskId = CreateTask(sub_8119FD8, 0);
    struct UnkStruct_Main4 **ptr = (void*) gTasks[taskId].data;
    ptr[0] = a0;
    gTasks[taskId].data[2] = a1;
    return taskId;
}

bool32 sub_811A0B4(const u8 *src)
{
    LoadStdWindowFrameGfx();
    DrawDialogueFrame(0, 1);
    StringExpandPlaceholders(gStringVar4, src);
    AddTextPrinterWithCustomSpeedForMessage(FALSE, 1);
    return FALSE;
}

bool32 sub_811A0E0(void)
{
    if (!RunTextPrinters_CheckPrinter0Active())
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

bool8 PrintOnTextbox(u8 *textState, const u8 *str)
{
    switch (*textState)
    {
    case 0:
        LoadStdWindowFrameGfx();
        DrawDialogueFrame(0, 1);
        StringExpandPlaceholders(gStringVar4, str);
        AddTextPrinterForMessage(TRUE);
        (*textState)++;
        break;
    case 1:
        if (!RunTextPrinters_CheckPrinter0Active())
        {
            *textState = 0;
            return TRUE;
        }
        break;
    }
    return FALSE;
}

s8 sub_811A14C(u8 *arg0, bool32 arg1)
{
    s8 r1;

    switch (*arg0)
    {
    case 0:
        if (arg1)
        {
            return -3;
        }
        DisplayYesNoMenuDefaultYes();
        (*arg0)++;
        break;
    case 1:
        if (arg1)
        {
            DestroyYesNoMenu();
            *arg0 = 0;
            return -3;
        }
        r1 = Menu_ProcessInputNoWrapClearOnChoose();
        if (r1 == -1 || r1 == 0 || r1 == 1)
        {
            *arg0 = 0;
            return r1;
        }
        break;
    }
    return -2;
}

u8 sub_811A1AC(const struct WindowTemplate * template)
{
    u8 windowId = AddWindow(template);
    DrawStdWindowFrame(windowId, FALSE);
    FillWindowPixelBuffer(windowId, PIXEL_FILL(15));
    sub_811A444(windowId, 0, gUnknown_8459378, 8, 1, 6);
    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, 2);
    return windowId;
}

void sub_811A1FC(u8 windowId)
{
    ClearStdWindowAndFrame(windowId, TRUE);
    RemoveWindow(windowId);
}

s32 sub_811A218(u8 *arg0, u8 *arg1, u8 *arg2, const struct WindowTemplate *winTemplate, const struct ListMenuTemplate *menuTemplate)
{
    s32 r1, r8;

    switch (*arg0)
    {
    case 0:
        *arg1 = AddWindow(winTemplate);
        DrawStdWindowFrame(*arg1, FALSE);
        gMultiuseListMenuTemplate = *menuTemplate;
        gMultiuseListMenuTemplate.windowId = *arg1;
        *arg2 = ListMenuInit(&gMultiuseListMenuTemplate, 0, 0);
        CopyWindowToVram(*arg1, TRUE);
        (*arg0)++;
        break;
    case 1:
        r8 = ListMenu_ProcessInput(*arg2);
        if (JOY_NEW(A_BUTTON))
        {
            DestroyListMenuTask(*arg2, NULL, NULL);
            ClearStdWindowAndFrame(*arg1, TRUE);
            RemoveWindow(*arg1);
            *arg0 = 0;
            return r8;
        }
        else if (JOY_NEW(B_BUTTON))
        {
            DestroyListMenuTask(*arg2, NULL, NULL);
            ClearStdWindowAndFrame(*arg1, TRUE);
            RemoveWindow(*arg1);
            *arg0 = 0;
            return -2;
        }
        break;
    }

    return -1;
}

s32 sub_811A2EC(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, const struct WindowTemplate *winTemplate, const struct ListMenuTemplate *menuTemplate, struct UnkStruct_Main0 *arg6)
{
    s32 input;
    s32 r4;

    switch (*arg0)
    {
    case 0:
        *arg3 = sub_811A1AC(&gUnknown_8456F1C);
        *arg1 = AddWindow(winTemplate);
        DrawStdWindowFrame(*arg1, FALSE);
        gMultiuseListMenuTemplate = *menuTemplate;
        gMultiuseListMenuTemplate.windowId = *arg1;
        *arg2 = ListMenuInit(&gMultiuseListMenuTemplate, 0, 1);
        CopyWindowToVram(*arg1, TRUE);
        (*arg0)++;
        break;
    case 1:
        input = ListMenu_ProcessInput(*arg2);
        if (JOY_NEW(A_BUTTON | B_BUTTON))
        {
            if (input == 8 || JOY_NEW(B_BUTTON))
            {
                DestroyListMenuTask(*arg2, NULL, NULL);
                ClearStdWindowAndFrame(*arg1, TRUE);
                RemoveWindow(*arg1);
                sub_811A1FC(*arg3);
                *arg0 = 0;
                return -2;
            }
            else
            {
                r4 = sub_811AD7C(arg6->arr, input);
                if (r4 >= 0)
                {
                    DestroyListMenuTask(*arg2, NULL, NULL);
                    ClearStdWindowAndFrame(*arg1, TRUE);
                    RemoveWindow(*arg1);
                    sub_811A1FC(*arg3);
                    *arg0 = 0;
                    return r4;
                }
                else
                {
                    PlaySE(SE_WALL_HIT);
                }
            }
        }
        break;
    }

    return -1;
}

void sub_811A3F8(void)
{
    FillBgTilemapBufferRect(0, 0, 0, 0, 32, 32, 0);
    CopyBgTilemapBufferToVram(0);
}

void sub_811A41C(void)
{
    FillBgTilemapBufferRect(0, 0, 0, 0, 32, 32, 0);
    CopyBgTilemapBufferToVram(0);
    EnableBothScriptContexts();
}

void sub_811A444(u8 windowId, u8 fontId, const u8 *str, u8 x, u8 y, u8 colorIdx)
{
    struct TextPrinterTemplate printerTemplate;

    printerTemplate.currentChar = str;
    printerTemplate.windowId = windowId;
    printerTemplate.fontId = fontId;
    printerTemplate.x = x;
    printerTemplate.y = y;
    printerTemplate.currentX = x;
    printerTemplate.currentY = y;
    printerTemplate.unk = 0;

    gTextFlags.useAlternateDownArrow = FALSE;
    switch (colorIdx)
    {
    case 0:
        printerTemplate.letterSpacing = 0;
        printerTemplate.lineSpacing = 0;
        printerTemplate.fgColor = 2;
        printerTemplate.bgColor = 1;
        printerTemplate.shadowColor = 3;
        break;
    case 1:
        printerTemplate.letterSpacing = 0;
        printerTemplate.lineSpacing = 0;
        printerTemplate.fgColor = 4;
        printerTemplate.bgColor = 1;
        printerTemplate.shadowColor = 5;
        break;
    case 2:
        printerTemplate.letterSpacing = 0;
        printerTemplate.lineSpacing = 0;
        printerTemplate.fgColor = 6;
        printerTemplate.bgColor = 1;
        printerTemplate.shadowColor = 7;
        break;
    case 3:
        printerTemplate.letterSpacing = 0;
        printerTemplate.lineSpacing = 0;
        printerTemplate.fgColor = 1;
        printerTemplate.bgColor = 1;
        printerTemplate.shadowColor = 3;
        break;
    case 4:
        printerTemplate.letterSpacing = 0;
        printerTemplate.lineSpacing = 0;
        printerTemplate.fgColor = 1;
        printerTemplate.bgColor = 2;
        printerTemplate.shadowColor = 3;
        break;
    case 5:
        printerTemplate.letterSpacing = 0;
        printerTemplate.lineSpacing = 0;
        printerTemplate.fgColor = 7;
        printerTemplate.bgColor = 15;
        printerTemplate.shadowColor = 9;
        break;
    case 6:
        printerTemplate.letterSpacing = 0;
        printerTemplate.lineSpacing = 0;
        printerTemplate.fgColor = 14;
        printerTemplate.bgColor = 15;
        printerTemplate.shadowColor = 9;
        break;
    }

    AddTextPrinter(&printerTemplate, 0xFF, NULL);
}

void sub_811A5E4(struct UnkStruct_x20 *arg0, u8 count)
{
    s32 i;

    for (i = 0; i < count; i++)
    {
        arg0[i].unk = gUnknown_8457034;
        arg0[i].field_18 = 0xFF;
        arg0[i].field_1A_0 = 0;
        arg0[i].field_1A_1 = 0;
        arg0[i].field_1B = 0;
    }
}

void sub_811A650(struct UnkStruct_Main4 *arg0, u8 count)
{
    s32 i;

    for (i = 0; i < 4; i++)
    {
        arg0->arr[i].unk0 = gUnknown_8457034;
        arg0->arr[i].unk18 = 0;
    }
}

bool8 sub_811A694(struct UnkStruct_Shared* arg0, const struct UnkStruct_Shared* arg1)
{
    s32 i;

    for (i = 0; i < 2; i++)
    {
        if (arg0->field_0.unk_00.playerTrainerId[i] != arg1->field_0.unk_00.playerTrainerId[i])
        {
            return TRUE;
        }
    }

    for (i = 0; i < 8; i++)
    {
        if (arg0->playerName[i] != arg1->playerName[i])
        {
            return TRUE;
        }
    }

    return FALSE;
}

bool32 sub_811A6DC(struct UnkStruct_Shared *arg0, struct UnkStruct_Shared *arg1)
{
    s32 i;

    if (arg0->field_0.unk_0a_0 != arg1->field_0.unk_0a_0)
    {
        return TRUE;
    }

    if (arg0->field_0.unk_0a_7 != arg1->field_0.unk_0a_7)
    {
        return TRUE;
    }

    for (i = 0; i < 4; i++)
    {
        if (arg0->field_0.unk_04[i] != arg1->field_0.unk_04[i])
        {
            return TRUE;
        }
    }

    if (arg0->field_0.species != arg1->field_0.species)
    {
        return TRUE;
    }

    if (arg0->field_0.type != arg1->field_0.type)
    {
        return TRUE;
    }

    return FALSE;
}

u32 sub_811A748(struct UnkStruct_x20 *arg0, struct UnkStruct_x1C *arg1)
{
    u8 result = 0xFF;
    s32 i;

    for (i = 0; i < 4; i++)
    {
        if (arg1[i].unk18 && !sub_811A694(&arg0->unk, &arg1[i].unk0))
        {
            result = i;
            arg1[i].unk18 = FALSE;
        }
    }

    return result;
}

u8 sub_811A798(struct UnkStruct_x20 *arg0, struct UnkStruct_x1C *arg1, u8 arg2)
{
    s32 i;

    if (arg1->unk18)
    {
        for (i = 0; i < arg2; i++)
        {
            if (arg0[i].field_1A_0 == 0)
            {
                arg0[i].unk = arg1->unk0;
                arg0[i].field_18 = 0;
                arg0[i].field_1A_0 = 1;
                arg0[i].field_1B = 64;
                arg1->unk18 = FALSE;
                return i;
            }
        }
    }

    return 0xFF;
}

void sub_811A81C(u8 arg0, u8 arg1, u8 arg2, struct UnkStruct_x20 *arg3, u8 arg4, u8 id)
{
    u8 r2;
    u8 sp0[6];
    u8 sp10[30];

    ConvertIntToDecimalStringN(gStringVar4, id + 1, STR_CONV_MODE_LEADING_ZEROS, 2);
    StringAppend(gStringVar4, gUnknown_84571B0);
    sub_811A444(arg0, 0, gStringVar4, arg1, arg2, 0);
    arg1 += 18;
    r2 = arg3->unk.field_0.unk_0a_0;
    if (arg3->field_1A_0 == 1 && !(r2 & 0x40))
    {
        sub_8018404_2(sp10, *arg3);
        sub_811A444(arg0, 2, sp10, arg1, arg2, arg4);
        ConvertIntToDecimalStringN(sp0, arg3->unk.field_0.unk_00.playerTrainerId[0] | (arg3->unk.field_0.unk_00.playerTrainerId[1] << 8), STR_CONV_MODE_LEADING_ZEROS, 5);
        StringCopy(gStringVar4, gUnknown_84571B4);
        StringAppend(gStringVar4, sp0);
        arg1 += 77;
        sub_811A444(arg0, 0, gStringVar4, arg1, arg2, arg4);
    }
}

void sub_811A910(u8 arg0, u8 arg1, u8 arg2, struct UnkStruct_x20 *arg3, u8 arg4, u8 id)
{
    u8 sp0[6];
    u8 sp10[30];

    if (arg3->field_1A_0 == 1)
    {
        sub_8018404_2(sp10, *arg3);
        sub_811A444(arg0, 2, sp10, arg1, arg2, arg4);
        ConvertIntToDecimalStringN(sp0, arg3->unk.field_0.unk_00.playerTrainerId[0] | (arg3->unk.field_0.unk_00.playerTrainerId[1] << 8), STR_CONV_MODE_LEADING_ZEROS, 5);
        StringCopy(gStringVar4, gUnknown_84571B4);
        StringAppend(gStringVar4, sp0);
        arg1 += 71;
        sub_811A444(arg0, 0, gStringVar4, arg1, arg2, arg4);
    }
}

bool32 sub_811A9B8(void)
{
    s16 x, y;
    GetXYCoordsOneStepInFrontOfPlayer(&x, &y);
    if (x != 9)
    {
        return FALSE;
    }
    if (y != 8)
    {
        return FALSE;
    }
    if (gPlayerAvatar.tileTransitionState == 2 || gPlayerAvatar.tileTransitionState == 0)
    {
        return TRUE;
    }

    return FALSE;
}

u32 sub_811A9FC(s32 arg0)
{
    switch (arg0)
    {
    case 5:
        return 1;
    case 4:
        return 2;
    case 8:
        return 3;
    case 3:
    default:
        return 0;
    }
}

u32 sub_811AA24(struct UnkStruct_x20 *arg0)
{
    u8 sp0[30];
    sub_8018404_2(sp0, *arg0);
    return sub_80FD338(ReadAsU16(arg0->unk.field_0.unk_00.playerTrainerId), sp0);
}

s32 sub_811AA5C(struct UnkStruct_Main0 *arg0, u8 arg1, u8 arg2, u32 playerGender)
{
    bool32 r2;

    struct UnkStruct_x20 * r5 = &arg0->arr[arg2];

    if (!r5->unk.field_0.unk_0a_7 && arg1 == 0)
    {
        sub_8018404_2(gStringVar1, *r5);
        r2 = sub_80FD338(ReadAsU16(r5->unk.field_0.unk_00.playerTrainerId), gStringVar1);
        if (r5->unk.field_0.unk_0a_0 == 0x45)
        {
            StringExpandPlaceholders(gStringVar4, gUnknown_8457F80[r2][playerGender]);
            return 2;
        }
        else
        {
            sub_811A0B4(gUnknown_8457A34[r2]);
            return 1;
        }
    }
    else
    {
        sub_8018404_2(gStringVar1, *r5);
        if (arg1 != 0)
        {
            playerGender = (r5->unk.field_0.unk_00.playerTrainerId[arg1 + 1] >> 3) & 1;
        }
        switch (r5->unk.field_0.unk_0a_0 & 0x3F)
        {
        case 1:
            StringExpandPlaceholders(gStringVar4, gUnknown_8458758[playerGender][Random() % 4]);
            break;
        case 4:
            StringExpandPlaceholders(gStringVar4, gUnknown_8458A78[playerGender][Random() % 2]);
            break;
        case 5:
            StringExpandPlaceholders(gStringVar4, gUnknown_84588BC[playerGender][Random() % 4]);
            break;
        case 8:
            StringExpandPlaceholders(gStringVar4, gUnknown_84589AC[playerGender][Random() % 2]);
            break;
        default:
            StringExpandPlaceholders(gStringVar4, gUnknown_8457F90);
            break;
        }
        return 0;
    }
}

void nullsub_92(u8 windowId, s32 itemId, u8 y)
{

}

void sub_811ABE4(u8 arg0, u8 arg1, struct GFtgtGname * arg2, const u8 * str, u8 arg4)
{
    u8 sp8[4];
    u16 r8 = arg2->species;
    u8 r7 = arg2->type;
    u8 r9 = arg2->level;

    sub_811A444(arg0, 2, str, 8, arg1, arg4);
    if (r8 == SPECIES_EGG)
    {
        sub_811A444(arg0, 2, gUnknown_8458FBC, 0x44, arg1, arg4);
    }
    else
    {
        BlitMoveInfoIcon(arg0, r7 + 1, 0x44, arg1);
        sub_811A444(arg0, 2, gSpeciesNames[r8], 0x76, arg1, arg4);
        ConvertIntToDecimalStringN(sp8, r9, STR_CONV_MODE_LEFT_ALIGN, 3);
        sub_811A444(arg0, 2, sp8, GetStringRightAlignXOffset(2, sp8, 218), arg1, arg4);
    }
}

void sub_811ACA4(u8 windowId, s32 itemId, u8 y)
{
    struct UnkStruct_Leader *leader = gUnknown_203B05C.leader;
    struct GFtgtGname *rfu;
    s32 i, j;
    u8 sp4[8];

    if (itemId == -3 && y == gUnknown_8456F7C.upText_Y)
    {
        rfu = sub_80F9800();
        if (rfu->species != SPECIES_NONE)
        {
            sub_811ABE4(windowId, y, rfu, gSaveBlock2Ptr->playerName, 5);
        }
    }
    else
    {
        j = 0;
        for (i = 0; i < 8; i++)
        {
            if (leader->field_0->arr[i].field_1A_0 == 1 && leader->field_0->arr[i].unk.field_0.species != SPECIES_NONE)
            {
                j++;
            }
            if (j == itemId + 1)
            {
                sub_8018404_2(sp4, leader->field_0->arr[i]);
                sub_811ABE4(windowId, y, &leader->field_0->arr[i].unk.field_0, sp4, 6);
                break;
            }
        }
    }
}

s32 sub_811AD7C(struct UnkStruct_x20 * arg, s32 arg1)
{
    s32 i;
    s32 j = 0;

    for (i = 0; i < 8; i++)
    {
        if (arg[i].field_1A_0 == 1 && arg[i].unk.field_0.species != SPECIES_NONE)
        {
            j++;
        }
        if (j == arg1 + 1)
        {
            return i;
        }
    }

    return -1;
}

s32 sub_811ADC4(s32 arg1, struct UnkStruct_Main0 *arg0)
{
    return arg0->arr[arg1].unk.field_0.playerGender;
}

s32 sub_811ADD0(u32 type, u32 species)
{
    s32 i;

    if (species == SPECIES_EGG)
    {
        for (i = 0; i < gPlayerPartyCount; i++)
        {
            species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES2);
            if (species == SPECIES_EGG)
            {
                return 0;
            }
        }
        return 2;
    }
    else
    {
        for (i = 0; i < gPlayerPartyCount; i++)
        {
            species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES2);
            if (gBaseStats[species].type1 == type || gBaseStats[species].type2 == type)
            {
                return 0;
            }
        }
        return 1;
    }
}

void sub_811AE68(u8 *dst, s32 arg1, u32 playerGender)
{
    switch (arg1)
    {
    case 0x41:
        StringExpandPlaceholders(dst, gUnknown_8458314[playerGender]);
        break;
    case 0x45:
        StringExpandPlaceholders(dst, gUnknown_84585E8[playerGender]);
        break;
    case 0x44:
        StringExpandPlaceholders(dst, gUnknown_8458F9C);
        break;
    case 0x48:
        StringExpandPlaceholders(dst, gUnknown_84583B4[playerGender]);
        break;
    }
}

void sub_811AECC(u8 *dst, u8 arg1)
{
    u8 mpId = GetMultiplayerId();
    u8 gender = gLinkPlayers[mpId ^ 1].gender;

    switch (arg1)
    {
    case 0x41:
        StringCopy(dst, gUnknown_8458230[mpId][gender][0]);
        break;
    case 0x44:
        StringCopy(dst, gUnknown_8458230[mpId][gender][2]);
        break;
    case 0x45:
        StringCopy(dst, gUnknown_8458230[mpId][gender][1]);
        break;
    }
}

s32 sub_811AF6C(u8 *dst, u32 gender, u16 *arg2, struct UnkStruct_URoom *arg3)
{
    s32 result = 0;
    u16 species = SPECIES_NONE;
    s32 i;

    switch (arg2[0])
    {
    case 0x41:
        StringExpandPlaceholders(dst, gUnknown_8457CA4);
        result = 1;
        break;
    case 0x45:
        StringExpandPlaceholders(dst, gUnknown_8457CF8);
        result = 1;
        break;
    case 0x44:
        ConvertIntToDecimalStringN(arg3->field_58[0], sUnionRoomTrade.playerLevel, STR_CONV_MODE_LEFT_ALIGN, 3);
        StringCopy(arg3->field_58[1], gSpeciesNames[sUnionRoomTrade.playerSpecies]);
        for (i = 0; i < 4; i++)
        {
            if (gRfuLinkStatus->partner[i].serialNo == 2)
            {
                ConvertIntToDecimalStringN(arg3->field_58[2], arg2[2], STR_CONV_MODE_LEFT_ALIGN, 3);
                StringCopy(arg3->field_58[3], gSpeciesNames[arg2[1]]);
                species = arg2[1];
                break;
            }
        }
        if (species == SPECIES_EGG)
        {
            StringCopy(dst, gUnknown_8457DB8);
        }
        else
        {
            for (i = 0; i < 4; i++)
            {
                DynamicPlaceholderTextUtil_SetPlaceholderPtr(i, arg3->field_58[i]);
            }
            DynamicPlaceholderTextUtil_ExpandPlaceholders(dst, gUnknown_8457D44);
        }
        result = 1;
        break;
    case 0x48:
        StringExpandPlaceholders(dst, gUnknown_8457C48);
        result = 1;
        break;
    case 0x40:
        StringExpandPlaceholders(dst, gUnknown_8457E0C);
        result = 2;
        break;
    }

    return result;
}

bool32 sub_811B0A4(struct UnkStruct_URoom *arg0)
{
    if (gRecvCmds[0][1] != 0)
    {
        if (gRecvCmds[0][1] == 0x51)
        {
            arg0->field_98 = 0x51;
            return TRUE;
        }
        else if (gRecvCmds[0][1] == 0x52)
        {
            arg0->field_98 = 0x52;
            return TRUE;
        }
    }
    return FALSE;
}

bool32 InUnionRoom(void)
{
    return    gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(UNION_ROOM)
           && gSaveBlock1Ptr->location.mapNum == MAP_NUM(UNION_ROOM)
           ? TRUE : FALSE;
}

bool32 HasAtLeastTwoMonsOfLevel30OrLower(void)
{
    s32 i;
    s32 count = 0;

    for (i = 0; i < gPlayerPartyCount; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_LEVEL) <= 30
            && GetMonData(&gPlayerParty[i], MON_DATA_SPECIES2) != SPECIES_EGG)
        {
            count++;
        }
    }

    if (count > 1)
        return TRUE;
    else
        return FALSE;
}

void ResetUnionRoomTrade(struct UnionRoomTrade *arg0)
{
    arg0->field_0 = 0;
    arg0->type = 0;
    arg0->playerPersonality = 0;
    arg0->playerSpecies = 0;
    arg0->playerLevel = 0;
    arg0->species = 0;
    arg0->level = 0;
    arg0->personality = 0;
}

void Script_ResetUnionRoomTrade(void)
{
    ResetUnionRoomTrade(&sUnionRoomTrade);
}

bool32 RegisterTradeMonAndGetIsEgg(u32 monId, struct UnionRoomTrade *trade)
{
    trade->playerSpecies = GetMonData(&gPlayerParty[monId], MON_DATA_SPECIES2);
    trade->playerLevel = GetMonData(&gPlayerParty[monId], MON_DATA_LEVEL);
    trade->playerPersonality = GetMonData(&gPlayerParty[monId], MON_DATA_PERSONALITY);
    if (trade->playerSpecies == SPECIES_EGG)
        return TRUE;
    else
        return FALSE;
}

void RegisterTradeMon(u32 monId, struct UnionRoomTrade *trade)
{
    trade->species = GetMonData(&gPlayerParty[monId], MON_DATA_SPECIES2);
    trade->level = GetMonData(&gPlayerParty[monId], MON_DATA_LEVEL);
    trade->personality = GetMonData(&gPlayerParty[monId], MON_DATA_PERSONALITY);
}

u32 GetPartyPositionOfRegisteredMon(struct UnionRoomTrade *trade, u8 multiplayerId)
{
    u16 response = 0;
    u16 species;
    u32 personality;
    u32 cur_personality;
    u16 cur_species;
    s32 i;

    // player
    if (multiplayerId == 0)
    {
        species = trade->playerSpecies;
        personality = trade->playerPersonality;
    }
        // partner
    else
    {
        species = trade->species;
        personality = trade->personality;
    }

    for (i = 0; i < gPlayerPartyCount; i++)
    {
        cur_personality = GetMonData(&gPlayerParty[i], MON_DATA_PERSONALITY);
        if (cur_personality != personality)
        {
            continue;
        }
        cur_species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES2);
        if (cur_species != species)
        {
            continue;
        }
        response = i;
        break;
    }

    return response;
}

void sub_811B258(bool32 arg0)
{
    sub_811A3F8();
    ScriptContext2_Disable();
    sub_80696F0();
    gUnknown_203B058 = 0;
    if (arg0)
    {
        sub_80FAFA0(sUnionRoomTrade.type, sUnionRoomTrade.playerSpecies, sUnionRoomTrade.playerLevel);
        sub_80FB008(0x40, 0, 0);
    }
}

void sub_811B298(void)
{
    ScriptContext2_Enable();
    ScriptFreezeObjectEvents();
}

u8 sub_811B2A8(s32 linkPlayer)
{
    u8 retval = 0x80;
    retval |= gLinkPlayers[linkPlayer].gender << 3;
    retval |= gLinkPlayers[linkPlayer].trainerId & 7;
    return retval;
}

u8 sub_811B2D8(struct UnkStruct_URoom *arg0)
{
    u8 retVal = 0x80;
    u8 i;

    for (i = 0; i < 4; i++)
    {
        if (arg0->field_C->arr[i].unk18)
        {
            retVal |= arg0->field_C->arr[i].unk0.field_0.playerGender << 3;
            retVal |= arg0->field_C->arr[i].unk0.field_0.unk_00.playerTrainerId[0] & 7;
            break;
        }
    }

    return retVal;
}

void sub_811B31C(u8 *unused, struct UnkStruct_URoom *arg1, bool8 arg2)
{
    struct TrainerCard *trainerCard = &gTrainerCards[GetMultiplayerId() ^ 1];
    s32 i;
    s32 n;

    DynamicPlaceholderTextUtil_Reset();

    StringCopy(arg1->field_C0[0], gTrainerClassNames[sub_80447F0()]);
    DynamicPlaceholderTextUtil_SetPlaceholderPtr(0, arg1->field_C0[0]);

    DynamicPlaceholderTextUtil_SetPlaceholderPtr(1, trainerCard->playerName);

    StringCopy(arg1->field_174, gUnknown_84594B0[trainerCard->stars]);
    DynamicPlaceholderTextUtil_SetPlaceholderPtr(2, arg1->field_174);

    ConvertIntToDecimalStringN(arg1->field_C0[2], trainerCard->caughtMonsCount, STR_CONV_MODE_LEFT_ALIGN, 3);
    DynamicPlaceholderTextUtil_SetPlaceholderPtr(3, arg1->field_C0[2]);

    ConvertIntToDecimalStringN(arg1->field_C0[3], trainerCard->playTimeHours, STR_CONV_MODE_LEFT_ALIGN, 3);
    ConvertIntToDecimalStringN(arg1->field_C0[4], trainerCard->playTimeMinutes, STR_CONV_MODE_LEADING_ZEROS, 2);
    DynamicPlaceholderTextUtil_SetPlaceholderPtr(4, arg1->field_C0[3]);
    DynamicPlaceholderTextUtil_SetPlaceholderPtr(5, arg1->field_C0[4]);

    DynamicPlaceholderTextUtil_ExpandPlaceholders(arg1->field_1A4, gUnknown_84594C4);
    StringCopy(gStringVar4, arg1->field_1A4);

    n = trainerCard->linkBattleWins;
    if (n > 9999)
    {
        n = 9999;
    }
    ConvertIntToDecimalStringN(arg1->field_C0[0], n, STR_CONV_MODE_LEFT_ALIGN, 4);
    DynamicPlaceholderTextUtil_SetPlaceholderPtr(0, arg1->field_C0[0]);

    n = trainerCard->linkBattleLosses;
    if (n > 9999)
    {
        n = 9999;
    }
    ConvertIntToDecimalStringN(arg1->field_C0[1], n, STR_CONV_MODE_LEFT_ALIGN, 4);
    DynamicPlaceholderTextUtil_SetPlaceholderPtr(2, arg1->field_C0[1]);

    ConvertIntToDecimalStringN(arg1->field_C0[2], trainerCard->pokemonTrades, STR_CONV_MODE_LEFT_ALIGN, 5);
    DynamicPlaceholderTextUtil_SetPlaceholderPtr(3, arg1->field_C0[2]);

    for (i = 0; i < 4; i++)
    {
        CopyEasyChatWord(arg1->field_C0[i + 3], trainerCard->var_28[i]);
        DynamicPlaceholderTextUtil_SetPlaceholderPtr(i + 4, arg1->field_C0[i + 3]);
    }

    DynamicPlaceholderTextUtil_ExpandPlaceholders(arg1->field_1A4, gUnknown_8459504);
    StringAppend(gStringVar4, arg1->field_1A4);

    if (arg2 == TRUE)
    {
        DynamicPlaceholderTextUtil_ExpandPlaceholders(arg1->field_1A4, gUnknown_8459588);
        StringAppend(gStringVar4, arg1->field_1A4);
    }
    else if (arg2 == FALSE)
    {
        DynamicPlaceholderTextUtil_ExpandPlaceholders(arg1->field_1A4, gUnknown_8459580[trainerCard->gender]);
        StringAppend(gStringVar4, arg1->field_1A4);
    }
}

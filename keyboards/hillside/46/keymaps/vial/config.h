// Copyright 2022 Michael McCoyd (@mmccoyd)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Some boards have issues detecting handedness using the vbus voltage.
// Such as Elite-C v3, but not v3.1 on. Also apparently some ProMicro boards.
// For those boands, use usb detection instead.
// #define SPLIT_USB_DETECT
#define DYNAMIC_KEYMAP_LAYER_COUNT 6
#define VIAL_KEYBOARD_UID {0x8A, 0x71, 0x42, 0xA2, 0xF0, 0x99, 0xA5, 0x24}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 0 }

// #undef SPLIT_HAND_MATRIX_GRID
// #define MASTER_LEFT
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

// mouse key
#define MOUSEKEY_DELAY 5
#define MOUSEKEY_DELTA 3
#define MOUSEKEY_MAX_SPEED 30
#define MOUSEKEY_WHEEL_DELAY 5
#define MOUSEKEY_WHEEL_DELTA 5

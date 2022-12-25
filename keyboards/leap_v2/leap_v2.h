// Copyright 2022 rabitto48 (@rabitto48)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define LAYOUT( \
L06, L05, L04, L03, L02, L01, L00,           R00, R01, R02, R03, R04, R05, R06, \
L16, L15, L14, L13, L12, L11, L10,           R10, R11, R12, R13, R14, R15, R16, \
L26, L25, L24, L23, L22, L21, L20,           R20, R21, R22, R23, R24, R25, R26, \
L36, L35, L34, L33, L32, L31, L30,           R30, R31, R32, R33, R34, R35, R36, \
L46, L45, L44, L43,      L42, L41, L40, R40, R41, R42,      R43, R44, R45, R46  \
) \
{ \
    { L00, L01, L02, L03, L04, L05, L06 }, \
    { L10, L11, L12, L13, L14, L15, L16 }, \
    { L20, L21, L22, L23, L24, L25, L26 }, \
    { L30, L31, L32, L33, L34, L35, L36 }, \
    { L40, L41, L42, L43, L44, L45, L46 }, \
    { R00, R01, R02, R03, R04, R05, R06 }, \
    { R10, R11, R12, R13, R14, R15, R16 }, \
    { R20, R21, R22, R23, R24, R25, R26 }, \
    { R30, R31, R32, R33, R34, R35, R36 }, \
    { R40, R41, R42, R43, R44, R45, R46 }, \
}

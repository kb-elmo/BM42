// Copyright 2022 kb-elmo<mail@elmo.space> (@kb-elmo)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define ____ KC_NO

#define LAYOUT( \
    k000, k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k310, \
    k300, k101, k102, k103, k104, k105, k106, k107, k108, k109,       k110, \
    k200,       k201, k202, k203, k204, k205, k206, k207, k208, k209, k309, \
    k301, k302, k303,       k304,             k305,       k306, k307, k308  \
) { \
    { k000, k001, k002, k003, k004, k005, k006, k007, k008, k009, k010 }, \
    { ____, k101, k102, k103, k104, k105, k106, k107, k108, k109, k110 }, \
    { k200, k201, k202, k203, k204, k205, k206, k207, k208, k209, ____ }, \
    { k300, k301, k302, k303, k304, k305, k306, k307, k308, k309, k310 }  \
}

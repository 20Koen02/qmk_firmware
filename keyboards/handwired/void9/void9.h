#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT_ortho_3x3( \
    k00, k01, k02, \
    k10, k11, k12, \
    k20, k21, k22 \
) \
{ \
    { k00, k01, k02}, \
    { k10, k11, k12 }, \
    { k20, k21, k22 }, \
}

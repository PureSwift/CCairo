/* See cairo-font-face-twin.c for copyright info */

#include "cairo/cairoint.h"

const int8_t _cairo_twin_outlines[] = {
/* 0x0 '\0'  offset 0 */
    0, 24, 42, 0, 2, 2,
    0, 24, /* snap_x */
    -42, 0, /* snap_y */
    'm', 0, 0,
    'l', 0, -42,
    'l', 24, -42,
    'l', 24, 0,
    'l', 0, 0,
    'e',
    'X', 'X',
/* 0x20 ' '  offset 28 */
    0, 4, 0, 0, 0, 0,
    /* snap_x */
    /* snap_y */
    'e',
    'X', 'X', 'X',
    'X', 'X',
/* 0x21 '!'  offset 40 */
    0, 0, 42, 0, 1, 3,
    0, /* snap_x */
    -42, -14, 0, /* snap_y */
    'm', 0, -42,
    'l', 0, -14,
    'm', 0, 0,
    'l', 0, 0,
    'e',
    'X', 'X', 'X', 'X', 'X', 'X',
    'X', 'X', 'X', 'X', 'X', 'X',
    'X', 'X', 'X', 'X', 'X', 'X',
    'X', 'X', 'X', 'X', 'X', 'X',
    'X', 'X', 'X',
/* 0x22 '"'  offset 90 */
    0, 16, 42, -28, 2, 2,
    0, 16, /* snap_x */
    -42, -28, /* snap_y */
    'm', 0, -42,
    'l', 0, -28,
    'm', 16, -42,
    'l', 16, -28,
    'e',
    'X',
/* 0x23 '#'  offset 114 */
    0, 30, 50, 14, 2, 5,
    0, 30, /* snap_x */
    -24, -21, -15, -12, 0, /* snap_y */
    'm', 16, -50,
    'l', 2, 14,
    'm', 28, -50,
    'l', 14, 14,
    'm', 2, -24,
    'l', 30, -24,
    'm', 0, -12,
    'l', 28, -12,
    'e',
/* 0x24 '$'  offset 152 */
    0, 28, 50, 8, 4, 4,
    0, 10, 18, 28, /* snap_x */
    -42, -21, -15, 0, /* snap_y */
    'm', 10, -50,
    'l', 10, 8,
    'm', 18, -50,
    'l', 18, 8,
    'm', 28, -36,
    'c', 24, -42, 18, -42, 14, -42,
    'c', 10, -42, 0, -42, 0, -34,
    'c', 0, -25, 8, -24, 14, -22,
    'c', 20, -20, 28, -19, 28, -9,
    'c', 28, 0, 18, 0, 14, 0,
    'c', 10, 0, 4, 0, 0, -6,
    'e',
/* 0x25 '%'  offset 224 */
    0, 36, 42, 0, 4, 7,
    0, 14, 22, 36, /* snap_x */
    -42, -38, -28, -21, -15, -14, 0, /* snap_y */
    'm', 10, -42,
    'c', 12, -41, 14, -40, 14, -36,
    'c', 14, -30, 11, -28, 6, -28,
    'c', 2, -28, 0, -30, 0, -34,
    'c', 0, -39, 3, -42, 8, -42,
    'l', 10, -42,
    'c', 18, -37, 28, -37, 36, -42,
    'l', 0, 0,
    'm', 28, -14,
    'c', 24, -14, 22, -11, 22, -6,
    'c', 22, -2, 24, 0, 28, 0,
    'c', 33, 0, 36, -2, 36, -8,
    'c', 36, -12, 34, -14, 30, -14,
    'l', 28, -14,
    'e',
    'X', 'X', 'X',
/* 0x26 '&'  offset 323 */
    0, 40, 42, 0, 4, 4,
    0, 10, 22, 40, /* snap_x */
    -28, -21, -15, 0, /* snap_y */
    'm', 40, -24,
    'c', 40, -27, 39, -28, 37, -28,
    'c', 29, -28, 32, 0, 12, 0,
    'c', 0, 0, 0, -8, 0, -10,
    'c', 0, -24, 22, -20, 22, -34,
    'c', 22, -45, 10, -45, 10, -34,
    'c', 10, -27, 25, 0, 36, 0,
    'c', 39, 0, 40, -1, 40, -4,
    'e',
/* 0x27 '''  offset 390 */
    0, 4, 42, -30, 2, 2,
    0, 4, /* snap_x */
    -42, -28, /* snap_y */
    'm', 2, -38,
    'c', -1, -38, -1, -42, 2, -42,
    'c', 6, -42, 5, -33, 0, -30,
    'e',
    'X',
/* 0x28 '('  offset 419 */
    0, 14, 50, 14, 2, 2,
    0, 14, /* snap_x */
    -50, 14, /* snap_y */
    'm', 14, -50,
    'c', -5, -32, -5, -5, 14, 14,
    'e',
    'X',
/* 0x29 ')'  offset 441 */
    0, 14, 50, 14, 2, 2,
    0, 14, /* snap_x */
    -15, 14, /* snap_y */
    'm', 0, -50,
    'c', 19, -34, 19, -2, 0, 14,
    'e',
    'X',
/* 0x2a '*'  offset 463 */
    0, 20, 30, -6, 3, 3,
    0, 10, 20, /* snap_x */
    -21, -15, 0, /* snap_y */
    'm', 10, -30,
    'l', 10, -6,
    'm', 0, -24,
    'l', 20, -12,
    'm', 20, -24,
    'l', 0, -12,
    'e',
/* 0x2b '+'  offset 494 */
    0, 36, 36, 0, 3, 4,
    0, 18, 36, /* snap_x */
    -21, -18, -15, 0, /* snap_y */
    'm', 18, -36,
    'l', 18, 0,
    'm', 0, -18,
    'l', 36, -18,
    'e',
/* 0x2c ','  offset 520 */
    0, 4, 4, 8, 2, 3,
    0, 4, /* snap_x */
    -21, -15, 0, /* snap_y */
    'm', 4, -2,
    'c', 4, 1, 0, 1, 0, -2,
    'c', 0, -5, 4, -5, 4, -2,
    'c', 4, 4, 2, 6, 0, 8,
    'e',
/* 0x2d '-'  offset 556 */
    0, 36, 18, -18, 2, 4,
    0, 36, /* snap_x */
    -21, -18, -15, 0, /* snap_y */
    'm', 0, -18,
    'l', 36, -18,
    'e',
/* 0x2e '.'  offset 575 */
    0, 4, 4, 0, 2, 3,
    0, 4, /* snap_x */
    -21, -15, 0, /* snap_y */
    'm', 2, -4,
    'c', -1, -4, -1, 0, 2, 0,
    'c', 5, 0, 5, -4, 2, -4,
    'e',
/* 0x2f '/'  offset 604 */
    0, 36, 50, 14, 2, 3,
    0, 36, /* snap_x */
    -21, -15, 0, /* snap_y */
    'm', 36, -50,
    'l', 0, 14,
    'e',
/* 0x30 '0'  offset 622 */
    0, 28, 42, 0, 2, 4,
    0, 28, /* snap_x */
    -42, -21, -15, 0, /* snap_y */
    'm', 14, -42,
    'c', 9, -42, 0, -42, 0, -21,
    'c', 0, 0, 9, 0, 14, 0,
    'c', 19, 0, 28, 0, 28, -21,
    'c', 28, -42, 19, -42, 14, -42,
    'E',
/* 0x31 '1'  offset 666 */
    0, 28, 42, 0, 2, 3,
    0, 17, 28 /* snap_x */
    -42, -34, 0, /* snap_y */
    'm', 7, -34,
    'c', 11, -35, 15, -38, 17, -42,
    'l', 17, 0,
    'e',
/* 0x32 '2'  offset 691 */
    0, 28, 42, 0, 4, 4,
    0, 2, 26, 28, /* snap_x */
    -42, -21, -15, 0, /* snap_y */
    'm', 2, -32,
    'c', 2, -34, 2, -42, 14, -42,
    'c', 26, -42, 26, -34, 26, -32,
    'c', 26, -30, 25, -25, 10, -10,
    'l', 0, 0,
    'l', 28, 0,
    'e',
/* 0x33 '3'  offset 736 */
    0, 28, 42, 0, 2, 5,
    0, 28, /* snap_x */
    -42, -26, -21, -15, 0, /* snap_y */
    'm', 4, -42,
    'l', 26, -42,
    'l', 14, -26,
    'c', 21, -26, 28, -26, 28, -14,
    'c', 28, 0, 17, 0, 13, 0,
    'c', 8, 0, 3, -1, 0, -8,
    'e',
/* 0x34 '4'  offset 780 */
    0, 28, 42, 0, 3, 3,
    0, 20, 30, /* snap_x */
    -42, -14, 0, /* snap_y */
    'm', 20, 0,
    'l', 20, -42,
    'l', 0, -14,
    'l', 30, -14,
    'e',
    'X', 'X', 'X',
    'X',
/* 0x35 '5'  offset 809 */
    0, 28, 42, 0, 2, 5,
    0, 28, /* snap_x */
    -42, -28, -21, -15, 0, /* snap_y */
    'm', 24, -42,
    'l', 4, -42,
    'l', 2, -24,
    'c', 5, -27, 10, -28, 13, -28,
    'c', 16, -28, 28, -28, 28, -14,
    'c', 28, 0, 16, 0, 13, 0,
    'c', 10, 0, 3, 0, 0, -8,
    'e',
/* 0x36 '6'  offset 860 */
    0, 28, 42, 0, 2, 5,
    0, 26, /* snap_x */
    -42, -26, -21, -15, 0, /* snap_y */
    'm', 24, -36,
    'c', 22, -41, 19, -42, 14, -42,
    'c', 9, -42, 0, -41, 0, -19,
    'c', 0, -1, 9, 0, 13, 0,
    'c', 18, 0, 26, -3, 26, -13,
    'c', 26, -18, 23, -26, 13, -26,
    'c', 10, -26, 1, -24, 0, -14,
    'e',
/* 0x37 '7'  offset 919 */
    0, 28, 42, 0, 2, 4,
    0, 28, /* snap_x */
    -42, -21, -15, 0, /* snap_y */
    'm', 0, -42,
    'l', 28, -42,
    'l', 8, 0,
    'e',
    'X', 'X', 'X',
/* 0x38 '8'  offset 944 */
    0, 28, 42, 0, 4, 4,
    0, 2, 26, 28, /* snap_x */
    -42, -21, -15, 0, /* snap_y */
    'm', 14, -42,
    'c', 5, -42, 2, -40, 2, -34,
    'c', 2, -18, 28, -32, 28, -11,
    'c', 28, 0, 18, 0, 14, 0,
    'c', 10, 0, 0, 0, 0, -11,
    'c', 0, -32, 26, -18, 26, -34,
    'c', 26, -40, 23, -42, 14, -42,
    'E',
/* 0x39 '9'  offset 1004 */
    0, 28, 42, 0, 2, 5,
    0, 26, /* snap_x */
    -42, -21, -16, -15, 0, /* snap_y */
    'm', 26, -28,
    'c', 25, -16, 13, -16, 13, -16,
    'c', 8, -16, 0, -19, 0, -29,
    'c', 0, -34, 3, -42, 13, -42,
    'c', 24, -42, 26, -32, 26, -23,
    'c', 26, -14, 24, 0, 12, 0,
    'c', 7, 0, 4, -2, 2, -6,
    'e',
/* 0x3a ':'  offset 1063 */
    0, 4, 28, 0, 2, 3,
    0, 4, /* snap_x */
    -21, -15, 0, /* snap_y */
    'm', 2, -28,
    'c', -1, -28, -1, -24, 2, -24,
    'c', 5, -24, 5, -28, 2, -28,
    'm', 2, -4,
    'c', -1, -4, -1, 0, 2, 0,
    'c', 5, 0, 5, -4, 2, -4,
    'e',
/* 0x3b ';'  offset 1109 */
    0, 4, 28, 8, 2, 3,
    0, 4, /* snap_x */
    -21, -15, 0, /* snap_y */
    'm', 2, -28,
    'c', -1, -28, -1, -24, 2, -24,
    'c', 5, -24, 5, -28, 2, -28,
    'm', 4, -2,
    'c', 4, 1, 0, 1, 0, -2,
    'c', 0, -5, 4, -5, 4, -2,
    'c', 4, 3, 2, 6, 0, 8,
    'e',
/* 0x3c '<'  offset 1162 */
    0, 32, 36, 0, 2, 3,
    0, 32, /* snap_x */
    -36, -18, 0, /* snap_y */
    'm', 32, -36,
    'l', 0, -18,
    'l', 32, 0,
    'e',
/* 0x3d '='  offset 1183 */
    0, 36, 24, -12, 2, 2,
    0, 36, /* snap_x */
    -24, -15, /* snap_y */
    'm', 0, -24,
    'l', 36, -24,
    'm', 0, -12,
    'l', 36, -12,
    'e',
    'X', 'X', 'X',
/* 0x3e '>'  offset 1209 */
    0, 32, 36, 0, 2, 3,
    0, 32, /* snap_x */
    -36, -18, 0, /* snap_y */
    'm', 0, -36,
    'l', 32, -18,
    'l', 0, 0,
    'e',
/* 0x3f '?'  offset 1230 */
    0, 24, 42, 0, 3, 4,
    0, 12, 24, /* snap_x */
    -42, -21, -15, 0, /* snap_y */
    'm', 0, -32,
    'c', 0, -34, 0, -42, 12, -42,
    'c', 24, -42, 24, -34, 24, -32,
    'c', 24, -29, 24, -24, 12, -20,
    'l', 12, -14,
    'm', 12, 0,
    'l', 12, 0,
    'e',
    'X', 'X', 'X',
    'X', 'X', 'X',
    'X', 'X', 'X',
    'X', 'X',
/* 0x40 '@'  offset 1288 */
    0, 42, 42, 0, 1, 6,
    30, /* snap_x */
    -42, -32, -21, -15, -10, 0, /* snap_y */
    'm', 30, -26,
    'c', 28, -31, 24, -32, 21, -32,
    'c', 10, -32, 10, -23, 10, -19,
    'c', 10, -13, 11, -10, 19, -10,
    'c', 30, -10, 28, -21, 30, -32,
    'c', 27, -10, 30, -10, 34, -10,
    'c', 41, -10, 42, -19, 42, -22,
    'c', 42, -34, 34, -42, 21, -42,
    'c', 9, -42, 0, -34, 0, -21,
    'c', 0, -9, 8, 0, 21, 0,
    'c', 30, 0, 34, -3, 36, -6,
    'e',
/* 0x41 'A'  offset 1375 */
    0, 32, 42, 0, 2, 3,
    0, 32, /* snap_x */
    -42, -14, 0, /* snap_y */
    'm', 0, 0,
    'l', 16, -42,
    'l', 32, 0,
    'm', 6, -14,
    'l', 26, -14,
    'e',
    'X', 'X', 'X',
    'X',
/* 0x42 'B'  offset 1406 */
    0, 28, 42, 0, 2, 3,
    0, 28, /* snap_x */
    -42, -22, 0, /* snap_y */
    'm', 0, 0,
    'l', 0, -42,
    'l', 18, -42,
    'c', 32, -42, 32, -22, 18, -22,
    'l', 0, -22,
    'l', 18, -22,
    'c', 32, -22, 32, 0, 18, 0,
    'E',
    'X', 'X', 'X',
    'X', 'X', 'X',
    'X', 'X',
/* 0x43 'C'  offset 1455 */
    0, 30, 42, 0, 2, 4,
    0, 30, /* snap_x */
    -42, -21, -15, 0, /* snap_y */
    'm', 30, -32,
    'c', 26, -42, 21, -42, 16, -42,
    'c', 2, -42, 0, -29, 0, -21,
    'c', 0, -13, 2, 0, 16, 0,
    'c', 21, 0, 26, 0, 30, -10,
    'e',
/* 0x44 'D'  offset 1499 */
    0, 28, 42, 0, 2, 2,
    0, 28, /* snap_x */
    -42, 0, /* snap_y */
    'm', 0, 0,
    'l', 0, -42,
    'l', 14, -42,
    'c', 33, -42, 33, 0, 14, 0,
    'E',
    'X', 'X', 'X',
    'X', 'X', 'X',
    'X', 'X',
/* 0x45 'E'  offset 1534 */
    0, 26, 42, 0, 2, 3,
    0, 26, /* snap_x */
    -42, -22, 0, /* snap_y */
    'm', 26, -42,
    'l', 0, -42,
    'l', 0, 0,
    'l', 26, 0,
    'm', 0, -22,
    'l', 16, -22,
    'e',
    'X', 'X', 'X',
    'X', 'X', 'X',
    'X', 'X',
/* 0x46 'F'  offset 1572 */
    0, 26, 42, 0, 2, 3,
    0, 26, /* snap_x */
    -42, -22, 0, /* snap_y */
    'm', 0, 0,
    'l', 0, -42,
    'l', 26, -42,
    'm', 0, -22,
    'l', 16, -22,
    'e',
    'X', 'X', 'X',
    'X', 'X',
/* 0x47 'G'  offset 1604 */
    0, 30, 42, 0, 2, 5,
    0, 30, /* snap_x */
    -42, -21, -16, -15, 0, /* snap_y */
    'm', 30, -32,
    'c', 26, -42, 21, -42, 16, -42,
    'c', 2, -42, 0, -29, 0, -21,
    'c', 0, -13, 2, 0, 16, 0,
    'c', 28, 0, 30, -7, 30, -16,
    'l', 20, -16,
    'e',
    'X', 'X', 'X',
/* 0x48 'H'  offset 1655 */
    0, 28, 42, 0, 2, 3,
    0, 28, /* snap_x */
    -42, -22, 0, /* snap_y */
    'm', 0, -42,
    'l', 0, 0,
    'm', 28, -42,
    'l', 28, 0,
    'm', 0, -22,
    'l', 28, -22,
    'e',
    'X',
/* 0x49 'I'  offset 1686 */
    0, 0, 42, 0, 1, 2,
    0, /* snap_x */
    -42, 0, /* snap_y */
    'm', 0, -42,
    'l', 0, 0,
    'e',
    'X',
/* 0x4a 'J'  offset 1703 */
    0, 20, 42, 0, 2, 3,
    0, 20, /* snap_x */
    -42, -15, 0, /* snap_y */
    'm', 20, -42,
    'l', 20, -10,
    'c', 20, 3, 0, 3, 0, -10,
    'l', 0, -14,
    'e',
/* 0x4b 'K'  offset 1731 */
    0, 28, 42, 0, 2, 3,
    0, 28, /* snap_x */
    -42, -15, 0, /* snap_y */
    'm', 0, -42,
    'l', 0, 0,
    'm', 28, -42,
    'l', 0, -14,
    'm', 10, -24,
    'l', 28, 0,
    'e',
/* 0x4c 'L'  offset 1761 */
    0, 24, 42, 0, 2, 2,
    0, 24, /* snap_x */
    -42, 0, /* snap_y */
    'm', 0, -42,
    'l', 0, 0,
    'l', 24, 0,
    'e',
    'X', 'X', 'X',
    'X',
/* 0x4d 'M'  offset 1785 */
    0, 32, 42, 0, 2, 2,
    0, 32, /* snap_x */
    -42, 0, /* snap_y */
    'm', 0, 0,
    'l', 0, -42,
    'l', 16, 0,
    'l', 32, -42,
    'l', 32, 0,
    'e',
    'X', 'X', 'X',
    'X', 'X', 'X',
    'X', 'X', 'X',
    'X',
/* 0x4e 'N'  offset 1821 */
    0, 28, 42, 0, 2, 2,
    0, 28, /* snap_x */
    -42, 0, /* snap_y */
    'm', 0, 0,
    'l', 0, -42,
    'l', 28, 0,
    'l', 28, -42,
    'e',
    'X', 'X', 'X',
    'X', 'X', 'X',
    'X',
/* 0x4f 'O'  offset 1851 */
    0, 32, 42, 0, 2, 4,
    0, 32, /* snap_x */
    -42, -21, -15, 0, /* snap_y */
    'm', 16, -42,
    'c', 2, -42, 0, -29, 0, -21,
    'c', 0, -13, 2, 0, 16, 0,
    'c', 30, 0, 32, -13, 32, -21,
    'c', 32, -29, 30, -42, 16, -42,
    'E',
/* 0x50 'P'  offset 1895 */
    0, 28, 42, 0, 2, 5,
    0, 28, /* snap_x */
    -42, -21, -20, -15, 0, /* snap_y */
    'm', 0, 0,
    'l', 0, -42,
    'l', 18, -42,
    'c', 32, -42, 32, -20, 18, -20,
    'l', 0, -20,
    'e',
    'X', 'X', 'X',
/* 0x51 'Q'  offset 1931 */
    0, 32, 42, 4, 2, 4,
    0, 32, /* snap_x */
    -42, -21, -15, 0, /* snap_y */
    'm', 16, -42,
    'c', 2, -42, 0, -29, 0, -21,
    'c', 0, -13, 2, 0, 16, 0,
    'c', 30, 0, 32, -13, 32, -21,
    'c', 32, -29, 30, -42, 16, -42,
    'M', 18, -8,
    'l', 30, 4,
    'e',
/* 0x52 'R'  offset 1981 */
    0, 28, 42, 0, 2, 5,
    0, 28, /* snap_x */
    -42, -22, -21, -15, 0, /* snap_y */
    'm', 0, 0,
    'l', 0, -42,
    'l', 18, -42,
    'c', 32, -42, 31, -22, 18, -22,
    'l', 0, -22,
    'm', 14, -22,
    'l', 28, 0,
    'e',
    'X', 'X', 'X',
/* 0x53 'S'  offset 2023 */
    0, 28, 42, 0, 2, 4,
    0, 28, /* snap_x */
    -42, -21, -15, 0, /* snap_y */
    'm', 28, -36,
    'c', 25, -41, 21, -42, 14, -42,
    'c', 10, -42, 0, -42, 0, -34,
    'c', 0, -17, 28, -28, 28, -9,
    'c', 28, 0, 19, 0, 14, 0,
    'c', 7, 0, 3, -1, 0, -6,
    'e',
/* 0x54 'T'  offset 2074 */
    0, 28, 42, 0, 3, 4,
    0, 14, 28, /* snap_x */
    -42, -21, -15, 0, /* snap_y */
    'm', 14, -42,
    'l', 14, 0,
    'm', 0, -42,
    'l', 28, -42,
    'e',
/* 0x55 'U'  offset 2100 */
    0, 28, 42, 0, 2, 2,
    0, 28, /* snap_x */
    -42, 0, /* snap_y */
    'm', 0, -42,
    'l', 0, -12,
    'c', 0, 4, 28, 4, 28, -12,
    'l', 28, -42,
    'e',
    'X',
/* 0x56 'V'  offset 2128 */
    0, 32, 42, 0, 2, 2,
    0, 32, /* snap_x */
    -42, 0, /* snap_y */
    'm', 0, -42,
    'l', 16, 0,
    'l', 32, -42,
    'e',
    'X', 'X', 'X',
    'X',
/* 0x57 'W'  offset 2152 */
    0, 40, 42, 0, 2, 2,
    0, 40, /* snap_x */
    -42, 0, /* snap_y */
    'm', 0, -42,
    'l', 10, 0,
    'l', 20, -42,
    'l', 30, 0,
    'l', 40, -42,
    'e',
    'X', 'X', 'X',
    'X', 'X', 'X',
    'X', 'X', 'X',
    'X',
/* 0x58 'X'  offset 2188 */
    0, 28, 42, 0, 2, 2,
    0, 28, /* snap_x */
    -42, 0, /* snap_y */
    'm', 0, -42,
    'l', 28, 0,
    'm', 28, -42,
    'l', 0, 0,
    'e',
    'X',
/* 0x59 'Y'  offset 2212 */
    0, 32, 42, 0, 3, 3,
    0, 16, 32, /* snap_x */
    -42, -21, 0, /* snap_y */
    'm', 0, -42,
    'l', 16, -22,
    'l', 16, 0,
    'm', 32, -42,
    'l', 16, -22,
    'e',
/* 0x5a 'Z'  offset 2240 */
    0, 28, 42, 0, 2, 4,
    0, 28, /* snap_x */
    -42, -21, -15, 0, /* snap_y */
    'm', 28, 0,
    'l', 0, 0,
    'l', 28, -42,
    'l', 0, -42,
    'e',
    'X', 'X', 'X',
    'X', 'X', 'X',
/* 0x5b '['  offset 2271 */
    0, 14, 44, 0, 2, 4,
    0, 14, /* snap_x */
    -44, -21, -15, 0, /* snap_y */
    'm', 14, -44,
    'l', 0, -44,
    'l', 0, 0,
    'l', 14, 0,
    'e',
/* 0x5c '\'  offset 2296 */
    0, 36, 50, 14, 2, 3,
    0, 36, /* snap_x */
    -21, -15, 0, /* snap_y */
    'm', 0, -50,
    'l', 36, 14,
    'e',
/* 0x5d ']'  offset 2314 */
    0, 14, 44, 0, 2, 4,
    0, 14, /* snap_x */
    -44, -21, -15, 0, /* snap_y */
    'm', 0, -44,
    'l', 14, -44,
    'l', 14, 0,
    'l', 0, 0,
    'e',
/* 0x5e '^'  offset 2339 */
    0, 32, 46, -18, 2, 3,
    0, 32, /* snap_x */
    -21, -15, 0, /* snap_y */
    'm', 0, -18,
    'l', 16, -46,
    'l', 32, -18,
    'e',
    'X', 'X', 'X',
/* 0x5f '_'  offset 2363 */
    0, 36, 0, 0, 2, 1,
    0, 36, /* snap_x */
    0, /* snap_y */
    'm', 0, 0,
    'l', 36, 0,
    'e',
    'X', 'X',
/* 0x60 '`'  offset 2381 */
    0, 4, 42, -30, 2, 2,
    0, 4, /* snap_x */
    -42, 0, /* snap_y */
    'm', 4, -42,
    'c', 2, -40, 0, -39, 0, -32,
    'c', 0, -31, 1, -30, 2, -30,
    'c', 5, -30, 5, -34, 2, -34,
    'e',
    'X',
/* 0x61 'a'  offset 2417 */
    0, 24, 28, 0, 2, 4,
    0, 24, /* snap_x */
    -28, -21, -15, 0, /* snap_y */
    'm', 24, -28,
    'l', 24, 0,
    'm', 24, -22,
    'c', 21, -27, 18, -28, 13, -28,
    'c', 2, -28, 0, -19, 0, -14,
    'c', 0, -9, 2, 0, 13, 0,
    'c', 18, 0, 21, -1, 24, -6,
    'e',
/* 0x62 'b'  offset 2467 */
    0, 24, 42, 0, 2, 4,
    0, 24, /* snap_x */
    -42, -28, -15, 0, /* snap_y */
    'm', 0, -42,
    'l', 0, 0,
    'm', 0, -22,
    'c', 3, -26, 6, -28, 11, -28,
    'c', 22, -28, 24, -19, 24, -14,
    'c', 24, -9, 22, 0, 11, 0,
    'c', 6, 0, 3, -2, 0, -6,
    'e',
/* 0x63 'c'  offset 2517 */
    0, 24, 28, 0, 2, 4,
    0, 24, /* snap_x */
    -28, -21, -15, 0, /* snap_y */
    'm', 24, -22,
    'c', 21, -26, 18, -28, 13, -28,
    'c', 2, -28, 0, -19, 0, -14,
    'c', 0, -9, 2, 0, 13, 0,
    'c', 18, 0, 21, -2, 24, -6,
    'e',
/* 0x64 'd'  offset 2561 */
    0, 24, 42, 0, 2, 4,
    0, 24, /* snap_x */
    -42, -28, -15, 0, /* snap_y */
    'm', 24, -42,
    'l', 24, 0,
    'm', 24, -22,
    'c', 21, -26, 18, -28, 13, -28,
    'c', 2, -28, 0, -19, 0, -14,
    'c', 0, -9, 2, 0, 13, 0,
    'c', 18, 0, 21, -2, 24, -6,
    'e',
/* 0x65 'e'  offset 2611 */
    0, 24, 28, 0, 2, 5,
    0, 24, /* snap_x */
    -28, -21, -16, -15, 0, /* snap_y */
    'm', 0, -16,
    'l', 24, -16,
    'c', 24, -20, 24, -28, 13, -28,
    'c', 2, -28, 0, -19, 0, -14,
    'c', 0, -9, 2, 0, 13, 0,
    'c', 18, 0, 21, -2, 24, -6,
    'e',
/* 0x66 'f'  offset 2659 */
    0, 16, 42, 0, 3, 5,
    0, 6, 16, /* snap_x */
    -42, -28, -21, -15, 0, /* snap_y */
    'm', 16, -42,
    'c', 8, -42, 6, -40, 6, -34,
    'l', 6, 0,
    'm', 0, -28,
    'l', 14, -28,
    'e',
/* 0x67 'g'  offset 2693 */
    0, 24, 28, 14, 2, 5,
    0, 24, /* snap_x */
    -28, -21, -15, 0, 14, /* snap_y */
    'm', 24, -28,
    'l', 24, 4,
    'c', 23, 14, 16, 14, 13, 14,
    'c', 10, 14, 8, 14, 6, 12,
    'm', 24, -22,
    'c', 21, -26, 18, -28, 13, -28,
    'c', 2, -28, 0, -19, 0, -14,
    'c', 0, -9, 2, 0, 13, 0,
    'c', 18, 0, 21, -2, 24, -6,
    'e',
/* 0x68 'h'  offset 2758 */
    0, 22, 42, 0, 2, 4,
    0, 22, /* snap_x */
    -42, -28, -15, 0, /* snap_y */
    'm', 0, -42,
    'l', 0, 0,
    'm', 0, -20,
    'c', 8, -32, 22, -31, 22, -20,
    'l', 22, 0,
    'e',
/* 0x69 'i'  offset 2790 */
    0, 0, 44, 0, 1, 3,
    0, /* snap_x */
    -42, -28, 0, /* snap_y */
    'm', 0, -42,
    'l', 0, -42,
    'm', 0, -28,
    'l', 0, 0,
    'e',
    'X', 'X', 'X',
    'X', 'X', 'X',
    'X', 'X', 'X',
    'X', 'X',
    'X', 'X',
/* 0x6a 'j'  offset 2826 */
    -8, 4, 44, 14, 3, 5,
    -8, 2, 4, /* snap_x */
    -42, -21, -15, 0, 14, /* snap_y */
    'm', 2, -42,
    'l', 2, -42,
    'm', 2, -28,
    'l', 2, 6,
    'c', 2, 13, -1, 14, -8, 14,
    'e',
    'X', 'X', 'X',
    'X', 'X', 'X',
    'X', 'X', 'X',
    'X',
/* 0x6b 'k'  offset 2870 */
    0, 22, 42, 0, 2, 3,
    0, 22, /* snap_x */
    -42, -28, 0, /* snap_y */
    'm', 0, -42,
    'l', 0, 0,
    'm', 20, -28,
    'l', 0, -8,
    'm', 8, -16,
    'l', 22, 0,
    'e',
/* 0x6c 'l'  offset 2900 */
    0, 0, 42, 0, 1, 2,
    0, /* snap_x */
    -42, 0, /* snap_y */
    'm', 0, -42,
    'l', 0, 0,
    'e',
    'X',
/* 0x6d 'm'  offset 2917 */
    0, 44, 28, 0, 3, 3,
    0, 22, 44, /* snap_x */
    -28, -21, 0, /* snap_y */
    'm', 0, -28,
    'l', 0, 0,
    'm', 0, -20,
    'c', 5, -29, 22, -33, 22, -20,
    'l', 22, 0,
    'm', 22, -20,
    'c', 27, -29, 44, -33, 44, -20,
    'l', 44, 0,
    'e',
    'X',
/* 0x6e 'n'  offset 2963 */
    0, 22, 28, 0, 2, 3,
    0, 22, /* snap_x */
    -28, -21, 0, /* snap_y */
    'm', 0, -28,
    'l', 0, 0,
    'm', 0, -20,
    'c', 4, -28, 22, -34, 22, -20,
    'l', 22, 0,
    'e',
    'X',
/* 0x6f 'o'  offset 2995 */
    0, 26, 28, 0, 2, 4,
    0, 26, /* snap_x */
    -28, -21, -15, 0, /* snap_y */
    'm', 13, -28,
    'c', 2, -28, 0, -19, 0, -14,
    'c', 0, -9, 2, 0, 13, 0,
    'c', 24, 0, 26, -9, 26, -14,
    'c', 26, -19, 24, -28, 13, -28,
    'E',
/* 0x70 'p'  offset 3039 */
    0, 24, 28, 14, 2, 4,
    0, 24, /* snap_x */
    -28, -21, 0, 14, /* snap_y */
    'm', 0, -28,
    'l', 0, 14,
    'm', 0, -22,
    'c', 3, -26, 6, -28, 11, -28,
    'c', 22, -28, 24, -19, 24, -14,
    'c', 24, -9, 22, 0, 11, 0,
    'c', 6, 0, 3, -2, 0, -6,
    'e',
/* 0x71 'q'  offset 3089 */
    0, 24, 28, 14, 2, 4,
    0, 24, /* snap_x */
    -28, -21, 0, 14, /* snap_y */
    'm', 24, -28,
    'l', 24, 14,
    'm', 24, -22,
    'c', 21, -26, 18, -28, 13, -28,
    'c', 2, -28, 0, -19, 0, -14,
    'c', 0, -9, 2, 0, 13, 0,
    'c', 18, 0, 21, -2, 24, -6,
    'e',
/* 0x72 'r'  offset 3139 */
    0, 16, 28, 0, 2, 4,
    0, 16, /* snap_x */
    -28, -21, -15, 0, /* snap_y */
    'm', 0, -28,
    'l', 0, 0,
    'm', 0, -16,
    'c', 2, -27, 7, -28, 16, -28,
    'e',
/* 0x73 's'  offset 3168 */
    0, 22, 28, 0, 2, 4,
    0, 22, /* snap_x */
    -28, -21, -15, 0, /* snap_y */
    'm', 22, -22,
    'c', 22, -27, 16, -28, 11, -28,
    'c', 4, -28, 0, -26, 0, -22,
    'c', 0, -11, 22, -20, 22, -7,
    'c', 22, 0, 17, 0, 11, 0,
    'c', 6, 0, 0, -1, 0, -6,
    'e',
/* 0x74 't'  offset 3219 */
    0, 16, 42, 0, 3, 4,
    0, 6, 16, /* snap_x */
    -42, -28, -21, 0, /* snap_y */
    'm', 6, -42,
    'l', 6, -8,
    'c', 6, -2, 8, 0, 16, 0,
    'm', 0, -28,
    'l', 14, -28,
    'e',
/* 0x75 'u'  offset 3252 */
    0, 22, 28, 0, 2, 3,
    0, 22, /* snap_x */
    -28, -15, 0, /* snap_y */
    'm', 0, -28,
    'l', 0, -8,
    'c', 0, 6, 18, 0, 22, -8,
    'm', 22, -28,
    'l', 22, 0,
    'e',
/* 0x76 'v'  offset 3283 */
    0, 24, 28, 0, 2, 3,
    0, 24, /* snap_x */
    -28, -15, 0, /* snap_y */
    'm', 0, -28,
    'l', 12, 0,
    'l', 24, -28,
    'e',
    'X', 'X', 'X',
/* 0x77 'w'  offset 3307 */
    0, 32, 28, 0, 2, 3,
    0, 32, /* snap_x */
    -28, -15, 0, /* snap_y */
    'm', 0, -28,
    'l', 8, 0,
    'l', 16, -28,
    'l', 24, 0,
    'l', 32, -28,
    'e',
    'X', 'X', 'X',
    'X', 'X', 'X',
    'X', 'X', 'X',
/* 0x78 'x'  offset 3343 */
    0, 22, 28, 0, 2, 2,
    0, 22, /* snap_x */
    -28, 0, /* snap_y */
    'm', 0, -28,
    'l', 22, 0,
    'm', 22, -28,
    'l', 0, 0,
    'e',
    'X',
/* 0x79 'y'  offset 3367 */
    -2, 24, 28, 14, 2, 4,
    0, 24, /* snap_x */
    -28, -15, 0, 14, /* snap_y */
    'm', 0, -28,
    'l', 12, 0,
    'm', 24, -28,
    'l', 12, 0,
    'c', 6, 13, 0, 14, -2, 14,
    'e',
/* 0x7a 'z'  offset 3399 */
    0, 22, 28, 0, 2, 4,
    0, 22, /* snap_x */
    -28, -21, -15, 0, /* snap_y */
    'm', 22, 0,
    'l', 0, 0,
    'l', 22, -28,
    'l', 0, -28,
    'e',
    'X', 'X', 'X',
    'X', 'X', 'X',
/* 0x7b '{'  offset 3430 */
    0, 16, 44, 0, 3, 5,
    0, 6, 16, /* snap_x */
    -44, -24, -21, -15, 0, /* snap_y */
    'm', 16, -44,
    'c', 10, -44, 6, -42, 6, -36,
    'l', 6, -24,
    'l', 0, -24,
    'l', 6, -24,
    'l', 6, -8,
    'c', 6, -2, 10, 0, 16, 0,
    'e',
/* 0x7c '|'  offset 3474 */
    0, 0, 50, 14, 1, 2,
    0, /* snap_x */
    -50, 14, /* snap_y */
    'm', 0, -50,
    'l', 0, 14,
    'e',
    'X',
/* 0x7d '}'  offset 3491 */
    0, 16, 44, 0, 3, 5,
    0, 10, 16, /* snap_x */
    -44, -24, -21, -15, 0, /* snap_y */
    'm', 0, -44,
    'c', 6, -44, 10, -42, 10, -36,
    'l', 10, -24,
    'l', 16, -24,
    'l', 10, -24,
    'l', 10, -8,
    'c', 10, -2, 6, 0, 0, 0,
    'e',
/* 0x7e '~'  offset 3535 */
    0, 36, 24, -12, 2, 5,
    0, 36, /* snap_x */
    -24, -21, -15, -12, 0, /* snap_y */
    'm', 0, -14,
    'c', 1, -21, 4, -24, 8, -24,
    'c', 18, -24, 18, -12, 28, -12,
    'c', 32, -12, 35, -15, 36, -22,
    'e',
};

const uint16_t _cairo_twin_charmap[128] = {
    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,
    28,   40,   90,  114,  152,  224,  323,  390,
    419,  441,  463,  494,  520,  556,  575,  604,
    622,  666,  691,  736,  780,  809,  860,  919,
    944, 1004, 1063, 1109, 1162, 1183, 1209, 1230,
    1288, 1375, 1406, 1455, 1499, 1534, 1572, 1604,
    1655, 1686, 1703, 1731, 1761, 1785, 1821, 1851,
    1895, 1931, 1981, 2023, 2074, 2100, 2128, 2152,
    2188, 2212, 2240, 2271, 2296, 2314, 2339, 2363,
    2381, 2417, 2467, 2517, 2561, 2611, 2659, 2693,
    2758, 2790, 2826, 2870, 2900, 2917, 2963, 2995,
    3039, 3089, 3139, 3168, 3219, 3252, 3283, 3307,
    3343, 3367, 3399, 3430, 3474, 3491, 3535,    0,
};


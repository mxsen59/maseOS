#pragma once 

#include <stdint.h>
#include <stddef.h>

enum {
    PRINT_BLACK = 0,
    PRINT_BLUE = 1,
    PRINT_GREEN = 2,
    PRINT_CYAN = 3,
    PRINT_RED = 4,
    PRINT_MAGENTA = 5,
    PRINT_BROWN = 6,
    PRINT_LIGHT_GRAY = 7,
    PRINT_DARK_GRAY = 8,
    PRINT_LIGHT_BLUE = 9,
    PRINT_LIGHT_GREEN = 10,
    PRINT_LIGHT_CYAN = 11,
    PRINT_LIGHT_RED = 12,
    PRINT_PINK = 13,
    PRINT_YELLOW = 14,
    PRINT_WHITE = 15,
};

void printClear();
void printChar(char character);
void printStr(char* string);
void printSetColor(uint8_t foreground, uint8_t background);
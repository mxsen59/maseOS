#include "print.h"

void kernelMain()
{
    printClear();
    printSetColor(PRINT_YELLOW, PRINT_BLACK);
    printStr("Welcome to MaseOS!");
}
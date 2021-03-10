#include "print.h"
#include "../cpu/idt.h"
#include "../cpu/isr.h"
#include "../cpu/timer.h"
#include "../drivers/display.h"
#include "../drivers/keyboard.h"

void kernelMain()
{
    printClear();
    printSetColor(PRINT_GREEN, PRINT_BLACK);
    printStr(" __   __ _______ _______ _______ _______ _______ \n");
    printStr("|  |_|  |       |       |       |       |       |\n");
    printStr("|       |   _   |  _____|    ___|   _   |  _____|\n");
    printStr("|       |  |_|  | |_____|   |___|  | |  | |_____ \n");
    printStr("|       |       |_____  |    ___|  |_|  |_____  |\n");
    printStr("| ||_|| |   _   |_____| |   |___|       |_____| |\n");
    printStr("|_|   |_|__| |__|_______|_______|_______|_______|\n");
    printStr("=================================================\n");
    printStr("\nAlpha Build\n");
    printSetColor(PRINT_LIGHT_BLUE, PRINT_BLACK);
    printStr("\nInstalling interrupt service routines (ISRs)...\n\n");
    //isr_install();
    printStr("Initializing keyboard (IRQ 1)...\n\n");
    //init_keyboard();
    printSetColor(PRINT_GREEN, PRINT_BLACK);
    printStr("s) to open shell\n");
    printStr("r) to reboot");
    printSetColor(PRINT_YELLOW, PRINT_BLACK);
    printStr("\n\ncommand> ");
}

void execute_command(char *input) {
    if (compare_string(input, "EXIT") == 0) {
        printStr("Exiting...\n");
        asm volatile("hlt");
    }
    printStr("Unknown command: ");
    printStr(input);
    printStr("\ncommand> ");
}
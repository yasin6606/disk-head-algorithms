#include "../main.h"
#include "../sharedMacros.h"

void showMenu(void) {
    char *item[MENU_NUM] = {"SSTF", "FCFS", "Scan", "C-Scan", "Look", "C-Look"};

    printf("Algorithm Menu:\n");

    for (int i = 0; i < MENU_NUM; i++) {
        printf("\t%s%d.%s%s\n", ANSI_COLOR_CYAN, i + 1, ANSI_COLOR_RESET, item[i]);
    }

    puts("");
}

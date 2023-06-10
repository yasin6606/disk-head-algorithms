#include "../main.h"
#include "../algorithms/algorithms.h"

void algorithmSwitcher(int selection) {
    switch (selection) {
        case 1:
            sstf();
            break;
        case 2:
            sstf();
            break;
        case 3:
            sstf();
            break;
        case 4:
            sstf();
            break;
        case 5:
            sstf();
            break;
        case 6:
            sstf();
            break;
        default:
            printf("\n%sWrong!%s\n", ANSI_COLOR_RED, ANSI_COLOR_RESET);
    }
}

#include "../main.h"
#include "../algorithms/algorithms.h"

void algorithmSwitcher(int selection, int *cylinderList, int cylinderLen) {
    switch (selection) {
        case 1:
            fcfs(cylinderList, cylinderLen);
            break;
        case 2:
            sstf(cylinderList, cylinderLen);
            break;
        case 3:
            scan(cylinderList, cylinderLen);
            break;
        case 4:
            cScan(cylinderList, cylinderLen);
            break;
        case 5:
            look(cylinderList, cylinderLen);
            break;
        case 6:
            cLook(cylinderList, cylinderLen);
            break;
        default:
            printf("\n%sWrong!%s\n", ANSI_COLOR_RED, ANSI_COLOR_RESET);
    }
}

#ifndef HW3_MENU_H
#define HW3_MENU_H

#include "defaultInfo.c"
#include "showMenu.c"
#include "getUserSelection.c"
#include "getCylinderList.c"
#include "algorithmSwitcher.c"


void defaultInfo(void);

void showMenu(void);

int getUserSelection(void);

void *getCylinderList(int *cylinderList, int *cylinderLen);

void algorithmSwitcher(int selection, int *cylinderList, int cylinderLen);

#endif //HW3_MENU_H

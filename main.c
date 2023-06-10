#include "main.h"
#include "menu/menu.h"

int main() {
    int selection, cylinderLen = 0, *pLen = &cylinderLen, *cylinderList = (int *) calloc(cylinderLen, sizeof(int));

    system("cls || clear");

    defaultInfo();

    showMenu();

    selection = getUserSelection();

    getCylinderList(cylinderList, pLen);

    algorithmSwitcher(selection, cylinderList, cylinderLen);

    return 0;
}
#include "main.h"
#include "menu/menu.h"

int main() {
    int selection;

    system("cls || clear");

    defaultInfo();

    showMenu();

    selection = getUserSelection();

    algorithmSwitcher(selection);

    return 0;
}
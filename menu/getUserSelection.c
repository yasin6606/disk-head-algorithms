#include "../main.h"
#include "../sharedMacros.h"

int getUserSelection(void) {
    int selection;

    printf("\nEnter the number of Algorithm in order to run: ");
    scanf("%d", &selection);
    fflush(stdout);

    while (selection > MENU_NUM || selection <= 0) {
        printf("\nPlease Enter correct menu number: ");
        scanf("%d", &selection);
    }

    return selection;
}

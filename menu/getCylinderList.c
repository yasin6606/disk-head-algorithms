#include "../main.h"
#include "../sharedMacros.h"

void *getCylinderList(int *cylinderList, int *cylinderLen) {
    int *list = (int *) calloc(DEFAULT_CYLINDER_NUM, sizeof(int)), item = 0, i = 0;

    printf("\nEnter the number of cylinders %s(To Finish JUST enter -1)%s: \n\n", ANSI_COLOR_RED, ANSI_COLOR_RESET);

    while (item != -1) {
        printf("Cylinder number #%d: ", i + 1);
        fflush(stdout);

        scanf("%d", &item);

        // Increase array length
        list = (int *) realloc(list, (i + 1) * sizeof(int));

        // Check to cylinder number be a positive number
        if (item < 0) continue;

        list[i] = item;

        i++;
    }

    for (int j = 0; j < i; j++)
        cylinderList[j] = list[j];

    (*cylinderLen) = i;
}
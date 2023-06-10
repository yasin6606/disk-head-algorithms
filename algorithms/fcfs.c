#include "../main.h"

void fcfs(int *cylinderList, int cylinderLen) {
    int sum = 0;

    for (int i = 0; i < cylinderLen - 1; i++)
        sum += abs(cylinderList[i] - cylinderList[i + 1]);

    printf("\nsum: %d\n", sum);
}
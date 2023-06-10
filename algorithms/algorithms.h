#ifndef HW3_ALGORITHMS_H
#define HW3_ALGORITHMS_H

#include "sstf.c"
#include "fcfs.c"
#include "scan.c"
#include "cScan.c"
#include "look.c"
#include "cLook.c"

void sstf(int *cylinderList, int cylinderLen);

void fcfs(int *cylinderList, int cylinderLen);

void scan(int *cylinderList, int cylinderLen);

void cScan(int *cylinderList, int cylinderLen);

void look(int *cylinderList, int cylinderLen);

void cLook(int *cylinderList, int cylinderLen);

#endif //HW3_ALGORITHMS_H

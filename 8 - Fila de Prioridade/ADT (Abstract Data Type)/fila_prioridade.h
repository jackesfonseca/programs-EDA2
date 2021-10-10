#ifndef __PQ__
#define __PQ__
#include "ordenacaomacros.h"

void PQinit(int);
int PQempty();
void PQinsert(Item);
Item PQdelmax();
void fixUp(Item *, int);
void fixDown(Item *, int, int);
#endif
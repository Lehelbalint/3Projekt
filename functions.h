//
// Created by lehel on 6/6/2021.
//

#include "kupac.h"
#include "binarisfa.h"
#include <windows.h>
#ifndef INC_3PROJEKT_FUNCTIONS_H
#define INC_3PROJEKT_FUNCTIONS_H
double  readAndGiveResultBT(Node **,const char *);
double SearchResultBT(Node *node,const char * info);
double DeleteResultBT(Node *node,const char * info);
double readAndGiveResultHeap(heap **,const char *);
double SearchResultHeap(heap *,const char *info);
double DeleteResultHeap(heap *);

#endif //INC_3PROJEKT_FUNCTIONS_H

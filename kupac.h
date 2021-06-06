//
// Created by lehel on 6/4/2021.
//

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#ifndef INC_3PROJEKT_KUPAC_H
#define INC_3PROJEKT_KUPAC_H

typedef struct heap{
    char **data;
    int size;
    int maxSize;
}heap;
heap *createHeap(int max);
void emel(heap** h, int i);
void insertheap(heap** h, const char * info);
void sullyeszt(heap** h, int i);
void printHeap( heap *);
void torolmax(heap **h);
bool searchHeap(heap *h1,const char * info);
void kupacrendez(heap *h, int N);
#endif //INC_3PROJEKT_KUPAC_H

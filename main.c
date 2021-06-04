#include <stdio.h>
#include "binarisfa.h"
#include "kupac.h"
int main() {
    heap * heap1=NULL;
    heap1=createHeap(100);
    insertheap(&heap1,"1");
    insertheap(&heap1,"4");
    insertheap(&heap1,"5");
    insertheap(&heap1,"3");
    insertheap(&heap1,"2");
    insertheap(&heap1,"6");
    insertheap(&heap1,"7");
    insertheap(&heap1,"8");
    insertheap(&heap1,"9");
    kupacrendez(heap1,10);
}
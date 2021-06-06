//
// Created by lehel on 6/4/2021.
//

#include "kupac.h"
heap *createHeap(int max) {
    heap* h = (heap*)malloc(sizeof(heap));
    h->size = 0;
    h->maxSize = max;
    h->data = (char **)malloc(max * sizeof(char *));
    return h;
}
void emel(heap** h, int i) {
    char seged[20];
    while ((i > 1) && ((strcmp((*h)->data[i/2] , (*h)->data[i])<0))) {
        strcpy(seged ,(*h)->data[i/2]);
        strcpy((*h)->data[i/2] ,(*h)->data[i]);
        strcpy((*h)->data[i] , seged);
        i /= 2;
    }
}
void insertheap(heap** h, const char * info) {
    if((*h)->size!=(*h)->maxSize) {
        (*h)->size++;
        (*h)->data[(*h)->size]=(char *)malloc((strlen(info)+1)*sizeof (char));
        strcpy((*h)->data[(*h)->size], info);
        emel(&(*h), (*h)->size);
    } else printf("A kupac megtelt");
}
void sullyeszt(heap** h, int i) {
    while (2*i <= (*h)->size) {
        int j = 2 * i;
        if (j < (*h)->size && strcmp((*h)->data[j] , (*h)->data[j+1])<0)
            j++;
        if (strcmp((*h)->data[j] , (*h)->data[i])<= 0) break;
        char seged[20];
        strcpy(seged ,(*h)->data[i]);
        strcpy((*h)->data[i] ,(*h)->data[j]);
        strcpy((*h)->data[j] , seged);
        i = j;
    }
}
void  torolmax(heap **h) {
    char seged[20];
    strcpy( seged , (*h)->data[1]);
    strcpy((*h)->data[1] , (*h)->data[(*h)->size]);
    strcpy((*h)->data[(*h)->size] , seged);
    (*h)->size--;
    sullyeszt(&(*h),1);
}
void printHeap(heap *h1)
{
    for(int i=1;i<=h1->size;++i)
        printf("%s ",h1->data[i]);
    printf("\n");
}
bool searchHeap(heap *h1,const char * info)
{
    for(int i=1;i<=h1->size;++i)
        if(strcmp(info,h1->data[i])==0)
        {
            return true;
        }
    return false;
}
void kupacrendez(heap *h, int N) {
    for (int i = N / 2; i >= 1; i--)
    {
        sullyeszt(&h, i);
    }
    for (int i = 1; i < N; i++)
    {
        torolmax(&h);
        sullyeszt(&h, 1);
    }
}

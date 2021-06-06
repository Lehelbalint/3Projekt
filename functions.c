//
// Created by lehel on 6/6/2021.
//

#include "functions.h"
double PCFreq = 0.0;
__int64 CounterStart = 0;
void StartCounter()
{
    LARGE_INTEGER li;
    if(!QueryPerformanceFrequency(&li))
        printf("QueryPerformanceFrequency failed!\n");

    PCFreq = (double)(li.QuadPart)/1000.0;

    QueryPerformanceCounter(&li);
    CounterStart = li.QuadPart;
}

double GetCounter()
{
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    return (double)(li.QuadPart-CounterStart)/PCFreq;
}
double  readAndGiveResultBT(Node ** root,const char * filename)
{
    double avgresult=0;
    FILE *fin=fopen(filename,"r");
    if(fin==NULL)
    {
        printf("Nem sikerult megnyitni a filet");
    }
    char info[30];
    int numofwords=0;
    while(fscanf(fin,"%s", info)==1)
    {
        numofwords++;
        StartCounter();
        insert(&(*root),info);
        avgresult+=GetCounter();
    }
    fclose(fin);
    return avgresult/numofwords;
}
double SearchResultBT(Node *node,const char * info)
{
    int counter=11;
    double avgResult=0,currentResult;
    for(int i = 0; i < counter; ++i) {
        StartCounter();
        search(node,info);
         currentResult= GetCounter();
        if(i > 0) {
            avgResult += currentResult;
        }
    }
    return avgResult/(counter-1);
}
double DeleteResultBT(Node *node,const char * info)
{
    int counter=11;
    double avgResult=0,currentResult;
    for(int i = 0; i < counter; ++i) {
        StartCounter();
        deleteNode(node,info);
        currentResult= GetCounter();
        if(i > 0) {
            avgResult += currentResult;
        }
    }
    return avgResult/(counter-1);
}
double readAndGiveResultHeap(heap ** heap1,const char * filename)
{
    double avgresult=0;
    FILE *fin=fopen(filename,"r");
    if(fin==NULL)
    {
        printf("Nem sikerult megnyitni a filet");
    }
    char info[30];
    int numofwords=0;
    while(fscanf(fin,"%s", info)==1)
    {
        numofwords++;
        StartCounter();
        insertheap(&(*heap1),info);
        avgresult+=GetCounter();
    }
    fclose(fin);
    return avgresult/numofwords;
}
double SearchResultHeap(heap * heap1,const char * info)
{
    int counter=11;
    double avgResult=0,currentResult;
    for(int i = 0; i < counter; ++i) {
        StartCounter();
        searchHeap(heap1,info);
        currentResult= GetCounter();
        if(i > 0) {
            avgResult += currentResult;
        }
    }
    return avgResult/(counter-1);
}
double DeleteResultHeap(heap * heap1)
{
    int counter=9;
    double avgResult=0,currentResult;
    for(int i = 0; i < counter; ++i) {
        StartCounter();
        torolmax(&heap1);
        currentResult= GetCounter();
        if(i > 0) {
            avgResult += currentResult;
        }
    }
    return avgResult/(counter-1);
}

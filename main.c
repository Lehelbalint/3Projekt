#include <stdio.h>
#include "binarisfa.h"
#include "kupac.h"
#include <windows.h>
#include "functions.h"


int main() {
    heap *heap1 = NULL;
    heap1 = createHeap(10000);
    Node *node = NULL;
    double resultread = 0,result=0;
    printf("Eredmenyek word1.txt allomanyhoz:\n");
    resultread = readAndGiveResultBT(&node, "word1.txt");
    //    Node * current=minValueNode(node);
    //    printf("%s",current->info);
    printf("\tBinary tree:\n\t\tBest Case: \n \t\t\tInsertion: %lf\n", resultread);
    result=SearchResultBT(node,"sad");
    printf("\t\t\tSearch: %lf\n",result);
    result=DeleteResultBT(node,"ashamed");
    printf("\t\t\tDelete: %lf\n",result);
    printf("\t\tAvgCase:\n");
    result=SearchResultBT(node,"chance");
    printf("\t\t\tInsertion: %lf\n",resultread);
    printf("\t\t\tSearch: %lf\n",result);
    result=DeleteResultBT(node,"chance");
    printf("\t\t\tDelete: %lf\n",result);
    printf("\t\tWorstCase:\n");
    printf("\t\t\tInsertion: %lf\n",resultread);
    result=SearchResultBT(node,"glue");
    printf("\t\t\tSearch: %lf\n",result);
    result=DeleteResultBT(node,"sad");
    printf("\t\t\tDelete: %lf\n",result);
    node=NULL;

    printf("Eredmenyek word2.txt allomanyhoz:\n");
    resultread = readAndGiveResultBT(&node, "word2.txt");
    printf("\tBinary tree:\n\t\tBest Case: \n \t\t\tInsertion: %lf\n", resultread);
    result=SearchResultBT(node,"squeamish");
    printf("\t\t\tSearch: %lf\n",result);
    result=DeleteResultBT(node,"approve");
    printf("\t\t\tDelete: %lf\n",result);
    printf("\t\tAvgCase:\n");
    result=SearchResultBT(node,"cakes");
    printf("\t\t\tInsertion: %lf\n",resultread);
    printf("\t\t\tSearch: %lf\n",result);
    result=DeleteResultBT(node,"cakes");
    printf("\t\t\tDelete: %lf\n",result);
    printf("\t\tWorstCase:\n");
    printf("\t\t\tInsertion: %lf\n",resultread);
    result=SearchResultBT(node,"grandiose");
    printf("\t\t\tSearch: %lf\n",result);
    result=DeleteResultBT(node,"grandiose");
    printf("\t\t\tDelete: %lf\n",result);
    node=NULL;

    printf("Eredmenyek word3.txt allomanyhoz:\n");
    resultread = readAndGiveResultBT(&node, "word3.txt");
    printf("\tBinary tree:\n\t\tBest Case: \n \t\t\tInsertion: %lf\n", resultread);
    result=SearchResultBT(node,"drab");
    printf("\t\t\tSearch: %lf\n",result);
    result=DeleteResultBT(node,"abaft");
    printf("\t\t\tDelete: %lf\n",result);
    printf("\t\tAvgCase:\n");
    result=SearchResultBT(node,"bless");
    printf("\t\t\tInsertion: %lf\n",resultread);
    printf("\t\t\tSearch: %lf\n",result);
    result=DeleteResultBT(node,"bless");
    printf("\t\t\tDelete: %lf\n",result);
    printf("\t\tWorstCase:\n");
    printf("\t\t\tInsertion: %lf\n",resultread);
    result=SearchResultBT(node,"table");
    printf("\t\t\tSearch: %lf\n",result);
    result=DeleteResultBT(node,"x-ray");
    printf("\t\t\tDelete: %lf\n",result);
    node=NULL;
}


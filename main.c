#include <stdio.h>
#include "binarisfa.h"
int main() {
    Node *node=NULL;
    char info[20];
    scanf("%s",info);
    insert(&node, info);
    scanf("%s",info);
    insert(&node, info);
    scanf("%s",info);
    insert(&node, info);
    scanf("%s",info);
    insert(&node, info);
    search(node,"korteve");
    deleteNode(node,"korte");
    inorder(node);
}
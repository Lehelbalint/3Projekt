//
// Created by lehel on 6/4/2021.
//
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#ifndef INC_3PROJEKT_BINARISFA_H
#define INC_3PROJEKT_BINARISFA_H

typedef struct Node
{
    char * info;
    struct Node *left, *right;
} Node;
Node *create();
void insert(Node ** root,const char * info);
void inorder(Node *root);
bool search(Node *root,const char * info);
Node * cimkereso(Node *root,const char * info);
Node* deleteNode( Node* root, const char * key);
Node * minValueNode(Node * node);
#endif //INC_3PROJEKT_BINARISFA_H

//
// Created by lehel on 6/4/2021.
//

#include "binarisfa.h"
Node *create()
{
    Node *ag;
    ag = (Node *)(malloc(sizeof(Node)));
    if(!ag)
    {
        printf("Sikertelen lefoglalas");
        return 0;
    }
    ag->left=NULL;
    ag->right=NULL;
    return ag;
}
void insert(Node ** root,const char * info)
{
    if((*root) == NULL)
    {
        (*root) = create();
        (*root)->info=(char *)malloc((strlen(info)+1)*sizeof (char));
        strcpy((*root)->info,info);
    }
    else
    {
        if(strcmp((*root)->info,info)>0)
            insert(&((*root)->left),info);
        else if(strcmp((*root)->info,info)<0)
        {insert(&((*root)->right),info);}
    }
}

bool search(Node *root,const char *info)
{
    if(root==NULL)
    {
        printf("Nincs benne\n");
        return false;
    }
    else if(strcmp(info,root->info)<0)
    {
        search(root->left,info);
    } else if(strcmp(info,root->info)>0)
    {
        search(root->right,info);
    }
    else {
        printf("Talalt\n");
        return true;
    }
}

Node * cimkereso(Node *root,const char * info)
{
    if(strcmp(info,root->info)<0)
    {
        cimkereso(root->left,info);
    } else if(strcmp(info,root->info)>0)
    {
        cimkereso(root->right,info);
    }
    else {
        return root;
    }
}
Node* deleteNode( Node* root, const char * key)
{
    if (root == NULL)
        return root;
    if (strcmp(key,root->info)<0)
        root->left = deleteNode(root->left, key);
    else if (strcmp(key,root->info)>0)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == NULL) {
            Node* p = root->right;
            free(root);
            return p;
        }
        else if (root->right == NULL) {
            Node * p = root->left;
            free(root);
            return p;
        }
        Node* p = minValueNode(root->right);
        strcpy(root->info,p->info);
        root->right = deleteNode(root->right, p->info);
    }
    return root;
}
Node * minValueNode(Node * node)
{
    Node * current = node;
    while (current->left != NULL)
        current = current->left;

    return current;
}
void inorder(Node *root)
{
    if(root->left)
        inorder(root->left);
    printf("%s ", root->info);
    if(root->right)
        inorder(root->right);
}
void preorder(Node *fa)
{
    printf("%3d ", fa->info);
    if(fa->left)
        preorder(fa->left);
    if(fa->right)
        preorder(fa->right);
}
void postorder(Node *fa)
{
    if(fa->left)
        postorder(fa->left);
    if(fa->right)
        postorder(fa->right);
    printf("%3d ", fa->info);
}
# Insertion

## Prerequisites
Pointers; Recursion; Functions; Binary Search

## Problem
Implement a function with prototype <code>bool insert(int val)</code> that inserts a <code>node</code> containing <code>val</code> into the tree pointed to by the global <code>root</code> variable. Return <code>true</code> if successful, and return <code>false</code> if you failed for some reason (e.g., lack of sufficient heap memory, value already in tree, etc.). Expected output:

```c
jharvard@run.cs50.net (~): ../a.out
Inserting 0 ...success!
Inserting 1 ...success!
Inserting 2 ...success!
Inserting 3 ...fail!
Inserting 4 ...success!
Inserting 5 ...success!
Inserting 6 ...fail!
Inserting 7 ...fail!
Inserting 8 ...success!
Inserting 9 ...fail!
Tree contains 0? true
Tree contains 1? true
Tree contains 2? true
Tree contains 3? true
Tree contains 4? true
Tree contains 5? true
Tree contains 6? true
Tree contains 7? true
Tree contains 8? true
Tree contains 9? true
```

## Distribution Code
```c
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int n;
    struct node* left;
    struct node* right;
}
node;

node* root;

bool insert(int val)
{
// TODO
}

bool search(node* r, int val)
{
    // if root is NULL
    if (r == NULL)
    {
        // return false
        return false;
    }       
    // if root->n is val    
    if (r->n == val)
    {
        // return true
        return true;
    }   
    // if val is less than root->n  
    else if (val < r->n)
    {
        // search left child
        return search(r->left, val);
    }   
    // if val is greater than root->n   
    else
    {
        // search right child
        return search(r->right, val);
    }
}

int main(void)
{
    // create root node
    root = malloc(sizeof(node));
    if (root == NULL)
    {
        printf("Out of memory!\n");
        return 1;
    }
    root->n = 7;
    root->left = NULL;
    root->right = NULL;
    
    // create more nodes
    node* three = malloc(sizeof(node));
    if (three == NULL)
    {
        printf("Out of memory!\n");
        return 1;
    }
    three->n = 3; 
    three->left = NULL;
    three->right = NULL;
    
    node* six = malloc(sizeof(node));
    if (six == NULL)
    {
        printf("Out of memory!\n");
        return 1;
    }
    six->n = 6;
    six->left = NULL;
    six->right = NULL;
    
    node* nine = malloc(sizeof(node));
    if (nine == NULL)
    {
        printf("Out of memory!\n");
        return 1;
    }
    nine->n = 9;
    nine->left = NULL;
    nine->right = NULL;

    // link together nodes
    root->left = three;
    root->right = nine;
    three->right = six; 
    
    // testing insert
    for(int i = 0; i < 10; i++)
    {
        printf("Inserting %i ...%s!\n", i, insert(i)? "success" : "fail");
    }
    for(int i = 0; i < 10; i++)
    {
        printf("Tree contains %i? %s\n", i, search(root, i)? "true" : "false");
    }

}
```
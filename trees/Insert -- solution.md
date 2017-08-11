# Insertion

## Possible Solution
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
    node* ptr = root;   
    // create root node
    node* new = malloc(sizeof(node));
    if (root == NULL)
    {
        printf("Out of memory!\n");
        return false;
    };
    new->n = val;
    new->left = NULL;
    new->right = NULL;
    // iterate through tree, to place in correct spot
    while (ptr != NULL)
    {
       // if equal to value, no need to insert
       if (ptr->n == val)
       {
           return false;
       }
       // if val is larger, go to right branch
       else if (ptr->n < val)
       {
           if (ptr->right == NULL)
           {
               ptr->right = new;
               return true;
           }
           else
           {
               ptr = ptr->right;
           }
       }
       // if val is smaller, go to left branch
       else
       {
           if (ptr->left == NULL)
           {
               ptr->left = new;
               return true;
           }
           else
           {
               ptr = ptr->left;
           }
       }
   }
   return false;
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
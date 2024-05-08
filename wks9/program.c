#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "treeops.h"
#include "listops.h"

/* --------------------------------------- */
int str_cmp(void* v1, void* v2);
int tree_size(tree_t *tree);
int rec_tree_size(tnode_t* node);
/* --------------------------------------- */
void print_array(char* arr[], int n);
void tree_sort(void *arr[], size_t n);
/* --------------------------------------- */


int
main(int argc, char** argv) {

    char* arr[] = {"Hello", "world", "this", "is a", "sample string"};
    
    tree_sort(arr, 5);
    print_array(arr, 5);

    return 0;
}


/* --------------------------------------- */
// int func(void *, void *)
int str_cmp(void* v1, void* v2) {
    return strcmp((char*)v1, (char*)v2);
}

/* --------------------------------------- */
/* ex 10.12 tree size */

// public starting function 
int tree_size(tree_t *tree) {
    return rec_tree_size(tree->root);
}

// private recursion function 
int rec_tree_size(tnode_t* node) {
    // base case
    // recursive case 
    // (in, pre, post)
}
/* --------------------------------------- */
/* ex 10.15 tree sort */
void print_array(char* arr[], int n) {
    printf("[");
    for (int i = 0; i < n ; i++) {
        printf("%s, ", arr[i]);
    }
    printf("]");
}


void tree_sort(void *arr[], size_t n) {
    // make empty tree
    tree_t* tree = make_empty_tree(str_cmp);
    // insert_in_order(tree, arr[i])
    for (int i = 0; i < 5; i++) {
        insert_in_order(tree, arr[i]);
    }

    int i = 0; 
    in_order_traversal(arr, &i, tree->root);

}

void in_order_traversal(void* arr[], int* i, tnode_t* node) {


}
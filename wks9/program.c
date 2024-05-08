#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* --------------------------------------- */
int str_cmp(void* v1, void* v2);
int tree_size(tree_t *tree);
int rec_tree_size(tnode_t* node);
/* --------------------------------------- */
void print_array(char* arr[], int n);
void ex10_15();
void tree_sort(void *arr[], size_t n);
/* --------------------------------------- */

int
main(int argc, char** argv) {

    return 0;
}


/* --------------------------------------- */
// int func(void *, void *)
int str_cmp(void* v1, void* v2) {
    
}

/* --------------------------------------- */
/* ex 10.12 tree size */

// public starting function 
int tree_size(tree_t *tree) {
    return rec_tree_size(tree->root);
}

// private recursion function 
int rec_tree_size(tnode_t* node) {

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

void ex10_15() {
    char* arr[] = {"hello", "world", "this", "is", "in-order", "traversal"};
    tree_sort(arr, 6);
}

void tree_sort(void *arr[], size_t n) {
    // make empty tree
    // insert_in_order(tree, arr[i])

}

void in_order_traversal(void* arr[], int* i, tnode_t* node) {


}
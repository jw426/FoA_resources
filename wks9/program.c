#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* --------------------------------------- */
int str_cmp(void* v1, void* v2);
int tree_size(tree_t *tree);
int rec_tree_size(tnode_t* node);
/* --------------------------------------- */

int
main(int argc, char** argv) {

    tree_t* tree = make_empty_tree(str_cmp);
    int i = 0; 
    char str[100000];
    // str: [a, n, d, \0, _, _, _, _, ..., _]
    // newstr: [a, n, d, \0]
    while (i < 12 && scanf("%s", str)) {
        char* newstr = malloc(sizeof(char)*(strlen(str)+1));
        strcpy(newstr, str);
        insert_in_order(tree, newstr);
        i++;
    }

    printf("%d read in\n", tree_size(tree));

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

    if (node == NULL) {
        return 0;
    }

    return 1 + rec_tree_size(node->left) + rec_tree_size(node->rght);
}
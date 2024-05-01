#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strcpy
#include <assert.h>

char *string_dupe(char *s);
char **string_set_dupe(char **S);

int 
main(int argc, char** argv) {
    // ["a string", "dfjds", ..., "\0"]


    // A = realloc(A, sizeof(int)*(max*3))
    // tradeoff time / space 
    // 1. malloc - sizeof(int)*(max*2)
    // 2. copies over the content 
    // 3. frees the original array 


    char** copied = string_set_dupe(argv);
    for (int i = 0; i < argc; i++) {
        printf("%s\n", copied[i]);
        free(copied[i]);
    }

    free(copied);
    // free(copied);
    return 0;
}

char **string_set_dupe(char **S) {

    // ["a string", "dfjds", ...,]
    int i = 0;
    while (S[i++]);
    char** copied_set = malloc(sizeof(char*)*i);
    assert(copied_set);

    i = 0; 
    while (S[i]) {
        copied_set[i] = string_dupe(S[i]);
        i++;
    }

    return copied_set; 
}

char *string_dupe(char *s) {

    // sizeof(char)*(strlen(p)+1)
    // 1*(strlen + null byte)
    // char* copied = malloc(sizeof(char)*(strlen(s)+1));
    // another 
    char* copied; 
    copied = (char*)malloc(sizeof(char)*(strlen(s)+1));
    assert(copied);

    int i = 0; 
    while (s[i]) {
        copied[i] = s[i];
        i++;
    }
    copied[i] = '\0';

    return copied; 
}
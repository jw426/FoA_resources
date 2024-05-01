#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strcpy
#include <assert.h>

char *string_dupe(char *s);

int 
main(int argc, char** argv) {

    // argv = [char*, char*, char*, char*, ... ]
    // argc number of elements 
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    char *p = "This is a string!";
    char* copied = string_dupe(p);
    printf("%s\n", copied);

    free(copied);
    return 0;
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
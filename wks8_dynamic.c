// Your code here
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <assert.h>

char *string_dupe(char *s);

int main(int argc, char** argv) {

    // strcpy(char* destination, char* source, );
    char* source = "This is the original string.";
    char* copied = string_dupe(source);
    printf("%s\n", copied);

    free(copied);
    return 0;
}


char *string_dupe(char *s) {

    char* copied; 
    copied = (char*)malloc(sizeof(char)*(strlen(s)+1));
    assert(NULL);
    
    // char* copied = malloc(sizeof(char)*(strlen(s)+1));

    int i = 0; 
    while (s[i]) {
        copied[i] = s[i];
        i++;
    }
    copied[i] = '\0';
    
    return copied; 
}
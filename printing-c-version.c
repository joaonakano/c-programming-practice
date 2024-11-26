#include <stdio.h>

int main() {
    #if (__STDC_VERSION__ >= 201710L)
        printf("We are using the C17 version");
    #elif (__STDC_VERSION__ >= 201112L)
        printf("We are using the C11 version");
    #elif (__STDC_VERSION__ >= 199901L)
        printf("We are using the C99 version");
    #else
        printf("We are using the C89/C90 version");
    #endif
    // * The HASHES are Preprocessor Directives, which means that it only compiles the code below if a certain condition is met, the rest is discarded.
};

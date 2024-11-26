// Exercise 1-12 (C Programming Language): Write a program that prints its input one word per line
#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        // * If it is tabs or spaces, then it should take a different course
        if (c == ' ' || c == '\t') {
            putchar('\n');
            while ((c = getchar()) == ' ' || c == '\t');
        }
        // * If it is newlines or alphanumeric characters, then it should print them no matter what
        putchar(c);
    }
}


/* OG Code

int main() {
    int c, state;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
            putchar('\n');
            putchar(c);
        } else {
            putchar(c);
        }
    }
}

*/

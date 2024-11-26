// A Simple Character, Word, and Newline Counter
#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, nl, nw, nc, state;
    nl = nw = nc = 0;
    state = OUT;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else if (state == OUT) {
            ++nw;
            state = IN;
        }
    }
    printf("Words: %8d\nCharacters: %3d\nNewlines: %5d\n", nw, nc, nl);
}

#include <stdio.h>

int main() {
    long nc;
    nc = 0;
    int c;
    while ((c = getchar()) != EOF && c != '\n') {
        ++nc;
    }
    printf("The word has %ld characters", nc);
}

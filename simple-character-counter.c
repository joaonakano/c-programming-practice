// Simple Lines, Tabs, and Blanks Counter
#include <stdio.h>

int main()
{
    int nl = 0, t = 0, bl = 0, c = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        } else if (c == '\t') {
            ++t;
        } else if (c == ' ') {
            ++bl;
        }
    }
    printf("Newlines: %i\nBlanks: %i\nTabs: %i\n", nl, bl, t);
}

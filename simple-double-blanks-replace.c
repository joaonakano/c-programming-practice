// Exercise 1-9 (C Programming Language): Copy input to output but replacing a string of multiple blanks by a single blank
#include <stdio.h>

/* int main()
{
    int bl = 0, cc = 0;
    long c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' && bl == 0 && cc != 0)
        {
            printf(" ");
            bl = 1;
        } else if (c != ' ') {
            bl = 0;
            printf("%c", c);
        }
        ++cc;
    }
} */

int main ()
{
    long c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            while ((c = getchar()) == ' ') {};
            putchar(' ');
        };
        putchar(c);
    }
}

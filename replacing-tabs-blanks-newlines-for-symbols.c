// Exercise 1-10 (C Programming Language): copy the input to output replacing each tab by \t, each backslash by \\, and each backspace by \b
#include <stdio.h>

int main()
{
    long c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            printf("\\t");
        } else if (c == '\\') {
            printf("\\\\");
        } else if (c == '\b') {
            printf("\\b");
        } else {
            putchar(c);
        }
    }
}

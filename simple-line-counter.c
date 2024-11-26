// A Simple Line Counting
#include <stdio.h>

int main()
{
    int nl, c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        }
    }
    printf("The number of lines is %i\n", nl);
}

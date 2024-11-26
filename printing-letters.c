#include <stdio.h>

int main()
{
    int counter = 1;

    while(counter <= 7) {
        if (counter == 1 || counter == 4) {
            for (int i = 0; i <= 5; i++) {
                printf("#");
            }
        } else
            printf("#");
        printf("\n");
        ++counter;
    }
}

#include <stdio.h>


/* FAHRENHEIT TO CELSIUS
int main() {
   float fahr, celsius;
   int lower, upper, step;

   char text_FAHR[] = "FAHR";
   char text_CELSIUS[] = "CELSIUS";

   lower = 0;
   upper = 300;
   step = 20;
   fahr = lower;

   printf("%5s\t%s\n", text_FAHR, text_CELSIUS);
   
   while (fahr <= 300) {
    celsius = (5.0 / 9.0) * (fahr - 32);
    printf("%4.f\t%6.2f\n", fahr, celsius);
    fahr += step;
   }
}
*/


/* CELSIUS TO FAHRENHEIT (FOR Loop)
int main() {
   char text_FAHR[] = "FAHR";
   char text_CELSIUS[] = "CELSIUS";

   printf("%s\t%7s\n", text_CELSIUS, text_FAHR);

   for (int celsius = 0; celsius <= 300; celsius = celsius + 20)
      printf("%4d\t%6.f\n", celsius, celsius * (9.0/5.0) + 32);
}
*/


/* CELSIUS TO FAHRENHEIT (USING SYMBOLIC CONSTANTS)
#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
   int celsius;
   for (celsius = LOWER; celsius <= UPPER; celsius += STEP)
      printf("%3d\t%4.f\n", celsius, celsius * (9.0/5.0) + 32);
}
*/
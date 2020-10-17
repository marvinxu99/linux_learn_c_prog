#include <stdio.h>
#include <math.h>

int main(void) {
   int user_input;
   double sr_result;
   
   printf("Enter an integer:");
   scanf("%d", &user_input);

   sr_result = sqrt(user_input);
   printf("%.8f\n", sr_result);

   printf("%.10f\n", exp(1));

   printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.c -o use_math -lm\n");

   return 0;

}
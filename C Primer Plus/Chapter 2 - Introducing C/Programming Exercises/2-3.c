/* C Primer Plus Ch.2 - Problem 3 */

#include <stdio.h>

int main(void){
   
   int age, years, days;
   printf("Enter your age: ");
   scanf("%d", &age);
   years = age;
   days = 365 * age;
   printf("Age in years: %d\n", years);
   printf("Age in days: %d\n", days);
   
   return 0;
}


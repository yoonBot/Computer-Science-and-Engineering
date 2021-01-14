/* C Primer Plus Ch.2 - Problem 6 */

#include <stdio.h>

int main(void){

    float water;
    float MASS = 3.0 * 10E-23;
    float QUART = 950;

    printf("Enter amount of water, in quarts: ");
    scanf("%f", &water);

    water = (water * QUART) / MASS;

    printf("Total of %.2f molecules\n", water);

    return 0;
}



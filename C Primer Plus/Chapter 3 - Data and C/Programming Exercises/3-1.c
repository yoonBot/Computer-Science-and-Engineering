/* C Primer Plus Ch. 3 - Problem 1 */
/* Reference from pg.52 from text */

#include <stdio.h>

int main(void){
    
    /* integer overflow */
    int i = 1;
    unsigned int j = 1;
    
    printf("Integer Overflow\n");
    
    for (int x = 0; x < 10000; x++){
        i *= 10.0;
        j *= 10.0;
    }

    printf("%d %d %d\n", i, i + 1, i + 2);
    printf("%u %u %u\n", j, j + 1, j + 2);
    
    /* integer underflow */
    int i1 = 1;
    unsigned int j1 = 1;

    printf("Integer Underflow\n");

    for (int x = 0; x > -10000; x--){
        i *= -10.0;
        j *= -10.0;
    }
    
    printf("%d %d %d\n", i1, i1 - 1, i1 - 2);
    printf("%u %u %u\n", j1, j1 - 1, j1 - 2);

    /* floating-point overflow */
    float c = 1.0;
    
    printf("floating-point overflow\n");

    for (int y = 0; y < 10000; y++){
        c *= 10.0;
    }

    printf("%f %f %f\n", c, c + 1, c + 2);
    
    /* floating-point underflow */
    float c1 = 1.0;

    printf("floating-point underflow\n");

    for (int y = 0; y > -10000; y--){
        c1 *= -10.0;
    }

    printf("%f %f %f\n", c1, c1 - 1, c1 - 2);

    return 0;
}




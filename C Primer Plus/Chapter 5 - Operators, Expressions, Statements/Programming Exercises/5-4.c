/* C Primer Plus Ch.5 - Problem 4
 * @reproduced by yoonBot
 */

#include <stdio.h>
#define INCHES 2.54
#define FEET 12

int main(void){
    
    float height, converted;
    
    printf("Enter a height in centimeters: ");
    scanf("%f", &height);
    
    while(1){
        converted = height / INCHES;
        printf("%.1f cm = %d feet, %.1f inches.\n", height, (int)(converted / FEET), converted - (int)(converted/FEET) * FEET);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f", &height);
        if (height <= 0){ 
            printf("bye\n");
            break;
        }
    }

    return 0;
}



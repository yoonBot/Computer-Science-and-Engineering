/* C Primer Plus Ch.6 - 8
 * @reproduced by yoonBot
 */

#include <stdio.h>

float calculation(float, float);

int main(){

    float input1, input2;

    printf("Enter two floating-point numbers: ");
    while(scanf("%f %f", &input1, &input2)){
        
        printf("(a - b) / (a * b) = %.2f\n", calculation(input1, input2));
        printf("Enter two floating-point numbers: ");
    }
    
    return 0;
}

float calculation(float a, float b){
    return (a - b) / (a * b);

}


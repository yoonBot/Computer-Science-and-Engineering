/* C Primer Plus Ch.6 - Problem 10
 * @reproduced by yoonBot
 */

#include <stdio.h>

int main(){

    int arr[8];
    
    printf("Enter 8 integers into an array:\n");
    for(int i = 0; i <= 7; i++)
        scanf("%d", &arr[i]);

    for(int i = 7; i >= 0; i--)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}


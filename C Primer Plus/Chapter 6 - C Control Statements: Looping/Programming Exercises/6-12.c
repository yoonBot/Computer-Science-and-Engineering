/* C Primer Plus Ch.6 - Problem 12
 * @reproduced by yoonBot
 */

#include <stdio.h>

int main(){

    int arr[8];
    
    printf("Enter 8 int values: ");
    for (int i = 0; i < 8; i++)    
        scanf("%d", &arr[i]);
    
    for (int i = 0; i < 8; i++)
        arr[i] = arr[i] * arr[i];

    int i = 0;
    do{
        printf("%d ", arr[i]);
        i++;
    }while(i < 8);

    printf("\n");

    return 0;
}


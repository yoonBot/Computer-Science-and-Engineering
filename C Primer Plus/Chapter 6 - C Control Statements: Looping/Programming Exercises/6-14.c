/* C Primer Plus Ch.6 - Problem 14
 * @reproduced by yoonBot
 */

#include <stdio.h>
#define MAX 255

int main(){
    
    char input, new[MAX];
    int count = 1;
    
    printf("Enter a line of input: "); 
    scanf("%c", &input);

    while(input != '\n'){
        count++;
        new[count] = input;
        scanf("%c", &input);
    }

    while(count > 0){
        printf("%c ", new[count]);
        count--;
    }
    printf("\n");

    return 0;
}



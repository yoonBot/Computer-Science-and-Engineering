/* C Primer Plus Ch.4 - Problem 2
 * Reproduced by: yoonBot
 */

#include <stdio.h>
#include <string.h>
#define BUFFER 256

int main(void){

    char firstname[BUFFER];
    int length;

    printf("Enter your firstname: ");
    scanf("%s", &firstname);

    printf("\"%s\"\n", firstname);
    printf("\"%20s\"\n", firstname);
    printf("\"%-20s\"\n", firstname);

    length = strlen(firstname) + 3;
    printf("\"%*s\"\n", length, firstname);
    

    return 0;
}


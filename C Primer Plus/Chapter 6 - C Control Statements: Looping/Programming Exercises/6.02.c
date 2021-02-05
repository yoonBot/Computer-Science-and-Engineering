/* C Primer Plus Ch.6 - Problem 2
 * @reproduced by yoonBot
 */

#include <stdio.h>

int main(){

    //char dollar = '$';

    for (int i = 0; i < 6; i++){
      for (int j = 0; j < i; j++){
        printf("$ ");
      }
      printf("\n");
    }
    printf("\n");

    return 0;
}



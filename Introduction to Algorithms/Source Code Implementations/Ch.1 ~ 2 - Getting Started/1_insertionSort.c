/* Insertion Sort Implementation 
 * @author yoonBot
 * 05/28/2021
 */

#include <stdio.h>
#include <stdlib.h>

/* Additional Functions used throughout the program */
void insertion(int *, int);
void printArray(int *, int);

/* Driver Program */
int main(){
    int *array;
    int size;
    
    printf("Enter array size: ");
    scanf("%d", &size);

    array = (int*)malloc(size * sizeof(int));
    
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    insertion(array, size);
    printArray(array, size);
    free(array);
    return 0;
}

/* Insertion Sort Algorithm */
void insertion(int array[], int size){
    for (int i = 1; i < size; i++){
        int key =  array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key){
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }   

}

/* default print function for all sorting programs */
void printArray(int array[], int size){
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}



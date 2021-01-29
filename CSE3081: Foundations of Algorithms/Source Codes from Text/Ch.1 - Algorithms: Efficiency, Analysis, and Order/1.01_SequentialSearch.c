// C code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1
 
#include <stdio.h>
 
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 
// Driver code
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nEnter a number from the array: ");
    scanf("%d", &x);
    // Function call
    int result = search(arr, n, x);
    (result == -1)
        ? printf("Element is not present in array\n")
        : printf("Element is present at index %d\n", result);
    return 0;
}


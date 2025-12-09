#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *arr, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int *)calloc(n, sizeof(int)); 
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Elements are: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]); 
    free(arr); 
    return 0;
}
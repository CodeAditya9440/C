#include <stdio.h>
#include<conio.h>
int main() 
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Reverse order: ");
    for(i = n-1; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}
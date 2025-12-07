#include <stdio.h>
#include<conio.h>
int main() 
{
    int arr[6], i;
    printf("Enter 6 elements: ");
    for(i = 0; i < 6; i++)
     {
        scanf("%d", &arr[i]);
    }
    printf("Array elements: ");
    for(i = 0; i < 6; i++)
     {
        printf("%d ", arr[i]);
    }
    return 0;
}

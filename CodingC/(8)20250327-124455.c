#include <stdio.h>
#include<conio.h>
int main() 
{
    int num = 12;
    int *ptr = &num;

    printf("Address of num: %p\n", &num);
    printf("Value stored at ptr: %p\n", ptr);
    printf("Value of num using pointer: %d\n", *ptr);

    return 0;
}
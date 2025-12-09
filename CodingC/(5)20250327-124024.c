#include <stdio.h>
#include<conio.h>
int main()
 {
    int a = 20;
    int *p;
    p = &a; 
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value of a using pointer: %d\n", *p);
    return 0;
}
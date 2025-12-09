#include <stdio.h>
#include<conio.h>
#define PI 3.14159  
#define SQUARE(x) ((x) * (x)) 
int main() 
{
    int num = 5;
    printf("Value of PI: %.5f\n", PI);
    printf("Square of %d: %d\n", num, SQUARE(num));
    return 0;
}
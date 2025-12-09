#include <stdio.h>
#include<conio.h>
typedef int myInt;  
int main()
 {
    myInt a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d\n", sum);
    return 0;
}
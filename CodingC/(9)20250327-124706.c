#include <stdio.h>
#include<conio.h>
void add(int *a, int *b, int *sum)
 {
    *sum = *a + *b;
}
int main()
 {
    int num1 = 8, num2 = 12, sum;
    add(&num1, &num2, &sum);
    printf("Sum: %d\n", sum);
    return 0;
}
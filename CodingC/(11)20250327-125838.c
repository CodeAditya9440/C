#include <stdio.h>
#include<conio.h>
void factorial(int *num, long *fact)
 {
    *fact = 1;
    for (int i = 1; i <= *num; i++)
     {
        *fact *= i;
    }
}

int main()
 {
    int num;
    long fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    factorial(&num, &fact);
    printf("Factorial: %ld\n", fact);
    return 0;
}
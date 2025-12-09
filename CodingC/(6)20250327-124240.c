#include <stdio.h>
#include<conio.h>
#define SIZE 3
int main() 
{
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE] = {0}, i, j, k;

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < SIZE; i++)
        for(j = 0; j < SIZE; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < SIZE; i++)
        for(j = 0; j < SIZE; j++)
            scanf("%d", &B[i][j]);

    // Multiplication
    for(i = 0; i < SIZE; i++)
        for(j = 0; j < SIZE; j++)
            for(k = 0; k < SIZE; k++)
                C[i][j] += A[i][k] * B[k][j];

    printf("Resultant matrix:\n");
    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < SIZE; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
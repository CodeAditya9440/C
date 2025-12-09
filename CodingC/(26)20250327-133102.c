#include <stdio.h>
#include<conio.h>
int main() 
{
    FILE *fptr;
    char ch;
    fptr = fopen("students txt", "r");
    if (fptr == NULL)
     {
        printf("File does  exist!\n");
        return 1;
    }
    while ((ch = fgetc(fptr)) != EOF)
     {
        putchar(ch);
    }
    fclose(fptr);
    return 0;
}
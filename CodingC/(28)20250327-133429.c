#include <stdio.h>
#include<conio.h>
int main() 
{
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL)
     {
        printf("Error creating file!\n");
        return 1;
    }
    fprintf(fp, "This is a test file.\n");
    fclose(fp);
    printf("File created successfully.\n");
    return 0;
}
#include <stdio.h>
#include<conio.h>
int main() 
{
    FILE *fp = fopen("output.txt", "r");
    char text[100];
    if (fp == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }
    fscanf(fp, "%[^\n]", text);
    printf("Read from file: %s\n", text);
    fclose(fp);
    return 0;
}
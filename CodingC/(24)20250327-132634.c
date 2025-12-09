#include <stdio.h>
#include<conio.h>
int main()
 {
    FILE *fp = fopen("output.txt", "w");
    if (fp == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "Hello, this is a test message written using fprintf.\n");
    fclose(fp);
    printf("Text written successfully.\n");
    return 0;
}
#include <stdio.h>
#include<conio.h>
int main()
 {
    FILE *fp;
    char ch;
    fp = fopen("test txt", "r");
    if (fp == NULL) 
    {
        printf("File does not exist!\n");
        return 1;
    }
    while (!feof(fp)) 
    {
        ch = fgetc(fp);
        if (ch != EOF)
            putchar(ch);
    }
    fclose(fp);
    return 0;
}
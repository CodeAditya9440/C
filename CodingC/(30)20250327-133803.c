#include <stdio.h>
#include<conio.h>
int main()
 {
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) 
    {
        printf("File does not exist!\n");
        return 1;
    }
    fseek(fp, 5, SEEK_SET); 
    char ch = fgetc(fp);
    printf("Character at position 5: %c\n", ch);
    fclose(fp);
    return 0;
}
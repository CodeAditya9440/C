#include <stdio.h>
#include<conio.h>
int string_length(char *str)
 {
    int length = 0;
    while (*str != '\0') 
    {
        length++;
        str++;
    }
    return length;
}

int main() 
{
    char str[30];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Length: %d\n", string_length(str));
    return 0;
}
#include <stdio.h>
#include <string.h>
int count_words(char *str)
 {
    int count = 1;
    for (int i = 0; str[i] != '\0'; i++)
     {
        if (str[i] == ' ')
            count++;
    }
    return count;
}

int main() 
{
    char str[100];
    printf("Enter a sentence: ");
    gets(str); 
    printf("Total words: %d\n", count_words(str));
    return 0;
}
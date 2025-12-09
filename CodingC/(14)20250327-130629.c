#include <stdio.h>
#include <string.h>
int main()
 {
    char str1[100], str2[50];
    printf("Enter main string: ");
    gets(str1);
    printf("Enter substring to find: ");
    gets(str2);
    char *result = strstr(str1, str2);
    if (result != NULL)
        printf("Substring found at position: %ld\n", result - str1 + 1);
    else
        printf("Substring not found.\n");

    return 0;
}
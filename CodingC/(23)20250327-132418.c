#include <stdio.h>
#include<conio.h>
int main() 
{
   FILE *fptr;
    char name[50];
    int age;
    fptr = fopen("student.txt", "w"); 
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    fprintf(fptr, "Name: %s\nAge: %d\n", name, age);
    fclose(fptr);
    printf("Data written to file successfully.\n");
    return 0;
}
#include <stdio.h>
#include<conio.h>
int main() 
{
    FILE *fptr;
    char name[10];
    int roll;
    float cgpa;
    fptr = fopen("students.txt", "w");
    if (fptr == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter roll number: ");
    scanf("%d", &roll);
    printf("Enter CGPA: ");
    scanf("%f", &cgpa);
    fprintf(fptr, "Name: %s\nRoll: %d\nCGPA: %.2f\n", name, roll, cgpa);
    fclose(fptr);
    printf("Data stored successfully.\n");
    return 0;
}
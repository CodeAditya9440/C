#include <stdio.h>
#include<conio.h>
struct Student 
{
    char name[10];
    int roll;
    float marks;
};
int main() 
{
    struct Student s1;
    printf("Aditya Sharma: ");
    scanf("%s",s1.name);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    printf("\nStudent Information:\n");
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s1.name, s1.roll, s1.marks);
    return 0;
}
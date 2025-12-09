#include <stdio.h>
#include<conio.h>
struct Student 
{
    char name[50];
    int roll;
    float marks;
};
void display(struct Student s)
 {
    printf("\nStudent Information:\n");
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
}
int main()
 {
    struct Student s1;
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    display(s1);  
    return 0;
}
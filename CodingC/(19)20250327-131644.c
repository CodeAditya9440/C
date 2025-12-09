#include <stdio.h>
#include<conio.h>
struct Address 
{
    char city[20];
    int pin;
};

struct Employee 
{
    char name[50];
    int id;
    struct Address address; 
};
int main()
 {
    struct Employee emp;
    printf("Enter name: ");
    scanf("%s", emp.name);
    printf("Enter pin code: ");
    scanf("%d", &emp.address.pin);
    printf("\nEmployee Details:\n");
    printf("Name: %s\nID: %d\nCity: %s\nPin: %d\n", emp.name, emp.id, emp.address.city, emp.address.pin);
    return 0;
}
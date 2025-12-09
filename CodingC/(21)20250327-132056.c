#include <stdio.h>
#include<conio.h>
union Data 
{
    int i;
    float f;
    char str[10];
};
int main()
 {
    union Data data;

    data.i = 10;
    printf("Integer: %d\n", data.i);

    data.f = 230;
    printf("Float: %.2f\n", data.f);

    strcpy(data.str, "Hello");
    printf("String: %s\n", data.str);

    return 0;
}
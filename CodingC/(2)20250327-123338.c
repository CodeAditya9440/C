#include <stdio.h>
#include<conio.h>
void demo()
 {
    static int count = 0; 
    count++;
    printf("Count = %d\n", count);
}

int main() 
{
    demo();
    demo();
    return 0;
}
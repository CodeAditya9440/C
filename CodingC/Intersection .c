#include <stdio.h>
#include<conio.h>
int main()
 {
    int set1[] = {1, 2, 3, 4, 5, };
    int set2[] = {4, 5, 6, 7, 8, 9   };
    int size1 = sizeof(set1) / sizeof(set1[0]);
    int size2 = sizeof(set2) / sizeof(set2[0]);
    printf("Set 1: ");
    for (int i = 0; i < size1; i++) 
    {
        printf("%d ", set1[i]);
    }
    printf("\n");
    printf("Set 2: ");
    for (int i = 0; i < size2; i++) 
    {
        printf("%d ", set2[i]);
    }
    printf("\n");
    printf("Intersection: ");
    for (int i = 0; i < size1; i++) 
    {
        for (int j = 0; j < size2; j++) 
        {
            if (set1[i] == set2[j])
             {
                printf("%d ", set1[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}

    
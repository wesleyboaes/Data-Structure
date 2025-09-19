#include <stdio.h>

int m1[2][2];

int main()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Type a number: ");
            scanf("%d", &m1[i][j]);
        }
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\nThe position [%d][%d] is: %d ", i, j, m1[i][j]);
        }
    }    
    
    return 0;
}
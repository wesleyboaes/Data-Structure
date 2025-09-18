#include <stdio.h>

int vector [4]; // Quantity of elements

int main()
{
    for (int i = 0; i < 4; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &vector[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The number of position %d is: %d\n", i, vector[i]);
    }

    return 0;
}
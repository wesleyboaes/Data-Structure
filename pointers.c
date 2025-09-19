#include <stdio.h>

int *p; //Pointer p with int type

int value = 5;

int main()
{
    p = &value; // The pointer p points to the value address

    printf("The value pointed by 'p' is: %d", *p);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct point
{
    float x;
    float y;
    struct point *next; // I need another pointer to point to the next element. It has to be the same type "point".
};

typedef struct point Point;

// To make the list correctly, we need to use only one pointer "point" that receives the first one, and all the others we allocate will point to the next ones.

// To do this, we will use the function VOID, as it will not return anything.

Point *listPoints; // It will point to the first element of the list. The others will follow it. Subsequently. I will only keep the pointer to the first one.

void add(float x, float y) // From the first one, I can access the others. I will always call this function whenever I want to add a point.
{
    Point *p = (Point*) (malloc(sizeof(Point)));
    p -> x = x;
    p -> y = y;
    p -> next = listPoints; // I need to know who "p" will point to. The next one will be always the new first one.
    listPoints = p; // We will always insert a new element at the begining. So all element we add, will be the first one.
}

int main()
{
    // float x;
    // float y;
    // int i = 1;

    // while (i == 1)
    // {
    //     printf("Enter the x coordinate: ");
    //     scanf("%f", &x);

    //     printf("Enter the y coordinate: ");
    //     scanf("%f", &y);

    //     add(x,y);

    //     printf("Enter 1 to continue or 0 to quit? ");
    //     scanf("%d", &i);
    // }

    add(1,5);
    add(2,7);
    add(5,3);

    printf("%.2f\n", listPoints -> x); // The last added is the first one
    printf("%.2f\n", listPoints -> next -> x); // The "x" before the last inserted, now the second "x" in list
    printf("%.2f\n", listPoints -> next -> next -> x); // The "x" before the second inserted, now the third "x" in list
    // printf("%.2f\n", listPoints -> next -> next -> next -> x); // Not allocated, can show an error

    return 0;
}

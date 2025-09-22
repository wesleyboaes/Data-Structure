#include <stdio.h>
#include <stdlib.h>

struct point
{
    float x;
    float y;
    struct point *next; // I need another pointer to point to the next element. It has to be the same type "point".
};

typedef struct point Point;

int main()
{
    Point *p = (Point*) malloc(sizeof(Point));

    p -> x = 1;
    p -> y = 5;

    Point *p1 = (Point*) malloc(sizeof(Point));

    p1 -> x = 3;
    p1 -> y = 9;

    p -> next = p1; // I use as reference the pointer "p" to point to the next one, that is "p1", using the pointer "next" that have the same type "point" as "p".
    p1 -> next = NULL; // Here the "p1" does not have any pointer to point yet, so it is "NULL".

    return 0;
}

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

    Point *p2 = (Point*) malloc(sizeof(Point));

    p2 -> x = 8;
    p2 -> y = 13;

    /* This is the manual form to chain elements. */
    p -> next = p1; // I use as reference the pointer "p" to point to the next one, that is "p1", using the pointer "next" that have the same type "point" as "p".
    // p1 -> next = NULL; // Here the "p1" does not have any pointer to point yet, so it is "NULL".
    p1 -> next = p2; // Here the "p1" point to the next one, "p2".
    p2 -> next = NULL; // The same as the "p1" example (when "p2" did not exists).

    return 0;
}

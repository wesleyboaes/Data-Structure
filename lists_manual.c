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

    // This is the manual way to chain elements.
    p -> next = p1; // I reference the pointer "p" to point to the next one, witch is "p1", using the pointer "next" witch has the same type "point" as "p".
    // p1 -> next = NULL; // Here the "p1" does not have any pointer to point yet, so it is "NULL".
    p1 -> next = p2; // Here the "p1" point to the next one, "p2".
    p2 -> next = NULL; // The same as the "p1" example (when "p2" did not exists).

    // Here a have the problem of the number of elements chained. If I need a large number of elements, I can not insert them all.

    return 0;
}

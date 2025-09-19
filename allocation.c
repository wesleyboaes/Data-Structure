#include <stdio.h>
#include <stdlib.h>

struct point
{
    float x;
    float y;
};

typedef struct point Point;

int main()
{
    Point *p = (Point*) malloc(sizeof(Point));
    /** 
     * The pointer p will point to the structure, dynamic allocated, with the Point type. # Point *p #
     * To dynamic allocate the structure, we use the function "malloc". It will reserve a space on memory (Heap).
     * sizeof(Point) is used to define the size that we need to be allocated on memory and the type of data we want to allocate.
     * malloc needs the library stdlib.h
     * (Point*) conversion of the type Point to a pointer
     */

    p->x = 1; // Now we can access the values of 'x' and 'y' on the structure that this pointer p points to.
    p->y = 5; // Instead of using p.x or p.y, we use p->x and p->y

    printf("Point = (%.2f, %.2f)", p->x, p->y);

    return 0;
}
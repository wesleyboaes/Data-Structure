#include <stdio.h>

// struct is like object in java

struct person{
    int age;
    float height;
};

typedef struct person Person; // I am defining a new type, instead of using struct I will use de "type" created, in this case the type Person.

int main()
{
    /* struct person p; // Insted of usin the struc, I will use the new type. */

    Person p;

    p.age = 20;
    p.height = 1.70;

    printf(" The person's age is: %d years old!\n", p.age);
    printf("The person's height is: %.2fm!\n", p.height);

    return 0;
}
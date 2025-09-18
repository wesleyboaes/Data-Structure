#include <stdio.h>

int main(void)
{
    int number;

    printf("Type a number: \n");
    scanf("%d", &number);

    if (number > 0)
    {
        number--;
    }

    else if (number == 0)
    {
        number += 100;
    }
    

    else{
        number++;
    }
    
    printf("%d",number);

    return 0;
}

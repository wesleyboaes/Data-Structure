# include <stdio.h>

int main(void)
{
    printf("- WHILE -\n");

    int i = 0;

    while (i < 10)
    {
        i++;
        printf("WHILE loop number %d\n", i);
    }

    printf("\n- FOR -\n");

    int count = 10;
    int a;

    for (a = 1; a <= count; a++)
    {
        printf("FOR loop number %d\n", a);
    }
    
    return 0;
}

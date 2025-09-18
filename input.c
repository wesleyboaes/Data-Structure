# include <stdio.h>

int main(int argc, char const *argv[])
{
    int num_1, num_2, sum;
    printf("Enter the first number: \n");
    scanf("%d", &num_1);
    
    printf("Enter the second number: \n");
    scanf("%d", &num_2);

    sum = num_1 + num_2;

    printf("The sum is: %d", sum);

    return 0;
}

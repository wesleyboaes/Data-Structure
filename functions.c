#include <stdio.h>

int sum(int a, int b){
    int res =  a + b;
    return res;
}

int subtraction(int a, int b){
    int res = a - b;
    return res;
}

int main()
{
    int n1, n2, op, res;

    printf("Enter a number: \n");
    scanf("%d", &n1);

    printf("Enter another number: \n");
    scanf("%d", &n2);

    printf("Select the operator: \n1 - Sum\n2 - Subtraction\n");
    scanf("%d", &op);

    if(op == 1){
        res = sum(n1, n2);
    }

    if(op == 2){
        res = subtraction(n1, n2);
    }

    printf("The result is %d", res);

    return 0;
}

#include <stdio.h>
int multi(int,int);

int main()
{
    int a, b, ret_sum;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    ret_sum = multi(a, b);

    printf("The product is: %d\n", ret_sum);

    return 0;
}
int multi(int a, int b)
{
    int sum= a * b;
    return sum;
}

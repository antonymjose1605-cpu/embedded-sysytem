#include <stdio.h>
int sub(int,int);

int main()
{
    int a, b, ret_sum;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    ret_sum = sub(a, b);

    printf("The difference is: %d\n", ret_sum);

    return 0;
}
int sub(int a, int b)
{
    int sum= a - b;
    return sum;
}
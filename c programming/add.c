#include <stdio.h>
int add(int,int);

int main()
{
    int a, b, ret_sum;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    ret_sum = add(a, b);

    printf("The sum is: %d\n", ret_sum);

    return 0;
}
int add(int a, int b)
{
    int sum = a + b;
    return sum;
}
#include <stdio.h>

int divi(int, int); 

int main()
{
    int a, b, ret_quotient; 

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    ret_quotient = divi(a, b); 

    printf("The quotient is: %d\n", ret_quotient);

    return 0;
}

int divi(int a, int b)
{
    int quotient = a / b;
    return quotient;
}
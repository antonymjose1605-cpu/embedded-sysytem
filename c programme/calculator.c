#include <stdio.h>

// Function definitions
int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int multi(int a, int b) {
    return a * b;
}

float divi(float a, float b) {
    
        return a / b;
    }

int main() {
    int a, b;
    int add_res, sub_res, mult_res,input;
    float divi_res;

    printf("Enter the first number: \n");
    scanf("%d", &a);
    printf("Enter the second number: \n");
    scanf("%d", &b);
    printf("enter the operation:\n 1)add \n 2)sub \n 3)multi \n4)divi \n");
    scanf("%d",&input);
    if(input==1)
    {
        add_res = sum(a, b);
        printf("Sum is: %d\n", add_res);
    }
   else if(input==2)
    {
    sub_res = sub(a, b);
     printf("Difference is: %d\n", sub_res);
    }
    else if(input==3)
    {
mult_res = multi(a, b);
 printf("Multiplication is: %d\n", mult_res);
    }
    else if(input==4)
    {
         divi_res = divi(a, b);
         printf("Division is: %f\n", divi_res);
    }
    else{
        printf("invalid \n");
    }
  return 0;
}
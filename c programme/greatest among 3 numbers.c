#include <stdio.h>
int a,b,c;
int main()
{
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("enter the third number:");
    scanf("%d",&c);
    if((a>b)&&(a>c))
    printf("the greatest no is: %d",a);
     else if((b>a)&&(b>c))
    printf("the greatest is:%d",b);
     else if((c>a)&&(c>b))
     printf("the greatest is:%d",c);
     else if ((a == b) && (b == c))
     printf(" all are equal\n");
    return 0;
}
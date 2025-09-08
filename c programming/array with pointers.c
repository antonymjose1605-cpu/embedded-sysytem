#include <stdio.h>

int main()
{
    int i;
    int number[5];    
    int *p = number;    
    for(i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &number[i]);   
    }
 for(i = 0; i < 5; i++)
    {
         printf("number[%d] = %d\n",i,*(p+i));
         printf("address=%p\n",(void*)(p+i));
    }
    return 0;
}
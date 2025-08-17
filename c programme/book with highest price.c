#include <stdio.h>

struct book {
    char title[50];
    char author[30];
    float price;
};

int main()
{
    int i, highest=0;
    struct book b[3];

    for (i = 0; i < 3; i++)
    {
        printf("Enter the name of the book %d: ", i + 1);
        scanf(" %49[^\n]", b[i].title);

        printf("Enter the name of the author %d: ", i + 1);
        scanf(" %29[^\n]", b[i].author);

        printf("Enter the price of the book %d: ", i + 1);
        scanf("%f", &b[i].price);
    }
    for (i = 1; i < 3; i++) {
        if (b[i].price > b[highest].price) 
        {
            highest = i;
        }
    }

    printf("\nThe book with the highest price is:\n");
    printf("Title : %s\n", b[highest].title);
    printf("Author: %s\n", b[highest].author);
    printf("Price : %.2f\n", b[highest].price);

    return 0;
}
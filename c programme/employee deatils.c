#include <stdio.h>

struct employee {
    char name[20];
    int id;
    float salary;
};

int main() {
    int i, ch;
    struct employee e[5];

    for (i = 0; i < 5; i++) {
        printf("Enter the name of employee %d: ", i + 1);
        scanf(" %19[^\n]", e[i].name); 

        printf("Enter ID of employee %d: ", i + 1);
        scanf("%d", &e[i].id);

        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &e[i].salary);

        while (ch = getchar() != '\n' && ch != EOF) {}
    }

    printf("\n Employee Details\n");
    for (i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("  Name: %s\n", e[i].name);
        printf("  ID: %d\n", e[i].id);
        printf("  Salary: %.2f\n", e[i].salary);
    }

    return 0;
}
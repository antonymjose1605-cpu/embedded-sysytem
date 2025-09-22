/*
 * GccApplication3.c
 *
 * Created: 9/22/2025 8:42:33 PM
 * Author : ADMIN
 */ 

#include <stdio.h>
int main() {
	int row,blank,i,j;
	printf("Enter the number of row: ");
	scanf("%d",&row);
	for (i = 1; i <= row; i++) {
		for (blank= 1;blank<=row-i;blank++)
		{
			printf(" ");
		}
		for (j=1; j<=(2*i-1);j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


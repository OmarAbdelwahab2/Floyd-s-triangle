#include<stdio.h>
int i, j, num=1, x;
void main(void)
{
	printf("enter the number of rows");
	scanf_s("%d", &x);
	for (i = 0; i < x; i++)
	{ 
		for (j = 0; j <= i; j++)
		{
			printf("%d\t", num);
			num++;
		}
		printf("\n");
	}
}
#include<stdio.h>

void main()
{
	int number = 0;
	scanf_s("%d", &number);

	if (number % 2 == 0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}
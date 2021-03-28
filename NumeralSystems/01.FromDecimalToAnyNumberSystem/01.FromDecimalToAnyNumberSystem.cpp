#include<stdio.h>

void PrintInBase(int base, int number, char separating)
{
	char tempNumber[33] = { 0 };
	int i = 0;

	while (number != 0)
	{
		char left = number % base;
		number /= base;
		if (left < 10)//using number
		{
			tempNumber[i] = '0' + left;
		}
		else//using symbols
		{
			tempNumber[i] = 'A' + (left - 10);
		}
		i++;

	}
	char convertedNumber[33] = { 0 };

	for (int j = 0; j < i; j++)
	{
		convertedNumber[j] = tempNumber[i - (j + 1)];
	}

	printf("0%c%s\n", separating, convertedNumber);
}

void main()
{
	int myNumber = 0;
	int base = 0;
	printf("Enter DEC number to convert:\n");
	scanf_s("%d", &myNumber);
	printf("Enter base:");
	scanf_s("%d", &base);

	PrintInBase(base, myNumber, 'b');//binary





}
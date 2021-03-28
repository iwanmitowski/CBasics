#include<stdio.h>
#define Succes 0;
#define Unsuccess -1;

int main()
{
	int number = -1;

	scanf_s("%d", &number);

	if (number%3==0||number%5==0||number%8==0)
	{
		return Succes;
	}

	return Unsuccess;
}
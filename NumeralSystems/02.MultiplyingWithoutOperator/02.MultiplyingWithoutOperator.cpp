#include<stdio.h>

int Mult2(int number)
{
	return number << 1;
}

int Mult4(int number)
{
	return number << 2;
}

int Mult8(int number)
{
	return number << 3;
}

int Mult16(int number)
{
	return number << 4;
}

void main()
{
	int myNumber = 0;
	scanf_s("%d", &myNumber);

	printf("%d %d %d %d", Mult2(myNumber), Mult4(myNumber), Mult8(myNumber), Mult16(myNumber));

}
#include<stdio.h>
#define Civic 1
#define Acord 2
#define Jazz 3

void printInfo(int carModel)
{
	switch (carModel)
	{
	case Civic:
		printf("Infor for Civic");
		break;
	case Acord:
		printf("Infor for Acord");
		break;
	case Jazz:
		printf("Infor for Jazz");
		break;
	default:
		break;
	}
	
}

void main()
{
	int carNum = 0;
	scanf_s("%d", &carNum);

	printInfo(carNum);
}
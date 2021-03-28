#include<stdio.h>

void printExpression(int grade)
{

	switch (grade)
	{
	case 2:
		printf("Poor");

		break;
	case 3:
		printf("Average");

		break;
	case 4:
		printf("Good");

		break;
	case 5:
		printf("Very good");

		break;
	case 6:
		printf("Excellent");

		break;

	default:
		printf("Invalid input!");

		break;
	}


}

int main()
{
	int grade = 0;
	
	scanf_s("%d", &grade);

	printExpression(grade);

	return 0;
}


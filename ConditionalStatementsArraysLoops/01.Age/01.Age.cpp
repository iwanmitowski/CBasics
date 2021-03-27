#include<stdio.h>

void main()
{
	int age = 0;

	scanf_s("%d", &age);

	if (age<10)
	{
		printf("child");
	}
	else if (age>=10&&age<20)
	{
		printf("teen");
	}
	else if (age>20)
	{
		printf("adult");
	}
}
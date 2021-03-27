#include<stdio.h>

void main()
{

	int arr[] = { 5,2,3,4,5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size ; i++)
	{
		printf("%d\n", arr[i]);
	}

	printf("\n");

	char myWordArr[] = "Alo sashko";

	int sizeOfTheWord = sizeof(myWordArr) / sizeof(myWordArr[0]);

	for (int i = 0; i < sizeOfTheWord; i++)
	{
		printf("%c\n",myWordArr[i]);
	}

}
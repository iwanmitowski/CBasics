#include<stdio.h>
#include <xutility>


void main()
{
	int n = 0;
	int* arr;
	scanf_s("%d", &n);

	arr = (int*)malloc(sizeof(int) * n);

	double totalAge = 0;
	for (int i = 0; i < n; i++)
	{
		int currentAge;
		scanf_s("%d", &currentAge);
		arr[i] = currentAge;
		totalAge += currentAge;
	}

	double averageAge = totalAge / n;

	if (averageAge < 21)
	{
		printf("Asked teens\n");
	}
	else
	{
		printf("Asked adults\n");
	}
		
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n-i-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	double median = median = arr[n / 2];

	if (n % 2 == 0)
	{
		int index = (n / 2) - 1;
		median += arr[index];
		median /= 2;
	}


	printf("Median:");
	printf("%.2lf", median);
}
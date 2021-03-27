#include<stdio.h>
#include <crtdbg.h>
#include <corecrt_malloc.h>

void main()
{
	int n=0;
	int* arr;
	scanf_s("%d", &n);

	if (n <= 1)
	{
		printf("Input must be positive number greater than 1!");
	}

	int min = 0;
	int max = 0;
	printf("Closest number between these:");
	scanf_s("%d - %d", &min, &max);

	arr = (int*)malloc(sizeof(int) * n);

	arr[0] = 1;
	arr[1] = 1;

	int closest = 99999999;

	for (int i = 2; i <= n-2; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];

		if (i==n-2)
		{
			printf("%d\n", arr[i]);

		}
		
	}
	
	if (min>max)
	{
		int t = min;
		min = max;
		max = t;
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= min && arr[i] <= max)
		{
			if (arr[i] < closest)
			{
				closest = arr[i];
			}
		}
	}
	printf("%d", closest);
}
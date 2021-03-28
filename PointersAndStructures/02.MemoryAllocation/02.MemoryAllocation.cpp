#include<stdio.h>
#include<stdlib.h>

void main()
{
	// malloc + free

	int n = 0;
	scanf_s("%d", &n);

	int *string = (int *)(malloc(sizeof(int)*n));
	

	for (int i = 0; i < n; i++)
	{
		string[i] = i;
	}

	//to end the stream the last element must be 0
	string[n] = 0;

	//after using malloc, must free the allocated memory :
	free(string);

	printf("%s\n", string);
}
#include<stdio.h>
#include <crtdbg.h>
#include <corecrt_malloc.h>

int main()
{
	int n = 8;
	int* pointer = &n;
	n = 6;


	// pointer - the position
	// *pointer - the value
	// even after changing the value the direction is constant pointing towards value
	// *pointer = 123 =====> n = 123

	printf("%x\n", &n);
	printf("%x\n", pointer);

	printf("%d\n", n);
	printf("%d\n", *pointer); 

	return 0;
}
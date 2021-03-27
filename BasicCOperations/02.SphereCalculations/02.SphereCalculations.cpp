#include<stdio.h>
#include<math.h>
#define M_PI acos(-1.0)

int main()
{
	double r = 0;

	scanf_s("%lf", &r);

	double S =  M_PI* 2 * r;
	double V = (4 / 3) * M_PI * pow(r, 3);
	double C = 2 * M_PI * r;

	printf("C:");
	printf("%lf\n", C);
	printf("S:");
	printf("%lf\n", S);
	printf("V:");
	printf("%lf\n", V);

	return 0;
}
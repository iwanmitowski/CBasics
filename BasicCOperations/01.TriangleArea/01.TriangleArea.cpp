#include<stdio.h>
#include<math.h>
int main()
{
	double a = 0;
	double b = 0;
	double c = 0;

	scanf_s("%lf, %lf, %lf", &a, &b, &c);

	double p = (a + b + c) / 2;
	double heronFormula = p * (p - a) * (p - b) * (p - c);
	double s = pow(heronFormula, 0.5);

	printf("%lf", s);
	return 0;
}


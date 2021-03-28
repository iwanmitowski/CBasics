#include<stdio.h>

typedef struct {
	const char *make;
	const char *model;
	int horsePower;
}Car;


void printFormatedCarInfo(Car car)
{
	printf("Make: %s\n", car.make);
	printf("Model: %s\n", car.model);
	printf("HP: %d\n", car.horsePower);
}
void main()
{
	Car myCar;
	myCar.make = "Mercedes";
	myCar.model = "C180";
	myCar.horsePower = 120;
	printFormatedCarInfo(myCar);

}
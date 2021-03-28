#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define Capacity 10

typedef struct {
	const char* make;
	const char* model;
	float horsePower;
	float torque;
} Car;

void printFormatedCarInfo(Car car)
{
	printf("Make: %s\n", car.make);
	printf("Model: %s\n", car.model);
	printf("HP: %.02f\n", car.horsePower);
	printf("Torque: %.02f\n", car.torque);
	printf("#####\n");
	printf("#####\n");
}

void SetupInfoForCars(Car* cars, int carCount)
{
	cars[0].make = "asd";
	cars[0].model = "asd 123";
	cars[0].horsePower = rand() % 10;
	cars[0].torque = rand() % 20;
	for (int i = 1; i < carCount; i++)
	{
		cars[i].make = "ImCarMake";
		cars[i].model = "Im CarModel";
		cars[i].horsePower = rand() % 10;
		cars[i].torque = rand() % 20;

		printFormatedCarInfo(cars[i]);
	}
}

void searchForCarModel(const char* model, Car* cars)
{
	bool isFound = false;
	for (int i = 0; i < Capacity; i++)
	{
		int comparison = strcmp(model, cars[i].model);

		if (comparison == 0)
		{
			printf("Found a car:\n");
			printFormatedCarInfo(cars[i]);
			
			isFound = true;
		}

	}

	if (!isFound)
	{
		printf("No matches\n");

	}
}

void main()
{
	Car myCars[Capacity];
	SetupInfoForCars(myCars, Capacity);

	char text[20];

	fgets(text, 20, stdin);
	text[strlen(text) - 1]='\0'; // Reading From Console
	
	printf("Looking for %s car model in the garage:", text);

	searchForCarModel(text, myCars);
}
#include<stdio.h>

#define Poor 2
#define Average 3
#define Good 4
#define VeryGood 5
#define Excellent 6
#define StudentsCount 10

int ReadAndCalculatePoints()
{
	float task1 = 0;
	float task2 = 0;
	float task3 = 0;
	float task4 = 0;
	float task5 = 0;
	float hw = 0;
	float hwEvaluation = 0;

	float sum = 0;
	scanf_s("%f, %f, %f, %f, %f, %f, %f", &task1, &task2, &task3, &task4, &task5, &hw, &hwEvaluation);
	sum += task1;
	sum += task2;
	sum += task3;
	sum += task4;
	sum += task5;
	sum += hw;
	sum += hwEvaluation;

	return sum;
}

float Grade(float sum)
{
	if (sum < 45)
	{
		return Poor;
	}
	else if (sum >= 45 && sum < 60)
	{
		return Average;
	}
	else if (sum >= 60 && sum < 75)
	{
		return Good;
	}
	else if (sum >= 75 && sum < 80)
	{
		return VeryGood;
	}

	return Excellent;
}

float CalculateAverage(float arr[])
{
	float averageGrade = 0;

	for (int i = 0; i < StudentsCount; i++)
	{
		averageGrade += arr[i];
	}

	return averageGrade /= StudentsCount;
}

void main()
{
	float students[StudentsCount];

	for (int i = 0; i < StudentsCount; i++)
	{
		printf("Enter the points from task1 - task5, hw and hw nvaluation:\n");

		float sumOfPoints = ReadAndCalculatePoints();

		float grade = Grade(sumOfPoints);
		students[i] = grade;
		printf("%f\n", grade);
	}

	float averageGrade = CalculateAverage(students);

	printf("Average grade:");
	printf("%.2f", averageGrade);

}
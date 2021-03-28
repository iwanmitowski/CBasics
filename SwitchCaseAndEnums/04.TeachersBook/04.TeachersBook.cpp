#include<stdio.h>
#include<math.h>

#define studentsNumber 3

typedef enum
{
	Poor = 2,
	Average = 3,
	Good = 4,
	VeryGood = 5,
	Excellent = 6

}Mark;

void printStudentInfo(int i, Mark mark)
{
	printf("Student:%d ", i + 1);

	switch (mark)
	{
	case Poor:
		printf("Poor\n");
		break;
	case Average:
		printf("Average\n");
		break;
	case Good:
		printf("Good\n");
		break;
	case VeryGood:
		printf("VeryGood\n");
		break;
	case Excellent:
		printf("Excellent\n");
		break;

	default:
		break;
	}
}

void main()

{
	
	Mark studentMarks[studentsNumber];
	int sumOfAllMarks = 0;
	
	for (int i = 0; i < studentsNumber; i++)
	{
		Mark marks[6];
		scanf_s("%d %d %d %d %d %d", &marks[0], &marks[1], &marks[2], &marks[3], &marks[4], &marks[5]);

		int sum = 0;
		for (int j = 0; j < 6; j++)
		{
			sum += marks[j];
		}

		Mark average = (Mark)round(sum / 6.0);
		studentMarks[i] = average;
		sumOfAllMarks += average;

	}

	for (int i = 0;i < studentsNumber;i++)
	{
		printStudentInfo(i, studentMarks[i]);
	}
}

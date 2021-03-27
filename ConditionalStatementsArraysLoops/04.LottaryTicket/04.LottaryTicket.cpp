#include<stdio.h>
void main()
{
	//Different numbers ticket!
	int winningTicket[] = { 1,2,4,5 };

	int a= 0;
	int b= 0;
	int c= 0;
	int d= 0;

	scanf_s("%d %d %d %d", &a, &b, &c, &d);

	int myTicket[] = { a,b,c,d };

	int matched = 0;

	for (int i = 0; i < 4; i++)
	{
		int currentNumber = myTicket[i];

		for (int j = 0; j < 4; j++)
		{
			int winningNumber = winningTicket[j];

			if (currentNumber==winningNumber)
			{
				matched++;
				break;
			}
		}
	}

	if (matched==4)
	{
		printf("JACKPOT!");
	}
	else
	{
		printf("Try again!");
	}
}
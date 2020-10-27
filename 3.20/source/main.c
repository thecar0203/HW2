#include <stdio.h>
#include <stdlib.h>

int main(viod)
{
	float a=0, b, c, d;
	while (a != -1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%f", &a);
		if (a == -1) { break; }
		printf("Enter hourly rate of the worker($00.00):");
		scanf_s("%f", &b);
		if (a > 40)
		{
			c = ((a - 40)*b / 2) + a * b;
		}
		else
		{
			c = a * b;
		}
		printf("Salary is $%.2f\n", c);
	}
}
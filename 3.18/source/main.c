#include <stdio.h>
#include <stdlib.h>

int main(viod)
{
	float a=0;
    float  b;
	while ( a != -1)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &a);
        if (a == -1) { break; }
		b = 200 + 0.09*a;
		printf("Salary is:%.2f\n", b);
		printf("\n");
	}
}
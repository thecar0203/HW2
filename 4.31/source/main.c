#include <stdio.h>
#include <stdlib.h>

int main(viod)
{
	int a, b, c, d, e, f;
	a = 9;
	f = (a + 1) / 2;
	for (b = 1; b <= f; b++)
	{
		for (d = f - b; d > 0; d--)
		{
			printf(" ");
		}
		for (e = 1; e <= 2 * b - 1; e++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (b = f - 1; b > 0; b--)
	{
		for (d = f - b; d > 0; d--)
		{
			printf(" ");
		}
		for (e = 1; e <= 2 * b - 1; e++)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;

}
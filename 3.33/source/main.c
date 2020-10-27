#include <stdio.h>
#include <stdlib.h>

int main(viod)
{
	int w,h,i,j ;
	printf("Enter lengh:");
	scanf_s("%d", &h);
	printf("Enter breadth:");
	scanf_s("%d", &w);
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			if (i == 0 || i == h - 1 || j == 0 || j == w - 1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(viod)
{
	int  i, j, n;


	for (i =1 ; i <= 500; i++)
	{
		for (j = 1; j <= 500; j++)
		{
			for (n = 1; n <= 500; n++)
			{
				if (n*n == i * i + j * j)
				{
					printf("%d  %d  %d\n",i,j,n);
				}

			}
		}	
	}


	system("pause");
	return 0;

}
#include <stdio.h>
#include <stdlib.h>

int main(viod)
{
	int  a,b,c,d,e,f,g;
	printf("Enter your code:\n");
	scanf_s("%d",&a);
	switch (a)
	{

	case 1:
		printf("Your salary is 30000:\n");
		break;
	case 2:
		printf("Enter your working hours:\n");
		scanf_s("%d", &b);
		if (b > 40)
		{
			c = 200 * b + (b - 40)*1.5*200;
			printf("Your salary is :%d\n",c);
		}
		else
		{
			c = 200 * b;
			printf("Your salary is :%d\n", c);
		}
		break;
	case 3:
		printf("Enter your gross weekly sales:\n");
		scanf_s("%d", a);
		b = 250 + a * 0.057;
		printf("Your salary is :%d\n", b);
		break;
	case 4:
		printf("Enter how many item you producted:\n");
		scanf_s("%d", a);
		b = a * 200;
		printf("Your salary is :%d\n", b);
		break;
	default:
		printf("Error\n");
		break;
	}
	system("pause");
	return 0;
}
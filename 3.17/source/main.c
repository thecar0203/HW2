#include <stdio.h>
#include <stdlib.h>

int main(viod)

{
	int a=0;
	float  b, c,d,e,f;
	
	while (a != -1)
	{
		printf("Enter account number(-1 to end):\n");
		scanf_s("%d", &a);
		if (a == -1) { break; }
		printf("Enter beginning balance:\n");
		scanf_s("%f", &b);
		printf("Enter total charges:\n");
		scanf_s("%f", &c);
		printf("Enter total credits:\n");
		scanf_s("%f", &d);
		printf("Enter credit limit:\n");
		scanf_s("%f", &e);	
		f = b + c - d;
		if (f > e)
		{
			printf("Account:%d\n", a);
			printf("Credit Limit:%.2f\n", e);
			printf("Balance:%.2f\n", f);
			printf("Credit Limit Exceeded.\n");
		}
	}
}
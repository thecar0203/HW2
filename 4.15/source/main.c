#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(viod)
{
	float s, a, r, n,b;
	printf("Enter investment:\n");
	scanf_s("%f",&a);
	printf("Enter years:\n");
	scanf_s("%f", &n);
	printf("Enter rate:\n");
	scanf_s("%f", &r);
	
	b = a*pow((1 + r), n);
	printf("Sum=%.2f\n",b);
	system("pause");
	return 0;

}
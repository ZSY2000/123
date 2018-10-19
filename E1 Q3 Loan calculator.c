#include<stdio.h>

int main()
{
	float a, b, c;
	printf("Enter amount of loan: ");
	scanf("%f", &a);
	printf("Enter interest rate: ");
	scanf("%f", &b);
	printf("Enter monthly payment: ");
	scanf("%f", &c);
	printf("\n");
	
	b = (b / 100.0) / 12.0;
	
	a = 0 - c + a * (b + 1);
	printf("Balance remaining after first payment: $%.2f\n", a);
	
	a = 0 - c + a * (b + 1);
	printf("Balance remaining after second payment: $%.2f\n", a);
	
	a = 0 - c + a * (b + 1);
	printf("Balance remaining after third payment: $%.2f\n", a);
	return 0;
}

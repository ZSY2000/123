#include<stdio.h>

int main()
{
	float a, b;
	printf("Enter an amount: ");
	scanf("%f", &a);
	b = a * 0.05;
	b += a;
	printf("With tax added: $%.2f\n", b);
	return 0;
} 

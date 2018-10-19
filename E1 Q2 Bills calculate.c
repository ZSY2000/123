#include<stdio.h>

int main()
{
	int a, b, c, d, e;
	printf("Enter a dollar amount: ");
	scanf("%d", &a);
	printf("\n");
	b = a / 20;
	a -= 20 * b;
	c = a / 10;
	a -= 10 * c;
	d = a / 5;
	a -= 5 * d;
	e = a;
	printf("$20 bills: %d\n", b);
	printf("$10 bills: %d\n", c);
	printf(" $5 bills: %d\n", d);
	printf(" $1 bills: %d\n", e);
	return 0;
} 

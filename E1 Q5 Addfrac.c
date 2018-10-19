#include<stdio.h>

int main()
{
	int a, b, c, d, m, n;
	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d/%d+%d/%d", &a,&b, &c, &d);
	m = a * d + b * c;
	n = b * d;
	printf("The sum is %d/%d\n", m, n);
	return 0;
} 

#include<stdio.h>

int main()
{
	int a, b;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &a, &b);
	printf("Equivalent 12-hour time: ");
	if(a == 12 && b == 00) printf("12:00");
	else if(a == 24) printf("00:00");
	else if(a <= 11) printf("%d:%02d AM", a, b);
	else a -= 12, printf("%d:%02d PM", a, b);
	printf("\n");
	
	return 0; 
}

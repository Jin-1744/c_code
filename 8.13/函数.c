#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swag(int* px, int* py)
{
	int c = 0;
	c = *px;
	*px = *py;
	*py = c;
}


int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	swag(&a, &b);
	printf("%d %d", a, b);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int x;
	int n = 1;
	scanf("%d",&x);
	while (x / 10 >= 1)
	{
		x = x / 10;
		n++;


	}
	printf("%d",n);

	return 0;
}
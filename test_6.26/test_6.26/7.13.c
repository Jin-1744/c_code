#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int line = 1;
    while (line <= 5)
    {
        int star = 1;
        while (star <= line)
        {
            printf("*");
            star++;
        }
        printf("\n");
        line++;
    }
    return 0;
}
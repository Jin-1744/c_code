#include <stdio.h>
#include <stdlib.h>

int abc(int n)
{
    int a;
    int f=1;
    for(a=1;a<=n;a++)
    {
        f=f*a;
    }
    return f;
}

int main()
{
    int n;
    int f;
    scanf("%d",&n);
    f=abc(n);
    printf("%d",f);
    return 0;
}

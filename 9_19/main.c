#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int i=1,n,j=0,temp;
    scanf("%d",&n);
    printf("%d=",n);
    temp=n;
    while(temp>10)
    {

        temp=temp/10;
        i=i*10;
    }
    while(i>=1)
    {
        a[j]=n/i;
        n=n%i;
        j++;
        i=i/10;
    }
    for(int k = 0; k < j; k++)
    {
        printf("%d&", a[k]);
    }

    return 0;
}

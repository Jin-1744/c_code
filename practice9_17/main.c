#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int n,i,j;
    int a[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {
                a[i][j]=(i+1)*(j+1);
                printf("%4d",a[i][j]);
            }
            printf("\n");
    }

    return 0;
}
*/

int main()
{
    int a[100][100];
    int i,j,n,m,k;
    printf("n&m=");
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d ",a[i][j]);
    }
    scanf("%d",k);
    return 0;
}

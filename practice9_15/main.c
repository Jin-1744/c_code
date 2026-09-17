#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    float a,d;
    int b;
    char c;
    scanf("%f %d %c %f",&a,&b,&c,&d);
    printf("%c %d %.2f %.2f",c,b,a,d);
    return 0;
}


int main()
{
    int y,m,d;
    scanf("%d-%d-%d",&y,&m,&d);
    printf("Year:%d,Month:%03d,Day:%02d",y,m,d);
    return 0;
}


int main()
{

    long long a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld",a+b);
    return 0;
}


int main()
{
    int m,n,a,b,c,d;
    scanf("%d %d",&m,&n);




        if(m<100||n>1000||m>n)
        {
            printf("输入错误");
        }
        else
        {

            for(a=m;a<=n;a++)
        {       b=(a/100)%10;//百位数
                c=(a/10)%10;//十位数
                d=a%10;

            if(a==b*b*b+c*c*c+d*d*d)
            {
                printf("%d ",a);

            }
        }
        }

    return 0;
}


int main()
{
    int i,n,j;
    scanf("%d",&n);//n为行数

    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
            printf(" ");
        for(j=0;j<2*(n-i)-1;j++)
            printf("*");
         printf("\n");
    }

    return 0;
}





int main()
{
    int n,i;
    double avg=0,sum=0;
    double stu[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&stu[i]);
        sum+=stu[i];
    }
    avg=sum/n;
    printf("%.2lf\n",avg);
    for(i=0;i<n;i++)
    {
        if(stu[i]<avg)
        {
            printf("%.2lf ",stu[i]);
        }

    }
    return 0;
}

*/

int main()
{
    int fib[100];
    int i,n;
    scanf("%d",&n);
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];

    }
    for(i=0;i<n;i++)
    {

        printf("%d ",fib[i]);
        if((i+1)%4==0)
            printf("\n");
    }
    return 0;
}






#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,f,i,n=0;
    long long int ara[300];
    while(1)
    {
        scanf("%lld%lld%lld",&d,&e,&f);
        if(d==0&&e==0&&f==0)
        {
            break;
        }
        a=d*d;
        b=e*e;
        c=f*f;
        if(a==b+c||b==c+a||c==a+b)
        {
            ara[n]=1;
        }
        else
        {
            ara[n]=2;
        }
        n=n+1;
    }
    for(i=0;i<n;i++)
    {
        if(ara[i]==1)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    long long int ara[55],i,n;
    ara[1]=1;
    ara[2]=2;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        break;
        for(i=3;i<=n;i++)
        {
            ara[i]=ara[i-1]+ara[i-2];
        }
        printf("%lld\n",ara[n]);

    }

    return 0;
}

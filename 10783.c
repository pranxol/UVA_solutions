#include<stdio.h>
main()
{
    int t,a,b,x,i,sum,ara[100];
    scanf("%d",&t);
    x=0;
    while(t--)
    {
        sum=0;
        scanf("%d%d",&a,&b);
        for(i=a;i<=b;i++)
        {
            if(i%2==1)
            {
                sum=sum+i;
            }
        }
        ara[x]=sum;
        x=x+1;
    }
    for(i=0;i<x;i++)
    {
       printf("Case %d: %d\n",i+1,ara[i]);
    }
    return 0;
}

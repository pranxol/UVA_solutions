#include<stdio.h>
int main()
{
    long long int ara[3],i,j,temp=0,t,x;
    scanf("%lld",&t);
    for(x=1;x<=t;x++)
    {
        for(i=0;i<3;i++)
        {
            scanf("%lld",&ara[i]);
        }
        for(i=0;i<2;i++)
        {
            for(j=i+1;j<3;j++)
            {
                if(ara[i]>ara[j])
                {
                    temp=ara[i];
                    ara[i]=ara[j];
                    ara[j]=temp;
                }
            }
        }

        printf("Case %lld: %lld\n",x,ara[1]);
    }
    return 0;
}

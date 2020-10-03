#include<stdio.h>
int main()
{
    int n,i,j;
    long long ara[1005],ex,temp,k;
    while(scanf("%d",&n)!=EOF)
    {
        ex=0;
        for(k=1;k<=n;k++)
        {
            scanf("%lld",&ara[k]);
        }
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<n+1;j++)
            {
                if(ara[i]>ara[j])
                {
                    ex++;
                }
            }
        }

        printf("Minimum exchange operations : %lld\n",ex);
    }
    return 0;
}

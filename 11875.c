#include<stdio.h>
int main()
{
    int t,n,ara[10],x,i,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        x=n/2+1;
        printf("Case %d: %d\n",k,ara[x]);
    }

    return 0;
}

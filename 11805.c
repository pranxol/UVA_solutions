#include<stdio.h>
int main()
{
    int x,y,i,k,p,n,t;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&n,&k,&p);
        x=k+p;
        y=0;
        while(x>n)
        {
              x= x-n;
        }
        printf("Case %d: %d\n",i,x);
    }

    return 0;
}

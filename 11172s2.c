#include<stdio.h>
int main()
{
    int i,t,x;
    long long a,b;
    char *ara[16];
    scanf("%d",&t);
    x=0;
    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        if(a==b)
        {
            ara[x]="=";
        }
        else if(a<b)
        {
            ara[x]="<";
        }
        else
        {
            ara[x]=">";
        }
        x=x+1;
    }
    for(i=0;i<x;i++)
    {
        printf("%s\n",ara[i]);
    }
    return 0;
}

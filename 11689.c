#include<stdio.h>
int main()
{
    int T,a,k,b,c,x,n;
    scanf("%d",&T);
    while(T--)
    {
    x=0;
    scanf("%d%d%d",&a,&k,&n);
    b=a+k;
    while(b>=n)
    {
    c=b/n;
    b=c+b%n;
    x=x+c;
    }
    printf("%d\n",x);
    }
    return 0;
}

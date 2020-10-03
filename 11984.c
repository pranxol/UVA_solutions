#include<stdio.h>
int main()
{
    double c,d,c1=0,f;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf",&c,&d);
        c1=((5*d)/9)+c;
        printf("Case %d: %.2lf\n",i,c1);
    }

    return 0;
}

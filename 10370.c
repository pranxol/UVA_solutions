#include<stdio.h>
int main()
{
    int t,n,ara[1000],total,i;
    double percentage,count,avg;
    char c='%';
    scanf("%d",&t);
    while(t--)
    {
        total=0;count=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
            total=total+ara[i];
        }
        avg=total/n;
        for(i=1;i<=n;i++)
        {
            if(ara[i]>avg)
                count++;
        }
        percentage=(count/n)*100;
        printf("%.3lf%c\n",percentage,c);
    }
    return 0;
}

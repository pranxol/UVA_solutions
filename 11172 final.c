#include<stdio.h>
int main()
{
    int i,t;
    long long a,b;
    char *ara[16];
    while(scanf("%d",&t)!=EOF)
    {
        for(i=0;i<t;i++)
        {
            scanf("%lld%lld",&a,&b);
            if(a==b)
            {
                ara[i]="=";
            }
            else if(a<b)
            {
                ara[i]="<";
            }
            else
            {
                ara[i]=">";
            }
        }
        for(i=0;i<t;i++)
        {
            printf("%s\n",ara[i]);
        }
    }
return 0;
}

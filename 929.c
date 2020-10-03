#include<stdio.h>

int main()
{
    int  t,c,d,i,j,k,n,m;
    short ara[1000][1000];
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d%d",&n,&m);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
               scanf("%d",&ara[i][j]);
            }
        }
        c=0;d=0;

            for(i=1,j=1;j<=m;j++)
            {
                c=c+ara[i][j];
            }
            for(i=2,j=m;i<=n;i++)
            {
                c=c+ara[i][j];
            }

            for(i=1,j=1;i<=n;i++)
            {
                d=d+ara[i][j];
            }
            for(i=n,j=2;j<=m;j++)
            {
                d=d+ara[i][j];
            }

        if(c<d)
        {
            printf("%d\n",c);
        }
        else
        {
            printf("%d\n",d);
        }
    }
    return 0;
}

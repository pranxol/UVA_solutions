#include<stdio.h>
int main()
{
    int i,j,n,g,a,b,c,k;
    while(1)
    {
        g=0;
        scanf("%d",&n);
        if(n==0||n>501)
            break;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                a=i;b=j;
                while(a!=0)
                {
                    c=b%a;
                    b=a;
                    a=c;
                }

                g=g+b;
            }
        }
        printf("%d\n",g);
    }
    return 0;
}

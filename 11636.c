#include<stdio.h>
int main()
{
    int t=1,c=1,n,count=0;
    while(scanf("%d",&n)==1)
    {
        if(n<0)
        {
            break;
        }

        else if(n==0)
        {
            printf("Case %d: 0\n",t);
        }
        else
        {
            while(1)
            {
                if(c<n)
                {
                    c=c+c;
                    count++;
                }
                else
                    {break;}
            }
            printf("Case %d: %d\n",t,count);

        }
        t++;
        count=0;
        c=1;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    long long int a,c=0,b=0,n,d=0;
    while(scanf("%lld",&n)==1)
    {
        if (n==0)
        {
            break;
        }
        a=n;
        while(1)
        {
            b=a%10;
            c=c+b;
            a=a/10;

            if(a==0)
            {
                a=c;
                if(c/10==0)
                {
                    d=1;
                }
                else {c=0;}
            }
            if(d==1)
            {
                break;
            }
        }
        printf("%d\n",c);
        c=0;
        d=0;
    }
    return 0;
}

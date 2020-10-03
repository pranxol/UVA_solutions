#include <stdio.h>
int main()
{
    int temp,ct,maxm,a,b,i;
    long long int n;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        maxm=0;
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;

        }
        for(i=a;i<=b;i++)
        {
            n=i;
            ct=0;
            while(1)
            {
                ct=ct+1;
                if(n==1)
                {
                    break;
                }
                else if(n%2==1)
                {
                    n=(3*n)+1;
                }
                else if(n%2==0)
                {
                    n=n/2;
                }
            }
            if(ct>maxm)
            {
                maxm=ct;
            }
        }

        if(temp==b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        printf("%d %d %d\n",a,b,maxm);
    }
    return 0;
}

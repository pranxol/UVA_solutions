#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,f;
    while(1)
    {
        scanf("%lld%lld%lld",&d,&e,&f);
        if(d==0&&e==0&&f==0)
        {
            break;
        }
        a=d*d;
        b=e*e;
        c=f*f;
        if(a==b+c||b==c+a||c==a+b)
            {printf("right\n");}

        else
            {printf("wrong\n");}
    }
    return 0;
}

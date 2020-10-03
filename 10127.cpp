#include<stdio.h>
#include<iostream>
using namespace std;
int base=10;
int f(int base,int i,int a)
{
    if(i==0) return 1%a;
    if(i%2==0)
    {
        int ret=f(base,i/2,a);
        return ((ret%a)*(ret%a))%a;
    }
    else
        return ((base%a)*(f(base,i-1,a)%a))%a;
}
int main()
{
    int a,p,i,sum;
    while(scanf("%d",&a)!=EOF) ///not divided by 2 and 5  ***
    {
        sum=0;
        /*if(sum%a==0)
        {
            printf("1\n");
        }*/
            for(i=0;i>=0;i++)
            {
                sum=((sum%a)+f(base,i,a))%a;
                if(sum==0)
                   {
                       printf("%d\n",i+1);
                       break;
                   }
            }
    }
    return 0;
}


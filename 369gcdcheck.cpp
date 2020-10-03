#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    int a,b,t,gcd;
scanf("%d%d",&a,&b);
while(b!=0)
        {
            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;
        printf("%d",gcd);
   return 0;
}

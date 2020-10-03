#include<stdio.h>
#include<iostream>
#define i64 unsigned int ///#define i64 long long   *****for unsigned take less memory
using namespace std;
unsigned int m; /// i64 m;
i64 f(i64 b,i64 p)
{
    if(p==0)return 1%m;
    if(p%2==0)
    {
        i64 ret=f(b,p/2);
        return ((ret%m)*(ret%m))%m;
    }
    else return ((b%m)*(f(b,p-1)%m))%m;
}
int main()
{
    i64 b,p;

    while( scanf("%d %d %d",&b,&p,&m)==3)  ///%lld %lld %lld;
    {
        printf("%d\n",f(b,p));   ///%lld;

    }
    return 0;
}

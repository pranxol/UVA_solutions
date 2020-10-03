#include<stdio.h>
long long  nCr(long long  i,long long  j)
{
   long long  mul=1,k;
    if(i-j<j)
        j=i-j;
    for(k=1;k<=j;k++,i--)
    {
        mul=mul*i;
        mul=mul/k;
    }
    return mul;
}
int main()
{
   long long  n,r;
while(scanf("%lld %lld",&n,&r)==2)
    {
    if(n==0 && r==0)
        break;
        printf("%lld things taken %lld at a time is %lld exactly.\n",n,r,nCr(n,r));
    }

return 0;
}

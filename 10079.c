#include<stdio.h>
int main()
{
    long long int i,n,c;
    scanf("%I64d",&n);
    {
        c=0;
        for(i=0;i<=n;i++)
        {
            c=c+i;
        }
        printf("%I64d\n",c+1);
    }
    return 0;
}

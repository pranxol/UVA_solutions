#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,k,cig,but,a;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        but=n;
        while(but>=k)
        {
            a=but/k;
            n=n+a;
            but=a+but%k;
        }
        cout<<n<<endl;
    }



    return 0;
}

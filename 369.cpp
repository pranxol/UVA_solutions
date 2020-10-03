#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int GCD(int a,int b)
{
    int t,gcd;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    gcd=a;
    return gcd;
}
int main()
{
    int up[100],nic[100],n,m,lim,i,j,gcd;
    while(scanf("%d%d",&n,&m)==2)
    {
        if(n==0&&m==0)
        {
            break;
        }

    if(n-m>m||n-m==m){lim=m;}
    else{lim=n-m;}
    for(i=1,j=n;i<=lim;j--,i++)
    {
        nic[i]=i;
        up[i]=j;
        //printf("%d  %d\n",up[i],nic[i]);
    }
    for(i=lim;i>0;i--)
    {
        j=lim;
        while(nic[i]!=1)
        {
            gcd=GCD(up[j],nic[i]);
            if(gcd==1)
            {
                j--;
            }
            else
            {
               up[j]=up[j]/gcd;
               nic[i]=nic[i]/gcd;
            }
        }

    }
    long long int res=1;
    for(i=1;i<=lim;i++)
    {
        //nic[i]=i;
       // up[i]=j;
       res=res*up[i];
       // printf("%d  %d\n",up[i],nic[i]);
    }
        printf("%d things taken %d at a time is %lld exactly.\n",n,m,res);
    }

    return 0;
}

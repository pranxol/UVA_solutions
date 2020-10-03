
//    freopen ("input.txt", "r", stdin);
//    freopen ("output.txt", "w", stdout);


#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
#define arrsize 1000000
int flag[arrsize+5];
int primes[arrsize+5];
void prime(int n)
{
    int i,j;
    flag[0]=0,flag[1]=0;
    flag[2]=1;
    for(i=3;i<=n;i+=2) flag[i]=1;///সব প্রাইম বিজোড় ( ২ বাদে )। তাই সব বিজোড়কে ( 1 ) করে দিলাম।

    for(i=4;i<=n;i+=2) flag[i]=0;///সব জোড় non prime ( ২ বাদে )।  তাই তাদের ( 0 ) করে দিলাম।

    int limit=sqrt(n)+1;
    for(i=3;i<limit;i+=2)
    {
        if(flag[i])
        {
            for(j=i;i*j<=n;j+=2)
            {
                flag[i*j]=0;/// যে বিজোড় গুলো প্রাইম না তাদের ( 0 ) করে দিলাম।
            }
        }
    }
    j=0;
    for(i=2;i<=n;i++)
    {
        if(flag[i])
        {
            primes[j]=i;
            //printf("%d\n",primes[j]);
            j++;
        }
    }
}

int main()
{
    int i,n=1000000;
    //scanf("%d",&n)
    prime(n);
    /*for(i=0;i<=n;i++)
    {
        printf("%d\n",primes[i]);
        if(primes[i]>n)
            break;
    }*/
    /*for(int i=999980;i<=n;i++)
    {
        if(flag[i]==1)
            printf("%d=prime\n",i);
        else
            printf("%d=notprime\n",i);
    }*/
    int gbnumber;
    while(scanf("%d",&gbnumber))
    {
        if(gbnumber==0)
            return 0;
        i=1;int biyogfol;
    int len=(gbnumber/2)+1;
    while(primes[i]<=len)
    {
        biyogfol=gbnumber-primes[i];
        if(flag[biyogfol]==1)
        {
            printf("%d = %d + %d\n",gbnumber,primes[i],biyogfol);
            break;
        }

        else
            i++;
    }///printf("Goldbach's conjecture is wrong.\n");
    }///EI LINE PRINT KORA CHARAI CODE ACCEPTED


    return 0;
}



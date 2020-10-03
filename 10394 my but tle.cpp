
//    freopen ("input.txt", "r", stdin);
//    freopen ("output.txt", "w", stdout);


#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
#define arrsize 20000000
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
            /*if(primes[j]==18409199)
            {
                printf("%d\n%d",primes[j],j);
                break;
            }*/

            j++;
        }
    }
}

int main()
{
    int i,n=20000000;
    //scanf("%d",&n)
    prime(n);
    /*for(i=0;i<=n;i++)
    {
        printf("%d\n",primes[i]);
        if(primes[i]>n)
            break;
    }*/
    /*for(int i=19999970;i<=n;i++)
    {
        if(flag[i]==1)
            printf("%d=prime\n",i);
        else
            printf("%d=notprime\n",i);
    }*/
    int given;
    while(scanf("%d",&given)!=EOF)
    {
        int cnt=0,ic;
        if(given<=100&&given>0)
        {
           ic=0; cnt=0;
        }

        else if(given<=1000&&given>100)
            {
                ic=530;cnt=100;
            }

        else if(given<=10000&&given>1000)
            {
                ic=7793;cnt=1000;
            }
        else if(given<=100000&&given>10000)
            {
                ic=97255;cnt=10000;
            }


        for(i=ic;i<20000001;i++)
        {
            if(primes[i]+2==primes[i+1])
                cnt++;
            if(cnt==given)
            {
                printf("(%d, %d)\n",primes[i],primes[i+1]);
                break;
            }
        }
    }
    return 0;
}

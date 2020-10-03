#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    /*int sum=0,i;
    for(i=32;i<=52;i++)
    {
        sum=sum+i;

    }
    cout<<sum;*/
   int i,j,k,n=1000;
   char check[1000];
   int prime[500];
   for(i=2;i<=n;i++)
   {
       check[i]='1';
   }
   check[1]='1';
   for(i=2;i*i<=n;i++)
   {
        if(check[i]=='1')
        for(j=2;i*j<=n;j++)
       {
           check[i*j]='0';
       }
   }
  /* for(i=0,j=0;i<=n;i++)
   {
       if(check[i]=='1')
       {
           prime[j++]=i;
       }
   }
   for(i=0;i<j;i++)
   {
       printf("%d  ",prime[i]);
   }*/
   char word[25];

   while(gets(word))
   {

       int sum=0;
       int i,l;
       l=strlen(word);
       for(i=0;i<l;i++)
       {
            if(word[i]>='a'&&word[i]<='z')
           {
               sum=sum+(int)word[i]-96;
           }
           else if (word[i]>='A'&&word[i]<='Z')
           {
               sum=sum+(int)word[i]-38;
           }
       }

       //printf("%d",sum);
        if(check[sum]=='1')
        {
            printf("It is a prime word.\n");
        }
        else
        {
            printf("It is not a prime word.\n");
        }
   }
    return 0;
}

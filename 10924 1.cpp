#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
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
           else
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
            printf("It is a not prime word.\n");
        }
   }
    return 0;

}

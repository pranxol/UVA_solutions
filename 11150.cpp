#include<stdio.h>
#include<iostream>
using namespace std;
int main()

{
    int n,eaten,khali,a,b;
    while(scanf("%d",&n)!=EOF)
    {

        eaten=n;
        while(1)
        {
           a=n%3;
           b=n/3;
           n=a+b;
           eaten=eaten+b;
           if(n==2)
           {
              eaten=eaten+1;
              break;
           }
           else if(n==1)
           {

               break;
           }
        }
        printf("%d\n",eaten);
    }


}

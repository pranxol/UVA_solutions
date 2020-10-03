#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
    int g;
    char s[102],n[102];
    while(scanf("%d",&g)==1)
    {
        if(g==0)
        {
            break;
        }
        //fflush(stdin);
        getchar();
        gets(s);
        int len=strlen(s);
        int glen=len/g;
        int j=glen-1;
        int i;
        for(i=0;i<len;i++)
        {
            n[j]=s[i];
            j--;
            if(j<0)
            {
               j=i+glen;
            }
        }
       // n[i]='\0';
        cout<<n;
    }
    return 0;
}

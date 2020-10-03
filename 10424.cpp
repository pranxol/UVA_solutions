#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iomanip>
using namespace std;
int main()
{

    int a,i,b,c,sum1,sum2,len,fs1,fs2,r;
    char nam1[25],nam2[25];
    while(gets(nam1))
    {
        ;gets(nam2);a=strlen(nam1);b=strlen(nam2);sum1=0;sum2=0; fs1=0;
        for(i=0;i<a;i++)
        {
            if(nam1[i]>='a' && nam1[i]<='z')
            {
                sum1=sum1+(int)nam1[i]-96;
            }
            else if(nam1[i]>='A' && nam1[i]<='Z')
            {
                sum1=sum1+(int)nam1[i]-64;
            }
        }
        while(1)
        {
            while(sum1)
            {
                r=sum1%10;
                sum1=sum1/10;
                fs1=fs1+r;
            }
            len=floor(log10(fs1))+1;
            if(len>1)
            {
                sum1=fs1;
                fs1=0;
                continue;
            }
            else
                break;
        }

        //cout<<fs1<<endl;
        for(i=0;i<b;i++)
        {
            if(nam2[i]>='a' && nam2[i]<='z')
            {
                sum2=sum2+(int)nam2[i]-96;
            }
            else if(nam2[i]>='A' && nam2[i]<='Z')
            {
                sum2=sum2+(int)nam2[i]-64;
            }

        }
        fs2=0;
        while(1)
        {
            while(sum2)
            {
                r=sum2%10;
                sum2=sum2/10;
                fs2=fs2+r;
            }
            len=floor(log10(fs2))+1;
            if(len>1)
            {
                sum2=fs2;
                fs2=0;
                continue;
            }
            else
                break;
        }
        //cout<<fs2<<endl;
        double fu;
        if(fs1>fs2)
        {
            //cout<<"fs1>fs2"<<endl;
            fu=((double)fs2/(double)fs1)*100;
        }
        else if(fs1<fs2||fs1==fs2)
        {
            //cout<<"fs1<fs2||fs1==fs2"<<endl;
            fu=((double)fs1/(double)fs2)*100;
        }
        printf("%.2lf ",fu);
        cout<<"%"<<endl;
        //cout<<setprecision(2)<<fu<<endl;

    }
    return 0;
}

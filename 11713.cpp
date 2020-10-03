#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t,c,d,i,j,consonant,match,no,vowsame,consame,sum,condif;
    char a[22],b[22];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        consonant=0;match=0;no=0;vowsame=0;consame=0;;sum=0,condif=0;
        gets(a);
        gets(b);
        c=strlen(a);
        d=strlen(b);

        if(d!=c)
        {
            printf("No\n");
        }
        else
        {
            for(i=0;i<d;i++)
            {
                if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
                {
                    if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='0')
                    {
                        vowsame++;
                    }
                    else
                    {
                        no=1;
                        break;
                    }
                }
                else if(b[i]==a[i])
                {
                    consame++;
                }

                else if(b[i]!=a[i])
                {
                    condif=1;
                    break;
                }
            }
            sum=vowsame+consame;
            if(condif==1||no==1)
            {
                printf("No\n");
            }
            else if(sum==d||consame==d)
            {
                printf("Yes\n");
            }
        }
    }
    return 0;
}

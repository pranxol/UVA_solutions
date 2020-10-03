#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t,alen,i,j,space,other,p,c=0,d,e,f,g,blen;
    char  a[1000],b[1000];
    scanf("%d",&t);
    fflush(stdin);
    //getchar();
    for(i=1;i<=t;i++)
    {
        g=0;
        gets(a);
        gets(b);
        alen=strlen(a);
        blen=strlen(b);
        j=blen;
        c=strcmp(a,b);
        if(0!=c)
        {
            for(e=0,f=0,space=0,other=0;e<alen;e++)
            {
                if(a[e]==b[f]&&f<blen)
                {
                    f++;
                }
                else if(a[e]==' ')
                {
                    space++;
                }
                else
                {
                    other++;
                }

            }
            if(other>0)
            {
                printf("Case %d: Wrong Answer\n",i);

            }
            else if(f==j)
            {
                printf("Case %d: Output Format Error\n",i);

            }
            else
            {
                printf("Case %d: Wrong Answer\n",i);
            }
        }

        else
        {
            printf("Case %d: Yes\n",i);

        }

    }
    return 0;
}

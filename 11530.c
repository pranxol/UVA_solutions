#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,len,p;
    char c,ara[102];
    while(scanf("%d",&t)==1){
        ///getchar();~~~~~~~~~~~~
        for(i=1;i<=t;i++)
        {
            gets(ara);
            p=0;
            len=strlen(ara);
            for(j=0;j<len;j++)
            {
                c=ara[j];
                     if(c=='a'||c=='d'||c=='g'||c=='j'||c=='m'||c=='p'||c=='t'||c=='w'||c==' ')
                {
                    p=p+1;
                }
                else if(c=='b'||c=='e'||c=='h'||c=='k'||c=='n'||c=='q'||c=='u'||c=='x')
                {
                    p=p+2;
                }
                else if(c=='c'||c=='f'||c=='i'||c=='l'||c=='o'||c=='r'||c=='v'||c=='y')
                {
                    p=p+3;
                }
                else if(c=='s'||c=='z')
                {
                    p=p+4;
                }
            }
            //if(i!=0)
              //printf("Case #%d: %d\n",i,p);
            printf("Case #%d: %d\n",i,p);
        }
    }

    return 0;
}

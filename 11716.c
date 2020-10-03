#include<stdio.h>
#include<math.h>
int main()
{
    int i,c,j,d,y,f,t;
    float x;
    char ara[10000],a;
    scanf("%d",&t);
    getchar();
    for(f=1;f<=t;f++)
    {
        i=1;c=1;

        while((a=getchar())!='\n')
        {
            ara[c]=a;
            c=c+1;
        }
        d=c-1;
        x=sqrt(d);
        y=sqrt(d);
        if(x==y)
        {
            for(i=0;i<y;i++)
            {
                for(j=i+1;j<=d;j=j+y)
                {
                    putchar(ara[j]);
                }
            }
            printf("\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    return 0;
}

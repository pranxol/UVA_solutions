#include<stdio.h>
#include<string.h>

int main()
{

    int sum,sum2,sum3,tsum,a,b,c,i,cnt,t;
    char crnum[20];
    scanf("%d",&t);
    getchar();

    while(t--)
    {

        sum2=0;sum3=0;cnt=0;tsum=0;a=0;c=0;
        gets(crnum);
        for(i=0;i<19;i=i+2)
        {
            if(crnum[i]==' ')
            {
                i=i+1;
            }

            a=((int)crnum[i]-48)*2;
            sum=0;
            while(a!=0)
            {
                b=a%10;
                sum=sum+b;
                a=a/10;
            }
            sum2=sum2+sum;
        }
        for(i=1;i<19;i=i+2)
        {
            if(cnt==2)
            {
                i=i+1;
                cnt=0;
            }
            c=((int)crnum[i]-48);
            cnt++;
            sum3=sum3+c;
        }

        tsum=sum2+sum3;
        if(tsum%10==0)
        {
            printf("Valid\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }

    return 0;
}

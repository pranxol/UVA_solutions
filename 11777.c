#include<stdio.h>
int main()
{
    int testcase,i,j,k,temp;
    scanf("%d",&testcase);
    for(k=1;k<=testcase;k++)
    {
        double total=0,t1,t2,f,at,ct1,ct2,ct3,ara[3],ctavg ;
        scanf("%lf%lf%lf%lf%lf%lf%lf",&t1,&t2,&f,&at,&ct1,&ct2,&ct3);
        ara[0]=ct1;
        ara[1]=ct2;
        ara[2]=ct3;
        for(i=0;i<2;i++)
        {
            for(j=i+1;j<3;j++)
            {
                if(ara[i]>ara[j])
                {
                    temp=ara[i];
                    ara[i]=ara[j];
                    ara[j]=temp;
                }
            }
        }
        ctavg=(ara[1]+ara[2])/2;
        total=t1+t2+f+at+ctavg;
        //printf("%lf",total);
        if(total>=90)
        {
            printf("Case %d: A\n",k);
        }
        else if(total>=80&&total<90)
        {
            printf("Case %d: B\n",k);
        }
        else if(total>=70&&total<80)
        {
            printf("Case %d: C\n",k);
        }
        else if(total>=60&&total<70)
        {
            printf("Case %d: D\n",k);
        }
        else
        {
            printf("Case %d: F\n",k);
        }

    }
    return 0;
}

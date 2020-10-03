#include<stdio.h>
#include<math.h>
int main ()
{
    int count,a,x,y,ara[201],p=0,i;

    float b,c,d;
   while(scanf("%d%d",&x,&y)==2)
   {
       count=0;
       if(x==0&&y==0)
       {
           break;
       }
       for(c=x;c<=y;c++)
        {
            d=sqrt(c);
            a=(int)d;
            b=d;
            if(a==b)
            {
                count=count+1;
            }
        }
        ara[p]=count;
        p=p+1;
   }
   for(i=0;i<p;i++)
   {
       printf("%d\n",ara[i]);
   }

    return 0;
}

#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,x,y;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        else
        {

            for(y=1;y<n;y++)
            {
                for(x=n;x>y;x--)
                {
                    if(n==x*x*x-y*y*y)
                    {
                        //printf("%d %d\n",x,y);
                        break;
                    }

                }

                if(n==x*x*x-y*y*y)
                {
                    printf("%d %d\n",x,y);
                    break;
                }

            }
            if(y==n)
            {
                printf("No solution\n");
            }
            //printf("%d %d\n",x,y);

        }
    }

    return 0;
}

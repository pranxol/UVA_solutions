#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,N;

    while(1)
    {
        scanf("%d",&N);
        if(N==0)
        {
            break;
        }
        else if(N>=101)
        {
            printf("f91(%d) = %d\n",N,N-10);
        }

        else
        {
            n=N;
            n=n+11;
            while(1){
            if(n>=101)
            {
                n=n-10;
                if(n<=100)
                    n=n+11;
                else
                {
                    n=n-10;
                    break;
                }
            }
            else
            {
                n=n+11;
            }
        }
            printf("f91(%d) = %d\n",N,n);
        }
    }
    return 0;
}

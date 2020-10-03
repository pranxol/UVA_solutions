#include<stdio.h>
int main()
{
    int T,i;
    long long int a,b,c;
    char *ara[100];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a<=0||b<=0||c<=0||b>=a+c||c>=a+b||a>=b+c){
            ara[i]="Invalid";
        }
        else if(a==b&&b==c){
            ara[i]="Equilateral";
        }
        else if(a==b||b==c||c==a){
            ara[i]="Isosceles";
        }
        else if(a!=b!=c){
            ara[i]="Scalene";
        }
     }
     for(i=1;i<=T;i++)
        {
           printf("Case %d: %s\n",i,ara[i]);
        }

    return 0;
}

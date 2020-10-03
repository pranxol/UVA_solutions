#include<stdio.h>
int main()
{
    int T,i;
    long long int a,b,c;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a<=0||b<=0||c<=0||b>=a+c||c>=a+b||a>=b+c){

            printf("Case %d: Invalid\n",i);
        }
        else if(a==b&&b==c){
            printf("Case %d: Equilateral\n",i);

        }
        else if(a==b||b==c||c==a){
            printf("Case %d: Isosceles\n",i);
        }
        else if(a!=b!=c){
            printf("Case %d: Scalene\n",i);
        }
     }

    return 0;
}

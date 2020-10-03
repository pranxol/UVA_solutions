#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,m,h,t;

    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)==4){

    if(h1==0&&m1==0&&h2==0&&m2==0)
    {
        break;
    }
    if(m2<m1)
    {
        m2=m2+60;
        h1=h1+1;
    }
    m=m2-m1;
    if(h2<h1)
    {
        h2=h2+24;
    }
    h=h2-h1;
    t=h*60+m;

    printf("%d\n",t);

    }
    return 0;
}

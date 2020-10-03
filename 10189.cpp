#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,n,m;
    int caseno=1;
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);

    while(1)
    {


        cin>>n>>m;
        //printf("\n");
        if(n==0&&m==0)
        {
            break;
            //return 0;
        }
        if (caseno > 1) cout << '\n';
        char c[n+2][m+2];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>c[i][j];  ///input
            }
        }
        //printf("\n");


        /*for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("%c",c[i][j]);   ///print
            }
            printf("\n");
        }*/


        int cnt[n][m];int x,y;
        memset(cnt,0,sizeof(cnt));
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(c[i][j]=='.')
                {
                    x=i-1 ;y=j-1 ;
                    if(x>=0&&x<n&&y>=0&&y<m&&c[x][y]=='*')
                    {
                        cnt[i][j]=cnt[i][j]+1;
                    }
                    x=i-1 ;y=j ;
                    if(x>=0&&x<n&&y>=0&&y<m&&c[x][y]=='*')
                    {
                        cnt[i][j]=cnt[i][j]+1;
                    }
                    x=i-1 ;y=j+1 ;
                    if(x>=0&&x<n&&y>=0&&y<m&&c[x][y]=='*')
                    {
                        cnt[i][j]=cnt[i][j]+1;
                    }
                    x=i ;y=j-1 ;
                    if(x>=0&&x<n&&y>=0&&y<m&&c[x][y]=='*')
                    {
                        cnt[i][j]=cnt[i][j]+1;
                    }
                    x=i ;y=j+1 ;
                    if(x>=0&&x<n&&y>=0&&y<m&&c[x][y]=='*')
                    {
                        cnt[i][j]=cnt[i][j]+1;
                    }
                    x=i+1 ;y=j-1 ;
                    if(x>=0&&x<n&&y>=0&&y<m&&c[x][y]=='*')
                    {
                        cnt[i][j]=cnt[i][j]+1;
                    }
                    x=i+1 ;y=j ;
                    if(x>=0&&x<n&&y>=0&&y<m&&c[x][y]=='*')
                    {
                        cnt[i][j]=cnt[i][j]+1;
                    }
                    x=i+1 ;y=j+1 ;
                    if(x>=0&&x<n&&y>=0&&y<m&&c[x][y]=='*')
                    {
                        cnt[i][j]=cnt[i][j]+1;
                    }
                }
            }
        }

        printf("Field #%d:\n",caseno++);
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(c[i][j]=='*')
                    printf("%c",c[i][j]);   ///print
                else
                    printf("%d",cnt[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    }

    return 0;
}

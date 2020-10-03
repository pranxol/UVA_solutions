/*#include<stdio.h>
#include<math.h>
#include<string.h>*/
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i,j,cnt,len;
    char givens[1000000];
        //string givens;

    ///vector<char>givens;  vector dia hobe naaaaa
    while(1)
    {

        gets(givens);
        ///getline(cin,givens); string class nile
        len=strlen(givens);
        if(len==4&&givens[0]=='D'&&givens[1]=='O'&&givens[2]=='N'&&givens[3]=='E')
            return 0;

        i=0,cnt=1;
        j=len-1;
        if(givens[j]=='.'||givens[j]==','||givens[j]=='?'||givens[j]=='!')
            j=len-2;


        while(i<=j)
        {
            if(givens[i]==' ')
            {
                i++;
                continue;
            }
            if(givens[j]==' ')
            {
                j--;
                continue;
            }
            if(givens[j]=='.'||givens[j]==','||givens[j]=='?'||givens[j]=='!')
            {
                j--;
                continue;
            }
            if(givens[i]=='.'||givens[i]==','||givens[i]=='?'||givens[i]=='!')
            {
                i++;
                continue;
            }
            char c=givens[i];
            char d=givens[j];
            if(c+32==d||d+32==c)
            {
                cnt=1;
            }
            else if(givens[i]!=givens[j])
            {
                cnt=0;
                break;
            }
            i++,j--;
        }
        if(cnt==1)
            printf("You won't be eaten!\n");
        else if(cnt==0)
            printf("Uh oh..\n");

    }

    return 0;
}

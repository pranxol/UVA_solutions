#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
///#include<bits/stdc++.h>
using namespace std;


int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);


    string s1,s2;int caseno;
    while(1)
    {
        cin>>caseno;
        if(caseno==-1)
            return 0;
        int len1,len2,i,j,cut=0,uncut=0,wrong=0,k;
        cin>>s1>>s2;
        len1=s1.size();
        len2=s2.size();

        for(i=0;i<len2;i++)
        {
            for(k=i+1;k<len2;k++)
            {
                if(s2[k]==s2[i])
                    s2[k]='2';
            }
            for(j=0;j<len1;j++)
            {
                if(s2[i]==s1[j])
                {
                    s1[j]='1';
                    ++cut;
                }
                else if(s2[i]=='2')break;
                else
                {
                    ++uncut;
                }
            }
            if(uncut==len1)
            {
                ++wrong;
            }
            if(wrong==7)
                break;
            uncut=0;
        }
        cout<<"Round "<<caseno<<endl;
        if(cut>=len1)
            printf("You win.\n");
        else if(wrong>=7)
            printf("You lose.\n");
        else if(cut<len1&&wrong<7)
            printf("You chickened out.\n");
    }


    return 0;
}

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
    string revers,givens;
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    while(cin>>givens)
    {

        revers=givens;
        int len=givens.size();
        int j=len-1;int i=0;
        /*while(i<=j)
        {
            if(givens[i]==givens[j]||)
            i++;j--;
        }*/

        reverse(revers.begin(),revers.end());
        i=0,j=len-1;int cnt=1;
        while(i<=j)
        {
            if(givens[i]=='A'&&givens[j]=='A'){cnt=1;}
            else if(givens[i]=='E'&&givens[j]=='3'){cnt=1;}
            else if(givens[i]=='H'&&givens[j]=='H'){cnt=1;}
            else if(givens[i]=='I'&&givens[j]=='I'){cnt=1;}
            else if(givens[i]=='J'&&givens[j]=='L'){cnt=1;}
            else if(givens[i]=='L'&&givens[j]=='J'){cnt=1;}
            else if(givens[i]=='M'&&givens[j]=='M'){cnt=1;}
            else if(givens[i]=='O'&&givens[j]=='O'){cnt=1;}
            else if(givens[i]=='S'&&givens[j]=='2'){cnt=1;}
            else if(givens[i]=='T'&&givens[j]=='T'){cnt=1;}
            else if(givens[i]=='U'&&givens[j]=='U'){cnt=1;}
            else if(givens[i]=='V'&&givens[j]=='V'){cnt=1;}
            else if(givens[i]=='W'&&givens[j]=='W'){cnt=1;}
            else if(givens[i]=='X'&&givens[j]=='X'){cnt=1;}
            else if(givens[i]=='Y'&&givens[j]=='Y'){cnt=1;}
            else if(givens[i]=='Z'&&givens[j]=='5'){cnt=1;}
            else if(givens[i]=='1'&&givens[j]=='1'){cnt=1;}
            else if(givens[i]=='2'&&givens[j]=='S'){cnt=1;}
            else if(givens[i]=='3'&&givens[j]=='E'){cnt=1;}
            else if(givens[i]=='5'&&givens[j]=='Z'){cnt=1;}
            else if(givens[i]=='8'&&givens[j]=='8'){cnt=1;}
            //else if(givens[i]=='0'&&givens[j]=='O'){cnt=1;}
            else { cnt=0;break; }
            i++;j--;
        }

        if(cnt==0&&givens!=revers)
            cout<<givens<<" -- is not a palindrome."<<endl<<endl;
        else if(cnt==0&&givens==revers)
            cout<<givens<<" -- is a regular palindrome."<<endl<<endl;
        else if(cnt==1&&givens!=revers)
            cout<<givens<<" -- is a mirrored string."<<endl<<endl;
        else if(cnt==1&&givens==revers)
            cout<<givens<<" -- is a mirrored palindrome."<<endl<<endl;
    }
    return 0;
}


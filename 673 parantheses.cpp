#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define pb push_back
#define pob pop_back
#define infinity 2147483647
//freopen ("input.txt", "r", stdin);
//freopen ("output.txt", "w", stdout);

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    int n;
    sf("%d\n",&n);
    while(n--)
    {
        stack<char>p;
        string s;
        getline(cin,s);
        //getchar();
        //pf("%d",s.size());
        for(int j=0;j<s.size();j++)
        {
            if (!p.empty()&&p.top()=='('&&s[j]==')')
                p.pop();
            else if(!p.empty()&&p.top()=='['&&s[j]==']')
                p.pop();
            else
                p.push(s[j]);
        }
        if(p.empty())
            pf("Yes\n");
        else
            pf("No\n");
    }
}

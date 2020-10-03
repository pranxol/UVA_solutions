#include <bits/stdc++.h>

using namespace std;

char str[108];
char ara[108];
char ans[108];
int l;
int x;
void recur(int ind,int c)
{
    if(x>=100) return;
    if (ind == l) {
        ++x;
        ans[c] = '\0';
        puts(ans);
        return;
    }
    int num=0,i=ind;
    vector<pair<char,int> >v;
    while(num<100 && i<l)
    {
        num=num*10+int(str[i]-'0');
        if(num<100&& ara[num]!='\0')
        {
            v.push_back(make_pair(ara[num],i+1));
        }

        i++;
    }
    sort(v.begin(),v.end());
    for(int j=0;j<v.size();j++)
    {
        ans[c]=v[j].first;
        recur(v[j].second,c+1);
    }
}

int main()
{
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);

    int n = 0;
    int cas=1;
    while(1)
    {
        scanf("%d", &n);
        if(n==0)break;
        getchar();
        memset(ara, 0, sizeof(ara));

        for (int i = 1; i <= n; ++i) {
            char ch = ' ';
            int _x = 0;
            scanf("%c %d\n", &ch, &_x);
            ara[_x] = ch;
        }
        x=0;
        scanf("%s", str);
        l = strlen(str);
        printf("Case #%d\n",cas++);
        recur(0, 0);
        puts("");
    }

    return 0;
}

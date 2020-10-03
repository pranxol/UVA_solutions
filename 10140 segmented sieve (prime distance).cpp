

/**(a,b) range e segmented sieve calachi;
prime array er moddhe kisu jhamela ace tai bainary search lower bound  dia
(a) er exact position ber kore out put er calculation korechi
jemon jodi a=5 and b=100 hoy tahole prime[] array te extra
duita element beshi thakbe. ta holo 2 and 3.
jehetu a=5 theke kaj shuru korte hobe tai binary search lower bound
kore 5 er index ber kore sekhan theke adjacent prime er calculation shuru korechi.
*/


#include<bits/stdc++.h>
using namespace std;
#define arrsize 46500
#define ll long long
int flag[arrsize+5];
vector<ll int> prime;
vector<ll int> rootprime;

void sieve( ll int limit)
{
    ll int n =limit;
    ll int i,j;
    flag[0]=0,flag[1]=0;
    flag[2]=1;
    for(i=3;i<=n;i+=2) flag[i]=1;

    for(i=4;i<=n;i+=2) flag[i]=0;

    ll int limit1=sqrt(n)+1;
    for(i=3;i<limit1;i+=2)
    {
        if(flag[i])
        {
            for(j=i;i*j<=n;j+=2)
            {
                flag[i*j]=0;
            }
        }
    }

    prime.clear ();
    rootprime.clear();

    for ( ll int i = 2; i < n; i += 1 ) {
        if ( flag[i] )
        {
            prime.push_back (i);
            rootprime.push_back(i);
            //cout << i << "  ";
        }
    }

}

void segmentedSieve(ll int a,ll int b)
{
    ll int limit = floor(sqrt(b))+1;

    sieve(limit);

    ll int low;ll int high;
    if(a<=limit)
    {
        low=limit;
        high = 2*limit;
    }
    else if(a>limit)
    {
        low  = a;
        high = a+limit;
    }


    if (high >= b)
            high = b+1;

    while (low < b)
    {
        bool mark[limit+1];
        memset(mark, true, sizeof(mark));

        for (ll int i = 0; i < rootprime.size(); i++)
        {
            ll int loLim = floor(low/rootprime[i]) * rootprime[i];
            if (loLim < low)
                loLim += rootprime[i];

            for (ll int j=loLim; j<high; j+=rootprime[i])
                mark[j-low] = false;
        }

        for (ll int i = low; i<high; i++)
            if (mark[i - low] == true)
            {
                prime.push_back (i);
                //cout << i << "  ";
            }

        low  = low + limit;
        high = high + limit;
        if (high >= b)
            high = b+1;
    }
}
ll int searc(ll int key,ll int siz)
{
    ll int mid,begn=0,endd=siz-1;
    ll int index;
    while(begn<=endd)
    {
        mid=(begn+endd)/2;
        if(prime[mid]==key)
        {
            index=mid;
            endd=mid-1;
        }
        else if(key>prime[mid])
        {
            begn=mid+1;
        }
        else if(key<prime[mid])
        {
            endd=mid-1;
        }
    }
    return begn;
}

int main()
{
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
    long long int i;
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a==1&&b==2||a==b)
        {
            printf("There are no adjacent primes.\n");
            continue;
        }

        segmentedSieve(a,b);
        /*for(i=0;i<prime.size();i++)
        {
            if(prime[i]>=a)
            printf(" %lld  ",prime[i]);
        }
        printf("\n%lld\n",i);*/


        ll int key;
        key =a;
        ll int siz=prime.size();
        ll int index=searc(key,siz);

        //printf("\n%lld\n",siz);
        //printf("%lld\n",index);
        //printf("%lld\n",prime.size()-1-index);


        if(prime.size()-1-index<=0)
        {
            printf("There are no adjacent primes.\n");
        }
        else
        {
            ll minitemp=999999999999;
            ll maxitemp=0;
            ll mini,maxi,minia,minib,maxia,maxib;
            for(ll i=index;i<prime.size()-1;i++)
            {
                mini=prime[i+1]-prime[i];
                maxi=mini;
                if(mini<minitemp)
                {
                    minitemp=mini;
                    minia=prime[i];
                    minib=prime[i+1];
                }
                if(maxi>maxitemp)
                {
                    maxitemp=maxi;
                    maxia=prime[i];
                    maxib=prime[i+1];
                }
            }
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n",minia,minib,maxia,maxib);
        }
    }

    return 0;
}


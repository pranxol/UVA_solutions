/**************************************
 *     BISMILLAHIR RAHMANIR RAHIM     *
 *        MD: EMRUZ HOSSAIN           *
 *           CUET-CSE-12              *
 **************************************/
 #include<bits/stdc++.h>
 using namespace std;
 typedef long long ll;
 typedef unsigned long long ull;

#define     mem(x,y)   memset(x,y,sizeof(x))
#define     PB(x)      push_back(x)
#define     POB()      pop_back()
#define     SZ(a)      a.size()
#define     len(a)     strlen(a)
#define     SQR(a)     (a*a)
#define     all(v)     v.begin(),v.end()
#define     fr(i,a,b)  for(i=a;i<=b;i++)
#define     rfr(i,a,b) for(i=a;i>=b;i--)
#define     sf  scanf
#define     pf  printf
#define     mkp make_pair
#define     fs  first
#define     sd  second

#define     getx() getchar()
//#define     getx() getchar_unlocked()

#define     inf  1<<25
#define     sz   20002
#define     eps  1e-9
#define     mod  1000000007
#define     PI   2.0*acos(0.0)

template <typename T> T gcd(T a,T b){return (b != 0 ? gcd(b, a%b) : a);}
template <typename T> T lcm(T a, T b) { return (a/gcd(a,b)*b);}
template <typename T> T BigMod (T b,T p,T m){if (p == 0) return 1;if (p%2 == 0){T s = BigMod(b,p/2,m);return ((s%m)*(s%m))%m;}return ((b%m)*(BigMod(b,p-1,m)%m))%m;}
template <typename T> T ModInv (T b,T m){return BigMod(b,m-2,m);}
template <typename T> T POW(T B,T P){ if(P==0) return 1; if(P&1) return B*POW(B,P-1);  else return SQR(POW(B,P/2));}
template <typename T> T Swap(T &a,T &b) {T tmp=a;a=b;b=tmp;}
int Set(int N,int pos){return N=N|(1<<pos);}
int Reset(int N,int pos){return N=N&~(1<<pos);}
bool Check(int N,int pos){return (bool)(N&(1<<pos));}
double DEG(double x) { return (180.0*x)/(PI);}
double RAD(double x) { return (x*(double)PI)/(180.0);}
int toInt(string s){int sm;stringstream ss(s);ss>>sm;return sm;}
template<class T>inline bool readfast(T &x)
{
    int c=getx();
    int sgn=1;
    while(~c&&c<'0'||c>'9')
    {
        if(c=='-')sgn=-1;
        c=getx();
    }
    for(x=0; ~c&&'0'<=c&&c<='9'; c=getx())x=x*10+c-'0';
    x*=sgn;
    return ~c;
}

int R[]={1,-1,0,0,1,-1,-1,1};   int C[]={0,0,1,-1,1,-1,1,-1}; //move in 8 direction
int KR[]={-2,-2,-1,1,2,2,-1,1}; int KC[]={1,-1,2,2,1,-1,-2,-2}; //move of knight

//code of sieve
int pml=1000008,np=0;
char prm[10000009];
struct P
{
    double x,y;
    P(double x=0.0, double y=0.0)
    {
        this ->x=x;
        this ->y=y;
    }
};
P mkv(P ae,P be){return P(be.x-ae.x,be.y-ae.y);}
double dtp(P ae,P be){return (ae.x*be.x+ae.y*be.y);}
double crp(P ae,P be){return (ae.x*be.y-ae.y*be.x);}
double val(P ae){return sqrt(dtp(ae,ae));}
P vresize(P ae,double llen){double v=val(ae);return P(ae.x*llen/v,ae.y*llen/v);}
double ART(P ae,P be){return crp(ae,be)/2.0;}
 P rot(P ae,double ang){return P(ae.x*cos(ang)-ae.y*sin(ang),ae.y*cos(ang)+ae.x*sin(ang));}

 /*****************************Code start from here**************************/

int main()
{
    //   freopen("output.txt","w",stdout);
    //    freopen("xinput.txt","r",stdin);
   //ios_base::sync_with_stdio(false);
   ll a,b,c,d,h,m,n,p,x,y,i,j,k,l,q,r,t,cnt,sm,tmp,flag,u,distance,max_distance,min_distance,maxl,maxu,minl,minu,previous_prime,next_prime;
   while(sf("%lld %lld",&l,&u)==2)
   {
       mem(prm,0);
       if(u<=2)
       {
           pf("There are no adjacent primes.\n");
           continue;
       }
       if(l<2)
        l=2;
       if(l%2==0)
        a=l;
       else
        a=l+1;
       for(i=a;i<=u;i+=2)
        prm[i-l]='*';
       for(i=3;i*i<=u;i+=2)
       {
           j=max(2LL,l/i);
           printf("**j=%lld\n",j);
           if(i*j<l)
            j++;
           for(;i*j<=u;j++)
            prm[i*j-l]='*';
       }
       previous_prime=-1;
       max_distance=0;
       min_distance=500;
       for(i=l;i<=u;i++)
       {
           if(i==2||prm[i-l]!='*')
           {
               next_prime=i;
               if(previous_prime==-1)
               {
                   previous_prime=next_prime;
                   continue;
               }
               else
               {
                   distance=next_prime-previous_prime;
                   if(distance<min_distance)
                   {
                       minl=previous_prime;
                       minu=next_prime;
                       min_distance=distance;
                   }
                   if(distance>max_distance)
                   {
                       maxl=previous_prime;
                       maxu=next_prime;
                       max_distance=distance;
                   }
                   previous_prime=next_prime;
               }
           }
       }
       if(max_distance==0)
       {
           pf("There are no adjacent primes.\n");
       }
       else
       {
           pf("%lld,%lld are closest, %lld,%lld are most distant.\n",minl,minu,maxl,maxu);
       }
   }


    return 0;
}

//2146483647 2147483647

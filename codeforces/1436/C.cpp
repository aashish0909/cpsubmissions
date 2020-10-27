#include <bits/stdc++.h>
using namespace std;

using   ll        = long long int;
using   pll       = pair<ll, ll>;
using   vll       = vector<ll>;
ll const max_size = 1024;
ll const mod      = 1e9 + 7;
ll const maxn     = 1e5 + 1;
#define endl        "\n"
#define ssp         " "
#define n_l         cout<<"\n"
#define TLE_na_ho   ios_base::sync_with_stdio(false);cin.tie(NULL)
#define pb          push_back
#define ff          first
#define ss          second
#define all(v)      v.begin(),v.end()
#define fhh(n)      for(ll i=0;i<n;i++)
#define rep(i,a,n)  for(ll i=a;i<n;i++)
#define repe(i,a,n) for(ll i=a;i<=n;i++)
#define repr(i,a,n) for(ll i=a;i>=n;i--)
#define ain(arr,n)  for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<ssp

/*           DEBUG           */
void __print(int x)
{
    cerr << x;
}
void __print(long x)
{
    cerr << x;
}
void __print(long long x)
{
    cerr << x;
}
void __print(unsigned x)
{
    cerr << x;
}
void __print(unsigned long x)
{
    cerr << x;
}
void __print(unsigned long long x)
{
    cerr << x;
}
void __print(float x)
{
    cerr << x;
}
void __print(double x)
{
    cerr << x;
}
void __print(long double x)
{
    cerr << x;
}
void __print(char x)
{
    cerr << '\'' << x << '\'';
}
void __print(const char *x)
{
    cerr << '\"' << x << '\"';
}
void __print(const string &x)
{
    cerr << '\"' << x << '\"';
}
void __print(bool x)
{
    cerr << (x ? "true" : "false");
}

template<typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template<typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x) cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print()
{
    cerr << "]\n";
}
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v)) cerr << ", ";
    _print(v...);
}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
/*           DEBUG           */



ll f[maxn];
void fact()
{
    f[0] = 1;
    for(ll i = 1; i < maxn; i++)
    {
        f[i] = ( f[i - 1] * i ) % mod;
        //debug(f[i],i);
    }
}
ll modpow(ll a, ll b)
{
    ll res = 1;
    while(b > 0)
    {
        if( b & 1 ) res = ( res * a ) % mod;
        a = ( a * a ) % mod;
        b /= 2ll;
    }
    return res % mod;
}
ll inv(ll x)
{
    return ( modpow( x, mod - 2 ) ) % mod;
}
ll ncr(ll n, ll r)
{
    return ( (f[n] * inv(f[n - r]))) % mod;
}

ll testcases;

int main()
{
    TLE_na_ho;
    //READ THE QUESTION PROPERLY!!
    testcases = 1;
    //cin>>testcases;
    fact();
    while(testcases--)
    {
        ll n, x, pos;
        cin >> n >> x >> pos;
        ll small = 0, big = 0;
        ll left = 0, right = n;
        while(left < right)
        {
            ll mid = (left + right) / 2;
            if(pos == mid)
                left = mid + 1;
            else if(pos > mid)
            {
                small++;
                left = mid + 1;
            }
            else
            {
                big++;
                right = mid;
            }
        }

        ll rem = n - small - big - 1;
        debug(small, big);
        ll ans = (ncr(n - x, big) * ncr(max(x - 1, 0ll), small)) % mod;
        ans = (ans * f[rem]) % mod;
        cout << ans;
    }
}
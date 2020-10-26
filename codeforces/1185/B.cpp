#include <bits/stdc++.h>
using namespace std;

using   ll  =       long long int;
using   pll =       pair<ll, ll>;
using   vll =       vector<ll>;
#define endl        "\n"
#define ssp         " "
#define nla         cout<<"\n"
#define TLE_na_ho   ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE    1024
#define MOD         1000000007
#define pb          push_back
#define ff          first
#define ss          second
#define all(v)      v.begin(),v.end()
#define f(n)        for(ll i=0;i<n;i++)
#define rep(i,a,n)  for(ll i=a;i<n;i++)
#define repe(i,a,n) for(ll i=a;i<=n;i++)
#define repr(i,a,n) for(ll i=a;i>=n;i--)
#define ain(arr,n)  for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space

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






ll testcases;

int main()
{
    TLE_na_ho;
    //READ THE QUESTION PROPERLY!!
    //testcases=1;
    cin >> testcases;
    while(testcases--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        bool flag = true;
        if(s2.length() < s1.length())
        {
            cout << "NO" << endl;
            continue;
        }
        vector<char> a,b;
        vll sizea,sizeb;
        f(s2.length())
        {
            b.pb(s2[i]);
            //debug(s2[i],i+1);
            ll j=i;
            while(s2[j]==s2[i])
                j++;
            sizeb.pb(j-i);
            i=j-1;
        }
        //debug(b.size());
        f(s1.length())
        {
            a.pb(s1[i]);
            //debug(s2[i],i+1);
            ll j=i;
            while(s1[j]==s1[i])
                j++;
            sizea.pb(j-i);
            i=j-1;
        }
        //debug(a.size());
        if(a.size()!=b.size()){
            cout<<"NO"<<endl;
            continue;
        }
        debug(sizea,sizeb);
        f(a.size())
        {
            if(a[i]!=b[i])

            {
                flag=false;
                break;
            }
        }
        f(a.size())
        {
            if(sizea[i]>sizeb[i])

            {
                flag=false;
                break;
            }
        }

        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO",nla;
        debug("END OF TEST CASES");
    }

}
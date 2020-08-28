#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using pll = pair<ll, ll>;
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 1024
#define MOD 1000000007
#define pb push_back
#define fi first
#define se second
#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i<=n;i++)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space

string ope(string s)
{
    int l = s.length();
    if(islower(s[0]))
        s[0] -= 32;
    f(1, l)
    {
        if(isupper(s[i]))
            s[i] += 32;
    }
    return s;
}

string ope1(string s)
{
    int l = s.length();
    if(isupper(s[0]))
        s[0] += 32;
    f(1, l)
    {
        if(isupper(s[i]))
            s[i] += 32;
    }
    return s;
}

int main()
{
    TLE_na_ho;
    string s;
    cin >> s;
    int l = s.length();

    int c1 = 0, c2 = 0;
    if(isupper(s[0]))
        c1 = 1;
    else
        c2 = 1;
    int f = 0;
    f(1, l)
    {
        if(islower(s[i]))
            f = 1;
    }

    if(!f)
    {
        if(c1)
            s = ope1(s);
        else
            s = ope(s);
    }
    cout << s;
}

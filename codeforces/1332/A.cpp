#include <bits/stdc++.h>
using namespace std;

using   ll  =       long long int;
using   pll =       pair<ll, ll>;
using   vll =       vector<ll>;
#define endl        "\n"
#define space       " "
#define TLE_na_ho   ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE    1024
#define MOD         1000000007
#define pb          push_back
#define fi          first
#define se          second
#define all(v)      v.begin(),v.end()
#define f(n)        for(ll i=0;i<n;i++)
#define rep(i,a,n)  for(ll i=a;i<n;i++)
#define repe(i,a,n) for(ll i=a;i<=n;i++)
#define repr(i,a,n) for(ll i=a;i>=n;i--)
#define ain(arr,n)  for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space

ll testcases;

int main()
{
    TLE_na_ho;
    //READ THE QUESTION PROPERLY!!
    //testcases=1;
    cin >> testcases;
    while(testcases--)
    {
        ll l, r, d, u;
        cin >> l >> r >> d >> u;
        ll x, y, xl, yd, xr, yu;
        cin >> x >> y >> xl >> yd >> xr >> yu;
        bool flag = 1;
        if(l - r > x - xl || r - l > xr - x)
            flag = 0;
        if(u - d > yu - y || d - u > y - yd)
            flag = 0;
        if(xl == xr && (l + r) > 0)
            flag = 0;
        if(yu == yd && (u + d) > 0)
            flag = 0;
        if(flag)
            cout << "YES"<<endl;
        else
            cout << "NO" << endl;
    }

}
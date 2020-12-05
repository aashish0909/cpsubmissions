#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vll = vector<ll>;
ll const mod = 1e9 + 7;
#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define repr(i,a,n) for(ll i=a;i>=n;i--)
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    aashish_999;

    ll testcases = 1;
    //cin >> testcases;
    while(testcases--)
    {
        ll n;
        cin >> n;

        ll ans = 2;
        for(ll i = 3; i <= n; i++)
            ans = (ans * i) / __gcd(ans, i);

        cout << ans + 1 << endl;
    }

}
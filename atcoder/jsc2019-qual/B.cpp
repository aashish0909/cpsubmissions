#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vll = vector<ll>;
int const mod = 1000000007;
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define f(n) for(ll i=0;i<n;i++)
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define repe(i,a,n) for(ll i=a;i<=n;i++)
#define repr(i,a,n) for(ll i=a;i>=n;i--)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<" "
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)


ll testcases;

int main()
{
    aashish_999;
    //READ THE QUESTION PROPERLY!!
    testcases = 1;
    //cin>>testcases;
    while(testcases--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        ain(a, n);
        ll cnt1 = 0, cnt2 = 0;
        ll ans = 0;
        for(ll i = 0; i < n - 1; i++)
        {
            for(ll j = i + 1; j < n; j++)
            {
                if(a[i] > a[j])
                    ans += k * (k + 1) / 2;
                else if(a[i] < a[j])
                    ans += k * (k - 1) / 2;
                ans = ans % mod;
            }
        }
        cout << ans % mod << endl;
    }

}
#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vll = vector<ll>;
ll const mod = 1e9 + 7;
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
#define ordered_set tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    ll n1, n2;
    cin >> n1 >> n2;
    ll s1 = 0, s2 = 0;
    while(n1 != 0)
    {
        s1 += n1 % 10;
        n1 /= 10;
    }
    while(n2 != 0)
    {
        s2 += n2 % 10;
        n2 /= 10;
    }
    cout << max(s1, s2);

}

int main()
{
    aashish_999;

    ll testcases = 1;
    //cin >> testcases;
    while(testcases--)
    {
        solve();
    }
}
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
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    ll k;
    cin >> k;

    ll out = 1, pt = 1;
    while(k > 0)
    {
        cout << out << endl;
        ll pt1 = out + pt;
        ll pt2 = out + (pt * 10);

        ll spt1 = 0;
        ll spt2 = 0;
        ll ppt1 = pt1, ppt2 = pt2;
        while(ppt1 > 0)
            spt1 += ppt1 % 10, ppt1 /= 10;
        while(ppt2 > 0)
            spt2 += ppt2 % 10, ppt2 /= 10;

        if(pt1 * spt2 <= pt2 * spt1)
            out = pt1;
        else
        {
            out = pt2;
            pt *= 10;
        }
        k--;
    }

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
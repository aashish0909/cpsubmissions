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
#define f(n)        for(ll i=0;i<n;i++)
#define rep(i,a,n)  for(ll i=a;i<n;i++)
#define repe(i,a,n) for(ll i=a;i<=n;i++)
#define repr(i,a,n) for(ll i=a;i>=n;i--)
#define ain(arr,n)  for(ll i1=0;i1<n;i1++ ) cin>>arr[i1].ff
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<ssp


ll testcases;

int main()
{
    TLE_na_ho;
    //READ THE QUESTION PROPERLY!!
    //testcases=1;
    cin >> testcases;
    while(testcases--)
    {
        ll n, w;
        cin >> n >> w;
        vector<pair<ll, ll>> a(n);
        f(n)
        {
            cin >> a[i].ff;
            a[i].ss = i + 1;
        }

        sort(all(a));

        vll knap;
        ll sum = 0;
        bool f=1;
        repr(i, n - 1, 0)
        {
            if(sum + a[i].ff > w)
                continue;
            sum += a[i].ff;
            knap.pb(a[i].ss);
            if(sum >= (w+1)/ 2){
            	f=0;
                break;
            }
        }
        sort(all(knap));
        if(knap.empty() || f)
            cout << -1 << endl;
        else
        {
            cout << knap.size() << endl;
            for(auto it : knap)
                cout << it << ssp;
            cout << endl;
        }
    }

}
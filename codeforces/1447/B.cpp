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
#define ain(arr,n)  for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
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
        ll n, m;
        cin >> n >> m;
        ll a[n][m], cnt = 0, z = 0;
        ll abssum = 0;
        vll num;
        f(n)
        rep(j, 0, m)
        {
            cin >> a[i][j];
            num.pb(abs(a[i][j]));
            if(a[i][j] < 0)
                cnt++;
            else if(a[i][j] == 0)
                z++;
            abssum += abs(a[i][j]);
        }

        if((cnt % 2 == 0) || z > 0)
            cout << abssum << endl;
        else
        {
            sort(all(num));
            abssum = abssum - 2*num[0];
            cout << abssum << endl;
        }
    }

}
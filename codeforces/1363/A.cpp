#include <bits/stdc++.h>
using namespace std;

using ll =                   long long int;
using pll =                  pair<ll, ll>;
#define endl                 "\n"
#define space                " "
#define TLE_na_ho            ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE             1024
#define MOD                  1000000007
#define pb                   push_back
#define fi                   first
#define se                   second
#define f(a,n)               for(ll i=a;i<n;i++)
#define fe(a,n)              for(ll i=a;i<=n;i+=2)
#define fr(a,n)              for(ll i=a;i>=n;i--)
#define ain(arr,n)           for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n)          for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space


int main()
{
    TLE_na_ho;
    int t;
    cin >> t;
    while(t--)
    {
        ll n, m;
        cin >> n >> m;
        ll a;
        ll even = 0, odd = 0;
        f(0, n)
        {
            cin >> a;
            if(a % 2)
                odd++;
            else
                even++;
        }
        bool f = 0;

        for(ll i = 1; i <= odd && i <= m; i += 2)
        {
            if((m - i) <= even)
                f = 1;
        }

        if(f)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    }

}

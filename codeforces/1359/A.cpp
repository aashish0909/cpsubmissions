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
#define fe(a,n)              for(ll i=a;i<=n;i++)
#define fr(a,n)              for(ll i=a;i>=n;i--)
#define ain(arr,n)           for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n)          for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space


int main()
{
    TLE_na_ho;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll play = n / k;
        ll max = min(m, play);
        m -= max;
        k--;
        ll m2 = m/k;
        if(m%k!=0)
        	m2++;
        cout << max - m2 << "\n";
    }

}

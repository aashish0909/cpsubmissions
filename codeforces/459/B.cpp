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
    ll n;
    cin >> n;
    ll a[n];
    map<ll, ll> cnt;
    f(0, n)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }

    ll mini = min_element(a, a + n) - a;
    ll maxi = max_element(a, a + n) - a;
    cout << a[maxi] - a[mini] << space;
    ll cnt1=cnt[a[mini]];
    ll cnt2=cnt[a[maxi]];

    if(cnt1==n)
    	if(n%2==0)
            cout<<(n/2*(n-1));
        else
            cout<<(n/2*n);
    else
    	cout<<(cnt1*cnt2);

}
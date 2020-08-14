#include <bits/stdc++.h>
using namespace std;

#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i<=n;i++)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]
#define ll long long int
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 400

int main()
{
    TLE_na_ho;

    ll n, t, j = 0;
    cin >> n >> t;
    ll a[n];
    ain(a, n);
    ll ans = 0;
    ans += a[0];
    f(1, n)
    {
        ans += 10;
        ans = ans + a[i];
        j += 2;
    }

    if(ans < t)
        j += (t - ans) / 5;

    if(ans <= t)
        cout << j << endl;
    else
        cout << "-1" << endl;
}
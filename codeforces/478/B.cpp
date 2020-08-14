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

    ll n, t;
    cin >> n >> t;
    ll m = n - t + 1;
    ll max = (n-t+1)*(n-t)/2;
    if(t == 1)
        cout << max << space << max;
    else
    {
        ll min = (n%t)*((n/t+1)*(n/t)/2)+(t-n%t)*((n/t-1)*(n/t)/2);

        cout << min << space << max;
    }
}
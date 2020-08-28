#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using pll = pair<ll, ll>;
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 1024
#define MOD 1000000007
#define pb push_back
#define fi first
#define se second
#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i<=n;i++)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space


int main()
{
    TLE_na_ho;
    int a[4] = {0};
    int m, q;
    cin >> m;
    f(0, m)
    {
        cin >> q;
        a[q - 1]++;
    }
    int ans = a[3]+a[2]+a[1]/2;
    a[0]-=a[2];
    if(a[1]%2==1)
    {
    	ans+=1;
    	a[0]-=2;
    }

    if(a[0]>0)
    {
    	ans+=(a[0]+3)/4;
    }

    cout << ans;
}

#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using pll = pair<ll, ll>;
#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i<=n;i++)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 400
#define push_back pb
#define first fi
#define second se

int main()
{
    TLE_na_ho;
    ll n,k;
    cin>>n>>k;
    ll a[n],count=0;
    f(0,n){
    	cin>>a[i];
    	if(a[i]+k<=5)
    		count++;
    }
    cout<<(count)/3;


}

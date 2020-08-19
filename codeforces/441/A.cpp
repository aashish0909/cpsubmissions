#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using pll = pair<ll, ll>;
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 400
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

    ll n,v;
    cin>>n>>v;
    ll p[n]={0};
    f(0,n){
    	ll k;
    	cin>>k;
    	ll a[k];
    	for(ll j=0;j<k;j++){
    		cin>>a[j];
    		if(a[j]<v)
    			p[i]=1;
    	}
    }
    ll count=0;

    f(0,n)
    if(p[i]==1)
    	count++;

    cout<<count<<endl;
    f(0,n)
    if(p[i]==1)
    	cout<<i+1<<space;
}

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
    ll n,k,m;
    cin>>n>>m>>k;
    ll a[m+1];
    ain(a,m+1);
    ll count=0;
    f(0,m){
    	ll ans=a[i]^a[m];
    	ll one=__builtin_popcount(ans);
    	if(one<=k)
    		count++;
    }
    		
    
    cout<<count<<endl;
}
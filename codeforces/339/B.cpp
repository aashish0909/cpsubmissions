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
    ll n,q;
    cin>>n>>q;
    ll a[q];
    ain(a,q);
    ll ans=a[0]-1;
    f(1,q){
    	if(a[i]>=a[i-1])
    		ans+=a[i]-a[i-1];
    	else
    		ans+=n-a[i-1]+a[i];
    }
    cout<<ans<<endl;
}
#include <bits/stdc++.h> 
using namespace std; 
 
#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i<=n;i++)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space
#define ll long long int
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 400
#define F first
#define S second





int main() 
{
    TLE_na_ho;

    ll s,n;
    cin>>s>>n;

    pair<ll,ll> a[n];
    f(0,n)
    cin>>a[i].F>>a[i].S;

    sort(a,a+n);

    f(0,n)
    {
    	if(s>a[i].F)
    		s+=a[i].S;
    	else
    	{
    		cout<<"NO";
    		goto end;
    	}
    }
    cout<<"YES";

    end : {}
}

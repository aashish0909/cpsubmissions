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
    ll n;
    cin>>n;
    ll a[n],pos,c=0;
    ain(a,n);
    f(0,n-1)
    if(a[i]>a[i+1])    	
    	pos=i,c++;
    if(a[n-1]>a[0])
    	pos=n-1,c++;
    if(c==0)
    	cout<<"0";
    else if(c>1)
    	cout<<"-1";
    else
    	cout<<n-pos-1;
}

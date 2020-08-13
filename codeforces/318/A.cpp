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
    cin>>n>>k;
    if(n%2==0)
    	m=n/2;
    else
    	m=(n+1)/2;
    if(k>m)
    {
    	cout<<(k-m)*2<<endl;
    }
    else
    	cout<<((k)*2)-1<<endl;

}
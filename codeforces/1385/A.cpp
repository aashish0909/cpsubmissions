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
    int t;
    cin>>t;
    while(t--){
    	ll a[3];
    	ain(a,3);
    	sort(a,a+3);
    	if(a[1]!=a[2])
    		cout<<"NO"<<endl;
    	else
    		cout<<"YES"<<endl<<a[0]<<space<<a[0]<<space<<a[2]<<endl;
    }
}
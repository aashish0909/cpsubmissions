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
    int n;
    cin>>n;
    int a[n];
    int c1=0,z=0,z1=-1;
    ain(a,n);	
    f(0,n){
    	if(a[i]==1) {
    		c1++;
    		if(z>0)
    			z-=1;
    	}
    	else
    	{
    		z++;
    		if(z>z1)
    			z1=z;
    	}

    }
    cout<<c1+z1;

}

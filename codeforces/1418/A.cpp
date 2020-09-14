#include <bits/stdc++.h>
using namespace std;

using ll =                   long long int;
using pll =                  pair<ll, ll>;
#define endl                 "\n"
#define space                " "
#define TLE_na_ho            ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE             1024
#define MOD                  1000000007
#define pb                   push_back
#define fi                   first
#define se                   second
#define rep(i,a,n)           for(ll i=a;i<n;i++)
#define repe(i,a,n)          for(ll i=a;i<=n;i++)
#define repr(i,a,n)          for(ll i=a;i>=n;i--)
#define ain(arr,n)           for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n)          for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space

long long moduloMultiplication(long long a, 
                            long long b, 
                            long long mod) 
{ 
    long long res = 0; // Initialize result 
  
    // Update a if it is more than 
    // or equal to mod 
    a %= mod; 
  
    while (b) 
    { 
        // If b is odd, add a with result 
        if (b & 1) 
            res = (res + a) % mod; 
  
        // Here we assume that doing 2*a 
        // doesn't cause overflow 
        a = (2 * a) % mod; 
  
        b >>= 1; // b = b / 2 
    } 
  
    return res; 
} 

int main()
{
    TLE_na_ho;
    //READ THE QUESTION PROPERLY!!
    ll t;
    //t=1;
    cin>>t;
    while(t--){
    	ll x,y,k;
    	cin>>x>>y>>k;
    	ll total=k+(y*k)-1;
    	ll operations=ceil(((long double)total/(x-1)))+k;

    	cout<<operations<<endl;
    }

}

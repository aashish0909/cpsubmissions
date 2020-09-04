#include <bits/stdc++.h>
using namespace std;

using ll =                   long long int;
using pll =                  pair<ll, ll>;
#define endl                 "\n"
#define space                " "
#define TLE_na_ho            ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE             1024
#define MOD                  100000007
#define pb                   push_back
#define fi                   first
#define se                   second
#define f(a,n)               for(ll i=a;i<n;i++)
#define fe(a,n)              for(ll i=a;i<=n;i++)
#define fr(a,n)              for(ll i=a;i>=n;i--)
#define ain(arr,n)           for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n)          for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space


int main()
{
    TLE_na_ho;
    ll t;
    cin>>t;
    while(t--){
    	ll a,b,x,y,n;
    	cin>>a>>b>>x>>y>>n;
    	ll prod1,prod2;
    	ll a1,b1,n1=n,n2=n;
    	if(a-n1>=x)
    	{
    		a1=a-n1;
    		n1=0;
    	}
    	else{
    		a1=a-(a-x);
    		n1=n-(a-x);
    	}
    	b1=b-n1;

    	//cout<<a1<<space<<b1<<space<<t<<endl;
    	ll a2,b2;
    	prod1=a1*b1;
    	if(b-n2>=y)
    	{
    		b2=b-n2;
    		n2=0;
    	}
    	else{
    		b2=b-(b-y);
    		n2=n-(b-y);
    	}
    	a2=a-n2;
    	//cout<<a2<<space<<b2<<space<<t<<endl;
    	prod2=a2*b2;

    	if(n>((a-x)+(b-y)))
    		cout<<x*y<<endl;
    	else
    	cout<<min(prod1,prod2)<<endl;

    }

}

#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using pll = pair<ll, ll>;
#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i<=n;i++)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 400
#define push_back pb
#define first fi
#define second se

int main()
{
    time_t start, end;
    time(&start);
    TLE_na_ho;

    ll t;
    cin>>t;
    while(t--){
    	ll n;
    	cin>>n;
    	ll a[n];
    	cin>>a[0];
    	ll flag=0;
    	f(1,n){
    		cin>>a[i];
    		if(a[i]==a[i-1])
    			flag++;
    	}

    	if(flag==n-1)
    		cout<<n<<endl;
    	else
    		cout<<"1"<<endl;

    }

   
}

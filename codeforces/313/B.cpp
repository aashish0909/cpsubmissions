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
    string s;
    cin>>s;
    int len=s.length();
    int sum[len],count=0;sum[0]=0;
    f(1,len){
    	if(s[i]==s[i-1])
    		{
    			count++;
    			sum[i]=count;
    		}
    	else
    	{
    		sum[i]=count;
    	}

    }
    
    int queries;
    cin>>queries;
    while(queries--){
    	int l,r,count=0;
    	cin>>l>>r;
    	cout<<sum[r-1]-sum[l-1]<<endl;
    }

}

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
    int t;
    cin>>t;
    while(t--){
    	ll pos=0,neg=-100000000000,n;
    	cin>>n;
    	ll sum=0;
    	bool flag=false;
    	ll a[n];
    	cin>>a[0];
    	if(a[0]>0){
    		flag=false;
    		pos=a[0];
    	}
    	else{
    		flag=true;
    		neg=a[0];
    	}

    	sum+=a[0];
    	f(1,n)
    	{
    		cin>>a[i];
    		if(flag)
    		{
    			if(a[i]<0)
    			{
    				if(a[i]>neg){
    					sum+=a[i]-neg;
    					neg=a[i];
    				}

    			}

    			else{
    				sum+=a[i];
    				pos=a[i];
    				flag=!flag;
    			}
    		}

    		else{
    			if(a[i]>0)
    			{
    				if(a[i]>pos){
    					sum+=a[i]-pos;
    					pos=a[i];
    				}
    			}

    			else{
    				sum+=a[i];
    				neg=a[i];
    				flag=!flag;
    			}
    		}
    	}
    	cout<<sum<<endl;

    }

}

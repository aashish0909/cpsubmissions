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
    map<int,int>a1;
    map<int,int>a2;
    map<int,int>a3;
    f(0,n){
    	cin>>a[i];
    	a1[a[i]]++;
    }
    int x;
    f(0,n-1){
    	cin>>x;
    	a2[x]++;
    }
    f(0,n-2){
    	cin>>x;
    	a3[x]++;
    }

    f(0,n){
    	if(a1[a[i]]!=a2[a[i]])
    	{
    		cout<<a[i]<<endl;
    		break;
    	}
    }
    f(0,n){
    	if(a2[a[i]]!=a3[a[i]]){
    		cout<<a[i]<<endl;
    		break;
    	}
    }
}

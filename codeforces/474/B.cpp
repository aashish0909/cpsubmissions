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

int lb(int a[],int n,int s){
	int l=0,u=n-1,mid;
	while(l<=u){
		mid=u+(l-u)/2;
		if(s==a[mid] || (s>a[mid-1] && s<a[mid]))
			break;
		else if(s>a[mid])
			l=mid+1;
		else
			u=mid-1;

	}
	return mid;
}

int main()
{
    TLE_na_ho;
    int n;
    cin>>n;
    int a[n],temp[n];
    int f=0;
    f(0,n){
    	cin>>a[i];
    	f+=a[i];
    	temp[i]=f;
    }
    int q;
    cin>>q;
    while(q--){
    	int search;
    	cin>>search;
    	cout<<lb(temp,n,search)+1<<endl;
    }

}

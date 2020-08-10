#include <bits/stdc++.h> 
using namespace std; 

#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i<=n;i++)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space
#define ll long long int
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 400

int main() 
{

	int n,m;
	cin>>n>>m;
	int a[m];
	ain(a,m);

	sort(a,a+m);
	//aout(a,m);
	int min=10000;

	f(0,m-n+1){
		if(min>(a[i+n-1]-a[i]))
			min=a[i+n-1]-a[i];
	}

	cout<<min;

}
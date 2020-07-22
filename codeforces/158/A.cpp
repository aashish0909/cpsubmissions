#include <bits/stdc++.h> 
using namespace std; 

#define floop(a,n) for(int i=a;i<n;i++)
#define floop_equal(a,n) for(int i=a;i<=n;i++)
#define array_in(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define array_out(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]
#define ll long long int
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 400

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	array_in(a,n);
	int count=0;

	for(int i=0;i<n;i++)
	{
		if((a[i]>=a[k-1]) && a[i]!=0)
			count++;
	}

	cout<<count;
		

}
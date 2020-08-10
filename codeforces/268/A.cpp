#include <bits/stdc++.h> 
using namespace std; 

#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i<=n;i++)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]
#define ll long long int
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 400

int main() 
{
	int n;
	cin>>n;
	int a[n],b[n];
	f(0,n){
		cin>>a[i]>>b[i];
	}
int c=0;
	f(0,n){
		for(int j=0;j<n;j++){
			if((i!=j)&&(a[i]==b[j]))
				c++;
		}
	}

	cout<<c;

}
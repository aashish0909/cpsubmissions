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
	int t;
	cin>>n>>t;
	char a[n];
	ain(a,n);
	while(t--)
	{
		f(0,n-1)
		{
			if(a[i]=='B' && a[i+1]=='G')
			{
				char y=a[i];
				a[i]=a[i+1];
				a[i+1]=y;
				++i;
			}
		}
	}

	aout(a,n);

}
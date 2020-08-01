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



int main() 
{
	TLE_na_ho;
	int n;
	cin>>n;
	
	int arr[n];
	int sum=0;
	floop(0,n){
		cin>>arr[i];
		sum=sum+arr[i];
	}

	sort(arr,arr+n);
	int ans=0;

	int flag=0;
	for(int i=n-1;i>=0;i--)
	{

		if(ans>(sum-ans))
		{
			break;
		}

		else{

			ans=ans+arr[i];
			flag++;
		}

	}
cout<<flag;

}
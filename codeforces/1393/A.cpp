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


int ans(int n) 
{ 
    if(n%9==0)
    	return n/9;
    else
    	return (n/9)+1;
}

int main() 
{
	TLE_na_ho;

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%2==0)
			cout<<(n/2+1)<<endl;
		else
			cout<<((n+1)/2)<<endl;


	}

		


}
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
	int ans[3]={0};
	while(n--)
	{
		int a[3];
		floop(0,3){
			cin>>a[i];
			ans[i]+=a[i];
		}
	}
	floop(0,3)
	if(ans[i]!=0){
		cout<<"NO";
		break;
	}
	else{
		cout<<"YES";
		break;
	}

}
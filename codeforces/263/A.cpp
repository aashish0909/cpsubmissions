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
	int arr[5][5];
	int x,y;
	floop(0,5){
		for(int j=0;j<5;j++){
			cin>>arr[i][j];
			if(arr[i][j]==1)
			{
				x=i;
				y=j;
			}
		}
	}
	int ans=abs(x-2)+abs(y-2);
	cout<<ans;
}
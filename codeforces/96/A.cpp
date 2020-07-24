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
	string s;
	cin>>s;
	int l=s.length();
	int ans=0,temp=1;
	floop(1,l)
	{
		if(s[i]==s[i-1])
			++temp;
		else{
			ans=max(ans,temp);
			temp=1;
		}

	}
	ans=max(ans,temp);
	if(ans>=7)
		cout<<"YES";
	else
		cout<<"NO";

}
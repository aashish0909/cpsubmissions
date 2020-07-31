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
	string s;
	cin>>s;
	int l=s.length();
	string a="hello";
	int j=0;
	if(l<5)
	{
		cout<<"NO";
		goto end;
	}

	floop(0,l){
		if(s[i]==a[j])
		{
			j++;
		}
	}

	if(j==5)
		cout<<"YES";
	else
		cout<<"NO";




	end: {}

}
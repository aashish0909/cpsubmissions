#include <bits/stdc++.h> 
using namespace std; 

#define floop(a,n) for(int i=a;i<n;i++)
#define floop_equal(a,n) for(int i=a;i<=n;i++)
#define arr_in(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define arr_out(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]
#define ll long long int
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 400

int main(){
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin>>s;
	int length=s.length();
	if(length<=10)
		cout<<s<<endl;
	else
	{
		cout<<s[0]<<length-2<<s[length-1];
		cout<<endl;
	}
}

}
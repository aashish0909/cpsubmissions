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
	string a,b;
	cin>>a;
	cin>>b;
	int m;
	transform(a.begin(),a.end(),a.begin(),::tolower);

	transform(b.begin(),b.end(),b.begin(),::tolower);

	int x,y;
	m=a.length();
	floop(0,m){
		x=a[i]-'a';
		y=b[i]-'a';
		if(x>y){
			cout<<"1";
			goto end;
		}
		else if(x<y){
			cout<<"-1";
			goto end;
		}
		else
			continue;
	}
	cout<<"0";
	end: cout<<endl;

}
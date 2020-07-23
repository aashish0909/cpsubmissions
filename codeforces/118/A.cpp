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

int main(){
	string s;
	cin>>s;
	char a[200];
	int j=0;
	int l=s.length();
	transform(s.begin(),s.end(),s.begin(),::tolower);
	floop(0,l){
		if(s[i]=='a' || s[i]=='e' ||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
			continue;
		else
		{
			a[j]='.';
			a[j+1]=s[i];
			j=j+2;
		}
	}
	for(int i=0;i<j;i++)
		cout<<a[i];

}
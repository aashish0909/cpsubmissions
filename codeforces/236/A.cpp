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
	int ans=0;
	int l=s.length();
	bool array[26];
	memset(array,false,sizeof(array));
	floop(0,l){
		if(array[s[i]-'a']==false)
			array[s[i]-'a']=true;
	}

	floop(0,26){
	if(array[i]==true)
		ans++;
}
	if(ans%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";

}
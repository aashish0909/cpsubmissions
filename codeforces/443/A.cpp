#include <bits/stdc++.h> 
using namespace std; 

#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i<=n;i++)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space
#define ll long long int
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 400

int main() 
{

	bool ans[26];
	memset(ans,false,sizeof(ans));
	string s;
	cin.ignore();
	getline(cin,s);
	int l=s.length();
	f(0,l){

		if(isalpha(s[i]))
		{
			if(!ans[s[i]-'a'])
				ans[s[i]-'a']=true;
		}

	}
int c=0;
	f(0,26){
		if(ans[i]==true)
			c++;
	}

	cout<<c;

}
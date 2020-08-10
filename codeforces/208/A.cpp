#include <bits/stdc++.h> 
using namespace std; 

#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i<=n;i++)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]
#define ll long long int
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 400

int main() 
{string s;
	cin>>s;
	int flag=1;
	int l=s.length();
	f(0,l){
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
		{
			i=i+2;
			if(!flag)
				cout<<space;
		}
		else{
			flag=0;
			cout<<s[i];
		}
	}

}
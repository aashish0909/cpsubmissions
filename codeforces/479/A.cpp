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

	int a,b,c;
	cin>>a>>b>>c;
	int c1,c2,c3,c4,c5,c6;
	c1=(a*b)+c;
	c2=(a+b)*c;
	c3=a+(b*c);
	c4=a*(b+c);
	c5=a*b*c;
	c6=a+b+c;
	int ans=max(c1,max(c2,max(c3,max(c4,max(c5,c6)))));
	cout<<ans;

}
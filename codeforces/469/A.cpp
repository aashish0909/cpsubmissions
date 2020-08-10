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

	int n;
	cin>>n;
	int p;
	cin>>p;
	int x[p];
	ain(x,p);
	int q;
	cin>>q;
	int y[q];
	ain(y,q);
	bool ans[n];
	memset(ans,false,sizeof(ans));
	f(0,p){
			ans[x[i]-1]=true;
				}

				f(0,q){
			ans[y[i]-1]=true;
	}
	int flag=0;
	f(0,n){
		if(ans[i]==false){
			flag=1;
		}
	}
	if(flag==1)
		cout<<"Oh, my keyboard!";
	else
		cout<<"I become the guy.";

}
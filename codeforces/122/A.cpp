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

int lucky(int n){

	int a;

	if(n%4==0 || n%7==0)
	{
		return 1;
		goto end;
	}

		while(n!=0)
		{
			a=n%10;
			if(a==4 || a==7)
			{
				n=n/10;
			}

			else{
				return 0;
				goto end;
			}
		
	}

	return 1;
	end:{}
}

int main() 
{
	TLE_na_ho;
	int n;
	cin>>n;

	floop_equal(1,n){
		if(lucky(i)){
			if(n%i==0)
			{

	cout<<"YES";
	goto end;
			}

	}
}
	cout<<"NO";

	end: {}

}
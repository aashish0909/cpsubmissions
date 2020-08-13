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
{
    TLE_na_ho;

    ll x1,x2,y1,y2,a;
    cin>>x1>>y1>>x2>>y2;
    ll x3,x4,y3,y4,flag=1;
    if(x1==x2){
    	a=abs(y1-y2);
    	x3=x1+a;
    	x4=x1+a;
    	y3=y1;
    	y4=y2;
    }
    else if(y1==y2)
    {
    	a=abs(x1-x2);
    	y3=y1+a;
    	y4=y1+a;
    	x3=x1;
    	x4=x2;
    }
    else
    {
    	if(abs(x2-x1)==abs(y2-y1))
    	{
    		x3=x1;
    		x4=x2;
    		y4=y1;
    		y3=y2;
    	}
    	else
    		flag=0;
    }

    if(flag)
    	cout<<x3<<space<<y3<<space<<x4<<space<<y4;
    else
    	cout<<"-1";

}
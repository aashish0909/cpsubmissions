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
 

int operation(ll &r,ll &g,ll &b,ll &w){

	if(r!=0 && g!=0 &&b!=0)
	{
		r--;
		g--;
		b--;
		w+=3;
	}

	int e=0;
        if(r%2==0)
        	e++;
        if(b%2==0)
        	e++;
        if(g%2==0)
        	e++;
        if(w%2==0)
        	e++;

        return e;


}


int main() 
{
    TLE_na_ho;
    int t;
    cin>>t;
    while(t--)

    {
    	ll r,g,b,w;
        cin>>r>>g>>b>>w;
        int even=0,ans;
        if(r%2==0)
        	even++;
        if(b%2==0)
        	even++;
        if(g%2==0)
        	even++;
        if(w%2==0)
        	even++;
    
        if(even>=3){
        	cout<<"Yes"<<endl;
        	goto end;
        }
        else
        {
        	ans=operation(r,g,b,w);
        	if(ans>=3)
        		cout<<"Yes"<<endl;
        	else
        		cout<<"No"<<endl;
        }

        //cout<<r<<space<<g<<space<<b<<space<<w<<endl;
        end : {}
    }


}
#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using pll = pair<ll, ll>;
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 400
#define pb push_back
#define fi first
#define se second
#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i<=n;i++)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space


int main()
{
    TLE_na_ho;
    ll n,m;
    cin>>n>>m;
    char a[n][m];
    bool r[n],c[m];
    memset(r,true,sizeof(r));
    memset(c,true,sizeof(c));
    f(0,n)
    {
    	for(ll j=0;j<m;j++){
    		cin>>a[i][j];
    		if(a[i][j]=='S'){
    			r[i]=false;
    			c[j]=false;
    		}

    	}
    }

    //aout(r,n);
    //cout<<endl;
    //aout(c,m);

    ll ans=0,row=0,col=0;

    f(0,n)
    {
    	if(r[i])
    		row++;
    }
    f(0,m)
    {
    	if(c[i])
    		col++;
    }

    //cout<<endl<<row<<endl<<col;

    ans=(row*m) + (col*n) - (row*col);
    cout<<ans;
}

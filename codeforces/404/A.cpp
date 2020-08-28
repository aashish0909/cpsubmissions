#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using pll = pair<ll, ll>;
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 1024
#define MOD 1000000007
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
    int n;
    cin>>n;
    char a[n][n];
    bool ans[26];int count=0,c[26]={0};
    memset(ans,false,sizeof(ans));
    f(0,n)
    {
    	for(int j=0;j<n;j++)
    	{
    		cin>>a[i][j];
    		if(ans[a[i][j]-'a']==false)
    		{
    			ans[a[i][j]-'a']=true;
    			count++;
    		}

    		c[a[i][j]-'a']++;
    	}
    }

    if(count!=2)
    {
    	cout<<"NO";
    	return 0;
    }

    char m=a[0][0];

    f(0,n){
    	if(m!=a[i][i])
    	{
    		cout<<"NO";
    		return 0;
    	}
    	else if(a[i][n-i-1]!=m)
    	{
    		cout<<"NO";
    		return 0;
    	}
    }


    int x=0;
    f(0,26)
    {
    	if(c[i]==((2*n)-1))
    		x=1;
    }

    if(x!=1)
    {
    	cout<<"NO";
    	return 0;
    }

    cout<<"YES";
}

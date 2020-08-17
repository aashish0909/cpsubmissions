#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using pll = pair <string, ll>;
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 400
#define push_back pb
#define fi first
#define se second
#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i<=n;i++)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space

int bs(pll s[],string a,ll n){
	ll low=0,up=n-1,mid,ans;
	while(low<=up){
		mid=low+(up-low)/2;
		int res=0;
		if(s[mid].first==a)
			res=1;
		if(res==1)
			return s[mid].second;
		else if(s[mid].first>a)
			up=mid-1;
		else
			low=mid+1;
	}
	return -1;
}

int main()
{
    TLE_na_ho;
    ll n, m;
    cin >> n >> m;
    pll a[m];
    string b[m];
    f(0, m)
    {
        cin >> a[i].first >> b[i];
        a[i].second=i;
    }
    string c[n];
    f(0, n)
    cin >> c[i];

    sort(a,a+m);

    f(0,n){
    ll pos=bs(a,c[i],m);
    if(c[i].length()<=b[pos].length())
    	cout<<c[i]<<space;
    else
    	cout<<b[pos]<<space;
}



}

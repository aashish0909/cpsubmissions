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
    string s;
    cin>>s;
    ll k;
    cin>>k;
    ll w[26];
    ain(w,26);
    ll ans=0,max=w[0];
    f(1,26)
    if(w[i]>max)
    	max=w[i];
    f(0,s.length())
    {
    	ans+=(i+1)*(w[s[i]-'a']);
    }

    f(s.length(),s.length()+k){
    	ans+=(i+1)*max;
    }

    cout<<ans;

}

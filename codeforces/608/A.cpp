#include <bits/stdc++.h>
using namespace std;

using ll =                   long long int;
using pll =                  pair<ll, ll>;
using vll =                  vector<ll>;
#define endl                 "\n"
#define space                " "
#define TLE_na_ho            ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE             1024
#define MOD                  1000000007
#define pb                   push_back
#define fi                   first
#define se                   second
#define all(v)               v.begin(),v.end()
#define f(n)                 for(ll i=0;i<n;i++)
#define rep(i,a,n)           for(ll i=a;i<n;i++)
#define repe(i,a,n)          for(ll i=a;i<=n;i++)
#define repr(i,a,n)          for(ll i=a;i>=n;i--)
#define ain(arr,n)           for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n)          for(ll i1=0;i1<n;i1++ ) cout<<arr[i1].fi<<space<<arr[i1].se<<endl

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
}

void solve(){
	ll n,s;
	cin>>n>>s;
	vector<pair<ll,ll>> fp(n);
	for(auto &i :fp)
		cin>>i.fi>>i.se;
	sort(all(fp));
	reverse(all(fp));
	ll seconds=s-fp[0].fi;
	if(seconds<fp[0].se)
		seconds+=fp[0].se-seconds;
	//aout(fp,n);
	//cout<<endl;
	rep(i,1,n){
		seconds+=fp[i-1].fi-fp[i].fi;
		if(seconds<fp[i].se)
		{
			ll j=seconds;
			seconds+=fp[i].se-j;
		}
	}
	seconds+=fp[n-1].fi;
	cout<<seconds;
}

int main()
{
    TLE_na_ho;
    //READ THE QUESTION PROPERLY!!
    ll testcases;
    testcases=1;
   // cin>>testcases;
    while(testcases--){
        solve();
    }

}

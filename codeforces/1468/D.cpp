/*@author : ashnove*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define F first
#define S second
#define endl "\n"
#define nl cout<<endl;
#define pb push_back
#define f(i,a,b) for(ll i=a;i<b;i++)
#define Knucklehead ios_base::sync_with_stdio(false);cin.tie(NULL);
//#define mod 100000007
#define mat vector<vector<ll>>
mat cn(ll n, ll m){return vector< vector<ll> >(n, vector<ll>(m));}
bool compare(char &s1,char &s2){return s1 > s2;} 
bool sortmahstyle(const pair<ll,ll> &a,  const pair<ll,ll> &b) 
{ 
    if(a.first < b.first )
        return true;
    if( a.first==b.first && a.S != b.second )
       return true;
    return false;
}
//me
ll const mod = 1e9+7;
ll const inf = 1e18;
ll const maxn = 1e5+1;
   
void solve()
{      
      
      ll n,m,a,b; cin >> n >> m >> a >> b;

      if(a>b){
            a = n-a+1;
            b = n-b+1;
      }

      ll fire[m];
      f(i,0,m) cin >> fire[i];
      sort(fire, fire+m);

      ll maxTime = b-2;

      ll ind = upper_bound(fire, fire+m, maxTime) - fire;
      ind--;

      ll fire_cnt = b-a-1;
      ll timeBeforeCaught = b-2;
      map<ll,bool> active;
      ll ans = 0;
      for(ll i = ind; i>=0 ; i--){

            if( !active[fire[i]] && fire_cnt>0){
                  ans++;
                  timeBeforeCaught--;
                  fire_cnt--;
                  if(fire[i]>timeBeforeCaught)
                        active[fire[i]]=1;
            }
            if(fire_cnt<=0)break;
      }
      cout << ans << endl;
}     

int main() {
Knucklehead 
//*
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
/**/ 
        
          ll t;
          /*/t=1;
          /*/cin>>t;/**/
          f(testcases,0,t){
               //cout << "Case #" <<testcases+1<<": ";
               solve();
          }
 
 
    return 0;
}     
#include<bits/stdc++.h>
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long int
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("O3")
using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>//s.order_of_key(val) *s.find_by_order(ind)
using namespace std;
#define f(n) for(ll i=0;i<n;i++)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ld long double
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
#define endl "\n"
#define vll vector<ll>
#define vlll vector<vll>
#define all(x) x.begin(),x.end()
ll power(ll x, ll y, ll p) { 
    ll res = 1;    x = x % p;  
    while(y > 0) {
        if(y & 1) res = (res*x) % p; 
        y = y>>1;    x = (x*x) % p; 
    } return res; 
}
const int N=100005;
vector<bool>prime(N,1);
void sieve(int n) 
{ 
    
    for (int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
} 

inline void solve()
{
    string str;
    cin>>str;
    ll x=0,y=0;
    ll l=0,r=0,u=0,d=0;
    f(str.length())
    {
        if(str[i]=='L')
        l++;
        else if(str[i]=='R')
        r++;
        else if(str[i]=='U')
        u++;
        else
        d++;
    }
    if(str.length()==1)
    {
        x-=l;
        x+=r;
        y-=d;
        y+=u;
        cout<<x<<" "<<y<<endl; 
        return;
    }
    vector<pair<ll,ll>>vb;
    if(str[0]=='L') x--;
    else if(str[0]=='R')x++;
    else if(str[0]=='U')y++;
    else y--;
    for(int i=1;i<str.length();i++)
    {
        vb.pb({x,y});
        if(str[i]=='L') x--;
        else if(str[i]=='R')x++;
        else if(str[i]=='U')y++;
        else y--;
        
    }
    vb.pb({x,y});
    for(auto it: vb)
    {
        x=0,y=0;
        f(str.length())
        {
            
            if(str[i]=='L') {
                if(x-1==it.first and it.second==y)
                continue;
                x--;
            }
            else if(str[i]=='R'){
                if(x+1==it.first and it.second==y)
                continue;
                x++;
            }
            else if(str[i]=='U'){
                if(x==it.first and it.second==y+1)
                continue;
                y++;
            }
            else {
                if(x==it.first and it.second==y-1)
                continue;
                y--;
            }
            
        }
        //cout<<it.first<<" "<<it.second<<endl;
        
        if(x==0 and y==0)
        {
            cout<<it.first<<" "<<it.second<<endl;
            return;
        }
    }
    cout<<"0 0"<<endl;
    
}
int main()
{
    Imposter
    
    int t=1;
    
    cin>>t;
    while(t--)
    {
        solve();
        
    }
    return 0;
}
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
    ll c1,c2,c3;
    cin>>c1>>c2>>c3;
    ll a1,a2,a3,a4,a5;
    cin>>a1>>a2>>a3>>a4>>a5;
    if(c1+c2+c3>=(a1+a2+a3+a4+a5))
    {
        //a4 either in c1 or c3
        //a5 either in c2 or c3
        if(c1<a1 or c2<a2 or c3<a3)
        {
            cout<<"NO"<<endl;
            return;
        }
        c1-=a1,c2-=a2;
        c3-=a3;
        ll p=min(c1,a4);
        c1-=p;
        a4-=p;
        ll q=min(c2,a5);
        c2-=q;
        a5-=q;
        if(c3>=a4+a5)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    else
    cout<<"NO"<<endl;
    
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
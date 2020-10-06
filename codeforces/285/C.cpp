
/*

▀▀█▀▀ ▒█▀▀▀ ░█▀▀█ ▒█▀▄▀█ 　 ▒█▀▀▀█ ░█▀▀█ ▒█▄░▒█ ▀▀█▀▀ ▒█▀▀▀█ ▒█▀▀▀█ ▀█▀
░▒█░░ ▒█▀▀▀ ▒█▄▄█ ▒█▒█▒█ 　 ░▀▀▀▄▄ ▒█▄▄█ ▒█▒█▒█ ░▒█░░ ▒█░░▒█ ░▀▀▀▄▄ ▒█░
░▒█░░ ▒█▄▄▄ ▒█░▒█ ▒█░░▒█ 　 ▒█▄▄▄█ ▒█░▒█ ▒█░░▀█ ░▒█░░ ▒█▄▄▄█ ▒█▄▄▄█ ▄█▄

*/
#include <bits/stdc++.h>
using namespace std;

using   ll  =       long long int;
using   pll =       pair<ll, ll>;
using   vll =       vector<ll>;
#define endl        "\n"
#define space       " "
#define TLE_na_ho   ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE    1024
#define MOD         1000000007
#define pb          push_back
#define ff          first
#define ss          second
#define all(v)      v.begin(),v.end()
#define f(n)        for(ll i=0;i<n;i++)
#define rep(i,a,n)  for(ll i=a;i<n;i++)
#define repe(i,a,n) for(ll i=a;i<=n;i++)
#define repr(i,a,n) for(ll i=a;i>=n;i--)
#define ain(arr,n)  for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space

ll testcases;

int main()
{
    TLE_na_ho;
    //READ THE QUESTION PROPERLY!!
    ll n;
    cin >> n ;
    vll a;
    set<ll> done;
    f(n)
    {
        ll x;
        cin >> x;
        if(x <= n && x > 0)
        {
            if(done.find(x) == done.end())
            {
                done.insert(x);
            }
            else
                a.pb(x);
        }
        else
            a.pb(x);
    }
    sort(all(a));



    ll steps = 0;
    set<ll> np;
    repe(ins, 1, n)
    {
        if(done.find(ins) == done.end())
            np.insert(ins);
    }
    vll ::iterator it;
    it = a.begin();

    for(auto y : np)
    {
        steps += abs(y - *it);
        it++;
    }
    cout << steps;

}

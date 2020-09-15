#include <bits/stdc++.h>
using namespace std;

using ll =                   long long int;
using pll =                  pair<ll, ll>;
#define endl                 "\n"
#define space                " "
#define TLE_na_ho            ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE             1024
#define MOD                  1000000007
#define pb                   push_back
#define fi                   first
#define se                   second
#define rep(i,a,n)           for(ll i=a;i<n;i++)
#define repe(i,a,n)          for(ll i=a;i<=n;i++)
#define repr(i,a,n)          for(ll i=a;i>=n;i--)
#define ain(arr,n)           for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n)          for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space


int main()
{
    TLE_na_ho;
    //READ THE QUESTION PROPERLY!!
    ll t;
    t = 1;
    //cin>>t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        queue <ll> qu;
        set<ll> cnt;
        rep(i, 0, n)
        {
            ll x;
            cin >> x;

            if(cnt.find(x) == cnt.end())
            {
                if(qu.size() >= k)
                {
                    cnt.erase(qu.front());
                    qu.pop();
                }
                cnt.insert(x);
                qu.push(x);
            }
        }
        vector <ll> a;
        while (!qu.empty())
        {
            a.pb(qu.front());
            qu.pop();
        }
        cout << a.size() << endl;
        reverse(a.begin(), a.end());
        for(auto i : a)
            cout << i << space;
        cout << endl;



    }

}

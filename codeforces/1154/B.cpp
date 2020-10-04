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
#define fi          first
#define se          second
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
    testcases = 1;
    //cin>>testcases;
    while(testcases--)
    {
        ll n;
        cin >> n;
        vll s;
        f(n)
        {
            ll x;
            cin >> x;
            s.pb(x);
        }
        sort(all(s));
        s.resize(unique(s.begin(), s.end()) - s.begin());
        if(s.size() > 3)
            cout << -1;
        else if(s.size() == 3)
        {
            if(s[1] - s[0] == s[2] - s[1])
                cout << s[1] - s[0];
            else
                cout << -1;
        }
        else if(s.size() == 2)
        {
            if((s[0] + s[1]) % 2 == 0)
                cout << ((s[0] + s[1]) / 2) - s[0];
            else
                cout << s[1] - s[0];
        }
        else if(s.size() == 1)
            cout << 0;
    }

}

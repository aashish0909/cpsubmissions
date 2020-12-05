#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vll = vector<ll>;
ll const mod = 1e9 + 7;
#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define repr(i,a,n) for(ll i=a;i>=n;i--)
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    aashish_999;

    ll testcases = 1;
    //cin >> testcases;
    while(testcases--)
    {
        ll n;
        cin >> n;

        ll ans = -1;
        bool f = true;
        for(ll i = 2329089562801; i >= n; i -= 2)
        {
            f = true;
            for(ll j = n; j >= 2; j--)
            {

                if((i % j) != 1)
                {
                    f = false;
                    break;
                }
            }

            if(f)
            {
                ans = i;
                break;
            }
        }

        cout << ans << endl;
    }

}
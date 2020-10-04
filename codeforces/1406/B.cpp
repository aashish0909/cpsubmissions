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
bool abso(ll i, ll j)
{
    return (abs(i) > abs(j));
}

int main()
{
    TLE_na_ho;
    //READ THE QUESTION PROPERLY!!
    //testcases=1;
    cin >> testcases;
    while(testcases--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ain(a, n);
        ll pos = 0;
        f(n)
        if(a[i] > 0)
            pos++;

        sort(a, a + n, abso);
        //aout(a, n);
        ll ans = a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];

        if(pos > 0)
        {
            ans = a[0] * a[1] * a[2] * a[3] * a[4];
            rep(i, 5, n)
            {

                rep(j, 0, 5)
                {
                    ll temp = a[i];
                    rep(k, 0, 5)
                    {
                        if(k != j)
                            temp *= a[k];
                    }

                    ans = max(temp, ans);
                }
            }
        }
        cout << ans << endl;
    }

}

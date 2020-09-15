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
#define aout(arr,n)          for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]


int main()
{
    TLE_na_ho;
    //READ THE QUESTION PROPERLY!!
    ll t;
    //t=1;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string r[2];
        cin >> r[0] >> r[1];
        ll cnt = 0;
        bool f = 0;
        rep(i, 0, n)
        {

            if(r[f][i] > '2')
            {
                if(r[!f][i] <= '2')
                    break;
                else
                    f = !f;
            }
            ++cnt;

        }

        if(f == 1 && cnt == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

}

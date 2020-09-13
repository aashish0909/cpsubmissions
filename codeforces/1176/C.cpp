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
    ll n;
    cin >> n;
    ll f = 0, e = 0, fif = 0, si = 0, tt = 0,  a[n];
    ll seq = 0;
    rep(i, 0, n)
    {
        cin >> a[i];
        if(a[i] == 4)
        {
            f++;
        }
        else if(a[i] == 8)
        {
            if(f > 0)
            {
                e++;
                f--;
            }
        }
        else if(a[i] == 15)
        {
            if(e > 0)
            {
                fif++;
                e--;
            }
        }
        else if(a[i] == 16)
        {
            if(fif > 0)
            {
                si++;
                fif--;
            }
        }
        else if(a[i] == 23)
        {
            if(si > 0)
            {
                tt++;
                si--;
            }
        }
        else
        {
            if(tt > 0)
            {
                seq++;
                tt--;
            }
        }
    }


    cout << (n-(seq*6));

}

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
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll cnt = 0;
two :
        {
            while(n % 2 == 0)
            {
                cnt++;
                n /= 2;
            }
        }
three :
        {
            while(n % 3 == 0)
            {
                cnt++;
                n = 2 * n / 3;
            }
        }

        while(n % 5 == 0)
        {
            cnt++;
            n = 4 * n / 5;
        }

        if(n % 2 == 0)
            goto two;

        else if(n % 3 == 0)
            goto three;
        if(n == 1)
            cout << cnt << endl;
        else
            cout << "-1" << endl;
    }

}

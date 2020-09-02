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
#define f(a,n)               for(ll i=a;i<n;i++)
#define fe(a,n)              for(ll i=a;i<=n;i++)
#define fr(a,n)              for(ll i=a;i>=n;i--)
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
        ll a[n], even = 0, odd = 0;
        f(0, n)
        {
            cin >> a[i];
            if(a[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        if((even % 2 != odd % 2))
            cout << "NO" << endl;
        else
        {
            if(even % 2 == 0)
                cout << "YES" << endl;
            else
            {
                int flag = 0;
                sort(a, a + n);
                f(0, n - 1)
                {
                    for(ll j = i + 1; j < n; j++)
                        if(abs(a[i] - a[j]) == 1 && (a[j] % 2 != a[i] % 2))
                            flag = 1;
                }
                if(flag == 1)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }

}

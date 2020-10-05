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
    //testcases=1;
    cin >> testcases;
    while(testcases--)
    {
        ll n, m;
        cin >> n >> m;
        ll a[n][m];
        rep(i, 0, n)
        {
            rep(j, 0, m)
            {
                cin >> a[i][j];
            }
        }

        /*if(n == 1 && m == 1)
        {
            cout << "0" << endl;
            continue;
        }*/

        ll steps = 0;
        rep(i, 0, n / 2)
        {
            ll sum = 0;
            rep(j, 0, m / 2)
            {
                vll median;
                median.pb(a[i][j]);
                median.pb(a[n - i - 1][j]);
                median.pb(a[i][m - j - 1]);
                median.pb(a[n - i - 1][m - j - 1]);
                sort(all(median));
                ll med1 = abs(median[1] - median[0]) + abs(median[1] - median[2]) + abs(median[1] - median[3]);
                ll med2 = abs(median[2] - median[0]) + abs(median[2] - median[1]) + abs(median[2] - median[3]);
                //cout << sum << " ###" << i << " ###" << j << endl;
                //cout << abs(a[i][j] - sum) + abs([n - i - 1][j] - sum) + abs(sum - a[i][m - 1 - j]) + abs(sum - a[n - 1 - i][m - j - 1]);
                steps += min(med1, med2);
                //cout << "MEDIAN : " << median[1] << space << median[2] << endl;
                median.clear();
            }
        }
        //cout << "## " << steps << endl;
        if(n % 2 != 0)
        {

            rep(j, 0, m / 2)
            {
                ll sum = 0;
                sum = (a[n / 2][j] + a[n / 2][m - j - 1]) / 2;
                steps += abs(sum - a[n / 2][j]) + abs(sum - a[n / 2][m - j - 1]);
            }
        }
        if(m % 2 != 0)
        {

            rep(j, 0, n / 2)
            {
                ll sum = 0;
                sum = (a[j][m / 2] + a[n - j - 1][m / 2]) / 2;
                steps += abs(sum - a[j][m / 2]) + abs(sum - a[n - j - 1][m / 2]);
            }
        }
        cout << steps << endl;
    }

}

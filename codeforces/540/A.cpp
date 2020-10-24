#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using pll = pair<ll, ll>;
using vll = vector<ll>;
#define endl "\n"
#define space " "
#define TLE_na_ho                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define MAX_SIZE 1024
#define MOD 1000000007
#define pb push_back
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define f(n) for (ll i = 0; i < n; i++)
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define repe(i, a, n) for (ll i = a; i <= n; i++)
#define repr(i, a, n) for (ll i = a; i >= n; i--)
#define ain(arr, n)               \
    for (ll i1 = 0; i1 < n; i1++) \
    cin >> arr[i1]
#define aout(arr, n)              \
    for (ll i1 = 0; i1 < n; i1++) \
    cout << arr[i1] << space

ll testcases;

int main()
{
    TLE_na_ho;
    //READ THE QUESTION PROPERLY!!
    testcases = 1;
    //cin>>testcases;
    while (testcases--)
    {
        ll n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        ll steps = 0;
        ll a1, b1;
        f(n)
        {
            a1 = (a[i] % 10) - '0', b1 = (b[i] % 10) - '0';
            steps += min(abs(a1 - b1), (10 - abs(a1 - b1)));
        }
        cout << steps;
    }
}
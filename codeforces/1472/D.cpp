#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vll = vector<ll>;
ll const mod = 1e9 + 7;
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define f(n) for(ll i=0;i<n;i++)
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define repe(i,a,n) for(ll i=a;i<=n;i++)
#define repr(i,a,n) for(ll i=a;i>=n;i--)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<" "
#define ordered_set tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ain(a, n);
    ll pt1, pt2;

    vll even, odd;

    f(n)
    {
        if (a[i] & 1)
            odd.pb(a[i]);
        else
            even.pb(a[i]);
    }

    sort(all(odd));
    sort(all(even));

    pt1 = (ll)odd.size() - 1;
    pt2 = (ll)even.size() - 1;

    ll alice = 0, bob = 0;
    bool f = true;

    while (pt1 >= 0 || pt2 >= 0)
    {
        if (f)
        {
            if (pt2 >= 0)
            {
                if (pt1 >= 0) {
                    if (odd[pt1] <= even[pt2]) {
                        alice += even[pt2];
                        --pt2;
                    }
                    else
                        --pt1;
                }
                else
                {
                    alice += even[pt2];
                    --pt2;
                }
            }
            else
                --pt1;

            f = !f;
        }
        else
        {
            if (pt1 >= 0)
            {
                if (pt2 >= 0) {
                    if (even[pt2] <= odd[pt1]) {
                        //cout << odd[pt1] << " # ";
                        bob += odd[pt1];
                        --pt1;
                    }
                    else
                        --pt2;
                }
                else {
                    bob += odd[pt1];
                    --pt1;
                }
            }
            else
                --pt2;
            f = !f;
        }

    }
    // cout << alice << " " << bob << endl;
    if (alice > bob)
        cout << "Alice" << endl;
    else if (alice == bob)
        cout << "Tie" << endl;
    else
        cout << "Bob" << endl;
}

int main()
{
    aashish_999;

    ll testcases = 1;
    cin >> testcases;
    while (testcases--)
    {
        solve();
    }
}
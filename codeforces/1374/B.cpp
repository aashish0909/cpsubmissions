#include <bits/stdc++.h>
using namespace std;

#define int long long
int const mod = 1e9 + 7;
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define f(n) for(int i=0;i<n;i++)
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repe(i,a,n) for(int i=a;i<=n;i++)
#define repr(i,a,n) for(int i=a;i>=n;i--)
#define ain(arr,n) for(int i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(int i1=0;i1<n;i1++ ) cout<<arr[i1]<<" "
#define ordered_set tree<int, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    if (n == 1) {
        cout << 0 << endl;
        return;
    }

    int count = -1;
    bool f = true;
    int r = n;
    int count2 = 0, count3 = 0;
    while (r % 2 == 0) {
        r /= 2;
        count2++;
    }
    r = n;
    while (r % 3 == 0) {
        r /= 3;
        ++count3;
    }
    while (r > 1 && r % 2 == 0)
        r /= 2;
    if (r != 1 || count3 == 0 || count2 > count3) {
        cout << -1 << endl;
        return;
    }

    count = count3 + (count3 - count2);

    cout << count << endl;
}

int32_t main()
{
    aashish_999;

    int testcases = 1;
    cin >> testcases;
    while (testcases--)
    {
        solve();
    }
}

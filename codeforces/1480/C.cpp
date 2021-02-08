#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

int a[100002];

void query(int mid, int &n) {
    if (1 <= mid && mid <= n) {
        cout << "? " << mid << endl;
        cout.flush();
        cin >> a[mid];
    }
}

void solve()
{
    // Understand the problem.
    // Devise a plan.
    // Carry out the plan.
    // Look back
    int n;
    cin >> n;
    int l = 1, r = n;
    a[0] = a[n + 1] = n + 1;
    while (l < r) {
        int mid = (l + r) / 2;
        query(mid, n);
        query(mid + 1, n);
        if (a[mid] < a[mid + 1])
            r = mid;
        else
            l = mid + 1;
    }


    cout << "! " << l << endl;
    cout.flush();

}

int32_t main()
{
    aashish_999;

    int testcases = 1;
    //cin >> testcases;
    while (testcases--)
    {
        solve();
    }
}
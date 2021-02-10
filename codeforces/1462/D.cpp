#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    // Understand the problem.
    // Devise a plan.
    // Carry out the plan.
    // Look back.
    int n;
    cin >> n;
    int a[n], sum = 0;
    for (int i = 0; i < n; i++) cin >> a[i], sum += a[i];

    for (int i = n; i >= 1; i--) {

        if (sum % i != 0) continue;

        int temp = sum / i;
        int s = 0;
        bool flag = true;
        for (int j = 0; j < n; j++) {
            s += a[j];
            if (s > temp) {
                flag = false;
                break;
            }
            else if (s == temp)
                s = 0;
        }

        if (flag) {
            cout << n - i << endl;
            return;
        }

    }
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
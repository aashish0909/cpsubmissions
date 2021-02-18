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
    vector<int> a(n);
    for (auto &i : a) cin >> i;

    sort(a.begin(), a.end());

    int left = 0, right = n - 1;

    vector<int> ans;

    while (left <= right) {
        ans.push_back(a[left]);
        if (left < right)
            ans.push_back(a[right]);
        left++;
        right--;
    }

    reverse(ans.begin(), ans.end());

    for (auto i : ans) cout << i << " ";
    cout << endl;
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
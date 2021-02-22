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
	string a, b;
	cin >> a >> b;
	vector<int> ans;
	for (int i = 0; i < n; i++)
		if (a[i] != b[i]) {
			ans.push_back(i + 1);
			ans.push_back(1);
			ans.push_back(i + 1);

		}

	cout << ans.size() << " ";
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
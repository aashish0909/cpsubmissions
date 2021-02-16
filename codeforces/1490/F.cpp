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
	map<int, int> cnt;
	for (auto i : a) cnt[i]++;

	int ans = 0;

	vector<int> pos;
	for (auto [k, v] : cnt)
		pos.push_back(v);

	sort(pos.begin(), pos.end());
	reverse(pos.begin(), pos.end());

	for (int i = 0; i < pos.size(); i++) {
		ans = max(ans, pos[i] * (i + 1));
	}

	cout << n - ans << endl;
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
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	set<int> dis;

	for (auto &i : a)
		cin >> i, dis.insert(i);

	if ((int)dis.size() > k) {
		cout << -1 << endl;
		return;
	}

	int mx = n * k;
	cout << mx << endl;

	vector<int> ans;
	for (auto i : dis)
		ans.push_back(i);
	while ((int)ans.size() < k)
		ans.push_back(1);

	while (n--) {
		for (auto i : ans)
			cout << i << " ";
	}
	cout << endl;
}

int32_t main()
{
	aashish_999;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int testcases = 1;
	cin >> testcases;
	while (testcases--)
	{
		solve();
	}
}
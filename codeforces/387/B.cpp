#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	set<int> s;
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	int cnt = 0;

	for (auto &i : a) cin >> i;
	for (auto &i : b) cin >> i;

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	bool taken[m], done[n];
	memset(taken, false, sizeof taken);
	memset(done, false, sizeof done);

	for (int i = 0; i < n; i++) {
		bool flag = false;
		for (int j = 0; j < m; j++) {
			if (b[j] >= a[i] && taken[j] == false) {
				flag = true;
				taken[j] = true;
				done[i] = true;
				break;
			}
		}

		if (!done[i]) ++cnt;
	}

	cout << cnt;
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
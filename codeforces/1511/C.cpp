#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly]

	int n, q;
	cin >> n >> q;
	vector<int> a(n);
	map<int, int> pos;
	for (auto &i : a) cin >> i;
	for (int i = n - 1; i >= 0; i--) {
		pos[a[i]] = i + 1;
	}

	while (q--) {
		int x;
		cin >> x;
		cout << pos[x] << " ";
		int prev = pos[x];
		pos[x] = 1;
		for (int i = 1; i <= 50; i++) {
			if (pos[i] == 0 || i == x)
				continue;
			if (pos[i] <= prev)
				++pos[i];
		}
	}
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
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	int n, m;
	cin >> n >> m;
	int r, c;
	cin >> r >> c;

	vector<pair<int, int>> a = {{1, 1}, {n, 1}, {1, m}, {n, m}};

	int mx = 0;
	pair<int, int> pos1 = {r, c}, pos2 = {r, c};
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			int dist;
			if (i == j)
				dist = abs(r - a[i].first) + abs(c - a[i].second);
			else
				dist = abs(r - a[i].first) + abs(c - a[i].second) + abs(a[i].first - a[j].first) + abs(a[i].second - a[j].second);
			if (dist > mx) {
				pos1 = {a[i].first, a[i].second};
				pos2 = {a[j].first, a[j].second};
				mx = dist;
			}
		}
	}

	cout << pos1.first << ' ' << pos1.second << ' ' << pos2.first << ' ' << pos2.second << endl;
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
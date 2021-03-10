#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

vector<int> gr[101], visited(101), dist(101);
vector<int> a(102);
int n;

void dfs(int k, int d) {
	visited[k] = 1;
	dist[k] = d;

	for (auto i : gr[k]) {
		if (!visited[i])
			dfs(i, d + 1);
	}
}

void solve()
{
	//read the question properly
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		gr[i].push_back(a[i]);
	}

	vector<int> cnt;
	bool f = true;

	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= n; j++)
			visited[j] = 0, dist[j] = 0;

		dfs(a[i], 1);
		if (!visited[i]) {
			f = false;
			break;
		}
		cnt.push_back((dist[i] % 2 ? dist[i] : dist[i] / 2));
	}
	if (!f)
		cout << -1;
	else {
		int ans = 1;
		for (auto i : cnt)
			ans = (ans * i) / __gcd(ans, i);
		cout << ans;
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
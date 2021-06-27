#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)
#define f first
#define s second

bool mystyle(const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b) {
	return a.s.f < b.s.f;
}

void solve()
{
	//read the question properly

	int n;
	cin >> n;

	int cnt = 0;

	vector <pair<int, pair<long double, long double>>> a(n);

	for (auto &i : a) {
		cin >> i.f >> i.s.f >> i.s.s;

		if (i.f == 2)
			i.s.s = i.s.s - 0.1;
		if (i.f == 3)
			i.s.f += 0.1;
		if (i.f == 4)
			i.s.f += 0.1, i.s.s -= 0.1;
	}

	sort(a.begin(), a.end(), mystyle);
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++)
			if (a[i].s.s >= a[j].s.f)
				++cnt;
	}

	cout << cnt << endl;
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
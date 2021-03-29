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
	multiset<int> st;
	for (auto &i : a)
		cin >> i, st.insert(i);
	int cnt = 0;

	sort(a.begin(), a.end());
	for (int i = n - 1; i >= 0; i--) {
		if (st.empty())
			break;
		if (st.find(a[i]) == st.end())
			continue;
		auto m = st.find(a[i]);
		int sum = *m;
		// cout << sum << " ";
		st.erase(m);

		int rem = k - sum;
		int j = 1;
		while (j < rem)
			j *= 2;
		// cout << a[i] << " ";
		// cout << '#' << rem << " #" << j << " ";
		for (; j >= 1; j /= 2) {
			while (st.find(j) != st.end() && sum + j <= k)
			{
				auto it = st.find(j);
				st.erase(it);
				sum += j;
				// cout << j << " ";
			}
		}
		// cout << endl;
		++cnt;
	}
	// cout << endl;
	cout << cnt << endl;
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
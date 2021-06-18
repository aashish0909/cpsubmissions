#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	int n;
	cin >> n;
	vector<int> a(n);
	for (auto &i : a) cin >> i;
	int startpos = (n + 1) / 2 - 1;
	for (int i = startpos; i >= 0; i--) {
		if ((i + 1) % 2 != 0)
			swap(a[i], a[n - i - 1]);
	}

	for (auto i : a) cout << i << " ";
	cout << endl;
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
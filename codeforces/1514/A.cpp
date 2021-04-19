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
	bool flag = false;
	for (auto i : a) {
		if (floor(sqrt(i)) != ceil(sqrt(i)))
			flag = true;
	}

	if (flag) cout << "YES" << endl;
	else cout << "NO" << endl;
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
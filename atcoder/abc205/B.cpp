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
	set<int> s;
	for (auto &i : a) cin >> i, s.insert(i);


	bool flag = true;
	for (int i = 1; i <= n; i++) {
		if (s.find(i) == s.end()) {
			flag = false;
			break;
		}
	}

	if (flag) cout << "Yes";
	else cout << "No";
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
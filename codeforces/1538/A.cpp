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

	int pos1, pos2;

	pos1 = min_element(a.begin(), a.end()) - a.begin();
	pos2 = max_element(a.begin(), a.end()) - a.begin();
	++pos1;
	++pos2;
	int step1 = pos1 + n - pos2 + 1;
	int step2 = max(pos2, pos1);
	int step3 = max(n - pos2 + 1, n - pos1 + 1);
	int step4 = pos2 + n - pos1 + 1;
	// cout << step1 << ' ' << step2 << ' ' << step3 << ' ' << step4 << endl;
	cout << min({step1, step2, step3, step4});
	cout << endl;
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
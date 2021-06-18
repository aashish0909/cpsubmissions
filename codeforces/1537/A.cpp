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
	int sum = 0;
	vector<int> a(n);
	for (auto &i : a) cin >> i, sum += i;
	if (n - sum <= 0)
		cout << abs(n - sum) << endl;
	else {
		cout << 1 << endl;
	}
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
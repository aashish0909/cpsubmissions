#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	int a, b, w;
	cin >> a >> b >> w;
	w *= 1000;
	int mi = 1e9, mx = 0;
	for (int i = 1; i <= 1000000; i++) {
		if (a * i <= w && b * i >= w)
			mi = min(mi, i), mx = max(mx, i);
	}

	if (mx == 0)
		cout << "UNSATISFIABLE";
	else cout << mi << " " << mx;
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
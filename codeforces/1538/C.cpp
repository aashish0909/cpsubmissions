#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	int n, l, r;
	cin >> n >> l >> r;
	vector<int> a(n);
	for (auto &i : a) cin >> i;
	sort(a.begin(), a.end());
	int low = 0, high = n - 1;
	int total = 0;
	while (low <= high) {
		if (a[low] + a[high] < l)
			total += (high - low), ++low;
		else --high;
	}
	low = 0;
	high = n - 1;
	int lessthanr = 0;
	while (low <= high)
	{
		if (a[low] + a[high] <= r)
			lessthanr += (high - low), ++low;
		else --high;
	}

	total += (n * (n - 1) / 2) - lessthanr;

	cout << (n * (n - 1) / 2) - total << endl;


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
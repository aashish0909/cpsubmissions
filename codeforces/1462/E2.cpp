#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

const int N = 300001;
const int mod = 1000000007;
int fact[N], invfact[N];

int power(int a, int b) {
	int res = 1;
	if (a == 0)
		return 0;
	a %= mod;
	while (b > 0) {
		if (b & 1)
			res = (res * a) % mod;
		b /= 2;
		a = (a * a) % mod;
	}

	return res;
}

void calcfact() {
	fact[0] = invfact[0] = 1;
	for (int i = 1; i < N; i++) {
		fact[i] = (fact[i - 1] * i) % mod;
		invfact[i] = power(fact[i], mod - 2);
	}
}

int ncr(int n, int r) {
	if (r > n)
		return 0;
	return ((fact[n] * invfact[r]) % mod * (invfact[n - r]) % mod);
}

void solve()
{
	// Understand the problem.
	// Devise a plan.
	// Carry out the plan.
	// Look back.

	int n, m, k;
	cin >> n >> m >> k;
	vector<int> a(n);
	for (auto &x : a)
		cin >> x;
	sort(a.begin(), a.end());
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int left = i, right = n - 1, pos = i;

		while (left <= right) {
			int mid = (left + right) / 2;
			if (a[mid] - a[i] <= k) {
				left = mid + 1, pos = left;
			}
			else
				right = mid - 1;
		}
		int total = pos - i - 1;
		// cerr << a[i] << " " << total << endl;
		ans = (ans + ncr(total, m - 1)) % mod;

	}

	cout << ans << endl;
}

int32_t main()
{
	aashish_999;
	calcfact();
	int testcases = 1;
	cin >> testcases;
	int c = 1;
	while (testcases--)
	{
		// cerr << "case #" << c++ << endl;
		solve();
	}
}
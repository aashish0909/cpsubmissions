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
	map<int, int> cnt;
	int cntn = 0, cntp = 0, cntz = 0;
	vector<int> neg, pos;
	for (auto &i : a) {
		cin >> i;
		cnt[i]++;
		if (i <= 0) {
			++cntn;
			neg.push_back(i);
		}
		else {
			++cntp;
			pos.push_back(i);
		}
	}

	int ans = 0;
	ans += cntn;
	bool inc1 = true;
	if (neg.size() == 0) {
		cout << 1 << endl;
		return;
	}
	if (pos.size() == 0) {
		cout << ans << endl;
		return;
	}
	int mndiff = abs(neg[0] - pos[0]);
	sort(neg.begin(), neg.end());
	sort(pos.begin(), pos.end());
	for (int i = 1; i < neg.size(); i++) {
		// cout << '#' << mndiff << " " << a[i] << ' ' << a[i - 1] << " ";
		mndiff = min(mndiff, abs(neg[i] - neg[i - 1]));
	}

	if (pos.size() > 0 && mndiff >= pos[0]) ++ans;

	cout << ans << endl;
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
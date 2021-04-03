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
	string a, b;
	cin >> a >> b;
	vector<int> oo(n), oz(n), ao(n), az(n);
	oo[0] = (a[0] - '0' ? 1 : 0);
	oz[0] = (a[0] - '0' ? 0 : 1);
	ao[0] = (b[0] - '0' ? 1 : 0);
	az[0] = (b[0] - '0' ? 0 : 1);
	for (int i = 1; i < n; i++) {
		if (a[i] == '1') {
			oo[i] = oo[i - 1] + 1;
			oz[i] = oz[i - 1];
		}
		else {
			oz[i] = oz[i - 1] + 1;
			oo[i] = oo[i - 1];
		}
		if (b[i] == '1') {
			ao[i] = ao[i - 1] + 1;
			az[i] = az[i - 1];
		}
		else {
			az[i] = az[i - 1] + 1;
			ao[i] = ao[i - 1];
		}
	}
	vector<int> equals;
	for (int i = n - 1; i >= 0; i--) {
		if (oo[i] == oz[i])
			equals.push_back(i);
	}
	sort(equals.begin(), equals.end());
	reverse(equals.begin(), equals.end());
	int it = 0;
	int i = n - 1;
	bool f = true;
	bool sw = false;
	
	while (i >= 0) {
		if (sw) {
			swap(oz[i], oo[i]);
			// swap(az[i], ao[i]);
		}
		if (oz[i] != az[i] || oo[i] != ao[i]) {
			if (it < equals.size() && equals[it] >= i) {
				it++;
				sw = !sw;
				swap(oz[i], oo[i]);
			}
		}
		// cout << a << endl;
		// cout << "#" << i << endl;
		// for (auto i : oz)
		// 	cout << i;
		// cout << endl;
		// for (auto i : oo)
		// 	cout << i;
		// cout << endl;
		--i;
	}

	for (int i = 0; i < n; i++) {
		if (oz[i] != az[i] && oo[i] != ao[i]) {
			f = false;
			break;
		}
	}
	cout << (f ? "YES" : "NO") << endl;
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
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question	 properly
	int n;
	cin >> n;
	string s;
	cin >> s;
	if (s[0] == '0' || s[n - 1] == '0' || n % 2 == 1) {
		cout << "NO" << endl;
		return;
	}
	int count_zero = 0;
	for (int i = 0; i < n; i++)
		if (s[i] == '0')
			++count_zero;
	if (count_zero % 2) {
		cout << "NO" << endl;
		return;
	}

	string a, b;
	a = b = "";
	int cntone = n - count_zero;
	int half = cntone / 2;
	int oa = 0, ob = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			if (cntone > half) {
				a += '(', b += '(';
				++oa, ++ob;
			}
			else {
				a += ')', b += ')';
				--oa, --ob;
			}
			--cntone;
		}
		else {
			if (oa > ob) {
				a += ')';
				b += '(';
				--oa, ++ob;
			}
			else {
				a += '(';
				b += ')';
				++oa, --ob;
			}
		}
	}

	cout << "YES" << endl;
	cout << a << endl << b << endl;
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
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	int a, b, c;
	cin >> a >> b >> c;

	if (a == b) {
		cout << '=';
		return;
	}

	if (abs(a) == abs(b)) {
		if (c % 2 == 0) {
			cout << '=';
			return;
		}
		else {
			if (a < 0)
				cout << '<';
			else cout << '>';
			return;
		}
	}

	if (a >= 0 && b >= 0) {
		cout << (a > b ? '>' : '<');
		return;
	}
	else if (a < 0 && b < 0) {
		if (c % 2 != 0)
			cout << (a > b ? '>' : '<');
		else
			cout << (abs(a) > abs(b) ? '>' : '<');
		return;
	}
	else {
		if (c % 2 == 0) {
			cout << (abs(a) > abs(b) ? '>' : '<');
			return;
		}
		else {
			cout << (a > b ? '>' : '<');
			return;
		}
	}

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
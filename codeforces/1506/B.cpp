#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;

	int a[n];
	int f = 0;

	a[n - 1] = n - 1;
	for (int i = n - 2; i >= 0; i--) {
		if (s[i + 1] == '.' && s[i] == '.' )
			a[i] = a[i + 1];
		else  a[i] = i;
	}
	bool flag = false;
	int ans =  0;

	for (int i = 0; i < n; i++) {

		if (flag == 1) f++;
		if (s[i] == '*' && (f == k || !flag)) {
			ans++;
			s[i] = '#';
			flag = true;
			f = 0;
			continue;
		}
		else if (flag && s[i] == '.' && s[i - 1] == '*') {
			int cnt = a[i] - i + 1;
			if ( f + cnt > k ) {
				ans++;
				f = 1;
				s[i - 1] = '#';
				flag = 1;
			}
		}
	}
	n-=1;
	while (n >= 0) {
		if (s[n] == '#')break;
		else if (s[n] == '*') {
			ans++; break;
		}

		n--;
	}
	cout << ans << endl;
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